
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

static uint16_t x4 = 15U;
static volatile int32_t t0 = -402093;
int32_t x5 = -16;
int8_t x7 = INT8_MIN;
int8_t x8 = 1;
volatile uint8_t x9 = UINT8_MAX;
int32_t x24 = INT32_MAX;
uint16_t x26 = 1U;
uint16_t x35 = UINT16_MAX;
uint64_t x37 = UINT64_MAX;
uint32_t t9 = 60U;
static volatile int32_t x50 = INT32_MAX;
uint32_t x53 = UINT32_MAX;
int32_t t13 = 863948825;
volatile int32_t x61 = -10242;
volatile uint32_t x63 = 17330U;
int8_t x64 = INT8_MIN;
int32_t t15 = 314212129;
static uint8_t x68 = UINT8_MAX;
volatile int32_t t16 = 833072;
int16_t x70 = INT16_MIN;
int16_t x72 = INT16_MIN;
uint32_t x75 = 49151U;
int32_t x78 = INT32_MIN;
volatile int32_t t19 = -3698238;
uint8_t x82 = UINT8_MAX;
volatile int8_t x83 = -1;
volatile int32_t t20 = -10;
int32_t t21 = -560947;
uint32_t x93 = 1038353552U;
int16_t x94 = -10;
volatile int64_t x97 = -1LL;
volatile int8_t x99 = INT8_MIN;
int32_t x102 = INT32_MIN;
uint16_t x104 = 345U;
volatile int64_t x106 = INT64_MIN;
int64_t x111 = 173LL;
uint64_t x113 = 4348604542322LLU;
int32_t t29 = 21314302;
volatile int64_t x125 = 0LL;
int16_t x127 = INT16_MIN;
int32_t t32 = -194627;
uint32_t x135 = UINT32_MAX;
static int64_t x136 = INT64_MAX;
static int64_t t33 = 65306LL;
int32_t x141 = 1;
int8_t x142 = INT8_MAX;
volatile int32_t x148 = -1;
static volatile int32_t t36 = 21;
int32_t t37 = 5;
uint16_t x155 = UINT16_MAX;
volatile uint8_t x156 = UINT8_MAX;
volatile int8_t x161 = INT8_MAX;
int64_t x172 = INT64_MAX;
static int64_t x180 = 1145012086LL;
uint64_t x183 = UINT64_MAX;
int8_t x185 = -12;
int8_t x188 = 38;
int16_t x192 = -1;
uint32_t x204 = 1775842973U;
static uint32_t t49 = 13211U;
uint64_t x214 = 1304842498LLU;
static int8_t x219 = INT8_MIN;
int8_t x221 = INT8_MAX;
uint16_t x237 = UINT16_MAX;
int16_t x241 = INT16_MAX;
static uint8_t x247 = 3U;
static int16_t x258 = INT16_MIN;
uint64_t x259 = 319267389LLU;
int8_t x260 = 15;
volatile int16_t x262 = -1;
volatile int32_t t64 = -374;
uint64_t x272 = 101513951LLU;
static int16_t x273 = INT16_MIN;
volatile int64_t x274 = INT64_MAX;
int64_t x275 = -1LL;
static int32_t x276 = INT32_MIN;
volatile int32_t t69 = -220508;
static uint64_t x286 = 73320526LLU;
volatile uint32_t x287 = UINT32_MAX;
static int32_t t71 = -4100364;
int32_t t73 = -73;
int64_t x303 = INT64_MIN;
int64_t x308 = -1LL;
volatile int64_t t75 = 982LL;
uint32_t x314 = 207U;
int16_t x317 = -26;
uint16_t x318 = 562U;
volatile uint16_t x325 = UINT16_MAX;
int64_t x331 = INT64_MIN;
volatile int8_t x332 = INT8_MIN;
uint32_t x336 = UINT32_MAX;
int64_t x344 = -1LL;
int16_t x350 = INT16_MAX;
uint16_t x360 = UINT16_MAX;
int16_t x363 = INT16_MIN;
uint32_t t90 = 3U;
int32_t x373 = INT32_MAX;
int8_t x375 = -1;
static int32_t t92 = -487;
uint8_t x378 = 1U;
int64_t x381 = 33475745LL;
int8_t x386 = INT8_MIN;
uint16_t x395 = UINT16_MAX;
uint64_t x397 = 70968575644484745LLU;
uint32_t x400 = 123628007U;
int64_t x410 = 134827717LL;
static int32_t t100 = -78;
int32_t x413 = INT32_MAX;
uint32_t x414 = 7674100U;
volatile uint64_t x420 = 7747933344528960003LLU;
volatile uint64_t x424 = UINT64_MAX;
int64_t x425 = INT64_MIN;
uint32_t x433 = 931U;
volatile int32_t t106 = 675831;
int16_t x440 = INT16_MIN;
volatile int32_t t107 = -1797;
int32_t t110 = -3466153;
volatile int32_t t111 = 104818;
int8_t x464 = -1;
int16_t x466 = INT16_MAX;
volatile int32_t t114 = 190;
volatile int16_t x470 = -1;
int64_t x485 = INT64_MIN;
int64_t x500 = INT64_MIN;
int16_t x502 = -1;
uint16_t x503 = UINT16_MAX;
int16_t x505 = INT16_MIN;
volatile int8_t x507 = INT8_MAX;
volatile int32_t t124 = -9;
volatile uint32_t x509 = UINT32_MAX;
static uint64_t x517 = UINT64_MAX;
uint16_t x519 = 31303U;
uint16_t x527 = UINT16_MAX;
int8_t x534 = -1;
int32_t t131 = -3299252;
static volatile int64_t x537 = INT64_MIN;
static int32_t t132 = -468252;
volatile int8_t x542 = -59;
volatile int8_t x545 = INT8_MIN;
uint16_t x546 = 15U;
int32_t t134 = -5424;
static int64_t x551 = INT64_MAX;
static int32_t t135 = -26040;
uint16_t x560 = UINT16_MAX;
volatile int32_t t137 = -20;
int8_t x565 = -28;
int32_t x568 = 8033;
volatile int64_t t142 = -496313931936960LL;
uint8_t x588 = 3U;
int64_t x590 = INT64_MIN;
int64_t x593 = 87808587111517LL;
uint16_t x603 = 24U;
int32_t x608 = INT32_MAX;
static int16_t x614 = 1;
int8_t x616 = 8;
uint64_t x620 = 10829420LLU;
uint64_t x622 = UINT64_MAX;
uint32_t t154 = 15642354U;
static int8_t x648 = -47;
int32_t x654 = INT32_MIN;
int64_t x656 = -5925616651LL;
int64_t x661 = INT64_MIN;
static uint16_t x664 = 1062U;
volatile int32_t t162 = -6;
volatile uint64_t x665 = 6LLU;
uint64_t t163 = 14LLU;
int8_t x670 = INT8_MIN;
int64_t x681 = INT64_MIN;
int32_t t167 = 480502;
uint8_t x699 = 23U;
static int8_t x700 = INT8_MIN;
uint32_t x706 = UINT32_MAX;
uint8_t x708 = 12U;
int8_t x717 = INT8_MAX;
int8_t x721 = INT8_MIN;
int8_t x726 = 0;
int8_t x728 = -1;
static volatile uint16_t x738 = 14U;
volatile int8_t x739 = INT8_MIN;
static int8_t x749 = -1;
uint32_t x750 = UINT32_MAX;
static int64_t x758 = 6LL;
int8_t x762 = 8;
static int8_t x771 = -1;
volatile int8_t x772 = INT8_MIN;
volatile int32_t t189 = 1886661;
uint16_t x776 = 7U;
volatile int32_t x777 = -1;
int8_t x778 = INT8_MIN;
int64_t x780 = INT64_MAX;
int64_t t191 = 0LL;
int8_t x783 = INT8_MAX;
static uint16_t x786 = 1426U;
static int32_t t194 = -18842512;
volatile uint32_t x793 = 54187U;
uint8_t x796 = UINT8_MAX;
int32_t t195 = 0;
volatile int8_t x798 = INT8_MIN;
int32_t t196 = -8344686;
uint8_t x804 = UINT8_MAX;
volatile int32_t t197 = -33412260;
volatile int8_t x808 = INT8_MAX;
volatile int32_t t198 = 102;
int8_t x811 = 22;


