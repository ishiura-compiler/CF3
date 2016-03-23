
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
int8_t x4 = INT8_MIN;
static int16_t x8 = INT16_MIN;
volatile int32_t x10 = -128479;
static int32_t t3 = 408;
int16_t x24 = INT16_MAX;
volatile int32_t t5 = 25;
uint32_t x36 = 138U;
int64_t x45 = 25258438651LL;
int64_t x51 = INT64_MIN;
int32_t x52 = INT32_MIN;
static int8_t x53 = INT8_MAX;
int16_t x68 = -1;
int32_t x87 = 1;
uint16_t x96 = UINT16_MAX;
int16_t x99 = -1;
int32_t t18 = -74627;
uint8_t x103 = 13U;
volatile int16_t x108 = -1;
int16_t x109 = -1;
static volatile int32_t x112 = -1;
uint16_t x113 = 787U;
static volatile int8_t x114 = 15;
int32_t x115 = INT32_MIN;
int16_t x128 = -5086;
int64_t x132 = -1LL;
uint32_t x134 = 6U;
uint64_t x136 = 9886585092629LLU;
static int64_t x139 = INT64_MAX;
static int8_t x140 = -6;
static volatile uint32_t x155 = UINT32_MAX;
volatile int32_t t31 = -286463769;
int16_t x161 = -1;
int32_t t32 = 105187;
uint32_t x165 = 331161U;
static int16_t x168 = -1;
volatile int32_t t33 = 4159291;
volatile int32_t t34 = 2659851;
static uint16_t x174 = 653U;
int64_t x186 = -1LL;
uint16_t x187 = 8U;
int32_t x197 = INT32_MIN;
int16_t x199 = 304;
uint64_t x202 = 223368198LLU;
volatile int32_t t39 = -1072;
int8_t x211 = INT8_MIN;
int32_t t43 = 0;
int16_t x230 = INT16_MIN;
uint32_t x231 = 869879291U;
static int16_t x232 = 7360;
static int32_t t47 = 4;
int8_t x254 = INT8_MAX;
int16_t x255 = INT16_MAX;
static volatile int32_t t50 = 5;
int8_t x269 = INT8_MIN;
volatile uint16_t x276 = UINT16_MAX;
int16_t x279 = -50;
uint32_t x295 = UINT32_MAX;
static uint8_t x297 = 3U;
int32_t x300 = -1;
int32_t t58 = 77258;
volatile int16_t x326 = INT16_MIN;
int32_t t62 = 8273531;
int8_t x332 = -1;
static uint32_t x335 = 126263060U;
int8_t x344 = INT8_MIN;
static int8_t x353 = INT8_MAX;
int32_t x373 = -1;
uint64_t x379 = 3625467711472256500LLU;
volatile int32_t t70 = -1;
int32_t x382 = -1;
int64_t x383 = INT64_MAX;
volatile uint8_t x387 = UINT8_MAX;
uint8_t x388 = 118U;
int32_t t72 = 487920;
static int16_t x391 = INT16_MAX;
uint16_t x392 = 13183U;
volatile int8_t x396 = INT8_MIN;
uint32_t x406 = UINT32_MAX;
volatile int32_t x407 = INT32_MAX;
volatile int64_t x411 = -370372LL;
uint64_t x417 = 1820659452573760556LLU;
static int32_t x419 = -36;
int32_t x426 = -3;
volatile uint64_t x448 = UINT64_MAX;
int32_t x453 = -17199;
int32_t x454 = -1;
int16_t x466 = INT16_MIN;
int8_t x474 = INT8_MAX;
int32_t x475 = INT32_MAX;
uint32_t x480 = 137996708U;
uint8_t x484 = 1U;
int64_t x498 = INT64_MAX;
int8_t x500 = -1;
uint64_t x501 = UINT64_MAX;
uint64_t x503 = 25LLU;
static uint64_t x508 = 721502656117615LLU;
volatile int32_t t93 = 174671;
volatile int16_t x515 = -1;
int32_t t96 = 167426;
int8_t x526 = INT8_MIN;
static volatile int8_t x527 = -7;
static volatile int8_t x540 = -1;
int32_t x553 = 1;
volatile int16_t x554 = INT16_MIN;
int32_t x568 = INT32_MAX;
uint32_t x570 = 1513791U;
static volatile int32_t t105 = -243;
int16_t x577 = -1;
static int64_t x580 = -39755LL;
static volatile int32_t t108 = 900404;
int32_t x599 = -1;
volatile int16_t x600 = INT16_MIN;
int16_t x601 = INT16_MAX;
int64_t x604 = -7LL;
volatile int32_t t110 = -103;
uint32_t x633 = UINT32_MAX;
volatile int32_t t116 = 408;
int8_t x650 = -1;
static int64_t x652 = INT64_MIN;
uint32_t x656 = UINT32_MAX;
int64_t x667 = INT64_MAX;
int16_t x668 = -305;
volatile int32_t x681 = 17244;
uint16_t x693 = 16489U;
int32_t t124 = 9;
int8_t x698 = -2;
int16_t x699 = -2;
volatile int64_t x703 = 15473LL;
int32_t t126 = -27873318;
static int64_t x706 = INT64_MAX;
volatile uint32_t x708 = UINT32_MAX;
int32_t t127 = -2011;
int32_t x732 = INT32_MIN;
static volatile int32_t t131 = 63487949;
volatile int32_t x735 = -1;
uint8_t x745 = UINT8_MAX;
volatile uint32_t x758 = 160723213U;
static int16_t x764 = INT16_MIN;
static volatile int32_t t139 = 1;
uint8_t x780 = UINT8_MAX;
static int16_t x781 = INT16_MIN;
volatile int16_t x784 = -98;
int32_t t142 = -2047264;
int64_t x788 = -4415LL;
volatile int32_t t143 = 6307064;
uint32_t x803 = UINT32_MAX;
int64_t x805 = INT64_MIN;
uint16_t x807 = UINT16_MAX;
int32_t x808 = -161209771;
volatile int16_t x809 = INT16_MAX;
uint32_t x813 = 2114577055U;
int16_t x814 = -1;
static volatile int32_t t151 = -247;
int16_t x846 = INT16_MIN;
int8_t x873 = -2;
int64_t x881 = INT64_MIN;
volatile int8_t x884 = INT8_MIN;
volatile int8_t x895 = 51;
int64_t x896 = 4818315649619923LL;
volatile int64_t x897 = -1LL;
static int32_t x903 = INT32_MIN;
uint8_t x915 = 31U;
uint64_t x917 = 57712850LLU;
uint64_t x919 = 247621249134LLU;
uint64_t x938 = 6370243384056LLU;
volatile int32_t t171 = 1723558;
int32_t t172 = -999;
int64_t x957 = INT64_MIN;
static volatile int16_t x960 = INT16_MIN;
int32_t x961 = INT32_MIN;
int64_t x964 = -1LL;
int16_t x965 = -1;
static int8_t x966 = 0;
volatile int32_t t177 = -40399847;
int32_t x986 = -1;
volatile int32_t t180 = -1715;
int8_t x999 = -1;
int64_t x1000 = -1LL;
volatile int32_t t183 = -5;
int16_t x1018 = -1;
uint8_t x1023 = UINT8_MAX;
static uint32_t x1026 = UINT32_MAX;
volatile int32_t x1030 = 559162466;
static int32_t t187 = -73132;
volatile int32_t t188 = -54508;
int8_t x1044 = -1;
uint32_t x1047 = 1048142U;
static int32_t t191 = -26;
uint16_t x1050 = UINT16_MAX;
static uint8_t x1060 = 52U;
int64_t x1071 = INT64_MIN;
int32_t t194 = -361;
static uint64_t x1093 = 274252035LLU;
static int8_t x1103 = -22;
int8_t x1105 = INT8_MAX;
int64_t x1110 = INT64_MIN;


