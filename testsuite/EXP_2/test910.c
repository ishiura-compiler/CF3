
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

int32_t t0 = INT32_MIN;
static int16_t x9 = INT16_MIN;
static uint32_t x15 = UINT32_MAX;
uint8_t x19 = UINT8_MAX;
int8_t x29 = INT8_MIN;
volatile int16_t x30 = INT16_MIN;
int32_t t7 = 0;
int8_t x34 = -10;
static int16_t x43 = -1;
uint8_t x45 = UINT8_MAX;
volatile int32_t x48 = -1;
volatile int32_t t11 = -5048260;
volatile int64_t t14 = -1131528984962405424LL;
uint64_t x69 = 6LLU;
int16_t x76 = INT16_MIN;
static volatile int32_t t18 = 3;
int64_t x79 = 7658213225LL;
int16_t x80 = 15;
int32_t t19 = 102430312;
int16_t x82 = -1;
volatile int32_t t23 = -475;
volatile int32_t t24 = -624687813;
volatile int64_t t26 = 75285191890415615LL;
static int64_t t27 = 85LL;
int32_t x115 = -15160371;
volatile int64_t x121 = 78715834LL;
int8_t x122 = INT8_MIN;
int64_t x124 = INT64_MIN;
static uint8_t x129 = 13U;
int16_t x130 = INT16_MAX;
int8_t x131 = INT8_MIN;
int8_t x132 = -56;
volatile int64_t x133 = 99LL;
uint32_t x136 = UINT32_MAX;
static volatile uint32_t t33 = 64871305U;
volatile int64_t x138 = INT64_MIN;
static volatile uint8_t x141 = 28U;
uint16_t x146 = 27U;
volatile int32_t t36 = 2459654;
int8_t x156 = INT8_MAX;
static uint16_t x157 = 1U;
int8_t x158 = INT8_MAX;
int64_t x160 = INT64_MAX;
uint32_t x167 = UINT32_MAX;
int64_t x171 = 305LL;
static int8_t x172 = INT8_MIN;
int32_t t43 = -117080;
static int8_t x177 = -2;
uint32_t x183 = UINT32_MAX;
int64_t x184 = -1LL;
int64_t t45 = 43551346LL;
static volatile int32_t x192 = -30473;
volatile int8_t x193 = -1;
uint32_t x195 = 103486U;
int16_t x199 = 1;
int32_t t50 = -7;
static int16_t x205 = INT16_MIN;
uint8_t x210 = 0U;
static int16_t x212 = INT16_MAX;
int16_t x216 = -16371;
uint8_t x224 = 110U;
uint8_t x230 = UINT8_MAX;
static volatile uint8_t x231 = UINT8_MAX;
int32_t t57 = -574;
volatile int64_t x233 = -1LL;
int8_t x235 = INT8_MAX;
int64_t x236 = INT64_MIN;
volatile int64_t t58 = INT64_MIN;
int32_t t59 = 34;
int8_t x242 = 2;
static int8_t x253 = INT8_MAX;
int8_t x254 = -13;
int32_t t63 = 95128;
int64_t x257 = -1LL;
uint32_t x259 = 11960072U;
volatile int64_t x268 = -241799676287769229LL;
int32_t x269 = -1;
int8_t x272 = INT8_MIN;
volatile int32_t x276 = INT32_MAX;
static volatile uint16_t x277 = 47U;
static uint64_t x278 = 81103443LLU;
int8_t x280 = 0;
static uint16_t x283 = 220U;
int8_t x286 = -1;
volatile int64_t x288 = 32958194423065LL;
int8_t x289 = INT8_MAX;
volatile int32_t t72 = -272610760;
int16_t x302 = INT16_MAX;
static uint8_t x308 = UINT8_MAX;
static volatile int64_t x309 = 704108311287992810LL;
volatile uint16_t x310 = UINT16_MAX;
static int8_t x314 = INT8_MIN;
volatile uint32_t x315 = UINT32_MAX;
int32_t t78 = 18064898;
int64_t x318 = INT64_MIN;
int8_t x320 = 1;
volatile int16_t x330 = 971;
uint32_t x338 = 6709U;
static int16_t x339 = -1;
static int32_t x342 = INT32_MIN;
int16_t x346 = -11;
volatile int8_t x347 = INT8_MIN;
static volatile int32_t t85 = 9;
int32_t x349 = -7868;
int32_t x352 = INT32_MIN;
volatile int32_t t86 = -352;
volatile int16_t x355 = INT16_MAX;
volatile int32_t x356 = 559763;
int32_t x366 = INT32_MAX;
int32_t t90 = INT32_MAX;
volatile int16_t x378 = INT16_MIN;
int32_t x381 = INT32_MIN;
int8_t x387 = -1;
int32_t x398 = INT32_MIN;
int16_t x404 = INT16_MIN;
static int64_t x412 = INT64_MAX;
volatile int64_t t101 = 15179422LL;
int8_t x417 = -1;
static uint8_t x418 = UINT8_MAX;
int32_t t103 = 7530;
uint32_t x424 = UINT32_MAX;
int8_t x431 = -12;
int8_t x434 = -1;
static volatile int64_t x438 = 390759652159890033LL;
volatile uint64_t x445 = 1555414LLU;
volatile int64_t x448 = -6923LL;
static uint64_t x451 = UINT64_MAX;
int64_t x452 = 29649713LL;
volatile int32_t x453 = INT32_MIN;
int8_t x454 = -5;
int32_t t113 = 763091035;
uint16_t x465 = UINT16_MAX;
volatile int32_t x471 = -22773;
uint8_t x474 = 112U;
uint64_t x478 = 2077872155829LLU;
volatile int32_t x480 = INT32_MIN;
volatile uint8_t x484 = UINT8_MAX;
volatile int64_t x489 = -70565010LL;
static int16_t x498 = INT16_MAX;
volatile int32_t x503 = -314045;
uint32_t x504 = 3190U;
volatile int16_t x508 = -4747;
uint32_t x516 = 45U;
int8_t x518 = INT8_MAX;
uint16_t x522 = UINT16_MAX;
int64_t t131 = INT64_MAX;
int16_t x533 = -1;
int8_t x535 = 1;
int8_t x537 = INT8_MIN;
static uint64_t x538 = 16105252LLU;
volatile int32_t t133 = 19;
int64_t x546 = INT64_MIN;
uint16_t x552 = 7U;
uint64_t x553 = 45296202784783LLU;
int8_t x555 = -23;
uint64_t x556 = 402334963LLU;
int8_t x557 = INT8_MAX;
int8_t x558 = INT8_MAX;
int8_t x561 = INT8_MIN;
int8_t x570 = INT8_MIN;
volatile int16_t x579 = INT16_MIN;
static int64_t x589 = INT64_MIN;
volatile int32_t t145 = INT32_MAX;
uint8_t x593 = 90U;
static volatile uint64_t x599 = UINT64_MAX;
uint64_t x603 = 1159996401845237435LLU;
int64_t x605 = INT64_MIN;
int32_t t149 = -24;
int32_t t150 = 128;
static uint32_t x613 = UINT32_MAX;
static uint16_t x617 = 1757U;
int8_t x619 = INT8_MAX;
int8_t x626 = INT8_MIN;
uint32_t x630 = 15U;
int32_t t157 = -62161085;
uint16_t x641 = 74U;
uint64_t x642 = 47LLU;
static int64_t x644 = INT64_MIN;
int64_t t158 = 87526LL;
int8_t x646 = INT8_MIN;
uint64_t x648 = 6751615110615579762LLU;
static int16_t x650 = 60;
volatile int64_t x659 = INT64_MAX;
uint64_t x660 = 28333128459LLU;
int32_t x664 = -1279746;
int32_t t163 = 5033244;
int64_t x672 = 0LL;
uint64_t x673 = 5647LLU;
int32_t x675 = INT32_MAX;
static uint32_t x677 = UINT32_MAX;
int64_t x682 = -1LL;
static volatile int32_t t169 = -69844396;
uint8_t x694 = UINT8_MAX;
uint64_t x703 = 18664786196LLU;
volatile int32_t t173 = -2;
int32_t x713 = INT32_MIN;
int32_t x726 = -1;
uint16_t x727 = 1U;
volatile uint64_t x733 = 3916135151190637849LLU;
static int32_t x734 = -655853437;
volatile int64_t t181 = 67924724LL;
int16_t x737 = 62;
static int8_t x739 = -16;
uint16_t x741 = 0U;
volatile int32_t t183 = INT32_MIN;
static int32_t x745 = INT32_MAX;
int64_t x746 = 0LL;
int32_t x747 = INT32_MIN;
static int64_t x751 = INT64_MAX;
volatile int64_t x760 = INT64_MIN;
static uint16_t x773 = 826U;
uint64_t x774 = 799997244726795LLU;
volatile uint64_t x776 = 5488262LLU;
volatile int32_t x778 = INT32_MIN;
static int64_t x786 = INT64_MAX;
volatile int32_t t194 = INT32_MIN;
volatile int16_t x797 = -10;
int32_t x799 = INT32_MAX;
int16_t x802 = -1510;
int32_t t196 = -1;
uint32_t x806 = 61999679U;
int32_t x810 = -1069350510;
volatile uint8_t x818 = UINT8_MAX;


