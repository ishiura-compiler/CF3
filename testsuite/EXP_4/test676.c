
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
int64_t x8 = 5LL;
static int8_t x27 = -22;
static int8_t x30 = -9;
volatile uint8_t x42 = 0U;
volatile int16_t x47 = INT16_MIN;
uint32_t t11 = 404398U;
int8_t x53 = -4;
volatile int64_t x58 = INT64_MIN;
static int32_t t13 = -210192;
static uint8_t x65 = 50U;
static uint64_t x67 = 4933316LLU;
uint64_t x79 = 173271090574LLU;
uint32_t x88 = 1403071U;
int64_t t20 = INT64_MIN;
int64_t t21 = -4373124545695LL;
uint16_t x96 = 26U;
volatile int32_t t22 = INT32_MIN;
uint32_t x98 = UINT32_MAX;
int32_t x101 = INT32_MIN;
static volatile uint8_t x102 = UINT8_MAX;
int8_t x108 = -5;
volatile int32_t t25 = 0;
int16_t x114 = 3;
volatile int8_t x115 = INT8_MIN;
static volatile int32_t t28 = 30482772;
int32_t x121 = INT32_MAX;
int16_t x123 = -1;
volatile int32_t x126 = INT32_MAX;
volatile int64_t x132 = INT64_MAX;
static volatile uint32_t x133 = 1U;
int32_t x137 = INT32_MIN;
static volatile int16_t x146 = -1;
uint32_t t35 = 674U;
volatile uint16_t x156 = UINT16_MAX;
int32_t x160 = INT32_MAX;
int32_t x162 = 768524;
int32_t t40 = 59;
int64_t x169 = INT64_MAX;
static volatile int64_t t41 = INT64_MAX;
int8_t x175 = INT8_MIN;
int64_t x177 = -1LL;
int64_t x179 = -1LL;
int8_t x183 = INT8_MAX;
int64_t x184 = INT64_MIN;
uint8_t x188 = 87U;
volatile uint32_t t45 = UINT32_MAX;
int32_t x196 = 255205817;
static volatile int32_t t46 = -6096;
static uint8_t x205 = 50U;
int32_t x207 = 745;
uint32_t x211 = 299375527U;
uint32_t x218 = 524327892U;
int8_t x221 = INT8_MIN;
volatile int32_t x230 = INT32_MIN;
uint8_t x235 = 0U;
static volatile int32_t t56 = -71;
static uint32_t x237 = 18U;
static volatile uint32_t x240 = 164826U;
static int8_t x243 = 13;
volatile int32_t t61 = 1076821;
int16_t x259 = -1;
static int32_t x274 = INT32_MIN;
uint16_t x277 = 731U;
volatile int8_t x278 = INT8_MAX;
int32_t x280 = INT32_MIN;
int32_t t67 = 187541;
int8_t x286 = INT8_MAX;
uint32_t x287 = UINT32_MAX;
int16_t x293 = INT16_MAX;
uint16_t x294 = UINT16_MAX;
volatile int32_t t70 = -11936404;
int32_t x300 = -1;
volatile int16_t x303 = INT16_MIN;
int32_t x313 = INT32_MAX;
int32_t x316 = INT32_MIN;
static volatile int64_t x319 = -1LL;
int32_t t76 = 81645;
static uint8_t x322 = 9U;
int16_t x325 = -5;
int8_t x327 = 18;
volatile int8_t x330 = -1;
static int64_t x332 = 1LL;
int64_t x337 = -2897106796629514913LL;
static int32_t x339 = -1;
int64_t x342 = 11227038280250LL;
uint16_t x345 = UINT16_MAX;
uint32_t x347 = 175700U;
volatile uint8_t x348 = 80U;
int64_t x351 = -1LL;
uint64_t t84 = 64432235180896259LLU;
uint16_t x353 = UINT16_MAX;
int8_t x354 = -6;
uint32_t x357 = 25297U;
static uint16_t x374 = UINT16_MAX;
uint32_t x377 = 46582216U;
uint64_t x379 = 1598988LLU;
volatile uint32_t t90 = 29946645U;
volatile int32_t t91 = -5057902;
volatile int16_t x393 = INT16_MIN;
uint32_t x401 = 205301U;
static int16_t x404 = -1;
int16_t x408 = INT16_MIN;
static int32_t x410 = INT32_MAX;
int16_t x415 = -1;
int8_t x435 = -1;
int32_t t102 = 65493628;
static int32_t t103 = -562704;
static volatile int64_t t104 = -60LL;
uint64_t x455 = 16253154LLU;
uint8_t x458 = UINT8_MAX;
volatile int16_t x460 = 22;
static volatile int32_t t111 = -488055;
int64_t x474 = 15949685LL;
volatile int32_t t112 = 0;
static int32_t x482 = -1;
int32_t t114 = INT32_MAX;
uint64_t x486 = 24807LLU;
uint32_t x496 = 2639U;
int64_t x500 = INT64_MIN;
static uint16_t x510 = UINT16_MAX;
static int64_t t122 = INT64_MAX;
volatile int64_t x518 = -144507702LL;
volatile int64_t x527 = INT64_MIN;
static uint8_t x530 = UINT8_MAX;
int8_t x541 = 1;
static int32_t x551 = -1;
volatile int32_t t130 = INT32_MIN;
static int32_t x557 = 2;
uint8_t x559 = UINT8_MAX;
int8_t x561 = 0;
int32_t x562 = -1981817;
int8_t x566 = -40;
uint64_t x568 = UINT64_MAX;
int64_t x569 = 1941726474263072198LL;
int8_t x570 = -2;
int8_t x571 = -1;
volatile uint64_t x572 = 230LLU;
static volatile int16_t x577 = INT16_MAX;
int64_t x584 = INT64_MIN;
uint32_t x594 = 0U;
int8_t x595 = INT8_MIN;
int32_t t140 = -4387;
static int16_t x598 = INT16_MIN;
int32_t x600 = INT32_MAX;
int64_t x602 = -1LL;
static volatile int32_t t143 = 43;
static uint64_t t145 = UINT64_MAX;
volatile int32_t t146 = -171;
int16_t x622 = INT16_MIN;
volatile uint16_t x623 = 3U;
volatile uint32_t t147 = 4U;
int8_t x630 = INT8_MIN;
static int64_t x634 = INT64_MIN;
static uint32_t x635 = 6U;
volatile int8_t x636 = -1;
int32_t t150 = -651088;
int32_t x647 = -1;
volatile int32_t t152 = -12;
volatile uint16_t x663 = 16U;
volatile int64_t x674 = INT64_MAX;
int32_t t158 = -364;
static uint64_t t159 = UINT64_MAX;
static uint32_t x689 = 408U;
int8_t x690 = INT8_MAX;
volatile int16_t x696 = INT16_MIN;
int16_t x704 = INT16_MIN;
uint16_t x707 = 12U;
int16_t x709 = INT16_MAX;
int16_t x717 = 11;
static volatile int8_t x726 = INT8_MIN;
static int32_t x741 = -16;
int8_t x749 = -1;
uint32_t x751 = 6409U;
uint16_t x752 = 13735U;
static volatile int32_t t175 = 563;
uint8_t x755 = 3U;
volatile int32_t t177 = INT32_MIN;
uint16_t x761 = 17871U;
uint8_t x769 = 19U;
int8_t x772 = -1;
volatile uint64_t x780 = 140831323681831119LLU;
int64_t x781 = INT64_MIN;
static uint16_t x783 = UINT16_MAX;
uint8_t x786 = 15U;
int64_t x795 = -22LL;
volatile uint64_t x797 = 300645LLU;
int8_t x801 = INT8_MIN;
volatile int32_t t189 = INT32_MIN;
volatile uint64_t x813 = 1056292027238LLU;
volatile int32_t x824 = 11497;
int16_t x826 = 22;
int16_t x827 = INT16_MIN;
int64_t x831 = 92202608142759825LL;
volatile int64_t t194 = 235815LL;
static uint8_t x833 = UINT8_MAX;
volatile int32_t t197 = -41937;
volatile int32_t t198 = 420;
volatile int8_t x850 = 7;
volatile int32_t t199 = -1125344;


