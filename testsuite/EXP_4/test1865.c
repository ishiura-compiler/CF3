
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

static int64_t x3 = 666052LL;
int32_t x4 = INT32_MIN;
uint16_t x6 = UINT16_MAX;
volatile int32_t x8 = -482;
static volatile int32_t x9 = 271972016;
uint64_t x11 = 6461818822413636131LLU;
int16_t x20 = INT16_MIN;
volatile int64_t t4 = -22LL;
volatile uint8_t x22 = UINT8_MAX;
int8_t x24 = INT8_MAX;
volatile int32_t t6 = 2;
int16_t x34 = -1;
int8_t x38 = -1;
uint16_t x39 = UINT16_MAX;
static volatile uint64_t t10 = 36LLU;
static uint64_t x46 = UINT64_MAX;
int32_t x51 = -633;
int32_t t13 = 313478;
int8_t x59 = -5;
uint8_t x60 = 51U;
static uint8_t x62 = UINT8_MAX;
int8_t x72 = 5;
uint8_t x75 = 54U;
static int32_t x81 = -4;
uint32_t x82 = 1U;
int32_t x85 = INT32_MIN;
int16_t x91 = -1;
static int32_t x97 = 670406;
int32_t t24 = 104;
int16_t x110 = -1;
volatile uint64_t x113 = UINT64_MAX;
int16_t x119 = -1;
int8_t x122 = -1;
static volatile int32_t t30 = 476;
volatile uint32_t t32 = 14656U;
int64_t t33 = 577LL;
uint32_t t37 = 773274937U;
int16_t x157 = INT16_MAX;
int8_t x159 = INT8_MAX;
int32_t t39 = -605493;
static int64_t x162 = -1LL;
volatile int32_t t40 = -2;
static uint16_t x170 = 2U;
uint8_t x171 = 0U;
int32_t t42 = 102210;
int32_t t43 = -10623776;
volatile uint64_t t46 = 7967971244LLU;
int32_t x192 = INT32_MAX;
int16_t x194 = INT16_MIN;
static uint32_t x196 = 1U;
uint8_t x198 = 36U;
int16_t x201 = INT16_MAX;
int16_t x203 = -1;
static int16_t x206 = -1;
volatile int16_t x208 = INT16_MAX;
static int32_t t51 = 498635484;
static int32_t x211 = -69706;
int8_t x234 = INT8_MIN;
int8_t x235 = -1;
uint64_t x236 = UINT64_MAX;
uint64_t x239 = UINT64_MAX;
volatile int64_t x245 = INT64_MIN;
int32_t x250 = -2243359;
volatile int32_t t62 = 18;
int64_t x257 = INT64_MIN;
int8_t x260 = INT8_MIN;
int64_t t64 = 498244LL;
static uint8_t x261 = UINT8_MAX;
int32_t t65 = 9536817;
static volatile int16_t x265 = INT16_MIN;
volatile int32_t t66 = 212;
volatile int64_t x270 = 1353350475531LL;
int32_t t67 = -13562;
uint32_t x274 = 7U;
int8_t x278 = INT8_MIN;
int64_t x282 = INT64_MAX;
int16_t x289 = -1;
int32_t x290 = INT32_MIN;
static int16_t x294 = -1;
volatile int32_t t73 = -4616001;
uint32_t t74 = 2U;
uint8_t x305 = 116U;
uint16_t x307 = 0U;
volatile uint64_t x308 = 279549645449597629LLU;
static volatile int64_t x315 = -1479260585451282LL;
int16_t x316 = -33;
volatile int64_t t78 = 41666847387045LL;
static volatile int8_t x325 = INT8_MAX;
static volatile int32_t t81 = 37;
uint64_t x340 = UINT64_MAX;
int16_t x342 = INT16_MIN;
int16_t x344 = INT16_MIN;
int8_t x345 = -1;
int16_t x350 = INT16_MIN;
static volatile int32_t t87 = -784201922;
int64_t x359 = INT64_MIN;
int8_t x364 = -1;
volatile int32_t t90 = 0;
volatile int8_t x366 = -1;
volatile int32_t t91 = 125;
int8_t x371 = INT8_MIN;
static volatile uint64_t x378 = 5471544633858LLU;
static int64_t x384 = -2120LL;
int64_t x386 = INT64_MIN;
int16_t x390 = INT16_MIN;
int16_t x395 = -1;
static uint8_t x397 = 25U;
volatile int64_t x404 = 15LL;
int64_t x410 = INT64_MIN;
static uint64_t x414 = UINT64_MAX;
volatile int32_t t105 = 124;
uint8_t x427 = 21U;
int32_t t108 = -590428790;
static int16_t x441 = INT16_MIN;
int32_t x443 = INT32_MAX;
int32_t t110 = -539365937;
static int64_t x454 = INT64_MIN;
int64_t x455 = INT64_MIN;
uint64_t x465 = 232LLU;
int32_t x471 = -7535;
int16_t x472 = INT16_MAX;
int64_t x473 = INT64_MAX;
uint64_t x475 = 11151LLU;
volatile int32_t t119 = 24635;
static volatile uint64_t x492 = 74347495LLU;
uint64_t x497 = UINT64_MAX;
static volatile int32_t x499 = INT32_MAX;
static int64_t x503 = INT64_MIN;
volatile uint16_t x514 = UINT16_MAX;
int8_t x526 = -1;
int32_t t131 = 100862;
static int32_t x531 = INT32_MAX;
static int32_t t133 = 126993;
uint32_t x538 = 28U;
static int32_t x540 = INT32_MAX;
int8_t x547 = -1;
int8_t x557 = 1;
int64_t x561 = INT64_MIN;
static volatile int32_t x562 = INT32_MIN;
uint32_t x565 = 7651U;
static uint32_t x573 = 133779537U;
volatile int8_t x576 = INT8_MAX;
static uint32_t t144 = 5124U;
uint8_t x584 = 2U;
static uint64_t t145 = 2089517321LLU;
int16_t x593 = INT16_MIN;
int16_t x596 = -1;
uint32_t x599 = 621716U;
int32_t t149 = -5;
int16_t x608 = INT16_MAX;
volatile int32_t t151 = 647165;
uint64_t x610 = 578LLU;
static int64_t x612 = -1LL;
int64_t t152 = 3972988LL;
volatile uint64_t x622 = UINT64_MAX;
static int8_t x625 = -1;
uint64_t x632 = 254087157356731033LLU;
volatile uint64_t t157 = 151LLU;
static int8_t x635 = INT8_MIN;
volatile int32_t t160 = -108;
static volatile int64_t t161 = -15601942LL;
int64_t x650 = INT64_MAX;
int64_t x651 = 804LL;
int8_t x653 = -1;
static uint8_t x660 = UINT8_MAX;
static int32_t x664 = INT32_MIN;
volatile int16_t x671 = INT16_MIN;
volatile int32_t t167 = 127161953;
static int64_t x673 = -13893LL;
volatile int16_t x681 = 1;
static volatile uint64_t x683 = 29723500890LLU;
int32_t x691 = INT32_MIN;
int16_t x694 = -1;
volatile int16_t x696 = -1;
int32_t x697 = INT32_MIN;
int64_t x699 = -1LL;
int64_t x702 = -1LL;
volatile int16_t x706 = -2;
volatile int32_t x707 = 1027277561;
int32_t x709 = INT32_MAX;
int32_t x710 = -3;
int64_t x712 = 149568466212998038LL;
int64_t x718 = INT64_MIN;
int32_t x723 = INT32_MIN;
uint16_t x726 = UINT16_MAX;
uint8_t x728 = UINT8_MAX;
int16_t x732 = INT16_MAX;
static int8_t x733 = 2;
int8_t x735 = -1;
volatile int64_t t184 = 1322LL;
uint32_t x744 = 434094U;
int32_t t185 = -13099;
uint8_t x745 = UINT8_MAX;
int8_t x748 = -13;
volatile int32_t t187 = 166;
volatile int32_t x754 = INT32_MIN;
static volatile int64_t x755 = INT64_MAX;
static int32_t x766 = 438695908;
int64_t x768 = INT64_MIN;
volatile uint8_t x773 = 21U;
int32_t t193 = 1203;
static volatile int8_t x778 = INT8_MIN;
uint16_t x781 = 1598U;
uint8_t x788 = UINT8_MAX;
int16_t x790 = -1;
uint64_t t198 = 5297060293079LLU;
uint32_t t199 = 9U;


