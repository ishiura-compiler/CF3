
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

int8_t x1 = INT8_MAX;
uint8_t x3 = 15U;
int32_t x6 = INT32_MAX;
int32_t x14 = 16275;
uint32_t x22 = 0U;
static uint16_t x23 = UINT16_MAX;
static uint16_t x29 = 16958U;
volatile int16_t x35 = 1;
volatile int32_t t9 = 3;
volatile uint64_t x48 = UINT64_MAX;
volatile int32_t t12 = -3921902;
int64_t x54 = INT64_MIN;
volatile int16_t x56 = -1;
static volatile int8_t x60 = 0;
int32_t t14 = 94956;
int32_t x61 = 0;
static volatile int64_t x63 = INT64_MIN;
uint32_t x69 = UINT32_MAX;
static volatile int16_t x71 = 6;
static int32_t t17 = 1407;
volatile int64_t t18 = 218LL;
volatile uint16_t x78 = 5U;
static uint32_t x79 = 1008U;
volatile int32_t t19 = -128669;
volatile int64_t t20 = -770879913661884LL;
uint16_t x85 = 5U;
uint32_t t21 = 462U;
volatile int32_t t22 = -112680915;
int32_t x99 = 3191493;
static int16_t x110 = INT16_MIN;
static int64_t x115 = -833153LL;
static int64_t x127 = -1LL;
static volatile int32_t x131 = -3668;
uint64_t x132 = UINT64_MAX;
int64_t x134 = INT64_MIN;
static int32_t x146 = INT32_MIN;
int8_t x150 = INT8_MIN;
uint16_t x154 = 859U;
int64_t x158 = 31644LL;
static volatile uint64_t x159 = 71955186586LLU;
int16_t x162 = INT16_MIN;
volatile int32_t t43 = 3819704;
int16_t x186 = 9658;
uint32_t x188 = UINT32_MAX;
int8_t x194 = INT8_MAX;
static int64_t x198 = 86958950235363LL;
uint8_t x204 = UINT8_MAX;
uint32_t x210 = UINT32_MAX;
uint8_t x212 = 1U;
uint16_t x214 = UINT16_MAX;
volatile int32_t t52 = -2515;
uint32_t x218 = 3704867U;
static uint64_t x222 = UINT64_MAX;
int16_t x223 = -13028;
volatile int64_t x234 = INT64_MAX;
volatile uint32_t t57 = 13032750U;
int32_t x238 = INT32_MIN;
uint8_t x247 = 77U;
int8_t x250 = -1;
static volatile uint32_t t62 = 270100U;
int64_t x257 = INT64_MIN;
int32_t t63 = 12002;
static volatile uint64_t x263 = UINT64_MAX;
volatile int16_t x264 = INT16_MAX;
static volatile int8_t x265 = 2;
static volatile int32_t t65 = 1;
int32_t t66 = -1122;
int16_t x274 = -4;
int32_t t68 = 5234871;
int32_t t70 = -62;
int8_t x297 = -1;
volatile int32_t t76 = 3;
int16_t x313 = INT16_MAX;
int16_t x320 = -1;
int8_t x322 = INT8_MIN;
int64_t x345 = -3408833LL;
static volatile int64_t x347 = -42116719821091264LL;
int32_t x352 = -1;
volatile int32_t t85 = -431;
static int32_t x354 = 36;
volatile int32_t x365 = -53450;
int8_t x367 = -1;
uint32_t t89 = 5007U;
static int8_t x369 = INT8_MIN;
volatile uint64_t x372 = 870040LLU;
static int32_t x378 = -1;
int32_t t95 = INT32_MIN;
int64_t x399 = -1LL;
volatile int32_t t100 = -21;
int32_t x413 = INT32_MIN;
static int32_t t101 = 33603;
static uint32_t x419 = UINT32_MAX;
volatile uint64_t t103 = 41241140583076LLU;
int16_t x425 = INT16_MAX;
int8_t x428 = 2;
uint64_t x429 = UINT64_MAX;
volatile int8_t x431 = INT8_MAX;
volatile int32_t t105 = -124762316;
uint32_t x433 = 192912U;
static int8_t x440 = -1;
static volatile int64_t x443 = INT64_MIN;
int64_t x449 = INT64_MAX;
volatile int32_t t110 = -1442;
static volatile int64_t x454 = -1LL;
int32_t t111 = 3700;
int64_t x461 = -7LL;
int64_t t114 = 991433704950818LL;
volatile int32_t t115 = -60286;
static uint16_t x481 = UINT16_MAX;
static volatile int32_t t118 = 474301003;
int64_t t119 = 2629068332LL;
int16_t x499 = 12;
int32_t t122 = -10029125;
uint64_t x513 = UINT64_MAX;
volatile uint64_t t125 = UINT64_MAX;
int64_t x517 = 1LL;
uint64_t x523 = UINT64_MAX;
static int16_t x525 = INT16_MIN;
uint32_t x532 = 111U;
int64_t x535 = -1LL;
static volatile int32_t t131 = 1464;
static uint32_t x542 = 25340U;
volatile uint8_t x559 = 1U;
uint8_t x563 = UINT8_MAX;
int16_t x568 = -1;
int8_t x571 = -11;
int8_t x576 = INT8_MIN;
static int32_t t140 = -3;
int64_t x578 = -1LL;
uint16_t x592 = 1U;
volatile int32_t t144 = 9902;
int8_t x594 = -1;
static int64_t x603 = -68701798234171LL;
volatile uint16_t x608 = UINT16_MAX;
int32_t x619 = INT32_MAX;
uint64_t x620 = 238827273252LLU;
static int32_t x621 = INT32_MIN;
volatile int32_t x624 = 1;
int8_t x631 = INT8_MAX;
static uint32_t x634 = UINT32_MAX;
uint64_t x636 = 3LLU;
static int32_t x641 = INT32_MIN;
volatile int8_t x652 = -1;
int64_t x662 = 234894LL;
volatile int64_t t163 = 1068773489LL;
static int8_t x669 = -5;
int32_t x685 = -1;
volatile uint16_t x689 = UINT16_MAX;
static volatile int8_t x695 = 7;
int32_t x701 = 3931;
static int32_t x704 = -15496;
int8_t x712 = INT8_MAX;
static int16_t x714 = -1;
uint32_t x718 = 670708054U;
int16_t x724 = -1;
int64_t x731 = INT64_MIN;
int16_t x734 = INT16_MIN;
static int32_t x735 = INT32_MIN;
uint8_t x736 = 2U;
uint8_t x737 = 1U;
static uint16_t x741 = 32471U;
int64_t x747 = -1LL;
int8_t x748 = INT8_MAX;
uint8_t x750 = 2U;
int16_t x752 = INT16_MIN;
int64_t x753 = INT64_MIN;
int16_t x758 = 3219;
volatile int8_t x761 = -58;
volatile int64_t x763 = INT64_MIN;
int8_t x770 = INT8_MIN;
int32_t t188 = -63;
static volatile int32_t t189 = 224987862;
volatile int16_t x778 = INT16_MIN;
static int32_t t191 = 37;
static int8_t x786 = 1;
static int8_t x790 = INT8_MIN;
int32_t t193 = 31499;
volatile int32_t t194 = 73610082;
static int32_t x799 = INT32_MAX;
uint16_t x800 = 0U;
volatile int32_t t195 = -1;
static uint32_t x806 = 22064U;
int8_t x812 = INT8_MIN;
int32_t t198 = 80472472;
uint16_t x813 = 3U;


