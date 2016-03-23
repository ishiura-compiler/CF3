
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

int8_t x7 = INT8_MIN;
static int32_t x13 = -1;
uint8_t x16 = UINT8_MAX;
uint8_t x31 = UINT8_MAX;
int16_t x36 = -7549;
int8_t x39 = INT8_MIN;
volatile int16_t x53 = INT16_MIN;
volatile int16_t x58 = INT16_MIN;
int64_t x61 = INT64_MIN;
uint64_t t14 = UINT64_MAX;
static int64_t x70 = 372775046674549LL;
int16_t x72 = -76;
static int32_t x73 = INT32_MIN;
uint32_t x79 = 1783U;
static volatile uint64_t t18 = 76302820882LLU;
int8_t x87 = INT8_MIN;
int8_t x88 = 3;
int64_t x92 = -1LL;
volatile int64_t t21 = 191411LL;
int64_t x100 = -416LL;
int16_t x101 = INT16_MIN;
volatile int32_t x104 = INT32_MAX;
volatile int8_t x108 = INT8_MIN;
int32_t t25 = 19;
int32_t x114 = INT32_MIN;
int16_t x129 = INT16_MIN;
uint8_t x132 = UINT8_MAX;
volatile uint32_t x143 = UINT32_MAX;
volatile uint32_t x144 = 15U;
int8_t x145 = INT8_MAX;
int64_t x147 = 2366884966266LL;
volatile int32_t t33 = 0;
volatile int64_t x155 = INT64_MAX;
volatile uint8_t x158 = 70U;
int32_t x168 = INT32_MIN;
int32_t x177 = -29761;
volatile int32_t x179 = 182;
uint8_t x181 = 4U;
int64_t x185 = -1LL;
uint16_t x189 = 17546U;
int32_t x193 = INT32_MIN;
volatile int32_t t45 = 7596;
int16_t x198 = INT16_MIN;
int8_t x199 = INT8_MAX;
int16_t x202 = 41;
static volatile uint8_t x207 = 106U;
uint8_t x212 = UINT8_MAX;
static int16_t x218 = INT16_MIN;
uint64_t x221 = UINT64_MAX;
static uint16_t x229 = 41U;
int16_t x231 = INT16_MAX;
uint64_t x232 = 1333519916202786266LLU;
volatile uint64_t t54 = 1951966LLU;
volatile int16_t x235 = INT16_MIN;
int8_t x236 = 0;
volatile int64_t t56 = -807LL;
int8_t x242 = -23;
int16_t x245 = INT16_MAX;
uint64_t t59 = 455175467833LLU;
volatile int32_t x254 = 0;
int16_t x257 = 2;
int8_t x266 = INT8_MIN;
static uint8_t x273 = UINT8_MAX;
uint16_t x275 = 10479U;
volatile uint8_t x287 = 13U;
uint8_t x292 = UINT8_MAX;
int64_t x293 = 2868058438943LL;
int16_t x294 = INT16_MIN;
int64_t x295 = INT64_MIN;
static uint64_t t70 = UINT64_MAX;
int8_t x306 = -1;
uint64_t t73 = 129107065838238LLU;
int32_t x317 = 424191180;
int32_t x318 = 246231;
static int32_t x326 = -1;
volatile int8_t x331 = -1;
uint64_t t79 = 120LLU;
int16_t x335 = -1;
int64_t x337 = -1LL;
static int16_t x340 = INT16_MAX;
uint16_t x344 = 1U;
static volatile int32_t t82 = 4;
int8_t x348 = INT8_MIN;
static volatile int64_t x353 = -1LL;
uint32_t x356 = UINT32_MAX;
static volatile uint32_t t85 = 0U;
volatile uint32_t x370 = 51691U;
volatile uint32_t t88 = 2U;
static uint64_t x376 = 5396047LLU;
uint64_t t89 = 4802LLU;
int8_t x387 = 9;
volatile int8_t x392 = -61;
static int8_t x394 = INT8_MIN;
volatile int32_t t96 = INT32_MAX;
int16_t x407 = INT16_MIN;
volatile uint8_t x409 = 0U;
int16_t x410 = INT16_MAX;
int8_t x411 = INT8_MAX;
volatile int32_t x426 = INT32_MAX;
static int32_t x430 = INT32_MAX;
static uint16_t x436 = UINT16_MAX;
uint8_t x439 = 13U;
int32_t x440 = INT32_MIN;
int8_t x442 = -20;
static int32_t t106 = -8238;
static int32_t x449 = 12;
static int64_t x458 = 271652998LL;
static int32_t x460 = -29190;
int16_t x461 = INT16_MIN;
int32_t x467 = INT32_MIN;
int8_t x470 = INT8_MIN;
static uint32_t x480 = UINT32_MAX;
uint16_t x482 = 0U;
int8_t x494 = INT8_MIN;
int64_t x498 = INT64_MAX;
int16_t x501 = INT16_MIN;
int8_t x502 = 1;
int64_t x511 = 10890729551LL;
volatile int8_t x512 = INT8_MAX;
volatile uint64_t x519 = 33530452070LLU;
int8_t x520 = -1;
int32_t t125 = 70936649;
volatile int32_t x521 = INT32_MIN;
int8_t x525 = -1;
int64_t x530 = -351588002090589LL;
uint8_t x534 = 83U;
int64_t x536 = -1LL;
static int64_t t129 = 8895809097405634LL;
static uint64_t x547 = 1858516856879458LLU;
static uint32_t x557 = 5U;
uint32_t x559 = 461U;
uint8_t x569 = UINT8_MAX;
int32_t x571 = -26095400;
int16_t x573 = 64;
volatile uint64_t t139 = UINT64_MAX;
uint16_t x578 = 7454U;
volatile int32_t t140 = 3325;
uint8_t x585 = 80U;
volatile int64_t x586 = -2106016537378LL;
volatile uint64_t t142 = UINT64_MAX;
int8_t x590 = INT8_MAX;
int64_t t143 = -307109283LL;
volatile int8_t x595 = INT8_MAX;
int16_t x598 = INT16_MAX;
int16_t x606 = INT16_MAX;
static volatile int16_t x607 = -11;
int32_t t147 = 40504671;
volatile int8_t x610 = -1;
volatile int16_t x612 = INT16_MIN;
int8_t x616 = -30;
int64_t t149 = 16126LL;
static int64_t x618 = INT64_MAX;
static uint64_t x625 = 173051288562LLU;
uint16_t x631 = UINT16_MAX;
int8_t x638 = -1;
int16_t x639 = 12;
uint8_t x642 = UINT8_MAX;
uint64_t t160 = UINT64_MAX;
int32_t x661 = INT32_MAX;
int64_t x665 = INT64_MIN;
int32_t x668 = 1;
int32_t x670 = 209;
uint64_t x671 = 10054741526LLU;
uint8_t x672 = UINT8_MAX;
int32_t t163 = 135635;
int8_t x675 = -6;
uint32_t x684 = UINT32_MAX;
uint32_t t166 = UINT32_MAX;
int32_t x693 = -1;
static volatile int16_t x697 = -6;
static int32_t x700 = 1;
uint8_t x705 = UINT8_MAX;
static uint8_t x709 = 71U;
int8_t x713 = INT8_MAX;
int32_t x724 = INT32_MIN;
uint16_t x726 = 713U;
int32_t t177 = 24;
int8_t x729 = INT8_MIN;
int32_t x731 = 422703;
int8_t x733 = -1;
volatile int64_t t180 = -11448LL;
uint16_t x742 = 35U;
static int16_t x747 = INT16_MIN;
int16_t x748 = -1;
volatile int32_t t184 = 2534;
int64_t x757 = 4399179557241198LL;
volatile int32_t x760 = INT32_MIN;
int32_t x765 = INT32_MAX;
int16_t x770 = 221;
int16_t x771 = -1;
static int32_t t188 = 19541143;
static volatile int64_t x775 = INT64_MIN;
int32_t t190 = -1;
int16_t x788 = INT16_MIN;
uint32_t x797 = UINT32_MAX;
static int32_t x805 = INT32_MIN;
uint64_t x808 = 0LLU;
uint64_t x810 = UINT64_MAX;
static int64_t x811 = INT64_MIN;
static volatile uint8_t x814 = 27U;
volatile int16_t x815 = -1;