void f0(void) {
    	static int16_t x2 = INT16_MAX;
	static uint8_t x3 = UINT8_MAX;
	volatile int32_t t0 = 4;

    t0 = (x1!=(x2%(x3&x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = -9;
	static volatile uint32_t x6 = 24U;
	int16_t x7 = INT16_MIN;
	int32_t t1 = -1;

    t1 = (x5!=(x6%(x7&x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	static int32_t x11 = -28877080;
	int8_t x12 = INT8_MAX;
	int32_t t2 = 30257383;

    t2 = (x9!=(x10%(x11&x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MAX;
	static int8_t x14 = INT8_MAX;
	int32_t x15 = INT32_MIN;
	int8_t x16 = INT8_MIN;

    t3 = (x13!=(x14%(x15&x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x21 = 504U;
	uint32_t x22 = 839U;
	int64_t x23 = -190988380691LL;
	static int32_t t4 = 515796163;

    t4 = (x21!=(x22%(x23&x24)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x29 = INT32_MAX;
	int64_t x30 = 205940259788LL;
	uint16_t x31 = 6876U;
	int32_t x32 = 169264382;

    t5 = (x29!=(x30%(x31&x32)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x33 = 11;
	int32_t x34 = -1;
	uint8_t x35 = UINT8_MAX;
	static int32_t t6 = -1;

    t6 = (x33!=(x34%(x35&x36)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x41 = INT8_MAX;
	static volatile int64_t x42 = -69017LL;
	int8_t x43 = 1;
	uint16_t x44 = 65U;
	int32_t t7 = -1876113;

    t7 = (x41!=(x42%(x43&x44)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x46 = INT32_MIN;
	int16_t x47 = INT16_MIN;
	volatile int64_t x48 = 1092268LL;
	static volatile int32_t t8 = 14736215;

    t8 = (x45!=(x46%(x47&x48)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x49 = UINT32_MAX;
	int64_t x50 = INT64_MAX;
	int32_t t9 = -682;

    t9 = (x49!=(x50%(x51&x52)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x54 = 0;
	static volatile uint64_t x55 = UINT64_MAX;
	uint32_t x56 = 608330525U;
	volatile int32_t t10 = 32480825;

    t10 = (x53!=(x54%(x55&x56)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x57 = INT64_MAX;
	int8_t x58 = INT8_MIN;
	volatile uint64_t x59 = UINT64_MAX;
	volatile int16_t x60 = INT16_MAX;
	volatile int32_t t11 = 28;

    t11 = (x57!=(x58%(x59&x60)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x61 = 91U;
	int64_t x62 = -1LL;
	volatile int16_t x63 = -2;
	uint16_t x64 = 3335U;
	int32_t t12 = -6;

    t12 = (x61!=(x62%(x63&x64)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x65 = -13LL;
	uint64_t x66 = 67494845589709756LLU;
	volatile int8_t x67 = 3;
	int32_t t13 = -31;

    t13 = (x65!=(x66%(x67&x68)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x69 = INT64_MIN;
	int32_t x70 = INT32_MIN;
	static uint16_t x71 = UINT16_MAX;
	uint64_t x72 = 23617703270562LLU;
	volatile int32_t t14 = -2654888;

    t14 = (x69!=(x70%(x71&x72)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x85 = INT16_MIN;
	uint64_t x86 = UINT64_MAX;
	uint64_t x88 = UINT64_MAX;
	int32_t t15 = 14224875;

    t15 = (x85!=(x86%(x87&x88)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x89 = INT32_MIN;
	int8_t x90 = 0;
	uint16_t x91 = 7U;
	uint16_t x92 = 141U;
	static int32_t t16 = -1;

    t16 = (x89!=(x90%(x91&x92)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x93 = 0;
	uint32_t x94 = 222U;
	static int16_t x95 = INT16_MIN;
	static volatile int32_t t17 = 4182702;

    t17 = (x93!=(x94%(x95&x96)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x97 = 4796659LLU;
	volatile uint8_t x98 = 58U;
	uint64_t x100 = UINT64_MAX;

    t18 = (x97!=(x98%(x99&x100)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x101 = INT16_MIN;
	static volatile uint16_t x102 = 243U;
	volatile uint16_t x104 = UINT16_MAX;
	volatile int32_t t19 = -1;

    t19 = (x101!=(x102%(x103&x104)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x105 = -1;
	int8_t x106 = -1;
	uint64_t x107 = UINT64_MAX;
	int32_t t20 = -99750;

    t20 = (x105!=(x106%(x107&x108)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x110 = INT8_MAX;
	static int64_t x111 = INT64_MIN;
	int32_t t21 = -16;

    t21 = (x109!=(x110%(x111&x112)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x116 = -1;
	volatile int32_t t22 = -8029257;

    t22 = (x113!=(x114%(x115&x116)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x117 = INT32_MIN;
	int16_t x118 = -11180;
	int32_t x119 = INT32_MIN;
	int64_t x120 = INT64_MAX;
	volatile int32_t t23 = -3004;

    t23 = (x117!=(x118%(x119&x120)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x125 = -1;
	volatile int16_t x126 = INT16_MIN;
	int64_t x127 = INT64_MIN;
	int32_t t24 = -507323965;

    t24 = (x125!=(x126%(x127&x128)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x129 = -1LL;
	int64_t x130 = 1902LL;
	int8_t x131 = 42;
	volatile int32_t t25 = -1371697;

    t25 = (x129!=(x130%(x131&x132)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint16_t x133 = UINT16_MAX;
	static int32_t x135 = INT32_MIN;
	static int32_t t26 = 4882051;

    t26 = (x133!=(x134%(x135&x136)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x137 = INT16_MIN;
	int64_t x138 = -13304364961301289LL;
	volatile int32_t t27 = 311414417;

    t27 = (x137!=(x138%(x139&x140)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x145 = INT32_MIN;
	uint32_t x146 = 4975467U;
	int16_t x147 = INT16_MIN;
	static int64_t x148 = INT64_MIN;
	volatile int32_t t28 = 516688818;

    t28 = (x145!=(x146%(x147&x148)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x149 = INT16_MAX;
	int64_t x150 = INT64_MIN;
	static volatile int64_t x151 = -1LL;
	volatile int8_t x152 = -7;
	volatile int32_t t29 = 0;

    t29 = (x149!=(x150%(x151&x152)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x153 = INT64_MIN;
	uint32_t x154 = UINT32_MAX;
	static volatile uint8_t x156 = UINT8_MAX;
	int32_t t30 = 13533754;

    t30 = (x153!=(x154%(x155&x156)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x157 = INT32_MAX;
	int64_t x158 = INT64_MAX;
	int8_t x159 = 44;
	static int16_t x160 = -144;

    t31 = (x157!=(x158%(x159&x160)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x162 = INT16_MIN;
	static uint64_t x163 = 505823203807998366LLU;
	int8_t x164 = -1;

    t32 = (x161!=(x162%(x163&x164)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x166 = INT16_MAX;
	int8_t x167 = INT8_MAX;

    t33 = (x165!=(x166%(x167&x168)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x169 = 653U;
	uint8_t x170 = 3U;
	int32_t x171 = INT32_MAX;
	volatile uint64_t x172 = 98750023868LLU;

    t34 = (x169!=(x170%(x171&x172)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x173 = INT8_MAX;
	int64_t x175 = INT64_MAX;
	uint16_t x176 = 15652U;
	int32_t t35 = 3;

    t35 = (x173!=(x174%(x175&x176)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x177 = -1285LL;
	uint64_t x178 = UINT64_MAX;
	int32_t x179 = 1024667;
	volatile uint8_t x180 = 23U;
	int32_t t36 = -127984;

    t36 = (x177!=(x178%(x179&x180)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x185 = 101657335486827LLU;
	uint32_t x188 = UINT32_MAX;
	volatile int32_t t37 = -56;

    t37 = (x185!=(x186%(x187&x188)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x198 = INT16_MIN;
	int16_t x200 = INT16_MAX;
	int32_t t38 = -996771;

    t38 = (x197!=(x198%(x199&x200)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint16_t x201 = UINT16_MAX;
	int8_t x203 = INT8_MIN;
	static int32_t x204 = -731340132;

    t39 = (x201!=(x202%(x203&x204)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x205 = 7U;
	static int8_t x206 = INT8_MIN;
	static uint64_t x207 = 482347969034028LLU;
	int32_t x208 = INT32_MIN;
	static volatile int32_t t40 = -33276883;

    t40 = (x205!=(x206%(x207&x208)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x209 = 0U;
	static int32_t x210 = INT32_MIN;
	int32_t x212 = -1;
	int32_t t41 = -1;

    t41 = (x209!=(x210%(x211&x212)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x217 = UINT64_MAX;
	volatile int8_t x218 = -3;
	uint64_t x219 = UINT64_MAX;
	uint32_t x220 = 14519U;
	volatile int32_t t42 = -1;

    t42 = (x217!=(x218%(x219&x220)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x221 = 0U;
	volatile int64_t x222 = INT64_MAX;
	static uint8_t x223 = UINT8_MAX;
	uint64_t x224 = 1054922361LLU;

    t43 = (x221!=(x222%(x223&x224)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x229 = -212;
	volatile int32_t t44 = -652026;

    t44 = (x229!=(x230%(x231&x232)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x233 = INT16_MAX;
	uint64_t x234 = UINT64_MAX;
	int64_t x235 = -529942818LL;
	uint32_t x236 = UINT32_MAX;
	int32_t t45 = 32101399;

    t45 = (x233!=(x234%(x235&x236)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x241 = -38;
	uint64_t x242 = 58483032991LLU;
	int8_t x243 = -15;
	int16_t x244 = INT16_MIN;
	static volatile int32_t t46 = 37537509;

    t46 = (x241!=(x242%(x243&x244)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x249 = -1LL;
	int16_t x250 = 305;
	volatile int8_t x251 = INT8_MIN;
	int32_t x252 = INT32_MIN;

    t47 = (x249!=(x250%(x251&x252)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x253 = -1;
	volatile int16_t x256 = -1;
	int32_t t48 = -15555;

    t48 = (x253!=(x254%(x255&x256)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x257 = INT8_MIN;
	int64_t x258 = -1LL;
	static volatile int64_t x259 = 5195LL;
	static int32_t x260 = 1482154;
	int32_t t49 = 154;

    t49 = (x257!=(x258%(x259&x260)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x265 = INT32_MIN;
	static int8_t x266 = INT8_MIN;
	static uint32_t x267 = UINT32_MAX;
	static uint32_t x268 = 63U;

    t50 = (x265!=(x266%(x267&x268)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x270 = -1LL;
	uint8_t x271 = 27U;
	volatile int32_t x272 = INT32_MAX;
	int32_t t51 = 103;

    t51 = (x269!=(x270%(x271&x272)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x273 = INT64_MIN;
	int8_t x274 = -1;
	uint8_t x275 = 40U;
	volatile int32_t t52 = 823308;

    t52 = (x273!=(x274%(x275&x276)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x277 = -115351043LL;
	int16_t x278 = -1;
	static int32_t x280 = 5;
	volatile int32_t t53 = 7795;

    t53 = (x277!=(x278%(x279&x280)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x281 = 83813491079878587LL;
	int64_t x282 = 6705712282691049LL;
	int32_t x283 = -96;
	volatile int32_t x284 = INT32_MIN;
	int32_t t54 = 13226422;

    t54 = (x281!=(x282%(x283&x284)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x285 = UINT8_MAX;
	int16_t x286 = INT16_MIN;
	int32_t x287 = INT32_MAX;
	int8_t x288 = INT8_MIN;
	volatile int32_t t55 = -76;

    t55 = (x285!=(x286%(x287&x288)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x293 = -443;
	volatile uint64_t x294 = 1208364281472798420LLU;
	static int8_t x296 = -1;
	volatile int32_t t56 = 54908301;

    t56 = (x293!=(x294%(x295&x296)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x298 = 0U;
	volatile uint8_t x299 = 9U;
	static int32_t t57 = -5218032;

    t57 = (x297!=(x298%(x299&x300)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x309 = 9U;
	int16_t x310 = 1;
	int32_t x311 = -1;
	int32_t x312 = INT32_MAX;

    t58 = (x309!=(x310%(x311&x312)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x313 = INT16_MAX;
	static volatile uint16_t x314 = 416U;
	int8_t x315 = INT8_MAX;
	volatile int8_t x316 = -1;
	int32_t t59 = 47798338;

    t59 = (x313!=(x314%(x315&x316)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x317 = INT16_MAX;
	int8_t x318 = -36;
	static int8_t x319 = -2;
	uint16_t x320 = 5847U;
	volatile int32_t t60 = -221222754;

    t60 = (x317!=(x318%(x319&x320)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x321 = INT8_MAX;
	static uint8_t x322 = 15U;
	int64_t x323 = INT64_MIN;
	volatile int32_t x324 = INT32_MIN;
	volatile int32_t t61 = 0;

    t61 = (x321!=(x322%(x323&x324)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x325 = UINT16_MAX;
	uint16_t x327 = 31908U;
	volatile int16_t x328 = -1;

    t62 = (x325!=(x326%(x327&x328)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x329 = INT8_MAX;
	static uint8_t x330 = 5U;
	int32_t x331 = INT32_MIN;
	volatile int32_t t63 = -3050;

    t63 = (x329!=(x330%(x331&x332)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x333 = 14U;
	volatile uint64_t x334 = UINT64_MAX;
	int16_t x336 = INT16_MIN;
	int32_t t64 = -46;

    t64 = (x333!=(x334%(x335&x336)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x337 = 0;
	uint64_t x338 = 3441163131690541622LLU;
	int32_t x339 = 1;
	static uint8_t x340 = 17U;
	volatile int32_t t65 = 6452644;

    t65 = (x337!=(x338%(x339&x340)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x341 = UINT32_MAX;
	int32_t x342 = INT32_MAX;
	int32_t x343 = -1;
	int32_t t66 = 6096;

    t66 = (x341!=(x342%(x343&x344)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x345 = INT32_MIN;
	int64_t x346 = INT64_MIN;
	int16_t x347 = INT16_MIN;
	uint64_t x348 = 43653440LLU;
	int32_t t67 = 15473;

    t67 = (x345!=(x346%(x347&x348)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x354 = 3U;
	uint8_t x355 = UINT8_MAX;
	uint64_t x356 = UINT64_MAX;
	volatile int32_t t68 = -162;

    t68 = (x353!=(x354%(x355&x356)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x374 = -1;
	int16_t x375 = INT16_MIN;
	int16_t x376 = -1;
	static int32_t t69 = 331252;

    t69 = (x373!=(x374%(x375&x376)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x377 = -1;
	int64_t x378 = -5908164419771413LL;
	static volatile uint8_t x380 = 13U;

    t70 = (x377!=(x378%(x379&x380)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x381 = INT8_MAX;
	static int16_t x384 = INT16_MAX;
	int32_t t71 = 3146122;

    t71 = (x381!=(x382%(x383&x384)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x385 = 1;
	int64_t x386 = -5307088812LL;

    t72 = (x385!=(x386%(x387&x388)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x389 = INT32_MAX;
	static volatile uint16_t x390 = UINT16_MAX;
	int32_t t73 = 1699541;

    t73 = (x389!=(x390%(x391&x392)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x393 = 45U;
	uint8_t x394 = 67U;
	int8_t x395 = -1;
	volatile int32_t t74 = 382828965;

    t74 = (x393!=(x394%(x395&x396)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x397 = 3941;
	uint8_t x398 = UINT8_MAX;
	int32_t x399 = -22;
	uint64_t x400 = UINT64_MAX;
	volatile int32_t t75 = -35621428;

    t75 = (x397!=(x398%(x399&x400)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x405 = UINT64_MAX;
	uint16_t x408 = 7439U;
	int32_t t76 = -59;

    t76 = (x405!=(x406%(x407&x408)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x409 = 0;
	static int8_t x410 = INT8_MIN;
	int32_t x412 = INT32_MIN;
	static int32_t t77 = -746496211;

    t77 = (x409!=(x410%(x411&x412)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x418 = 0U;
	static int32_t x420 = 20681150;
	volatile int32_t t78 = 45585244;

    t78 = (x417!=(x418%(x419&x420)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x425 = 911U;
	static volatile uint32_t x427 = 1U;
	static int16_t x428 = INT16_MAX;
	volatile int32_t t79 = 1535;

    t79 = (x425!=(x426%(x427&x428)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x441 = INT32_MIN;
	uint16_t x442 = UINT16_MAX;
	uint64_t x443 = UINT64_MAX;
	int32_t x444 = INT32_MIN;
	int32_t t80 = 3001;

    t80 = (x441!=(x442%(x443&x444)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x445 = 390U;
	int32_t x446 = 4347438;
	static volatile uint64_t x447 = 56728177LLU;
	volatile int32_t t81 = -377423703;

    t81 = (x445!=(x446%(x447&x448)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint8_t x449 = UINT8_MAX;
	int16_t x450 = -4691;
	int16_t x451 = INT16_MIN;
	int32_t x452 = INT32_MIN;
	int32_t t82 = -7;

    t82 = (x449!=(x450%(x451&x452)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x455 = -1LL;
	int8_t x456 = -1;
	int32_t t83 = 2107033;

    t83 = (x453!=(x454%(x455&x456)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x461 = -1;
	volatile int64_t x462 = -60706469255930LL;
	uint32_t x463 = UINT32_MAX;
	static int32_t x464 = 927;
	int32_t t84 = 422866746;

    t84 = (x461!=(x462%(x463&x464)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x465 = -1;
	static int8_t x467 = INT8_MIN;
	static int16_t x468 = INT16_MIN;
	volatile int32_t t85 = 27747493;

    t85 = (x465!=(x466%(x467&x468)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x469 = INT32_MIN;
	volatile int8_t x470 = INT8_MIN;
	int16_t x471 = INT16_MIN;
	volatile int32_t x472 = -1;
	volatile int32_t t86 = 151;

    t86 = (x469!=(x470%(x471&x472)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x473 = -14563266987LL;
	volatile int64_t x476 = INT64_MAX;
	int32_t t87 = -247067694;

    t87 = (x473!=(x474%(x475&x476)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint32_t x477 = 4U;
	int16_t x478 = INT16_MIN;
	uint64_t x479 = UINT64_MAX;
	int32_t t88 = -1074158;

    t88 = (x477!=(x478%(x479&x480)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x481 = -89;
	static int32_t x482 = INT32_MIN;
	int32_t x483 = INT32_MAX;
	volatile int32_t t89 = 0;

    t89 = (x481!=(x482%(x483&x484)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x493 = 80U;
	volatile int8_t x494 = INT8_MAX;
	int64_t x495 = 2054LL;
	volatile uint16_t x496 = 3137U;
	static int32_t t90 = -5764;

    t90 = (x493!=(x494%(x495&x496)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x497 = INT16_MAX;
	volatile int32_t x499 = -345;
	volatile int32_t t91 = -5;

    t91 = (x497!=(x498%(x499&x500)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x502 = 92462U;
	volatile uint64_t x504 = 55253925228LLU;
	static int32_t t92 = 309998;

    t92 = (x501!=(x502%(x503&x504)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x505 = 3975769984LLU;
	int16_t x506 = -1;
	volatile int32_t x507 = INT32_MAX;

    t93 = (x505!=(x506%(x507&x508)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x509 = INT64_MAX;
	volatile uint16_t x510 = 3U;
	int16_t x511 = -22;
	int8_t x512 = INT8_MIN;
	int32_t t94 = -2692;

    t94 = (x509!=(x510%(x511&x512)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x513 = INT16_MIN;
	int64_t x514 = -1LL;
	int64_t x516 = INT64_MIN;
	int32_t t95 = 16980;

    t95 = (x513!=(x514%(x515&x516)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint16_t x517 = 7339U;
	uint64_t x518 = 25597252824844LLU;
	uint8_t x519 = UINT8_MAX;
	int64_t x520 = INT64_MAX;

    t96 = (x517!=(x518%(x519&x520)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x521 = INT16_MAX;
	int16_t x522 = 104;
	int32_t x523 = INT32_MAX;
	uint16_t x524 = UINT16_MAX;
	static volatile int32_t t97 = -4;

    t97 = (x521!=(x522%(x523&x524)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x525 = UINT16_MAX;
	int32_t x528 = INT32_MIN;
	int32_t t98 = 434;

    t98 = (x525!=(x526%(x527&x528)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint8_t x537 = UINT8_MAX;
	int64_t x538 = INT64_MAX;
	int8_t x539 = -2;
	int32_t t99 = -149425930;

    t99 = (x537!=(x538%(x539&x540)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x555 = 17755U;
	static int16_t x556 = INT16_MAX;
	volatile int32_t t100 = 10;

    t100 = (x553!=(x554%(x555&x556)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x557 = -9710345533LL;
	static int8_t x558 = -1;
	volatile uint32_t x559 = 4U;
	int16_t x560 = INT16_MAX;
	int32_t t101 = -7529459;

    t101 = (x557!=(x558%(x559&x560)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x561 = -1;
	volatile int16_t x562 = -6430;
	uint8_t x563 = 30U;
	int8_t x564 = INT8_MAX;
	volatile int32_t t102 = 0;

    t102 = (x561!=(x562%(x563&x564)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x565 = INT32_MIN;
	uint16_t x566 = UINT16_MAX;
	int8_t x567 = -1;
	int32_t t103 = 831;

    t103 = (x565!=(x566%(x567&x568)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x569 = INT8_MAX;
	uint8_t x571 = 45U;
	int64_t x572 = INT64_MAX;
	volatile int32_t t104 = -14952078;

    t104 = (x569!=(x570%(x571&x572)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x573 = 4459;
	static int32_t x574 = INT32_MIN;
	int64_t x575 = 5509759995545LL;
	int32_t x576 = 6765;

    t105 = (x573!=(x574%(x575&x576)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint32_t x578 = UINT32_MAX;
	int16_t x579 = -198;
	static int32_t t106 = 995897;

    t106 = (x577!=(x578%(x579&x580)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x585 = 3U;
	int8_t x586 = -1;
	int32_t x587 = INT32_MAX;
	uint32_t x588 = 40601725U;
	int32_t t107 = -700;

    t107 = (x585!=(x586%(x587&x588)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x589 = INT64_MIN;
	uint32_t x590 = 540116U;
	uint64_t x591 = 451127329033891123LLU;
	int64_t x592 = -1LL;

    t108 = (x589!=(x590%(x591&x592)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x597 = -41763;
	int32_t x598 = 31881026;
	static volatile int32_t t109 = -718;

    t109 = (x597!=(x598%(x599&x600)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x602 = INT16_MAX;
	uint16_t x603 = 32U;

    t110 = (x601!=(x602%(x603&x604)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x613 = UINT16_MAX;
	int32_t x614 = -1;
	static uint32_t x615 = UINT32_MAX;
	int64_t x616 = INT64_MAX;
	volatile int32_t t111 = -515;

    t111 = (x613!=(x614%(x615&x616)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x625 = INT16_MAX;
	static uint32_t x626 = UINT32_MAX;
	int32_t x627 = 5532;
	int16_t x628 = -1;
	volatile int32_t t112 = 558;

    t112 = (x625!=(x626%(x627&x628)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x629 = 7;
	int16_t x630 = -1;
	int32_t x631 = INT32_MAX;
	uint16_t x632 = UINT16_MAX;
	volatile int32_t t113 = 0;

    t113 = (x629!=(x630%(x631&x632)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x634 = -109LL;
	static volatile uint8_t x635 = 4U;
	volatile uint16_t x636 = 221U;
	volatile int32_t t114 = 3;

    t114 = (x633!=(x634%(x635&x636)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x637 = -1126297;
	static int16_t x638 = 4865;
	uint16_t x639 = UINT16_MAX;
	int8_t x640 = INT8_MAX;
	static int32_t t115 = 11650920;

    t115 = (x637!=(x638%(x639&x640)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x641 = INT32_MIN;
	static uint8_t x642 = UINT8_MAX;
	uint8_t x643 = 1U;
	uint64_t x644 = 205643524671LLU;

    t116 = (x641!=(x642%(x643&x644)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x645 = INT16_MIN;
	int64_t x646 = INT64_MIN;
	static uint64_t x647 = UINT64_MAX;
	int32_t x648 = INT32_MAX;
	static volatile int32_t t117 = 432608;

    t117 = (x645!=(x646%(x647&x648)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x649 = INT32_MIN;
	static uint64_t x651 = UINT64_MAX;
	int32_t t118 = -260551633;

    t118 = (x649!=(x650%(x651&x652)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x653 = INT32_MIN;
	volatile int16_t x654 = 1469;
	uint32_t x655 = UINT32_MAX;
	volatile int32_t t119 = 3869294;

    t119 = (x653!=(x654%(x655&x656)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x657 = INT64_MIN;
	int8_t x658 = INT8_MIN;
	uint64_t x659 = 610349LLU;
	volatile uint8_t x660 = 115U;
	volatile int32_t t120 = 13;

    t120 = (x657!=(x658%(x659&x660)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint8_t x661 = 23U;
	int32_t x662 = -1;
	static int16_t x663 = INT16_MIN;
	uint32_t x664 = UINT32_MAX;
	int32_t t121 = -8;

    t121 = (x661!=(x662%(x663&x664)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x665 = INT64_MIN;
	int64_t x666 = INT64_MAX;
	int32_t t122 = -1;

    t122 = (x665!=(x666%(x667&x668)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x682 = UINT32_MAX;
	uint8_t x683 = 32U;
	uint64_t x684 = 2136155694LLU;
	static int32_t t123 = 2548714;

    t123 = (x681!=(x682%(x683&x684)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x694 = UINT8_MAX;
	uint8_t x695 = UINT8_MAX;
	uint16_t x696 = UINT16_MAX;

    t124 = (x693!=(x694%(x695&x696)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x697 = 1;
	uint32_t x700 = UINT32_MAX;
	int32_t t125 = 9;

    t125 = (x697!=(x698%(x699&x700)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x701 = -1863674452232274LL;
	uint16_t x702 = 852U;
	uint64_t x704 = 1806817828469283565LLU;

    t126 = (x701!=(x702%(x703&x704)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x705 = -9285177LL;
	int32_t x707 = INT32_MIN;

    t127 = (x705!=(x706%(x707&x708)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x713 = INT8_MIN;
	int16_t x714 = -1;
	volatile int16_t x715 = INT16_MIN;
	static int64_t x716 = -1LL;
	volatile int32_t t128 = 352740;

    t128 = (x713!=(x714%(x715&x716)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x717 = UINT8_MAX;
	int16_t x718 = INT16_MIN;
	volatile int8_t x719 = -1;
	static int64_t x720 = -1LL;
	int32_t t129 = 1;

    t129 = (x717!=(x718%(x719&x720)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x725 = -1;
	uint64_t x726 = 55745LLU;
	int16_t x727 = 10804;
	uint8_t x728 = 39U;
	int32_t t130 = 5891132;

    t130 = (x725!=(x726%(x727&x728)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x729 = UINT64_MAX;
	static volatile int32_t x730 = 1;
	volatile int64_t x731 = INT64_MAX;

    t131 = (x729!=(x730%(x731&x732)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x733 = INT64_MIN;
	static int64_t x734 = -1LL;
	static int8_t x736 = -1;
	int32_t t132 = 303926;

    t132 = (x733!=(x734%(x735&x736)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x737 = 0;
	volatile uint16_t x738 = 1314U;
	uint64_t x739 = UINT64_MAX;
	uint64_t x740 = 3215480207458218715LLU;
	volatile int32_t t133 = 446;

    t133 = (x737!=(x738%(x739&x740)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x741 = INT32_MIN;
	volatile int32_t x742 = -1;
	int32_t x743 = 334;
	int8_t x744 = INT8_MIN;
	int32_t t134 = 28958;

    t134 = (x741!=(x742%(x743&x744)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x746 = 50;
	int64_t x747 = -1LL;
	int8_t x748 = -1;
	int32_t t135 = 893955724;

    t135 = (x745!=(x746%(x747&x748)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x753 = 32409U;
	uint8_t x754 = 8U;
	int16_t x755 = INT16_MIN;
	uint64_t x756 = 22415141779LLU;
	static int32_t t136 = -719313957;

    t136 = (x753!=(x754%(x755&x756)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x757 = 0U;
	volatile int64_t x759 = -7365806966255073LL;
	int8_t x760 = INT8_MAX;
	volatile int32_t t137 = 18007;

    t137 = (x757!=(x758%(x759&x760)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x761 = 6810731803319LLU;
	volatile int8_t x762 = -1;
	int32_t x763 = INT32_MIN;
	static int32_t t138 = -364;

    t138 = (x761!=(x762%(x763&x764)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x765 = INT32_MIN;
	uint8_t x766 = UINT8_MAX;
	int16_t x767 = -1;
	static int8_t x768 = INT8_MIN;

    t139 = (x765!=(x766%(x767&x768)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x773 = INT32_MIN;
	static int32_t x774 = 7705;
	static volatile uint16_t x775 = UINT16_MAX;
	static uint64_t x776 = 2069413LLU;
	volatile int32_t t140 = 4136;

    t140 = (x773!=(x774%(x775&x776)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x777 = -6405439012391LL;
	int32_t x778 = INT32_MIN;
	int16_t x779 = INT16_MAX;
	static volatile int32_t t141 = 13;

    t141 = (x777!=(x778%(x779&x780)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint16_t x782 = UINT16_MAX;
	volatile int64_t x783 = -8373LL;

    t142 = (x781!=(x782%(x783&x784)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x785 = 152LLU;
	int32_t x786 = -1;
	uint32_t x787 = 3U;

    t143 = (x785!=(x786%(x787&x788)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x801 = UINT8_MAX;
	volatile uint64_t x802 = 11731669418539916LLU;
	static int16_t x804 = -1;
	volatile int32_t t144 = -3;

    t144 = (x801!=(x802%(x803&x804)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x806 = UINT8_MAX;
	volatile int32_t t145 = -130;

    t145 = (x805!=(x806%(x807&x808)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x810 = 1;
	uint64_t x811 = UINT64_MAX;
	int32_t x812 = INT32_MIN;
	static int32_t t146 = 331456934;

    t146 = (x809!=(x810%(x811&x812)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int64_t x815 = -1LL;
	static int8_t x816 = -1;
	volatile int32_t t147 = 328;

    t147 = (x813!=(x814%(x815&x816)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x821 = INT64_MIN;
	int32_t x822 = INT32_MIN;
	int64_t x823 = -43346494643LL;
	int32_t x824 = INT32_MAX;
	int32_t t148 = 26990487;

    t148 = (x821!=(x822%(x823&x824)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint16_t x825 = UINT16_MAX;
	int32_t x826 = INT32_MAX;
	volatile uint8_t x827 = 91U;
	uint32_t x828 = UINT32_MAX;
	int32_t t149 = 396;

    t149 = (x825!=(x826%(x827&x828)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x829 = -1LL;
	volatile int16_t x830 = -116;
	uint16_t x831 = UINT16_MAX;
	static int8_t x832 = -1;
	int32_t t150 = -6637881;

    t150 = (x829!=(x830%(x831&x832)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x833 = 1;
	int32_t x834 = 272043757;
	uint16_t x835 = UINT16_MAX;
	int32_t x836 = -1;

    t151 = (x833!=(x834%(x835&x836)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x837 = INT16_MAX;
	static uint32_t x838 = 14205812U;
	static int16_t x839 = INT16_MIN;
	int32_t x840 = INT32_MIN;
	int32_t t152 = 1535;

    t152 = (x837!=(x838%(x839&x840)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x845 = INT8_MAX;
	int64_t x847 = -1163699829LL;
	int64_t x848 = -1LL;
	int32_t t153 = -551426764;

    t153 = (x845!=(x846%(x847&x848)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x853 = -1;
	uint8_t x854 = 4U;
	volatile uint64_t x855 = UINT64_MAX;
	uint64_t x856 = 1497929849LLU;
	int32_t t154 = -5;

    t154 = (x853!=(x854%(x855&x856)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x861 = INT8_MIN;
	uint64_t x862 = 5LLU;
	int16_t x863 = INT16_MIN;
	int16_t x864 = -45;
	volatile int32_t t155 = 530;

    t155 = (x861!=(x862%(x863&x864)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x865 = UINT16_MAX;
	uint16_t x866 = UINT16_MAX;
	static volatile int32_t x867 = -11;
	int32_t x868 = 465749;
	volatile int32_t t156 = 149;

    t156 = (x865!=(x866%(x867&x868)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x874 = UINT16_MAX;
	int64_t x875 = INT64_MIN;
	int64_t x876 = -1LL;
	volatile int32_t t157 = 519169019;

    t157 = (x873!=(x874%(x875&x876)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x882 = 1;
	volatile uint64_t x883 = 2544326235LLU;
	volatile int32_t t158 = 49;

    t158 = (x881!=(x882%(x883&x884)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x893 = -1;
	int16_t x894 = 25;
	volatile int32_t t159 = 405687;

    t159 = (x893!=(x894%(x895&x896)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x898 = 340074LLU;
	uint16_t x899 = 116U;
	volatile int64_t x900 = -540255865994LL;
	int32_t t160 = 118558283;

    t160 = (x897!=(x898%(x899&x900)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x901 = 6U;
	int8_t x902 = -1;
	static int32_t x904 = -238666;
	int32_t t161 = -16;

    t161 = (x901!=(x902%(x903&x904)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x905 = -1LL;
	int8_t x906 = -7;
	static uint16_t x907 = UINT16_MAX;
	int8_t x908 = INT8_MIN;
	int32_t t162 = -400985662;

    t162 = (x905!=(x906%(x907&x908)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x909 = UINT64_MAX;
	int32_t x910 = INT32_MIN;
	int8_t x911 = -1;
	uint16_t x912 = 979U;
	int32_t t163 = 33308072;

    t163 = (x909!=(x910%(x911&x912)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x913 = 69839;
	uint16_t x914 = 65U;
	int8_t x916 = -1;
	int32_t t164 = 54635552;

    t164 = (x913!=(x914%(x915&x916)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x918 = INT32_MIN;
	volatile uint32_t x920 = 627U;
	volatile int32_t t165 = 6;

    t165 = (x917!=(x918%(x919&x920)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x921 = -1;
	uint16_t x922 = 5077U;
	static int8_t x923 = INT8_MIN;
	volatile int8_t x924 = -60;
	volatile int32_t t166 = 490167;

    t166 = (x921!=(x922%(x923&x924)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x929 = 7712U;
	int8_t x930 = INT8_MIN;
	int32_t x931 = INT32_MAX;
	volatile int16_t x932 = INT16_MIN;
	int32_t t167 = 168214661;

    t167 = (x929!=(x930%(x931&x932)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int16_t x933 = INT16_MIN;
	int64_t x934 = INT64_MAX;
	static volatile uint8_t x935 = 53U;
	static uint16_t x936 = 117U;
	volatile int32_t t168 = 0;

    t168 = (x933!=(x934%(x935&x936)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x937 = -3;
	uint64_t x939 = 1LLU;
	uint64_t x940 = 2336593730107627967LLU;
	int32_t t169 = -48656;

    t169 = (x937!=(x938%(x939&x940)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x945 = -26;
	int16_t x946 = -25;
	uint32_t x947 = 2627U;
	int32_t x948 = INT32_MAX;
	volatile int32_t t170 = 766;

    t170 = (x945!=(x946%(x947&x948)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x949 = INT64_MIN;
	volatile uint16_t x950 = 3U;
	volatile int8_t x951 = INT8_MIN;
	int64_t x952 = -375291275760698LL;

    t171 = (x949!=(x950%(x951&x952)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x953 = INT64_MAX;
	uint8_t x954 = 2U;
	int8_t x955 = 1;
	static int64_t x956 = 463569LL;

    t172 = (x953!=(x954%(x955&x956)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x958 = INT64_MAX;
	uint64_t x959 = 8123245425961326LLU;
	volatile int32_t t173 = -54437986;

    t173 = (x957!=(x958%(x959&x960)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint16_t x962 = UINT16_MAX;
	int32_t x963 = INT32_MIN;
	int32_t t174 = 465;

    t174 = (x961!=(x962%(x963&x964)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x967 = 168U;
	static uint16_t x968 = UINT16_MAX;
	int32_t t175 = -2615;

    t175 = (x965!=(x966%(x967&x968)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int8_t x969 = INT8_MIN;
	uint8_t x970 = UINT8_MAX;
	static int8_t x971 = INT8_MAX;
	uint64_t x972 = 7354477976380618LLU;
	int32_t t176 = -11924883;

    t176 = (x969!=(x970%(x971&x972)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x973 = INT16_MIN;
	uint64_t x974 = 101489345850446493LLU;
	static int8_t x975 = INT8_MAX;
	volatile int64_t x976 = -1LL;

    t177 = (x973!=(x974%(x975&x976)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x977 = INT64_MAX;
	volatile uint16_t x978 = UINT16_MAX;
	int16_t x979 = INT16_MIN;
	int32_t x980 = -1;
	static int32_t t178 = 25;

    t178 = (x977!=(x978%(x979&x980)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x981 = 162757632736LL;
	static volatile int16_t x982 = -1;
	static volatile int64_t x983 = INT64_MIN;
	volatile int16_t x984 = INT16_MIN;
	volatile int32_t t179 = 34904;

    t179 = (x981!=(x982%(x983&x984)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x985 = INT32_MAX;
	int32_t x987 = INT32_MIN;
	static int16_t x988 = INT16_MIN;

    t180 = (x985!=(x986%(x987&x988)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x989 = UINT16_MAX;
	static int16_t x990 = 1076;
	int32_t x991 = INT32_MIN;
	int64_t x992 = INT64_MIN;
	static volatile int32_t t181 = 178815;

    t181 = (x989!=(x990%(x991&x992)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x997 = -1;
	static uint8_t x998 = 44U;
	int32_t t182 = -3;

    t182 = (x997!=(x998%(x999&x1000)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x1001 = INT64_MIN;
	int32_t x1002 = -337309601;
	volatile uint64_t x1003 = 1LLU;
	int16_t x1004 = -131;

    t183 = (x1001!=(x1002%(x1003&x1004)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x1017 = INT64_MIN;
	int32_t x1019 = -1;
	uint8_t x1020 = UINT8_MAX;
	volatile int32_t t184 = -207;

    t184 = (x1017!=(x1018%(x1019&x1020)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x1021 = INT64_MIN;
	static int8_t x1022 = INT8_MIN;
	volatile uint32_t x1024 = UINT32_MAX;
	static volatile int32_t t185 = 581749462;

    t185 = (x1021!=(x1022%(x1023&x1024)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x1025 = INT8_MIN;
	static int8_t x1027 = 4;
	int16_t x1028 = -1;
	int32_t t186 = 1704336;

    t186 = (x1025!=(x1026%(x1027&x1028)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1029 = INT16_MIN;
	uint32_t x1031 = 459999738U;
	int64_t x1032 = INT64_MAX;

    t187 = (x1029!=(x1030%(x1031&x1032)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x1033 = INT16_MAX;
	int32_t x1034 = INT32_MIN;
	static int32_t x1035 = -1;
	int8_t x1036 = INT8_MIN;

    t188 = (x1033!=(x1034%(x1035&x1036)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x1037 = -39836055;
	static int16_t x1038 = -1;
	int8_t x1039 = INT8_MAX;
	uint32_t x1040 = 4259U;
	volatile int32_t t189 = 32307;

    t189 = (x1037!=(x1038%(x1039&x1040)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1041 = -1;
	int8_t x1042 = INT8_MIN;
	volatile uint16_t x1043 = 12U;
	static int32_t t190 = 0;

    t190 = (x1041!=(x1042%(x1043&x1044)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1045 = 3191;
	int32_t x1046 = -254;
	int16_t x1048 = 117;

    t191 = (x1045!=(x1046%(x1047&x1048)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x1049 = INT64_MIN;
	int8_t x1051 = -1;
	static uint16_t x1052 = UINT16_MAX;
	int32_t t192 = -2603;

    t192 = (x1049!=(x1050%(x1051&x1052)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1057 = INT16_MIN;
	static int16_t x1058 = INT16_MAX;
	static int32_t x1059 = 113422;
	volatile int32_t t193 = -55;

    t193 = (x1057!=(x1058%(x1059&x1060)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x1069 = INT16_MAX;
	static int8_t x1070 = INT8_MIN;
	int32_t x1072 = INT32_MIN;

    t194 = (x1069!=(x1070%(x1071&x1072)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x1089 = INT64_MIN;
	static volatile int8_t x1090 = -11;
	int32_t x1091 = INT32_MAX;
	uint64_t x1092 = 757437LLU;
	int32_t t195 = -247601408;

    t195 = (x1089!=(x1090%(x1091&x1092)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1094 = INT32_MAX;
	int32_t x1095 = -56903;
	uint8_t x1096 = UINT8_MAX;
	volatile int32_t t196 = 464792;

    t196 = (x1093!=(x1094%(x1095&x1096)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1101 = -506;
	uint64_t x1102 = UINT64_MAX;
	uint16_t x1104 = 27U;
	int32_t t197 = -119;

    t197 = (x1101!=(x1102%(x1103&x1104)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x1106 = INT32_MAX;
	volatile int8_t x1107 = INT8_MIN;
	static uint64_t x1108 = 961119988LLU;
	static volatile int32_t t198 = -13931593;

    t198 = (x1105!=(x1106%(x1107&x1108)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint8_t x1109 = 111U;
	uint64_t x1111 = UINT64_MAX;
	static uint16_t x1112 = UINT16_MAX;
	int32_t t199 = -130438;

    t199 = (x1109!=(x1110%(x1111&x1112)));

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

