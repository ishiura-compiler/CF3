
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

volatile int32_t t2 = -213;
int8_t x13 = -1;
volatile uint8_t x24 = 1U;
volatile int16_t x26 = 1111;
volatile int64_t x30 = INT64_MIN;
int32_t t7 = -230025;
static int64_t x39 = INT64_MIN;
static volatile int32_t t10 = 69447466;
int16_t x46 = INT16_MIN;
static int16_t x49 = INT16_MAX;
int16_t x53 = INT16_MIN;
volatile int32_t t13 = 29;
int8_t x57 = -45;
int64_t x58 = -1LL;
volatile int32_t t14 = -3307;
volatile int32_t t15 = 18135667;
volatile int32_t x66 = -144;
volatile uint8_t x67 = 6U;
int32_t x85 = INT32_MAX;
int16_t x87 = 6674;
int32_t t21 = 2005;
int16_t x94 = INT16_MAX;
uint64_t x95 = 2589092LLU;
volatile int8_t x98 = INT8_MAX;
volatile int32_t t25 = 334718178;
int64_t x105 = INT64_MIN;
static int64_t x106 = -1LL;
uint64_t x116 = UINT64_MAX;
volatile int64_t x127 = -4609442LL;
volatile int64_t x129 = INT64_MIN;
int64_t x131 = INT64_MIN;
volatile int32_t t33 = -268896;
volatile int32_t t34 = 213477;
static uint64_t x141 = 114792292719LLU;
static volatile int8_t x142 = INT8_MAX;
static int8_t x155 = -1;
uint16_t x161 = 7U;
static volatile int32_t t40 = 1287891;
volatile uint8_t x167 = UINT8_MAX;
volatile int32_t t41 = 1;
int64_t x172 = -30020022LL;
volatile int32_t x175 = -138;
volatile int32_t t44 = 13267;
int16_t x183 = 1258;
uint8_t x186 = 15U;
int32_t t47 = -724086;
volatile uint64_t x199 = 312663LLU;
volatile int64_t x205 = -273755712626232169LL;
int32_t t53 = -56;
volatile int32_t x217 = INT32_MIN;
int8_t x219 = 1;
int64_t x221 = INT64_MIN;
uint32_t x227 = UINT32_MAX;
static int32_t t56 = -15327484;
uint16_t x230 = UINT16_MAX;
int32_t x233 = INT32_MIN;
volatile int16_t x242 = INT16_MIN;
static uint64_t x245 = 29LLU;
static int64_t x250 = 825054774745018LL;
volatile int32_t t65 = -5;
int64_t x265 = INT64_MIN;
uint32_t x271 = UINT32_MAX;
volatile int8_t x275 = INT8_MAX;
volatile int16_t x278 = INT16_MIN;
uint8_t x282 = 13U;
int8_t x284 = -5;
int32_t t72 = -4172;
static uint32_t x296 = 1357510902U;
int8_t x298 = INT8_MIN;
int16_t x303 = INT16_MIN;
int64_t x308 = INT64_MIN;
uint64_t x315 = UINT64_MAX;
int16_t x316 = -209;
int32_t t78 = 5632298;
static volatile int64_t x326 = INT64_MAX;
int64_t x327 = INT64_MAX;
int16_t x333 = INT16_MIN;
int64_t x336 = INT64_MIN;
volatile int32_t t82 = 982934;
volatile uint16_t x340 = UINT16_MAX;
static uint16_t x350 = UINT16_MAX;
static volatile uint8_t x352 = 61U;
volatile int32_t t85 = -6573;
volatile uint16_t x353 = UINT16_MAX;
volatile int32_t x354 = INT32_MIN;
volatile int16_t x355 = INT16_MIN;
volatile int32_t t87 = 0;
int16_t x373 = INT16_MAX;
static int32_t t93 = -50;
int32_t x387 = -7;
int32_t x389 = -1;
int64_t x392 = 40402075954LL;
uint32_t x395 = UINT32_MAX;
int32_t x397 = -1;
static int32_t x401 = -1;
int32_t t100 = -4;
int32_t x418 = -1;
int16_t x422 = 27;
volatile int32_t t104 = 5771;
static int32_t x444 = -1;
static int16_t x445 = INT16_MIN;
static int16_t x446 = INT16_MIN;
uint32_t x448 = 361959U;
uint8_t x449 = UINT8_MAX;
int8_t x451 = INT8_MAX;
int16_t x458 = -1;
int64_t x466 = -457231LL;
int16_t x468 = -1898;
uint16_t x474 = UINT16_MAX;
static int64_t x484 = 12773703645LL;
int16_t x486 = INT16_MAX;
volatile uint16_t x489 = 0U;
uint64_t x495 = 31364630474159LLU;
int8_t x503 = -1;
int32_t t121 = 15;
static int32_t x510 = INT32_MIN;
int8_t x514 = INT8_MIN;
volatile int32_t t125 = -248632;
volatile int64_t x521 = -1LL;
uint32_t x530 = 1U;
int32_t x536 = 136;
volatile int64_t x548 = INT64_MAX;
int32_t t132 = 0;
uint8_t x551 = 6U;
int64_t x553 = INT64_MIN;
int64_t x555 = INT64_MIN;
int16_t x560 = INT16_MIN;
uint64_t x562 = UINT64_MAX;
int64_t x564 = INT64_MAX;
uint64_t x569 = 88169321LLU;
static uint8_t x572 = UINT8_MAX;
static int32_t t138 = -43006819;
int8_t x573 = -3;
volatile int8_t x575 = 13;
int32_t t139 = -10;
int16_t x579 = -10;
volatile int8_t x584 = 0;
int8_t x587 = INT8_MIN;
int8_t x601 = INT8_MIN;
int16_t x603 = INT16_MAX;
int16_t x606 = 3;
int16_t x608 = INT16_MIN;
int8_t x609 = 5;
volatile int32_t t148 = -54;
int16_t x613 = INT16_MIN;
int8_t x614 = INT8_MIN;
volatile int32_t x631 = INT32_MIN;
int16_t x633 = 2;
int8_t x636 = INT8_MIN;
uint16_t x642 = 117U;
int8_t x647 = -5;
volatile int32_t x648 = INT32_MIN;
int32_t x651 = -30516;
int8_t x655 = -1;
volatile int32_t t159 = -182218548;
int64_t x660 = -15450495LL;
volatile int16_t x662 = INT16_MIN;
int8_t x671 = 2;
volatile uint16_t x672 = 13U;
volatile int16_t x676 = -7207;
int8_t x682 = INT8_MIN;
int16_t x684 = INT16_MAX;
int64_t x688 = INT64_MAX;
int32_t t167 = 224;
int32_t x692 = -63571;
volatile int32_t t168 = 55;
int32_t t170 = -266406116;
uint32_t x703 = UINT32_MAX;
int32_t t171 = 119060617;
volatile int32_t t173 = -656736;
uint64_t x715 = UINT64_MAX;
static int16_t x716 = INT16_MIN;
uint64_t x725 = UINT64_MAX;
int8_t x726 = 61;
int16_t x737 = -1;
volatile uint16_t x739 = 42U;
volatile int32_t t180 = -98287423;
int16_t x741 = 154;
volatile int64_t x744 = INT64_MAX;
uint8_t x750 = 64U;
volatile int8_t x751 = INT8_MAX;
int64_t x753 = 42202LL;
int16_t x755 = -1;
int32_t t184 = -38;
int32_t x764 = INT32_MAX;
int8_t x768 = 3;
int32_t x776 = -1;
static volatile int32_t t189 = -23;
int16_t x780 = 1;
volatile int32_t t190 = -749286370;
uint16_t x783 = 3814U;
int16_t x787 = -7448;
uint8_t x789 = UINT8_MAX;
int32_t t194 = 118952153;
volatile int32_t t196 = -16389;
static volatile uint16_t x806 = 29086U;
volatile int32_t t197 = 112;
volatile int32_t t198 = 4017905;
volatile int32_t t199 = 4785539;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	volatile int64_t x2 = -1LL;
	int8_t x3 = 2;
	volatile uint8_t x4 = UINT8_MAX;
	int32_t t0 = 1979917;

    t0 = ((x1|(x2%x3))<=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	static volatile int64_t x6 = -1LL;
	int8_t x7 = INT8_MIN;
	static uint64_t x8 = 4989016794679983393LLU;
	static int32_t t1 = -1;

    t1 = ((x5|(x6%x7))<=x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x9 = 114024265U;
	uint8_t x10 = 7U;
	int32_t x11 = -82556113;
	uint8_t x12 = 6U;

    t2 = ((x9|(x10%x11))<=x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x14 = INT32_MIN;
	int8_t x15 = INT8_MAX;
	int32_t x16 = 575981487;
	static volatile int32_t t3 = 3;

    t3 = ((x13|(x14%x15))<=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -1LL;
	int32_t x18 = -1;
	static uint8_t x19 = 63U;
	int16_t x20 = 0;
	volatile int32_t t4 = 307936890;

    t4 = ((x17|(x18%x19))<=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = 3284189758348LL;
	int8_t x22 = -2;
	int16_t x23 = INT16_MAX;
	volatile int32_t t5 = 248;

    t5 = ((x21|(x22%x23))<=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = UINT64_MAX;
	uint64_t x27 = 70299010630160LLU;
	uint64_t x28 = UINT64_MAX;
	static int32_t t6 = -846618504;

    t6 = ((x25|(x26%x27))<=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint8_t x29 = 2U;
	int16_t x31 = 346;
	volatile uint16_t x32 = 2650U;

    t7 = ((x29|(x30%x31))<=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = -1;
	uint8_t x34 = 104U;
	int16_t x35 = INT16_MIN;
	int16_t x36 = 0;
	volatile int32_t t8 = -2867724;

    t8 = ((x33|(x34%x35))<=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x37 = INT8_MIN;
	int64_t x38 = INT64_MIN;
	volatile int16_t x40 = 1586;
	int32_t t9 = -4493479;

    t9 = ((x37|(x38%x39))<=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MIN;
	uint32_t x42 = 0U;
	int32_t x43 = 7328612;
	int16_t x44 = INT16_MIN;

    t10 = ((x41|(x42%x43))<=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MIN;
	uint16_t x47 = UINT16_MAX;
	uint32_t x48 = 237787U;
	static volatile int32_t t11 = -24015;

    t11 = ((x45|(x46%x47))<=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x50 = UINT64_MAX;
	static int32_t x51 = -1;
	uint64_t x52 = UINT64_MAX;
	static volatile int32_t t12 = 76;

    t12 = ((x49|(x50%x51))<=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x54 = 1;
	int32_t x55 = -178;
	int32_t x56 = -1;

    t13 = ((x53|(x54%x55))<=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x59 = INT16_MIN;
	uint16_t x60 = UINT16_MAX;

    t14 = ((x57|(x58%x59))<=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = -9;
	volatile int16_t x62 = -1;
	uint32_t x63 = 499U;
	int16_t x64 = INT16_MIN;

    t15 = ((x61|(x62%x63))<=x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x65 = UINT8_MAX;
	volatile int16_t x68 = 1211;
	int32_t t16 = 186189;

    t16 = ((x65|(x66%x67))<=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = UINT16_MAX;
	uint32_t x70 = 0U;
	volatile int16_t x71 = -1;
	static int16_t x72 = -3360;
	volatile int32_t t17 = -196545;

    t17 = ((x69|(x70%x71))<=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x73 = 1897571U;
	uint64_t x74 = 7423LLU;
	volatile int8_t x75 = 3;
	int16_t x76 = INT16_MAX;
	int32_t t18 = -13;

    t18 = ((x73|(x74%x75))<=x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x77 = INT64_MIN;
	int64_t x78 = 12027821LL;
	int16_t x79 = -1419;
	uint32_t x80 = 16U;
	int32_t t19 = 2721;

    t19 = ((x77|(x78%x79))<=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x81 = -1;
	volatile uint32_t x82 = UINT32_MAX;
	int32_t x83 = 3744781;
	volatile uint8_t x84 = UINT8_MAX;
	volatile int32_t t20 = -29;

    t20 = ((x81|(x82%x83))<=x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x86 = INT8_MIN;
	int16_t x88 = INT16_MIN;

    t21 = ((x85|(x86%x87))<=x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = INT32_MAX;
	volatile int16_t x90 = INT16_MIN;
	uint16_t x91 = UINT16_MAX;
	uint64_t x92 = 15308040050720269LLU;
	int32_t t22 = -162615136;

    t22 = ((x89|(x90%x91))<=x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = INT32_MIN;
	volatile int16_t x96 = -1;
	int32_t t23 = -51536;

    t23 = ((x93|(x94%x95))<=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint32_t x97 = 15U;
	uint64_t x99 = 4LLU;
	int8_t x100 = -1;
	volatile int32_t t24 = 181;

    t24 = ((x97|(x98%x99))<=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x101 = 1U;
	static volatile int32_t x102 = INT32_MIN;
	uint32_t x103 = UINT32_MAX;
	volatile uint32_t x104 = UINT32_MAX;

    t25 = ((x101|(x102%x103))<=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x107 = INT64_MIN;
	int32_t x108 = -430971444;
	int32_t t26 = 140178;

    t26 = ((x105|(x106%x107))<=x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = UINT16_MAX;
	volatile int32_t x110 = 30;
	static volatile int16_t x111 = 1;
	int8_t x112 = INT8_MIN;
	static volatile int32_t t27 = -1;

    t27 = ((x109|(x110%x111))<=x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = -1LL;
	volatile int16_t x114 = INT16_MAX;
	uint16_t x115 = UINT16_MAX;
	static int32_t t28 = 35966472;

    t28 = ((x113|(x114%x115))<=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MAX;
	uint16_t x118 = 17U;
	int16_t x119 = INT16_MIN;
	int16_t x120 = INT16_MIN;
	int32_t t29 = -597181409;

    t29 = ((x117|(x118%x119))<=x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x121 = INT16_MIN;
	volatile uint32_t x122 = 1U;
	volatile int8_t x123 = INT8_MIN;
	static int16_t x124 = INT16_MAX;
	int32_t t30 = -6;

    t30 = ((x121|(x122%x123))<=x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x125 = 675U;
	volatile int16_t x126 = -439;
	int32_t x128 = INT32_MIN;
	static int32_t t31 = 856;

    t31 = ((x125|(x126%x127))<=x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x130 = INT32_MAX;
	uint64_t x132 = 861669309058037LLU;
	volatile int32_t t32 = -2874;

    t32 = ((x129|(x130%x131))<=x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x133 = UINT32_MAX;
	int64_t x134 = 72875767650486257LL;
	static volatile int16_t x135 = INT16_MIN;
	uint32_t x136 = UINT32_MAX;

    t33 = ((x133|(x134%x135))<=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x137 = 1U;
	int64_t x138 = INT64_MIN;
	static int32_t x139 = -1;
	int32_t x140 = INT32_MIN;

    t34 = ((x137|(x138%x139))<=x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x143 = INT8_MIN;
	uint8_t x144 = 1U;
	volatile int32_t t35 = 1;

    t35 = ((x141|(x142%x143))<=x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = INT16_MIN;
	static uint32_t x146 = 7572U;
	uint16_t x147 = 22U;
	int16_t x148 = 18;
	volatile int32_t t36 = 7229457;

    t36 = ((x145|(x146%x147))<=x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x149 = 4U;
	int8_t x150 = -1;
	uint8_t x151 = 5U;
	int16_t x152 = 1;
	int32_t t37 = 51836;

    t37 = ((x149|(x150%x151))<=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = INT64_MIN;
	static volatile int64_t x154 = INT64_MIN;
	int16_t x156 = 3;
	static int32_t t38 = 49;

    t38 = ((x153|(x154%x155))<=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint64_t x157 = 15LLU;
	volatile int32_t x158 = INT32_MIN;
	static int16_t x159 = INT16_MIN;
	uint8_t x160 = 7U;
	int32_t t39 = 1;

    t39 = ((x157|(x158%x159))<=x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x162 = INT16_MIN;
	static volatile uint32_t x163 = 251297U;
	int32_t x164 = INT32_MAX;

    t40 = ((x161|(x162%x163))<=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x165 = UINT64_MAX;
	int64_t x166 = -1LL;
	static int32_t x168 = 0;

    t41 = ((x165|(x166%x167))<=x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = -12;
	int8_t x170 = INT8_MIN;
	static uint64_t x171 = 414609653513250537LLU;
	int32_t t42 = 452446;

    t42 = ((x169|(x170%x171))<=x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = -25137702;
	static uint64_t x174 = 2190151194498232LLU;
	uint8_t x176 = UINT8_MAX;
	int32_t t43 = -19;

    t43 = ((x173|(x174%x175))<=x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x177 = INT8_MIN;
	uint16_t x178 = 0U;
	uint16_t x179 = UINT16_MAX;
	int32_t x180 = 158068;

    t44 = ((x177|(x178%x179))<=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x181 = INT16_MIN;
	volatile uint8_t x182 = UINT8_MAX;
	int64_t x184 = INT64_MIN;
	int32_t t45 = -1;

    t45 = ((x181|(x182%x183))<=x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = 3465975999742LL;
	uint16_t x187 = 1U;
	volatile int8_t x188 = 3;
	int32_t t46 = -24;

    t46 = ((x185|(x186%x187))<=x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x189 = -3;
	volatile int8_t x190 = 6;
	int32_t x191 = INT32_MAX;
	volatile int8_t x192 = INT8_MIN;

    t47 = ((x189|(x190%x191))<=x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x193 = INT8_MIN;
	uint16_t x194 = 4U;
	int16_t x195 = INT16_MIN;
	volatile uint16_t x196 = UINT16_MAX;
	static volatile int32_t t48 = -97179;

    t48 = ((x193|(x194%x195))<=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int64_t x197 = INT64_MIN;
	int32_t x198 = 75;
	volatile int32_t x200 = -1;
	int32_t t49 = 486157;

    t49 = ((x197|(x198%x199))<=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x201 = UINT64_MAX;
	int64_t x202 = -1LL;
	uint32_t x203 = 24853U;
	uint8_t x204 = 15U;
	volatile int32_t t50 = 15312;

    t50 = ((x201|(x202%x203))<=x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x206 = INT64_MIN;
	int32_t x207 = INT32_MAX;
	int16_t x208 = 3;
	int32_t t51 = -1;

    t51 = ((x205|(x206%x207))<=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = INT32_MIN;
	int64_t x210 = INT64_MAX;
	int32_t x211 = -1584254;
	uint16_t x212 = UINT16_MAX;
	int32_t t52 = 7;

    t52 = ((x209|(x210%x211))<=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = INT16_MAX;
	uint16_t x214 = 723U;
	int8_t x215 = 28;
	uint8_t x216 = UINT8_MAX;

    t53 = ((x213|(x214%x215))<=x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x218 = 1860U;
	uint64_t x220 = 955227896909LLU;
	volatile int32_t t54 = -166;

    t54 = ((x217|(x218%x219))<=x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x222 = 0LLU;
	static volatile uint64_t x223 = UINT64_MAX;
	static uint32_t x224 = UINT32_MAX;
	int32_t t55 = -113841999;

    t55 = ((x221|(x222%x223))<=x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x225 = INT8_MIN;
	int8_t x226 = -1;
	uint16_t x228 = UINT16_MAX;

    t56 = ((x225|(x226%x227))<=x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x229 = UINT32_MAX;
	int16_t x231 = INT16_MIN;
	volatile int64_t x232 = -1LL;
	volatile int32_t t57 = -448077;

    t57 = ((x229|(x230%x231))<=x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x234 = -1;
	uint8_t x235 = UINT8_MAX;
	static int64_t x236 = -1LL;
	volatile int32_t t58 = 89;

    t58 = ((x233|(x234%x235))<=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x237 = -1;
	int8_t x238 = 0;
	uint16_t x239 = 174U;
	int16_t x240 = INT16_MIN;
	volatile int32_t t59 = -79436;

    t59 = ((x237|(x238%x239))<=x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint16_t x241 = 63U;
	int32_t x243 = INT32_MIN;
	uint16_t x244 = UINT16_MAX;
	static int32_t t60 = 43161;

    t60 = ((x241|(x242%x243))<=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x246 = 2739776272LLU;
	uint16_t x247 = UINT16_MAX;
	int8_t x248 = INT8_MIN;
	volatile int32_t t61 = 4219;

    t61 = ((x245|(x246%x247))<=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = INT32_MIN;
	uint16_t x251 = UINT16_MAX;
	uint16_t x252 = 10833U;
	int32_t t62 = 769036583;

    t62 = ((x249|(x250%x251))<=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = INT64_MIN;
	static volatile int64_t x254 = INT64_MAX;
	volatile uint16_t x255 = UINT16_MAX;
	static int32_t x256 = INT32_MAX;
	int32_t t63 = -482464;

    t63 = ((x253|(x254%x255))<=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int8_t x257 = -7;
	static int16_t x258 = -1;
	static int32_t x259 = INT32_MIN;
	int32_t x260 = -3;
	volatile int32_t t64 = -20;

    t64 = ((x257|(x258%x259))<=x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = INT64_MIN;
	int8_t x262 = INT8_MAX;
	uint64_t x263 = 1290743117LLU;
	int64_t x264 = INT64_MAX;

    t65 = ((x261|(x262%x263))<=x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x266 = INT8_MIN;
	int64_t x267 = 229280832368868124LL;
	static int16_t x268 = INT16_MIN;
	int32_t t66 = -1625578;

    t66 = ((x265|(x266%x267))<=x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = -6;
	static volatile int64_t x270 = -1LL;
	int32_t x272 = INT32_MIN;
	volatile int32_t t67 = 1457;

    t67 = ((x269|(x270%x271))<=x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x273 = INT64_MAX;
	int64_t x274 = INT64_MIN;
	int32_t x276 = -1;
	int32_t t68 = 32648;

    t68 = ((x273|(x274%x275))<=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = INT16_MAX;
	int8_t x279 = INT8_MIN;
	static int16_t x280 = INT16_MIN;
	volatile int32_t t69 = -1247;

    t69 = ((x277|(x278%x279))<=x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x281 = 3388U;
	volatile int32_t x283 = 1837536;
	int32_t t70 = 71507;

    t70 = ((x281|(x282%x283))<=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = INT8_MIN;
	volatile int64_t x286 = -256527545512815LL;
	volatile int64_t x287 = -1LL;
	volatile uint16_t x288 = 26U;
	volatile int32_t t71 = -37437;

    t71 = ((x285|(x286%x287))<=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = -1;
	static int16_t x290 = -7717;
	int32_t x291 = INT32_MIN;
	uint16_t x292 = 0U;

    t72 = ((x289|(x290%x291))<=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x293 = 1U;
	uint32_t x294 = UINT32_MAX;
	static uint16_t x295 = UINT16_MAX;
	static int32_t t73 = -2669;

    t73 = ((x293|(x294%x295))<=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x297 = INT64_MIN;
	uint32_t x299 = UINT32_MAX;
	int8_t x300 = INT8_MAX;
	volatile int32_t t74 = 258;

    t74 = ((x297|(x298%x299))<=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x301 = -1;
	volatile uint32_t x302 = 1U;
	int16_t x304 = INT16_MAX;
	volatile int32_t t75 = 467216699;

    t75 = ((x301|(x302%x303))<=x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = INT8_MAX;
	static int32_t x306 = INT32_MAX;
	uint32_t x307 = UINT32_MAX;
	int32_t t76 = -240056;

    t76 = ((x305|(x306%x307))<=x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = -124240990132130783LL;
	static int64_t x310 = -1LL;
	int64_t x311 = INT64_MIN;
	int64_t x312 = -1LL;
	volatile int32_t t77 = 3;

    t77 = ((x309|(x310%x311))<=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x313 = 2357LLU;
	volatile uint8_t x314 = UINT8_MAX;

    t78 = ((x313|(x314%x315))<=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = INT16_MIN;
	static uint64_t x318 = 3365LLU;
	uint16_t x319 = UINT16_MAX;
	volatile int16_t x320 = INT16_MAX;
	int32_t t79 = 71;

    t79 = ((x317|(x318%x319))<=x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x325 = INT8_MIN;
	uint64_t x328 = 4777049491363LLU;
	volatile int32_t t80 = 103;

    t80 = ((x325|(x326%x327))<=x328);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x329 = 430LL;
	int64_t x330 = INT64_MIN;
	volatile int16_t x331 = INT16_MIN;
	volatile int8_t x332 = INT8_MAX;
	static int32_t t81 = 1;

    t81 = ((x329|(x330%x331))<=x332);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x334 = -1;
	uint8_t x335 = UINT8_MAX;

    t82 = ((x333|(x334%x335))<=x336);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x337 = INT16_MIN;
	int16_t x338 = INT16_MIN;
	int32_t x339 = -690;
	volatile int32_t t83 = 62;

    t83 = ((x337|(x338%x339))<=x340);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x341 = 27;
	int32_t x342 = INT32_MIN;
	int32_t x343 = -1;
	int32_t x344 = INT32_MIN;
	static volatile int32_t t84 = -45771;

    t84 = ((x341|(x342%x343))<=x344);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x349 = INT32_MIN;
	int64_t x351 = 973010LL;

    t85 = ((x349|(x350%x351))<=x352);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x356 = UINT16_MAX;
	volatile int32_t t86 = -328501;

    t86 = ((x353|(x354%x355))<=x356);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x357 = INT8_MIN;
	uint8_t x358 = UINT8_MAX;
	uint32_t x359 = 370791961U;
	int16_t x360 = -1;

    t87 = ((x357|(x358%x359))<=x360);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x361 = 4432671LLU;
	int32_t x362 = INT32_MAX;
	uint8_t x363 = 1U;
	uint8_t x364 = 41U;
	volatile int32_t t88 = -8113;

    t88 = ((x361|(x362%x363))<=x364);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x365 = INT64_MIN;
	int8_t x366 = 14;
	int64_t x367 = INT64_MAX;
	int64_t x368 = 4LL;
	static volatile int32_t t89 = 2024163;

    t89 = ((x365|(x366%x367))<=x368);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x369 = UINT32_MAX;
	int64_t x370 = -4963073LL;
	int64_t x371 = -1LL;
	int16_t x372 = -4631;
	volatile int32_t t90 = -109691;

    t90 = ((x369|(x370%x371))<=x372);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x374 = INT32_MIN;
	int16_t x375 = -1;
	int32_t x376 = -3093266;
	volatile int32_t t91 = 1;

    t91 = ((x373|(x374%x375))<=x376);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x377 = 410U;
	uint32_t x378 = 1229909U;
	int8_t x379 = -1;
	uint32_t x380 = 323182533U;
	int32_t t92 = 1;

    t92 = ((x377|(x378%x379))<=x380);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x381 = 3U;
	int16_t x382 = -403;
	int16_t x383 = INT16_MAX;
	int8_t x384 = 26;

    t93 = ((x381|(x382%x383))<=x384);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x385 = -1276;
	int16_t x386 = INT16_MAX;
	uint64_t x388 = UINT64_MAX;
	int32_t t94 = -34506;

    t94 = ((x385|(x386%x387))<=x388);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint32_t x390 = 3030U;
	int32_t x391 = INT32_MIN;
	volatile int32_t t95 = -5489;

    t95 = ((x389|(x390%x391))<=x392);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x393 = -36999244837473580LL;
	int8_t x394 = -1;
	static uint16_t x396 = UINT16_MAX;
	int32_t t96 = 96;

    t96 = ((x393|(x394%x395))<=x396);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x398 = 34167406872LLU;
	int64_t x399 = INT64_MIN;
	static volatile uint64_t x400 = UINT64_MAX;
	volatile int32_t t97 = 873261;

    t97 = ((x397|(x398%x399))<=x400);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x402 = 4523U;
	static uint16_t x403 = UINT16_MAX;
	uint8_t x404 = UINT8_MAX;
	static int32_t t98 = -1;

    t98 = ((x401|(x402%x403))<=x404);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x405 = UINT16_MAX;
	static int8_t x406 = INT8_MIN;
	int8_t x407 = INT8_MAX;
	int32_t x408 = INT32_MIN;
	int32_t t99 = -80896;

    t99 = ((x405|(x406%x407))<=x408);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x409 = INT8_MAX;
	int8_t x410 = 0;
	int16_t x411 = -6;
	int16_t x412 = -1;

    t100 = ((x409|(x410%x411))<=x412);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x413 = 4U;
	uint8_t x414 = 0U;
	uint8_t x415 = 13U;
	static int8_t x416 = -1;
	int32_t t101 = 996706;

    t101 = ((x413|(x414%x415))<=x416);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x417 = 3U;
	int8_t x419 = INT8_MIN;
	uint8_t x420 = UINT8_MAX;
	int32_t t102 = 17344137;

    t102 = ((x417|(x418%x419))<=x420);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x421 = INT8_MAX;
	int8_t x423 = 1;
	int16_t x424 = INT16_MAX;
	volatile int32_t t103 = 396;

    t103 = ((x421|(x422%x423))<=x424);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x425 = INT32_MIN;
	volatile uint16_t x426 = UINT16_MAX;
	volatile uint16_t x427 = 10U;
	static int32_t x428 = INT32_MIN;

    t104 = ((x425|(x426%x427))<=x428);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x429 = INT8_MIN;
	static uint8_t x430 = 28U;
	int16_t x431 = INT16_MIN;
	volatile uint64_t x432 = 8158104674133312LLU;
	static volatile int32_t t105 = -32451750;

    t105 = ((x429|(x430%x431))<=x432);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x433 = INT16_MIN;
	int64_t x434 = 725720LL;
	static int32_t x435 = -1;
	volatile uint8_t x436 = 1U;
	volatile int32_t t106 = 2658813;

    t106 = ((x433|(x434%x435))<=x436);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x437 = 1996543026377736710LLU;
	static int16_t x438 = 7373;
	int32_t x439 = INT32_MAX;
	int32_t x440 = INT32_MIN;
	volatile int32_t t107 = 2894738;

    t107 = ((x437|(x438%x439))<=x440);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x441 = -1;
	int64_t x442 = -49443LL;
	volatile uint8_t x443 = 81U;
	int32_t t108 = 0;

    t108 = ((x441|(x442%x443))<=x444);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x447 = -1303284120973772582LL;
	static int32_t t109 = 0;

    t109 = ((x445|(x446%x447))<=x448);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint32_t x450 = 13546U;
	int8_t x452 = INT8_MAX;
	int32_t t110 = 268025;

    t110 = ((x449|(x450%x451))<=x452);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x457 = -7;
	static int32_t x459 = INT32_MAX;
	int64_t x460 = INT64_MIN;
	volatile int32_t t111 = 1;

    t111 = ((x457|(x458%x459))<=x460);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x465 = INT16_MAX;
	int16_t x467 = INT16_MIN;
	int32_t t112 = -230541495;

    t112 = ((x465|(x466%x467))<=x468);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x469 = INT8_MIN;
	static volatile int16_t x470 = -6083;
	uint64_t x471 = UINT64_MAX;
	int8_t x472 = INT8_MAX;
	int32_t t113 = 3310774;

    t113 = ((x469|(x470%x471))<=x472);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x473 = INT32_MIN;
	uint64_t x475 = UINT64_MAX;
	static int64_t x476 = INT64_MIN;
	int32_t t114 = -13;

    t114 = ((x473|(x474%x475))<=x476);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x477 = 94152205152791LLU;
	static volatile int64_t x478 = -1LL;
	uint16_t x479 = UINT16_MAX;
	uint16_t x480 = UINT16_MAX;
	volatile int32_t t115 = 17038;

    t115 = ((x477|(x478%x479))<=x480);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x481 = -1LL;
	volatile int32_t x482 = -1;
	int8_t x483 = INT8_MIN;
	int32_t t116 = -458381393;

    t116 = ((x481|(x482%x483))<=x484);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x485 = INT16_MIN;
	volatile uint64_t x487 = UINT64_MAX;
	static uint16_t x488 = 1928U;
	int32_t t117 = -3305;

    t117 = ((x485|(x486%x487))<=x488);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x490 = INT64_MAX;
	uint16_t x491 = 14477U;
	int64_t x492 = INT64_MIN;
	volatile int32_t t118 = 313118679;

    t118 = ((x489|(x490%x491))<=x492);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x493 = INT8_MIN;
	int16_t x494 = INT16_MIN;
	static uint16_t x496 = UINT16_MAX;
	static volatile int32_t t119 = 333;

    t119 = ((x493|(x494%x495))<=x496);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x497 = 108U;
	int32_t x498 = INT32_MAX;
	volatile int32_t x499 = INT32_MIN;
	int16_t x500 = INT16_MIN;
	int32_t t120 = -9056;

    t120 = ((x497|(x498%x499))<=x500);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x501 = 123779LLU;
	int16_t x502 = INT16_MAX;
	static volatile int8_t x504 = INT8_MAX;

    t121 = ((x501|(x502%x503))<=x504);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x505 = INT16_MIN;
	uint64_t x506 = 125324525LLU;
	volatile int16_t x507 = INT16_MIN;
	static volatile int16_t x508 = INT16_MIN;
	int32_t t122 = 0;

    t122 = ((x505|(x506%x507))<=x508);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x509 = INT16_MIN;
	uint32_t x511 = 48537542U;
	int8_t x512 = -1;
	int32_t t123 = -13682;

    t123 = ((x509|(x510%x511))<=x512);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x513 = 30;
	uint64_t x515 = UINT64_MAX;
	int32_t x516 = -1;
	volatile int32_t t124 = 62809;

    t124 = ((x513|(x514%x515))<=x516);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x517 = INT16_MIN;
	uint32_t x518 = UINT32_MAX;
	volatile uint64_t x519 = UINT64_MAX;
	volatile uint32_t x520 = 498088037U;

    t125 = ((x517|(x518%x519))<=x520);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x522 = INT16_MAX;
	static int8_t x523 = -34;
	uint32_t x524 = UINT32_MAX;
	volatile int32_t t126 = 4553;

    t126 = ((x521|(x522%x523))<=x524);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x525 = -1;
	int32_t x526 = INT32_MAX;
	volatile int64_t x527 = 28607790824955598LL;
	int64_t x528 = -5425LL;
	static volatile int32_t t127 = 278;

    t127 = ((x525|(x526%x527))<=x528);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x529 = INT8_MIN;
	volatile int64_t x531 = INT64_MIN;
	static int8_t x532 = INT8_MIN;
	volatile int32_t t128 = -990656;

    t128 = ((x529|(x530%x531))<=x532);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x533 = INT64_MAX;
	uint32_t x534 = UINT32_MAX;
	uint8_t x535 = 48U;
	int32_t t129 = 293499476;

    t129 = ((x533|(x534%x535))<=x536);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x537 = -19072;
	static int32_t x538 = INT32_MAX;
	int16_t x539 = INT16_MIN;
	int8_t x540 = 4;
	int32_t t130 = 982149;

    t130 = ((x537|(x538%x539))<=x540);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x541 = UINT8_MAX;
	int16_t x542 = INT16_MIN;
	volatile int32_t x543 = -296;
	static uint32_t x544 = 1021U;
	volatile int32_t t131 = -268075607;

    t131 = ((x541|(x542%x543))<=x544);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x545 = -1LL;
	static int64_t x546 = INT64_MAX;
	int64_t x547 = -1026281603674273832LL;

    t132 = ((x545|(x546%x547))<=x548);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x549 = 2669LLU;
	uint16_t x550 = 24U;
	int16_t x552 = INT16_MIN;
	int32_t t133 = 508585645;

    t133 = ((x549|(x550%x551))<=x552);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x554 = -1;
	int32_t x556 = INT32_MIN;
	static volatile int32_t t134 = 39758322;

    t134 = ((x553|(x554%x555))<=x556);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x557 = -706;
	int16_t x558 = -16358;
	int32_t x559 = INT32_MIN;
	volatile int32_t t135 = -13001545;

    t135 = ((x557|(x558%x559))<=x560);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x561 = 5U;
	int16_t x563 = INT16_MAX;
	volatile int32_t t136 = -50806598;

    t136 = ((x561|(x562%x563))<=x564);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x565 = 465272;
	int16_t x566 = INT16_MAX;
	int64_t x567 = INT64_MIN;
	uint64_t x568 = 871501329111957788LLU;
	volatile int32_t t137 = -2505;

    t137 = ((x565|(x566%x567))<=x568);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint32_t x570 = UINT32_MAX;
	static uint8_t x571 = UINT8_MAX;

    t138 = ((x569|(x570%x571))<=x572);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x574 = INT32_MAX;
	volatile int32_t x576 = INT32_MIN;

    t139 = ((x573|(x574%x575))<=x576);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x577 = -10674347;
	volatile uint8_t x578 = UINT8_MAX;
	volatile int64_t x580 = INT64_MAX;
	volatile int32_t t140 = 1;

    t140 = ((x577|(x578%x579))<=x580);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x581 = INT32_MIN;
	volatile int64_t x582 = INT64_MAX;
	int32_t x583 = INT32_MIN;
	volatile int32_t t141 = 190496;

    t141 = ((x581|(x582%x583))<=x584);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x585 = 249;
	uint32_t x586 = 1308348450U;
	static int64_t x588 = INT64_MIN;
	int32_t t142 = 643211287;

    t142 = ((x585|(x586%x587))<=x588);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x589 = -11508;
	int8_t x590 = -22;
	int32_t x591 = INT32_MIN;
	static int16_t x592 = INT16_MIN;
	int32_t t143 = 3563886;

    t143 = ((x589|(x590%x591))<=x592);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x593 = 6;
	int16_t x594 = -91;
	int8_t x595 = INT8_MIN;
	static uint32_t x596 = 51U;
	int32_t t144 = 6;

    t144 = ((x593|(x594%x595))<=x596);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x597 = 22;
	volatile int32_t x598 = -1;
	volatile uint8_t x599 = 74U;
	uint16_t x600 = 179U;
	int32_t t145 = -7723007;

    t145 = ((x597|(x598%x599))<=x600);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x602 = 0U;
	uint32_t x604 = 12240U;
	int32_t t146 = 63114251;

    t146 = ((x601|(x602%x603))<=x604);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x605 = 3255193193088LLU;
	volatile uint64_t x607 = 9087955359780372925LLU;
	static volatile int32_t t147 = -19;

    t147 = ((x605|(x606%x607))<=x608);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x610 = INT64_MIN;
	int64_t x611 = INT64_MIN;
	uint16_t x612 = UINT16_MAX;

    t148 = ((x609|(x610%x611))<=x612);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x615 = UINT32_MAX;
	static int32_t x616 = INT32_MIN;
	static volatile int32_t t149 = -76967612;

    t149 = ((x613|(x614%x615))<=x616);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x617 = UINT64_MAX;
	uint32_t x618 = 56493U;
	static volatile int8_t x619 = 24;
	uint8_t x620 = 0U;
	volatile int32_t t150 = 7;

    t150 = ((x617|(x618%x619))<=x620);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x621 = INT8_MIN;
	int32_t x622 = INT32_MIN;
	static volatile int64_t x623 = INT64_MIN;
	volatile int16_t x624 = 2870;
	int32_t t151 = 194195364;

    t151 = ((x621|(x622%x623))<=x624);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x625 = 446190U;
	volatile uint8_t x626 = UINT8_MAX;
	uint8_t x627 = UINT8_MAX;
	int16_t x628 = -1;
	int32_t t152 = 5;

    t152 = ((x625|(x626%x627))<=x628);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x629 = -1;
	uint64_t x630 = 2069388529980LLU;
	static volatile int8_t x632 = -4;
	static volatile int32_t t153 = -1579353;

    t153 = ((x629|(x630%x631))<=x632);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x634 = -1;
	static uint64_t x635 = 3270LLU;
	int32_t t154 = 6958;

    t154 = ((x633|(x634%x635))<=x636);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x637 = -31;
	int64_t x638 = INT64_MIN;
	static uint64_t x639 = 7181LLU;
	int64_t x640 = INT64_MAX;
	int32_t t155 = -31885910;

    t155 = ((x637|(x638%x639))<=x640);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x641 = UINT64_MAX;
	uint16_t x643 = UINT16_MAX;
	uint8_t x644 = 6U;
	int32_t t156 = 7;

    t156 = ((x641|(x642%x643))<=x644);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x645 = INT32_MIN;
	uint16_t x646 = UINT16_MAX;
	volatile int32_t t157 = -2;

    t157 = ((x645|(x646%x647))<=x648);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x649 = 3U;
	int32_t x650 = INT32_MIN;
	volatile uint32_t x652 = 75413U;
	volatile int32_t t158 = 190386440;

    t158 = ((x649|(x650%x651))<=x652);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x653 = UINT16_MAX;
	int32_t x654 = INT32_MIN;
	int8_t x656 = INT8_MAX;

    t159 = ((x653|(x654%x655))<=x656);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint64_t x657 = 34944LLU;
	int32_t x658 = INT32_MIN;
	int16_t x659 = 239;
	static int32_t t160 = 11480511;

    t160 = ((x657|(x658%x659))<=x660);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x661 = 12;
	int32_t x663 = INT32_MAX;
	static uint32_t x664 = UINT32_MAX;
	volatile int32_t t161 = -100713195;

    t161 = ((x661|(x662%x663))<=x664);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x665 = INT64_MIN;
	volatile uint32_t x666 = UINT32_MAX;
	static int32_t x667 = 6;
	int16_t x668 = 2;
	volatile int32_t t162 = 167;

    t162 = ((x665|(x666%x667))<=x668);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x669 = INT16_MIN;
	static uint64_t x670 = 2747014020LLU;
	volatile int32_t t163 = 8638485;

    t163 = ((x669|(x670%x671))<=x672);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x673 = 13;
	int16_t x674 = 8598;
	volatile int16_t x675 = INT16_MAX;
	int32_t t164 = -287646750;

    t164 = ((x673|(x674%x675))<=x676);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x677 = 285U;
	static uint8_t x678 = 0U;
	static int16_t x679 = INT16_MIN;
	int16_t x680 = INT16_MAX;
	static int32_t t165 = 143183050;

    t165 = ((x677|(x678%x679))<=x680);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x681 = INT8_MAX;
	static uint64_t x683 = 5621230928LLU;
	volatile int32_t t166 = -20;

    t166 = ((x681|(x682%x683))<=x684);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x685 = -1;
	int16_t x686 = INT16_MAX;
	volatile int16_t x687 = INT16_MIN;

    t167 = ((x685|(x686%x687))<=x688);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x689 = 7612U;
	volatile int64_t x690 = INT64_MAX;
	volatile int64_t x691 = INT64_MIN;

    t168 = ((x689|(x690%x691))<=x692);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x693 = 3U;
	static uint32_t x694 = 3880043U;
	static uint64_t x695 = 30332735LLU;
	uint8_t x696 = UINT8_MAX;
	int32_t t169 = 16298;

    t169 = ((x693|(x694%x695))<=x696);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x697 = -1;
	volatile int8_t x698 = INT8_MIN;
	static int64_t x699 = -56614639415LL;
	int32_t x700 = 0;

    t170 = ((x697|(x698%x699))<=x700);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x701 = INT16_MIN;
	int64_t x702 = INT64_MIN;
	int32_t x704 = 4;

    t171 = ((x701|(x702%x703))<=x704);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x705 = -1LL;
	uint64_t x706 = 6912248787LLU;
	int32_t x707 = INT32_MIN;
	static uint32_t x708 = 1713U;
	volatile int32_t t172 = -73777;

    t172 = ((x705|(x706%x707))<=x708);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x709 = 1;
	int16_t x710 = -1;
	int32_t x711 = INT32_MIN;
	int8_t x712 = -1;

    t173 = ((x709|(x710%x711))<=x712);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x713 = 27U;
	static int8_t x714 = 14;
	int32_t t174 = -13176;

    t174 = ((x713|(x714%x715))<=x716);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x717 = INT16_MIN;
	static volatile int8_t x718 = INT8_MIN;
	volatile uint8_t x719 = 6U;
	uint16_t x720 = 1U;
	static volatile int32_t t175 = -113;

    t175 = ((x717|(x718%x719))<=x720);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x721 = INT64_MAX;
	static int16_t x722 = INT16_MIN;
	int16_t x723 = INT16_MAX;
	int8_t x724 = -1;
	volatile int32_t t176 = -310080;

    t176 = ((x721|(x722%x723))<=x724);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x727 = INT8_MIN;
	volatile int8_t x728 = -1;
	volatile int32_t t177 = -428679;

    t177 = ((x725|(x726%x727))<=x728);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x729 = 1;
	static uint32_t x730 = 21943994U;
	uint8_t x731 = UINT8_MAX;
	static uint16_t x732 = 25U;
	static volatile int32_t t178 = -1540;

    t178 = ((x729|(x730%x731))<=x732);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x733 = INT16_MIN;
	int16_t x734 = INT16_MIN;
	int64_t x735 = INT64_MIN;
	int32_t x736 = -145522;
	int32_t t179 = 240816151;

    t179 = ((x733|(x734%x735))<=x736);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x738 = INT32_MIN;
	int64_t x740 = INT64_MIN;

    t180 = ((x737|(x738%x739))<=x740);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x742 = -1;
	uint16_t x743 = 171U;
	int32_t t181 = -185;

    t181 = ((x741|(x742%x743))<=x744);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x745 = INT64_MAX;
	uint16_t x746 = 882U;
	uint8_t x747 = 69U;
	int8_t x748 = -4;
	int32_t t182 = 285;

    t182 = ((x745|(x746%x747))<=x748);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x749 = INT64_MIN;
	int32_t x752 = -1;
	volatile int32_t t183 = 1667;

    t183 = ((x749|(x750%x751))<=x752);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x754 = INT16_MAX;
	static uint16_t x756 = 3383U;

    t184 = ((x753|(x754%x755))<=x756);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x757 = UINT16_MAX;
	int64_t x758 = INT64_MIN;
	int32_t x759 = -1;
	static volatile uint16_t x760 = 51U;
	int32_t t185 = 294996163;

    t185 = ((x757|(x758%x759))<=x760);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x761 = INT32_MIN;
	int32_t x762 = 484;
	uint8_t x763 = 2U;
	volatile int32_t t186 = 3562642;

    t186 = ((x761|(x762%x763))<=x764);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x765 = -1;
	int64_t x766 = 0LL;
	int64_t x767 = INT64_MIN;
	int32_t t187 = 17;

    t187 = ((x765|(x766%x767))<=x768);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x769 = INT32_MAX;
	int64_t x770 = INT64_MIN;
	int16_t x771 = INT16_MIN;
	uint8_t x772 = 24U;
	int32_t t188 = -3717;

    t188 = ((x769|(x770%x771))<=x772);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x773 = INT64_MIN;
	volatile int32_t x774 = -27384;
	int64_t x775 = INT64_MIN;

    t189 = ((x773|(x774%x775))<=x776);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x777 = 26121755467LLU;
	int64_t x778 = -2848105889139LL;
	int8_t x779 = INT8_MAX;

    t190 = ((x777|(x778%x779))<=x780);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x781 = -1982;
	int16_t x782 = -1;
	volatile int8_t x784 = -1;
	static volatile int32_t t191 = -278524179;

    t191 = ((x781|(x782%x783))<=x784);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x785 = -153;
	int8_t x786 = 20;
	volatile int16_t x788 = INT16_MIN;
	static int32_t t192 = -188;

    t192 = ((x785|(x786%x787))<=x788);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x790 = UINT8_MAX;
	uint16_t x791 = UINT16_MAX;
	int32_t x792 = -56;
	static int32_t t193 = -1;

    t193 = ((x789|(x790%x791))<=x792);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint32_t x793 = 894548U;
	static uint32_t x794 = 67076358U;
	int16_t x795 = 188;
	int16_t x796 = -1;

    t194 = ((x793|(x794%x795))<=x796);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x797 = INT16_MIN;
	volatile int16_t x798 = INT16_MAX;
	static uint16_t x799 = 15600U;
	int16_t x800 = INT16_MAX;
	static int32_t t195 = 8;

    t195 = ((x797|(x798%x799))<=x800);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x801 = 2;
	int64_t x802 = -1LL;
	uint8_t x803 = 1U;
	volatile int64_t x804 = INT64_MIN;

    t196 = ((x801|(x802%x803))<=x804);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x805 = 0LL;
	int16_t x807 = -1;
	int8_t x808 = 1;

    t197 = ((x805|(x806%x807))<=x808);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x809 = -1;
	int32_t x810 = INT32_MIN;
	int8_t x811 = INT8_MIN;
	uint8_t x812 = UINT8_MAX;

    t198 = ((x809|(x810%x811))<=x812);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x813 = INT32_MAX;
	int8_t x814 = INT8_MAX;
	uint16_t x815 = 1U;
	int32_t x816 = INT32_MIN;

    t199 = ((x813|(x814%x815))<=x816);

    if (t199 != 0) { NG(); } else { ; }
	
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