void f0(void) {
    	volatile int32_t x1 = INT32_MIN;
	int32_t x3 = -1;
	int8_t x4 = INT8_MIN;
	static volatile int32_t t0 = INT32_MIN;

    t0 = (x1/(x2!=(x3/x4)));

    if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	volatile uint8_t x6 = 1U;
	uint8_t x7 = 17U;
	int64_t t1 = INT64_MIN;

    t1 = (x5/(x6!=(x7/x8)));

    if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x9 = 37;
	int64_t x10 = INT64_MIN;
	int16_t x11 = 411;
	uint32_t x12 = 415185547U;
	volatile int32_t t2 = 979154522;

    t2 = (x9/(x10!=(x11/x12)));

    if (t2 != 37) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -1;
	uint32_t x14 = 12U;
	volatile int64_t x15 = 30017492291612071LL;
	volatile uint32_t x16 = 2395686U;
	int32_t t3 = 12145499;

    t3 = (x13/(x14!=(x15/x16)));

    if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -1;
	int8_t x18 = INT8_MIN;
	static int64_t x19 = INT64_MIN;
	uint8_t x20 = 11U;
	int32_t t4 = 1036634001;

    t4 = (x17/(x18!=(x19/x20)));

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = -1;
	uint16_t x26 = UINT16_MAX;
	static int16_t x28 = INT16_MAX;
	int32_t t5 = -2048029;

    t5 = (x25/(x26!=(x27/x28)));

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x29 = 25478023;
	uint8_t x31 = 14U;
	uint8_t x32 = 23U;
	volatile int32_t t6 = 24;

    t6 = (x29/(x30!=(x31/x32)));

    if (t6 != 25478023) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = INT8_MIN;
	int16_t x34 = -26;
	int64_t x35 = INT64_MIN;
	uint32_t x36 = 233U;
	static int32_t t7 = -102564;

    t7 = (x33/(x34!=(x35/x36)));

    if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x37 = 364U;
	uint8_t x38 = 2U;
	uint8_t x39 = 35U;
	int8_t x40 = -1;
	static int32_t t8 = 2730956;

    t8 = (x37/(x38!=(x39/x40)));

    if (t8 != 364) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x41 = 760U;
	uint16_t x43 = UINT16_MAX;
	static volatile uint8_t x44 = 28U;
	uint32_t t9 = 343407U;

    t9 = (x41/(x42!=(x43/x44)));

    if (t9 != 760U) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = -1LL;
	int8_t x46 = INT8_MIN;
	int32_t x48 = -336720869;
	volatile int64_t t10 = -20LL;

    t10 = (x45/(x46!=(x47/x48)));

    if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x49 = 920233327U;
	static volatile uint8_t x50 = 4U;
	int16_t x51 = INT16_MIN;
	uint32_t x52 = 13618477U;

    t11 = (x49/(x50!=(x51/x52)));

    if (t11 != 920233327U) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint16_t x54 = 5U;
	volatile uint16_t x55 = 25U;
	static uint64_t x56 = 24576517493588149LLU;
	int32_t t12 = 41732654;

    t12 = (x53/(x54!=(x55/x56)));

    if (t12 != -4) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x57 = UINT16_MAX;
	int64_t x59 = 1905367963090LL;
	int32_t x60 = -1;

    t13 = (x57/(x58!=(x59/x60)));

    if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x61 = 15106726104LL;
	volatile int64_t x62 = INT64_MIN;
	volatile uint64_t x63 = 43897LLU;
	uint32_t x64 = UINT32_MAX;
	static volatile int64_t t14 = 513208701763763LL;

    t14 = (x61/(x62!=(x63/x64)));

    if (t14 != 15106726104LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int16_t x66 = -84;
	int8_t x68 = INT8_MIN;
	volatile int32_t t15 = 65106;

    t15 = (x65/(x66!=(x67/x68)));

    if (t15 != 50) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x69 = 6U;
	uint64_t x70 = 16435LLU;
	uint16_t x71 = 2U;
	static int16_t x72 = -1;
	static uint32_t t16 = 887967383U;

    t16 = (x69/(x70!=(x71/x72)));

    if (t16 != 6U) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = INT16_MIN;
	int32_t x74 = INT32_MIN;
	int64_t x75 = INT64_MAX;
	int64_t x76 = -1LL;
	int32_t t17 = 7342;

    t17 = (x73/(x74!=(x75/x76)));

    if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x77 = 47;
	static int8_t x78 = -11;
	int32_t x80 = -1;
	volatile int32_t t18 = -26026075;

    t18 = (x77/(x78!=(x79/x80)));

    if (t18 != 47) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x81 = 402U;
	int32_t x82 = -1085;
	int8_t x83 = 0;
	int32_t x84 = -1;
	volatile uint32_t t19 = 158169645U;

    t19 = (x81/(x82!=(x83/x84)));

    if (t19 != 402U) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x85 = INT64_MIN;
	volatile int16_t x86 = 3;
	static uint16_t x87 = UINT16_MAX;

    t20 = (x85/(x86!=(x87/x88)));

    if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x89 = 1382223LL;
	static uint8_t x90 = 67U;
	int8_t x91 = INT8_MIN;
	uint32_t x92 = 2930187U;

    t21 = (x89/(x90!=(x91/x92)));

    if (t21 != 1382223LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x93 = INT32_MIN;
	uint8_t x94 = UINT8_MAX;
	static volatile int16_t x95 = -1;

    t22 = (x93/(x94!=(x95/x96)));

    if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x97 = -1;
	uint16_t x99 = UINT16_MAX;
	int32_t x100 = -1;
	volatile int32_t t23 = 144864642;

    t23 = (x97/(x98!=(x99/x100)));

    if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x103 = -1;
	int8_t x104 = INT8_MIN;
	int32_t t24 = INT32_MIN;

    t24 = (x101/(x102!=(x103/x104)));

    if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x105 = 29;
	volatile int8_t x106 = 3;
	int32_t x107 = -42555;

    t25 = (x105/(x106!=(x107/x108)));

    if (t25 != 29) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint16_t x109 = 923U;
	uint16_t x110 = 1111U;
	volatile uint16_t x111 = 101U;
	volatile int32_t x112 = -1;
	volatile int32_t t26 = -1233679;

    t26 = (x109/(x110!=(x111/x112)));

    if (t26 != 923) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int16_t x113 = -249;
	static int32_t x116 = INT32_MIN;
	volatile int32_t t27 = -1745;

    t27 = (x113/(x114!=(x115/x116)));

    if (t27 != -249) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x117 = INT8_MIN;
	static volatile int8_t x118 = INT8_MIN;
	volatile uint64_t x119 = 1LLU;
	volatile int64_t x120 = INT64_MIN;

    t28 = (x117/(x118!=(x119/x120)));

    if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x122 = -1;
	int16_t x124 = INT16_MIN;
	int32_t t29 = INT32_MAX;

    t29 = (x121/(x122!=(x123/x124)));

    if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x125 = -1609330519532288052LL;
	int32_t x127 = -1;
	volatile uint64_t x128 = 5289765414629LLU;
	int64_t t30 = 116384LL;

    t30 = (x125/(x126!=(x127/x128)));

    if (t30 != -1609330519532288052LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x129 = INT8_MIN;
	int64_t x130 = 2259219919475LL;
	static volatile int16_t x131 = INT16_MAX;
	static volatile int32_t t31 = 215234;

    t31 = (x129/(x130!=(x131/x132)));

    if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x134 = 1U;
	static volatile int64_t x135 = INT64_MAX;
	uint64_t x136 = 15094744973087208LLU;
	uint32_t t32 = 2910U;

    t32 = (x133/(x134!=(x135/x136)));

    if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x138 = INT16_MIN;
	int32_t x139 = INT32_MAX;
	uint64_t x140 = 82164972LLU;
	volatile int32_t t33 = INT32_MIN;

    t33 = (x137/(x138!=(x139/x140)));

    if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint8_t x141 = UINT8_MAX;
	static int16_t x142 = 1347;
	int16_t x143 = -65;
	static uint64_t x144 = 226LLU;
	volatile int32_t t34 = 103696500;

    t34 = (x141/(x142!=(x143/x144)));

    if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x145 = 640U;
	uint32_t x147 = UINT32_MAX;
	int16_t x148 = -3585;

    t35 = (x145/(x146!=(x147/x148)));

    if (t35 != 640U) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x149 = -6326;
	static volatile int8_t x150 = INT8_MAX;
	int32_t x151 = 27045578;
	int8_t x152 = INT8_MAX;
	int32_t t36 = 231975767;

    t36 = (x149/(x150!=(x151/x152)));

    if (t36 != -6326) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x153 = INT16_MIN;
	uint64_t x154 = UINT64_MAX;
	int16_t x155 = 1;
	volatile int32_t t37 = 249;

    t37 = (x153/(x154!=(x155/x156)));

    if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x157 = INT32_MAX;
	int8_t x158 = INT8_MAX;
	int16_t x159 = INT16_MIN;
	int32_t t38 = INT32_MAX;

    t38 = (x157/(x158!=(x159/x160)));

    if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x161 = UINT8_MAX;
	int32_t x163 = INT32_MIN;
	uint32_t x164 = UINT32_MAX;
	int32_t t39 = -69;

    t39 = (x161/(x162!=(x163/x164)));

    if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int16_t x165 = INT16_MAX;
	int16_t x166 = -1;
	static int32_t x167 = 26837868;
	int64_t x168 = INT64_MAX;

    t40 = (x165/(x166!=(x167/x168)));

    if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x170 = -62864LL;
	int8_t x171 = -1;
	uint16_t x172 = 1770U;

    t41 = (x169/(x170!=(x171/x172)));

    if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x173 = INT8_MAX;
	uint32_t x174 = 113189981U;
	static uint16_t x176 = UINT16_MAX;
	int32_t t42 = -46840904;

    t42 = (x173/(x174!=(x175/x176)));

    if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x178 = INT16_MIN;
	int64_t x180 = -6597LL;
	volatile int64_t t43 = -123852402676LL;

    t43 = (x177/(x178!=(x179/x180)));

    if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x181 = 7;
	int16_t x182 = INT16_MAX;
	static int32_t t44 = 965;

    t44 = (x181/(x182!=(x183/x184)));

    if (t44 != 7) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x185 = UINT32_MAX;
	int16_t x186 = INT16_MIN;
	int64_t x187 = INT64_MIN;

    t45 = (x185/(x186!=(x187/x188)));

    if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x193 = 2U;
	int16_t x194 = -6;
	int16_t x195 = 8174;

    t46 = (x193/(x194!=(x195/x196)));

    if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int16_t x197 = -1;
	int32_t x198 = INT32_MIN;
	static volatile int64_t x199 = INT64_MIN;
	uint16_t x200 = UINT16_MAX;
	int32_t t47 = 1678346;

    t47 = (x197/(x198!=(x199/x200)));

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x201 = 24U;
	int64_t x202 = -1LL;
	uint64_t x203 = UINT64_MAX;
	int16_t x204 = 371;
	int32_t t48 = 26670780;

    t48 = (x201/(x202!=(x203/x204)));

    if (t48 != 24) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x206 = INT16_MIN;
	uint16_t x208 = 12547U;
	int32_t t49 = 229481991;

    t49 = (x205/(x206!=(x207/x208)));

    if (t49 != 50) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x209 = INT8_MAX;
	static uint64_t x210 = 593LLU;
	static int64_t x212 = -1LL;
	static int32_t t50 = 120462761;

    t50 = (x209/(x210!=(x211/x212)));

    if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x213 = INT64_MIN;
	uint8_t x214 = 1U;
	uint64_t x215 = UINT64_MAX;
	int32_t x216 = 1597;
	volatile int64_t t51 = INT64_MIN;

    t51 = (x213/(x214!=(x215/x216)));

    if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x217 = 0;
	int32_t x219 = INT32_MIN;
	int16_t x220 = -6767;
	int32_t t52 = 101774289;

    t52 = (x217/(x218!=(x219/x220)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x222 = -1;
	volatile uint16_t x223 = 3618U;
	int32_t x224 = INT32_MIN;
	int32_t t53 = 29818;

    t53 = (x221/(x222!=(x223/x224)));

    if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint16_t x225 = 32604U;
	int32_t x226 = 1;
	volatile int16_t x227 = INT16_MIN;
	static uint64_t x228 = UINT64_MAX;
	volatile int32_t t54 = 208;

    t54 = (x225/(x226!=(x227/x228)));

    if (t54 != 32604) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x229 = 3U;
	static int32_t x231 = INT32_MIN;
	static int64_t x232 = -1LL;
	int32_t t55 = 12747320;

    t55 = (x229/(x230!=(x231/x232)));

    if (t55 != 3) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x233 = INT8_MAX;
	int8_t x234 = -1;
	volatile int16_t x236 = INT16_MAX;

    t56 = (x233/(x234!=(x235/x236)));

    if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x238 = 8625U;
	int16_t x239 = INT16_MAX;
	volatile uint32_t t57 = 64525U;

    t57 = (x237/(x238!=(x239/x240)));

    if (t57 != 18U) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x241 = 50;
	volatile int64_t x242 = INT64_MIN;
	volatile int8_t x244 = INT8_MAX;
	volatile int32_t t58 = -32;

    t58 = (x241/(x242!=(x243/x244)));

    if (t58 != 50) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int8_t x245 = INT8_MIN;
	volatile int32_t x246 = INT32_MIN;
	uint8_t x247 = 24U;
	uint16_t x248 = 62U;
	static int32_t t59 = -19581;

    t59 = (x245/(x246!=(x247/x248)));

    if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x249 = 1;
	static int8_t x250 = -1;
	int16_t x251 = INT16_MIN;
	static uint32_t x252 = UINT32_MAX;
	volatile int32_t t60 = 54511077;

    t60 = (x249/(x250!=(x251/x252)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x253 = INT16_MIN;
	static volatile int8_t x254 = INT8_MIN;
	int16_t x255 = -1019;
	int32_t x256 = INT32_MIN;

    t61 = (x253/(x254!=(x255/x256)));

    if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x257 = INT8_MIN;
	static int64_t x258 = INT64_MIN;
	int64_t x260 = 1LL;
	int32_t t62 = 152744062;

    t62 = (x257/(x258!=(x259/x260)));

    if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x261 = -5054;
	int32_t x262 = 36602091;
	int64_t x263 = -1LL;
	int64_t x264 = INT64_MIN;
	volatile int32_t t63 = -1;

    t63 = (x261/(x262!=(x263/x264)));

    if (t63 != -5054) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x269 = 763997811LL;
	volatile uint32_t x270 = 121609137U;
	uint32_t x271 = UINT32_MAX;
	int16_t x272 = INT16_MIN;
	int64_t t64 = -954768966621LL;

    t64 = (x269/(x270!=(x271/x272)));

    if (t64 != 763997811LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x273 = -1;
	uint32_t x275 = 153300U;
	uint32_t x276 = UINT32_MAX;
	static int32_t t65 = -65466405;

    t65 = (x273/(x274!=(x275/x276)));

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x279 = INT32_MIN;
	int32_t t66 = 1;

    t66 = (x277/(x278!=(x279/x280)));

    if (t66 != 731) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x281 = 1U;
	int32_t x282 = 277140825;
	int32_t x283 = -1;
	static volatile int8_t x284 = INT8_MAX;

    t67 = (x281/(x282!=(x283/x284)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x285 = -6874891;
	uint64_t x288 = UINT64_MAX;
	volatile int32_t t68 = 1077;

    t68 = (x285/(x286!=(x287/x288)));

    if (t68 != -6874891) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x289 = 3U;
	volatile uint8_t x290 = UINT8_MAX;
	static int64_t x291 = 865134172257565620LL;
	volatile uint64_t x292 = 61602256490905LLU;
	uint32_t t69 = 52U;

    t69 = (x289/(x290!=(x291/x292)));

    if (t69 != 3U) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x295 = -1;
	int32_t x296 = INT32_MAX;

    t70 = (x293/(x294!=(x295/x296)));

    if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x297 = UINT32_MAX;
	int8_t x298 = -27;
	uint64_t x299 = UINT64_MAX;
	uint32_t t71 = UINT32_MAX;

    t71 = (x297/(x298!=(x299/x300)));

    if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x301 = 2;
	volatile int32_t x302 = INT32_MIN;
	int8_t x304 = INT8_MIN;
	int32_t t72 = -23709029;

    t72 = (x301/(x302!=(x303/x304)));

    if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x305 = 464;
	volatile int32_t x306 = INT32_MAX;
	static volatile int64_t x307 = 440510080LL;
	uint16_t x308 = 108U;
	volatile int32_t t73 = -411;

    t73 = (x305/(x306!=(x307/x308)));

    if (t73 != 464) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x309 = INT32_MIN;
	static uint16_t x310 = UINT16_MAX;
	uint16_t x311 = 22862U;
	int16_t x312 = -1;
	volatile int32_t t74 = INT32_MIN;

    t74 = (x309/(x310!=(x311/x312)));

    if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x314 = INT8_MIN;
	int32_t x315 = -1;
	int32_t t75 = INT32_MAX;

    t75 = (x313/(x314!=(x315/x316)));

    if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x317 = -600;
	int8_t x318 = INT8_MAX;
	volatile int8_t x320 = INT8_MIN;

    t76 = (x317/(x318!=(x319/x320)));

    if (t76 != -600) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x321 = -1LL;
	static volatile uint32_t x323 = 686U;
	int8_t x324 = 1;
	volatile int64_t t77 = -7805595013474LL;

    t77 = (x321/(x322!=(x323/x324)));

    if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x326 = INT64_MIN;
	int32_t x328 = 15;
	int32_t t78 = 31041026;

    t78 = (x325/(x326!=(x327/x328)));

    if (t78 != -5) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x329 = INT64_MAX;
	volatile int8_t x331 = 7;
	volatile int64_t t79 = INT64_MAX;

    t79 = (x329/(x330!=(x331/x332)));

    if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint8_t x333 = 94U;
	volatile int16_t x334 = INT16_MIN;
	int16_t x335 = INT16_MAX;
	int64_t x336 = -2209LL;
	volatile int32_t t80 = -1019;

    t80 = (x333/(x334!=(x335/x336)));

    if (t80 != 94) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x338 = 1U;
	int32_t x340 = INT32_MIN;
	volatile int64_t t81 = 58347692LL;

    t81 = (x337/(x338!=(x339/x340)));

    if (t81 != -2897106796629514913LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x341 = 62U;
	static int64_t x343 = 92LL;
	uint8_t x344 = 78U;
	static volatile int32_t t82 = 16;

    t82 = (x341/(x342!=(x343/x344)));

    if (t82 != 62) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x346 = UINT32_MAX;
	static volatile int32_t t83 = -44;

    t83 = (x345/(x346!=(x347/x348)));

    if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x349 = 494203LLU;
	uint32_t x350 = UINT32_MAX;
	static int16_t x352 = -1;

    t84 = (x349/(x350!=(x351/x352)));

    if (t84 != 494203LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x355 = 0U;
	int64_t x356 = INT64_MIN;
	static int32_t t85 = 10;

    t85 = (x353/(x354!=(x355/x356)));

    if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x358 = -1;
	int32_t x359 = INT32_MAX;
	int8_t x360 = INT8_MIN;
	volatile uint32_t t86 = 17041994U;

    t86 = (x357/(x358!=(x359/x360)));

    if (t86 != 25297U) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint8_t x361 = UINT8_MAX;
	static volatile uint32_t x362 = 756860U;
	int64_t x363 = 21224097296LL;
	volatile int64_t x364 = -31072709LL;
	static volatile int32_t t87 = 489;

    t87 = (x361/(x362!=(x363/x364)));

    if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x365 = INT8_MAX;
	int32_t x366 = -3139;
	int16_t x367 = 0;
	int16_t x368 = -1;
	static int32_t t88 = 5513;

    t88 = (x365/(x366!=(x367/x368)));

    if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x373 = INT16_MAX;
	volatile int16_t x375 = 259;
	static volatile int16_t x376 = INT16_MIN;
	int32_t t89 = -3217461;

    t89 = (x373/(x374!=(x375/x376)));

    if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x378 = INT16_MIN;
	int16_t x380 = INT16_MIN;

    t90 = (x377/(x378!=(x379/x380)));

    if (t90 != 46582216U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x381 = 3U;
	int32_t x382 = -1;
	int64_t x383 = INT64_MIN;
	int8_t x384 = 1;

    t91 = (x381/(x382!=(x383/x384)));

    if (t91 != 3) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x385 = -4138437;
	uint8_t x386 = 6U;
	uint32_t x387 = 25U;
	uint8_t x388 = 41U;
	volatile int32_t t92 = 14271;

    t92 = (x385/(x386!=(x387/x388)));

    if (t92 != -4138437) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x389 = -1;
	volatile int32_t x390 = -30757115;
	int64_t x391 = 756114072850869LL;
	int64_t x392 = 2007263613620532562LL;
	int32_t t93 = 362750517;

    t93 = (x389/(x390!=(x391/x392)));

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x394 = 18U;
	volatile uint16_t x395 = 2992U;
	static int16_t x396 = 341;
	int32_t t94 = -2;

    t94 = (x393/(x394!=(x395/x396)));

    if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint64_t x397 = UINT64_MAX;
	volatile uint32_t x398 = 14U;
	int8_t x399 = INT8_MIN;
	int8_t x400 = -7;
	volatile uint64_t t95 = UINT64_MAX;

    t95 = (x397/(x398!=(x399/x400)));

    if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x402 = -1282171281161632169LL;
	int8_t x403 = 55;
	static uint32_t t96 = 10U;

    t96 = (x401/(x402!=(x403/x404)));

    if (t96 != 205301U) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x405 = 114U;
	int32_t x406 = -1;
	uint8_t x407 = 6U;
	volatile int32_t t97 = -12533047;

    t97 = (x405/(x406!=(x407/x408)));

    if (t97 != 114) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x409 = 104LLU;
	int16_t x411 = INT16_MAX;
	static volatile uint16_t x412 = 102U;
	uint64_t t98 = 1133471593245072LLU;

    t98 = (x409/(x410!=(x411/x412)));

    if (t98 != 104LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x413 = INT8_MAX;
	int16_t x414 = -1;
	volatile uint16_t x416 = 1714U;
	volatile int32_t t99 = 2995100;

    t99 = (x413/(x414!=(x415/x416)));

    if (t99 != 127) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x417 = 0LLU;
	static uint64_t x418 = 686LLU;
	volatile uint32_t x419 = 4643U;
	int16_t x420 = -1;
	uint64_t t100 = 29LLU;

    t100 = (x417/(x418!=(x419/x420)));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x425 = UINT32_MAX;
	volatile int8_t x426 = INT8_MIN;
	int8_t x427 = INT8_MIN;
	int64_t x428 = 17LL;
	volatile uint32_t t101 = UINT32_MAX;

    t101 = (x425/(x426!=(x427/x428)));

    if (t101 != UINT32_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x433 = 1049U;
	volatile uint8_t x434 = 78U;
	uint32_t x436 = UINT32_MAX;

    t102 = (x433/(x434!=(x435/x436)));

    if (t102 != 1049) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x437 = INT8_MIN;
	volatile int64_t x438 = 1LL;
	int16_t x439 = -1;
	uint16_t x440 = 2953U;

    t103 = (x437/(x438!=(x439/x440)));

    if (t103 != -128) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x441 = -1LL;
	volatile uint32_t x442 = 1668876661U;
	uint8_t x443 = 0U;
	static uint16_t x444 = 179U;

    t104 = (x441/(x442!=(x443/x444)));

    if (t104 != -1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x445 = -1;
	int32_t x446 = -1;
	static int8_t x447 = INT8_MIN;
	static uint32_t x448 = 300127U;
	volatile int32_t t105 = -67;

    t105 = (x445/(x446!=(x447/x448)));

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x449 = INT64_MIN;
	int8_t x450 = INT8_MIN;
	static int8_t x451 = -1;
	static uint64_t x452 = 200217570085LLU;
	int64_t t106 = INT64_MIN;

    t106 = (x449/(x450!=(x451/x452)));

    if (t106 != INT64_MIN) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x453 = UINT64_MAX;
	volatile uint16_t x454 = 21U;
	volatile int64_t x456 = -1LL;
	volatile uint64_t t107 = UINT64_MAX;

    t107 = (x453/(x454!=(x455/x456)));

    if (t107 != UINT64_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x457 = 575U;
	int32_t x459 = -43746;
	volatile uint32_t t108 = 6478U;

    t108 = (x457/(x458!=(x459/x460)));

    if (t108 != 575U) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x461 = -1780;
	uint16_t x462 = UINT16_MAX;
	int64_t x463 = 1007156231549698180LL;
	static int8_t x464 = 52;
	volatile int32_t t109 = -1;

    t109 = (x461/(x462!=(x463/x464)));

    if (t109 != -1780) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x465 = -1;
	uint32_t x466 = UINT32_MAX;
	uint8_t x467 = UINT8_MAX;
	int64_t x468 = -2612LL;
	int32_t t110 = 4048693;

    t110 = (x465/(x466!=(x467/x468)));

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x469 = -14916;
	static int16_t x470 = -30;
	uint16_t x471 = UINT16_MAX;
	volatile uint32_t x472 = UINT32_MAX;

    t111 = (x469/(x470!=(x471/x472)));

    if (t111 != -14916) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x473 = 28U;
	int32_t x475 = INT32_MIN;
	int8_t x476 = INT8_MIN;

    t112 = (x473/(x474!=(x475/x476)));

    if (t112 != 28) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x477 = UINT8_MAX;
	uint16_t x478 = 439U;
	uint64_t x479 = 32916613008341LLU;
	int8_t x480 = INT8_MIN;
	static volatile int32_t t113 = 10458;

    t113 = (x477/(x478!=(x479/x480)));

    if (t113 != 255) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x481 = INT32_MAX;
	int16_t x483 = -1;
	int16_t x484 = -1;

    t114 = (x481/(x482!=(x483/x484)));

    if (t114 != INT32_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x485 = 11159350U;
	int16_t x487 = -201;
	uint32_t x488 = 202426541U;
	static volatile uint32_t t115 = 5U;

    t115 = (x485/(x486!=(x487/x488)));

    if (t115 != 11159350U) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x489 = INT16_MIN;
	int32_t x490 = 3;
	static volatile int16_t x491 = -1;
	int8_t x492 = -1;
	int32_t t116 = -1;

    t116 = (x489/(x490!=(x491/x492)));

    if (t116 != -32768) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x493 = INT8_MAX;
	uint16_t x494 = 245U;
	int64_t x495 = -979818195970LL;
	volatile int32_t t117 = 123;

    t117 = (x493/(x494!=(x495/x496)));

    if (t117 != 127) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x497 = INT64_MIN;
	int16_t x498 = INT16_MIN;
	uint8_t x499 = 15U;
	int64_t t118 = INT64_MIN;

    t118 = (x497/(x498!=(x499/x500)));

    if (t118 != INT64_MIN) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x501 = 403;
	int32_t x502 = INT32_MIN;
	static int16_t x503 = -1;
	static uint64_t x504 = UINT64_MAX;
	int32_t t119 = 48628500;

    t119 = (x501/(x502!=(x503/x504)));

    if (t119 != 403) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x505 = UINT16_MAX;
	static int64_t x506 = INT64_MAX;
	int8_t x507 = INT8_MAX;
	static int64_t x508 = -213571543118507LL;
	volatile int32_t t120 = -222288985;

    t120 = (x505/(x506!=(x507/x508)));

    if (t120 != 65535) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x509 = -1;
	int64_t x511 = 1991LL;
	int32_t x512 = INT32_MIN;
	int32_t t121 = -3145;

    t121 = (x509/(x510!=(x511/x512)));

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x513 = INT64_MAX;
	int64_t x514 = 1077369290507LL;
	static int8_t x515 = -1;
	volatile uint32_t x516 = 424423808U;

    t122 = (x513/(x514!=(x515/x516)));

    if (t122 != INT64_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x517 = UINT16_MAX;
	uint32_t x519 = UINT32_MAX;
	int64_t x520 = -32233072128920279LL;
	volatile int32_t t123 = -1142900;

    t123 = (x517/(x518!=(x519/x520)));

    if (t123 != 65535) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x521 = -1521392859647588758LL;
	int8_t x522 = INT8_MAX;
	int16_t x523 = INT16_MAX;
	uint32_t x524 = 7091730U;
	static int64_t t124 = -137LL;

    t124 = (x521/(x522!=(x523/x524)));

    if (t124 != -1521392859647588758LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x525 = INT32_MIN;
	int32_t x526 = -1;
	int8_t x528 = INT8_MIN;
	volatile int32_t t125 = INT32_MIN;

    t125 = (x525/(x526!=(x527/x528)));

    if (t125 != INT32_MIN) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x529 = 123;
	uint16_t x531 = 1123U;
	int64_t x532 = INT64_MIN;
	int32_t t126 = 3349844;

    t126 = (x529/(x530!=(x531/x532)));

    if (t126 != 123) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x537 = -5;
	int32_t x538 = -1765354;
	int64_t x539 = INT64_MAX;
	uint16_t x540 = UINT16_MAX;
	volatile int32_t t127 = 330559;

    t127 = (x537/(x538!=(x539/x540)));

    if (t127 != -5) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x542 = 15U;
	int64_t x543 = INT64_MIN;
	volatile uint16_t x544 = 15635U;
	volatile int32_t t128 = 178640547;

    t128 = (x541/(x542!=(x543/x544)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x549 = INT8_MIN;
	static int32_t x550 = -1;
	static int8_t x552 = 17;
	int32_t t129 = 473728;

    t129 = (x549/(x550!=(x551/x552)));

    if (t129 != -128) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x553 = INT32_MIN;
	uint32_t x554 = 343407616U;
	uint8_t x555 = UINT8_MAX;
	uint32_t x556 = 5585954U;

    t130 = (x553/(x554!=(x555/x556)));

    if (t130 != INT32_MIN) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x558 = -1294251;
	uint32_t x560 = UINT32_MAX;
	volatile int32_t t131 = -6;

    t131 = (x557/(x558!=(x559/x560)));

    if (t131 != 2) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x563 = -1;
	int64_t x564 = 5878803349937LL;
	int32_t t132 = 18238;

    t132 = (x561/(x562!=(x563/x564)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int64_t x565 = INT64_MIN;
	uint64_t x567 = 2834LLU;
	volatile int64_t t133 = INT64_MIN;

    t133 = (x565/(x566!=(x567/x568)));

    if (t133 != INT64_MIN) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int64_t t134 = 0LL;

    t134 = (x569/(x570!=(x571/x572)));

    if (t134 != 1941726474263072198LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x573 = 113U;
	volatile int32_t x574 = 876;
	int8_t x575 = 15;
	static int64_t x576 = -1LL;
	volatile int32_t t135 = 2888306;

    t135 = (x573/(x574!=(x575/x576)));

    if (t135 != 113) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x578 = INT16_MIN;
	int8_t x579 = INT8_MIN;
	static uint32_t x580 = 14440388U;
	static volatile int32_t t136 = 176248475;

    t136 = (x577/(x578!=(x579/x580)));

    if (t136 != 32767) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint8_t x581 = UINT8_MAX;
	static volatile uint8_t x582 = UINT8_MAX;
	int32_t x583 = INT32_MAX;
	static int32_t t137 = -64768;

    t137 = (x581/(x582!=(x583/x584)));

    if (t137 != 255) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint32_t x585 = UINT32_MAX;
	int8_t x586 = INT8_MIN;
	volatile uint64_t x587 = UINT64_MAX;
	static volatile uint16_t x588 = UINT16_MAX;
	static volatile uint32_t t138 = UINT32_MAX;

    t138 = (x585/(x586!=(x587/x588)));

    if (t138 != UINT32_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x589 = INT8_MAX;
	static int16_t x590 = INT16_MIN;
	int64_t x591 = -1LL;
	int16_t x592 = INT16_MAX;
	int32_t t139 = -3;

    t139 = (x589/(x590!=(x591/x592)));

    if (t139 != 127) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x593 = -4;
	volatile int8_t x596 = -1;

    t140 = (x593/(x594!=(x595/x596)));

    if (t140 != -4) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x597 = INT32_MAX;
	static int8_t x599 = 1;
	volatile int32_t t141 = INT32_MAX;

    t141 = (x597/(x598!=(x599/x600)));

    if (t141 != INT32_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x601 = 334434;
	int16_t x603 = INT16_MAX;
	uint64_t x604 = 908LLU;
	static int32_t t142 = -542817314;

    t142 = (x601/(x602!=(x603/x604)));

    if (t142 != 334434) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x605 = UINT8_MAX;
	int8_t x606 = INT8_MIN;
	int8_t x607 = -1;
	int8_t x608 = INT8_MIN;

    t143 = (x605/(x606!=(x607/x608)));

    if (t143 != 255) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x609 = INT8_MIN;
	static int32_t x610 = INT32_MIN;
	static int8_t x611 = INT8_MIN;
	static int8_t x612 = INT8_MIN;
	static volatile int32_t t144 = 250932935;

    t144 = (x609/(x610!=(x611/x612)));

    if (t144 != -128) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x613 = UINT64_MAX;
	volatile int64_t x614 = INT64_MIN;
	int16_t x615 = INT16_MIN;
	int8_t x616 = -47;

    t145 = (x613/(x614!=(x615/x616)));

    if (t145 != UINT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x617 = UINT8_MAX;
	int8_t x618 = -19;
	static volatile int64_t x619 = INT64_MIN;
	uint8_t x620 = UINT8_MAX;

    t146 = (x617/(x618!=(x619/x620)));

    if (t146 != 255) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x621 = 26982978U;
	uint32_t x624 = UINT32_MAX;

    t147 = (x621/(x622!=(x623/x624)));

    if (t147 != 26982978U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x629 = UINT64_MAX;
	int16_t x631 = INT16_MIN;
	int64_t x632 = INT64_MIN;
	uint64_t t148 = UINT64_MAX;

    t148 = (x629/(x630!=(x631/x632)));

    if (t148 != UINT64_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint32_t x633 = 4U;
	volatile uint32_t t149 = 239U;

    t149 = (x633/(x634!=(x635/x636)));

    if (t149 != 4U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x637 = UINT8_MAX;
	volatile int8_t x638 = INT8_MAX;
	volatile int32_t x639 = -1;
	uint16_t x640 = 193U;

    t150 = (x637/(x638!=(x639/x640)));

    if (t150 != 255) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x641 = INT64_MIN;
	int16_t x642 = INT16_MAX;
	static int8_t x643 = INT8_MIN;
	int64_t x644 = 498645977169762486LL;
	volatile int64_t t151 = INT64_MIN;

    t151 = (x641/(x642!=(x643/x644)));

    if (t151 != INT64_MIN) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x645 = -3;
	volatile int16_t x646 = INT16_MIN;
	uint64_t x648 = 3316052657LLU;

    t152 = (x645/(x646!=(x647/x648)));

    if (t152 != -3) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x649 = INT32_MIN;
	int32_t x650 = -1;
	volatile int64_t x651 = INT64_MAX;
	int16_t x652 = -1;
	volatile int32_t t153 = INT32_MIN;

    t153 = (x649/(x650!=(x651/x652)));

    if (t153 != INT32_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x653 = 28U;
	static volatile int32_t x654 = -1;
	static int32_t x655 = 1;
	uint32_t x656 = UINT32_MAX;
	int32_t t154 = 3194;

    t154 = (x653/(x654!=(x655/x656)));

    if (t154 != 28) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x661 = INT16_MAX;
	volatile int16_t x662 = -4000;
	int8_t x664 = -1;
	volatile int32_t t155 = 241034;

    t155 = (x661/(x662!=(x663/x664)));

    if (t155 != 32767) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x665 = -1;
	static uint32_t x666 = 7928U;
	static int32_t x667 = INT32_MIN;
	int32_t x668 = -19;
	static int32_t t156 = 62;

    t156 = (x665/(x666!=(x667/x668)));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x673 = INT16_MIN;
	static int16_t x675 = -1;
	int64_t x676 = INT64_MIN;
	static volatile int32_t t157 = -9865245;

    t157 = (x673/(x674!=(x675/x676)));

    if (t157 != -32768) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x677 = UINT16_MAX;
	uint16_t x678 = UINT16_MAX;
	int8_t x679 = 0;
	volatile int8_t x680 = -1;

    t158 = (x677/(x678!=(x679/x680)));

    if (t158 != 65535) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x681 = UINT64_MAX;
	static int32_t x682 = INT32_MAX;
	static uint8_t x683 = UINT8_MAX;
	uint32_t x684 = 4831U;

    t159 = (x681/(x682!=(x683/x684)));

    if (t159 != UINT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint64_t x685 = UINT64_MAX;
	volatile int8_t x686 = INT8_MAX;
	volatile uint64_t x687 = 2510819265348983LLU;
	int32_t x688 = 12013;
	static volatile uint64_t t160 = UINT64_MAX;

    t160 = (x685/(x686!=(x687/x688)));

    if (t160 != UINT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x691 = INT8_MIN;
	int16_t x692 = INT16_MAX;
	static volatile uint32_t t161 = 32851U;

    t161 = (x689/(x690!=(x691/x692)));

    if (t161 != 408U) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x693 = INT8_MAX;
	volatile uint8_t x694 = UINT8_MAX;
	volatile uint32_t x695 = 121750121U;
	volatile int32_t t162 = -1;

    t162 = (x693/(x694!=(x695/x696)));

    if (t162 != 127) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x697 = 7U;
	static int64_t x698 = INT64_MAX;
	static int16_t x699 = -1;
	volatile int8_t x700 = -1;
	volatile int32_t t163 = -250221;

    t163 = (x697/(x698!=(x699/x700)));

    if (t163 != 7) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x701 = INT32_MIN;
	volatile int8_t x702 = INT8_MAX;
	uint16_t x703 = UINT16_MAX;
	int32_t t164 = INT32_MIN;

    t164 = (x701/(x702!=(x703/x704)));

    if (t164 != INT32_MIN) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x705 = INT16_MAX;
	static int64_t x706 = 9358284LL;
	volatile int32_t x708 = INT32_MIN;
	int32_t t165 = -1134846;

    t165 = (x705/(x706!=(x707/x708)));

    if (t165 != 32767) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x710 = UINT32_MAX;
	int16_t x711 = -6;
	int32_t x712 = INT32_MIN;
	int32_t t166 = 116825682;

    t166 = (x709/(x710!=(x711/x712)));

    if (t166 != 32767) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x718 = INT16_MIN;
	int16_t x719 = 40;
	uint16_t x720 = 92U;
	volatile int32_t t167 = -206;

    t167 = (x717/(x718!=(x719/x720)));

    if (t167 != 11) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x721 = 6621U;
	int64_t x722 = -1LL;
	static volatile int8_t x723 = -44;
	volatile uint32_t x724 = 165572U;
	static int32_t t168 = 7310532;

    t168 = (x721/(x722!=(x723/x724)));

    if (t168 != 6621) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x725 = -3;
	uint64_t x727 = 1274046551LLU;
	int16_t x728 = INT16_MIN;
	int32_t t169 = -20469;

    t169 = (x725/(x726!=(x727/x728)));

    if (t169 != -3) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x729 = 65LLU;
	int64_t x730 = INT64_MIN;
	int8_t x731 = INT8_MIN;
	uint16_t x732 = 1841U;
	uint64_t t170 = 28554715634LLU;

    t170 = (x729/(x730!=(x731/x732)));

    if (t170 != 65LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x733 = UINT32_MAX;
	int8_t x734 = -1;
	uint64_t x735 = UINT64_MAX;
	int8_t x736 = INT8_MIN;
	volatile uint32_t t171 = UINT32_MAX;

    t171 = (x733/(x734!=(x735/x736)));

    if (t171 != UINT32_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x737 = UINT16_MAX;
	int16_t x738 = 1289;
	int16_t x739 = INT16_MAX;
	int64_t x740 = -4144179654071045LL;
	int32_t t172 = -64536;

    t172 = (x737/(x738!=(x739/x740)));

    if (t172 != 65535) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x742 = INT8_MIN;
	uint64_t x743 = 95116503504191137LLU;
	uint64_t x744 = UINT64_MAX;
	volatile int32_t t173 = -11040;

    t173 = (x741/(x742!=(x743/x744)));

    if (t173 != -16) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x745 = 629;
	static int16_t x746 = -12610;
	uint64_t x747 = 65187625181529556LLU;
	static uint32_t x748 = UINT32_MAX;
	static int32_t t174 = 510841;

    t174 = (x745/(x746!=(x747/x748)));

    if (t174 != 629) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x750 = -1LL;

    t175 = (x749/(x750!=(x751/x752)));

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x753 = 3707495726557LL;
	static int16_t x754 = INT16_MIN;
	uint8_t x756 = 3U;
	static int64_t t176 = -1986700690316112562LL;

    t176 = (x753/(x754!=(x755/x756)));

    if (t176 != 3707495726557LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x757 = INT32_MIN;
	uint64_t x758 = 1341178241803LLU;
	int8_t x759 = -10;
	uint32_t x760 = 58365U;

    t177 = (x757/(x758!=(x759/x760)));

    if (t177 != INT32_MIN) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x762 = 33829LLU;
	int16_t x763 = 0;
	int16_t x764 = INT16_MIN;
	volatile int32_t t178 = 73;

    t178 = (x761/(x762!=(x763/x764)));

    if (t178 != 17871) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint16_t x765 = 29U;
	int16_t x766 = 1;
	static volatile int8_t x767 = -1;
	volatile int8_t x768 = 3;
	static volatile int32_t t179 = 1034584;

    t179 = (x765/(x766!=(x767/x768)));

    if (t179 != 29) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x770 = UINT8_MAX;
	volatile uint8_t x771 = UINT8_MAX;
	static volatile int32_t t180 = -15332183;

    t180 = (x769/(x770!=(x771/x772)));

    if (t180 != 19) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x773 = UINT16_MAX;
	uint64_t x774 = 13240452350LLU;
	int32_t x775 = 10011;
	volatile int32_t x776 = 954;
	volatile int32_t t181 = 7499;

    t181 = (x773/(x774!=(x775/x776)));

    if (t181 != 65535) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x777 = 46U;
	int8_t x778 = -7;
	int32_t x779 = 22590775;
	volatile int32_t t182 = -35977537;

    t182 = (x777/(x778!=(x779/x780)));

    if (t182 != 46) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x782 = 20393U;
	int8_t x784 = INT8_MIN;
	int64_t t183 = INT64_MIN;

    t183 = (x781/(x782!=(x783/x784)));

    if (t183 != INT64_MIN) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x785 = -47;
	int64_t x787 = -1LL;
	uint8_t x788 = 8U;
	volatile int32_t t184 = -638;

    t184 = (x785/(x786!=(x787/x788)));

    if (t184 != -47) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x789 = -1;
	int8_t x790 = INT8_MIN;
	volatile int32_t x791 = -1;
	static volatile int32_t x792 = 3019696;
	volatile int32_t t185 = -6962038;

    t185 = (x789/(x790!=(x791/x792)));

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x793 = 317U;
	int8_t x794 = INT8_MAX;
	int32_t x796 = INT32_MIN;
	uint32_t t186 = 3372807U;

    t186 = (x793/(x794!=(x795/x796)));

    if (t186 != 317U) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x798 = -1;
	int16_t x799 = -5033;
	volatile uint64_t x800 = 7314114202LLU;
	volatile uint64_t t187 = 1797728LLU;

    t187 = (x797/(x798!=(x799/x800)));

    if (t187 != 300645LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x802 = INT32_MIN;
	static int64_t x803 = INT64_MIN;
	static uint16_t x804 = 231U;
	int32_t t188 = 157201;

    t188 = (x801/(x802!=(x803/x804)));

    if (t188 != -128) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x805 = INT32_MIN;
	static int32_t x806 = INT32_MAX;
	static volatile int16_t x807 = 5582;
	uint8_t x808 = 105U;

    t189 = (x805/(x806!=(x807/x808)));

    if (t189 != INT32_MIN) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x809 = -1;
	int8_t x810 = INT8_MAX;
	static volatile int32_t x811 = INT32_MIN;
	uint8_t x812 = UINT8_MAX;
	int32_t t190 = 117280431;

    t190 = (x809/(x810!=(x811/x812)));

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x814 = 11U;
	int64_t x815 = INT64_MIN;
	int64_t x816 = 227921399358930750LL;
	uint64_t t191 = 32367154955308595LLU;

    t191 = (x813/(x814!=(x815/x816)));

    if (t191 != 1056292027238LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x821 = INT32_MIN;
	uint16_t x822 = UINT16_MAX;
	static int8_t x823 = -1;
	volatile int32_t t192 = INT32_MIN;

    t192 = (x821/(x822!=(x823/x824)));

    if (t192 != INT32_MIN) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int32_t x825 = INT32_MIN;
	uint8_t x828 = UINT8_MAX;
	volatile int32_t t193 = INT32_MIN;

    t193 = (x825/(x826!=(x827/x828)));

    if (t193 != INT32_MIN) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x829 = -1LL;
	int64_t x830 = -1101LL;
	int32_t x832 = 77420735;

    t194 = (x829/(x830!=(x831/x832)));

    if (t194 != -1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x834 = -1;
	static int16_t x835 = INT16_MAX;
	int8_t x836 = INT8_MIN;
	volatile int32_t t195 = 0;

    t195 = (x833/(x834!=(x835/x836)));

    if (t195 != 255) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x837 = -1;
	static int8_t x838 = -22;
	int32_t x839 = INT32_MIN;
	int32_t x840 = INT32_MIN;
	volatile int32_t t196 = -160;

    t196 = (x837/(x838!=(x839/x840)));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x841 = -1;
	int32_t x842 = -241;
	uint8_t x843 = UINT8_MAX;
	static volatile uint32_t x844 = 2931U;

    t197 = (x841/(x842!=(x843/x844)));

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x845 = UINT8_MAX;
	static volatile uint32_t x846 = 33U;
	int8_t x847 = INT8_MIN;
	int32_t x848 = INT32_MIN;

    t198 = (x845/(x846!=(x847/x848)));

    if (t198 != 255) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x849 = -1;
	int16_t x851 = -1081;
	static volatile int64_t x852 = INT64_MAX;

    t199 = (x849/(x850!=(x851/x852)));

    if (t199 != -1) { NG(); } else { ; }
	
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

