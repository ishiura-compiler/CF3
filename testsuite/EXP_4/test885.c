
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

uint8_t x5 = 17U;
int64_t x7 = -7654835738275LL;
int64_t x8 = INT64_MIN;
static uint16_t x11 = UINT16_MAX;
uint64_t x14 = 9LLU;
int16_t x25 = INT16_MIN;
uint8_t x26 = UINT8_MAX;
int16_t x31 = INT16_MAX;
int16_t x35 = INT16_MIN;
uint32_t x36 = 48150U;
int8_t x37 = INT8_MIN;
static int16_t x44 = INT16_MAX;
uint32_t x52 = UINT32_MAX;
int32_t t14 = 7;
static int8_t x63 = INT8_MAX;
static volatile int32_t t15 = 416793;
static int32_t x72 = INT32_MIN;
volatile int32_t t17 = 50;
uint16_t x78 = 23U;
static volatile int16_t x83 = INT16_MIN;
static volatile uint32_t x85 = 119556U;
int16_t x89 = INT16_MIN;
uint8_t x91 = 1U;
static uint8_t x93 = 32U;
int32_t t23 = 17303;
static int8_t x107 = INT8_MAX;
uint8_t x110 = 15U;
int32_t x112 = INT32_MIN;
volatile uint32_t x114 = UINT32_MAX;
static volatile int32_t x120 = INT32_MIN;
int32_t x121 = 0;
int8_t x134 = INT8_MAX;
int16_t x139 = INT16_MIN;
volatile int64_t t34 = -56LL;
uint64_t x148 = 7829052216LLU;
volatile uint64_t t37 = 11749797324343905LLU;
int8_t x153 = -1;
int32_t x156 = INT32_MIN;
int32_t t38 = -19279;
int16_t x168 = INT16_MIN;
int32_t t41 = -1;
int64_t t42 = -439193665LL;
int32_t x179 = -1;
int8_t x181 = -13;
int16_t x185 = -1;
static int64_t x188 = INT64_MAX;
uint16_t x189 = 1U;
int8_t x192 = INT8_MAX;
int32_t t47 = -16478;
static uint8_t x193 = 118U;
int32_t x202 = -6282891;
static int64_t x203 = 1654124311221575LL;
uint16_t x205 = 8580U;
uint16_t x206 = UINT16_MAX;
volatile int32_t t51 = -59096833;
volatile uint8_t x209 = 4U;
int32_t x213 = 189466265;
int16_t x226 = -362;
static uint64_t x232 = UINT64_MAX;
int32_t t57 = 5774670;
int64_t x234 = INT64_MIN;
int16_t x247 = INT16_MIN;
uint32_t x249 = 1U;
int32_t t63 = 119;
uint8_t x257 = UINT8_MAX;
int8_t x258 = INT8_MAX;
int32_t t64 = 3870631;
static volatile int32_t x264 = INT32_MIN;
volatile int32_t t65 = -23744;
int32_t t66 = 737;
static uint16_t x269 = 0U;
volatile uint16_t x277 = 3253U;
int8_t x281 = 7;
volatile int32_t x289 = -1;
volatile int64_t x294 = 289717111850649582LL;
uint32_t x299 = UINT32_MAX;
static volatile int32_t x307 = -1;
uint64_t x309 = UINT64_MAX;
uint8_t x313 = 31U;
int32_t x315 = 0;
uint64_t x317 = 1781144951183LLU;
int64_t x320 = -1LL;
uint64_t x325 = 1038LLU;
uint64_t x329 = 8231800069482586909LLU;
uint64_t x333 = UINT64_MAX;
int32_t x334 = 3994;
uint32_t x335 = UINT32_MAX;
uint8_t x338 = UINT8_MAX;
volatile uint16_t x342 = UINT16_MAX;
volatile int16_t x345 = -1;
int64_t x346 = INT64_MIN;
volatile int16_t x357 = INT16_MAX;
static int8_t x370 = -4;
int64_t t92 = -54230892104832738LL;
uint16_t x373 = 26U;
static int32_t t93 = 62081105;
volatile int32_t t94 = 1;
static volatile int16_t x384 = INT16_MIN;
volatile int32_t t95 = -7014;
volatile uint64_t x385 = UINT64_MAX;
volatile uint16_t x388 = UINT16_MAX;
int16_t x396 = INT16_MAX;
uint64_t x402 = UINT64_MAX;
int64_t x403 = -144398868LL;
uint32_t x404 = UINT32_MAX;
static int32_t x413 = 143;
int16_t x418 = -1;
int64_t t103 = 4637LL;
volatile int16_t x421 = INT16_MAX;
uint64_t x426 = 89106388650290LLU;
static uint64_t x427 = 7696318875952141026LLU;
static volatile int32_t t105 = -2;
uint16_t x430 = 4U;
int16_t x432 = 147;
int64_t x440 = -21LL;
uint64_t t108 = 1308627726LLU;
int32_t x451 = INT32_MIN;
static volatile int32_t t111 = -1;
static volatile int8_t x453 = INT8_MIN;
static volatile int32_t t114 = 11321360;
static int8_t x467 = INT8_MIN;
static uint32_t x474 = UINT32_MAX;
int16_t x475 = 7;
int8_t x478 = INT8_MIN;
int8_t x485 = INT8_MAX;
static int32_t x494 = INT32_MIN;
int64_t x496 = INT64_MAX;
volatile uint8_t x500 = 52U;
volatile int8_t x504 = INT8_MIN;
uint32_t x505 = UINT32_MAX;
int8_t x506 = -1;
uint64_t x512 = UINT64_MAX;
static int32_t x513 = -1;
static int16_t x538 = INT16_MIN;
int64_t x543 = INT64_MAX;
int32_t x547 = -5;
uint32_t x564 = 221322093U;
int32_t x569 = INT32_MAX;
uint64_t x571 = UINT64_MAX;
static int16_t x574 = 7725;
uint16_t x579 = 27U;
volatile int32_t t144 = 1;
volatile int16_t x591 = -16;
volatile int32_t t146 = 369364;
int16_t x593 = INT16_MIN;
uint16_t x594 = UINT16_MAX;
int64_t x595 = -1LL;
volatile int32_t t147 = -13329;
static uint16_t x598 = UINT16_MAX;
int32_t x599 = 14565;
volatile int64_t t148 = -20071LL;
volatile uint32_t t149 = 139594U;
uint16_t x605 = 13242U;
uint8_t x607 = 126U;
int32_t t150 = 54405731;
static volatile uint16_t x609 = UINT16_MAX;
static volatile int8_t x610 = -1;
uint64_t x611 = 3306466781978LLU;
int32_t t151 = 164;
int32_t t153 = 898481221;
volatile int32_t t155 = 102414725;
int64_t x629 = -617891LL;
int64_t x636 = 690645412586822LL;
static uint32_t t158 = 21835U;
int32_t t159 = 18073540;
uint16_t x647 = 53U;
static uint64_t t160 = 6244464414890043LLU;
int32_t t162 = 28192717;
static int16_t x660 = INT16_MIN;
int16_t x669 = INT16_MIN;
volatile uint32_t x670 = UINT32_MAX;
uint64_t x686 = UINT64_MAX;
int64_t x687 = INT64_MAX;
int16_t x690 = 0;
volatile int64_t x695 = INT64_MAX;
volatile uint8_t x697 = 3U;
volatile int64_t x700 = INT64_MAX;
int64_t x705 = -1LL;
uint16_t x706 = 72U;
int64_t t175 = 54LL;
int16_t x714 = INT16_MIN;
int32_t x717 = INT32_MIN;
static volatile int32_t t178 = 77721456;
volatile uint8_t x726 = UINT8_MAX;
int16_t x730 = 27;
int32_t x731 = INT32_MAX;
uint32_t x732 = 946301U;
int32_t t181 = -4;
int8_t x736 = INT8_MIN;
volatile int64_t x739 = -391586197457053LL;
static volatile int32_t t183 = 2;
uint32_t x747 = 390986U;
volatile int32_t t185 = -1;
int8_t x754 = -15;
int16_t x755 = INT16_MAX;
int64_t x761 = INT64_MIN;
int64_t x766 = INT64_MIN;
int64_t x774 = -312037484056LL;
volatile int64_t x783 = 563128139116LL;
volatile int32_t t194 = 7;
int64_t t195 = 813330LL;
int32_t t196 = -1779;
int32_t x794 = INT32_MIN;
uint64_t x799 = 15LLU;