void f0(void) {
    	volatile uint8_t x2 = UINT8_MAX;
	int64_t x4 = INT64_MIN;
	static volatile int64_t t0 = INT64_MIN;

    t0 = (((x1<=x2)>x3)+x4);

    if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x5 = UINT64_MAX;
	static uint64_t x7 = UINT64_MAX;
	uint16_t x8 = 3U;
	volatile int32_t t1 = -3;

    t1 = (((x5<=x6)>x7)+x8);

    if (t1 != 3) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	int16_t x10 = -1;
	int64_t x11 = -1LL;
	uint16_t x12 = UINT16_MAX;
	int32_t t2 = -13317;

    t2 = (((x9<=x10)>x11)+x12);

    if (t2 != 65536) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 1043U;
	static int16_t x15 = INT16_MAX;
	int8_t x16 = 14;
	int32_t t3 = -2625;

    t3 = (((x13<=x14)>x15)+x16);

    if (t3 != 14) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = 9;
	int64_t x18 = INT64_MIN;
	static int64_t x19 = 21400LL;
	int32_t x20 = INT32_MIN;
	int32_t t4 = INT32_MIN;

    t4 = (((x17<=x18)>x19)+x20);

    if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 2985665U;
	volatile int64_t x24 = INT64_MIN;
	int64_t t5 = INT64_MIN;

    t5 = (((x21<=x22)>x23)+x24);

    if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = UINT64_MAX;
	int32_t x26 = INT32_MIN;
	uint32_t x27 = 3U;
	uint16_t x28 = UINT16_MAX;
	volatile int32_t t6 = -96790845;

    t6 = (((x25<=x26)>x27)+x28);

    if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x30 = 5U;
	int16_t x31 = 17;
	int64_t x32 = 23364290802565LL;
	int64_t t7 = -125348672794LL;

    t7 = (((x29<=x30)>x31)+x32);

    if (t7 != 23364290802565LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = -1;
	static int64_t x34 = INT64_MIN;
	volatile uint32_t x36 = UINT32_MAX;
	volatile uint32_t t8 = UINT32_MAX;

    t8 = (((x33<=x34)>x35)+x36);

    if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = 650;
	int32_t x38 = -1;
	uint64_t x39 = 95LLU;
	int16_t x40 = 106;

    t9 = (((x37<=x38)>x39)+x40);

    if (t9 != 106) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x41 = INT64_MIN;
	int64_t x42 = 299643939655879734LL;
	int16_t x43 = -1;
	static int64_t x44 = INT64_MIN;
	volatile int64_t t10 = -54175165LL;

    t10 = (((x41<=x42)>x43)+x44);

    if (t10 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x45 = -1LL;
	int8_t x46 = -4;
	int64_t x47 = INT64_MAX;
	volatile uint64_t t11 = UINT64_MAX;

    t11 = (((x45<=x46)>x47)+x48);

    if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = -42612;
	uint16_t x50 = 14676U;
	int32_t x51 = INT32_MAX;
	int16_t x52 = INT16_MAX;

    t12 = (((x49<=x50)>x51)+x52);

    if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MAX;
	uint64_t x55 = 32856LLU;
	static volatile int32_t t13 = -3;

    t13 = (((x53<=x54)>x55)+x56);

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = -1;
	uint64_t x58 = 1260406968619825779LLU;
	volatile uint64_t x59 = UINT64_MAX;

    t14 = (((x57<=x58)>x59)+x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x62 = -1;
	int16_t x64 = -1;
	int32_t t15 = 96027111;

    t15 = (((x61<=x62)>x63)+x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = 0;
	int64_t x66 = INT64_MAX;
	volatile int16_t x67 = 11;
	volatile uint32_t x68 = UINT32_MAX;
	volatile uint32_t t16 = UINT32_MAX;

    t16 = (((x65<=x66)>x67)+x68);

    if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x70 = 17U;
	uint8_t x72 = 78U;

    t17 = (((x69<=x70)>x71)+x72);

    if (t17 != 78) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = UINT32_MAX;
	static uint32_t x74 = 0U;
	static int8_t x75 = -1;
	int64_t x76 = -788712592863LL;

    t18 = (((x73<=x74)>x75)+x76);

    if (t18 != -788712592862LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MAX;
	uint8_t x80 = UINT8_MAX;

    t19 = (((x77<=x78)>x79)+x80);

    if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = 24;
	volatile int64_t x82 = 3873601591662LL;
	int8_t x83 = 1;
	int64_t x84 = -112LL;

    t20 = (((x81<=x82)>x83)+x84);

    if (t20 != -112LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x86 = INT16_MIN;
	static volatile uint64_t x87 = UINT64_MAX;
	uint32_t x88 = 19U;

    t21 = (((x85<=x86)>x87)+x88);

    if (t21 != 19U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 62U;
	volatile uint64_t x90 = UINT64_MAX;
	uint64_t x91 = 195189287089997560LLU;
	int32_t x92 = -966788916;

    t22 = (((x89<=x90)>x91)+x92);

    if (t22 != -966788916) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x93 = -1;
	int16_t x94 = INT16_MAX;
	uint64_t x95 = 26012374448223LLU;
	int64_t x96 = INT64_MIN;
	int64_t t23 = INT64_MIN;

    t23 = (((x93<=x94)>x95)+x96);

    if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x97 = -1;
	int64_t x98 = -1LL;
	int8_t x100 = INT8_MIN;
	int32_t t24 = 1;

    t24 = (((x97<=x98)>x99)+x100);

    if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x101 = 55862847905408LL;
	uint8_t x102 = 0U;
	uint64_t x103 = 222027LLU;
	static volatile int64_t x104 = INT64_MIN;
	int64_t t25 = INT64_MIN;

    t25 = (((x101<=x102)>x103)+x104);

    if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x105 = 33U;
	volatile uint64_t x106 = 4320237929459LLU;
	int64_t x107 = 4508756712LL;
	volatile uint8_t x108 = 27U;
	volatile int32_t t26 = -125243240;

    t26 = (((x105<=x106)>x107)+x108);

    if (t26 != 27) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MIN;
	uint32_t x111 = UINT32_MAX;
	int64_t x112 = -3619129LL;
	volatile int64_t t27 = 5845LL;

    t27 = (((x109<=x110)>x111)+x112);

    if (t27 != -3619129LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = 15LL;
	uint64_t x114 = 509LLU;
	volatile int64_t x116 = 3776LL;
	int64_t t28 = 17139267977775LL;

    t28 = (((x113<=x114)>x115)+x116);

    if (t28 != 3777LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint8_t x117 = UINT8_MAX;
	int32_t x118 = -1;
	int64_t x119 = INT64_MIN;
	uint32_t x120 = 1432U;
	volatile uint32_t t29 = 866499337U;

    t29 = (((x117<=x118)>x119)+x120);

    if (t29 != 1433U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x121 = 28U;
	int8_t x122 = INT8_MIN;
	uint8_t x123 = 1U;
	volatile int16_t x124 = INT16_MIN;
	int32_t t30 = -1;

    t30 = (((x121<=x122)>x123)+x124);

    if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x125 = UINT32_MAX;
	int32_t x126 = -1;
	int8_t x128 = -1;
	int32_t t31 = -162;

    t31 = (((x125<=x126)>x127)+x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x129 = INT32_MIN;
	volatile int16_t x130 = INT16_MIN;
	uint64_t t32 = 21LLU;

    t32 = (((x129<=x130)>x131)+x132);

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x133 = -8;
	volatile int8_t x135 = INT8_MAX;
	static uint32_t x136 = UINT32_MAX;
	uint32_t t33 = UINT32_MAX;

    t33 = (((x133<=x134)>x135)+x136);

    if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = -1;
	static uint16_t x138 = 25981U;
	static uint32_t x139 = UINT32_MAX;
	int64_t x140 = 47955LL;
	static int64_t t34 = -19145455017259LL;

    t34 = (((x137<=x138)>x139)+x140);

    if (t34 != 47955LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MAX;
	int64_t x142 = INT64_MAX;
	volatile int64_t x143 = INT64_MIN;
	int16_t x144 = 27;
	int32_t t35 = 106449;

    t35 = (((x141<=x142)>x143)+x144);

    if (t35 != 28) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x145 = 7275130510942051LL;
	volatile uint64_t x147 = UINT64_MAX;
	static uint16_t x148 = 12087U;
	int32_t t36 = -4343;

    t36 = (((x145<=x146)>x147)+x148);

    if (t36 != 12087) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x149 = 38;
	uint8_t x151 = 18U;
	uint8_t x152 = UINT8_MAX;
	static volatile int32_t t37 = -516297;

    t37 = (((x149<=x150)>x151)+x152);

    if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint32_t x153 = 589243644U;
	int8_t x155 = 25;
	int64_t x156 = INT64_MAX;
	volatile int64_t t38 = INT64_MAX;

    t38 = (((x153<=x154)>x155)+x156);

    if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = 13073LL;
	volatile int8_t x160 = 21;
	static volatile int32_t t39 = 512;

    t39 = (((x157<=x158)>x159)+x160);

    if (t39 != 21) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x161 = 0U;
	uint8_t x163 = UINT8_MAX;
	static int64_t x164 = INT64_MIN;
	volatile int64_t t40 = INT64_MIN;

    t40 = (((x161<=x162)>x163)+x164);

    if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x165 = INT64_MIN;
	uint8_t x166 = 10U;
	int32_t x167 = -3;
	volatile int8_t x168 = -1;
	int32_t t41 = 65204;

    t41 = (((x165<=x166)>x167)+x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = INT8_MIN;
	uint32_t x170 = UINT32_MAX;
	int8_t x171 = INT8_MIN;
	static int32_t x172 = -120709186;
	volatile int32_t t42 = 29;

    t42 = (((x169<=x170)>x171)+x172);

    if (t42 != -120709185) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x173 = UINT16_MAX;
	int16_t x174 = INT16_MIN;
	int8_t x175 = INT8_MAX;
	static int16_t x176 = INT16_MAX;

    t43 = (((x173<=x174)>x175)+x176);

    if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x177 = 22U;
	volatile int64_t x178 = INT64_MIN;
	int64_t x179 = INT64_MAX;
	uint16_t x180 = 7021U;
	volatile int32_t t44 = 797;

    t44 = (((x177<=x178)>x179)+x180);

    if (t44 != 7021) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x181 = 218LLU;
	int16_t x182 = 6;
	uint8_t x183 = 10U;
	int16_t x184 = -1;
	volatile int32_t t45 = 193041;

    t45 = (((x181<=x182)>x183)+x184);

    if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x185 = 97390LLU;
	static volatile int32_t x187 = INT32_MIN;
	uint32_t t46 = 0U;

    t46 = (((x185<=x186)>x187)+x188);

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x189 = INT32_MIN;
	uint32_t x190 = 1489U;
	int16_t x191 = -1;
	int32_t x192 = 1834490;
	int32_t t47 = 5851;

    t47 = (((x189<=x190)>x191)+x192);

    if (t47 != 1834491) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x193 = 1203U;
	volatile int32_t x195 = -1;
	volatile int32_t x196 = -1;
	volatile int32_t t48 = 1147305;

    t48 = (((x193<=x194)>x195)+x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = -1;
	int8_t x199 = -1;
	static uint16_t x200 = UINT16_MAX;
	volatile int32_t t49 = -2906575;

    t49 = (((x197<=x198)>x199)+x200);

    if (t49 != 65536) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = 8602;
	volatile int32_t x202 = -1;
	volatile int8_t x203 = -1;
	volatile int32_t t50 = 12474;

    t50 = (((x201<=x202)>x203)+x204);

    if (t50 != 256) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x209 = INT8_MAX;
	int16_t x211 = -1;
	int32_t t51 = 99054259;

    t51 = (((x209<=x210)>x211)+x212);

    if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x213 = INT64_MIN;
	volatile int64_t x215 = -1431031LL;
	volatile int8_t x216 = INT8_MIN;

    t52 = (((x213<=x214)>x215)+x216);

    if (t52 != -127) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x217 = INT32_MIN;
	static int64_t x219 = INT64_MIN;
	int8_t x220 = INT8_MAX;
	int32_t t53 = -1066205216;

    t53 = (((x217<=x218)>x219)+x220);

    if (t53 != 128) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x221 = INT16_MIN;
	uint64_t x224 = 6790895866435LLU;
	uint64_t t54 = 64149498474578LLU;

    t54 = (((x221<=x222)>x223)+x224);

    if (t54 != 6790895866436LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint64_t x225 = 123335473LLU;
	volatile int64_t x226 = -192853LL;
	static volatile uint16_t x227 = 2853U;
	int16_t x228 = INT16_MIN;
	volatile int32_t t55 = 1662234;

    t55 = (((x225<=x226)>x227)+x228);

    if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x229 = 0;
	volatile uint8_t x230 = 83U;
	uint32_t x231 = 3U;
	uint64_t x232 = 1321LLU;
	static uint64_t t56 = 8656075339861LLU;

    t56 = (((x229<=x230)>x231)+x232);

    if (t56 != 1321LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x233 = UINT64_MAX;
	int16_t x235 = -16253;
	uint32_t x236 = 28343726U;

    t57 = (((x233<=x234)>x235)+x236);

    if (t57 != 28343727U) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x237 = -1980380356691621454LL;
	static int8_t x239 = 22;
	int8_t x240 = INT8_MIN;
	static int32_t t58 = -1;

    t58 = (((x237<=x238)>x239)+x240);

    if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x241 = INT64_MIN;
	volatile int16_t x242 = INT16_MIN;
	static int8_t x243 = -3;
	volatile uint16_t x244 = UINT16_MAX;
	volatile int32_t t59 = 3620580;

    t59 = (((x241<=x242)>x243)+x244);

    if (t59 != 65536) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x245 = 132076003470792414LLU;
	int16_t x246 = 125;
	uint64_t x248 = 50LLU;
	volatile uint64_t t60 = 101774LLU;

    t60 = (((x245<=x246)>x247)+x248);

    if (t60 != 50LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x249 = -1;
	uint16_t x251 = 92U;
	int8_t x252 = 22;
	volatile int32_t t61 = -1;

    t61 = (((x249<=x250)>x251)+x252);

    if (t61 != 22) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x253 = 1;
	uint32_t x254 = UINT32_MAX;
	static volatile int8_t x255 = INT8_MIN;
	static volatile uint32_t x256 = 25524U;

    t62 = (((x253<=x254)>x255)+x256);

    if (t62 != 25525U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x258 = 0U;
	int16_t x259 = INT16_MAX;
	uint16_t x260 = 5897U;

    t63 = (((x257<=x258)>x259)+x260);

    if (t63 != 5897) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint64_t x261 = 1038LLU;
	uint64_t x262 = 525LLU;
	static int32_t t64 = 60284824;

    t64 = (((x261<=x262)>x263)+x264);

    if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x266 = -1;
	volatile uint32_t x267 = 3151U;
	int8_t x268 = INT8_MIN;

    t65 = (((x265<=x266)>x267)+x268);

    if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x269 = 36;
	int16_t x270 = 9;
	int16_t x271 = 38;
	int32_t x272 = -560;

    t66 = (((x269<=x270)>x271)+x272);

    if (t66 != -560) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x273 = 140271LLU;
	volatile int8_t x275 = -1;
	uint32_t x276 = UINT32_MAX;
	uint32_t t67 = 164U;

    t67 = (((x273<=x274)>x275)+x276);

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x277 = 429518552682519324LLU;
	static uint16_t x278 = 932U;
	int32_t x279 = INT32_MAX;
	uint16_t x280 = 1U;

    t68 = (((x277<=x278)>x279)+x280);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x281 = -1;
	volatile int16_t x282 = -1379;
	int32_t x283 = INT32_MIN;
	int64_t x284 = INT64_MIN;
	volatile int64_t t69 = 4LL;

    t69 = (((x281<=x282)>x283)+x284);

    if (t69 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x285 = INT32_MIN;
	int16_t x286 = INT16_MIN;
	volatile uint32_t x287 = 3770U;
	int32_t x288 = 2622;

    t70 = (((x285<=x286)>x287)+x288);

    if (t70 != 2622) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x289 = -5;
	volatile int8_t x290 = 0;
	static int8_t x291 = INT8_MAX;
	int32_t x292 = INT32_MIN;
	static int32_t t71 = INT32_MIN;

    t71 = (((x289<=x290)>x291)+x292);

    if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x293 = UINT32_MAX;
	int64_t x294 = -1LL;
	int64_t x295 = INT64_MIN;
	static int64_t x296 = -1LL;
	int64_t t72 = -873LL;

    t72 = (((x293<=x294)>x295)+x296);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x298 = INT8_MIN;
	static int32_t x299 = INT32_MIN;
	int64_t x300 = INT64_MIN;
	volatile int64_t t73 = 126798269618629139LL;

    t73 = (((x297<=x298)>x299)+x300);

    if (t73 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int16_t x301 = INT16_MAX;
	int64_t x302 = INT64_MAX;
	int64_t x303 = -1LL;
	static int64_t x304 = INT64_MIN;
	volatile int64_t t74 = 18513773991LL;

    t74 = (((x301<=x302)>x303)+x304);

    if (t74 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x305 = -7;
	uint8_t x306 = 1U;
	static int64_t x307 = 1LL;
	uint32_t x308 = 27993773U;
	volatile uint32_t t75 = 98680648U;

    t75 = (((x305<=x306)>x307)+x308);

    if (t75 != 27993773U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x309 = -1LL;
	volatile int64_t x310 = INT64_MIN;
	volatile uint64_t x311 = UINT64_MAX;
	volatile int8_t x312 = INT8_MIN;

    t76 = (((x309<=x310)>x311)+x312);

    if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x314 = 40305142674619LLU;
	int16_t x315 = INT16_MIN;
	static volatile int64_t x316 = -970769LL;
	volatile int64_t t77 = -775646445826899461LL;

    t77 = (((x313<=x314)>x315)+x316);

    if (t77 != -970768LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x317 = 10775369277LLU;
	static int8_t x318 = INT8_MAX;
	static volatile uint8_t x319 = UINT8_MAX;
	int32_t t78 = -66408531;

    t78 = (((x317<=x318)>x319)+x320);

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint16_t x321 = UINT16_MAX;
	volatile uint64_t x323 = 1396744LLU;
	uint8_t x324 = UINT8_MAX;
	int32_t t79 = -78;

    t79 = (((x321<=x322)>x323)+x324);

    if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint32_t x325 = 0U;
	static int16_t x326 = 10588;
	int16_t x327 = INT16_MIN;
	int32_t x328 = -1;
	volatile int32_t t80 = -180;

    t80 = (((x325<=x326)>x327)+x328);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x329 = 7689884035818LLU;
	int8_t x330 = -1;
	int32_t x331 = 12853564;
	int8_t x332 = INT8_MIN;
	volatile int32_t t81 = 51525325;

    t81 = (((x329<=x330)>x331)+x332);

    if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x333 = INT16_MAX;
	int32_t x334 = INT32_MIN;
	volatile uint32_t x335 = 0U;
	int16_t x336 = -1;
	volatile int32_t t82 = 126809368;

    t82 = (((x333<=x334)>x335)+x336);

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x337 = INT64_MIN;
	int64_t x338 = INT64_MIN;
	uint64_t x339 = 2106727691569314LLU;
	uint16_t x340 = 7624U;
	int32_t t83 = -1;

    t83 = (((x337<=x338)>x339)+x340);

    if (t83 != 7624) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x346 = INT16_MIN;
	int32_t x348 = -1025;
	volatile int32_t t84 = 88644;

    t84 = (((x345<=x346)>x347)+x348);

    if (t84 != -1024) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x349 = UINT16_MAX;
	static uint32_t x350 = UINT32_MAX;
	int64_t x351 = INT64_MAX;

    t85 = (((x349<=x350)>x351)+x352);

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint64_t x353 = 33361042LLU;
	int32_t x355 = INT32_MIN;
	int64_t x356 = 425213786681LL;
	volatile int64_t t86 = 1LL;

    t86 = (((x353<=x354)>x355)+x356);

    if (t86 != 425213786682LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x357 = -1;
	static int64_t x358 = INT64_MIN;
	int32_t x359 = INT32_MIN;
	int16_t x360 = INT16_MIN;
	volatile int32_t t87 = -189;

    t87 = (((x357<=x358)>x359)+x360);

    if (t87 != -32767) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x361 = 43U;
	uint64_t x362 = UINT64_MAX;
	static uint32_t x363 = 322045650U;
	static volatile int16_t x364 = 60;
	static int32_t t88 = 625130204;

    t88 = (((x361<=x362)>x363)+x364);

    if (t88 != 60) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x366 = 50177886572LLU;
	static volatile uint32_t x368 = 489664499U;

    t89 = (((x365<=x366)>x367)+x368);

    if (t89 != 489664500U) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint32_t x370 = 2006133257U;
	int32_t x371 = INT32_MIN;
	volatile uint64_t t90 = 9533028697774LLU;

    t90 = (((x369<=x370)>x371)+x372);

    if (t90 != 870041LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x373 = 30;
	int8_t x374 = INT8_MIN;
	uint64_t x375 = UINT64_MAX;
	int32_t x376 = -1;
	volatile int32_t t91 = 254242456;

    t91 = (((x373<=x374)>x375)+x376);

    if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x377 = INT8_MIN;
	int16_t x379 = -1014;
	static int8_t x380 = -1;
	volatile int32_t t92 = -1157;

    t92 = (((x377<=x378)>x379)+x380);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x381 = -41;
	uint32_t x382 = UINT32_MAX;
	int16_t x383 = -1;
	volatile int8_t x384 = INT8_MIN;
	volatile int32_t t93 = -861;

    t93 = (((x381<=x382)>x383)+x384);

    if (t93 != -127) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x385 = -3566638278334LL;
	int16_t x386 = INT16_MIN;
	int16_t x387 = INT16_MIN;
	uint64_t x388 = UINT64_MAX;
	uint64_t t94 = 24857022486605LLU;

    t94 = (((x385<=x386)>x387)+x388);

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x389 = -93;
	int32_t x390 = 61693;
	uint32_t x391 = UINT32_MAX;
	int32_t x392 = INT32_MIN;

    t95 = (((x389<=x390)>x391)+x392);

    if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x393 = -2;
	uint8_t x394 = 100U;
	static uint16_t x395 = 617U;
	static int16_t x396 = 89;
	int32_t t96 = -491937464;

    t96 = (((x393<=x394)>x395)+x396);

    if (t96 != 89) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int8_t x397 = INT8_MAX;
	uint8_t x398 = 29U;
	volatile int64_t x400 = -4263000872688992LL;
	static volatile int64_t t97 = -103387503LL;

    t97 = (((x397<=x398)>x399)+x400);

    if (t97 != -4263000872688991LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x401 = 2U;
	uint8_t x402 = 96U;
	int32_t x403 = -1;
	int8_t x404 = -1;
	volatile int32_t t98 = -2309307;

    t98 = (((x401<=x402)>x403)+x404);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x405 = 89U;
	int32_t x406 = INT32_MIN;
	int64_t x407 = 1201703461LL;
	uint32_t x408 = 94456U;
	uint32_t t99 = 4216096U;

    t99 = (((x405<=x406)>x407)+x408);

    if (t99 != 94456U) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x409 = 1;
	volatile int32_t x410 = INT32_MAX;
	uint32_t x411 = 6079U;
	volatile uint16_t x412 = 3780U;

    t100 = (((x409<=x410)>x411)+x412);

    if (t100 != 3780) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x414 = 368834U;
	int16_t x415 = 56;
	int16_t x416 = -1;

    t101 = (((x413<=x414)>x415)+x416);

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x417 = INT64_MIN;
	int8_t x418 = INT8_MIN;
	int8_t x420 = INT8_MIN;
	int32_t t102 = 30;

    t102 = (((x417<=x418)>x419)+x420);

    if (t102 != -128) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x421 = UINT64_MAX;
	int16_t x422 = INT16_MIN;
	int64_t x423 = -1LL;
	static uint64_t x424 = 34406511LLU;

    t103 = (((x421<=x422)>x423)+x424);

    if (t103 != 34406512LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x426 = 127U;
	int8_t x427 = 3;
	int32_t t104 = -475802;

    t104 = (((x425<=x426)>x427)+x428);

    if (t104 != 2) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x430 = INT64_MIN;
	int16_t x432 = 7;

    t105 = (((x429<=x430)>x431)+x432);

    if (t105 != 7) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x434 = -2;
	uint32_t x435 = 63U;
	uint64_t x436 = 463267532LLU;
	static volatile uint64_t t106 = 23467LLU;

    t106 = (((x433<=x434)>x435)+x436);

    if (t106 != 463267532LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x437 = INT64_MIN;
	int32_t x438 = INT32_MIN;
	int32_t x439 = INT32_MIN;
	volatile int32_t t107 = -51;

    t107 = (((x437<=x438)>x439)+x440);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x441 = -1;
	volatile uint64_t x442 = 215313932637696LLU;
	uint32_t x444 = 127U;
	volatile uint32_t t108 = 1U;

    t108 = (((x441<=x442)>x443)+x444);

    if (t108 != 128U) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x445 = INT8_MAX;
	uint32_t x446 = 45U;
	volatile uint32_t x447 = 53047047U;
	uint8_t x448 = UINT8_MAX;
	volatile int32_t t109 = -21830825;

    t109 = (((x445<=x446)>x447)+x448);

    if (t109 != 255) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x450 = -1;
	int16_t x451 = INT16_MIN;
	volatile uint16_t x452 = 2U;

    t110 = (((x449<=x450)>x451)+x452);

    if (t110 != 3) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x453 = 20185083381859621LLU;
	uint32_t x455 = 1281863396U;
	uint8_t x456 = 15U;

    t111 = (((x453<=x454)>x455)+x456);

    if (t111 != 15) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x462 = -1;
	uint8_t x463 = 2U;
	int8_t x464 = INT8_MAX;
	int32_t t112 = -7038;

    t112 = (((x461<=x462)>x463)+x464);

    if (t112 != 127) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x465 = INT32_MAX;
	int32_t x466 = -181620;
	volatile uint64_t x467 = 17122799LLU;
	int8_t x468 = INT8_MIN;
	volatile int32_t t113 = -1456;

    t113 = (((x465<=x466)>x467)+x468);

    if (t113 != -128) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x469 = 5630301117LLU;
	int8_t x470 = -3;
	int16_t x471 = -1;
	int64_t x472 = -113904138710907707LL;

    t114 = (((x469<=x470)>x471)+x472);

    if (t114 != -113904138710907706LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x473 = 2639151LL;
	int64_t x474 = INT64_MIN;
	static volatile int16_t x475 = -1;
	volatile uint16_t x476 = 0U;

    t115 = (((x473<=x474)>x475)+x476);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint64_t x477 = UINT64_MAX;
	int8_t x478 = 1;
	volatile int8_t x479 = -1;
	volatile uint32_t x480 = 171401U;
	volatile uint32_t t116 = 320969U;

    t116 = (((x477<=x478)>x479)+x480);

    if (t116 != 171402U) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x482 = -356165279LL;
	int64_t x483 = -1LL;
	int8_t x484 = INT8_MAX;
	int32_t t117 = 231;

    t117 = (((x481<=x482)>x483)+x484);

    if (t117 != 128) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x485 = 3U;
	int32_t x486 = INT32_MIN;
	int16_t x487 = 976;
	int32_t x488 = -1399954;

    t118 = (((x485<=x486)>x487)+x488);

    if (t118 != -1399954) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x489 = -1;
	uint8_t x490 = UINT8_MAX;
	static int64_t x491 = INT64_MIN;
	static int64_t x492 = INT64_MIN;

    t119 = (((x489<=x490)>x491)+x492);

    if (t119 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x493 = 1482584U;
	int64_t x494 = -849102LL;
	volatile int64_t x495 = INT64_MIN;
	int16_t x496 = -1;
	volatile int32_t t120 = -1;

    t120 = (((x493<=x494)>x495)+x496);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x497 = INT8_MIN;
	static int64_t x498 = -56229LL;
	int16_t x500 = INT16_MIN;
	int32_t t121 = 350;

    t121 = (((x497<=x498)>x499)+x500);

    if (t121 != -32768) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x501 = -1;
	static volatile uint16_t x502 = UINT16_MAX;
	int64_t x503 = -1LL;
	static int8_t x504 = INT8_MAX;

    t122 = (((x501<=x502)>x503)+x504);

    if (t122 != 128) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x505 = -1971;
	int16_t x506 = -10;
	int32_t x507 = INT32_MAX;
	uint32_t x508 = 90673399U;
	uint32_t t123 = 190U;

    t123 = (((x505<=x506)>x507)+x508);

    if (t123 != 90673399U) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x509 = -1;
	int32_t x510 = -707782;
	int8_t x511 = -3;
	int8_t x512 = -1;
	int32_t t124 = -17619898;

    t124 = (((x509<=x510)>x511)+x512);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x514 = INT64_MIN;
	uint64_t x515 = 19551257871037107LLU;
	static uint64_t x516 = UINT64_MAX;

    t125 = (((x513<=x514)>x515)+x516);

    if (t125 != UINT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x518 = 44647386807853998LLU;
	uint32_t x519 = 166U;
	volatile uint64_t x520 = UINT64_MAX;
	uint64_t t126 = UINT64_MAX;

    t126 = (((x517<=x518)>x519)+x520);

    if (t126 != UINT64_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x521 = 27U;
	int32_t x522 = INT32_MAX;
	int64_t x524 = INT64_MAX;
	static volatile int64_t t127 = INT64_MAX;

    t127 = (((x521<=x522)>x523)+x524);

    if (t127 != INT64_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x526 = 10;
	uint16_t x527 = 8U;
	static volatile int16_t x528 = 28;
	volatile int32_t t128 = 196801;

    t128 = (((x525<=x526)>x527)+x528);

    if (t128 != 28) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x529 = UINT16_MAX;
	volatile int16_t x530 = INT16_MAX;
	volatile uint32_t x531 = UINT32_MAX;
	volatile uint32_t t129 = 57U;

    t129 = (((x529<=x530)>x531)+x532);

    if (t129 != 111U) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int16_t x533 = -794;
	static volatile int32_t x534 = INT32_MIN;
	int16_t x536 = INT16_MIN;
	volatile int32_t t130 = 0;

    t130 = (((x533<=x534)>x535)+x536);

    if (t130 != -32767) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x537 = INT16_MAX;
	volatile uint64_t x538 = UINT64_MAX;
	int64_t x539 = INT64_MIN;
	static uint8_t x540 = 15U;

    t131 = (((x537<=x538)>x539)+x540);

    if (t131 != 16) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x541 = 241U;
	volatile uint64_t x543 = 2049453436005LLU;
	static int16_t x544 = -58;
	static volatile int32_t t132 = -27;

    t132 = (((x541<=x542)>x543)+x544);

    if (t132 != -58) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x545 = INT8_MAX;
	static int64_t x546 = INT64_MAX;
	volatile int32_t x547 = -770556043;
	uint16_t x548 = 252U;
	int32_t t133 = -676428539;

    t133 = (((x545<=x546)>x547)+x548);

    if (t133 != 253) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint8_t x549 = 6U;
	uint32_t x550 = UINT32_MAX;
	int8_t x551 = INT8_MAX;
	int16_t x552 = -82;
	static int32_t t134 = 192252819;

    t134 = (((x549<=x550)>x551)+x552);

    if (t134 != -82) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x553 = INT16_MAX;
	volatile int8_t x554 = INT8_MIN;
	int64_t x555 = -1LL;
	int8_t x556 = INT8_MIN;
	static int32_t t135 = -66561515;

    t135 = (((x553<=x554)>x555)+x556);

    if (t135 != -127) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x557 = -10;
	volatile uint64_t x558 = 535933180539228LLU;
	int16_t x560 = -28;
	int32_t t136 = -3937361;

    t136 = (((x557<=x558)>x559)+x560);

    if (t136 != -28) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x561 = INT16_MIN;
	int16_t x562 = -1;
	int32_t x564 = -1;
	int32_t t137 = -7341230;

    t137 = (((x561<=x562)>x563)+x564);

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x565 = 452U;
	volatile uint8_t x566 = 66U;
	uint8_t x567 = 5U;
	int32_t t138 = -76802561;

    t138 = (((x565<=x566)>x567)+x568);

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int32_t x569 = 204281604;
	uint8_t x570 = 7U;
	uint16_t x572 = UINT16_MAX;
	int32_t t139 = -33107467;

    t139 = (((x569<=x570)>x571)+x572);

    if (t139 != 65536) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x573 = UINT64_MAX;
	volatile uint8_t x574 = 1U;
	volatile int64_t x575 = 16034501638438LL;

    t140 = (((x573<=x574)>x575)+x576);

    if (t140 != -128) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x577 = UINT8_MAX;
	uint8_t x579 = 58U;
	uint16_t x580 = 1U;
	volatile int32_t t141 = -1040882;

    t141 = (((x577<=x578)>x579)+x580);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x581 = -15;
	volatile int8_t x582 = -1;
	volatile int32_t x583 = 26721;
	uint32_t x584 = 12790812U;
	uint32_t t142 = 5951U;

    t142 = (((x581<=x582)>x583)+x584);

    if (t142 != 12790812U) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int16_t x585 = 58;
	uint64_t x586 = UINT64_MAX;
	int64_t x587 = INT64_MIN;
	volatile int8_t x588 = -1;
	static volatile int32_t t143 = -7;

    t143 = (((x585<=x586)>x587)+x588);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x589 = 38;
	static int16_t x590 = 474;
	uint64_t x591 = 1857LLU;

    t144 = (((x589<=x590)>x591)+x592);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x593 = INT32_MIN;
	int32_t x595 = INT32_MAX;
	static int32_t x596 = -1;
	volatile int32_t t145 = -2553;

    t145 = (((x593<=x594)>x595)+x596);

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint32_t x597 = 1U;
	volatile uint8_t x598 = 1U;
	int16_t x599 = -1;
	int64_t x600 = 3LL;
	static volatile int64_t t146 = -198599499735324LL;

    t146 = (((x597<=x598)>x599)+x600);

    if (t146 != 4LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x601 = 112782LLU;
	uint32_t x602 = 1453U;
	uint16_t x604 = 15U;
	int32_t t147 = 445008;

    t147 = (((x601<=x602)>x603)+x604);

    if (t147 != 16) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x605 = -1;
	int32_t x606 = 3065;
	int32_t x607 = INT32_MIN;
	volatile int32_t t148 = -135853335;

    t148 = (((x605<=x606)>x607)+x608);

    if (t148 != 65536) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x609 = 24612478174LLU;
	volatile int16_t x610 = -3;
	volatile int32_t x611 = -1;
	uint8_t x612 = 4U;
	static int32_t t149 = 0;

    t149 = (((x609<=x610)>x611)+x612);

    if (t149 != 5) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x613 = 4;
	int64_t x614 = 183952LL;
	static int32_t x615 = 1;
	static int16_t x616 = INT16_MAX;
	int32_t t150 = 622128544;

    t150 = (((x613<=x614)>x615)+x616);

    if (t150 != 32767) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x617 = INT32_MIN;
	volatile uint16_t x618 = 3037U;
	static uint64_t t151 = 963808874380597919LLU;

    t151 = (((x617<=x618)>x619)+x620);

    if (t151 != 238827273252LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint32_t x622 = UINT32_MAX;
	int16_t x623 = 2;
	int32_t t152 = 2;

    t152 = (((x621<=x622)>x623)+x624);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x625 = 3;
	static uint16_t x626 = 108U;
	int8_t x627 = 2;
	int8_t x628 = INT8_MAX;
	static volatile int32_t t153 = 53428;

    t153 = (((x625<=x626)>x627)+x628);

    if (t153 != 127) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x629 = INT32_MAX;
	volatile int16_t x630 = -1;
	static int16_t x632 = INT16_MIN;
	int32_t t154 = 32;

    t154 = (((x629<=x630)>x631)+x632);

    if (t154 != -32768) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x633 = 96U;
	static uint64_t x635 = 769LLU;
	volatile uint64_t t155 = 870434328014462681LLU;

    t155 = (((x633<=x634)>x635)+x636);

    if (t155 != 3LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x637 = 6LLU;
	uint32_t x638 = 30465870U;
	static uint8_t x639 = 41U;
	volatile int8_t x640 = INT8_MAX;
	int32_t t156 = 101690;

    t156 = (((x637<=x638)>x639)+x640);

    if (t156 != 127) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x642 = 431U;
	uint64_t x643 = 275964777LLU;
	int8_t x644 = 29;
	volatile int32_t t157 = 247120;

    t157 = (((x641<=x642)>x643)+x644);

    if (t157 != 29) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x645 = 2LLU;
	uint8_t x646 = UINT8_MAX;
	int8_t x647 = 1;
	static uint8_t x648 = 23U;
	volatile int32_t t158 = -97865243;

    t158 = (((x645<=x646)>x647)+x648);

    if (t158 != 23) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x649 = -12469;
	volatile int16_t x650 = INT16_MAX;
	int64_t x651 = -1LL;
	volatile int32_t t159 = -451090198;

    t159 = (((x649<=x650)>x651)+x652);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x653 = UINT8_MAX;
	int32_t x654 = INT32_MIN;
	uint64_t x655 = 489LLU;
	int64_t x656 = INT64_MIN;
	static volatile int64_t t160 = INT64_MIN;

    t160 = (((x653<=x654)>x655)+x656);

    if (t160 != INT64_MIN) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x657 = INT8_MIN;
	static uint64_t x658 = 4296308687915LLU;
	volatile int32_t x659 = -94317;
	int32_t x660 = INT32_MIN;
	static int32_t t161 = -131834;

    t161 = (((x657<=x658)>x659)+x660);

    if (t161 != -2147483647) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x661 = INT16_MIN;
	int16_t x663 = INT16_MAX;
	uint32_t x664 = UINT32_MAX;
	volatile uint32_t t162 = UINT32_MAX;

    t162 = (((x661<=x662)>x663)+x664);

    if (t162 != UINT32_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint32_t x665 = 24U;
	int8_t x666 = INT8_MIN;
	int64_t x667 = INT64_MIN;
	int64_t x668 = INT64_MIN;

    t163 = (((x665<=x666)>x667)+x668);

    if (t163 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x670 = -1;
	uint16_t x671 = 19U;
	uint64_t x672 = UINT64_MAX;
	uint64_t t164 = UINT64_MAX;

    t164 = (((x669<=x670)>x671)+x672);

    if (t164 != UINT64_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x673 = 217U;
	static int8_t x674 = 0;
	volatile uint32_t x675 = 37168U;
	int64_t x676 = 4343687898215911LL;
	int64_t t165 = 6LL;

    t165 = (((x673<=x674)>x675)+x676);

    if (t165 != 4343687898215911LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x681 = INT32_MIN;
	int64_t x682 = INT64_MIN;
	int8_t x683 = INT8_MAX;
	static int16_t x684 = INT16_MIN;
	volatile int32_t t166 = 1086;

    t166 = (((x681<=x682)>x683)+x684);

    if (t166 != -32768) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x686 = 35592493399314206LLU;
	int64_t x687 = INT64_MIN;
	int8_t x688 = 1;
	volatile int32_t t167 = 29303227;

    t167 = (((x685<=x686)>x687)+x688);

    if (t167 != 2) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x690 = UINT16_MAX;
	uint8_t x691 = 1U;
	int8_t x692 = INT8_MIN;
	int32_t t168 = -14;

    t168 = (((x689<=x690)>x691)+x692);

    if (t168 != -128) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x693 = INT8_MIN;
	int16_t x694 = -311;
	static volatile int8_t x696 = INT8_MAX;
	int32_t t169 = -9185;

    t169 = (((x693<=x694)>x695)+x696);

    if (t169 != 127) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x697 = INT16_MIN;
	volatile int16_t x698 = INT16_MIN;
	int32_t x699 = INT32_MIN;
	static int16_t x700 = INT16_MIN;
	static int32_t t170 = -3;

    t170 = (((x697<=x698)>x699)+x700);

    if (t170 != -32767) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x702 = INT64_MIN;
	volatile int64_t x703 = -1LL;
	volatile int32_t t171 = 0;

    t171 = (((x701<=x702)>x703)+x704);

    if (t171 != -15495) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x705 = 22302329824LLU;
	static int64_t x706 = INT64_MIN;
	uint8_t x707 = UINT8_MAX;
	int8_t x708 = INT8_MIN;
	volatile int32_t t172 = 763573;

    t172 = (((x705<=x706)>x707)+x708);

    if (t172 != -128) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x709 = 21691U;
	int8_t x710 = INT8_MAX;
	volatile uint32_t x711 = 1533U;
	static int32_t t173 = 126093;

    t173 = (((x709<=x710)>x711)+x712);

    if (t173 != 127) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x713 = -1LL;
	int8_t x715 = -44;
	uint64_t x716 = UINT64_MAX;
	volatile uint64_t t174 = 27LLU;

    t174 = (((x713<=x714)>x715)+x716);

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x717 = UINT16_MAX;
	static int8_t x719 = INT8_MIN;
	volatile int64_t x720 = INT64_MIN;
	int64_t t175 = 0LL;

    t175 = (((x717<=x718)>x719)+x720);

    if (t175 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x721 = 15581511243LLU;
	int32_t x722 = INT32_MIN;
	volatile uint16_t x723 = 14U;
	volatile int32_t t176 = -25;

    t176 = (((x721<=x722)>x723)+x724);

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x725 = 24U;
	int16_t x726 = INT16_MAX;
	int16_t x727 = 0;
	uint64_t x728 = 175247610496LLU;
	volatile uint64_t t177 = 1315439224163880210LLU;

    t177 = (((x725<=x726)>x727)+x728);

    if (t177 != 175247610497LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x729 = INT32_MIN;
	int8_t x730 = 1;
	uint16_t x732 = 17U;
	int32_t t178 = -14221;

    t178 = (((x729<=x730)>x731)+x732);

    if (t178 != 18) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x733 = 25264251338689802LL;
	int32_t t179 = -551138987;

    t179 = (((x733<=x734)>x735)+x736);

    if (t179 != 3) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x738 = INT16_MIN;
	static int16_t x739 = INT16_MIN;
	uint64_t x740 = 2871146752321148683LLU;
	volatile uint64_t t180 = 4314285246191925313LLU;

    t180 = (((x737<=x738)>x739)+x740);

    if (t180 != 2871146752321148684LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x742 = 52;
	int64_t x743 = 25376837592161LL;
	int64_t x744 = INT64_MAX;
	static volatile int64_t t181 = INT64_MAX;

    t181 = (((x741<=x742)>x743)+x744);

    if (t181 != INT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x745 = INT32_MIN;
	static volatile uint32_t x746 = UINT32_MAX;
	static volatile int32_t t182 = -2;

    t182 = (((x745<=x746)>x747)+x748);

    if (t182 != 128) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x749 = 6U;
	uint64_t x751 = 3504447792244LLU;
	int32_t t183 = -114;

    t183 = (((x749<=x750)>x751)+x752);

    if (t183 != -32768) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint8_t x754 = UINT8_MAX;
	int8_t x755 = INT8_MIN;
	static uint32_t x756 = UINT32_MAX;
	uint32_t t184 = 121227299U;

    t184 = (((x753<=x754)>x755)+x756);

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint8_t x757 = 21U;
	volatile int32_t x759 = INT32_MIN;
	int16_t x760 = -1;
	int32_t t185 = 56098;

    t185 = (((x757<=x758)>x759)+x760);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x762 = 15218LL;
	int32_t x764 = INT32_MIN;
	volatile int32_t t186 = 8;

    t186 = (((x761<=x762)>x763)+x764);

    if (t186 != -2147483647) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x765 = INT32_MIN;
	volatile int16_t x766 = -2;
	static uint32_t x767 = 39U;
	int16_t x768 = 14282;
	static int32_t t187 = -124382;

    t187 = (((x765<=x766)>x767)+x768);

    if (t187 != 14282) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x769 = -1;
	int32_t x771 = -5;
	volatile int8_t x772 = -1;

    t188 = (((x769<=x770)>x771)+x772);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x773 = 840U;
	int64_t x774 = INT64_MIN;
	volatile uint8_t x775 = 15U;
	int16_t x776 = INT16_MIN;

    t189 = (((x773<=x774)>x775)+x776);

    if (t189 != -32768) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x777 = -1;
	static volatile uint16_t x779 = 15765U;
	int16_t x780 = INT16_MIN;
	volatile int32_t t190 = -3163;

    t190 = (((x777<=x778)>x779)+x780);

    if (t190 != -32768) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x781 = 1;
	static int64_t x782 = INT64_MAX;
	int8_t x783 = -1;
	int8_t x784 = INT8_MIN;

    t191 = (((x781<=x782)>x783)+x784);

    if (t191 != -127) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x785 = -1783545;
	static volatile uint16_t x787 = 0U;
	static int64_t x788 = INT64_MIN;
	volatile int64_t t192 = 421LL;

    t192 = (((x785<=x786)>x787)+x788);

    if (t192 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x789 = 91U;
	volatile uint64_t x791 = UINT64_MAX;
	static int16_t x792 = -14069;

    t193 = (((x789<=x790)>x791)+x792);

    if (t193 != -14069) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x793 = -1;
	static volatile uint64_t x794 = 2544687LLU;
	int32_t x795 = INT32_MIN;
	int16_t x796 = 2252;

    t194 = (((x793<=x794)>x795)+x796);

    if (t194 != 2253) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x797 = INT16_MAX;
	static uint16_t x798 = UINT16_MAX;

    t195 = (((x797<=x798)>x799)+x800);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x801 = INT32_MIN;
	int8_t x802 = 9;
	volatile uint16_t x803 = 27157U;
	int8_t x804 = 0;
	volatile int32_t t196 = -3958;

    t196 = (((x801<=x802)>x803)+x804);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x805 = -1;
	int8_t x807 = INT8_MIN;
	int16_t x808 = -12;
	static volatile int32_t t197 = -292;

    t197 = (((x805<=x806)>x807)+x808);

    if (t197 != -11) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x809 = 0;
	int16_t x810 = INT16_MAX;
	int64_t x811 = INT64_MIN;

    t198 = (((x809<=x810)>x811)+x812);

    if (t198 != -127) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x814 = -1;
	uint16_t x815 = UINT16_MAX;
	int8_t x816 = INT8_MIN;
	volatile int32_t t199 = 142776984;

    t199 = (((x813<=x814)>x815)+x816);

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