void f0(void) {
    	static int16_t x1 = INT16_MIN;
	static int32_t x2 = -404280;
	int16_t x3 = INT16_MAX;
	int32_t x4 = INT32_MIN;

    t0 = ((x1>(x2%x3))^x4);

    if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = INT64_MAX;
	static uint8_t x6 = 7U;
	uint8_t x7 = UINT8_MAX;
	volatile int8_t x8 = INT8_MIN;
	volatile int32_t t1 = -265076771;

    t1 = ((x5>(x6%x7))^x8);

    if (t1 != -127) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x10 = INT8_MAX;
	static int64_t x11 = -1345631705310001LL;
	static volatile int8_t x12 = INT8_MAX;
	volatile int32_t t2 = -88713;

    t2 = ((x9>(x10%x11))^x12);

    if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = 956;
	static uint8_t x14 = 19U;
	int32_t x16 = 27742824;
	int32_t t3 = -3;

    t3 = ((x13>(x14%x15))^x16);

    if (t3 != 27742825) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -43;
	volatile int32_t x18 = INT32_MIN;
	static int8_t x20 = INT8_MIN;
	volatile int32_t t4 = -5321869;

    t4 = ((x17>(x18%x19))^x20);

    if (t4 != -127) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int8_t x21 = -1;
	volatile int8_t x22 = -23;
	static int64_t x23 = 495LL;
	static uint64_t x24 = 87017LLU;
	volatile uint64_t t5 = 25006116820055LLU;

    t5 = ((x21>(x22%x23))^x24);

    if (t5 != 87016LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = UINT64_MAX;
	int32_t x26 = 7;
	volatile uint64_t x27 = UINT64_MAX;
	uint8_t x28 = 49U;
	static int32_t t6 = 337;

    t6 = ((x25>(x26%x27))^x28);

    if (t6 != 48) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x31 = INT16_MAX;
	int32_t x32 = -2313;

    t7 = ((x29>(x30%x31))^x32);

    if (t7 != -2313) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	int8_t x35 = -1;
	int32_t x36 = -1;
	int32_t t8 = 1869;

    t8 = ((x33>(x34%x35))^x36);

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 134482LLU;
	volatile uint32_t x38 = 16704920U;
	volatile int64_t x39 = 5LL;
	int32_t x40 = -1;
	int32_t t9 = 2074534;

    t9 = ((x37>(x38%x39))^x40);

    if (t9 != -2) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint64_t x41 = 154625718498166636LLU;
	int32_t x42 = 1230537;
	int8_t x44 = INT8_MIN;
	volatile int32_t t10 = 181;

    t10 = ((x41>(x42%x43))^x44);

    if (t10 != -127) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x46 = 16959990045253334LLU;
	int16_t x47 = INT16_MIN;

    t11 = ((x45>(x46%x47))^x48);

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x49 = INT32_MIN;
	volatile int32_t x50 = INT32_MIN;
	uint64_t x51 = UINT64_MAX;
	int64_t x52 = -662032523LL;
	volatile int64_t t12 = 4902610249474044LL;

    t12 = ((x49>(x50%x51))^x52);

    if (t12 != -662032523LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = -1;
	uint8_t x54 = UINT8_MAX;
	uint32_t x55 = 169924U;
	volatile int32_t x56 = -1;
	volatile int32_t t13 = -14;

    t13 = ((x53>(x54%x55))^x56);

    if (t13 != -2) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MIN;
	volatile uint32_t x58 = 4802360U;
	int16_t x59 = INT16_MIN;
	static int64_t x60 = 134130672962865LL;

    t14 = ((x57>(x58%x59))^x60);

    if (t14 != 134130672962864LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 2U;
	int16_t x62 = 6;
	uint64_t x63 = UINT64_MAX;
	int64_t x64 = INT64_MIN;
	int64_t t15 = INT64_MIN;

    t15 = ((x61>(x62%x63))^x64);

    if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 4U;
	int64_t x66 = -1LL;
	int32_t x67 = -238;
	int16_t x68 = 831;
	static volatile int32_t t16 = 24;

    t16 = ((x65>(x66%x67))^x68);

    if (t16 != 830) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x70 = 401;
	int64_t x71 = -1LL;
	int8_t x72 = INT8_MIN;
	volatile int32_t t17 = -15039416;

    t17 = ((x69>(x70%x71))^x72);

    if (t17 != -127) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = -1498017389LL;
	static volatile int8_t x74 = INT8_MAX;
	uint16_t x75 = 2U;

    t18 = ((x73>(x74%x75))^x76);

    if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = -1;
	volatile int32_t x78 = INT32_MAX;

    t19 = ((x77>(x78%x79))^x80);

    if (t19 != 15) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x81 = 1751U;
	static volatile uint64_t x83 = 1308LLU;
	int32_t x84 = 0;
	int32_t t20 = 17980626;

    t20 = ((x81>(x82%x83))^x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint32_t x85 = 67187120U;
	volatile int32_t x86 = -1;
	uint16_t x87 = 1U;
	int8_t x88 = INT8_MIN;
	static int32_t t21 = 200285592;

    t21 = ((x85>(x86%x87))^x88);

    if (t21 != -127) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x89 = INT32_MIN;
	int16_t x90 = -6852;
	volatile int64_t x91 = INT64_MIN;
	int8_t x92 = INT8_MIN;
	int32_t t22 = -213310322;

    t22 = ((x89>(x90%x91))^x92);

    if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x93 = -1LL;
	int8_t x94 = INT8_MAX;
	volatile int32_t x95 = INT32_MIN;
	uint8_t x96 = UINT8_MAX;

    t23 = ((x93>(x94%x95))^x96);

    if (t23 != 255) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = INT32_MIN;
	static int16_t x98 = -4;
	int32_t x99 = INT32_MIN;
	int16_t x100 = -1;

    t24 = ((x97>(x98%x99))^x100);

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = 3943123482973350429LLU;
	uint16_t x102 = 15U;
	int16_t x103 = INT16_MAX;
	uint16_t x104 = 2401U;
	int32_t t25 = -33596;

    t25 = ((x101>(x102%x103))^x104);

    if (t25 != 2400) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x105 = 4U;
	int64_t x106 = -28293LL;
	uint8_t x107 = UINT8_MAX;
	volatile int64_t x108 = INT64_MAX;

    t26 = ((x105>(x106%x107))^x108);

    if (t26 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x109 = INT8_MAX;
	int8_t x110 = -6;
	volatile int64_t x111 = -556822031780706LL;
	int64_t x112 = INT64_MAX;

    t27 = ((x109>(x110%x111))^x112);

    if (t27 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x113 = 63U;
	uint64_t x114 = 273450507203653LLU;
	int16_t x116 = INT16_MIN;
	volatile int32_t t28 = -8;

    t28 = ((x113>(x114%x115))^x116);

    if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x117 = INT32_MIN;
	int64_t x118 = INT64_MAX;
	int8_t x119 = INT8_MIN;
	static int32_t x120 = 8;
	volatile int32_t t29 = 7201748;

    t29 = ((x117>(x118%x119))^x120);

    if (t29 != 8) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x123 = 4829U;
	volatile int64_t t30 = -11160055626LL;

    t30 = ((x121>(x122%x123))^x124);

    if (t30 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = -24;
	uint8_t x126 = UINT8_MAX;
	static int32_t x127 = -648412317;
	int32_t x128 = INT32_MIN;
	volatile int32_t t31 = INT32_MIN;

    t31 = ((x125>(x126%x127))^x128);

    if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t t32 = -10499;

    t32 = ((x129>(x130%x131))^x132);

    if (t32 != -56) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x134 = -49556161;
	int32_t x135 = 93159;

    t33 = ((x133>(x134%x135))^x136);

    if (t33 != 4294967294U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x137 = UINT64_MAX;
	uint8_t x139 = 1U;
	static int8_t x140 = INT8_MIN;
	int32_t t34 = -794437;

    t34 = ((x137>(x138%x139))^x140);

    if (t34 != -127) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x142 = INT64_MAX;
	uint64_t x143 = 88081537LLU;
	int8_t x144 = INT8_MAX;
	int32_t t35 = -20686;

    t35 = ((x141>(x142%x143))^x144);

    if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = -1;
	uint32_t x147 = UINT32_MAX;
	uint16_t x148 = 5585U;

    t36 = ((x145>(x146%x147))^x148);

    if (t36 != 5584) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x149 = UINT32_MAX;
	volatile int32_t x150 = 0;
	uint16_t x151 = UINT16_MAX;
	int32_t x152 = -1;
	volatile int32_t t37 = -12532516;

    t37 = ((x149>(x150%x151))^x152);

    if (t37 != -2) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MIN;
	uint32_t x154 = UINT32_MAX;
	static uint64_t x155 = 64759654908LLU;
	static volatile int32_t t38 = 9117;

    t38 = ((x153>(x154%x155))^x156);

    if (t38 != 126) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x159 = 59;
	static volatile int64_t t39 = INT64_MAX;

    t39 = ((x157>(x158%x159))^x160);

    if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x161 = -1LL;
	uint32_t x162 = 174192905U;
	int32_t x163 = INT32_MIN;
	static volatile int16_t x164 = 117;
	volatile int32_t t40 = -2426782;

    t40 = ((x161>(x162%x163))^x164);

    if (t40 != 117) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = 56LL;
	static uint16_t x166 = 2U;
	uint32_t x168 = 12U;
	uint32_t t41 = 1469702796U;

    t41 = ((x165>(x166%x167))^x168);

    if (t41 != 13U) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = -1LL;
	static int8_t x170 = INT8_MIN;
	static int32_t t42 = 30486;

    t42 = ((x169>(x170%x171))^x172);

    if (t42 != -127) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = -1;
	int32_t x174 = 397519867;
	uint8_t x175 = 5U;
	static int32_t x176 = -1;

    t43 = ((x173>(x174%x175))^x176);

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x178 = 1669655524333284LLU;
	int16_t x179 = -1;
	uint32_t x180 = UINT32_MAX;
	volatile uint32_t t44 = 5U;

    t44 = ((x177>(x178%x179))^x180);

    if (t44 != 4294967294U) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = INT16_MIN;
	uint64_t x182 = UINT64_MAX;

    t45 = ((x181>(x182%x183))^x184);

    if (t45 != -2LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x185 = 7112746U;
	static volatile int64_t x186 = INT64_MAX;
	volatile int64_t x187 = -1LL;
	volatile int16_t x188 = INT16_MIN;
	int32_t t46 = 8607253;

    t46 = ((x185>(x186%x187))^x188);

    if (t46 != -32767) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = 640726428468LL;
	uint64_t x190 = 26359LLU;
	static int16_t x191 = -1;
	int32_t t47 = 78647042;

    t47 = ((x189>(x190%x191))^x192);

    if (t47 != -30474) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x194 = 23LLU;
	uint16_t x196 = 1972U;
	volatile int32_t t48 = 3;

    t48 = ((x193>(x194%x195))^x196);

    if (t48 != 1973) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = -83167348386712LL;
	static uint8_t x198 = 28U;
	volatile uint16_t x200 = 4U;
	int32_t t49 = 58016;

    t49 = ((x197>(x198%x199))^x200);

    if (t49 != 4) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = INT8_MIN;
	static int8_t x202 = 1;
	int64_t x203 = INT64_MIN;
	static volatile int16_t x204 = INT16_MAX;

    t50 = ((x201>(x202%x203))^x204);

    if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x206 = INT64_MAX;
	uint8_t x207 = 27U;
	volatile int8_t x208 = -1;
	static int32_t t51 = 90221;

    t51 = ((x205>(x206%x207))^x208);

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x209 = 57U;
	int8_t x211 = INT8_MAX;
	volatile int32_t t52 = -1609;

    t52 = ((x209>(x210%x211))^x212);

    if (t52 != 32766) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MIN;
	int64_t x214 = -2358935754222121LL;
	volatile int64_t x215 = -1LL;
	volatile int32_t t53 = 516656529;

    t53 = ((x213>(x214%x215))^x216);

    if (t53 != -16371) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = 1;
	int8_t x218 = INT8_MAX;
	int16_t x219 = INT16_MIN;
	int8_t x220 = INT8_MIN;
	volatile int32_t t54 = 248925;

    t54 = ((x217>(x218%x219))^x220);

    if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint64_t x221 = 351668624203LLU;
	static uint16_t x222 = 44U;
	uint32_t x223 = UINT32_MAX;
	int32_t t55 = -7202508;

    t55 = ((x221>(x222%x223))^x224);

    if (t55 != 111) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint8_t x225 = 77U;
	uint8_t x226 = 28U;
	int64_t x227 = -1LL;
	uint32_t x228 = 13348538U;
	volatile uint32_t t56 = 122259163U;

    t56 = ((x225>(x226%x227))^x228);

    if (t56 != 13348539U) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = -103104373550233635LL;
	volatile int8_t x232 = INT8_MAX;

    t57 = ((x229>(x230%x231))^x232);

    if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x234 = 12102239U;

    t58 = ((x233>(x234%x235))^x236);

    if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = UINT16_MAX;
	volatile int64_t x238 = 7536358LL;
	volatile uint64_t x239 = 6548445LLU;
	static int8_t x240 = INT8_MIN;

    t59 = ((x237>(x238%x239))^x240);

    if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = INT16_MIN;
	int8_t x243 = -1;
	int32_t x244 = INT32_MIN;
	volatile int32_t t60 = INT32_MIN;

    t60 = ((x241>(x242%x243))^x244);

    if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = 73677697LL;
	static int64_t x246 = INT64_MIN;
	uint8_t x247 = UINT8_MAX;
	int16_t x248 = -1;
	static int32_t t61 = -2726712;

    t61 = ((x245>(x246%x247))^x248);

    if (t61 != -2) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = -1;
	uint32_t x250 = UINT32_MAX;
	uint8_t x251 = 37U;
	static int8_t x252 = 1;
	int32_t t62 = 1;

    t62 = ((x249>(x250%x251))^x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x255 = INT8_MAX;
	int8_t x256 = INT8_MIN;

    t63 = ((x253>(x254%x255))^x256);

    if (t63 != -127) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint64_t x258 = UINT64_MAX;
	int64_t x260 = 134502091LL;
	volatile int64_t t64 = 71370294852954350LL;

    t64 = ((x257>(x258%x259))^x260);

    if (t64 != 134502090LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = 948;
	uint8_t x262 = 11U;
	static int8_t x263 = INT8_MIN;
	static uint32_t x264 = UINT32_MAX;
	volatile uint32_t t65 = 24U;

    t65 = ((x261>(x262%x263))^x264);

    if (t65 != 4294967294U) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x265 = -15LL;
	int32_t x266 = -455290;
	static int16_t x267 = -11;
	volatile int64_t t66 = 55861054LL;

    t66 = ((x265>(x266%x267))^x268);

    if (t66 != -241799676287769229LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x270 = 22156U;
	int64_t x271 = INT64_MIN;
	static volatile int32_t t67 = 0;

    t67 = ((x269>(x270%x271))^x272);

    if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x273 = 117334669159LLU;
	uint32_t x274 = 455935448U;
	int32_t x275 = 1;
	int32_t t68 = -365140580;

    t68 = ((x273>(x274%x275))^x276);

    if (t68 != 2147483646) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x279 = 2688U;
	int32_t t69 = 267;

    t69 = ((x277>(x278%x279))^x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = 0LL;
	int64_t x282 = 2LL;
	volatile uint8_t x284 = 0U;
	volatile int32_t t70 = 228838276;

    t70 = ((x281>(x282%x283))^x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x285 = 526U;
	int32_t x287 = INT32_MAX;
	int64_t t71 = -21679LL;

    t71 = ((x285>(x286%x287))^x288);

    if (t71 != 32958194423065LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x290 = 6;
	int32_t x291 = INT32_MAX;
	static volatile int8_t x292 = INT8_MAX;

    t72 = ((x289>(x290%x291))^x292);

    if (t72 != 126) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = INT16_MIN;
	int16_t x294 = -1;
	volatile int16_t x295 = INT16_MIN;
	volatile int32_t x296 = INT32_MAX;
	volatile int32_t t73 = INT32_MAX;

    t73 = ((x293>(x294%x295))^x296);

    if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint16_t x297 = 25U;
	int64_t x298 = INT64_MIN;
	volatile int32_t x299 = INT32_MIN;
	int64_t x300 = -1199429LL;
	int64_t t74 = 109850006143761LL;

    t74 = ((x297>(x298%x299))^x300);

    if (t74 != -1199430LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = 36;
	uint8_t x303 = UINT8_MAX;
	volatile int8_t x304 = INT8_MIN;
	volatile int32_t t75 = -3;

    t75 = ((x301>(x302%x303))^x304);

    if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x305 = 36U;
	volatile int16_t x306 = 0;
	uint8_t x307 = 20U;
	volatile int32_t t76 = 69;

    t76 = ((x305>(x306%x307))^x308);

    if (t76 != 254) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x311 = UINT64_MAX;
	static int32_t x312 = INT32_MAX;
	int32_t t77 = -3354144;

    t77 = ((x309>(x310%x311))^x312);

    if (t77 != 2147483646) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x313 = -4;
	volatile int16_t x316 = 9;

    t78 = ((x313>(x314%x315))^x316);

    if (t78 != 8) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x317 = INT32_MIN;
	static uint64_t x319 = UINT64_MAX;
	int32_t t79 = 241;

    t79 = ((x317>(x318%x319))^x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x325 = 572735LL;
	uint64_t x326 = 320201309LLU;
	int64_t x327 = -71406813413908LL;
	volatile int16_t x328 = 1;
	static int32_t t80 = -204;

    t80 = ((x325>(x326%x327))^x328);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x329 = 78788676393394662LL;
	int8_t x331 = -1;
	int16_t x332 = 1006;
	int32_t t81 = -348237;

    t81 = ((x329>(x330%x331))^x332);

    if (t81 != 1007) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x333 = INT16_MIN;
	int16_t x334 = INT16_MAX;
	int64_t x335 = -4855LL;
	volatile uint32_t x336 = UINT32_MAX;
	uint32_t t82 = UINT32_MAX;

    t82 = ((x333>(x334%x335))^x336);

    if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x337 = INT16_MIN;
	volatile int32_t x340 = INT32_MIN;
	volatile int32_t t83 = 4065375;

    t83 = ((x337>(x338%x339))^x340);

    if (t83 != -2147483647) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int8_t x341 = 40;
	int8_t x343 = INT8_MIN;
	uint32_t x344 = 224266U;
	uint32_t t84 = 6686U;

    t84 = ((x341>(x342%x343))^x344);

    if (t84 != 224267U) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x345 = INT16_MAX;
	int16_t x348 = 3056;

    t85 = ((x345>(x346%x347))^x348);

    if (t85 != 3057) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x350 = 1U;
	uint32_t x351 = 6U;

    t86 = ((x349>(x350%x351))^x352);

    if (t86 != -2147483647) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint64_t x353 = UINT64_MAX;
	int32_t x354 = INT32_MAX;
	int32_t t87 = 14222932;

    t87 = ((x353>(x354%x355))^x356);

    if (t87 != 559762) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint64_t x357 = 8115512639924616572LLU;
	int64_t x358 = INT64_MAX;
	int8_t x359 = 6;
	uint16_t x360 = 0U;
	volatile int32_t t88 = -739132511;

    t88 = ((x357>(x358%x359))^x360);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x361 = 55U;
	uint32_t x362 = 77620933U;
	volatile int8_t x363 = -1;
	static uint16_t x364 = 3916U;
	int32_t t89 = 243;

    t89 = ((x361>(x362%x363))^x364);

    if (t89 != 3916) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x365 = UINT16_MAX;
	static int32_t x367 = INT32_MIN;
	volatile int32_t x368 = INT32_MAX;

    t90 = ((x365>(x366%x367))^x368);

    if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x369 = -1LL;
	int8_t x370 = INT8_MAX;
	volatile int32_t x371 = 4;
	volatile int16_t x372 = 841;
	static int32_t t91 = 829909646;

    t91 = ((x369>(x370%x371))^x372);

    if (t91 != 841) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x373 = -39006LL;
	volatile uint16_t x374 = UINT16_MAX;
	int64_t x375 = INT64_MIN;
	int32_t x376 = -176732;
	int32_t t92 = 0;

    t92 = ((x373>(x374%x375))^x376);

    if (t92 != -176732) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x377 = INT32_MIN;
	volatile int64_t x379 = INT64_MIN;
	volatile uint8_t x380 = 2U;
	static int32_t t93 = 3128;

    t93 = ((x377>(x378%x379))^x380);

    if (t93 != 2) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x382 = INT8_MAX;
	static volatile int8_t x383 = -2;
	volatile uint32_t x384 = 3011696U;
	uint32_t t94 = 3308736U;

    t94 = ((x381>(x382%x383))^x384);

    if (t94 != 3011696U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x385 = 221515570U;
	int32_t x386 = INT32_MIN;
	static int32_t x388 = -1;
	int32_t t95 = 759748;

    t95 = ((x385>(x386%x387))^x388);

    if (t95 != -2) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x389 = INT32_MIN;
	volatile int32_t x390 = -1;
	uint32_t x391 = 7U;
	volatile uint16_t x392 = UINT16_MAX;
	static int32_t t96 = 7;

    t96 = ((x389>(x390%x391))^x392);

    if (t96 != 65534) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x393 = 7U;
	int32_t x394 = -3574;
	uint32_t x395 = UINT32_MAX;
	static uint8_t x396 = UINT8_MAX;
	int32_t t97 = 454269692;

    t97 = ((x393>(x394%x395))^x396);

    if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x397 = INT8_MIN;
	static volatile int32_t x399 = INT32_MAX;
	volatile int8_t x400 = INT8_MAX;
	int32_t t98 = 9900922;

    t98 = ((x397>(x398%x399))^x400);

    if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x401 = 0U;
	uint64_t x402 = UINT64_MAX;
	int16_t x403 = -1;
	volatile int32_t t99 = 392626;

    t99 = ((x401>(x402%x403))^x404);

    if (t99 != -32768) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x405 = INT8_MAX;
	int16_t x406 = -1;
	int8_t x407 = INT8_MIN;
	int64_t x408 = INT64_MIN;
	volatile int64_t t100 = 6LL;

    t100 = ((x405>(x406%x407))^x408);

    if (t100 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x409 = 0;
	int8_t x410 = INT8_MIN;
	static int16_t x411 = INT16_MIN;

    t101 = ((x409>(x410%x411))^x412);

    if (t101 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint32_t x413 = UINT32_MAX;
	volatile int32_t x414 = INT32_MIN;
	uint16_t x415 = 2674U;
	int32_t x416 = -1;
	static volatile int32_t t102 = 0;

    t102 = ((x413>(x414%x415))^x416);

    if (t102 != -2) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x419 = 44U;
	uint8_t x420 = 7U;

    t103 = ((x417>(x418%x419))^x420);

    if (t103 != 7) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x421 = INT16_MIN;
	int8_t x422 = INT8_MIN;
	int16_t x423 = -664;
	volatile uint32_t t104 = UINT32_MAX;

    t104 = ((x421>(x422%x423))^x424);

    if (t104 != UINT32_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x425 = INT16_MIN;
	static volatile int8_t x426 = INT8_MIN;
	int16_t x427 = -1;
	int64_t x428 = 65118502865974LL;
	int64_t t105 = -66231878322773LL;

    t105 = ((x425>(x426%x427))^x428);

    if (t105 != 65118502865974LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x429 = 7554663LLU;
	int8_t x430 = INT8_MIN;
	uint64_t x432 = UINT64_MAX;
	volatile uint64_t t106 = UINT64_MAX;

    t106 = ((x429>(x430%x431))^x432);

    if (t106 != UINT64_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x433 = 61;
	int64_t x435 = 165699398611LL;
	uint32_t x436 = UINT32_MAX;
	uint32_t t107 = 2998064U;

    t107 = ((x433>(x434%x435))^x436);

    if (t107 != 4294967294U) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x437 = 17;
	uint8_t x439 = UINT8_MAX;
	int64_t x440 = INT64_MAX;
	volatile int64_t t108 = INT64_MAX;

    t108 = ((x437>(x438%x439))^x440);

    if (t108 != INT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x441 = INT64_MIN;
	int8_t x442 = -3;
	int32_t x443 = -53;
	int16_t x444 = INT16_MIN;
	int32_t t109 = -771587;

    t109 = ((x441>(x442%x443))^x444);

    if (t109 != -32768) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x446 = -1;
	int32_t x447 = INT32_MAX;
	volatile int64_t t110 = 32LL;

    t110 = ((x445>(x446%x447))^x448);

    if (t110 != -6923LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x449 = UINT64_MAX;
	uint8_t x450 = UINT8_MAX;
	volatile int64_t t111 = 920087341LL;

    t111 = ((x449>(x450%x451))^x452);

    if (t111 != 29649712LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x455 = 4029619220LLU;
	static uint16_t x456 = 681U;
	volatile int32_t t112 = 407489435;

    t112 = ((x453>(x454%x455))^x456);

    if (t112 != 680) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x457 = INT32_MAX;
	uint32_t x458 = 48U;
	uint8_t x459 = UINT8_MAX;
	static volatile int16_t x460 = -1;

    t113 = ((x457>(x458%x459))^x460);

    if (t113 != -2) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint16_t x461 = 26U;
	int8_t x462 = -4;
	uint16_t x463 = 207U;
	int64_t x464 = -1LL;
	static int64_t t114 = -152277470550570LL;

    t114 = ((x461>(x462%x463))^x464);

    if (t114 != -2LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x466 = INT64_MAX;
	int16_t x467 = INT16_MIN;
	static int8_t x468 = -1;
	int32_t t115 = 217;

    t115 = ((x465>(x466%x467))^x468);

    if (t115 != -2) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x469 = 98558U;
	int64_t x470 = INT64_MIN;
	static uint32_t x472 = UINT32_MAX;
	static volatile uint32_t t116 = 0U;

    t116 = ((x469>(x470%x471))^x472);

    if (t116 != 4294967294U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x473 = 76LLU;
	volatile int16_t x475 = -1;
	int8_t x476 = INT8_MIN;
	static volatile int32_t t117 = -621656;

    t117 = ((x473>(x474%x475))^x476);

    if (t117 != -127) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x477 = -486;
	static int16_t x479 = INT16_MIN;
	int32_t t118 = -374911595;

    t118 = ((x477>(x478%x479))^x480);

    if (t118 != -2147483647) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x481 = 1U;
	int8_t x482 = 6;
	uint64_t x483 = UINT64_MAX;
	int32_t t119 = -1984382;

    t119 = ((x481>(x482%x483))^x484);

    if (t119 != 255) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x485 = INT8_MIN;
	volatile int32_t x486 = INT32_MIN;
	int32_t x487 = -1;
	int16_t x488 = -1;
	int32_t t120 = -392616984;

    t120 = ((x485>(x486%x487))^x488);

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x490 = INT64_MIN;
	uint64_t x491 = 1888840317LLU;
	int32_t x492 = INT32_MIN;
	int32_t t121 = 1300;

    t121 = ((x489>(x490%x491))^x492);

    if (t121 != -2147483647) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x493 = -2;
	int8_t x494 = INT8_MIN;
	uint8_t x495 = 3U;
	static int16_t x496 = INT16_MIN;
	volatile int32_t t122 = 7187;

    t122 = ((x493>(x494%x495))^x496);

    if (t122 != -32768) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint8_t x497 = 0U;
	static uint64_t x499 = 11102423LLU;
	volatile uint8_t x500 = 0U;
	int32_t t123 = -211027249;

    t123 = ((x497>(x498%x499))^x500);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x501 = UINT8_MAX;
	int8_t x502 = INT8_MIN;
	volatile uint32_t t124 = 49155770U;

    t124 = ((x501>(x502%x503))^x504);

    if (t124 != 3191U) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x505 = 2008;
	int32_t x506 = INT32_MIN;
	int64_t x507 = 95259971LL;
	int32_t t125 = 3786;

    t125 = ((x505>(x506%x507))^x508);

    if (t125 != -4748) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x509 = 207411539011791683LL;
	static int32_t x510 = -1;
	uint32_t x511 = 2906711U;
	int64_t x512 = INT64_MAX;
	int64_t t126 = -2868842406484758LL;

    t126 = ((x509>(x510%x511))^x512);

    if (t126 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x513 = 0U;
	volatile int16_t x514 = 764;
	volatile int16_t x515 = -7;
	volatile uint32_t t127 = 0U;

    t127 = ((x513>(x514%x515))^x516);

    if (t127 != 45U) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x517 = 3;
	static int64_t x519 = INT64_MIN;
	int8_t x520 = INT8_MIN;
	int32_t t128 = -795;

    t128 = ((x517>(x518%x519))^x520);

    if (t128 != -128) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x521 = 4U;
	int32_t x523 = INT32_MAX;
	static uint16_t x524 = 578U;
	int32_t t129 = -259837;

    t129 = ((x521>(x522%x523))^x524);

    if (t129 != 578) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x525 = -232;
	int64_t x526 = -1LL;
	int64_t x527 = INT64_MIN;
	static volatile uint32_t x528 = 7U;
	volatile uint32_t t130 = 52915086U;

    t130 = ((x525>(x526%x527))^x528);

    if (t130 != 7U) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int8_t x529 = -1;
	int16_t x530 = -1;
	int64_t x531 = 20873170179LL;
	int64_t x532 = INT64_MAX;

    t131 = ((x529>(x530%x531))^x532);

    if (t131 != INT64_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x534 = -1;
	int64_t x536 = -6LL;
	int64_t t132 = -1948350428699074332LL;

    t132 = ((x533>(x534%x535))^x536);

    if (t132 != -6LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x539 = -1063;
	int32_t x540 = INT32_MIN;

    t133 = ((x537>(x538%x539))^x540);

    if (t133 != -2147483647) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x541 = INT16_MIN;
	static volatile int16_t x542 = INT16_MIN;
	static volatile int32_t x543 = INT32_MAX;
	int8_t x544 = INT8_MAX;
	volatile int32_t t134 = -109283605;

    t134 = ((x541>(x542%x543))^x544);

    if (t134 != 127) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x545 = INT16_MIN;
	volatile int64_t x547 = INT64_MIN;
	int64_t x548 = INT64_MIN;
	int64_t t135 = INT64_MIN;

    t135 = ((x545>(x546%x547))^x548);

    if (t135 != INT64_MIN) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x549 = -1;
	volatile int32_t x550 = INT32_MIN;
	static int16_t x551 = INT16_MIN;
	int32_t t136 = -1343972;

    t136 = ((x549>(x550%x551))^x552);

    if (t136 != 7) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x554 = INT64_MIN;
	static volatile uint64_t t137 = 1908600795027LLU;

    t137 = ((x553>(x554%x555))^x556);

    if (t137 != 402334963LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x559 = 2303560U;
	static uint32_t x560 = 16819018U;
	uint32_t t138 = 173U;

    t138 = ((x557>(x558%x559))^x560);

    if (t138 != 16819018U) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x562 = INT32_MIN;
	static uint64_t x563 = 88616400841599LLU;
	static int32_t x564 = -1;
	int32_t t139 = -45441785;

    t139 = ((x561>(x562%x563))^x564);

    if (t139 != -2) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x569 = 0;
	static volatile uint8_t x571 = 1U;
	static uint32_t x572 = UINT32_MAX;
	static uint32_t t140 = UINT32_MAX;

    t140 = ((x569>(x570%x571))^x572);

    if (t140 != UINT32_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x573 = INT32_MAX;
	int32_t x574 = -1;
	int64_t x575 = INT64_MAX;
	int8_t x576 = 2;
	volatile int32_t t141 = 205517184;

    t141 = ((x573>(x574%x575))^x576);

    if (t141 != 3) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x577 = 12LL;
	static uint64_t x578 = UINT64_MAX;
	int8_t x580 = -3;
	static volatile int32_t t142 = -222649;

    t142 = ((x577>(x578%x579))^x580);

    if (t142 != -3) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x581 = -1LL;
	uint64_t x582 = 367514742326421988LLU;
	int8_t x583 = -30;
	uint64_t x584 = 144429LLU;
	uint64_t t143 = 0LLU;

    t143 = ((x581>(x582%x583))^x584);

    if (t143 != 144428LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x585 = UINT16_MAX;
	int32_t x586 = INT32_MIN;
	int64_t x587 = INT64_MIN;
	int32_t x588 = INT32_MAX;
	volatile int32_t t144 = -1;

    t144 = ((x585>(x586%x587))^x588);

    if (t144 != 2147483646) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x590 = INT64_MIN;
	uint8_t x591 = 41U;
	int32_t x592 = INT32_MAX;

    t145 = ((x589>(x590%x591))^x592);

    if (t145 != INT32_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x594 = 96U;
	int16_t x595 = INT16_MAX;
	int8_t x596 = INT8_MAX;
	volatile int32_t t146 = -5396;

    t146 = ((x593>(x594%x595))^x596);

    if (t146 != 127) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x597 = INT16_MIN;
	int16_t x598 = INT16_MAX;
	int32_t x600 = -156275748;
	volatile int32_t t147 = -337550568;

    t147 = ((x597>(x598%x599))^x600);

    if (t147 != -156275747) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x601 = -1;
	int8_t x602 = INT8_MIN;
	int16_t x604 = INT16_MIN;
	volatile int32_t t148 = 62035;

    t148 = ((x601>(x602%x603))^x604);

    if (t148 != -32767) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x606 = INT64_MIN;
	volatile int8_t x607 = -1;
	uint8_t x608 = UINT8_MAX;

    t149 = ((x605>(x606%x607))^x608);

    if (t149 != 255) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x609 = INT64_MIN;
	int32_t x610 = -25584517;
	int16_t x611 = -1;
	static uint16_t x612 = 0U;

    t150 = ((x609>(x610%x611))^x612);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x614 = INT64_MIN;
	uint16_t x615 = 53U;
	uint8_t x616 = 0U;
	int32_t t151 = -244565541;

    t151 = ((x613>(x614%x615))^x616);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint8_t x618 = 3U;
	int32_t x620 = -1;
	int32_t t152 = -35865;

    t152 = ((x617>(x618%x619))^x620);

    if (t152 != -2) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x621 = -2700646LL;
	int16_t x622 = 1;
	volatile int8_t x623 = INT8_MAX;
	uint32_t x624 = 0U;
	uint32_t t153 = 14982135U;

    t153 = ((x621>(x622%x623))^x624);

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x625 = -1LL;
	int32_t x627 = INT32_MIN;
	volatile int8_t x628 = 28;
	volatile int32_t t154 = 12181;

    t154 = ((x625>(x626%x627))^x628);

    if (t154 != 29) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x629 = UINT8_MAX;
	int8_t x631 = -1;
	static int64_t x632 = 235638626534532LL;
	int64_t t155 = -780367855LL;

    t155 = ((x629>(x630%x631))^x632);

    if (t155 != 235638626534533LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x633 = INT16_MAX;
	uint8_t x634 = 3U;
	uint16_t x635 = 182U;
	uint8_t x636 = UINT8_MAX;
	int32_t t156 = -24473184;

    t156 = ((x633>(x634%x635))^x636);

    if (t156 != 254) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint32_t x637 = UINT32_MAX;
	int16_t x638 = INT16_MIN;
	int64_t x639 = INT64_MIN;
	volatile int8_t x640 = -1;

    t157 = ((x637>(x638%x639))^x640);

    if (t157 != -2) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x643 = 6621229042760LL;

    t158 = ((x641>(x642%x643))^x644);

    if (t158 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int16_t x645 = 73;
	static uint8_t x647 = 15U;
	volatile uint64_t t159 = 25LLU;

    t159 = ((x645>(x646%x647))^x648);

    if (t159 != 6751615110615579763LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x649 = INT32_MIN;
	static int8_t x651 = INT8_MAX;
	int32_t x652 = -1;
	volatile int32_t t160 = 1395;

    t160 = ((x649>(x650%x651))^x652);

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x653 = -7;
	int64_t x654 = -1LL;
	static int64_t x655 = INT64_MAX;
	uint32_t x656 = 151670637U;
	uint32_t t161 = 29618U;

    t161 = ((x653>(x654%x655))^x656);

    if (t161 != 151670637U) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x657 = INT16_MAX;
	int8_t x658 = -60;
	volatile uint64_t t162 = 129LLU;

    t162 = ((x657>(x658%x659))^x660);

    if (t162 != 28333128458LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x661 = UINT8_MAX;
	static int8_t x662 = -1;
	volatile int16_t x663 = -1;

    t163 = ((x661>(x662%x663))^x664);

    if (t163 != -1279745) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x665 = INT8_MAX;
	volatile int8_t x666 = -1;
	int32_t x667 = 1363;
	int32_t x668 = INT32_MIN;
	int32_t t164 = -144;

    t164 = ((x665>(x666%x667))^x668);

    if (t164 != -2147483647) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x669 = INT32_MIN;
	uint32_t x670 = 99388682U;
	static volatile int64_t x671 = INT64_MAX;
	int64_t t165 = 91LL;

    t165 = ((x669>(x670%x671))^x672);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint32_t x674 = 2U;
	int16_t x676 = INT16_MIN;
	volatile int32_t t166 = 19;

    t166 = ((x673>(x674%x675))^x676);

    if (t166 != -32767) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x678 = 2LLU;
	static uint16_t x679 = UINT16_MAX;
	volatile int32_t x680 = INT32_MIN;
	volatile int32_t t167 = 49607;

    t167 = ((x677>(x678%x679))^x680);

    if (t167 != -2147483647) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x681 = UINT64_MAX;
	static uint8_t x683 = 19U;
	static int16_t x684 = 11;
	static int32_t t168 = 108659;

    t168 = ((x681>(x682%x683))^x684);

    if (t168 != 11) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x685 = 250308493568664026LLU;
	int32_t x686 = 0;
	uint64_t x687 = UINT64_MAX;
	volatile int8_t x688 = INT8_MAX;

    t169 = ((x685>(x686%x687))^x688);

    if (t169 != 126) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint32_t x689 = 1208304U;
	static int64_t x690 = INT64_MAX;
	volatile int32_t x691 = -1;
	static uint8_t x692 = UINT8_MAX;
	int32_t t170 = 0;

    t170 = ((x689>(x690%x691))^x692);

    if (t170 != 254) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x693 = INT8_MIN;
	int8_t x695 = -1;
	volatile int16_t x696 = INT16_MIN;
	static int32_t t171 = -27;

    t171 = ((x693>(x694%x695))^x696);

    if (t171 != -32768) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x697 = -7;
	int32_t x698 = INT32_MAX;
	static int64_t x699 = INT64_MAX;
	int32_t x700 = INT32_MIN;
	int32_t t172 = INT32_MIN;

    t172 = ((x697>(x698%x699))^x700);

    if (t172 != INT32_MIN) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x701 = INT16_MIN;
	int32_t x702 = 9;
	int32_t x704 = INT32_MIN;

    t173 = ((x701>(x702%x703))^x704);

    if (t173 != -2147483647) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x705 = -554123344338403290LL;
	static volatile int32_t x706 = -2463993;
	static int16_t x707 = 1;
	uint16_t x708 = 62U;
	volatile int32_t t174 = 8463;

    t174 = ((x705>(x706%x707))^x708);

    if (t174 != 62) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x709 = 29110409U;
	int32_t x710 = INT32_MAX;
	static int16_t x711 = INT16_MIN;
	static int8_t x712 = INT8_MAX;
	int32_t t175 = -6;

    t175 = ((x709>(x710%x711))^x712);

    if (t175 != 126) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x714 = 2666U;
	int64_t x715 = -1LL;
	int8_t x716 = 0;
	int32_t t176 = -4333424;

    t176 = ((x713>(x714%x715))^x716);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x717 = -8;
	int32_t x718 = INT32_MAX;
	int16_t x719 = INT16_MIN;
	int8_t x720 = INT8_MAX;
	int32_t t177 = 136;

    t177 = ((x717>(x718%x719))^x720);

    if (t177 != 127) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x721 = INT8_MIN;
	volatile uint8_t x722 = 94U;
	int16_t x723 = INT16_MIN;
	int32_t x724 = -14;
	int32_t t178 = -362276;

    t178 = ((x721>(x722%x723))^x724);

    if (t178 != -14) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x725 = -1;
	volatile int32_t x728 = -1;
	int32_t t179 = -568329287;

    t179 = ((x725>(x726%x727))^x728);

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x729 = UINT32_MAX;
	uint32_t x730 = 1385337121U;
	volatile int16_t x731 = INT16_MIN;
	int8_t x732 = 1;
	int32_t t180 = 22583994;

    t180 = ((x729>(x730%x731))^x732);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x735 = INT16_MAX;
	int64_t x736 = -1LL;

    t181 = ((x733>(x734%x735))^x736);

    if (t181 != -1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x738 = UINT16_MAX;
	uint64_t x740 = 16354452755922038LLU;
	static uint64_t t182 = 4798360471207054LLU;

    t182 = ((x737>(x738%x739))^x740);

    if (t182 != 16354452755922039LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x742 = UINT16_MAX;
	static volatile int8_t x743 = -1;
	static int32_t x744 = INT32_MIN;

    t183 = ((x741>(x742%x743))^x744);

    if (t183 != INT32_MIN) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x748 = INT64_MIN;
	static volatile int64_t t184 = -146612988LL;

    t184 = ((x745>(x746%x747))^x748);

    if (t184 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x749 = -7630;
	static uint64_t x750 = UINT64_MAX;
	volatile int64_t x752 = INT64_MIN;
	static int64_t t185 = -15987LL;

    t185 = ((x749>(x750%x751))^x752);

    if (t185 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x753 = INT16_MIN;
	int16_t x754 = INT16_MIN;
	uint64_t x755 = UINT64_MAX;
	int64_t x756 = INT64_MIN;
	int64_t t186 = INT64_MIN;

    t186 = ((x753>(x754%x755))^x756);

    if (t186 != INT64_MIN) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x757 = 0;
	uint8_t x758 = 5U;
	volatile int32_t x759 = INT32_MAX;
	volatile int64_t t187 = INT64_MIN;

    t187 = ((x757>(x758%x759))^x760);

    if (t187 != INT64_MIN) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x761 = 248573;
	static uint8_t x762 = 118U;
	uint32_t x763 = 5U;
	volatile int8_t x764 = -3;
	volatile int32_t t188 = 1;

    t188 = ((x761>(x762%x763))^x764);

    if (t188 != -4) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x765 = INT16_MIN;
	volatile uint32_t x766 = UINT32_MAX;
	static uint32_t x767 = UINT32_MAX;
	volatile uint32_t x768 = 5483U;
	uint32_t t189 = 2957673U;

    t189 = ((x765>(x766%x767))^x768);

    if (t189 != 5482U) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x775 = 37LLU;
	uint64_t t190 = 57743380737LLU;

    t190 = ((x773>(x774%x775))^x776);

    if (t190 != 5488263LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint8_t x777 = 1U;
	volatile int32_t x779 = INT32_MAX;
	volatile int16_t x780 = INT16_MIN;
	volatile int32_t t191 = -1;

    t191 = ((x777>(x778%x779))^x780);

    if (t191 != -32767) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x785 = UINT16_MAX;
	static int64_t x787 = -1LL;
	int64_t x788 = INT64_MAX;
	static volatile int64_t t192 = 1293482650048284886LL;

    t192 = ((x785>(x786%x787))^x788);

    if (t192 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x789 = INT16_MIN;
	int32_t x790 = -5213019;
	static int64_t x791 = -11097LL;
	int32_t x792 = INT32_MIN;
	volatile int32_t t193 = INT32_MIN;

    t193 = ((x789>(x790%x791))^x792);

    if (t193 != INT32_MIN) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x793 = INT64_MIN;
	volatile int16_t x794 = INT16_MAX;
	volatile uint32_t x795 = UINT32_MAX;
	int32_t x796 = INT32_MIN;

    t194 = ((x793>(x794%x795))^x796);

    if (t194 != INT32_MIN) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x798 = INT16_MIN;
	static int8_t x800 = 3;
	int32_t t195 = 991212;

    t195 = ((x797>(x798%x799))^x800);

    if (t195 != 2) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile uint64_t x801 = UINT64_MAX;
	int64_t x803 = INT64_MIN;
	volatile int16_t x804 = -163;

    t196 = ((x801>(x802%x803))^x804);

    if (t196 != -164) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x805 = -1;
	int32_t x807 = -1;
	int16_t x808 = -16;
	volatile int32_t t197 = 245112591;

    t197 = ((x805>(x806%x807))^x808);

    if (t197 != -15) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x809 = INT32_MAX;
	volatile uint32_t x811 = UINT32_MAX;
	int8_t x812 = INT8_MIN;
	volatile int32_t t198 = 10228;

    t198 = ((x809>(x810%x811))^x812);

    if (t198 != -128) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x817 = UINT16_MAX;
	uint8_t x819 = 1U;
	int32_t x820 = -1;
	int32_t t199 = -1;

    t199 = ((x817>(x818%x819))^x820);

    if (t199 != -2) { NG(); } else { ; }
	
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

