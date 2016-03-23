
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

int64_t x1 = INT64_MAX;
int16_t x2 = -23;
int8_t x3 = INT8_MIN;
int32_t t1 = -5108;
static uint64_t x11 = 7588415168LLU;
uint64_t t2 = 3087576LLU;
uint16_t x14 = UINT16_MAX;
static int32_t t3 = -93;
int64_t x20 = -30LL;
uint32_t x28 = 42894U;
int16_t x29 = INT16_MIN;
static int32_t x30 = INT32_MIN;
uint8_t x32 = 101U;
int8_t x51 = -1;
int8_t x60 = 13;
int16_t x66 = INT16_MIN;
int32_t t13 = 438;
int8_t x75 = -3;
static volatile int32_t t14 = -488379;
static volatile int32_t t15 = 35868;
uint64_t x85 = 1840711956782586LLU;
int16_t x95 = INT16_MIN;
volatile int8_t x96 = INT8_MIN;
volatile int32_t t19 = -76067;
int32_t x97 = 3063;
volatile int16_t x103 = INT16_MIN;
int16_t x106 = -1;
volatile uint64_t x120 = 18LLU;
volatile int64_t t26 = 6LL;
int16_t x132 = 6359;
volatile int64_t t27 = INT64_MIN;
uint64_t x143 = 22711805624361LLU;
int64_t x144 = INT64_MIN;
int32_t t29 = INT32_MAX;
volatile uint8_t x149 = 0U;
uint64_t x151 = UINT64_MAX;
int32_t t30 = 13;
uint32_t x154 = UINT32_MAX;
int16_t x161 = 7;
volatile int64_t x174 = INT64_MIN;
volatile uint32_t x177 = 759U;
uint32_t x179 = UINT32_MAX;
int32_t x180 = INT32_MIN;
volatile uint64_t x182 = UINT64_MAX;
int64_t x188 = 18LL;
int16_t x191 = -1;
int64_t x195 = 2352588LL;
static int32_t t41 = 0;
volatile uint16_t x200 = UINT16_MAX;
uint32_t x215 = 8510233U;
int32_t x230 = INT32_MIN;
int64_t x232 = 4038138462LL;
volatile int32_t t46 = -30309;
uint16_t x237 = 155U;
int32_t x242 = 66235;
static int8_t x244 = 1;
int32_t x245 = 146;
int32_t x250 = INT32_MAX;
int64_t x260 = -1LL;
uint32_t x263 = 96756856U;
int8_t x264 = 3;
int8_t x275 = -1;
int32_t t56 = -1639;
uint16_t x299 = 1872U;
int8_t x307 = INT8_MIN;
int16_t x328 = -1;
int16_t x330 = -1;
int64_t x332 = INT64_MAX;
static volatile int32_t t66 = 15371821;
volatile uint32_t x333 = UINT32_MAX;
static uint16_t x334 = UINT16_MAX;
static volatile uint8_t x337 = 0U;
volatile int32_t x341 = -1;
volatile uint32_t x343 = UINT32_MAX;
volatile int16_t x354 = INT16_MAX;
int64_t x372 = -2455424023LL;
int16_t x382 = INT16_MAX;
int64_t t75 = 5LL;
uint8_t x390 = UINT8_MAX;
int32_t t76 = 8989687;
static int64_t x405 = INT64_MIN;
uint16_t x406 = UINT16_MAX;
static int32_t x408 = -1;
uint16_t x414 = 2U;
int32_t t80 = 1;
int32_t t82 = 1126;
uint8_t x444 = 8U;
int8_t x445 = -12;
volatile uint8_t x469 = 6U;
volatile uint64_t t92 = 23052933LLU;
volatile int16_t x485 = INT16_MIN;
int8_t x487 = -1;
volatile uint64_t x501 = 1664LLU;
uint64_t t95 = 310LLU;
uint16_t x523 = 71U;
int8_t x533 = INT8_MIN;
static int16_t x534 = INT16_MIN;
static int16_t x535 = -1;
uint8_t x542 = 2U;
uint64_t x543 = UINT64_MAX;
int64_t x544 = 5822780LL;
volatile int16_t x553 = INT16_MAX;
uint32_t x562 = UINT32_MAX;
int8_t x569 = -1;
static volatile int32_t t109 = 90473979;
volatile int32_t t111 = INT32_MAX;
int8_t x583 = -2;
int64_t t112 = INT64_MAX;
int8_t x599 = INT8_MIN;
static int32_t x605 = INT32_MIN;
uint32_t x608 = 129528100U;
volatile uint32_t x609 = 144U;
uint32_t x611 = 778U;
int16_t x612 = INT16_MIN;
uint32_t t117 = 3490U;
volatile int8_t x621 = -1;
uint32_t x622 = 15882U;
int8_t x623 = -13;
uint16_t x627 = 2030U;
int16_t x636 = INT16_MIN;
int64_t x641 = -1LL;
volatile int8_t x650 = INT8_MAX;
volatile int32_t t124 = -22952923;
uint16_t x657 = UINT16_MAX;
volatile int64_t x658 = INT64_MIN;
int64_t x662 = INT64_MIN;
volatile int32_t t128 = INT32_MAX;
int16_t x677 = -50;
int16_t x683 = 221;
static int16_t x693 = INT16_MIN;
uint64_t x695 = 14652362777197651LLU;
volatile int32_t t134 = -1;
int32_t x699 = 1;
static volatile uint64_t x701 = 415LLU;
volatile uint32_t t139 = 12829U;
uint64_t x721 = 40525LLU;
static volatile int16_t x723 = -2;
uint8_t x736 = UINT8_MAX;
uint16_t x742 = UINT16_MAX;
uint8_t x749 = UINT8_MAX;
static volatile int64_t x753 = INT64_MIN;
volatile int8_t x756 = 0;
int32_t x762 = -47089;
static volatile uint32_t x763 = 87118U;
static int8_t x764 = 2;
static int16_t x765 = 1;
static int16_t x768 = 230;
volatile int32_t t150 = -3;
int8_t x769 = -25;
static int8_t x771 = 1;
static volatile uint32_t x784 = 4U;
int16_t x787 = -2189;
volatile uint32_t t156 = 1434372U;
static int32_t x793 = -1279;
uint8_t x796 = 1U;
int32_t t157 = -769;
static int16_t x800 = -1;
uint8_t x803 = UINT8_MAX;
volatile int16_t x809 = 94;
static int32_t x811 = INT32_MAX;
int8_t x813 = INT8_MIN;
volatile int16_t x816 = 0;
int32_t t161 = 29033416;
volatile uint32_t x818 = 238822183U;
int16_t x820 = INT16_MAX;
volatile int32_t t162 = -13150;
volatile int8_t x826 = -1;
volatile int16_t x827 = -129;
volatile int64_t x862 = INT64_MAX;
uint64_t x864 = UINT64_MAX;
volatile int32_t t170 = -292;
int32_t x881 = INT32_MIN;
uint8_t x883 = 1U;
int64_t x884 = INT64_MIN;
static uint16_t x891 = UINT16_MAX;
int16_t x892 = INT16_MAX;
volatile int64_t x906 = -30LL;
volatile uint64_t x909 = UINT64_MAX;
uint16_t x910 = UINT16_MAX;
uint32_t x912 = 7U;
uint64_t t181 = UINT64_MAX;
static uint64_t x915 = UINT64_MAX;
static uint16_t x929 = 31U;
volatile int32_t t184 = -15972738;
int8_t x934 = 17;
uint32_t x935 = UINT32_MAX;
volatile uint64_t x937 = 3573676LLU;
int16_t x940 = -1;
volatile uint32_t x951 = UINT32_MAX;
static volatile int32_t t187 = INT32_MAX;
static int8_t x962 = INT8_MAX;
uint8_t x963 = 3U;
static volatile uint8_t x964 = UINT8_MAX;
uint16_t x967 = 70U;
static int64_t t190 = -83949856LL;
int8_t x981 = -52;
static volatile int16_t x990 = INT16_MIN;
int32_t x993 = INT32_MIN;
int32_t x996 = 1;
volatile int32_t t194 = INT32_MIN;
volatile uint16_t x998 = 27604U;
int32_t x1001 = 4;
uint64_t x1005 = UINT64_MAX;
int64_t x1007 = 21575939454LL;
int16_t x1008 = 3905;
uint32_t x1011 = UINT32_MAX;


