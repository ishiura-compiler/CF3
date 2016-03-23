
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

volatile uint8_t x4 = UINT8_MAX;
int32_t x5 = INT32_MIN;
static int8_t x11 = -35;
volatile uint32_t x12 = 1U;
uint64_t x15 = 2048189968LLU;
int32_t t3 = 561400578;
volatile int8_t x17 = 0;
static int64_t x21 = 2094671044711470LL;
int8_t x30 = INT8_MIN;
static uint16_t x35 = 62U;
uint32_t x42 = 130151440U;
static int32_t t9 = -46;
int64_t t10 = -62LL;
int8_t x53 = -1;
int16_t x54 = -474;
int32_t x64 = 3;
static volatile int64_t x66 = 3834938LL;
uint32_t x68 = 30U;
int32_t x71 = INT32_MAX;
int64_t x77 = INT64_MAX;
static volatile int16_t x78 = 0;
volatile int64_t t16 = -809LL;
uint32_t x81 = UINT32_MAX;
uint64_t x83 = UINT64_MAX;
uint64_t x85 = UINT64_MAX;
volatile uint64_t t18 = 19LLU;
uint16_t x94 = UINT16_MAX;
int32_t t19 = -70;
int16_t x97 = INT16_MIN;
static uint32_t x98 = 33583516U;
int16_t x100 = 11;
int16_t x112 = INT16_MIN;
uint32_t t21 = 16309U;
int32_t t23 = 17;
static volatile int8_t x130 = 6;
uint64_t x131 = 21125267924498LLU;
uint64_t x143 = UINT64_MAX;
uint8_t x144 = 24U;
int16_t x145 = INT16_MIN;
int8_t x151 = 11;
int16_t x154 = -241;
int16_t x156 = INT16_MAX;
volatile int8_t x157 = -1;
static int16_t x160 = INT16_MIN;
uint32_t t32 = 6613672U;
uint64_t x175 = 119510505568LLU;
uint32_t x184 = UINT32_MAX;
int32_t t35 = 558;
uint64_t x187 = 1139674733562783357LLU;
int8_t x188 = INT8_MIN;
uint32_t t37 = 60572025U;
static volatile int8_t x193 = -51;
int16_t x196 = INT16_MIN;
volatile uint32_t t39 = 2U;
int16_t x210 = INT16_MAX;
volatile int8_t x212 = INT8_MAX;
int64_t x213 = INT64_MIN;
int32_t x232 = -1;
int16_t x233 = -1;
int16_t x234 = INT16_MIN;
int32_t x251 = INT32_MIN;
int8_t x272 = -1;
volatile int64_t t51 = -4557322LL;
volatile int32_t t52 = -25030487;
int16_t x283 = -1;
int32_t t55 = -3828;
int8_t x298 = INT8_MIN;
volatile uint64_t x305 = 2LLU;
int8_t x312 = INT8_MAX;
int32_t t59 = 3503513;
volatile int32_t t60 = 32744;
int8_t x339 = -1;
static uint8_t x344 = 75U;
int16_t x376 = -84;
int16_t x385 = INT16_MIN;
static volatile int8_t x386 = INT8_MAX;
volatile uint32_t x387 = UINT32_MAX;
int32_t t70 = -1985644;
volatile int64_t x394 = 273019812900LL;
int64_t x405 = -72285058429LL;
static volatile uint16_t x406 = UINT16_MAX;
int16_t x407 = -127;
int32_t x412 = -1;
volatile int32_t t75 = -1;
static volatile int32_t x422 = 1636070;
volatile uint64_t x423 = 0LLU;
int64_t x428 = 3537034471LL;
int64_t x436 = -1LL;
volatile int16_t x441 = 13581;
uint64_t x453 = 1927397730LLU;
int8_t x455 = INT8_MIN;
uint64_t t84 = 554503657909719020LLU;
volatile uint64_t x459 = UINT64_MAX;
uint32_t x467 = 99420577U;
volatile int32_t t86 = 60757517;
static int64_t x472 = -1LL;
static int32_t t87 = -26;
int32_t x481 = INT32_MAX;
volatile int32_t x485 = INT32_MIN;
int16_t x486 = INT16_MAX;
volatile uint32_t x495 = 26346563U;
volatile uint32_t x496 = 443607U;
static int16_t x505 = INT16_MIN;
static int32_t t95 = 3;
volatile uint32_t x517 = 43020U;
int8_t x531 = INT8_MIN;
int8_t x535 = INT8_MIN;
volatile int32_t t98 = 46256269;
static uint32_t x537 = 1343998U;
uint64_t x539 = 124969048179364LLU;
int16_t x543 = 62;
int32_t x545 = -116;
uint32_t x549 = UINT32_MAX;
volatile uint32_t x561 = 496U;
int16_t x564 = INT16_MAX;
volatile uint32_t t104 = 6U;
int16_t x565 = 0;
int32_t x566 = INT32_MIN;
uint8_t x575 = 43U;
uint8_t x578 = UINT8_MAX;
int8_t x597 = INT8_MIN;
int8_t x599 = -5;
int32_t t110 = -55040;
int32_t x601 = INT32_MIN;
int64_t x603 = -39770LL;
static volatile uint16_t x610 = 14U;
uint8_t x616 = 1U;
int8_t x625 = 25;
int16_t x627 = INT16_MIN;
int16_t x631 = INT16_MIN;
int64_t x648 = INT64_MAX;
static int8_t x655 = INT8_MAX;
static int16_t x666 = -1;
uint16_t x668 = 0U;
uint32_t x671 = 495889U;
int64_t x673 = -11840LL;
int16_t x677 = INT16_MIN;
int32_t x689 = INT32_MAX;
int32_t x690 = -1;
int8_t x692 = 0;
static int8_t x693 = INT8_MAX;
volatile int32_t t128 = -486665;
int8_t x710 = INT8_MIN;
static volatile int32_t x716 = -1;
uint16_t x717 = UINT16_MAX;
static uint16_t x723 = 593U;
int16_t x724 = INT16_MAX;
static int32_t x732 = INT32_MAX;
volatile int32_t t135 = 61514142;
uint32_t x733 = UINT32_MAX;
volatile int32_t x737 = -1;
volatile int32_t t137 = -205515;
int32_t x746 = INT32_MAX;
static volatile uint16_t x747 = UINT16_MAX;
int32_t x749 = -1;
uint16_t x751 = 279U;
static int16_t x753 = 14142;
volatile int32_t t140 = 2007809;
volatile uint8_t x757 = 2U;
int16_t x773 = -1;
int32_t t143 = 4045;
uint8_t x780 = 19U;
int32_t x781 = INT32_MIN;
volatile uint8_t x825 = 78U;
uint64_t x842 = 3344760563874LLU;
int16_t x845 = INT16_MAX;
static int16_t x846 = INT16_MAX;
int64_t x847 = INT64_MIN;
volatile int64_t t156 = 48LL;
static int8_t x869 = -2;
uint16_t x873 = 2U;
uint64_t x876 = 56706919LLU;
int8_t x882 = INT8_MAX;
int32_t x883 = INT32_MIN;
uint8_t x884 = 1U;
static volatile uint64_t x886 = 13705964865015937LLU;
int16_t x891 = INT16_MAX;
uint8_t x893 = UINT8_MAX;
uint8_t x896 = 61U;
uint8_t x897 = 59U;
uint16_t x908 = 11892U;
static int32_t t168 = 919;
static int16_t x911 = -1;
int8_t x921 = -1;
int32_t x922 = INT32_MIN;
static uint8_t x925 = 23U;
static uint32_t x926 = UINT32_MAX;
int32_t x929 = 1276;
uint8_t x932 = 1U;
static int32_t t175 = 1919;
int64_t x950 = -1LL;
volatile int32_t t176 = 43338;
uint64_t x954 = UINT64_MAX;
uint64_t x960 = 269968294755LLU;
int32_t t178 = 1997;
int32_t t179 = 11614113;
int16_t x979 = 3394;
int8_t x981 = INT8_MIN;
int32_t t181 = 221;
uint32_t x990 = UINT32_MAX;
static uint32_t x999 = UINT32_MAX;
int32_t x1000 = INT32_MAX;
volatile int32_t x1006 = -857594942;
uint64_t x1008 = 6492020716LLU;
volatile int16_t x1012 = -1;
volatile int16_t x1016 = 0;
int32_t x1018 = 3258;
static volatile int8_t x1033 = INT8_MIN;
static int8_t x1038 = 42;
volatile int32_t t192 = -17;
volatile int64_t x1050 = INT64_MAX;
int64_t x1052 = INT64_MAX;
volatile int32_t t193 = 25161;
int32_t x1056 = -1;
int16_t x1058 = INT16_MAX;
volatile uint16_t x1060 = 242U;
volatile int16_t x1064 = 1209;
static uint64_t x1067 = 610918906LLU;
static uint64_t x1076 = 0LLU;


