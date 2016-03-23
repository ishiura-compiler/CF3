
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

int64_t x4 = INT64_MAX;
int64_t x5 = INT64_MAX;
int16_t x6 = 5;
int32_t x23 = -1;
static int64_t t6 = INT64_MAX;
static int64_t x35 = 59790903632LL;
uint32_t t8 = UINT32_MAX;
int32_t x38 = -12222;
static int32_t x45 = -114;
static int8_t x46 = -1;
static volatile uint64_t t11 = UINT64_MAX;
int8_t x50 = INT8_MAX;
static int32_t x54 = INT32_MAX;
static volatile int32_t t14 = 35495707;
int16_t x62 = -1;
static uint64_t x64 = 418LLU;
volatile uint64_t t15 = 207958368LLU;
static int32_t x68 = -7;
volatile int32_t x72 = -1;
static volatile int8_t x73 = 3;
int64_t x80 = INT64_MIN;
uint64_t t21 = UINT64_MAX;
volatile int16_t x98 = INT16_MIN;
volatile uint32_t x103 = 20331U;
volatile uint64_t x104 = UINT64_MAX;
int8_t x108 = -15;
int32_t t28 = -20410;
int8_t x122 = 6;
int32_t t30 = -1664;
int8_t x126 = INT8_MIN;
int16_t x137 = -1;
int32_t x138 = -1;
int32_t x144 = -56174;
int32_t t35 = -14729860;
static uint8_t x146 = UINT8_MAX;
int64_t x149 = INT64_MIN;
int32_t x160 = 6202;
static volatile int32_t t39 = 45991337;
volatile uint64_t t40 = 1952715043LLU;
static int32_t x166 = INT32_MIN;
static int64_t x172 = -2063594647939LL;
int64_t t42 = -188700534LL;
int32_t t44 = 6943;
volatile uint64_t x193 = 6049606LLU;
int16_t x200 = INT16_MIN;
int64_t x202 = INT64_MAX;
static uint8_t x212 = 22U;
int32_t t51 = 6100880;
volatile uint64_t x215 = UINT64_MAX;
static int16_t x219 = 1;
int64_t t54 = INT64_MIN;
int16_t x230 = 7709;
int32_t x237 = INT32_MIN;
static uint64_t x239 = 40189LLU;
volatile uint64_t x241 = 1836542LLU;
int16_t x245 = -2;
uint32_t x249 = 19U;
int64_t x252 = INT64_MIN;
int64_t t60 = INT64_MIN;
static volatile int16_t x256 = 470;
uint64_t x259 = UINT64_MAX;
static int8_t x263 = 22;
uint32_t t63 = 126990U;
uint8_t x269 = 4U;
int32_t x275 = INT32_MIN;
volatile int64_t t67 = -1217823919LL;
int8_t x284 = INT8_MIN;
int32_t t69 = 61;
volatile int64_t t70 = INT64_MIN;
int8_t x328 = 4;
int32_t t78 = INT32_MIN;
volatile int32_t x339 = 1;
volatile int32_t x345 = 1;
int64_t x347 = INT64_MAX;
uint8_t x351 = 17U;
int8_t x353 = -5;
static uint32_t x354 = 11529101U;
int8_t x361 = INT8_MIN;
static volatile int32_t x363 = INT32_MAX;
int32_t x364 = -1;
int32_t t87 = -2;
volatile int8_t x373 = INT8_MIN;
int16_t x377 = INT16_MIN;
volatile int32_t x380 = INT32_MIN;
uint32_t x383 = 27379U;
volatile int8_t x390 = INT8_MAX;
int32_t t92 = 0;
int16_t x398 = INT16_MAX;
uint32_t x407 = UINT32_MAX;
volatile uint16_t x409 = 0U;
int16_t x410 = -56;
int8_t x413 = -1;
int64_t x423 = INT64_MIN;
int16_t x424 = -6095;
int32_t t99 = 0;
int32_t x434 = INT32_MAX;
int32_t x436 = 128120;
int64_t x454 = -51065695095LL;
int64_t x462 = INT64_MIN;
int8_t x474 = 7;
volatile int64_t x484 = 1984275483017LL;
int32_t t113 = 4;
int16_t x495 = -10;
static int16_t x500 = 11;
volatile int32_t t117 = -63416321;
int16_t x505 = INT16_MIN;
uint16_t x506 = 6U;
static uint32_t x509 = 312386427U;
int64_t t119 = -29LL;
int16_t x522 = INT16_MAX;
uint8_t x529 = UINT8_MAX;
static int64_t x534 = -1LL;
int8_t x537 = INT8_MAX;
int32_t t126 = 21043;
static uint32_t x541 = UINT32_MAX;
static int32_t t127 = 63239708;
static uint64_t x545 = 6605552833LLU;
int8_t x546 = -1;
static int32_t x547 = -1;
int32_t x548 = INT32_MIN;
int64_t x549 = INT64_MIN;
int64_t x550 = INT64_MIN;
int8_t x564 = INT8_MIN;
volatile int32_t t132 = -41;
int64_t x570 = -1LL;
int32_t x577 = 986607;
uint8_t x578 = UINT8_MAX;
int32_t x582 = INT32_MIN;
uint64_t x586 = 39732931827LLU;
static uint16_t x593 = 21U;
uint32_t t140 = 33507U;
static int32_t x601 = INT32_MIN;
uint32_t x605 = 10U;
uint64_t x612 = UINT64_MAX;
static volatile uint64_t t144 = UINT64_MAX;
uint8_t x616 = 0U;
uint64_t x619 = UINT64_MAX;
uint16_t x621 = UINT16_MAX;
static int32_t x630 = INT32_MAX;
volatile uint8_t x640 = UINT8_MAX;
int64_t t151 = -1972310874882941975LL;
int8_t x648 = INT8_MIN;
int16_t x650 = INT16_MIN;
static volatile int64_t t154 = 1LL;
static volatile int64_t t155 = INT64_MAX;
int16_t x664 = -27;
int16_t x666 = INT16_MAX;
uint32_t x674 = UINT32_MAX;
volatile uint32_t x681 = 2521493U;
uint64_t x690 = 13943947601LLU;
volatile int64_t x693 = -1LL;
volatile uint64_t x703 = UINT64_MAX;
int32_t t166 = INT32_MIN;
static volatile int64_t t167 = 577203984170346868LL;
volatile int64_t t168 = -2648178972LL;
uint8_t x717 = 24U;
uint16_t x718 = UINT16_MAX;
int16_t x734 = INT16_MIN;
int8_t x735 = INT8_MIN;
static uint8_t x748 = UINT8_MAX;
int32_t t175 = -718;
int64_t x751 = INT64_MIN;
int32_t t176 = -15;
static int8_t x754 = INT8_MIN;
static int64_t x757 = INT64_MAX;
static int8_t x763 = 15;
int16_t x769 = -1;
volatile uint16_t x776 = UINT16_MAX;
uint8_t x777 = 44U;
volatile int32_t x780 = -32;
int32_t x784 = INT32_MIN;
uint8_t x795 = UINT8_MAX;
static int32_t x802 = -7228459;
volatile int8_t x803 = -1;
uint8_t x804 = 60U;
int64_t x805 = -1LL;
int64_t x810 = -1LL;
volatile int64_t x811 = -428650LL;
int32_t x813 = 51309;
static int8_t x814 = -14;
int32_t x820 = 924;
static int32_t t194 = -2545573;
static volatile uint32_t x826 = UINT32_MAX;
volatile int32_t t195 = -681389396;
int32_t x829 = -1;
volatile int32_t t196 = -1;
int8_t x841 = INT8_MIN;


