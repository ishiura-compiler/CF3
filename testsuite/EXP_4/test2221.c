
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

int8_t x1 = -1;
static int16_t x6 = INT16_MIN;
static volatile int32_t t1 = 84;
uint16_t x20 = 1U;
static volatile uint32_t x26 = 10297517U;
int32_t t5 = -85059;
static int64_t x32 = -42391527615967667LL;
int64_t x42 = 126890280660LL;
uint16_t x46 = 11U;
static uint64_t x47 = 26521946352LLU;
int32_t t9 = 10245;
int8_t x50 = -48;
volatile int32_t t10 = 46418250;
int8_t x54 = -15;
int8_t x57 = INT8_MAX;
static int64_t x58 = INT64_MAX;
int32_t x59 = -13364215;
int32_t t12 = -398897543;
static int8_t x61 = INT8_MIN;
static int32_t x71 = INT32_MAX;
int64_t x85 = -1954125579482993LL;
int32_t x86 = -2;
int8_t x87 = INT8_MIN;
int64_t x93 = -1LL;
int32_t x97 = INT32_MIN;
uint16_t x109 = 255U;
static volatile int16_t x110 = INT16_MAX;
int16_t x111 = INT16_MIN;
static int16_t x117 = -35;
uint32_t x120 = 235274U;
uint64_t x129 = 1189870776LLU;
uint64_t x133 = 4688882935019LLU;
int64_t x143 = -1LL;
int64_t x144 = 229520925LL;
volatile int8_t x147 = -1;
int32_t x148 = INT32_MAX;
volatile int32_t t28 = 502858;
static int8_t x173 = -1;
uint64_t x184 = 653916453749259532LLU;
static int32_t t35 = -45;
uint32_t x194 = 2484U;
int8_t x196 = INT8_MIN;
uint8_t x200 = 1U;
static volatile int32_t t37 = -999;
static int8_t x205 = INT8_MAX;
int64_t x212 = -1LL;
uint32_t x221 = UINT32_MAX;
static uint16_t x222 = UINT16_MAX;
int16_t x239 = INT16_MAX;
int64_t x241 = INT64_MIN;
int16_t x242 = INT16_MAX;
volatile int32_t t44 = -5166272;
volatile int32_t t46 = 8722197;
int32_t t47 = -16071;
uint8_t x269 = 105U;
int16_t x270 = 2955;
int32_t t49 = 16739910;
volatile int64_t x281 = -1LL;
volatile uint8_t x289 = UINT8_MAX;
int64_t x290 = -16247LL;
volatile int32_t t53 = -1;
volatile int8_t x300 = -1;
volatile int32_t t57 = -34;
static uint32_t x310 = UINT32_MAX;
static volatile int16_t x311 = -405;
volatile int32_t t58 = 285494;
static uint64_t x319 = 31632631855520705LLU;
volatile int32_t t62 = 14921;
static volatile int32_t t63 = 1;
volatile int64_t x333 = INT64_MIN;
volatile uint16_t x335 = 14U;
int64_t x341 = 919748852785962710LL;
int64_t x344 = -1LL;
uint16_t x358 = UINT16_MAX;
volatile int8_t x369 = 2;
int32_t t68 = -10428524;
int8_t x384 = -62;
uint32_t x387 = UINT32_MAX;
volatile int32_t x390 = -9;
uint8_t x391 = 2U;
volatile int32_t t72 = -1395553;
static int64_t x413 = INT64_MIN;
static int32_t x416 = 770737;
uint64_t x424 = 1574081008LLU;
volatile int32_t t75 = 75;
static int64_t x425 = INT64_MAX;
int32_t t76 = -83575;
int16_t x442 = 0;
int16_t x444 = 4126;
int16_t x449 = -1;
int32_t t79 = 22;
uint32_t x453 = 2095U;
int32_t t80 = 9522899;
volatile int32_t t81 = -29441;
uint16_t x461 = 373U;
int16_t x476 = -25;
static int32_t t85 = 1;
uint64_t x486 = 6220308401141LLU;
int32_t x488 = -1;
static int32_t t87 = -2;
volatile uint64_t x495 = UINT64_MAX;
int32_t t88 = -5;
static int8_t x498 = INT8_MAX;
volatile int32_t t89 = -287;
int64_t x503 = INT64_MIN;
int8_t x514 = INT8_MIN;
volatile int32_t t94 = 21;
int16_t x522 = INT16_MAX;
int32_t x523 = -1;
volatile int32_t x525 = -1;
uint64_t x528 = 3146788066LLU;
int8_t x536 = -1;
uint8_t x541 = 6U;
int8_t x543 = -1;
static int32_t t99 = 0;
static int32_t x547 = INT32_MIN;
static int16_t x552 = INT16_MIN;
static uint8_t x553 = UINT8_MAX;
volatile int32_t x556 = INT32_MIN;
volatile int8_t x562 = INT8_MIN;
static int8_t x577 = INT8_MIN;
volatile int32_t t105 = -4933640;
uint8_t x585 = 21U;
int64_t x589 = INT64_MAX;
volatile int32_t x598 = INT32_MIN;
static int64_t x600 = INT64_MIN;
volatile int32_t t109 = -151;
int32_t t110 = -1671;
int64_t x609 = INT64_MAX;
int16_t x610 = -1;
static int64_t x615 = -1LL;
uint16_t x626 = 430U;
static volatile uint64_t x634 = 3321051519070407766LLU;
int8_t x638 = INT8_MAX;
int8_t x645 = INT8_MAX;
uint32_t x647 = 978353U;
int8_t x648 = -1;
int64_t x650 = INT64_MAX;
volatile int16_t x652 = -4784;
volatile int32_t t119 = -52083884;
int8_t x654 = -1;
static volatile int32_t x659 = INT32_MAX;
uint64_t x666 = 53638LLU;
volatile uint32_t x675 = UINT32_MAX;
static volatile int64_t x678 = INT64_MAX;
static uint16_t x695 = 5U;
int64_t x700 = INT64_MAX;
uint64_t x702 = 1LLU;
int16_t x704 = INT16_MIN;
int64_t x706 = INT64_MAX;
int16_t x714 = INT16_MAX;
uint8_t x715 = UINT8_MAX;
int64_t x722 = INT64_MAX;
int8_t x723 = 2;
static uint32_t x727 = 495932U;
volatile int32_t t134 = 0;
static volatile uint32_t x734 = 2U;
uint64_t x737 = 27613411LLU;
int64_t x739 = -891765LL;
static volatile int64_t x744 = -1LL;
int8_t x749 = INT8_MAX;
int64_t x751 = -438985346970LL;
volatile int32_t t140 = 53;
int8_t x761 = INT8_MAX;
volatile uint64_t x762 = 8028499655016009489LLU;
volatile int32_t t143 = -12105802;
uint8_t x773 = UINT8_MAX;
int8_t x782 = INT8_MAX;
int64_t x790 = INT64_MIN;
uint32_t x800 = 536068084U;
int32_t t150 = 2021944;
int32_t t151 = -56154304;
uint32_t x809 = UINT32_MAX;
int32_t x816 = 710662459;
int32_t t153 = -158;
int32_t t155 = 897;
int8_t x827 = -33;
volatile int32_t x830 = -1;
int16_t x833 = INT16_MIN;
static int64_t x840 = -433498978LL;
int64_t x841 = INT64_MAX;
static int16_t x843 = INT16_MIN;
volatile int64_t x852 = -1LL;
volatile uint32_t x853 = 670282U;
int8_t x859 = INT8_MAX;
static int16_t x861 = -1;
uint32_t x862 = 31990163U;
uint64_t x871 = UINT64_MAX;
uint16_t x873 = 4U;
int16_t x880 = -6;
int32_t x882 = -82727753;
int8_t x886 = 0;
static volatile int32_t t171 = 150;
volatile int16_t x889 = INT16_MIN;
volatile uint32_t x890 = 1965346922U;
volatile int32_t t172 = 1;
volatile int8_t x896 = INT8_MIN;
volatile int64_t x902 = 1152272058929633924LL;
uint64_t x912 = 641019001LLU;
int64_t x918 = INT64_MAX;
volatile int64_t x924 = INT64_MAX;
static int64_t x931 = -1LL;
static volatile int64_t x932 = INT64_MIN;
static uint64_t x938 = UINT64_MAX;
static int16_t x953 = -1;
static int32_t t185 = 11917;
int16_t x974 = INT16_MIN;
int64_t x985 = INT64_MIN;
volatile int32_t x989 = 0;
uint32_t x999 = UINT32_MAX;
uint64_t x1003 = 130LLU;
int32_t x1006 = INT32_MIN;
static volatile uint8_t x1007 = UINT8_MAX;
int8_t x1008 = -1;
int32_t t194 = -55145;
static int32_t t196 = -54;
int64_t x1023 = -211900322361371LL;
static int8_t x1028 = -1;
volatile int32_t t198 = -18558645;