void f0(void) {
    	static int32_t x1 = -62193;
	int8_t x2 = INT8_MIN;
	int64_t x3 = INT64_MAX;

    t0 = ((x1>(x2<=x3))%x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = INT32_MAX;
	volatile int32_t t1 = -8;

    t1 = ((x5>(x6<=x7))%x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x10 = -3;
	int32_t x11 = INT32_MIN;
	int64_t x12 = INT64_MIN;
	int64_t t2 = -222587923170084LL;

    t2 = ((x9>(x10<=x11))%x12);

    if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -1;
	int64_t x14 = INT64_MIN;
	int8_t x15 = INT8_MIN;
	volatile int8_t x16 = -1;
	static volatile int32_t t3 = -88260214;

    t3 = ((x13>(x14<=x15))%x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x17 = INT16_MIN;
	int32_t x18 = -73;
	int32_t x19 = INT32_MAX;
	uint8_t x20 = UINT8_MAX;
	int32_t t4 = 5773;

    t4 = ((x17>(x18<=x19))%x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MIN;
	volatile int16_t x22 = 0;
	uint16_t x23 = UINT16_MAX;
	volatile int32_t t5 = 3;

    t5 = ((x21>(x22<=x23))%x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x25 = INT32_MAX;
	int64_t x27 = 270337292934472LL;
	static volatile uint32_t x28 = 84717086U;
	uint32_t t6 = 831492658U;

    t6 = ((x25>(x26<=x27))%x28);

    if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 16820U;
	uint8_t x30 = UINT8_MAX;
	int32_t x31 = INT32_MIN;
	volatile uint32_t x32 = UINT32_MAX;
	uint32_t t7 = 31980483U;

    t7 = ((x29>(x30<=x31))%x32);

    if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MAX;
	uint16_t x34 = 8048U;
	volatile uint32_t x36 = 239458U;
	uint32_t t8 = 50436U;

    t8 = ((x33>(x34<=x35))%x36);

    if (t8 != 1U) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x38 = -1;
	int64_t x39 = INT64_MIN;
	volatile uint32_t x40 = 46703U;

    t9 = ((x37>(x38<=x39))%x40);

    if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x41 = INT16_MIN;
	volatile uint8_t x42 = 1U;
	int8_t x43 = 2;
	volatile int64_t x44 = -1LL;
	static volatile int64_t t10 = 7LL;

    t10 = ((x41>(x42<=x43))%x44);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MIN;
	volatile int16_t x46 = INT16_MIN;
	int64_t x47 = INT64_MAX;
	static int8_t x48 = 1;
	int32_t t11 = -109;

    t11 = ((x45>(x46<=x47))%x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MIN;
	int16_t x51 = INT16_MAX;
	int16_t x52 = -1;
	volatile int32_t t12 = 1116;

    t12 = ((x49>(x50<=x51))%x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x54 = 10U;
	volatile int16_t x55 = -1;
	int32_t x56 = 3306077;

    t13 = ((x53>(x54<=x55))%x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x57 = INT8_MIN;
	int32_t x58 = INT32_MIN;
	int16_t x59 = 0;
	uint8_t x60 = 97U;
	int32_t t14 = -325076998;

    t14 = ((x57>(x58<=x59))%x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x62 = INT64_MIN;

    t15 = ((x61>(x62<=x63))%x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MIN;
	static uint16_t x66 = UINT16_MAX;
	static volatile uint64_t x67 = 29529522066LLU;

    t16 = ((x65>(x66<=x67))%x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint32_t x69 = UINT32_MAX;
	uint64_t x71 = 777243018706LLU;
	volatile int32_t t17 = 222697;

    t17 = ((x69>(x70<=x71))%x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = 4197U;
	int16_t x74 = 1;
	int8_t x76 = -1;
	int32_t t18 = -334761876;

    t18 = ((x73>(x74<=x75))%x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x77 = 37U;
	static int8_t x79 = INT8_MIN;
	int8_t x80 = -1;

    t19 = ((x77>(x78<=x79))%x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = -1;
	static int32_t x84 = -1;

    t20 = ((x81>(x82<=x83))%x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x85 = -316247LL;
	int8_t x86 = -1;
	int32_t x87 = INT32_MAX;
	int32_t x88 = INT32_MIN;

    t21 = ((x85>(x86<=x87))%x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MIN;
	static int16_t x90 = -1;
	int32_t x91 = -1;
	static volatile int32_t x92 = INT32_MAX;
	int32_t t22 = -950;

    t22 = ((x89>(x90<=x91))%x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x95 = 25301;
	int16_t x96 = INT16_MAX;
	volatile int32_t t23 = -30460029;

    t23 = ((x93>(x94<=x95))%x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x98 = 0U;
	uint32_t x100 = UINT32_MAX;
	static uint32_t t24 = 2U;

    t24 = ((x97>(x98<=x99))%x100);

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x101 = INT16_MIN;
	static uint8_t x103 = 22U;
	int32_t t25 = 2456;

    t25 = ((x101>(x102<=x103))%x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = 185975543493024LL;
	uint32_t x107 = 1517U;
	int16_t x108 = INT16_MAX;
	int32_t t26 = -6;

    t26 = ((x105>(x106<=x107))%x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x109 = 21671803LL;
	static int8_t x110 = INT8_MIN;
	static volatile int8_t x112 = -1;
	static int32_t t27 = 6;

    t27 = ((x109>(x110<=x111))%x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x114 = INT32_MAX;
	int8_t x115 = -1;
	int32_t x116 = -13945651;
	volatile int32_t t28 = -603623;

    t28 = ((x113>(x114<=x115))%x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = INT16_MAX;
	int32_t x118 = INT32_MIN;
	volatile int32_t x119 = 39107677;
	static volatile int32_t x120 = -1;

    t29 = ((x117>(x118<=x119))%x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x121 = -1;
	static int16_t x122 = -13589;
	int8_t x123 = 0;
	static int32_t x124 = -1;
	int32_t t30 = 44;

    t30 = ((x121>(x122<=x123))%x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x126 = UINT8_MAX;
	static volatile int8_t x128 = -52;
	static volatile int32_t t31 = 1;

    t31 = ((x125>(x126<=x127))%x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x129 = INT16_MIN;
	static uint16_t x130 = UINT16_MAX;
	int32_t x131 = 77;
	volatile int16_t x132 = INT16_MIN;

    t32 = ((x129>(x130<=x131))%x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = 25872684897142LL;
	volatile int64_t x134 = -1317LL;

    t33 = ((x133>(x134<=x135))%x136);

    if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x137 = UINT16_MAX;
	uint64_t x138 = UINT64_MAX;
	int32_t x139 = INT32_MIN;
	int16_t x140 = -1;
	int32_t t34 = 127957;

    t34 = ((x137>(x138<=x139))%x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x143 = UINT8_MAX;
	int16_t x144 = INT16_MIN;
	volatile int32_t t35 = 26886672;

    t35 = ((x141>(x142<=x143))%x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x145 = -4478;
	int32_t x146 = INT32_MIN;
	uint8_t x147 = 1U;

    t36 = ((x145>(x146<=x147))%x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MIN;
	int64_t x150 = INT64_MAX;
	int64_t x151 = INT64_MAX;
	uint16_t x152 = 18841U;

    t37 = ((x149>(x150<=x151))%x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x153 = 22U;
	uint8_t x154 = UINT8_MAX;
	volatile int32_t t38 = -4597213;

    t38 = ((x153>(x154<=x155))%x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x162 = 69U;
	uint32_t x163 = 1113U;
	uint32_t x164 = 217U;
	uint32_t t39 = 99526U;

    t39 = ((x161>(x162<=x163))%x164);

    if (t39 != 1U) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x165 = INT64_MIN;
	static int16_t x166 = INT16_MIN;
	uint16_t x167 = UINT16_MAX;
	int32_t x168 = INT32_MIN;
	int32_t t40 = 1048395;

    t40 = ((x165>(x166<=x167))%x168);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x169 = -1;
	uint8_t x170 = 33U;
	int8_t x171 = INT8_MIN;
	static int64_t t41 = 2191779185936125LL;

    t41 = ((x169>(x170<=x171))%x172);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int16_t x173 = 8;
	int16_t x174 = INT16_MAX;
	int16_t x175 = 119;
	uint32_t x176 = UINT32_MAX;
	volatile uint32_t t42 = 32616U;

    t42 = ((x173>(x174<=x175))%x176);

    if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x177 = 0U;
	int16_t x178 = INT16_MAX;
	int8_t x179 = -1;
	volatile int64_t t43 = -1897LL;

    t43 = ((x177>(x178<=x179))%x180);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x181 = -1;
	int32_t x182 = INT32_MAX;
	uint64_t x184 = UINT64_MAX;
	volatile uint64_t t44 = 5LLU;

    t44 = ((x181>(x182<=x183))%x184);

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x186 = 7116004848204098LLU;
	int64_t x187 = -1LL;
	static int32_t t45 = -14;

    t45 = ((x185>(x186<=x187))%x188);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x189 = UINT64_MAX;
	uint64_t x190 = 991LLU;
	uint32_t x191 = 3467398U;
	int32_t t46 = 201;

    t46 = ((x189>(x190<=x191))%x192);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x193 = INT16_MAX;
	int32_t x194 = 205;
	static volatile uint16_t x195 = UINT16_MAX;
	int16_t x196 = -47;
	static int32_t t47 = -16;

    t47 = ((x193>(x194<=x195))%x196);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x197 = 0U;
	int32_t x198 = -1;
	static int16_t x199 = -1;
	int64_t x200 = -260452942LL;
	int64_t t48 = -4LL;

    t48 = ((x197>(x198<=x199))%x200);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x201 = 21;
	volatile uint64_t x202 = 74LLU;
	uint32_t x203 = UINT32_MAX;

    t49 = ((x201>(x202<=x203))%x204);

    if (t49 != 1U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x205 = 13U;
	int8_t x206 = INT8_MIN;
	int16_t x207 = INT16_MIN;
	uint64_t x208 = UINT64_MAX;
	uint64_t t50 = 785689707369351348LLU;

    t50 = ((x205>(x206<=x207))%x208);

    if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x209 = UINT8_MAX;
	int64_t x210 = INT64_MAX;
	volatile int8_t x211 = INT8_MAX;
	int8_t x212 = -1;
	int32_t t51 = -1;

    t51 = ((x209>(x210<=x211))%x212);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x213 = 1;
	static int16_t x215 = -1;
	static uint16_t x216 = UINT16_MAX;
	static int32_t t52 = 802805551;

    t52 = ((x213>(x214<=x215))%x216);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x217 = -1;
	int16_t x218 = INT16_MIN;
	uint16_t x220 = 123U;
	volatile int32_t t53 = -311;

    t53 = ((x217>(x218<=x219))%x220);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x222 = -15;
	int16_t x223 = 970;
	volatile int16_t x224 = 3547;
	static volatile int32_t t54 = 59891;

    t54 = ((x221>(x222<=x223))%x224);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint64_t x225 = 46160897LLU;
	uint8_t x226 = UINT8_MAX;
	int16_t x227 = INT16_MIN;
	volatile int32_t x228 = -1;
	volatile int32_t t55 = 70412325;

    t55 = ((x225>(x226<=x227))%x228);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x229 = 2;
	static volatile uint8_t x230 = 3U;
	int16_t x231 = 1647;
	int8_t x232 = 1;
	volatile int32_t t56 = 65091;

    t56 = ((x229>(x230<=x231))%x232);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x233 = 62U;
	int64_t x234 = -16645005998063523LL;
	static volatile int16_t x235 = INT16_MIN;
	static int32_t x236 = -1094236;
	static volatile int32_t t57 = -369;

    t57 = ((x233>(x234<=x235))%x236);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x238 = 1U;
	static int32_t x239 = -3;
	static volatile uint16_t x240 = 28445U;
	volatile int32_t t58 = 0;

    t58 = ((x237>(x238<=x239))%x240);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint16_t x242 = UINT16_MAX;
	int8_t x243 = INT8_MAX;
	int16_t x244 = INT16_MAX;
	volatile int32_t t59 = 1003464253;

    t59 = ((x241>(x242<=x243))%x244);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x245 = -87;
	uint64_t x246 = UINT64_MAX;
	int8_t x248 = INT8_MAX;
	static volatile int32_t t60 = 27100;

    t60 = ((x245>(x246<=x247))%x248);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x249 = INT32_MAX;
	int64_t x250 = -1LL;
	int16_t x251 = INT16_MAX;
	int64_t x252 = -1LL;
	int64_t t61 = -61196498759190LL;

    t61 = ((x249>(x250<=x251))%x252);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x253 = -1;
	uint8_t x254 = UINT8_MAX;
	static int64_t x255 = 18612LL;
	static int16_t x256 = INT16_MIN;
	int32_t t62 = -173;

    t62 = ((x253>(x254<=x255))%x256);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x257 = -1LL;
	volatile int32_t t63 = -1417;

    t63 = ((x257>(x258<=x259))%x260);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x261 = 8U;
	volatile int16_t x263 = -30;
	int16_t x264 = INT16_MIN;

    t64 = ((x261>(x262<=x263))%x264);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x265 = 13LLU;
	uint8_t x266 = UINT8_MAX;
	static int16_t x267 = 3040;
	volatile uint16_t x268 = 3U;
	int32_t t65 = 27394228;

    t65 = ((x265>(x266<=x267))%x268);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x269 = UINT64_MAX;
	uint64_t x270 = UINT64_MAX;
	volatile int8_t x271 = -1;
	uint64_t t66 = 33121286514656LLU;

    t66 = ((x269>(x270<=x271))%x272);

    if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t t67 = 128185314;

    t67 = ((x273>(x274<=x275))%x276);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x277 = INT32_MAX;
	int32_t x278 = -1;
	int16_t x279 = -1;
	static int64_t x280 = 175427243482LL;
	int64_t t68 = -7884505LL;

    t68 = ((x277>(x278<=x279))%x280);

    if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x281 = 3U;
	int16_t x282 = INT16_MIN;
	static int16_t x283 = 1;
	volatile uint16_t x284 = 1041U;

    t69 = ((x281>(x282<=x283))%x284);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x285 = INT8_MAX;
	int64_t x288 = -5LL;
	volatile int64_t t70 = 33LL;

    t70 = ((x285>(x286<=x287))%x288);

    if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x289 = INT32_MAX;
	uint64_t x290 = 81LLU;
	static int32_t x291 = INT32_MIN;
	volatile int16_t x292 = INT16_MIN;

    t71 = ((x289>(x290<=x291))%x292);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x293 = -3997;
	int8_t x294 = INT8_MAX;
	static uint64_t x295 = 669656LLU;
	static uint16_t x296 = UINT16_MAX;
	volatile int32_t t72 = 1113637;

    t72 = ((x293>(x294<=x295))%x296);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x297 = INT32_MAX;
	uint8_t x298 = 6U;
	int64_t x299 = -1LL;
	uint16_t x300 = 2201U;

    t73 = ((x297>(x298<=x299))%x300);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x301 = INT64_MIN;
	int64_t x302 = INT64_MIN;
	int16_t x304 = -1;
	int32_t t74 = 2;

    t74 = ((x301>(x302<=x303))%x304);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x305 = INT64_MIN;
	static int32_t x306 = -1;
	volatile uint16_t x307 = 1754U;

    t75 = ((x305>(x306<=x307))%x308);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x309 = -1;
	int32_t x310 = -544723773;
	int8_t x311 = INT8_MIN;
	int16_t x312 = -14;
	volatile int32_t t76 = 1;

    t76 = ((x309>(x310<=x311))%x312);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x313 = -1;
	uint8_t x315 = 23U;
	int64_t x316 = -28548245033599244LL;
	volatile int64_t t77 = 80934666996733374LL;

    t77 = ((x313>(x314<=x315))%x316);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x319 = 238U;
	static int8_t x320 = INT8_MIN;
	int32_t t78 = 466;

    t78 = ((x317>(x318<=x319))%x320);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x321 = -11476362;
	int8_t x322 = -1;
	uint32_t x323 = 2U;
	int32_t x324 = 7768;
	int32_t t79 = 28789;

    t79 = ((x321>(x322<=x323))%x324);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x326 = INT32_MAX;
	uint64_t x327 = 524LLU;
	static int32_t x328 = INT32_MIN;
	volatile int32_t t80 = 5;

    t80 = ((x325>(x326<=x327))%x328);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x329 = -18;
	int32_t x330 = INT32_MAX;
	volatile int32_t t81 = 0;

    t81 = ((x329>(x330<=x331))%x332);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int64_t x333 = 107654334547273LL;
	uint32_t x334 = UINT32_MAX;
	static int64_t x335 = INT64_MIN;
	static uint32_t t82 = 5442U;

    t82 = ((x333>(x334<=x335))%x336);

    if (t82 != 1U) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x337 = -1;
	int64_t x338 = INT64_MIN;
	uint8_t x339 = UINT8_MAX;
	uint32_t x340 = 3U;
	static volatile uint32_t t83 = 13028U;

    t83 = ((x337>(x338<=x339))%x340);

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x341 = INT32_MAX;
	int64_t x342 = -3702248LL;
	uint32_t x343 = UINT32_MAX;
	volatile int64_t t84 = 6937LL;

    t84 = ((x341>(x342<=x343))%x344);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x345 = -1;
	uint16_t x346 = UINT16_MAX;
	static int16_t x347 = -1;
	int16_t x348 = 44;
	static int32_t t85 = 176;

    t85 = ((x345>(x346<=x347))%x348);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x349 = INT16_MAX;
	int32_t x351 = -1;
	int32_t x352 = INT32_MIN;
	int32_t t86 = 390915130;

    t86 = ((x349>(x350<=x351))%x352);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x353 = UINT16_MAX;
	static int32_t x354 = INT32_MAX;
	uint16_t x355 = 14U;
	int64_t x356 = INT64_MIN;
	volatile int64_t t87 = -10339663833413LL;

    t87 = ((x353>(x354<=x355))%x356);

    if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x357 = INT8_MAX;
	int16_t x358 = INT16_MIN;
	static int32_t x359 = 0;
	static int32_t t88 = -164;

    t88 = ((x357>(x358<=x359))%x360);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x361 = 431692LL;
	uint64_t x362 = 80LLU;
	volatile uint16_t x364 = UINT16_MAX;
	volatile int32_t t89 = -7;

    t89 = ((x361>(x362<=x363))%x364);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x365 = INT64_MIN;
	int32_t x366 = -18820382;
	int8_t x367 = INT8_MAX;
	volatile uint32_t x368 = UINT32_MAX;

    t90 = ((x365>(x366<=x367))%x368);

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x369 = UINT16_MAX;
	volatile int32_t x370 = 197729235;
	int64_t x371 = INT64_MIN;
	int8_t x372 = INT8_MAX;
	volatile int32_t t91 = -156252126;

    t91 = ((x369>(x370<=x371))%x372);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x374 = 6345;
	uint8_t x376 = 1U;

    t92 = ((x373>(x374<=x375))%x376);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x377 = 79630U;
	int64_t x379 = 0LL;
	uint64_t x380 = 49959391194462710LLU;
	uint64_t t93 = 9889531LLU;

    t93 = ((x377>(x378<=x379))%x380);

    if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x382 = 688U;
	uint8_t x383 = UINT8_MAX;
	uint16_t x384 = 3872U;
	int32_t t94 = 927694540;

    t94 = ((x381>(x382<=x383))%x384);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x385 = 3;
	int16_t x387 = -1;
	int64_t x388 = -1LL;
	int64_t t95 = 2141322873LL;

    t95 = ((x385>(x386<=x387))%x388);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x389 = INT8_MIN;
	static int8_t x390 = INT8_MIN;
	int32_t x391 = INT32_MIN;
	int64_t x392 = -1LL;
	volatile int64_t t96 = -4365057521324LL;

    t96 = ((x389>(x390<=x391))%x392);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x393 = INT32_MAX;
	int8_t x394 = INT8_MAX;
	int64_t x396 = INT64_MIN;
	int64_t t97 = -15LL;

    t97 = ((x393>(x394<=x395))%x396);

    if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x398 = 9;
	static uint64_t x399 = 19773LLU;
	static uint32_t t98 = 1056500186U;

    t98 = ((x397>(x398<=x399))%x400);

    if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x401 = 48;
	static int16_t x402 = INT16_MAX;
	uint32_t x403 = 259U;
	int8_t x404 = 25;
	volatile int32_t t99 = 262724964;

    t99 = ((x401>(x402<=x403))%x404);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x409 = UINT8_MAX;
	volatile int64_t x411 = INT64_MIN;
	static int32_t x412 = INT32_MIN;

    t100 = ((x409>(x410<=x411))%x412);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x415 = INT64_MAX;
	int8_t x416 = 47;
	static int32_t t101 = 76454;

    t101 = ((x413>(x414<=x415))%x416);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x417 = INT16_MAX;
	int8_t x418 = INT8_MAX;
	volatile int8_t x419 = INT8_MAX;
	static uint64_t t102 = 759012834LLU;

    t102 = ((x417>(x418<=x419))%x420);

    if (t102 != 1LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x421 = INT64_MIN;
	uint16_t x422 = UINT16_MAX;
	uint8_t x423 = UINT8_MAX;
	volatile uint64_t t103 = 177136097240321LLU;

    t103 = ((x421>(x422<=x423))%x424);

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x426 = -12055283589731LL;
	int64_t x427 = INT64_MIN;
	int64_t x428 = INT64_MIN;
	volatile int64_t t104 = 108LL;

    t104 = ((x425>(x426<=x427))%x428);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x429 = -1LL;
	int8_t x430 = 1;
	volatile uint16_t x431 = UINT16_MAX;
	int32_t x432 = INT32_MIN;
	volatile int32_t t105 = 67537;

    t105 = ((x429>(x430<=x431))%x432);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x434 = INT32_MIN;
	int32_t x435 = INT32_MIN;
	volatile int32_t x436 = -82389;

    t106 = ((x433>(x434<=x435))%x436);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x437 = INT8_MAX;
	volatile uint64_t x438 = UINT64_MAX;
	int16_t x439 = -3;

    t107 = ((x437>(x438<=x439))%x440);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x441 = INT8_MIN;
	static int32_t x442 = INT32_MAX;
	static uint8_t x443 = UINT8_MAX;
	int8_t x444 = 15;
	int32_t t108 = -12575;

    t108 = ((x441>(x442<=x443))%x444);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int16_t x445 = INT16_MIN;
	uint16_t x446 = 15161U;
	static uint32_t x447 = 353U;
	volatile uint16_t x448 = UINT16_MAX;
	static int32_t t109 = -756;

    t109 = ((x445>(x446<=x447))%x448);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile uint32_t x449 = UINT32_MAX;
	static int32_t x450 = -1;
	uint16_t x451 = 35U;
	int8_t x452 = INT8_MIN;

    t110 = ((x449>(x450<=x451))%x452);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x453 = -1;
	uint16_t x454 = 502U;
	volatile int16_t x455 = -416;
	int32_t x456 = INT32_MIN;

    t111 = ((x453>(x454<=x455))%x456);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x457 = INT8_MIN;
	int8_t x458 = INT8_MAX;
	int16_t x459 = INT16_MIN;
	int16_t x460 = -185;
	int32_t t112 = 1726;

    t112 = ((x457>(x458<=x459))%x460);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x461 = -1LL;
	int64_t x462 = INT64_MIN;
	static uint64_t x463 = UINT64_MAX;
	volatile int32_t t113 = 43;

    t113 = ((x461>(x462<=x463))%x464);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x465 = -1LL;
	int8_t x467 = -1;
	int32_t x468 = INT32_MIN;

    t114 = ((x465>(x466<=x467))%x468);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x469 = INT64_MAX;
	static volatile int64_t x471 = -9LL;
	static int16_t x472 = 7;
	static int32_t t115 = 99084;

    t115 = ((x469>(x470<=x471))%x472);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x473 = INT16_MAX;
	volatile int16_t x474 = INT16_MIN;
	uint16_t x475 = 16558U;
	uint16_t x476 = 6U;
	volatile int32_t t116 = 231560024;

    t116 = ((x473>(x474<=x475))%x476);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x477 = -3022360069021LL;
	int16_t x478 = INT16_MIN;
	int32_t x479 = -75;
	uint8_t x480 = 2U;
	volatile int32_t t117 = -796;

    t117 = ((x477>(x478<=x479))%x480);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x481 = -1;
	int16_t x482 = INT16_MIN;
	uint16_t x483 = UINT16_MAX;
	volatile uint32_t x484 = 1239U;
	volatile uint32_t t118 = 4U;

    t118 = ((x481>(x482<=x483))%x484);

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x486 = 2LL;
	static int8_t x487 = INT8_MAX;
	static int32_t x488 = -1;
	volatile int32_t t119 = -449839610;

    t119 = ((x485>(x486<=x487))%x488);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x489 = 6;
	volatile int64_t x490 = -1LL;
	int16_t x491 = -62;
	int8_t x492 = INT8_MAX;
	volatile int32_t t120 = -1;

    t120 = ((x489>(x490<=x491))%x492);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x493 = UINT8_MAX;
	uint16_t x494 = UINT16_MAX;
	int8_t x495 = -1;
	uint32_t x496 = 50U;
	uint32_t t121 = 8900U;

    t121 = ((x493>(x494<=x495))%x496);

    if (t121 != 1U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x497 = INT16_MAX;
	int8_t x498 = INT8_MAX;
	int64_t x499 = -2670LL;
	static int64_t t122 = -1LL;

    t122 = ((x497>(x498<=x499))%x500);

    if (t122 != 1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x501 = 3495U;
	int64_t x504 = INT64_MIN;
	volatile int64_t t123 = -414880871LL;

    t123 = ((x501>(x502<=x503))%x504);

    if (t123 != 1LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x506 = INT8_MIN;
	int8_t x508 = 30;

    t124 = ((x505>(x506<=x507))%x508);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x510 = INT64_MIN;
	int16_t x511 = INT16_MIN;
	int32_t x512 = -1;
	volatile int32_t t125 = 0;

    t125 = ((x509>(x510<=x511))%x512);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int8_t x513 = INT8_MIN;
	static int16_t x514 = INT16_MAX;
	int64_t x515 = INT64_MAX;
	int64_t x516 = INT64_MAX;
	int64_t t126 = 0LL;

    t126 = ((x513>(x514<=x515))%x516);

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x518 = INT32_MIN;
	uint32_t x520 = 3999U;
	uint32_t t127 = 10U;

    t127 = ((x517>(x518<=x519))%x520);

    if (t127 != 1U) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint64_t x521 = UINT64_MAX;
	static volatile int16_t x522 = INT16_MAX;
	volatile int8_t x523 = 0;
	int8_t x524 = INT8_MIN;
	volatile int32_t t128 = -14120512;

    t128 = ((x521>(x522<=x523))%x524);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint32_t x525 = 43U;
	int16_t x526 = 75;
	uint16_t x528 = 129U;
	volatile int32_t t129 = 5807;

    t129 = ((x525>(x526<=x527))%x528);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x529 = 0;
	static int64_t x530 = INT64_MAX;
	int32_t x531 = -1;
	static uint64_t x532 = UINT64_MAX;
	static uint64_t t130 = 101938LLU;

    t130 = ((x529>(x530<=x531))%x532);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x533 = INT16_MAX;
	static volatile uint8_t x535 = UINT8_MAX;
	static int32_t x536 = -53325;

    t131 = ((x533>(x534<=x535))%x536);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int32_t x538 = INT32_MIN;
	static int8_t x539 = -62;
	static int8_t x540 = INT8_MIN;

    t132 = ((x537>(x538<=x539))%x540);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x541 = INT32_MIN;
	int32_t x543 = -1;
	int64_t x544 = -1LL;
	int64_t t133 = -87LL;

    t133 = ((x541>(x542<=x543))%x544);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x547 = UINT16_MAX;
	static int8_t x548 = INT8_MIN;

    t134 = ((x545>(x546<=x547))%x548);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x549 = INT64_MIN;
	volatile int32_t x550 = INT32_MAX;
	volatile int32_t x552 = INT32_MAX;

    t135 = ((x549>(x550<=x551))%x552);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x553 = 137U;
	uint16_t x554 = 1732U;
	uint16_t x555 = 22008U;
	static int64_t x556 = 13859720869584489LL;
	int64_t t136 = 241LL;

    t136 = ((x553>(x554<=x555))%x556);

    if (t136 != 1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x557 = UINT16_MAX;
	uint64_t x558 = 16280LLU;
	volatile int64_t x559 = 2913021002LL;

    t137 = ((x557>(x558<=x559))%x560);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x561 = INT8_MAX;
	static int64_t x562 = INT64_MIN;
	static int32_t x563 = INT32_MAX;
	uint16_t x564 = UINT16_MAX;
	int32_t t138 = -1;

    t138 = ((x561>(x562<=x563))%x564);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x566 = INT8_MIN;
	int16_t x567 = -4018;
	static int32_t t139 = 4590;

    t139 = ((x565>(x566<=x567))%x568);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x569 = INT16_MIN;
	int8_t x570 = INT8_MIN;
	volatile int32_t x571 = INT32_MIN;
	volatile uint16_t x572 = 12926U;
	volatile int32_t t140 = -44428;

    t140 = ((x569>(x570<=x571))%x572);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x573 = INT64_MIN;
	volatile int16_t x574 = 43;
	int64_t x575 = -1LL;
	volatile int8_t x576 = -31;
	volatile int32_t t141 = 2000714;

    t141 = ((x573>(x574<=x575))%x576);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x577 = INT64_MAX;
	uint8_t x578 = 13U;
	volatile uint8_t x579 = UINT8_MAX;
	static int64_t x580 = INT64_MIN;

    t142 = ((x577>(x578<=x579))%x580);

    if (t142 != 1LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint32_t x585 = UINT32_MAX;
	uint8_t x586 = 1U;
	int8_t x587 = 25;
	volatile int32_t t143 = 104849777;

    t143 = ((x585>(x586<=x587))%x588);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x589 = -90245LL;
	static int64_t x591 = INT64_MIN;
	static int16_t x592 = INT16_MIN;
	int32_t t144 = 219905019;

    t144 = ((x589>(x590<=x591))%x592);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x594 = INT32_MIN;
	int32_t x595 = INT32_MIN;
	int64_t x596 = 7401279243759720LL;
	volatile int64_t t145 = 102787741021616031LL;

    t145 = ((x593>(x594<=x595))%x596);

    if (t145 != 1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x597 = INT32_MIN;
	int32_t x598 = INT32_MIN;
	int16_t x599 = 6330;
	int64_t x600 = -1LL;
	static int64_t t146 = 366702185440LL;

    t146 = ((x597>(x598<=x599))%x600);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x601 = INT16_MAX;
	volatile int64_t x602 = INT64_MIN;
	uint64_t x604 = 1475213201665964356LLU;
	volatile uint64_t t147 = 288LLU;

    t147 = ((x601>(x602<=x603))%x604);

    if (t147 != 1LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x605 = -1;
	volatile int64_t x606 = -1LL;
	int16_t x607 = -1;
	volatile int32_t t148 = 975871;

    t148 = ((x605>(x606<=x607))%x608);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x609 = 521406049313875LL;
	int64_t x610 = -1LL;
	static volatile int64_t x611 = -11LL;
	static int64_t x612 = 1379LL;
	volatile int64_t t149 = 3222LL;

    t149 = ((x609>(x610<=x611))%x612);

    if (t149 != 1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x613 = INT32_MIN;
	int8_t x615 = 1;
	int32_t t150 = -14970;

    t150 = ((x613>(x614<=x615))%x616);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x617 = INT8_MIN;
	static int32_t x618 = INT32_MIN;
	uint64_t x619 = UINT64_MAX;
	volatile uint64_t t151 = 91883708451949698LLU;

    t151 = ((x617>(x618<=x619))%x620);

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x621 = INT8_MAX;
	uint64_t x623 = UINT64_MAX;
	int32_t x624 = -1;
	static int32_t t152 = 235190;

    t152 = ((x621>(x622<=x623))%x624);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x625 = 951935234LLU;
	int16_t x626 = -1;
	volatile int8_t x627 = 1;
	uint8_t x628 = 12U;
	static volatile int32_t t153 = -66;

    t153 = ((x625>(x626<=x627))%x628);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x629 = 3;
	int8_t x630 = INT8_MIN;
	uint64_t x631 = 16743LLU;
	static uint32_t x632 = 20097062U;

    t154 = ((x629>(x630<=x631))%x632);

    if (t154 != 1U) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x633 = INT64_MAX;
	int64_t x634 = -31810LL;
	int8_t x635 = INT8_MAX;
	static uint64_t x636 = 199130408830304LLU;
	static uint64_t t155 = 29LLU;

    t155 = ((x633>(x634<=x635))%x636);

    if (t155 != 1LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x637 = -66107145;
	volatile int32_t x638 = INT32_MAX;
	int64_t x639 = -77772LL;
	int64_t x640 = INT64_MAX;
	int64_t t156 = 26012964947047527LL;

    t156 = ((x637>(x638<=x639))%x640);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x641 = 1302U;
	uint32_t x642 = 44U;
	static int16_t x643 = -5;
	int64_t x644 = 784LL;
	int64_t t157 = 3933409755LL;

    t157 = ((x641>(x642<=x643))%x644);

    if (t157 != 1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x645 = INT32_MAX;
	static volatile uint64_t x646 = 4033418278787158LLU;
	static uint8_t x647 = 2U;
	static int32_t t158 = -199;

    t158 = ((x645>(x646<=x647))%x648);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x649 = INT32_MIN;
	volatile uint32_t x650 = 65768528U;
	volatile int32_t x651 = -45344267;
	uint64_t x652 = 1029961271318276LLU;
	static uint64_t t159 = 3216519LLU;

    t159 = ((x649>(x650<=x651))%x652);

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x653 = INT16_MIN;
	int32_t x655 = 296;
	static volatile int64_t t160 = 6061360LL;

    t160 = ((x653>(x654<=x655))%x656);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x657 = -1;
	int16_t x658 = INT16_MAX;
	int8_t x659 = INT8_MIN;
	int8_t x660 = -2;
	int32_t t161 = 58937005;

    t161 = ((x657>(x658<=x659))%x660);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x662 = 100U;
	int32_t x663 = 332646165;

    t162 = ((x661>(x662<=x663))%x664);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x666 = INT8_MIN;
	static volatile uint32_t x667 = UINT32_MAX;
	uint64_t x668 = UINT64_MAX;

    t163 = ((x665>(x666<=x667))%x668);

    if (t163 != 1LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int16_t x669 = -13079;
	static int8_t x671 = INT8_MIN;
	int64_t x672 = INT64_MAX;
	int64_t t164 = -6223243LL;

    t164 = ((x669>(x670<=x671))%x672);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x673 = 0U;
	int8_t x674 = INT8_MAX;
	volatile uint8_t x675 = 104U;
	static volatile uint64_t x676 = 559LLU;
	volatile uint64_t t165 = 4LLU;

    t165 = ((x673>(x674<=x675))%x676);

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x677 = -3912648246LL;
	int32_t x678 = 100354;
	int64_t x679 = -88200270204156LL;
	int16_t x680 = 3074;
	int32_t t166 = 233306;

    t166 = ((x677>(x678<=x679))%x680);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x682 = UINT16_MAX;
	int16_t x683 = -7110;
	static uint16_t x684 = UINT16_MAX;

    t167 = ((x681>(x682<=x683))%x684);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x685 = INT64_MAX;
	uint32_t x686 = UINT32_MAX;
	static uint64_t x687 = 116383917LLU;
	int8_t x688 = 3;
	int32_t t168 = 8163818;

    t168 = ((x685>(x686<=x687))%x688);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x689 = INT8_MAX;
	uint32_t x690 = UINT32_MAX;
	static volatile int8_t x691 = INT8_MIN;
	int32_t x692 = INT32_MAX;
	static volatile int32_t t169 = 8;

    t169 = ((x689>(x690<=x691))%x692);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int8_t x693 = -4;
	int16_t x694 = INT16_MIN;
	static int8_t x695 = -1;
	int64_t x696 = INT64_MIN;
	volatile int64_t t170 = 5388401489597LL;

    t170 = ((x693>(x694<=x695))%x696);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x697 = 0;
	int8_t x698 = INT8_MAX;
	volatile int32_t t171 = 2;

    t171 = ((x697>(x698<=x699))%x700);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x701 = INT32_MIN;
	int32_t x702 = INT32_MAX;
	int16_t x703 = 561;
	volatile int64_t x704 = 978038345917241820LL;
	static volatile int64_t t172 = -20495332032601104LL;

    t172 = ((x701>(x702<=x703))%x704);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x705 = 16LL;
	static int64_t x707 = -1LL;
	volatile int32_t t173 = -60043;

    t173 = ((x705>(x706<=x707))%x708);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x709 = -1;
	int8_t x710 = INT8_MAX;
	volatile int32_t x711 = INT32_MAX;
	static int16_t x712 = -1;
	int32_t t174 = 201;

    t174 = ((x709>(x710<=x711))%x712);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x713 = 20U;
	uint32_t x714 = 1540U;
	static volatile uint64_t x715 = 1613LLU;
	int64_t x716 = -1LL;
	int64_t t175 = 48587140LL;

    t175 = ((x713>(x714<=x715))%x716);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x718 = INT16_MIN;
	int8_t x719 = -14;
	uint16_t x720 = UINT16_MAX;
	volatile int32_t t176 = -1;

    t176 = ((x717>(x718<=x719))%x720);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x722 = 5066;
	int64_t x723 = INT64_MAX;
	uint64_t x724 = 1738LLU;
	volatile uint64_t t177 = 5LLU;

    t177 = ((x721>(x722<=x723))%x724);

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x725 = 69171964109141LL;
	static int16_t x727 = INT16_MIN;
	static int32_t t178 = -61;

    t178 = ((x725>(x726<=x727))%x728);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x729 = -1;
	int64_t x730 = -1LL;
	int64_t x731 = -273172608LL;
	uint16_t x732 = UINT16_MAX;
	static int32_t t179 = -6;

    t179 = ((x729>(x730<=x731))%x732);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x733 = -1;
	volatile uint16_t x734 = UINT16_MAX;
	uint8_t x735 = UINT8_MAX;
	uint16_t x736 = UINT16_MAX;
	int32_t t180 = -3;

    t180 = ((x733>(x734<=x735))%x736);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x737 = -372681134LL;
	volatile int8_t x740 = INT8_MIN;
	volatile int32_t t181 = -1006;

    t181 = ((x737>(x738<=x739))%x740);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x741 = 10U;
	uint16_t x742 = 17031U;
	int64_t x743 = -1LL;
	volatile int64_t x744 = INT64_MIN;
	volatile int64_t t182 = -39095191LL;

    t182 = ((x741>(x742<=x743))%x744);

    if (t182 != 1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x745 = 15U;
	uint16_t x746 = 1643U;
	uint64_t x747 = UINT64_MAX;
	uint64_t x748 = UINT64_MAX;
	uint64_t t183 = 1549LLU;

    t183 = ((x745>(x746<=x747))%x748);

    if (t183 != 1LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x751 = 29;
	int32_t x752 = INT32_MAX;
	volatile int32_t t184 = -64410;

    t184 = ((x749>(x750<=x751))%x752);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x753 = INT64_MIN;
	int16_t x754 = -3;
	static uint16_t x755 = 4U;
	int8_t x756 = -17;
	volatile int32_t t185 = -3142;

    t185 = ((x753>(x754<=x755))%x756);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x757 = INT16_MIN;
	static int32_t x759 = INT32_MIN;
	static int8_t x760 = -57;
	static volatile int32_t t186 = 184269;

    t186 = ((x757>(x758<=x759))%x760);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x761 = INT16_MIN;
	int8_t x763 = INT8_MIN;
	int64_t x764 = INT64_MIN;
	static volatile int64_t t187 = -23333805LL;

    t187 = ((x761>(x762<=x763))%x764);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x765 = INT32_MAX;
	uint32_t x766 = 1466802U;
	uint8_t x767 = UINT8_MAX;
	static int64_t x768 = INT64_MAX;
	volatile int64_t t188 = 563457064138166LL;

    t188 = ((x765>(x766<=x767))%x768);

    if (t188 != 1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint32_t x769 = 5681U;
	static volatile uint32_t x770 = UINT32_MAX;

    t189 = ((x769>(x770<=x771))%x772);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x773 = UINT32_MAX;
	static int8_t x774 = -1;
	int64_t x775 = INT64_MIN;
	volatile int32_t t190 = 26635;

    t190 = ((x773>(x774<=x775))%x776);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint32_t x779 = 1479719U;

    t191 = ((x777>(x778<=x779))%x780);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x781 = -1LL;
	int32_t x782 = INT32_MAX;
	uint16_t x784 = UINT16_MAX;
	int32_t t192 = -123935;

    t192 = ((x781>(x782<=x783))%x784);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x785 = 136U;
	int8_t x787 = INT8_MIN;
	volatile uint8_t x788 = 73U;
	volatile int32_t t193 = 396666;

    t193 = ((x785>(x786<=x787))%x788);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x789 = INT16_MAX;
	int16_t x790 = INT16_MIN;
	int32_t x791 = INT32_MIN;
	static int32_t x792 = 4012156;

    t194 = ((x789>(x790<=x791))%x792);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x794 = INT64_MIN;
	volatile int16_t x795 = INT16_MIN;

    t195 = ((x793>(x794<=x795))%x796);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile uint32_t x797 = 207U;
	int8_t x799 = INT8_MAX;
	int32_t x800 = -1;

    t196 = ((x797>(x798<=x799))%x800);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x801 = 10U;
	int64_t x802 = INT64_MIN;
	static int64_t x803 = -2887205LL;

    t197 = ((x801>(x802<=x803))%x804);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int16_t x805 = -1;
	static volatile int16_t x806 = INT16_MAX;
	uint64_t x807 = 1029224559048LLU;

    t198 = ((x805>(x806<=x807))%x808);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x809 = UINT32_MAX;
	int8_t x810 = -1;
	int64_t x812 = INT64_MIN;
	volatile int64_t t199 = 1LL;

    t199 = ((x809>(x810<=x811))%x812);

    if (t199 != 1LL) { NG(); } else { ; }
	
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