void f0(void) {
    	static volatile int64_t x1 = 12LL;
	int32_t x2 = INT32_MIN;
	static int64_t x3 = INT64_MIN;
	int64_t t0 = INT64_MAX;

    t0 = (((x1/x2)==x3)+x4);

    if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x7 = INT32_MAX;
	volatile int64_t x8 = INT64_MAX;
	volatile int64_t t1 = INT64_MAX;

    t1 = (((x5/x6)==x7)+x8);

    if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x9 = 32840641592LLU;
	int8_t x10 = 14;
	static int8_t x11 = -1;
	volatile int16_t x12 = -1;
	volatile int32_t t2 = 489;

    t2 = (((x9/x10)==x11)+x12);

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MAX;
	int16_t x14 = INT16_MIN;
	uint16_t x15 = 16U;
	static volatile int8_t x16 = INT8_MIN;
	volatile int32_t t3 = -107564892;

    t3 = (((x13/x14)==x15)+x16);

    if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x17 = UINT8_MAX;
	int16_t x18 = -3;
	int64_t x19 = 123LL;
	static int32_t x20 = INT32_MIN;
	int32_t t4 = INT32_MIN;

    t4 = (((x17/x18)==x19)+x20);

    if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = UINT32_MAX;
	int16_t x22 = INT16_MIN;
	int16_t x24 = INT16_MAX;
	volatile int32_t t5 = -64240780;

    t5 = (((x21/x22)==x23)+x24);

    if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x25 = 2LLU;
	static int16_t x26 = 19;
	uint16_t x27 = UINT16_MAX;
	static int64_t x28 = INT64_MAX;

    t6 = (((x25/x26)==x27)+x28);

    if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x29 = INT8_MIN;
	int16_t x30 = -1;
	uint8_t x31 = 6U;
	int64_t x32 = INT64_MAX;
	int64_t t7 = INT64_MAX;

    t7 = (((x29/x30)==x31)+x32);

    if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = 1070351182;
	uint8_t x34 = 126U;
	volatile uint32_t x36 = UINT32_MAX;

    t8 = (((x33/x34)==x35)+x36);

    if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = -1;
	int8_t x39 = -10;
	uint16_t x40 = UINT16_MAX;
	int32_t t9 = -99369;

    t9 = (((x37/x38)==x39)+x40);

    if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MAX;
	static int16_t x42 = 8880;
	volatile uint64_t x43 = UINT64_MAX;
	static volatile int64_t x44 = -1LL;
	static int64_t t10 = 81LL;

    t10 = (((x41/x42)==x43)+x44);

    if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x47 = INT32_MIN;
	volatile uint64_t x48 = UINT64_MAX;

    t11 = (((x45/x46)==x47)+x48);

    if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = UINT8_MAX;
	volatile uint16_t x51 = 31U;
	uint32_t x52 = 5941U;
	volatile uint32_t t12 = 343476U;

    t12 = (((x49/x50)==x51)+x52);

    if (t12 != 5941U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 2U;
	int32_t x55 = -1;
	int16_t x56 = -1;
	volatile int32_t t13 = 0;

    t13 = (((x53/x54)==x55)+x56);

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MAX;
	int16_t x58 = -2;
	uint32_t x59 = 205508116U;
	int32_t x60 = 1;

    t14 = (((x57/x58)==x59)+x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x61 = -1;
	uint8_t x63 = UINT8_MAX;

    t15 = (((x61/x62)==x63)+x64);

    if (t15 != 418LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = 42LL;
	int32_t x66 = INT32_MIN;
	int32_t x67 = -1;
	int32_t t16 = -227;

    t16 = (((x65/x66)==x67)+x68);

    if (t16 != -7) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = -1;
	static volatile uint64_t x70 = UINT64_MAX;
	int64_t x71 = INT64_MAX;
	volatile int32_t t17 = 14462;

    t17 = (((x69/x70)==x71)+x72);

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x74 = -17;
	static int64_t x75 = INT64_MAX;
	static int16_t x76 = -488;
	static int32_t t18 = -2315651;

    t18 = (((x73/x74)==x75)+x76);

    if (t18 != -488) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MIN;
	uint32_t x78 = 104854U;
	volatile uint32_t x79 = 176660001U;
	int64_t t19 = INT64_MIN;

    t19 = (((x77/x78)==x79)+x80);

    if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MIN;
	static int16_t x82 = 1581;
	int16_t x83 = INT16_MIN;
	uint32_t x84 = UINT32_MAX;
	uint32_t t20 = UINT32_MAX;

    t20 = (((x81/x82)==x83)+x84);

    if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint8_t x85 = 1U;
	int8_t x86 = -20;
	static int8_t x87 = INT8_MIN;
	uint64_t x88 = UINT64_MAX;

    t21 = (((x85/x86)==x87)+x88);

    if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x89 = INT16_MIN;
	uint32_t x90 = 13U;
	int32_t x91 = 4062;
	uint64_t x92 = UINT64_MAX;
	static volatile uint64_t t22 = UINT64_MAX;

    t22 = (((x89/x90)==x91)+x92);

    if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x93 = INT16_MIN;
	int8_t x94 = INT8_MIN;
	static uint64_t x95 = 1236268401559LLU;
	uint32_t x96 = UINT32_MAX;
	volatile uint32_t t23 = UINT32_MAX;

    t23 = (((x93/x94)==x95)+x96);

    if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x97 = 53LLU;
	int16_t x99 = -1;
	uint64_t x100 = UINT64_MAX;
	static volatile uint64_t t24 = UINT64_MAX;

    t24 = (((x97/x98)==x99)+x100);

    if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = -2321;
	volatile int8_t x102 = -1;
	uint64_t t25 = UINT64_MAX;

    t25 = (((x101/x102)==x103)+x104);

    if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x105 = 40U;
	int16_t x106 = -1;
	static int8_t x107 = 0;
	int32_t t26 = 26;

    t26 = (((x105/x106)==x107)+x108);

    if (t26 != -15) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x109 = 682798526LLU;
	int64_t x110 = INT64_MIN;
	static uint32_t x111 = 10596436U;
	uint8_t x112 = 2U;
	volatile int32_t t27 = 1;

    t27 = (((x109/x110)==x111)+x112);

    if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = INT64_MIN;
	static uint32_t x114 = 47532U;
	uint8_t x115 = 0U;
	int8_t x116 = INT8_MIN;

    t28 = (((x113/x114)==x115)+x116);

    if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x117 = INT16_MAX;
	int8_t x118 = -1;
	int16_t x119 = INT16_MIN;
	static int32_t x120 = 34178;
	volatile int32_t t29 = -23;

    t29 = (((x117/x118)==x119)+x120);

    if (t29 != 34178) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = -1;
	uint8_t x123 = 15U;
	static int8_t x124 = INT8_MIN;

    t30 = (((x121/x122)==x123)+x124);

    if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = -4158;
	uint16_t x127 = UINT16_MAX;
	int8_t x128 = INT8_MIN;
	int32_t t31 = -5972;

    t31 = (((x125/x126)==x127)+x128);

    if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = -56;
	static int16_t x130 = INT16_MIN;
	static int32_t x131 = -602656122;
	int64_t x132 = INT64_MAX;
	int64_t t32 = INT64_MAX;

    t32 = (((x129/x130)==x131)+x132);

    if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MIN;
	int64_t x134 = 100267277083608363LL;
	int16_t x135 = INT16_MIN;
	uint32_t x136 = 3513U;
	uint32_t t33 = 9901440U;

    t33 = (((x133/x134)==x135)+x136);

    if (t33 != 3513U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x139 = 12413112992LLU;
	int8_t x140 = -58;
	int32_t t34 = -23160079;

    t34 = (((x137/x138)==x139)+x140);

    if (t34 != -58) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = 1345U;
	int8_t x142 = INT8_MAX;
	int32_t x143 = -109;

    t35 = (((x141/x142)==x143)+x144);

    if (t35 != -56174) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = -11181230;
	int16_t x147 = 1565;
	volatile uint32_t x148 = UINT32_MAX;
	volatile uint32_t t36 = UINT32_MAX;

    t36 = (((x145/x146)==x147)+x148);

    if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint64_t x150 = 2063055926740257LLU;
	int32_t x151 = INT32_MIN;
	int16_t x152 = INT16_MIN;
	int32_t t37 = -58;

    t37 = (((x149/x150)==x151)+x152);

    if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint64_t x153 = 25LLU;
	int8_t x154 = INT8_MAX;
	uint32_t x155 = UINT32_MAX;
	int8_t x156 = INT8_MAX;
	volatile int32_t t38 = -43499596;

    t38 = (((x153/x154)==x155)+x156);

    if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int16_t x157 = INT16_MAX;
	int16_t x158 = 298;
	static int8_t x159 = -1;

    t39 = (((x157/x158)==x159)+x160);

    if (t39 != 6202) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = INT32_MAX;
	uint32_t x162 = 86493U;
	uint16_t x163 = 1457U;
	uint64_t x164 = 191796149732042037LLU;

    t40 = (((x161/x162)==x163)+x164);

    if (t40 != 191796149732042037LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x165 = INT32_MIN;
	uint8_t x167 = 7U;
	int32_t x168 = 0;
	int32_t t41 = -40;

    t41 = (((x165/x166)==x167)+x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x169 = INT32_MIN;
	int8_t x170 = INT8_MIN;
	int8_t x171 = 17;

    t42 = (((x169/x170)==x171)+x172);

    if (t42 != -2063594647939LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x173 = UINT8_MAX;
	int32_t x174 = -1;
	int8_t x175 = INT8_MAX;
	volatile int16_t x176 = INT16_MIN;
	volatile int32_t t43 = 216267206;

    t43 = (((x173/x174)==x175)+x176);

    if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x181 = INT64_MIN;
	uint32_t x182 = 514804U;
	static uint64_t x183 = UINT64_MAX;
	static int16_t x184 = -1;

    t44 = (((x181/x182)==x183)+x184);

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x185 = -486951584229LL;
	static int16_t x186 = -90;
	int8_t x187 = INT8_MAX;
	int32_t x188 = INT32_MAX;
	volatile int32_t t45 = INT32_MAX;

    t45 = (((x185/x186)==x187)+x188);

    if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x189 = 1180927102U;
	static int64_t x190 = INT64_MIN;
	uint64_t x191 = UINT64_MAX;
	int16_t x192 = 0;
	static volatile int32_t t46 = -27231;

    t46 = (((x189/x190)==x191)+x192);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint8_t x194 = 1U;
	volatile int32_t x195 = INT32_MIN;
	volatile uint32_t x196 = 2U;
	uint32_t t47 = 6598958U;

    t47 = (((x193/x194)==x195)+x196);

    if (t47 != 2U) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x197 = 5;
	int8_t x198 = 1;
	static int8_t x199 = -1;
	volatile int32_t t48 = 1311289;

    t48 = (((x197/x198)==x199)+x200);

    if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x201 = UINT32_MAX;
	int8_t x203 = 3;
	int32_t x204 = INT32_MAX;
	int32_t t49 = INT32_MAX;

    t49 = (((x201/x202)==x203)+x204);

    if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x205 = -1;
	uint16_t x206 = UINT16_MAX;
	volatile int16_t x207 = -1;
	int8_t x208 = -1;
	int32_t t50 = 116451;

    t50 = (((x205/x206)==x207)+x208);

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x209 = 1181U;
	volatile uint64_t x210 = 36636709778355398LLU;
	volatile int64_t x211 = INT64_MAX;

    t51 = (((x209/x210)==x211)+x212);

    if (t51 != 22) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x213 = -3;
	int64_t x214 = INT64_MIN;
	volatile uint8_t x216 = 27U;
	int32_t t52 = -9772992;

    t52 = (((x213/x214)==x215)+x216);

    if (t52 != 27) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x217 = 7044298;
	uint32_t x218 = 98140834U;
	int64_t x220 = INT64_MIN;
	int64_t t53 = INT64_MIN;

    t53 = (((x217/x218)==x219)+x220);

    if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x225 = 654060;
	int8_t x226 = INT8_MIN;
	int8_t x227 = -3;
	volatile int64_t x228 = INT64_MIN;

    t54 = (((x225/x226)==x227)+x228);

    if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x229 = INT8_MIN;
	uint64_t x231 = UINT64_MAX;
	static volatile int16_t x232 = INT16_MAX;
	static int32_t t55 = 3;

    t55 = (((x229/x230)==x231)+x232);

    if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x233 = -152532245LL;
	uint16_t x234 = 120U;
	int8_t x235 = 23;
	volatile int32_t x236 = -2;
	volatile int32_t t56 = -161025281;

    t56 = (((x233/x234)==x235)+x236);

    if (t56 != -2) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x238 = 855709075LLU;
	static uint8_t x240 = 1U;
	static volatile int32_t t57 = -189860;

    t57 = (((x237/x238)==x239)+x240);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x242 = UINT16_MAX;
	volatile uint16_t x243 = 8599U;
	uint16_t x244 = UINT16_MAX;
	volatile int32_t t58 = 1299;

    t58 = (((x241/x242)==x243)+x244);

    if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int64_t x246 = -67LL;
	volatile uint64_t x247 = 21857187246LLU;
	int8_t x248 = 27;
	int32_t t59 = -209213;

    t59 = (((x245/x246)==x247)+x248);

    if (t59 != 27) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x250 = INT16_MIN;
	int8_t x251 = -1;

    t60 = (((x249/x250)==x251)+x252);

    if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x253 = UINT32_MAX;
	volatile int8_t x254 = INT8_MIN;
	int64_t x255 = INT64_MIN;
	volatile int32_t t61 = 66;

    t61 = (((x253/x254)==x255)+x256);

    if (t61 != 470) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x257 = INT32_MIN;
	uint32_t x258 = 13780789U;
	int8_t x260 = -32;
	static volatile int32_t t62 = -37505;

    t62 = (((x257/x258)==x259)+x260);

    if (t62 != -32) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x261 = 205;
	volatile uint8_t x262 = 27U;
	volatile uint32_t x264 = 1U;

    t63 = (((x261/x262)==x263)+x264);

    if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x265 = UINT32_MAX;
	static volatile int64_t x266 = INT64_MAX;
	volatile int32_t x267 = -2;
	volatile uint32_t x268 = 98U;
	static uint32_t t64 = 1804525U;

    t64 = (((x265/x266)==x267)+x268);

    if (t64 != 98U) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint64_t x270 = 2807488360858928378LLU;
	uint16_t x271 = 1859U;
	static uint8_t x272 = 3U;
	volatile int32_t t65 = -2969;

    t65 = (((x269/x270)==x271)+x272);

    if (t65 != 3) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x273 = INT16_MIN;
	int8_t x274 = -61;
	int64_t x276 = -29210LL;
	int64_t t66 = 131723685LL;

    t66 = (((x273/x274)==x275)+x276);

    if (t66 != -29210LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x277 = INT16_MAX;
	int16_t x278 = INT16_MIN;
	int16_t x279 = -1;
	volatile int64_t x280 = 92975LL;

    t67 = (((x277/x278)==x279)+x280);

    if (t67 != 92975LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x281 = UINT64_MAX;
	static int64_t x282 = -38841LL;
	int64_t x283 = INT64_MAX;
	int32_t t68 = -66;

    t68 = (((x281/x282)==x283)+x284);

    if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x285 = UINT8_MAX;
	int16_t x286 = INT16_MIN;
	uint16_t x287 = 3U;
	int8_t x288 = 0;

    t69 = (((x285/x286)==x287)+x288);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x289 = -1;
	int16_t x290 = INT16_MIN;
	static int8_t x291 = -1;
	static int64_t x292 = INT64_MIN;

    t70 = (((x289/x290)==x291)+x292);

    if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x297 = INT8_MIN;
	int64_t x298 = INT64_MIN;
	volatile int8_t x299 = INT8_MAX;
	int32_t x300 = 10;
	int32_t t71 = -3662511;

    t71 = (((x297/x298)==x299)+x300);

    if (t71 != 10) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x301 = INT32_MIN;
	int8_t x302 = INT8_MAX;
	volatile int32_t x303 = INT32_MIN;
	int64_t x304 = INT64_MIN;
	volatile int64_t t72 = INT64_MIN;

    t72 = (((x301/x302)==x303)+x304);

    if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x305 = -952097154;
	uint64_t x306 = 199413LLU;
	uint16_t x307 = 11177U;
	int16_t x308 = -14;
	volatile int32_t t73 = -4667570;

    t73 = (((x305/x306)==x307)+x308);

    if (t73 != -14) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x309 = UINT64_MAX;
	int64_t x310 = -607403924980LL;
	int16_t x311 = 59;
	int32_t x312 = 75322858;
	static volatile int32_t t74 = 252534;

    t74 = (((x309/x310)==x311)+x312);

    if (t74 != 75322858) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x313 = -1;
	int8_t x314 = INT8_MIN;
	uint32_t x315 = 911323U;
	int8_t x316 = INT8_MIN;
	int32_t t75 = 549632090;

    t75 = (((x313/x314)==x315)+x316);

    if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x321 = INT8_MIN;
	static int64_t x322 = INT64_MIN;
	static int64_t x323 = INT64_MIN;
	int16_t x324 = INT16_MIN;
	int32_t t76 = 573417;

    t76 = (((x321/x322)==x323)+x324);

    if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x325 = 3304;
	uint32_t x326 = UINT32_MAX;
	int16_t x327 = INT16_MIN;
	int32_t t77 = 2956;

    t77 = (((x325/x326)==x327)+x328);

    if (t77 != 4) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int64_t x329 = INT64_MAX;
	static int32_t x330 = -24247;
	int32_t x331 = 0;
	int32_t x332 = INT32_MIN;

    t78 = (((x329/x330)==x331)+x332);

    if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x337 = -23198960121LL;
	int32_t x338 = -1;
	int8_t x340 = -5;
	volatile int32_t t79 = 87;

    t79 = (((x337/x338)==x339)+x340);

    if (t79 != -5) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x341 = INT64_MIN;
	uint32_t x342 = 830531449U;
	volatile uint64_t x343 = 58744583765821LLU;
	int8_t x344 = INT8_MIN;
	static volatile int32_t t80 = 806768911;

    t80 = (((x341/x342)==x343)+x344);

    if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x346 = 275281592;
	int8_t x348 = -1;
	volatile int32_t t81 = 0;

    t81 = (((x345/x346)==x347)+x348);

    if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x349 = -1LL;
	volatile int16_t x350 = INT16_MAX;
	int16_t x352 = 31;
	int32_t t82 = 127;

    t82 = (((x349/x350)==x351)+x352);

    if (t82 != 31) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x355 = UINT64_MAX;
	uint64_t x356 = UINT64_MAX;
	uint64_t t83 = UINT64_MAX;

    t83 = (((x353/x354)==x355)+x356);

    if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x357 = INT8_MIN;
	int64_t x358 = INT64_MIN;
	static uint64_t x359 = 61130441LLU;
	volatile int64_t x360 = INT64_MIN;
	volatile int64_t t84 = INT64_MIN;

    t84 = (((x357/x358)==x359)+x360);

    if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x362 = -1;
	int32_t t85 = 93628;

    t85 = (((x361/x362)==x363)+x364);

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x365 = 72252U;
	volatile int64_t x366 = INT64_MIN;
	uint32_t x367 = 849632705U;
	int8_t x368 = 62;
	static int32_t t86 = 416;

    t86 = (((x365/x366)==x367)+x368);

    if (t86 != 62) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x369 = UINT64_MAX;
	int64_t x370 = 12982549461974650LL;
	int32_t x371 = -1;
	int8_t x372 = -1;

    t87 = (((x369/x370)==x371)+x372);

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x374 = INT64_MIN;
	static int64_t x375 = INT64_MAX;
	volatile int64_t x376 = -1LL;
	volatile int64_t t88 = -25764454845LL;

    t88 = (((x373/x374)==x375)+x376);

    if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int8_t x378 = INT8_MAX;
	static volatile int16_t x379 = INT16_MIN;
	volatile int32_t t89 = INT32_MIN;

    t89 = (((x377/x378)==x379)+x380);

    if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x381 = INT16_MIN;
	int8_t x382 = 1;
	int8_t x384 = -1;
	int32_t t90 = 785;

    t90 = (((x381/x382)==x383)+x384);

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x385 = INT8_MAX;
	volatile int8_t x386 = -1;
	static int64_t x387 = INT64_MIN;
	int16_t x388 = INT16_MIN;
	volatile int32_t t91 = -3477;

    t91 = (((x385/x386)==x387)+x388);

    if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x389 = -1;
	volatile int32_t x391 = INT32_MAX;
	int32_t x392 = -1;

    t92 = (((x389/x390)==x391)+x392);

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x397 = 26884848U;
	uint32_t x399 = 2012508716U;
	int16_t x400 = -1;
	volatile int32_t t93 = -4029;

    t93 = (((x397/x398)==x399)+x400);

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x401 = -1;
	static volatile int32_t x402 = INT32_MIN;
	volatile int64_t x403 = INT64_MAX;
	volatile int16_t x404 = -1;
	int32_t t94 = 423;

    t94 = (((x401/x402)==x403)+x404);

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x405 = INT16_MAX;
	int32_t x406 = -1;
	int32_t x408 = INT32_MIN;
	int32_t t95 = INT32_MIN;

    t95 = (((x405/x406)==x407)+x408);

    if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x411 = 61441828279LL;
	int16_t x412 = INT16_MIN;
	int32_t t96 = 3623090;

    t96 = (((x409/x410)==x411)+x412);

    if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x414 = INT32_MIN;
	int64_t x415 = 25342595503084LL;
	int32_t x416 = -3180;
	int32_t t97 = 1359;

    t97 = (((x413/x414)==x415)+x416);

    if (t97 != -3180) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x417 = 0U;
	int64_t x418 = INT64_MIN;
	int64_t x419 = 3668452689LL;
	int8_t x420 = -10;
	volatile int32_t t98 = -78280;

    t98 = (((x417/x418)==x419)+x420);

    if (t98 != -10) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint8_t x421 = 52U;
	uint64_t x422 = 9LLU;

    t99 = (((x421/x422)==x423)+x424);

    if (t99 != -6095) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x429 = 55U;
	int8_t x430 = -10;
	uint16_t x431 = 230U;
	int64_t x432 = -1LL;
	int64_t t100 = 1820363097621819LL;

    t100 = (((x429/x430)==x431)+x432);

    if (t100 != -1LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x433 = INT16_MIN;
	int32_t x435 = INT32_MAX;
	int32_t t101 = -50453;

    t101 = (((x433/x434)==x435)+x436);

    if (t101 != 128120) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x437 = INT32_MIN;
	volatile uint8_t x438 = 14U;
	uint64_t x439 = UINT64_MAX;
	static uint8_t x440 = 1U;
	int32_t t102 = 0;

    t102 = (((x437/x438)==x439)+x440);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x441 = -67;
	uint8_t x442 = 37U;
	int8_t x443 = INT8_MIN;
	uint32_t x444 = 24672914U;
	volatile uint32_t t103 = 1246U;

    t103 = (((x441/x442)==x443)+x444);

    if (t103 != 24672914U) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x445 = 30U;
	int32_t x446 = -1;
	int8_t x447 = INT8_MIN;
	volatile int8_t x448 = -24;
	static volatile int32_t t104 = 93229859;

    t104 = (((x445/x446)==x447)+x448);

    if (t104 != -24) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x449 = -40;
	int64_t x450 = INT64_MAX;
	static int64_t x451 = INT64_MIN;
	int16_t x452 = INT16_MIN;
	volatile int32_t t105 = 1;

    t105 = (((x449/x450)==x451)+x452);

    if (t105 != -32768) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint8_t x453 = UINT8_MAX;
	uint16_t x455 = 11U;
	int8_t x456 = INT8_MIN;
	int32_t t106 = 5171;

    t106 = (((x453/x454)==x455)+x456);

    if (t106 != -128) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x457 = -10;
	volatile int8_t x458 = INT8_MIN;
	int64_t x459 = INT64_MIN;
	int32_t x460 = -1;
	static int32_t t107 = 0;

    t107 = (((x457/x458)==x459)+x460);

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x461 = INT64_MAX;
	int16_t x463 = INT16_MAX;
	int8_t x464 = INT8_MIN;
	int32_t t108 = 30747253;

    t108 = (((x461/x462)==x463)+x464);

    if (t108 != -128) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x465 = INT32_MIN;
	uint64_t x466 = UINT64_MAX;
	uint64_t x467 = 13012742096836LLU;
	uint16_t x468 = 24U;
	volatile int32_t t109 = 60040499;

    t109 = (((x465/x466)==x467)+x468);

    if (t109 != 24) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x469 = 1;
	static volatile int32_t x470 = INT32_MIN;
	volatile int16_t x471 = INT16_MIN;
	uint64_t x472 = 960428367121157LLU;
	volatile uint64_t t110 = 111941858535339099LLU;

    t110 = (((x469/x470)==x471)+x472);

    if (t110 != 960428367121157LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x473 = 4;
	int64_t x475 = INT64_MAX;
	int8_t x476 = 1;
	volatile int32_t t111 = -26000;

    t111 = (((x473/x474)==x475)+x476);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x481 = INT32_MAX;
	int32_t x482 = INT32_MAX;
	static uint64_t x483 = 21241LLU;
	static volatile int64_t t112 = -50506624330199760LL;

    t112 = (((x481/x482)==x483)+x484);

    if (t112 != 1984275483017LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x485 = 1LL;
	int16_t x486 = INT16_MIN;
	uint64_t x487 = 7150LLU;
	static uint8_t x488 = UINT8_MAX;

    t113 = (((x485/x486)==x487)+x488);

    if (t113 != 255) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x489 = INT64_MAX;
	static int8_t x490 = INT8_MAX;
	uint8_t x491 = 19U;
	static volatile int64_t x492 = INT64_MIN;
	static volatile int64_t t114 = INT64_MIN;

    t114 = (((x489/x490)==x491)+x492);

    if (t114 != INT64_MIN) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x493 = INT64_MIN;
	static int8_t x494 = -17;
	int64_t x496 = 133LL;
	int64_t t115 = 4663101LL;

    t115 = (((x493/x494)==x495)+x496);

    if (t115 != 133LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint32_t x497 = UINT32_MAX;
	static volatile uint64_t x498 = 98415LLU;
	volatile uint64_t x499 = 40844LLU;
	int32_t t116 = -147;

    t116 = (((x497/x498)==x499)+x500);

    if (t116 != 11) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x501 = INT64_MIN;
	int64_t x502 = INT64_MAX;
	uint32_t x503 = 0U;
	static int8_t x504 = -55;

    t117 = (((x501/x502)==x503)+x504);

    if (t117 != -55) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x507 = -1LL;
	int32_t x508 = -1;
	int32_t t118 = -48777;

    t118 = (((x505/x506)==x507)+x508);

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x510 = -1LL;
	int8_t x511 = -1;
	volatile int64_t x512 = -1LL;

    t119 = (((x509/x510)==x511)+x512);

    if (t119 != -1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x513 = -1;
	int64_t x514 = INT64_MIN;
	static int8_t x515 = -1;
	int16_t x516 = INT16_MAX;
	volatile int32_t t120 = 767752555;

    t120 = (((x513/x514)==x515)+x516);

    if (t120 != 32767) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x517 = 478650818692521320LL;
	int16_t x518 = INT16_MIN;
	int32_t x519 = INT32_MAX;
	int8_t x520 = -2;
	static int32_t t121 = 13433;

    t121 = (((x517/x518)==x519)+x520);

    if (t121 != -2) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x521 = -1;
	uint32_t x523 = 382367U;
	uint32_t x524 = 526944203U;
	volatile uint32_t t122 = 305489U;

    t122 = (((x521/x522)==x523)+x524);

    if (t122 != 526944203U) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x525 = -1;
	volatile uint16_t x526 = 1U;
	static volatile int16_t x527 = 2;
	static int8_t x528 = INT8_MAX;
	int32_t t123 = -13;

    t123 = (((x525/x526)==x527)+x528);

    if (t123 != 127) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x530 = -4;
	int32_t x531 = -1;
	int16_t x532 = INT16_MAX;
	volatile int32_t t124 = -315159927;

    t124 = (((x529/x530)==x531)+x532);

    if (t124 != 32767) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x533 = UINT64_MAX;
	uint8_t x535 = UINT8_MAX;
	uint64_t x536 = UINT64_MAX;
	volatile uint64_t t125 = UINT64_MAX;

    t125 = (((x533/x534)==x535)+x536);

    if (t125 != UINT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x538 = INT16_MAX;
	static int64_t x539 = INT64_MAX;
	uint8_t x540 = UINT8_MAX;

    t126 = (((x537/x538)==x539)+x540);

    if (t126 != 255) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x542 = INT32_MIN;
	volatile int16_t x543 = -437;
	uint8_t x544 = UINT8_MAX;

    t127 = (((x541/x542)==x543)+x544);

    if (t127 != 255) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t t128 = INT32_MIN;

    t128 = (((x545/x546)==x547)+x548);

    if (t128 != INT32_MIN) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x551 = -1627492;
	int64_t x552 = INT64_MIN;
	volatile int64_t t129 = INT64_MIN;

    t129 = (((x549/x550)==x551)+x552);

    if (t129 != INT64_MIN) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x553 = 1;
	volatile int32_t x554 = INT32_MAX;
	uint16_t x555 = UINT16_MAX;
	int16_t x556 = -3223;
	int32_t t130 = 2747687;

    t130 = (((x553/x554)==x555)+x556);

    if (t130 != -3223) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x557 = -1;
	volatile int64_t x558 = INT64_MIN;
	int64_t x559 = INT64_MIN;
	uint32_t x560 = 100887181U;
	volatile uint32_t t131 = 150U;

    t131 = (((x557/x558)==x559)+x560);

    if (t131 != 100887181U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x561 = 43U;
	static uint32_t x562 = 36345U;
	uint16_t x563 = 15U;

    t132 = (((x561/x562)==x563)+x564);

    if (t132 != -128) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x565 = -167;
	uint64_t x566 = 3837363LLU;
	int8_t x567 = -1;
	int64_t x568 = -177725LL;
	int64_t t133 = -737983189LL;

    t133 = (((x565/x566)==x567)+x568);

    if (t133 != -177725LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x569 = 0LL;
	static volatile uint16_t x571 = UINT16_MAX;
	int32_t x572 = -1;
	volatile int32_t t134 = -48768346;

    t134 = (((x569/x570)==x571)+x572);

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int16_t x573 = -1;
	int16_t x574 = -1;
	volatile int8_t x575 = 1;
	uint16_t x576 = 3U;
	static int32_t t135 = -291750076;

    t135 = (((x573/x574)==x575)+x576);

    if (t135 != 4) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x579 = 48;
	int16_t x580 = INT16_MIN;
	int32_t t136 = -3880;

    t136 = (((x577/x578)==x579)+x580);

    if (t136 != -32768) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x581 = -1;
	int16_t x583 = INT16_MAX;
	int32_t x584 = INT32_MIN;
	volatile int32_t t137 = INT32_MIN;

    t137 = (((x581/x582)==x583)+x584);

    if (t137 != INT32_MIN) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x585 = UINT64_MAX;
	int32_t x587 = -6;
	volatile uint64_t x588 = UINT64_MAX;
	volatile uint64_t t138 = UINT64_MAX;

    t138 = (((x585/x586)==x587)+x588);

    if (t138 != UINT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x589 = -1;
	static int64_t x590 = -26720680005362977LL;
	int64_t x591 = INT64_MIN;
	int32_t x592 = 28;
	int32_t t139 = -41929150;

    t139 = (((x589/x590)==x591)+x592);

    if (t139 != 28) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x594 = 8655;
	static int8_t x595 = -1;
	uint32_t x596 = 1195934360U;

    t140 = (((x593/x594)==x595)+x596);

    if (t140 != 1195934360U) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x597 = INT16_MIN;
	static int32_t x598 = INT32_MIN;
	static int32_t x599 = INT32_MAX;
	volatile int8_t x600 = INT8_MIN;
	volatile int32_t t141 = -7507279;

    t141 = (((x597/x598)==x599)+x600);

    if (t141 != -128) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x602 = UINT16_MAX;
	volatile uint32_t x603 = 19420723U;
	int32_t x604 = -254715;
	int32_t t142 = -44990593;

    t142 = (((x601/x602)==x603)+x604);

    if (t142 != -254715) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x606 = 15;
	volatile int64_t x607 = INT64_MIN;
	int16_t x608 = INT16_MIN;
	static int32_t t143 = 348051;

    t143 = (((x605/x606)==x607)+x608);

    if (t143 != -32768) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x609 = INT32_MIN;
	int32_t x610 = 24388278;
	volatile int8_t x611 = 26;

    t144 = (((x609/x610)==x611)+x612);

    if (t144 != UINT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x613 = UINT32_MAX;
	uint64_t x614 = UINT64_MAX;
	int32_t x615 = -1;
	int32_t t145 = -37453;

    t145 = (((x613/x614)==x615)+x616);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x617 = 136985006332823318LL;
	static uint16_t x618 = UINT16_MAX;
	uint32_t x620 = 9U;
	volatile uint32_t t146 = 122U;

    t146 = (((x617/x618)==x619)+x620);

    if (t146 != 9U) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x622 = UINT16_MAX;
	int16_t x623 = INT16_MIN;
	int64_t x624 = INT64_MAX;
	volatile int64_t t147 = INT64_MAX;

    t147 = (((x621/x622)==x623)+x624);

    if (t147 != INT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x629 = 42U;
	int16_t x631 = -29;
	static volatile int64_t x632 = -7454777LL;
	volatile int64_t t148 = -8760LL;

    t148 = (((x629/x630)==x631)+x632);

    if (t148 != -7454777LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x633 = 574U;
	volatile uint32_t x634 = UINT32_MAX;
	int16_t x635 = 188;
	volatile int16_t x636 = -31;
	int32_t t149 = -109;

    t149 = (((x633/x634)==x635)+x636);

    if (t149 != -31) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x637 = INT16_MIN;
	int64_t x638 = 58886369LL;
	static uint64_t x639 = UINT64_MAX;
	volatile int32_t t150 = -1654605;

    t150 = (((x637/x638)==x639)+x640);

    if (t150 != 255) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x641 = INT64_MIN;
	static uint32_t x642 = 27763U;
	volatile uint8_t x643 = UINT8_MAX;
	int64_t x644 = -827228859454109068LL;

    t151 = (((x641/x642)==x643)+x644);

    if (t151 != -827228859454109068LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x645 = 1;
	int8_t x646 = 4;
	int64_t x647 = -1LL;
	int32_t t152 = -10;

    t152 = (((x645/x646)==x647)+x648);

    if (t152 != -128) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x649 = -1;
	int16_t x651 = -1;
	uint32_t x652 = 902448266U;
	volatile uint32_t t153 = 2U;

    t153 = (((x649/x650)==x651)+x652);

    if (t153 != 902448266U) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x653 = -1;
	uint16_t x654 = 973U;
	static int32_t x655 = -113787772;
	int64_t x656 = -1LL;

    t154 = (((x653/x654)==x655)+x656);

    if (t154 != -1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x657 = INT8_MAX;
	uint64_t x658 = 266972107813666LLU;
	volatile int64_t x659 = INT64_MAX;
	int64_t x660 = INT64_MAX;

    t155 = (((x657/x658)==x659)+x660);

    if (t155 != INT64_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint32_t x661 = UINT32_MAX;
	int16_t x662 = INT16_MIN;
	static volatile int64_t x663 = -1LL;
	int32_t t156 = 169;

    t156 = (((x661/x662)==x663)+x664);

    if (t156 != -27) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x665 = INT32_MIN;
	int16_t x667 = INT16_MIN;
	int16_t x668 = 0;
	int32_t t157 = -153362;

    t157 = (((x665/x666)==x667)+x668);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x669 = 1U;
	static int64_t x670 = -120185197997066LL;
	uint8_t x671 = 90U;
	volatile int32_t x672 = INT32_MAX;
	volatile int32_t t158 = INT32_MAX;

    t158 = (((x669/x670)==x671)+x672);

    if (t158 != INT32_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x673 = 2U;
	static int64_t x675 = INT64_MIN;
	int8_t x676 = INT8_MIN;
	int32_t t159 = 7222;

    t159 = (((x673/x674)==x675)+x676);

    if (t159 != -128) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x677 = INT8_MIN;
	int32_t x678 = INT32_MAX;
	static uint16_t x679 = 5U;
	int32_t x680 = -34;
	int32_t t160 = 25;

    t160 = (((x677/x678)==x679)+x680);

    if (t160 != -34) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile uint32_t x682 = 15065966U;
	static int16_t x683 = INT16_MAX;
	static int8_t x684 = -1;
	int32_t t161 = -2219016;

    t161 = (((x681/x682)==x683)+x684);

    if (t161 != -1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x689 = 5998676725955832LL;
	static int8_t x691 = INT8_MIN;
	int64_t x692 = INT64_MAX;
	int64_t t162 = INT64_MAX;

    t162 = (((x689/x690)==x691)+x692);

    if (t162 != INT64_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x694 = INT16_MAX;
	int16_t x695 = -1;
	static int16_t x696 = INT16_MAX;
	volatile int32_t t163 = -38;

    t163 = (((x693/x694)==x695)+x696);

    if (t163 != 32767) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x697 = -1;
	int8_t x698 = INT8_MAX;
	int32_t x699 = -4815045;
	int16_t x700 = -1;
	int32_t t164 = -380;

    t164 = (((x697/x698)==x699)+x700);

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x701 = INT64_MIN;
	static uint16_t x702 = 18900U;
	volatile int8_t x704 = -1;
	volatile int32_t t165 = -18168946;

    t165 = (((x701/x702)==x703)+x704);

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint32_t x705 = 1937U;
	static uint64_t x706 = 14214527134746137LLU;
	volatile int64_t x707 = -1LL;
	int32_t x708 = INT32_MIN;

    t166 = (((x705/x706)==x707)+x708);

    if (t166 != INT32_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x709 = UINT64_MAX;
	int16_t x710 = 7;
	uint64_t x711 = UINT64_MAX;
	int64_t x712 = -4050188971595LL;

    t167 = (((x709/x710)==x711)+x712);

    if (t167 != -4050188971595LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x713 = UINT64_MAX;
	int64_t x714 = -2813LL;
	volatile int16_t x715 = 235;
	int64_t x716 = -1LL;

    t168 = (((x713/x714)==x715)+x716);

    if (t168 != -1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint8_t x719 = UINT8_MAX;
	uint32_t x720 = UINT32_MAX;
	uint32_t t169 = UINT32_MAX;

    t169 = (((x717/x718)==x719)+x720);

    if (t169 != UINT32_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x721 = 148017788187674311LLU;
	uint8_t x722 = 3U;
	int64_t x723 = INT64_MAX;
	int16_t x724 = 46;
	volatile int32_t t170 = 0;

    t170 = (((x721/x722)==x723)+x724);

    if (t170 != 46) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x725 = INT32_MIN;
	int8_t x726 = INT8_MIN;
	int32_t x727 = -2265133;
	volatile int8_t x728 = -58;
	int32_t t171 = 0;

    t171 = (((x725/x726)==x727)+x728);

    if (t171 != -58) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x729 = -1LL;
	int64_t x730 = INT64_MAX;
	int8_t x731 = INT8_MIN;
	static volatile int64_t x732 = INT64_MIN;
	volatile int64_t t172 = INT64_MIN;

    t172 = (((x729/x730)==x731)+x732);

    if (t172 != INT64_MIN) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x733 = 10980U;
	int16_t x736 = -1;
	int32_t t173 = -9;

    t173 = (((x733/x734)==x735)+x736);

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x737 = -1;
	uint32_t x738 = UINT32_MAX;
	volatile uint8_t x739 = 30U;
	uint32_t x740 = UINT32_MAX;
	volatile uint32_t t174 = UINT32_MAX;

    t174 = (((x737/x738)==x739)+x740);

    if (t174 != UINT32_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x745 = -1LL;
	int64_t x746 = INT64_MIN;
	volatile uint16_t x747 = UINT16_MAX;

    t175 = (((x745/x746)==x747)+x748);

    if (t175 != 255) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x749 = -321939;
	int8_t x750 = -24;
	static int32_t x752 = -1;

    t176 = (((x749/x750)==x751)+x752);

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x753 = -6189469202230LL;
	int32_t x755 = INT32_MIN;
	uint32_t x756 = 160525U;
	uint32_t t177 = 751966481U;

    t177 = (((x753/x754)==x755)+x756);

    if (t177 != 160525U) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x758 = 120U;
	int8_t x759 = -1;
	static volatile uint16_t x760 = 1U;
	static volatile int32_t t178 = 6;

    t178 = (((x757/x758)==x759)+x760);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x761 = -1;
	uint16_t x762 = 2U;
	static uint32_t x764 = 2049693U;
	uint32_t t179 = 833U;

    t179 = (((x761/x762)==x763)+x764);

    if (t179 != 2049693U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x765 = 1445LLU;
	uint32_t x766 = 5U;
	int64_t x767 = INT64_MIN;
	uint32_t x768 = UINT32_MAX;
	uint32_t t180 = UINT32_MAX;

    t180 = (((x765/x766)==x767)+x768);

    if (t180 != UINT32_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x770 = INT64_MIN;
	int16_t x771 = INT16_MAX;
	int32_t x772 = -1;
	volatile int32_t t181 = 2002;

    t181 = (((x769/x770)==x771)+x772);

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x773 = UINT64_MAX;
	int8_t x774 = -1;
	volatile int16_t x775 = -1;
	volatile int32_t t182 = 208;

    t182 = (((x773/x774)==x775)+x776);

    if (t182 != 65535) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x778 = INT16_MIN;
	int8_t x779 = -1;
	volatile int32_t t183 = 4558;

    t183 = (((x777/x778)==x779)+x780);

    if (t183 != -32) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x781 = -1;
	volatile int16_t x782 = -290;
	static uint16_t x783 = 7U;
	static int32_t t184 = INT32_MIN;

    t184 = (((x781/x782)==x783)+x784);

    if (t184 != INT32_MIN) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x785 = UINT32_MAX;
	volatile uint32_t x786 = 386U;
	int32_t x787 = INT32_MAX;
	static volatile int32_t x788 = -958;
	volatile int32_t t185 = 2454;

    t185 = (((x785/x786)==x787)+x788);

    if (t185 != -958) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x789 = UINT32_MAX;
	static int32_t x790 = 3;
	int64_t x791 = INT64_MAX;
	volatile int16_t x792 = 3;
	volatile int32_t t186 = -5096107;

    t186 = (((x789/x790)==x791)+x792);

    if (t186 != 3) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint32_t x793 = 9425180U;
	int32_t x794 = INT32_MIN;
	int32_t x796 = -1;
	static int32_t t187 = 102;

    t187 = (((x793/x794)==x795)+x796);

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x797 = 100U;
	static uint32_t x798 = 48428U;
	volatile int32_t x799 = INT32_MAX;
	int32_t x800 = -10;
	int32_t t188 = -42;

    t188 = (((x797/x798)==x799)+x800);

    if (t188 != -10) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x801 = INT64_MIN;
	static volatile int32_t t189 = 0;

    t189 = (((x801/x802)==x803)+x804);

    if (t189 != 60) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x806 = UINT32_MAX;
	int16_t x807 = 4360;
	int16_t x808 = INT16_MIN;
	int32_t t190 = -1;

    t190 = (((x805/x806)==x807)+x808);

    if (t190 != -32768) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x809 = INT8_MIN;
	volatile int8_t x812 = 0;
	volatile int32_t t191 = -855408257;

    t191 = (((x809/x810)==x811)+x812);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x815 = UINT32_MAX;
	static volatile int64_t x816 = INT64_MIN;
	int64_t t192 = INT64_MIN;

    t192 = (((x813/x814)==x815)+x816);

    if (t192 != INT64_MIN) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x817 = INT32_MIN;
	uint8_t x818 = UINT8_MAX;
	uint32_t x819 = 385U;
	static int32_t t193 = -7232;

    t193 = (((x817/x818)==x819)+x820);

    if (t193 != 924) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x821 = -6;
	static int16_t x822 = 1998;
	static volatile int16_t x823 = INT16_MAX;
	volatile uint16_t x824 = UINT16_MAX;

    t194 = (((x821/x822)==x823)+x824);

    if (t194 != 65535) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x825 = -1;
	volatile int8_t x827 = INT8_MIN;
	volatile int8_t x828 = INT8_MIN;

    t195 = (((x825/x826)==x827)+x828);

    if (t195 != -128) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint32_t x830 = 2U;
	volatile int16_t x831 = INT16_MIN;
	static volatile int8_t x832 = INT8_MIN;

    t196 = (((x829/x830)==x831)+x832);

    if (t196 != -128) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x833 = 1;
	static int32_t x834 = INT32_MIN;
	int16_t x835 = INT16_MAX;
	static int64_t x836 = 2096386293449749LL;
	volatile int64_t t197 = 111820006LL;

    t197 = (((x833/x834)==x835)+x836);

    if (t197 != 2096386293449749LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x837 = -1LL;
	volatile uint64_t x838 = UINT64_MAX;
	int64_t x839 = -67498012314871LL;
	static volatile int16_t x840 = INT16_MIN;
	int32_t t198 = 134220;

    t198 = (((x837/x838)==x839)+x840);

    if (t198 != -32768) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x842 = -37;
	uint32_t x843 = 0U;
	int8_t x844 = INT8_MIN;
	volatile int32_t t199 = -8838;

    t199 = (((x841/x842)==x843)+x844);

    if (t199 != -128) { NG(); } else { ; }
	
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