void f0(void) {
    	static int8_t x1 = 0;
	int8_t x2 = -15;
	uint64_t x3 = 33356245252LLU;
	int32_t x4 = INT32_MAX;
	int32_t t0 = INT32_MAX;

    t0 = ((x1+(x2<=x3))|x4);

    if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = -3208250790300LL;
	int8_t x6 = 0;
	int16_t x8 = -1;
	int64_t t1 = 336LL;

    t1 = ((x5+(x6<=x7))|x8);

    if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = UINT64_MAX;
	uint32_t x10 = 13891U;
	int32_t x11 = INT32_MIN;
	volatile uint32_t x12 = UINT32_MAX;
	volatile uint64_t t2 = 191578513LLU;

    t2 = ((x9+(x10<=x11))|x12);

    if (t2 != 4294967295LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x14 = -1;
	int16_t x15 = INT16_MAX;
	int32_t t3 = -944341643;

    t3 = ((x13+(x14<=x15))|x16);

    if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x17 = -33;
	static int32_t x18 = -1;
	volatile int8_t x19 = 13;
	int32_t x20 = INT32_MAX;
	int32_t t4 = -1;

    t4 = ((x17+(x18<=x19))|x20);

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x25 = UINT8_MAX;
	uint8_t x26 = 15U;
	int32_t x27 = INT32_MIN;
	int8_t x28 = -1;
	int32_t t5 = 238;

    t5 = ((x25+(x26<=x27))|x28);

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x29 = -17681;
	uint16_t x30 = 2417U;
	static int64_t x32 = -104592928227544885LL;
	static int64_t t6 = 15799398LL;

    t6 = ((x29+(x30<=x31))|x32);

    if (t6 != -17681LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x33 = 634699U;
	int32_t x34 = -7;
	uint8_t x35 = UINT8_MAX;
	static volatile uint32_t t7 = 449U;

    t7 = ((x33+(x34<=x35))|x36);

    if (t7 != 4294963151U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x37 = 134U;
	uint16_t x38 = 307U;
	int8_t x40 = -1;
	static volatile uint32_t t8 = UINT32_MAX;

    t8 = ((x37+(x38<=x39))|x40);

    if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x41 = INT16_MAX;
	int32_t x42 = -1;
	int32_t x43 = INT32_MAX;
	uint32_t x44 = 831U;
	static volatile uint32_t t9 = 2913U;

    t9 = ((x41+(x42<=x43))|x44);

    if (t9 != 33599U) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x45 = UINT16_MAX;
	uint16_t x46 = 12063U;
	int16_t x47 = -1;
	static volatile uint64_t x48 = UINT64_MAX;
	volatile uint64_t t10 = UINT64_MAX;

    t10 = ((x45+(x46<=x47))|x48);

    if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = INT64_MIN;
	int32_t x50 = 363;
	int16_t x51 = -603;
	uint8_t x52 = 12U;
	int64_t t11 = -250LL;

    t11 = ((x49+(x50<=x51))|x52);

    if (t11 != -9223372036854775796LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x54 = INT32_MIN;
	static int64_t x55 = -1LL;
	int16_t x56 = 1;
	int32_t t12 = 63904450;

    t12 = ((x53+(x54<=x55))|x56);

    if (t12 != -32767) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x57 = -6;
	int16_t x59 = INT16_MIN;
	int16_t x60 = INT16_MIN;
	int32_t t13 = -2250402;

    t13 = ((x57+(x58<=x59))|x60);

    if (t13 != -5) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint32_t x62 = UINT32_MAX;
	int8_t x63 = 12;
	uint64_t x64 = UINT64_MAX;

    t14 = ((x61+(x62<=x63))|x64);

    if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x65 = INT16_MIN;
	int8_t x66 = INT8_MAX;
	volatile int32_t x67 = -135051;
	int64_t x68 = INT64_MIN;
	volatile int64_t t15 = -4079354LL;

    t15 = ((x65+(x66<=x67))|x68);

    if (t15 != -32768LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x69 = -1;
	static uint8_t x71 = UINT8_MAX;
	static volatile int32_t t16 = 115578349;

    t16 = ((x69+(x70<=x71))|x72);

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x74 = INT16_MIN;
	uint8_t x75 = UINT8_MAX;
	int8_t x76 = INT8_MIN;
	int32_t t17 = 0;

    t17 = ((x73+(x74<=x75))|x76);

    if (t17 != -127) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x77 = 2159LLU;
	int16_t x78 = INT16_MAX;
	int16_t x80 = INT16_MIN;

    t18 = ((x77+(x78<=x79))|x80);

    if (t18 != 18446744073709521007LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x81 = 116875631999LLU;
	static uint32_t x82 = 26U;
	uint64_t x83 = 84483955066508917LLU;
	uint8_t x84 = UINT8_MAX;
	volatile uint64_t t19 = 0LLU;

    t19 = ((x81+(x82<=x83))|x84);

    if (t19 != 116875632127LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x85 = INT16_MIN;
	uint32_t x86 = UINT32_MAX;
	int32_t t20 = -46006;

    t20 = ((x85+(x86<=x87))|x88);

    if (t20 != -32765) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x89 = -935;
	int32_t x90 = 3;
	volatile uint64_t x91 = 34834103226LLU;

    t21 = ((x89+(x90<=x91))|x92);

    if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x93 = 199;
	uint8_t x94 = 103U;
	static uint32_t x95 = UINT32_MAX;
	static uint32_t x96 = 840643995U;
	uint32_t t22 = 826008833U;

    t22 = ((x93+(x94<=x95))|x96);

    if (t22 != 840644059U) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x97 = 9940;
	static volatile int64_t x98 = -1LL;
	int64_t x99 = INT64_MIN;
	volatile int64_t t23 = 52894263LL;

    t23 = ((x97+(x98<=x99))|x100);

    if (t23 != -268LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x102 = 191920094;
	int32_t x103 = INT32_MIN;
	int32_t t24 = -3082;

    t24 = ((x101+(x102<=x103))|x104);

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x105 = 0;
	static volatile int32_t x106 = -1;
	int64_t x107 = -1LL;

    t25 = ((x105+(x106<=x107))|x108);

    if (t25 != -127) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x109 = 6U;
	int32_t x110 = INT32_MIN;
	int32_t x111 = INT32_MIN;
	volatile int8_t x112 = INT8_MIN;
	int32_t t26 = -22;

    t26 = ((x109+(x110<=x111))|x112);

    if (t26 != -121) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x113 = 6297U;
	int64_t x115 = INT64_MAX;
	int16_t x116 = INT16_MIN;
	volatile uint32_t t27 = 9432U;

    t27 = ((x113+(x114<=x115))|x116);

    if (t27 != 4294940826U) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x117 = UINT16_MAX;
	int32_t x118 = INT32_MIN;
	static uint64_t x119 = 103211640072LLU;
	int32_t x120 = 29;
	static int32_t t28 = 0;

    t28 = ((x117+(x118<=x119))|x120);

    if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x125 = -1;
	volatile int8_t x126 = 37;
	static uint64_t x127 = 2091264481817615LLU;
	int64_t x128 = INT64_MIN;
	int64_t t29 = INT64_MIN;

    t29 = ((x125+(x126<=x127))|x128);

    if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x130 = INT64_MIN;
	int32_t x131 = INT32_MAX;
	int32_t t30 = 0;

    t30 = ((x129+(x130<=x131))|x132);

    if (t30 != -32513) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x133 = 12U;
	static int32_t x134 = INT32_MIN;
	int32_t x135 = INT32_MAX;
	static int16_t x136 = INT16_MIN;
	volatile int32_t t31 = 54948568;

    t31 = ((x133+(x134<=x135))|x136);

    if (t31 != -32755) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x141 = UINT64_MAX;
	uint64_t x142 = UINT64_MAX;
	volatile uint64_t t32 = UINT64_MAX;

    t32 = ((x141+(x142<=x143))|x144);

    if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x146 = UINT64_MAX;
	int8_t x148 = -1;

    t33 = ((x145+(x146<=x147))|x148);

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint32_t x149 = UINT32_MAX;
	int16_t x150 = INT16_MIN;
	volatile uint32_t x151 = UINT32_MAX;
	int64_t x152 = -4165LL;
	volatile int64_t t34 = -29430LL;

    t34 = ((x149+(x150<=x151))|x152);

    if (t34 != -4165LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x153 = INT16_MIN;
	int16_t x154 = -747;
	uint16_t x156 = 3U;
	static int32_t t35 = -8832132;

    t35 = ((x153+(x154<=x155))|x156);

    if (t35 != -32765) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x157 = -1LL;
	int64_t x159 = INT64_MIN;
	int64_t x160 = INT64_MAX;
	static int64_t t36 = 2LL;

    t36 = ((x157+(x158<=x159))|x160);

    if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint16_t x161 = UINT16_MAX;
	volatile int64_t x162 = INT64_MIN;
	volatile uint32_t x163 = 1U;
	int8_t x164 = INT8_MAX;
	int32_t t37 = -1683987;

    t37 = ((x161+(x162<=x163))|x164);

    if (t37 != 65663) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x165 = -1;
	volatile int32_t x166 = -1765870;
	uint16_t x167 = UINT16_MAX;
	int32_t t38 = INT32_MIN;

    t38 = ((x165+(x166<=x167))|x168);

    if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x169 = INT32_MIN;
	static volatile uint8_t x170 = 6U;
	int64_t x171 = INT64_MAX;
	volatile int32_t x172 = INT32_MAX;
	static int32_t t39 = 20158;

    t39 = ((x169+(x170<=x171))|x172);

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x173 = -1;
	volatile uint32_t x174 = 75714U;
	uint32_t x175 = 699328U;
	uint16_t x176 = 209U;
	int32_t t40 = -102948;

    t40 = ((x173+(x174<=x175))|x176);

    if (t40 != 209) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x178 = INT64_MIN;
	uint16_t x180 = 54U;
	volatile int32_t t41 = -7;

    t41 = ((x177+(x178<=x179))|x180);

    if (t41 != -29706) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x182 = 0LLU;
	int8_t x183 = INT8_MIN;
	volatile uint8_t x184 = UINT8_MAX;
	volatile int32_t t42 = -1;

    t42 = ((x181+(x182<=x183))|x184);

    if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x186 = INT32_MIN;
	uint8_t x187 = UINT8_MAX;
	volatile uint32_t x188 = UINT32_MAX;
	volatile int64_t t43 = -14075085153241LL;

    t43 = ((x185+(x186<=x187))|x188);

    if (t43 != 4294967295LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x190 = INT16_MAX;
	int64_t x191 = 14321665LL;
	int64_t x192 = -136145161791113LL;
	int64_t t44 = -138465761246239LL;

    t44 = ((x189+(x190<=x191))|x192);

    if (t44 != -136145161789953LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x194 = -6;
	int32_t x195 = -1;
	static int32_t x196 = INT32_MIN;

    t45 = ((x193+(x194<=x195))|x196);

    if (t45 != -2147483647) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x197 = INT8_MIN;
	volatile uint32_t x200 = 331U;
	static uint32_t t46 = 952050373U;

    t46 = ((x197+(x198<=x199))|x200);

    if (t46 != 4294967243U) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x201 = 2120853U;
	volatile uint16_t x203 = 23004U;
	int8_t x204 = INT8_MAX;
	static uint32_t t47 = 9294U;

    t47 = ((x201+(x202<=x203))|x204);

    if (t47 != 2120959U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x205 = 344U;
	uint8_t x206 = 6U;
	int32_t x208 = INT32_MIN;
	volatile int32_t t48 = -3503159;

    t48 = ((x205+(x206<=x207))|x208);

    if (t48 != -2147483303) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x209 = INT64_MIN;
	int16_t x210 = INT16_MAX;
	uint32_t x211 = UINT32_MAX;
	volatile int64_t t49 = -130002233276810949LL;

    t49 = ((x209+(x210<=x211))|x212);

    if (t49 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x213 = INT64_MIN;
	int64_t x214 = -1079699117LL;
	int32_t x215 = INT32_MAX;
	static uint16_t x216 = UINT16_MAX;
	static volatile int64_t t50 = -513335667LL;

    t50 = ((x213+(x214<=x215))|x216);

    if (t50 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x217 = -28;
	int32_t x219 = INT32_MAX;
	volatile uint64_t x220 = 3LLU;
	static volatile uint64_t t51 = 146LLU;

    t51 = ((x217+(x218<=x219))|x220);

    if (t51 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x222 = INT16_MIN;
	int16_t x223 = -991;
	int64_t x224 = INT64_MAX;
	volatile uint64_t t52 = 34236778533729LLU;

    t52 = ((x221+(x222<=x223))|x224);

    if (t52 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x225 = 1U;
	int8_t x226 = INT8_MIN;
	static uint32_t x227 = 3630224U;
	static volatile int16_t x228 = -1;
	int32_t t53 = -3417373;

    t53 = ((x225+(x226<=x227))|x228);

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x230 = UINT16_MAX;

    t54 = ((x229+(x230<=x231))|x232);

    if (t54 != 1333519916202786299LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint32_t x233 = 67922406U;
	int64_t x234 = -1LL;
	uint32_t t55 = 79U;

    t55 = ((x233+(x234<=x235))|x236);

    if (t55 != 67922406U) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x237 = 0U;
	static int8_t x238 = -1;
	int8_t x239 = INT8_MIN;
	int64_t x240 = -1LL;

    t56 = ((x237+(x238<=x239))|x240);

    if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x241 = -1;
	uint8_t x243 = UINT8_MAX;
	uint16_t x244 = 264U;
	static int32_t t57 = -5;

    t57 = ((x241+(x242<=x243))|x244);

    if (t57 != 264) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x246 = INT8_MIN;
	int8_t x247 = -1;
	int16_t x248 = -1;
	int32_t t58 = 4;

    t58 = ((x245+(x246<=x247))|x248);

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x249 = 30LLU;
	static int16_t x250 = INT16_MIN;
	static int16_t x251 = INT16_MAX;
	volatile uint8_t x252 = UINT8_MAX;

    t59 = ((x249+(x250<=x251))|x252);

    if (t59 != 255LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x253 = UINT32_MAX;
	int8_t x255 = -1;
	int32_t x256 = 278;
	volatile uint32_t t60 = UINT32_MAX;

    t60 = ((x253+(x254<=x255))|x256);

    if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x258 = -12;
	int8_t x259 = INT8_MIN;
	int8_t x260 = -1;
	volatile int32_t t61 = -6870;

    t61 = ((x257+(x258<=x259))|x260);

    if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x261 = INT8_MAX;
	volatile int32_t x262 = -22;
	int64_t x263 = -48737LL;
	int32_t x264 = -1;
	int32_t t62 = 164462;

    t62 = ((x261+(x262<=x263))|x264);

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x265 = INT16_MAX;
	volatile uint8_t x267 = 43U;
	int8_t x268 = INT8_MIN;
	volatile int32_t t63 = 21;

    t63 = ((x265+(x266<=x267))|x268);

    if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint64_t x269 = 70931679021859148LLU;
	int32_t x270 = 840;
	volatile int32_t x271 = 74;
	uint64_t x272 = 11452LLU;
	uint64_t t64 = 22LLU;

    t64 = ((x269+(x270<=x271))|x272);

    if (t64 != 70931679021870588LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x274 = INT32_MIN;
	int32_t x276 = 42431654;
	int32_t t65 = 274765092;

    t65 = ((x273+(x274<=x275))|x276);

    if (t65 != 42431910) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint32_t x277 = UINT32_MAX;
	uint64_t x278 = UINT64_MAX;
	int8_t x279 = INT8_MIN;
	int64_t x280 = INT64_MAX;
	int64_t t66 = INT64_MAX;

    t66 = ((x277+(x278<=x279))|x280);

    if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x281 = UINT8_MAX;
	volatile int16_t x282 = -1;
	int64_t x283 = -120534354940LL;
	int8_t x284 = 0;
	int32_t t67 = 21349;

    t67 = ((x281+(x282<=x283))|x284);

    if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x285 = 717U;
	int8_t x286 = -1;
	int16_t x288 = 1;
	volatile int32_t t68 = -50998246;

    t68 = ((x285+(x286<=x287))|x288);

    if (t68 != 719) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x289 = INT16_MIN;
	int16_t x290 = -1;
	int8_t x291 = -1;
	int32_t t69 = 18786;

    t69 = ((x289+(x290<=x291))|x292);

    if (t69 != -32513) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x296 = UINT64_MAX;

    t70 = ((x293+(x294<=x295))|x296);

    if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x297 = UINT64_MAX;
	uint64_t x298 = UINT64_MAX;
	static int32_t x299 = INT32_MIN;
	uint8_t x300 = UINT8_MAX;
	uint64_t t71 = UINT64_MAX;

    t71 = ((x297+(x298<=x299))|x300);

    if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x301 = 215670;
	int16_t x302 = INT16_MIN;
	int16_t x303 = INT16_MIN;
	static int64_t x304 = 47955906183609LL;
	volatile int64_t t72 = 27LL;

    t72 = ((x301+(x302<=x303))|x304);

    if (t72 != 47955906382847LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x305 = 203657682287804467LLU;
	static volatile uint32_t x307 = 43358U;
	volatile int8_t x308 = INT8_MAX;

    t73 = ((x305+(x306<=x307))|x308);

    if (t73 != 203657682287804543LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint16_t x309 = UINT16_MAX;
	static uint16_t x310 = 5U;
	int8_t x311 = INT8_MAX;
	int8_t x312 = INT8_MAX;
	int32_t t74 = -13362;

    t74 = ((x309+(x310<=x311))|x312);

    if (t74 != 65663) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x313 = 365200612545261LLU;
	uint8_t x314 = UINT8_MAX;
	int64_t x315 = -1LL;
	int64_t x316 = INT64_MAX;
	uint64_t t75 = 38LLU;

    t75 = ((x313+(x314<=x315))|x316);

    if (t75 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x319 = -2;
	int64_t x320 = 450560331740705LL;
	int64_t t76 = -1291661151LL;

    t76 = ((x317+(x318<=x319))|x320);

    if (t76 != 450560755889901LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x321 = -95666450016049871LL;
	int8_t x322 = INT8_MIN;
	int32_t x323 = INT32_MAX;
	int64_t x324 = INT64_MIN;
	volatile int64_t t77 = 64409LL;

    t77 = ((x321+(x322<=x323))|x324);

    if (t77 != -95666450016049870LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x325 = 9U;
	static volatile int64_t x327 = INT64_MIN;
	int32_t x328 = INT32_MAX;
	volatile int32_t t78 = INT32_MAX;

    t78 = ((x325+(x326<=x327))|x328);

    if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x329 = 2928247532020277714LLU;
	int32_t x330 = -48;
	int32_t x332 = 1224;

    t79 = ((x329+(x330<=x331))|x332);

    if (t79 != 2928247532020278747LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x333 = 6651;
	static volatile uint32_t x334 = 18073U;
	static int64_t x336 = 2026855570LL;
	int64_t t80 = -4060221LL;

    t80 = ((x333+(x334<=x335))|x336);

    if (t80 != 2026855934LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x338 = INT64_MIN;
	int64_t x339 = -272740450704556288LL;
	volatile int64_t t81 = -19741LL;

    t81 = ((x337+(x338<=x339))|x340);

    if (t81 != 32767LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x341 = INT32_MIN;
	int64_t x342 = INT64_MAX;
	uint8_t x343 = 33U;

    t82 = ((x341+(x342<=x343))|x344);

    if (t82 != -2147483647) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x345 = UINT16_MAX;
	static volatile uint64_t x346 = 48640342LLU;
	int32_t x347 = -1;
	volatile int32_t t83 = 734569;

    t83 = ((x345+(x346<=x347))|x348);

    if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x354 = INT32_MAX;
	int64_t x355 = -161473454963471LL;
	static volatile int64_t t84 = 19039202370874LL;

    t84 = ((x353+(x354<=x355))|x356);

    if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x357 = 0U;
	static uint32_t x358 = UINT32_MAX;
	int64_t x359 = -3430362503LL;
	static volatile uint32_t x360 = 40292605U;

    t85 = ((x357+(x358<=x359))|x360);

    if (t85 != 40292605U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x361 = 3U;
	int32_t x362 = INT32_MAX;
	int8_t x363 = 1;
	static uint16_t x364 = 37U;
	volatile int32_t t86 = 1447;

    t86 = ((x361+(x362<=x363))|x364);

    if (t86 != 39) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x365 = 6330226U;
	volatile int32_t x366 = INT32_MIN;
	int16_t x367 = -11;
	volatile uint32_t x368 = 116991U;
	volatile uint32_t t87 = 7U;

    t87 = ((x365+(x366<=x367))|x368);

    if (t87 != 6414335U) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint32_t x369 = 20984U;
	int64_t x371 = -1LL;
	uint32_t x372 = 1903415U;

    t88 = ((x369+(x370<=x371))|x372);

    if (t88 != 1924095U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x373 = UINT8_MAX;
	static volatile uint64_t x374 = UINT64_MAX;
	int32_t x375 = -9230;

    t89 = ((x373+(x374<=x375))|x376);

    if (t89 != 5396223LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x377 = 0;
	int8_t x378 = 37;
	uint64_t x379 = UINT64_MAX;
	int32_t x380 = INT32_MIN;
	volatile int32_t t90 = 110815;

    t90 = ((x377+(x378<=x379))|x380);

    if (t90 != -2147483647) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint16_t x381 = UINT16_MAX;
	volatile int32_t x382 = INT32_MAX;
	static int8_t x383 = 1;
	uint8_t x384 = 42U;
	volatile int32_t t91 = -60;

    t91 = ((x381+(x382<=x383))|x384);

    if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x385 = UINT64_MAX;
	int32_t x386 = INT32_MAX;
	int64_t x388 = 4489898783501365681LL;
	static uint64_t t92 = UINT64_MAX;

    t92 = ((x385+(x386<=x387))|x388);

    if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int16_t x389 = INT16_MIN;
	uint16_t x390 = UINT16_MAX;
	uint8_t x391 = 32U;
	static volatile int32_t t93 = 256627;

    t93 = ((x389+(x390<=x391))|x392);

    if (t93 != -61) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x393 = -134554823822050479LL;
	int64_t x395 = INT64_MIN;
	int32_t x396 = INT32_MIN;
	int64_t t94 = 912247702625LL;

    t94 = ((x393+(x394<=x395))|x396);

    if (t94 != -1018856623LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x397 = INT32_MIN;
	int8_t x398 = INT8_MIN;
	uint32_t x399 = 223310U;
	uint8_t x400 = UINT8_MAX;
	volatile int32_t t95 = -841999;

    t95 = ((x397+(x398<=x399))|x400);

    if (t95 != -2147483393) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x401 = INT32_MAX;
	volatile int8_t x402 = INT8_MIN;
	int16_t x403 = INT16_MIN;
	uint8_t x404 = 5U;

    t96 = ((x401+(x402<=x403))|x404);

    if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint32_t x405 = 1266U;
	uint64_t x406 = 43644323242928505LLU;
	static int32_t x408 = INT32_MIN;
	volatile uint32_t t97 = 6U;

    t97 = ((x405+(x406<=x407))|x408);

    if (t97 != 2147484915U) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile uint64_t x412 = 168344575LLU;
	uint64_t t98 = 4477947384LLU;

    t98 = ((x409+(x410<=x411))|x412);

    if (t98 != 168344575LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x413 = UINT16_MAX;
	uint32_t x414 = 15040U;
	static volatile int32_t x415 = 1184350;
	int16_t x416 = INT16_MAX;
	static int32_t t99 = 84888053;

    t99 = ((x413+(x414<=x415))|x416);

    if (t99 != 98303) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int64_t x417 = INT64_MIN;
	int16_t x418 = -1;
	static volatile int64_t x419 = INT64_MIN;
	uint16_t x420 = UINT16_MAX;
	int64_t t100 = -1LL;

    t100 = ((x417+(x418<=x419))|x420);

    if (t100 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x421 = 0;
	int8_t x422 = -46;
	int8_t x423 = INT8_MAX;
	static uint64_t x424 = UINT64_MAX;
	uint64_t t101 = UINT64_MAX;

    t101 = ((x421+(x422<=x423))|x424);

    if (t101 != UINT64_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x425 = 1098062744672627LLU;
	static int8_t x427 = -1;
	uint8_t x428 = 75U;
	uint64_t t102 = 626483424314LLU;

    t102 = ((x425+(x426<=x427))|x428);

    if (t102 != 1098062744672635LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x429 = INT64_MIN;
	int64_t x431 = -1LL;
	uint8_t x432 = UINT8_MAX;
	static int64_t t103 = -10640734080768LL;

    t103 = ((x429+(x430<=x431))|x432);

    if (t103 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint32_t x433 = 99260691U;
	int32_t x434 = 87433402;
	volatile int32_t x435 = INT32_MAX;
	volatile uint32_t t104 = 977U;

    t104 = ((x433+(x434<=x435))|x436);

    if (t104 != 99287039U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x437 = UINT8_MAX;
	volatile int16_t x438 = 3575;
	volatile int32_t t105 = -18133277;

    t105 = ((x437+(x438<=x439))|x440);

    if (t105 != -2147483393) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x441 = UINT8_MAX;
	int64_t x443 = INT64_MAX;
	int8_t x444 = 0;

    t106 = ((x441+(x442<=x443))|x444);

    if (t106 != 256) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x445 = 16517302U;
	int8_t x446 = 0;
	int16_t x447 = INT16_MIN;
	static int16_t x448 = -1;
	uint32_t t107 = UINT32_MAX;

    t107 = ((x445+(x446<=x447))|x448);

    if (t107 != UINT32_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x450 = INT16_MAX;
	static int8_t x451 = INT8_MIN;
	static volatile int16_t x452 = INT16_MIN;
	int32_t t108 = 2;

    t108 = ((x449+(x450<=x451))|x452);

    if (t108 != -32756) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x453 = INT16_MIN;
	int64_t x454 = INT64_MIN;
	int64_t x455 = -99LL;
	int8_t x456 = 12;
	static int32_t t109 = 82;

    t109 = ((x453+(x454<=x455))|x456);

    if (t109 != -32755) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x457 = -1;
	uint64_t x459 = UINT64_MAX;
	int32_t t110 = -836859061;

    t110 = ((x457+(x458<=x459))|x460);

    if (t110 != -29190) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x462 = UINT32_MAX;
	volatile int32_t x463 = INT32_MAX;
	uint8_t x464 = 2U;
	int32_t t111 = 50;

    t111 = ((x461+(x462<=x463))|x464);

    if (t111 != -32766) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x465 = -5977608;
	uint16_t x466 = UINT16_MAX;
	volatile int64_t x468 = -1LL;
	int64_t t112 = -14325268477LL;

    t112 = ((x465+(x466<=x467))|x468);

    if (t112 != -1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x469 = -1;
	int32_t x471 = INT32_MAX;
	uint32_t x472 = UINT32_MAX;
	uint32_t t113 = UINT32_MAX;

    t113 = ((x469+(x470<=x471))|x472);

    if (t113 != UINT32_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x473 = 11LLU;
	uint32_t x474 = UINT32_MAX;
	int16_t x475 = -2;
	int32_t x476 = -1;
	uint64_t t114 = UINT64_MAX;

    t114 = ((x473+(x474<=x475))|x476);

    if (t114 != UINT64_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x477 = 0LLU;
	int64_t x478 = INT64_MIN;
	static int32_t x479 = INT32_MIN;
	volatile uint64_t t115 = 48877570232981688LLU;

    t115 = ((x477+(x478<=x479))|x480);

    if (t115 != 4294967295LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x481 = INT8_MIN;
	volatile uint16_t x483 = 1U;
	int64_t x484 = INT64_MIN;
	int64_t t116 = -3024425495497LL;

    t116 = ((x481+(x482<=x483))|x484);

    if (t116 != -127LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x485 = -1;
	uint64_t x486 = 3814669342809964LLU;
	uint16_t x487 = 4034U;
	int16_t x488 = -1;
	int32_t t117 = 25;

    t117 = ((x485+(x486<=x487))|x488);

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x489 = UINT64_MAX;
	int16_t x490 = -1;
	int8_t x491 = 0;
	int32_t x492 = 250110248;
	volatile uint64_t t118 = 839806966683LLU;

    t118 = ((x489+(x490<=x491))|x492);

    if (t118 != 250110248LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x493 = INT32_MAX;
	uint32_t x495 = 2U;
	volatile int32_t x496 = -20;
	volatile int32_t t119 = -46216572;

    t119 = ((x493+(x494<=x495))|x496);

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x497 = INT64_MIN;
	uint32_t x499 = UINT32_MAX;
	static volatile int64_t x500 = INT64_MIN;
	volatile int64_t t120 = INT64_MIN;

    t120 = ((x497+(x498<=x499))|x500);

    if (t120 != INT64_MIN) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x503 = -1;
	int32_t x504 = -253;
	int32_t t121 = 5563;

    t121 = ((x501+(x502<=x503))|x504);

    if (t121 != -253) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x505 = INT8_MIN;
	int8_t x506 = -14;
	int16_t x507 = INT16_MIN;
	uint16_t x508 = 13575U;
	int32_t t122 = -4211135;

    t122 = ((x505+(x506<=x507))|x508);

    if (t122 != -121) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint8_t x509 = 43U;
	int16_t x510 = 1;
	volatile int32_t t123 = -1;

    t123 = ((x509+(x510<=x511))|x512);

    if (t123 != 127) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x513 = -1LL;
	int32_t x514 = -15247;
	int32_t x515 = INT32_MAX;
	static int8_t x516 = 2;
	volatile int64_t t124 = -214LL;

    t124 = ((x513+(x514<=x515))|x516);

    if (t124 != 2LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x517 = 5U;
	uint64_t x518 = 2767222659804931LLU;

    t125 = ((x517+(x518<=x519))|x520);

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x522 = -1;
	static int8_t x523 = -1;
	int32_t x524 = 38236082;
	static int32_t t126 = -644412311;

    t126 = ((x521+(x522<=x523))|x524);

    if (t126 != -2109247565) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x526 = 266569719U;
	volatile int8_t x527 = INT8_MAX;
	static int64_t x528 = INT64_MIN;
	static volatile int64_t t127 = 1975383551LL;

    t127 = ((x525+(x526<=x527))|x528);

    if (t127 != -1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x529 = 6;
	int8_t x531 = 14;
	static uint8_t x532 = 0U;
	int32_t t128 = 16830;

    t128 = ((x529+(x530<=x531))|x532);

    if (t128 != 7) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x533 = 2U;
	int16_t x535 = -1;

    t129 = ((x533+(x534<=x535))|x536);

    if (t129 != -1LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x537 = INT16_MIN;
	int64_t x538 = INT64_MIN;
	int8_t x539 = INT8_MAX;
	uint16_t x540 = UINT16_MAX;
	volatile int32_t t130 = -349826;

    t130 = ((x537+(x538<=x539))|x540);

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x541 = 2;
	int32_t x542 = INT32_MIN;
	uint32_t x543 = UINT32_MAX;
	static uint32_t x544 = 141534889U;
	uint32_t t131 = 88285544U;

    t131 = ((x541+(x542<=x543))|x544);

    if (t131 != 141534891U) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x545 = INT16_MAX;
	static int8_t x546 = INT8_MIN;
	uint64_t x548 = 4187LLU;
	uint64_t t132 = 154611117LLU;

    t132 = ((x545+(x546<=x547))|x548);

    if (t132 != 32767LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x549 = INT8_MAX;
	int32_t x550 = 507113;
	int64_t x551 = INT64_MIN;
	int8_t x552 = 1;
	volatile int32_t t133 = 4639037;

    t133 = ((x549+(x550<=x551))|x552);

    if (t133 != 127) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int8_t x553 = INT8_MAX;
	int32_t x554 = INT32_MIN;
	int64_t x555 = -8046696LL;
	int32_t x556 = INT32_MIN;
	volatile int32_t t134 = 2;

    t134 = ((x553+(x554<=x555))|x556);

    if (t134 != -2147483520) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x558 = INT32_MIN;
	int64_t x560 = -1128842LL;
	volatile int64_t t135 = 10354LL;

    t135 = ((x557+(x558<=x559))|x560);

    if (t135 != -1128841LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x561 = 2020LL;
	int8_t x562 = -1;
	volatile uint64_t x563 = UINT64_MAX;
	static int64_t x564 = INT64_MAX;
	int64_t t136 = INT64_MAX;

    t136 = ((x561+(x562<=x563))|x564);

    if (t136 != INT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x565 = -1LL;
	int64_t x566 = INT64_MAX;
	int16_t x567 = INT16_MAX;
	static int8_t x568 = -1;
	int64_t t137 = 595LL;

    t137 = ((x565+(x566<=x567))|x568);

    if (t137 != -1LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x570 = 17;
	uint16_t x572 = 9333U;
	int32_t t138 = -4494708;

    t138 = ((x569+(x570<=x571))|x572);

    if (t138 != 9471) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x574 = -1;
	uint64_t x575 = 16320795663009664LLU;
	uint64_t x576 = UINT64_MAX;

    t139 = ((x573+(x574<=x575))|x576);

    if (t139 != UINT64_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x577 = INT32_MIN;
	int8_t x579 = -1;
	static uint8_t x580 = 1U;

    t140 = ((x577+(x578<=x579))|x580);

    if (t140 != -2147483647) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x581 = UINT64_MAX;
	int32_t x582 = -11338228;
	int16_t x583 = INT16_MIN;
	static int8_t x584 = 3;
	volatile uint64_t t141 = 49747LLU;

    t141 = ((x581+(x582<=x583))|x584);

    if (t141 != 3LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x587 = 9;
	uint64_t x588 = UINT64_MAX;

    t142 = ((x585+(x586<=x587))|x588);

    if (t142 != UINT64_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x589 = -751LL;
	uint8_t x591 = 2U;
	static volatile int16_t x592 = 0;

    t143 = ((x589+(x590<=x591))|x592);

    if (t143 != -751LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x593 = 4226U;
	uint32_t x594 = UINT32_MAX;
	volatile int16_t x596 = -1;
	volatile uint32_t t144 = UINT32_MAX;

    t144 = ((x593+(x594<=x595))|x596);

    if (t144 != UINT32_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x597 = 6436U;
	int8_t x599 = INT8_MAX;
	uint8_t x600 = 2U;
	volatile uint32_t t145 = 1845699U;

    t145 = ((x597+(x598<=x599))|x600);

    if (t145 != 6438U) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x601 = 1U;
	volatile int16_t x602 = INT16_MIN;
	static volatile uint64_t x603 = 6LLU;
	int64_t x604 = 8099031LL;
	int64_t t146 = 7944289495LL;

    t146 = ((x601+(x602<=x603))|x604);

    if (t146 != 8099031LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x605 = -6782844;
	uint16_t x608 = 19U;

    t147 = ((x605+(x606<=x607))|x608);

    if (t147 != -6782825) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x609 = 6;
	int16_t x611 = -1;
	volatile int32_t t148 = 87360278;

    t148 = ((x609+(x610<=x611))|x612);

    if (t148 != -32761) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int64_t x613 = 34665289087245LL;
	uint32_t x614 = 544533214U;
	uint64_t x615 = 1701416LLU;

    t149 = ((x613+(x614<=x615))|x616);

    if (t149 != -17LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x617 = INT32_MAX;
	volatile int32_t x619 = INT32_MIN;
	int64_t x620 = -50LL;
	volatile int64_t t150 = -23861505726964433LL;

    t150 = ((x617+(x618<=x619))|x620);

    if (t150 != -1LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x621 = 11U;
	uint64_t x622 = UINT64_MAX;
	int16_t x623 = INT16_MIN;
	uint64_t x624 = UINT64_MAX;
	uint64_t t151 = UINT64_MAX;

    t151 = ((x621+(x622<=x623))|x624);

    if (t151 != UINT64_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x626 = INT32_MIN;
	static int64_t x627 = 2857032744290LL;
	uint64_t x628 = 2390893LLU;
	uint64_t t152 = 374528288944LLU;

    t152 = ((x625+(x626<=x627))|x628);

    if (t152 != 173051575295LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x629 = -11351;
	int8_t x630 = INT8_MIN;
	volatile uint8_t x632 = 12U;
	volatile int32_t t153 = -313;

    t153 = ((x629+(x630<=x631))|x632);

    if (t153 != -11346) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x633 = UINT64_MAX;
	int16_t x634 = INT16_MIN;
	static int16_t x635 = -1;
	static uint16_t x636 = 27U;
	volatile uint64_t t154 = 287771198939919951LLU;

    t154 = ((x633+(x634<=x635))|x636);

    if (t154 != 27LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x637 = 4U;
	static volatile int8_t x640 = -1;
	int32_t t155 = -286082;

    t155 = ((x637+(x638<=x639))|x640);

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x641 = -1;
	int8_t x643 = INT8_MIN;
	int16_t x644 = INT16_MIN;
	static volatile int32_t t156 = -6127434;

    t156 = ((x641+(x642<=x643))|x644);

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x645 = 1661U;
	int8_t x646 = INT8_MIN;
	uint32_t x647 = 1714982U;
	int64_t x648 = INT64_MIN;
	volatile int64_t t157 = -95LL;

    t157 = ((x645+(x646<=x647))|x648);

    if (t157 != -9223372036854774147LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x649 = INT32_MAX;
	static volatile uint16_t x650 = UINT16_MAX;
	volatile int16_t x651 = -1;
	uint16_t x652 = 1U;
	volatile int32_t t158 = INT32_MAX;

    t158 = ((x649+(x650<=x651))|x652);

    if (t158 != INT32_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint64_t x653 = 180246242788710505LLU;
	int32_t x654 = INT32_MIN;
	uint16_t x655 = 57U;
	volatile uint64_t x656 = 38622LLU;
	uint64_t t159 = 692LLU;

    t159 = ((x653+(x654<=x655))|x656);

    if (t159 != 180246242788744958LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x657 = UINT64_MAX;
	uint64_t x658 = UINT64_MAX;
	static int32_t x659 = -7392288;
	static int8_t x660 = INT8_MIN;

    t160 = ((x657+(x658<=x659))|x660);

    if (t160 != UINT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x662 = INT8_MAX;
	int16_t x663 = INT16_MIN;
	uint8_t x664 = 13U;
	static volatile int32_t t161 = INT32_MAX;

    t161 = ((x661+(x662<=x663))|x664);

    if (t161 != INT32_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x666 = -36974917LL;
	volatile int8_t x667 = INT8_MAX;
	volatile int64_t t162 = 0LL;

    t162 = ((x665+(x666<=x667))|x668);

    if (t162 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x669 = INT8_MIN;

    t163 = ((x669+(x670<=x671))|x672);

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x673 = INT8_MIN;
	int32_t x674 = INT32_MIN;
	volatile int16_t x676 = -1;
	int32_t t164 = -13961236;

    t164 = ((x673+(x674<=x675))|x676);

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x677 = 11980U;
	int16_t x678 = 62;
	static int16_t x679 = INT16_MAX;
	int16_t x680 = -1;
	volatile int32_t t165 = -69500;

    t165 = ((x677+(x678<=x679))|x680);

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x681 = INT32_MIN;
	volatile uint32_t x682 = UINT32_MAX;
	int32_t x683 = 0;

    t166 = ((x681+(x682<=x683))|x684);

    if (t166 != UINT32_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x685 = -7LL;
	static int32_t x686 = -627384;
	volatile int32_t x687 = -1;
	int16_t x688 = 5715;
	int64_t t167 = 217855355893282LL;

    t167 = ((x685+(x686<=x687))|x688);

    if (t167 != -5LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x689 = UINT16_MAX;
	static int16_t x690 = INT16_MIN;
	int64_t x691 = 13LL;
	static int8_t x692 = INT8_MIN;
	static int32_t t168 = 494;

    t168 = ((x689+(x690<=x691))|x692);

    if (t168 != -128) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x694 = 56562U;
	int8_t x695 = -2;
	volatile uint8_t x696 = 8U;
	int32_t t169 = -30;

    t169 = ((x693+(x694<=x695))|x696);

    if (t169 != 8) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x698 = 1270;
	uint64_t x699 = 1136049169244018849LLU;
	int32_t t170 = 55696;

    t170 = ((x697+(x698<=x699))|x700);

    if (t170 != -5) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x701 = -20955713LL;
	static uint16_t x702 = 2U;
	volatile int32_t x703 = INT32_MIN;
	int8_t x704 = INT8_MIN;
	static int64_t t171 = 683LL;

    t171 = ((x701+(x702<=x703))|x704);

    if (t171 != -65LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x706 = -1;
	volatile int8_t x707 = -37;
	static volatile int32_t x708 = -384709246;
	volatile int32_t t172 = 7;

    t172 = ((x705+(x706<=x707))|x708);

    if (t172 != -384709121) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x710 = 3U;
	uint8_t x711 = UINT8_MAX;
	uint8_t x712 = UINT8_MAX;
	static volatile int32_t t173 = -921250;

    t173 = ((x709+(x710<=x711))|x712);

    if (t173 != 255) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x714 = INT64_MIN;
	volatile int16_t x715 = -4861;
	uint16_t x716 = 2U;
	int32_t t174 = 66;

    t174 = ((x713+(x714<=x715))|x716);

    if (t174 != 130) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x717 = UINT8_MAX;
	int64_t x718 = INT64_MIN;
	uint32_t x719 = 231168U;
	uint16_t x720 = UINT16_MAX;
	static volatile int32_t t175 = -22;

    t175 = ((x717+(x718<=x719))|x720);

    if (t175 != 65535) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x721 = INT32_MIN;
	int8_t x722 = -1;
	int64_t x723 = INT64_MIN;
	int32_t t176 = INT32_MIN;

    t176 = ((x721+(x722<=x723))|x724);

    if (t176 != INT32_MIN) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x725 = INT16_MIN;
	int32_t x727 = INT32_MIN;
	int32_t x728 = -1;

    t177 = ((x725+(x726<=x727))|x728);

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint32_t x730 = 789U;
	int16_t x732 = -2598;
	volatile int32_t t178 = 4;

    t178 = ((x729+(x730<=x731))|x732);

    if (t178 != -37) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x734 = -1;
	static uint32_t x735 = 4037U;
	int8_t x736 = -1;
	int32_t t179 = -2652;

    t179 = ((x733+(x734<=x735))|x736);

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x737 = -1560901430580769067LL;
	volatile uint8_t x738 = UINT8_MAX;
	volatile int8_t x739 = INT8_MIN;
	int32_t x740 = INT32_MIN;

    t180 = ((x737+(x738<=x739))|x740);

    if (t180 != -1126854955LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x741 = INT8_MIN;
	static volatile uint16_t x743 = 7U;
	volatile uint64_t x744 = UINT64_MAX;
	uint64_t t181 = UINT64_MAX;

    t181 = ((x741+(x742<=x743))|x744);

    if (t181 != UINT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x745 = INT16_MIN;
	static uint64_t x746 = 4676221738112491LLU;
	volatile int32_t t182 = 1020946;

    t182 = ((x745+(x746<=x747))|x748);

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x749 = -12;
	int64_t x750 = 825565420654891528LL;
	uint64_t x751 = 458855506LLU;
	uint64_t x752 = 26689LLU;
	uint64_t t183 = 324087166726505LLU;

    t183 = ((x749+(x750<=x751))|x752);

    if (t183 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x753 = INT8_MAX;
	static int8_t x754 = INT8_MIN;
	int16_t x755 = INT16_MIN;
	int8_t x756 = -1;

    t184 = ((x753+(x754<=x755))|x756);

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x758 = INT64_MIN;
	int8_t x759 = INT8_MIN;
	int64_t t185 = -4208207LL;

    t185 = ((x757+(x758<=x759))|x760);

    if (t185 != -825228945LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x761 = INT32_MIN;
	volatile uint64_t x762 = 2830899676124LLU;
	int8_t x763 = -22;
	static int8_t x764 = 0;
	volatile int32_t t186 = 12;

    t186 = ((x761+(x762<=x763))|x764);

    if (t186 != -2147483647) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x766 = 593U;
	volatile uint16_t x767 = 0U;
	static uint32_t x768 = UINT32_MAX;
	volatile uint32_t t187 = UINT32_MAX;

    t187 = ((x765+(x766<=x767))|x768);

    if (t187 != UINT32_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x769 = -5;
	uint8_t x772 = 0U;

    t188 = ((x769+(x770<=x771))|x772);

    if (t188 != -5) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x773 = 4;
	int64_t x774 = -1LL;
	int16_t x776 = INT16_MIN;
	static int32_t t189 = -30841244;

    t189 = ((x773+(x774<=x775))|x776);

    if (t189 != -32764) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x777 = INT16_MAX;
	static volatile uint16_t x778 = 515U;
	int32_t x779 = INT32_MIN;
	int16_t x780 = -1;

    t190 = ((x777+(x778<=x779))|x780);

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint8_t x781 = UINT8_MAX;
	int64_t x782 = -6LL;
	int8_t x783 = INT8_MIN;
	uint32_t x784 = 666U;
	volatile uint32_t t191 = 1917606U;

    t191 = ((x781+(x782<=x783))|x784);

    if (t191 != 767U) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x785 = INT32_MAX;
	int8_t x786 = INT8_MAX;
	uint32_t x787 = 1U;
	volatile int32_t t192 = 305068;

    t192 = ((x785+(x786<=x787))|x788);

    if (t192 != -1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x789 = -6237469;
	int8_t x790 = -31;
	uint8_t x791 = 113U;
	int16_t x792 = -25;
	volatile int32_t t193 = 53;

    t193 = ((x789+(x790<=x791))|x792);

    if (t193 != -25) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x793 = 2U;
	volatile int16_t x794 = -1;
	static volatile int64_t x795 = 4289810LL;
	volatile uint8_t x796 = UINT8_MAX;
	volatile int32_t t194 = -10;

    t194 = ((x793+(x794<=x795))|x796);

    if (t194 != 255) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x798 = -1;
	uint16_t x799 = 13U;
	uint32_t x800 = UINT32_MAX;
	static volatile uint32_t t195 = UINT32_MAX;

    t195 = ((x797+(x798<=x799))|x800);

    if (t195 != UINT32_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x801 = INT32_MIN;
	int32_t x802 = INT32_MIN;
	int64_t x803 = -10804771205310LL;
	int8_t x804 = -1;
	int32_t t196 = -590857343;

    t196 = ((x801+(x802<=x803))|x804);

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x806 = -1;
	uint32_t x807 = UINT32_MAX;
	volatile uint64_t t197 = 11841LLU;

    t197 = ((x805+(x806<=x807))|x808);

    if (t197 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x809 = INT8_MAX;
	static volatile uint32_t x812 = UINT32_MAX;
	volatile uint32_t t198 = UINT32_MAX;

    t198 = ((x809+(x810<=x811))|x812);

    if (t198 != UINT32_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x813 = -29LL;
	int32_t x816 = INT32_MAX;
	int64_t t199 = -1354004175LL;

    t199 = ((x813+(x814<=x815))|x816);

    if (t199 != -1LL) { NG(); } else { ; }
	
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