void f0(void) {
    	static volatile int32_t x1 = -1;
	int32_t x2 = INT32_MIN;
	int8_t x3 = 0;
	int16_t x4 = INT16_MIN;
	int32_t t0 = -2717455;

    t0 = (x1*(x2==(x3%x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x6 = -1;
	int32_t t1 = 6;

    t1 = (x5*(x6==(x7%x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x9 = 411920736U;
	int16_t x10 = INT16_MIN;
	int64_t x12 = INT64_MIN;
	volatile uint32_t t2 = 13034848U;

    t2 = (x9*(x10==(x11%x12)));

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -1LL;
	volatile uint64_t x15 = UINT64_MAX;
	int64_t x16 = -10360467689LL;
	int64_t t3 = 317861250735941598LL;

    t3 = (x13*(x14==(x15%x16)));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	int16_t x18 = 66;
	uint64_t x19 = 57749275122428157LLU;
	int8_t x20 = -1;
	volatile int32_t t4 = -10244;

    t4 = (x17*(x18==(x19%x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = 23;
	int16_t x22 = INT16_MIN;
	int64_t x23 = INT64_MAX;
	int64_t x24 = 17024LL;
	int32_t t5 = 3;

    t5 = (x21*(x22==(x23%x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x27 = -1LL;
	int32_t x28 = -1;
	volatile int32_t t6 = 13331699;

    t6 = (x25*(x26==(x27%x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x29 = 66353826443LLU;
	int8_t x30 = INT8_MAX;
	static uint64_t x32 = UINT64_MAX;
	volatile uint64_t t7 = 9997LLU;

    t7 = (x29*(x30==(x31%x32)));

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x33 = 1651664LLU;
	volatile uint32_t x34 = 15131730U;
	volatile uint64_t t8 = 4703LLU;

    t8 = (x33*(x34==(x35%x36)));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x38 = 92U;
	static volatile int32_t x39 = INT32_MIN;
	uint32_t x40 = UINT32_MAX;
	static int32_t t9 = 3;

    t9 = (x37*(x38==(x39%x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MAX;
	int64_t x42 = INT64_MAX;
	uint64_t x43 = UINT64_MAX;
	volatile int64_t t10 = -6747210723LL;

    t10 = (x41*(x42==(x43%x44)));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = -1LL;
	int16_t x46 = -7;
	uint64_t x47 = 99752LLU;
	int8_t x48 = INT8_MIN;
	int64_t t11 = -40LL;

    t11 = (x45*(x46==(x47%x48)));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x49 = 56U;
	uint16_t x50 = 382U;
	volatile int8_t x51 = INT8_MIN;
	int32_t t12 = 201539;

    t12 = (x49*(x50==(x51%x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = UINT16_MAX;
	uint8_t x54 = 67U;
	volatile int16_t x55 = -3883;
	int64_t x56 = INT64_MAX;
	volatile int32_t t13 = 15940183;

    t13 = (x53*(x54==(x55%x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x57 = 10048U;
	uint8_t x58 = UINT8_MAX;
	static uint8_t x59 = 0U;
	int8_t x60 = -1;

    t14 = (x57*(x58==(x59%x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x61 = -1;
	int16_t x62 = INT16_MAX;
	int32_t x64 = INT32_MAX;

    t15 = (x61*(x62==(x63%x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = -1;
	uint64_t x66 = UINT64_MAX;
	int64_t x67 = INT64_MAX;
	volatile uint8_t x68 = 7U;
	volatile int32_t t16 = -56240;

    t16 = (x65*(x66==(x67%x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = 1408;
	int32_t x70 = INT32_MAX;
	int8_t x71 = INT8_MIN;

    t17 = (x69*(x70==(x71%x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = 47U;
	int16_t x74 = INT16_MIN;
	int16_t x75 = INT16_MIN;
	uint64_t x76 = 435730567838399492LLU;
	volatile int32_t t18 = 39176;

    t18 = (x73*(x74==(x75%x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x77 = 443954341473646337LLU;
	uint32_t x79 = UINT32_MAX;
	static int32_t x80 = INT32_MAX;
	volatile uint64_t t19 = 19010958932LLU;

    t19 = (x77*(x78==(x79%x80)));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x81 = 3U;
	int32_t x82 = INT32_MAX;
	int8_t x84 = INT8_MAX;
	volatile int32_t t20 = -2;

    t20 = (x81*(x82==(x83%x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x86 = INT32_MAX;
	volatile int64_t x87 = INT64_MIN;
	int16_t x88 = 8044;
	volatile uint32_t t21 = 63027311U;

    t21 = (x85*(x86==(x87%x88)));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x90 = UINT8_MAX;
	int8_t x92 = INT8_MAX;
	static int32_t t22 = -1;

    t22 = (x89*(x90==(x91%x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x94 = INT16_MIN;
	static uint8_t x95 = UINT8_MAX;
	uint16_t x96 = 132U;

    t23 = (x93*(x94==(x95%x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x97 = INT16_MIN;
	int64_t x98 = INT64_MAX;
	int16_t x99 = INT16_MAX;
	int32_t x100 = INT32_MIN;
	static volatile int32_t t24 = -264;

    t24 = (x97*(x98==(x99%x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x101 = 277;
	int64_t x102 = INT64_MIN;
	int8_t x103 = INT8_MAX;
	int16_t x104 = -1;
	volatile int32_t t25 = 845407;

    t25 = (x101*(x102==(x103%x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x105 = 0U;
	int64_t x106 = INT64_MIN;
	int64_t x108 = INT64_MIN;
	int32_t t26 = 24;

    t26 = (x105*(x106==(x107%x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MIN;
	int8_t x111 = INT8_MIN;
	volatile int64_t t27 = -846LL;

    t27 = (x109*(x110==(x111%x112)));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x113 = INT32_MIN;
	static uint64_t x115 = 18LLU;
	uint64_t x116 = 2LLU;
	int32_t t28 = 14;

    t28 = (x113*(x114==(x115%x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint16_t x117 = 20363U;
	uint16_t x118 = 15786U;
	volatile uint32_t x119 = 23940397U;
	int32_t t29 = 3246;

    t29 = (x117*(x118==(x119%x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x122 = 53;
	uint8_t x123 = UINT8_MAX;
	uint32_t x124 = 15956234U;
	static volatile int32_t t30 = -126319095;

    t30 = (x121*(x122==(x123%x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = -1;
	int16_t x126 = 1772;
	int16_t x127 = 1;
	int64_t x128 = -1LL;
	volatile int32_t t31 = -4;

    t31 = (x125*(x126==(x127%x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = 107642;
	uint8_t x130 = 24U;
	int8_t x131 = 31;
	static int32_t x132 = -7613;
	volatile int32_t t32 = -2;

    t32 = (x129*(x130==(x131%x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = UINT32_MAX;
	static uint16_t x135 = 13987U;
	static int16_t x136 = INT16_MAX;
	volatile uint32_t t33 = 4276U;

    t33 = (x133*(x134==(x135%x136)));

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = -1LL;
	uint8_t x138 = 0U;
	int64_t x140 = -1LL;

    t34 = (x137*(x138==(x139%x140)));

    if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x141 = 1646U;
	int32_t x142 = INT32_MAX;
	int8_t x143 = -3;
	int8_t x144 = -1;
	volatile int32_t t35 = -66292;

    t35 = (x141*(x142==(x143%x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = -1;
	int8_t x146 = INT8_MIN;
	volatile int16_t x147 = INT16_MIN;
	static volatile int32_t t36 = 24826356;

    t36 = (x145*(x146==(x147%x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x149 = 323395LLU;
	int16_t x150 = INT16_MIN;
	int8_t x151 = INT8_MAX;
	volatile int8_t x152 = -6;

    t37 = (x149*(x150==(x151%x152)));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x154 = 4441793638236502LLU;
	uint16_t x155 = 30479U;

    t38 = (x153*(x154==(x155%x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = INT32_MIN;
	int16_t x158 = INT16_MIN;
	uint8_t x159 = UINT8_MAX;
	volatile int64_t x160 = INT64_MIN;
	volatile int32_t t39 = 43;

    t39 = (x157*(x158==(x159%x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = INT64_MIN;
	uint16_t x162 = 801U;
	uint8_t x163 = 0U;
	uint64_t x164 = 3386LLU;
	volatile int64_t t40 = 2785025LL;

    t40 = (x161*(x162==(x163%x164)));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = INT16_MIN;
	int64_t x166 = -5944LL;
	int16_t x167 = -5;

    t41 = (x165*(x166==(x167%x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x169 = INT64_MIN;
	int64_t x170 = 11941127301186LL;
	int32_t x171 = INT32_MAX;
	int16_t x172 = INT16_MIN;

    t42 = (x169*(x170==(x171%x172)));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x173 = 1U;
	int64_t x174 = INT64_MIN;
	int8_t x175 = INT8_MIN;
	static uint16_t x176 = 954U;
	volatile int32_t t43 = 12510;

    t43 = (x173*(x174==(x175%x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = -1LL;
	int32_t x178 = INT32_MIN;
	volatile uint64_t x180 = 731841522LLU;
	volatile int64_t t44 = 26667LL;

    t44 = (x177*(x178==(x179%x180)));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x182 = -630;
	int32_t x183 = 0;
	int64_t x184 = -1LL;
	volatile int32_t t45 = 3454662;

    t45 = (x181*(x182==(x183%x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x186 = 38;
	int64_t x187 = -1LL;
	volatile int32_t t46 = 112948531;

    t46 = (x185*(x186==(x187%x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x190 = INT32_MAX;
	volatile int64_t x191 = 19770336390LL;

    t47 = (x189*(x190==(x191%x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x194 = INT8_MAX;
	int16_t x195 = 1854;
	volatile int64_t x196 = INT64_MIN;
	int32_t t48 = 2009980;

    t48 = (x193*(x194==(x195%x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = INT32_MIN;
	int64_t x198 = -1LL;
	volatile uint32_t x199 = 5545U;
	int16_t x200 = INT16_MAX;
	volatile int32_t t49 = -470;

    t49 = (x197*(x198==(x199%x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint8_t x201 = 125U;
	int8_t x204 = 45;
	volatile int32_t t50 = 576780;

    t50 = (x201*(x202==(x203%x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x207 = 3U;
	uint32_t x208 = 1570U;

    t51 = (x205*(x206==(x207%x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x210 = -224326LL;
	uint16_t x211 = UINT16_MAX;
	int64_t x212 = INT64_MIN;
	int32_t t52 = -1;

    t52 = (x209*(x210==(x211%x212)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x214 = INT64_MIN;
	volatile int8_t x215 = INT8_MIN;
	volatile int8_t x216 = -1;
	static int32_t t53 = 2118007;

    t53 = (x213*(x214==(x215%x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = UINT8_MAX;
	volatile uint8_t x218 = 74U;
	static volatile uint16_t x219 = 7U;
	static int32_t x220 = INT32_MAX;
	static int32_t t54 = 1;

    t54 = (x217*(x218==(x219%x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x221 = 238697U;
	static uint64_t x222 = 26080003889299042LLU;
	int16_t x223 = -218;
	int16_t x224 = -123;
	uint32_t t55 = 25U;

    t55 = (x221*(x222==(x223%x224)));

    if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = -436889LL;
	int8_t x227 = -41;
	uint8_t x228 = UINT8_MAX;
	volatile int64_t t56 = 16024334294668220LL;

    t56 = (x225*(x226==(x227%x228)));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = -1;
	int64_t x230 = INT64_MIN;
	int16_t x231 = INT16_MIN;

    t57 = (x229*(x230==(x231%x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = -668649671;
	uint8_t x235 = 4U;
	static volatile uint64_t x236 = 31538143123LLU;
	static int32_t t58 = 0;

    t58 = (x233*(x234==(x235%x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = 58U;
	int64_t x238 = INT64_MIN;
	volatile int16_t x239 = -1;
	int16_t x240 = INT16_MAX;
	volatile int32_t t59 = 36;

    t59 = (x237*(x238==(x239%x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = -36;
	static volatile int32_t x242 = 1311;
	volatile int8_t x243 = INT8_MIN;
	volatile int64_t x244 = 401569033LL;
	volatile int32_t t60 = -55651266;

    t60 = (x241*(x242==(x243%x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x245 = UINT64_MAX;
	volatile int32_t x246 = -205;
	uint8_t x248 = UINT8_MAX;
	uint64_t t61 = 269127550584296LLU;

    t61 = (x245*(x246==(x247%x248)));

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint16_t x250 = 1816U;
	int32_t x251 = 866;
	uint8_t x252 = 54U;
	uint32_t t62 = 1001934364U;

    t62 = (x249*(x250==(x251%x252)));

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x253 = -108;
	int64_t x254 = 0LL;
	volatile int64_t x255 = -1507596LL;
	int8_t x256 = INT8_MIN;

    t63 = (x253*(x254==(x255%x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x259 = INT32_MIN;
	static int32_t x260 = INT32_MAX;

    t64 = (x257*(x258==(x259%x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = -1;
	volatile int8_t x262 = INT8_MAX;
	uint64_t x263 = UINT64_MAX;

    t65 = (x261*(x262==(x263%x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x265 = UINT16_MAX;
	volatile uint32_t x266 = 871421300U;
	int16_t x267 = 14341;
	uint16_t x268 = 1U;

    t66 = (x265*(x266==(x267%x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x270 = INT64_MIN;
	int64_t x271 = -1LL;
	int8_t x272 = INT8_MAX;
	volatile int32_t t67 = 31;

    t67 = (x269*(x270==(x271%x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = 499;
	int8_t x274 = -12;
	static uint64_t x275 = 12156114LLU;
	static int8_t x276 = INT8_MIN;
	volatile int32_t t68 = 281;

    t68 = (x273*(x274==(x275%x276)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x278 = 152LLU;
	int64_t x279 = -1LL;
	int32_t x280 = -1;
	int32_t t69 = 36244360;

    t69 = (x277*(x278==(x279%x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint32_t x282 = UINT32_MAX;
	int64_t x283 = INT64_MAX;
	static uint16_t x284 = 76U;
	static volatile int32_t t70 = -3;

    t70 = (x281*(x282==(x283%x284)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = -1;
	int8_t x286 = INT8_MAX;
	static uint64_t x287 = UINT64_MAX;
	volatile int32_t x288 = -196;
	volatile int32_t t71 = 7714;

    t71 = (x285*(x286==(x287%x288)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x290 = UINT8_MAX;
	int64_t x291 = INT64_MAX;
	volatile int32_t x292 = 13283;
	static volatile int32_t t72 = -19149871;

    t72 = (x289*(x290==(x291%x292)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int8_t x293 = 4;
	static int32_t x295 = INT32_MIN;
	int16_t x296 = INT16_MIN;
	volatile int32_t t73 = -795632776;

    t73 = (x293*(x294==(x295%x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x297 = UINT64_MAX;
	int8_t x298 = -17;
	int64_t x300 = INT64_MIN;
	uint64_t t74 = 228703LLU;

    t74 = (x297*(x298==(x299%x300)));

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x301 = -1;
	uint64_t x302 = 3209884059193076LLU;
	volatile uint8_t x303 = UINT8_MAX;
	static int32_t x304 = INT32_MIN;
	static volatile int32_t t75 = -8955;

    t75 = (x301*(x302==(x303%x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x305 = 102U;
	uint16_t x306 = 19093U;
	int8_t x308 = 5;
	static volatile uint32_t t76 = 8U;

    t76 = (x305*(x306==(x307%x308)));

    if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x310 = 63;
	int16_t x311 = INT16_MAX;
	uint64_t x312 = 9057796552202394551LLU;
	uint64_t t77 = 259079LLU;

    t77 = (x309*(x310==(x311%x312)));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x314 = 7;
	uint8_t x316 = 32U;
	volatile int32_t t78 = 215;

    t78 = (x313*(x314==(x315%x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x318 = 1919613LL;
	static int64_t x319 = INT64_MAX;
	uint64_t t79 = 1865306LLU;

    t79 = (x317*(x318==(x319%x320)));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = INT64_MIN;
	static volatile int32_t x322 = -1;
	uint16_t x323 = 2U;
	static int16_t x324 = -1;
	volatile int64_t t80 = -2340LL;

    t80 = (x321*(x322==(x323%x324)));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x326 = INT16_MIN;
	int16_t x327 = INT16_MIN;
	int64_t x328 = 22LL;
	volatile uint64_t t81 = 499732800LLU;

    t81 = (x325*(x326==(x327%x328)));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x330 = -1;
	int8_t x331 = -1;
	volatile int32_t x332 = INT32_MIN;
	uint64_t t82 = 112414247051103LLU;

    t82 = (x329*(x330==(x331%x332)));

    if (t82 != 8231800069482586909LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x336 = INT16_MIN;
	static uint64_t t83 = 4189475LLU;

    t83 = (x333*(x334==(x335%x336)));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = INT32_MAX;
	int64_t x339 = INT64_MIN;
	int8_t x340 = -1;
	static volatile int32_t t84 = -3314221;

    t84 = (x337*(x338==(x339%x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = -1LL;
	int32_t x343 = INT32_MAX;
	int8_t x344 = -1;
	volatile int64_t t85 = 7377383058964209LL;

    t85 = (x341*(x342==(x343%x344)));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x347 = 35118LL;
	int8_t x348 = INT8_MAX;
	volatile int32_t t86 = 0;

    t86 = (x345*(x346==(x347%x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint8_t x349 = 4U;
	int32_t x350 = 33033;
	int16_t x351 = 5797;
	static int64_t x352 = INT64_MAX;
	int32_t t87 = -42124240;

    t87 = (x349*(x350==(x351%x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x353 = UINT64_MAX;
	int64_t x354 = 837328033107330LL;
	uint64_t x355 = 1523193LLU;
	int8_t x356 = INT8_MIN;
	volatile uint64_t t88 = 119LLU;

    t88 = (x353*(x354==(x355%x356)));

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x358 = 281831531464964253LLU;
	int32_t x359 = INT32_MIN;
	int8_t x360 = INT8_MIN;
	static int32_t t89 = 1884;

    t89 = (x357*(x358==(x359%x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = 4;
	uint16_t x362 = 0U;
	volatile uint8_t x363 = 0U;
	static int64_t x364 = -80LL;
	static volatile int32_t t90 = -1;

    t90 = (x361*(x362==(x363%x364)));

    if (t90 != 4) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x365 = 28325629027503LLU;
	static volatile int16_t x366 = 449;
	int64_t x367 = INT64_MIN;
	uint64_t x368 = 4280661367377400LLU;
	uint64_t t91 = 132LLU;

    t91 = (x365*(x366==(x367%x368)));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x369 = INT64_MAX;
	uint16_t x371 = 4053U;
	int64_t x372 = INT64_MIN;

    t92 = (x369*(x370==(x371%x372)));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x374 = 3074036409066342LLU;
	volatile int64_t x375 = INT64_MIN;
	uint16_t x376 = UINT16_MAX;

    t93 = (x373*(x374==(x375%x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x377 = 108U;
	volatile int64_t x378 = -19LL;
	uint16_t x379 = 25U;
	static volatile int8_t x380 = INT8_MAX;

    t94 = (x377*(x378==(x379%x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint8_t x381 = 22U;
	volatile int8_t x382 = INT8_MIN;
	volatile uint16_t x383 = UINT16_MAX;

    t95 = (x381*(x382==(x383%x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x386 = 0U;
	uint8_t x387 = 8U;
	volatile uint64_t t96 = 7388068146LLU;

    t96 = (x385*(x386==(x387%x388)));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x389 = INT32_MIN;
	uint64_t x390 = 1LLU;
	int16_t x391 = -1;
	int64_t x392 = 499868922897943LL;
	int32_t t97 = 102059;

    t97 = (x389*(x390==(x391%x392)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = INT8_MAX;
	int8_t x394 = INT8_MIN;
	int64_t x395 = 2003940LL;
	int32_t t98 = 0;

    t98 = (x393*(x394==(x395%x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x401 = UINT8_MAX;
	volatile int32_t t99 = -265684281;

    t99 = (x401*(x402==(x403%x404)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x405 = -1;
	int64_t x406 = INT64_MAX;
	uint8_t x407 = UINT8_MAX;
	int32_t x408 = INT32_MAX;
	int32_t t100 = -1300;

    t100 = (x405*(x406==(x407%x408)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x409 = INT8_MIN;
	uint8_t x410 = UINT8_MAX;
	int64_t x411 = INT64_MIN;
	int64_t x412 = -52716073787LL;
	int32_t t101 = -1019;

    t101 = (x409*(x410==(x411%x412)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x414 = -1LL;
	static int8_t x415 = 49;
	int32_t x416 = -13462604;
	int32_t t102 = -77;

    t102 = (x413*(x414==(x415%x416)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x417 = -1LL;
	volatile int8_t x419 = 1;
	int16_t x420 = 3446;

    t103 = (x417*(x418==(x419%x420)));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x422 = INT32_MIN;
	volatile int32_t x423 = INT32_MIN;
	int16_t x424 = -1;
	volatile int32_t t104 = -110603;

    t104 = (x421*(x422==(x423%x424)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint16_t x425 = UINT16_MAX;
	static volatile int32_t x428 = INT32_MAX;

    t105 = (x425*(x426==(x427%x428)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x429 = -1LL;
	static int64_t x431 = -13LL;
	volatile int64_t t106 = 1818712121920694519LL;

    t106 = (x429*(x430==(x431%x432)));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x433 = -1;
	int8_t x434 = -1;
	int16_t x435 = 2591;
	static int64_t x436 = -1LL;
	volatile int32_t t107 = -50584078;

    t107 = (x433*(x434==(x435%x436)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint64_t x437 = UINT64_MAX;
	uint64_t x438 = 14532009675835LLU;
	int32_t x439 = -1;

    t108 = (x437*(x438==(x439%x440)));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x441 = INT32_MIN;
	static volatile int32_t x442 = INT32_MAX;
	static uint64_t x443 = 656516352350709LLU;
	volatile int16_t x444 = -12;
	volatile int32_t t109 = 26133;

    t109 = (x441*(x442==(x443%x444)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x445 = UINT16_MAX;
	static int32_t x446 = 0;
	int16_t x447 = -607;
	static int8_t x448 = INT8_MIN;
	volatile int32_t t110 = 0;

    t110 = (x445*(x446==(x447%x448)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x449 = 0U;
	int32_t x450 = -1;
	uint8_t x452 = UINT8_MAX;

    t111 = (x449*(x450==(x451%x452)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x454 = 30U;
	uint64_t x455 = 3374603LLU;
	uint32_t x456 = 3U;
	static volatile int32_t t112 = 16422;

    t112 = (x453*(x454==(x455%x456)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x457 = INT32_MIN;
	uint8_t x458 = 20U;
	int16_t x459 = INT16_MIN;
	uint64_t x460 = 499557480LLU;
	volatile int32_t t113 = 55;

    t113 = (x457*(x458==(x459%x460)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x461 = 0;
	int16_t x462 = 1;
	int64_t x463 = INT64_MIN;
	int32_t x464 = INT32_MAX;

    t114 = (x461*(x462==(x463%x464)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x465 = 240;
	volatile int32_t x466 = -1;
	static volatile int32_t x468 = INT32_MIN;
	int32_t t115 = -19378;

    t115 = (x465*(x466==(x467%x468)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int64_t x469 = INT64_MIN;
	uint64_t x470 = 126631150089LLU;
	int8_t x471 = -1;
	int64_t x472 = INT64_MAX;
	volatile int64_t t116 = 10955579232332LL;

    t116 = (x469*(x470==(x471%x472)));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x473 = UINT64_MAX;
	uint64_t x476 = 47LLU;
	uint64_t t117 = 625005144990340520LLU;

    t117 = (x473*(x474==(x475%x476)));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x477 = INT16_MIN;
	int16_t x479 = INT16_MAX;
	int32_t x480 = -172040;
	static int32_t t118 = 2;

    t118 = (x477*(x478==(x479%x480)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int32_t x481 = INT32_MIN;
	int32_t x482 = -4;
	int16_t x483 = -1;
	int64_t x484 = INT64_MAX;
	int32_t t119 = 1287;

    t119 = (x481*(x482==(x483%x484)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x486 = -1;
	int64_t x487 = 71464101LL;
	int64_t x488 = -1324980LL;
	int32_t t120 = -326;

    t120 = (x485*(x486==(x487%x488)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x489 = 1124;
	static volatile uint16_t x490 = UINT16_MAX;
	int64_t x491 = INT64_MAX;
	int64_t x492 = 27LL;
	volatile int32_t t121 = 1;

    t121 = (x489*(x490==(x491%x492)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x493 = -1LL;
	int64_t x495 = INT64_MIN;
	int64_t t122 = -291682649000213LL;

    t122 = (x493*(x494==(x495%x496)));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x497 = INT32_MIN;
	static uint8_t x498 = 0U;
	int32_t x499 = INT32_MAX;
	int32_t t123 = -59571;

    t123 = (x497*(x498==(x499%x500)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x501 = INT64_MIN;
	uint64_t x502 = 6LLU;
	uint64_t x503 = UINT64_MAX;
	static int64_t t124 = 3958728953306777293LL;

    t124 = (x501*(x502==(x503%x504)));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint8_t x507 = 127U;
	int64_t x508 = INT64_MAX;
	uint32_t t125 = 252589412U;

    t125 = (x505*(x506==(x507%x508)));

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x509 = 34U;
	uint16_t x510 = 41U;
	static uint16_t x511 = 3492U;
	volatile int32_t t126 = -141648819;

    t126 = (x509*(x510==(x511%x512)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x514 = 1378U;
	int8_t x515 = -1;
	uint64_t x516 = 1019LLU;
	volatile int32_t t127 = -6;

    t127 = (x513*(x514==(x515%x516)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x517 = 825536863U;
	static int32_t x518 = INT32_MIN;
	uint64_t x519 = UINT64_MAX;
	int16_t x520 = 1;
	uint32_t t128 = 245375U;

    t128 = (x517*(x518==(x519%x520)));

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x521 = INT32_MAX;
	int64_t x522 = INT64_MAX;
	uint8_t x523 = 6U;
	int32_t x524 = INT32_MIN;
	volatile int32_t t129 = -143;

    t129 = (x521*(x522==(x523%x524)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x525 = 2U;
	int32_t x526 = -54;
	uint16_t x527 = 77U;
	uint32_t x528 = UINT32_MAX;
	int32_t t130 = 43989669;

    t130 = (x525*(x526==(x527%x528)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x529 = -3064566LL;
	int16_t x530 = INT16_MIN;
	int8_t x531 = 53;
	int32_t x532 = INT32_MIN;
	int64_t t131 = 8111256643589932LL;

    t131 = (x529*(x530==(x531%x532)));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x533 = INT8_MIN;
	int64_t x534 = 1LL;
	int64_t x535 = -1LL;
	uint64_t x536 = UINT64_MAX;
	volatile int32_t t132 = 10496691;

    t132 = (x533*(x534==(x535%x536)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x537 = UINT32_MAX;
	int64_t x539 = -2506226288824LL;
	volatile int8_t x540 = INT8_MAX;
	uint32_t t133 = 314153U;

    t133 = (x537*(x538==(x539%x540)));

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x541 = INT32_MAX;
	static uint16_t x542 = 1U;
	static int64_t x544 = INT64_MAX;
	volatile int32_t t134 = 11397212;

    t134 = (x541*(x542==(x543%x544)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x545 = INT16_MIN;
	uint8_t x546 = UINT8_MAX;
	int8_t x548 = INT8_MAX;
	static volatile int32_t t135 = -7108844;

    t135 = (x545*(x546==(x547%x548)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x549 = UINT32_MAX;
	volatile int16_t x550 = INT16_MAX;
	uint16_t x551 = UINT16_MAX;
	volatile int64_t x552 = -51506213268477697LL;
	static volatile uint32_t t136 = 1608882729U;

    t136 = (x549*(x550==(x551%x552)));

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x553 = INT8_MAX;
	volatile int64_t x554 = -1LL;
	int64_t x555 = -56009782117408765LL;
	uint8_t x556 = 3U;
	int32_t t137 = -1143;

    t137 = (x553*(x554==(x555%x556)));

    if (t137 != 127) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x557 = 53627U;
	uint32_t x558 = 431517233U;
	uint64_t x559 = 1973504143871444LLU;
	int32_t x560 = INT32_MAX;
	static volatile uint32_t t138 = 1927059U;

    t138 = (x557*(x558==(x559%x560)));

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x561 = 15560984383LL;
	static int8_t x562 = -1;
	volatile int16_t x563 = INT16_MIN;
	volatile int64_t t139 = -1LL;

    t139 = (x561*(x562==(x563%x564)));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x565 = 0U;
	int8_t x566 = -1;
	static uint16_t x567 = 1U;
	volatile uint8_t x568 = UINT8_MAX;
	int32_t t140 = 82586671;

    t140 = (x565*(x566==(x567%x568)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x570 = 1U;
	int64_t x572 = 93844318LL;
	int32_t t141 = -190;

    t141 = (x569*(x570==(x571%x572)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x573 = 276LLU;
	uint16_t x575 = UINT16_MAX;
	int16_t x576 = 3;
	volatile uint64_t t142 = 4820599LLU;

    t142 = (x573*(x574==(x575%x576)));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint32_t x577 = 4016U;
	static int8_t x578 = INT8_MIN;
	int16_t x580 = -1;
	volatile uint32_t t143 = 1U;

    t143 = (x577*(x578==(x579%x580)));

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x581 = -1;
	int64_t x582 = 117156LL;
	int64_t x583 = INT64_MIN;
	int64_t x584 = INT64_MIN;

    t144 = (x581*(x582==(x583%x584)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x585 = UINT32_MAX;
	int64_t x586 = 3131379LL;
	uint32_t x587 = UINT32_MAX;
	static int64_t x588 = INT64_MIN;
	volatile uint32_t t145 = 950993744U;

    t145 = (x585*(x586==(x587%x588)));

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x589 = INT32_MIN;
	volatile int16_t x590 = -6501;
	volatile uint8_t x592 = 1U;

    t146 = (x589*(x590==(x591%x592)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x596 = 39766988662751924LLU;

    t147 = (x593*(x594==(x595%x596)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x597 = INT64_MIN;
	int32_t x600 = -26753373;

    t148 = (x597*(x598==(x599%x600)));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x601 = UINT32_MAX;
	int16_t x602 = 4343;
	int32_t x603 = -340936;
	int64_t x604 = INT64_MIN;

    t149 = (x601*(x602==(x603%x604)));

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x606 = -7;
	uint64_t x608 = 290LLU;

    t150 = (x605*(x606==(x607%x608)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x612 = INT64_MIN;

    t151 = (x609*(x610==(x611%x612)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x613 = 1912U;
	uint64_t x614 = UINT64_MAX;
	uint8_t x615 = 40U;
	int64_t x616 = -260716884297LL;
	volatile int32_t t152 = -507409479;

    t152 = (x613*(x614==(x615%x616)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x617 = -1;
	uint16_t x618 = UINT16_MAX;
	int32_t x619 = -1;
	static int8_t x620 = -1;

    t153 = (x617*(x618==(x619%x620)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x621 = UINT8_MAX;
	int8_t x622 = 7;
	static volatile int8_t x623 = INT8_MIN;
	int64_t x624 = -1LL;
	int32_t t154 = -241642;

    t154 = (x621*(x622==(x623%x624)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x625 = -1;
	static int32_t x626 = INT32_MIN;
	uint64_t x627 = 149007287621726318LLU;
	uint64_t x628 = 7230866771LLU;

    t155 = (x625*(x626==(x627%x628)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x630 = 9U;
	int16_t x631 = INT16_MIN;
	int32_t x632 = -10183305;
	volatile int64_t t156 = -2711165585798408397LL;

    t156 = (x629*(x630==(x631%x632)));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x633 = 35911627811446975LL;
	int32_t x634 = -88;
	uint8_t x635 = 1U;
	int64_t t157 = 2330LL;

    t157 = (x633*(x634==(x635%x636)));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x637 = 54163U;
	int8_t x638 = INT8_MAX;
	int32_t x639 = 86529995;
	volatile int16_t x640 = -1;

    t158 = (x637*(x638==(x639%x640)));

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x641 = -6;
	uint64_t x642 = 2616815LLU;
	int64_t x643 = INT64_MIN;
	int64_t x644 = -140366058257930LL;

    t159 = (x641*(x642==(x643%x644)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x645 = 0LLU;
	int8_t x646 = INT8_MIN;
	volatile uint8_t x648 = UINT8_MAX;

    t160 = (x645*(x646==(x647%x648)));

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x649 = INT8_MIN;
	int8_t x650 = 0;
	int32_t x651 = INT32_MIN;
	int64_t x652 = INT64_MAX;
	volatile int32_t t161 = 17780;

    t161 = (x649*(x650==(x651%x652)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x653 = 0U;
	uint8_t x654 = 0U;
	int16_t x655 = -1;
	int8_t x656 = INT8_MIN;

    t162 = (x653*(x654==(x655%x656)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x657 = INT64_MAX;
	volatile int8_t x658 = 5;
	int32_t x659 = INT32_MAX;
	int64_t t163 = -61415314423LL;

    t163 = (x657*(x658==(x659%x660)));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x661 = UINT16_MAX;
	uint16_t x662 = UINT16_MAX;
	int32_t x663 = INT32_MIN;
	int8_t x664 = 5;
	int32_t t164 = -1;

    t164 = (x661*(x662==(x663%x664)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint64_t x665 = 3LLU;
	int64_t x666 = INT64_MAX;
	static int8_t x667 = INT8_MIN;
	static int64_t x668 = INT64_MIN;
	volatile uint64_t t165 = 1327504256680138973LLU;

    t165 = (x665*(x666==(x667%x668)));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x671 = -1;
	uint32_t x672 = 1172U;
	int32_t t166 = 1308;

    t166 = (x669*(x670==(x671%x672)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x673 = 21U;
	int32_t x674 = 3;
	uint64_t x675 = UINT64_MAX;
	int16_t x676 = 96;
	volatile int32_t t167 = 32534122;

    t167 = (x673*(x674==(x675%x676)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x677 = INT32_MIN;
	int32_t x678 = INT32_MAX;
	static volatile int32_t x679 = -1210967;
	uint8_t x680 = 95U;
	static volatile int32_t t168 = 6834;

    t168 = (x677*(x678==(x679%x680)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x681 = INT32_MIN;
	int16_t x682 = -7;
	volatile int32_t x683 = INT32_MAX;
	int8_t x684 = 3;
	volatile int32_t t169 = 73314687;

    t169 = (x681*(x682==(x683%x684)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x685 = INT64_MIN;
	uint64_t x688 = 73787044580857LLU;
	volatile int64_t t170 = 71529LL;

    t170 = (x685*(x686==(x687%x688)));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x689 = 30021U;
	static int16_t x691 = -1;
	static uint16_t x692 = UINT16_MAX;
	int32_t t171 = -620505;

    t171 = (x689*(x690==(x691%x692)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x693 = 768550281U;
	static uint8_t x694 = 2U;
	static uint32_t x696 = 6555U;
	volatile uint32_t t172 = 435U;

    t172 = (x693*(x694==(x695%x696)));

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int32_t x698 = INT32_MIN;
	uint32_t x699 = 2464U;
	static int32_t t173 = 20;

    t173 = (x697*(x698==(x699%x700)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x701 = 62484255;
	int32_t x702 = 1;
	uint8_t x703 = UINT8_MAX;
	volatile uint32_t x704 = UINT32_MAX;
	volatile int32_t t174 = 13327;

    t174 = (x701*(x702==(x703%x704)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x707 = INT32_MAX;
	static volatile int8_t x708 = -1;

    t175 = (x705*(x706==(x707%x708)));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x709 = 12466U;
	static volatile int8_t x710 = INT8_MAX;
	int64_t x711 = INT64_MIN;
	static int32_t x712 = -1;
	volatile uint32_t t176 = 10U;

    t176 = (x709*(x710==(x711%x712)));

    if (t176 != 0U) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile uint32_t x713 = 2226128U;
	uint64_t x715 = UINT64_MAX;
	int8_t x716 = -1;
	static uint32_t t177 = 1447821U;

    t177 = (x713*(x714==(x715%x716)));

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x718 = 3;
	uint8_t x719 = 0U;
	uint32_t x720 = UINT32_MAX;

    t178 = (x717*(x718==(x719%x720)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint16_t x721 = 86U;
	uint16_t x722 = UINT16_MAX;
	static int16_t x723 = INT16_MIN;
	volatile uint32_t x724 = 254U;
	static volatile int32_t t179 = 142;

    t179 = (x721*(x722==(x723%x724)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x725 = INT8_MIN;
	int16_t x727 = INT16_MIN;
	uint32_t x728 = UINT32_MAX;
	int32_t t180 = 110;

    t180 = (x725*(x726==(x727%x728)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x729 = INT16_MIN;

    t181 = (x729*(x730==(x731%x732)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x733 = -2989155;
	static volatile int16_t x734 = 1;
	uint8_t x735 = UINT8_MAX;
	static volatile int32_t t182 = -61545;

    t182 = (x733*(x734==(x735%x736)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x737 = 0;
	uint8_t x738 = 25U;
	static volatile uint8_t x740 = 26U;

    t183 = (x737*(x738==(x739%x740)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x741 = UINT8_MAX;
	static int16_t x742 = -4;
	uint8_t x743 = 6U;
	int64_t x744 = -1LL;
	int32_t t184 = -56284;

    t184 = (x741*(x742==(x743%x744)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x745 = -1;
	int32_t x746 = INT32_MAX;
	int8_t x748 = INT8_MIN;

    t185 = (x745*(x746==(x747%x748)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x749 = 18;
	int64_t x750 = -1LL;
	int16_t x751 = INT16_MIN;
	uint32_t x752 = 93U;
	int32_t t186 = 0;

    t186 = (x749*(x750==(x751%x752)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x753 = UINT32_MAX;
	uint64_t x756 = 33880LLU;
	volatile uint32_t t187 = 59U;

    t187 = (x753*(x754==(x755%x756)));

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int32_t x757 = INT32_MIN;
	static int64_t x758 = INT64_MIN;
	static int8_t x759 = INT8_MIN;
	int64_t x760 = INT64_MIN;
	int32_t t188 = 291254;

    t188 = (x757*(x758==(x759%x760)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x762 = INT64_MIN;
	int8_t x763 = -53;
	static int8_t x764 = INT8_MAX;
	int64_t t189 = 69634526LL;

    t189 = (x761*(x762==(x763%x764)));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x765 = INT64_MIN;
	volatile int64_t x767 = INT64_MIN;
	int32_t x768 = INT32_MIN;
	volatile int64_t t190 = 869LL;

    t190 = (x765*(x766==(x767%x768)));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x769 = 0;
	int32_t x770 = -114763;
	int32_t x771 = INT32_MIN;
	int64_t x772 = INT64_MIN;
	static int32_t t191 = -94478155;

    t191 = (x769*(x770==(x771%x772)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x773 = 853;
	int32_t x775 = -2492;
	int8_t x776 = 14;
	int32_t t192 = 381;

    t192 = (x773*(x774==(x775%x776)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x777 = -1;
	int16_t x778 = 415;
	int8_t x779 = INT8_MIN;
	int16_t x780 = INT16_MIN;
	int32_t t193 = -56008334;

    t193 = (x777*(x778==(x779%x780)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x781 = 1U;
	int32_t x782 = INT32_MIN;
	int32_t x784 = INT32_MIN;

    t194 = (x781*(x782==(x783%x784)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int64_t x785 = -1LL;
	int32_t x786 = -1908746;
	int32_t x787 = INT32_MIN;
	int16_t x788 = INT16_MAX;

    t195 = (x785*(x786==(x787%x788)));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x789 = 8058U;
	uint8_t x790 = UINT8_MAX;
	static volatile int16_t x791 = -1;
	int8_t x792 = INT8_MAX;

    t196 = (x789*(x790==(x791%x792)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x793 = -182;
	uint32_t x795 = UINT32_MAX;
	int8_t x796 = INT8_MAX;
	volatile int32_t t197 = 175763584;

    t197 = (x793*(x794==(x795%x796)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x797 = INT64_MIN;
	int32_t x798 = 374195910;
	int8_t x800 = -31;
	static int64_t t198 = 3131744388845916LL;

    t198 = (x797*(x798==(x799%x800)));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x801 = -979681246505156LL;
	volatile uint64_t x802 = UINT64_MAX;
	static int16_t x803 = INT16_MAX;
	int8_t x804 = -1;
	volatile int64_t t199 = -29640350970LL;

    t199 = (x801*(x802==(x803%x804)));

    if (t199 != 0LL) { NG(); } else { ; }
	
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

