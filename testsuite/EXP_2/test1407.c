
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

uint16_t x5 = 30627U;
uint8_t x11 = UINT8_MAX;
static int16_t x14 = INT16_MIN;
int32_t x18 = INT32_MAX;
int16_t x20 = INT16_MAX;
int32_t x22 = INT32_MAX;
int16_t x28 = INT16_MAX;
int8_t x29 = -1;
volatile int8_t x30 = INT8_MIN;
int64_t x40 = 26LL;
int32_t t9 = -16207755;
int32_t t11 = 6927;
volatile uint16_t x50 = 136U;
volatile int16_t x51 = -1;
volatile int64_t x74 = INT64_MIN;
uint16_t x77 = 28U;
uint8_t x78 = 0U;
int8_t x80 = 18;
static uint8_t x84 = 13U;
int64_t x88 = INT64_MIN;
volatile int16_t x92 = INT16_MIN;
volatile int32_t t23 = 201933;
volatile uint8_t x104 = 30U;
static uint8_t x106 = 19U;
volatile int64_t x111 = 54LL;
static int32_t x114 = INT32_MIN;
uint32_t x117 = 65742762U;
int16_t x120 = -240;
static volatile uint32_t x128 = UINT32_MAX;
uint8_t x131 = 9U;
int32_t t32 = -3267;
static uint32_t x133 = 1U;
uint64_t x134 = UINT64_MAX;
int8_t x135 = INT8_MAX;
int32_t t33 = 1;
volatile int8_t x141 = INT8_MIN;
static uint16_t x142 = 3043U;
int32_t t35 = 1540;
int16_t x146 = 3;
int32_t x155 = 29888;
static int32_t x163 = 50709;
uint8_t x164 = 16U;
int64_t x166 = 1LL;
volatile int32_t x186 = 53914;
uint64_t x189 = UINT64_MAX;
uint64_t x191 = 3441209291827133184LLU;
int16_t x204 = 216;
volatile int32_t t50 = 4037682;
volatile int16_t x205 = 3;
static uint16_t x206 = 27330U;
int32_t t53 = -305;
uint64_t x220 = 6370972654966769647LLU;
static uint8_t x221 = 31U;
uint8_t x223 = 3U;
int64_t x235 = -1LL;
int16_t x239 = 3957;
static int16_t x246 = INT16_MIN;
static uint8_t x249 = 4U;
static volatile uint32_t x256 = UINT32_MAX;
int8_t x264 = -1;
static uint16_t x265 = 169U;
int8_t x267 = -1;
volatile int32_t t66 = 29671;
uint8_t x269 = 26U;
uint16_t x271 = 29U;
volatile int32_t t67 = 0;
uint8_t x273 = 25U;
int32_t t69 = 3;
volatile uint64_t x283 = 173910745LLU;
uint64_t x287 = 16430099LLU;
uint8_t x299 = 89U;
uint64_t x305 = 32069LLU;
int32_t x312 = INT32_MIN;
int64_t x316 = INT64_MIN;
static int32_t t79 = 1644857;
volatile int32_t x322 = INT32_MIN;
int16_t x324 = INT16_MAX;
int64_t x325 = INT64_MIN;
static volatile int32_t t81 = 5793121;
static uint32_t x329 = 242628917U;
int16_t x334 = 9;
int64_t x340 = INT64_MIN;
uint8_t x342 = 6U;
uint16_t x350 = 2831U;
uint32_t x353 = 153U;
static uint64_t x356 = 5677976646LLU;
int8_t x358 = -59;
volatile int32_t t89 = 40783497;
uint8_t x363 = UINT8_MAX;
int32_t t90 = -1527513;
uint64_t x366 = 2822197821057826826LLU;
volatile int32_t t91 = -2479602;
int8_t x370 = -49;
int16_t x371 = INT16_MAX;
int64_t x377 = INT64_MIN;
static int8_t x384 = -1;
int8_t x386 = 14;
volatile int32_t x388 = INT32_MIN;
int32_t x392 = INT32_MIN;
static int32_t t98 = -10206384;
static volatile uint64_t x398 = UINT64_MAX;
static volatile int32_t t99 = -3921785;
int32_t x411 = INT32_MIN;
volatile int32_t x412 = -1;
int16_t x420 = INT16_MAX;
int16_t x426 = -1;
volatile int8_t x427 = -52;
int32_t t106 = 0;
static volatile int16_t x434 = 40;
uint64_t x444 = 0LLU;
static int32_t t111 = 1;
uint32_t x449 = 714278U;
int16_t x451 = INT16_MIN;
int32_t t112 = 181435;
static volatile int16_t x453 = 121;
static uint16_t x454 = 8U;
static volatile int16_t x456 = INT16_MIN;
static uint64_t x457 = 72686867992LLU;
int32_t x462 = -11750;
int8_t x467 = INT8_MAX;
static int64_t x468 = -1LL;
volatile int16_t x486 = INT16_MIN;
int32_t t121 = 20737639;
uint8_t x492 = UINT8_MAX;
volatile int16_t x493 = INT16_MAX;
static int16_t x499 = -1;
int64_t x501 = INT64_MAX;
static int64_t x507 = INT64_MAX;
int32_t t126 = 654536110;
volatile int8_t x510 = 6;
int64_t x511 = INT64_MAX;
static int16_t x520 = INT16_MIN;
uint8_t x522 = UINT8_MAX;
int32_t x528 = INT32_MIN;
int32_t x529 = INT32_MAX;
uint8_t x531 = UINT8_MAX;
volatile int32_t t137 = -3;
static uint32_t x558 = 724957974U;
volatile int64_t x564 = INT64_MAX;
int8_t x572 = 3;
uint64_t x576 = 51465189633LLU;
int64_t x578 = -3771887722745507LL;
volatile int32_t t144 = -52181;
uint16_t x585 = UINT16_MAX;
int16_t x586 = INT16_MIN;
int64_t x588 = INT64_MIN;
volatile uint64_t x593 = 15730325513514LLU;
int32_t t148 = -508909;
uint32_t x599 = 20213761U;
volatile uint64_t x601 = 6196964617761961LLU;
static int64_t x604 = -1LL;
uint8_t x610 = 2U;
static volatile int32_t t154 = -397;
int8_t x623 = INT8_MIN;
static volatile int32_t t156 = 28;
uint64_t x631 = 1604959638528LLU;
uint8_t x639 = UINT8_MAX;
int64_t x644 = INT64_MAX;
volatile uint16_t x645 = UINT16_MAX;
uint16_t x656 = 21056U;
int16_t x658 = INT16_MAX;
int32_t t164 = -46;
uint64_t x662 = 2LLU;
int16_t x674 = 1;
int8_t x680 = 1;
int32_t t169 = -1279;
uint32_t x685 = 8747U;
int16_t x686 = INT16_MIN;
int32_t x692 = INT32_MIN;
static volatile int8_t x697 = 1;
static uint8_t x698 = UINT8_MAX;
int8_t x707 = 31;
int64_t x714 = INT64_MIN;
int16_t x718 = 711;
volatile int32_t x726 = 72;
uint32_t x735 = 121378981U;
int16_t x738 = -3;
volatile int32_t x743 = INT32_MIN;
static int32_t t186 = 61987;
int8_t x749 = 1;
uint8_t x750 = UINT8_MAX;
static volatile int8_t x758 = -8;
volatile int8_t x761 = -1;
int8_t x762 = INT8_MAX;
int32_t x767 = INT32_MIN;
int8_t x768 = INT8_MAX;
volatile int32_t t192 = -5;
static int64_t x776 = 3162904484LL;
static int32_t t193 = 13;
volatile int64_t x779 = -1LL;
uint16_t x781 = 539U;
volatile int32_t x783 = -1;
volatile int64_t x785 = INT64_MAX;
static int8_t x794 = INT8_MIN;
uint64_t x799 = UINT64_MAX;


