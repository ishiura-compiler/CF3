
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

int32_t x2 = INT32_MIN;
volatile int8_t x4 = INT8_MIN;
volatile int64_t x7 = INT64_MIN;
int64_t x8 = -7LL;
volatile int64_t x11 = INT64_MIN;
static volatile int16_t x12 = 0;
int16_t x13 = INT16_MIN;
volatile uint16_t x15 = 7615U;
uint32_t x19 = UINT32_MAX;
volatile int32_t t4 = -1;
uint8_t x22 = UINT8_MAX;
int64_t t6 = INT64_MAX;
int32_t x30 = INT32_MIN;
static volatile uint64_t x33 = UINT64_MAX;
static int32_t x35 = INT32_MIN;
int16_t x37 = INT16_MIN;
int32_t t9 = 212;
uint32_t x41 = 341U;
int32_t x42 = 217493;
static int8_t x43 = 9;
volatile uint16_t x51 = 1U;
uint8_t x53 = 1U;
uint32_t x63 = 1U;
int8_t x76 = 11;
uint32_t x79 = 5U;
int64_t x83 = 934733192LL;
uint16_t x86 = UINT16_MAX;
static int32_t x92 = 90223947;
int32_t t22 = -1;
volatile int32_t t23 = 1583973;
int64_t x102 = INT64_MAX;
uint32_t x107 = 20U;
int64_t x109 = -255374LL;
volatile int64_t t27 = 135697020920969766LL;
volatile uint8_t x115 = 119U;
uint16_t x119 = UINT16_MAX;
static int64_t x123 = INT64_MAX;
static int64_t x128 = INT64_MIN;
int16_t x130 = -9639;
int8_t x132 = 18;
int32_t x138 = -1;
int8_t x139 = 59;
int64_t t34 = -1362141689578LL;
int64_t t35 = -417LL;
int8_t x145 = 55;
int64_t x146 = 121080954LL;
int64_t x147 = -1LL;
int8_t x149 = 0;
int64_t x155 = -1LL;
uint32_t x157 = 6U;
int16_t x158 = 105;
volatile uint16_t x164 = 2732U;
static volatile int32_t t40 = 795769507;
uint8_t x165 = 0U;
volatile int8_t x167 = INT8_MIN;
int32_t t41 = -1615578;
int16_t x170 = -1;
uint32_t x171 = 645U;
static volatile int32_t x172 = INT32_MIN;
int64_t x173 = -1LL;
static int32_t x176 = INT32_MAX;
int64_t t43 = -15193831LL;
static int8_t x182 = 25;
uint32_t x184 = 507U;
int16_t x185 = -1295;
int32_t t47 = 4063398;
static volatile int32_t t49 = INT32_MIN;
volatile int16_t x207 = 27;
volatile int32_t t52 = INT32_MIN;
int16_t x216 = INT16_MAX;
uint8_t x219 = 0U;
int16_t x220 = -6834;
volatile int64_t t54 = INT64_MIN;
int8_t x221 = 2;
volatile uint32_t x224 = 0U;
int64_t x227 = INT64_MIN;
static int64_t x229 = -1LL;
int32_t x232 = INT32_MIN;
volatile int64_t t57 = -29LL;
volatile int64_t x239 = -35087LL;
static uint32_t x240 = 164403250U;
volatile int32_t t59 = -1283320;
volatile int64_t x246 = INT64_MIN;
uint32_t x248 = 23299U;
volatile uint64_t x249 = 14423974061LLU;
static volatile int32_t t63 = -874145;
volatile uint16_t x257 = UINT16_MAX;
static int64_t x259 = INT64_MIN;
uint64_t x261 = UINT64_MAX;
uint64_t x272 = 23788LLU;
uint64_t t67 = UINT64_MAX;
int32_t x273 = -204344;
static int32_t x275 = INT32_MAX;
int64_t x279 = INT64_MAX;
volatile int64_t x281 = -144110204344724567LL;
static volatile uint32_t x283 = UINT32_MAX;
volatile int64_t x285 = -161261LL;
int64_t x287 = INT64_MIN;
int8_t x302 = 54;
uint16_t x304 = 2U;
volatile int8_t x305 = INT8_MAX;
uint16_t x307 = 6528U;
int32_t x321 = -1;
int8_t x324 = 3;
uint64_t x332 = 1904LLU;
volatile int32_t t82 = 30771;
uint8_t x333 = 0U;
int32_t x334 = INT32_MAX;
int16_t x338 = INT16_MAX;
int64_t x340 = INT64_MAX;
volatile uint32_t x343 = 477830U;
volatile uint8_t x351 = 6U;
int16_t x352 = INT16_MAX;
int16_t x354 = INT16_MIN;
static uint32_t x356 = 5743966U;
int64_t x357 = -4LL;
uint64_t x358 = 362432684312144LLU;
static int16_t x364 = INT16_MIN;
uint32_t x365 = 2U;
uint8_t x366 = 78U;
uint8_t x368 = 1U;
int8_t x372 = INT8_MIN;
uint16_t x376 = 739U;
static int8_t x377 = -1;
uint8_t x381 = 117U;
int8_t x385 = INT8_MAX;
static int8_t x386 = 0;
int8_t x388 = -12;
int8_t x389 = INT8_MAX;
static int32_t t97 = -229063767;
static int16_t x394 = INT16_MAX;
uint8_t x400 = 29U;
uint32_t x406 = UINT32_MAX;
volatile int64_t t102 = -291532370883LL;
int32_t x414 = INT32_MIN;
static volatile int16_t x417 = INT16_MIN;
static int8_t x419 = 0;
int8_t x422 = -1;
int64_t x423 = INT64_MIN;
uint32_t t105 = 10301843U;
static volatile uint8_t x426 = 4U;
uint32_t x429 = 1806083726U;
uint64_t x430 = 119735839LLU;
volatile uint64_t x438 = 59LLU;
uint8_t x440 = 7U;
static int32_t t109 = -19805;
uint16_t x444 = 442U;
int64_t x445 = 19631539026LL;
volatile int8_t x453 = -19;
int64_t x460 = 16976097859427LL;
volatile int32_t x471 = INT32_MIN;
int16_t x473 = INT16_MIN;
int32_t x476 = -2106679;
uint16_t x486 = 1U;
static volatile uint32_t x487 = 907485337U;
int32_t x497 = -451253;
static uint64_t x498 = 874533367540LLU;
int32_t t124 = 3118777;
uint16_t x501 = 7909U;
volatile uint32_t x507 = 3653878U;
int32_t t126 = -11491;
volatile uint32_t t129 = UINT32_MAX;
int64_t x524 = -1LL;
volatile int32_t t131 = -5;
uint64_t x530 = 70661450510463466LLU;
static int16_t x531 = 36;
int32_t x533 = INT32_MIN;
static volatile uint16_t x538 = UINT16_MAX;
int8_t x539 = INT8_MIN;
int16_t x543 = -1;
uint64_t x544 = 241460LLU;
int32_t t135 = -390223537;
uint64_t x547 = 5107750860342LLU;
static uint16_t x553 = UINT16_MAX;
int16_t x565 = 0;
static int64_t x568 = INT64_MIN;
volatile int32_t t141 = 1001;
uint32_t x573 = 11555563U;
int8_t x580 = INT8_MIN;
int16_t x587 = -265;
int32_t t147 = 8101317;
static int64_t x593 = INT64_MIN;
int16_t x600 = INT16_MAX;
volatile int32_t t149 = 15;
volatile int32_t x604 = INT32_MIN;
static int8_t x610 = 9;
uint16_t x613 = 3U;
int32_t t153 = 7927834;
int32_t x628 = INT32_MAX;
uint64_t x635 = 43LLU;
uint32_t x637 = UINT32_MAX;
volatile uint8_t x638 = UINT8_MAX;
static uint8_t x650 = 11U;
volatile uint32_t x652 = UINT32_MAX;
uint32_t t162 = UINT32_MAX;
int32_t t165 = -24916;
uint32_t x667 = UINT32_MAX;
int8_t x685 = 0;
static uint64_t x691 = 2887128LLU;
int32_t x694 = INT32_MAX;
static uint16_t x699 = 13U;
volatile int32_t t175 = 1857554;
int64_t x706 = INT64_MIN;
int16_t x707 = -15998;
int32_t x712 = -2;
int32_t x718 = -1;
uint8_t x727 = UINT8_MAX;
volatile int32_t t181 = -24;
int8_t x737 = -6;
int64_t x739 = -96250219199LL;
uint64_t x740 = UINT64_MAX;
static int32_t x746 = INT32_MAX;
int32_t x749 = INT32_MAX;
volatile uint16_t x750 = 1U;
int64_t x752 = INT64_MIN;
int32_t t187 = -8;
int64_t x753 = INT64_MAX;
int32_t t189 = -547137;
static uint64_t x765 = 254LLU;
uint8_t x768 = 0U;
int64_t x773 = INT64_MIN;
int8_t x774 = 1;
static uint64_t x775 = UINT64_MAX;
static uint64_t x786 = 1LLU;
static uint64_t x788 = 58LLU;
static uint64_t t198 = 1027992175LLU;
int32_t x798 = INT32_MIN;
volatile uint64_t x799 = 3254162LLU;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	int32_t x3 = -55;
	static volatile int64_t t0 = INT64_MIN;

    t0 = (x1*(x2!=(x3>x4)));

    if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint64_t x5 = 7205194349581LLU;
	int64_t x6 = 0LL;
	volatile uint64_t t1 = 9005306LLU;

    t1 = (x5*(x6!=(x7>x8)));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -526;
	int64_t x10 = 9792157744LL;
	int32_t t2 = -3069902;

    t2 = (x9*(x10!=(x11>x12)));

    if (t2 != -526) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x14 = INT8_MIN;
	int8_t x16 = INT8_MAX;
	volatile int32_t t3 = 15410249;

    t3 = (x13*(x14!=(x15>x16)));

    if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	uint64_t x18 = 414687LLU;
	static volatile int16_t x20 = -1;

    t4 = (x17*(x18!=(x19>x20)));

    if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = UINT8_MAX;
	static uint32_t x23 = 5495913U;
	volatile int8_t x24 = INT8_MIN;
	int32_t t5 = -284868850;

    t5 = (x21*(x22!=(x23>x24)));

    if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MAX;
	static int16_t x26 = INT16_MIN;
	uint64_t x27 = 2098063619385LLU;
	static uint32_t x28 = UINT32_MAX;

    t6 = (x25*(x26!=(x27>x28)));

    if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -1;
	static int16_t x31 = INT16_MIN;
	volatile uint64_t x32 = UINT64_MAX;
	volatile int32_t t7 = -229601;

    t7 = (x29*(x30!=(x31>x32)));

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x34 = -1;
	static uint32_t x36 = 4U;
	volatile uint64_t t8 = UINT64_MAX;

    t8 = (x33*(x34!=(x35>x36)));

    if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x38 = 1U;
	static uint8_t x39 = 5U;
	int32_t x40 = INT32_MIN;

    t9 = (x37*(x38!=(x39>x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x44 = INT64_MIN;
	uint32_t t10 = 32684560U;

    t10 = (x41*(x42!=(x43>x44)));

    if (t10 != 341U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x45 = 75821746U;
	int32_t x46 = -1;
	int32_t x47 = INT32_MIN;
	static int8_t x48 = -1;
	static uint32_t t11 = 2U;

    t11 = (x45*(x46!=(x47>x48)));

    if (t11 != 75821746U) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x49 = 11360295588LL;
	volatile int32_t x50 = INT32_MAX;
	uint8_t x52 = UINT8_MAX;
	int64_t t12 = 7739214009LL;

    t12 = (x49*(x50!=(x51>x52)));

    if (t12 != 11360295588LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x54 = 2U;
	uint64_t x55 = 1LLU;
	int16_t x56 = INT16_MAX;
	int32_t t13 = -17;

    t13 = (x53*(x54!=(x55>x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MIN;
	static uint16_t x58 = 16862U;
	static int8_t x59 = -1;
	int16_t x60 = -978;
	int64_t t14 = INT64_MIN;

    t14 = (x57*(x58!=(x59>x60)));

    if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MIN;
	int64_t x62 = INT64_MIN;
	int8_t x64 = -59;
	volatile int32_t t15 = INT32_MIN;

    t15 = (x61*(x62!=(x63>x64)));

    if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = -1;
	uint8_t x66 = 125U;
	static uint8_t x67 = UINT8_MAX;
	volatile int16_t x68 = -1;
	volatile int32_t t16 = 289479002;

    t16 = (x65*(x66!=(x67>x68)));

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = -45;
	int32_t x70 = -1;
	int32_t x71 = INT32_MAX;
	int8_t x72 = INT8_MAX;
	int32_t t17 = -10121920;

    t17 = (x69*(x70!=(x71>x72)));

    if (t17 != -45) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x73 = -12;
	static uint16_t x74 = 35U;
	int64_t x75 = -1LL;
	volatile int32_t t18 = -3377;

    t18 = (x73*(x74!=(x75>x76)));

    if (t18 != -12) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MIN;
	int8_t x78 = -1;
	static int32_t x80 = INT32_MAX;
	int64_t t19 = INT64_MIN;

    t19 = (x77*(x78!=(x79>x80)));

    if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x81 = -9;
	volatile int16_t x82 = -1;
	uint32_t x84 = 71134048U;
	volatile int32_t t20 = -779676679;

    t20 = (x81*(x82!=(x83>x84)));

    if (t20 != -9) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = INT8_MAX;
	int8_t x87 = INT8_MAX;
	int16_t x88 = INT16_MAX;
	volatile int32_t t21 = -7096509;

    t21 = (x85*(x86!=(x87>x88)));

    if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = 0;
	static volatile int8_t x90 = INT8_MAX;
	volatile int16_t x91 = INT16_MIN;

    t22 = (x89*(x90!=(x91>x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = -1;
	int16_t x94 = 61;
	int16_t x95 = INT16_MAX;
	volatile int8_t x96 = -1;

    t23 = (x93*(x94!=(x95>x96)));

    if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x97 = INT16_MAX;
	uint16_t x98 = 0U;
	static int16_t x99 = -4;
	volatile uint8_t x100 = UINT8_MAX;
	volatile int32_t t24 = 135665;

    t24 = (x97*(x98!=(x99>x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = -1;
	volatile int16_t x103 = -1;
	static volatile int32_t x104 = INT32_MIN;
	volatile int32_t t25 = 8387257;

    t25 = (x101*(x102!=(x103>x104)));

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = INT32_MIN;
	volatile int8_t x106 = INT8_MAX;
	int16_t x108 = 3;
	volatile int32_t t26 = INT32_MIN;

    t26 = (x105*(x106!=(x107>x108)));

    if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint16_t x110 = 0U;
	int16_t x111 = INT16_MIN;
	int16_t x112 = -1;

    t27 = (x109*(x110!=(x111>x112)));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x113 = -1LL;
	int16_t x114 = -7;
	uint8_t x116 = 6U;
	int64_t t28 = 343066485903003LL;

    t28 = (x113*(x114!=(x115>x116)));

    if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = INT64_MIN;
	int64_t x118 = -31358371LL;
	uint8_t x120 = UINT8_MAX;
	volatile int64_t t29 = INT64_MIN;

    t29 = (x117*(x118!=(x119>x120)));

    if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MIN;
	volatile int8_t x122 = -7;
	volatile int8_t x124 = INT8_MIN;
	static volatile int32_t t30 = INT32_MIN;

    t30 = (x121*(x122!=(x123>x124)));

    if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = INT64_MIN;
	int16_t x126 = -413;
	int8_t x127 = INT8_MAX;
	int64_t t31 = INT64_MIN;

    t31 = (x125*(x126!=(x127>x128)));

    if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x129 = INT32_MAX;
	uint16_t x131 = 1197U;
	int32_t t32 = INT32_MAX;

    t32 = (x129*(x130!=(x131>x132)));

    if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = 652U;
	int64_t x134 = INT64_MIN;
	int64_t x135 = 15779361LL;
	int16_t x136 = INT16_MIN;
	volatile uint32_t t33 = 136U;

    t33 = (x133*(x134!=(x135>x136)));

    if (t33 != 652U) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int64_t x137 = 123734LL;
	volatile int64_t x140 = INT64_MAX;

    t34 = (x137*(x138!=(x139>x140)));

    if (t34 != 123734LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = 366LL;
	uint16_t x142 = 333U;
	int64_t x143 = -1800196507285657586LL;
	int64_t x144 = INT64_MAX;

    t35 = (x141*(x142!=(x143>x144)));

    if (t35 != 366LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x148 = INT64_MIN;
	int32_t t36 = -207;

    t36 = (x145*(x146!=(x147>x148)));

    if (t36 != 55) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x150 = UINT8_MAX;
	static volatile uint32_t x151 = UINT32_MAX;
	uint16_t x152 = UINT16_MAX;
	int32_t t37 = -42726;

    t37 = (x149*(x150!=(x151>x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x153 = INT16_MAX;
	static volatile int32_t x154 = INT32_MIN;
	volatile int64_t x156 = INT64_MAX;
	static int32_t t38 = 13122;

    t38 = (x153*(x154!=(x155>x156)));

    if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x159 = 22;
	int32_t x160 = -108;
	volatile uint32_t t39 = 78U;

    t39 = (x157*(x158!=(x159>x160)));

    if (t39 != 6U) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x161 = UINT8_MAX;
	volatile int8_t x162 = INT8_MIN;
	int16_t x163 = INT16_MAX;

    t40 = (x161*(x162!=(x163>x164)));

    if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x166 = 8961U;
	int32_t x168 = -1;

    t41 = (x165*(x166!=(x167>x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = 0;
	volatile int32_t t42 = 9;

    t42 = (x169*(x170!=(x171>x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x174 = 1407U;
	uint8_t x175 = 24U;

    t43 = (x173*(x174!=(x175>x176)));

    if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = 0U;
	int32_t x178 = -1;
	int64_t x179 = -237975LL;
	volatile uint32_t x180 = UINT32_MAX;
	static int32_t t44 = 428027;

    t44 = (x177*(x178!=(x179>x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x181 = 23;
	int8_t x183 = INT8_MIN;
	int32_t t45 = -2360463;

    t45 = (x181*(x182!=(x183>x184)));

    if (t45 != 23) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x186 = UINT32_MAX;
	volatile int16_t x187 = INT16_MAX;
	uint16_t x188 = UINT16_MAX;
	volatile int32_t t46 = 27;

    t46 = (x185*(x186!=(x187>x188)));

    if (t46 != -1295) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x189 = -1;
	int32_t x190 = 238917727;
	static volatile int32_t x191 = -1;
	static int16_t x192 = INT16_MIN;

    t47 = (x189*(x190!=(x191>x192)));

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = 240;
	volatile int8_t x194 = INT8_MAX;
	int16_t x195 = INT16_MIN;
	uint32_t x196 = 17593977U;
	int32_t t48 = 0;

    t48 = (x193*(x194!=(x195>x196)));

    if (t48 != 240) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = INT32_MIN;
	int64_t x198 = -1LL;
	static volatile int8_t x199 = INT8_MAX;
	static int16_t x200 = INT16_MIN;

    t49 = (x197*(x198!=(x199>x200)));

    if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x201 = 0;
	static uint8_t x202 = UINT8_MAX;
	volatile int16_t x203 = INT16_MAX;
	volatile uint8_t x204 = 7U;
	volatile int32_t t50 = -6300;

    t50 = (x201*(x202!=(x203>x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x205 = INT8_MAX;
	int32_t x206 = INT32_MAX;
	int64_t x208 = INT64_MIN;
	volatile int32_t t51 = 65943;

    t51 = (x205*(x206!=(x207>x208)));

    if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x209 = INT32_MIN;
	uint16_t x210 = UINT16_MAX;
	uint64_t x211 = 11992290078LLU;
	uint64_t x212 = 381625420153LLU;

    t52 = (x209*(x210!=(x211>x212)));

    if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = -147769;
	uint64_t x214 = UINT64_MAX;
	uint64_t x215 = 1322747LLU;
	int32_t t53 = -6833;

    t53 = (x213*(x214!=(x215>x216)));

    if (t53 != -147769) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = INT64_MIN;
	uint32_t x218 = UINT32_MAX;

    t54 = (x217*(x218!=(x219>x220)));

    if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x222 = 0;
	static volatile int8_t x223 = INT8_MIN;
	static int32_t t55 = -341675416;

    t55 = (x221*(x222!=(x223>x224)));

    if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = INT16_MIN;
	uint16_t x226 = 6774U;
	static int8_t x228 = INT8_MIN;
	int32_t t56 = 66122043;

    t56 = (x225*(x226!=(x227>x228)));

    if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint16_t x230 = UINT16_MAX;
	int32_t x231 = INT32_MAX;

    t57 = (x229*(x230!=(x231>x232)));

    if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x233 = 2U;
	int8_t x234 = INT8_MAX;
	static volatile int8_t x235 = INT8_MIN;
	static uint8_t x236 = UINT8_MAX;
	static int32_t t58 = -26532495;

    t58 = (x233*(x234!=(x235>x236)));

    if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = 1U;
	int64_t x238 = INT64_MAX;

    t59 = (x237*(x238!=(x239>x240)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = INT8_MIN;
	volatile uint16_t x242 = UINT16_MAX;
	uint8_t x243 = UINT8_MAX;
	volatile uint16_t x244 = 6U;
	volatile int32_t t60 = 60359429;

    t60 = (x241*(x242!=(x243>x244)));

    if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x245 = INT32_MIN;
	int8_t x247 = INT8_MIN;
	int32_t t61 = INT32_MIN;

    t61 = (x245*(x246!=(x247>x248)));

    if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x250 = UINT16_MAX;
	volatile int64_t x251 = -99LL;
	uint16_t x252 = 12209U;
	volatile uint64_t t62 = 2139275394689LLU;

    t62 = (x249*(x250!=(x251>x252)));

    if (t62 != 14423974061LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = -1;
	uint16_t x254 = 3U;
	uint8_t x255 = 28U;
	volatile uint32_t x256 = 1677005U;

    t63 = (x253*(x254!=(x255>x256)));

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x258 = -1;
	int8_t x260 = -24;
	int32_t t64 = 4048375;

    t64 = (x257*(x258!=(x259>x260)));

    if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x262 = -1;
	static int16_t x263 = 10366;
	int64_t x264 = INT64_MIN;
	volatile uint64_t t65 = UINT64_MAX;

    t65 = (x261*(x262!=(x263>x264)));

    if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile uint32_t x265 = UINT32_MAX;
	int64_t x266 = -1LL;
	uint8_t x267 = 115U;
	volatile uint64_t x268 = UINT64_MAX;
	volatile uint32_t t66 = UINT32_MAX;

    t66 = (x265*(x266!=(x267>x268)));

    if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x269 = UINT64_MAX;
	int16_t x270 = INT16_MIN;
	int32_t x271 = -1;

    t67 = (x269*(x270!=(x271>x272)));

    if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x274 = INT64_MAX;
	int16_t x276 = INT16_MAX;
	volatile int32_t t68 = 6684271;

    t68 = (x273*(x274!=(x275>x276)));

    if (t68 != -204344) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = INT64_MAX;
	volatile uint32_t x278 = 84183254U;
	uint16_t x280 = 12U;
	volatile int64_t t69 = INT64_MAX;

    t69 = (x277*(x278!=(x279>x280)));

    if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x282 = UINT64_MAX;
	static uint8_t x284 = 2U;
	int64_t t70 = 1LL;

    t70 = (x281*(x282!=(x283>x284)));

    if (t70 != -144110204344724567LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x286 = UINT64_MAX;
	int16_t x288 = INT16_MAX;
	int64_t t71 = 96637825390376LL;

    t71 = (x285*(x286!=(x287>x288)));

    if (t71 != -161261LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x289 = 0U;
	uint8_t x290 = 37U;
	volatile int64_t x291 = -1LL;
	static int8_t x292 = -8;
	volatile int32_t t72 = 177;

    t72 = (x289*(x290!=(x291>x292)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x293 = 0U;
	int64_t x294 = -1LL;
	uint64_t x295 = 3333LLU;
	int64_t x296 = INT64_MIN;
	volatile int32_t t73 = 464642190;

    t73 = (x293*(x294!=(x295>x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = -231847334510LL;
	volatile int8_t x298 = INT8_MIN;
	int32_t x299 = INT32_MIN;
	volatile int32_t x300 = 1;
	static int64_t t74 = -53994134LL;

    t74 = (x297*(x298!=(x299>x300)));

    if (t74 != -231847334510LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint8_t x301 = 0U;
	static volatile uint32_t x303 = 19575641U;
	volatile int32_t t75 = 77;

    t75 = (x301*(x302!=(x303>x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x306 = -8896;
	uint16_t x308 = 187U;
	volatile int32_t t76 = 30272548;

    t76 = (x305*(x306!=(x307>x308)));

    if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x309 = INT16_MIN;
	int32_t x310 = INT32_MAX;
	int8_t x311 = 24;
	uint32_t x312 = 1040058U;
	int32_t t77 = 2349;

    t77 = (x309*(x310!=(x311>x312)));

    if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = -38;
	uint64_t x314 = UINT64_MAX;
	static uint16_t x315 = 159U;
	int8_t x316 = -1;
	int32_t t78 = 12442;

    t78 = (x313*(x314!=(x315>x316)));

    if (t78 != -38) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x317 = 3;
	uint16_t x318 = UINT16_MAX;
	volatile int16_t x319 = 1;
	volatile uint8_t x320 = 3U;
	volatile int32_t t79 = -193073764;

    t79 = (x317*(x318!=(x319>x320)));

    if (t79 != 3) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x322 = 28014U;
	int32_t x323 = INT32_MIN;
	int32_t t80 = 112220;

    t80 = (x321*(x322!=(x323>x324)));

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x325 = 0U;
	int16_t x326 = INT16_MIN;
	volatile int64_t x327 = INT64_MIN;
	static int32_t x328 = -8252294;
	volatile int32_t t81 = 18;

    t81 = (x325*(x326!=(x327>x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = -9540;
	static int64_t x330 = INT64_MAX;
	int16_t x331 = INT16_MIN;

    t82 = (x329*(x330!=(x331>x332)));

    if (t82 != -9540) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x335 = -3697788;
	int16_t x336 = -1;
	volatile int32_t t83 = 128404;

    t83 = (x333*(x334!=(x335>x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x337 = UINT16_MAX;
	int8_t x339 = INT8_MIN;
	int32_t t84 = 77341;

    t84 = (x337*(x338!=(x339>x340)));

    if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x341 = 7LLU;
	int16_t x342 = -118;
	uint8_t x344 = 1U;
	uint64_t t85 = 459LLU;

    t85 = (x341*(x342!=(x343>x344)));

    if (t85 != 7LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = 6;
	int16_t x346 = 4326;
	static int8_t x347 = INT8_MIN;
	static int8_t x348 = INT8_MIN;
	static int32_t t86 = 133;

    t86 = (x345*(x346!=(x347>x348)));

    if (t86 != 6) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = INT16_MIN;
	uint32_t x350 = 1051430743U;
	int32_t t87 = -245;

    t87 = (x349*(x350!=(x351>x352)));

    if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MAX;
	uint64_t x355 = 58LLU;
	volatile int32_t t88 = -76549605;

    t88 = (x353*(x354!=(x355>x356)));

    if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x359 = INT16_MIN;
	int32_t x360 = 1167;
	volatile int64_t t89 = -165707081685LL;

    t89 = (x357*(x358!=(x359>x360)));

    if (t89 != -4LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x361 = 3U;
	int8_t x362 = -1;
	int64_t x363 = -190692LL;
	volatile uint32_t t90 = 6651U;

    t90 = (x361*(x362!=(x363>x364)));

    if (t90 != 3U) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x367 = INT32_MIN;
	uint32_t t91 = 49U;

    t91 = (x365*(x366!=(x367>x368)));

    if (t91 != 2U) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = INT32_MIN;
	int32_t x370 = INT32_MIN;
	static uint64_t x371 = UINT64_MAX;
	volatile int32_t t92 = INT32_MIN;

    t92 = (x369*(x370!=(x371>x372)));

    if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = INT64_MIN;
	int64_t x374 = INT64_MIN;
	volatile int32_t x375 = -411164488;
	static volatile int64_t t93 = INT64_MIN;

    t93 = (x373*(x374!=(x375>x376)));

    if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x378 = INT16_MIN;
	static volatile uint64_t x379 = 25738LLU;
	static int64_t x380 = -1LL;
	int32_t t94 = -13936558;

    t94 = (x377*(x378!=(x379>x380)));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint64_t x382 = 3271LLU;
	int8_t x383 = -1;
	int16_t x384 = INT16_MIN;
	static int32_t t95 = -23;

    t95 = (x381*(x382!=(x383>x384)));

    if (t95 != 117) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x387 = -1;
	volatile int32_t t96 = -1;

    t96 = (x385*(x386!=(x387>x388)));

    if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x390 = 1;
	int8_t x391 = INT8_MIN;
	volatile int32_t x392 = -164;

    t97 = (x389*(x390!=(x391>x392)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x393 = INT64_MIN;
	int32_t x395 = INT32_MIN;
	uint16_t x396 = 3572U;
	int64_t t98 = INT64_MIN;

    t98 = (x393*(x394!=(x395>x396)));

    if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x397 = 9U;
	uint64_t x398 = UINT64_MAX;
	int8_t x399 = -48;
	volatile int32_t t99 = 933;

    t99 = (x397*(x398!=(x399>x400)));

    if (t99 != 9) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x401 = UINT32_MAX;
	int64_t x402 = -6204LL;
	int8_t x403 = INT8_MIN;
	int32_t x404 = INT32_MAX;
	volatile uint32_t t100 = UINT32_MAX;

    t100 = (x401*(x402!=(x403>x404)));

    if (t100 != UINT32_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = INT64_MIN;
	uint16_t x407 = 3U;
	int8_t x408 = 3;
	int64_t t101 = INT64_MIN;

    t101 = (x405*(x406!=(x407>x408)));

    if (t101 != INT64_MIN) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = 1499407395969851009LL;
	uint16_t x410 = 122U;
	int8_t x411 = INT8_MAX;
	volatile int8_t x412 = 1;

    t102 = (x409*(x410!=(x411>x412)));

    if (t102 != 1499407395969851009LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x413 = 4U;
	volatile int64_t x415 = INT64_MAX;
	volatile int64_t x416 = INT64_MIN;
	int32_t t103 = -199068;

    t103 = (x413*(x414!=(x415>x416)));

    if (t103 != 4) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x418 = INT32_MIN;
	uint64_t x420 = 13646LLU;
	volatile int32_t t104 = -1026;

    t104 = (x417*(x418!=(x419>x420)));

    if (t104 != -32768) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x421 = 109283136U;
	uint64_t x424 = UINT64_MAX;

    t105 = (x421*(x422!=(x423>x424)));

    if (t105 != 109283136U) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x425 = -2;
	volatile int8_t x427 = INT8_MAX;
	static int64_t x428 = INT64_MAX;
	volatile int32_t t106 = -3;

    t106 = (x425*(x426!=(x427>x428)));

    if (t106 != -2) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x431 = -3;
	int32_t x432 = -1;
	volatile uint32_t t107 = 997U;

    t107 = (x429*(x430!=(x431>x432)));

    if (t107 != 1806083726U) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = -1;
	static int8_t x434 = -1;
	int32_t x435 = INT32_MAX;
	int32_t x436 = INT32_MIN;
	volatile int32_t t108 = 1289;

    t108 = (x433*(x434!=(x435>x436)));

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = -1;
	uint32_t x439 = 22511U;

    t109 = (x437*(x438!=(x439>x440)));

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = INT8_MAX;
	volatile uint8_t x442 = 14U;
	static int8_t x443 = -1;
	int32_t t110 = -1359;

    t110 = (x441*(x442!=(x443>x444)));

    if (t110 != 127) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x446 = 2LLU;
	int64_t x447 = INT64_MIN;
	uint64_t x448 = 711663207250554LLU;
	int64_t t111 = 15923977664211312LL;

    t111 = (x445*(x446!=(x447>x448)));

    if (t111 != 19631539026LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x449 = 3U;
	uint8_t x450 = 2U;
	int8_t x451 = INT8_MIN;
	int8_t x452 = -1;
	uint32_t t112 = 69U;

    t112 = (x449*(x450!=(x451>x452)));

    if (t112 != 3U) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x454 = -8;
	volatile int32_t x455 = -1;
	int64_t x456 = INT64_MIN;
	int32_t t113 = 1;

    t113 = (x453*(x454!=(x455>x456)));

    if (t113 != -19) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = UINT64_MAX;
	int8_t x458 = 0;
	uint8_t x459 = 22U;
	static volatile uint64_t t114 = 3546483402LLU;

    t114 = (x457*(x458!=(x459>x460)));

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x461 = 87037283U;
	volatile int32_t x462 = INT32_MIN;
	static int32_t x463 = -798515;
	uint16_t x464 = UINT16_MAX;
	uint32_t t115 = 3U;

    t115 = (x461*(x462!=(x463>x464)));

    if (t115 != 87037283U) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = INT16_MIN;
	static int32_t x466 = INT32_MAX;
	volatile int64_t x467 = INT64_MAX;
	uint16_t x468 = 349U;
	int32_t t116 = 820;

    t116 = (x465*(x466!=(x467>x468)));

    if (t116 != -32768) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x469 = UINT32_MAX;
	int64_t x470 = INT64_MIN;
	uint32_t x472 = UINT32_MAX;
	volatile uint32_t t117 = UINT32_MAX;

    t117 = (x469*(x470!=(x471>x472)));

    if (t117 != UINT32_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x474 = -1;
	volatile int32_t x475 = -1;
	int32_t t118 = 28857750;

    t118 = (x473*(x474!=(x475>x476)));

    if (t118 != -32768) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = 22;
	int32_t x478 = 3561272;
	uint64_t x479 = 10LLU;
	static uint64_t x480 = 99LLU;
	int32_t t119 = 6109;

    t119 = (x477*(x478!=(x479>x480)));

    if (t119 != 22) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = INT16_MIN;
	volatile int64_t x482 = INT64_MIN;
	int32_t x483 = INT32_MIN;
	static volatile int16_t x484 = INT16_MIN;
	int32_t t120 = -407854254;

    t120 = (x481*(x482!=(x483>x484)));

    if (t120 != -32768) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x485 = 27199028423LLU;
	int64_t x488 = INT64_MAX;
	uint64_t t121 = 122LLU;

    t121 = (x485*(x486!=(x487>x488)));

    if (t121 != 27199028423LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = INT32_MIN;
	int16_t x490 = INT16_MAX;
	int64_t x491 = INT64_MIN;
	static volatile uint16_t x492 = 51U;
	int32_t t122 = INT32_MIN;

    t122 = (x489*(x490!=(x491>x492)));

    if (t122 != INT32_MIN) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x493 = INT32_MAX;
	int64_t x494 = INT64_MIN;
	uint32_t x495 = UINT32_MAX;
	int64_t x496 = INT64_MIN;
	volatile int32_t t123 = INT32_MAX;

    t123 = (x493*(x494!=(x495>x496)));

    if (t123 != INT32_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x499 = UINT8_MAX;
	int8_t x500 = INT8_MIN;

    t124 = (x497*(x498!=(x499>x500)));

    if (t124 != -451253) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x502 = -31998LL;
	static uint8_t x503 = UINT8_MAX;
	int32_t x504 = 79096;
	volatile int32_t t125 = 33349780;

    t125 = (x501*(x502!=(x503>x504)));

    if (t125 != 7909) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x505 = 67U;
	int64_t x506 = INT64_MAX;
	uint64_t x508 = 13LLU;

    t126 = (x505*(x506!=(x507>x508)));

    if (t126 != 67) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = INT16_MAX;
	int32_t x510 = INT32_MIN;
	static uint64_t x511 = 345LLU;
	int8_t x512 = INT8_MIN;
	volatile int32_t t127 = 1;

    t127 = (x509*(x510!=(x511>x512)));

    if (t127 != 32767) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = INT16_MIN;
	int16_t x514 = -1;
	int32_t x515 = INT32_MAX;
	uint8_t x516 = 6U;
	static int32_t t128 = -2338972;

    t128 = (x513*(x514!=(x515>x516)));

    if (t128 != -32768) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x517 = UINT32_MAX;
	int64_t x518 = INT64_MIN;
	int8_t x519 = INT8_MIN;
	int32_t x520 = INT32_MIN;

    t129 = (x517*(x518!=(x519>x520)));

    if (t129 != UINT32_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = -85805170LL;
	static volatile uint8_t x522 = 32U;
	uint32_t x523 = UINT32_MAX;
	static volatile int64_t t130 = -20890617052577LL;

    t130 = (x521*(x522!=(x523>x524)));

    if (t130 != -85805170LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x525 = 5U;
	static int64_t x526 = 18366098LL;
	uint64_t x527 = UINT64_MAX;
	int16_t x528 = INT16_MIN;

    t131 = (x525*(x526!=(x527>x528)));

    if (t131 != 5) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = INT8_MAX;
	uint32_t x532 = 35111705U;
	volatile int32_t t132 = -11774;

    t132 = (x529*(x530!=(x531>x532)));

    if (t132 != 127) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x534 = INT8_MAX;
	volatile int8_t x535 = INT8_MIN;
	int16_t x536 = INT16_MIN;
	int32_t t133 = INT32_MIN;

    t133 = (x533*(x534!=(x535>x536)));

    if (t133 != INT32_MIN) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x537 = INT8_MIN;
	int8_t x540 = -1;
	static volatile int32_t t134 = 63;

    t134 = (x537*(x538!=(x539>x540)));

    if (t134 != -128) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = 6;
	static uint64_t x542 = UINT64_MAX;

    t135 = (x541*(x542!=(x543>x544)));

    if (t135 != 6) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = INT64_MAX;
	int16_t x546 = INT16_MAX;
	uint8_t x548 = 14U;
	int64_t t136 = INT64_MAX;

    t136 = (x545*(x546!=(x547>x548)));

    if (t136 != INT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x549 = UINT16_MAX;
	int32_t x550 = 1011;
	int64_t x551 = INT64_MIN;
	int32_t x552 = 6624;
	int32_t t137 = -653;

    t137 = (x549*(x550!=(x551>x552)));

    if (t137 != 65535) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x554 = -1;
	uint8_t x555 = 48U;
	uint8_t x556 = UINT8_MAX;
	int32_t t138 = 3889932;

    t138 = (x553*(x554!=(x555>x556)));

    if (t138 != 65535) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = INT32_MIN;
	int64_t x558 = INT64_MAX;
	uint64_t x559 = 62909831LLU;
	int32_t x560 = -1;
	volatile int32_t t139 = INT32_MIN;

    t139 = (x557*(x558!=(x559>x560)));

    if (t139 != INT32_MIN) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = INT8_MAX;
	int32_t x562 = INT32_MIN;
	uint32_t x563 = 96U;
	int8_t x564 = -1;
	volatile int32_t t140 = -503;

    t140 = (x561*(x562!=(x563>x564)));

    if (t140 != 127) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x566 = INT8_MIN;
	static int8_t x567 = -1;

    t141 = (x565*(x566!=(x567>x568)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = INT32_MAX;
	static uint32_t x570 = 97915U;
	static volatile int32_t x571 = INT32_MIN;
	int32_t x572 = -1;
	volatile int32_t t142 = INT32_MAX;

    t142 = (x569*(x570!=(x571>x572)));

    if (t142 != INT32_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x574 = INT64_MIN;
	int64_t x575 = -1LL;
	uint32_t x576 = 1U;
	volatile uint32_t t143 = 12U;

    t143 = (x573*(x574!=(x575>x576)));

    if (t143 != 11555563U) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = INT16_MAX;
	int64_t x578 = INT64_MAX;
	int8_t x579 = -1;
	volatile int32_t t144 = -167403321;

    t144 = (x577*(x578!=(x579>x580)));

    if (t144 != 32767) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x581 = 9U;
	int8_t x582 = INT8_MIN;
	int16_t x583 = -52;
	int64_t x584 = INT64_MIN;
	int32_t t145 = -568;

    t145 = (x581*(x582!=(x583>x584)));

    if (t145 != 9) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x585 = 0U;
	int16_t x586 = 21;
	volatile int32_t x588 = INT32_MIN;
	int32_t t146 = 12;

    t146 = (x585*(x586!=(x587>x588)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x589 = 5U;
	int64_t x590 = -4369233335784572154LL;
	volatile uint16_t x591 = UINT16_MAX;
	int8_t x592 = INT8_MIN;

    t147 = (x589*(x590!=(x591>x592)));

    if (t147 != 5) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x594 = -1LL;
	uint8_t x595 = 26U;
	static volatile int64_t x596 = 1314040949102662LL;
	int64_t t148 = INT64_MIN;

    t148 = (x593*(x594!=(x595>x596)));

    if (t148 != INT64_MIN) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = INT32_MIN;
	int64_t x598 = 0LL;
	static int32_t x599 = -1;

    t149 = (x597*(x598!=(x599>x600)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x601 = 3U;
	int16_t x602 = -1;
	volatile int32_t x603 = 586148928;
	int32_t t150 = -5;

    t150 = (x601*(x602!=(x603>x604)));

    if (t150 != 3) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x605 = UINT32_MAX;
	static int16_t x606 = 4773;
	static uint8_t x607 = 7U;
	uint32_t x608 = 19U;
	uint32_t t151 = UINT32_MAX;

    t151 = (x605*(x606!=(x607>x608)));

    if (t151 != UINT32_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x609 = 1U;
	int8_t x611 = 0;
	static uint8_t x612 = 1U;
	static volatile int32_t t152 = 329989866;

    t152 = (x609*(x610!=(x611>x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x614 = UINT64_MAX;
	volatile uint64_t x615 = UINT64_MAX;
	int32_t x616 = INT32_MIN;

    t153 = (x613*(x614!=(x615>x616)));

    if (t153 != 3) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x617 = 17610U;
	uint16_t x618 = 118U;
	uint64_t x619 = UINT64_MAX;
	uint32_t x620 = UINT32_MAX;
	int32_t t154 = 2;

    t154 = (x617*(x618!=(x619>x620)));

    if (t154 != 17610) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = INT16_MAX;
	static uint16_t x622 = 1973U;
	int32_t x623 = INT32_MAX;
	int32_t x624 = -27477;
	static int32_t t155 = -15051186;

    t155 = (x621*(x622!=(x623>x624)));

    if (t155 != 32767) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x625 = 6959277580LLU;
	uint32_t x626 = 0U;
	int8_t x627 = -57;
	volatile uint64_t t156 = 57016039308239282LLU;

    t156 = (x625*(x626!=(x627>x628)));

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = INT32_MAX;
	static int32_t x630 = -1;
	uint16_t x631 = 1256U;
	int32_t x632 = INT32_MIN;
	int32_t t157 = INT32_MAX;

    t157 = (x629*(x630!=(x631>x632)));

    if (t157 != INT32_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x633 = INT8_MAX;
	volatile int8_t x634 = 13;
	int32_t x636 = INT32_MIN;
	volatile int32_t t158 = 399781;

    t158 = (x633*(x634!=(x635>x636)));

    if (t158 != 127) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x639 = 8638222;
	int64_t x640 = INT64_MIN;
	static uint32_t t159 = UINT32_MAX;

    t159 = (x637*(x638!=(x639>x640)));

    if (t159 != UINT32_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = INT8_MAX;
	int16_t x642 = 1492;
	int64_t x643 = -1LL;
	int64_t x644 = -1LL;
	int32_t t160 = 68422;

    t160 = (x641*(x642!=(x643>x644)));

    if (t160 != 127) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x645 = 1U;
	uint32_t x646 = UINT32_MAX;
	static uint64_t x647 = 32820968668LLU;
	volatile uint16_t x648 = UINT16_MAX;
	int32_t t161 = 17834119;

    t161 = (x645*(x646!=(x647>x648)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x649 = UINT32_MAX;
	volatile uint64_t x651 = 8528023566LLU;

    t162 = (x649*(x650!=(x651>x652)));

    if (t162 != UINT32_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x653 = 2;
	static uint16_t x654 = UINT16_MAX;
	static int32_t x655 = INT32_MIN;
	int8_t x656 = -1;
	volatile int32_t t163 = 5868044;

    t163 = (x653*(x654!=(x655>x656)));

    if (t163 != 2) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int32_t x657 = -1;
	static int32_t x658 = -1;
	int16_t x659 = INT16_MAX;
	static int8_t x660 = -18;
	int32_t t164 = -103951;

    t164 = (x657*(x658!=(x659>x660)));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x661 = 1579U;
	int16_t x662 = -4;
	uint8_t x663 = 51U;
	uint64_t x664 = UINT64_MAX;

    t165 = (x661*(x662!=(x663>x664)));

    if (t165 != 1579) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x665 = INT64_MIN;
	uint8_t x666 = 16U;
	uint64_t x668 = 50LLU;
	int64_t t166 = INT64_MIN;

    t166 = (x665*(x666!=(x667>x668)));

    if (t166 != INT64_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x669 = 4;
	int8_t x670 = -8;
	static int16_t x671 = INT16_MIN;
	uint8_t x672 = 4U;
	int32_t t167 = -24132;

    t167 = (x669*(x670!=(x671>x672)));

    if (t167 != 4) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x673 = 15U;
	int16_t x674 = -1;
	static int32_t x675 = 480;
	static int32_t x676 = -1;
	int32_t t168 = -1;

    t168 = (x673*(x674!=(x675>x676)));

    if (t168 != 15) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint8_t x677 = 54U;
	int16_t x678 = INT16_MAX;
	volatile int8_t x679 = INT8_MIN;
	int8_t x680 = 1;
	static volatile int32_t t169 = 1;

    t169 = (x677*(x678!=(x679>x680)));

    if (t169 != 54) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = INT64_MIN;
	int8_t x682 = 16;
	uint32_t x683 = 33979255U;
	uint32_t x684 = 465238135U;
	static int64_t t170 = INT64_MIN;

    t170 = (x681*(x682!=(x683>x684)));

    if (t170 != INT64_MIN) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x686 = INT64_MAX;
	uint8_t x687 = 1U;
	uint8_t x688 = 6U;
	volatile int32_t t171 = -14209;

    t171 = (x685*(x686!=(x687>x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = INT16_MAX;
	int16_t x690 = -690;
	int32_t x692 = -1;
	int32_t t172 = -10010;

    t172 = (x689*(x690!=(x691>x692)));

    if (t172 != 32767) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = INT64_MIN;
	int64_t x695 = -55LL;
	int64_t x696 = -1LL;
	volatile int64_t t173 = INT64_MIN;

    t173 = (x693*(x694!=(x695>x696)));

    if (t173 != INT64_MIN) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile uint32_t x697 = 122U;
	static uint64_t x698 = 1959217LLU;
	int64_t x700 = INT64_MAX;
	volatile uint32_t t174 = 436U;

    t174 = (x697*(x698!=(x699>x700)));

    if (t174 != 122U) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = INT8_MAX;
	uint32_t x702 = UINT32_MAX;
	uint8_t x703 = UINT8_MAX;
	int16_t x704 = 359;

    t175 = (x701*(x702!=(x703>x704)));

    if (t175 != 127) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x705 = 3U;
	uint64_t x708 = UINT64_MAX;
	static volatile int32_t t176 = -359;

    t176 = (x705*(x706!=(x707>x708)));

    if (t176 != 3) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x709 = UINT64_MAX;
	uint32_t x710 = UINT32_MAX;
	int64_t x711 = -5262238000LL;
	uint64_t t177 = UINT64_MAX;

    t177 = (x709*(x710!=(x711>x712)));

    if (t177 != UINT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x713 = UINT64_MAX;
	int64_t x714 = -1LL;
	uint32_t x715 = 2119092173U;
	uint16_t x716 = 4U;
	static volatile uint64_t t178 = UINT64_MAX;

    t178 = (x713*(x714!=(x715>x716)));

    if (t178 != UINT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x717 = INT32_MAX;
	volatile uint16_t x719 = 0U;
	static int64_t x720 = -1LL;
	static volatile int32_t t179 = INT32_MAX;

    t179 = (x717*(x718!=(x719>x720)));

    if (t179 != INT32_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x721 = INT64_MAX;
	uint64_t x722 = 7690LLU;
	int16_t x723 = INT16_MAX;
	int32_t x724 = INT32_MAX;
	static int64_t t180 = INT64_MAX;

    t180 = (x721*(x722!=(x723>x724)));

    if (t180 != INT64_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = 634;
	volatile int8_t x726 = -2;
	int32_t x728 = INT32_MIN;

    t181 = (x725*(x726!=(x727>x728)));

    if (t181 != 634) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = 3LL;
	uint8_t x730 = 18U;
	uint16_t x731 = 42U;
	int64_t x732 = -7949994LL;
	static volatile int64_t t182 = 56994900LL;

    t182 = (x729*(x730!=(x731>x732)));

    if (t182 != 3LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = 3;
	static volatile uint32_t x734 = 0U;
	static volatile int16_t x735 = -690;
	int8_t x736 = INT8_MAX;
	int32_t t183 = 74;

    t183 = (x733*(x734!=(x735>x736)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x738 = INT16_MAX;
	int32_t t184 = -494498827;

    t184 = (x737*(x738!=(x739>x740)));

    if (t184 != -6) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x741 = INT8_MAX;
	int16_t x742 = INT16_MAX;
	int32_t x743 = INT32_MAX;
	volatile uint32_t x744 = UINT32_MAX;
	volatile int32_t t185 = 165794588;

    t185 = (x741*(x742!=(x743>x744)));

    if (t185 != 127) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x745 = UINT16_MAX;
	uint16_t x747 = 48U;
	static int16_t x748 = 0;
	int32_t t186 = 22201410;

    t186 = (x745*(x746!=(x747>x748)));

    if (t186 != 65535) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint32_t x751 = 374882U;

    t187 = (x749*(x750!=(x751>x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x754 = INT32_MIN;
	static int8_t x755 = INT8_MIN;
	static int16_t x756 = INT16_MIN;
	volatile int64_t t188 = INT64_MAX;

    t188 = (x753*(x754!=(x755>x756)));

    if (t188 != INT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = -1;
	volatile int8_t x758 = -7;
	int8_t x759 = INT8_MIN;
	static int16_t x760 = INT16_MAX;

    t189 = (x757*(x758!=(x759>x760)));

    if (t189 != -1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x761 = UINT64_MAX;
	uint32_t x762 = 4U;
	int16_t x763 = INT16_MIN;
	static uint16_t x764 = 0U;
	volatile uint64_t t190 = UINT64_MAX;

    t190 = (x761*(x762!=(x763>x764)));

    if (t190 != UINT64_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x766 = -4432;
	volatile int64_t x767 = 7LL;
	uint64_t t191 = 6313LLU;

    t191 = (x765*(x766!=(x767>x768)));

    if (t191 != 254LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x769 = INT8_MIN;
	uint16_t x770 = 14U;
	int16_t x771 = -357;
	static int16_t x772 = -1;
	volatile int32_t t192 = 6499082;

    t192 = (x769*(x770!=(x771>x772)));

    if (t192 != -128) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x776 = INT32_MIN;
	volatile int64_t t193 = -563505605534143497LL;

    t193 = (x773*(x774!=(x775>x776)));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x777 = 993637U;
	int8_t x778 = INT8_MIN;
	volatile uint32_t x779 = 1U;
	uint16_t x780 = 310U;
	uint32_t t194 = 1072762U;

    t194 = (x777*(x778!=(x779>x780)));

    if (t194 != 993637U) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x781 = INT32_MIN;
	static int8_t x782 = INT8_MIN;
	int8_t x783 = 0;
	static int64_t x784 = -123300421346LL;
	int32_t t195 = INT32_MIN;

    t195 = (x781*(x782!=(x783>x784)));

    if (t195 != INT32_MIN) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x785 = 60205794U;
	int64_t x787 = -331LL;
	volatile uint32_t t196 = 92U;

    t196 = (x785*(x786!=(x787>x788)));

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = INT64_MIN;
	volatile int16_t x790 = INT16_MIN;
	static volatile uint64_t x791 = 30248923206LLU;
	int64_t x792 = -1LL;
	static volatile int64_t t197 = INT64_MIN;

    t197 = (x789*(x790!=(x791>x792)));

    if (t197 != INT64_MIN) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x793 = 229275655LLU;
	int16_t x794 = INT16_MAX;
	static uint32_t x795 = 1007325U;
	volatile int8_t x796 = INT8_MIN;

    t198 = (x793*(x794!=(x795>x796)));

    if (t198 != 229275655LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = 1;
	static int32_t x800 = INT32_MIN;
	int32_t t199 = 233206;

    t199 = (x797*(x798!=(x799>x800)));

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