void f0(void) {
    	int32_t x2 = INT32_MIN;
	static int8_t x3 = INT8_MIN;
	uint32_t x4 = UINT32_MAX;
	int32_t t0 = 14312;

    t0 = (x1>(x2%(x3&x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	int8_t x7 = 1;
	int64_t x8 = -581633221LL;

    t1 = (x5>(x6%(x7&x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	uint64_t x10 = UINT64_MAX;
	int16_t x11 = INT16_MAX;
	uint32_t x12 = 3281793U;
	static int32_t t2 = -7255881;

    t2 = (x9>(x10%(x11&x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x17 = 0;
	uint8_t x18 = UINT8_MAX;
	volatile int8_t x19 = 7;
	int32_t t3 = 0;

    t3 = (x17>(x18%(x19&x20)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x21 = INT16_MAX;
	int32_t x22 = 1130;
	uint32_t x23 = 1U;
	static int8_t x24 = -1;
	volatile int32_t t4 = 14;

    t4 = (x21>(x22%(x23&x24)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = INT8_MAX;
	int16_t x27 = INT16_MIN;
	int32_t x28 = INT32_MIN;

    t5 = (x25>(x26%(x27&x28)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x29 = 2525;
	static volatile int32_t x30 = 444;
	volatile int8_t x31 = INT8_MAX;
	volatile int32_t t6 = 16;

    t6 = (x29>(x30%(x31&x32)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x33 = INT32_MAX;
	int8_t x34 = INT8_MIN;
	int16_t x35 = INT16_MAX;
	volatile int16_t x36 = -1;
	static volatile int32_t t7 = 16476391;

    t7 = (x33>(x34%(x35&x36)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x41 = 27U;
	int8_t x43 = -3;
	uint8_t x44 = 3U;
	int32_t t8 = 1007744907;

    t8 = (x41>(x42%(x43&x44)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x45 = UINT8_MAX;
	int64_t x48 = 37361026335LL;

    t9 = (x45>(x46%(x47&x48)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x49 = 15950U;
	int64_t x51 = 7927941761LL;
	volatile uint8_t x52 = 15U;

    t10 = (x49>(x50%(x51&x52)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x53 = INT16_MAX;
	int16_t x55 = -2177;
	static int32_t x56 = -6;
	static int32_t t11 = 4;

    t11 = (x53>(x54%(x55&x56)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint16_t x60 = UINT16_MAX;

    t12 = (x57>(x58%(x59&x60)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x62 = INT16_MIN;
	int32_t x63 = -1;
	int8_t x64 = INT8_MIN;
	volatile int32_t t13 = -157394573;

    t13 = (x61>(x62%(x63&x64)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x65 = -1;
	static uint32_t x66 = UINT32_MAX;
	volatile int16_t x67 = INT16_MIN;
	static int32_t x68 = 280747313;
	int32_t t14 = 6179954;

    t14 = (x65>(x66%(x67&x68)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x69 = INT8_MAX;
	volatile int16_t x70 = 44;
	int64_t x72 = -1LL;
	volatile int32_t t15 = -2;

    t15 = (x69>(x70%(x71&x72)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x81 = -1;
	static volatile uint16_t x82 = UINT16_MAX;
	static int64_t x83 = -1LL;
	static int32_t x84 = INT32_MIN;
	int32_t t16 = 0;

    t16 = (x81>(x82%(x83&x84)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x88 = INT32_MIN;
	volatile int32_t t17 = -1615870;

    t17 = (x85>(x86%(x87&x88)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x94 = 306;
	int64_t x95 = INT64_MIN;
	int64_t x96 = -1LL;
	volatile int32_t t18 = 838;

    t18 = (x93>(x94%(x95&x96)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x98 = -1;
	uint8_t x99 = 31U;
	volatile uint64_t x100 = UINT64_MAX;
	volatile int32_t t19 = -190628;

    t19 = (x97>(x98%(x99&x100)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x101 = INT8_MIN;
	int16_t x102 = 3785;
	static int16_t x103 = -1;
	int16_t x104 = 4475;
	int32_t t20 = 1;

    t20 = (x101>(x102%(x103&x104)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x112 = INT8_MIN;
	static int32_t t21 = 8346;

    t21 = (x109>(x110%(x111&x112)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x113 = INT8_MIN;
	volatile int8_t x114 = INT8_MAX;
	static int16_t x115 = INT16_MAX;
	int32_t x116 = 1;
	volatile int32_t t22 = 0;

    t22 = (x113>(x114%(x115&x116)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint8_t x118 = 21U;
	uint16_t x119 = UINT16_MAX;
	static int32_t t23 = -728126050;

    t23 = (x117>(x118%(x119&x120)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x125 = INT8_MIN;
	int16_t x126 = INT16_MIN;
	uint8_t x127 = 72U;
	uint8_t x128 = 42U;
	static int32_t t24 = -2195;

    t24 = (x125>(x126%(x127&x128)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x130 = 52637471751861LLU;
	volatile int16_t x131 = INT16_MIN;
	int8_t x132 = -5;
	static volatile int32_t t25 = -46;

    t25 = (x129>(x130%(x131&x132)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x134 = 13U;
	volatile uint16_t x135 = UINT16_MAX;
	uint8_t x136 = UINT8_MAX;
	volatile int32_t t26 = -61;

    t26 = (x133>(x134%(x135&x136)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x141 = -3;
	int64_t x142 = 250704640LL;
	int32_t t27 = -3;

    t27 = (x141>(x142%(x143&x144)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x145 = INT64_MIN;
	static int8_t x146 = INT8_MAX;

    t28 = (x145>(x146%(x147&x148)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x149 = INT8_MIN;
	int64_t x150 = 33413844733467854LL;
	uint16_t x151 = UINT16_MAX;
	volatile int16_t x152 = INT16_MIN;
	volatile int32_t t29 = 196718227;

    t29 = (x149>(x150%(x151&x152)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x153 = 108610LLU;
	int16_t x154 = 197;
	int8_t x155 = INT8_MIN;
	volatile int64_t x156 = INT64_MIN;
	static volatile int32_t t30 = 14080196;

    t30 = (x153>(x154%(x155&x156)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x174 = 7U;
	volatile int8_t x175 = -1;
	uint64_t x176 = 119958060242244200LLU;
	volatile int32_t t31 = 2;

    t31 = (x173>(x174%(x175&x176)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x177 = -1;
	int8_t x178 = INT8_MIN;
	uint32_t x179 = 1U;
	volatile int32_t x180 = 11;
	static volatile int32_t t32 = 0;

    t32 = (x177>(x178%(x179&x180)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int32_t x181 = -1;
	int64_t x182 = -1LL;
	int64_t x183 = -1LL;
	int32_t t33 = 2994337;

    t33 = (x181>(x182%(x183&x184)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x185 = 1U;
	int64_t x186 = -553630196126465LL;
	static int16_t x187 = -1;
	static int32_t x188 = INT32_MAX;
	volatile int32_t t34 = -734192;

    t34 = (x185>(x186%(x187&x188)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x189 = INT16_MAX;
	int32_t x190 = 36664674;
	int32_t x191 = -202453503;
	static int8_t x192 = INT8_MIN;

    t35 = (x189>(x190%(x191&x192)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x193 = INT16_MAX;
	int64_t x195 = INT64_MAX;
	int32_t t36 = -655;

    t36 = (x193>(x194%(x195&x196)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x197 = -16179808;
	int64_t x198 = INT64_MAX;
	static int8_t x199 = 1;

    t37 = (x197>(x198%(x199&x200)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x206 = INT8_MIN;
	static volatile int64_t x207 = INT64_MAX;
	int16_t x208 = INT16_MAX;
	volatile int32_t t38 = -4269;

    t38 = (x205>(x206%(x207&x208)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x209 = 272284359841LLU;
	int64_t x210 = -1228924473685LL;
	uint8_t x211 = 1U;
	volatile int32_t t39 = 16687;

    t39 = (x209>(x210%(x211&x212)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x223 = -2558;
	static int64_t x224 = 71956707LL;
	int32_t t40 = -466778;

    t40 = (x221>(x222%(x223&x224)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x225 = INT8_MIN;
	uint32_t x226 = UINT32_MAX;
	uint16_t x227 = 226U;
	int8_t x228 = INT8_MIN;
	int32_t t41 = 10442;

    t41 = (x225>(x226%(x227&x228)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x229 = INT8_MIN;
	uint8_t x230 = 42U;
	volatile int64_t x231 = INT64_MIN;
	volatile int64_t x232 = INT64_MIN;
	static int32_t t42 = 15028;

    t42 = (x229>(x230%(x231&x232)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x237 = INT64_MIN;
	volatile uint64_t x238 = 3518587485890LLU;
	int32_t x240 = -1;
	volatile int32_t t43 = 2195646;

    t43 = (x237>(x238%(x239&x240)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x243 = 35U;
	int64_t x244 = 27052800830955543LL;

    t44 = (x241>(x242%(x243&x244)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x245 = INT16_MIN;
	uint8_t x246 = UINT8_MAX;
	static int8_t x247 = INT8_MIN;
	int16_t x248 = INT16_MAX;
	static int32_t t45 = 4;

    t45 = (x245>(x246%(x247&x248)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x253 = 3473151315851LL;
	int64_t x254 = INT64_MIN;
	uint8_t x255 = 87U;
	volatile uint8_t x256 = 19U;

    t46 = (x253>(x254%(x255&x256)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x257 = INT64_MIN;
	uint8_t x258 = UINT8_MAX;
	volatile int8_t x259 = INT8_MIN;
	static int8_t x260 = INT8_MIN;

    t47 = (x257>(x258%(x259&x260)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int32_t x265 = INT32_MIN;
	volatile uint32_t x266 = 6302U;
	int64_t x267 = -5567693LL;
	uint16_t x268 = UINT16_MAX;
	int32_t t48 = -4052;

    t48 = (x265>(x266%(x267&x268)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x271 = 179474464476424LLU;
	uint16_t x272 = 2470U;

    t49 = (x269>(x270%(x271&x272)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint64_t x277 = UINT64_MAX;
	int64_t x278 = -832858669101259272LL;
	uint32_t x279 = 245U;
	static int32_t x280 = INT32_MAX;
	volatile int32_t t50 = 499;

    t50 = (x277>(x278%(x279&x280)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x282 = -1;
	volatile int64_t x283 = -5923320753879457LL;
	uint64_t x284 = UINT64_MAX;
	int32_t t51 = -244645;

    t51 = (x281>(x282%(x283&x284)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x285 = 7651U;
	int64_t x286 = -1LL;
	int32_t x287 = INT32_MIN;
	int64_t x288 = INT64_MIN;
	int32_t t52 = 28497036;

    t52 = (x285>(x286%(x287&x288)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x291 = 6LLU;
	uint16_t x292 = 2479U;

    t53 = (x289>(x290%(x291&x292)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x293 = -1;
	static int64_t x294 = -1LL;
	static int64_t x295 = INT64_MAX;
	int32_t x296 = INT32_MIN;
	int32_t t54 = -60;

    t54 = (x293>(x294%(x295&x296)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x297 = INT64_MAX;
	int32_t x298 = INT32_MIN;
	volatile int32_t x299 = -420278491;
	static int32_t t55 = 102;

    t55 = (x297>(x298%(x299&x300)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x301 = 5571LL;
	volatile uint32_t x302 = 1957815864U;
	volatile int32_t x303 = -729;
	volatile uint64_t x304 = 23887406088512LLU;
	static int32_t t56 = -8128091;

    t56 = (x301>(x302%(x303&x304)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x305 = UINT32_MAX;
	int64_t x306 = INT64_MIN;
	int64_t x307 = -1LL;
	uint8_t x308 = 81U;

    t57 = (x305>(x306%(x307&x308)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x309 = -1;
	uint32_t x312 = 1U;

    t58 = (x309>(x310%(x311&x312)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x313 = -2;
	int64_t x314 = INT64_MAX;
	uint64_t x315 = 158LLU;
	static int32_t x316 = -28336874;
	volatile int32_t t59 = 5795474;

    t59 = (x313>(x314%(x315&x316)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x317 = 110633;
	int32_t x318 = INT32_MAX;
	int64_t x320 = -2LL;
	int32_t t60 = -177385;

    t60 = (x317>(x318%(x319&x320)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint8_t x321 = 71U;
	int32_t x322 = INT32_MIN;
	uint64_t x323 = UINT64_MAX;
	int64_t x324 = -35865131242957812LL;
	volatile int32_t t61 = 234607448;

    t61 = (x321>(x322%(x323&x324)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x325 = INT64_MAX;
	uint8_t x326 = 79U;
	uint64_t x327 = 54406479LLU;
	int16_t x328 = INT16_MIN;

    t62 = (x325>(x326%(x327&x328)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x329 = -21718835351245026LL;
	int16_t x330 = INT16_MIN;
	uint8_t x331 = UINT8_MAX;
	uint64_t x332 = UINT64_MAX;

    t63 = (x329>(x330%(x331&x332)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x334 = UINT16_MAX;
	int32_t x336 = -1;
	int32_t t64 = 51886;

    t64 = (x333>(x334%(x335&x336)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x342 = UINT16_MAX;
	uint32_t x343 = 16U;
	volatile int32_t t65 = -585772;

    t65 = (x341>(x342%(x343&x344)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x357 = INT32_MAX;
	uint64_t x359 = 160187LLU;
	int16_t x360 = INT16_MIN;
	int32_t t66 = 15;

    t66 = (x357>(x358%(x359&x360)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x361 = 8U;
	int64_t x362 = INT64_MIN;
	static int32_t x363 = -1;
	uint8_t x364 = UINT8_MAX;
	volatile int32_t t67 = 28815860;

    t67 = (x361>(x362%(x363&x364)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x370 = INT64_MAX;
	uint64_t x371 = UINT64_MAX;
	int16_t x372 = 63;

    t68 = (x369>(x370%(x371&x372)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int32_t x381 = INT32_MIN;
	static uint8_t x382 = UINT8_MAX;
	uint32_t x383 = 699086U;
	int32_t t69 = 2314239;

    t69 = (x381>(x382%(x383&x384)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x385 = INT32_MIN;
	volatile int64_t x386 = INT64_MIN;
	static int16_t x388 = 214;
	int32_t t70 = 50510989;

    t70 = (x385>(x386%(x387&x388)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x389 = 1;
	volatile uint16_t x392 = UINT16_MAX;
	int32_t t71 = -380;

    t71 = (x389>(x390%(x391&x392)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x405 = INT32_MIN;
	volatile int8_t x406 = INT8_MAX;
	volatile int16_t x407 = 1571;
	int8_t x408 = INT8_MIN;

    t72 = (x405>(x406%(x407&x408)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x409 = INT16_MIN;
	int64_t x410 = 0LL;
	int64_t x411 = 477330406914034LL;
	uint8_t x412 = 95U;
	int32_t t73 = 376;

    t73 = (x409>(x410%(x411&x412)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x414 = INT16_MIN;
	volatile int8_t x415 = INT8_MIN;
	static int32_t t74 = 262088843;

    t74 = (x413>(x414%(x415&x416)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x421 = -1LL;
	int32_t x422 = 156;
	int32_t x423 = INT32_MAX;

    t75 = (x421>(x422%(x423&x424)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x426 = -239LL;
	uint32_t x427 = 76U;
	volatile uint32_t x428 = 30U;

    t76 = (x425>(x426%(x427&x428)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x437 = INT16_MIN;
	volatile int32_t x438 = 29;
	volatile int16_t x439 = -15;
	volatile int64_t x440 = -242436910440453LL;
	static int32_t t77 = -135492;

    t77 = (x437>(x438%(x439&x440)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x441 = INT8_MIN;
	uint64_t x443 = 317707911LLU;
	int32_t t78 = 2746700;

    t78 = (x441>(x442%(x443&x444)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x450 = INT32_MIN;
	int32_t x451 = INT32_MAX;
	volatile int16_t x452 = INT16_MAX;

    t79 = (x449>(x450%(x451&x452)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x454 = -1;
	static int8_t x455 = -1;
	uint8_t x456 = 15U;

    t80 = (x453>(x454%(x455&x456)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x457 = 87U;
	uint64_t x458 = 1486195154593LLU;
	int16_t x459 = INT16_MAX;
	int8_t x460 = -1;

    t81 = (x457>(x458%(x459&x460)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x462 = -3LL;
	static int32_t x463 = 906788;
	int32_t x464 = -1;
	int32_t t82 = -117;

    t82 = (x461>(x462%(x463&x464)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x469 = 189U;
	int64_t x470 = -1LL;
	int64_t x471 = INT64_MIN;
	int8_t x472 = INT8_MIN;
	volatile int32_t t83 = -392;

    t83 = (x469>(x470%(x471&x472)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x473 = -1;
	volatile int32_t x474 = INT32_MIN;
	static int16_t x475 = INT16_MIN;
	int32_t t84 = 23722571;

    t84 = (x473>(x474%(x475&x476)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x477 = INT16_MIN;
	static int32_t x478 = INT32_MAX;
	static int64_t x479 = INT64_MIN;
	int8_t x480 = -1;

    t85 = (x477>(x478%(x479&x480)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x485 = INT8_MIN;
	static volatile int64_t x487 = -1LL;
	static int32_t t86 = -365023638;

    t86 = (x485>(x486%(x487&x488)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x489 = 6798LLU;
	int8_t x490 = -1;
	int8_t x491 = INT8_MIN;
	int16_t x492 = 2684;

    t87 = (x489>(x490%(x491&x492)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x493 = INT8_MIN;
	volatile uint8_t x494 = 87U;
	volatile int32_t x496 = -1;

    t88 = (x493>(x494%(x495&x496)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x497 = INT64_MAX;
	int16_t x499 = -1;
	int64_t x500 = INT64_MIN;

    t89 = (x497>(x498%(x499&x500)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x501 = 116;
	uint32_t x502 = UINT32_MAX;
	static int32_t x504 = -641;
	int32_t t90 = -185977;

    t90 = (x501>(x502%(x503&x504)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x505 = -143577;
	int16_t x506 = INT16_MAX;
	volatile int64_t x507 = -39LL;
	int16_t x508 = -729;
	volatile int32_t t91 = 21578;

    t91 = (x505>(x506%(x507&x508)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x509 = INT8_MIN;
	int16_t x510 = -1;
	int16_t x511 = -7;
	uint64_t x512 = UINT64_MAX;
	static volatile int32_t t92 = -30715;

    t92 = (x509>(x510%(x511&x512)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint8_t x513 = 4U;
	int16_t x515 = INT16_MIN;
	int64_t x516 = INT64_MIN;
	int32_t t93 = -47685;

    t93 = (x513>(x514%(x515&x516)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x517 = INT8_MIN;
	int64_t x518 = 121854794892688LL;
	int8_t x519 = -1;
	uint16_t x520 = UINT16_MAX;

    t94 = (x517>(x518%(x519&x520)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x521 = 0U;
	static uint64_t x524 = 759226057382LLU;
	volatile int32_t t95 = -19549;

    t95 = (x521>(x522%(x523&x524)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x526 = -1;
	int64_t x527 = 3722548LL;
	volatile int32_t t96 = 129;

    t96 = (x525>(x526%(x527&x528)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x529 = -1;
	uint64_t x530 = 8050841333012466022LLU;
	uint16_t x531 = 22399U;
	uint64_t x532 = UINT64_MAX;
	int32_t t97 = 97;

    t97 = (x529>(x530%(x531&x532)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x533 = 51U;
	uint64_t x534 = 3137894437673941637LLU;
	int16_t x535 = 14;
	int32_t t98 = 10;

    t98 = (x533>(x534%(x535&x536)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x542 = 12410300162790680LL;
	int8_t x544 = -56;

    t99 = (x541>(x542%(x543&x544)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x545 = INT64_MAX;
	int8_t x546 = -13;
	int64_t x548 = 56285891823LL;
	volatile int32_t t100 = -36;

    t100 = (x545>(x546%(x547&x548)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int64_t x549 = -52733162LL;
	int32_t x550 = 236424;
	int8_t x551 = -1;
	volatile int32_t t101 = 2193;

    t101 = (x549>(x550%(x551&x552)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x554 = INT64_MIN;
	static volatile int8_t x555 = -16;
	volatile int32_t t102 = 2178;

    t102 = (x553>(x554%(x555&x556)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x561 = INT32_MIN;
	uint32_t x563 = UINT32_MAX;
	int8_t x564 = INT8_MAX;
	int32_t t103 = 2;

    t103 = (x561>(x562%(x563&x564)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x569 = INT64_MAX;
	uint8_t x570 = UINT8_MAX;
	int64_t x571 = -1804940541364158760LL;
	int32_t x572 = INT32_MIN;
	int32_t t104 = -2192;

    t104 = (x569>(x570%(x571&x572)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x578 = INT64_MIN;
	uint16_t x579 = 273U;
	uint64_t x580 = 66449094308600LLU;

    t105 = (x577>(x578%(x579&x580)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x581 = INT16_MAX;
	int8_t x582 = INT8_MAX;
	uint16_t x583 = UINT16_MAX;
	volatile int32_t x584 = INT32_MAX;
	volatile int32_t t106 = 516370;

    t106 = (x581>(x582%(x583&x584)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x586 = 1202435U;
	volatile uint16_t x587 = UINT16_MAX;
	uint16_t x588 = 2U;
	volatile int32_t t107 = 521459;

    t107 = (x585>(x586%(x587&x588)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x590 = 341LL;
	int16_t x591 = INT16_MIN;
	int32_t x592 = -1;
	volatile int32_t t108 = 199176;

    t108 = (x589>(x590%(x591&x592)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x597 = -1;
	int16_t x599 = INT16_MIN;

    t109 = (x597>(x598%(x599&x600)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x601 = INT32_MAX;
	uint32_t x602 = 0U;
	int16_t x603 = INT16_MAX;
	uint16_t x604 = UINT16_MAX;

    t110 = (x601>(x602%(x603&x604)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x611 = 16;
	uint8_t x612 = 21U;
	volatile int32_t t111 = -3999052;

    t111 = (x609>(x610%(x611&x612)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x613 = -9;
	uint64_t x614 = 124974431173LLU;
	uint64_t x616 = UINT64_MAX;
	volatile int32_t t112 = 1026149358;

    t112 = (x613>(x614%(x615&x616)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x617 = -1;
	int32_t x618 = -1;
	int8_t x619 = INT8_MAX;
	int16_t x620 = INT16_MAX;
	volatile int32_t t113 = 11754065;

    t113 = (x617>(x618%(x619&x620)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x625 = -1;
	int64_t x627 = 1466989208720453321LL;
	int64_t x628 = INT64_MAX;
	volatile int32_t t114 = -26961;

    t114 = (x625>(x626%(x627&x628)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x629 = 0U;
	int32_t x630 = INT32_MIN;
	int8_t x631 = INT8_MIN;
	static int8_t x632 = -1;
	volatile int32_t t115 = -6;

    t115 = (x629>(x630%(x631&x632)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x633 = INT64_MAX;
	volatile int8_t x635 = 4;
	int32_t x636 = -1;
	volatile int32_t t116 = -27230873;

    t116 = (x633>(x634%(x635&x636)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint8_t x637 = 52U;
	uint16_t x639 = 85U;
	int64_t x640 = 29042781237703LL;
	volatile int32_t t117 = -7544635;

    t117 = (x637>(x638%(x639&x640)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x646 = INT16_MIN;
	static int32_t t118 = 996836248;

    t118 = (x645>(x646%(x647&x648)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x649 = INT64_MIN;
	volatile int16_t x651 = INT16_MAX;

    t119 = (x649>(x650%(x651&x652)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x653 = 6U;
	uint8_t x655 = 2U;
	int32_t x656 = -1;
	static volatile int32_t t120 = -1;

    t120 = (x653>(x654%(x655&x656)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x657 = INT64_MAX;
	int16_t x658 = INT16_MIN;
	int8_t x660 = INT8_MIN;
	int32_t t121 = 80952;

    t121 = (x657>(x658%(x659&x660)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x665 = INT64_MIN;
	int64_t x667 = -6622705LL;
	static uint16_t x668 = 227U;
	static volatile int32_t t122 = -49544;

    t122 = (x665>(x666%(x667&x668)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x673 = UINT32_MAX;
	static int16_t x674 = -5;
	int32_t x676 = INT32_MIN;
	int32_t t123 = 834;

    t123 = (x673>(x674%(x675&x676)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x677 = 143219931098571670LL;
	static uint64_t x679 = 2498603664846737LLU;
	int64_t x680 = -1LL;
	static int32_t t124 = 1;

    t124 = (x677>(x678%(x679&x680)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x685 = -195;
	int64_t x686 = INT64_MAX;
	volatile uint64_t x687 = 1178552958243LLU;
	int64_t x688 = -2LL;
	static int32_t t125 = -879779;

    t125 = (x685>(x686%(x687&x688)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint8_t x693 = 36U;
	int32_t x694 = INT32_MAX;
	volatile uint32_t x696 = 563U;
	volatile int32_t t126 = 449842548;

    t126 = (x693>(x694%(x695&x696)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x697 = 20465;
	int32_t x698 = -1;
	static volatile uint16_t x699 = 9705U;
	static volatile int32_t t127 = 5343109;

    t127 = (x697>(x698%(x699&x700)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x701 = 91U;
	int32_t x703 = INT32_MIN;
	int32_t t128 = -15982;

    t128 = (x701>(x702%(x703&x704)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x705 = UINT32_MAX;
	uint64_t x707 = 302284342476122623LLU;
	uint64_t x708 = 17268151962993272LLU;
	int32_t t129 = 7571;

    t129 = (x705>(x706%(x707&x708)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x709 = UINT32_MAX;
	volatile int64_t x710 = 48261LL;
	int16_t x711 = INT16_MIN;
	volatile int64_t x712 = -1LL;
	int32_t t130 = 407234;

    t130 = (x709>(x710%(x711&x712)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x713 = INT8_MAX;
	uint16_t x716 = UINT16_MAX;
	volatile int32_t t131 = -6;

    t131 = (x713>(x714%(x715&x716)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x717 = -15;
	int8_t x718 = -1;
	int8_t x719 = -1;
	int32_t x720 = -1;
	int32_t t132 = -961824413;

    t132 = (x717>(x718%(x719&x720)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint8_t x721 = UINT8_MAX;
	int32_t x724 = INT32_MAX;
	volatile int32_t t133 = 4167999;

    t133 = (x721>(x722%(x723&x724)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x725 = INT32_MIN;
	uint64_t x726 = 2841876LLU;
	volatile int8_t x728 = -3;

    t134 = (x725>(x726%(x727&x728)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x733 = UINT16_MAX;
	uint64_t x735 = UINT64_MAX;
	int64_t x736 = 14733LL;
	volatile int32_t t135 = 507107;

    t135 = (x733>(x734%(x735&x736)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x738 = UINT32_MAX;
	volatile int8_t x740 = INT8_MAX;
	int32_t t136 = -360;

    t136 = (x737>(x738%(x739&x740)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x741 = 93922483U;
	int8_t x742 = -1;
	uint64_t x743 = 2181763145420LLU;
	volatile int32_t t137 = -27;

    t137 = (x741>(x742%(x743&x744)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x745 = INT32_MAX;
	volatile uint64_t x746 = UINT64_MAX;
	int8_t x747 = -1;
	int16_t x748 = INT16_MIN;
	volatile int32_t t138 = -400605;

    t138 = (x745>(x746%(x747&x748)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x750 = INT8_MIN;
	volatile int8_t x752 = -1;
	volatile int32_t t139 = -160310367;

    t139 = (x749>(x750%(x751&x752)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x757 = -1LL;
	static int64_t x758 = -228LL;
	uint64_t x759 = 35LLU;
	static volatile uint8_t x760 = UINT8_MAX;

    t140 = (x757>(x758%(x759&x760)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x763 = -1;
	uint64_t x764 = 748748680738LLU;
	int32_t t141 = 13;

    t141 = (x761>(x762%(x763&x764)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int64_t x765 = INT64_MIN;
	int8_t x766 = 1;
	int8_t x767 = -31;
	static volatile uint8_t x768 = UINT8_MAX;
	static volatile int32_t t142 = 252001041;

    t142 = (x765>(x766%(x767&x768)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x769 = -1LL;
	int64_t x770 = INT64_MIN;
	int64_t x771 = -1LL;
	int64_t x772 = -1LL;

    t143 = (x769>(x770%(x771&x772)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x774 = 1671U;
	int32_t x775 = INT32_MAX;
	int8_t x776 = INT8_MIN;
	static volatile int32_t t144 = -8893;

    t144 = (x773>(x774%(x775&x776)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x777 = UINT64_MAX;
	int32_t x778 = INT32_MIN;
	volatile int8_t x779 = INT8_MIN;
	int32_t x780 = -1;
	volatile int32_t t145 = 38359;

    t145 = (x777>(x778%(x779&x780)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x781 = -1197;
	static int32_t x783 = -6691;
	int16_t x784 = 218;
	volatile int32_t t146 = -8;

    t146 = (x781>(x782%(x783&x784)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x785 = -1;
	int32_t x786 = -1;
	int16_t x787 = -1;
	uint32_t x788 = 454U;
	volatile int32_t t147 = 110862270;

    t147 = (x785>(x786%(x787&x788)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x789 = 21573;
	static int64_t x791 = INT64_MAX;
	uint16_t x792 = UINT16_MAX;
	volatile int32_t t148 = 114148062;

    t148 = (x789>(x790%(x791&x792)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x793 = 613357U;
	int8_t x794 = INT8_MIN;
	static int32_t x795 = INT32_MIN;
	volatile int64_t x796 = INT64_MAX;
	int32_t t149 = -2951;

    t149 = (x793>(x794%(x795&x796)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x797 = -1;
	uint32_t x798 = 63026959U;
	int16_t x799 = -1;

    t150 = (x797>(x798%(x799&x800)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x801 = 0U;
	static int8_t x802 = INT8_MIN;
	static int64_t x803 = -146335648794276124LL;
	volatile uint64_t x804 = UINT64_MAX;

    t151 = (x801>(x802%(x803&x804)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x810 = INT8_MIN;
	int64_t x811 = -1LL;
	static int8_t x812 = INT8_MIN;
	volatile int32_t t152 = -2;

    t152 = (x809>(x810%(x811&x812)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x813 = UINT8_MAX;
	uint8_t x814 = 95U;
	static volatile uint8_t x815 = 2U;

    t153 = (x813>(x814%(x815&x816)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x817 = UINT16_MAX;
	uint8_t x818 = 0U;
	uint64_t x819 = UINT64_MAX;
	uint64_t x820 = 48170LLU;
	static volatile int32_t t154 = -107193;

    t154 = (x817>(x818%(x819&x820)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x821 = 4U;
	uint64_t x822 = 1920247112225LLU;
	int8_t x823 = INT8_MIN;
	int64_t x824 = INT64_MIN;

    t155 = (x821>(x822%(x823&x824)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x825 = 1U;
	volatile uint8_t x826 = 1U;
	static uint32_t x828 = 458U;
	static int32_t t156 = 14281;

    t156 = (x825>(x826%(x827&x828)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x829 = INT64_MAX;
	int8_t x831 = INT8_MIN;
	uint8_t x832 = UINT8_MAX;
	int32_t t157 = 444643357;

    t157 = (x829>(x830%(x831&x832)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x834 = -1;
	int16_t x835 = 12;
	int8_t x836 = -3;
	volatile int32_t t158 = -337;

    t158 = (x833>(x834%(x835&x836)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x837 = UINT8_MAX;
	uint16_t x838 = UINT16_MAX;
	static volatile uint16_t x839 = 48U;
	int32_t t159 = -486;

    t159 = (x837>(x838%(x839&x840)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x842 = UINT8_MAX;
	volatile int8_t x844 = INT8_MIN;
	static int32_t t160 = 30;

    t160 = (x841>(x842%(x843&x844)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x845 = 245LL;
	static volatile int16_t x846 = -46;
	int16_t x847 = INT16_MAX;
	int32_t x848 = -1;
	volatile int32_t t161 = -125322576;

    t161 = (x845>(x846%(x847&x848)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x849 = -3;
	int8_t x850 = -1;
	int64_t x851 = -825708286877980869LL;
	volatile int32_t t162 = -180;

    t162 = (x849>(x850%(x851&x852)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x854 = 497U;
	int16_t x855 = -1;
	int64_t x856 = INT64_MAX;
	static volatile int32_t t163 = 113;

    t163 = (x853>(x854%(x855&x856)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x857 = -10;
	volatile int8_t x858 = -5;
	volatile int64_t x860 = -1LL;
	volatile int32_t t164 = 229;

    t164 = (x857>(x858%(x859&x860)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x863 = 1000;
	static int8_t x864 = INT8_MIN;
	volatile int32_t t165 = -62095;

    t165 = (x861>(x862%(x863&x864)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x865 = -114647513904LL;
	static volatile int8_t x866 = -1;
	int64_t x867 = -1LL;
	int32_t x868 = INT32_MAX;
	volatile int32_t t166 = 7;

    t166 = (x865>(x866%(x867&x868)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x869 = INT8_MAX;
	int16_t x870 = -1;
	int32_t x872 = INT32_MIN;
	int32_t t167 = -66431057;

    t167 = (x869>(x870%(x871&x872)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x874 = -1LL;
	uint16_t x875 = 254U;
	static uint8_t x876 = UINT8_MAX;
	int32_t t168 = 182649902;

    t168 = (x873>(x874%(x875&x876)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x877 = UINT8_MAX;
	int8_t x878 = -1;
	uint16_t x879 = 12U;
	static volatile int32_t t169 = -8;

    t169 = (x877>(x878%(x879&x880)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x881 = INT8_MIN;
	int16_t x883 = 6532;
	volatile uint8_t x884 = UINT8_MAX;
	volatile int32_t t170 = -26;

    t170 = (x881>(x882%(x883&x884)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint16_t x885 = 12U;
	int8_t x887 = INT8_MIN;
	static volatile int8_t x888 = INT8_MIN;

    t171 = (x885>(x886%(x887&x888)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x891 = 36LLU;
	int8_t x892 = -1;

    t172 = (x889>(x890%(x891&x892)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x893 = 3U;
	uint64_t x894 = UINT64_MAX;
	static int32_t x895 = 7293;
	int32_t t173 = 6776139;

    t173 = (x893>(x894%(x895&x896)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x901 = INT16_MIN;
	static int64_t x903 = INT64_MIN;
	int16_t x904 = INT16_MIN;
	int32_t t174 = 11131891;

    t174 = (x901>(x902%(x903&x904)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x905 = UINT8_MAX;
	uint64_t x906 = UINT64_MAX;
	int8_t x907 = INT8_MAX;
	uint8_t x908 = UINT8_MAX;
	int32_t t175 = -371202344;

    t175 = (x905>(x906%(x907&x908)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x909 = -1;
	static int16_t x910 = 6;
	uint8_t x911 = UINT8_MAX;
	int32_t t176 = -542756895;

    t176 = (x909>(x910%(x911&x912)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x913 = -767;
	int8_t x914 = INT8_MIN;
	uint64_t x915 = UINT64_MAX;
	static int64_t x916 = 149074LL;
	int32_t t177 = 23;

    t177 = (x913>(x914%(x915&x916)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x917 = INT64_MIN;
	int32_t x919 = INT32_MIN;
	int64_t x920 = -1LL;
	volatile int32_t t178 = -77250279;

    t178 = (x917>(x918%(x919&x920)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x921 = 9;
	uint8_t x922 = 1U;
	int32_t x923 = INT32_MIN;
	int32_t t179 = -598;

    t179 = (x921>(x922%(x923&x924)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x929 = INT64_MAX;
	uint64_t x930 = 479721LLU;
	int32_t t180 = -10350603;

    t180 = (x929>(x930%(x931&x932)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x937 = -1;
	int64_t x939 = -124548313727LL;
	uint8_t x940 = UINT8_MAX;
	volatile int32_t t181 = 417431;

    t181 = (x937>(x938%(x939&x940)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x941 = INT8_MIN;
	uint8_t x942 = 82U;
	int8_t x943 = -1;
	uint8_t x944 = 21U;
	volatile int32_t t182 = 2998361;

    t182 = (x941>(x942%(x943&x944)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x949 = -1;
	int8_t x950 = -1;
	volatile int32_t x951 = -1;
	static int8_t x952 = INT8_MIN;
	static int32_t t183 = 152;

    t183 = (x949>(x950%(x951&x952)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x954 = INT32_MIN;
	volatile int32_t x955 = INT32_MIN;
	static int16_t x956 = -1;
	volatile int32_t t184 = 337;

    t184 = (x953>(x954%(x955&x956)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x965 = UINT32_MAX;
	static int64_t x966 = -3123451700824LL;
	volatile int64_t x967 = INT64_MAX;
	static int8_t x968 = 3;

    t185 = (x965>(x966%(x967&x968)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x969 = 454093;
	uint32_t x970 = 4219U;
	uint16_t x971 = 386U;
	int8_t x972 = -1;
	volatile int32_t t186 = 986611044;

    t186 = (x969>(x970%(x971&x972)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x973 = -1LL;
	int16_t x975 = -12;
	static volatile int8_t x976 = -3;
	int32_t t187 = 0;

    t187 = (x973>(x974%(x975&x976)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x986 = -1;
	uint16_t x987 = UINT16_MAX;
	volatile uint32_t x988 = 6782528U;
	volatile int32_t t188 = -2888392;

    t188 = (x985>(x986%(x987&x988)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x990 = -1;
	static uint16_t x991 = UINT16_MAX;
	static int8_t x992 = INT8_MAX;
	int32_t t189 = -6644189;

    t189 = (x989>(x990%(x991&x992)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x993 = -999;
	uint64_t x994 = 318298LLU;
	int64_t x995 = INT64_MIN;
	int64_t x996 = INT64_MIN;
	int32_t t190 = -801;

    t190 = (x993>(x994%(x995&x996)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint16_t x997 = 416U;
	volatile uint8_t x998 = UINT8_MAX;
	static int16_t x1000 = -1;
	int32_t t191 = -10873;

    t191 = (x997>(x998%(x999&x1000)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1001 = -1LL;
	volatile int8_t x1002 = -1;
	static int8_t x1004 = INT8_MAX;
	static volatile int32_t t192 = 6162;

    t192 = (x1001>(x1002%(x1003&x1004)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1005 = -1LL;
	static int32_t t193 = -10;

    t193 = (x1005>(x1006%(x1007&x1008)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1009 = UINT32_MAX;
	volatile uint8_t x1010 = UINT8_MAX;
	static uint8_t x1011 = 1U;
	uint8_t x1012 = 1U;

    t194 = (x1009>(x1010%(x1011&x1012)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x1013 = 971LLU;
	uint64_t x1014 = 8828672874980267LLU;
	uint16_t x1015 = 25U;
	int16_t x1016 = -1;
	int32_t t195 = 2;

    t195 = (x1013>(x1014%(x1015&x1016)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x1017 = INT32_MIN;
	int32_t x1018 = 26702011;
	int32_t x1019 = INT32_MIN;
	int8_t x1020 = INT8_MIN;

    t196 = (x1017>(x1018%(x1019&x1020)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x1021 = 108U;
	uint16_t x1022 = 102U;
	int8_t x1024 = INT8_MAX;
	volatile int32_t t197 = 267;

    t197 = (x1021>(x1022%(x1023&x1024)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x1025 = 2410567245345073057LL;
	int16_t x1026 = -3;
	volatile int32_t x1027 = -1;

    t198 = (x1025>(x1026%(x1027&x1028)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1033 = INT16_MIN;
	int64_t x1034 = INT64_MIN;
	static volatile int16_t x1035 = -1;
	volatile int64_t x1036 = -25534160316866304LL;
	volatile int32_t t199 = -520161;

    t199 = (x1033>(x1034%(x1035&x1036)));

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

