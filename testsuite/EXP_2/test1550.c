
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

int32_t x9 = -1;
int8_t x12 = INT8_MIN;
int8_t x14 = INT8_MAX;
int32_t x15 = INT32_MIN;
int16_t x19 = INT16_MAX;
volatile uint8_t x24 = 23U;
int8_t x31 = 0;
int8_t x33 = -48;
volatile int32_t x41 = INT32_MIN;
int32_t x42 = INT32_MAX;
static int32_t x44 = -1;
int64_t x48 = -55064504LL;
int8_t x49 = 7;
int8_t x56 = INT8_MIN;
int8_t x63 = INT8_MIN;
int8_t x64 = INT8_MIN;
int32_t x65 = -1;
int8_t x68 = INT8_MIN;
volatile int32_t x69 = INT32_MAX;
static volatile int32_t t17 = -20686;
int16_t x75 = -1;
static int16_t x77 = -1;
static int32_t t19 = -9950899;
int64_t x83 = -21662LL;
uint16_t x92 = 8U;
int8_t x94 = 1;
int16_t x96 = 0;
volatile int8_t x107 = INT8_MIN;
uint8_t x127 = 1U;
volatile int16_t x136 = INT16_MIN;
volatile int64_t x137 = 5LL;
static int16_t x149 = -9709;
uint64_t x154 = 10LLU;
volatile int16_t x157 = -1;
uint8_t x161 = UINT8_MAX;
int8_t x164 = -39;
volatile int32_t x168 = 0;
int16_t x172 = -2;
int32_t t43 = -419086417;
static int16_t x178 = INT16_MAX;
volatile int32_t t46 = 1;
int32_t x192 = -1;
int8_t x201 = -1;
int16_t x204 = -6951;
int64_t x209 = 2268173533968711145LL;
int8_t x210 = INT8_MIN;
int64_t x220 = -1LL;
int16_t x221 = 309;
volatile int32_t t55 = 226695;
int32_t t56 = -276127282;
int32_t x234 = -66;
static volatile int32_t t58 = -1377543;
int64_t x241 = -1LL;
static int64_t x248 = INT64_MIN;
int32_t t61 = -30928067;
uint16_t x250 = 1U;
static volatile int32_t x254 = -1;
uint32_t x259 = 190262U;
int16_t x260 = INT16_MIN;
int8_t x261 = INT8_MIN;
static volatile int32_t x264 = -1;
int32_t t65 = -727662149;
int32_t t67 = -107530929;
int64_t x273 = INT64_MIN;
static int8_t x274 = INT8_MAX;
int32_t x281 = INT32_MIN;
int32_t t71 = 2252808;
int32_t x293 = INT32_MIN;
static int16_t x311 = INT16_MIN;
volatile int32_t t77 = 1443174;
uint64_t x321 = 742587711299LLU;
static volatile int16_t x326 = INT16_MIN;
uint32_t x329 = 26692367U;
volatile int32_t t83 = 100452282;
volatile int32_t t84 = -1;
int32_t x342 = INT32_MAX;
int16_t x344 = INT16_MIN;
int32_t t86 = 1;
static uint64_t x349 = 966843927LLU;
uint16_t x353 = 257U;
uint8_t x354 = 0U;
static uint32_t x357 = UINT32_MAX;
uint8_t x361 = UINT8_MAX;
static volatile int32_t x369 = INT32_MIN;
int16_t x375 = -1;
int64_t x376 = -10LL;
int64_t x377 = -227468664014048LL;
int16_t x387 = -1;
static volatile uint8_t x390 = UINT8_MAX;
static uint32_t x393 = UINT32_MAX;
int8_t x395 = INT8_MIN;
volatile int32_t t99 = -48545;
volatile uint32_t x404 = 557U;
uint64_t x406 = UINT64_MAX;
uint32_t x408 = 1560U;
volatile int32_t t101 = 95082;
uint16_t x414 = 98U;
int32_t t103 = 164703878;
uint8_t x418 = 1U;
static int8_t x422 = INT8_MIN;
static volatile int16_t x426 = 459;
int64_t x433 = -1LL;
uint32_t x434 = 1165056U;
static int32_t t109 = 1252614;
int8_t x441 = INT8_MIN;
static int32_t t112 = -38;
int16_t x458 = -1;
int8_t x465 = -1;
volatile uint16_t x469 = 6409U;
volatile int64_t x480 = INT64_MIN;
int64_t x481 = -1LL;
static volatile int32_t t120 = 94579;
int32_t t121 = -121;
uint8_t x497 = UINT8_MAX;
volatile int32_t t124 = 37532;
int16_t x501 = 1;
static volatile uint64_t x506 = 491120216LLU;
int32_t t126 = -1085052;
static int8_t x510 = INT8_MIN;
int64_t x515 = -112502LL;
volatile int32_t x520 = -210992337;
volatile int64_t x530 = -1LL;
int16_t x531 = 7784;
int64_t x532 = 11773283LL;
volatile int32_t t135 = 0;
uint32_t x546 = 1063793389U;
static int64_t x549 = 484550867210309104LL;
volatile int64_t x550 = -2986968534LL;
uint8_t x555 = UINT8_MAX;
static volatile int32_t t138 = -1353124;
static int32_t t139 = 27208797;
int64_t x563 = 39911LL;
uint16_t x566 = 8829U;
int32_t x576 = INT32_MIN;
int32_t x578 = INT32_MAX;
volatile int32_t t145 = 22549;
static int32_t x588 = INT32_MIN;
static uint64_t x590 = UINT64_MAX;
int32_t t148 = 2;
int64_t x609 = 1660743LL;
static uint16_t x611 = UINT16_MAX;
uint64_t x612 = UINT64_MAX;
uint64_t x613 = 693962457397107197LLU;
volatile uint16_t x617 = 53U;
int64_t x619 = -45125285271959LL;
uint32_t x620 = 290775U;
int16_t x621 = INT16_MAX;
static volatile uint16_t x622 = UINT16_MAX;
static int16_t x623 = -16;
static volatile int32_t x624 = INT32_MIN;
int32_t t155 = 30;
static int8_t x625 = -1;
int8_t x626 = -32;
volatile int16_t x628 = -1;
int8_t x629 = INT8_MAX;
uint16_t x630 = 1U;
int32_t x634 = INT32_MAX;
int64_t x636 = 56080599264692115LL;
volatile int32_t t158 = -108491;
int32_t x637 = INT32_MAX;
uint64_t x639 = 470LLU;
int32_t x644 = -1408902;
int16_t x649 = INT16_MIN;
int32_t t162 = 779639496;
volatile int8_t x655 = INT8_MIN;
uint32_t x668 = 111817660U;
int32_t t166 = 17977;
volatile int64_t x671 = INT64_MIN;
int64_t x674 = -522601345880LL;
int8_t x676 = INT8_MIN;
int32_t t172 = 0;
volatile uint64_t x693 = 99LLU;
uint16_t x694 = 6U;
volatile int8_t x695 = 0;
uint16_t x705 = 22990U;
int64_t x713 = INT64_MAX;
static int8_t x717 = INT8_MIN;
int16_t x725 = -1;
volatile int64_t x726 = INT64_MAX;
uint64_t x728 = 403299097865LLU;
int32_t t181 = -5;
static volatile int32_t x729 = -1;
uint16_t x730 = 341U;
int64_t x732 = INT64_MAX;
int32_t t182 = 0;
int32_t x735 = INT32_MAX;
static int32_t t183 = -2833775;
int64_t x738 = INT64_MAX;
int64_t x739 = -1LL;
int32_t t184 = 5999;
volatile uint64_t x743 = UINT64_MAX;
int8_t x744 = 0;
volatile int32_t t185 = 317;
int32_t x747 = 3330;
int32_t x749 = 24172284;
volatile uint32_t x751 = 912449761U;
volatile int8_t x752 = 6;
uint64_t x757 = 31515167422876593LLU;
int32_t x759 = INT32_MIN;
uint32_t x762 = 715U;
static int16_t x763 = INT16_MAX;
int8_t x764 = INT8_MIN;
int32_t t191 = -236468782;
volatile int32_t t193 = 1;
int64_t x782 = INT64_MAX;
int32_t t195 = -2;
int32_t x789 = -1;
int16_t x792 = INT16_MAX;
uint8_t x796 = 108U;
volatile int32_t t198 = 1;
int16_t x797 = INT16_MIN;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	int64_t x2 = -600006713290837LL;
	int64_t x3 = -1LL;
	static int16_t x4 = 59;
	volatile int32_t t0 = -1443;

    t0 = ((x1|(x2==x3))<=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = UINT32_MAX;
	int64_t x6 = INT64_MIN;
	uint32_t x7 = UINT32_MAX;
	int64_t x8 = INT64_MIN;
	volatile int32_t t1 = 518092672;

    t1 = ((x5|(x6==x7))<=x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x10 = INT16_MAX;
	static volatile int64_t x11 = 227267LL;
	volatile int32_t t2 = 179143;

    t2 = ((x9|(x10==x11))<=x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -37;
	volatile int32_t x16 = INT32_MIN;
	volatile int32_t t3 = 191;

    t3 = ((x13|(x14==x15))<=x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = -1895LL;
	uint64_t x18 = UINT64_MAX;
	volatile int8_t x20 = INT8_MIN;
	volatile int32_t t4 = 0;

    t4 = ((x17|(x18==x19))<=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MAX;
	uint32_t x22 = 43U;
	int8_t x23 = 3;
	static volatile int32_t t5 = -1;

    t5 = ((x21|(x22==x23))<=x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = UINT64_MAX;
	uint64_t x26 = UINT64_MAX;
	volatile uint64_t x27 = 45207107950LLU;
	volatile int16_t x28 = INT16_MIN;
	static volatile int32_t t6 = 10853;

    t6 = ((x25|(x26==x27))<=x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 0U;
	uint64_t x30 = UINT64_MAX;
	volatile int16_t x32 = -30;
	int32_t t7 = -41;

    t7 = ((x29|(x30==x31))<=x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint64_t x34 = UINT64_MAX;
	static int16_t x35 = -115;
	volatile int16_t x36 = INT16_MAX;
	int32_t t8 = -1433;

    t8 = ((x33|(x34==x35))<=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x37 = -10162;
	int64_t x38 = INT64_MIN;
	int64_t x39 = -28006104998LL;
	int8_t x40 = INT8_MIN;
	volatile int32_t t9 = 143;

    t9 = ((x37|(x38==x39))<=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x43 = INT8_MIN;
	volatile int32_t t10 = 11;

    t10 = ((x41|(x42==x43))<=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MAX;
	uint64_t x46 = 5596857LLU;
	uint16_t x47 = UINT16_MAX;
	int32_t t11 = 1;

    t11 = ((x45|(x46==x47))<=x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x50 = INT32_MAX;
	uint32_t x51 = UINT32_MAX;
	int8_t x52 = 1;
	volatile int32_t t12 = 79;

    t12 = ((x49|(x50==x51))<=x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = 16657356U;
	int32_t x54 = -1;
	static volatile int64_t x55 = INT64_MIN;
	volatile int32_t t13 = -1970232;

    t13 = ((x53|(x54==x55))<=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x57 = INT32_MIN;
	uint8_t x58 = UINT8_MAX;
	static int64_t x59 = -1LL;
	static volatile uint32_t x60 = UINT32_MAX;
	int32_t t14 = 1459147;

    t14 = ((x57|(x58==x59))<=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = -1;
	int16_t x62 = -3;
	volatile int32_t t15 = -7131470;

    t15 = ((x61|(x62==x63))<=x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint64_t x66 = 0LLU;
	int8_t x67 = INT8_MAX;
	volatile int32_t t16 = -115360;

    t16 = ((x65|(x66==x67))<=x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x70 = -47;
	int64_t x71 = INT64_MIN;
	uint8_t x72 = UINT8_MAX;

    t17 = ((x69|(x70==x71))<=x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = UINT16_MAX;
	static volatile int64_t x74 = -1290799427427798LL;
	int32_t x76 = INT32_MAX;
	volatile int32_t t18 = 202689;

    t18 = ((x73|(x74==x75))<=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x78 = 14379852LLU;
	volatile int32_t x79 = -1;
	int16_t x80 = -13213;

    t19 = ((x77|(x78==x79))<=x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = 769U;
	static uint64_t x82 = UINT64_MAX;
	int16_t x84 = INT16_MIN;
	static volatile int32_t t20 = -50662;

    t20 = ((x81|(x82==x83))<=x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = 51;
	uint8_t x86 = UINT8_MAX;
	uint16_t x87 = UINT16_MAX;
	static int32_t x88 = INT32_MAX;
	volatile int32_t t21 = 10;

    t21 = ((x85|(x86==x87))<=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x89 = -1;
	int64_t x90 = INT64_MAX;
	static volatile uint32_t x91 = 42330U;
	volatile int32_t t22 = -3182229;

    t22 = ((x89|(x90==x91))<=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = 133876714440972LLU;
	int16_t x95 = -1;
	volatile int32_t t23 = 564;

    t23 = ((x93|(x94==x95))<=x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int8_t x97 = -41;
	int64_t x98 = 7338498LL;
	int32_t x99 = INT32_MAX;
	uint32_t x100 = UINT32_MAX;
	int32_t t24 = -66;

    t24 = ((x97|(x98==x99))<=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = -1LL;
	int8_t x102 = -1;
	static volatile int64_t x103 = INT64_MAX;
	static uint8_t x104 = UINT8_MAX;
	volatile int32_t t25 = 0;

    t25 = ((x101|(x102==x103))<=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x105 = INT16_MAX;
	int16_t x106 = -1366;
	uint16_t x108 = 39U;
	volatile int32_t t26 = 165;

    t26 = ((x105|(x106==x107))<=x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x109 = INT32_MIN;
	int16_t x110 = INT16_MAX;
	static uint16_t x111 = 194U;
	volatile uint32_t x112 = 1U;
	static volatile int32_t t27 = 4017239;

    t27 = ((x109|(x110==x111))<=x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = INT32_MAX;
	int16_t x114 = -4576;
	volatile int64_t x115 = 29072LL;
	int32_t x116 = INT32_MAX;
	static volatile int32_t t28 = -29821800;

    t28 = ((x113|(x114==x115))<=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = -1LL;
	int8_t x118 = -5;
	static uint8_t x119 = UINT8_MAX;
	int64_t x120 = INT64_MIN;
	volatile int32_t t29 = 73811932;

    t29 = ((x117|(x118==x119))<=x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int64_t x121 = INT64_MAX;
	int32_t x122 = INT32_MAX;
	static int32_t x123 = INT32_MAX;
	static int64_t x124 = -7180655477LL;
	volatile int32_t t30 = 795209;

    t30 = ((x121|(x122==x123))<=x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = -1;
	int8_t x126 = -1;
	int64_t x128 = INT64_MIN;
	volatile int32_t t31 = 4573266;

    t31 = ((x125|(x126==x127))<=x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x129 = UINT16_MAX;
	int32_t x130 = -1;
	uint32_t x131 = 297160U;
	uint8_t x132 = 17U;
	static volatile int32_t t32 = 34808;

    t32 = ((x129|(x130==x131))<=x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x133 = UINT16_MAX;
	int32_t x134 = INT32_MIN;
	int64_t x135 = INT64_MIN;
	volatile int32_t t33 = -25;

    t33 = ((x133|(x134==x135))<=x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x138 = INT32_MAX;
	uint16_t x139 = 1U;
	int64_t x140 = -10147LL;
	volatile int32_t t34 = 1130;

    t34 = ((x137|(x138==x139))<=x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = -54;
	volatile int32_t x142 = INT32_MIN;
	static int16_t x143 = INT16_MAX;
	uint16_t x144 = UINT16_MAX;
	volatile int32_t t35 = 38;

    t35 = ((x141|(x142==x143))<=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = INT64_MIN;
	int16_t x146 = INT16_MAX;
	volatile uint32_t x147 = 1770073262U;
	volatile uint16_t x148 = UINT16_MAX;
	volatile int32_t t36 = -15934;

    t36 = ((x145|(x146==x147))<=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x150 = INT64_MIN;
	volatile int16_t x151 = INT16_MIN;
	int16_t x152 = -1;
	volatile int32_t t37 = 48354851;

    t37 = ((x149|(x150==x151))<=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MIN;
	uint16_t x155 = 6U;
	int16_t x156 = -1;
	static volatile int32_t t38 = -464041;

    t38 = ((x153|(x154==x155))<=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x158 = 45094770U;
	int64_t x159 = INT64_MIN;
	uint16_t x160 = 1U;
	int32_t t39 = 3;

    t39 = ((x157|(x158==x159))<=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x162 = 5U;
	int32_t x163 = INT32_MAX;
	volatile int32_t t40 = 12169;

    t40 = ((x161|(x162==x163))<=x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = INT8_MIN;
	volatile int8_t x166 = -1;
	int64_t x167 = INT64_MAX;
	volatile int32_t t41 = 94;

    t41 = ((x165|(x166==x167))<=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x169 = UINT8_MAX;
	volatile uint64_t x170 = UINT64_MAX;
	int64_t x171 = INT64_MIN;
	static int32_t t42 = 33451410;

    t42 = ((x169|(x170==x171))<=x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = -1;
	int8_t x174 = INT8_MAX;
	static int64_t x175 = -1LL;
	static int8_t x176 = 1;

    t43 = ((x173|(x174==x175))<=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = 10;
	int64_t x179 = INT64_MAX;
	uint32_t x180 = 24422999U;
	static int32_t t44 = -493809;

    t44 = ((x177|(x178==x179))<=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = 1LL;
	volatile uint32_t x182 = 7489510U;
	volatile int32_t x183 = INT32_MIN;
	int16_t x184 = INT16_MAX;
	int32_t t45 = -258566237;

    t45 = ((x181|(x182==x183))<=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x185 = -9;
	static uint32_t x186 = 1U;
	static uint32_t x187 = UINT32_MAX;
	int32_t x188 = INT32_MIN;

    t46 = ((x185|(x186==x187))<=x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = -1;
	int16_t x190 = INT16_MAX;
	int8_t x191 = 1;
	volatile int32_t t47 = 125164960;

    t47 = ((x189|(x190==x191))<=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x193 = UINT32_MAX;
	static int16_t x194 = -1;
	int32_t x195 = -3;
	volatile uint8_t x196 = 24U;
	int32_t t48 = -105772708;

    t48 = ((x193|(x194==x195))<=x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = INT8_MAX;
	int8_t x198 = -32;
	uint16_t x199 = UINT16_MAX;
	int16_t x200 = -2;
	int32_t t49 = -5879947;

    t49 = ((x197|(x198==x199))<=x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x202 = UINT16_MAX;
	int32_t x203 = INT32_MAX;
	volatile int32_t t50 = -147616;

    t50 = ((x201|(x202==x203))<=x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x205 = 3U;
	volatile int16_t x206 = -1;
	int16_t x207 = INT16_MIN;
	int32_t x208 = -1;
	int32_t t51 = -47;

    t51 = ((x205|(x206==x207))<=x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x211 = -217302121098LL;
	uint16_t x212 = 1235U;
	static int32_t t52 = -82;

    t52 = ((x209|(x210==x211))<=x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MIN;
	volatile uint16_t x214 = 658U;
	uint32_t x215 = UINT32_MAX;
	static int64_t x216 = 792891476LL;
	int32_t t53 = -101609;

    t53 = ((x213|(x214==x215))<=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = INT8_MAX;
	static uint32_t x218 = 2963U;
	int64_t x219 = INT64_MAX;
	int32_t t54 = -474;

    t54 = ((x217|(x218==x219))<=x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x222 = 6;
	int64_t x223 = INT64_MIN;
	static int16_t x224 = INT16_MIN;

    t55 = ((x221|(x222==x223))<=x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = 29292;
	volatile int64_t x226 = 26036931096761489LL;
	static int64_t x227 = INT64_MIN;
	int16_t x228 = -479;

    t56 = ((x225|(x226==x227))<=x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x229 = UINT64_MAX;
	volatile uint32_t x230 = 59380291U;
	uint8_t x231 = 3U;
	static volatile int16_t x232 = 60;
	volatile int32_t t57 = -150034;

    t57 = ((x229|(x230==x231))<=x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x233 = 41636U;
	uint16_t x235 = 94U;
	int8_t x236 = INT8_MIN;

    t58 = ((x233|(x234==x235))<=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = INT8_MIN;
	int32_t x238 = -883905;
	int8_t x239 = INT8_MAX;
	int8_t x240 = -31;
	volatile int32_t t59 = -7;

    t59 = ((x237|(x238==x239))<=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x242 = UINT8_MAX;
	static int16_t x243 = INT16_MAX;
	volatile int16_t x244 = INT16_MAX;
	static int32_t t60 = -4564;

    t60 = ((x241|(x242==x243))<=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x245 = INT32_MIN;
	int16_t x246 = INT16_MAX;
	volatile int16_t x247 = -13613;

    t61 = ((x245|(x246==x247))<=x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = 32167739U;
	static int32_t x251 = -1;
	int64_t x252 = INT64_MAX;
	volatile int32_t t62 = 354133478;

    t62 = ((x249|(x250==x251))<=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x253 = 10566431U;
	static int16_t x255 = 41;
	int8_t x256 = INT8_MAX;
	volatile int32_t t63 = 2;

    t63 = ((x253|(x254==x255))<=x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x257 = INT8_MIN;
	int32_t x258 = -1;
	int32_t t64 = 23752;

    t64 = ((x257|(x258==x259))<=x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint8_t x262 = 120U;
	volatile int64_t x263 = INT64_MAX;

    t65 = ((x261|(x262==x263))<=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x265 = UINT64_MAX;
	volatile int8_t x266 = -1;
	int64_t x267 = INT64_MIN;
	static uint32_t x268 = UINT32_MAX;
	volatile int32_t t66 = -218;

    t66 = ((x265|(x266==x267))<=x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x269 = UINT32_MAX;
	int64_t x270 = INT64_MIN;
	volatile int16_t x271 = -511;
	volatile int32_t x272 = INT32_MIN;

    t67 = ((x269|(x270==x271))<=x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x275 = -1LL;
	static volatile int64_t x276 = INT64_MAX;
	volatile int32_t t68 = 1;

    t68 = ((x273|(x274==x275))<=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x277 = UINT16_MAX;
	volatile uint64_t x278 = 5775478834892033039LLU;
	volatile int64_t x279 = -1LL;
	static int8_t x280 = -1;
	volatile int32_t t69 = 23680;

    t69 = ((x277|(x278==x279))<=x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x282 = INT16_MAX;
	int64_t x283 = 10LL;
	int8_t x284 = INT8_MIN;
	int32_t t70 = -6460;

    t70 = ((x281|(x282==x283))<=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x285 = INT8_MIN;
	int32_t x286 = INT32_MAX;
	volatile int64_t x287 = INT64_MAX;
	int16_t x288 = INT16_MIN;

    t71 = ((x285|(x286==x287))<=x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = 1;
	int8_t x290 = -1;
	int64_t x291 = 19LL;
	int64_t x292 = -1LL;
	int32_t t72 = -805067;

    t72 = ((x289|(x290==x291))<=x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x294 = -1;
	uint8_t x295 = 4U;
	uint8_t x296 = 4U;
	int32_t t73 = -3;

    t73 = ((x293|(x294==x295))<=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = INT64_MAX;
	int32_t x298 = INT32_MIN;
	uint32_t x299 = UINT32_MAX;
	static int16_t x300 = INT16_MIN;
	int32_t t74 = 271965;

    t74 = ((x297|(x298==x299))<=x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = INT64_MIN;
	int64_t x302 = INT64_MIN;
	int32_t x303 = 11167192;
	int32_t x304 = 0;
	volatile int32_t t75 = 1;

    t75 = ((x301|(x302==x303))<=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = 117;
	int64_t x306 = -1LL;
	int32_t x307 = -1;
	int32_t x308 = INT32_MIN;
	volatile int32_t t76 = 5730;

    t76 = ((x305|(x306==x307))<=x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = INT64_MIN;
	int64_t x310 = -4424LL;
	int64_t x312 = 7644270540589LL;

    t77 = ((x309|(x310==x311))<=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = INT16_MIN;
	int32_t x314 = -20649;
	volatile int8_t x315 = 8;
	int32_t x316 = -1;
	volatile int32_t t78 = -73;

    t78 = ((x313|(x314==x315))<=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x317 = 284635233U;
	static int8_t x318 = INT8_MIN;
	int64_t x319 = INT64_MAX;
	int64_t x320 = INT64_MIN;
	int32_t t79 = 529433643;

    t79 = ((x317|(x318==x319))<=x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x322 = INT8_MIN;
	int64_t x323 = INT64_MIN;
	int16_t x324 = INT16_MIN;
	static int32_t t80 = 42;

    t80 = ((x321|(x322==x323))<=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x325 = UINT32_MAX;
	static int8_t x327 = -1;
	static int64_t x328 = INT64_MIN;
	int32_t t81 = 366461;

    t81 = ((x325|(x326==x327))<=x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x330 = 177504U;
	uint32_t x331 = UINT32_MAX;
	int32_t x332 = INT32_MIN;
	static int32_t t82 = -26;

    t82 = ((x329|(x330==x331))<=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = INT16_MIN;
	uint8_t x334 = 48U;
	int8_t x335 = INT8_MIN;
	static uint16_t x336 = UINT16_MAX;

    t83 = ((x333|(x334==x335))<=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x337 = -5;
	int16_t x338 = -1;
	uint64_t x339 = 25660884105LLU;
	int64_t x340 = 410497274293LL;

    t84 = ((x337|(x338==x339))<=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint8_t x341 = 0U;
	static uint16_t x343 = UINT16_MAX;
	volatile int32_t t85 = 79;

    t85 = ((x341|(x342==x343))<=x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x345 = 79811;
	volatile uint64_t x346 = 59961314363932LLU;
	int64_t x347 = INT64_MIN;
	int64_t x348 = -98186022602LL;

    t86 = ((x345|(x346==x347))<=x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x350 = UINT32_MAX;
	int8_t x351 = INT8_MAX;
	volatile int64_t x352 = INT64_MAX;
	int32_t t87 = 2;

    t87 = ((x349|(x350==x351))<=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint32_t x355 = 87794U;
	int16_t x356 = -1;
	volatile int32_t t88 = -1;

    t88 = ((x353|(x354==x355))<=x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x358 = 221U;
	int16_t x359 = -1;
	uint64_t x360 = 122LLU;
	int32_t t89 = 5056;

    t89 = ((x357|(x358==x359))<=x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x362 = -255;
	static int16_t x363 = 13;
	uint8_t x364 = 2U;
	volatile int32_t t90 = -7;

    t90 = ((x361|(x362==x363))<=x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = INT32_MIN;
	int64_t x366 = -724416909288640LL;
	static uint16_t x367 = 472U;
	uint64_t x368 = 20827096LLU;
	volatile int32_t t91 = 1086372;

    t91 = ((x365|(x366==x367))<=x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x370 = 24;
	uint32_t x371 = 68U;
	int64_t x372 = INT64_MIN;
	static int32_t t92 = -336880660;

    t92 = ((x369|(x370==x371))<=x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = INT32_MIN;
	int32_t x374 = INT32_MIN;
	volatile int32_t t93 = 11;

    t93 = ((x373|(x374==x375))<=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x378 = 878U;
	uint8_t x379 = 2U;
	int16_t x380 = INT16_MAX;
	static int32_t t94 = 0;

    t94 = ((x377|(x378==x379))<=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint64_t x381 = 1380521202831179LLU;
	int32_t x382 = INT32_MIN;
	volatile int32_t x383 = INT32_MIN;
	int16_t x384 = INT16_MIN;
	int32_t t95 = -28992742;

    t95 = ((x381|(x382==x383))<=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x385 = 5U;
	int8_t x386 = INT8_MAX;
	int64_t x388 = INT64_MAX;
	int32_t t96 = -352;

    t96 = ((x385|(x386==x387))<=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = INT64_MIN;
	int16_t x391 = INT16_MIN;
	volatile int16_t x392 = -1;
	volatile int32_t t97 = -10385052;

    t97 = ((x389|(x390==x391))<=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x394 = INT8_MAX;
	static int16_t x396 = -1;
	int32_t t98 = 57;

    t98 = ((x393|(x394==x395))<=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = 6;
	int16_t x398 = 12;
	uint32_t x399 = 1882U;
	int8_t x400 = INT8_MIN;

    t99 = ((x397|(x398==x399))<=x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint16_t x401 = 0U;
	static int16_t x402 = INT16_MIN;
	static int64_t x403 = -1LL;
	static int32_t t100 = -3118;

    t100 = ((x401|(x402==x403))<=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint16_t x405 = 31506U;
	volatile int64_t x407 = INT64_MAX;

    t101 = ((x405|(x406==x407))<=x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int16_t x409 = 131;
	int8_t x410 = -1;
	int8_t x411 = 28;
	uint16_t x412 = UINT16_MAX;
	int32_t t102 = -868052;

    t102 = ((x409|(x410==x411))<=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x413 = 2U;
	uint32_t x415 = UINT32_MAX;
	int64_t x416 = INT64_MAX;

    t103 = ((x413|(x414==x415))<=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = INT16_MIN;
	volatile int16_t x419 = -60;
	volatile uint8_t x420 = 55U;
	int32_t t104 = -549222267;

    t104 = ((x417|(x418==x419))<=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x421 = -92;
	int64_t x423 = -6290LL;
	static int16_t x424 = INT16_MIN;
	static volatile int32_t t105 = 9602979;

    t105 = ((x421|(x422==x423))<=x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x425 = 284;
	int64_t x427 = -7061469937822LL;
	uint8_t x428 = UINT8_MAX;
	volatile int32_t t106 = 168900806;

    t106 = ((x425|(x426==x427))<=x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x429 = 1U;
	uint32_t x430 = 1252U;
	volatile int64_t x431 = 816148LL;
	volatile uint8_t x432 = UINT8_MAX;
	static volatile int32_t t107 = -6;

    t107 = ((x429|(x430==x431))<=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x435 = 31U;
	volatile int32_t x436 = -1;
	int32_t t108 = 270;

    t108 = ((x433|(x434==x435))<=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = -1LL;
	int32_t x438 = INT32_MIN;
	uint32_t x439 = UINT32_MAX;
	int8_t x440 = -1;

    t109 = ((x437|(x438==x439))<=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x442 = INT32_MIN;
	int64_t x443 = INT64_MIN;
	static uint8_t x444 = 7U;
	volatile int32_t t110 = 1976080;

    t110 = ((x441|(x442==x443))<=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint8_t x445 = 3U;
	uint32_t x446 = 194709U;
	int16_t x447 = INT16_MAX;
	int8_t x448 = -1;
	static int32_t t111 = 453837;

    t111 = ((x445|(x446==x447))<=x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = 6LL;
	int8_t x450 = INT8_MIN;
	volatile int64_t x451 = INT64_MIN;
	int64_t x452 = INT64_MIN;

    t112 = ((x449|(x450==x451))<=x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = INT64_MIN;
	volatile uint32_t x454 = UINT32_MAX;
	uint16_t x455 = 5U;
	int8_t x456 = -1;
	static volatile int32_t t113 = -85780;

    t113 = ((x453|(x454==x455))<=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = 7495573LLU;
	uint8_t x459 = UINT8_MAX;
	uint8_t x460 = 0U;
	static int32_t t114 = -722;

    t114 = ((x457|(x458==x459))<=x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x461 = UINT64_MAX;
	volatile uint8_t x462 = 10U;
	int32_t x463 = INT32_MIN;
	int16_t x464 = 445;
	volatile int32_t t115 = -69998051;

    t115 = ((x461|(x462==x463))<=x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x466 = INT32_MAX;
	static uint16_t x467 = 2993U;
	volatile int8_t x468 = INT8_MIN;
	static volatile int32_t t116 = -15602;

    t116 = ((x465|(x466==x467))<=x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x470 = -48;
	static int32_t x471 = -1;
	int32_t x472 = INT32_MIN;
	int32_t t117 = 53808;

    t117 = ((x469|(x470==x471))<=x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = INT64_MAX;
	static int32_t x474 = INT32_MIN;
	volatile int8_t x475 = -8;
	int8_t x476 = -1;
	int32_t t118 = -1;

    t118 = ((x473|(x474==x475))<=x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x477 = 861703667380389LLU;
	int8_t x478 = 8;
	static int16_t x479 = INT16_MAX;
	volatile int32_t t119 = -555627;

    t119 = ((x477|(x478==x479))<=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x482 = -1;
	int16_t x483 = INT16_MAX;
	volatile int16_t x484 = INT16_MAX;

    t120 = ((x481|(x482==x483))<=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x485 = -1LL;
	int16_t x486 = INT16_MAX;
	int64_t x487 = INT64_MAX;
	volatile int32_t x488 = INT32_MIN;

    t121 = ((x485|(x486==x487))<=x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x489 = 1U;
	int64_t x490 = INT64_MIN;
	uint16_t x491 = 17969U;
	static int64_t x492 = INT64_MAX;
	int32_t t122 = 45425997;

    t122 = ((x489|(x490==x491))<=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x493 = 206822701U;
	uint8_t x494 = 1U;
	static volatile int16_t x495 = INT16_MIN;
	volatile uint16_t x496 = 1611U;
	volatile int32_t t123 = -896;

    t123 = ((x493|(x494==x495))<=x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x498 = INT64_MAX;
	int16_t x499 = INT16_MIN;
	int8_t x500 = -1;

    t124 = ((x497|(x498==x499))<=x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x502 = 8U;
	int16_t x503 = -1;
	static volatile int32_t x504 = -1;
	int32_t t125 = 40463982;

    t125 = ((x501|(x502==x503))<=x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = INT8_MIN;
	int32_t x507 = INT32_MIN;
	uint32_t x508 = 3099U;

    t126 = ((x505|(x506==x507))<=x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = INT8_MIN;
	volatile uint8_t x511 = 0U;
	volatile uint32_t x512 = UINT32_MAX;
	static int32_t t127 = -4762;

    t127 = ((x509|(x510==x511))<=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x513 = 16269189109096LL;
	int64_t x514 = 1LL;
	static uint32_t x516 = 16067U;
	volatile int32_t t128 = -21517;

    t128 = ((x513|(x514==x515))<=x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = INT16_MIN;
	static int64_t x518 = INT64_MIN;
	static int8_t x519 = INT8_MAX;
	int32_t t129 = -84979972;

    t129 = ((x517|(x518==x519))<=x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x521 = 1U;
	int8_t x522 = INT8_MIN;
	volatile uint16_t x523 = UINT16_MAX;
	uint32_t x524 = 25U;
	int32_t t130 = -59036;

    t130 = ((x521|(x522==x523))<=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = -1;
	static int16_t x526 = INT16_MIN;
	int64_t x527 = -486033053793LL;
	volatile int8_t x528 = -1;
	static volatile int32_t t131 = -730078;

    t131 = ((x525|(x526==x527))<=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x529 = INT32_MIN;
	volatile int32_t t132 = 320391;

    t132 = ((x529|(x530==x531))<=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = INT64_MIN;
	int64_t x534 = INT64_MIN;
	volatile uint32_t x535 = 44U;
	int64_t x536 = 90929715307440816LL;
	int32_t t133 = -24;

    t133 = ((x533|(x534==x535))<=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int8_t x537 = 2;
	uint16_t x538 = 1519U;
	uint8_t x539 = 103U;
	uint8_t x540 = 15U;
	int32_t t134 = 1775701;

    t134 = ((x537|(x538==x539))<=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x541 = 19U;
	int32_t x542 = -1;
	static int64_t x543 = INT64_MAX;
	uint32_t x544 = UINT32_MAX;

    t135 = ((x541|(x542==x543))<=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x545 = 530016009;
	volatile int64_t x547 = -1LL;
	volatile int8_t x548 = INT8_MAX;
	volatile int32_t t136 = -472;

    t136 = ((x545|(x546==x547))<=x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x551 = INT8_MAX;
	uint64_t x552 = 184594832399LLU;
	static int32_t t137 = 28658;

    t137 = ((x549|(x550==x551))<=x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = INT32_MIN;
	int32_t x554 = INT32_MIN;
	int8_t x556 = 14;

    t138 = ((x553|(x554==x555))<=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = -7;
	int32_t x558 = -1;
	static int64_t x559 = INT64_MIN;
	int32_t x560 = INT32_MAX;

    t139 = ((x557|(x558==x559))<=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x561 = INT64_MIN;
	int8_t x562 = INT8_MAX;
	static volatile int8_t x564 = INT8_MIN;
	int32_t t140 = 410392792;

    t140 = ((x561|(x562==x563))<=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x565 = -1LL;
	uint8_t x567 = UINT8_MAX;
	volatile int8_t x568 = 60;
	volatile int32_t t141 = -3745608;

    t141 = ((x565|(x566==x567))<=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x569 = 111U;
	int32_t x570 = INT32_MIN;
	int64_t x571 = 457483009564LL;
	static int16_t x572 = INT16_MIN;
	int32_t t142 = -273099036;

    t142 = ((x569|(x570==x571))<=x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x573 = -1LL;
	uint32_t x574 = UINT32_MAX;
	int64_t x575 = INT64_MIN;
	static int32_t t143 = 6;

    t143 = ((x573|(x574==x575))<=x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint16_t x577 = UINT16_MAX;
	uint8_t x579 = UINT8_MAX;
	static int32_t x580 = -90;
	volatile int32_t t144 = -37062606;

    t144 = ((x577|(x578==x579))<=x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = -19324884LL;
	int16_t x582 = -2083;
	int32_t x583 = 79;
	int64_t x584 = INT64_MIN;

    t145 = ((x581|(x582==x583))<=x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x585 = 539U;
	int64_t x586 = INT64_MIN;
	int32_t x587 = INT32_MAX;
	volatile int32_t t146 = -107;

    t146 = ((x585|(x586==x587))<=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = 806635LL;
	static uint32_t x591 = 610270295U;
	int64_t x592 = INT64_MAX;
	int32_t t147 = 10427;

    t147 = ((x589|(x590==x591))<=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MIN;
	volatile int16_t x594 = -1757;
	int32_t x595 = -108284965;
	volatile uint64_t x596 = 631719143LLU;

    t148 = ((x593|(x594==x595))<=x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = INT64_MIN;
	static uint16_t x598 = 1U;
	volatile int32_t x599 = -1;
	volatile uint32_t x600 = UINT32_MAX;
	volatile int32_t t149 = 0;

    t149 = ((x597|(x598==x599))<=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = INT64_MIN;
	uint8_t x602 = 15U;
	uint16_t x603 = 14U;
	static int16_t x604 = INT16_MIN;
	volatile int32_t t150 = 6928013;

    t150 = ((x601|(x602==x603))<=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x605 = INT32_MIN;
	int8_t x606 = -1;
	volatile int8_t x607 = INT8_MIN;
	uint8_t x608 = 82U;
	volatile int32_t t151 = 2;

    t151 = ((x605|(x606==x607))<=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int8_t x610 = -1;
	int32_t t152 = -9277;

    t152 = ((x609|(x610==x611))<=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x614 = -21;
	uint64_t x615 = 3LLU;
	static uint64_t x616 = 29825327725424LLU;
	int32_t t153 = -47142610;

    t153 = ((x613|(x614==x615))<=x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x618 = 6U;
	int32_t t154 = 77363;

    t154 = ((x617|(x618==x619))<=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    

    t155 = ((x621|(x622==x623))<=x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x627 = -1;
	volatile int32_t t156 = -1872;

    t156 = ((x625|(x626==x627))<=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x631 = INT64_MIN;
	int16_t x632 = INT16_MIN;
	int32_t t157 = -1;

    t157 = ((x629|(x630==x631))<=x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x633 = INT64_MAX;
	int16_t x635 = -13161;

    t158 = ((x633|(x634==x635))<=x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x638 = -1LL;
	static int8_t x640 = -14;
	int32_t t159 = 2;

    t159 = ((x637|(x638==x639))<=x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = INT32_MAX;
	int16_t x642 = -14732;
	int64_t x643 = INT64_MIN;
	int32_t t160 = -206;

    t160 = ((x641|(x642==x643))<=x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x645 = 3390U;
	int8_t x646 = INT8_MIN;
	int64_t x647 = INT64_MAX;
	uint16_t x648 = UINT16_MAX;
	static int32_t t161 = 7335352;

    t161 = ((x645|(x646==x647))<=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x650 = 38229261930769LLU;
	volatile uint32_t x651 = 81U;
	volatile uint64_t x652 = 106736LLU;

    t162 = ((x649|(x650==x651))<=x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = 0;
	int64_t x654 = INT64_MIN;
	uint32_t x656 = 106612U;
	static int32_t t163 = -58;

    t163 = ((x653|(x654==x655))<=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = -1;
	int32_t x658 = -133;
	int64_t x659 = INT64_MIN;
	int32_t x660 = -565936;
	int32_t t164 = -145;

    t164 = ((x657|(x658==x659))<=x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x661 = INT8_MIN;
	int32_t x662 = 12946059;
	static uint64_t x663 = 345723554589LLU;
	static volatile uint8_t x664 = 0U;
	volatile int32_t t165 = 1070017956;

    t165 = ((x661|(x662==x663))<=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = INT32_MIN;
	int16_t x666 = -1;
	static int8_t x667 = 11;

    t166 = ((x665|(x666==x667))<=x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x669 = 2U;
	static int64_t x670 = -1LL;
	volatile uint16_t x672 = 3672U;
	int32_t t167 = 29719617;

    t167 = ((x669|(x670==x671))<=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x673 = 53903083LL;
	static int16_t x675 = INT16_MIN;
	volatile int32_t t168 = 746;

    t168 = ((x673|(x674==x675))<=x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = INT16_MIN;
	int64_t x678 = INT64_MIN;
	static volatile int64_t x679 = INT64_MIN;
	int8_t x680 = 0;
	int32_t t169 = 47;

    t169 = ((x677|(x678==x679))<=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = INT64_MIN;
	int64_t x682 = INT64_MIN;
	uint16_t x683 = 0U;
	int32_t x684 = INT32_MAX;
	int32_t t170 = 122833164;

    t170 = ((x681|(x682==x683))<=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = 24;
	int32_t x686 = -10;
	uint8_t x687 = 73U;
	int32_t x688 = INT32_MIN;
	static int32_t t171 = 14649;

    t171 = ((x685|(x686==x687))<=x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = INT32_MIN;
	int32_t x690 = -1;
	volatile uint64_t x691 = UINT64_MAX;
	volatile uint8_t x692 = UINT8_MAX;

    t172 = ((x689|(x690==x691))<=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x696 = UINT8_MAX;
	int32_t t173 = -177831;

    t173 = ((x693|(x694==x695))<=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x697 = 0U;
	uint8_t x698 = UINT8_MAX;
	int32_t x699 = -1;
	int8_t x700 = -1;
	int32_t t174 = 0;

    t174 = ((x697|(x698==x699))<=x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = -2471438972486927LL;
	static volatile uint8_t x702 = 1U;
	int32_t x703 = -1;
	int16_t x704 = -31;
	static volatile int32_t t175 = 0;

    t175 = ((x701|(x702==x703))<=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x706 = INT8_MIN;
	int8_t x707 = INT8_MAX;
	int16_t x708 = INT16_MIN;
	volatile int32_t t176 = 100106642;

    t176 = ((x705|(x706==x707))<=x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x709 = -1284113LL;
	uint64_t x710 = UINT64_MAX;
	uint32_t x711 = 117311478U;
	int8_t x712 = 0;
	volatile int32_t t177 = 1020973606;

    t177 = ((x709|(x710==x711))<=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x714 = -8;
	uint32_t x715 = UINT32_MAX;
	int64_t x716 = INT64_MIN;
	volatile int32_t t178 = -1095;

    t178 = ((x713|(x714==x715))<=x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x718 = -1LL;
	volatile uint16_t x719 = 14U;
	int16_t x720 = INT16_MAX;
	volatile int32_t t179 = -57669;

    t179 = ((x717|(x718==x719))<=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = INT32_MIN;
	int16_t x722 = -1;
	volatile uint32_t x723 = UINT32_MAX;
	int64_t x724 = INT64_MAX;
	int32_t t180 = -20828;

    t180 = ((x721|(x722==x723))<=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x727 = INT64_MAX;

    t181 = ((x725|(x726==x727))<=x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x731 = 411147505LL;

    t182 = ((x729|(x730==x731))<=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x733 = 2195469109689LLU;
	volatile int32_t x734 = INT32_MIN;
	volatile uint16_t x736 = UINT16_MAX;

    t183 = ((x733|(x734==x735))<=x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile uint32_t x737 = 550885U;
	uint64_t x740 = UINT64_MAX;

    t184 = ((x737|(x738==x739))<=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = INT16_MIN;
	int8_t x742 = INT8_MIN;

    t185 = ((x741|(x742==x743))<=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x745 = UINT64_MAX;
	uint32_t x746 = 29U;
	static uint32_t x748 = 6U;
	static int32_t t186 = 6915742;

    t186 = ((x745|(x746==x747))<=x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int8_t x750 = INT8_MIN;
	int32_t t187 = -1;

    t187 = ((x749|(x750==x751))<=x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x753 = UINT16_MAX;
	uint32_t x754 = 1010U;
	volatile int16_t x755 = -1;
	int8_t x756 = -1;
	volatile int32_t t188 = 0;

    t188 = ((x753|(x754==x755))<=x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x758 = -20884434LL;
	uint32_t x760 = 2252383U;
	volatile int32_t t189 = -5;

    t189 = ((x757|(x758==x759))<=x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x761 = INT8_MAX;
	volatile int32_t t190 = -23046;

    t190 = ((x761|(x762==x763))<=x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x765 = UINT8_MAX;
	int16_t x766 = INT16_MIN;
	static uint16_t x767 = 219U;
	volatile int64_t x768 = -3096452341812355588LL;

    t191 = ((x765|(x766==x767))<=x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x769 = UINT64_MAX;
	volatile int32_t x770 = -1;
	uint8_t x771 = UINT8_MAX;
	static int16_t x772 = -1;
	int32_t t192 = -2;

    t192 = ((x769|(x770==x771))<=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = -1LL;
	volatile uint64_t x774 = UINT64_MAX;
	uint16_t x775 = 4132U;
	int32_t x776 = INT32_MAX;

    t193 = ((x773|(x774==x775))<=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x777 = -3;
	static int64_t x778 = INT64_MAX;
	uint64_t x779 = 3056582526LLU;
	uint16_t x780 = UINT16_MAX;
	int32_t t194 = -59875123;

    t194 = ((x777|(x778==x779))<=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = 3983;
	int64_t x783 = -1LL;
	int8_t x784 = INT8_MIN;

    t195 = ((x781|(x782==x783))<=x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MAX;
	static volatile uint64_t x786 = 390659LLU;
	int64_t x787 = 1LL;
	int64_t x788 = INT64_MAX;
	static volatile int32_t t196 = 62365;

    t196 = ((x785|(x786==x787))<=x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x790 = INT32_MAX;
	volatile uint32_t x791 = 254516271U;
	volatile int32_t t197 = 1845232;

    t197 = ((x789|(x790==x791))<=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint32_t x793 = 3595U;
	int16_t x794 = -1;
	int8_t x795 = INT8_MAX;

    t198 = ((x793|(x794==x795))<=x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x798 = INT32_MAX;
	int64_t x799 = -49929820883482LL;
	int32_t x800 = INT32_MAX;
	volatile int32_t t199 = -18425889;

    t199 = ((x797|(x798==x799))<=x800);

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

