
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

int8_t x1 = INT8_MIN;
volatile int64_t x2 = INT64_MIN;
int8_t x4 = INT8_MAX;
int16_t x10 = -6962;
uint64_t x11 = UINT64_MAX;
static int32_t t2 = 18943;
volatile int64_t x18 = INT64_MIN;
volatile int32_t t5 = -16;
int8_t x36 = INT8_MIN;
int32_t x45 = INT32_MAX;
int32_t t10 = 8;
int64_t x57 = 185LL;
int32_t x60 = 314254;
int16_t x66 = -1;
uint16_t x69 = 1381U;
int32_t t13 = -149;
uint64_t x79 = 468330343500434LLU;
uint32_t x85 = 161U;
int32_t x88 = INT32_MIN;
uint64_t x93 = UINT64_MAX;
static int32_t x98 = INT32_MIN;
int16_t x101 = INT16_MAX;
volatile int32_t x125 = 926;
int64_t x131 = -1LL;
int64_t x136 = INT64_MAX;
volatile int32_t t27 = -7747;
int64_t x143 = INT64_MAX;
int32_t t28 = -379;
static uint8_t x150 = UINT8_MAX;
static volatile int8_t x162 = -1;
volatile int8_t x166 = INT8_MIN;
int32_t x169 = -1;
int8_t x172 = INT8_MAX;
volatile int64_t x185 = INT64_MIN;
volatile int32_t t37 = 25894;
static uint64_t x190 = UINT64_MAX;
int32_t t39 = -417;
int8_t x218 = 15;
static int32_t t43 = 0;
int64_t x232 = 15845LL;
uint32_t x241 = 406U;
int8_t x245 = INT8_MIN;
static int32_t x251 = 7;
volatile int16_t x258 = INT16_MAX;
volatile int32_t x272 = 268587;
int16_t x273 = 0;
uint64_t x289 = 1806702975871831LLU;
int32_t t58 = -87262285;
int16_t x294 = INT16_MAX;
int8_t x297 = 0;
uint16_t x310 = 242U;
int8_t x313 = INT8_MIN;
volatile int32_t t64 = -820;
uint16_t x326 = UINT16_MAX;
uint8_t x327 = UINT8_MAX;
volatile int32_t t66 = -154;
int32_t t67 = 89264;
volatile int32_t t68 = 46764;
volatile int16_t x350 = 4191;
volatile int32_t t72 = -1478846;
static int8_t x362 = -1;
uint64_t x369 = 71225LLU;
static int16_t x374 = 1;
static int16_t x377 = INT16_MIN;
int64_t x396 = 23531379634860LL;
int8_t x399 = 0;
volatile int32_t t81 = -3;
uint8_t x401 = UINT8_MAX;
static int16_t x402 = 25;
uint64_t x403 = 15631934190546LLU;
static volatile int32_t t82 = 0;
static int32_t x405 = 1;
volatile uint64_t x409 = UINT64_MAX;
volatile int64_t x411 = -3029140870LL;
int32_t t84 = -4;
uint8_t x413 = 0U;
int8_t x427 = INT8_MIN;
uint8_t x428 = 9U;
static int64_t x434 = INT64_MIN;
int32_t t89 = 358318720;
volatile int32_t t90 = 15;
uint32_t x443 = 6160875U;
static uint32_t x446 = UINT32_MAX;
int8_t x448 = 13;
volatile uint8_t x468 = UINT8_MAX;
int32_t x471 = INT32_MIN;
int64_t x476 = -987652962LL;
int8_t x484 = -5;
volatile int32_t t100 = -3361597;
uint16_t x487 = UINT16_MAX;
int64_t x494 = INT64_MIN;
int32_t t102 = -2950697;
volatile int64_t x497 = 1628480LL;
static uint32_t x500 = 2132483558U;
int32_t x512 = INT32_MIN;
volatile int8_t x515 = INT8_MAX;
volatile uint32_t x539 = 234U;
int8_t x540 = -1;
uint64_t x542 = 6896388644975805LLU;
int64_t x548 = 2928LL;
static int32_t t116 = 23952;
uint64_t x576 = 17607LLU;
int32_t t119 = -24;
static int32_t x585 = INT32_MAX;
int32_t x588 = -6049;
int64_t x589 = INT64_MIN;
int64_t x590 = INT64_MIN;
int32_t t121 = 210;
int8_t x593 = INT8_MAX;
int8_t x594 = INT8_MAX;
int64_t x603 = -16858LL;
int32_t x605 = 63097;
volatile int32_t t124 = -189;
int32_t x615 = -1;
volatile int32_t t126 = -115988723;
int16_t x617 = -1;
int64_t x619 = INT64_MAX;
int32_t t128 = 1;
uint32_t x626 = 232302013U;
uint64_t x627 = 29087LLU;
volatile int16_t x629 = 3;
volatile int32_t t130 = 375241;
volatile int32_t t131 = -23883;
int8_t x645 = -1;
uint64_t x647 = UINT64_MAX;
static volatile int32_t t132 = -2;
volatile uint32_t x655 = 0U;
static volatile int32_t t133 = 179;
int64_t x657 = -1LL;
int32_t t134 = -1756;
volatile int16_t x662 = -1;
uint16_t x663 = 938U;
int64_t x667 = -1LL;
int16_t x669 = INT16_MAX;
int16_t x671 = -1;
volatile int64_t x672 = INT64_MAX;
volatile int32_t x680 = INT32_MAX;
int16_t x684 = INT16_MIN;
int8_t x687 = INT8_MIN;
static volatile int32_t t141 = -6985650;
int16_t x691 = INT16_MIN;
static uint64_t x699 = 5LLU;
uint16_t x700 = UINT16_MAX;
int32_t t144 = 24535;
static int16_t x703 = -1;
int32_t x705 = -1;
int32_t x706 = -23472713;
int64_t x708 = INT64_MIN;
int64_t x710 = -1LL;
int32_t t147 = -1090;
static int16_t x715 = -26;
int32_t t149 = -1959014;
int16_t x735 = -4;
volatile int32_t t152 = -37558672;
volatile int32_t x737 = INT32_MAX;
int64_t x739 = -1LL;
uint16_t x744 = 219U;
int32_t x745 = INT32_MAX;
static volatile int32_t x748 = INT32_MIN;
static int32_t t156 = -142395;
uint8_t x753 = 43U;
int64_t x755 = -1LL;
int8_t x761 = INT8_MIN;
uint8_t x771 = 85U;
int32_t t161 = 4337;
volatile int16_t x777 = INT16_MAX;
int32_t t163 = 11731;
uint16_t x786 = 124U;
int32_t x799 = INT32_MAX;
int32_t t165 = 75;
int64_t x806 = INT64_MIN;
int16_t x810 = INT16_MAX;
uint16_t x813 = UINT16_MAX;
int32_t x814 = INT32_MIN;
static int32_t x815 = INT32_MIN;
int8_t x817 = 0;
int8_t x822 = 1;
static int16_t x827 = -1;
static volatile int32_t x831 = 613340;
static volatile int8_t x834 = INT8_MAX;
int8_t x849 = 28;
int64_t x850 = INT64_MIN;
static int8_t x867 = -1;
uint8_t x868 = 8U;
uint16_t x885 = 606U;
uint8_t x889 = UINT8_MAX;
static volatile int8_t x893 = -1;
int32_t t184 = -805159;
int8_t x899 = -1;
static int32_t x904 = 172977019;
int8_t x910 = -1;
int16_t x911 = 4;
static uint8_t x914 = 21U;
volatile int16_t x916 = INT16_MIN;
volatile int32_t t190 = 3563;
int16_t x927 = INT16_MIN;
int8_t x938 = INT8_MIN;
int16_t x944 = INT16_MIN;
static int32_t x947 = -130950;
volatile int32_t t198 = -1924967;
static volatile int64_t x955 = INT64_MIN;


