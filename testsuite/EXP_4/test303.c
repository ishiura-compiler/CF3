
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

volatile int32_t t1 = 17;
static int8_t x19 = -1;
int8_t x22 = INT8_MIN;
volatile int16_t x23 = -28;
uint16_t x27 = 29151U;
volatile uint16_t x28 = 199U;
int8_t x29 = -6;
int64_t x30 = INT64_MAX;
uint64_t x31 = 477968490241565219LLU;
static uint64_t x45 = UINT64_MAX;
uint32_t x49 = UINT32_MAX;
static volatile int32_t t12 = -114937;
int32_t x63 = INT32_MAX;
int32_t x66 = -25118655;
int32_t t15 = 1788;
static volatile int16_t x70 = -1;
volatile int8_t x71 = 1;
static int16_t x74 = -1;
int32_t x75 = -1;
int16_t x81 = 31;
int32_t x83 = INT32_MIN;
int32_t t19 = 166;
uint64_t x86 = 880329LLU;
static volatile int16_t x87 = -36;
int16_t x90 = INT16_MAX;
static int64_t x98 = -1LL;
volatile int32_t t24 = 1667;
static int64_t x114 = INT64_MIN;
static volatile int32_t t26 = -24;
uint64_t x120 = 21475LLU;
uint16_t x125 = 1U;
static uint8_t x127 = 14U;
static volatile uint16_t x133 = 0U;
int64_t x134 = -1LL;
int16_t x137 = INT16_MIN;
int32_t x138 = 1314;
int32_t t33 = 309292;
static uint16_t x145 = UINT16_MAX;
uint64_t x147 = UINT64_MAX;
uint8_t x151 = 3U;
int16_t x153 = -2;
volatile int8_t x158 = -1;
volatile int32_t t38 = -73;
int32_t t41 = -2235;
int16_t x183 = INT16_MIN;
static volatile int8_t x184 = -6;
static uint8_t x188 = UINT8_MAX;
int16_t x191 = -180;
uint64_t x194 = 150490019383956LLU;
int16_t x200 = INT16_MIN;
static volatile int32_t x209 = 23;
static int32_t x210 = INT32_MIN;
int32_t x211 = 439877;
uint16_t x213 = 256U;
int32_t x214 = -1;
uint8_t x218 = 63U;
int32_t t54 = -1170;
int64_t x232 = 29LL;
static int32_t t55 = -2227723;
int32_t x234 = INT32_MIN;
int8_t x240 = INT8_MIN;
int32_t t57 = 9;
int8_t x248 = -4;
volatile int32_t t60 = -12283476;
int16_t x257 = INT16_MIN;
static int32_t t61 = -42996880;
int64_t x262 = INT64_MIN;
uint8_t x275 = 6U;
uint8_t x276 = 22U;
int64_t x278 = -1667LL;
uint64_t x286 = UINT64_MAX;
int16_t x288 = -12825;
uint16_t x293 = UINT16_MAX;
uint64_t x296 = UINT64_MAX;
uint8_t x301 = 1U;
static int32_t x311 = INT32_MIN;
int64_t x322 = INT64_MIN;
int8_t x323 = INT8_MIN;
int8_t x344 = 4;
int32_t t81 = 5289163;
int16_t x358 = -28;
int32_t x366 = INT32_MIN;
int64_t x368 = INT64_MIN;
int32_t t86 = 4;
static int8_t x371 = INT8_MAX;
int8_t x372 = 3;
volatile uint32_t x381 = 1U;
int32_t t89 = 699;
uint64_t x389 = 7994768144374LLU;
int64_t x402 = INT64_MIN;
static volatile int32_t t95 = -817237557;
volatile int32_t t97 = 1;
int32_t x436 = -108092992;
int32_t t101 = 23472415;
uint16_t x446 = UINT16_MAX;
static uint64_t x448 = 18LLU;
int64_t x450 = -1428643716715877773LL;
uint8_t x454 = 5U;
int64_t x455 = 1137LL;
volatile int16_t x456 = 14;
int16_t x460 = INT16_MAX;
static volatile int32_t x462 = INT32_MIN;
int16_t x469 = -1;
volatile uint16_t x478 = 27U;
int16_t x479 = INT16_MIN;
volatile int32_t t113 = -5776;
int32_t x497 = 109;
int16_t x501 = INT16_MIN;
volatile int32_t x504 = -1;
static int32_t t115 = -1;
static uint16_t x509 = 24100U;
volatile int32_t t118 = -4056717;
int64_t x517 = INT64_MIN;
uint16_t x522 = 476U;
uint64_t x523 = 60LLU;
int64_t x526 = INT64_MAX;
int8_t x528 = INT8_MIN;
uint8_t x529 = 95U;
int8_t x530 = 6;
int8_t x535 = INT8_MIN;
int8_t x549 = 3;
static volatile int32_t t127 = 75189;
uint16_t x566 = 144U;
uint8_t x575 = 1U;
static uint64_t x576 = 6035730068LLU;
int32_t t133 = -1280;
static int8_t x592 = INT8_MAX;
int8_t x595 = INT8_MIN;
uint32_t x605 = 272242U;
uint32_t x606 = UINT32_MAX;
uint32_t x608 = 4972841U;
uint16_t x609 = 2U;
uint32_t x615 = 1648968433U;
uint32_t x620 = 6523424U;
volatile int32_t t140 = 3266;
volatile uint64_t x622 = UINT64_MAX;
int64_t x624 = -1LL;
volatile uint64_t x625 = 3680781337536424LLU;
volatile uint32_t x627 = 51912U;
int16_t x629 = 6;
volatile int64_t x632 = INT64_MAX;
int8_t x640 = 27;
volatile int32_t t145 = -905;
static int16_t x648 = INT16_MIN;
static uint8_t x652 = 1U;
int32_t t148 = 57057192;
int8_t x657 = -1;
int64_t x658 = INT64_MAX;
volatile int16_t x669 = -1;
uint8_t x671 = 57U;
static uint8_t x674 = 9U;
int64_t x675 = INT64_MIN;
static volatile int32_t x686 = -1;
int64_t x691 = -921372849345932260LL;
uint64_t x699 = UINT64_MAX;
int8_t x703 = 18;
static int64_t x704 = -40773625222LL;
static volatile int32_t t160 = -64269285;
volatile int16_t x713 = INT16_MAX;
static volatile int32_t t162 = 0;
volatile uint64_t x729 = 3801362605033658901LLU;
int64_t x746 = INT64_MIN;
int64_t x748 = -1LL;
volatile int32_t t168 = 91;
int16_t x758 = -70;
int32_t x760 = -20351114;
volatile int32_t t169 = -446;
int16_t x763 = INT16_MIN;
int64_t x767 = INT64_MIN;
volatile int8_t x770 = 52;
int8_t x787 = -1;
int16_t x790 = -16238;
int32_t x801 = INT32_MIN;
int32_t x807 = INT32_MIN;
uint8_t x809 = UINT8_MAX;
int32_t x811 = INT32_MIN;
uint64_t x816 = 105622646487225553LLU;
int16_t x818 = 5478;
uint32_t x820 = 61501U;
static int8_t x821 = -1;
static volatile int64_t x823 = 11807LL;
int32_t t185 = 55115949;
int32_t t186 = 7;
int32_t x836 = 28293;
volatile int16_t x838 = -97;
volatile int32_t t188 = 213809;
static int32_t x848 = INT32_MIN;
int64_t x849 = 124LL;
int8_t x852 = INT8_MAX;
volatile int32_t t191 = -424240;
uint16_t x861 = 11822U;
int16_t x862 = -1;
static volatile int64_t x866 = INT64_MIN;
volatile int16_t x874 = INT16_MIN;
uint32_t x875 = 161U;
int8_t x879 = -53;
int32_t t198 = -210927;
int16_t x885 = INT16_MAX;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	uint16_t x2 = 31021U;
	volatile uint32_t x3 = UINT32_MAX;
	uint64_t x4 = 4553948829278LLU;
	int32_t t0 = -26837;

    t0 = (x1>(x2==(x3-x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	uint32_t x6 = 6643U;
	static int64_t x7 = -1LL;
	int16_t x8 = 849;

    t1 = (x5>(x6==(x7-x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	int8_t x10 = INT8_MIN;
	volatile uint32_t x11 = UINT32_MAX;
	int64_t x12 = -1LL;
	int32_t t2 = 971500746;

    t2 = (x9>(x10==(x11-x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	uint64_t x14 = UINT64_MAX;
	uint32_t x15 = UINT32_MAX;
	static int8_t x16 = INT8_MIN;
	static int32_t t3 = -1;

    t3 = (x13>(x14==(x15-x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MAX;
	int32_t x18 = 0;
	static volatile int64_t x20 = INT64_MIN;
	int32_t t4 = 450;

    t4 = (x17>(x18==(x19-x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint32_t x21 = UINT32_MAX;
	volatile uint64_t x24 = 59LLU;
	volatile int32_t t5 = 4693876;

    t5 = (x21>(x22==(x23-x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x25 = -1;
	volatile int8_t x26 = -12;
	int32_t t6 = 252592635;

    t6 = (x25>(x26==(x27-x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x32 = 418537662466977664LL;
	volatile int32_t t7 = 13096;

    t7 = (x29>(x30==(x31-x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x37 = UINT8_MAX;
	int8_t x38 = INT8_MIN;
	volatile uint64_t x39 = 1790223316871LLU;
	static uint64_t x40 = 829762240LLU;
	int32_t t8 = -15645135;

    t8 = (x37>(x38==(x39-x40)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = INT32_MIN;
	volatile int16_t x42 = 3121;
	int8_t x43 = -1;
	volatile uint32_t x44 = 447U;
	int32_t t9 = -764571;

    t9 = (x41>(x42==(x43-x44)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x46 = 518529366511066LL;
	static uint16_t x47 = 13753U;
	int16_t x48 = -6072;
	static int32_t t10 = -23983;

    t10 = (x45>(x46==(x47-x48)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x50 = UINT16_MAX;
	static volatile uint64_t x51 = 239479126275LLU;
	static int32_t x52 = 12494748;
	volatile int32_t t11 = 898426878;

    t11 = (x49>(x50==(x51-x52)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x53 = UINT32_MAX;
	uint32_t x54 = 1378U;
	uint64_t x55 = 1060501LLU;
	volatile uint16_t x56 = 222U;

    t12 = (x53>(x54==(x55-x56)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x57 = INT16_MIN;
	volatile int64_t x58 = 113587203424LL;
	volatile int32_t x59 = -12480703;
	volatile uint64_t x60 = 35LLU;
	volatile int32_t t13 = -248687;

    t13 = (x57>(x58==(x59-x60)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x61 = INT8_MIN;
	int32_t x62 = INT32_MIN;
	static uint16_t x64 = 427U;
	volatile int32_t t14 = 684261154;

    t14 = (x61>(x62==(x63-x64)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x65 = -4088;
	uint16_t x67 = 25355U;
	int32_t x68 = -1;

    t15 = (x65>(x66==(x67-x68)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x69 = -1;
	uint8_t x72 = 6U;
	volatile int32_t t16 = -11339665;

    t16 = (x69>(x70==(x71-x72)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x73 = UINT16_MAX;
	uint64_t x76 = 48986694368168LLU;
	volatile int32_t t17 = -100608;

    t17 = (x73>(x74==(x75-x76)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x77 = INT16_MIN;
	int64_t x78 = INT64_MIN;
	static int8_t x79 = INT8_MIN;
	int32_t x80 = -1;
	int32_t t18 = -125958420;

    t18 = (x77>(x78==(x79-x80)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x82 = -1;
	int16_t x84 = -1748;

    t19 = (x81>(x82==(x83-x84)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x85 = INT64_MIN;
	static volatile int32_t x88 = 1;
	volatile int32_t t20 = 130598080;

    t20 = (x85>(x86==(x87-x88)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x89 = INT8_MAX;
	uint16_t x91 = 12097U;
	uint8_t x92 = UINT8_MAX;
	volatile int32_t t21 = 237731968;

    t21 = (x89>(x90==(x91-x92)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x93 = -1;
	uint8_t x94 = UINT8_MAX;
	int64_t x95 = 133889LL;
	static int32_t x96 = INT32_MIN;
	int32_t t22 = 114335;

    t22 = (x93>(x94==(x95-x96)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x97 = INT8_MIN;
	static uint32_t x99 = UINT32_MAX;
	static uint16_t x100 = 96U;
	int32_t t23 = -27313;

    t23 = (x97>(x98==(x99-x100)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile uint32_t x101 = 55193U;
	static int32_t x102 = -25;
	uint64_t x103 = UINT64_MAX;
	static int32_t x104 = -1041;

    t24 = (x101>(x102==(x103-x104)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x105 = INT64_MIN;
	uint64_t x106 = 2LLU;
	int8_t x107 = -1;
	volatile int8_t x108 = 0;
	int32_t t25 = -253528382;

    t25 = (x105>(x106==(x107-x108)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int64_t x113 = -7603667782LL;
	int64_t x115 = INT64_MIN;
	volatile uint64_t x116 = 65077781615LLU;

    t26 = (x113>(x114==(x115-x116)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x117 = INT32_MAX;
	static int16_t x118 = -1364;
	static uint64_t x119 = UINT64_MAX;
	static int32_t t27 = -2794280;

    t27 = (x117>(x118==(x119-x120)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x121 = INT32_MIN;
	uint8_t x122 = 1U;
	int16_t x123 = -1;
	static int64_t x124 = INT64_MAX;
	volatile int32_t t28 = -711;

    t28 = (x121>(x122==(x123-x124)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x126 = 42328998817598679LLU;
	volatile int32_t x128 = -1;
	int32_t t29 = -12641;

    t29 = (x125>(x126==(x127-x128)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x129 = 3957372103LL;
	int32_t x130 = INT32_MIN;
	int8_t x131 = INT8_MIN;
	volatile uint8_t x132 = UINT8_MAX;
	static volatile int32_t t30 = 76181592;

    t30 = (x129>(x130==(x131-x132)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x135 = -1;
	volatile uint8_t x136 = 7U;
	volatile int32_t t31 = 94;

    t31 = (x133>(x134==(x135-x136)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x139 = 88771LLU;
	int8_t x140 = INT8_MIN;
	int32_t t32 = 121523810;

    t32 = (x137>(x138==(x139-x140)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x141 = -3;
	int16_t x142 = INT16_MAX;
	int32_t x143 = 383936203;
	uint64_t x144 = 23169576619747LLU;

    t33 = (x141>(x142==(x143-x144)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x146 = INT8_MIN;
	int8_t x148 = -1;
	int32_t t34 = -95090;

    t34 = (x145>(x146==(x147-x148)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x149 = -6964;
	volatile int32_t x150 = -79733;
	static uint32_t x152 = 939U;
	static int32_t t35 = 357;

    t35 = (x149>(x150==(x151-x152)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x154 = 4;
	int64_t x155 = 2161456185648885388LL;
	int16_t x156 = INT16_MAX;
	static int32_t t36 = 9393473;

    t36 = (x153>(x154==(x155-x156)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x157 = 11977LLU;
	uint32_t x159 = 2U;
	int16_t x160 = INT16_MIN;
	volatile int32_t t37 = 1464;

    t37 = (x157>(x158==(x159-x160)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x161 = 1LL;
	static uint8_t x162 = 13U;
	volatile int8_t x163 = INT8_MIN;
	int8_t x164 = INT8_MAX;

    t38 = (x161>(x162==(x163-x164)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x165 = 305837LL;
	int8_t x166 = INT8_MIN;
	volatile int64_t x167 = INT64_MIN;
	int64_t x168 = INT64_MIN;
	int32_t t39 = 617385;

    t39 = (x165>(x166==(x167-x168)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x169 = INT8_MAX;
	int16_t x170 = INT16_MAX;
	int32_t x171 = 369;
	static volatile int8_t x172 = 1;
	int32_t t40 = -10;

    t40 = (x169>(x170==(x171-x172)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x173 = UINT32_MAX;
	uint8_t x174 = UINT8_MAX;
	volatile uint8_t x175 = 1U;
	int8_t x176 = -1;

    t41 = (x173>(x174==(x175-x176)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int16_t x177 = -1;
	int64_t x178 = INT64_MAX;
	static uint16_t x179 = 0U;
	volatile int8_t x180 = INT8_MIN;
	int32_t t42 = -120;

    t42 = (x177>(x178==(x179-x180)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x181 = 721615276U;
	volatile int8_t x182 = -1;
	int32_t t43 = 62564471;

    t43 = (x181>(x182==(x183-x184)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x185 = INT64_MAX;
	int8_t x186 = INT8_MAX;
	int8_t x187 = 36;
	volatile int32_t t44 = 25;

    t44 = (x185>(x186==(x187-x188)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x189 = 500U;
	volatile int16_t x190 = INT16_MIN;
	uint32_t x192 = UINT32_MAX;
	volatile int32_t t45 = 54765028;

    t45 = (x189>(x190==(x191-x192)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x193 = 0LL;
	static uint32_t x195 = 1402213U;
	int16_t x196 = -80;
	volatile int32_t t46 = 1;

    t46 = (x193>(x194==(x195-x196)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x197 = -1;
	uint64_t x198 = 137115754LLU;
	uint64_t x199 = UINT64_MAX;
	static volatile int32_t t47 = -187927;

    t47 = (x197>(x198==(x199-x200)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x201 = 256U;
	uint8_t x202 = 55U;
	static int8_t x203 = INT8_MIN;
	volatile uint32_t x204 = 104851U;
	int32_t t48 = 39892;

    t48 = (x201>(x202==(x203-x204)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x205 = 7543U;
	static int8_t x206 = INT8_MAX;
	uint8_t x207 = 0U;
	volatile int16_t x208 = -1;
	volatile int32_t t49 = -20;

    t49 = (x205>(x206==(x207-x208)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x212 = -1;
	static volatile int32_t t50 = 36544;

    t50 = (x209>(x210==(x211-x212)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x215 = 4637LLU;
	int64_t x216 = INT64_MIN;
	static int32_t t51 = 187;

    t51 = (x213>(x214==(x215-x216)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x217 = 7;
	uint8_t x219 = 3U;
	int8_t x220 = 1;
	static volatile int32_t t52 = 282;

    t52 = (x217>(x218==(x219-x220)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x221 = 38395LLU;
	volatile int32_t x222 = -1;
	static volatile int64_t x223 = -1LL;
	int8_t x224 = INT8_MIN;
	int32_t t53 = 973478;

    t53 = (x221>(x222==(x223-x224)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x225 = INT16_MAX;
	int16_t x226 = 1;
	volatile int64_t x227 = -1222870055LL;
	static int32_t x228 = INT32_MIN;

    t54 = (x225>(x226==(x227-x228)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x229 = INT32_MIN;
	int32_t x230 = 951953;
	int64_t x231 = 1012775051562769153LL;

    t55 = (x229>(x230==(x231-x232)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x233 = -1;
	uint16_t x235 = 3182U;
	int32_t x236 = -1;
	int32_t t56 = 15;

    t56 = (x233>(x234==(x235-x236)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x237 = UINT8_MAX;
	static volatile int32_t x238 = 90;
	int8_t x239 = -1;

    t57 = (x237>(x238==(x239-x240)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x241 = 53U;
	static volatile int16_t x242 = -1;
	volatile uint16_t x243 = 0U;
	int16_t x244 = -1;
	static int32_t t58 = -1;

    t58 = (x241>(x242==(x243-x244)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x245 = -1;
	static volatile int32_t x246 = INT32_MIN;
	uint8_t x247 = UINT8_MAX;
	volatile int32_t t59 = 58;

    t59 = (x245>(x246==(x247-x248)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x249 = INT32_MIN;
	volatile int32_t x250 = INT32_MIN;
	int64_t x251 = -1421257LL;
	uint8_t x252 = 66U;

    t60 = (x249>(x250==(x251-x252)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x258 = 6292LLU;
	int64_t x259 = 16090918785LL;
	int8_t x260 = -1;

    t61 = (x257>(x258==(x259-x260)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x261 = -19;
	uint64_t x263 = 1857LLU;
	uint32_t x264 = 8036U;
	int32_t t62 = -19940;

    t62 = (x261>(x262==(x263-x264)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x265 = INT16_MIN;
	int8_t x266 = INT8_MIN;
	int32_t x267 = INT32_MAX;
	volatile int16_t x268 = 283;
	int32_t t63 = 13;

    t63 = (x265>(x266==(x267-x268)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x273 = 29;
	int32_t x274 = INT32_MAX;
	static int32_t t64 = -1;

    t64 = (x273>(x274==(x275-x276)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x277 = -1LL;
	uint8_t x279 = 0U;
	static int8_t x280 = -1;
	volatile int32_t t65 = -29108568;

    t65 = (x277>(x278==(x279-x280)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x281 = 5U;
	static int32_t x282 = -1;
	int32_t x283 = -1;
	int32_t x284 = -29422980;
	int32_t t66 = 7202275;

    t66 = (x281>(x282==(x283-x284)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x285 = 207002574635114LLU;
	volatile uint8_t x287 = 105U;
	volatile int32_t t67 = 144;

    t67 = (x285>(x286==(x287-x288)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x289 = INT8_MIN;
	volatile uint32_t x290 = 49882914U;
	uint32_t x291 = UINT32_MAX;
	static volatile int32_t x292 = INT32_MAX;
	int32_t t68 = 70261;

    t68 = (x289>(x290==(x291-x292)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x294 = INT16_MAX;
	int16_t x295 = -1;
	int32_t t69 = -14051269;

    t69 = (x293>(x294==(x295-x296)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x297 = INT16_MIN;
	volatile int8_t x298 = 1;
	volatile uint8_t x299 = UINT8_MAX;
	int64_t x300 = -1LL;
	static volatile int32_t t70 = -2;

    t70 = (x297>(x298==(x299-x300)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x302 = INT16_MAX;
	int64_t x303 = INT64_MIN;
	volatile int8_t x304 = -1;
	volatile int32_t t71 = 5;

    t71 = (x301>(x302==(x303-x304)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x305 = INT16_MIN;
	static int32_t x306 = INT32_MAX;
	int32_t x307 = -109278;
	int64_t x308 = INT64_MIN;
	int32_t t72 = 0;

    t72 = (x305>(x306==(x307-x308)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x309 = UINT32_MAX;
	volatile int16_t x310 = INT16_MIN;
	int32_t x312 = INT32_MIN;
	volatile int32_t t73 = 291;

    t73 = (x309>(x310==(x311-x312)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x313 = UINT8_MAX;
	volatile int8_t x314 = INT8_MIN;
	int8_t x315 = -1;
	int32_t x316 = -545;
	static volatile int32_t t74 = 466369;

    t74 = (x313>(x314==(x315-x316)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint16_t x317 = UINT16_MAX;
	int32_t x318 = 44562440;
	static uint8_t x319 = UINT8_MAX;
	static uint8_t x320 = 1U;
	volatile int32_t t75 = -70891;

    t75 = (x317>(x318==(x319-x320)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x321 = INT64_MIN;
	int64_t x324 = INT64_MIN;
	volatile int32_t t76 = -570;

    t76 = (x321>(x322==(x323-x324)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x325 = 72341752U;
	int64_t x326 = 261318057056094LL;
	int8_t x327 = -1;
	static uint16_t x328 = 916U;
	volatile int32_t t77 = -6849;

    t77 = (x325>(x326==(x327-x328)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x329 = INT32_MIN;
	uint64_t x330 = 34719172LLU;
	uint64_t x331 = UINT64_MAX;
	uint64_t x332 = UINT64_MAX;
	static int32_t t78 = 1;

    t78 = (x329>(x330==(x331-x332)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x333 = UINT32_MAX;
	static int32_t x334 = -5589750;
	int64_t x335 = -1LL;
	uint32_t x336 = 31U;
	static volatile int32_t t79 = -32138236;

    t79 = (x333>(x334==(x335-x336)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x337 = 4807374;
	volatile int8_t x338 = INT8_MIN;
	int16_t x339 = INT16_MIN;
	int16_t x340 = INT16_MIN;
	int32_t t80 = -86323;

    t80 = (x337>(x338==(x339-x340)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x341 = 2080535897936LLU;
	int16_t x342 = -1;
	int16_t x343 = 238;

    t81 = (x341>(x342==(x343-x344)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x349 = UINT16_MAX;
	int8_t x350 = INT8_MIN;
	volatile uint32_t x351 = UINT32_MAX;
	static int64_t x352 = INT64_MAX;
	int32_t t82 = -121057;

    t82 = (x349>(x350==(x351-x352)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x353 = 209557924667LLU;
	int64_t x354 = -263273LL;
	static int8_t x355 = INT8_MIN;
	int16_t x356 = 4644;
	int32_t t83 = -46;

    t83 = (x353>(x354==(x355-x356)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x357 = 773;
	volatile int16_t x359 = INT16_MIN;
	uint64_t x360 = 1103081677429032LLU;
	volatile int32_t t84 = 48183;

    t84 = (x357>(x358==(x359-x360)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x361 = 1;
	int32_t x362 = -691862;
	static int8_t x363 = INT8_MIN;
	int64_t x364 = 3LL;
	int32_t t85 = -206138512;

    t85 = (x361>(x362==(x363-x364)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint8_t x365 = 2U;
	volatile uint64_t x367 = UINT64_MAX;

    t86 = (x365>(x366==(x367-x368)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x369 = INT64_MIN;
	uint32_t x370 = 366U;
	volatile int32_t t87 = -2448289;

    t87 = (x369>(x370==(x371-x372)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x377 = -1LL;
	volatile uint64_t x378 = 211779LLU;
	volatile int16_t x379 = INT16_MIN;
	int64_t x380 = INT64_MIN;
	volatile int32_t t88 = -1259;

    t88 = (x377>(x378==(x379-x380)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint16_t x382 = 12400U;
	static int64_t x383 = -192LL;
	int32_t x384 = -1;

    t89 = (x381>(x382==(x383-x384)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint16_t x390 = 23908U;
	int16_t x391 = 14421;
	uint32_t x392 = 156455U;
	volatile int32_t t90 = 63528;

    t90 = (x389>(x390==(x391-x392)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x393 = INT8_MIN;
	int64_t x394 = INT64_MAX;
	int64_t x395 = -1LL;
	uint16_t x396 = 4491U;
	int32_t t91 = 15784169;

    t91 = (x393>(x394==(x395-x396)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x397 = 7U;
	int16_t x398 = 0;
	static int8_t x399 = -2;
	volatile int32_t x400 = INT32_MIN;
	int32_t t92 = 3885;

    t92 = (x397>(x398==(x399-x400)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x401 = UINT64_MAX;
	uint16_t x403 = 1029U;
	static int16_t x404 = INT16_MIN;
	int32_t t93 = 28;

    t93 = (x401>(x402==(x403-x404)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x405 = 420;
	volatile uint32_t x406 = 15U;
	uint32_t x407 = 3U;
	static uint8_t x408 = 101U;
	volatile int32_t t94 = -12;

    t94 = (x405>(x406==(x407-x408)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x409 = -15585;
	uint32_t x410 = 19390970U;
	static volatile uint16_t x411 = UINT16_MAX;
	int64_t x412 = -1LL;

    t95 = (x409>(x410==(x411-x412)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x413 = -1;
	int32_t x414 = INT32_MIN;
	int16_t x415 = INT16_MAX;
	uint16_t x416 = 28U;
	volatile int32_t t96 = 1060390603;

    t96 = (x413>(x414==(x415-x416)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x417 = INT16_MAX;
	int64_t x418 = -20454120418349LL;
	static volatile uint64_t x419 = UINT64_MAX;
	int64_t x420 = -810134248531339418LL;

    t97 = (x417>(x418==(x419-x420)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x421 = INT32_MIN;
	static int32_t x422 = INT32_MIN;
	volatile int64_t x423 = -1LL;
	uint64_t x424 = 133079914LLU;
	int32_t t98 = -145;

    t98 = (x421>(x422==(x423-x424)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x425 = INT16_MIN;
	uint64_t x426 = 30579LLU;
	int16_t x427 = INT16_MIN;
	static int64_t x428 = -24LL;
	volatile int32_t t99 = 228;

    t99 = (x425>(x426==(x427-x428)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x429 = INT16_MIN;
	static volatile int8_t x430 = INT8_MIN;
	int64_t x431 = -1LL;
	int16_t x432 = INT16_MIN;
	static volatile int32_t t100 = 617;

    t100 = (x429>(x430==(x431-x432)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x433 = -1;
	uint16_t x434 = 3547U;
	int8_t x435 = INT8_MAX;

    t101 = (x433>(x434==(x435-x436)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x441 = INT8_MIN;
	int64_t x442 = INT64_MIN;
	int64_t x443 = -1LL;
	int32_t x444 = -1;
	volatile int32_t t102 = 27740229;

    t102 = (x441>(x442==(x443-x444)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x445 = -1;
	static int16_t x447 = INT16_MAX;
	volatile int32_t t103 = -437;

    t103 = (x445>(x446==(x447-x448)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x449 = INT32_MIN;
	int32_t x451 = INT32_MIN;
	static int8_t x452 = INT8_MIN;
	volatile int32_t t104 = 1903956;

    t104 = (x449>(x450==(x451-x452)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x453 = 23U;
	volatile int32_t t105 = -505211;

    t105 = (x453>(x454==(x455-x456)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x457 = -1;
	volatile int32_t x458 = -1;
	int16_t x459 = -18;
	int32_t t106 = 483;

    t106 = (x457>(x458==(x459-x460)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x461 = 0;
	uint64_t x463 = 43LLU;
	int64_t x464 = -2453551LL;
	volatile int32_t t107 = 721;

    t107 = (x461>(x462==(x463-x464)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x470 = 1LLU;
	int64_t x471 = -7342301LL;
	uint32_t x472 = 0U;
	static int32_t t108 = -75084881;

    t108 = (x469>(x470==(x471-x472)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x473 = 0;
	int16_t x474 = 1660;
	uint32_t x475 = UINT32_MAX;
	int16_t x476 = INT16_MIN;
	int32_t t109 = -26024225;

    t109 = (x473>(x474==(x475-x476)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x477 = -730723178;
	static int16_t x480 = 0;
	volatile int32_t t110 = -416;

    t110 = (x477>(x478==(x479-x480)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x485 = INT32_MAX;
	volatile int64_t x486 = INT64_MIN;
	int32_t x487 = INT32_MIN;
	uint64_t x488 = 3787996464895LLU;
	volatile int32_t t111 = -13918612;

    t111 = (x485>(x486==(x487-x488)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x489 = UINT16_MAX;
	int8_t x490 = INT8_MAX;
	volatile int8_t x491 = -3;
	int16_t x492 = -1;
	volatile int32_t t112 = 0;

    t112 = (x489>(x490==(x491-x492)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x493 = 57906176U;
	int16_t x494 = INT16_MIN;
	int32_t x495 = INT32_MIN;
	int64_t x496 = 2093636542008717LL;

    t113 = (x493>(x494==(x495-x496)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x498 = 0U;
	int32_t x499 = -31574;
	int8_t x500 = INT8_MIN;
	volatile int32_t t114 = -76212;

    t114 = (x497>(x498==(x499-x500)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x502 = INT64_MIN;
	volatile int16_t x503 = -9383;

    t115 = (x501>(x502==(x503-x504)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x505 = INT16_MIN;
	static int8_t x506 = 7;
	int16_t x507 = INT16_MIN;
	int32_t x508 = -1;
	volatile int32_t t116 = -86447;

    t116 = (x505>(x506==(x507-x508)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x510 = -6;
	int16_t x511 = INT16_MIN;
	uint64_t x512 = 346429292LLU;
	static volatile int32_t t117 = -1198924;

    t117 = (x509>(x510==(x511-x512)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x513 = INT64_MAX;
	int16_t x514 = 51;
	uint32_t x515 = 90983U;
	static int8_t x516 = -1;

    t118 = (x513>(x514==(x515-x516)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint8_t x518 = UINT8_MAX;
	int8_t x519 = -1;
	static volatile uint32_t x520 = 437940255U;
	static volatile int32_t t119 = -487;

    t119 = (x517>(x518==(x519-x520)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x521 = 3594518;
	int32_t x524 = -1;
	int32_t t120 = -109908;

    t120 = (x521>(x522==(x523-x524)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x525 = INT8_MIN;
	static int32_t x527 = INT32_MIN;
	volatile int32_t t121 = -984314400;

    t121 = (x525>(x526==(x527-x528)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x531 = INT64_MAX;
	uint64_t x532 = 1LLU;
	static int32_t t122 = -3580;

    t122 = (x529>(x530==(x531-x532)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x533 = 3U;
	int32_t x534 = -1;
	int8_t x536 = 1;
	volatile int32_t t123 = 28328742;

    t123 = (x533>(x534==(x535-x536)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x537 = 3U;
	static int32_t x538 = INT32_MIN;
	int8_t x539 = INT8_MIN;
	uint8_t x540 = 0U;
	volatile int32_t t124 = -12172842;

    t124 = (x537>(x538==(x539-x540)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x545 = INT8_MAX;
	int8_t x546 = INT8_MIN;
	uint16_t x547 = 0U;
	static int16_t x548 = INT16_MIN;
	volatile int32_t t125 = 62659;

    t125 = (x545>(x546==(x547-x548)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x550 = INT16_MAX;
	int64_t x551 = 3386124LL;
	int16_t x552 = 7950;
	volatile int32_t t126 = 47702;

    t126 = (x549>(x550==(x551-x552)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x553 = -1;
	int16_t x554 = 3094;
	static volatile int32_t x555 = 532093;
	uint16_t x556 = 2U;

    t127 = (x553>(x554==(x555-x556)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile uint8_t x561 = 6U;
	int16_t x562 = 3969;
	volatile int16_t x563 = -1;
	uint8_t x564 = 31U;
	volatile int32_t t128 = 7875;

    t128 = (x561>(x562==(x563-x564)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x565 = 41117242;
	uint16_t x567 = 16432U;
	static int32_t x568 = -1;
	static volatile int32_t t129 = 886;

    t129 = (x565>(x566==(x567-x568)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x569 = 17820205558714LL;
	volatile int32_t x570 = INT32_MIN;
	static uint32_t x571 = UINT32_MAX;
	int16_t x572 = INT16_MAX;
	volatile int32_t t130 = -701;

    t130 = (x569>(x570==(x571-x572)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x573 = INT32_MIN;
	int64_t x574 = INT64_MIN;
	static volatile int32_t t131 = -2;

    t131 = (x573>(x574==(x575-x576)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x577 = 10LLU;
	int32_t x578 = INT32_MIN;
	int16_t x579 = INT16_MAX;
	volatile int16_t x580 = 1618;
	static volatile int32_t t132 = -4;

    t132 = (x577>(x578==(x579-x580)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x581 = UINT32_MAX;
	int8_t x582 = 4;
	uint64_t x583 = 2LLU;
	int16_t x584 = -431;

    t133 = (x581>(x582==(x583-x584)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x589 = 64781899229LLU;
	int16_t x590 = -5;
	int8_t x591 = -1;
	int32_t t134 = 39020422;

    t134 = (x589>(x590==(x591-x592)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x593 = INT8_MIN;
	int32_t x594 = -1;
	uint8_t x596 = 117U;
	static volatile int32_t t135 = 40;

    t135 = (x593>(x594==(x595-x596)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x601 = 21U;
	static int8_t x602 = INT8_MIN;
	int8_t x603 = INT8_MIN;
	volatile int16_t x604 = -1;
	static int32_t t136 = -509;

    t136 = (x601>(x602==(x603-x604)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x607 = -1;
	volatile int32_t t137 = 197859421;

    t137 = (x605>(x606==(x607-x608)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int64_t x610 = INT64_MIN;
	int64_t x611 = INT64_MIN;
	int16_t x612 = -1;
	volatile int32_t t138 = 2949153;

    t138 = (x609>(x610==(x611-x612)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x613 = INT8_MAX;
	int8_t x614 = INT8_MAX;
	static uint64_t x616 = UINT64_MAX;
	static int32_t t139 = 55;

    t139 = (x613>(x614==(x615-x616)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x617 = INT64_MAX;
	volatile int32_t x618 = -1;
	uint16_t x619 = 22U;

    t140 = (x617>(x618==(x619-x620)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x621 = INT8_MAX;
	static uint64_t x623 = 173483756LLU;
	static int32_t t141 = 83974831;

    t141 = (x621>(x622==(x623-x624)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x626 = INT64_MIN;
	int64_t x628 = -26981073230274334LL;
	int32_t t142 = -13958;

    t142 = (x625>(x626==(x627-x628)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x630 = -37;
	uint64_t x631 = 10963LLU;
	volatile int32_t t143 = -943;

    t143 = (x629>(x630==(x631-x632)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint32_t x633 = 30718U;
	int64_t x634 = 9548LL;
	int64_t x635 = INT64_MIN;
	int32_t x636 = INT32_MIN;
	volatile int32_t t144 = 1967897;

    t144 = (x633>(x634==(x635-x636)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x637 = UINT64_MAX;
	int8_t x638 = INT8_MIN;
	static uint16_t x639 = 640U;

    t145 = (x637>(x638==(x639-x640)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x645 = INT8_MIN;
	int16_t x646 = -1545;
	uint8_t x647 = UINT8_MAX;
	volatile int32_t t146 = 5558;

    t146 = (x645>(x646==(x647-x648)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x649 = UINT8_MAX;
	int16_t x650 = 10;
	int8_t x651 = INT8_MIN;
	volatile int32_t t147 = -22744;

    t147 = (x649>(x650==(x651-x652)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint16_t x653 = UINT16_MAX;
	int8_t x654 = INT8_MAX;
	static int16_t x655 = -1;
	int32_t x656 = 3;

    t148 = (x653>(x654==(x655-x656)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x659 = UINT64_MAX;
	uint64_t x660 = 1011093398002331LLU;
	int32_t t149 = -7175;

    t149 = (x657>(x658==(x659-x660)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x661 = 139;
	volatile int8_t x662 = INT8_MIN;
	uint64_t x663 = 11LLU;
	volatile int32_t x664 = -1;
	volatile int32_t t150 = 27;

    t150 = (x661>(x662==(x663-x664)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x665 = 67841;
	int8_t x666 = INT8_MIN;
	int16_t x667 = INT16_MIN;
	volatile int32_t x668 = INT32_MIN;
	volatile int32_t t151 = -1;

    t151 = (x665>(x666==(x667-x668)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x670 = UINT16_MAX;
	uint16_t x672 = 52U;
	int32_t t152 = 10042;

    t152 = (x669>(x670==(x671-x672)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x673 = INT32_MAX;
	int64_t x676 = -592058622452112LL;
	int32_t t153 = 3;

    t153 = (x673>(x674==(x675-x676)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x677 = INT16_MAX;
	uint16_t x678 = 2U;
	int32_t x679 = 2129;
	int32_t x680 = INT32_MAX;
	volatile int32_t t154 = 8175;

    t154 = (x677>(x678==(x679-x680)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x681 = 5U;
	int64_t x682 = -119033780511863LL;
	volatile uint64_t x683 = UINT64_MAX;
	static int8_t x684 = INT8_MIN;
	int32_t t155 = 5351872;

    t155 = (x681>(x682==(x683-x684)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x685 = UINT16_MAX;
	int16_t x687 = INT16_MIN;
	uint8_t x688 = 6U;
	volatile int32_t t156 = 13;

    t156 = (x685>(x686==(x687-x688)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x689 = UINT32_MAX;
	int64_t x690 = INT64_MAX;
	int16_t x692 = -1971;
	int32_t t157 = -23;

    t157 = (x689>(x690==(x691-x692)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x693 = UINT32_MAX;
	volatile int32_t x694 = INT32_MIN;
	int64_t x695 = -3209190587269453LL;
	volatile int16_t x696 = INT16_MIN;
	static volatile int32_t t158 = -47477031;

    t158 = (x693>(x694==(x695-x696)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x697 = INT16_MIN;
	uint32_t x698 = 4746576U;
	int8_t x700 = 1;
	static volatile int32_t t159 = 97923;

    t159 = (x697>(x698==(x699-x700)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x701 = INT32_MIN;
	static volatile int16_t x702 = 0;

    t160 = (x701>(x702==(x703-x704)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x709 = -1;
	uint32_t x710 = 120081378U;
	int8_t x711 = INT8_MIN;
	int16_t x712 = INT16_MAX;
	volatile int32_t t161 = 31270;

    t161 = (x709>(x710==(x711-x712)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x714 = INT16_MAX;
	uint64_t x715 = UINT64_MAX;
	static int64_t x716 = INT64_MAX;

    t162 = (x713>(x714==(x715-x716)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x717 = INT32_MIN;
	int64_t x718 = -1LL;
	uint16_t x719 = UINT16_MAX;
	uint64_t x720 = 2761608030053LLU;
	volatile int32_t t163 = 904323628;

    t163 = (x717>(x718==(x719-x720)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x721 = -1LL;
	int32_t x722 = -1;
	int8_t x723 = -1;
	uint64_t x724 = 223570302LLU;
	int32_t t164 = 263576528;

    t164 = (x721>(x722==(x723-x724)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x725 = INT64_MIN;
	volatile int16_t x726 = 7;
	uint64_t x727 = UINT64_MAX;
	uint16_t x728 = UINT16_MAX;
	int32_t t165 = 1;

    t165 = (x725>(x726==(x727-x728)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x730 = 7513LLU;
	uint8_t x731 = UINT8_MAX;
	int64_t x732 = INT64_MAX;
	static volatile int32_t t166 = -782;

    t166 = (x729>(x730==(x731-x732)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x745 = INT16_MIN;
	int32_t x747 = INT32_MIN;
	int32_t t167 = -1;

    t167 = (x745>(x746==(x747-x748)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x749 = INT32_MIN;
	volatile int8_t x750 = -1;
	volatile int64_t x751 = -1LL;
	int16_t x752 = INT16_MAX;

    t168 = (x749>(x750==(x751-x752)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x757 = 14U;
	volatile int64_t x759 = INT64_MIN;

    t169 = (x757>(x758==(x759-x760)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x761 = -1;
	uint64_t x762 = 1038315LLU;
	int8_t x764 = 30;
	volatile int32_t t170 = -47606328;

    t170 = (x761>(x762==(x763-x764)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x765 = 7;
	static int32_t x766 = INT32_MAX;
	int16_t x768 = INT16_MIN;
	volatile int32_t t171 = 3;

    t171 = (x765>(x766==(x767-x768)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x769 = 779142703LLU;
	uint8_t x771 = 26U;
	int64_t x772 = -448079821317898LL;
	int32_t t172 = 390504458;

    t172 = (x769>(x770==(x771-x772)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x773 = 27315;
	int64_t x774 = 1LL;
	int16_t x775 = INT16_MIN;
	int16_t x776 = -1;
	static int32_t t173 = -26760;

    t173 = (x773>(x774==(x775-x776)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x777 = 0U;
	static uint16_t x778 = UINT16_MAX;
	static uint64_t x779 = 261965LLU;
	int16_t x780 = -1;
	volatile int32_t t174 = -21218051;

    t174 = (x777>(x778==(x779-x780)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x781 = -1;
	int64_t x782 = -2956672505LL;
	volatile int32_t x783 = 0;
	int8_t x784 = INT8_MIN;
	volatile int32_t t175 = 1;

    t175 = (x781>(x782==(x783-x784)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x785 = INT32_MIN;
	static volatile uint32_t x786 = 15715668U;
	int8_t x788 = INT8_MIN;
	int32_t t176 = -18256208;

    t176 = (x785>(x786==(x787-x788)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x789 = INT32_MAX;
	uint32_t x791 = UINT32_MAX;
	int16_t x792 = INT16_MIN;
	static volatile int32_t t177 = -7305;

    t177 = (x789>(x790==(x791-x792)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x797 = INT32_MAX;
	static volatile int64_t x798 = -21LL;
	int64_t x799 = INT64_MIN;
	int64_t x800 = -13799042307LL;
	int32_t t178 = 304;

    t178 = (x797>(x798==(x799-x800)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint32_t x802 = 4857U;
	int64_t x803 = INT64_MIN;
	int16_t x804 = INT16_MIN;
	volatile int32_t t179 = 4062255;

    t179 = (x801>(x802==(x803-x804)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x805 = -25;
	static int64_t x806 = 6505174LL;
	volatile uint64_t x808 = 52576294185448358LLU;
	int32_t t180 = 958648;

    t180 = (x805>(x806==(x807-x808)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x810 = -315697873642011668LL;
	int32_t x812 = INT32_MIN;
	volatile int32_t t181 = -514612977;

    t181 = (x809>(x810==(x811-x812)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x813 = 34967U;
	static int32_t x814 = INT32_MIN;
	int64_t x815 = INT64_MIN;
	int32_t t182 = 795653107;

    t182 = (x813>(x814==(x815-x816)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x817 = UINT16_MAX;
	volatile uint32_t x819 = 119U;
	static volatile int32_t t183 = -115052147;

    t183 = (x817>(x818==(x819-x820)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x822 = INT16_MIN;
	static int8_t x824 = INT8_MIN;
	volatile int32_t t184 = -535;

    t184 = (x821>(x822==(x823-x824)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x825 = UINT8_MAX;
	int8_t x826 = -22;
	int16_t x827 = INT16_MIN;
	int64_t x828 = -4LL;

    t185 = (x825>(x826==(x827-x828)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint8_t x829 = 0U;
	uint8_t x830 = 100U;
	static volatile int32_t x831 = -1;
	int32_t x832 = -10;

    t186 = (x829>(x830==(x831-x832)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x833 = 4U;
	int64_t x834 = INT64_MIN;
	int32_t x835 = -1;
	int32_t t187 = -1;

    t187 = (x833>(x834==(x835-x836)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x837 = UINT32_MAX;
	static volatile int64_t x839 = -4351534246033LL;
	static int32_t x840 = 132642022;

    t188 = (x837>(x838==(x839-x840)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint32_t x841 = UINT32_MAX;
	int64_t x842 = 13266718698752LL;
	int64_t x843 = -1LL;
	static uint32_t x844 = 833U;
	volatile int32_t t189 = -1150;

    t189 = (x841>(x842==(x843-x844)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x845 = INT16_MIN;
	int8_t x846 = -1;
	static int64_t x847 = 223LL;
	int32_t t190 = -52052107;

    t190 = (x845>(x846==(x847-x848)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x850 = 2;
	int16_t x851 = 8;

    t191 = (x849>(x850==(x851-x852)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x853 = 0;
	static int64_t x854 = INT64_MIN;
	int32_t x855 = -1;
	int32_t x856 = -1;
	int32_t t192 = -5418955;

    t192 = (x853>(x854==(x855-x856)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x857 = 285;
	int32_t x858 = INT32_MAX;
	volatile int16_t x859 = -727;
	static int8_t x860 = -1;
	static int32_t t193 = -133007647;

    t193 = (x857>(x858==(x859-x860)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x863 = -1LL;
	int16_t x864 = -1;
	volatile int32_t t194 = 254;

    t194 = (x861>(x862==(x863-x864)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x865 = INT16_MIN;
	uint8_t x867 = UINT8_MAX;
	uint64_t x868 = 14888949259LLU;
	volatile int32_t t195 = 160;

    t195 = (x865>(x866==(x867-x868)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x873 = 0U;
	static int8_t x876 = -1;
	int32_t t196 = -1441106;

    t196 = (x873>(x874==(x875-x876)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x877 = 4357060879LL;
	static volatile int32_t x878 = -1;
	uint8_t x880 = UINT8_MAX;
	static int32_t t197 = -29;

    t197 = (x877>(x878==(x879-x880)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x881 = INT32_MAX;
	int32_t x882 = INT32_MAX;
	int64_t x883 = -1LL;
	static uint64_t x884 = 33554126255LLU;

    t198 = (x881>(x882==(x883-x884)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x886 = 42164U;
	uint32_t x887 = UINT32_MAX;
	int32_t x888 = -1;
	volatile int32_t t199 = 514770;

    t199 = (x885>(x886==(x887-x888)));

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