void f0(void) {
    	int16_t x1 = -22;
	uint8_t x2 = 44U;
	int8_t x3 = INT8_MIN;
	static int8_t x4 = INT8_MAX;
	int32_t t0 = 34731;

    t0 = ((x1*(x2==x3))!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x6 = 2520955LL;
	uint32_t x7 = UINT32_MAX;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = -6;

    t1 = ((x5*(x6==x7))!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	static int8_t x10 = INT8_MIN;
	int32_t x12 = -1269673;
	int32_t t2 = 860385;

    t2 = ((x9*(x10==x11))!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -1;
	uint64_t x15 = UINT64_MAX;
	int8_t x16 = -1;
	static int32_t t3 = 15267;

    t3 = ((x13*(x14==x15))!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 7U;
	int64_t x19 = -1LL;
	int32_t t4 = 1;

    t4 = ((x17*(x18==x19))!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MIN;
	int32_t x23 = INT32_MIN;
	static uint16_t x24 = 3863U;
	int32_t t5 = 3369;

    t5 = ((x21*(x22==x23))!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	uint8_t x26 = 0U;
	int8_t x27 = -3;
	volatile int32_t t6 = -736986999;

    t6 = ((x25*(x26==x27))!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x31 = INT64_MIN;
	int8_t x32 = -5;
	int32_t t7 = 213;

    t7 = ((x29*(x30==x31))!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x33 = 2;
	static volatile int64_t x34 = -1LL;
	static uint16_t x35 = 1319U;
	static int64_t x36 = 92312620LL;
	int32_t t8 = 112997;

    t8 = ((x33*(x34==x35))!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x37 = INT16_MIN;
	int32_t x38 = -1;
	int8_t x39 = INT8_MIN;

    t9 = ((x37*(x38==x39))!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = 41118225LLU;
	int64_t x42 = INT64_MIN;
	int8_t x43 = INT8_MAX;
	int8_t x44 = INT8_MIN;
	int32_t t10 = 19650;

    t10 = ((x41*(x42==x43))!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = 18296380U;
	uint64_t x46 = UINT64_MAX;
	int32_t x47 = INT32_MAX;
	volatile int8_t x48 = INT8_MIN;

    t11 = ((x45*(x46==x47))!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = 7U;
	int8_t x52 = -14;
	static int32_t t12 = 135460179;

    t12 = ((x49*(x50==x51))!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MAX;
	int16_t x54 = 0;
	int8_t x55 = -1;
	int8_t x56 = INT8_MIN;
	int32_t t13 = 137606610;

    t13 = ((x53*(x54==x55))!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MIN;
	uint8_t x58 = 6U;
	static int8_t x59 = 27;
	int64_t x60 = -1LL;
	int32_t t14 = -5387800;

    t14 = ((x57*(x58==x59))!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x61 = INT8_MIN;
	uint8_t x62 = 0U;
	int32_t x63 = INT32_MIN;
	static uint16_t x64 = 4706U;
	int32_t t15 = -520559;

    t15 = ((x61*(x62==x63))!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = 1636890;
	int16_t x66 = -21;
	int64_t x67 = INT64_MAX;
	static uint64_t x68 = 6LLU;
	volatile int32_t t16 = -63562690;

    t16 = ((x65*(x66==x67))!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = UINT64_MAX;
	volatile uint8_t x70 = 0U;
	int32_t x71 = INT32_MAX;
	uint16_t x72 = UINT16_MAX;
	volatile int32_t t17 = 1;

    t17 = ((x69*(x70==x71))!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = 662893LL;
	static uint64_t x75 = UINT64_MAX;
	volatile int8_t x76 = INT8_MIN;
	volatile int32_t t18 = 134614383;

    t18 = ((x73*(x74==x75))!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x79 = INT64_MIN;
	volatile int32_t t19 = -381;

    t19 = ((x77*(x78==x79))!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = 304U;
	int32_t x82 = 891084489;
	static volatile int16_t x83 = 1331;
	volatile int32_t t20 = 5652;

    t20 = ((x81*(x82==x83))!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = INT16_MAX;
	int32_t x86 = 0;
	static uint32_t x87 = 314179U;
	int32_t t21 = -33437825;

    t21 = ((x85*(x86==x87))!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = -1;
	int64_t x90 = -1011803LL;
	uint64_t x91 = 0LLU;
	static int32_t t22 = -591527;

    t22 = ((x89*(x90==x91))!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = INT32_MIN;
	int32_t x94 = -421848;
	int64_t x95 = -8033088LL;
	int32_t x96 = INT32_MIN;

    t23 = ((x93*(x94==x95))!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint8_t x97 = 59U;
	int64_t x98 = INT64_MIN;
	int16_t x99 = INT16_MAX;
	int8_t x100 = 1;
	volatile int32_t t24 = 81957167;

    t24 = ((x97*(x98==x99))!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x101 = INT16_MIN;
	int32_t x102 = INT32_MIN;
	int64_t x103 = INT64_MIN;
	int32_t t25 = -3;

    t25 = ((x101*(x102==x103))!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MAX;
	int8_t x107 = INT8_MAX;
	int64_t x108 = -1LL;
	int32_t t26 = -552;

    t26 = ((x105*(x106==x107))!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MIN;
	int32_t x110 = INT32_MIN;
	int16_t x112 = INT16_MIN;
	int32_t t27 = 128418;

    t27 = ((x109*(x110==x111))!=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x113 = INT64_MIN;
	int16_t x115 = -7;
	static int8_t x116 = 5;
	int32_t t28 = -41433;

    t28 = ((x113*(x114==x115))!=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x118 = UINT32_MAX;
	uint16_t x119 = 2U;
	int32_t t29 = 876;

    t29 = ((x117*(x118==x119))!=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MAX;
	volatile int32_t x122 = -1;
	volatile int64_t x123 = -1LL;
	int16_t x124 = -498;
	static volatile int32_t t30 = 127162;

    t30 = ((x121*(x122==x123))!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x125 = 1;
	volatile uint16_t x126 = 373U;
	uint64_t x127 = 7LLU;
	static volatile int32_t t31 = 7;

    t31 = ((x125*(x126==x127))!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MIN;
	static int8_t x130 = INT8_MIN;
	volatile int8_t x132 = INT8_MIN;

    t32 = ((x129*(x130==x131))!=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x136 = 39U;

    t33 = ((x133*(x134==x135))!=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = INT8_MIN;
	int64_t x138 = INT64_MIN;
	int32_t x139 = INT32_MIN;
	int8_t x140 = 8;
	volatile int32_t t34 = -190;

    t34 = ((x137*(x138==x139))!=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x143 = UINT16_MAX;
	int8_t x144 = 26;

    t35 = ((x141*(x142==x143))!=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MIN;
	volatile int64_t x147 = INT64_MAX;
	int8_t x148 = INT8_MIN;
	static int32_t t36 = 0;

    t36 = ((x145*(x146==x147))!=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x149 = 3U;
	uint32_t x150 = 306423U;
	static int8_t x151 = INT8_MAX;
	volatile int16_t x152 = INT16_MIN;
	volatile int32_t t37 = -135853727;

    t37 = ((x149*(x150==x151))!=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = -1;
	volatile uint64_t x154 = UINT64_MAX;
	uint32_t x156 = UINT32_MAX;
	int32_t t38 = -28;

    t38 = ((x153*(x154==x155))!=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = 7569;
	uint64_t x158 = 77661363LLU;
	uint16_t x159 = UINT16_MAX;
	int16_t x160 = INT16_MIN;
	int32_t t39 = 276586502;

    t39 = ((x157*(x158==x159))!=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = -1LL;
	static uint8_t x162 = 1U;
	int32_t t40 = -26;

    t40 = ((x161*(x162==x163))!=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x165 = -1;
	uint64_t x167 = UINT64_MAX;
	int16_t x168 = INT16_MIN;
	volatile int32_t t41 = 46;

    t41 = ((x165*(x166==x167))!=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = 298LLU;
	int8_t x170 = INT8_MAX;
	int8_t x171 = -1;
	int32_t x172 = -1;
	static volatile int32_t t42 = 1735882;

    t42 = ((x169*(x170==x171))!=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x173 = UINT16_MAX;
	static uint32_t x174 = UINT32_MAX;
	int32_t x175 = INT32_MIN;
	uint64_t x176 = 226366491768LLU;
	static volatile int32_t t43 = 452528636;

    t43 = ((x173*(x174==x175))!=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x177 = 13779875U;
	volatile int64_t x178 = 218LL;
	static int16_t x179 = -1;
	volatile int32_t x180 = INT32_MIN;
	int32_t t44 = -6;

    t44 = ((x177*(x178==x179))!=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x181 = UINT64_MAX;
	volatile int32_t x182 = -20;
	static int32_t x183 = INT32_MIN;
	int16_t x184 = -6;
	volatile int32_t t45 = 367;

    t45 = ((x181*(x182==x183))!=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = INT16_MIN;
	volatile uint32_t x187 = UINT32_MAX;
	volatile int64_t x188 = INT64_MAX;
	int32_t t46 = -861644;

    t46 = ((x185*(x186==x187))!=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x190 = 657LL;
	int64_t x192 = 1114635235387968598LL;
	static volatile int32_t t47 = -286572448;

    t47 = ((x189*(x190==x191))!=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x193 = 27U;
	volatile int64_t x194 = -1LL;
	int64_t x195 = INT64_MIN;
	volatile int32_t x196 = 3;
	volatile int32_t t48 = 7141585;

    t48 = ((x193*(x194==x195))!=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x197 = -2261446;
	volatile int16_t x198 = INT16_MAX;
	int32_t x199 = -1;
	uint32_t x200 = UINT32_MAX;
	volatile int32_t t49 = 9203;

    t49 = ((x197*(x198==x199))!=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int64_t x201 = 0LL;
	int64_t x202 = -4492486889672473LL;
	int64_t x203 = INT64_MIN;

    t50 = ((x201*(x202==x203))!=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x207 = 114U;
	static int32_t x208 = 7031428;
	int32_t t51 = -1113522;

    t51 = ((x205*(x206==x207))!=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = INT8_MAX;
	static volatile int8_t x210 = INT8_MIN;
	uint8_t x211 = 1U;
	volatile int32_t x212 = INT32_MIN;
	int32_t t52 = 104;

    t52 = ((x209*(x210==x211))!=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MIN;
	uint8_t x214 = UINT8_MAX;
	static uint64_t x215 = UINT64_MAX;
	int16_t x216 = INT16_MIN;

    t53 = ((x213*(x214==x215))!=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x217 = INT64_MAX;
	int64_t x218 = INT64_MIN;
	int8_t x219 = INT8_MAX;
	volatile int32_t t54 = -131011083;

    t54 = ((x217*(x218==x219))!=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x222 = INT16_MIN;
	int16_t x224 = 12;
	volatile int32_t t55 = 6735;

    t55 = ((x221*(x222==x223))!=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x225 = 512299LLU;
	volatile int16_t x226 = INT16_MAX;
	int64_t x227 = INT64_MAX;
	int64_t x228 = 855074853958LL;
	int32_t t56 = -19727480;

    t56 = ((x225*(x226==x227))!=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x229 = 0U;
	int64_t x230 = -1LL;
	int32_t x231 = -13985;
	uint8_t x232 = UINT8_MAX;
	int32_t t57 = 536096;

    t57 = ((x229*(x230==x231))!=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x233 = 4U;
	static int16_t x234 = INT16_MIN;
	int8_t x236 = INT8_MAX;
	volatile int32_t t58 = 1004;

    t58 = ((x233*(x234==x235))!=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x237 = 1U;
	int64_t x238 = INT64_MAX;
	int32_t x240 = -1041573920;
	volatile int32_t t59 = -1460;

    t59 = ((x237*(x238==x239))!=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = INT32_MIN;
	int16_t x242 = 14;
	static int64_t x243 = INT64_MIN;
	uint32_t x244 = 116U;
	volatile int32_t t60 = 7895;

    t60 = ((x241*(x242==x243))!=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x245 = 5119620565LLU;
	int32_t x247 = INT32_MIN;
	int8_t x248 = -1;
	int32_t t61 = 9302;

    t61 = ((x245*(x246==x247))!=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x250 = -47;
	uint32_t x251 = UINT32_MAX;
	uint32_t x252 = 257766U;
	static volatile int32_t t62 = -3;

    t62 = ((x249*(x250==x251))!=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = -47;
	int8_t x254 = INT8_MIN;
	int64_t x255 = 5587014697902564LL;
	volatile int32_t t63 = 1917506;

    t63 = ((x253*(x254==x255))!=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = INT8_MAX;
	uint32_t x258 = 111386U;
	int32_t x259 = INT32_MAX;
	int32_t x260 = -1;
	volatile int32_t t64 = 899;

    t64 = ((x257*(x258==x259))!=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x261 = 217803182LLU;
	uint16_t x262 = 17U;
	volatile int64_t x263 = INT64_MIN;
	volatile int32_t t65 = 89;

    t65 = ((x261*(x262==x263))!=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x266 = 8;
	static uint32_t x268 = UINT32_MAX;

    t66 = ((x265*(x266==x267))!=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x270 = 975590U;
	static volatile uint8_t x272 = 28U;

    t67 = ((x269*(x270==x271))!=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x274 = -1;
	volatile int8_t x275 = INT8_MIN;
	uint16_t x276 = 1225U;
	static int32_t t68 = -97142;

    t68 = ((x273*(x274==x275))!=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = INT32_MIN;
	uint64_t x278 = UINT64_MAX;
	int32_t x279 = INT32_MIN;
	static int64_t x280 = INT64_MAX;

    t69 = ((x277*(x278==x279))!=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = 8;
	uint32_t x282 = 397503U;
	uint16_t x284 = 9U;
	static int32_t t70 = 2257524;

    t70 = ((x281*(x282==x283))!=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = 3223850LL;
	uint16_t x286 = 1U;
	int8_t x288 = INT8_MIN;
	volatile int32_t t71 = -421028516;

    t71 = ((x285*(x286==x287))!=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x289 = UINT32_MAX;
	int64_t x290 = -1LL;
	uint16_t x291 = UINT16_MAX;
	int8_t x292 = INT8_MAX;
	static volatile int32_t t72 = 296;

    t72 = ((x289*(x290==x291))!=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x293 = 888687LL;
	uint64_t x294 = 29LLU;
	static uint8_t x295 = 1U;
	int32_t x296 = -1;
	volatile int32_t t73 = -23354407;

    t73 = ((x293*(x294==x295))!=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x297 = 317799U;
	int8_t x298 = INT8_MAX;
	volatile int64_t x300 = INT64_MIN;
	static int32_t t74 = -1368;

    t74 = ((x297*(x298==x299))!=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = -19098;
	int32_t x302 = INT32_MAX;
	uint8_t x303 = UINT8_MAX;
	int64_t x304 = -1LL;
	int32_t t75 = 417505855;

    t75 = ((x301*(x302==x303))!=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x306 = 203;
	static int8_t x307 = -1;
	int64_t x308 = INT64_MIN;
	volatile int32_t t76 = -14620993;

    t76 = ((x305*(x306==x307))!=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x309 = -1;
	int32_t x310 = INT32_MIN;
	uint64_t x311 = 162273LLU;
	volatile int32_t t77 = 3749545;

    t77 = ((x309*(x310==x311))!=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x313 = 2589991802LLU;
	int64_t x314 = -1718772965052688892LL;
	int16_t x315 = INT16_MIN;
	int32_t t78 = 0;

    t78 = ((x313*(x314==x315))!=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = -1;
	int8_t x318 = 23;
	int64_t x319 = -1LL;
	uint64_t x320 = 3LLU;

    t79 = ((x317*(x318==x319))!=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = UINT32_MAX;
	int32_t x323 = -1;
	volatile int32_t t80 = -641246;

    t80 = ((x321*(x322==x323))!=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x326 = -1;
	int32_t x327 = -3639030;
	int32_t x328 = INT32_MAX;

    t81 = ((x325*(x326==x327))!=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x330 = INT8_MIN;
	volatile int32_t x331 = -121;
	int16_t x332 = -4;
	volatile int32_t t82 = 175969;

    t82 = ((x329*(x330==x331))!=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x333 = INT64_MIN;
	int32_t x335 = INT32_MIN;
	int8_t x336 = INT8_MIN;
	volatile int32_t t83 = 1574993;

    t83 = ((x333*(x334==x335))!=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x337 = 30026462288LL;
	uint64_t x338 = UINT64_MAX;
	volatile uint16_t x339 = 3468U;
	int32_t t84 = -5;

    t84 = ((x337*(x338==x339))!=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint16_t x341 = UINT16_MAX;
	int32_t x343 = -1390;
	volatile int32_t x344 = 5745870;
	volatile int32_t t85 = -30;

    t85 = ((x341*(x342==x343))!=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int16_t x345 = -1;
	static int64_t x346 = -567942723569311LL;
	uint8_t x347 = UINT8_MAX;
	volatile int32_t x348 = INT32_MIN;
	volatile int32_t t86 = 31328;

    t86 = ((x345*(x346==x347))!=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = INT64_MAX;
	int64_t x351 = INT64_MIN;
	int32_t x352 = INT32_MIN;
	volatile int32_t t87 = -212;

    t87 = ((x349*(x350==x351))!=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x354 = -62;
	uint8_t x355 = UINT8_MAX;
	int32_t t88 = 118200012;

    t88 = ((x353*(x354==x355))!=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x357 = INT16_MIN;
	volatile uint64_t x359 = 496523197820LLU;
	int8_t x360 = INT8_MAX;

    t89 = ((x357*(x358==x359))!=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x361 = 239586LLU;
	int32_t x362 = 7;
	int64_t x364 = -51587091918434640LL;

    t90 = ((x361*(x362==x363))!=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x365 = UINT16_MAX;
	uint16_t x367 = 17454U;
	static int16_t x368 = INT16_MIN;

    t91 = ((x365*(x366==x367))!=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = INT32_MAX;
	static int32_t x372 = -2016;
	volatile int32_t t92 = -932;

    t92 = ((x369*(x370==x371))!=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = -3;
	uint32_t x374 = 206558895U;
	uint32_t x375 = 49U;
	int32_t x376 = INT32_MIN;
	volatile int32_t t93 = -19255;

    t93 = ((x373*(x374==x375))!=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x378 = INT32_MIN;
	int32_t x379 = -379589053;
	int8_t x380 = INT8_MAX;
	volatile int32_t t94 = 25769;

    t94 = ((x377*(x378==x379))!=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x381 = UINT64_MAX;
	volatile int64_t x382 = -1LL;
	uint8_t x383 = 0U;
	static int32_t t95 = 846508;

    t95 = ((x381*(x382==x383))!=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = INT8_MAX;
	volatile uint16_t x387 = 6759U;
	volatile int32_t t96 = 633615473;

    t96 = ((x385*(x386==x387))!=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x389 = 876LLU;
	volatile int32_t x390 = -1;
	volatile uint8_t x391 = UINT8_MAX;
	int32_t t97 = 3562;

    t97 = ((x389*(x390==x391))!=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = INT64_MAX;
	int16_t x394 = 1;
	int64_t x395 = INT64_MAX;
	int16_t x396 = INT16_MAX;

    t98 = ((x393*(x394==x395))!=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x397 = 115180662U;
	uint64_t x399 = 26474LLU;
	int16_t x400 = 243;

    t99 = ((x397*(x398==x399))!=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint8_t x401 = 96U;
	int8_t x402 = -1;
	uint16_t x403 = 8U;
	static int8_t x404 = -1;
	volatile int32_t t100 = -73;

    t100 = ((x401*(x402==x403))!=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MIN;
	int32_t x406 = -1;
	int8_t x407 = INT8_MIN;
	int64_t x408 = INT64_MAX;
	volatile int32_t t101 = 140717965;

    t101 = ((x405*(x406==x407))!=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x409 = 323053827163LLU;
	uint32_t x410 = UINT32_MAX;
	volatile int32_t t102 = -1019;

    t102 = ((x409*(x410==x411))!=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = INT32_MIN;
	static int32_t x414 = -445061;
	int8_t x415 = -1;
	int64_t x416 = -1LL;
	int32_t t103 = -101023;

    t103 = ((x413*(x414==x415))!=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x417 = 246838376U;
	uint32_t x418 = 1370435U;
	int8_t x419 = INT8_MIN;
	volatile int32_t t104 = 30;

    t104 = ((x417*(x418==x419))!=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x421 = 0U;
	static int16_t x422 = -7;
	volatile uint16_t x423 = 3995U;
	static uint8_t x424 = 26U;
	int32_t t105 = 5;

    t105 = ((x421*(x422==x423))!=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MIN;
	int8_t x428 = 1;

    t106 = ((x425*(x426==x427))!=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x429 = 0U;
	int8_t x430 = INT8_MIN;
	uint32_t x431 = 7956U;
	static int8_t x432 = INT8_MAX;
	int32_t t107 = 537;

    t107 = ((x429*(x430==x431))!=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x433 = 2U;
	static int16_t x435 = -1;
	uint8_t x436 = 8U;
	int32_t t108 = -119322;

    t108 = ((x433*(x434==x435))!=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x437 = 138829528255506LLU;
	int16_t x438 = -1;
	volatile uint64_t x439 = 4208182604LLU;
	uint8_t x440 = UINT8_MAX;
	static volatile int32_t t109 = 5;

    t109 = ((x437*(x438==x439))!=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = 5LL;
	uint16_t x442 = UINT16_MAX;
	int64_t x443 = INT64_MAX;
	static volatile int32_t t110 = 4425594;

    t110 = ((x441*(x442==x443))!=x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x445 = INT64_MIN;
	int64_t x446 = INT64_MIN;
	int16_t x447 = INT16_MIN;
	int32_t x448 = -1;

    t111 = ((x445*(x446==x447))!=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x450 = INT32_MIN;
	int8_t x452 = INT8_MIN;

    t112 = ((x449*(x450==x451))!=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint64_t x455 = UINT64_MAX;
	volatile int32_t t113 = 5804960;

    t113 = ((x453*(x454==x455))!=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x458 = UINT64_MAX;
	volatile int8_t x459 = INT8_MIN;
	int64_t x460 = INT64_MAX;
	static volatile int32_t t114 = -82480816;

    t114 = ((x457*(x458==x459))!=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = 103;
	uint8_t x463 = 0U;
	uint32_t x464 = 368292U;
	int32_t t115 = -31090;

    t115 = ((x461*(x462==x463))!=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x465 = INT16_MIN;
	volatile int32_t x466 = INT32_MIN;
	volatile int32_t t116 = 639677;

    t116 = ((x465*(x466==x467))!=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x469 = 690437057763368LLU;
	int64_t x470 = -1LL;
	uint64_t x471 = UINT64_MAX;
	int16_t x472 = -126;
	int32_t t117 = -1;

    t117 = ((x469*(x470==x471))!=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = -1;
	volatile int8_t x474 = 0;
	volatile int64_t x475 = 92LL;
	int8_t x476 = -1;
	volatile int32_t t118 = -6636651;

    t118 = ((x473*(x474==x475))!=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x477 = -62631847320387650LL;
	uint64_t x478 = UINT64_MAX;
	int8_t x479 = -1;
	static uint8_t x480 = 1U;
	int32_t t119 = 81408556;

    t119 = ((x477*(x478==x479))!=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = INT8_MIN;
	int16_t x482 = INT16_MIN;
	uint16_t x483 = UINT16_MAX;
	uint8_t x484 = 12U;
	int32_t t120 = -9;

    t120 = ((x481*(x482==x483))!=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x485 = 6121U;
	int32_t x487 = -1;
	uint8_t x488 = 82U;

    t121 = ((x485*(x486==x487))!=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = INT64_MIN;
	int32_t x490 = INT32_MIN;
	volatile int64_t x491 = INT64_MAX;
	volatile int32_t t122 = -10098615;

    t122 = ((x489*(x490==x491))!=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x494 = -1;
	static int32_t x495 = INT32_MIN;
	int16_t x496 = INT16_MIN;
	int32_t t123 = -2048623;

    t123 = ((x493*(x494==x495))!=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = INT64_MIN;
	static int16_t x498 = 223;
	int64_t x500 = INT64_MIN;
	volatile int32_t t124 = -502477497;

    t124 = ((x497*(x498==x499))!=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x502 = INT64_MIN;
	uint16_t x503 = UINT16_MAX;
	uint16_t x504 = UINT16_MAX;
	int32_t t125 = -519;

    t125 = ((x501*(x502==x503))!=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x505 = INT64_MIN;
	uint16_t x506 = UINT16_MAX;
	volatile int32_t x508 = INT32_MIN;

    t126 = ((x505*(x506==x507))!=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x509 = 4567189U;
	volatile uint16_t x512 = UINT16_MAX;
	volatile int32_t t127 = 52928;

    t127 = ((x509*(x510==x511))!=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x513 = -3137331954560LL;
	int32_t x514 = -31;
	uint16_t x515 = 92U;
	int8_t x516 = INT8_MAX;
	volatile int32_t t128 = 0;

    t128 = ((x513*(x514==x515))!=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x517 = INT32_MIN;
	static volatile int32_t x518 = INT32_MAX;
	uint64_t x519 = 9778LLU;
	static volatile int32_t t129 = 1765;

    t129 = ((x517*(x518==x519))!=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = INT16_MAX;
	uint64_t x523 = 3382612128145LLU;
	volatile uint32_t x524 = 174U;
	int32_t t130 = 16136;

    t130 = ((x521*(x522==x523))!=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = INT64_MIN;
	static volatile int8_t x526 = 0;
	static volatile uint16_t x527 = 102U;
	volatile int32_t t131 = -380065871;

    t131 = ((x525*(x526==x527))!=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x530 = INT8_MAX;
	int64_t x532 = INT64_MIN;
	int32_t t132 = 102264;

    t132 = ((x529*(x530==x531))!=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint64_t x533 = 271623190477067790LLU;
	static uint32_t x534 = 118034U;
	volatile int64_t x535 = INT64_MAX;
	uint64_t x536 = UINT64_MAX;
	static int32_t t133 = 152664;

    t133 = ((x533*(x534==x535))!=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = 2;
	int64_t x538 = -1LL;
	int8_t x539 = INT8_MIN;
	static uint16_t x540 = UINT16_MAX;
	volatile int32_t t134 = 0;

    t134 = ((x537*(x538==x539))!=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = 1823;
	int8_t x542 = 6;
	int32_t x543 = INT32_MIN;
	uint32_t x544 = UINT32_MAX;
	volatile int32_t t135 = 12;

    t135 = ((x541*(x542==x543))!=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = INT16_MIN;
	int8_t x546 = -2;
	static int8_t x547 = INT8_MAX;
	uint32_t x548 = 9893U;
	volatile int32_t t136 = -28665017;

    t136 = ((x545*(x546==x547))!=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int8_t x549 = INT8_MIN;
	int16_t x550 = INT16_MAX;
	int64_t x551 = INT64_MIN;
	int64_t x552 = INT64_MIN;

    t137 = ((x549*(x550==x551))!=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x553 = 17;
	static int16_t x554 = INT16_MIN;
	volatile int16_t x555 = INT16_MAX;
	static int8_t x556 = -6;
	int32_t t138 = 1961663;

    t138 = ((x553*(x554==x555))!=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x557 = 394909U;
	int16_t x559 = 12;
	uint32_t x560 = UINT32_MAX;
	int32_t t139 = -1;

    t139 = ((x557*(x558==x559))!=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = 4;
	int16_t x562 = 24;
	int64_t x563 = INT64_MIN;
	int32_t t140 = -31;

    t140 = ((x561*(x562==x563))!=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x565 = INT32_MAX;
	int32_t x566 = INT32_MAX;
	static int32_t x567 = -1;
	int8_t x568 = INT8_MIN;
	static int32_t t141 = 60;

    t141 = ((x565*(x566==x567))!=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = -1LL;
	uint32_t x570 = UINT32_MAX;
	int8_t x571 = -1;
	volatile int32_t t142 = 1898534;

    t142 = ((x569*(x570==x571))!=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = -111LL;
	int64_t x574 = INT64_MAX;
	int32_t x575 = INT32_MAX;
	int32_t t143 = 56;

    t143 = ((x573*(x574==x575))!=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x577 = UINT64_MAX;
	int8_t x579 = INT8_MAX;
	volatile uint16_t x580 = 30U;

    t144 = ((x577*(x578==x579))!=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x581 = 459051000364392468LL;
	int32_t x582 = -25206;
	static int64_t x583 = -47LL;
	volatile int32_t x584 = INT32_MAX;
	int32_t t145 = -14531;

    t145 = ((x581*(x582==x583))!=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x587 = 789569U;
	volatile int32_t t146 = -2;

    t146 = ((x585*(x586==x587))!=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = INT32_MAX;
	int64_t x590 = INT64_MAX;
	uint64_t x591 = 4LLU;
	int32_t x592 = 1862;
	int32_t t147 = -47;

    t147 = ((x589*(x590==x591))!=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x594 = 1737336LL;
	uint64_t x595 = 2131557929118LLU;
	uint64_t x596 = 85826431298LLU;

    t148 = ((x593*(x594==x595))!=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = -15590855;
	int64_t x598 = INT64_MAX;
	uint64_t x600 = 455649LLU;
	int32_t t149 = 22301137;

    t149 = ((x597*(x598==x599))!=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x602 = -1;
	int32_t x603 = INT32_MIN;
	volatile int32_t t150 = -27;

    t150 = ((x601*(x602==x603))!=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x605 = 19601488U;
	volatile uint8_t x606 = UINT8_MAX;
	int16_t x607 = INT16_MIN;
	volatile int16_t x608 = 67;
	static int32_t t151 = -22868360;

    t151 = ((x605*(x606==x607))!=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = INT64_MAX;
	uint8_t x611 = 26U;
	static volatile int32_t x612 = INT32_MIN;
	int32_t t152 = -1140431;

    t152 = ((x609*(x610==x611))!=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x613 = 1839LLU;
	static uint8_t x614 = UINT8_MAX;
	static int64_t x615 = -1LL;
	int16_t x616 = INT16_MIN;
	static int32_t t153 = -1;

    t153 = ((x613*(x614==x615))!=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = INT16_MAX;
	int32_t x618 = 14245602;
	int64_t x619 = INT64_MIN;
	int16_t x620 = -1;

    t154 = ((x617*(x618==x619))!=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = -1;
	int8_t x622 = INT8_MIN;
	static int32_t x624 = INT32_MIN;
	volatile int32_t t155 = -50;

    t155 = ((x621*(x622==x623))!=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = INT16_MAX;
	int64_t x626 = -1LL;
	int64_t x627 = INT64_MIN;
	volatile int64_t x628 = -1LL;

    t156 = ((x625*(x626==x627))!=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x629 = 1U;
	int8_t x630 = -9;
	static volatile int16_t x632 = -1;
	int32_t t157 = 1023;

    t157 = ((x629*(x630==x631))!=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = INT32_MIN;
	volatile int64_t x634 = 4500185191LL;
	static volatile uint16_t x635 = 252U;
	uint16_t x636 = 1010U;
	static volatile int32_t t158 = -6630;

    t158 = ((x633*(x634==x635))!=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = 1741356170820418530LL;
	static int32_t x638 = INT32_MAX;
	int8_t x640 = 0;
	static volatile int32_t t159 = -1005281413;

    t159 = ((x637*(x638==x639))!=x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = INT16_MAX;
	static volatile int16_t x642 = 29;
	volatile int32_t x643 = 7089;
	volatile int32_t t160 = -97;

    t160 = ((x641*(x642==x643))!=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x646 = 126;
	static int64_t x647 = INT64_MIN;
	static int8_t x648 = 1;
	static volatile int32_t t161 = -212;

    t161 = ((x645*(x646==x647))!=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = INT32_MAX;
	uint16_t x650 = 3486U;
	int8_t x651 = INT8_MAX;
	volatile int32_t x652 = INT32_MAX;
	int32_t t162 = 488174;

    t162 = ((x649*(x650==x651))!=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x653 = 43614302159985364LLU;
	int64_t x654 = -1LL;
	int8_t x655 = -1;
	int32_t t163 = 13421437;

    t163 = ((x653*(x654==x655))!=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x657 = -1;
	int8_t x659 = INT8_MIN;
	volatile int8_t x660 = INT8_MIN;

    t164 = ((x657*(x658==x659))!=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x661 = 397874649011092LLU;
	volatile int8_t x663 = -1;
	static int32_t x664 = INT32_MIN;
	volatile int32_t t165 = -12160474;

    t165 = ((x661*(x662==x663))!=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = -1LL;
	int16_t x666 = INT16_MAX;
	volatile int32_t x667 = INT32_MAX;
	int64_t x668 = INT64_MIN;
	volatile int32_t t166 = -3225;

    t166 = ((x665*(x666==x667))!=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x669 = UINT16_MAX;
	int32_t x670 = INT32_MAX;
	int32_t x671 = INT32_MIN;
	int32_t x672 = 3;
	static volatile int32_t t167 = -5080;

    t167 = ((x669*(x670==x671))!=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x673 = 0U;
	uint32_t x675 = UINT32_MAX;
	static volatile int16_t x676 = -1;
	volatile int32_t t168 = -295542928;

    t168 = ((x673*(x674==x675))!=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = -1;
	int8_t x678 = -1;
	volatile int64_t x679 = INT64_MIN;

    t169 = ((x677*(x678==x679))!=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = INT8_MIN;
	uint32_t x682 = UINT32_MAX;
	int8_t x683 = -1;
	uint64_t x684 = 3880356317674513283LLU;
	volatile int32_t t170 = -15289617;

    t170 = ((x681*(x682==x683))!=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x687 = 32U;
	uint8_t x688 = 11U;
	int32_t t171 = -2068;

    t171 = ((x685*(x686==x687))!=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x689 = 886LLU;
	static uint64_t x690 = UINT64_MAX;
	volatile uint16_t x691 = 9082U;
	int32_t t172 = 2950;

    t172 = ((x689*(x690==x691))!=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = -1;
	uint8_t x694 = UINT8_MAX;
	int32_t x695 = 733;
	uint32_t x696 = 3U;
	int32_t t173 = 53003;

    t173 = ((x693*(x694==x695))!=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x699 = UINT16_MAX;
	int64_t x700 = INT64_MIN;
	int32_t t174 = 379;

    t174 = ((x697*(x698==x699))!=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = INT64_MIN;
	int16_t x702 = -1;
	uint8_t x703 = UINT8_MAX;
	uint32_t x704 = 25222U;
	int32_t t175 = -656518;

    t175 = ((x701*(x702==x703))!=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x705 = 255U;
	static volatile int16_t x706 = INT16_MAX;
	int64_t x708 = -1LL;
	volatile int32_t t176 = 14310469;

    t176 = ((x705*(x706==x707))!=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = -1;
	int32_t x710 = -1;
	volatile uint32_t x711 = 3U;
	volatile int16_t x712 = INT16_MIN;
	volatile int32_t t177 = 118;

    t177 = ((x709*(x710==x711))!=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x713 = 66U;
	int8_t x715 = -1;
	int64_t x716 = INT64_MAX;
	static volatile int32_t t178 = -645;

    t178 = ((x713*(x714==x715))!=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x717 = 30635U;
	int64_t x719 = -238877912151180LL;
	int16_t x720 = -1;
	int32_t t179 = 6946639;

    t179 = ((x717*(x718==x719))!=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint16_t x721 = 5U;
	int32_t x722 = -1;
	int8_t x723 = INT8_MAX;
	int32_t x724 = INT32_MIN;
	static int32_t t180 = -7;

    t180 = ((x721*(x722==x723))!=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x725 = 1305U;
	int16_t x727 = -893;
	uint32_t x728 = UINT32_MAX;
	static volatile int32_t t181 = 42248;

    t181 = ((x725*(x726==x727))!=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = -440309747395483968LL;
	int64_t x730 = INT64_MIN;
	static int16_t x731 = INT16_MIN;
	int64_t x732 = -1LL;
	static volatile int32_t t182 = 3;

    t182 = ((x729*(x730==x731))!=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint64_t x733 = 45663675LLU;
	int32_t x734 = -1;
	int32_t x736 = INT32_MIN;
	int32_t t183 = -1751;

    t183 = ((x733*(x734==x735))!=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = INT8_MAX;
	int64_t x739 = INT64_MIN;
	static int32_t x740 = INT32_MAX;
	volatile int32_t t184 = 52878;

    t184 = ((x737*(x738==x739))!=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint8_t x741 = 40U;
	int16_t x742 = -3;
	int32_t x744 = INT32_MIN;
	int32_t t185 = 187051657;

    t185 = ((x741*(x742==x743))!=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = -5;
	volatile int16_t x746 = INT16_MIN;
	int64_t x747 = INT64_MAX;
	static uint64_t x748 = 723103394LLU;

    t186 = ((x745*(x746==x747))!=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x751 = UINT8_MAX;
	int64_t x752 = 10378106LL;
	int32_t t187 = -12;

    t187 = ((x749*(x750==x751))!=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = INT8_MIN;
	int8_t x754 = -1;
	volatile uint8_t x755 = UINT8_MAX;
	volatile uint16_t x756 = UINT16_MAX;
	volatile int32_t t188 = -1246397;

    t188 = ((x753*(x754==x755))!=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = INT16_MIN;
	int8_t x759 = INT8_MIN;
	int16_t x760 = -28;
	int32_t t189 = -63489;

    t189 = ((x757*(x758==x759))!=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x763 = INT32_MIN;
	static uint32_t x764 = 1916407U;
	int32_t t190 = 408;

    t190 = ((x761*(x762==x763))!=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x765 = -16;
	volatile int16_t x766 = -1;
	static int32_t t191 = 1;

    t191 = ((x765*(x766==x767))!=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = -1LL;
	uint64_t x770 = UINT64_MAX;
	uint32_t x771 = 1U;
	int64_t x772 = -395153790981923LL;

    t192 = ((x769*(x770==x771))!=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x773 = INT16_MAX;
	int16_t x774 = INT16_MIN;
	static int8_t x775 = INT8_MAX;

    t193 = ((x773*(x774==x775))!=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x777 = INT64_MAX;
	static int32_t x778 = -1;
	volatile int16_t x780 = -1;
	volatile int32_t t194 = -1676518;

    t194 = ((x777*(x778==x779))!=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x782 = UINT64_MAX;
	volatile int64_t x784 = INT64_MIN;
	static int32_t t195 = 13750143;

    t195 = ((x781*(x782==x783))!=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x786 = 38258U;
	volatile int32_t x787 = -48706;
	int16_t x788 = INT16_MIN;
	volatile int32_t t196 = -29;

    t196 = ((x785*(x786==x787))!=x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x789 = INT64_MIN;
	volatile int64_t x790 = 2057210402879999277LL;
	int64_t x791 = INT64_MIN;
	volatile int32_t x792 = INT32_MAX;
	volatile int32_t t197 = 456738142;

    t197 = ((x789*(x790==x791))!=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x793 = 2;
	volatile int32_t x795 = -46;
	int8_t x796 = 5;
	volatile int32_t t198 = -16376;

    t198 = ((x793*(x794==x795))!=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = INT8_MAX;
	volatile uint32_t x798 = 13040820U;
	int32_t x800 = INT32_MIN;
	static int32_t t199 = -4982;

    t199 = ((x797*(x798==x799))!=x800);

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

