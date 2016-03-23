
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

volatile int64_t x11 = INT64_MAX;
volatile int8_t x16 = -1;
uint32_t x25 = 28677U;
int32_t x26 = -1;
uint64_t x32 = UINT64_MAX;
int32_t x33 = INT32_MIN;
int64_t x36 = INT64_MIN;
uint64_t x38 = UINT64_MAX;
volatile uint64_t t9 = 825247944843742LLU;
static volatile int32_t x42 = 71073;
static int16_t x52 = 1;
static int16_t x57 = -1;
int32_t x58 = INT32_MAX;
volatile uint32_t x62 = 1U;
static volatile uint64_t x67 = 8766916171345981212LLU;
int8_t x75 = 0;
volatile int64_t t17 = -6691443LL;
volatile uint32_t x77 = 4570017U;
uint16_t x78 = 1U;
volatile uint16_t x81 = 7U;
volatile uint64_t x90 = 350772LLU;
static uint8_t x96 = 3U;
volatile uint64_t t22 = 1774839253532LLU;
int16_t x97 = INT16_MIN;
int32_t x99 = INT32_MIN;
int64_t t28 = -1428LL;
uint64_t x121 = UINT64_MAX;
volatile int8_t x126 = INT8_MIN;
volatile uint64_t t30 = 19247513287LLU;
static uint32_t x140 = 0U;
uint64_t t33 = 4LLU;
static int32_t t34 = 761;
static uint64_t x147 = 609201706599727644LLU;
volatile int32_t t37 = 24506983;
int16_t x158 = 8043;
static uint64_t x160 = 7107816835LLU;
int16_t x166 = 49;
int8_t x169 = INT8_MAX;
uint8_t x180 = 6U;
volatile int8_t x182 = 9;
int16_t x189 = -1;
volatile uint64_t t45 = 2388326175549891LLU;
volatile int32_t x198 = 704061;
static volatile uint64_t t47 = 795155076659466LLU;
uint32_t x214 = UINT32_MAX;
volatile uint16_t x218 = UINT16_MAX;
volatile uint8_t x219 = 1U;
int32_t x221 = -1;
volatile int64_t x225 = INT64_MIN;
int64_t x229 = 276455690702152111LL;
uint32_t x230 = UINT32_MAX;
int32_t x234 = INT32_MIN;
uint16_t x236 = 25U;
static uint64_t t55 = 2187284079884733212LLU;
int64_t x240 = -1LL;
static volatile int64_t t56 = 1742852554575800877LL;
static volatile int64_t x248 = -604341051766981380LL;
static volatile int64_t t58 = -7LL;
int64_t x259 = 27LL;
int8_t x260 = INT8_MAX;
volatile int32_t t61 = -207929734;
volatile int16_t x265 = 1;
int64_t x266 = -1454505742LL;
static int64_t x269 = -233455332447023496LL;
volatile int32_t x270 = -1;
volatile int64_t t63 = 5534LL;
uint8_t x280 = 25U;
int64_t x283 = INT64_MIN;
static int64_t x300 = INT64_MIN;
volatile int32_t x306 = INT32_MAX;
volatile int64_t t71 = -2355230241254LL;
uint8_t x316 = 0U;
volatile uint32_t x322 = UINT32_MAX;
static volatile uint8_t x329 = UINT8_MAX;
volatile int64_t x336 = 4LL;
volatile int64_t t78 = -1372094744233907190LL;
int8_t x346 = INT8_MAX;
volatile int32_t t81 = 6566;
int64_t t83 = -4816389LL;
static volatile uint16_t x373 = 0U;
volatile int64_t x374 = INT64_MAX;
uint16_t x376 = 3447U;
static uint16_t x378 = 327U;
int16_t x379 = INT16_MIN;
int32_t x385 = INT32_MIN;
int16_t x387 = INT16_MAX;
static volatile int64_t t89 = 2LL;
uint8_t x389 = 1U;
int32_t x391 = INT32_MIN;
volatile uint64_t t90 = 47484331LLU;
int16_t x400 = -1;
static uint64_t x401 = 183LLU;
volatile int16_t x402 = INT16_MIN;
uint16_t x403 = 841U;
static uint64_t t93 = 128111629531947LLU;
int32_t x407 = -38438822;
static int64_t x412 = -1LL;
volatile uint64_t x418 = 2515358881719603006LLU;
static volatile uint64_t t97 = 1LLU;
int16_t x426 = 103;
int64_t x430 = -1LL;
static volatile uint16_t x434 = 258U;
static volatile int16_t x435 = INT16_MIN;
static uint16_t x441 = 21473U;
int32_t x442 = 7112;
int8_t x444 = INT8_MIN;
int32_t x446 = -52;
uint16_t x455 = 1001U;
volatile int32_t t105 = -51229;
int64_t x460 = INT64_MIN;
static uint16_t x463 = 1823U;
static uint32_t x470 = 11U;
volatile uint8_t x474 = UINT8_MAX;
volatile int8_t x475 = INT8_MIN;
int32_t x488 = INT32_MAX;
static uint16_t x494 = 15U;
uint16_t x499 = UINT16_MAX;
uint8_t x500 = 24U;
static int8_t x504 = 3;
int16_t x511 = INT16_MAX;
volatile int64_t t119 = 3914LL;
int64_t x523 = INT64_MIN;
int64_t t123 = -1LL;
volatile int8_t x537 = INT8_MIN;
static uint8_t x540 = 37U;
uint64_t t130 = 355654858623441LLU;
volatile int8_t x567 = INT8_MAX;
static volatile int16_t x571 = 411;
static int16_t x573 = INT16_MIN;
static volatile uint64_t t134 = 19968739436994237LLU;
static volatile uint16_t x585 = UINT16_MAX;
int16_t x588 = INT16_MAX;
volatile int32_t t136 = -123717484;
volatile int16_t x599 = -220;
int64_t x600 = INT64_MIN;
int8_t x603 = INT8_MIN;
int8_t x607 = INT8_MIN;
int16_t x608 = -1;
int8_t x614 = 1;
int16_t x619 = INT16_MIN;
uint64_t t144 = 163LLU;
uint64_t x629 = 280318798LLU;
int64_t x631 = -18776651184410LL;
uint32_t x639 = 225457U;
static volatile uint64_t x644 = 209597603878342LLU;
int8_t x648 = -1;
volatile int8_t x649 = INT8_MIN;
uint32_t x651 = 49U;
uint32_t t150 = 1860U;
int64_t t151 = -354256LL;
int16_t x662 = -46;
int16_t x664 = 20;
int8_t x667 = -1;
static volatile int16_t x679 = 35;
uint32_t x680 = 2901805U;
int8_t x682 = -1;
static int64_t x685 = INT64_MAX;
static uint64_t x689 = 2110712LLU;
int8_t x692 = INT8_MIN;
int64_t x695 = -82199LL;
volatile uint16_t x700 = 2U;
static int8_t x705 = INT8_MIN;
volatile int8_t x706 = INT8_MIN;
int32_t t163 = -136812956;
uint8_t x712 = 1U;
int16_t x715 = -1307;
volatile uint64_t t170 = 471796761500311LLU;
int64_t x744 = -1548540313277306LL;
uint32_t x745 = 126U;
int32_t x746 = INT32_MIN;
int8_t x749 = -5;
uint16_t x765 = 27058U;
uint32_t x766 = 3U;
volatile uint32_t x778 = 43565731U;
int32_t x781 = INT32_MIN;
int16_t x784 = INT16_MIN;
volatile uint64_t t180 = 64050450000409LLU;
volatile uint32_t x791 = 783U;
uint8_t x805 = UINT8_MAX;
int16_t x806 = INT16_MIN;
int16_t x808 = -610;
volatile int32_t x825 = INT32_MIN;
volatile int32_t x835 = INT32_MAX;
static int16_t x841 = 0;
uint16_t x843 = 28U;
volatile int64_t t195 = -13120LL;
int16_t x857 = -1;
volatile int16_t x860 = -1;
volatile int32_t x863 = INT32_MAX;


