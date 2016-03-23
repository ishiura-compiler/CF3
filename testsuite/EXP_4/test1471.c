
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

int32_t x5 = 144555;
volatile uint8_t x6 = UINT8_MAX;
int8_t x8 = 18;
volatile int64_t x11 = 34478216420258LL;
static int32_t t4 = -67871;
volatile int64_t t5 = INT64_MIN;
uint32_t x25 = 60159U;
int32_t x27 = 147227;
int8_t x29 = 1;
int64_t x30 = INT64_MIN;
uint32_t x35 = 0U;
int32_t x36 = INT32_MIN;
uint8_t x42 = UINT8_MAX;
int64_t x43 = -1LL;
static volatile int64_t t10 = 604708LL;
volatile int8_t x48 = -3;
int32_t x60 = -1;
int32_t x63 = INT32_MIN;
int8_t x67 = INT8_MAX;
static int32_t x77 = INT32_MIN;
int32_t t20 = -112550;
int64_t x93 = 9631158113820LL;
uint16_t x95 = 655U;
volatile uint8_t x100 = 17U;
uint32_t x102 = 38U;
uint8_t x111 = 1U;
int32_t x112 = -26;
int32_t t27 = 0;
int8_t x114 = -50;
int64_t x120 = INT64_MIN;
static uint32_t t29 = 241451U;
int64_t x121 = -301830515017884LL;
int64_t t30 = -15LL;
int8_t x127 = -1;
int64_t x128 = INT64_MIN;
int32_t x130 = -1;
static uint64_t x133 = 188823660LLU;
int32_t x134 = 2;
int32_t t34 = INT32_MIN;
uint32_t x144 = UINT32_MAX;
static int8_t x147 = INT8_MIN;
int8_t x156 = -1;
volatile int16_t x158 = INT16_MAX;
volatile uint32_t x162 = 12474U;
static int64_t x163 = INT64_MAX;
volatile int16_t x165 = 1;
int8_t x166 = INT8_MIN;
static uint16_t x171 = 56U;
volatile int64_t t43 = INT64_MIN;
uint8_t x185 = 18U;
uint32_t x186 = UINT32_MAX;
uint32_t x189 = 888U;
static int16_t x198 = -1;
int64_t x206 = -90LL;
static volatile int32_t t52 = INT32_MIN;
int16_t x215 = INT16_MAX;
int8_t x222 = 2;
int32_t x229 = INT32_MIN;
uint32_t x231 = 19U;
volatile int8_t x235 = -4;
int32_t x236 = -25844783;
volatile int32_t t59 = -504608;
int32_t t60 = 70;
static volatile uint64_t t61 = 229352313506128486LLU;
int64_t x254 = -1LL;
uint16_t x256 = 845U;
int32_t t64 = 4685910;
volatile int8_t x264 = INT8_MAX;
volatile int8_t x270 = 0;
int32_t t67 = 15;
int8_t x275 = 38;
int16_t x279 = 6457;
volatile int16_t x284 = INT16_MAX;
int32_t t70 = 762937135;
int32_t x286 = 863623161;
uint32_t t71 = 101827U;
uint16_t x289 = 26146U;
int8_t x292 = 2;
uint16_t x294 = 173U;
int64_t x300 = -12627681229767019LL;
int32_t t76 = -38371072;
int32_t x317 = -1;
static volatile int16_t x320 = -1;
int8_t x321 = INT8_MIN;
int16_t x324 = INT16_MAX;
volatile int32_t t80 = -14325;
volatile int64_t x326 = INT64_MAX;
int8_t x329 = -2;
volatile uint64_t x330 = UINT64_MAX;
int8_t x334 = INT8_MIN;
int32_t t84 = -1;
static uint32_t t86 = 29002U;
volatile int16_t x352 = 0;
volatile int64_t x360 = INT64_MAX;
volatile int32_t t89 = -798494333;
static int16_t x364 = -130;
int16_t x366 = INT16_MIN;
uint8_t x368 = 1U;
int32_t t95 = 7;
volatile int32_t t99 = INT32_MIN;
int8_t x401 = -52;
static int16_t x410 = INT16_MIN;
int8_t x417 = 0;
int32_t t105 = 14376;
uint16_t x442 = 88U;
int8_t x444 = 3;
volatile int32_t t110 = 12;
volatile int64_t x445 = -1LL;
static uint16_t x453 = 46U;
int32_t x454 = INT32_MIN;
uint64_t x463 = UINT64_MAX;
volatile int64_t x464 = 2LL;
int32_t t115 = 35914002;
uint32_t x465 = UINT32_MAX;
uint16_t x475 = UINT16_MAX;
int16_t x477 = INT16_MIN;
uint32_t x481 = UINT32_MAX;
volatile int64_t x483 = INT64_MAX;
uint32_t t120 = UINT32_MAX;
volatile int32_t x485 = -1;
int8_t x491 = INT8_MIN;
static uint8_t x494 = 0U;
uint64_t x502 = 9LLU;
int32_t t126 = 1192;
static volatile int32_t t127 = -109898;
static volatile int64_t t128 = INT64_MIN;
uint8_t x518 = UINT8_MAX;
volatile uint16_t x520 = 101U;
volatile uint16_t x522 = UINT16_MAX;
int32_t x524 = INT32_MIN;
int32_t x525 = -1732270;
int8_t x531 = INT8_MAX;
uint8_t x534 = 13U;
volatile uint8_t x536 = 24U;
static int8_t x540 = 2;
volatile int8_t x559 = INT8_MAX;
int32_t x561 = INT32_MIN;
static int32_t x570 = INT32_MIN;
static uint16_t x579 = 95U;
int64_t t145 = 36113428988266LL;
static volatile int32_t x585 = INT32_MIN;
static int32_t x594 = 1469569;
uint16_t x596 = 31255U;
int8_t x613 = INT8_MAX;
uint8_t x615 = UINT8_MAX;
int16_t x616 = INT16_MIN;
static int32_t t153 = 1;
int32_t x618 = INT32_MIN;
int32_t t155 = 7445;
int16_t x627 = INT16_MAX;
uint32_t x628 = 282277U;
volatile int64_t t156 = INT64_MIN;
int8_t x630 = 13;
volatile int32_t t157 = -1456;
volatile int64_t t158 = -235156760196830068LL;
static int64_t x647 = 1213LL;
static int32_t x648 = 49;
int32_t t163 = -281;
static uint64_t x659 = 52239193LLU;
static int8_t x660 = INT8_MAX;
static int32_t x664 = INT32_MIN;
volatile int32_t t165 = 15668;
volatile uint32_t x665 = 26U;
static volatile uint32_t t166 = 92632571U;
volatile int32_t t167 = 504908;
int16_t x683 = -8;
volatile int32_t t170 = -2211472;
volatile int16_t x686 = INT16_MIN;
int32_t t172 = -55269709;
int64_t x694 = INT64_MIN;
int8_t x699 = -1;
static volatile uint32_t x701 = UINT32_MAX;
uint32_t x711 = 1101237200U;
static uint16_t x714 = UINT16_MAX;
static int8_t x715 = -1;
uint16_t x718 = 11U;
int64_t x720 = 27808857365LL;
int64_t t179 = INT64_MIN;
volatile int32_t t181 = 2285868;
int16_t x730 = -1;
static volatile int64_t x734 = INT64_MAX;
volatile int8_t x739 = -12;
int32_t x741 = INT32_MIN;
uint64_t x743 = UINT64_MAX;
static volatile uint64_t x752 = 415324876LLU;
uint16_t x753 = 382U;
volatile int32_t t189 = -7289434;
int64_t x761 = INT64_MAX;
int16_t x768 = -485;
uint64_t x769 = UINT64_MAX;
static int64_t x776 = INT64_MAX;
int16_t x777 = INT16_MAX;
uint16_t x782 = 32477U;
int8_t x783 = INT8_MAX;
int32_t x784 = INT32_MAX;
uint32_t x785 = 13908U;