void f0(void) {
    	int8_t x1 = INT8_MAX;
	int8_t x2 = 1;
	int32_t t0 = 25890;

    t0 = (x1*(x2==(x3<=x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = -1LL;
	volatile uint32_t x7 = 441546975U;
	volatile int64_t t1 = 106153LL;

    t1 = (x5*(x6==(x7<=x8)));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x10 = 1U;
	static int64_t x12 = INT64_MIN;
	int32_t t2 = 1809379;

    t2 = (x9*(x10==(x11<=x12)));

    if (t2 != 271972016) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -256809;
	static volatile int16_t x14 = INT16_MIN;
	static uint64_t x15 = 71LLU;
	static int32_t x16 = INT32_MIN;
	volatile int32_t t3 = -14725048;

    t3 = (x13*(x14==(x15<=x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	static int8_t x18 = INT8_MAX;
	int8_t x19 = -1;

    t4 = (x17*(x18==(x19<=x20)));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 505836165U;
	static uint8_t x23 = 96U;
	volatile uint32_t t5 = 35758747U;

    t5 = (x21*(x22==(x23<=x24)));

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = UINT16_MAX;
	int16_t x26 = -3617;
	int32_t x27 = INT32_MAX;
	int64_t x28 = -1LL;

    t6 = (x25*(x26==(x27<=x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	static int16_t x30 = INT16_MIN;
	int64_t x31 = 1LL;
	static int32_t x32 = INT32_MIN;
	int32_t t7 = -3148;

    t7 = (x29*(x30==(x31<=x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x33 = 101U;
	int32_t x35 = -546;
	static volatile int32_t x36 = INT32_MIN;
	int32_t t8 = 991;

    t8 = (x33*(x34==(x35<=x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MIN;
	uint8_t x40 = 89U;
	volatile int64_t t9 = 1740580926531198584LL;

    t9 = (x37*(x38==(x39<=x40)));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x41 = UINT64_MAX;
	int16_t x42 = INT16_MIN;
	static volatile int32_t x43 = -1;
	uint64_t x44 = 23720497478017636LLU;

    t10 = (x41*(x42==(x43<=x44)));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x45 = -1;
	volatile int8_t x47 = INT8_MIN;
	uint8_t x48 = UINT8_MAX;
	int32_t t11 = -485;

    t11 = (x45*(x46==(x47<=x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MAX;
	int64_t x50 = INT64_MIN;
	int32_t x52 = INT32_MAX;
	volatile int32_t t12 = -1263444;

    t12 = (x49*(x50==(x51<=x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MIN;
	static uint8_t x54 = 59U;
	uint32_t x55 = 32361368U;
	int64_t x56 = -52918441791987652LL;

    t13 = (x53*(x54==(x55<=x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = 3302228;
	int32_t x58 = -1653;
	volatile int32_t t14 = -62305;

    t14 = (x57*(x58==(x59<=x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = UINT32_MAX;
	int8_t x63 = INT8_MIN;
	int32_t x64 = -231;
	uint32_t t15 = 63366U;

    t15 = (x61*(x62==(x63<=x64)));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x65 = 17061113;
	static uint16_t x66 = 1208U;
	static uint8_t x67 = 28U;
	uint64_t x68 = UINT64_MAX;
	static volatile int32_t t16 = -138392;

    t16 = (x65*(x66==(x67<=x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x69 = -45333732301LL;
	uint64_t x70 = 941035858591LLU;
	int8_t x71 = 37;
	static volatile int64_t t17 = -454568213LL;

    t17 = (x69*(x70==(x71<=x72)));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = INT64_MIN;
	volatile uint64_t x74 = UINT64_MAX;
	uint8_t x76 = 5U;
	int64_t t18 = 1LL;

    t18 = (x73*(x74==(x75<=x76)));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = 585U;
	int64_t x78 = INT64_MIN;
	int16_t x79 = INT16_MIN;
	int32_t x80 = -1;
	uint32_t t19 = 59U;

    t19 = (x77*(x78==(x79<=x80)));

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x83 = INT8_MAX;
	uint64_t x84 = 5189647LLU;
	int32_t t20 = -23452;

    t20 = (x81*(x82==(x83<=x84)));

    if (t20 != -4) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int16_t x86 = 0;
	int8_t x87 = INT8_MIN;
	int8_t x88 = 0;
	static int32_t t21 = 6653;

    t21 = (x85*(x86==(x87<=x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MIN;
	volatile uint32_t x90 = 769438U;
	static int64_t x92 = -98LL;
	int32_t t22 = -1023009;

    t22 = (x89*(x90==(x91<=x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = -1;
	volatile int16_t x94 = 1011;
	int8_t x95 = -1;
	int16_t x96 = -1;
	volatile int32_t t23 = 65824;

    t23 = (x93*(x94==(x95<=x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int64_t x98 = -1LL;
	int16_t x99 = 2;
	uint64_t x100 = 2956159LLU;

    t24 = (x97*(x98==(x99<=x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = INT32_MIN;
	uint8_t x102 = 45U;
	uint16_t x103 = 6780U;
	uint16_t x104 = 31554U;
	volatile int32_t t25 = -208;

    t25 = (x101*(x102==(x103<=x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x105 = -19;
	int32_t x106 = INT32_MIN;
	uint64_t x107 = UINT64_MAX;
	uint16_t x108 = 1U;
	int32_t t26 = -714;

    t26 = (x105*(x106==(x107<=x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x109 = 40872190LLU;
	static volatile int64_t x111 = INT64_MIN;
	volatile int16_t x112 = 6321;
	volatile uint64_t t27 = 6535888566LLU;

    t27 = (x109*(x110==(x111<=x112)));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x114 = 7845U;
	int8_t x115 = -1;
	int64_t x116 = -5879379LL;
	volatile uint64_t t28 = 46778777LLU;

    t28 = (x113*(x114==(x115<=x116)));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MIN;
	int16_t x118 = INT16_MIN;
	static int16_t x120 = 13856;
	int32_t t29 = -10;

    t29 = (x117*(x118==(x119<=x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x121 = 14U;
	static volatile int32_t x123 = 509774;
	uint16_t x124 = UINT16_MAX;

    t30 = (x121*(x122==(x123<=x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = INT32_MIN;
	int8_t x126 = INT8_MAX;
	int8_t x127 = INT8_MIN;
	int8_t x128 = -28;
	int32_t t31 = -3390;

    t31 = (x125*(x126==(x127<=x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x129 = 214456505U;
	volatile int16_t x130 = -1;
	int32_t x131 = -1;
	volatile int64_t x132 = INT64_MIN;

    t32 = (x129*(x130==(x131<=x132)));

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MAX;
	int16_t x134 = -1;
	volatile uint8_t x135 = 52U;
	uint8_t x136 = UINT8_MAX;

    t33 = (x133*(x134==(x135<=x136)));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x137 = 517U;
	uint16_t x138 = 11U;
	int16_t x139 = INT16_MAX;
	volatile int64_t x140 = 128349LL;
	volatile uint32_t t34 = 699U;

    t34 = (x137*(x138==(x139<=x140)));

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = 1U;
	static int8_t x142 = INT8_MIN;
	int32_t x143 = 7918;
	static int64_t x144 = -1LL;
	uint32_t t35 = 2U;

    t35 = (x141*(x142==(x143<=x144)));

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MIN;
	int16_t x146 = 84;
	static int16_t x147 = -1;
	uint8_t x148 = UINT8_MAX;
	volatile int32_t t36 = 61104;

    t36 = (x145*(x146==(x147<=x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x149 = 66777829U;
	static int64_t x150 = INT64_MIN;
	uint16_t x151 = 1U;
	int8_t x152 = 1;

    t37 = (x149*(x150==(x151<=x152)));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x153 = INT32_MAX;
	volatile uint64_t x154 = 22225LLU;
	int64_t x155 = INT64_MIN;
	uint16_t x156 = 29U;
	volatile int32_t t38 = 77425693;

    t38 = (x153*(x154==(x155<=x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x158 = INT8_MAX;
	int64_t x160 = -15866LL;

    t39 = (x157*(x158==(x159<=x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = 2665;
	volatile int64_t x163 = -1LL;
	static int64_t x164 = -107430137797979LL;

    t40 = (x161*(x162==(x163<=x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = 616;
	int32_t x166 = -929469;
	int16_t x167 = 3844;
	uint16_t x168 = 250U;
	int32_t t41 = 2;

    t41 = (x165*(x166==(x167<=x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = 0;
	static int8_t x172 = -2;

    t42 = (x169*(x170==(x171<=x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x173 = INT8_MAX;
	int64_t x174 = -70327338645644382LL;
	int8_t x175 = -1;
	uint64_t x176 = 536437228134222835LLU;

    t43 = (x173*(x174==(x175<=x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x177 = -1LL;
	int16_t x178 = INT16_MIN;
	int8_t x179 = -1;
	int32_t x180 = 4431;
	volatile int64_t t44 = 50341436534254969LL;

    t44 = (x177*(x178==(x179<=x180)));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x181 = UINT64_MAX;
	int32_t x182 = -1;
	static uint8_t x183 = 126U;
	int32_t x184 = INT32_MIN;
	volatile uint64_t t45 = 3421634513220696LLU;

    t45 = (x181*(x182==(x183<=x184)));

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x185 = 87611771414LLU;
	static volatile uint8_t x186 = UINT8_MAX;
	volatile uint8_t x187 = 32U;
	uint32_t x188 = 430127893U;

    t46 = (x185*(x186==(x187<=x188)));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x189 = UINT32_MAX;
	int16_t x190 = -1;
	int64_t x191 = INT64_MIN;
	static uint32_t t47 = 1865029673U;

    t47 = (x189*(x190==(x191<=x192)));

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x193 = UINT64_MAX;
	int8_t x195 = 0;
	uint64_t t48 = 3461060208LLU;

    t48 = (x193*(x194==(x195<=x196)));

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = INT8_MAX;
	int32_t x199 = 1;
	volatile int8_t x200 = 1;
	volatile int32_t t49 = 1;

    t49 = (x197*(x198==(x199<=x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x202 = 30607991LLU;
	volatile int8_t x204 = -1;
	static int32_t t50 = -9692;

    t50 = (x201*(x202==(x203<=x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x205 = 18U;
	static int8_t x207 = INT8_MIN;

    t51 = (x205*(x206==(x207<=x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MIN;
	int64_t x210 = -61551335470496LL;
	int8_t x212 = INT8_MIN;
	volatile int64_t t52 = 1809230724451991LL;

    t52 = (x209*(x210==(x211<=x212)));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x213 = 707580459LLU;
	int32_t x214 = -11;
	int32_t x215 = -1;
	int32_t x216 = -24;
	volatile uint64_t t53 = 414551310LLU;

    t53 = (x213*(x214==(x215<=x216)));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint64_t x217 = UINT64_MAX;
	volatile int32_t x218 = INT32_MAX;
	int16_t x219 = -205;
	uint16_t x220 = 16211U;
	volatile uint64_t t54 = 9LLU;

    t54 = (x217*(x218==(x219<=x220)));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MIN;
	volatile uint16_t x222 = UINT16_MAX;
	volatile uint64_t x223 = 213846602LLU;
	static uint16_t x224 = UINT16_MAX;
	volatile int32_t t55 = 1;

    t55 = (x221*(x222==(x223<=x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = INT32_MIN;
	uint64_t x226 = UINT64_MAX;
	int64_t x227 = INT64_MAX;
	int16_t x228 = INT16_MAX;
	volatile int32_t t56 = 9;

    t56 = (x225*(x226==(x227<=x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x229 = 480353U;
	int16_t x230 = INT16_MAX;
	int16_t x231 = INT16_MIN;
	volatile uint64_t x232 = UINT64_MAX;
	volatile uint32_t t57 = 2U;

    t57 = (x229*(x230==(x231<=x232)));

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x233 = 94;
	int32_t t58 = 49430;

    t58 = (x233*(x234==(x235<=x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x237 = 1U;
	int64_t x238 = -327657857744LL;
	uint64_t x240 = 1386023774141841035LLU;
	volatile int32_t t59 = -115065;

    t59 = (x237*(x238==(x239<=x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x241 = 927U;
	static volatile uint16_t x242 = 13588U;
	int32_t x243 = -6925;
	volatile int32_t x244 = INT32_MIN;
	volatile int32_t t60 = -28680;

    t60 = (x241*(x242==(x243<=x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x246 = -1;
	static int32_t x247 = INT32_MIN;
	static uint32_t x248 = 162U;
	volatile int64_t t61 = -15697848448951782LL;

    t61 = (x245*(x246==(x247<=x248)));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x249 = 535560;
	uint32_t x251 = 29U;
	int32_t x252 = 69911;

    t62 = (x249*(x250==(x251<=x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = INT8_MAX;
	uint16_t x254 = 963U;
	uint16_t x255 = 1U;
	volatile int8_t x256 = -4;
	int32_t t63 = 5232;

    t63 = (x253*(x254==(x255<=x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x258 = -1;
	static uint32_t x259 = UINT32_MAX;

    t64 = (x257*(x258==(x259<=x260)));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x262 = INT16_MIN;
	int32_t x263 = -1;
	int8_t x264 = 9;

    t65 = (x261*(x262==(x263<=x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x266 = 9651;
	int32_t x267 = -797071;
	static int32_t x268 = INT32_MIN;

    t66 = (x265*(x266==(x267<=x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x269 = -1;
	int8_t x271 = -1;
	volatile int32_t x272 = INT32_MIN;

    t67 = (x269*(x270==(x271<=x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x273 = -1;
	static uint32_t x275 = 135414242U;
	volatile int64_t x276 = INT64_MIN;
	int32_t t68 = 2846;

    t68 = (x273*(x274==(x275<=x276)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x277 = INT32_MIN;
	int16_t x279 = INT16_MAX;
	int16_t x280 = INT16_MAX;
	int32_t t69 = 745;

    t69 = (x277*(x278==(x279<=x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = INT64_MAX;
	uint8_t x283 = 29U;
	uint64_t x284 = UINT64_MAX;
	static volatile int64_t t70 = -18162630413062LL;

    t70 = (x281*(x282==(x283<=x284)));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = INT32_MIN;
	static uint16_t x286 = 23U;
	static volatile uint32_t x287 = 792387951U;
	int8_t x288 = INT8_MIN;
	static int32_t t71 = -202684;

    t71 = (x285*(x286==(x287<=x288)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x291 = 24U;
	volatile int8_t x292 = INT8_MIN;
	static volatile int32_t t72 = -5259865;

    t72 = (x289*(x290==(x291<=x292)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x293 = 98U;
	volatile int16_t x295 = INT16_MIN;
	int8_t x296 = 0;

    t73 = (x293*(x294==(x295<=x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x297 = 14067U;
	int16_t x298 = -6274;
	int16_t x299 = INT16_MAX;
	int64_t x300 = -1LL;

    t74 = (x297*(x298==(x299<=x300)));

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = INT16_MIN;
	static int16_t x302 = INT16_MIN;
	volatile uint32_t x303 = UINT32_MAX;
	int32_t x304 = 108607;
	static int32_t t75 = 5738;

    t75 = (x301*(x302==(x303<=x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x306 = -1LL;
	volatile int32_t t76 = -9182;

    t76 = (x305*(x306==(x307<=x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x309 = INT16_MAX;
	uint8_t x310 = 0U;
	int32_t x311 = INT32_MIN;
	uint8_t x312 = UINT8_MAX;
	int32_t t77 = 84;

    t77 = (x309*(x310==(x311<=x312)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = INT64_MIN;
	volatile uint64_t x314 = 21190750LLU;

    t78 = (x313*(x314==(x315<=x316)));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int8_t x317 = 28;
	uint64_t x318 = 140525450LLU;
	int16_t x319 = INT16_MIN;
	int64_t x320 = 32086LL;
	int32_t t79 = 78006;

    t79 = (x317*(x318==(x319<=x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x321 = 311U;
	int8_t x322 = INT8_MIN;
	int64_t x323 = INT64_MAX;
	int64_t x324 = -1LL;
	int32_t t80 = 2975;

    t80 = (x321*(x322==(x323<=x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x326 = 1023780513U;
	int32_t x327 = -1;
	static uint64_t x328 = 59841LLU;

    t81 = (x325*(x326==(x327<=x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x329 = -298;
	static int16_t x330 = INT16_MAX;
	volatile uint16_t x331 = 486U;
	volatile int64_t x332 = 2412827477076375LL;
	volatile int32_t t82 = -8314306;

    t82 = (x329*(x330==(x331<=x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = -39451590;
	uint64_t x334 = 2660940185462755481LLU;
	int8_t x335 = INT8_MAX;
	uint64_t x336 = UINT64_MAX;
	volatile int32_t t83 = 298141;

    t83 = (x333*(x334==(x335<=x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint64_t x337 = 486788887608011LLU;
	int32_t x338 = INT32_MIN;
	uint8_t x339 = 85U;
	uint64_t t84 = 1392619843LLU;

    t84 = (x337*(x338==(x339<=x340)));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x341 = 2U;
	static int32_t x343 = INT32_MIN;
	volatile int32_t t85 = 162700;

    t85 = (x341*(x342==(x343<=x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x346 = INT8_MAX;
	volatile int64_t x347 = -1LL;
	uint8_t x348 = 24U;
	volatile int32_t t86 = -49518733;

    t86 = (x345*(x346==(x347<=x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = -1;
	static int16_t x351 = INT16_MAX;
	int8_t x352 = -1;

    t87 = (x349*(x350==(x351<=x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = INT16_MIN;
	static int8_t x354 = -58;
	int64_t x355 = -174LL;
	int16_t x356 = 298;
	int32_t t88 = 98657;

    t88 = (x353*(x354==(x355<=x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x357 = 88LLU;
	volatile int64_t x358 = INT64_MAX;
	static int32_t x360 = -1;
	uint64_t t89 = 59320596006374889LLU;

    t89 = (x357*(x358==(x359<=x360)));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = 1;
	int8_t x362 = INT8_MIN;
	int8_t x363 = INT8_MIN;

    t90 = (x361*(x362==(x363<=x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = 13043576;
	int8_t x367 = 1;
	static int8_t x368 = INT8_MIN;

    t91 = (x365*(x366==(x367<=x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x369 = UINT8_MAX;
	uint16_t x370 = 5U;
	uint64_t x372 = 11078LLU;
	volatile int32_t t92 = 22222343;

    t92 = (x369*(x370==(x371<=x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int64_t x373 = 179737778211LL;
	uint16_t x374 = 34U;
	int16_t x375 = -1;
	static int32_t x376 = -1822097;
	int64_t t93 = -8LL;

    t93 = (x373*(x374==(x375<=x376)));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x377 = 11U;
	int16_t x379 = -42;
	uint64_t x380 = 5104796701122370781LLU;
	static volatile int32_t t94 = 12901;

    t94 = (x377*(x378==(x379<=x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = -1;
	static int32_t x382 = INT32_MAX;
	uint32_t x383 = 23996621U;
	volatile int32_t t95 = -168;

    t95 = (x381*(x382==(x383<=x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x385 = 179230298916925599LLU;
	int8_t x387 = 5;
	uint8_t x388 = 1U;
	uint64_t t96 = 5654805389577597222LLU;

    t96 = (x385*(x386==(x387<=x388)));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x389 = 2150U;
	int16_t x391 = INT16_MIN;
	volatile int16_t x392 = -3;
	static volatile int32_t t97 = 749467;

    t97 = (x389*(x390==(x391<=x392)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = INT32_MIN;
	int64_t x394 = 72173532LL;
	int16_t x396 = INT16_MIN;
	int32_t t98 = 0;

    t98 = (x393*(x394==(x395<=x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x398 = 7;
	int8_t x399 = -1;
	static int64_t x400 = -1LL;
	int32_t t99 = 3709;

    t99 = (x397*(x398==(x399<=x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = 0;
	int8_t x402 = INT8_MAX;
	int32_t x403 = -39;
	volatile int32_t t100 = -701192464;

    t100 = (x401*(x402==(x403<=x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = 1084373849413400LL;
	int64_t x406 = INT64_MIN;
	int64_t x407 = -1511265289LL;
	volatile int16_t x408 = 4225;
	int64_t t101 = -38646074451LL;

    t101 = (x405*(x406==(x407<=x408)));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = -127LL;
	static int16_t x411 = INT16_MAX;
	uint16_t x412 = 1587U;
	int64_t t102 = 340794LL;

    t102 = (x409*(x410==(x411<=x412)));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x413 = INT32_MIN;
	int64_t x415 = -407534985200LL;
	uint64_t x416 = 116929830687LLU;
	volatile int32_t t103 = -132;

    t103 = (x413*(x414==(x415<=x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = -1LL;
	static int16_t x418 = -1;
	int64_t x419 = INT64_MAX;
	uint64_t x420 = 3LLU;
	volatile int64_t t104 = 564939150LL;

    t104 = (x417*(x418==(x419<=x420)));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x421 = -1;
	volatile int64_t x422 = -1LL;
	int8_t x423 = 7;
	int64_t x424 = -1120364LL;

    t105 = (x421*(x422==(x423<=x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = INT8_MAX;
	int8_t x426 = -1;
	static int64_t x428 = INT64_MAX;
	volatile int32_t t106 = -763;

    t106 = (x425*(x426==(x427<=x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = -1LL;
	int16_t x430 = -23;
	int8_t x431 = INT8_MIN;
	volatile int64_t x432 = INT64_MIN;
	int64_t t107 = 267069556345LL;

    t107 = (x429*(x430==(x431<=x432)));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x433 = 4U;
	int8_t x434 = INT8_MAX;
	volatile uint32_t x435 = UINT32_MAX;
	static volatile int16_t x436 = INT16_MAX;

    t108 = (x433*(x434==(x435<=x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x437 = 27U;
	static uint64_t x438 = 312403066LLU;
	uint64_t x439 = UINT64_MAX;
	uint32_t x440 = 11428U;
	static volatile int32_t t109 = -20899491;

    t109 = (x437*(x438==(x439<=x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x442 = UINT16_MAX;
	int16_t x444 = INT16_MAX;

    t110 = (x441*(x442==(x443<=x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = -1LL;
	int8_t x446 = INT8_MIN;
	volatile uint16_t x447 = UINT16_MAX;
	int16_t x448 = -3301;
	int64_t t111 = 15718827LL;

    t111 = (x445*(x446==(x447<=x448)));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x449 = 1978073969U;
	volatile int32_t x450 = 1;
	int16_t x451 = -1;
	int16_t x452 = INT16_MAX;
	uint32_t t112 = 30703215U;

    t112 = (x449*(x450==(x451<=x452)));

    if (t112 != 1978073969U) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = INT8_MAX;
	int32_t x456 = 2762;
	volatile int32_t t113 = 37194392;

    t113 = (x453*(x454==(x455<=x456)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = -1;
	int16_t x458 = -1;
	volatile uint8_t x459 = 4U;
	volatile int16_t x460 = INT16_MIN;
	int32_t t114 = -93594;

    t114 = (x457*(x458==(x459<=x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint16_t x461 = 20U;
	int32_t x462 = INT32_MAX;
	static int8_t x463 = INT8_MAX;
	int16_t x464 = 1;
	volatile int32_t t115 = -1;

    t115 = (x461*(x462==(x463<=x464)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x466 = INT8_MIN;
	volatile uint64_t x467 = 573LLU;
	uint16_t x468 = UINT16_MAX;
	static volatile uint64_t t116 = 245716706175LLU;

    t116 = (x465*(x466==(x467<=x468)));

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = -1;
	int8_t x470 = -1;
	int32_t t117 = 1581;

    t117 = (x469*(x470==(x471<=x472)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x474 = -92386437;
	int32_t x476 = INT32_MAX;
	volatile int64_t t118 = -72LL;

    t118 = (x473*(x474==(x475<=x476)));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint8_t x477 = UINT8_MAX;
	int16_t x478 = INT16_MIN;
	uint8_t x479 = UINT8_MAX;
	uint64_t x480 = UINT64_MAX;

    t119 = (x477*(x478==(x479<=x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint16_t x481 = 3U;
	static int32_t x482 = 9;
	int16_t x483 = INT16_MIN;
	uint64_t x484 = UINT64_MAX;
	int32_t t120 = 161;

    t120 = (x481*(x482==(x483<=x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = INT64_MIN;
	int16_t x486 = INT16_MAX;
	volatile uint32_t x487 = 20970651U;
	volatile int16_t x488 = -20;
	volatile int64_t t121 = 245LL;

    t121 = (x485*(x486==(x487<=x488)));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = INT16_MIN;
	int32_t x490 = INT32_MIN;
	uint32_t x491 = UINT32_MAX;
	volatile int32_t t122 = 101;

    t122 = (x489*(x490==(x491<=x492)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = -1;
	int16_t x494 = INT16_MIN;
	int64_t x495 = INT64_MAX;
	uint8_t x496 = 21U;
	volatile int32_t t123 = 1;

    t123 = (x493*(x494==(x495<=x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x498 = 3U;
	uint32_t x500 = 302U;
	uint64_t t124 = 4345206789712LLU;

    t124 = (x497*(x498==(x499<=x500)));

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x501 = 2;
	uint8_t x502 = 5U;
	static int8_t x504 = 1;
	volatile int32_t t125 = -2735;

    t125 = (x501*(x502==(x503<=x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x505 = INT16_MIN;
	static int64_t x506 = -1LL;
	int32_t x507 = INT32_MIN;
	int64_t x508 = 371691414954535LL;
	volatile int32_t t126 = 11059;

    t126 = (x505*(x506==(x507<=x508)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x509 = INT32_MAX;
	int8_t x510 = 3;
	uint8_t x511 = 61U;
	uint8_t x512 = UINT8_MAX;
	int32_t t127 = 3;

    t127 = (x509*(x510==(x511<=x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = INT16_MIN;
	static volatile int8_t x515 = INT8_MIN;
	int16_t x516 = -20;
	int32_t t128 = -9397999;

    t128 = (x513*(x514==(x515<=x516)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = -1;
	volatile int32_t x518 = 31607;
	int32_t x519 = 147;
	uint16_t x520 = 4U;
	volatile int32_t t129 = 13;

    t129 = (x517*(x518==(x519<=x520)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x521 = -3;
	static int16_t x522 = -1;
	uint8_t x523 = 53U;
	static int16_t x524 = INT16_MIN;
	static volatile int32_t t130 = 268969847;

    t130 = (x521*(x522==(x523<=x524)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x525 = 3U;
	int64_t x527 = -1LL;
	int64_t x528 = INT64_MAX;

    t131 = (x525*(x526==(x527<=x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x529 = -1;
	volatile uint8_t x530 = UINT8_MAX;
	int64_t x532 = 4939LL;
	static int32_t t132 = -27257;

    t132 = (x529*(x530==(x531<=x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint8_t x533 = 1U;
	static int16_t x534 = INT16_MIN;
	static uint32_t x535 = 303696U;
	int8_t x536 = -1;

    t133 = (x533*(x534==(x535<=x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = -1;
	int32_t x539 = INT32_MIN;
	int32_t t134 = 1;

    t134 = (x537*(x538==(x539<=x540)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = -1;
	static uint8_t x542 = 38U;
	int16_t x543 = INT16_MAX;
	volatile int8_t x544 = INT8_MIN;
	volatile int32_t t135 = -113;

    t135 = (x541*(x542==(x543<=x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = INT8_MIN;
	uint16_t x546 = 50U;
	int64_t x548 = 172LL;
	int32_t t136 = 293930598;

    t136 = (x545*(x546==(x547<=x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = 819692972;
	int16_t x550 = INT16_MAX;
	volatile int64_t x551 = -1LL;
	int64_t x552 = INT64_MIN;
	static int32_t t137 = -340978;

    t137 = (x549*(x550==(x551<=x552)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x553 = 11U;
	static int64_t x554 = INT64_MIN;
	static uint64_t x555 = UINT64_MAX;
	int64_t x556 = INT64_MIN;
	int32_t t138 = 101;

    t138 = (x553*(x554==(x555<=x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x558 = -1;
	uint32_t x559 = 7U;
	volatile uint8_t x560 = 77U;
	int32_t t139 = -5;

    t139 = (x557*(x558==(x559<=x560)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x563 = INT8_MIN;
	int8_t x564 = INT8_MIN;
	int64_t t140 = -14579308726702LL;

    t140 = (x561*(x562==(x563<=x564)));

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x566 = INT64_MAX;
	int16_t x567 = INT16_MIN;
	volatile uint32_t x568 = UINT32_MAX;
	static uint32_t t141 = 1547100U;

    t141 = (x565*(x566==(x567<=x568)));

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x569 = 0U;
	volatile int8_t x570 = -2;
	static uint64_t x571 = 3616190761045LLU;
	volatile uint64_t x572 = 22120316354LLU;
	int32_t t142 = -1576;

    t142 = (x569*(x570==(x571<=x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x574 = -4;
	static int16_t x575 = -1;
	static uint32_t t143 = 59937561U;

    t143 = (x573*(x574==(x575<=x576)));

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint32_t x577 = UINT32_MAX;
	volatile int32_t x578 = -1;
	int32_t x579 = INT32_MIN;
	uint64_t x580 = 909181157234065LLU;

    t144 = (x577*(x578==(x579<=x580)));

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x581 = UINT64_MAX;
	static uint64_t x582 = 9128289290LLU;
	uint8_t x583 = 6U;

    t145 = (x581*(x582==(x583<=x584)));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile uint32_t x585 = 1228223U;
	static int32_t x586 = INT32_MIN;
	int32_t x587 = -47651;
	uint16_t x588 = 28431U;
	volatile uint32_t t146 = 6801064U;

    t146 = (x585*(x586==(x587<=x588)));

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = INT32_MIN;
	int64_t x590 = -1LL;
	int32_t x591 = 7;
	static int32_t x592 = INT32_MAX;
	volatile int32_t t147 = -207422001;

    t147 = (x589*(x590==(x591<=x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x594 = 11805368206651LLU;
	static int32_t x595 = INT32_MIN;
	volatile int32_t t148 = 97;

    t148 = (x593*(x594==(x595<=x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint8_t x597 = 0U;
	uint16_t x598 = 9U;
	int16_t x600 = INT16_MIN;

    t149 = (x597*(x598==(x599<=x600)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x601 = 1U;
	int16_t x602 = INT16_MAX;
	static uint32_t x603 = 495476U;
	int16_t x604 = 457;
	volatile int32_t t150 = 366586;

    t150 = (x601*(x602==(x603<=x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = -1;
	static int32_t x606 = INT32_MAX;
	static int8_t x607 = 20;

    t151 = (x605*(x606==(x607<=x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x609 = -1LL;
	uint32_t x611 = 1650668617U;

    t152 = (x609*(x610==(x611<=x612)));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = -1;
	int64_t x614 = -1LL;
	int32_t x615 = -440161;
	int16_t x616 = INT16_MAX;
	volatile int32_t t153 = -2629;

    t153 = (x613*(x614==(x615<=x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x617 = -1;
	static int32_t x618 = -841147661;
	static volatile uint32_t x619 = UINT32_MAX;
	volatile int32_t x620 = -269039;
	int32_t t154 = 4184080;

    t154 = (x617*(x618==(x619<=x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x621 = 131U;
	volatile uint64_t x623 = 1052907495808743LLU;
	uint32_t x624 = 1U;
	volatile int32_t t155 = 448014;

    t155 = (x621*(x622==(x623<=x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x626 = INT16_MIN;
	static int16_t x627 = INT16_MIN;
	int16_t x628 = INT16_MIN;
	static volatile int32_t t156 = 52;

    t156 = (x625*(x626==(x627<=x628)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x629 = UINT64_MAX;
	volatile int64_t x630 = INT64_MIN;
	static uint32_t x631 = UINT32_MAX;

    t157 = (x629*(x630==(x631<=x632)));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x633 = -110;
	volatile uint16_t x634 = 15U;
	int16_t x636 = INT16_MIN;
	volatile int32_t t158 = 671;

    t158 = (x633*(x634==(x635<=x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x637 = 1U;
	int32_t x638 = INT32_MAX;
	uint8_t x639 = UINT8_MAX;
	int8_t x640 = 2;
	static int32_t t159 = 718726;

    t159 = (x637*(x638==(x639<=x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = INT32_MIN;
	uint64_t x642 = UINT64_MAX;
	volatile uint8_t x643 = 20U;
	uint16_t x644 = UINT16_MAX;

    t160 = (x641*(x642==(x643<=x644)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x645 = INT64_MIN;
	int8_t x646 = INT8_MIN;
	static uint64_t x647 = 377LLU;
	uint64_t x648 = 1323904545781086LLU;

    t161 = (x645*(x646==(x647<=x648)));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x649 = 7119U;
	uint16_t x652 = 1164U;
	static volatile int32_t t162 = -10464765;

    t162 = (x649*(x650==(x651<=x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x654 = 4976847;
	int8_t x655 = INT8_MAX;
	static int8_t x656 = 1;
	static int32_t t163 = -23;

    t163 = (x653*(x654==(x655<=x656)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = -13;
	static int16_t x658 = INT16_MIN;
	int64_t x659 = INT64_MIN;
	volatile int32_t t164 = 119;

    t164 = (x657*(x658==(x659<=x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x661 = INT32_MAX;
	static uint16_t x662 = 1U;
	int32_t x663 = -23417625;
	volatile int32_t t165 = 54478;

    t165 = (x661*(x662==(x663<=x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = INT64_MAX;
	int8_t x666 = INT8_MIN;
	int8_t x667 = INT8_MIN;
	int64_t x668 = 524995564107880732LL;
	volatile int64_t t166 = -52865144LL;

    t166 = (x665*(x666==(x667<=x668)));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x669 = 7;
	static volatile int64_t x670 = -146819LL;
	volatile int8_t x672 = -1;

    t167 = (x669*(x670==(x671<=x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x674 = 126759326724LLU;
	int16_t x675 = INT16_MAX;
	int8_t x676 = INT8_MIN;
	volatile int64_t t168 = 7607LL;

    t168 = (x673*(x674==(x675<=x676)));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = -1;
	int16_t x678 = -1580;
	volatile int32_t x679 = INT32_MAX;
	uint64_t x680 = UINT64_MAX;
	static volatile int32_t t169 = -1;

    t169 = (x677*(x678==(x679<=x680)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x682 = 1983LL;
	static uint16_t x684 = UINT16_MAX;
	volatile int32_t t170 = -1;

    t170 = (x681*(x682==(x683<=x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x685 = 159404476401LLU;
	static uint64_t x686 = 427727535LLU;
	static int8_t x687 = -1;
	uint16_t x688 = 15U;
	uint64_t t171 = 139005668354217902LLU;

    t171 = (x685*(x686==(x687<=x688)));

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x689 = 8;
	int16_t x690 = INT16_MIN;
	int16_t x692 = -10;
	int32_t t172 = 366;

    t172 = (x689*(x690==(x691<=x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x693 = 1310LLU;
	volatile int8_t x695 = -15;
	uint64_t t173 = 2727815486550860223LLU;

    t173 = (x693*(x694==(x695<=x696)));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x698 = UINT8_MAX;
	static int32_t x700 = INT32_MIN;
	int32_t t174 = 755;

    t174 = (x697*(x698==(x699<=x700)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = INT32_MAX;
	int32_t x703 = -835344;
	int64_t x704 = INT64_MAX;
	int32_t t175 = 3;

    t175 = (x701*(x702==(x703<=x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x705 = 2413732398LLU;
	static uint16_t x708 = UINT16_MAX;
	uint64_t t176 = 9LLU;

    t176 = (x705*(x706==(x707<=x708)));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x711 = 901924LLU;
	int32_t t177 = 158567284;

    t177 = (x709*(x710==(x711<=x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x713 = 451;
	volatile int16_t x714 = -1;
	int64_t x715 = -45827163LL;
	uint64_t x716 = UINT64_MAX;
	volatile int32_t t178 = 3417;

    t178 = (x713*(x714==(x715<=x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x717 = 1U;
	uint64_t x719 = 179976765869LLU;
	uint16_t x720 = 0U;
	int32_t t179 = -302;

    t179 = (x717*(x718==(x719<=x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x721 = INT8_MAX;
	int64_t x722 = INT64_MIN;
	static int64_t x724 = -1LL;
	int32_t t180 = 48576835;

    t180 = (x721*(x722==(x723<=x724)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x725 = INT16_MAX;
	uint16_t x727 = UINT16_MAX;
	volatile int32_t t181 = -34109;

    t181 = (x725*(x726==(x727<=x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = INT16_MIN;
	volatile uint16_t x730 = 9U;
	int16_t x731 = INT16_MIN;
	int32_t t182 = -119045;

    t182 = (x729*(x730==(x731<=x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x734 = -1;
	volatile int32_t x736 = INT32_MAX;
	volatile int32_t t183 = 324760195;

    t183 = (x733*(x734==(x735<=x736)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = -258523319562165LL;
	static uint32_t x738 = UINT32_MAX;
	int8_t x739 = -9;
	uint16_t x740 = 568U;

    t184 = (x737*(x738==(x739<=x740)));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x741 = UINT8_MAX;
	static int32_t x742 = INT32_MAX;
	static int8_t x743 = INT8_MIN;

    t185 = (x741*(x742==(x743<=x744)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x746 = INT64_MAX;
	volatile int16_t x747 = -1;
	volatile int32_t t186 = -26031095;

    t186 = (x745*(x746==(x747<=x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = INT32_MAX;
	int64_t x750 = 179814LL;
	int16_t x751 = -1;
	volatile int32_t x752 = 74174735;

    t187 = (x749*(x750==(x751<=x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = 11734075;
	int16_t x756 = -1;
	volatile int32_t t188 = -15;

    t188 = (x753*(x754==(x755<=x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = INT64_MIN;
	int32_t x758 = INT32_MIN;
	volatile int16_t x759 = -1;
	uint16_t x760 = UINT16_MAX;
	volatile int64_t t189 = 3960023LL;

    t189 = (x757*(x758==(x759<=x760)));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x761 = INT16_MIN;
	uint8_t x762 = 11U;
	static int16_t x763 = INT16_MIN;
	int32_t x764 = INT32_MIN;
	volatile int32_t t190 = -2194844;

    t190 = (x761*(x762==(x763<=x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = -38;
	int64_t x767 = INT64_MIN;
	volatile int32_t t191 = -43;

    t191 = (x765*(x766==(x767<=x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x769 = -1;
	int32_t x770 = INT32_MIN;
	uint64_t x771 = 8928797683753234079LLU;
	int16_t x772 = INT16_MIN;
	static int32_t t192 = 1;

    t192 = (x769*(x770==(x771<=x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x774 = UINT16_MAX;
	uint16_t x775 = UINT16_MAX;
	uint16_t x776 = 10519U;

    t193 = (x773*(x774==(x775<=x776)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = -5;
	int8_t x779 = INT8_MIN;
	uint64_t x780 = UINT64_MAX;
	volatile int32_t t194 = -323762426;

    t194 = (x777*(x778==(x779<=x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x782 = 239165106U;
	static int16_t x783 = -1;
	uint64_t x784 = 345LLU;
	int32_t t195 = -425;

    t195 = (x781*(x782==(x783<=x784)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x785 = INT64_MIN;
	uint16_t x786 = UINT16_MAX;
	uint64_t x787 = UINT64_MAX;
	int64_t t196 = 582255059LL;

    t196 = (x785*(x786==(x787<=x788)));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x789 = INT8_MAX;
	int8_t x791 = -1;
	int16_t x792 = INT16_MIN;
	static volatile int32_t t197 = -1;

    t197 = (x789*(x790==(x791<=x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x793 = UINT64_MAX;
	uint64_t x794 = 165818813098923LLU;
	static volatile int32_t x795 = -1;
	static int8_t x796 = -1;

    t198 = (x793*(x794==(x795<=x796)));

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x797 = 1344912U;
	int16_t x798 = INT16_MIN;
	static volatile int64_t x799 = INT64_MIN;
	int64_t x800 = INT64_MIN;

    t199 = (x797*(x798==(x799<=x800)));

    if (t199 != 0U) { NG(); } else { ; }
	
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

