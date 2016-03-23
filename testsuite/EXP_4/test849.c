
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

int8_t x1 = INT8_MIN;
static int64_t x4 = -15507265LL;
int16_t x13 = -1;
int32_t x23 = INT32_MAX;
int16_t x24 = INT16_MIN;
int32_t x31 = 440;
int32_t t7 = 9012;
int16_t x42 = -1;
static volatile int16_t x43 = INT16_MIN;
uint16_t x47 = 15U;
static int16_t x49 = 3;
uint64_t x66 = 180084728738925LLU;
static int16_t x67 = INT16_MIN;
int8_t x76 = INT8_MIN;
int32_t t14 = -174254289;
static int32_t t15 = -53447;
int16_t x81 = INT16_MAX;
int32_t x82 = -1;
static volatile uint16_t x87 = 70U;
static uint64_t x88 = UINT64_MAX;
uint32_t x101 = 960739819U;
volatile int32_t t21 = -20892134;
volatile uint64_t x109 = UINT64_MAX;
volatile int32_t t22 = 60;
int8_t x117 = INT8_MAX;
uint16_t x118 = 496U;
int16_t x132 = -1;
uint32_t x147 = 1554472642U;
int16_t x150 = -1;
int8_t x163 = INT8_MAX;
static int64_t x165 = -793271000103632406LL;
static uint32_t x167 = UINT32_MAX;
static uint32_t x169 = 127U;
static int8_t x171 = INT8_MAX;
int64_t x173 = INT64_MIN;
static volatile int64_t x182 = INT64_MAX;
volatile int8_t x183 = -1;
int32_t t36 = -9741804;
uint16_t x186 = 4U;
volatile int32_t t39 = 32896570;
volatile int16_t x212 = -1;
int16_t x222 = INT16_MAX;
volatile uint16_t x225 = 0U;
uint64_t x231 = UINT64_MAX;
int32_t t44 = 98;
int16_t x242 = INT16_MAX;
static uint8_t x245 = UINT8_MAX;
int8_t x257 = INT8_MIN;
uint8_t x259 = 1U;
int64_t x261 = INT64_MAX;
volatile int32_t t49 = 19316;
uint16_t x267 = 7597U;
int8_t x269 = -1;
uint16_t x271 = 91U;
int16_t x272 = 63;
volatile uint32_t x273 = UINT32_MAX;
volatile uint32_t x274 = 10135U;
int16_t x276 = -1;
static int16_t x278 = INT16_MIN;
uint8_t x280 = 13U;
int32_t t54 = 20;
uint8_t x286 = UINT8_MAX;
volatile uint32_t x298 = 352299663U;
volatile int8_t x303 = INT8_MIN;
int32_t x306 = -1;
int32_t x307 = INT32_MIN;
uint16_t x308 = 57U;
uint32_t x334 = 5257U;
uint32_t x341 = UINT32_MAX;
static int16_t x356 = INT16_MIN;
int32_t t70 = 25581472;
static volatile int64_t x369 = INT64_MIN;
int32_t t71 = -515546;
static int16_t x374 = INT16_MAX;
volatile int32_t x375 = -5883;
volatile int32_t t72 = 115034143;
volatile int32_t t75 = -3089287;
int32_t x404 = INT32_MAX;
static int8_t x414 = 1;
static int64_t x416 = INT64_MIN;
int16_t x420 = 2575;
uint16_t x421 = 12U;
int64_t x424 = INT64_MAX;
uint64_t x431 = 230038997761458643LLU;
uint32_t x440 = UINT32_MAX;
volatile int32_t t84 = -644;
uint8_t x442 = UINT8_MAX;
int32_t x447 = INT32_MIN;
static volatile int32_t t87 = -61;
uint8_t x454 = 14U;
volatile int16_t x464 = INT16_MIN;
int8_t x472 = 22;
volatile int32_t x474 = INT32_MAX;
static int32_t x484 = 49493589;
int32_t t93 = -305918;
volatile int32_t t94 = -100423;
static int32_t t95 = 3947206;
int32_t x498 = INT32_MAX;
uint64_t x500 = 80LLU;
static volatile int32_t t96 = -248302725;
int16_t x501 = INT16_MAX;
static volatile int32_t t97 = 28;
volatile int32_t t98 = 39245228;
static uint32_t x510 = 491542308U;
static volatile uint64_t x512 = 182469571418036LLU;
static int64_t x513 = INT64_MIN;
static int8_t x515 = INT8_MIN;
uint8_t x524 = UINT8_MAX;
int16_t x538 = INT16_MAX;
uint16_t x546 = UINT16_MAX;
static volatile int16_t x549 = INT16_MIN;
uint16_t x550 = UINT16_MAX;
static volatile int32_t t107 = -146;
static int32_t x555 = INT32_MAX;
static volatile int64_t x557 = 80895690LL;
int32_t x558 = -1;
volatile uint32_t x562 = 368U;
int8_t x567 = INT8_MIN;
int16_t x569 = INT16_MIN;
uint16_t x572 = UINT16_MAX;
volatile int32_t t113 = -174623284;
int16_t x578 = 1120;
static int32_t t114 = 3;
uint64_t x581 = 0LLU;
static volatile int32_t x584 = INT32_MAX;
uint64_t x587 = 1713365882LLU;
static volatile int16_t x588 = 12;
int8_t x589 = -14;
volatile int32_t t117 = 10477;
static uint64_t x605 = 1240404903533LLU;
volatile int32_t t122 = 203;
uint32_t x627 = 63693583U;
volatile int8_t x633 = INT8_MAX;
volatile int32_t t125 = 97967145;
uint16_t x643 = UINT16_MAX;
uint16_t x653 = 7U;
int8_t x656 = INT8_MIN;
uint32_t x657 = 5607696U;
uint32_t x658 = UINT32_MAX;
static uint32_t x669 = 1704539455U;
static int64_t x676 = -644685981759432052LL;
volatile int8_t x684 = INT8_MAX;
uint32_t x691 = 1395989257U;
int16_t x692 = INT16_MAX;
static int16_t x695 = -1;
int8_t x699 = 19;
volatile int32_t t137 = -386;
int32_t x714 = -1;
volatile int16_t x723 = 1335;
int32_t t141 = -11;
static uint64_t x727 = 223730940626114719LLU;
int32_t t142 = -3746533;
int16_t x729 = -1;
static volatile uint8_t x734 = UINT8_MAX;
static int32_t x736 = 4702539;
volatile int32_t t144 = 1;
volatile int32_t x737 = INT32_MIN;
volatile int64_t x739 = INT64_MIN;
static volatile int16_t x742 = 222;
static volatile int32_t t147 = 60;
static int8_t x753 = 5;
static volatile int64_t x760 = -8385393040865LL;
uint64_t x765 = UINT64_MAX;
uint16_t x768 = 19U;
int8_t x773 = -1;
int64_t x779 = -1LL;
static int32_t t152 = 0;
int32_t t159 = -41981155;
volatile int32_t t161 = 11722;
static uint32_t x829 = 13192708U;
int8_t x831 = 1;
int32_t x832 = 42510368;
uint8_t x836 = UINT8_MAX;
int32_t x845 = INT32_MIN;
int8_t x846 = INT8_MAX;
int32_t t168 = -18;
int32_t t170 = 3271;
uint64_t x886 = UINT64_MAX;
static int16_t x893 = -1;
int32_t x899 = -345511242;
int32_t x901 = -2136502;
int64_t x909 = INT64_MIN;
volatile int16_t x928 = INT16_MAX;
uint32_t x931 = 3129964U;
uint16_t x932 = 12070U;
uint64_t x933 = 30283764116052LLU;
int32_t t182 = 146435007;
int16_t x958 = INT16_MIN;
static int16_t x969 = INT16_MIN;
int32_t x972 = -43964;
static uint32_t x976 = UINT32_MAX;
int64_t x979 = INT64_MAX;
int32_t t188 = -414;
static volatile uint8_t x995 = 1U;
static uint8_t x998 = 113U;
int64_t x1000 = INT64_MIN;
int32_t x1001 = 45;
int16_t x1002 = INT16_MAX;
int32_t x1004 = INT32_MIN;
volatile uint8_t x1008 = UINT8_MAX;
static int64_t x1009 = 40390LL;
int32_t x1010 = INT32_MAX;
int64_t x1011 = 12688279LL;
static int64_t x1013 = INT64_MIN;
static int32_t t197 = -4139;
int32_t t198 = 1283353;