void f0(void) {
    	int8_t x1 = 48;
	static int8_t x2 = -11;
	int8_t x3 = -18;
	static volatile int32_t t0 = -63;

    t0 = (x1*(x2==(x3*x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = 752872LL;
	volatile int16_t x7 = 453;
	static int16_t x8 = -1;
	int32_t t1 = 1525331;

    t1 = (x5*(x6==(x7*x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = 64701LL;
	int32_t x10 = 900241866;
	int64_t t2 = -1859LL;

    t2 = (x9*(x10==(x11*x12)));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -25712;
	static volatile int64_t x14 = -404147535507LL;
	int16_t x16 = INT16_MIN;

    t3 = (x13*(x14==(x15*x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x18 = 155188957U;
	volatile int64_t x19 = INT64_MIN;
	uint64_t x20 = UINT64_MAX;
	static volatile int32_t t4 = 52225585;

    t4 = (x17*(x18==(x19*x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x22 = 114U;
	uint16_t x23 = 9U;
	static uint8_t x24 = 95U;
	volatile int64_t t5 = 985243LL;

    t5 = (x21*(x22==(x23*x24)));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x29 = INT16_MAX;
	static uint8_t x31 = 0U;
	uint16_t x32 = 1U;
	static volatile int32_t t6 = -430201;

    t6 = (x29*(x30==(x31*x32)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x33 = UINT8_MAX;
	int8_t x34 = INT8_MIN;
	static int16_t x36 = INT16_MIN;
	volatile int32_t t7 = -23674;

    t7 = (x33*(x34==(x35*x36)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x37 = INT64_MIN;
	static uint8_t x38 = UINT8_MAX;
	int32_t x39 = INT32_MIN;
	int64_t x40 = 10LL;
	volatile int64_t t8 = 1LL;

    t8 = (x37*(x38==(x39*x40)));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x41 = -1;
	volatile int8_t x43 = INT8_MIN;
	volatile int8_t x44 = -1;

    t9 = (x41*(x42==(x43*x44)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x49 = -1LL;
	int8_t x50 = INT8_MAX;
	int8_t x51 = 1;
	volatile int32_t x52 = -1;

    t10 = (x49*(x50==(x51*x52)));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int16_t x55 = INT16_MIN;
	int16_t x56 = INT16_MIN;
	static int32_t t11 = -1;

    t11 = (x53*(x54==(x55*x56)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x61 = UINT16_MAX;
	volatile int16_t x62 = INT16_MIN;
	static volatile int8_t x63 = INT8_MIN;
	int32_t t12 = 248285;

    t12 = (x61*(x62==(x63*x64)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x65 = INT8_MIN;
	volatile int8_t x67 = -29;
	static int32_t t13 = 109;

    t13 = (x65*(x66==(x67*x68)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x69 = 197355U;
	uint32_t x70 = 31487U;
	uint64_t x72 = 902969LLU;
	volatile uint32_t t14 = 247U;

    t14 = (x69*(x70==(x71*x72)));

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x73 = 1339U;
	volatile int32_t x74 = -303;
	uint16_t x75 = UINT16_MAX;
	uint16_t x76 = 21245U;
	volatile uint32_t t15 = 982168U;

    t15 = (x73*(x74==(x75*x76)));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x79 = -1LL;
	int32_t x80 = -1;

    t16 = (x77*(x78==(x79*x80)));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x82 = -1;
	static volatile int8_t x84 = 7;
	uint32_t t17 = 38030571U;

    t17 = (x81*(x82==(x83*x84)));

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int32_t x86 = INT32_MIN;
	int16_t x87 = INT16_MIN;
	int32_t x88 = 2;

    t18 = (x85*(x86==(x87*x88)));

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x93 = INT8_MAX;
	uint32_t x95 = UINT32_MAX;
	volatile int32_t x96 = -1;

    t19 = (x93*(x94==(x95*x96)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x99 = INT16_MAX;
	volatile int32_t t20 = 51;

    t20 = (x97*(x98==(x99*x100)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x109 = 129340U;
	uint8_t x110 = UINT8_MAX;
	static int8_t x111 = 0;

    t21 = (x109*(x110==(x111*x112)));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x113 = 136034043290LL;
	int32_t x114 = -10830;
	int32_t x115 = INT32_MAX;
	static int64_t x116 = 1LL;
	volatile int64_t t22 = 2227154960038430LL;

    t22 = (x113*(x114==(x115*x116)));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x117 = 7;
	int8_t x118 = 23;
	uint32_t x119 = 14U;
	volatile int16_t x120 = -1;

    t23 = (x117*(x118==(x119*x120)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x121 = 635846787699LL;
	static uint16_t x122 = 37U;
	uint8_t x123 = UINT8_MAX;
	static uint64_t x124 = 5441823LLU;
	int64_t t24 = -104921282370992LL;

    t24 = (x121*(x122==(x123*x124)));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x129 = 11U;
	int8_t x132 = -1;
	static int32_t t25 = 11079657;

    t25 = (x129*(x130==(x131*x132)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x137 = 7760LLU;
	static int8_t x138 = 24;
	volatile int8_t x139 = INT8_MAX;
	int64_t x140 = -27537254605LL;
	static volatile uint64_t t26 = 35267LLU;

    t26 = (x137*(x138==(x139*x140)));

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x141 = -1;
	static volatile uint16_t x142 = 30U;
	int32_t t27 = -809425;

    t27 = (x141*(x142==(x143*x144)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x146 = INT16_MIN;
	int16_t x147 = -1959;
	uint8_t x148 = UINT8_MAX;
	volatile int32_t t28 = -62563902;

    t28 = (x145*(x146==(x147*x148)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x149 = INT16_MAX;
	static uint32_t x150 = 228392379U;
	int8_t x152 = 8;
	int32_t t29 = 7797;

    t29 = (x149*(x150==(x151*x152)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x153 = 13U;
	volatile int64_t x155 = 16411161042027LL;
	volatile int32_t t30 = -77316225;

    t30 = (x153*(x154==(x155*x156)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x158 = 58;
	int16_t x159 = INT16_MIN;
	volatile int32_t t31 = 0;

    t31 = (x157*(x158==(x159*x160)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x165 = 7086047U;
	uint16_t x166 = 16214U;
	uint64_t x167 = 82LLU;
	int64_t x168 = INT64_MAX;

    t32 = (x165*(x166==(x167*x168)));

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x173 = INT32_MAX;
	static uint64_t x174 = 5789710LLU;
	int64_t x176 = INT64_MIN;
	volatile int32_t t33 = -12898;

    t33 = (x173*(x174==(x175*x176)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x177 = INT32_MIN;
	int32_t x178 = INT32_MIN;
	volatile int16_t x179 = -1765;
	int16_t x180 = INT16_MAX;
	static int32_t t34 = 1;

    t34 = (x177*(x178==(x179*x180)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x181 = INT8_MIN;
	int8_t x182 = 0;
	int32_t x183 = INT32_MIN;

    t35 = (x181*(x182==(x183*x184)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x185 = INT32_MAX;
	int8_t x186 = -1;
	static int32_t t36 = 24;

    t36 = (x185*(x186==(x187*x188)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile uint32_t x189 = 10U;
	int8_t x190 = 1;
	static int8_t x191 = INT8_MIN;
	volatile int8_t x192 = -45;

    t37 = (x189*(x190==(x191*x192)));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x194 = -1;
	uint32_t x195 = 9481138U;
	int32_t t38 = 179935100;

    t38 = (x193*(x194==(x195*x196)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x197 = 32U;
	static uint8_t x198 = UINT8_MAX;
	int8_t x199 = INT8_MAX;
	static volatile uint16_t x200 = 823U;

    t39 = (x197*(x198==(x199*x200)));

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x201 = -1;
	static int16_t x202 = INT16_MIN;
	int16_t x203 = -14;
	int16_t x204 = -1;
	static volatile int32_t t40 = -63801;

    t40 = (x201*(x202==(x203*x204)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int64_t x205 = -4548854410LL;
	uint32_t x206 = 1092838U;
	int32_t x207 = -1002287;
	int8_t x208 = INT8_MIN;
	static volatile int64_t t41 = -64978739924LL;

    t41 = (x205*(x206==(x207*x208)));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x209 = 22U;
	uint8_t x211 = 1U;
	int32_t t42 = 3971240;

    t42 = (x209*(x210==(x211*x212)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x214 = -10;
	uint16_t x215 = UINT16_MAX;
	volatile int16_t x216 = 14;
	static int64_t t43 = -64281LL;

    t43 = (x213*(x214==(x215*x216)));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x217 = 1U;
	static uint16_t x218 = UINT16_MAX;
	uint16_t x219 = 328U;
	uint64_t x220 = UINT64_MAX;
	uint32_t t44 = 141U;

    t44 = (x217*(x218==(x219*x220)));

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x229 = UINT32_MAX;
	static uint16_t x230 = 71U;
	static volatile uint32_t x231 = UINT32_MAX;
	static uint32_t t45 = 3U;

    t45 = (x229*(x230==(x231*x232)));

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint16_t x235 = UINT16_MAX;
	int8_t x236 = -1;
	int32_t t46 = 1;

    t46 = (x233*(x234==(x235*x236)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x237 = INT16_MIN;
	int8_t x238 = INT8_MIN;
	uint32_t x239 = 2U;
	uint32_t x240 = UINT32_MAX;
	int32_t t47 = -7;

    t47 = (x237*(x238==(x239*x240)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x249 = -1;
	int64_t x250 = INT64_MAX;
	int64_t x252 = -6901088LL;
	static volatile int32_t t48 = 565249;

    t48 = (x249*(x250==(x251*x252)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x265 = INT16_MIN;
	int32_t x266 = INT32_MIN;
	volatile uint8_t x267 = 41U;
	static volatile int8_t x268 = INT8_MAX;
	volatile int32_t t49 = 1;

    t49 = (x265*(x266==(x267*x268)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x269 = INT8_MIN;
	int64_t x270 = INT64_MAX;
	int32_t x271 = 27068;
	volatile int32_t t50 = 92581876;

    t50 = (x269*(x270==(x271*x272)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x273 = INT64_MIN;
	uint16_t x274 = 930U;
	int64_t x275 = -46LL;
	int16_t x276 = 1836;

    t51 = (x273*(x274==(x275*x276)));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint16_t x277 = 9U;
	volatile int16_t x278 = INT16_MAX;
	uint64_t x279 = 2583586922LLU;
	uint64_t x280 = UINT64_MAX;

    t52 = (x277*(x278==(x279*x280)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x281 = -1;
	int32_t x282 = 76774;
	int64_t x284 = INT64_MAX;
	static volatile int32_t t53 = 1862;

    t53 = (x281*(x282==(x283*x284)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x289 = 0;
	static volatile uint16_t x290 = 4U;
	int8_t x291 = INT8_MIN;
	int8_t x292 = -12;
	volatile int32_t t54 = -383;

    t54 = (x289*(x290==(x291*x292)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x293 = INT16_MIN;
	volatile int8_t x294 = -1;
	int16_t x295 = -22;
	uint16_t x296 = 13975U;

    t55 = (x293*(x294==(x295*x296)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x297 = 1U;
	int32_t x299 = 155250;
	volatile int16_t x300 = 1;
	int32_t t56 = 14879;

    t56 = (x297*(x298==(x299*x300)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x306 = INT16_MIN;
	static volatile uint16_t x307 = UINT16_MAX;
	static int8_t x308 = INT8_MIN;
	uint64_t t57 = 10111160633688470LLU;

    t57 = (x305*(x306==(x307*x308)));

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x309 = 32861;
	static uint64_t x310 = UINT64_MAX;
	uint64_t x311 = 1527971324283208LLU;
	volatile int32_t t58 = -65461;

    t58 = (x309*(x310==(x311*x312)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x325 = -1;
	uint32_t x326 = 60U;
	int64_t x327 = -3LL;
	volatile int8_t x328 = INT8_MIN;

    t59 = (x325*(x326==(x327*x328)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x329 = -195;
	int16_t x330 = 13448;
	int16_t x331 = -1;
	uint64_t x332 = 7259327866488853072LLU;

    t60 = (x329*(x330==(x331*x332)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x337 = INT16_MIN;
	static volatile uint8_t x338 = 4U;
	int16_t x340 = INT16_MIN;
	volatile int32_t t61 = -7190428;

    t61 = (x337*(x338==(x339*x340)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x341 = INT64_MAX;
	volatile int8_t x342 = -1;
	volatile uint8_t x343 = UINT8_MAX;
	int64_t t62 = 2021014314551184LL;

    t62 = (x341*(x342==(x343*x344)));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x345 = 1LLU;
	volatile int8_t x346 = INT8_MIN;
	int16_t x347 = -1;
	int16_t x348 = 0;
	static volatile uint64_t t63 = 1373663323024747LLU;

    t63 = (x345*(x346==(x347*x348)));

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x353 = -61;
	int32_t x354 = -1;
	uint8_t x355 = 2U;
	static int8_t x356 = 1;
	int32_t t64 = -3;

    t64 = (x353*(x354==(x355*x356)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x357 = -1LL;
	int8_t x358 = INT8_MAX;
	uint16_t x359 = UINT16_MAX;
	uint8_t x360 = 5U;
	volatile int64_t t65 = 1066LL;

    t65 = (x357*(x358==(x359*x360)));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x361 = INT8_MIN;
	int32_t x362 = INT32_MIN;
	static int8_t x363 = INT8_MAX;
	int16_t x364 = -6181;
	volatile int32_t t66 = 8;

    t66 = (x361*(x362==(x363*x364)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x365 = -1;
	int64_t x366 = INT64_MIN;
	int32_t x367 = -1;
	int16_t x368 = 53;
	int32_t t67 = 53144198;

    t67 = (x365*(x366==(x367*x368)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x369 = INT8_MIN;
	static uint64_t x370 = 9335LLU;
	int8_t x371 = INT8_MIN;
	static volatile uint64_t x372 = 1590924981134LLU;
	volatile int32_t t68 = 24517489;

    t68 = (x369*(x370==(x371*x372)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x373 = -11;
	uint32_t x374 = 5U;
	int64_t x375 = -1LL;
	static volatile int32_t t69 = 3766;

    t69 = (x373*(x374==(x375*x376)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x388 = -13;

    t70 = (x385*(x386==(x387*x388)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x393 = -1LL;
	uint64_t x395 = 7LLU;
	int32_t x396 = -1;
	static volatile int64_t t71 = 116546518980LL;

    t71 = (x393*(x394==(x395*x396)));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x397 = 0;
	uint16_t x398 = UINT16_MAX;
	volatile uint32_t x399 = 1077U;
	int32_t x400 = -1;
	int32_t t72 = 104;

    t72 = (x397*(x398==(x399*x400)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x401 = 7510LL;
	int32_t x402 = INT32_MIN;
	int16_t x403 = INT16_MAX;
	static int8_t x404 = -1;
	int64_t t73 = -77879LL;

    t73 = (x401*(x402==(x403*x404)));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint64_t x408 = UINT64_MAX;
	volatile int64_t t74 = -619439LL;

    t74 = (x405*(x406==(x407*x408)));

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x409 = INT16_MIN;
	uint64_t x410 = UINT64_MAX;
	uint64_t x411 = UINT64_MAX;

    t75 = (x409*(x410==(x411*x412)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x413 = -1;
	int32_t x414 = -1;
	uint64_t x415 = 12441495151LLU;
	int32_t x416 = INT32_MAX;
	volatile int32_t t76 = -125796;

    t76 = (x413*(x414==(x415*x416)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x417 = 30U;
	int64_t x418 = INT64_MIN;
	int16_t x419 = -1;
	static uint16_t x420 = 22U;
	int32_t t77 = -1440366;

    t77 = (x417*(x418==(x419*x420)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x421 = 7097U;
	uint64_t x424 = 605314583307972LLU;
	volatile int32_t t78 = 0;

    t78 = (x421*(x422==(x423*x424)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x425 = INT32_MIN;
	int8_t x426 = 15;
	static int16_t x427 = -1;
	volatile int32_t t79 = -1032750365;

    t79 = (x425*(x426==(x427*x428)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x429 = INT64_MIN;
	int64_t x430 = -6374355LL;
	int16_t x431 = INT16_MIN;
	static int8_t x432 = -17;
	volatile int64_t t80 = -9235326256361LL;

    t80 = (x429*(x430==(x431*x432)));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x433 = INT32_MIN;
	int16_t x434 = 1;
	uint8_t x435 = UINT8_MAX;
	volatile int32_t t81 = 12869653;

    t81 = (x433*(x434==(x435*x436)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x442 = 26LLU;
	int16_t x443 = INT16_MIN;
	uint16_t x444 = 3U;
	int32_t t82 = -82588631;

    t82 = (x441*(x442==(x443*x444)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x449 = 1162234409933170527LLU;
	int8_t x450 = 11;
	int8_t x451 = 57;
	int8_t x452 = 0;
	uint64_t t83 = 1288626LLU;

    t83 = (x449*(x450==(x451*x452)));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x454 = INT16_MIN;
	volatile uint16_t x456 = 7U;

    t84 = (x453*(x454==(x455*x456)));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x457 = 21261U;
	uint32_t x458 = UINT32_MAX;
	volatile uint8_t x460 = 31U;
	static uint32_t t85 = 2477122U;

    t85 = (x457*(x458==(x459*x460)));

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x465 = INT8_MIN;
	int64_t x466 = -1LL;
	uint64_t x468 = 23465688863748262LLU;

    t86 = (x465*(x466==(x467*x468)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x469 = 5160;
	int8_t x470 = -1;
	uint32_t x471 = UINT32_MAX;

    t87 = (x469*(x470==(x471*x472)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x477 = -23;
	int16_t x478 = -1;
	int64_t x479 = -1LL;
	int32_t x480 = INT32_MIN;
	static volatile int32_t t88 = -3390155;

    t88 = (x477*(x478==(x479*x480)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x482 = UINT8_MAX;
	volatile uint64_t x483 = 997396306022205319LLU;
	static int32_t x484 = 6492;
	int32_t t89 = 226791;

    t89 = (x481*(x482==(x483*x484)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x487 = -1;
	volatile int8_t x488 = 0;
	volatile int32_t t90 = 243568;

    t90 = (x485*(x486==(x487*x488)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x489 = 2674092522LLU;
	volatile int64_t x490 = INT64_MIN;
	int64_t x491 = 9LL;
	uint64_t x492 = UINT64_MAX;
	volatile uint64_t t91 = 4062490516LLU;

    t91 = (x489*(x490==(x491*x492)));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x493 = -1;
	static uint32_t x494 = UINT32_MAX;
	static int32_t t92 = -1074409;

    t92 = (x493*(x494==(x495*x496)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x497 = INT8_MAX;
	uint8_t x498 = 11U;
	static uint16_t x499 = 1620U;
	static int8_t x500 = 52;
	static int32_t t93 = 1;

    t93 = (x497*(x498==(x499*x500)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x501 = UINT32_MAX;
	volatile int16_t x502 = INT16_MIN;
	uint8_t x503 = UINT8_MAX;
	uint32_t x504 = UINT32_MAX;
	uint32_t t94 = 3998267U;

    t94 = (x501*(x502==(x503*x504)));

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x506 = INT8_MIN;
	static uint32_t x507 = 491U;
	int8_t x508 = INT8_MIN;

    t95 = (x505*(x506==(x507*x508)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x518 = -9;
	static int16_t x519 = INT16_MAX;
	volatile uint32_t x520 = UINT32_MAX;
	volatile uint32_t t96 = 95U;

    t96 = (x517*(x518==(x519*x520)));

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x529 = -1;
	int8_t x530 = -32;
	int8_t x532 = INT8_MIN;
	int32_t t97 = 0;

    t97 = (x529*(x530==(x531*x532)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x533 = INT16_MIN;
	static uint32_t x534 = 252227043U;
	int16_t x536 = -1;

    t98 = (x533*(x534==(x535*x536)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile uint64_t x538 = 40784802535232LLU;
	int16_t x540 = -1;
	volatile uint32_t t99 = 33926U;

    t99 = (x537*(x538==(x539*x540)));

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x541 = -1;
	uint16_t x542 = UINT16_MAX;
	uint16_t x544 = 0U;
	static int32_t t100 = -3360351;

    t100 = (x541*(x542==(x543*x544)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint16_t x546 = 4854U;
	uint8_t x547 = UINT8_MAX;
	int8_t x548 = INT8_MIN;
	int32_t t101 = 12481549;

    t101 = (x545*(x546==(x547*x548)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x550 = UINT16_MAX;
	int32_t x551 = -41;
	int16_t x552 = INT16_MIN;
	static uint32_t t102 = 997975843U;

    t102 = (x549*(x550==(x551*x552)));

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x557 = INT64_MIN;
	volatile uint32_t x558 = UINT32_MAX;
	int8_t x559 = -8;
	uint32_t x560 = UINT32_MAX;
	int64_t t103 = -184LL;

    t103 = (x557*(x558==(x559*x560)));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint64_t x562 = 104171624418659LLU;
	int64_t x563 = -874996LL;

    t104 = (x561*(x562==(x563*x564)));

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x567 = -352345;
	volatile uint32_t x568 = UINT32_MAX;
	volatile int32_t t105 = 4577;

    t105 = (x565*(x566==(x567*x568)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x569 = INT32_MIN;
	static int32_t x570 = -2;
	volatile uint16_t x571 = UINT16_MAX;
	volatile uint32_t x572 = 72454U;
	static volatile int32_t t106 = -14438;

    t106 = (x569*(x570==(x571*x572)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x573 = UINT16_MAX;
	uint16_t x574 = UINT16_MAX;
	uint16_t x576 = 1329U;
	int32_t t107 = -13;

    t107 = (x573*(x574==(x575*x576)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x577 = 3LL;
	uint16_t x579 = 1U;
	static int64_t x580 = -1LL;
	int64_t t108 = -2584LL;

    t108 = (x577*(x578==(x579*x580)));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x581 = 79U;
	int16_t x582 = -1;
	int8_t x583 = INT8_MIN;
	int64_t x584 = -1LL;
	static int32_t t109 = 11748;

    t109 = (x581*(x582==(x583*x584)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x598 = 0LL;
	int32_t x600 = -1;

    t110 = (x597*(x598==(x599*x600)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x602 = 1;
	int32_t x604 = -1;
	volatile int32_t t111 = -625853;

    t111 = (x601*(x602==(x603*x604)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x609 = -3;
	uint8_t x611 = 9U;
	static volatile uint32_t x612 = 48257U;
	static volatile int32_t t112 = 8;

    t112 = (x609*(x610==(x611*x612)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint8_t x613 = UINT8_MAX;
	int8_t x614 = INT8_MAX;
	uint8_t x615 = 2U;
	int32_t t113 = 6;

    t113 = (x613*(x614==(x615*x616)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x621 = INT64_MAX;
	static uint64_t x622 = UINT64_MAX;
	uint32_t x623 = 221094329U;
	int16_t x624 = INT16_MIN;
	volatile int64_t t114 = 13513LL;

    t114 = (x621*(x622==(x623*x624)));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x626 = INT8_MIN;
	int32_t x628 = -1;
	volatile int32_t t115 = -67275;

    t115 = (x625*(x626==(x627*x628)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x629 = -1;
	int16_t x630 = INT16_MAX;
	int32_t x632 = -4;
	int32_t t116 = 1;

    t116 = (x629*(x630==(x631*x632)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x633 = -5894036151LL;
	int8_t x634 = INT8_MIN;
	volatile int8_t x635 = INT8_MIN;
	static int8_t x636 = -29;
	static int64_t t117 = 155LL;

    t117 = (x633*(x634==(x635*x636)));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x637 = 81;
	int8_t x638 = -1;
	int16_t x639 = INT16_MIN;
	static uint16_t x640 = UINT16_MAX;
	int32_t t118 = -91;

    t118 = (x637*(x638==(x639*x640)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x645 = 831341U;
	int64_t x646 = INT64_MIN;
	int32_t x647 = -1;
	uint32_t t119 = 25U;

    t119 = (x645*(x646==(x647*x648)));

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x649 = UINT32_MAX;
	int8_t x650 = -15;
	uint8_t x651 = UINT8_MAX;
	uint8_t x652 = 0U;
	uint32_t t120 = 844U;

    t120 = (x649*(x650==(x651*x652)));

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x653 = INT32_MIN;
	volatile int64_t x654 = INT64_MAX;
	volatile int8_t x656 = INT8_MIN;
	volatile int32_t t121 = 1417;

    t121 = (x653*(x654==(x655*x656)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x657 = 60;
	int32_t x658 = -1;
	static int64_t x659 = 6785052407858LL;
	volatile int16_t x660 = INT16_MIN;
	static volatile int32_t t122 = -37007;

    t122 = (x657*(x658==(x659*x660)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint8_t x665 = 1U;
	uint8_t x667 = UINT8_MAX;
	volatile int32_t t123 = 1;

    t123 = (x665*(x666==(x667*x668)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x669 = INT16_MIN;
	uint8_t x670 = UINT8_MAX;
	volatile uint16_t x672 = 16753U;
	int32_t t124 = -5592;

    t124 = (x669*(x670==(x671*x672)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x674 = 2;
	uint16_t x675 = UINT16_MAX;
	int16_t x676 = -3;
	volatile int64_t t125 = 6891157LL;

    t125 = (x673*(x674==(x675*x676)));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x678 = -1;
	int16_t x679 = -1;
	uint64_t x680 = 281360791858437394LLU;
	volatile int32_t t126 = 7988;

    t126 = (x677*(x678==(x679*x680)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x691 = 227499LLU;
	int32_t t127 = 8870;

    t127 = (x689*(x690==(x691*x692)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x694 = UINT16_MAX;
	static uint16_t x695 = 3U;
	uint64_t x696 = 6LLU;

    t128 = (x693*(x694==(x695*x696)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x697 = INT64_MAX;
	uint64_t x698 = 11429034LLU;
	static uint32_t x699 = 0U;
	int32_t x700 = -1;
	int64_t t129 = -11428LL;

    t129 = (x697*(x698==(x699*x700)));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x709 = INT8_MIN;
	uint8_t x711 = 54U;
	int32_t x712 = 24913500;
	int32_t t130 = 157916063;

    t130 = (x709*(x710==(x711*x712)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x713 = INT16_MIN;
	static volatile uint64_t x714 = 182LLU;
	int64_t x715 = -1LL;
	volatile int32_t t131 = 59016;

    t131 = (x713*(x714==(x715*x716)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x718 = -9669206856213LL;
	uint16_t x719 = UINT16_MAX;
	int16_t x720 = -4300;
	volatile int32_t t132 = 25554880;

    t132 = (x717*(x718==(x719*x720)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x721 = INT8_MAX;
	int8_t x722 = -10;
	static int32_t t133 = 1;

    t133 = (x721*(x722==(x723*x724)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x725 = INT8_MAX;
	int16_t x726 = 50;
	uint8_t x727 = 31U;
	int16_t x728 = INT16_MIN;
	int32_t t134 = -6;

    t134 = (x725*(x726==(x727*x728)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x729 = INT32_MIN;
	uint8_t x730 = 26U;
	uint32_t x731 = 3U;

    t135 = (x729*(x730==(x731*x732)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x734 = 1;
	uint16_t x735 = 3U;
	uint32_t x736 = 6870774U;
	static uint32_t t136 = 3360U;

    t136 = (x733*(x734==(x735*x736)));

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x738 = 15384U;
	uint64_t x739 = UINT64_MAX;
	volatile uint8_t x740 = 54U;

    t137 = (x737*(x738==(x739*x740)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x745 = -1;
	static uint8_t x748 = 1U;
	int32_t t138 = -211255868;

    t138 = (x745*(x746==(x747*x748)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint16_t x750 = 7414U;
	volatile int16_t x752 = -107;
	int32_t t139 = 107;

    t139 = (x749*(x750==(x751*x752)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x754 = 1;
	int8_t x755 = 0;
	uint32_t x756 = 109322376U;

    t140 = (x753*(x754==(x755*x756)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x758 = -451;
	uint64_t x759 = 1778884689LLU;
	uint16_t x760 = 27119U;
	volatile int32_t t141 = -513712998;

    t141 = (x757*(x758==(x759*x760)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x765 = 24319158685225LLU;
	volatile int16_t x766 = INT16_MIN;
	int8_t x767 = -1;
	static uint32_t x768 = 745607U;
	volatile uint64_t t142 = 20725520037826922LLU;

    t142 = (x765*(x766==(x767*x768)));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x774 = 6U;
	uint8_t x775 = 2U;
	volatile int8_t x776 = INT8_MIN;

    t143 = (x773*(x774==(x775*x776)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x777 = 7U;
	uint8_t x778 = 28U;
	uint32_t x779 = 28U;
	static int32_t t144 = -5;

    t144 = (x777*(x778==(x779*x780)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x782 = INT64_MIN;
	static int16_t x783 = INT16_MIN;
	int8_t x784 = 8;
	volatile int32_t t145 = -265987;

    t145 = (x781*(x782==(x783*x784)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x793 = INT16_MAX;
	int8_t x794 = INT8_MIN;
	int8_t x795 = INT8_MIN;
	int64_t x796 = 23087981LL;
	static int32_t t146 = 0;

    t146 = (x793*(x794==(x795*x796)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile uint8_t x801 = UINT8_MAX;
	uint8_t x802 = UINT8_MAX;
	volatile int64_t x803 = INT64_MAX;
	int16_t x804 = -1;
	int32_t t147 = 420318;

    t147 = (x801*(x802==(x803*x804)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x805 = 1;
	uint8_t x806 = 1U;
	static volatile int8_t x807 = 4;
	volatile int16_t x808 = INT16_MIN;
	volatile int32_t t148 = -63;

    t148 = (x805*(x806==(x807*x808)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x821 = 11975LL;
	int32_t x822 = INT32_MIN;
	int16_t x823 = -1;
	int8_t x824 = INT8_MAX;
	volatile int64_t t149 = 24111578582296979LL;

    t149 = (x821*(x822==(x823*x824)));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x826 = INT8_MIN;
	uint8_t x827 = 10U;
	volatile uint8_t x828 = 17U;
	volatile int32_t t150 = -1341;

    t150 = (x825*(x826==(x827*x828)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x829 = INT8_MAX;
	uint32_t x830 = 594U;
	uint32_t x831 = UINT32_MAX;
	static volatile int8_t x832 = INT8_MAX;
	volatile int32_t t151 = 29714462;

    t151 = (x829*(x830==(x831*x832)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x833 = INT64_MAX;
	static int32_t x834 = INT32_MIN;
	int8_t x835 = INT8_MIN;
	volatile int64_t x836 = -1LL;
	int64_t t152 = -4491775216747656LL;

    t152 = (x833*(x834==(x835*x836)));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x837 = INT8_MAX;
	uint8_t x838 = 0U;
	int32_t x839 = INT32_MIN;
	int64_t x840 = -1LL;
	volatile int32_t t153 = -37224213;

    t153 = (x837*(x838==(x839*x840)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x841 = -1;
	static volatile int64_t x843 = INT64_MIN;
	uint64_t x844 = UINT64_MAX;
	static int32_t t154 = -1099;

    t154 = (x841*(x842==(x843*x844)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x848 = UINT64_MAX;
	volatile int32_t t155 = 16;

    t155 = (x845*(x846==(x847*x848)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x849 = -4412028327621959LL;
	int16_t x850 = -1;
	uint32_t x851 = 1981U;
	int8_t x852 = -1;

    t156 = (x849*(x850==(x851*x852)));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint16_t x853 = UINT16_MAX;
	int32_t x854 = INT32_MIN;
	int8_t x855 = -1;
	static int16_t x856 = -1;
	volatile int32_t t157 = -971;

    t157 = (x853*(x854==(x855*x856)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x857 = 7;
	static volatile uint32_t x858 = 60955U;
	static int32_t x859 = -7;
	volatile int8_t x860 = INT8_MAX;
	volatile int32_t t158 = 67437;

    t158 = (x857*(x858==(x859*x860)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x865 = INT64_MAX;
	uint8_t x866 = 14U;
	static volatile int64_t x867 = -13566129668881938LL;
	uint64_t x868 = 11354807149841LLU;
	int64_t t159 = 283LL;

    t159 = (x865*(x866==(x867*x868)));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x870 = 3U;
	uint64_t x871 = UINT64_MAX;
	static int64_t x872 = -1LL;
	volatile int32_t t160 = 7907322;

    t160 = (x869*(x870==(x871*x872)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x874 = INT64_MAX;
	uint32_t x875 = 438977U;
	int32_t t161 = 7;

    t161 = (x873*(x874==(x875*x876)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x877 = INT16_MAX;
	int64_t x878 = 235732143741970767LL;
	int8_t x879 = INT8_MAX;
	int16_t x880 = INT16_MIN;
	volatile int32_t t162 = -26;

    t162 = (x877*(x878==(x879*x880)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x881 = INT16_MIN;
	int32_t t163 = -419878;

    t163 = (x881*(x882==(x883*x884)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x885 = INT32_MAX;
	static int16_t x887 = -10;
	int32_t x888 = -1;
	int32_t t164 = 455;

    t164 = (x885*(x886==(x887*x888)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x889 = UINT16_MAX;
	int32_t x890 = 34864;
	static uint64_t x892 = 1745LLU;
	int32_t t165 = 1049103195;

    t165 = (x889*(x890==(x891*x892)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x894 = -12439;
	int32_t x895 = -1;
	int32_t t166 = -117055;

    t166 = (x893*(x894==(x895*x896)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x898 = 11LLU;
	volatile uint16_t x899 = 1905U;
	int16_t x900 = INT16_MAX;
	int32_t t167 = 64832438;

    t167 = (x897*(x898==(x899*x900)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x905 = INT32_MIN;
	int16_t x906 = -2;
	static uint64_t x907 = UINT64_MAX;

    t168 = (x905*(x906==(x907*x908)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x909 = -5;
	uint64_t x910 = UINT64_MAX;
	uint64_t x912 = 114916065077664LLU;
	volatile int32_t t169 = 1812067;

    t169 = (x909*(x910==(x911*x912)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x923 = UINT16_MAX;
	int32_t x924 = 3253;
	int32_t t170 = -5792154;

    t170 = (x921*(x922==(x923*x924)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x927 = 2579945;
	static volatile int8_t x928 = 47;
	volatile int32_t t171 = -3145026;

    t171 = (x925*(x926==(x927*x928)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x930 = INT16_MIN;
	static volatile int64_t x931 = INT64_MIN;
	int32_t t172 = -4768129;

    t172 = (x929*(x930==(x931*x932)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x933 = 9;
	uint16_t x934 = UINT16_MAX;
	uint32_t x935 = UINT32_MAX;
	int32_t x936 = INT32_MIN;
	volatile int32_t t173 = -73311098;

    t173 = (x933*(x934==(x935*x936)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x937 = INT16_MIN;
	int32_t x938 = INT32_MAX;
	static int8_t x939 = 55;
	static volatile int8_t x940 = 1;
	int32_t t174 = 666757060;

    t174 = (x937*(x938==(x939*x940)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x941 = 316143;
	int64_t x942 = -1LL;
	volatile uint16_t x943 = 1422U;
	static uint8_t x944 = 54U;

    t175 = (x941*(x942==(x943*x944)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint16_t x949 = 3U;
	uint64_t x951 = 194051086505LLU;
	static volatile int8_t x952 = INT8_MIN;

    t176 = (x949*(x950==(x951*x952)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x953 = -1;
	static int32_t x955 = -1;
	int8_t x956 = -1;
	volatile int32_t t177 = -2033250;

    t177 = (x953*(x954==(x955*x956)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x957 = INT16_MIN;
	volatile int8_t x958 = 1;
	uint16_t x959 = UINT16_MAX;

    t178 = (x957*(x958==(x959*x960)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x973 = INT32_MAX;
	static int8_t x974 = 1;
	int16_t x975 = -5;
	volatile uint64_t x976 = 38888LLU;

    t179 = (x973*(x974==(x975*x976)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x977 = INT64_MIN;
	uint64_t x978 = 10236704LLU;
	int8_t x980 = INT8_MIN;
	volatile int64_t t180 = -1009681549618751LL;

    t180 = (x977*(x978==(x979*x980)));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile uint64_t x982 = 33766LLU;
	int8_t x983 = -1;
	int8_t x984 = INT8_MIN;

    t181 = (x981*(x982==(x983*x984)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x989 = INT16_MAX;
	static int32_t x991 = INT32_MIN;
	volatile uint32_t x992 = 801528U;
	volatile int32_t t182 = 0;

    t182 = (x989*(x990==(x991*x992)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x993 = INT32_MAX;
	int64_t x994 = INT64_MIN;
	uint64_t x995 = UINT64_MAX;
	uint64_t x996 = 175LLU;
	static int32_t t183 = -1872752;

    t183 = (x993*(x994==(x995*x996)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x997 = INT32_MIN;
	volatile int32_t x998 = INT32_MAX;
	volatile int32_t t184 = -5387;

    t184 = (x997*(x998==(x999*x1000)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile uint32_t x1001 = 3179097U;
	int32_t x1002 = -1;
	int8_t x1003 = INT8_MIN;
	static volatile int16_t x1004 = INT16_MIN;
	uint32_t t185 = 10U;

    t185 = (x1001*(x1002==(x1003*x1004)));

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x1005 = -2783773101011LL;
	uint8_t x1007 = 96U;
	int64_t t186 = -5863LL;

    t186 = (x1005*(x1006==(x1007*x1008)));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x1009 = UINT8_MAX;
	static volatile int8_t x1010 = 6;
	int32_t x1011 = -1;
	static int32_t t187 = -8098847;

    t187 = (x1009*(x1010==(x1011*x1012)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1013 = 7780567;
	static uint32_t x1014 = 14U;
	uint64_t x1015 = 59360LLU;
	static volatile int32_t t188 = 1894;

    t188 = (x1013*(x1014==(x1015*x1016)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1017 = INT32_MAX;
	int8_t x1019 = -46;
	volatile int16_t x1020 = INT16_MIN;
	int32_t t189 = 31;

    t189 = (x1017*(x1018==(x1019*x1020)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x1034 = -1;
	uint16_t x1035 = 3749U;
	volatile int64_t x1036 = -1LL;
	int32_t t190 = 8;

    t190 = (x1033*(x1034==(x1035*x1036)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x1037 = 3U;
	static int64_t x1039 = INT64_MAX;
	uint64_t x1040 = UINT64_MAX;
	volatile int32_t t191 = 0;

    t191 = (x1037*(x1038==(x1039*x1040)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x1045 = INT16_MIN;
	int64_t x1046 = -1885612515LL;
	int64_t x1047 = 15039738LL;
	int8_t x1048 = -1;

    t192 = (x1045*(x1046==(x1047*x1048)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1049 = INT8_MIN;
	uint64_t x1051 = 3482325LLU;

    t193 = (x1049*(x1050==(x1051*x1052)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x1053 = -1;
	int32_t x1054 = 3528;
	uint8_t x1055 = UINT8_MAX;
	volatile int32_t t194 = -4;

    t194 = (x1053*(x1054==(x1055*x1056)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x1057 = 29650815649967LLU;
	uint16_t x1059 = 25910U;
	volatile uint64_t t195 = 1757155834LLU;

    t195 = (x1057*(x1058==(x1059*x1060)));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x1061 = UINT32_MAX;
	static int8_t x1062 = 1;
	volatile uint32_t x1063 = UINT32_MAX;
	static volatile uint32_t t196 = 5U;

    t196 = (x1061*(x1062==(x1063*x1064)));

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1065 = 5;
	uint32_t x1066 = UINT32_MAX;
	int8_t x1068 = -1;
	volatile int32_t t197 = 61;

    t197 = (x1065*(x1066==(x1067*x1068)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x1073 = -4126420;
	int32_t x1074 = INT32_MIN;
	volatile int64_t x1075 = INT64_MAX;
	volatile int32_t t198 = 6;

    t198 = (x1073*(x1074==(x1075*x1076)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1077 = INT32_MIN;
	volatile int32_t x1078 = INT32_MIN;
	int32_t x1079 = INT32_MIN;
	static uint64_t x1080 = UINT64_MAX;
	int32_t t199 = -61;

    t199 = (x1077*(x1078==(x1079*x1080)));

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