void f0(void) {
    	volatile int32_t x4 = -1;
	int64_t t0 = INT64_MAX;

    t0 = (x1/(x2!=(x3*x4)));

    if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = 0;
	int64_t x6 = -1LL;
	int32_t x7 = INT32_MIN;
	volatile uint64_t x8 = 9LLU;

    t1 = (x5/(x6!=(x7*x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 655LLU;
	volatile int64_t x10 = -25213231LL;
	volatile int64_t x12 = INT64_MIN;

    t2 = (x9/(x10!=(x11*x12)));

    if (t2 != 655LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x13 = 2U;
	uint8_t x15 = 27U;
	volatile uint32_t x16 = 20842200U;

    t3 = (x13/(x14!=(x15*x16)));

    if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = UINT64_MAX;
	int32_t x18 = -91;
	int16_t x19 = -1;
	uint64_t t4 = UINT64_MAX;

    t4 = (x17/(x18!=(x19*x20)));

    if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MIN;
	volatile uint8_t x22 = 52U;
	int32_t x23 = -1;
	int32_t x24 = 132433386;
	volatile int32_t t5 = INT32_MIN;

    t5 = (x21/(x22!=(x23*x24)));

    if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -1LL;
	int16_t x26 = -651;
	int32_t x27 = INT32_MAX;
	int64_t t6 = -11108LL;

    t6 = (x25/(x26!=(x27*x28)));

    if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x31 = UINT32_MAX;
	volatile int32_t t7 = -2269;

    t7 = (x29/(x30!=(x31*x32)));

    if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = -11870992;
	int64_t x38 = INT64_MIN;
	int16_t x39 = 6;
	int8_t x40 = -15;
	volatile int32_t t8 = -149858;

    t8 = (x37/(x38!=(x39*x40)));

    if (t8 != -11870992) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x41 = -1LL;
	volatile uint16_t x42 = UINT16_MAX;
	int8_t x43 = -1;
	uint16_t x44 = 5306U;
	volatile int64_t t9 = -36567931948LL;

    t9 = (x41/(x42!=(x43*x44)));

    if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x49 = INT64_MIN;
	int8_t x50 = 14;
	int8_t x52 = 1;
	static volatile int64_t t10 = INT64_MIN;

    t10 = (x49/(x50!=(x51*x52)));

    if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x53 = 522;
	uint64_t x54 = 1532738133233148557LLU;
	uint64_t x55 = UINT64_MAX;
	uint32_t x56 = UINT32_MAX;
	int32_t t11 = -288366653;

    t11 = (x53/(x54!=(x55*x56)));

    if (t11 != 522) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x57 = -29568410984727LL;
	uint8_t x58 = 54U;
	volatile int64_t x59 = -32496261913279LL;
	static volatile int64_t t12 = 83880LL;

    t12 = (x57/(x58!=(x59*x60)));

    if (t12 != -29568410984727LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x65 = 297U;
	int8_t x67 = INT8_MAX;
	int64_t x68 = 19LL;

    t13 = (x65/(x66!=(x67*x68)));

    if (t13 != 297) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x73 = -1;
	static uint16_t x74 = UINT16_MAX;
	uint8_t x76 = 13U;

    t14 = (x73/(x74!=(x75*x76)));

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x77 = INT8_MIN;
	int8_t x78 = INT8_MIN;
	uint16_t x79 = UINT16_MAX;
	volatile int8_t x80 = -1;

    t15 = (x77/(x78!=(x79*x80)));

    if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x81 = 1204554741431LLU;
	int64_t x82 = INT64_MAX;
	static int8_t x83 = INT8_MIN;
	static int8_t x84 = INT8_MAX;
	uint64_t t16 = 47LLU;

    t16 = (x81/(x82!=(x83*x84)));

    if (t16 != 1204554741431LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x86 = INT64_MIN;
	int8_t x87 = INT8_MAX;
	int16_t x88 = 147;
	volatile uint64_t t17 = 1152463LLU;

    t17 = (x85/(x86!=(x87*x88)));

    if (t17 != 1840711956782586LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x89 = 0U;
	int8_t x90 = -1;
	int8_t x91 = INT8_MIN;
	volatile int8_t x92 = -1;
	volatile uint32_t t18 = 607030U;

    t18 = (x89/(x90!=(x91*x92)));

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x93 = INT16_MAX;
	volatile int64_t x94 = INT64_MIN;

    t19 = (x93/(x94!=(x95*x96)));

    if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x98 = 51506987698LL;
	int16_t x99 = INT16_MAX;
	uint8_t x100 = 8U;
	int32_t t20 = -4;

    t20 = (x97/(x98!=(x99*x100)));

    if (t20 != 3063) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x101 = 1U;
	int8_t x102 = -1;
	uint32_t x104 = UINT32_MAX;
	static uint32_t t21 = 1U;

    t21 = (x101/(x102!=(x103*x104)));

    if (t21 != 1U) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x105 = INT32_MIN;
	volatile int16_t x107 = -1;
	uint16_t x108 = 66U;
	static int32_t t22 = INT32_MIN;

    t22 = (x105/(x106!=(x107*x108)));

    if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x109 = 117LLU;
	static uint64_t x110 = 573777621710LLU;
	int32_t x111 = -1;
	uint16_t x112 = UINT16_MAX;
	uint64_t t23 = 580141LLU;

    t23 = (x109/(x110!=(x111*x112)));

    if (t23 != 117LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x117 = INT32_MAX;
	uint64_t x118 = 607186LLU;
	uint16_t x119 = 44U;
	int32_t t24 = INT32_MAX;

    t24 = (x117/(x118!=(x119*x120)));

    if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x121 = -31860824;
	volatile int16_t x122 = -1;
	volatile int16_t x123 = 1;
	int64_t x124 = INT64_MIN;
	int32_t t25 = -1191;

    t25 = (x121/(x122!=(x123*x124)));

    if (t25 != -31860824) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x125 = -1LL;
	uint8_t x126 = 13U;
	int8_t x127 = INT8_MIN;
	uint8_t x128 = UINT8_MAX;

    t26 = (x125/(x126!=(x127*x128)));

    if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x129 = INT64_MIN;
	static int16_t x130 = INT16_MAX;
	volatile int8_t x131 = 1;

    t27 = (x129/(x130!=(x131*x132)));

    if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x141 = 0U;
	uint16_t x142 = 5U;
	volatile int32_t t28 = 349222410;

    t28 = (x141/(x142!=(x143*x144)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x145 = INT32_MAX;
	uint16_t x146 = 21U;
	uint32_t x147 = UINT32_MAX;
	int32_t x148 = -1;

    t29 = (x145/(x146!=(x147*x148)));

    if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x150 = INT16_MIN;
	int32_t x152 = INT32_MIN;

    t30 = (x149/(x150!=(x151*x152)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x153 = 1758941U;
	uint8_t x155 = 0U;
	int64_t x156 = -10050228LL;
	volatile uint32_t t31 = 100906424U;

    t31 = (x153/(x154!=(x155*x156)));

    if (t31 != 1758941U) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x157 = INT16_MIN;
	volatile int8_t x158 = -48;
	uint64_t x159 = UINT64_MAX;
	int8_t x160 = 1;
	static volatile int32_t t32 = 10663480;

    t32 = (x157/(x158!=(x159*x160)));

    if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x162 = -1LL;
	volatile int16_t x163 = 7;
	uint64_t x164 = 120813422357LLU;
	static int32_t t33 = 54995;

    t33 = (x161/(x162!=(x163*x164)));

    if (t33 != 7) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x165 = INT64_MIN;
	uint8_t x166 = 15U;
	int8_t x167 = INT8_MIN;
	uint32_t x168 = 5U;
	volatile int64_t t34 = INT64_MIN;

    t34 = (x165/(x166!=(x167*x168)));

    if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x169 = UINT16_MAX;
	int16_t x170 = -1;
	volatile uint16_t x171 = 93U;
	uint16_t x172 = 57U;
	int32_t t35 = 4372;

    t35 = (x169/(x170!=(x171*x172)));

    if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x173 = INT8_MAX;
	volatile uint8_t x175 = 29U;
	uint8_t x176 = 4U;
	volatile int32_t t36 = -1734;

    t36 = (x173/(x174!=(x175*x176)));

    if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x178 = UINT8_MAX;
	uint32_t t37 = 151733202U;

    t37 = (x177/(x178!=(x179*x180)));

    if (t37 != 759U) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x181 = -1LL;
	static int16_t x183 = 0;
	int32_t x184 = INT32_MAX;
	static volatile int64_t t38 = -28LL;

    t38 = (x181/(x182!=(x183*x184)));

    if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x185 = UINT16_MAX;
	uint32_t x186 = 91580U;
	int32_t x187 = 80234;
	volatile int32_t t39 = -307441198;

    t39 = (x185/(x186!=(x187*x188)));

    if (t39 != 65535) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x189 = 1U;
	int16_t x190 = 133;
	static volatile uint16_t x192 = 842U;
	int32_t t40 = 45487;

    t40 = (x189/(x190!=(x191*x192)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x193 = -1;
	uint32_t x194 = UINT32_MAX;
	uint32_t x196 = UINT32_MAX;

    t41 = (x193/(x194!=(x195*x196)));

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x197 = INT8_MIN;
	uint8_t x198 = 1U;
	volatile int8_t x199 = 7;
	int32_t t42 = 1;

    t42 = (x197/(x198!=(x199*x200)));

    if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x201 = UINT32_MAX;
	uint64_t x202 = UINT64_MAX;
	static int32_t x203 = INT32_MAX;
	uint32_t x204 = 2877975U;
	volatile uint32_t t43 = UINT32_MAX;

    t43 = (x201/(x202!=(x203*x204)));

    if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x213 = INT8_MIN;
	static int16_t x214 = -1;
	int8_t x216 = 4;
	volatile int32_t t44 = 221986;

    t44 = (x213/(x214!=(x215*x216)));

    if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int64_t x217 = INT64_MIN;
	int32_t x218 = -1;
	volatile int32_t x219 = INT32_MIN;
	uint32_t x220 = 5996706U;
	int64_t t45 = INT64_MIN;

    t45 = (x217/(x218!=(x219*x220)));

    if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x229 = INT8_MIN;
	uint32_t x231 = 148029U;

    t46 = (x229/(x230!=(x231*x232)));

    if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x238 = 2239;
	static int8_t x239 = INT8_MIN;
	static uint16_t x240 = 52U;
	volatile int32_t t47 = 900;

    t47 = (x237/(x238!=(x239*x240)));

    if (t47 != 155) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x241 = -1;
	uint32_t x243 = 779603821U;
	volatile int32_t t48 = -792;

    t48 = (x241/(x242!=(x243*x244)));

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x246 = INT16_MIN;
	uint8_t x247 = 3U;
	int16_t x248 = -1;
	static volatile int32_t t49 = 0;

    t49 = (x245/(x246!=(x247*x248)));

    if (t49 != 146) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x249 = INT8_MAX;
	uint64_t x251 = 1956LLU;
	int16_t x252 = INT16_MAX;
	int32_t t50 = 4657652;

    t50 = (x249/(x250!=(x251*x252)));

    if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x257 = -1LL;
	int32_t x258 = -1;
	int32_t x259 = 6680;
	static int64_t t51 = 512687813117302338LL;

    t51 = (x257/(x258!=(x259*x260)));

    if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x261 = -1;
	int16_t x262 = 0;
	volatile int32_t t52 = 253;

    t52 = (x261/(x262!=(x263*x264)));

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x265 = 10U;
	int64_t x266 = INT64_MAX;
	uint32_t x267 = UINT32_MAX;
	int16_t x268 = 30;
	volatile uint32_t t53 = 91U;

    t53 = (x265/(x266!=(x267*x268)));

    if (t53 != 10U) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint16_t x269 = 3U;
	static volatile int32_t x270 = INT32_MIN;
	static uint64_t x271 = UINT64_MAX;
	int8_t x272 = INT8_MAX;
	static volatile int32_t t54 = -34;

    t54 = (x269/(x270!=(x271*x272)));

    if (t54 != 3) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x273 = INT8_MIN;
	static int16_t x274 = INT16_MIN;
	uint32_t x276 = UINT32_MAX;
	volatile int32_t t55 = 55998;

    t55 = (x273/(x274!=(x275*x276)));

    if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x277 = 338;
	int64_t x278 = INT64_MIN;
	int16_t x279 = INT16_MIN;
	uint8_t x280 = 18U;

    t56 = (x277/(x278!=(x279*x280)));

    if (t56 != 338) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x281 = -4;
	volatile uint16_t x282 = 3U;
	int64_t x283 = 456933LL;
	static int16_t x284 = -1;
	int32_t t57 = -310709;

    t57 = (x281/(x282!=(x283*x284)));

    if (t57 != -4) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x289 = 64U;
	static int16_t x290 = -1;
	int32_t x291 = INT32_MIN;
	static int64_t x292 = -1LL;
	volatile uint32_t t58 = 25U;

    t58 = (x289/(x290!=(x291*x292)));

    if (t58 != 64U) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x297 = 8005441401LLU;
	int16_t x298 = 7707;
	int16_t x300 = -821;
	static uint64_t t59 = 9080327LLU;

    t59 = (x297/(x298!=(x299*x300)));

    if (t59 != 8005441401LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x305 = 0;
	static int64_t x306 = -1LL;
	int32_t x308 = 17;
	int32_t t60 = -1863127;

    t60 = (x305/(x306!=(x307*x308)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint16_t x309 = 1538U;
	int32_t x310 = 743336933;
	volatile int8_t x311 = INT8_MIN;
	uint8_t x312 = UINT8_MAX;
	static int32_t t61 = -160715;

    t61 = (x309/(x310!=(x311*x312)));

    if (t61 != 1538) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x313 = UINT16_MAX;
	int32_t x314 = 10666562;
	int64_t x315 = 4692495117455LL;
	int16_t x316 = INT16_MIN;
	int32_t t62 = 90077774;

    t62 = (x313/(x314!=(x315*x316)));

    if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x317 = 105;
	int64_t x318 = -1LL;
	static uint16_t x319 = 381U;
	int32_t x320 = -1;
	volatile int32_t t63 = -63197;

    t63 = (x317/(x318!=(x319*x320)));

    if (t63 != 105) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x321 = -1;
	uint32_t x322 = UINT32_MAX;
	static int8_t x323 = INT8_MIN;
	static int8_t x324 = INT8_MIN;
	int32_t t64 = 120623;

    t64 = (x321/(x322!=(x323*x324)));

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x325 = -24;
	int64_t x326 = INT64_MIN;
	int64_t x327 = INT64_MAX;
	int32_t t65 = -85;

    t65 = (x325/(x326!=(x327*x328)));

    if (t65 != -24) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x329 = INT16_MAX;
	uint64_t x331 = UINT64_MAX;

    t66 = (x329/(x330!=(x331*x332)));

    if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x335 = INT16_MIN;
	int16_t x336 = -15;
	uint32_t t67 = UINT32_MAX;

    t67 = (x333/(x334!=(x335*x336)));

    if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x338 = INT8_MAX;
	static int32_t x339 = -1;
	static volatile int64_t x340 = INT64_MAX;
	volatile int32_t t68 = -10138;

    t68 = (x337/(x338!=(x339*x340)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x342 = INT32_MAX;
	int32_t x344 = 25;
	int32_t t69 = 11;

    t69 = (x341/(x342!=(x343*x344)));

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x353 = -1LL;
	uint8_t x355 = 8U;
	int8_t x356 = 32;
	int64_t t70 = 52072LL;

    t70 = (x353/(x354!=(x355*x356)));

    if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x369 = 2U;
	volatile int16_t x370 = -1872;
	uint32_t x371 = 7U;
	int32_t t71 = 24651;

    t71 = (x369/(x370!=(x371*x372)));

    if (t71 != 2) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x373 = 392U;
	int32_t x374 = -1;
	volatile int32_t x375 = -480;
	int16_t x376 = INT16_MAX;
	volatile int32_t t72 = -458348;

    t72 = (x373/(x374!=(x375*x376)));

    if (t72 != 392) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x377 = INT8_MAX;
	volatile uint16_t x378 = UINT16_MAX;
	int64_t x379 = -1985612LL;
	int16_t x380 = INT16_MIN;
	int32_t t73 = 971890214;

    t73 = (x377/(x378!=(x379*x380)));

    if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x381 = INT8_MIN;
	static volatile int64_t x383 = -10149755LL;
	int32_t x384 = 12085;
	volatile int32_t t74 = -1437;

    t74 = (x381/(x382!=(x383*x384)));

    if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x385 = -1LL;
	static int32_t x386 = 79;
	int64_t x387 = 386443076989LL;
	static int8_t x388 = INT8_MIN;

    t75 = (x385/(x386!=(x387*x388)));

    if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x389 = -1;
	static volatile int32_t x391 = 28;
	uint16_t x392 = 49U;

    t76 = (x389/(x390!=(x391*x392)));

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x397 = 33;
	volatile uint64_t x398 = 1005594576LLU;
	uint16_t x399 = UINT16_MAX;
	int16_t x400 = -477;
	volatile int32_t t77 = -106576;

    t77 = (x397/(x398!=(x399*x400)));

    if (t77 != 33) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x407 = INT8_MIN;
	volatile int64_t t78 = INT64_MIN;

    t78 = (x405/(x406!=(x407*x408)));

    if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x409 = INT64_MAX;
	static int16_t x410 = INT16_MAX;
	uint8_t x411 = 83U;
	int16_t x412 = 3637;
	int64_t t79 = INT64_MAX;

    t79 = (x409/(x410!=(x411*x412)));

    if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x413 = INT8_MIN;
	static int8_t x415 = 23;
	uint64_t x416 = UINT64_MAX;

    t80 = (x413/(x414!=(x415*x416)));

    if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint8_t x417 = UINT8_MAX;
	uint16_t x418 = 331U;
	uint8_t x419 = 0U;
	int64_t x420 = 94LL;
	static volatile int32_t t81 = 13614938;

    t81 = (x417/(x418!=(x419*x420)));

    if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x421 = UINT8_MAX;
	static volatile uint8_t x422 = 5U;
	uint64_t x423 = 39LLU;
	int8_t x424 = -23;

    t82 = (x421/(x422!=(x423*x424)));

    if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x429 = UINT16_MAX;
	int16_t x430 = -1;
	static int32_t x431 = INT32_MIN;
	uint64_t x432 = 4LLU;
	static int32_t t83 = -515153;

    t83 = (x429/(x430!=(x431*x432)));

    if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x433 = INT64_MIN;
	int64_t x434 = -27924730LL;
	uint32_t x435 = 52601115U;
	int16_t x436 = INT16_MIN;
	int64_t t84 = INT64_MIN;

    t84 = (x433/(x434!=(x435*x436)));

    if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x441 = 17870U;
	int32_t x442 = INT32_MIN;
	int16_t x443 = 1247;
	uint32_t t85 = 313858109U;

    t85 = (x441/(x442!=(x443*x444)));

    if (t85 != 17870U) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x446 = 9;
	static uint32_t x447 = 394U;
	uint64_t x448 = UINT64_MAX;
	int32_t t86 = -38115;

    t86 = (x445/(x446!=(x447*x448)));

    if (t86 != -12) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x453 = INT16_MAX;
	int8_t x454 = -1;
	static int16_t x455 = -1;
	int16_t x456 = -1;
	volatile int32_t t87 = 149642415;

    t87 = (x453/(x454!=(x455*x456)));

    if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x457 = INT8_MIN;
	uint32_t x458 = UINT32_MAX;
	volatile uint32_t x459 = UINT32_MAX;
	int8_t x460 = INT8_MAX;
	static volatile int32_t t88 = -860809;

    t88 = (x457/(x458!=(x459*x460)));

    if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x461 = UINT32_MAX;
	static int32_t x462 = INT32_MAX;
	int32_t x463 = INT32_MIN;
	static uint64_t x464 = UINT64_MAX;
	static uint32_t t89 = UINT32_MAX;

    t89 = (x461/(x462!=(x463*x464)));

    if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int64_t x470 = -1LL;
	int16_t x471 = -1;
	int16_t x472 = -119;
	volatile int32_t t90 = 10949739;

    t90 = (x469/(x470!=(x471*x472)));

    if (t90 != 6) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x473 = -1;
	uint64_t x474 = 32906827596859685LLU;
	volatile int16_t x475 = INT16_MAX;
	static int32_t x476 = -1;
	int32_t t91 = 1765;

    t91 = (x473/(x474!=(x475*x476)));

    if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x477 = 28LLU;
	volatile int64_t x478 = INT64_MAX;
	uint8_t x479 = UINT8_MAX;
	uint64_t x480 = 53932976610130LLU;

    t92 = (x477/(x478!=(x479*x480)));

    if (t92 != 28LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint32_t x486 = 26453U;
	static int64_t x488 = -1LL;
	int32_t t93 = -953775;

    t93 = (x485/(x486!=(x487*x488)));

    if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x493 = 2070U;
	uint8_t x494 = 9U;
	int8_t x495 = 0;
	volatile int16_t x496 = -116;
	uint32_t t94 = 11U;

    t94 = (x493/(x494!=(x495*x496)));

    if (t94 != 2070U) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x502 = 16;
	static volatile uint16_t x503 = 28U;
	volatile int64_t x504 = -660LL;

    t95 = (x501/(x502!=(x503*x504)));

    if (t95 != 1664LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x505 = INT8_MAX;
	int8_t x506 = INT8_MIN;
	volatile int32_t x507 = INT32_MIN;
	static volatile uint32_t x508 = UINT32_MAX;
	volatile int32_t t96 = 22;

    t96 = (x505/(x506!=(x507*x508)));

    if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x509 = UINT8_MAX;
	static uint32_t x510 = 1569016794U;
	static volatile int64_t x511 = -1574202279LL;
	volatile uint8_t x512 = 3U;
	static volatile int32_t t97 = -6;

    t97 = (x509/(x510!=(x511*x512)));

    if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x513 = 1U;
	uint32_t x514 = UINT32_MAX;
	int64_t x515 = INT64_MAX;
	uint8_t x516 = 1U;
	int32_t t98 = 0;

    t98 = (x513/(x514!=(x515*x516)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x517 = INT32_MAX;
	int16_t x518 = -1;
	int8_t x519 = -1;
	static int32_t x520 = INT32_MAX;
	int32_t t99 = INT32_MAX;

    t99 = (x517/(x518!=(x519*x520)));

    if (t99 != INT32_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x521 = UINT8_MAX;
	volatile uint32_t x522 = UINT32_MAX;
	uint16_t x524 = UINT16_MAX;
	volatile int32_t t100 = -363927;

    t100 = (x521/(x522!=(x523*x524)));

    if (t100 != 255) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x525 = -10;
	uint64_t x526 = UINT64_MAX;
	int64_t x527 = 14283LL;
	uint64_t x528 = UINT64_MAX;
	volatile int32_t t101 = 0;

    t101 = (x525/(x526!=(x527*x528)));

    if (t101 != -10) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x536 = -3;
	volatile int32_t t102 = -292099709;

    t102 = (x533/(x534!=(x535*x536)));

    if (t102 != -128) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x537 = 2;
	volatile uint16_t x538 = 75U;
	uint8_t x539 = 0U;
	static int64_t x540 = -4890438LL;
	static int32_t t103 = 333042965;

    t103 = (x537/(x538!=(x539*x540)));

    if (t103 != 2) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x541 = INT8_MAX;
	volatile int32_t t104 = 143577;

    t104 = (x541/(x542!=(x543*x544)));

    if (t104 != 127) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x545 = 20024U;
	uint64_t x546 = 3564445LLU;
	static int16_t x547 = -13420;
	int16_t x548 = -1;
	volatile int32_t t105 = 46757492;

    t105 = (x545/(x546!=(x547*x548)));

    if (t105 != 20024) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x554 = 59U;
	static uint16_t x555 = 68U;
	uint16_t x556 = 114U;
	volatile int32_t t106 = -6008;

    t106 = (x553/(x554!=(x555*x556)));

    if (t106 != 32767) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x557 = INT64_MIN;
	int64_t x558 = 396221LL;
	int8_t x559 = 60;
	volatile uint16_t x560 = 0U;
	volatile int64_t t107 = INT64_MIN;

    t107 = (x557/(x558!=(x559*x560)));

    if (t107 != INT64_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x561 = 638551235U;
	uint64_t x563 = 159345482LLU;
	uint8_t x564 = 102U;
	volatile uint32_t t108 = 452U;

    t108 = (x561/(x562!=(x563*x564)));

    if (t108 != 638551235U) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x570 = INT64_MAX;
	static volatile int8_t x571 = INT8_MAX;
	int16_t x572 = INT16_MIN;

    t109 = (x569/(x570!=(x571*x572)));

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x573 = -1;
	int8_t x574 = 1;
	int16_t x575 = INT16_MAX;
	uint64_t x576 = 11687830662562LLU;
	int32_t t110 = -50709708;

    t110 = (x573/(x574!=(x575*x576)));

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x577 = INT32_MAX;
	volatile int8_t x578 = 1;
	static int8_t x579 = -4;
	static volatile int32_t x580 = 7422840;

    t111 = (x577/(x578!=(x579*x580)));

    if (t111 != INT32_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x581 = INT64_MAX;
	uint16_t x582 = 1937U;
	int16_t x584 = 87;

    t112 = (x581/(x582!=(x583*x584)));

    if (t112 != INT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x589 = UINT8_MAX;
	int16_t x590 = INT16_MAX;
	uint32_t x591 = UINT32_MAX;
	static int8_t x592 = INT8_MIN;
	volatile int32_t t113 = 819;

    t113 = (x589/(x590!=(x591*x592)));

    if (t113 != 255) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x593 = 42676244187LL;
	volatile int32_t x594 = -13916;
	static volatile int16_t x595 = INT16_MIN;
	volatile uint64_t x596 = 1755382095715000LLU;
	int64_t t114 = 7LL;

    t114 = (x593/(x594!=(x595*x596)));

    if (t114 != 42676244187LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x597 = 276981094U;
	static int32_t x598 = -164290505;
	volatile uint64_t x600 = UINT64_MAX;
	uint32_t t115 = 778525781U;

    t115 = (x597/(x598!=(x599*x600)));

    if (t115 != 276981094U) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x606 = 0U;
	uint16_t x607 = 38U;
	int32_t t116 = INT32_MIN;

    t116 = (x605/(x606!=(x607*x608)));

    if (t116 != INT32_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x610 = -1;

    t117 = (x609/(x610!=(x611*x612)));

    if (t117 != 144U) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x617 = 204;
	uint8_t x618 = UINT8_MAX;
	int64_t x619 = 1552653363552LL;
	int32_t x620 = -485;
	volatile int32_t t118 = 454268;

    t118 = (x617/(x618!=(x619*x620)));

    if (t118 != 204) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x624 = 852LLU;
	static int32_t t119 = 1;

    t119 = (x621/(x622!=(x623*x624)));

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int32_t x625 = -202344868;
	uint8_t x626 = UINT8_MAX;
	uint8_t x628 = UINT8_MAX;
	int32_t t120 = 1;

    t120 = (x625/(x626!=(x627*x628)));

    if (t120 != -202344868) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x633 = UINT32_MAX;
	uint8_t x634 = UINT8_MAX;
	int8_t x635 = -1;
	volatile uint32_t t121 = UINT32_MAX;

    t121 = (x633/(x634!=(x635*x636)));

    if (t121 != UINT32_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x642 = 2338049694263984LL;
	int8_t x643 = -27;
	uint16_t x644 = UINT16_MAX;
	int64_t t122 = -1916226LL;

    t122 = (x641/(x642!=(x643*x644)));

    if (t122 != -1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x645 = INT64_MIN;
	volatile int64_t x646 = -1LL;
	int8_t x647 = INT8_MIN;
	volatile uint16_t x648 = 14628U;
	static volatile int64_t t123 = INT64_MIN;

    t123 = (x645/(x646!=(x647*x648)));

    if (t123 != INT64_MIN) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x649 = UINT16_MAX;
	int8_t x651 = INT8_MAX;
	static int64_t x652 = -1LL;

    t124 = (x649/(x650!=(x651*x652)));

    if (t124 != 65535) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x653 = INT64_MAX;
	uint32_t x654 = UINT32_MAX;
	uint32_t x655 = UINT32_MAX;
	int64_t x656 = -244909LL;
	static int64_t t125 = INT64_MAX;

    t125 = (x653/(x654!=(x655*x656)));

    if (t125 != INT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x659 = INT32_MAX;
	uint8_t x660 = 1U;
	int32_t t126 = -1;

    t126 = (x657/(x658!=(x659*x660)));

    if (t126 != 65535) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x661 = UINT8_MAX;
	uint32_t x663 = UINT32_MAX;
	uint16_t x664 = 0U;
	int32_t t127 = 795;

    t127 = (x661/(x662!=(x663*x664)));

    if (t127 != 255) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x665 = INT32_MAX;
	uint8_t x666 = UINT8_MAX;
	int64_t x667 = 92408928214659LL;
	uint32_t x668 = 8U;

    t128 = (x665/(x666!=(x667*x668)));

    if (t128 != INT32_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x673 = -1;
	int8_t x674 = INT8_MAX;
	volatile int16_t x675 = 808;
	static volatile int16_t x676 = INT16_MAX;
	static int32_t t129 = -3525;

    t129 = (x673/(x674!=(x675*x676)));

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint16_t x678 = 3U;
	int8_t x679 = INT8_MAX;
	static int32_t x680 = -1;
	static int32_t t130 = -1064;

    t130 = (x677/(x678!=(x679*x680)));

    if (t130 != -50) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x681 = 16770319135061756LL;
	int64_t x682 = INT64_MIN;
	uint32_t x684 = 424151830U;
	static volatile int64_t t131 = 4LL;

    t131 = (x681/(x682!=(x683*x684)));

    if (t131 != 16770319135061756LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x685 = UINT16_MAX;
	static uint64_t x686 = UINT64_MAX;
	uint32_t x687 = 7U;
	int16_t x688 = 1052;
	int32_t t132 = -31844496;

    t132 = (x685/(x686!=(x687*x688)));

    if (t132 != 65535) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x689 = INT64_MAX;
	static int8_t x690 = 2;
	uint8_t x691 = 50U;
	uint64_t x692 = 107451827907948LLU;
	int64_t t133 = INT64_MAX;

    t133 = (x689/(x690!=(x691*x692)));

    if (t133 != INT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x694 = 4;
	int64_t x696 = INT64_MIN;

    t134 = (x693/(x694!=(x695*x696)));

    if (t134 != -32768) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x697 = INT64_MIN;
	uint32_t x698 = UINT32_MAX;
	static uint16_t x700 = 25U;
	volatile int64_t t135 = INT64_MIN;

    t135 = (x697/(x698!=(x699*x700)));

    if (t135 != INT64_MIN) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint8_t x702 = UINT8_MAX;
	int64_t x703 = -47789198LL;
	volatile uint32_t x704 = UINT32_MAX;
	static uint64_t t136 = 22736812304807590LLU;

    t136 = (x701/(x702!=(x703*x704)));

    if (t136 != 415LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x705 = INT64_MIN;
	volatile uint64_t x706 = 15591859LLU;
	int8_t x707 = 3;
	static int16_t x708 = INT16_MIN;
	static int64_t t137 = INT64_MIN;

    t137 = (x705/(x706!=(x707*x708)));

    if (t137 != INT64_MIN) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x709 = -1LL;
	int64_t x710 = -1705266272006841LL;
	int8_t x711 = -2;
	volatile int32_t x712 = -24963099;
	int64_t t138 = -108812LL;

    t138 = (x709/(x710!=(x711*x712)));

    if (t138 != -1LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile uint32_t x713 = 0U;
	static int32_t x714 = -367836923;
	volatile int16_t x715 = -3477;
	int32_t x716 = -1;

    t139 = (x713/(x714!=(x715*x716)));

    if (t139 != 0U) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint16_t x717 = UINT16_MAX;
	uint8_t x718 = 10U;
	uint32_t x719 = UINT32_MAX;
	static int8_t x720 = 5;
	static int32_t t140 = 49947;

    t140 = (x717/(x718!=(x719*x720)));

    if (t140 != 65535) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint16_t x722 = 6953U;
	int8_t x724 = INT8_MIN;
	volatile uint64_t t141 = 0LLU;

    t141 = (x721/(x722!=(x723*x724)));

    if (t141 != 40525LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint64_t x725 = UINT64_MAX;
	int32_t x726 = INT32_MIN;
	int64_t x727 = -64683786356662612LL;
	static int16_t x728 = -1;
	volatile uint64_t t142 = UINT64_MAX;

    t142 = (x725/(x726!=(x727*x728)));

    if (t142 != UINT64_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x729 = 140LLU;
	uint64_t x730 = 1703576749073347190LLU;
	int32_t x731 = -1;
	uint64_t x732 = 37616LLU;
	volatile uint64_t t143 = 3683LLU;

    t143 = (x729/(x730!=(x731*x732)));

    if (t143 != 140LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x733 = 1U;
	int64_t x734 = 0LL;
	int16_t x735 = 3321;
	volatile int32_t t144 = -91676;

    t144 = (x733/(x734!=(x735*x736)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x741 = INT32_MIN;
	static uint16_t x743 = UINT16_MAX;
	uint16_t x744 = 4U;
	int32_t t145 = INT32_MIN;

    t145 = (x741/(x742!=(x743*x744)));

    if (t145 != INT32_MIN) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x750 = 459LLU;
	int8_t x751 = -1;
	static uint16_t x752 = UINT16_MAX;
	static volatile int32_t t146 = 16290;

    t146 = (x749/(x750!=(x751*x752)));

    if (t146 != 255) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x754 = -1;
	uint8_t x755 = UINT8_MAX;
	int64_t t147 = INT64_MIN;

    t147 = (x753/(x754!=(x755*x756)));

    if (t147 != INT64_MIN) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x757 = INT16_MAX;
	int64_t x758 = INT64_MIN;
	uint16_t x759 = UINT16_MAX;
	static int16_t x760 = INT16_MAX;
	int32_t t148 = -191717185;

    t148 = (x757/(x758!=(x759*x760)));

    if (t148 != 32767) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x761 = UINT16_MAX;
	static volatile int32_t t149 = -9657;

    t149 = (x761/(x762!=(x763*x764)));

    if (t149 != 65535) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x766 = INT8_MAX;
	volatile int16_t x767 = -1;

    t150 = (x765/(x766!=(x767*x768)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x770 = 4744989U;
	volatile uint64_t x772 = 19061813947168LLU;
	volatile int32_t t151 = 9745667;

    t151 = (x769/(x770!=(x771*x772)));

    if (t151 != -25) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x773 = 386333LLU;
	int8_t x774 = -1;
	int16_t x775 = INT16_MAX;
	uint16_t x776 = 642U;
	uint64_t t152 = 279208725476804LLU;

    t152 = (x773/(x774!=(x775*x776)));

    if (t152 != 386333LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x777 = INT32_MIN;
	uint8_t x778 = UINT8_MAX;
	int16_t x779 = -6;
	int16_t x780 = 3;
	int32_t t153 = INT32_MIN;

    t153 = (x777/(x778!=(x779*x780)));

    if (t153 != INT32_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x781 = 7957U;
	int16_t x782 = INT16_MIN;
	int8_t x783 = INT8_MIN;
	int32_t t154 = 1419841;

    t154 = (x781/(x782!=(x783*x784)));

    if (t154 != 7957) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x785 = -1LL;
	static int64_t x786 = INT64_MIN;
	uint16_t x788 = 2592U;
	int64_t t155 = -15515625LL;

    t155 = (x785/(x786!=(x787*x788)));

    if (t155 != -1LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x789 = 6355433U;
	int8_t x790 = -42;
	uint16_t x791 = 6511U;
	uint64_t x792 = 151331LLU;

    t156 = (x789/(x790!=(x791*x792)));

    if (t156 != 6355433U) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x794 = 240;
	volatile uint8_t x795 = UINT8_MAX;

    t157 = (x793/(x794!=(x795*x796)));

    if (t157 != -1279) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x797 = INT32_MIN;
	int64_t x798 = -1LL;
	static volatile int16_t x799 = -88;
	static int32_t t158 = INT32_MIN;

    t158 = (x797/(x798!=(x799*x800)));

    if (t158 != INT32_MIN) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x801 = UINT64_MAX;
	int32_t x802 = -119496;
	static uint32_t x804 = 26395U;
	uint64_t t159 = UINT64_MAX;

    t159 = (x801/(x802!=(x803*x804)));

    if (t159 != UINT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x810 = INT8_MAX;
	uint64_t x812 = 642165746008LLU;
	static int32_t t160 = 2;

    t160 = (x809/(x810!=(x811*x812)));

    if (t160 != 94) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x814 = INT64_MAX;
	uint16_t x815 = UINT16_MAX;

    t161 = (x813/(x814!=(x815*x816)));

    if (t161 != -128) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x817 = -1;
	uint64_t x819 = 4081950121014656152LLU;

    t162 = (x817/(x818!=(x819*x820)));

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x825 = -1;
	int8_t x828 = 0;
	static volatile int32_t t163 = 8;

    t163 = (x825/(x826!=(x827*x828)));

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x829 = 37657344937573LLU;
	volatile int8_t x830 = -1;
	static int8_t x831 = INT8_MIN;
	uint64_t x832 = 60200349LLU;
	uint64_t t164 = 12LLU;

    t164 = (x829/(x830!=(x831*x832)));

    if (t164 != 37657344937573LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x837 = INT8_MIN;
	int64_t x838 = INT64_MIN;
	uint16_t x839 = 21099U;
	volatile uint8_t x840 = 123U;
	int32_t t165 = -178505887;

    t165 = (x837/(x838!=(x839*x840)));

    if (t165 != -128) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x845 = INT64_MIN;
	uint16_t x846 = UINT16_MAX;
	volatile uint16_t x847 = 10U;
	int8_t x848 = INT8_MAX;
	volatile int64_t t166 = INT64_MIN;

    t166 = (x845/(x846!=(x847*x848)));

    if (t166 != INT64_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x849 = INT8_MIN;
	static volatile int8_t x850 = INT8_MIN;
	static uint64_t x851 = 16301874127LLU;
	int32_t x852 = INT32_MAX;
	int32_t t167 = -2;

    t167 = (x849/(x850!=(x851*x852)));

    if (t167 != -128) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x853 = UINT16_MAX;
	uint8_t x854 = UINT8_MAX;
	uint32_t x855 = UINT32_MAX;
	volatile uint64_t x856 = 3LLU;
	int32_t t168 = -216;

    t168 = (x853/(x854!=(x855*x856)));

    if (t168 != 65535) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x857 = 304;
	int8_t x858 = -45;
	uint32_t x859 = 2432U;
	uint8_t x860 = 1U;
	int32_t t169 = 3;

    t169 = (x857/(x858!=(x859*x860)));

    if (t169 != 304) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x861 = -14;
	static int32_t x863 = INT32_MAX;

    t170 = (x861/(x862!=(x863*x864)));

    if (t170 != -14) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x865 = INT32_MIN;
	int16_t x866 = INT16_MIN;
	int32_t x867 = -46139;
	int8_t x868 = 1;
	static volatile int32_t t171 = INT32_MIN;

    t171 = (x865/(x866!=(x867*x868)));

    if (t171 != INT32_MIN) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x869 = -3;
	static int32_t x870 = INT32_MIN;
	uint64_t x871 = 698LLU;
	static int64_t x872 = 37658467425785024LL;
	volatile int32_t t172 = -3;

    t172 = (x869/(x870!=(x871*x872)));

    if (t172 != -3) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x873 = 18U;
	int64_t x874 = 13LL;
	int32_t x875 = 118;
	volatile int8_t x876 = -1;
	int32_t t173 = -42043848;

    t173 = (x873/(x874!=(x875*x876)));

    if (t173 != 18) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x877 = INT64_MIN;
	static int64_t x878 = INT64_MIN;
	volatile uint64_t x879 = 511706LLU;
	int32_t x880 = -137460;
	int64_t t174 = INT64_MIN;

    t174 = (x877/(x878!=(x879*x880)));

    if (t174 != INT64_MIN) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint32_t x882 = 0U;
	volatile int32_t t175 = INT32_MIN;

    t175 = (x881/(x882!=(x883*x884)));

    if (t175 != INT32_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x885 = 147030998U;
	volatile int16_t x886 = -2631;
	volatile int8_t x887 = 20;
	int32_t x888 = -1;
	uint32_t t176 = 1076U;

    t176 = (x885/(x886!=(x887*x888)));

    if (t176 != 147030998U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x889 = UINT8_MAX;
	int32_t x890 = INT32_MIN;
	int32_t t177 = -21511;

    t177 = (x889/(x890!=(x891*x892)));

    if (t177 != 255) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x893 = 23LL;
	static volatile int64_t x894 = INT64_MIN;
	int8_t x895 = INT8_MIN;
	volatile int8_t x896 = -1;
	static volatile int64_t t178 = -3790907677305412LL;

    t178 = (x893/(x894!=(x895*x896)));

    if (t178 != 23LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x897 = INT64_MIN;
	static uint64_t x898 = 7LLU;
	uint8_t x899 = 2U;
	int16_t x900 = -1;
	int64_t t179 = INT64_MIN;

    t179 = (x897/(x898!=(x899*x900)));

    if (t179 != INT64_MIN) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int64_t x905 = INT64_MAX;
	static int16_t x907 = INT16_MIN;
	static int16_t x908 = 7640;
	int64_t t180 = INT64_MAX;

    t180 = (x905/(x906!=(x907*x908)));

    if (t180 != INT64_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x911 = INT8_MIN;

    t181 = (x909/(x910!=(x911*x912)));

    if (t181 != UINT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x913 = -1;
	static int32_t x914 = -299;
	uint32_t x916 = UINT32_MAX;
	volatile int32_t t182 = 21;

    t182 = (x913/(x914!=(x915*x916)));

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x917 = 357U;
	int32_t x918 = INT32_MIN;
	int32_t x919 = 64501;
	static int8_t x920 = INT8_MAX;
	uint32_t t183 = 16000U;

    t183 = (x917/(x918!=(x919*x920)));

    if (t183 != 357U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x930 = 35U;
	int8_t x931 = INT8_MIN;
	uint32_t x932 = UINT32_MAX;

    t184 = (x929/(x930!=(x931*x932)));

    if (t184 != 31) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint64_t x933 = 783373885449051LLU;
	volatile uint16_t x936 = 3213U;
	volatile uint64_t t185 = 8753726948LLU;

    t185 = (x933/(x934!=(x935*x936)));

    if (t185 != 783373885449051LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x938 = INT32_MIN;
	volatile uint16_t x939 = 55U;
	volatile uint64_t t186 = 58066LLU;

    t186 = (x937/(x938!=(x939*x940)));

    if (t186 != 3573676LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x949 = INT32_MAX;
	int64_t x950 = -63815LL;
	int8_t x952 = INT8_MIN;

    t187 = (x949/(x950!=(x951*x952)));

    if (t187 != INT32_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x957 = -1LL;
	int16_t x958 = INT16_MIN;
	volatile int32_t x959 = -1996;
	uint32_t x960 = 16434286U;
	static int64_t t188 = 99409611059LL;

    t188 = (x957/(x958!=(x959*x960)));

    if (t188 != -1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x961 = 1;
	volatile int32_t t189 = 25;

    t189 = (x961/(x962!=(x963*x964)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x965 = 23315693065LL;
	int32_t x966 = 1;
	int8_t x968 = INT8_MIN;

    t190 = (x965/(x966!=(x967*x968)));

    if (t190 != 23315693065LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x982 = INT64_MIN;
	int32_t x983 = -1;
	int64_t x984 = INT64_MAX;
	static int32_t t191 = -351;

    t191 = (x981/(x982!=(x983*x984)));

    if (t191 != -52) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x985 = 1;
	int32_t x986 = -2;
	static int16_t x987 = INT16_MIN;
	int64_t x988 = -1LL;
	static volatile int32_t t192 = -25556;

    t192 = (x985/(x986!=(x987*x988)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x989 = 14114LLU;
	int16_t x991 = INT16_MIN;
	static int16_t x992 = INT16_MIN;
	static volatile uint64_t t193 = 3116100678LLU;

    t193 = (x989/(x990!=(x991*x992)));

    if (t193 != 14114LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x994 = 71LLU;
	static uint8_t x995 = 82U;

    t194 = (x993/(x994!=(x995*x996)));

    if (t194 != INT32_MIN) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int32_t x997 = 189884;
	int32_t x999 = -1;
	int16_t x1000 = -3;
	int32_t t195 = 181015;

    t195 = (x997/(x998!=(x999*x1000)));

    if (t195 != 189884) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x1002 = 126U;
	int16_t x1003 = INT16_MAX;
	int64_t x1004 = 6652270338LL;
	static int32_t t196 = -1580293;

    t196 = (x1001/(x1002!=(x1003*x1004)));

    if (t196 != 4) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x1006 = UINT16_MAX;
	uint64_t t197 = UINT64_MAX;

    t197 = (x1005/(x1006!=(x1007*x1008)));

    if (t197 != UINT64_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1009 = -1LL;
	uint16_t x1010 = 4U;
	int16_t x1012 = -1;
	volatile int64_t t198 = -9146868347670590LL;

    t198 = (x1009/(x1010!=(x1011*x1012)));

    if (t198 != -1LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x1013 = -1;
	volatile uint32_t x1014 = UINT32_MAX;
	static int8_t x1015 = -2;
	volatile uint64_t x1016 = 117239082LLU;
	int32_t t199 = 62172;

    t199 = (x1013/(x1014!=(x1015*x1016)));

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