void f0(void) {
    	static uint64_t x2 = 8130170926258LLU;
	static int32_t x3 = 4905;
	volatile int32_t t0 = 12;

    t0 = (x1>(x2%(x3%x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x9 = -7;
	volatile uint16_t x10 = 889U;
	static int16_t x11 = -219;
	uint8_t x12 = UINT8_MAX;
	volatile int32_t t1 = 430467;

    t1 = (x9>(x10%(x11%x12)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x14 = -1691;
	uint16_t x15 = UINT16_MAX;
	uint32_t x16 = 1293915423U;
	static int32_t t2 = 1;

    t2 = (x13>(x14%(x15%x16)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x17 = -1;
	uint32_t x18 = 120U;
	int64_t x19 = INT64_MIN;
	volatile int64_t x20 = INT64_MAX;
	int32_t t3 = 1361;

    t3 = (x17>(x18%(x19%x20)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x21 = -1;
	int32_t x22 = INT32_MIN;
	volatile int32_t t4 = -649;

    t4 = (x21>(x22%(x23%x24)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x25 = INT64_MIN;
	static volatile uint64_t x26 = 1633471212869524000LLU;
	uint64_t x27 = 66062372189LLU;
	int8_t x28 = INT8_MAX;
	volatile int32_t t5 = -1621628;

    t5 = (x25>(x26%(x27%x28)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x29 = -1;
	int64_t x30 = -1LL;
	uint32_t x32 = 189444815U;
	int32_t t6 = 18680;

    t6 = (x29>(x30%(x31%x32)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x33 = UINT16_MAX;
	int32_t x34 = INT32_MIN;
	uint32_t x35 = 1U;
	int32_t x36 = INT32_MIN;

    t7 = (x33>(x34%(x35%x36)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x37 = INT64_MIN;
	int8_t x38 = INT8_MIN;
	int8_t x39 = 59;
	int8_t x40 = INT8_MIN;
	int32_t t8 = -663;

    t8 = (x37>(x38%(x39%x40)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x41 = -1LL;
	static int32_t x44 = INT32_MIN;
	int32_t t9 = -1;

    t9 = (x41>(x42%(x43%x44)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = 4126685494745LL;
	int8_t x46 = INT8_MIN;
	uint64_t x48 = 29726511936948LLU;
	int32_t t10 = -60;

    t10 = (x45>(x46%(x47%x48)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x50 = INT16_MIN;
	uint8_t x51 = UINT8_MAX;
	static uint64_t x52 = UINT64_MAX;
	volatile int32_t t11 = 2555;

    t11 = (x49>(x50%(x51%x52)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x61 = -1LL;
	int64_t x62 = -4062415417562868199LL;
	static volatile int32_t x63 = -1;
	uint8_t x64 = UINT8_MAX;
	int32_t t12 = -3526;

    t12 = (x61>(x62%(x63%x64)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x65 = -211;
	int32_t x68 = 1727247;
	volatile int32_t t13 = -7;

    t13 = (x65>(x66%(x67%x68)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x73 = INT64_MIN;
	int8_t x74 = INT8_MIN;
	int64_t x75 = -1LL;

    t14 = (x73>(x74%(x75%x76)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x77 = -7403;
	int64_t x78 = -1LL;
	uint8_t x79 = 9U;
	int16_t x80 = INT16_MIN;

    t15 = (x77>(x78%(x79%x80)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x83 = -16801;
	static volatile int32_t x84 = 4606;
	int32_t t16 = -5;

    t16 = (x81>(x82%(x83%x84)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x85 = INT8_MIN;
	uint32_t x86 = 1U;
	volatile int32_t t17 = 2978016;

    t17 = (x85>(x86%(x87%x88)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x89 = INT8_MIN;
	int32_t x90 = -46746368;
	static int64_t x91 = -2255017411335940LL;
	uint8_t x92 = UINT8_MAX;
	int32_t t18 = 119775245;

    t18 = (x89>(x90%(x91%x92)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x97 = INT64_MIN;
	static int32_t x98 = INT32_MIN;
	static int16_t x99 = INT16_MIN;
	int8_t x100 = 13;
	volatile int32_t t19 = 40533698;

    t19 = (x97>(x98%(x99%x100)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x102 = INT8_MIN;
	int32_t x103 = INT32_MIN;
	int32_t x104 = INT32_MAX;
	int32_t t20 = -39;

    t20 = (x101>(x102%(x103%x104)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x105 = 4580U;
	int16_t x106 = -1;
	uint32_t x107 = 890U;
	int64_t x108 = -9521730084LL;

    t21 = (x105>(x106%(x107%x108)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x110 = UINT32_MAX;
	int64_t x111 = INT64_MAX;
	static int16_t x112 = INT16_MIN;

    t22 = (x109>(x110%(x111%x112)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x119 = 67662U;
	uint32_t x120 = 71354610U;
	volatile int32_t t23 = 496;

    t23 = (x117>(x118%(x119%x120)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x125 = -5;
	uint64_t x126 = 8703340243159LLU;
	static uint16_t x127 = UINT16_MAX;
	volatile uint64_t x128 = UINT64_MAX;
	static int32_t t24 = 114;

    t24 = (x125>(x126%(x127%x128)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x129 = 28;
	int64_t x130 = 0LL;
	uint64_t x131 = 478312741396LLU;
	static int32_t t25 = -5574219;

    t25 = (x129>(x130%(x131%x132)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x137 = 680865468U;
	int32_t x138 = INT32_MIN;
	int64_t x139 = INT64_MIN;
	volatile uint8_t x140 = UINT8_MAX;
	int32_t t26 = -21656;

    t26 = (x137>(x138%(x139%x140)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x145 = -1963726LL;
	volatile int32_t x146 = INT32_MAX;
	int32_t x148 = -1;
	static int32_t t27 = 1;

    t27 = (x145>(x146%(x147%x148)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x149 = INT16_MAX;
	static uint32_t x151 = 1U;
	int32_t x152 = -79550;
	static volatile int32_t t28 = 6626747;

    t28 = (x149>(x150%(x151%x152)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x153 = -4;
	int16_t x154 = 1;
	int32_t x155 = -1;
	int8_t x156 = INT8_MIN;
	int32_t t29 = 12;

    t29 = (x153>(x154%(x155%x156)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x157 = 16;
	int64_t x158 = INT64_MIN;
	uint16_t x159 = 1U;
	int16_t x160 = 9;
	volatile int32_t t30 = -92;

    t30 = (x157>(x158%(x159%x160)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x161 = -1242266485LL;
	uint16_t x162 = 16055U;
	int16_t x164 = INT16_MIN;
	volatile int32_t t31 = -131531054;

    t31 = (x161>(x162%(x163%x164)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x166 = INT16_MIN;
	int64_t x168 = INT64_MIN;
	static volatile int32_t t32 = 87;

    t32 = (x165>(x166%(x167%x168)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x170 = -130719LL;
	uint16_t x172 = 6622U;
	int32_t t33 = 233;

    t33 = (x169>(x170%(x171%x172)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x174 = 0;
	uint16_t x175 = UINT16_MAX;
	volatile uint8_t x176 = 4U;
	static volatile int32_t t34 = 7346;

    t34 = (x173>(x174%(x175%x176)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x177 = 4;
	static int8_t x178 = INT8_MAX;
	volatile int16_t x179 = -36;
	static volatile int64_t x180 = INT64_MAX;
	int32_t t35 = -1;

    t35 = (x177>(x178%(x179%x180)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x181 = INT8_MIN;
	int8_t x184 = INT8_MIN;

    t36 = (x181>(x182%(x183%x184)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x185 = INT32_MAX;
	static uint64_t x187 = UINT64_MAX;
	int16_t x188 = INT16_MIN;
	static volatile int32_t t37 = 14733;

    t37 = (x185>(x186%(x187%x188)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x197 = 11U;
	int16_t x198 = INT16_MAX;
	int32_t x199 = INT32_MAX;
	volatile int8_t x200 = INT8_MIN;
	static int32_t t38 = 11;

    t38 = (x197>(x198%(x199%x200)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x205 = -9854749617LL;
	static int16_t x206 = INT16_MAX;
	uint16_t x207 = 15U;
	int32_t x208 = INT32_MIN;

    t39 = (x205>(x206%(x207%x208)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x209 = INT64_MAX;
	uint8_t x210 = 60U;
	uint32_t x211 = 62424617U;
	static volatile int32_t t40 = -323825;

    t40 = (x209>(x210%(x211%x212)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x213 = INT32_MIN;
	int8_t x214 = -1;
	uint16_t x215 = UINT16_MAX;
	static int64_t x216 = INT64_MIN;
	int32_t t41 = 311;

    t41 = (x213>(x214%(x215%x216)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x221 = 3577U;
	volatile uint64_t x223 = 45363497983841LLU;
	int32_t x224 = INT32_MIN;
	int32_t t42 = 813021999;

    t42 = (x221>(x222%(x223%x224)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x226 = 761727969U;
	int8_t x227 = INT8_MIN;
	int8_t x228 = 26;
	int32_t t43 = 535;

    t43 = (x225>(x226%(x227%x228)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x229 = 27U;
	uint32_t x230 = 18U;
	uint8_t x232 = 125U;

    t44 = (x229>(x230%(x231%x232)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x233 = INT64_MIN;
	volatile int16_t x234 = INT16_MIN;
	int8_t x235 = INT8_MIN;
	uint64_t x236 = UINT64_MAX;
	static volatile int32_t t45 = 887508;

    t45 = (x233>(x234%(x235%x236)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x241 = UINT64_MAX;
	uint16_t x243 = 12U;
	int64_t x244 = -815426244221666LL;
	volatile int32_t t46 = 169920523;

    t46 = (x241>(x242%(x243%x244)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x246 = INT64_MAX;
	static int16_t x247 = INT16_MIN;
	int64_t x248 = -4052632833LL;
	static volatile int32_t t47 = -1632;

    t47 = (x245>(x246%(x247%x248)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x258 = INT8_MIN;
	int8_t x260 = INT8_MIN;
	volatile int32_t t48 = 18;

    t48 = (x257>(x258%(x259%x260)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x262 = INT16_MAX;
	uint8_t x263 = 87U;
	uint32_t x264 = 708096963U;

    t49 = (x261>(x262%(x263%x264)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x265 = 746806U;
	uint32_t x266 = 311729U;
	volatile int8_t x268 = INT8_MIN;
	int32_t t50 = -340;

    t50 = (x265>(x266%(x267%x268)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x270 = INT32_MIN;
	volatile int32_t t51 = 60182;

    t51 = (x269>(x270%(x271%x272)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x275 = 505901857678032678LLU;
	int32_t t52 = 324;

    t52 = (x273>(x274%(x275%x276)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x277 = UINT64_MAX;
	int32_t x279 = INT32_MIN;
	volatile int32_t t53 = 250;

    t53 = (x277>(x278%(x279%x280)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x281 = INT32_MIN;
	uint16_t x282 = 2U;
	int64_t x283 = -1LL;
	uint64_t x284 = 2395529664507462006LLU;

    t54 = (x281>(x282%(x283%x284)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x285 = 3218;
	int64_t x287 = -1LL;
	uint32_t x288 = UINT32_MAX;
	int32_t t55 = 136328;

    t55 = (x285>(x286%(x287%x288)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x289 = -1523116519097096705LL;
	uint64_t x290 = UINT64_MAX;
	uint32_t x291 = UINT32_MAX;
	uint64_t x292 = 5340958750LLU;
	static int32_t t56 = -409004160;

    t56 = (x289>(x290%(x291%x292)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x293 = INT16_MIN;
	volatile int8_t x294 = INT8_MIN;
	volatile int64_t x295 = -1LL;
	uint16_t x296 = 3U;
	volatile int32_t t57 = 1287;

    t57 = (x293>(x294%(x295%x296)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x297 = 3;
	static int16_t x299 = 14085;
	int16_t x300 = INT16_MAX;
	int32_t t58 = -103733839;

    t58 = (x297>(x298%(x299%x300)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x301 = INT32_MAX;
	static volatile int16_t x302 = INT16_MIN;
	int64_t x304 = INT64_MIN;
	volatile int32_t t59 = -1510;

    t59 = (x301>(x302%(x303%x304)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x305 = INT8_MIN;
	int32_t t60 = 52347827;

    t60 = (x305>(x306%(x307%x308)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x309 = 5185855806192985LLU;
	uint32_t x310 = 434856301U;
	int16_t x311 = INT16_MAX;
	volatile int32_t x312 = 412059;
	volatile int32_t t61 = 822212;

    t61 = (x309>(x310%(x311%x312)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint32_t x321 = UINT32_MAX;
	int16_t x322 = 2;
	static int8_t x323 = INT8_MAX;
	volatile int8_t x324 = INT8_MIN;
	static volatile int32_t t62 = 2643;

    t62 = (x321>(x322%(x323%x324)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x325 = -1;
	volatile uint8_t x326 = UINT8_MAX;
	uint8_t x327 = 19U;
	uint64_t x328 = 16379LLU;
	volatile int32_t t63 = 0;

    t63 = (x325>(x326%(x327%x328)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x329 = INT32_MAX;
	static int32_t x330 = 300;
	volatile uint32_t x331 = 973U;
	int16_t x332 = INT16_MAX;
	int32_t t64 = -848081247;

    t64 = (x329>(x330%(x331%x332)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x333 = 214610159142470488LLU;
	static uint32_t x335 = 200525498U;
	int8_t x336 = INT8_MAX;
	volatile int32_t t65 = 115842047;

    t65 = (x333>(x334%(x335%x336)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x342 = 15038LL;
	int64_t x343 = -1176967LL;
	int16_t x344 = INT16_MIN;
	static int32_t t66 = -13395;

    t66 = (x341>(x342%(x343%x344)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x349 = INT8_MAX;
	int8_t x350 = -1;
	uint64_t x351 = 6347745925LLU;
	static volatile uint32_t x352 = 57U;
	int32_t t67 = 3216777;

    t67 = (x349>(x350%(x351%x352)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x353 = 199U;
	static int16_t x354 = -4;
	volatile uint8_t x355 = 108U;
	int32_t t68 = 0;

    t68 = (x353>(x354%(x355%x356)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x357 = -1;
	volatile int8_t x358 = -1;
	int32_t x359 = INT32_MIN;
	uint8_t x360 = UINT8_MAX;
	volatile int32_t t69 = -67044003;

    t69 = (x357>(x358%(x359%x360)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x365 = -3;
	int64_t x366 = INT64_MIN;
	volatile uint16_t x367 = 8U;
	uint16_t x368 = 149U;

    t70 = (x365>(x366%(x367%x368)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x370 = 81395U;
	volatile int64_t x371 = INT64_MAX;
	static volatile int64_t x372 = INT64_MIN;

    t71 = (x369>(x370%(x371%x372)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x373 = INT16_MAX;
	uint16_t x376 = 2063U;

    t72 = (x373>(x374%(x375%x376)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x385 = INT32_MAX;
	static uint32_t x386 = 2288U;
	static volatile int64_t x387 = 128861448LL;
	static int8_t x388 = INT8_MIN;
	static volatile int32_t t73 = -43;

    t73 = (x385>(x386%(x387%x388)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x389 = INT8_MAX;
	int16_t x390 = 81;
	uint16_t x391 = UINT16_MAX;
	static volatile uint16_t x392 = 2U;
	volatile int32_t t74 = 14;

    t74 = (x389>(x390%(x391%x392)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x393 = -23;
	int64_t x394 = INT64_MIN;
	volatile int64_t x395 = INT64_MAX;
	uint64_t x396 = UINT64_MAX;

    t75 = (x393>(x394%(x395%x396)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x397 = UINT64_MAX;
	int64_t x398 = INT64_MIN;
	uint16_t x399 = UINT16_MAX;
	int32_t x400 = -464102;
	volatile int32_t t76 = -27146407;

    t76 = (x397>(x398%(x399%x400)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x401 = 1;
	int8_t x402 = INT8_MAX;
	int8_t x403 = -1;
	int32_t t77 = -1;

    t77 = (x401>(x402%(x403%x404)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x409 = INT32_MIN;
	uint16_t x410 = 11U;
	static uint8_t x411 = 1U;
	uint32_t x412 = 111593772U;
	int32_t t78 = 759627998;

    t78 = (x409>(x410%(x411%x412)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x413 = UINT16_MAX;
	volatile uint16_t x415 = 2181U;
	volatile int32_t t79 = 32;

    t79 = (x413>(x414%(x415%x416)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x417 = 31U;
	uint16_t x418 = 2U;
	int16_t x419 = -104;
	int32_t t80 = 106456190;

    t80 = (x417>(x418%(x419%x420)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x422 = 7391U;
	volatile uint8_t x423 = 9U;
	volatile int32_t t81 = -18990158;

    t81 = (x421>(x422%(x423%x424)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x425 = UINT8_MAX;
	volatile uint16_t x426 = 4827U;
	int32_t x427 = -10;
	int16_t x428 = INT16_MIN;
	int32_t t82 = -383;

    t82 = (x425>(x426%(x427%x428)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x429 = -1LL;
	int16_t x430 = INT16_MIN;
	int64_t x432 = INT64_MAX;
	int32_t t83 = 1069048826;

    t83 = (x429>(x430%(x431%x432)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x437 = 2;
	uint32_t x438 = UINT32_MAX;
	int64_t x439 = INT64_MIN;

    t84 = (x437>(x438%(x439%x440)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x441 = -1LL;
	int8_t x443 = INT8_MAX;
	int64_t x444 = -1905430396017LL;
	int32_t t85 = -636;

    t85 = (x441>(x442%(x443%x444)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x445 = INT64_MAX;
	int64_t x446 = 1LL;
	volatile uint8_t x448 = UINT8_MAX;
	int32_t t86 = -241;

    t86 = (x445>(x446%(x447%x448)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int8_t x449 = -1;
	static uint16_t x450 = 184U;
	int16_t x451 = -1;
	int64_t x452 = 3773087LL;

    t87 = (x449>(x450%(x451%x452)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x453 = UINT16_MAX;
	static int16_t x455 = -3210;
	volatile int64_t x456 = INT64_MAX;
	volatile int32_t t88 = -184;

    t88 = (x453>(x454%(x455%x456)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x461 = -1;
	volatile uint32_t x462 = 31964U;
	uint32_t x463 = 3388U;
	int32_t t89 = 0;

    t89 = (x461>(x462%(x463%x464)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x469 = -505774650LL;
	static uint16_t x470 = UINT16_MAX;
	static int16_t x471 = 3261;
	int32_t t90 = -808;

    t90 = (x469>(x470%(x471%x472)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x473 = 1463U;
	volatile uint64_t x475 = UINT64_MAX;
	volatile uint64_t x476 = 63488207LLU;
	int32_t t91 = -841846497;

    t91 = (x473>(x474%(x475%x476)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x477 = 126U;
	static int8_t x478 = -8;
	uint32_t x479 = 225545U;
	uint32_t x480 = 635U;
	volatile int32_t t92 = 2;

    t92 = (x477>(x478%(x479%x480)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int8_t x481 = INT8_MIN;
	int64_t x482 = INT64_MIN;
	int16_t x483 = 48;

    t93 = (x481>(x482%(x483%x484)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x489 = -1;
	int16_t x490 = -1;
	static int8_t x491 = INT8_MIN;
	int64_t x492 = INT64_MAX;

    t94 = (x489>(x490%(x491%x492)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x493 = INT32_MIN;
	int32_t x494 = INT32_MIN;
	int32_t x495 = INT32_MIN;
	uint16_t x496 = 24U;

    t95 = (x493>(x494%(x495%x496)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x497 = INT64_MIN;
	int16_t x499 = -1;

    t96 = (x497>(x498%(x499%x500)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x502 = INT32_MIN;
	static volatile int64_t x503 = INT64_MIN;
	int32_t x504 = 689;

    t97 = (x501>(x502%(x503%x504)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x505 = INT8_MIN;
	volatile int32_t x506 = INT32_MAX;
	uint64_t x507 = UINT64_MAX;
	uint32_t x508 = 353U;

    t98 = (x505>(x506%(x507%x508)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x509 = 0;
	static int32_t x511 = -962;
	int32_t t99 = 354;

    t99 = (x509>(x510%(x511%x512)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x514 = -5449;
	volatile uint32_t x516 = 12597U;
	volatile int32_t t100 = -155;

    t100 = (x513>(x514%(x515%x516)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int32_t x517 = -1;
	volatile uint16_t x518 = 3U;
	int16_t x519 = 5;
	static int8_t x520 = INT8_MIN;
	int32_t t101 = 1026140;

    t101 = (x517>(x518%(x519%x520)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x521 = INT32_MIN;
	uint8_t x522 = 17U;
	int32_t x523 = INT32_MIN;
	int32_t t102 = 83503567;

    t102 = (x521>(x522%(x523%x524)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x533 = INT8_MIN;
	uint32_t x534 = 32U;
	int64_t x535 = 340145572263117LL;
	uint64_t x536 = UINT64_MAX;
	volatile int32_t t103 = 1;

    t103 = (x533>(x534%(x535%x536)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x537 = -1;
	static uint8_t x539 = 3U;
	int16_t x540 = INT16_MIN;
	volatile int32_t t104 = -35588;

    t104 = (x537>(x538%(x539%x540)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile uint64_t x541 = UINT64_MAX;
	volatile int8_t x542 = INT8_MIN;
	uint64_t x543 = 851LLU;
	int8_t x544 = -1;
	volatile int32_t t105 = -1;

    t105 = (x541>(x542%(x543%x544)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x545 = 4871624;
	uint64_t x547 = 2LLU;
	int8_t x548 = INT8_MIN;
	volatile int32_t t106 = 36557;

    t106 = (x545>(x546%(x547%x548)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x551 = INT8_MIN;
	int32_t x552 = -14495;

    t107 = (x549>(x550%(x551%x552)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x553 = INT32_MIN;
	volatile int64_t x554 = -1151LL;
	uint32_t x556 = 804U;
	volatile int32_t t108 = 8781;

    t108 = (x553>(x554%(x555%x556)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x559 = 318LLU;
	int32_t x560 = -1;
	volatile int32_t t109 = -74;

    t109 = (x557>(x558%(x559%x560)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x561 = 6;
	static uint16_t x563 = 1U;
	volatile uint8_t x564 = 3U;
	static volatile int32_t t110 = -15546410;

    t110 = (x561>(x562%(x563%x564)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x565 = -41;
	static int16_t x566 = -1;
	int64_t x568 = INT64_MIN;
	int32_t t111 = -3504760;

    t111 = (x565>(x566%(x567%x568)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x570 = INT32_MAX;
	uint64_t x571 = 5106720719LLU;
	static int32_t t112 = -125125593;

    t112 = (x569>(x570%(x571%x572)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x573 = 4U;
	int32_t x574 = -322510;
	uint32_t x575 = 2U;
	static int32_t x576 = -1;

    t113 = (x573>(x574%(x575%x576)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x577 = 6260U;
	int64_t x579 = -6149LL;
	static uint32_t x580 = 53835U;

    t114 = (x577>(x578%(x579%x580)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x582 = INT16_MIN;
	uint64_t x583 = 230834LLU;
	int32_t t115 = 5;

    t115 = (x581>(x582%(x583%x584)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x585 = UINT32_MAX;
	uint64_t x586 = 6081597686658443803LLU;
	volatile int32_t t116 = 0;

    t116 = (x585>(x586%(x587%x588)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x590 = -150105;
	int8_t x591 = -51;
	uint32_t x592 = UINT32_MAX;

    t117 = (x589>(x590%(x591%x592)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x593 = INT16_MAX;
	int32_t x594 = INT32_MAX;
	int16_t x595 = INT16_MIN;
	uint32_t x596 = 387U;
	int32_t t118 = 1960;

    t118 = (x593>(x594%(x595%x596)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x597 = INT8_MAX;
	static int32_t x598 = INT32_MIN;
	uint8_t x599 = UINT8_MAX;
	int32_t x600 = INT32_MAX;
	volatile int32_t t119 = -1137;

    t119 = (x597>(x598%(x599%x600)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x606 = 467012207U;
	static int32_t x607 = -1;
	uint32_t x608 = 307567U;
	int32_t t120 = 60604;

    t120 = (x605>(x606%(x607%x608)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int32_t x609 = INT32_MIN;
	int8_t x610 = INT8_MIN;
	uint64_t x611 = 9173LLU;
	static int8_t x612 = INT8_MIN;
	volatile int32_t t121 = -4647528;

    t121 = (x609>(x610%(x611%x612)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x617 = INT8_MIN;
	volatile int16_t x618 = INT16_MIN;
	int32_t x619 = -118689000;
	volatile uint64_t x620 = 388399LLU;

    t122 = (x617>(x618%(x619%x620)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x625 = 1291U;
	static uint64_t x626 = 1563046814LLU;
	int32_t x628 = INT32_MAX;
	volatile int32_t t123 = -20525386;

    t123 = (x625>(x626%(x627%x628)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x629 = 10432720U;
	volatile int32_t x630 = INT32_MAX;
	int32_t x631 = INT32_MAX;
	uint32_t x632 = UINT32_MAX;
	int32_t t124 = -413;

    t124 = (x629>(x630%(x631%x632)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x634 = UINT8_MAX;
	int16_t x635 = -2;
	uint64_t x636 = 22588429LLU;

    t125 = (x633>(x634%(x635%x636)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x637 = 0U;
	int16_t x638 = 299;
	static volatile int8_t x639 = INT8_MIN;
	int16_t x640 = INT16_MIN;
	volatile int32_t t126 = 1915;

    t126 = (x637>(x638%(x639%x640)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x641 = INT64_MIN;
	int32_t x642 = -514367576;
	int16_t x644 = INT16_MIN;
	volatile int32_t t127 = 896870;

    t127 = (x641>(x642%(x643%x644)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x649 = -5;
	volatile uint32_t x650 = 282862U;
	int64_t x651 = INT64_MIN;
	volatile uint16_t x652 = UINT16_MAX;
	volatile int32_t t128 = -5088333;

    t128 = (x649>(x650%(x651%x652)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x654 = INT32_MIN;
	uint32_t x655 = 14U;
	volatile int32_t t129 = -893732203;

    t129 = (x653>(x654%(x655%x656)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x659 = -83;
	int64_t x660 = 910LL;
	static volatile int32_t t130 = -29185206;

    t130 = (x657>(x658%(x659%x660)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x661 = 817U;
	uint8_t x662 = 0U;
	int8_t x663 = INT8_MAX;
	uint32_t x664 = 127396U;
	volatile int32_t t131 = -20325138;

    t131 = (x661>(x662%(x663%x664)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x670 = 23LLU;
	int64_t x671 = 551236891LL;
	volatile int32_t x672 = INT32_MAX;
	static int32_t t132 = -132;

    t132 = (x669>(x670%(x671%x672)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x673 = INT32_MIN;
	static int16_t x674 = -2;
	int8_t x675 = -1;
	volatile int32_t t133 = -95035;

    t133 = (x673>(x674%(x675%x676)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x681 = UINT32_MAX;
	volatile uint16_t x682 = UINT16_MAX;
	static int8_t x683 = INT8_MIN;
	static int32_t t134 = 1539;

    t134 = (x681>(x682%(x683%x684)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x689 = UINT32_MAX;
	volatile uint64_t x690 = 10584LLU;
	int32_t t135 = 145013;

    t135 = (x689>(x690%(x691%x692)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint64_t x693 = 3LLU;
	volatile uint8_t x694 = UINT8_MAX;
	int32_t x696 = -90;
	volatile int32_t t136 = 1279;

    t136 = (x693>(x694%(x695%x696)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x697 = 79237795U;
	volatile uint32_t x698 = 2333U;
	static int64_t x700 = INT64_MIN;

    t137 = (x697>(x698%(x699%x700)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x705 = 1214U;
	volatile int32_t x706 = -1;
	volatile int64_t x707 = INT64_MIN;
	volatile int32_t x708 = INT32_MAX;
	volatile int32_t t138 = -282440355;

    t138 = (x705>(x706%(x707%x708)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x709 = -1;
	int8_t x710 = -1;
	volatile int8_t x711 = INT8_MAX;
	int8_t x712 = INT8_MIN;
	volatile int32_t t139 = -28975485;

    t139 = (x709>(x710%(x711%x712)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x713 = 124U;
	static uint8_t x715 = 60U;
	uint64_t x716 = 13LLU;
	volatile int32_t t140 = 342609354;

    t140 = (x713>(x714%(x715%x716)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x721 = 1174U;
	volatile int8_t x722 = INT8_MIN;
	int8_t x724 = INT8_MAX;

    t141 = (x721>(x722%(x723%x724)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x725 = INT16_MAX;
	int8_t x726 = -2;
	int32_t x728 = -1;

    t142 = (x725>(x726%(x727%x728)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x730 = INT64_MAX;
	volatile int64_t x731 = 41756356LL;
	uint64_t x732 = 2500693910754684LLU;
	int32_t t143 = -62;

    t143 = (x729>(x730%(x731%x732)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x733 = -1583271LL;
	uint8_t x735 = 17U;

    t144 = (x733>(x734%(x735%x736)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x738 = INT8_MAX;
	uint8_t x740 = 6U;
	volatile int32_t t145 = 38145952;

    t145 = (x737>(x738%(x739%x740)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x741 = INT16_MIN;
	int32_t x743 = -1;
	int8_t x744 = INT8_MIN;
	volatile int32_t t146 = 3815685;

    t146 = (x741>(x742%(x743%x744)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x745 = 1U;
	static int16_t x746 = 84;
	int8_t x747 = 9;
	int64_t x748 = INT64_MAX;

    t147 = (x745>(x746%(x747%x748)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x754 = INT16_MAX;
	int16_t x755 = INT16_MAX;
	uint64_t x756 = 2268445798998176LLU;
	volatile int32_t t148 = 3;

    t148 = (x753>(x754%(x755%x756)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint16_t x757 = UINT16_MAX;
	uint16_t x758 = 831U;
	int64_t x759 = INT64_MAX;
	int32_t t149 = -193;

    t149 = (x757>(x758%(x759%x760)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x766 = INT16_MIN;
	int8_t x767 = INT8_MIN;
	volatile int32_t t150 = -751;

    t150 = (x765>(x766%(x767%x768)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x774 = INT8_MAX;
	uint64_t x775 = 2607312110840725789LLU;
	int64_t x776 = -1LL;
	int32_t t151 = 1;

    t151 = (x773>(x774%(x775%x776)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x777 = 4885220719440LLU;
	int16_t x778 = INT16_MIN;
	int32_t x780 = -490;

    t152 = (x777>(x778%(x779%x780)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x785 = UINT8_MAX;
	int8_t x786 = -1;
	static volatile int16_t x787 = -5382;
	static uint32_t x788 = UINT32_MAX;
	volatile int32_t t153 = 16;

    t153 = (x785>(x786%(x787%x788)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x793 = INT32_MIN;
	uint32_t x794 = 1349623497U;
	uint8_t x795 = 4U;
	static uint8_t x796 = 60U;
	int32_t t154 = 28401;

    t154 = (x793>(x794%(x795%x796)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x797 = 25986LLU;
	static int32_t x798 = INT32_MAX;
	int16_t x799 = -7;
	uint32_t x800 = 6218466U;
	volatile int32_t t155 = 479462;

    t155 = (x797>(x798%(x799%x800)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int64_t x805 = -15042856662LL;
	static int16_t x806 = INT16_MIN;
	int64_t x807 = INT64_MAX;
	uint8_t x808 = 30U;
	int32_t t156 = 52;

    t156 = (x805>(x806%(x807%x808)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x809 = INT32_MIN;
	static uint32_t x810 = 1078344691U;
	static int8_t x811 = -1;
	int64_t x812 = INT64_MAX;
	volatile int32_t t157 = -6820;

    t157 = (x809>(x810%(x811%x812)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x813 = 72468822843103LL;
	volatile uint64_t x814 = UINT64_MAX;
	uint64_t x815 = 1302601801294829873LLU;
	static int16_t x816 = 98;
	int32_t t158 = -949;

    t158 = (x813>(x814%(x815%x816)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x817 = -1LL;
	int64_t x818 = INT64_MIN;
	int64_t x819 = -6440059LL;
	int64_t x820 = 62740497537LL;

    t159 = (x817>(x818%(x819%x820)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x821 = -1LL;
	uint16_t x822 = UINT16_MAX;
	uint32_t x823 = UINT32_MAX;
	volatile uint16_t x824 = 7U;
	static volatile int32_t t160 = -87967;

    t160 = (x821>(x822%(x823%x824)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x825 = -1;
	int64_t x826 = -133031654022833947LL;
	static int64_t x827 = -1LL;
	int32_t x828 = INT32_MIN;

    t161 = (x825>(x826%(x827%x828)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x830 = 96U;
	static int32_t t162 = -5654408;

    t162 = (x829>(x830%(x831%x832)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint64_t x833 = UINT64_MAX;
	volatile int16_t x834 = 4893;
	static int64_t x835 = INT64_MIN;
	static volatile int32_t t163 = 61542;

    t163 = (x833>(x834%(x835%x836)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x837 = UINT64_MAX;
	static int8_t x838 = INT8_MIN;
	int8_t x839 = INT8_MAX;
	int32_t x840 = INT32_MIN;
	volatile int32_t t164 = -645111;

    t164 = (x837>(x838%(x839%x840)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x847 = INT16_MIN;
	int32_t x848 = 15;
	volatile int32_t t165 = -47526313;

    t165 = (x845>(x846%(x847%x848)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x849 = 9U;
	int16_t x850 = -553;
	uint16_t x851 = 3924U;
	uint64_t x852 = 46979007863LLU;
	int32_t t166 = -2168;

    t166 = (x849>(x850%(x851%x852)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x853 = INT32_MIN;
	volatile uint8_t x854 = UINT8_MAX;
	volatile uint64_t x855 = 1744LLU;
	static int16_t x856 = -899;
	int32_t t167 = 1;

    t167 = (x853>(x854%(x855%x856)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x857 = INT32_MIN;
	int8_t x858 = INT8_MIN;
	int8_t x859 = INT8_MIN;
	static uint64_t x860 = 26622LLU;

    t168 = (x857>(x858%(x859%x860)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x861 = 11066832701494082LLU;
	static uint32_t x862 = 269U;
	volatile uint32_t x863 = UINT32_MAX;
	int64_t x864 = INT64_MIN;
	static volatile int32_t t169 = -186976643;

    t169 = (x861>(x862%(x863%x864)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int32_t x865 = INT32_MIN;
	int16_t x866 = -23;
	int8_t x867 = -3;
	static int16_t x868 = INT16_MAX;

    t170 = (x865>(x866%(x867%x868)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x869 = 3205LLU;
	int16_t x870 = INT16_MAX;
	int32_t x871 = INT32_MIN;
	int64_t x872 = INT64_MIN;
	static int32_t t171 = -380406984;

    t171 = (x869>(x870%(x871%x872)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint64_t x885 = 7857379173540150837LLU;
	static uint8_t x887 = UINT8_MAX;
	volatile int16_t x888 = -2;
	static int32_t t172 = -11868;

    t172 = (x885>(x886%(x887%x888)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint32_t x894 = UINT32_MAX;
	static int32_t x895 = 46849810;
	int16_t x896 = INT16_MIN;
	volatile int32_t t173 = 82754;

    t173 = (x893>(x894%(x895%x896)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x897 = 4U;
	uint8_t x898 = 2U;
	int8_t x900 = INT8_MAX;
	volatile int32_t t174 = -48737;

    t174 = (x897>(x898%(x899%x900)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x902 = INT16_MIN;
	static int8_t x903 = 24;
	static uint8_t x904 = 7U;
	int32_t t175 = 96362713;

    t175 = (x901>(x902%(x903%x904)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x910 = -1;
	static int16_t x911 = INT16_MIN;
	uint16_t x912 = 12461U;
	static int32_t t176 = 55502689;

    t176 = (x909>(x910%(x911%x912)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x921 = INT64_MIN;
	volatile int8_t x922 = INT8_MIN;
	int32_t x923 = -277874329;
	int16_t x924 = INT16_MIN;
	int32_t t177 = -849104856;

    t177 = (x921>(x922%(x923%x924)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x925 = INT64_MAX;
	static int16_t x926 = -14137;
	int64_t x927 = 385039553LL;
	int32_t t178 = 359;

    t178 = (x925>(x926%(x927%x928)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x929 = 60828912;
	int8_t x930 = INT8_MIN;
	volatile int32_t t179 = 622538232;

    t179 = (x929>(x930%(x931%x932)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x934 = INT8_MIN;
	int8_t x935 = -1;
	uint32_t x936 = 45180861U;
	volatile int32_t t180 = 33;

    t180 = (x933>(x934%(x935%x936)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x941 = 30U;
	int16_t x942 = INT16_MIN;
	uint32_t x943 = 691754U;
	uint8_t x944 = UINT8_MAX;
	volatile int32_t t181 = -23389255;

    t181 = (x941>(x942%(x943%x944)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x945 = -1LL;
	int8_t x946 = 1;
	int16_t x947 = -1989;
	int16_t x948 = INT16_MIN;

    t182 = (x945>(x946%(x947%x948)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x949 = -179135;
	volatile int8_t x950 = INT8_MIN;
	static int32_t x951 = -7038359;
	volatile int8_t x952 = INT8_MIN;
	volatile int32_t t183 = 15;

    t183 = (x949>(x950%(x951%x952)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x957 = INT32_MAX;
	static uint64_t x959 = 14957604061760LLU;
	int32_t x960 = INT32_MIN;
	int32_t t184 = 240075369;

    t184 = (x957>(x958%(x959%x960)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x965 = INT64_MIN;
	volatile uint64_t x966 = 24932201350332343LLU;
	uint8_t x967 = UINT8_MAX;
	static int64_t x968 = INT64_MIN;
	int32_t t185 = -1176055;

    t185 = (x965>(x966%(x967%x968)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x970 = 14173;
	uint8_t x971 = UINT8_MAX;
	int32_t t186 = 172034642;

    t186 = (x969>(x970%(x971%x972)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x973 = 14U;
	int32_t x974 = -6629;
	int32_t x975 = INT32_MAX;
	static volatile int32_t t187 = 28;

    t187 = (x973>(x974%(x975%x976)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x977 = 1LL;
	uint32_t x978 = 30U;
	uint8_t x980 = 10U;

    t188 = (x977>(x978%(x979%x980)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x981 = INT32_MIN;
	int8_t x982 = INT8_MIN;
	static int16_t x983 = INT16_MIN;
	int16_t x984 = -140;
	volatile int32_t t189 = -1;

    t189 = (x981>(x982%(x983%x984)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x985 = UINT64_MAX;
	int8_t x986 = -1;
	int32_t x987 = -338525907;
	int64_t x988 = INT64_MAX;
	int32_t t190 = -201845;

    t190 = (x985>(x986%(x987%x988)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x989 = INT8_MIN;
	static int32_t x990 = -1;
	uint16_t x991 = 25211U;
	int8_t x992 = -10;
	volatile int32_t t191 = 6442403;

    t191 = (x989>(x990%(x991%x992)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x993 = INT16_MIN;
	int8_t x994 = -56;
	static volatile int64_t x996 = -68338559970134LL;
	int32_t t192 = 153;

    t192 = (x993>(x994%(x995%x996)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x997 = INT32_MAX;
	volatile int32_t x999 = INT32_MAX;
	int32_t t193 = 480;

    t193 = (x997>(x998%(x999%x1000)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x1003 = -32;
	static int32_t t194 = 2049;

    t194 = (x1001>(x1002%(x1003%x1004)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1005 = INT16_MIN;
	static int8_t x1006 = -1;
	int32_t x1007 = INT32_MAX;
	volatile int32_t t195 = -2995;

    t195 = (x1005>(x1006%(x1007%x1008)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1012 = INT64_MAX;
	int32_t t196 = -81923293;

    t196 = (x1009>(x1010%(x1011%x1012)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1014 = INT64_MIN;
	uint64_t x1015 = 13511028744574LLU;
	volatile int64_t x1016 = INT64_MIN;

    t197 = (x1013>(x1014%(x1015%x1016)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1017 = 0LL;
	int16_t x1018 = -1;
	uint32_t x1019 = 207414U;
	int64_t x1020 = INT64_MAX;

    t198 = (x1017>(x1018%(x1019%x1020)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1025 = 23882265LL;
	static uint16_t x1026 = 26444U;
	uint16_t x1027 = 69U;
	uint16_t x1028 = 8U;
	static int32_t t199 = 248378384;

    t199 = (x1025>(x1026%(x1027%x1028)));

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

