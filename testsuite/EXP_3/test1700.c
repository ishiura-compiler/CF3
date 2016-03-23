
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

static int32_t x6 = -1;
int64_t x8 = -109469584366006LL;
int8_t x10 = INT8_MIN;
volatile int32_t x17 = -1;
uint16_t x19 = UINT16_MAX;
int8_t x38 = INT8_MIN;
int32_t x42 = 1201;
int16_t x44 = -3;
static uint32_t x45 = UINT32_MAX;
int64_t x55 = 40819404315022LL;
int32_t x66 = -3430214;
int8_t x68 = -3;
static uint32_t x70 = 4676350U;
volatile int32_t t17 = 30939266;
volatile uint64_t x78 = 169842516884775LLU;
uint64_t x79 = 593735929388855576LLU;
static int8_t x80 = 42;
static uint8_t x81 = 3U;
volatile int32_t t20 = 39;
volatile uint32_t x86 = 520U;
uint32_t x88 = UINT32_MAX;
volatile int8_t x93 = 57;
uint8_t x98 = 0U;
static int16_t x104 = INT16_MIN;
volatile int64_t x107 = 41LL;
uint8_t x112 = UINT8_MAX;
int32_t x115 = INT32_MIN;
volatile uint64_t x116 = UINT64_MAX;
static uint32_t x121 = UINT32_MAX;
int16_t x130 = -115;
int32_t x131 = 8708787;
int64_t x132 = -1LL;
int32_t t32 = 27062781;
volatile int32_t t34 = 261749;
static volatile int16_t x147 = INT16_MAX;
static volatile int32_t t36 = 2;
int64_t x149 = -429639769643LL;
int64_t x154 = 193LL;
int64_t x155 = INT64_MAX;
int16_t x156 = -1;
static volatile int32_t t38 = -4982;
int32_t x157 = INT32_MIN;
static volatile int32_t x160 = INT32_MIN;
int32_t t42 = 18038;
int64_t x174 = 1993292LL;
volatile uint8_t x185 = 115U;
int16_t x188 = INT16_MAX;
static int64_t x189 = INT64_MAX;
uint8_t x191 = 69U;
uint8_t x198 = 10U;
int32_t x203 = INT32_MIN;
static int32_t x207 = INT32_MIN;
uint8_t x209 = 1U;
int32_t t52 = -23619465;
int32_t x214 = INT32_MAX;
int32_t t53 = 116210;
int32_t t58 = 4;
static int8_t x237 = -1;
int8_t x243 = INT8_MIN;
int32_t t60 = 30983367;
uint8_t x248 = UINT8_MAX;
volatile int32_t t62 = -8;
static int64_t x259 = INT64_MAX;
volatile uint16_t x260 = UINT16_MAX;
volatile int16_t x266 = -1;
volatile int32_t t68 = 3211625;
uint16_t x289 = 14U;
int32_t x295 = INT32_MIN;
static volatile int32_t t75 = 5;
volatile int8_t x308 = INT8_MAX;
volatile int64_t x310 = 26292050505392758LL;
int32_t t78 = 6796513;
volatile int32_t t79 = -737715;
int32_t x323 = INT32_MAX;
int16_t x332 = INT16_MAX;
volatile int32_t t82 = 11211;
static volatile int8_t x334 = INT8_MAX;
static int8_t x336 = -1;
volatile int32_t t83 = 0;
static uint32_t x337 = 319623612U;
static uint64_t x340 = 18125221183LLU;
int16_t x345 = INT16_MAX;
int32_t t86 = -473;
volatile uint8_t x351 = 3U;
int8_t x356 = -1;
uint32_t x361 = 12U;
int64_t x363 = 6516434985435LL;
int64_t x365 = 47325273442995LL;
static int64_t x367 = 7945476900LL;
uint16_t x371 = 3U;
static uint16_t x372 = 241U;
volatile int64_t x373 = INT64_MIN;
int16_t x380 = -1;
int64_t x382 = -3545200019606644037LL;
static volatile int16_t x383 = -1;
int16_t x386 = INT16_MIN;
int8_t x393 = 2;
uint64_t x396 = UINT64_MAX;
int8_t x420 = INT8_MIN;
static int64_t x432 = INT64_MIN;
int32_t x447 = 34481;
int64_t x458 = -35086LL;
int64_t x461 = INT64_MIN;
int32_t t116 = 318435913;
int32_t x469 = INT32_MIN;
int32_t t117 = -680197998;
volatile uint16_t x474 = 2937U;
int8_t x476 = -1;
int8_t x481 = INT8_MIN;
static int32_t x484 = 1000754634;
static volatile uint64_t x492 = 8LLU;
int8_t x493 = -5;
int32_t x495 = INT32_MAX;
static int8_t x505 = -45;
uint32_t x523 = 293482U;
uint64_t x524 = UINT64_MAX;
int64_t x525 = -1LL;
volatile int32_t t131 = 6717;
int32_t x530 = INT32_MIN;
uint8_t x531 = 1U;
static uint32_t x536 = 9172260U;
static uint32_t x539 = 302447U;
uint32_t x544 = 55U;
static volatile int64_t x546 = INT64_MAX;
uint32_t x550 = UINT32_MAX;
volatile int16_t x557 = 3262;
uint16_t x560 = 161U;
uint16_t x563 = UINT16_MAX;
uint64_t x569 = 2170136943738LLU;
volatile int32_t t144 = -19;
int32_t x586 = -1;
volatile int32_t t146 = 8;
static uint32_t x591 = 1524770U;
int32_t x596 = 1414;
int64_t x609 = INT64_MIN;
volatile int32_t t154 = 57700431;
uint32_t x625 = 8091181U;
uint8_t x626 = UINT8_MAX;
static int32_t x631 = 766744;
int32_t t157 = 3497;
int32_t x638 = -1;
int64_t x639 = -16826089934030854LL;
static uint16_t x640 = 153U;
int8_t x644 = INT8_MIN;
int64_t x645 = -1LL;
volatile int32_t t161 = 476;
int8_t x650 = -13;
volatile int32_t x652 = INT32_MIN;
int32_t x657 = INT32_MAX;
static int16_t x668 = INT16_MIN;
int32_t t167 = 4984361;
uint8_t x676 = 0U;
static volatile int64_t x677 = -1LL;
int16_t x682 = INT16_MAX;
static int64_t x685 = INT64_MIN;
static uint16_t x691 = 990U;
int32_t x692 = 6989;
int8_t x696 = -13;
int16_t x701 = INT16_MAX;
int32_t t175 = 18990;
static int32_t x708 = -1;
int64_t x710 = -6712261LL;
int32_t t178 = 119175318;
static volatile uint32_t x720 = 1U;
volatile int32_t t181 = 8;
uint8_t x730 = UINT8_MAX;
int64_t x736 = INT64_MAX;
int16_t x741 = -1;
volatile uint32_t x748 = 397U;
int8_t x750 = -1;
int64_t x757 = INT64_MAX;
volatile int64_t x761 = INT64_MIN;
int32_t t190 = -1;
volatile int32_t x771 = INT32_MIN;
static int64_t x776 = 5LL;
int32_t t194 = -4979;
uint32_t x784 = 1U;
uint16_t x787 = 39U;
static uint8_t x790 = 23U;
int16_t x795 = -1;
volatile uint8_t x800 = UINT8_MAX;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	int32_t x2 = 0;
	int8_t x3 = -44;
	uint64_t x4 = 678LLU;
	volatile int32_t t0 = -11;

    t0 = ((x1<=x2)<<(x3>x4));

    if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -1LL;
	static int16_t x7 = INT16_MAX;
	volatile int32_t t1 = 13613757;

    t1 = ((x5<=x6)<<(x7>x8));

    if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = INT32_MIN;
	int16_t x11 = -1;
	int32_t x12 = 190;
	volatile int32_t t2 = 538308803;

    t2 = ((x9<=x10)<<(x11>x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MAX;
	uint32_t x14 = 15469U;
	int32_t x15 = INT32_MIN;
	int32_t x16 = INT32_MIN;
	int32_t t3 = 951054;

    t3 = ((x13<=x14)<<(x15>x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x18 = INT64_MAX;
	int64_t x20 = 1418442486214LL;
	volatile int32_t t4 = -24227;

    t4 = ((x17<=x18)<<(x19>x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -1LL;
	int16_t x22 = -1;
	uint32_t x23 = 1099108734U;
	int64_t x24 = INT64_MIN;
	static int32_t t5 = -32706;

    t5 = ((x21<=x22)<<(x23>x24));

    if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MAX;
	static int8_t x26 = INT8_MIN;
	volatile int64_t x27 = INT64_MAX;
	int8_t x28 = INT8_MIN;
	volatile int32_t t6 = 154669;

    t6 = ((x25<=x26)<<(x27>x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = UINT16_MAX;
	static int32_t x30 = INT32_MIN;
	int64_t x31 = INT64_MAX;
	static int16_t x32 = -1;
	int32_t t7 = -23447;

    t7 = ((x29<=x30)<<(x31>x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x33 = -1;
	int8_t x34 = INT8_MIN;
	int16_t x35 = -1;
	int8_t x36 = INT8_MIN;
	int32_t t8 = 12721;

    t8 = ((x33<=x34)<<(x35>x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = UINT16_MAX;
	int16_t x39 = -1;
	static volatile int16_t x40 = INT16_MIN;
	volatile int32_t t9 = -2;

    t9 = ((x37<=x38)<<(x39>x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = UINT32_MAX;
	static int32_t x43 = INT32_MIN;
	volatile int32_t t10 = -333;

    t10 = ((x41<=x42)<<(x43>x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x46 = INT64_MIN;
	uint64_t x47 = UINT64_MAX;
	static volatile uint16_t x48 = UINT16_MAX;
	int32_t t11 = -304;

    t11 = ((x45<=x46)<<(x47>x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint16_t x49 = 178U;
	volatile int16_t x50 = 38;
	int64_t x51 = INT64_MIN;
	int16_t x52 = -1;
	int32_t t12 = 31976379;

    t12 = ((x49<=x50)<<(x51>x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint16_t x53 = 1520U;
	int16_t x54 = -1;
	uint32_t x56 = 1812U;
	int32_t t13 = -575999317;

    t13 = ((x53<=x54)<<(x55>x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x57 = 3222U;
	int8_t x58 = -1;
	uint8_t x59 = UINT8_MAX;
	int64_t x60 = -1LL;
	volatile int32_t t14 = 33;

    t14 = ((x57<=x58)<<(x59>x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = 1970074962445086LLU;
	int32_t x62 = -1;
	static int16_t x63 = INT16_MAX;
	uint64_t x64 = 23365057LLU;
	int32_t t15 = -5;

    t15 = ((x61<=x62)<<(x63>x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x65 = INT32_MIN;
	int8_t x67 = -1;
	int32_t t16 = 32318614;

    t16 = ((x65<=x66)<<(x67>x68));

    if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = 15471393836174LLU;
	volatile int32_t x71 = INT32_MIN;
	volatile int32_t x72 = 29229386;

    t17 = ((x69<=x70)<<(x71>x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x73 = 358U;
	uint8_t x74 = 5U;
	int16_t x75 = -26;
	static int8_t x76 = INT8_MIN;
	int32_t t18 = -2312;

    t18 = ((x73<=x74)<<(x75>x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = 4U;
	int32_t t19 = 5;

    t19 = ((x77<=x78)<<(x79>x80));

    if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x82 = -1;
	int16_t x83 = INT16_MIN;
	uint64_t x84 = 20054573LLU;

    t20 = ((x81<=x82)<<(x83>x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x85 = 41U;
	int32_t x87 = -1;
	volatile int32_t t21 = 433;

    t21 = ((x85<=x86)<<(x87>x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = -73309;
	volatile int32_t x90 = 1984;
	int64_t x91 = INT64_MAX;
	uint64_t x92 = 1302449117LLU;
	volatile int32_t t22 = 2567092;

    t22 = ((x89<=x90)<<(x91>x92));

    if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x94 = INT64_MAX;
	volatile uint16_t x95 = 457U;
	volatile int32_t x96 = INT32_MIN;
	volatile int32_t t23 = 1;

    t23 = ((x93<=x94)<<(x95>x96));

    if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = -1LL;
	static int8_t x99 = 11;
	int32_t x100 = INT32_MIN;
	static volatile int32_t t24 = 532;

    t24 = ((x97<=x98)<<(x99>x100));

    if (t24 != 2) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x101 = 114U;
	static volatile int32_t x102 = 430469090;
	volatile uint16_t x103 = 54U;
	int32_t t25 = 1332;

    t25 = ((x101<=x102)<<(x103>x104));

    if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x105 = 60U;
	int64_t x106 = -5LL;
	int8_t x108 = INT8_MIN;
	int32_t t26 = 2;

    t26 = ((x105<=x106)<<(x107>x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x109 = 4U;
	static int8_t x110 = 0;
	static int32_t x111 = INT32_MIN;
	volatile int32_t t27 = 282;

    t27 = ((x109<=x110)<<(x111>x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x113 = UINT8_MAX;
	int32_t x114 = INT32_MIN;
	volatile int32_t t28 = 229;

    t28 = ((x113<=x114)<<(x115>x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x117 = UINT16_MAX;
	static uint16_t x118 = 7U;
	static uint64_t x119 = 50154010LLU;
	int16_t x120 = -1;
	static volatile int32_t t29 = 52591;

    t29 = ((x117<=x118)<<(x119>x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x122 = INT64_MAX;
	int64_t x123 = INT64_MIN;
	uint64_t x124 = UINT64_MAX;
	int32_t t30 = 275796914;

    t30 = ((x121<=x122)<<(x123>x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x125 = -774968471580889LL;
	int16_t x126 = -1;
	volatile uint16_t x127 = UINT16_MAX;
	static uint16_t x128 = 8514U;
	volatile int32_t t31 = -5306952;

    t31 = ((x125<=x126)<<(x127>x128));

    if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = -1;

    t32 = ((x129<=x130)<<(x131>x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = -168483LL;
	int32_t x134 = INT32_MIN;
	int16_t x135 = -44;
	uint32_t x136 = 26896U;
	volatile int32_t t33 = 3752;

    t33 = ((x133<=x134)<<(x135>x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x137 = 322027906;
	int64_t x138 = -508422957047408011LL;
	volatile uint32_t x139 = 1U;
	int64_t x140 = -1LL;

    t34 = ((x137<=x138)<<(x139>x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = 79;
	int16_t x142 = 100;
	int32_t x143 = INT32_MIN;
	int16_t x144 = INT16_MAX;
	volatile int32_t t35 = 54746498;

    t35 = ((x141<=x142)<<(x143>x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MAX;
	volatile int32_t x146 = INT32_MAX;
	int64_t x148 = -38445072537154LL;

    t36 = ((x145<=x146)<<(x147>x148));

    if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x150 = INT64_MIN;
	int8_t x151 = 1;
	int8_t x152 = INT8_MIN;
	static volatile int32_t t37 = 1038;

    t37 = ((x149<=x150)<<(x151>x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = 0;

    t38 = ((x153<=x154)<<(x155>x156));

    if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x158 = INT64_MIN;
	static uint16_t x159 = 803U;
	int32_t t39 = -7069;

    t39 = ((x157<=x158)<<(x159>x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = 8924277258253LL;
	uint16_t x162 = UINT16_MAX;
	uint8_t x163 = 28U;
	uint64_t x164 = 1335532711999239LLU;
	int32_t t40 = -3169;

    t40 = ((x161<=x162)<<(x163>x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = INT8_MAX;
	volatile int8_t x166 = -3;
	volatile uint64_t x167 = 402412209794326LLU;
	int16_t x168 = INT16_MIN;
	volatile int32_t t41 = 37610098;

    t41 = ((x165<=x166)<<(x167>x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x169 = UINT32_MAX;
	uint32_t x170 = UINT32_MAX;
	int32_t x171 = -8040671;
	int16_t x172 = 1;

    t42 = ((x169<=x170)<<(x171>x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x173 = INT64_MIN;
	int16_t x175 = INT16_MIN;
	int8_t x176 = 5;
	int32_t t43 = 240;

    t43 = ((x173<=x174)<<(x175>x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = -1;
	uint16_t x178 = 16806U;
	int64_t x179 = INT64_MIN;
	int32_t x180 = INT32_MAX;
	static volatile int32_t t44 = 349203;

    t44 = ((x177<=x178)<<(x179>x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = 154335721;
	uint16_t x182 = 7166U;
	static volatile int32_t x183 = -142216;
	int16_t x184 = INT16_MIN;
	int32_t t45 = 69;

    t45 = ((x181<=x182)<<(x183>x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x186 = INT64_MIN;
	int64_t x187 = INT64_MAX;
	volatile int32_t t46 = -1;

    t46 = ((x185<=x186)<<(x187>x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint8_t x190 = 15U;
	int32_t x192 = -10007;
	volatile int32_t t47 = -1281;

    t47 = ((x189<=x190)<<(x191>x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = -462863;
	uint64_t x194 = 137457159879LLU;
	int8_t x195 = INT8_MAX;
	static uint64_t x196 = 133339852470546LLU;
	volatile int32_t t48 = 826718;

    t48 = ((x193<=x194)<<(x195>x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = INT8_MIN;
	static int32_t x199 = 207208;
	static int16_t x200 = INT16_MIN;
	int32_t t49 = -436252682;

    t49 = ((x197<=x198)<<(x199>x200));

    if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = -9;
	uint8_t x202 = UINT8_MAX;
	int16_t x204 = INT16_MIN;
	static volatile int32_t t50 = -42;

    t50 = ((x201<=x202)<<(x203>x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = -1;
	static volatile int8_t x206 = -1;
	int16_t x208 = INT16_MIN;
	int32_t t51 = 1;

    t51 = ((x205<=x206)<<(x207>x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x210 = UINT16_MAX;
	uint32_t x211 = 143595U;
	int64_t x212 = INT64_MAX;

    t52 = ((x209<=x210)<<(x211>x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MIN;
	static volatile int8_t x215 = 1;
	int16_t x216 = INT16_MAX;

    t53 = ((x213<=x214)<<(x215>x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x217 = 25U;
	int32_t x218 = -1;
	int32_t x219 = -1;
	static int8_t x220 = INT8_MIN;
	int32_t t54 = 57;

    t54 = ((x217<=x218)<<(x219>x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = 6;
	static volatile int64_t x222 = INT64_MIN;
	uint64_t x223 = 1516634397052821LLU;
	static int64_t x224 = -19271LL;
	static int32_t t55 = -503029;

    t55 = ((x221<=x222)<<(x223>x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x225 = INT8_MAX;
	static volatile int16_t x226 = 295;
	static volatile uint8_t x227 = UINT8_MAX;
	volatile uint64_t x228 = 2160938427642LLU;
	volatile int32_t t56 = -665;

    t56 = ((x225<=x226)<<(x227>x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x229 = UINT8_MAX;
	volatile uint32_t x230 = 11U;
	volatile uint64_t x231 = UINT64_MAX;
	uint8_t x232 = 1U;
	volatile int32_t t57 = -12007;

    t57 = ((x229<=x230)<<(x231>x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = INT32_MAX;
	int64_t x234 = INT64_MAX;
	static volatile int16_t x235 = -1;
	int16_t x236 = -1;

    t58 = ((x233<=x234)<<(x235>x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int32_t x238 = INT32_MIN;
	uint8_t x239 = 125U;
	int16_t x240 = INT16_MIN;
	int32_t t59 = 0;

    t59 = ((x237<=x238)<<(x239>x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = -1;
	int32_t x242 = INT32_MAX;
	int16_t x244 = INT16_MAX;

    t60 = ((x241<=x242)<<(x243>x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = 237;
	uint32_t x246 = UINT32_MAX;
	static int16_t x247 = INT16_MIN;
	volatile int32_t t61 = 11548;

    t61 = ((x245<=x246)<<(x247>x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x249 = 254547303;
	static int8_t x250 = -1;
	static int16_t x251 = INT16_MIN;
	volatile int8_t x252 = INT8_MIN;

    t62 = ((x249<=x250)<<(x251>x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x253 = UINT16_MAX;
	int16_t x254 = INT16_MAX;
	volatile uint64_t x255 = 109695302438655LLU;
	volatile uint64_t x256 = UINT64_MAX;
	volatile int32_t t63 = 0;

    t63 = ((x253<=x254)<<(x255>x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = INT32_MIN;
	int32_t x258 = INT32_MIN;
	volatile int32_t t64 = 4;

    t64 = ((x257<=x258)<<(x259>x260));

    if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x261 = 26U;
	volatile int64_t x262 = -1LL;
	static int64_t x263 = INT64_MIN;
	int64_t x264 = 832361756535LL;
	volatile int32_t t65 = -159853;

    t65 = ((x261<=x262)<<(x263>x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = INT16_MIN;
	static volatile int32_t x267 = INT32_MIN;
	volatile int32_t x268 = INT32_MIN;
	static int32_t t66 = -689853;

    t66 = ((x265<=x266)<<(x267>x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x269 = 13075;
	static int64_t x270 = INT64_MIN;
	static uint16_t x271 = UINT16_MAX;
	volatile int16_t x272 = INT16_MIN;
	volatile int32_t t67 = -78136074;

    t67 = ((x269<=x270)<<(x271>x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x273 = 26U;
	int8_t x274 = 0;
	int32_t x275 = INT32_MAX;
	volatile uint8_t x276 = 60U;

    t68 = ((x273<=x274)<<(x275>x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = INT64_MIN;
	static int32_t x278 = -1;
	static int32_t x279 = INT32_MIN;
	static int8_t x280 = INT8_MIN;
	int32_t t69 = -197548127;

    t69 = ((x277<=x278)<<(x279>x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x281 = -1;
	volatile int64_t x282 = INT64_MIN;
	int32_t x283 = INT32_MAX;
	int32_t x284 = INT32_MIN;
	int32_t t70 = -3188;

    t70 = ((x281<=x282)<<(x283>x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = INT8_MIN;
	uint16_t x286 = 2U;
	int8_t x287 = -1;
	static int8_t x288 = -1;
	volatile int32_t t71 = -4018240;

    t71 = ((x285<=x286)<<(x287>x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x290 = UINT16_MAX;
	int16_t x291 = INT16_MIN;
	uint16_t x292 = 26U;
	static volatile int32_t t72 = -557000823;

    t72 = ((x289<=x290)<<(x291>x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = -13;
	int32_t x294 = INT32_MIN;
	int64_t x296 = -1535278928384375660LL;
	int32_t t73 = -1;

    t73 = ((x293<=x294)<<(x295>x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = -1LL;
	volatile int8_t x298 = -1;
	int16_t x299 = -1;
	int8_t x300 = INT8_MAX;
	static volatile int32_t t74 = -159396980;

    t74 = ((x297<=x298)<<(x299>x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x301 = 28U;
	int64_t x302 = -841532656795546786LL;
	int32_t x303 = INT32_MAX;
	uint64_t x304 = 14447958LLU;

    t75 = ((x301<=x302)<<(x303>x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x305 = 86U;
	static int16_t x306 = INT16_MAX;
	int8_t x307 = 1;
	int32_t t76 = -117997680;

    t76 = ((x305<=x306)<<(x307>x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = INT16_MAX;
	static uint64_t x311 = UINT64_MAX;
	uint64_t x312 = 8500758487346LLU;
	volatile int32_t t77 = -1414215;

    t77 = ((x309<=x310)<<(x311>x312));

    if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x313 = UINT64_MAX;
	static int8_t x314 = 8;
	volatile int32_t x315 = INT32_MIN;
	uint16_t x316 = 287U;

    t78 = ((x313<=x314)<<(x315>x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x317 = -1;
	int16_t x318 = INT16_MAX;
	int32_t x319 = 4237;
	int8_t x320 = -24;

    t79 = ((x317<=x318)<<(x319>x320));

    if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = -28;
	int16_t x322 = INT16_MIN;
	int32_t x324 = 107218;
	volatile int32_t t80 = -910359924;

    t80 = ((x321<=x322)<<(x323>x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x325 = 39U;
	static int32_t x326 = 11532075;
	volatile int16_t x327 = -1976;
	static uint8_t x328 = 11U;
	int32_t t81 = 148;

    t81 = ((x325<=x326)<<(x327>x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x329 = -3020205;
	int16_t x330 = -1;
	volatile int16_t x331 = INT16_MIN;

    t82 = ((x329<=x330)<<(x331>x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = INT64_MAX;
	uint32_t x335 = UINT32_MAX;

    t83 = ((x333<=x334)<<(x335>x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x338 = INT8_MIN;
	volatile int8_t x339 = -1;
	int32_t t84 = 0;

    t84 = ((x337<=x338)<<(x339>x340));

    if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = -11;
	int16_t x342 = INT16_MIN;
	int32_t x343 = -1;
	uint16_t x344 = 23U;
	static volatile int32_t t85 = -2238467;

    t85 = ((x341<=x342)<<(x343>x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x346 = -1;
	uint32_t x347 = 107485U;
	int16_t x348 = 1;

    t86 = ((x345<=x346)<<(x347>x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint64_t x349 = 38730558LLU;
	int64_t x350 = INT64_MAX;
	uint16_t x352 = 18158U;
	static volatile int32_t t87 = -42;

    t87 = ((x349<=x350)<<(x351>x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint16_t x353 = UINT16_MAX;
	int32_t x354 = -1;
	int32_t x355 = 36;
	int32_t t88 = -29799;

    t88 = ((x353<=x354)<<(x355>x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x357 = UINT16_MAX;
	static volatile int64_t x358 = -8461391812415486LL;
	volatile int8_t x359 = 10;
	uint8_t x360 = 0U;
	volatile int32_t t89 = -2886412;

    t89 = ((x357<=x358)<<(x359>x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x362 = -1;
	int32_t x364 = INT32_MIN;
	static int32_t t90 = -12846;

    t90 = ((x361<=x362)<<(x363>x364));

    if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x366 = -1LL;
	static volatile uint32_t x368 = UINT32_MAX;
	volatile int32_t t91 = -146345040;

    t91 = ((x365<=x366)<<(x367>x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x369 = 112083LLU;
	static int8_t x370 = 7;
	int32_t t92 = 190;

    t92 = ((x369<=x370)<<(x371>x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x374 = INT8_MIN;
	volatile int32_t x375 = INT32_MAX;
	static uint16_t x376 = 52U;
	int32_t t93 = -1;

    t93 = ((x373<=x374)<<(x375>x376));

    if (t93 != 2) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x377 = -5298639674LL;
	uint8_t x378 = 51U;
	uint16_t x379 = 1U;
	volatile int32_t t94 = -29348318;

    t94 = ((x377<=x378)<<(x379>x380));

    if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint64_t x381 = UINT64_MAX;
	int8_t x384 = -1;
	volatile int32_t t95 = -4;

    t95 = ((x381<=x382)<<(x383>x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = INT64_MAX;
	uint8_t x387 = 2U;
	int64_t x388 = -1LL;
	static volatile int32_t t96 = 12538;

    t96 = ((x385<=x386)<<(x387>x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = -1;
	int32_t x390 = -1;
	int8_t x391 = 1;
	volatile int16_t x392 = INT16_MIN;
	volatile int32_t t97 = 197438;

    t97 = ((x389<=x390)<<(x391>x392));

    if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int8_t x394 = 1;
	uint32_t x395 = UINT32_MAX;
	int32_t t98 = -43;

    t98 = ((x393<=x394)<<(x395>x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x397 = UINT16_MAX;
	volatile int8_t x398 = 1;
	uint64_t x399 = 499LLU;
	uint32_t x400 = 865176908U;
	static int32_t t99 = -2783;

    t99 = ((x397<=x398)<<(x399>x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x401 = UINT32_MAX;
	static int32_t x402 = -2001;
	static int8_t x403 = INT8_MAX;
	uint16_t x404 = 2620U;
	int32_t t100 = -493;

    t100 = ((x401<=x402)<<(x403>x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x405 = 1U;
	uint16_t x406 = 414U;
	static uint32_t x407 = 108U;
	static uint64_t x408 = 13LLU;
	int32_t t101 = 20097;

    t101 = ((x405<=x406)<<(x407>x408));

    if (t101 != 2) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = INT64_MAX;
	uint8_t x410 = UINT8_MAX;
	int16_t x411 = INT16_MIN;
	uint16_t x412 = UINT16_MAX;
	int32_t t102 = 63064;

    t102 = ((x409<=x410)<<(x411>x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x413 = 94091630LLU;
	static int16_t x414 = INT16_MIN;
	static int16_t x415 = INT16_MIN;
	int8_t x416 = INT8_MAX;
	volatile int32_t t103 = 13;

    t103 = ((x413<=x414)<<(x415>x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = INT64_MAX;
	int16_t x418 = INT16_MIN;
	int8_t x419 = -1;
	static volatile int32_t t104 = -30975273;

    t104 = ((x417<=x418)<<(x419>x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = INT32_MIN;
	int16_t x422 = 77;
	uint8_t x423 = 44U;
	static int64_t x424 = 133LL;
	static volatile int32_t t105 = -1292717;

    t105 = ((x421<=x422)<<(x423>x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = -1LL;
	static int32_t x426 = -8;
	int8_t x427 = 1;
	int32_t x428 = INT32_MIN;
	volatile int32_t t106 = -1;

    t106 = ((x425<=x426)<<(x427>x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = INT64_MAX;
	int16_t x430 = INT16_MAX;
	static volatile int8_t x431 = INT8_MAX;
	static volatile int32_t t107 = -73;

    t107 = ((x429<=x430)<<(x431>x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = 611;
	static int8_t x434 = INT8_MIN;
	volatile uint8_t x435 = 6U;
	volatile uint32_t x436 = 2500U;
	volatile int32_t t108 = 20;

    t108 = ((x433<=x434)<<(x435>x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x437 = -748;
	static int8_t x438 = INT8_MAX;
	uint32_t x439 = 674320U;
	int64_t x440 = -24994364LL;
	static volatile int32_t t109 = -1;

    t109 = ((x437<=x438)<<(x439>x440));

    if (t109 != 2) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = INT32_MIN;
	int32_t x442 = INT32_MAX;
	int8_t x443 = -1;
	int8_t x444 = 29;
	int32_t t110 = -12920970;

    t110 = ((x441<=x442)<<(x443>x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x445 = 99U;
	int32_t x446 = INT32_MAX;
	uint64_t x448 = UINT64_MAX;
	volatile int32_t t111 = -11;

    t111 = ((x445<=x446)<<(x447>x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x449 = 2285600U;
	uint32_t x450 = 1U;
	uint8_t x451 = 0U;
	uint64_t x452 = 100518832722050LLU;
	static volatile int32_t t112 = 631;

    t112 = ((x449<=x450)<<(x451>x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x453 = INT16_MIN;
	int16_t x454 = INT16_MIN;
	static int32_t x455 = -26;
	int16_t x456 = INT16_MIN;
	static int32_t t113 = -11063;

    t113 = ((x453<=x454)<<(x455>x456));

    if (t113 != 2) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x457 = 5U;
	int64_t x459 = 747136274466456422LL;
	uint32_t x460 = UINT32_MAX;
	int32_t t114 = -15446981;

    t114 = ((x457<=x458)<<(x459>x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x462 = INT64_MIN;
	int16_t x463 = -1;
	volatile int64_t x464 = INT64_MIN;
	int32_t t115 = -404;

    t115 = ((x461<=x462)<<(x463>x464));

    if (t115 != 2) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = -1;
	int32_t x466 = 2;
	volatile int8_t x467 = 9;
	volatile int64_t x468 = INT64_MIN;

    t116 = ((x465<=x466)<<(x467>x468));

    if (t116 != 2) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x470 = INT8_MIN;
	uint64_t x471 = 3385783916006426814LLU;
	static int32_t x472 = INT32_MAX;

    t117 = ((x469<=x470)<<(x471>x472));

    if (t117 != 2) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x473 = -227;
	static uint8_t x475 = 46U;
	volatile int32_t t118 = 602440431;

    t118 = ((x473<=x474)<<(x475>x476));

    if (t118 != 2) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = 979924094LL;
	uint32_t x478 = 28629283U;
	volatile int8_t x479 = 1;
	int8_t x480 = INT8_MAX;
	int32_t t119 = -1411;

    t119 = ((x477<=x478)<<(x479>x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x482 = -1;
	int64_t x483 = -272066790307935LL;
	volatile int32_t t120 = 910227;

    t120 = ((x481<=x482)<<(x483>x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = INT16_MAX;
	volatile int8_t x486 = INT8_MIN;
	int32_t x487 = INT32_MIN;
	int16_t x488 = INT16_MAX;
	int32_t t121 = 2967;

    t121 = ((x485<=x486)<<(x487>x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = INT8_MIN;
	uint64_t x490 = 14797LLU;
	int64_t x491 = INT64_MIN;
	int32_t t122 = -146923828;

    t122 = ((x489<=x490)<<(x491>x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x494 = 162LLU;
	int64_t x496 = -1LL;
	int32_t t123 = -6930215;

    t123 = ((x493<=x494)<<(x495>x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = 6500874823831736LL;
	static int64_t x498 = INT64_MAX;
	volatile uint64_t x499 = 12399LLU;
	uint8_t x500 = 33U;
	volatile int32_t t124 = 1496842;

    t124 = ((x497<=x498)<<(x499>x500));

    if (t124 != 2) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x501 = 369260770LLU;
	int8_t x502 = -1;
	uint16_t x503 = 16301U;
	int16_t x504 = INT16_MAX;
	volatile int32_t t125 = -8151355;

    t125 = ((x501<=x502)<<(x503>x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x506 = UINT64_MAX;
	uint64_t x507 = UINT64_MAX;
	int16_t x508 = INT16_MAX;
	volatile int32_t t126 = -24;

    t126 = ((x505<=x506)<<(x507>x508));

    if (t126 != 2) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = 7;
	uint64_t x510 = UINT64_MAX;
	uint8_t x511 = UINT8_MAX;
	int16_t x512 = INT16_MIN;
	volatile int32_t t127 = -822;

    t127 = ((x509<=x510)<<(x511>x512));

    if (t127 != 2) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = INT32_MIN;
	int32_t x514 = -1;
	static int8_t x515 = INT8_MIN;
	int64_t x516 = INT64_MAX;
	static volatile int32_t t128 = -19;

    t128 = ((x513<=x514)<<(x515>x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x517 = 369U;
	uint32_t x518 = 984253934U;
	volatile int16_t x519 = -111;
	uint16_t x520 = 2984U;
	int32_t t129 = -1;

    t129 = ((x517<=x518)<<(x519>x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x521 = UINT64_MAX;
	uint64_t x522 = UINT64_MAX;
	volatile int32_t t130 = 21358;

    t130 = ((x521<=x522)<<(x523>x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x526 = INT64_MIN;
	int32_t x527 = INT32_MIN;
	volatile int64_t x528 = -1LL;

    t131 = ((x525<=x526)<<(x527>x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x529 = INT64_MIN;
	int64_t x532 = -1LL;
	static int32_t t132 = -202250294;

    t132 = ((x529<=x530)<<(x531>x532));

    if (t132 != 2) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x533 = 0U;
	static volatile int64_t x534 = -1LL;
	int8_t x535 = INT8_MIN;
	int32_t t133 = -274411890;

    t133 = ((x533<=x534)<<(x535>x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x537 = 72U;
	volatile int64_t x538 = -8062148444092LL;
	uint64_t x540 = 61524137LLU;
	int32_t t134 = 97;

    t134 = ((x537<=x538)<<(x539>x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = -655918207;
	static int8_t x542 = INT8_MIN;
	int8_t x543 = INT8_MIN;
	volatile int32_t t135 = 53;

    t135 = ((x541<=x542)<<(x543>x544));

    if (t135 != 2) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x545 = 7U;
	static int32_t x547 = 14;
	static volatile int8_t x548 = INT8_MIN;
	volatile int32_t t136 = 27808395;

    t136 = ((x545<=x546)<<(x547>x548));

    if (t136 != 2) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = INT64_MAX;
	int16_t x551 = INT16_MAX;
	int64_t x552 = -1LL;
	volatile int32_t t137 = -1;

    t137 = ((x549<=x550)<<(x551>x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = -32;
	int64_t x554 = INT64_MIN;
	static int16_t x555 = INT16_MAX;
	static int32_t x556 = INT32_MIN;
	volatile int32_t t138 = 2327543;

    t138 = ((x553<=x554)<<(x555>x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x558 = 140U;
	int8_t x559 = -1;
	int32_t t139 = 2017;

    t139 = ((x557<=x558)<<(x559>x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = -1;
	int32_t x562 = INT32_MIN;
	static uint64_t x564 = 24847578418869031LLU;
	int32_t t140 = 0;

    t140 = ((x561<=x562)<<(x563>x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = -149;
	int8_t x566 = -43;
	uint32_t x567 = 1U;
	int32_t x568 = INT32_MIN;
	static volatile int32_t t141 = -3397029;

    t141 = ((x565<=x566)<<(x567>x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x570 = 2901847759247451014LL;
	int64_t x571 = -282207LL;
	static uint32_t x572 = UINT32_MAX;
	int32_t t142 = -58;

    t142 = ((x569<=x570)<<(x571>x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x573 = UINT64_MAX;
	int16_t x574 = INT16_MAX;
	static int32_t x575 = INT32_MAX;
	static uint32_t x576 = 157703U;
	volatile int32_t t143 = 889344033;

    t143 = ((x573<=x574)<<(x575>x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = 0;
	uint64_t x578 = 54114330LLU;
	volatile int8_t x579 = -1;
	int64_t x580 = -1LL;

    t144 = ((x577<=x578)<<(x579>x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = INT8_MIN;
	int8_t x582 = 0;
	int64_t x583 = -14938485891104LL;
	int8_t x584 = INT8_MAX;
	volatile int32_t t145 = 946634389;

    t145 = ((x581<=x582)<<(x583>x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = 329;
	int32_t x587 = -1;
	uint32_t x588 = 6643201U;

    t146 = ((x585<=x586)<<(x587>x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x589 = 2501373487098LLU;
	volatile uint32_t x590 = 8020U;
	static uint16_t x592 = UINT16_MAX;
	volatile int32_t t147 = -227854;

    t147 = ((x589<=x590)<<(x591>x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = -1354304868179060LL;
	int8_t x594 = -1;
	int64_t x595 = -1LL;
	int32_t t148 = 609829992;

    t148 = ((x593<=x594)<<(x595>x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x597 = 4243178331229144LLU;
	int32_t x598 = -8778;
	uint8_t x599 = 0U;
	static uint64_t x600 = UINT64_MAX;
	volatile int32_t t149 = -7;

    t149 = ((x597<=x598)<<(x599>x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x601 = UINT16_MAX;
	static int8_t x602 = -3;
	static uint64_t x603 = 4815375549046LLU;
	uint8_t x604 = 11U;
	static volatile int32_t t150 = -170;

    t150 = ((x601<=x602)<<(x603>x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = INT8_MIN;
	int8_t x606 = INT8_MAX;
	int16_t x607 = 9;
	uint16_t x608 = 12U;
	static volatile int32_t t151 = 22831;

    t151 = ((x605<=x606)<<(x607>x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x610 = UINT32_MAX;
	uint64_t x611 = 3763011299799662444LLU;
	int16_t x612 = 19;
	int32_t t152 = -5189;

    t152 = ((x609<=x610)<<(x611>x612));

    if (t152 != 2) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = INT8_MIN;
	int32_t x614 = INT32_MIN;
	static int16_t x615 = INT16_MAX;
	static int64_t x616 = INT64_MIN;
	static int32_t t153 = 25498067;

    t153 = ((x613<=x614)<<(x615>x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = 1;
	volatile int8_t x618 = -1;
	uint64_t x619 = 100411LLU;
	uint16_t x620 = 9711U;

    t154 = ((x617<=x618)<<(x619>x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x621 = INT8_MAX;
	volatile int32_t x622 = INT32_MIN;
	volatile int64_t x623 = INT64_MAX;
	uint64_t x624 = 16539673875560LLU;
	int32_t t155 = -87190;

    t155 = ((x621<=x622)<<(x623>x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x627 = -1LL;
	int64_t x628 = 0LL;
	static int32_t t156 = -1;

    t156 = ((x625<=x626)<<(x627>x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = INT16_MIN;
	int64_t x630 = -167167276349LL;
	uint16_t x632 = 442U;

    t157 = ((x629<=x630)<<(x631>x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = -1;
	uint16_t x634 = 50U;
	uint8_t x635 = 19U;
	int8_t x636 = -1;
	volatile int32_t t158 = -5018464;

    t158 = ((x633<=x634)<<(x635>x636));

    if (t158 != 2) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x637 = INT64_MIN;
	int32_t t159 = -400193872;

    t159 = ((x637<=x638)<<(x639>x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x641 = INT32_MIN;
	uint32_t x642 = UINT32_MAX;
	static int16_t x643 = INT16_MIN;
	int32_t t160 = 28909;

    t160 = ((x641<=x642)<<(x643>x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x646 = INT16_MIN;
	static volatile uint8_t x647 = 0U;
	int32_t x648 = INT32_MIN;

    t161 = ((x645<=x646)<<(x647>x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = INT16_MAX;
	int16_t x651 = INT16_MIN;
	int32_t t162 = 20;

    t162 = ((x649<=x650)<<(x651>x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x653 = UINT16_MAX;
	static int8_t x654 = INT8_MAX;
	int16_t x655 = 121;
	int8_t x656 = INT8_MAX;
	volatile int32_t t163 = 11672731;

    t163 = ((x653<=x654)<<(x655>x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x658 = -1LL;
	static uint64_t x659 = 13522622LLU;
	uint64_t x660 = UINT64_MAX;
	volatile int32_t t164 = 13;

    t164 = ((x657<=x658)<<(x659>x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = -1;
	int8_t x662 = 3;
	int16_t x663 = -1;
	int16_t x664 = -1;
	volatile int32_t t165 = 74339842;

    t165 = ((x661<=x662)<<(x663>x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = -1;
	uint16_t x666 = UINT16_MAX;
	uint16_t x667 = 12U;
	volatile int32_t t166 = -25472534;

    t166 = ((x665<=x666)<<(x667>x668));

    if (t166 != 2) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x669 = INT32_MIN;
	int16_t x670 = -1;
	int8_t x671 = 3;
	int16_t x672 = -17;

    t167 = ((x669<=x670)<<(x671>x672));

    if (t167 != 2) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x673 = 1U;
	uint8_t x674 = UINT8_MAX;
	int32_t x675 = INT32_MIN;
	int32_t t168 = -4;

    t168 = ((x673<=x674)<<(x675>x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint16_t x678 = UINT16_MAX;
	int32_t x679 = -1;
	int64_t x680 = INT64_MAX;
	volatile int32_t t169 = 0;

    t169 = ((x677<=x678)<<(x679>x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x681 = 8676606939045862LL;
	static volatile int16_t x683 = 11752;
	static int64_t x684 = INT64_MAX;
	volatile int32_t t170 = 112195453;

    t170 = ((x681<=x682)<<(x683>x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x686 = -2945919;
	int8_t x687 = INT8_MIN;
	int32_t x688 = INT32_MIN;
	volatile int32_t t171 = -745020;

    t171 = ((x685<=x686)<<(x687>x688));

    if (t171 != 2) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x689 = INT64_MAX;
	int32_t x690 = -1;
	volatile int32_t t172 = -1556559;

    t172 = ((x689<=x690)<<(x691>x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x693 = -1;
	int8_t x694 = -1;
	uint8_t x695 = UINT8_MAX;
	int32_t t173 = -1;

    t173 = ((x693<=x694)<<(x695>x696));

    if (t173 != 2) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x697 = UINT64_MAX;
	int8_t x698 = INT8_MAX;
	static int64_t x699 = 115213842391680LL;
	static uint16_t x700 = 7853U;
	static volatile int32_t t174 = -29;

    t174 = ((x697<=x698)<<(x699>x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x702 = -1;
	int16_t x703 = INT16_MIN;
	int32_t x704 = INT32_MIN;

    t175 = ((x701<=x702)<<(x703>x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = -22;
	int8_t x706 = 1;
	volatile int16_t x707 = -669;
	volatile int32_t t176 = -460705957;

    t176 = ((x705<=x706)<<(x707>x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = INT32_MIN;
	static int64_t x711 = INT64_MIN;
	int64_t x712 = INT64_MIN;
	int32_t t177 = 21994381;

    t177 = ((x709<=x710)<<(x711>x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x713 = 5U;
	int64_t x714 = -1LL;
	int64_t x715 = -1LL;
	volatile int8_t x716 = -1;

    t178 = ((x713<=x714)<<(x715>x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x717 = 79491499U;
	volatile uint16_t x718 = 136U;
	static int64_t x719 = INT64_MIN;
	static int32_t t179 = -4626;

    t179 = ((x717<=x718)<<(x719>x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x721 = -133LL;
	uint16_t x722 = 9868U;
	int32_t x723 = -1;
	uint8_t x724 = UINT8_MAX;
	static volatile int32_t t180 = -19226732;

    t180 = ((x721<=x722)<<(x723>x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = -1LL;
	int8_t x726 = INT8_MIN;
	volatile int64_t x727 = -689521LL;
	volatile int8_t x728 = -1;

    t181 = ((x725<=x726)<<(x727>x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x729 = 290397762U;
	int16_t x731 = -581;
	volatile int32_t x732 = -10;
	volatile int32_t t182 = -36307573;

    t182 = ((x729<=x730)<<(x731>x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = INT64_MAX;
	uint64_t x734 = 7390022775908LLU;
	volatile int8_t x735 = 6;
	volatile int32_t t183 = -218959462;

    t183 = ((x733<=x734)<<(x735>x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x737 = -1;
	int64_t x738 = -1LL;
	int32_t x739 = -1;
	int16_t x740 = INT16_MAX;
	int32_t t184 = 0;

    t184 = ((x737<=x738)<<(x739>x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x742 = UINT16_MAX;
	uint32_t x743 = UINT32_MAX;
	uint64_t x744 = 8694174542016835046LLU;
	volatile int32_t t185 = -7;

    t185 = ((x741<=x742)<<(x743>x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x745 = 56U;
	static uint16_t x746 = UINT16_MAX;
	uint32_t x747 = 388U;
	volatile int32_t t186 = 14;

    t186 = ((x745<=x746)<<(x747>x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = INT32_MIN;
	volatile int64_t x751 = INT64_MIN;
	static volatile int64_t x752 = 1239923663LL;
	volatile int32_t t187 = -11811;

    t187 = ((x749<=x750)<<(x751>x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x753 = UINT32_MAX;
	int16_t x754 = INT16_MAX;
	int8_t x755 = 18;
	int16_t x756 = INT16_MIN;
	volatile int32_t t188 = 1269;

    t188 = ((x753<=x754)<<(x755>x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x758 = 216U;
	static uint8_t x759 = 15U;
	int32_t x760 = INT32_MIN;
	int32_t t189 = -46203;

    t189 = ((x757<=x758)<<(x759>x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x762 = UINT32_MAX;
	int32_t x763 = 91671802;
	int64_t x764 = INT64_MIN;

    t190 = ((x761<=x762)<<(x763>x764));

    if (t190 != 2) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x765 = 100539912U;
	uint64_t x766 = 104801322046079LLU;
	static int8_t x767 = 1;
	int16_t x768 = INT16_MAX;
	int32_t t191 = -63163135;

    t191 = ((x765<=x766)<<(x767>x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = INT16_MAX;
	int16_t x770 = -1;
	uint8_t x772 = 15U;
	static int32_t t192 = 238956626;

    t192 = ((x769<=x770)<<(x771>x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = 14739782;
	int32_t x774 = INT32_MAX;
	uint64_t x775 = 272LLU;
	volatile int32_t t193 = -35;

    t193 = ((x773<=x774)<<(x775>x776));

    if (t193 != 2) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x777 = 6U;
	static int32_t x778 = 2050213;
	static int32_t x779 = INT32_MIN;
	uint8_t x780 = UINT8_MAX;

    t194 = ((x777<=x778)<<(x779>x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x781 = 0LLU;
	int64_t x782 = 54991431215905LL;
	uint32_t x783 = 18982337U;
	volatile int32_t t195 = -19627899;

    t195 = ((x781<=x782)<<(x783>x784));

    if (t195 != 2) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x785 = 565U;
	uint16_t x786 = UINT16_MAX;
	int8_t x788 = INT8_MAX;
	static int32_t t196 = 1119;

    t196 = ((x785<=x786)<<(x787>x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x789 = 7U;
	uint8_t x791 = 1U;
	uint64_t x792 = 727874219165206507LLU;
	volatile int32_t t197 = 130761;

    t197 = ((x789<=x790)<<(x791>x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x793 = 23625570LLU;
	uint16_t x794 = 8U;
	uint64_t x796 = UINT64_MAX;
	volatile int32_t t198 = 4493;

    t198 = ((x793<=x794)<<(x795>x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = INT64_MIN;
	static volatile int16_t x798 = INT16_MAX;
	int16_t x799 = -280;
	volatile int32_t t199 = 8450244;

    t199 = ((x797<=x798)<<(x799>x800));

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