void f0(void) {
    	static int32_t x1 = INT32_MIN;
	static int8_t x2 = INT8_MIN;
	int8_t x3 = -1;
	static uint64_t x4 = 49285698LLU;
	uint64_t t0 = 239220099880118429LLU;

    t0 = ((x1^(x2^x3))-x4);

    if (t0 != 18446744071512782397LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 10U;
	static int32_t x6 = INT32_MAX;
	uint16_t x7 = 3U;
	int8_t x8 = 20;
	static int32_t t1 = 47;

    t1 = ((x5^(x6^x7))-x8);

    if (t1 != 2147483618) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = 230;
	static int16_t x10 = INT16_MIN;
	int32_t x12 = -1;
	volatile int64_t t2 = 4283515037881610LL;

    t2 = ((x9^(x10^x11))-x12);

    if (t2 != -9223372036854743270LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MIN;
	int64_t x14 = INT64_MIN;
	int32_t x15 = INT32_MIN;
	int64_t t3 = 2057509440532229LL;

    t3 = ((x13^(x14^x15))-x16);

    if (t3 != -2147483647LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -2;
	uint64_t x18 = 7LLU;
	int32_t x19 = INT32_MIN;
	static volatile int16_t x20 = 2;
	uint64_t t4 = 24158112LLU;

    t4 = ((x17^(x18^x19))-x20);

    if (t4 != 2147483639LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MAX;
	static volatile int16_t x22 = INT16_MIN;
	volatile uint32_t x23 = UINT32_MAX;
	uint32_t x24 = 5U;
	uint32_t t5 = 264142698U;

    t5 = ((x21^(x22^x23))-x24);

    if (t5 != 2147450875U) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x27 = 2202333564825589LLU;
	static uint8_t x28 = UINT8_MAX;
	uint64_t t6 = 1429881404LLU;

    t6 = ((x25^(x26^x27))-x28);

    if (t6 != 18444541740144746256LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -1LL;
	uint16_t x30 = UINT16_MAX;
	uint8_t x31 = UINT8_MAX;
	uint64_t t7 = 63718LLU;

    t7 = ((x29^(x30^x31))-x32);

    if (t7 != 18446744073709486336LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x34 = 9U;
	int16_t x35 = INT16_MAX;
	int64_t t8 = -2539400LL;

    t8 = ((x33^(x34^x35))-x36);

    if (t8 != 9223372034707324918LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 139LLU;
	int64_t x39 = -1LL;
	uint8_t x40 = 0U;

    t9 = ((x37^(x38^x39))-x40);

    if (t9 != 139LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = 977037423LLU;
	static volatile int16_t x43 = INT16_MAX;
	int32_t x44 = 25482;
	uint64_t t10 = 644LLU;

    t10 = ((x41^(x42^x43))-x44);

    if (t10 != 977051303LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = -1;
	int32_t x46 = -1;
	uint16_t x47 = 14U;
	uint16_t x48 = 42U;
	int32_t t11 = 21;

    t11 = ((x45^(x46^x47))-x48);

    if (t11 != -28) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x49 = 1U;
	static uint8_t x50 = 29U;
	uint16_t x51 = UINT16_MAX;
	int32_t t12 = 390966;

    t12 = ((x49^(x50^x51))-x52);

    if (t12 != 65506) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x59 = UINT32_MAX;
	uint8_t x60 = UINT8_MAX;
	uint32_t t13 = 1889039U;

    t13 = ((x57^(x58^x59))-x60);

    if (t13 != 2147483392U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x61 = 3601704U;
	static int16_t x63 = 6;
	int32_t x64 = -59575;
	static uint32_t t14 = 824242U;

    t14 = ((x61^(x62^x63))-x64);

    if (t14 != 3661286U) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x65 = -11375;
	uint16_t x66 = 821U;
	int8_t x68 = INT8_MAX;
	volatile uint64_t t15 = 4391LLU;

    t15 = ((x65^(x66^x67))-x68);

    if (t15 != 9679827902363582265LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x69 = INT16_MAX;
	static volatile int64_t x70 = INT64_MIN;
	static int8_t x71 = INT8_MIN;
	int32_t x72 = INT32_MAX;
	int64_t t16 = -8289033855060LL;

    t16 = ((x69^(x70^x71))-x72);

    if (t16 != 9223372034707259520LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x73 = 885450586U;
	volatile int64_t x74 = INT64_MIN;
	static volatile uint16_t x76 = 9729U;

    t17 = ((x73^(x74^x75))-x76);

    if (t17 != -9223372035969334951LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x79 = -1635446LL;
	int64_t x80 = -1LL;
	static int64_t t18 = -243563065492705LL;

    t18 = ((x77^(x78^x79))-x80);

    if (t18 != -6115285LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x82 = -1;
	int8_t x83 = 28;
	int32_t x84 = -1;
	volatile int32_t t19 = 123;

    t19 = ((x81^(x82^x83))-x84);

    if (t19 != -27) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x85 = 141331666080463LL;
	static int32_t x86 = -62900212;
	uint8_t x87 = 127U;
	volatile uint64_t x88 = UINT64_MAX;
	volatile uint64_t t20 = 398241523747LLU;

    t20 = ((x85^(x86^x87))-x88);

    if (t20 != 18446602742098078397LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x89 = INT32_MIN;
	static uint64_t x91 = 24LLU;
	uint64_t x92 = UINT64_MAX;
	uint64_t t21 = 5196LLU;

    t21 = ((x89^(x90^x91))-x92);

    if (t21 != 18446744071562418733LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x93 = 3U;
	uint64_t x94 = 2LLU;
	int32_t x95 = INT32_MAX;

    t22 = ((x93^(x94^x95))-x96);

    if (t22 != 2147483643LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x98 = 15U;
	int8_t x100 = 0;
	volatile int32_t t23 = -20276591;

    t23 = ((x97^(x98^x99))-x100);

    if (t23 != 2147450895) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x101 = INT8_MAX;
	int32_t x102 = -187835058;
	int8_t x103 = INT8_MAX;
	int32_t x104 = INT32_MIN;
	volatile int32_t t24 = 0;

    t24 = ((x101^(x102^x103))-x104);

    if (t24 != 1959648590) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x105 = INT64_MIN;
	volatile uint32_t x106 = 927U;
	int16_t x107 = -1;
	uint16_t x108 = UINT16_MAX;
	static int64_t t25 = 7129769980604LL;

    t25 = ((x105^(x106^x107))-x108);

    if (t25 != -9223372032559874975LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x109 = INT64_MAX;
	volatile int8_t x110 = INT8_MAX;
	int8_t x111 = INT8_MAX;
	int64_t x112 = 454470LL;
	static int64_t t26 = -1519LL;

    t26 = ((x109^(x110^x111))-x112);

    if (t26 != 9223372036854321337LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x113 = INT16_MIN;
	int16_t x114 = 2;
	static int64_t x115 = 2774611350443LL;
	static int8_t x116 = 22;
	int64_t t27 = 0LL;

    t27 = ((x113^(x114^x115))-x116);

    if (t27 != -2774611340397LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x117 = -1LL;
	int16_t x118 = 2;
	int16_t x119 = 1862;
	int8_t x120 = INT8_MIN;

    t28 = ((x117^(x118^x119))-x120);

    if (t28 != -1733LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x122 = 14332720632LLU;
	static int8_t x123 = INT8_MAX;
	int32_t x124 = INT32_MIN;
	volatile uint64_t t29 = 6056435LLU;

    t29 = ((x121^(x122^x123))-x124);

    if (t29 != 18446744061524314744LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x125 = 6949156046781LLU;
	int64_t x127 = 204106LL;
	volatile int64_t x128 = 103954270747137LL;

    t30 = ((x125^(x126^x127))-x128);

    if (t30 != 18446633170282818422LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x129 = INT64_MAX;
	uint32_t x130 = 41U;
	int8_t x131 = INT8_MIN;
	volatile uint64_t x132 = 5702449234017999429LLU;
	volatile uint64_t t31 = 5523376LLU;

    t31 = ((x129^(x130^x131))-x132);

    if (t31 != 3520922798541809169LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x133 = -11134959;
	int64_t x134 = INT64_MAX;
	volatile uint32_t x135 = 424086699U;
	volatile int32_t x136 = INT32_MIN;
	volatile int64_t t32 = -6LL;

    t32 = ((x133^(x134^x135))-x136);

    if (t32 != -9223372034272203963LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x137 = 3;
	int64_t x138 = 347050968LL;
	static uint64_t x139 = 2570597LLU;

    t33 = ((x137^(x138^x139))-x140);

    if (t33 != 344500926LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x141 = 7;
	int8_t x142 = INT8_MIN;
	volatile int16_t x143 = 3;
	uint8_t x144 = UINT8_MAX;

    t34 = ((x141^(x142^x143))-x144);

    if (t34 != -379) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x145 = INT64_MIN;
	int64_t x146 = -1LL;
	volatile int32_t x148 = 110;
	static uint64_t t35 = 40477830599491LLU;

    t35 = ((x145^(x146^x147))-x148);

    if (t35 != 8614170330255048053LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x149 = 3U;
	uint64_t x150 = 18470LLU;
	volatile uint8_t x151 = UINT8_MAX;
	int32_t x152 = INT32_MAX;
	uint64_t t36 = 7662LLU;

    t36 = ((x149^(x150^x151))-x152);

    if (t36 != 18446744071562086619LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x153 = INT32_MIN;
	uint16_t x154 = 14223U;
	int8_t x155 = -1;
	volatile int32_t x156 = 31702;

    t37 = ((x153^(x154^x155))-x156);

    if (t37 != 2147437722) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x157 = UINT32_MAX;
	uint32_t x159 = 62570U;
	uint64_t t38 = 6LLU;

    t38 = ((x157^(x158^x159))-x160);

    if (t38 != 18446744070896641915LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x161 = 1U;
	int8_t x162 = -12;
	volatile int16_t x163 = INT16_MAX;
	static int8_t x164 = 1;
	int32_t t39 = 122354959;

    t39 = ((x161^(x162^x163))-x164);

    if (t39 != -32759) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x165 = 5;
	uint32_t x167 = 3470491U;
	uint64_t x168 = 1204351060LLU;
	volatile uint64_t t40 = 135942305309428LLU;

    t40 = ((x165^(x166^x167))-x168);

    if (t40 != 18446744072508671067LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x170 = INT64_MAX;
	int8_t x171 = 14;
	int8_t x172 = INT8_MAX;
	volatile int64_t t41 = -37116022965LL;

    t41 = ((x169^(x170^x171))-x172);

    if (t41 != 9223372036854775567LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x173 = INT32_MIN;
	int32_t x174 = INT32_MIN;
	int64_t x175 = INT64_MIN;
	int32_t x176 = INT32_MIN;
	static volatile int64_t t42 = 6427115084LL;

    t42 = ((x173^(x174^x175))-x176);

    if (t42 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x177 = 2U;
	static int16_t x178 = 0;
	int32_t x179 = INT32_MAX;
	static int32_t t43 = -19858;

    t43 = ((x177^(x178^x179))-x180);

    if (t43 != 2147483639) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x181 = 260121U;
	int32_t x183 = 6482532;
	int16_t x184 = INT16_MIN;
	static volatile uint32_t t44 = 236903U;

    t44 = ((x181^(x182^x183))-x184);

    if (t44 != 6394484U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x190 = 1U;
	uint64_t x191 = UINT64_MAX;
	int16_t x192 = -1;

    t45 = ((x189^(x190^x191))-x192);

    if (t45 != 2LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x193 = -1LL;
	int32_t x194 = -1;
	int32_t x195 = -1;
	uint8_t x196 = 2U;
	static int64_t t46 = 3676LL;

    t46 = ((x193^(x194^x195))-x196);

    if (t46 != -3LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x197 = -1;
	volatile int64_t x199 = INT64_MAX;
	volatile uint64_t x200 = UINT64_MAX;

    t47 = ((x197^(x198^x199))-x200);

    if (t47 != 9223372036855479870LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x201 = UINT16_MAX;
	volatile int8_t x202 = -1;
	int8_t x203 = INT8_MAX;
	uint16_t x204 = 1071U;
	int32_t t48 = 20;

    t48 = ((x201^(x202^x203))-x204);

    if (t48 != -66480) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x205 = 6716852666603714LLU;
	int8_t x206 = INT8_MIN;
	int16_t x207 = 2;
	int8_t x208 = -1;
	volatile uint64_t t49 = 495140LLU;

    t49 = ((x205^(x206^x207))-x208);

    if (t49 != 18440027221042947905LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x213 = 3U;
	static int8_t x215 = INT8_MIN;
	int16_t x216 = INT16_MAX;
	volatile uint32_t t50 = 11734660U;

    t50 = ((x213^(x214^x215))-x216);

    if (t50 != 4294934653U) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x217 = INT8_MIN;
	volatile int16_t x220 = -1;
	int32_t t51 = -1836353;

    t51 = ((x217^(x218^x219))-x220);

    if (t51 != -65409) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x222 = 15133148664LLU;
	int32_t x223 = 628780;
	uint64_t x224 = 262LLU;
	uint64_t t52 = 20982521308400126LLU;

    t52 = ((x221^(x222^x223))-x224);

    if (t52 != 18446744058575970597LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x226 = INT16_MIN;
	volatile uint64_t x227 = 27586993120098742LLU;
	int32_t x228 = INT32_MIN;
	static volatile uint64_t t53 = 2704370817515LLU;

    t53 = ((x225^(x226^x227))-x228);

    if (t53 != 9195785045882157494LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint64_t x231 = UINT64_MAX;
	int8_t x232 = -1;
	volatile uint64_t t54 = 7836662867582224LLU;

    t54 = ((x229^(x230^x231))-x232);

    if (t54 != 18170288382216757680LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x233 = INT16_MIN;
	uint64_t x235 = 363909682LLU;

    t55 = ((x233^(x234^x235))-x236);

    if (t55 != 1783583257LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x237 = 62U;
	int64_t x238 = -1LL;
	volatile int32_t x239 = 30;

    t56 = ((x237^(x238^x239))-x240);

    if (t56 != -32LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x241 = UINT64_MAX;
	int16_t x242 = INT16_MIN;
	static int16_t x243 = -1;
	volatile int32_t x244 = INT32_MIN;
	uint64_t t57 = 133119600695501534LLU;

    t57 = ((x241^(x242^x243))-x244);

    if (t57 != 2147450880LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x245 = -1450;
	static uint8_t x246 = UINT8_MAX;
	static uint16_t x247 = 91U;

    t58 = ((x245^(x246^x247))-x248);

    if (t58 != 604341051766980086LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x253 = 0U;
	int16_t x254 = -1;
	int16_t x255 = -1;
	static uint8_t x256 = 22U;
	volatile int32_t t59 = -155077386;

    t59 = ((x253^(x254^x255))-x256);

    if (t59 != -22) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int32_t x257 = -1;
	static int16_t x258 = INT16_MIN;
	int64_t t60 = 4099651138922394922LL;

    t60 = ((x257^(x258^x259))-x260);

    if (t60 != 32613LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int16_t x261 = INT16_MIN;
	volatile int32_t x262 = INT32_MIN;
	int8_t x263 = INT8_MIN;
	uint16_t x264 = 43U;

    t61 = ((x261^(x262^x263))-x264);

    if (t61 != -2147451051) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x267 = 592597931715LLU;
	static volatile int64_t x268 = -44LL;
	volatile uint64_t t62 = 2069592660LLU;

    t62 = ((x265^(x266^x267))-x268);

    if (t62 != 18446743482360452700LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x271 = 3U;
	static int32_t x272 = -707870823;

    t63 = ((x269^(x270^x271))-x272);

    if (t63 != 233455333154894315LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x277 = INT32_MIN;
	int8_t x278 = 0;
	volatile uint32_t x279 = 20455U;
	uint32_t t64 = 2U;

    t64 = ((x277^(x278^x279))-x280);

    if (t64 != 2147504078U) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x281 = -1LL;
	int8_t x282 = 5;
	static int32_t x284 = -1;
	volatile int64_t t65 = -1757213262287LL;

    t65 = ((x281^(x282^x283))-x284);

    if (t65 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x285 = 236;
	int64_t x286 = -269LL;
	static int16_t x287 = INT16_MIN;
	int32_t x288 = 122622910;
	volatile int64_t t66 = -46546375533771344LL;

    t66 = ((x285^(x286^x287))-x288);

    if (t66 != -122590623LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x289 = -1LL;
	uint64_t x290 = 222458097729LLU;
	int8_t x291 = INT8_MAX;
	static volatile int8_t x292 = INT8_MAX;
	volatile uint64_t t67 = 3081257000LLU;

    t67 = ((x289^(x290^x291))-x292);

    if (t67 != 18446743851251453762LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x293 = -1;
	int8_t x294 = INT8_MAX;
	static int8_t x295 = INT8_MAX;
	int8_t x296 = INT8_MAX;
	int32_t t68 = -87;

    t68 = ((x293^(x294^x295))-x296);

    if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x297 = 5956103464656LL;
	int64_t x298 = INT64_MIN;
	uint32_t x299 = 4795060U;
	volatile int64_t t69 = -2LL;

    t69 = ((x297^(x298^x299))-x300);

    if (t69 != 5956098804836LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x301 = UINT64_MAX;
	uint16_t x302 = UINT16_MAX;
	int64_t x303 = INT64_MAX;
	int32_t x304 = 498511;
	static volatile uint64_t t70 = 45775141127LLU;

    t70 = ((x301^(x302^x303))-x304);

    if (t70 != 9223372036854342832LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x305 = INT64_MAX;
	int8_t x307 = -1;
	int64_t x308 = -1LL;

    t71 = ((x305^(x306^x307))-x308);

    if (t71 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x309 = INT64_MAX;
	static int8_t x310 = INT8_MIN;
	int32_t x311 = INT32_MAX;
	static int16_t x312 = 14991;
	int64_t t72 = -2685262062284615LL;

    t72 = ((x309^(x310^x311))-x312);

    if (t72 != -9223372034707307279LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x313 = 1;
	static int8_t x314 = -1;
	uint8_t x315 = UINT8_MAX;
	int32_t t73 = -1858062;

    t73 = ((x313^(x314^x315))-x316);

    if (t73 != -255) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint16_t x321 = UINT16_MAX;
	int64_t x323 = -1LL;
	int16_t x324 = INT16_MIN;
	int64_t t74 = 205498972524383LL;

    t74 = ((x321^(x322^x323))-x324);

    if (t74 != -4294868993LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x325 = -40;
	volatile uint16_t x326 = UINT16_MAX;
	uint32_t x327 = 9U;
	static int16_t x328 = INT16_MIN;
	uint32_t t75 = 1449713401U;

    t75 = ((x325^(x326^x327))-x328);

    if (t75 != 4294934574U) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x330 = INT16_MIN;
	int16_t x331 = INT16_MIN;
	int16_t x332 = INT16_MIN;
	volatile int32_t t76 = 36;

    t76 = ((x329^(x330^x331))-x332);

    if (t76 != 33023) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x333 = 2;
	uint64_t x334 = 9813984LLU;
	uint64_t x335 = 311LLU;
	volatile uint64_t t77 = 4268587154769795823LLU;

    t77 = ((x333^(x334^x335))-x336);

    if (t77 != 9813713LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x341 = 20174U;
	uint8_t x342 = 12U;
	int64_t x343 = INT64_MAX;
	volatile uint32_t x344 = UINT32_MAX;

    t78 = ((x341^(x342^x343))-x344);

    if (t78 != 9223372032559788350LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x345 = UINT64_MAX;
	int16_t x347 = -1869;
	static volatile int8_t x348 = INT8_MIN;
	volatile uint64_t t79 = 215928LLU;

    t79 = ((x345^(x346^x347))-x348);

    if (t79 != 1971LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x349 = UINT16_MAX;
	int8_t x350 = INT8_MIN;
	int32_t x351 = -1;
	static int8_t x352 = INT8_MIN;
	volatile int32_t t80 = 1870055;

    t80 = ((x349^(x350^x351))-x352);

    if (t80 != 65536) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x353 = INT16_MIN;
	int8_t x354 = INT8_MIN;
	static int16_t x355 = INT16_MIN;
	int16_t x356 = INT16_MIN;

    t81 = ((x353^(x354^x355))-x356);

    if (t81 != 32640) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x357 = UINT32_MAX;
	uint8_t x358 = 51U;
	volatile uint8_t x359 = UINT8_MAX;
	int16_t x360 = INT16_MAX;
	uint32_t t82 = 193733U;

    t82 = ((x357^(x358^x359))-x360);

    if (t82 != 4294934324U) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint8_t x361 = UINT8_MAX;
	static int64_t x362 = -766201766332662372LL;
	static int32_t x363 = INT32_MAX;
	volatile int8_t x364 = INT8_MAX;

    t83 = ((x361^(x362^x363))-x364);

    if (t83 != -766201764838309347LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x365 = 2U;
	int64_t x366 = -1LL;
	uint16_t x367 = 3497U;
	static uint32_t x368 = 840122397U;
	volatile int64_t t84 = 19062647511LL;

    t84 = ((x365^(x366^x367))-x368);

    if (t84 != -840125897LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x369 = 19177601730283581LLU;
	static int64_t x370 = INT64_MAX;
	static int8_t x371 = -1;
	uint8_t x372 = 83U;
	volatile uint64_t t85 = 947243LLU;

    t85 = ((x369^(x370^x371))-x372);

    if (t85 != 9242549638585059306LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x375 = INT64_MIN;
	volatile int64_t t86 = -20625LL;

    t86 = ((x373^(x374^x375))-x376);

    if (t86 != -3448LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x377 = 1;
	volatile int16_t x380 = 16358;
	int32_t t87 = -1;

    t87 = ((x377^(x378^x379))-x380);

    if (t87 != -48800) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x381 = -1LL;
	uint8_t x382 = UINT8_MAX;
	uint8_t x383 = 7U;
	int64_t x384 = INT64_MIN;
	int64_t t88 = -1LL;

    t88 = ((x381^(x382^x383))-x384);

    if (t88 != 9223372036854775559LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x386 = -1LL;
	int16_t x388 = INT16_MIN;

    t89 = ((x385^(x386^x387))-x388);

    if (t89 != 2147483648LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x390 = -1;
	uint64_t x392 = UINT64_MAX;

    t90 = ((x389^(x390^x391))-x392);

    if (t90 != 2147483647LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x393 = 1U;
	uint32_t x394 = UINT32_MAX;
	uint8_t x395 = UINT8_MAX;
	static int16_t x396 = INT16_MIN;
	uint32_t t91 = 694261U;

    t91 = ((x393^(x394^x395))-x396);

    if (t91 != 32513U) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x397 = -1;
	uint16_t x398 = 53U;
	int64_t x399 = 39LL;
	volatile int64_t t92 = -104371591014627644LL;

    t92 = ((x397^(x398^x399))-x400);

    if (t92 != -18LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint8_t x404 = 2U;

    t93 = ((x401^(x402^x403))-x404);

    if (t93 != 18446744073709519868LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x405 = -1;
	int8_t x406 = INT8_MIN;
	volatile uint16_t x408 = 91U;
	static int32_t t94 = 3;

    t94 = ((x405^(x406^x407))-x408);

    if (t94 != -38438966) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint16_t x409 = UINT16_MAX;
	uint32_t x410 = 5525765U;
	static int32_t x411 = -3228301;
	static int64_t t95 = 9810013773935LL;

    t95 = ((x409^(x410^x411))-x412);

    if (t95 != 4288287626LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x413 = 1;
	int64_t x414 = -5213LL;
	static int8_t x415 = INT8_MAX;
	static uint32_t x416 = 634970789U;
	volatile int64_t t96 = -26476054111996007LL;

    t96 = ((x413^(x414^x415))-x416);

    if (t96 != -634975944LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x417 = 12201957458LLU;
	int64_t x419 = -1300336LL;
	int64_t x420 = INT64_MIN;

    t97 = ((x417^(x418^x419))-x420);

    if (t97 != 6708013162897244156LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x421 = INT32_MIN;
	int64_t x422 = INT64_MAX;
	int16_t x423 = -1;
	int16_t x424 = INT16_MIN;
	static volatile int64_t t98 = 0LL;

    t98 = ((x421^(x422^x423))-x424);

    if (t98 != 9223372034707324928LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint8_t x425 = 91U;
	uint16_t x427 = 20215U;
	static int32_t x428 = -7;
	volatile int32_t t99 = -14;

    t99 = ((x425^(x426^x427))-x428);

    if (t99 != 20178) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x429 = INT16_MIN;
	int16_t x431 = 5;
	int16_t x432 = 4;
	volatile int64_t t100 = -106545101773LL;

    t100 = ((x429^(x430^x431))-x432);

    if (t100 != 32758LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x433 = 22;
	int64_t x436 = INT64_MIN;
	int64_t t101 = 2023518973777LL;

    t101 = ((x433^(x434^x435))-x436);

    if (t101 != 9223372036854743316LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint16_t x443 = 103U;
	volatile int32_t t102 = -14820330;

    t102 = ((x441^(x442^x443))-x444);

    if (t102 != 18638) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x445 = 58642U;
	static uint8_t x447 = UINT8_MAX;
	int32_t x448 = INT32_MAX;
	volatile uint32_t t103 = 3320U;

    t103 = ((x445^(x446^x447))-x448);

    if (t103 != 2147424802U) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x449 = INT64_MIN;
	volatile int32_t x450 = -1;
	int32_t x451 = 3736765;
	int8_t x452 = 0;
	volatile int64_t t104 = 12725376796LL;

    t104 = ((x449^(x450^x451))-x452);

    if (t104 != 9223372036851039042LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x453 = 25U;
	uint16_t x454 = 24U;
	int32_t x456 = -28159;

    t105 = ((x453^(x454^x455))-x456);

    if (t105 != 29159) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x457 = -457;
	volatile uint64_t x458 = 8535710918106LLU;
	int64_t x459 = -106686247513381LL;
	uint64_t t106 = 158LLU;

    t106 = ((x457^(x458^x459))-x460);

    if (t106 != 9223485031872645430LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x461 = INT64_MIN;
	int32_t x462 = 2;
	static int64_t x464 = INT64_MIN;
	static volatile int64_t t107 = -18LL;

    t107 = ((x461^(x462^x463))-x464);

    if (t107 != 1821LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x465 = INT16_MAX;
	int16_t x466 = INT16_MIN;
	static int64_t x467 = -26501LL;
	uint32_t x468 = UINT32_MAX;
	static volatile int64_t t108 = -2655LL;

    t108 = ((x465^(x466^x467))-x468);

    if (t108 != -4294940795LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x469 = INT64_MIN;
	uint64_t x471 = 1864LLU;
	static int16_t x472 = -1118;
	volatile uint64_t t109 = 1715811271LLU;

    t109 = ((x469^(x470^x471))-x472);

    if (t109 != 9223372036854778785LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x473 = 9861153511985LLU;
	volatile int64_t x476 = -243806749LL;
	uint64_t t110 = 108537860535929940LLU;

    t110 = ((x473^(x474^x475))-x476);

    if (t110 != 18446734212799846251LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x477 = -1;
	int8_t x478 = INT8_MAX;
	uint8_t x479 = 95U;
	uint64_t x480 = UINT64_MAX;
	volatile uint64_t t111 = 348163371481637LLU;

    t111 = ((x477^(x478^x479))-x480);

    if (t111 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x481 = -1LL;
	static volatile int16_t x482 = 1;
	uint64_t x483 = UINT64_MAX;
	static int8_t x484 = -1;
	volatile uint64_t t112 = 1526459LLU;

    t112 = ((x481^(x482^x483))-x484);

    if (t112 != 2LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x485 = UINT16_MAX;
	static uint32_t x486 = UINT32_MAX;
	volatile int64_t x487 = 3777397LL;
	int64_t t113 = -3081349141857947287LL;

    t113 = ((x485^(x486^x487))-x488);

    if (t113 != 2143724406LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x489 = 40618213251053LL;
	int8_t x490 = -1;
	static volatile uint32_t x491 = 9405U;
	static int32_t x492 = -59;
	volatile int64_t t114 = 183442638923199LL;

    t114 = ((x489^(x490^x491))-x492);

    if (t114 != 40621093145834LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x493 = INT64_MIN;
	int16_t x495 = INT16_MAX;
	int64_t x496 = INT64_MIN;
	int64_t t115 = 26836516LL;

    t115 = ((x493^(x494^x495))-x496);

    if (t115 != 32752LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x497 = -59429450;
	int16_t x498 = INT16_MIN;
	volatile int32_t t116 = -490;

    t116 = ((x497^(x498^x499))-x500);

    if (t116 != 59396657) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x501 = INT32_MIN;
	uint16_t x502 = UINT16_MAX;
	int16_t x503 = -1;
	volatile int32_t t117 = 1;

    t117 = ((x501^(x502^x503))-x504);

    if (t117 != 2147418109) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x505 = INT16_MIN;
	int32_t x506 = INT32_MAX;
	volatile int64_t x507 = INT64_MIN;
	int32_t x508 = 35;
	volatile int64_t t118 = 3LL;

    t118 = ((x505^(x506^x507))-x508);

    if (t118 != 9223372034707324892LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x509 = -3445935;
	static volatile int64_t x510 = INT64_MAX;
	volatile uint32_t x512 = 105122U;

    t119 = ((x509^(x510^x511))-x512);

    if (t119 != -9223372036851412817LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x513 = 8073570LLU;
	int8_t x514 = 15;
	uint16_t x515 = 294U;
	int64_t x516 = -71601916712181327LL;
	static uint64_t t120 = 1072753109LLU;

    t120 = ((x513^(x514^x515))-x516);

    if (t120 != 71601916720254618LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x517 = -16943332222214783LL;
	volatile int8_t x518 = INT8_MAX;
	int16_t x519 = -89;
	uint16_t x520 = 5U;
	volatile int64_t t121 = -8890354739497LL;

    t121 = ((x517^(x518^x519))-x520);

    if (t121 != 16943332222214740LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x521 = -1;
	static int64_t x522 = INT64_MIN;
	int64_t x524 = INT64_MIN;
	int64_t t122 = INT64_MAX;

    t122 = ((x521^(x522^x523))-x524);

    if (t122 != INT64_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x525 = 164171333LL;
	volatile int8_t x526 = -1;
	int8_t x527 = -1;
	volatile int16_t x528 = -1;

    t123 = ((x525^(x526^x527))-x528);

    if (t123 != 164171334LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x529 = 9795725158928832LLU;
	volatile int8_t x530 = -1;
	uint8_t x531 = UINT8_MAX;
	int32_t x532 = 1392;
	uint64_t t124 = 61801LLU;

    t124 = ((x529^(x530^x531))-x532);

    if (t124 != 18436948348550621520LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x533 = 207828780674203719LL;
	static int8_t x534 = INT8_MAX;
	int32_t x535 = -1;
	int16_t x536 = -52;
	volatile int64_t t125 = -39LL;

    t125 = ((x533^(x534^x535))-x536);

    if (t125 != -207828780674203653LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x538 = INT8_MAX;
	int16_t x539 = 0;
	int32_t t126 = 136607;

    t126 = ((x537^(x538^x539))-x540);

    if (t126 != -38) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x545 = 76U;
	int8_t x546 = INT8_MAX;
	volatile uint64_t x547 = 7046LLU;
	int64_t x548 = INT64_MAX;
	volatile uint64_t t127 = 0LLU;

    t127 = ((x545^(x546^x547))-x548);

    if (t127 != 9223372036854782902LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int64_t x549 = INT64_MIN;
	int64_t x550 = -1LL;
	static int64_t x551 = INT64_MAX;
	int16_t x552 = INT16_MIN;
	int64_t t128 = -122266668438LL;

    t128 = ((x549^(x550^x551))-x552);

    if (t128 != 32768LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x553 = UINT64_MAX;
	int16_t x554 = -15;
	int8_t x555 = INT8_MIN;
	int16_t x556 = 6632;
	uint64_t t129 = 184411LLU;

    t129 = ((x553^(x554^x555))-x556);

    if (t129 != 18446744073709544870LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x561 = -1;
	volatile uint64_t x562 = 4189073LLU;
	static uint16_t x563 = 86U;
	uint16_t x564 = UINT16_MAX;

    t130 = ((x561^(x562^x563))-x564);

    if (t130 != 18446744073705296953LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x565 = INT32_MIN;
	volatile int8_t x566 = -1;
	volatile uint64_t x568 = UINT64_MAX;
	uint64_t t131 = 2LLU;

    t131 = ((x565^(x566^x567))-x568);

    if (t131 != 2147483521LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x569 = INT32_MIN;
	static volatile int16_t x570 = INT16_MIN;
	static int8_t x572 = -1;
	volatile int32_t t132 = 7;

    t132 = ((x569^(x570^x571))-x572);

    if (t132 != 2147451292) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x574 = UINT16_MAX;
	int8_t x575 = INT8_MIN;
	static int8_t x576 = INT8_MIN;
	int32_t t133 = 1;

    t133 = ((x573^(x574^x575))-x576);

    if (t133 != 33023) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x577 = -1;
	static volatile int8_t x578 = -1;
	int32_t x579 = INT32_MIN;
	volatile uint64_t x580 = UINT64_MAX;

    t134 = ((x577^(x578^x579))-x580);

    if (t134 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x581 = INT64_MIN;
	int8_t x582 = INT8_MIN;
	int64_t x583 = 11982616025756902LL;
	uint16_t x584 = 8093U;
	int64_t t135 = -28718357LL;

    t135 = ((x581^(x582^x583))-x584);

    if (t135 != 9211389420829010889LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x586 = UINT16_MAX;
	static uint8_t x587 = UINT8_MAX;

    t136 = ((x585^(x586^x587))-x588);

    if (t136 != -32512) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x593 = INT16_MIN;
	uint16_t x594 = 13919U;
	uint64_t x595 = UINT64_MAX;
	volatile int32_t x596 = INT32_MAX;
	uint64_t t137 = 532421645301725LLU;

    t137 = ((x593^(x594^x595))-x596);

    if (t137 != 18446744071562086817LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x597 = 2;
	static uint64_t x598 = UINT64_MAX;
	volatile uint64_t t138 = 3626502111531140LLU;

    t138 = ((x597^(x598^x599))-x600);

    if (t138 != 9223372036854776025LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x601 = INT16_MIN;
	static int16_t x602 = -1;
	int16_t x604 = 19;
	static volatile int32_t t139 = -60037;

    t139 = ((x601^(x602^x603))-x604);

    if (t139 != -32660) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x605 = INT64_MAX;
	uint8_t x606 = UINT8_MAX;
	volatile int64_t t140 = -282LL;

    t140 = ((x605^(x606^x607))-x608);

    if (t140 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x609 = UINT8_MAX;
	volatile uint16_t x610 = 19032U;
	int64_t x611 = -80716629LL;
	uint16_t x612 = 1339U;
	volatile int64_t t141 = -1LL;

    t141 = ((x609^(x610^x611))-x612);

    if (t141 != -80736047LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x613 = UINT64_MAX;
	int32_t x615 = INT32_MAX;
	uint8_t x616 = 7U;
	static uint64_t t142 = 8031079199436255235LLU;

    t142 = ((x613^(x614^x615))-x616);

    if (t142 != 18446744071562067962LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x617 = -1;
	volatile int64_t x618 = -592268LL;
	volatile int16_t x620 = INT16_MAX;
	int64_t t143 = 472485123735LL;

    t143 = ((x617^(x618^x619))-x620);

    if (t143 != -652916LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int64_t x625 = INT64_MIN;
	volatile uint8_t x626 = 7U;
	uint64_t x627 = UINT64_MAX;
	int16_t x628 = INT16_MIN;

    t144 = ((x625^(x626^x627))-x628);

    if (t144 != 9223372036854808568LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int32_t x630 = INT32_MIN;
	int8_t x632 = INT8_MIN;
	static uint64_t t145 = 18815LLU;

    t145 = ((x629^(x630^x631))-x632);

    if (t145 != 18776134587944LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x633 = -1;
	static int16_t x634 = 1;
	static int16_t x635 = 0;
	int64_t x636 = INT64_MIN;
	int64_t t146 = 587LL;

    t146 = ((x633^(x634^x635))-x636);

    if (t146 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x637 = -1;
	volatile uint8_t x638 = 10U;
	uint32_t x640 = 59U;
	uint32_t t147 = 38345757U;

    t147 = ((x637^(x638^x639))-x640);

    if (t147 != 4294741769U) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int32_t x641 = -3;
	int64_t x642 = 703689255342LL;
	static volatile int64_t x643 = 252801884632LL;
	static uint64_t t148 = 1LLU;

    t148 = ((x641^(x642^x643))-x644);

    if (t148 != 18446533818790126021LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x645 = 22U;
	int32_t x646 = 2;
	int16_t x647 = INT16_MIN;
	int32_t t149 = -73;

    t149 = ((x645^(x646^x647))-x648);

    if (t149 != -32747) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x650 = 1U;
	int32_t x652 = INT32_MIN;

    t150 = ((x649^(x650^x651))-x652);

    if (t150 != 2147483568U) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x653 = -7131;
	uint32_t x654 = 501137U;
	volatile int64_t x655 = -11138517865249674LL;
	static volatile uint8_t x656 = 22U;

    t151 = ((x653^(x654^x655))-x656);

    if (t151 != 11138517864875436LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x657 = UINT32_MAX;
	int32_t x658 = 17907357;
	static int32_t x659 = INT32_MIN;
	int8_t x660 = INT8_MAX;
	uint32_t t152 = 390298626U;

    t152 = ((x657^(x658^x659))-x660);

    if (t152 != 2129576163U) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x661 = 52644;
	int32_t x663 = INT32_MIN;
	static volatile int32_t t153 = 1;

    t153 = ((x661^(x662^x663))-x664);

    if (t153 != 2147431010) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x665 = INT64_MIN;
	uint64_t x666 = 221161217835LLU;
	uint8_t x668 = UINT8_MAX;
	uint64_t t154 = 6158599936029391128LLU;

    t154 = ((x665^(x666^x667))-x668);

    if (t154 != 9223371815693557717LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x669 = INT16_MIN;
	static uint32_t x670 = 57U;
	int8_t x671 = INT8_MIN;
	uint16_t x672 = UINT16_MAX;
	uint32_t t155 = 185U;

    t155 = ((x669^(x670^x671))-x672);

    if (t155 != 4294934458U) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x673 = INT64_MAX;
	int32_t x674 = INT32_MIN;
	int16_t x675 = INT16_MIN;
	static int8_t x676 = INT8_MAX;
	static volatile int64_t t156 = 479499880662383069LL;

    t156 = ((x673^(x674^x675))-x676);

    if (t156 != 9223372034707324800LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint8_t x677 = 77U;
	static int32_t x678 = INT32_MIN;
	volatile uint32_t t157 = 12573283U;

    t157 = ((x677^(x678^x679))-x680);

    if (t157 != 2144581953U) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x681 = 63LL;
	int32_t x683 = 24695670;
	int32_t x684 = INT32_MIN;
	volatile int64_t t158 = -39146LL;

    t158 = ((x681^(x682^x683))-x684);

    if (t158 != 2122788022LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x686 = INT32_MAX;
	static int8_t x687 = -1;
	static int32_t x688 = 1781;
	int64_t t159 = -7271LL;

    t159 = ((x685^(x686^x687))-x688);

    if (t159 != -9223372034707293942LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x690 = 82116746296877LLU;
	int32_t x691 = -1;
	static uint64_t t160 = 312527800003890LLU;

    t160 = ((x689^(x690^x691))-x692);

    if (t160 != 18446661956965365162LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x693 = -1;
	int16_t x694 = -1;
	static int32_t x696 = -1;
	static volatile int64_t t161 = -11426LL;

    t161 = ((x693^(x694^x695))-x696);

    if (t161 != -82198LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x697 = INT8_MIN;
	int16_t x698 = INT16_MAX;
	volatile int16_t x699 = -67;
	volatile int32_t t162 = -5758695;

    t162 = ((x697^(x698^x699))-x700);

    if (t162 != 32704) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x707 = INT16_MAX;
	volatile uint16_t x708 = UINT16_MAX;

    t163 = ((x705^(x706^x707))-x708);

    if (t163 != -32768) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x709 = INT64_MIN;
	int64_t x710 = -361461314496594LL;
	int16_t x711 = INT16_MAX;
	volatile int64_t t164 = 26424284023284LL;

    t164 = ((x709^(x710^x711))-x712);

    if (t164 != 9223010575540267088LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x713 = 11U;
	static int32_t x714 = -1;
	static int8_t x716 = INT8_MIN;
	volatile int32_t t165 = 390422435;

    t165 = ((x713^(x714^x715))-x716);

    if (t165 != 1425) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x717 = -1LL;
	volatile int8_t x718 = INT8_MIN;
	volatile int64_t x719 = INT64_MIN;
	int64_t x720 = -2LL;
	int64_t t166 = 108873302568LL;

    t166 = ((x717^(x718^x719))-x720);

    if (t166 != -9223372036854775679LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint16_t x725 = 103U;
	static int16_t x726 = 2;
	int8_t x727 = INT8_MIN;
	int64_t x728 = INT64_MIN;
	static volatile int64_t t167 = 11072027585LL;

    t167 = ((x725^(x726^x727))-x728);

    if (t167 != 9223372036854775781LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x729 = 0LLU;
	uint8_t x730 = 39U;
	uint64_t x731 = 698497203178LLU;
	static volatile int16_t x732 = -1;
	uint64_t t168 = 212LLU;

    t168 = ((x729^(x730^x731))-x732);

    if (t168 != 698497203150LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x733 = 1543856U;
	static int16_t x734 = 0;
	volatile uint64_t x735 = 13962830240226LLU;
	uint64_t x736 = 10618LLU;
	uint64_t t169 = 111787791LLU;

    t169 = ((x733^(x734^x735))-x736);

    if (t169 != 13962831637976LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x737 = -568;
	uint64_t x738 = 42575268077029LLU;
	uint64_t x739 = UINT64_MAX;
	int16_t x740 = INT16_MIN;

    t170 = ((x737^(x738^x739))-x740);

    if (t170 != 42575268110290LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x741 = 20U;
	uint16_t x742 = 2U;
	volatile uint64_t x743 = 973823766608LLU;
	uint64_t t171 = 10395188666344LLU;

    t171 = ((x741^(x742^x743))-x744);

    if (t171 != 1549514137043904LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x747 = INT32_MIN;
	static int16_t x748 = -1;
	static volatile uint32_t t172 = 1573U;

    t172 = ((x745^(x746^x747))-x748);

    if (t172 != 127U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x750 = 29390272LLU;
	uint16_t x751 = 1632U;
	int8_t x752 = -1;
	volatile uint64_t t173 = 29634153887302LLU;

    t173 = ((x749^(x750^x751))-x752);

    if (t173 != 18446744073680161884LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x753 = UINT16_MAX;
	int8_t x754 = -1;
	uint8_t x755 = 0U;
	int32_t x756 = INT32_MIN;
	int32_t t174 = 385235;

    t174 = ((x753^(x754^x755))-x756);

    if (t174 != 2147418112) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x757 = INT8_MAX;
	static int32_t x758 = -11099272;
	int32_t x759 = -328710;
	int8_t x760 = INT8_MIN;
	volatile int32_t t175 = -370151;

    t175 = ((x757^(x758^x759))-x760);

    if (t175 != 11295101) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x761 = INT16_MAX;
	static volatile int16_t x762 = -5;
	int32_t x763 = INT32_MIN;
	uint8_t x764 = 0U;
	static volatile int32_t t176 = 2704;

    t176 = ((x761^(x762^x763))-x764);

    if (t176 != 2147450884) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x767 = INT64_MIN;
	int8_t x768 = -6;
	int64_t t177 = -70727LL;

    t177 = ((x765^(x766^x767))-x768);

    if (t177 != -9223372036854748745LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x769 = 0;
	int16_t x770 = 17;
	int8_t x771 = INT8_MIN;
	int64_t x772 = INT64_MIN;
	int64_t t178 = -8781LL;

    t178 = ((x769^(x770^x771))-x772);

    if (t178 != 9223372036854775697LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x777 = -4205500205963LL;
	volatile uint8_t x779 = 108U;
	int32_t x780 = INT32_MIN;
	int64_t t179 = -362906876342216LL;

    t179 = ((x777^(x778^x779))-x780);

    if (t179 != -4203325966662LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x782 = UINT64_MAX;
	int64_t x783 = -1LL;

    t180 = ((x781^(x782^x783))-x784);

    if (t180 != 18446744071562100736LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x785 = -38;
	int64_t x786 = -8130570506319LL;
	uint32_t x787 = UINT32_MAX;
	volatile int32_t x788 = INT32_MAX;
	static int64_t t181 = 1444LL;

    t181 = ((x785^(x786^x787))-x788);

    if (t181 != 8132323159957LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint64_t x789 = UINT64_MAX;
	int64_t x790 = INT64_MIN;
	int64_t x792 = -7023LL;
	volatile uint64_t t182 = 2341193524LLU;

    t182 = ((x789^(x790^x791))-x792);

    if (t182 != 9223372036854782047LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x793 = INT16_MIN;
	volatile int32_t x794 = -208797;
	uint32_t x795 = 8858733U;
	int16_t x796 = 472;
	volatile uint32_t t183 = 4U;

    t183 = ((x793^(x794^x795))-x796);

    if (t183 != 8682038U) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint8_t x797 = 6U;
	int64_t x798 = INT64_MAX;
	int16_t x799 = INT16_MAX;
	static uint16_t x800 = 149U;
	volatile int64_t t184 = -149LL;

    t184 = ((x797^(x798^x799))-x800);

    if (t184 != 9223372036854742897LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int16_t x801 = INT16_MIN;
	volatile int64_t x802 = INT64_MIN;
	int8_t x803 = INT8_MAX;
	int8_t x804 = INT8_MIN;
	int64_t t185 = 9LL;

    t185 = ((x801^(x802^x803))-x804);

    if (t185 != 9223372036854743295LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x807 = INT16_MAX;
	int32_t t186 = 146;

    t186 = ((x805^(x806^x807))-x808);

    if (t186 != 354) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x809 = 192216100LL;
	static int8_t x810 = INT8_MAX;
	static uint8_t x811 = UINT8_MAX;
	static int16_t x812 = INT16_MIN;
	volatile int64_t t187 = 40205885398529LL;

    t187 = ((x809^(x810^x811))-x812);

    if (t187 != 192248996LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x813 = -1;
	int64_t x814 = INT64_MAX;
	volatile uint32_t x815 = 887429483U;
	int32_t x816 = -1;
	int64_t t188 = -1971822LL;

    t188 = ((x813^(x814^x815))-x816);

    if (t188 != -9223372035967346324LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x817 = INT64_MIN;
	int64_t x818 = INT64_MIN;
	volatile uint64_t x819 = UINT64_MAX;
	uint32_t x820 = 1839052049U;
	uint64_t t189 = 823LLU;

    t189 = ((x817^(x818^x819))-x820);

    if (t189 != 18446744071870499566LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x821 = INT8_MAX;
	int8_t x822 = -1;
	int16_t x823 = INT16_MIN;
	volatile int64_t x824 = -891930951LL;
	volatile int64_t t190 = 0LL;

    t190 = ((x821^(x822^x823))-x824);

    if (t190 != 891963591LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint16_t x826 = UINT16_MAX;
	volatile int64_t x827 = -199080LL;
	volatile uint8_t x828 = 127U;
	int64_t t191 = 4LL;

    t191 = ((x825^(x826^x827))-x828);

    if (t191 != 2147223848LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x829 = 522854825;
	int32_t x830 = INT32_MAX;
	int32_t x831 = 0;
	int8_t x832 = INT8_MIN;
	volatile int32_t t192 = 1;

    t192 = ((x829^(x830^x831))-x832);

    if (t192 != 1624628950) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x833 = UINT8_MAX;
	int64_t x834 = INT64_MIN;
	volatile int64_t x836 = -1LL;
	volatile int64_t t193 = 691324427LL;

    t193 = ((x833^(x834^x835))-x836);

    if (t193 != -9223372034707292415LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x842 = UINT64_MAX;
	int64_t x844 = -894672460303LL;
	volatile uint64_t t194 = 109787LLU;

    t194 = ((x841^(x842^x843))-x844);

    if (t194 != 894672460274LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x845 = 0;
	uint16_t x846 = 159U;
	static uint16_t x847 = 253U;
	volatile int64_t x848 = INT64_MAX;

    t195 = ((x845^(x846^x847))-x848);

    if (t195 != -9223372036854775709LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x849 = -1;
	volatile int32_t x850 = -1;
	int64_t x851 = INT64_MIN;
	int64_t x852 = -1LL;
	volatile int64_t t196 = 15769LL;

    t196 = ((x849^(x850^x851))-x852);

    if (t196 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x853 = INT8_MIN;
	uint16_t x854 = 292U;
	volatile int8_t x855 = INT8_MAX;
	int32_t x856 = -1;
	static volatile int32_t t197 = 381;

    t197 = ((x853^(x854^x855))-x856);

    if (t197 != -292) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x858 = INT8_MIN;
	static volatile int32_t x859 = INT32_MAX;
	static volatile int32_t t198 = 192;

    t198 = ((x857^(x858^x859))-x860);

    if (t198 != 2147483521) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x861 = 169699U;
	static uint8_t x862 = 7U;
	int16_t x864 = -1;
	uint32_t t199 = 462693U;

    t199 = ((x861^(x862^x863))-x864);

    if (t199 != 2147313948U) { NG(); } else { ; }
	
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