void f0(void) {
    	int64_t x3 = -1LL;
	static int32_t t0 = -29;

    t0 = ((x1==x2)==(x3-x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = UINT32_MAX;
	uint16_t x6 = 0U;
	static volatile int16_t x7 = -2;
	static uint8_t x8 = UINT8_MAX;
	int32_t t1 = 618;

    t1 = ((x5==x6)==(x7-x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = -1;
	uint16_t x12 = 923U;

    t2 = ((x9==x10)==(x11-x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x17 = INT64_MIN;
	int8_t x19 = INT8_MIN;
	int16_t x20 = INT16_MIN;
	volatile int32_t t3 = -2619;

    t3 = ((x17==x18)==(x19-x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x21 = INT64_MAX;
	static uint8_t x22 = UINT8_MAX;
	int32_t x23 = INT32_MAX;
	static volatile int64_t x24 = -1LL;
	volatile int32_t t4 = 53533;

    t4 = ((x21==x22)==(x23-x24));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = -1;
	int32_t x26 = INT32_MAX;
	int64_t x27 = -4623499LL;
	static volatile uint8_t x28 = 0U;

    t5 = ((x25==x26)==(x27-x28));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x33 = INT32_MIN;
	int8_t x34 = -16;
	uint32_t x35 = 2906U;
	static volatile int32_t t6 = -3306;

    t6 = ((x33==x34)==(x35-x36));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint8_t x37 = UINT8_MAX;
	int64_t x38 = -1LL;
	static int64_t x39 = -67296291115713LL;
	int16_t x40 = INT16_MIN;
	static int32_t t7 = -6939;

    t7 = ((x37==x38)==(x39-x40));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x41 = INT8_MIN;
	volatile int8_t x42 = 20;
	volatile uint64_t x43 = UINT64_MAX;
	static int64_t x44 = INT64_MIN;
	static int32_t t8 = -5840067;

    t8 = ((x41==x42)==(x43-x44));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x46 = 133;
	static int32_t x47 = -15886;
	uint8_t x48 = 1U;
	static volatile int32_t t9 = 109;

    t9 = ((x45==x46)==(x47-x48));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x49 = 3U;
	int64_t x50 = INT64_MIN;
	static uint64_t x51 = 101LLU;
	volatile int8_t x52 = INT8_MIN;

    t10 = ((x49==x50)==(x51-x52));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x58 = 77877038925228514LLU;
	int32_t x59 = 25;
	int32_t t11 = -411320;

    t11 = ((x57==x58)==(x59-x60));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x65 = 42;
	int32_t x67 = INT32_MAX;
	uint32_t x68 = UINT32_MAX;
	volatile int32_t t12 = 255027396;

    t12 = ((x65==x66)==(x67-x68));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x70 = -3812;
	int32_t x71 = -103;
	int8_t x72 = INT8_MIN;

    t13 = ((x69==x70)==(x71-x72));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x77 = 235;
	int64_t x78 = 81LL;
	static uint16_t x80 = 7U;
	static int32_t t14 = 180968891;

    t14 = ((x77==x78)==(x79-x80));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x81 = -1;
	uint16_t x82 = UINT16_MAX;
	int16_t x83 = INT16_MIN;
	int8_t x84 = INT8_MIN;
	int32_t t15 = 3048;

    t15 = ((x81==x82)==(x83-x84));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x86 = -1;
	volatile int8_t x87 = INT8_MIN;
	int32_t t16 = 0;

    t16 = ((x85==x86)==(x87-x88));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x89 = 2650;
	int16_t x90 = INT16_MIN;
	volatile int8_t x91 = -1;
	int8_t x92 = -58;
	volatile int32_t t17 = -1;

    t17 = ((x89==x90)==(x91-x92));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x94 = INT16_MAX;
	static int32_t x95 = -1;
	uint32_t x96 = 9284U;
	static int32_t t18 = -9602185;

    t18 = ((x93==x94)==(x95-x96));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x97 = -1LL;
	int64_t x99 = INT64_MAX;
	int8_t x100 = INT8_MAX;
	volatile int32_t t19 = -2;

    t19 = ((x97==x98)==(x99-x100));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x102 = 90411231;
	int8_t x103 = INT8_MIN;
	int16_t x104 = -1;
	int32_t t20 = 40795735;

    t20 = ((x101==x102)==(x103-x104));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x105 = 17U;
	uint16_t x106 = UINT16_MAX;
	uint16_t x107 = 1U;
	uint16_t x108 = UINT16_MAX;
	volatile int32_t t21 = -3009;

    t21 = ((x105==x106)==(x107-x108));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int16_t x109 = -1430;
	int8_t x110 = INT8_MIN;
	int16_t x111 = -1;
	uint64_t x112 = UINT64_MAX;
	volatile int32_t t22 = 35321;

    t22 = ((x109==x110)==(x111-x112));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x113 = -4329922006819586LL;
	int16_t x114 = INT16_MAX;
	int8_t x115 = INT8_MIN;
	static int64_t x116 = -1LL;
	int32_t t23 = 59833086;

    t23 = ((x113==x114)==(x115-x116));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x121 = -1LL;
	int32_t x122 = 1870;
	static int8_t x123 = 1;
	int8_t x124 = INT8_MAX;
	int32_t t24 = 734005;

    t24 = ((x121==x122)==(x123-x124));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x126 = INT8_MIN;
	int32_t x127 = INT32_MIN;
	volatile int64_t x128 = -1LL;
	static int32_t t25 = -181;

    t25 = ((x125==x126)==(x127-x128));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x129 = 32295U;
	int16_t x130 = -1;
	uint8_t x132 = 9U;
	int32_t t26 = -23671;

    t26 = ((x129==x130)==(x131-x132));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x133 = 23678697U;
	uint32_t x134 = 26U;
	uint16_t x135 = 7U;

    t27 = ((x133==x134)==(x135-x136));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x141 = INT16_MIN;
	uint64_t x142 = 318440333LLU;
	static volatile int32_t x144 = 3794727;

    t28 = ((x141==x142)==(x143-x144));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x145 = UINT8_MAX;
	volatile int32_t x146 = -1;
	uint8_t x147 = 0U;
	int32_t x148 = 3309;
	static int32_t t29 = -1059782949;

    t29 = ((x145==x146)==(x147-x148));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x149 = UINT8_MAX;
	uint64_t x151 = 4LLU;
	static int8_t x152 = INT8_MAX;
	int32_t t30 = 251089;

    t30 = ((x149==x150)==(x151-x152));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x153 = 56387529LLU;
	int16_t x154 = -1;
	volatile int64_t x155 = 428004898580LL;
	static uint32_t x156 = 181U;
	volatile int32_t t31 = 1804804;

    t31 = ((x153==x154)==(x155-x156));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x161 = -88006;
	static int8_t x163 = -19;
	int16_t x164 = -105;
	static int32_t t32 = -223769758;

    t32 = ((x161==x162)==(x163-x164));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x165 = INT32_MAX;
	volatile int64_t x167 = -1LL;
	uint64_t x168 = UINT64_MAX;
	int32_t t33 = 1;

    t33 = ((x165==x166)==(x167-x168));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x170 = UINT64_MAX;
	int8_t x171 = -1;
	int32_t t34 = 155864554;

    t34 = ((x169==x170)==(x171-x172));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x173 = INT64_MIN;
	static int8_t x174 = INT8_MAX;
	static int16_t x175 = 0;
	volatile uint32_t x176 = UINT32_MAX;
	volatile int32_t t35 = 2;

    t35 = ((x173==x174)==(x175-x176));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x177 = INT8_MIN;
	static volatile uint16_t x178 = 2308U;
	static int16_t x179 = INT16_MIN;
	int8_t x180 = -3;
	volatile int32_t t36 = -939356455;

    t36 = ((x177==x178)==(x179-x180));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x186 = -1;
	uint16_t x187 = 1U;
	static int32_t x188 = INT32_MAX;

    t37 = ((x185==x186)==(x187-x188));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x189 = 15U;
	uint64_t x191 = UINT64_MAX;
	uint16_t x192 = 722U;
	static int32_t t38 = 790361803;

    t38 = ((x189==x190)==(x191-x192));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint16_t x197 = 1558U;
	int64_t x198 = 63927381636677471LL;
	int64_t x199 = INT64_MIN;
	volatile uint64_t x200 = 65454LLU;

    t39 = ((x197==x198)==(x199-x200));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x201 = 4113423689257931LL;
	static int64_t x202 = INT64_MIN;
	int8_t x203 = INT8_MIN;
	static uint16_t x204 = UINT16_MAX;
	int32_t t40 = 29696;

    t40 = ((x201==x202)==(x203-x204));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x205 = 491884934;
	int8_t x206 = -1;
	int8_t x207 = INT8_MAX;
	volatile int8_t x208 = INT8_MAX;
	volatile int32_t t41 = -23332;

    t41 = ((x205==x206)==(x207-x208));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x213 = 1U;
	int64_t x214 = -1LL;
	volatile int16_t x215 = INT16_MIN;
	int8_t x216 = -1;
	int32_t t42 = 0;

    t42 = ((x213==x214)==(x215-x216));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x217 = UINT64_MAX;
	volatile int64_t x219 = -1LL;
	int32_t x220 = INT32_MIN;

    t43 = ((x217==x218)==(x219-x220));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x225 = -116388;
	uint16_t x226 = 5204U;
	uint16_t x227 = UINT16_MAX;
	int8_t x228 = -1;
	static volatile int32_t t44 = -11;

    t44 = ((x225==x226)==(x227-x228));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x229 = 6U;
	static int32_t x230 = INT32_MIN;
	uint8_t x231 = 3U;
	int32_t t45 = -89654;

    t45 = ((x229==x230)==(x231-x232));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x233 = 1329078923LLU;
	uint8_t x234 = 1U;
	volatile int8_t x235 = 0;
	int64_t x236 = INT64_MAX;
	int32_t t46 = -248915237;

    t46 = ((x233==x234)==(x235-x236));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x242 = -1LL;
	uint8_t x243 = UINT8_MAX;
	static int64_t x244 = -1264688449107454968LL;
	int32_t t47 = -19;

    t47 = ((x241==x242)==(x243-x244));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x246 = 58226;
	int64_t x247 = -1LL;
	int8_t x248 = -16;
	volatile int32_t t48 = 1887538;

    t48 = ((x245==x246)==(x247-x248));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x249 = 1;
	volatile uint32_t x250 = UINT32_MAX;
	int32_t x252 = INT32_MAX;
	volatile int32_t t49 = 12192;

    t49 = ((x249==x250)==(x251-x252));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int16_t x253 = -7;
	uint8_t x254 = UINT8_MAX;
	uint16_t x255 = 148U;
	uint16_t x256 = UINT16_MAX;
	int32_t t50 = -114;

    t50 = ((x253==x254)==(x255-x256));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x257 = INT16_MIN;
	static volatile int16_t x259 = -6;
	int8_t x260 = INT8_MIN;
	int32_t t51 = -330;

    t51 = ((x257==x258)==(x259-x260));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x265 = UINT8_MAX;
	int64_t x266 = INT64_MIN;
	uint32_t x267 = UINT32_MAX;
	static volatile int8_t x268 = -1;
	volatile int32_t t52 = -1647935;

    t52 = ((x265==x266)==(x267-x268));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x269 = INT64_MIN;
	int16_t x270 = -93;
	static uint16_t x271 = 641U;
	volatile int32_t t53 = 471000711;

    t53 = ((x269==x270)==(x271-x272));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x274 = INT16_MAX;
	volatile int64_t x275 = INT64_MIN;
	volatile int16_t x276 = -3983;
	volatile int32_t t54 = -5;

    t54 = ((x273==x274)==(x275-x276));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x277 = 1U;
	static int64_t x278 = -54LL;
	static uint8_t x279 = 7U;
	int32_t x280 = -1;
	static volatile int32_t t55 = 807;

    t55 = ((x277==x278)==(x279-x280));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x281 = INT64_MIN;
	int16_t x282 = -1;
	int8_t x283 = INT8_MIN;
	int64_t x284 = 83626178LL;
	volatile int32_t t56 = 412;

    t56 = ((x281==x282)==(x283-x284));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int8_t x285 = INT8_MIN;
	uint32_t x286 = 249193U;
	int8_t x287 = INT8_MAX;
	uint16_t x288 = 16U;
	volatile int32_t t57 = -160039082;

    t57 = ((x285==x286)==(x287-x288));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x290 = INT16_MIN;
	int32_t x291 = -1038416;
	int64_t x292 = INT64_MIN;

    t58 = ((x289==x290)==(x291-x292));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x293 = INT8_MIN;
	volatile int32_t x295 = INT32_MIN;
	volatile int16_t x296 = -1;
	volatile int32_t t59 = -72387525;

    t59 = ((x293==x294)==(x295-x296));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x298 = 48U;
	static int8_t x299 = -1;
	int8_t x300 = -1;
	int32_t t60 = -214253967;

    t60 = ((x297==x298)==(x299-x300));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x301 = -1;
	volatile int64_t x302 = 1LL;
	volatile uint8_t x303 = UINT8_MAX;
	volatile uint32_t x304 = 231688653U;
	static int32_t t61 = -3;

    t61 = ((x301==x302)==(x303-x304));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x305 = -1LL;
	int16_t x306 = INT16_MAX;
	int16_t x307 = -1;
	int8_t x308 = -7;
	int32_t t62 = 7;

    t62 = ((x305==x306)==(x307-x308));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x309 = INT64_MIN;
	int64_t x311 = -1LL;
	int64_t x312 = INT64_MIN;
	int32_t t63 = 34589;

    t63 = ((x309==x310)==(x311-x312));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x314 = UINT16_MAX;
	int8_t x315 = INT8_MAX;
	static int8_t x316 = -1;

    t64 = ((x313==x314)==(x315-x316));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x321 = 1U;
	int16_t x322 = INT16_MIN;
	volatile uint64_t x323 = 99421835LLU;
	int32_t x324 = INT32_MIN;
	int32_t t65 = 411;

    t65 = ((x321==x322)==(x323-x324));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x325 = INT32_MIN;
	int16_t x328 = INT16_MIN;

    t66 = ((x325==x326)==(x327-x328));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x329 = INT32_MAX;
	uint16_t x330 = UINT16_MAX;
	volatile uint32_t x331 = 167U;
	int16_t x332 = -1;

    t67 = ((x329==x330)==(x331-x332));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x333 = 44U;
	int32_t x334 = INT32_MAX;
	int64_t x335 = INT64_MAX;
	int16_t x336 = 250;

    t68 = ((x333==x334)==(x335-x336));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x345 = INT8_MIN;
	int32_t x346 = INT32_MIN;
	int16_t x347 = -781;
	int64_t x348 = -1LL;
	int32_t t69 = -7369;

    t69 = ((x345==x346)==(x347-x348));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x349 = -1;
	int8_t x351 = 2;
	int32_t x352 = -447;
	int32_t t70 = 130;

    t70 = ((x349==x350)==(x351-x352));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x353 = INT8_MIN;
	static int64_t x354 = 13LL;
	int64_t x355 = -554800233514LL;
	int32_t x356 = 427538551;
	volatile int32_t t71 = 7;

    t71 = ((x353==x354)==(x355-x356));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x357 = -490;
	static volatile int32_t x358 = -5177;
	int64_t x359 = -17LL;
	int16_t x360 = 338;

    t72 = ((x357==x358)==(x359-x360));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x361 = UINT8_MAX;
	static int8_t x363 = 1;
	uint32_t x364 = 57282U;
	int32_t t73 = 43;

    t73 = ((x361==x362)==(x363-x364));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x365 = INT8_MAX;
	int64_t x366 = INT64_MIN;
	int16_t x367 = INT16_MIN;
	static volatile int16_t x368 = INT16_MAX;
	int32_t t74 = 48795174;

    t74 = ((x365==x366)==(x367-x368));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint16_t x370 = 2U;
	uint64_t x371 = UINT64_MAX;
	int8_t x372 = 62;
	int32_t t75 = 393;

    t75 = ((x369==x370)==(x371-x372));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x373 = -1;
	uint32_t x375 = 28482U;
	uint64_t x376 = 35932365862576082LLU;
	static int32_t t76 = 11;

    t76 = ((x373==x374)==(x375-x376));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x378 = UINT16_MAX;
	volatile uint32_t x379 = UINT32_MAX;
	uint8_t x380 = 1U;
	int32_t t77 = -1255;

    t77 = ((x377==x378)==(x379-x380));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x385 = INT8_MAX;
	int64_t x386 = -1LL;
	int16_t x387 = INT16_MAX;
	static int64_t x388 = -4066224112576LL;
	static int32_t t78 = 504015;

    t78 = ((x385==x386)==(x387-x388));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x389 = -1;
	volatile int8_t x390 = INT8_MIN;
	volatile int32_t x391 = INT32_MIN;
	int16_t x392 = -12031;
	static int32_t t79 = 10347394;

    t79 = ((x389==x390)==(x391-x392));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x393 = -1;
	static int32_t x394 = INT32_MAX;
	uint64_t x395 = UINT64_MAX;
	int32_t t80 = -18;

    t80 = ((x393==x394)==(x395-x396));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x397 = -1;
	static uint16_t x398 = 1185U;
	int16_t x400 = INT16_MIN;

    t81 = ((x397==x398)==(x399-x400));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x404 = 0U;

    t82 = ((x401==x402)==(x403-x404));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int16_t x406 = INT16_MIN;
	uint16_t x407 = UINT16_MAX;
	int16_t x408 = INT16_MIN;
	int32_t t83 = 1;

    t83 = ((x405==x406)==(x407-x408));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x410 = 0;
	int64_t x412 = -1LL;

    t84 = ((x409==x410)==(x411-x412));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x414 = 388837U;
	uint32_t x415 = 536U;
	volatile uint64_t x416 = 31335338628020707LLU;
	volatile int32_t t85 = 224;

    t85 = ((x413==x414)==(x415-x416));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x417 = INT32_MAX;
	static int32_t x418 = INT32_MIN;
	int8_t x419 = INT8_MIN;
	volatile int64_t x420 = -1LL;
	volatile int32_t t86 = -74370709;

    t86 = ((x417==x418)==(x419-x420));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x425 = UINT64_MAX;
	uint64_t x426 = 1023LLU;
	volatile int32_t t87 = 0;

    t87 = ((x425==x426)==(x427-x428));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x429 = 3U;
	uint16_t x430 = UINT16_MAX;
	int16_t x431 = INT16_MIN;
	volatile int64_t x432 = INT64_MIN;
	static volatile int32_t t88 = -359760;

    t88 = ((x429==x430)==(x431-x432));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x433 = 0;
	volatile int8_t x435 = INT8_MIN;
	volatile int16_t x436 = INT16_MAX;

    t89 = ((x433==x434)==(x435-x436));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x437 = -1;
	volatile int64_t x438 = INT64_MIN;
	int32_t x439 = -13;
	volatile uint32_t x440 = UINT32_MAX;

    t90 = ((x437==x438)==(x439-x440));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x441 = 378212526062LLU;
	volatile uint32_t x442 = 107993U;
	int8_t x444 = 14;
	int32_t t91 = 3267;

    t91 = ((x441==x442)==(x443-x444));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x445 = 3LLU;
	static int16_t x447 = INT16_MIN;
	int32_t t92 = 234278600;

    t92 = ((x445==x446)==(x447-x448));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x449 = 39LLU;
	int8_t x450 = INT8_MIN;
	volatile int8_t x451 = INT8_MAX;
	volatile uint8_t x452 = 12U;
	int32_t t93 = -14327;

    t93 = ((x449==x450)==(x451-x452));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x453 = INT16_MIN;
	volatile uint32_t x454 = UINT32_MAX;
	int8_t x455 = INT8_MIN;
	int16_t x456 = 1;
	volatile int32_t t94 = -2;

    t94 = ((x453==x454)==(x455-x456));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x457 = 4941;
	volatile int8_t x458 = -12;
	int64_t x459 = INT64_MAX;
	static uint16_t x460 = 229U;
	static int32_t t95 = -856117;

    t95 = ((x457==x458)==(x459-x460));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x465 = 11U;
	static volatile uint16_t x466 = 0U;
	int16_t x467 = -1;
	int32_t t96 = 1;

    t96 = ((x465==x466)==(x467-x468));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x469 = -1;
	int16_t x470 = -1;
	int64_t x472 = INT64_MIN;
	volatile int32_t t97 = -36296;

    t97 = ((x469==x470)==(x471-x472));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x473 = -1597;
	volatile int8_t x474 = -1;
	int8_t x475 = 0;
	static volatile int32_t t98 = 1557;

    t98 = ((x473==x474)==(x475-x476));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x477 = 3U;
	static int16_t x478 = 72;
	uint32_t x479 = 5U;
	uint32_t x480 = UINT32_MAX;
	int32_t t99 = -8;

    t99 = ((x477==x478)==(x479-x480));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x481 = UINT16_MAX;
	int32_t x482 = -1;
	uint32_t x483 = UINT32_MAX;

    t100 = ((x481==x482)==(x483-x484));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x485 = INT8_MIN;
	int16_t x486 = -905;
	volatile int8_t x488 = INT8_MIN;
	volatile int32_t t101 = 27211;

    t101 = ((x485==x486)==(x487-x488));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x493 = 2U;
	static int16_t x495 = INT16_MIN;
	static int64_t x496 = -1LL;

    t102 = ((x493==x494)==(x495-x496));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x498 = -15;
	uint64_t x499 = 2234822662295459835LLU;
	static volatile int32_t t103 = -20751;

    t103 = ((x497==x498)==(x499-x500));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x505 = 238685U;
	int64_t x506 = INT64_MIN;
	uint16_t x507 = 1U;
	int8_t x508 = INT8_MIN;
	volatile int32_t t104 = 10336;

    t104 = ((x505==x506)==(x507-x508));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile uint32_t x509 = UINT32_MAX;
	int32_t x510 = 25642;
	int64_t x511 = -15909501568374036LL;
	volatile int32_t t105 = 39888041;

    t105 = ((x509==x510)==(x511-x512));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x513 = UINT16_MAX;
	volatile int32_t x514 = INT32_MIN;
	int8_t x516 = INT8_MAX;
	static int32_t t106 = 44209691;

    t106 = ((x513==x514)==(x515-x516));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x517 = INT64_MIN;
	volatile int8_t x518 = INT8_MAX;
	uint16_t x519 = 15U;
	volatile int64_t x520 = -312847733873LL;
	volatile int32_t t107 = -3;

    t107 = ((x517==x518)==(x519-x520));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x521 = UINT16_MAX;
	uint32_t x522 = 9U;
	uint16_t x523 = 187U;
	int64_t x524 = -1LL;
	volatile int32_t t108 = 16069602;

    t108 = ((x521==x522)==(x523-x524));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x529 = -1;
	int32_t x530 = -1;
	int16_t x531 = INT16_MAX;
	static volatile int64_t x532 = -1LL;
	volatile int32_t t109 = -221;

    t109 = ((x529==x530)==(x531-x532));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x533 = -1;
	static int8_t x534 = -1;
	static uint32_t x535 = 7698U;
	uint16_t x536 = 23946U;
	int32_t t110 = 931184;

    t110 = ((x533==x534)==(x535-x536));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x537 = UINT32_MAX;
	int16_t x538 = -1;
	volatile int32_t t111 = -13;

    t111 = ((x537==x538)==(x539-x540));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x541 = -74;
	volatile int32_t x543 = INT32_MIN;
	static volatile uint64_t x544 = UINT64_MAX;
	volatile int32_t t112 = 133903;

    t112 = ((x541==x542)==(x543-x544));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x545 = 245;
	static uint16_t x546 = 17338U;
	int16_t x547 = 1391;
	volatile int32_t t113 = 2;

    t113 = ((x545==x546)==(x547-x548));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x549 = 7055LLU;
	volatile uint8_t x550 = UINT8_MAX;
	int64_t x551 = INT64_MAX;
	volatile int8_t x552 = 28;
	static volatile int32_t t114 = 54;

    t114 = ((x549==x550)==(x551-x552));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x561 = 440118889;
	uint64_t x562 = 8663LLU;
	uint64_t x563 = 235515970LLU;
	int64_t x564 = -1LL;
	int32_t t115 = 122027;

    t115 = ((x561==x562)==(x563-x564));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int8_t x569 = 31;
	int32_t x570 = -8138;
	static volatile uint16_t x571 = UINT16_MAX;
	int8_t x572 = INT8_MIN;

    t116 = ((x569==x570)==(x571-x572));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x573 = UINT16_MAX;
	static int32_t x574 = INT32_MAX;
	volatile int16_t x575 = INT16_MIN;
	static int32_t t117 = -74938;

    t117 = ((x573==x574)==(x575-x576));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x577 = UINT32_MAX;
	volatile int64_t x578 = INT64_MIN;
	int32_t x579 = 2851114;
	uint32_t x580 = 1273891467U;
	int32_t t118 = 102;

    t118 = ((x577==x578)==(x579-x580));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x581 = INT16_MIN;
	static int32_t x582 = INT32_MAX;
	uint32_t x583 = UINT32_MAX;
	static int8_t x584 = INT8_MIN;

    t119 = ((x581==x582)==(x583-x584));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x586 = 14410128449727LLU;
	volatile int8_t x587 = INT8_MIN;
	volatile int32_t t120 = -5027;

    t120 = ((x585==x586)==(x587-x588));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x591 = -1;
	int8_t x592 = -8;

    t121 = ((x589==x590)==(x591-x592));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x595 = INT16_MIN;
	uint16_t x596 = UINT16_MAX;
	static volatile int32_t t122 = 493747;

    t122 = ((x593==x594)==(x595-x596));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x601 = -1;
	int8_t x602 = INT8_MIN;
	int16_t x604 = 0;
	static volatile int32_t t123 = 266;

    t123 = ((x601==x602)==(x603-x604));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x606 = INT16_MIN;
	static int16_t x607 = -1;
	uint64_t x608 = UINT64_MAX;

    t124 = ((x605==x606)==(x607-x608));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x609 = -13;
	volatile int8_t x610 = 29;
	volatile int8_t x611 = -1;
	static volatile int64_t x612 = -1LL;
	int32_t t125 = -608;

    t125 = ((x609==x610)==(x611-x612));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x613 = 13421143U;
	volatile int16_t x614 = INT16_MAX;
	volatile int8_t x616 = 0;

    t126 = ((x613==x614)==(x615-x616));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x618 = UINT32_MAX;
	uint8_t x620 = 14U;
	int32_t t127 = -227324;

    t127 = ((x617==x618)==(x619-x620));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x621 = -1;
	int16_t x622 = INT16_MIN;
	static uint8_t x623 = 0U;
	uint32_t x624 = 514U;

    t128 = ((x621==x622)==(x623-x624));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x625 = 1;
	int8_t x628 = INT8_MAX;
	volatile int32_t t129 = 0;

    t129 = ((x625==x626)==(x627-x628));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x630 = -56781;
	int8_t x631 = -3;
	volatile uint64_t x632 = 2865435LLU;

    t130 = ((x629==x630)==(x631-x632));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x641 = INT64_MIN;
	uint16_t x642 = 19U;
	uint64_t x643 = 6826842509494LLU;
	int16_t x644 = INT16_MIN;

    t131 = ((x641==x642)==(x643-x644));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x646 = UINT32_MAX;
	static volatile uint32_t x648 = UINT32_MAX;

    t132 = ((x645==x646)==(x647-x648));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x653 = 11750699;
	int8_t x654 = INT8_MAX;
	static volatile uint64_t x656 = 335365LLU;

    t133 = ((x653==x654)==(x655-x656));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x658 = -11;
	uint32_t x659 = UINT32_MAX;
	int32_t x660 = -1;

    t134 = ((x657==x658)==(x659-x660));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x661 = 0U;
	static uint32_t x664 = 3U;
	int32_t t135 = 73300;

    t135 = ((x661==x662)==(x663-x664));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint64_t x665 = 579099085LLU;
	volatile int16_t x666 = 10;
	uint8_t x668 = 57U;
	int32_t t136 = 185242663;

    t136 = ((x665==x666)==(x667-x668));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x670 = INT16_MIN;
	volatile int32_t t137 = 13743;

    t137 = ((x669==x670)==(x671-x672));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x673 = 16;
	int8_t x674 = INT8_MAX;
	static int8_t x675 = INT8_MAX;
	static int32_t x676 = INT32_MAX;
	volatile int32_t t138 = 540;

    t138 = ((x673==x674)==(x675-x676));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x677 = INT64_MAX;
	volatile int8_t x678 = -1;
	volatile uint8_t x679 = 15U;
	int32_t t139 = -599298;

    t139 = ((x677==x678)==(x679-x680));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x681 = 2U;
	int64_t x682 = -1LL;
	int64_t x683 = -1LL;
	int32_t t140 = 988065;

    t140 = ((x681==x682)==(x683-x684));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x685 = -1;
	static int32_t x686 = -81502564;
	static int64_t x688 = -47491026590509739LL;

    t141 = ((x685==x686)==(x687-x688));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x689 = INT16_MAX;
	uint32_t x690 = 104U;
	int16_t x692 = -4648;
	volatile int32_t t142 = 1068754776;

    t142 = ((x689==x690)==(x691-x692));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x693 = INT64_MIN;
	static int64_t x694 = INT64_MIN;
	int16_t x695 = INT16_MIN;
	int16_t x696 = 2;
	int32_t t143 = 11;

    t143 = ((x693==x694)==(x695-x696));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x697 = INT16_MIN;
	volatile int64_t x698 = INT64_MIN;

    t144 = ((x697==x698)==(x699-x700));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x701 = INT8_MAX;
	int8_t x702 = INT8_MAX;
	uint32_t x704 = 4083U;
	int32_t t145 = 47966886;

    t145 = ((x701==x702)==(x703-x704));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x707 = -1;
	int32_t t146 = 3;

    t146 = ((x705==x706)==(x707-x708));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x709 = -1;
	int8_t x711 = INT8_MIN;
	int32_t x712 = 27;

    t147 = ((x709==x710)==(x711-x712));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x713 = -1;
	int64_t x714 = -6564744602301LL;
	volatile int16_t x716 = 2040;
	int32_t t148 = 1;

    t148 = ((x713==x714)==(x715-x716));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x717 = -1;
	int32_t x718 = 1977053;
	uint16_t x719 = 0U;
	uint16_t x720 = UINT16_MAX;

    t149 = ((x717==x718)==(x719-x720));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x721 = 1;
	uint8_t x722 = UINT8_MAX;
	static volatile int64_t x723 = -82LL;
	int16_t x724 = 1;
	int32_t t150 = -2631083;

    t150 = ((x721==x722)==(x723-x724));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x725 = -6650;
	volatile int8_t x726 = INT8_MIN;
	int16_t x727 = INT16_MAX;
	int8_t x728 = 11;
	volatile int32_t t151 = -10701411;

    t151 = ((x725==x726)==(x727-x728));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x733 = INT16_MIN;
	int16_t x734 = INT16_MIN;
	static uint32_t x736 = UINT32_MAX;

    t152 = ((x733==x734)==(x735-x736));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x738 = 6968514U;
	int8_t x740 = 62;
	volatile int32_t t153 = -3306;

    t153 = ((x737==x738)==(x739-x740));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x741 = INT16_MIN;
	int64_t x742 = INT64_MIN;
	int16_t x743 = INT16_MIN;
	int32_t t154 = 23;

    t154 = ((x741==x742)==(x743-x744));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x746 = INT64_MIN;
	volatile int8_t x747 = INT8_MIN;
	volatile int32_t t155 = 0;

    t155 = ((x745==x746)==(x747-x748));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x749 = 2U;
	int8_t x750 = -1;
	int16_t x751 = INT16_MIN;
	volatile int32_t x752 = -17;

    t156 = ((x749==x750)==(x751-x752));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x754 = 25634U;
	uint64_t x756 = UINT64_MAX;
	volatile int32_t t157 = -48110;

    t157 = ((x753==x754)==(x755-x756));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x757 = 25U;
	volatile int64_t x758 = 149532416158297857LL;
	uint64_t x759 = UINT64_MAX;
	uint8_t x760 = 0U;
	volatile int32_t t158 = 5470850;

    t158 = ((x757==x758)==(x759-x760));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x762 = -1;
	static int16_t x763 = INT16_MIN;
	uint8_t x764 = 1U;
	static int32_t t159 = -431;

    t159 = ((x761==x762)==(x763-x764));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x769 = -1;
	volatile int32_t x770 = INT32_MIN;
	static uint16_t x772 = 0U;
	volatile int32_t t160 = 24245;

    t160 = ((x769==x770)==(x771-x772));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x773 = 63786;
	static int16_t x774 = 301;
	volatile int64_t x775 = -3032412863149094LL;
	volatile int32_t x776 = -1;

    t161 = ((x773==x774)==(x775-x776));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x778 = -652646410099LL;
	int64_t x779 = 2539022LL;
	int8_t x780 = INT8_MIN;
	volatile int32_t t162 = -1;

    t162 = ((x777==x778)==(x779-x780));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint8_t x781 = 1U;
	volatile int16_t x782 = -1;
	static int64_t x783 = -213989363LL;
	int64_t x784 = INT64_MIN;

    t163 = ((x781==x782)==(x783-x784));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x785 = 365609362;
	int8_t x787 = INT8_MAX;
	volatile uint32_t x788 = 7576U;
	static int32_t t164 = -10;

    t164 = ((x785==x786)==(x787-x788));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x797 = 142;
	int32_t x798 = -11925418;
	int32_t x800 = INT32_MAX;

    t165 = ((x797==x798)==(x799-x800));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x805 = 25;
	int16_t x807 = INT16_MAX;
	static int16_t x808 = -1;
	int32_t t166 = -620946;

    t166 = ((x805==x806)==(x807-x808));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int16_t x809 = INT16_MIN;
	int16_t x811 = INT16_MIN;
	int16_t x812 = 12040;
	volatile int32_t t167 = 59118;

    t167 = ((x809==x810)==(x811-x812));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x816 = INT32_MIN;
	static volatile int32_t t168 = -3812;

    t168 = ((x813==x814)==(x815-x816));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x818 = -1LL;
	int32_t x819 = -61035042;
	volatile int64_t x820 = 529336037550LL;
	static volatile int32_t t169 = 78553081;

    t169 = ((x817==x818)==(x819-x820));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x821 = -1575;
	uint16_t x823 = 1284U;
	uint16_t x824 = 1307U;
	int32_t t170 = -1;

    t170 = ((x821==x822)==(x823-x824));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x825 = -1;
	int8_t x826 = INT8_MIN;
	int32_t x828 = INT32_MAX;
	int32_t t171 = 0;

    t171 = ((x825==x826)==(x827-x828));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x829 = 176U;
	volatile int64_t x830 = INT64_MIN;
	int64_t x832 = -1LL;
	volatile int32_t t172 = 1890;

    t172 = ((x829==x830)==(x831-x832));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x833 = UINT32_MAX;
	int8_t x835 = -5;
	int8_t x836 = INT8_MAX;
	int32_t t173 = 5;

    t173 = ((x833==x834)==(x835-x836));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x837 = -1LL;
	static uint64_t x838 = 19749281118535794LLU;
	static int8_t x839 = INT8_MAX;
	int16_t x840 = -474;
	volatile int32_t t174 = 1000;

    t174 = ((x837==x838)==(x839-x840));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x841 = INT8_MAX;
	volatile int16_t x842 = -10;
	volatile int16_t x843 = INT16_MAX;
	volatile int64_t x844 = INT64_MAX;
	int32_t t175 = -138;

    t175 = ((x841==x842)==(x843-x844));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x851 = INT32_MIN;
	volatile int8_t x852 = INT8_MIN;
	static volatile int32_t t176 = 11858234;

    t176 = ((x849==x850)==(x851-x852));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x857 = INT16_MIN;
	int64_t x858 = INT64_MIN;
	static int32_t x859 = -7283636;
	uint64_t x860 = 3823920773958327046LLU;
	int32_t t177 = 0;

    t177 = ((x857==x858)==(x859-x860));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x865 = 2U;
	static volatile int16_t x866 = -13;
	int32_t t178 = -14096636;

    t178 = ((x865==x866)==(x867-x868));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x873 = -1;
	int64_t x874 = 11173LL;
	uint64_t x875 = UINT64_MAX;
	int8_t x876 = 0;
	volatile int32_t t179 = 513;

    t179 = ((x873==x874)==(x875-x876));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x877 = -888;
	uint32_t x878 = UINT32_MAX;
	static uint32_t x879 = 1014052799U;
	volatile int16_t x880 = 0;
	volatile int32_t t180 = 69;

    t180 = ((x877==x878)==(x879-x880));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x881 = -13;
	int64_t x882 = -1LL;
	int64_t x883 = 3647LL;
	int8_t x884 = INT8_MIN;
	volatile int32_t t181 = 8090548;

    t181 = ((x881==x882)==(x883-x884));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x886 = -1LL;
	int16_t x887 = -1;
	uint8_t x888 = UINT8_MAX;
	int32_t t182 = 13248290;

    t182 = ((x885==x886)==(x887-x888));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x890 = UINT16_MAX;
	static uint8_t x891 = 51U;
	int64_t x892 = INT64_MAX;
	volatile int32_t t183 = -141146;

    t183 = ((x889==x890)==(x891-x892));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x894 = -1;
	static int8_t x895 = -1;
	int8_t x896 = INT8_MAX;

    t184 = ((x893==x894)==(x895-x896));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x897 = 809284636801LLU;
	uint32_t x898 = 629U;
	static volatile int16_t x900 = INT16_MIN;
	volatile int32_t t185 = -3;

    t185 = ((x897==x898)==(x899-x900));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x901 = UINT8_MAX;
	int8_t x902 = -1;
	int16_t x903 = INT16_MIN;
	volatile int32_t t186 = -5691843;

    t186 = ((x901==x902)==(x903-x904));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint16_t x905 = 65U;
	int64_t x906 = INT64_MIN;
	static volatile int64_t x907 = -1LL;
	int64_t x908 = INT64_MAX;
	volatile int32_t t187 = 29652444;

    t187 = ((x905==x906)==(x907-x908));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x909 = 43436LL;
	static volatile int16_t x912 = -1;
	int32_t t188 = -92079797;

    t188 = ((x909==x910)==(x911-x912));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint16_t x913 = 466U;
	volatile int32_t x915 = INT32_MIN;
	int32_t t189 = 26;

    t189 = ((x913==x914)==(x915-x916));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x917 = 1091105604456LLU;
	static int64_t x918 = INT64_MIN;
	int8_t x919 = INT8_MIN;
	int8_t x920 = INT8_MIN;

    t190 = ((x917==x918)==(x919-x920));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x921 = UINT16_MAX;
	volatile int8_t x922 = 6;
	int8_t x923 = INT8_MAX;
	static uint32_t x924 = 699U;
	int32_t t191 = 96416;

    t191 = ((x921==x922)==(x923-x924));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x925 = 13882;
	int64_t x926 = INT64_MIN;
	static volatile uint8_t x928 = 14U;
	volatile int32_t t192 = -389988;

    t192 = ((x925==x926)==(x927-x928));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x929 = 3773;
	int32_t x930 = INT32_MAX;
	uint8_t x931 = 11U;
	static int8_t x932 = INT8_MIN;
	int32_t t193 = 2269;

    t193 = ((x929==x930)==(x931-x932));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x933 = -1;
	int32_t x934 = INT32_MAX;
	int64_t x935 = INT64_MIN;
	int64_t x936 = INT64_MIN;
	volatile int32_t t194 = 478;

    t194 = ((x933==x934)==(x935-x936));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x937 = 58;
	int8_t x939 = -9;
	int8_t x940 = 10;
	volatile int32_t t195 = 27;

    t195 = ((x937==x938)==(x939-x940));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x941 = INT32_MIN;
	uint64_t x942 = 10098981868LLU;
	int16_t x943 = INT16_MIN;
	volatile int32_t t196 = 52485583;

    t196 = ((x941==x942)==(x943-x944));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint8_t x945 = UINT8_MAX;
	int64_t x946 = INT64_MAX;
	uint8_t x948 = 10U;
	int32_t t197 = 901841169;

    t197 = ((x945==x946)==(x947-x948));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x949 = INT8_MAX;
	volatile int16_t x950 = -12;
	int16_t x951 = INT16_MAX;
	int16_t x952 = 0;

    t198 = ((x949==x950)==(x951-x952));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x953 = INT32_MAX;
	int64_t x954 = -82628344LL;
	int8_t x956 = INT8_MIN;
	volatile int32_t t199 = 28345;

    t199 = ((x953==x954)==(x955-x956));

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