void f0(void) {
    	uint8_t x1 = 127U;
	int8_t x2 = INT8_MIN;
	static int16_t x3 = 7259;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -13441;

    t0 = (x1+(x2==(x3==x4)));

    if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x7 = INT8_MIN;
	int32_t t1 = 11208841;

    t1 = (x5+(x6==(x7==x8)));

    if (t1 != 144555) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -9;
	int8_t x10 = -1;
	static int32_t x12 = -1;
	int32_t t2 = 649068453;

    t2 = (x9+(x10==(x11==x12)));

    if (t2 != -9) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x13 = 141;
	static int32_t x14 = -1;
	int32_t x15 = -1;
	int32_t x16 = 455308608;
	volatile int32_t t3 = -174;

    t3 = (x13+(x14==(x15==x16)));

    if (t3 != 141) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x17 = INT16_MAX;
	int32_t x18 = 1;
	int32_t x19 = -3804;
	int8_t x20 = -1;

    t4 = (x17+(x18==(x19==x20)));

    if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MIN;
	volatile int8_t x22 = INT8_MAX;
	uint16_t x23 = UINT16_MAX;
	static uint16_t x24 = 307U;

    t5 = (x21+(x22==(x23==x24)));

    if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x26 = INT64_MAX;
	static uint64_t x28 = UINT64_MAX;
	uint32_t t6 = 285763U;

    t6 = (x25+(x26==(x27==x28)));

    if (t6 != 60159U) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x31 = 59;
	static int16_t x32 = -8039;
	int32_t t7 = -25;

    t7 = (x29+(x30==(x31==x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x33 = 324473243U;
	int16_t x34 = 1892;
	uint32_t t8 = 123419288U;

    t8 = (x33+(x34==(x35==x36)));

    if (t8 != 324473243U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = 15576U;
	uint64_t x38 = 18LLU;
	static volatile int8_t x39 = INT8_MIN;
	uint16_t x40 = 84U;
	int32_t t9 = -10393049;

    t9 = (x37+(x38==(x39==x40)));

    if (t9 != 15576) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = -7119LL;
	static int16_t x44 = INT16_MIN;

    t10 = (x41+(x42==(x43==x44)));

    if (t10 != -7119LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x45 = -1;
	int32_t x46 = -1427284;
	volatile int16_t x47 = INT16_MIN;
	int32_t t11 = -393800063;

    t11 = (x45+(x46==(x47==x48)));

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = -7;
	uint32_t x50 = UINT32_MAX;
	int8_t x51 = 26;
	uint64_t x52 = 1775286052969LLU;
	volatile int32_t t12 = 1;

    t12 = (x49+(x50==(x51==x52)));

    if (t12 != -7) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = 122;
	static int16_t x54 = -4562;
	static volatile uint16_t x55 = 7952U;
	int64_t x56 = INT64_MAX;
	static volatile int32_t t13 = -1;

    t13 = (x53+(x54==(x55==x56)));

    if (t13 != 122) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MIN;
	volatile uint16_t x58 = 2U;
	static int64_t x59 = INT64_MAX;
	volatile int32_t t14 = -1;

    t14 = (x57+(x58==(x59==x60)));

    if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 23728U;
	static volatile uint32_t x62 = 72U;
	int32_t x64 = -1;
	volatile uint32_t t15 = 116484011U;

    t15 = (x61+(x62==(x63==x64)));

    if (t15 != 23728U) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x65 = INT8_MIN;
	int8_t x66 = INT8_MIN;
	int16_t x68 = 0;
	int32_t t16 = 791;

    t16 = (x65+(x66==(x67==x68)));

    if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x69 = 8;
	uint32_t x70 = UINT32_MAX;
	uint16_t x71 = UINT16_MAX;
	int32_t x72 = INT32_MIN;
	int32_t t17 = 14;

    t17 = (x69+(x70==(x71==x72)));

    if (t17 != 8) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = UINT8_MAX;
	static volatile uint8_t x74 = UINT8_MAX;
	static int64_t x75 = INT64_MIN;
	uint16_t x76 = 0U;
	volatile int32_t t18 = 151;

    t18 = (x73+(x74==(x75==x76)));

    if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x78 = INT32_MIN;
	static volatile uint16_t x79 = 16U;
	int64_t x80 = -1LL;
	int32_t t19 = INT32_MIN;

    t19 = (x77+(x78==(x79==x80)));

    if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int8_t x81 = INT8_MAX;
	static int16_t x82 = INT16_MIN;
	static volatile int32_t x83 = -1;
	int8_t x84 = -42;

    t20 = (x81+(x82==(x83==x84)));

    if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x85 = INT32_MAX;
	volatile int8_t x86 = INT8_MIN;
	int16_t x87 = -316;
	int32_t x88 = INT32_MAX;
	volatile int32_t t21 = INT32_MAX;

    t21 = (x85+(x86==(x87==x88)));

    if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = 62710251LLU;
	int8_t x90 = -1;
	static uint8_t x91 = 0U;
	volatile uint32_t x92 = 4U;
	static volatile uint64_t t22 = 26LLU;

    t22 = (x89+(x90==(x91==x92)));

    if (t22 != 62710251LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x94 = 3224LL;
	static uint32_t x96 = 43U;
	int64_t t23 = -2188685883LL;

    t23 = (x93+(x94==(x95==x96)));

    if (t23 != 9631158113820LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x97 = INT64_MIN;
	static int32_t x98 = -416263427;
	uint32_t x99 = 9U;
	static int64_t t24 = INT64_MIN;

    t24 = (x97+(x98==(x99==x100)));

    if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = 2064119269915722LL;
	int8_t x103 = -39;
	int32_t x104 = INT32_MIN;
	volatile int64_t t25 = -466350146LL;

    t25 = (x101+(x102==(x103==x104)));

    if (t25 != 2064119269915722LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MIN;
	static volatile uint16_t x106 = 15U;
	uint32_t x107 = 2167453U;
	int64_t x108 = 57334434LL;
	int32_t t26 = 172433924;

    t26 = (x105+(x106==(x107==x108)));

    if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x109 = 2;
	uint64_t x110 = 0LLU;

    t27 = (x109+(x110==(x111==x112)));

    if (t27 != 3) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = INT32_MAX;
	int32_t x115 = INT32_MIN;
	int16_t x116 = -1;
	volatile int32_t t28 = INT32_MAX;

    t28 = (x113+(x114==(x115==x116)));

    if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint32_t x117 = 1813871835U;
	int16_t x118 = -1;
	volatile int64_t x119 = 13734977433LL;

    t29 = (x117+(x118==(x119==x120)));

    if (t29 != 1813871835U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x122 = 24021263369923712LLU;
	int16_t x123 = INT16_MIN;
	static int32_t x124 = -102489;

    t30 = (x121+(x122==(x123==x124)));

    if (t30 != -301830515017884LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int32_t x125 = -1;
	static uint16_t x126 = UINT16_MAX;
	static volatile int32_t t31 = 420;

    t31 = (x125+(x126==(x127==x128)));

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x129 = 64108063277773414LLU;
	int16_t x131 = -14949;
	uint8_t x132 = 0U;
	uint64_t t32 = 15681676826LLU;

    t32 = (x129+(x130==(x131==x132)));

    if (t32 != 64108063277773414LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x135 = -1LL;
	static int32_t x136 = -489098445;
	volatile uint64_t t33 = 32867LLU;

    t33 = (x133+(x134==(x135==x136)));

    if (t33 != 188823660LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x137 = INT32_MIN;
	uint64_t x138 = 7LLU;
	int32_t x139 = 263833;
	int64_t x140 = 0LL;

    t34 = (x137+(x138==(x139==x140)));

    if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x141 = 575909219LLU;
	uint8_t x142 = 1U;
	int16_t x143 = INT16_MAX;
	uint64_t t35 = 3326870486916LLU;

    t35 = (x141+(x142==(x143==x144)));

    if (t35 != 575909219LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = -1;
	int32_t x146 = INT32_MIN;
	static volatile int64_t x148 = 1613589467298LL;
	volatile int32_t t36 = -2902;

    t36 = (x145+(x146==(x147==x148)));

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x149 = UINT16_MAX;
	int32_t x150 = INT32_MAX;
	int32_t x151 = INT32_MIN;
	int8_t x152 = INT8_MIN;
	static int32_t t37 = -459015;

    t37 = (x149+(x150==(x151==x152)));

    if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x153 = 0U;
	int64_t x154 = INT64_MIN;
	volatile uint8_t x155 = UINT8_MAX;
	int32_t t38 = -27;

    t38 = (x153+(x154==(x155==x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x157 = UINT64_MAX;
	int8_t x159 = -1;
	int16_t x160 = 976;
	static volatile uint64_t t39 = UINT64_MAX;

    t39 = (x157+(x158==(x159==x160)));

    if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x161 = 12U;
	static int32_t x164 = -3135075;
	int32_t t40 = -4933349;

    t40 = (x161+(x162==(x163==x164)));

    if (t40 != 12) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x167 = -1974;
	uint64_t x168 = 37LLU;
	int32_t t41 = -91645339;

    t41 = (x165+(x166==(x167==x168)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x169 = 6442;
	uint8_t x170 = UINT8_MAX;
	static int32_t x172 = INT32_MAX;
	int32_t t42 = -349;

    t42 = (x169+(x170==(x171==x172)));

    if (t42 != 6442) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x173 = INT64_MIN;
	uint64_t x174 = UINT64_MAX;
	int8_t x175 = -1;
	int32_t x176 = 3;

    t43 = (x173+(x174==(x175==x176)));

    if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x177 = 3;
	uint16_t x178 = UINT16_MAX;
	int8_t x179 = 1;
	uint8_t x180 = 78U;
	static int32_t t44 = -896313041;

    t44 = (x177+(x178==(x179==x180)));

    if (t44 != 3) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = -1;
	volatile int8_t x182 = INT8_MIN;
	int32_t x183 = INT32_MIN;
	static int32_t x184 = -319793;
	volatile int32_t t45 = 169748;

    t45 = (x181+(x182==(x183==x184)));

    if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x187 = -4;
	volatile int8_t x188 = 3;
	static int32_t t46 = -4893842;

    t46 = (x185+(x186==(x187==x188)));

    if (t46 != 18) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x190 = 1U;
	uint32_t x191 = 3U;
	uint32_t x192 = 63731U;
	static uint32_t t47 = 19187U;

    t47 = (x189+(x190==(x191==x192)));

    if (t47 != 888U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x193 = 664U;
	int32_t x194 = INT32_MAX;
	int32_t x195 = INT32_MIN;
	static int16_t x196 = -1;
	volatile uint32_t t48 = 9883231U;

    t48 = (x193+(x194==(x195==x196)));

    if (t48 != 664U) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x197 = INT8_MIN;
	volatile int32_t x199 = INT32_MIN;
	int32_t x200 = -634710395;
	volatile int32_t t49 = 209569;

    t49 = (x197+(x198==(x199==x200)));

    if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MIN;
	static int16_t x202 = -1;
	volatile int8_t x203 = INT8_MIN;
	int32_t x204 = INT32_MAX;
	volatile int32_t t50 = INT32_MIN;

    t50 = (x201+(x202==(x203==x204)));

    if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x205 = 363950343U;
	int8_t x207 = 5;
	int32_t x208 = -1;
	volatile uint32_t t51 = 977325U;

    t51 = (x205+(x206==(x207==x208)));

    if (t51 != 363950343U) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x209 = INT32_MIN;
	static int8_t x210 = INT8_MIN;
	int16_t x211 = INT16_MIN;
	int32_t x212 = -55917;

    t52 = (x209+(x210==(x211==x212)));

    if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x213 = INT8_MIN;
	volatile int16_t x214 = -146;
	int64_t x216 = -196LL;
	int32_t t53 = 142;

    t53 = (x213+(x214==(x215==x216)));

    if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = 6U;
	int8_t x218 = INT8_MIN;
	volatile int64_t x219 = INT64_MIN;
	int8_t x220 = 29;
	int32_t t54 = -413;

    t54 = (x217+(x218==(x219==x220)));

    if (t54 != 6) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x221 = 53U;
	static uint64_t x223 = UINT64_MAX;
	int64_t x224 = INT64_MIN;
	static int32_t t55 = -45;

    t55 = (x221+(x222==(x223==x224)));

    if (t55 != 53) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = INT8_MAX;
	int32_t x226 = INT32_MAX;
	int8_t x227 = -1;
	int32_t x228 = INT32_MAX;
	static volatile int32_t t56 = -184173;

    t56 = (x225+(x226==(x227==x228)));

    if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x230 = INT8_MIN;
	int8_t x232 = INT8_MIN;
	static int32_t t57 = INT32_MIN;

    t57 = (x229+(x230==(x231==x232)));

    if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x233 = 3464U;
	int16_t x234 = -1;
	static uint32_t t58 = 1U;

    t58 = (x233+(x234==(x235==x236)));

    if (t58 != 3464U) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = -4;
	int16_t x238 = -1;
	volatile int8_t x239 = INT8_MIN;
	int32_t x240 = -37350;

    t59 = (x237+(x238==(x239==x240)));

    if (t59 != -4) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x241 = -1;
	int64_t x242 = -167426587477LL;
	static int64_t x243 = 1700979158750LL;
	int16_t x244 = 902;

    t60 = (x241+(x242==(x243==x244)));

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x245 = 2248242LLU;
	int16_t x246 = -1;
	static int16_t x247 = INT16_MAX;
	int32_t x248 = -1;

    t61 = (x245+(x246==(x247==x248)));

    if (t61 != 2248242LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = UINT32_MAX;
	int32_t x250 = 21;
	uint16_t x251 = 0U;
	int64_t x252 = INT64_MAX;
	volatile uint32_t t62 = UINT32_MAX;

    t62 = (x249+(x250==(x251==x252)));

    if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x253 = UINT16_MAX;
	uint32_t x255 = 20660U;
	volatile int32_t t63 = -570103;

    t63 = (x253+(x254==(x255==x256)));

    if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = -1;
	volatile int8_t x258 = INT8_MIN;
	int32_t x259 = INT32_MIN;
	static uint64_t x260 = 65382147601153028LLU;

    t64 = (x257+(x258==(x259==x260)));

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x261 = 31U;
	volatile uint32_t x262 = UINT32_MAX;
	volatile int32_t x263 = -44;
	volatile int32_t t65 = -25512880;

    t65 = (x261+(x262==(x263==x264)));

    if (t65 != 31) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x265 = 0U;
	uint32_t x266 = 5878U;
	uint64_t x267 = 15952176640549221LLU;
	uint8_t x268 = 37U;
	uint32_t t66 = 94U;

    t66 = (x265+(x266==(x267==x268)));

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = -859;
	int32_t x271 = 29439661;
	int16_t x272 = INT16_MAX;

    t67 = (x269+(x270==(x271==x272)));

    if (t67 != -858) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x273 = UINT32_MAX;
	int16_t x274 = INT16_MIN;
	int64_t x276 = -13872528559110101LL;
	uint32_t t68 = UINT32_MAX;

    t68 = (x273+(x274==(x275==x276)));

    if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x277 = INT16_MIN;
	uint64_t x278 = 1635659LLU;
	int16_t x280 = INT16_MIN;
	int32_t t69 = 15887020;

    t69 = (x277+(x278==(x279==x280)));

    if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x281 = UINT16_MAX;
	int8_t x282 = INT8_MIN;
	static uint64_t x283 = UINT64_MAX;

    t70 = (x281+(x282==(x283==x284)));

    if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint32_t x285 = 1388U;
	int8_t x287 = INT8_MIN;
	static volatile uint64_t x288 = 4380469375076620LLU;

    t71 = (x285+(x286==(x287==x288)));

    if (t71 != 1388U) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x290 = -1LL;
	uint32_t x291 = UINT32_MAX;
	static int32_t t72 = 1;

    t72 = (x289+(x290==(x291==x292)));

    if (t72 != 26146) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = 123;
	int32_t x295 = -1;
	volatile int16_t x296 = INT16_MIN;
	int32_t t73 = -733;

    t73 = (x293+(x294==(x295==x296)));

    if (t73 != 123) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x297 = -1;
	volatile uint8_t x298 = 11U;
	int16_t x299 = INT16_MAX;
	int32_t t74 = 7998;

    t74 = (x297+(x298==(x299==x300)));

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x301 = 1U;
	int8_t x302 = -2;
	int16_t x303 = -614;
	static uint32_t x304 = 1241532U;
	uint32_t t75 = 26868204U;

    t75 = (x301+(x302==(x303==x304)));

    if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int16_t x305 = 0;
	int64_t x306 = INT64_MIN;
	int16_t x307 = INT16_MIN;
	int32_t x308 = -19487666;

    t76 = (x305+(x306==(x307==x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = INT64_MIN;
	int8_t x310 = -22;
	static volatile uint16_t x311 = 20220U;
	volatile int64_t x312 = -80967LL;
	volatile int64_t t77 = INT64_MIN;

    t77 = (x309+(x310==(x311==x312)));

    if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x313 = UINT8_MAX;
	uint8_t x314 = 30U;
	static uint16_t x315 = 70U;
	int64_t x316 = -1LL;
	int32_t t78 = -4;

    t78 = (x313+(x314==(x315==x316)));

    if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x318 = INT8_MIN;
	volatile int8_t x319 = 1;
	volatile int32_t t79 = -105022;

    t79 = (x317+(x318==(x319==x320)));

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x322 = UINT8_MAX;
	int8_t x323 = -1;

    t80 = (x321+(x322==(x323==x324)));

    if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x325 = UINT32_MAX;
	int8_t x327 = 1;
	uint64_t x328 = UINT64_MAX;
	uint32_t t81 = UINT32_MAX;

    t81 = (x325+(x326==(x327==x328)));

    if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x331 = 57197385;
	int32_t x332 = 1;
	int32_t t82 = -19250875;

    t82 = (x329+(x330==(x331==x332)));

    if (t82 != -2) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = -470;
	static uint64_t x335 = UINT64_MAX;
	int8_t x336 = -1;
	volatile int32_t t83 = -84;

    t83 = (x333+(x334==(x335==x336)));

    if (t83 != -470) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = -1;
	static uint32_t x338 = 1305U;
	int64_t x339 = INT64_MAX;
	int16_t x340 = 36;

    t84 = (x337+(x338==(x339==x340)));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x341 = UINT8_MAX;
	int32_t x342 = INT32_MIN;
	uint8_t x343 = 2U;
	int8_t x344 = -2;
	volatile int32_t t85 = -3350176;

    t85 = (x341+(x342==(x343==x344)));

    if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x345 = 2171762U;
	static volatile int32_t x346 = -1;
	int64_t x347 = INT64_MAX;
	int64_t x348 = INT64_MAX;

    t86 = (x345+(x346==(x347==x348)));

    if (t86 != 2171762U) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = -1;
	int64_t x350 = 161316611578453LL;
	static int8_t x351 = 2;
	int32_t t87 = 1;

    t87 = (x349+(x350==(x351==x352)));

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = 1;
	uint32_t x354 = 41702504U;
	volatile int8_t x355 = -2;
	volatile int16_t x356 = INT16_MIN;
	volatile int32_t t88 = 705634365;

    t88 = (x353+(x354==(x355==x356)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x357 = 1U;
	int64_t x358 = INT64_MIN;
	uint64_t x359 = UINT64_MAX;

    t89 = (x357+(x358==(x359==x360)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x361 = 730753084014LL;
	volatile int64_t x362 = INT64_MIN;
	static int32_t x363 = INT32_MIN;
	int64_t t90 = -5845025432614LL;

    t90 = (x361+(x362==(x363==x364)));

    if (t90 != 730753084014LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x365 = UINT16_MAX;
	static uint16_t x367 = 132U;
	volatile int32_t t91 = -119794238;

    t91 = (x365+(x366==(x367==x368)));

    if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x369 = 314795736501LLU;
	uint16_t x370 = 1334U;
	volatile int8_t x371 = -1;
	volatile uint8_t x372 = UINT8_MAX;
	uint64_t t92 = 122LLU;

    t92 = (x369+(x370==(x371==x372)));

    if (t92 != 314795736501LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x373 = 11U;
	uint64_t x374 = 29LLU;
	int8_t x375 = 2;
	int32_t x376 = -116520;
	int32_t t93 = -1723;

    t93 = (x373+(x374==(x375==x376)));

    if (t93 != 11) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x377 = 25597U;
	int8_t x378 = INT8_MIN;
	uint64_t x379 = 83407215604LLU;
	uint64_t x380 = 109320485969096LLU;
	static volatile uint32_t t94 = 2U;

    t94 = (x377+(x378==(x379==x380)));

    if (t94 != 25597U) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint8_t x381 = 42U;
	static volatile uint32_t x382 = 8U;
	static int64_t x383 = -88LL;
	int32_t x384 = INT32_MAX;

    t95 = (x381+(x382==(x383==x384)));

    if (t95 != 42) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x385 = INT16_MIN;
	int8_t x386 = INT8_MIN;
	uint16_t x387 = UINT16_MAX;
	volatile uint16_t x388 = 1033U;
	int32_t t96 = -1;

    t96 = (x385+(x386==(x387==x388)));

    if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x389 = INT8_MIN;
	static uint16_t x390 = UINT16_MAX;
	int32_t x391 = INT32_MIN;
	int8_t x392 = INT8_MAX;
	volatile int32_t t97 = -1;

    t97 = (x389+(x390==(x391==x392)));

    if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = INT8_MAX;
	int16_t x394 = -1;
	int32_t x395 = INT32_MIN;
	int8_t x396 = 28;
	volatile int32_t t98 = -32215;

    t98 = (x393+(x394==(x395==x396)));

    if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x397 = INT32_MIN;
	int64_t x398 = -1LL;
	int8_t x399 = -1;
	int64_t x400 = INT64_MIN;

    t99 = (x397+(x398==(x399==x400)));

    if (t99 != INT32_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int16_t x402 = 227;
	int16_t x403 = INT16_MAX;
	uint32_t x404 = 3U;
	int32_t t100 = -297749;

    t100 = (x401+(x402==(x403==x404)));

    if (t100 != -52) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = INT16_MIN;
	uint8_t x406 = UINT8_MAX;
	int8_t x407 = -1;
	int8_t x408 = 9;
	int32_t t101 = -904470329;

    t101 = (x405+(x406==(x407==x408)));

    if (t101 != -32768) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x409 = UINT8_MAX;
	static int8_t x411 = 21;
	uint8_t x412 = UINT8_MAX;
	volatile int32_t t102 = -22220;

    t102 = (x409+(x410==(x411==x412)));

    if (t102 != 255) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x413 = UINT64_MAX;
	volatile uint8_t x414 = 7U;
	int32_t x415 = INT32_MIN;
	static int64_t x416 = -1789494455740886288LL;
	volatile uint64_t t103 = UINT64_MAX;

    t103 = (x413+(x414==(x415==x416)));

    if (t103 != UINT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x418 = -3;
	static uint16_t x419 = 29327U;
	int64_t x420 = INT64_MAX;
	volatile int32_t t104 = 3323;

    t104 = (x417+(x418==(x419==x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = -1;
	uint8_t x422 = 61U;
	static uint16_t x423 = 23U;
	uint16_t x424 = UINT16_MAX;

    t105 = (x421+(x422==(x423==x424)));

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x425 = UINT64_MAX;
	uint16_t x426 = UINT16_MAX;
	uint16_t x427 = UINT16_MAX;
	int32_t x428 = INT32_MAX;
	static uint64_t t106 = UINT64_MAX;

    t106 = (x425+(x426==(x427==x428)));

    if (t106 != UINT64_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = 1469;
	int16_t x430 = INT16_MIN;
	uint32_t x431 = UINT32_MAX;
	static int64_t x432 = INT64_MIN;
	static volatile int32_t t107 = 57224795;

    t107 = (x429+(x430==(x431==x432)));

    if (t107 != 1469) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = -1;
	volatile int64_t x434 = INT64_MIN;
	int8_t x435 = -1;
	int32_t x436 = 51845626;
	volatile int32_t t108 = -14;

    t108 = (x433+(x434==(x435==x436)));

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x437 = UINT64_MAX;
	int8_t x438 = -1;
	static volatile int64_t x439 = INT64_MIN;
	volatile int64_t x440 = INT64_MIN;
	volatile uint64_t t109 = UINT64_MAX;

    t109 = (x437+(x438==(x439==x440)));

    if (t109 != UINT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = -1;
	uint16_t x443 = 73U;

    t110 = (x441+(x442==(x443==x444)));

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x446 = 20490114U;
	static volatile int32_t x447 = INT32_MIN;
	uint16_t x448 = 12523U;
	static int64_t t111 = 686316305012653LL;

    t111 = (x445+(x446==(x447==x448)));

    if (t111 != -1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x449 = 0U;
	volatile int64_t x450 = INT64_MIN;
	static uint64_t x451 = UINT64_MAX;
	int32_t x452 = -1;
	int32_t t112 = 45200531;

    t112 = (x449+(x450==(x451==x452)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x455 = UINT64_MAX;
	int16_t x456 = INT16_MIN;
	static int32_t t113 = 67748;

    t113 = (x453+(x454==(x455==x456)));

    if (t113 != 46) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = -1;
	uint16_t x458 = UINT16_MAX;
	int32_t x459 = -1;
	static int32_t x460 = INT32_MIN;
	int32_t t114 = -458473;

    t114 = (x457+(x458==(x459==x460)));

    if (t114 != -1) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x461 = 61U;
	int64_t x462 = 732328245331770LL;

    t115 = (x461+(x462==(x463==x464)));

    if (t115 != 61) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x466 = 3603;
	uint16_t x467 = UINT16_MAX;
	int32_t x468 = 243389;
	volatile uint32_t t116 = UINT32_MAX;

    t116 = (x465+(x466==(x467==x468)));

    if (t116 != UINT32_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = -2;
	uint8_t x470 = 0U;
	int16_t x471 = 30;
	uint8_t x472 = 6U;
	int32_t t117 = -5;

    t117 = (x469+(x470==(x471==x472)));

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x473 = INT16_MIN;
	int64_t x474 = INT64_MAX;
	static int16_t x476 = 1;
	volatile int32_t t118 = 691;

    t118 = (x473+(x474==(x475==x476)));

    if (t118 != -32768) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x478 = INT32_MIN;
	volatile int64_t x479 = 159438591LL;
	uint32_t x480 = 3001469U;
	static volatile int32_t t119 = -4;

    t119 = (x477+(x478==(x479==x480)));

    if (t119 != -32768) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x482 = 182;
	int32_t x484 = -43079328;

    t120 = (x481+(x482==(x483==x484)));

    if (t120 != UINT32_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x486 = -3;
	int64_t x487 = -3LL;
	int16_t x488 = -1;
	int32_t t121 = -124430072;

    t121 = (x485+(x486==(x487==x488)));

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint16_t x489 = 23U;
	uint64_t x490 = UINT64_MAX;
	int8_t x492 = 1;
	volatile int32_t t122 = -3534;

    t122 = (x489+(x490==(x491==x492)));

    if (t122 != 23) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = INT64_MIN;
	uint8_t x495 = 2U;
	static int32_t x496 = -26;
	static int64_t t123 = -2759LL;

    t123 = (x493+(x494==(x495==x496)));

    if (t123 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint16_t x497 = UINT16_MAX;
	volatile uint32_t x498 = 16U;
	int32_t x499 = -2;
	int8_t x500 = INT8_MIN;
	volatile int32_t t124 = -122215;

    t124 = (x497+(x498==(x499==x500)));

    if (t124 != 65535) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint64_t x501 = UINT64_MAX;
	uint8_t x503 = 0U;
	uint64_t x504 = 6483760728663560LLU;
	uint64_t t125 = UINT64_MAX;

    t125 = (x501+(x502==(x503==x504)));

    if (t125 != UINT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = 3;
	int64_t x506 = 140327237LL;
	static uint32_t x507 = 1810061U;
	uint16_t x508 = UINT16_MAX;

    t126 = (x505+(x506==(x507==x508)));

    if (t126 != 3) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = -2035;
	volatile int8_t x510 = INT8_MAX;
	static int64_t x511 = 3965109294800025778LL;
	int64_t x512 = INT64_MAX;

    t127 = (x509+(x510==(x511==x512)));

    if (t127 != -2035) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = INT64_MIN;
	uint32_t x514 = 12U;
	uint64_t x515 = 3729027018503LLU;
	int64_t x516 = -1LL;

    t128 = (x513+(x514==(x515==x516)));

    if (t128 != INT64_MIN) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = -1LL;
	static uint16_t x519 = UINT16_MAX;
	int64_t t129 = -1019LL;

    t129 = (x517+(x518==(x519==x520)));

    if (t129 != -1LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = INT64_MIN;
	static int16_t x523 = 8543;
	static int64_t t130 = INT64_MIN;

    t130 = (x521+(x522==(x523==x524)));

    if (t130 != INT64_MIN) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x526 = 8490552039LL;
	static volatile int8_t x527 = -5;
	static uint8_t x528 = 9U;
	int32_t t131 = 1;

    t131 = (x525+(x526==(x527==x528)));

    if (t131 != -1732270) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x529 = 3U;
	uint16_t x530 = 1U;
	int32_t x532 = -480259;
	uint32_t t132 = 4U;

    t132 = (x529+(x530==(x531==x532)));

    if (t132 != 3U) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = INT16_MIN;
	int64_t x535 = INT64_MIN;
	volatile int32_t t133 = 17409726;

    t133 = (x533+(x534==(x535==x536)));

    if (t133 != -32768) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = -1;
	volatile uint32_t x538 = 91U;
	int64_t x539 = INT64_MIN;
	int32_t t134 = 241;

    t134 = (x537+(x538==(x539==x540)));

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x541 = 3393626U;
	volatile int64_t x542 = 5161LL;
	int32_t x543 = 277143;
	int16_t x544 = -4180;
	uint32_t t135 = 1284865799U;

    t135 = (x541+(x542==(x543==x544)));

    if (t135 != 3393626U) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = 159238016475997LL;
	int16_t x546 = -1;
	volatile int16_t x547 = INT16_MIN;
	int32_t x548 = 168845390;
	static int64_t t136 = -3551925808076612LL;

    t136 = (x545+(x546==(x547==x548)));

    if (t136 != 159238016475997LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x549 = -1188;
	volatile int64_t x550 = INT64_MIN;
	int64_t x551 = -812331744LL;
	int8_t x552 = INT8_MIN;
	static volatile int32_t t137 = 189;

    t137 = (x549+(x550==(x551==x552)));

    if (t137 != -1188) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = INT32_MIN;
	static volatile uint16_t x554 = 175U;
	int16_t x555 = -1;
	int16_t x556 = INT16_MAX;
	volatile int32_t t138 = INT32_MIN;

    t138 = (x553+(x554==(x555==x556)));

    if (t138 != INT32_MIN) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = 186LL;
	static int32_t x558 = -47728;
	volatile int32_t x560 = -736;
	volatile int64_t t139 = 122618819441LL;

    t139 = (x557+(x558==(x559==x560)));

    if (t139 != 186LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x562 = 489712272097LLU;
	volatile uint16_t x563 = UINT16_MAX;
	int8_t x564 = -1;
	static volatile int32_t t140 = INT32_MIN;

    t140 = (x561+(x562==(x563==x564)));

    if (t140 != INT32_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x565 = INT32_MAX;
	static volatile uint32_t x566 = 1330049153U;
	int8_t x567 = 0;
	int32_t x568 = INT32_MIN;
	int32_t t141 = INT32_MAX;

    t141 = (x565+(x566==(x567==x568)));

    if (t141 != INT32_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = -1;
	static int16_t x571 = INT16_MIN;
	static volatile uint16_t x572 = 11416U;
	volatile int32_t t142 = 1;

    t142 = (x569+(x570==(x571==x572)));

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = INT64_MIN;
	static int32_t x574 = -1;
	volatile uint16_t x575 = 86U;
	static volatile uint64_t x576 = 11737659250659LLU;
	static int64_t t143 = INT64_MIN;

    t143 = (x573+(x574==(x575==x576)));

    if (t143 != INT64_MIN) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x577 = UINT32_MAX;
	int64_t x578 = INT64_MIN;
	int8_t x580 = INT8_MIN;
	static volatile uint32_t t144 = UINT32_MAX;

    t144 = (x577+(x578==(x579==x580)));

    if (t144 != UINT32_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = -1LL;
	int64_t x582 = -272584758LL;
	volatile uint64_t x583 = 4976764759764190415LLU;
	int64_t x584 = INT64_MIN;

    t145 = (x581+(x582==(x583==x584)));

    if (t145 != -1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x586 = 83U;
	int32_t x587 = 12922399;
	int16_t x588 = INT16_MAX;
	int32_t t146 = INT32_MIN;

    t146 = (x585+(x586==(x587==x588)));

    if (t146 != INT32_MIN) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x589 = 16U;
	int64_t x590 = 292LL;
	static int16_t x591 = INT16_MIN;
	int32_t x592 = 2697206;
	volatile int32_t t147 = 801324;

    t147 = (x589+(x590==(x591==x592)));

    if (t147 != 16) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint8_t x593 = 1U;
	static volatile int32_t x595 = -839898110;
	int32_t t148 = -1;

    t148 = (x593+(x594==(x595==x596)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x597 = UINT64_MAX;
	int8_t x598 = -13;
	uint64_t x599 = 182LLU;
	int32_t x600 = -26563968;
	static volatile uint64_t t149 = UINT64_MAX;

    t149 = (x597+(x598==(x599==x600)));

    if (t149 != UINT64_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x601 = 332802180U;
	volatile int16_t x602 = 14;
	int64_t x603 = INT64_MAX;
	int16_t x604 = -1;
	uint32_t t150 = 1013U;

    t150 = (x601+(x602==(x603==x604)));

    if (t150 != 332802180U) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MIN;
	uint8_t x606 = 1U;
	static int8_t x607 = -1;
	int8_t x608 = -1;
	volatile int32_t t151 = 38841538;

    t151 = (x605+(x606==(x607==x608)));

    if (t151 != -2147483647) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x609 = -1;
	int64_t x610 = INT64_MIN;
	uint8_t x611 = UINT8_MAX;
	static uint16_t x612 = 3227U;
	volatile int32_t t152 = -191244856;

    t152 = (x609+(x610==(x611==x612)));

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x614 = INT8_MIN;

    t153 = (x613+(x614==(x615==x616)));

    if (t153 != 127) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = INT8_MIN;
	int16_t x619 = INT16_MIN;
	static uint32_t x620 = UINT32_MAX;
	int32_t t154 = -6;

    t154 = (x617+(x618==(x619==x620)));

    if (t154 != -128) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint16_t x621 = 6539U;
	int16_t x622 = INT16_MAX;
	int8_t x623 = INT8_MIN;
	static uint8_t x624 = UINT8_MAX;

    t155 = (x621+(x622==(x623==x624)));

    if (t155 != 6539) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x625 = INT64_MIN;
	volatile int64_t x626 = -124466857910296266LL;

    t156 = (x625+(x626==(x627==x628)));

    if (t156 != INT64_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x629 = INT16_MIN;
	int8_t x631 = INT8_MIN;
	int64_t x632 = INT64_MIN;

    t157 = (x629+(x630==(x631==x632)));

    if (t157 != -32768) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = -1LL;
	static int64_t x634 = INT64_MIN;
	int32_t x635 = -6;
	uint32_t x636 = 230170U;

    t158 = (x633+(x634==(x635==x636)));

    if (t158 != -1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = INT32_MIN;
	int16_t x638 = 9804;
	uint16_t x639 = 2098U;
	static int8_t x640 = INT8_MIN;
	static int32_t t159 = INT32_MIN;

    t159 = (x637+(x638==(x639==x640)));

    if (t159 != INT32_MIN) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = INT64_MIN;
	static uint64_t x642 = 2668152633160614760LLU;
	uint64_t x643 = 1841691332134316562LLU;
	int8_t x644 = -1;
	int64_t t160 = INT64_MIN;

    t160 = (x641+(x642==(x643==x644)));

    if (t160 != INT64_MIN) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = INT16_MIN;
	static int64_t x646 = INT64_MIN;
	int32_t t161 = 10;

    t161 = (x645+(x646==(x647==x648)));

    if (t161 != -32768) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = INT8_MIN;
	uint16_t x650 = 15U;
	volatile uint64_t x651 = UINT64_MAX;
	int32_t x652 = -1;
	int32_t t162 = 18;

    t162 = (x649+(x650==(x651==x652)));

    if (t162 != -128) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = INT8_MAX;
	static int32_t x654 = INT32_MIN;
	int32_t x655 = INT32_MIN;
	static int64_t x656 = -1LL;

    t163 = (x653+(x654==(x655==x656)));

    if (t163 != 127) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x657 = 8U;
	int8_t x658 = INT8_MIN;
	uint32_t t164 = 24485711U;

    t164 = (x657+(x658==(x659==x660)));

    if (t164 != 8U) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = -1;
	int32_t x662 = INT32_MAX;
	int64_t x663 = -3LL;

    t165 = (x661+(x662==(x663==x664)));

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x666 = INT64_MIN;
	static uint32_t x667 = 17760U;
	uint16_t x668 = 0U;

    t166 = (x665+(x666==(x667==x668)));

    if (t166 != 26U) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x669 = INT16_MAX;
	uint16_t x670 = UINT16_MAX;
	int8_t x671 = -4;
	int32_t x672 = INT32_MIN;

    t167 = (x669+(x670==(x671==x672)));

    if (t167 != 32767) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = INT16_MIN;
	int8_t x674 = 0;
	uint8_t x675 = 2U;
	volatile uint16_t x676 = 4U;
	int32_t t168 = 2;

    t168 = (x673+(x674==(x675==x676)));

    if (t168 != -32767) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = -1LL;
	int8_t x678 = INT8_MIN;
	volatile int32_t x679 = -1;
	uint64_t x680 = 2858293LLU;
	volatile int64_t t169 = 240LL;

    t169 = (x677+(x678==(x679==x680)));

    if (t169 != -1LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x681 = 30305U;
	static uint16_t x682 = 0U;
	uint16_t x684 = UINT16_MAX;

    t170 = (x681+(x682==(x683==x684)));

    if (t170 != 30306) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = INT64_MAX;
	int16_t x687 = -1;
	uint64_t x688 = UINT64_MAX;
	volatile int64_t t171 = INT64_MAX;

    t171 = (x685+(x686==(x687==x688)));

    if (t171 != INT64_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x689 = 61U;
	int8_t x690 = -1;
	int64_t x691 = INT64_MIN;
	static int64_t x692 = INT64_MAX;

    t172 = (x689+(x690==(x691==x692)));

    if (t172 != 61) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint32_t x693 = 485195U;
	static uint64_t x695 = UINT64_MAX;
	volatile uint64_t x696 = UINT64_MAX;
	uint32_t t173 = 19315U;

    t173 = (x693+(x694==(x695==x696)));

    if (t173 != 485195U) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile uint16_t x697 = UINT16_MAX;
	static uint16_t x698 = UINT16_MAX;
	uint8_t x700 = 0U;
	volatile int32_t t174 = -146935;

    t174 = (x697+(x698==(x699==x700)));

    if (t174 != 65535) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x702 = -63;
	uint64_t x703 = UINT64_MAX;
	static int8_t x704 = INT8_MIN;
	static uint32_t t175 = UINT32_MAX;

    t175 = (x701+(x702==(x703==x704)));

    if (t175 != UINT32_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = INT64_MAX;
	static int16_t x706 = -3847;
	int16_t x707 = -14732;
	uint32_t x708 = UINT32_MAX;
	int64_t t176 = INT64_MAX;

    t176 = (x705+(x706==(x707==x708)));

    if (t176 != INT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x709 = 9U;
	int16_t x710 = INT16_MAX;
	volatile uint8_t x712 = UINT8_MAX;
	static volatile uint32_t t177 = 799U;

    t177 = (x709+(x710==(x711==x712)));

    if (t177 != 9U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x713 = 9U;
	static volatile int32_t x716 = INT32_MIN;
	volatile int32_t t178 = -9252965;

    t178 = (x713+(x714==(x715==x716)));

    if (t178 != 9) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = INT64_MIN;
	uint32_t x719 = 69U;

    t179 = (x717+(x718==(x719==x720)));

    if (t179 != INT64_MIN) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint32_t x721 = UINT32_MAX;
	uint64_t x722 = UINT64_MAX;
	static int8_t x723 = -1;
	int64_t x724 = -1840715LL;
	volatile uint32_t t180 = UINT32_MAX;

    t180 = (x721+(x722==(x723==x724)));

    if (t180 != UINT32_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = -1;
	int8_t x726 = INT8_MIN;
	int32_t x727 = INT32_MAX;
	volatile int32_t x728 = -954;

    t181 = (x725+(x726==(x727==x728)));

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = INT8_MIN;
	int16_t x731 = INT16_MIN;
	int8_t x732 = INT8_MAX;
	int32_t t182 = 2425848;

    t182 = (x729+(x730==(x731==x732)));

    if (t182 != -128) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x733 = 125929985U;
	uint32_t x735 = 107620U;
	int8_t x736 = INT8_MIN;
	static volatile uint32_t t183 = 70U;

    t183 = (x733+(x734==(x735==x736)));

    if (t183 != 125929985U) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int32_t x737 = -1;
	volatile int32_t x738 = INT32_MAX;
	int16_t x740 = INT16_MIN;
	int32_t t184 = 1981695;

    t184 = (x737+(x738==(x739==x740)));

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x742 = -2426;
	volatile int64_t x744 = INT64_MIN;
	int32_t t185 = INT32_MIN;

    t185 = (x741+(x742==(x743==x744)));

    if (t185 != INT32_MIN) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = INT64_MAX;
	int64_t x746 = INT64_MIN;
	int32_t x747 = -1;
	static volatile uint16_t x748 = 1U;
	int64_t t186 = INT64_MAX;

    t186 = (x745+(x746==(x747==x748)));

    if (t186 != INT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = INT16_MIN;
	int16_t x750 = 10;
	int16_t x751 = INT16_MAX;
	static volatile int32_t t187 = 903;

    t187 = (x749+(x750==(x751==x752)));

    if (t187 != -32768) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x754 = 47;
	static int32_t x755 = INT32_MIN;
	int64_t x756 = -475306143590LL;
	volatile int32_t t188 = -4118;

    t188 = (x753+(x754==(x755==x756)));

    if (t188 != 382) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x757 = 64U;
	volatile uint64_t x758 = 21838226295916LLU;
	uint32_t x759 = UINT32_MAX;
	uint32_t x760 = 71U;

    t189 = (x757+(x758==(x759==x760)));

    if (t189 != 64) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x762 = INT16_MIN;
	uint16_t x763 = 198U;
	int16_t x764 = INT16_MAX;
	int64_t t190 = INT64_MAX;

    t190 = (x761+(x762==(x763==x764)));

    if (t190 != INT64_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = 47023454574LL;
	int16_t x766 = INT16_MAX;
	int8_t x767 = 3;
	volatile int64_t t191 = 14863867521LL;

    t191 = (x765+(x766==(x767==x768)));

    if (t191 != 47023454574LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint16_t x770 = 20U;
	uint16_t x771 = 1789U;
	int8_t x772 = -1;
	volatile uint64_t t192 = UINT64_MAX;

    t192 = (x769+(x770==(x771==x772)));

    if (t192 != UINT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x773 = 14348U;
	int8_t x774 = INT8_MIN;
	int16_t x775 = -1;
	volatile uint32_t t193 = 165535U;

    t193 = (x773+(x774==(x775==x776)));

    if (t193 != 14348U) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x778 = INT32_MIN;
	int64_t x779 = INT64_MIN;
	volatile int32_t x780 = INT32_MAX;
	volatile int32_t t194 = -13963;

    t194 = (x777+(x778==(x779==x780)));

    if (t194 != 32767) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = 158620;
	static volatile int32_t t195 = 56;

    t195 = (x781+(x782==(x783==x784)));

    if (t195 != 158620) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x786 = 2656880LLU;
	int8_t x787 = 27;
	volatile uint32_t x788 = UINT32_MAX;
	static volatile uint32_t t196 = 43830753U;

    t196 = (x785+(x786==(x787==x788)));

    if (t196 != 13908U) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = INT32_MAX;
	volatile int8_t x790 = INT8_MIN;
	static uint32_t x791 = 248382989U;
	volatile uint32_t x792 = 58468857U;
	static volatile int32_t t197 = INT32_MAX;

    t197 = (x789+(x790==(x791==x792)));

    if (t197 != INT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = INT64_MIN;
	int8_t x794 = -1;
	static uint8_t x795 = UINT8_MAX;
	uint64_t x796 = UINT64_MAX;
	volatile int64_t t198 = INT64_MIN;

    t198 = (x793+(x794==(x795==x796)));

    if (t198 != INT64_MIN) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x797 = -13;
	uint8_t x798 = 1U;
	uint16_t x799 = 26815U;
	uint32_t x800 = 1U;
	int32_t t199 = 108644;

    t199 = (x797+(x798==(x799==x800)));

    if (t199 != -13) { NG(); } else { ; }
	
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

