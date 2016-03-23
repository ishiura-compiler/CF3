
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

int64_t x3 = -1LL;
int32_t x5 = -1;
uint8_t x9 = 47U;
volatile uint32_t x12 = UINT32_MAX;
volatile int32_t t2 = 14;
uint8_t x15 = 1U;
int16_t x17 = INT16_MIN;
int32_t x26 = -1;
volatile int32_t t6 = -521122054;
int32_t t8 = 20338004;
int64_t x40 = -3837479LL;
int32_t x44 = INT32_MIN;
static int32_t x47 = INT32_MIN;
static volatile int16_t x57 = -13;
int32_t x58 = -1;
static int32_t t13 = -27627156;
uint32_t x65 = 165U;
uint32_t x73 = UINT32_MAX;
uint64_t x81 = UINT64_MAX;
int32_t x88 = -1;
int32_t t21 = -40490066;
static int16_t x95 = INT16_MIN;
int64_t x101 = INT64_MAX;
volatile int8_t x103 = -1;
int64_t x110 = -5793131400996LL;
int64_t x111 = INT64_MIN;
int8_t x114 = INT8_MAX;
static int16_t x122 = INT16_MIN;
int32_t x134 = INT32_MAX;
static volatile int16_t x136 = 1;
uint32_t x142 = 5081U;
uint32_t x144 = 13727231U;
uint16_t x147 = UINT16_MAX;
volatile int32_t t35 = -223838569;
int16_t x153 = INT16_MIN;
int16_t x155 = INT16_MIN;
uint32_t x165 = UINT32_MAX;
volatile uint64_t x166 = UINT64_MAX;
int32_t t40 = 0;
int64_t x170 = INT64_MAX;
int8_t x174 = INT8_MIN;
static uint8_t x181 = 2U;
int16_t x186 = INT16_MIN;
int8_t x197 = INT8_MAX;
volatile int32_t t48 = 2443335;
int16_t x206 = -1;
uint16_t x207 = 16U;
uint8_t x208 = UINT8_MAX;
static int16_t x211 = INT16_MIN;
volatile int32_t t52 = -339964146;
volatile int32_t t53 = 1;
volatile int32_t t55 = -2371;
volatile uint16_t x233 = 27U;
uint16_t x236 = 2U;
static int32_t t56 = 1;
uint64_t x241 = UINT64_MAX;
int32_t t58 = -41627;
int8_t x245 = INT8_MAX;
uint16_t x248 = UINT16_MAX;
int64_t x249 = INT64_MIN;
uint64_t x254 = 176862LLU;
static volatile uint8_t x255 = 13U;
volatile int8_t x256 = -1;
volatile int32_t t64 = 1;
static volatile uint64_t x275 = UINT64_MAX;
static uint8_t x276 = 2U;
static uint32_t x280 = 6869085U;
static volatile int32_t t66 = 1336085;
static volatile int64_t x283 = INT64_MAX;
int16_t x286 = INT16_MIN;
static int32_t t68 = -1349;
int64_t x295 = -1LL;
volatile int32_t t70 = -727600869;
static uint64_t x298 = UINT64_MAX;
uint16_t x299 = 211U;
uint16_t x301 = UINT16_MAX;
static int32_t x307 = -1;
int32_t x309 = -198;
int64_t x313 = INT64_MIN;
int16_t x314 = INT16_MIN;
int16_t x320 = INT16_MIN;
volatile int32_t t77 = -2157939;
int8_t x329 = INT8_MIN;
int32_t x332 = INT32_MIN;
int32_t t79 = -3668591;
int8_t x337 = -31;
static int8_t x344 = -1;
static volatile uint16_t x347 = 2922U;
int8_t x353 = INT8_MIN;
int16_t x354 = INT16_MIN;
int8_t x356 = -1;
uint8_t x359 = 3U;
int8_t x368 = INT8_MIN;
int8_t x375 = -1;
static uint16_t x378 = 1900U;
static int8_t x385 = 1;
static int32_t t93 = -7;
volatile uint64_t x402 = 43960LLU;
uint64_t x404 = 0LLU;
int32_t t96 = -1416457;
int64_t x405 = INT64_MAX;
static volatile uint32_t x414 = 923303U;
static int32_t x417 = -238;
int32_t t100 = -1;
volatile int64_t x423 = INT64_MAX;
uint8_t x431 = UINT8_MAX;
volatile int32_t t103 = 135216984;
static int32_t t105 = 2773035;
static volatile int64_t x444 = -1LL;
int32_t t106 = 993386;
int8_t x448 = 2;
int8_t x455 = -3;
volatile int32_t t109 = 3;
int64_t x457 = INT64_MIN;
int16_t x468 = 1495;
uint16_t x474 = 129U;
uint32_t x480 = 4U;
volatile int32_t t115 = 195;
volatile int8_t x483 = 6;
int16_t x487 = -20;
static int8_t x489 = -1;
int8_t x500 = INT8_MIN;
static int16_t x503 = INT16_MIN;
static int32_t t122 = 50;
volatile int8_t x514 = -1;
volatile int32_t t124 = -29058404;
int16_t x519 = 11475;
volatile int64_t x520 = -1LL;
uint32_t x522 = 4173431U;
static uint16_t x526 = UINT16_MAX;
volatile int32_t t129 = 24;
int16_t x545 = INT16_MIN;
int16_t x546 = -1;
static int32_t t131 = -21263;
int32_t x552 = -1;
volatile int32_t t133 = -5752558;
static uint8_t x557 = 0U;
static int32_t t135 = -44046;
uint16_t x565 = 9U;
int32_t x579 = INT32_MIN;
int32_t t140 = -145979;
static uint64_t x590 = 277974235410092LLU;
int32_t t144 = -38946284;
volatile uint64_t x602 = UINT64_MAX;
int32_t x604 = -4165;
int8_t x606 = -1;
int32_t x607 = INT32_MAX;
int32_t x620 = -1;
uint64_t x621 = 1543675919853584232LLU;
static volatile int32_t t150 = -1594519;
uint16_t x625 = 455U;
static uint8_t x627 = 0U;
static volatile int32_t t151 = -216283900;
int16_t x632 = -1;
int64_t x635 = INT64_MIN;
volatile uint64_t x639 = UINT64_MAX;
int64_t x644 = INT64_MIN;
static int16_t x645 = INT16_MIN;
static int16_t x646 = 3634;
uint32_t x648 = 24770898U;
int64_t x658 = INT64_MIN;
static int16_t x665 = INT16_MAX;
int32_t x672 = -1;
int64_t x676 = INT64_MIN;
int32_t x678 = 6047232;
volatile uint16_t x686 = 27U;
volatile int32_t t166 = 2;
static int64_t x695 = -1LL;
volatile int32_t t167 = 16313;
uint8_t x700 = 74U;
int32_t t168 = -280;
volatile uint64_t x715 = 564LLU;
int64_t x732 = INT64_MIN;
int16_t x734 = INT16_MIN;
volatile uint32_t x735 = 175278U;
static uint8_t x746 = 7U;
volatile uint32_t x750 = UINT32_MAX;
static int16_t x755 = 375;
uint16_t x756 = 4U;
volatile uint64_t x772 = 6LLU;
int8_t x777 = INT8_MAX;
int32_t t187 = 8879;
int64_t x783 = INT64_MIN;
uint8_t x784 = 2U;
volatile int8_t x787 = -1;
static int16_t x788 = 1;
static int32_t t189 = 18;
int16_t x789 = -15700;
static uint64_t x790 = UINT64_MAX;
volatile int16_t x794 = INT16_MIN;
volatile int32_t t191 = 23300817;
static uint8_t x801 = 0U;
volatile int32_t t193 = 5979;
uint16_t x805 = 1U;
volatile int32_t t194 = -3727;
int8_t x815 = 36;


void f0(void) {
    	int8_t x1 = -29;
	int8_t x2 = INT8_MIN;
	uint64_t x4 = 26024139LLU;
	volatile int32_t t0 = -319149690;

    t0 = ((x1%x2)<=(x3==x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = INT64_MAX;
	static int8_t x7 = 3;
	static uint32_t x8 = 553U;
	int32_t t1 = 400376;

    t1 = ((x5%x6)<=(x7==x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x10 = -52518959439LL;
	uint8_t x11 = 1U;

    t2 = ((x9%x10)<=(x11==x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	int64_t x14 = 4371LL;
	uint8_t x16 = 67U;
	static int32_t t3 = -246;

    t3 = ((x13%x14)<=(x15==x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x18 = INT64_MIN;
	uint16_t x19 = 1542U;
	uint8_t x20 = UINT8_MAX;
	int32_t t4 = -309980255;

    t4 = ((x17%x18)<=(x19==x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 39U;
	static volatile int32_t x22 = INT32_MIN;
	uint8_t x23 = UINT8_MAX;
	static volatile int8_t x24 = INT8_MAX;
	volatile int32_t t5 = -105200;

    t5 = ((x21%x22)<=(x23==x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x25 = 1U;
	volatile uint64_t x27 = 4770935937430778LLU;
	int8_t x28 = INT8_MAX;

    t6 = ((x25%x26)<=(x27==x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = UINT64_MAX;
	uint8_t x30 = 1U;
	int8_t x31 = 29;
	static int32_t x32 = -1808184;
	volatile int32_t t7 = 320930;

    t7 = ((x29%x30)<=(x31==x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MAX;
	volatile int8_t x34 = -1;
	int16_t x35 = INT16_MIN;
	uint32_t x36 = 21U;

    t8 = ((x33%x34)<=(x35==x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MAX;
	static int16_t x38 = -35;
	uint64_t x39 = UINT64_MAX;
	volatile int32_t t9 = -176;

    t9 = ((x37%x38)<=(x39==x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = 2U;
	volatile int32_t x42 = -1;
	volatile int16_t x43 = INT16_MIN;
	static int32_t t10 = 619782655;

    t10 = ((x41%x42)<=(x43==x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = UINT8_MAX;
	volatile int16_t x46 = -1;
	int8_t x48 = INT8_MAX;
	int32_t t11 = -13416;

    t11 = ((x45%x46)<=(x47==x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x53 = 21U;
	static volatile uint8_t x54 = 3U;
	int32_t x55 = INT32_MIN;
	int16_t x56 = -27;
	int32_t t12 = 87009;

    t12 = ((x53%x54)<=(x55==x56));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x59 = 53U;
	static int64_t x60 = INT64_MIN;

    t13 = ((x57%x58)<=(x59==x60));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = INT64_MAX;
	uint64_t x62 = UINT64_MAX;
	int16_t x63 = INT16_MIN;
	int32_t x64 = INT32_MAX;
	volatile int32_t t14 = -1;

    t14 = ((x61%x62)<=(x63==x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x66 = -1;
	uint64_t x67 = 2576660675454LLU;
	int32_t x68 = 693915962;
	volatile int32_t t15 = -3044944;

    t15 = ((x65%x66)<=(x67==x68));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x69 = 0;
	static volatile int16_t x70 = INT16_MIN;
	int32_t x71 = -1;
	uint16_t x72 = 439U;
	volatile int32_t t16 = -11;

    t16 = ((x69%x70)<=(x71==x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x74 = 122U;
	int32_t x75 = 201902833;
	uint16_t x76 = 195U;
	volatile int32_t t17 = 387;

    t17 = ((x73%x74)<=(x75==x76));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x77 = UINT32_MAX;
	int32_t x78 = 227;
	static int64_t x79 = -210LL;
	int64_t x80 = -1LL;
	volatile int32_t t18 = -199969953;

    t18 = ((x77%x78)<=(x79==x80));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x82 = INT64_MIN;
	uint32_t x83 = 196U;
	volatile int64_t x84 = -1LL;
	volatile int32_t t19 = 103998143;

    t19 = ((x81%x82)<=(x83==x84));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x85 = 32110658050510LLU;
	int64_t x86 = -1LL;
	int64_t x87 = -1LL;
	int32_t t20 = 494443525;

    t20 = ((x85%x86)<=(x87==x88));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x89 = -2;
	volatile int16_t x90 = -1;
	uint16_t x91 = 0U;
	uint16_t x92 = UINT16_MAX;

    t21 = ((x89%x90)<=(x91==x92));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x93 = INT32_MIN;
	int32_t x94 = -1;
	int16_t x96 = INT16_MAX;
	static int32_t t22 = -40;

    t22 = ((x93%x94)<=(x95==x96));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x97 = UINT8_MAX;
	static int8_t x98 = 1;
	int32_t x99 = -5622703;
	int8_t x100 = INT8_MIN;
	volatile int32_t t23 = -155450476;

    t23 = ((x97%x98)<=(x99==x100));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x102 = 389U;
	int64_t x104 = INT64_MIN;
	static volatile int32_t t24 = -1;

    t24 = ((x101%x102)<=(x103==x104));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x105 = UINT8_MAX;
	int16_t x106 = -1;
	volatile uint32_t x107 = 9U;
	int16_t x108 = 177;
	volatile int32_t t25 = 173;

    t25 = ((x105%x106)<=(x107==x108));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x109 = INT8_MAX;
	volatile int32_t x112 = 2381;
	volatile int32_t t26 = -615508;

    t26 = ((x109%x110)<=(x111==x112));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x113 = INT64_MIN;
	int64_t x115 = -369474715LL;
	static int32_t x116 = -1;
	static int32_t t27 = 237140275;

    t27 = ((x113%x114)<=(x115==x116));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int64_t x117 = INT64_MIN;
	int32_t x118 = -1;
	static int16_t x119 = INT16_MAX;
	volatile int8_t x120 = 1;
	int32_t t28 = 1202;

    t28 = ((x117%x118)<=(x119==x120));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x121 = -128339423707771597LL;
	uint8_t x123 = UINT8_MAX;
	static int16_t x124 = INT16_MAX;
	static int32_t t29 = 56086566;

    t29 = ((x121%x122)<=(x123==x124));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x125 = INT8_MIN;
	int64_t x126 = INT64_MIN;
	int16_t x127 = -1;
	int64_t x128 = INT64_MAX;
	static int32_t t30 = 1022;

    t30 = ((x125%x126)<=(x127==x128));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x129 = 0;
	int8_t x130 = -1;
	int32_t x131 = -1;
	int16_t x132 = 1215;
	volatile int32_t t31 = 0;

    t31 = ((x129%x130)<=(x131==x132));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x133 = INT32_MAX;
	volatile int16_t x135 = INT16_MAX;
	volatile int32_t t32 = 1934928;

    t32 = ((x133%x134)<=(x135==x136));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x137 = 12110U;
	int16_t x138 = INT16_MIN;
	int16_t x139 = INT16_MIN;
	int64_t x140 = INT64_MAX;
	volatile int32_t t33 = 20787;

    t33 = ((x137%x138)<=(x139==x140));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x141 = 7U;
	int32_t x143 = -1;
	int32_t t34 = -550;

    t34 = ((x141%x142)<=(x143==x144));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x145 = -1;
	uint64_t x146 = UINT64_MAX;
	static int32_t x148 = -49306;

    t35 = ((x145%x146)<=(x147==x148));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x149 = 0;
	int16_t x150 = -287;
	int64_t x151 = INT64_MAX;
	uint8_t x152 = 47U;
	int32_t t36 = -44551669;

    t36 = ((x149%x150)<=(x151==x152));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x154 = INT64_MIN;
	int16_t x156 = 376;
	static volatile int32_t t37 = 1736999;

    t37 = ((x153%x154)<=(x155==x156));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x157 = INT64_MAX;
	volatile int8_t x158 = -54;
	int8_t x159 = 0;
	uint32_t x160 = UINT32_MAX;
	int32_t t38 = 0;

    t38 = ((x157%x158)<=(x159==x160));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x161 = 34U;
	volatile int8_t x162 = -1;
	int16_t x163 = 24;
	uint64_t x164 = UINT64_MAX;
	int32_t t39 = -122230983;

    t39 = ((x161%x162)<=(x163==x164));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x167 = -1LL;
	uint8_t x168 = 0U;

    t40 = ((x165%x166)<=(x167==x168));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x169 = INT8_MIN;
	uint64_t x171 = 249817LLU;
	int16_t x172 = 239;
	volatile int32_t t41 = -1;

    t41 = ((x169%x170)<=(x171==x172));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x173 = -26;
	int16_t x175 = INT16_MIN;
	int32_t x176 = -10093780;
	volatile int32_t t42 = 226;

    t42 = ((x173%x174)<=(x175==x176));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x177 = INT64_MIN;
	int8_t x178 = -1;
	int32_t x179 = INT32_MAX;
	volatile int32_t x180 = -1;
	int32_t t43 = -991;

    t43 = ((x177%x178)<=(x179==x180));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x182 = INT8_MIN;
	static int8_t x183 = -1;
	int8_t x184 = INT8_MAX;
	volatile int32_t t44 = -618;

    t44 = ((x181%x182)<=(x183==x184));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x185 = INT64_MIN;
	int8_t x187 = 1;
	static uint8_t x188 = 15U;
	int32_t t45 = -22101769;

    t45 = ((x185%x186)<=(x187==x188));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x189 = 1U;
	int64_t x190 = INT64_MAX;
	int8_t x191 = INT8_MIN;
	static int32_t x192 = 5;
	int32_t t46 = 28494;

    t46 = ((x189%x190)<=(x191==x192));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x193 = 6U;
	int16_t x194 = INT16_MAX;
	uint8_t x195 = 127U;
	static uint16_t x196 = UINT16_MAX;
	static int32_t t47 = -2;

    t47 = ((x193%x194)<=(x195==x196));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x198 = 1638545895U;
	volatile int64_t x199 = 1749425455LL;
	int8_t x200 = INT8_MIN;

    t48 = ((x197%x198)<=(x199==x200));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x201 = -1880;
	int32_t x202 = INT32_MIN;
	int32_t x203 = INT32_MIN;
	volatile int32_t x204 = -1;
	int32_t t49 = -3307142;

    t49 = ((x201%x202)<=(x203==x204));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x205 = INT16_MIN;
	volatile int32_t t50 = -11367;

    t50 = ((x205%x206)<=(x207==x208));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x209 = INT8_MIN;
	uint16_t x210 = 43U;
	volatile int32_t x212 = INT32_MAX;
	volatile int32_t t51 = 0;

    t51 = ((x209%x210)<=(x211==x212));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint16_t x213 = 251U;
	volatile int16_t x214 = 11;
	static int64_t x215 = INT64_MIN;
	uint8_t x216 = UINT8_MAX;

    t52 = ((x213%x214)<=(x215==x216));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x217 = INT8_MIN;
	static uint8_t x218 = 68U;
	int8_t x219 = INT8_MAX;
	uint8_t x220 = UINT8_MAX;

    t53 = ((x217%x218)<=(x219==x220));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x221 = UINT64_MAX;
	static int16_t x222 = -1;
	int8_t x223 = INT8_MAX;
	static uint32_t x224 = 46585U;
	volatile int32_t t54 = -19163;

    t54 = ((x221%x222)<=(x223==x224));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint8_t x225 = 10U;
	int64_t x226 = 168011487LL;
	uint8_t x227 = UINT8_MAX;
	uint16_t x228 = UINT16_MAX;

    t55 = ((x225%x226)<=(x227==x228));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x234 = 3570375;
	uint8_t x235 = 0U;

    t56 = ((x233%x234)<=(x235==x236));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x237 = INT16_MIN;
	volatile int8_t x238 = -7;
	int32_t x239 = -488397;
	int8_t x240 = 13;
	int32_t t57 = 75;

    t57 = ((x237%x238)<=(x239==x240));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x242 = INT32_MIN;
	static int64_t x243 = INT64_MIN;
	int8_t x244 = -1;

    t58 = ((x241%x242)<=(x243==x244));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x246 = UINT64_MAX;
	int32_t x247 = INT32_MIN;
	int32_t t59 = -53284454;

    t59 = ((x245%x246)<=(x247==x248));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x250 = UINT16_MAX;
	uint32_t x251 = 6226U;
	volatile uint16_t x252 = 2790U;
	int32_t t60 = 4810;

    t60 = ((x249%x250)<=(x251==x252));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x253 = -416;
	volatile int32_t t61 = 199404979;

    t61 = ((x253%x254)<=(x255==x256));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x257 = -25360;
	volatile int64_t x258 = INT64_MIN;
	int32_t x259 = INT32_MIN;
	static volatile uint64_t x260 = 30311648520272LLU;
	int32_t t62 = -21;

    t62 = ((x257%x258)<=(x259==x260));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x265 = INT16_MAX;
	int16_t x266 = INT16_MIN;
	int16_t x267 = -162;
	uint8_t x268 = 46U;
	volatile int32_t t63 = -3804;

    t63 = ((x265%x266)<=(x267==x268));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x269 = INT32_MIN;
	volatile int16_t x270 = INT16_MIN;
	volatile int16_t x271 = INT16_MAX;
	uint16_t x272 = UINT16_MAX;

    t64 = ((x269%x270)<=(x271==x272));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x273 = -7;
	uint16_t x274 = 9U;
	volatile int32_t t65 = -2;

    t65 = ((x273%x274)<=(x275==x276));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x277 = INT16_MIN;
	static uint8_t x278 = UINT8_MAX;
	uint32_t x279 = 698U;

    t66 = ((x277%x278)<=(x279==x280));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x281 = -1;
	static int8_t x282 = INT8_MAX;
	int32_t x284 = INT32_MIN;
	int32_t t67 = -2354565;

    t67 = ((x281%x282)<=(x283==x284));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x285 = -745063935;
	int32_t x287 = INT32_MIN;
	volatile int8_t x288 = -2;

    t68 = ((x285%x286)<=(x287==x288));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x289 = INT8_MAX;
	volatile uint16_t x290 = 3771U;
	int64_t x291 = -124777645733199206LL;
	int64_t x292 = INT64_MIN;
	int32_t t69 = -17923473;

    t69 = ((x289%x290)<=(x291==x292));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x293 = INT8_MIN;
	uint64_t x294 = 770800LLU;
	int32_t x296 = 0;

    t70 = ((x293%x294)<=(x295==x296));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x297 = UINT8_MAX;
	uint16_t x300 = 3U;
	int32_t t71 = -245;

    t71 = ((x297%x298)<=(x299==x300));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x302 = INT8_MAX;
	int16_t x303 = 6;
	int16_t x304 = -36;
	int32_t t72 = -48;

    t72 = ((x301%x302)<=(x303==x304));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x305 = INT64_MIN;
	int8_t x306 = -7;
	int8_t x308 = -1;
	volatile int32_t t73 = 13322008;

    t73 = ((x305%x306)<=(x307==x308));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x310 = INT32_MAX;
	static int64_t x311 = INT64_MIN;
	volatile int16_t x312 = INT16_MIN;
	int32_t t74 = -324225514;

    t74 = ((x309%x310)<=(x311==x312));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x315 = 0;
	int32_t x316 = INT32_MIN;
	volatile int32_t t75 = 7469;

    t75 = ((x313%x314)<=(x315==x316));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x317 = UINT32_MAX;
	static int16_t x318 = 27;
	int16_t x319 = INT16_MIN;
	int32_t t76 = -123299;

    t76 = ((x317%x318)<=(x319==x320));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x321 = UINT32_MAX;
	volatile int8_t x322 = 59;
	volatile int64_t x323 = 657LL;
	uint64_t x324 = UINT64_MAX;

    t77 = ((x321%x322)<=(x323==x324));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x325 = INT64_MIN;
	volatile int64_t x326 = INT64_MAX;
	uint16_t x327 = 1U;
	int64_t x328 = 32959810016427814LL;
	volatile int32_t t78 = 342;

    t78 = ((x325%x326)<=(x327==x328));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x330 = 7U;
	static int64_t x331 = -1LL;

    t79 = ((x329%x330)<=(x331==x332));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x338 = 3999638586998551919LLU;
	static int32_t x339 = INT32_MIN;
	uint64_t x340 = 246350071LLU;
	int32_t t80 = 49547;

    t80 = ((x337%x338)<=(x339==x340));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile uint64_t x341 = 2294603962793836LLU;
	volatile uint64_t x342 = UINT64_MAX;
	uint16_t x343 = 0U;
	int32_t t81 = 0;

    t81 = ((x341%x342)<=(x343==x344));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x345 = 242;
	uint64_t x346 = 29947LLU;
	int16_t x348 = INT16_MIN;
	static volatile int32_t t82 = -52;

    t82 = ((x345%x346)<=(x347==x348));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x349 = -1LL;
	static int32_t x350 = -1;
	int16_t x351 = INT16_MIN;
	int32_t x352 = -1;
	int32_t t83 = 90224972;

    t83 = ((x349%x350)<=(x351==x352));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x355 = 21LL;
	volatile int32_t t84 = 3157124;

    t84 = ((x353%x354)<=(x355==x356));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x357 = INT16_MIN;
	int16_t x358 = INT16_MAX;
	int64_t x360 = -1LL;
	volatile int32_t t85 = 6904466;

    t85 = ((x357%x358)<=(x359==x360));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x361 = -148;
	static uint32_t x362 = UINT32_MAX;
	static uint8_t x363 = 20U;
	uint16_t x364 = UINT16_MAX;
	int32_t t86 = 139424686;

    t86 = ((x361%x362)<=(x363==x364));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x365 = 30U;
	static volatile uint16_t x366 = 13647U;
	int64_t x367 = -412195306LL;
	int32_t t87 = -437445207;

    t87 = ((x365%x366)<=(x367==x368));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x369 = INT32_MAX;
	int16_t x370 = INT16_MIN;
	int32_t x371 = 1085504;
	int8_t x372 = INT8_MIN;
	int32_t t88 = 145115;

    t88 = ((x369%x370)<=(x371==x372));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x373 = INT64_MIN;
	volatile int64_t x374 = 3LL;
	volatile int16_t x376 = INT16_MIN;
	static volatile int32_t t89 = -1;

    t89 = ((x373%x374)<=(x375==x376));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x377 = 337959092U;
	volatile int8_t x379 = 56;
	int32_t x380 = INT32_MAX;
	int32_t t90 = 243572;

    t90 = ((x377%x378)<=(x379==x380));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int8_t x381 = INT8_MIN;
	int8_t x382 = 10;
	int64_t x383 = 216330795LL;
	int64_t x384 = INT64_MIN;
	volatile int32_t t91 = -24691;

    t91 = ((x381%x382)<=(x383==x384));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x386 = 8461286231LLU;
	uint8_t x387 = 1U;
	static int64_t x388 = INT64_MIN;
	volatile int32_t t92 = -1370;

    t92 = ((x385%x386)<=(x387==x388));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x389 = 25U;
	int32_t x390 = INT32_MIN;
	int16_t x391 = INT16_MIN;
	int16_t x392 = 284;

    t93 = ((x389%x390)<=(x391==x392));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x393 = -1;
	volatile int8_t x394 = INT8_MAX;
	static int16_t x395 = -1;
	volatile uint8_t x396 = 0U;
	static int32_t t94 = 0;

    t94 = ((x393%x394)<=(x395==x396));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x397 = 15U;
	int8_t x398 = INT8_MIN;
	int8_t x399 = -48;
	int8_t x400 = INT8_MIN;
	int32_t t95 = 81002665;

    t95 = ((x397%x398)<=(x399==x400));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x401 = INT8_MIN;
	volatile int64_t x403 = -1LL;

    t96 = ((x401%x402)<=(x403==x404));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x406 = INT32_MIN;
	int32_t x407 = INT32_MIN;
	static uint32_t x408 = 453123543U;
	int32_t t97 = 9882;

    t97 = ((x405%x406)<=(x407==x408));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x409 = INT16_MIN;
	volatile uint64_t x410 = UINT64_MAX;
	static volatile uint32_t x411 = 861165307U;
	int32_t x412 = INT32_MAX;
	int32_t t98 = 0;

    t98 = ((x409%x410)<=(x411==x412));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x413 = INT32_MAX;
	uint64_t x415 = UINT64_MAX;
	int16_t x416 = 2430;
	static volatile int32_t t99 = 1808;

    t99 = ((x413%x414)<=(x415==x416));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x418 = 2507748964587197831LL;
	int16_t x419 = -1;
	uint64_t x420 = UINT64_MAX;

    t100 = ((x417%x418)<=(x419==x420));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x421 = -349;
	static int32_t x422 = INT32_MIN;
	uint64_t x424 = 810LLU;
	volatile int32_t t101 = 1;

    t101 = ((x421%x422)<=(x423==x424));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x425 = 12294800478228190LL;
	int64_t x426 = -1LL;
	static int64_t x427 = -621754117604741644LL;
	int32_t x428 = -441;
	static volatile int32_t t102 = -27960;

    t102 = ((x425%x426)<=(x427==x428));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x429 = 243307181LL;
	volatile int32_t x430 = INT32_MAX;
	static int64_t x432 = -28559533504LL;

    t103 = ((x429%x430)<=(x431==x432));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x433 = UINT8_MAX;
	int16_t x434 = INT16_MIN;
	int8_t x435 = 1;
	volatile int64_t x436 = -132485LL;
	volatile int32_t t104 = -619733599;

    t104 = ((x433%x434)<=(x435==x436));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x437 = UINT32_MAX;
	int16_t x438 = -1;
	int32_t x439 = INT32_MAX;
	volatile uint8_t x440 = 2U;

    t105 = ((x437%x438)<=(x439==x440));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x441 = 141U;
	static int32_t x442 = -1;
	uint8_t x443 = 1U;

    t106 = ((x441%x442)<=(x443==x444));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x445 = 0U;
	int8_t x446 = INT8_MAX;
	int16_t x447 = -1;
	int32_t t107 = -1793;

    t107 = ((x445%x446)<=(x447==x448));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int16_t x449 = 1251;
	int8_t x450 = INT8_MIN;
	int64_t x451 = INT64_MAX;
	int16_t x452 = 168;
	volatile int32_t t108 = -58;

    t108 = ((x449%x450)<=(x451==x452));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x453 = INT64_MIN;
	static volatile uint64_t x454 = UINT64_MAX;
	uint16_t x456 = 1280U;

    t109 = ((x453%x454)<=(x455==x456));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x458 = 27176633U;
	volatile int16_t x459 = INT16_MIN;
	uint16_t x460 = UINT16_MAX;
	volatile int32_t t110 = -6;

    t110 = ((x457%x458)<=(x459==x460));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x461 = INT16_MIN;
	int32_t x462 = 31720;
	int64_t x463 = -9406078LL;
	uint64_t x464 = UINT64_MAX;
	volatile int32_t t111 = -20389;

    t111 = ((x461%x462)<=(x463==x464));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x465 = INT8_MIN;
	int32_t x466 = 12423;
	uint16_t x467 = UINT16_MAX;
	int32_t t112 = -55;

    t112 = ((x465%x466)<=(x467==x468));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int16_t x469 = INT16_MIN;
	int8_t x470 = INT8_MIN;
	static int8_t x471 = INT8_MIN;
	volatile int32_t x472 = INT32_MIN;
	int32_t t113 = 12669230;

    t113 = ((x469%x470)<=(x471==x472));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x473 = 3U;
	int16_t x475 = INT16_MIN;
	volatile int64_t x476 = -1LL;
	int32_t t114 = 190;

    t114 = ((x473%x474)<=(x475==x476));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x477 = 31870351U;
	int32_t x478 = 1;
	uint32_t x479 = UINT32_MAX;

    t115 = ((x477%x478)<=(x479==x480));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x481 = INT16_MIN;
	int64_t x482 = INT64_MAX;
	uint32_t x484 = UINT32_MAX;
	int32_t t116 = 7;

    t116 = ((x481%x482)<=(x483==x484));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x485 = INT8_MAX;
	uint16_t x486 = 1U;
	int8_t x488 = INT8_MAX;
	static volatile int32_t t117 = 12359454;

    t117 = ((x485%x486)<=(x487==x488));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint8_t x490 = 2U;
	int32_t x491 = INT32_MIN;
	static int32_t x492 = -451031;
	int32_t t118 = 1867;

    t118 = ((x489%x490)<=(x491==x492));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x493 = 43LL;
	int16_t x494 = -1;
	int16_t x495 = INT16_MIN;
	int8_t x496 = 7;
	int32_t t119 = 1;

    t119 = ((x493%x494)<=(x495==x496));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x497 = 3214857516218261LLU;
	static volatile uint64_t x498 = UINT64_MAX;
	static int16_t x499 = INT16_MIN;
	volatile int32_t t120 = -201;

    t120 = ((x497%x498)<=(x499==x500));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x501 = INT64_MIN;
	int8_t x502 = 1;
	int32_t x504 = INT32_MIN;
	int32_t t121 = 4516612;

    t121 = ((x501%x502)<=(x503==x504));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x505 = 58924LLU;
	static int32_t x506 = INT32_MAX;
	int8_t x507 = 2;
	volatile int16_t x508 = INT16_MIN;

    t122 = ((x505%x506)<=(x507==x508));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x509 = -1377111LL;
	int32_t x510 = 478580;
	int32_t x511 = -1;
	int16_t x512 = INT16_MAX;
	int32_t t123 = 1;

    t123 = ((x509%x510)<=(x511==x512));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x513 = 10163LLU;
	int8_t x515 = 12;
	uint16_t x516 = UINT16_MAX;

    t124 = ((x513%x514)<=(x515==x516));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x517 = 2582U;
	static int8_t x518 = -1;
	int32_t t125 = -347187;

    t125 = ((x517%x518)<=(x519==x520));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x521 = -377;
	volatile int32_t x523 = -1;
	int8_t x524 = INT8_MIN;
	int32_t t126 = 15017;

    t126 = ((x521%x522)<=(x523==x524));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x525 = -966LL;
	static uint16_t x527 = UINT16_MAX;
	uint32_t x528 = 577U;
	volatile int32_t t127 = 240487944;

    t127 = ((x525%x526)<=(x527==x528));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x529 = 3861430021015018LL;
	uint8_t x530 = 1U;
	int64_t x531 = INT64_MIN;
	int8_t x532 = -1;
	int32_t t128 = 521;

    t128 = ((x529%x530)<=(x531==x532));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x533 = INT64_MAX;
	volatile uint64_t x534 = 475251491300533594LLU;
	uint64_t x535 = UINT64_MAX;
	uint64_t x536 = 4009LLU;

    t129 = ((x533%x534)<=(x535==x536));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint16_t x541 = 79U;
	int32_t x542 = 389684;
	static int16_t x543 = -1;
	volatile int16_t x544 = 10;
	int32_t t130 = 951915;

    t130 = ((x541%x542)<=(x543==x544));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x547 = INT8_MIN;
	int8_t x548 = INT8_MIN;

    t131 = ((x545%x546)<=(x547==x548));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x549 = INT64_MIN;
	int8_t x550 = -1;
	static volatile int32_t x551 = 350610154;
	int32_t t132 = -109;

    t132 = ((x549%x550)<=(x551==x552));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x553 = -229050432LL;
	static uint64_t x554 = UINT64_MAX;
	static uint32_t x555 = UINT32_MAX;
	uint8_t x556 = 77U;

    t133 = ((x553%x554)<=(x555==x556));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x558 = INT32_MAX;
	int32_t x559 = INT32_MAX;
	uint8_t x560 = UINT8_MAX;
	volatile int32_t t134 = 223;

    t134 = ((x557%x558)<=(x559==x560));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x561 = INT16_MIN;
	int32_t x562 = INT32_MIN;
	int32_t x563 = INT32_MIN;
	int64_t x564 = 391369950LL;

    t135 = ((x561%x562)<=(x563==x564));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x566 = 1264;
	int32_t x567 = INT32_MIN;
	uint8_t x568 = UINT8_MAX;
	int32_t t136 = 1881;

    t136 = ((x565%x566)<=(x567==x568));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x569 = INT8_MIN;
	static int16_t x570 = -1;
	int8_t x571 = INT8_MAX;
	int32_t x572 = INT32_MIN;
	static volatile int32_t t137 = 7;

    t137 = ((x569%x570)<=(x571==x572));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint32_t x573 = 1111073U;
	uint16_t x574 = 842U;
	uint64_t x575 = 3955894LLU;
	static int32_t x576 = INT32_MAX;
	volatile int32_t t138 = 738;

    t138 = ((x573%x574)<=(x575==x576));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x577 = 340;
	int8_t x578 = -1;
	volatile int32_t x580 = -148;
	int32_t t139 = 44929250;

    t139 = ((x577%x578)<=(x579==x580));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint16_t x581 = UINT16_MAX;
	uint32_t x582 = UINT32_MAX;
	static int16_t x583 = 12071;
	int64_t x584 = INT64_MAX;

    t140 = ((x581%x582)<=(x583==x584));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x585 = INT8_MIN;
	int16_t x586 = -1;
	int8_t x587 = INT8_MIN;
	int64_t x588 = INT64_MIN;
	static volatile int32_t t141 = -514300961;

    t141 = ((x585%x586)<=(x587==x588));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x589 = -1;
	int32_t x591 = INT32_MAX;
	int32_t x592 = INT32_MAX;
	static volatile int32_t t142 = 0;

    t142 = ((x589%x590)<=(x591==x592));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x593 = 138826U;
	int8_t x594 = INT8_MAX;
	int32_t x595 = -768;
	static volatile int16_t x596 = INT16_MIN;
	volatile int32_t t143 = -119273419;

    t143 = ((x593%x594)<=(x595==x596));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x597 = INT16_MAX;
	int8_t x598 = -3;
	int16_t x599 = INT16_MIN;
	int64_t x600 = 66757253699955271LL;

    t144 = ((x597%x598)<=(x599==x600));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x601 = -6;
	volatile uint8_t x603 = 32U;
	int32_t t145 = 325;

    t145 = ((x601%x602)<=(x603==x604));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x605 = 65284425;
	int64_t x608 = -34011156896LL;
	volatile int32_t t146 = 11;

    t146 = ((x605%x606)<=(x607==x608));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x609 = -1;
	int16_t x610 = 1;
	uint16_t x611 = UINT16_MAX;
	int64_t x612 = INT64_MAX;
	volatile int32_t t147 = -3;

    t147 = ((x609%x610)<=(x611==x612));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x613 = INT8_MIN;
	uint64_t x614 = UINT64_MAX;
	static uint64_t x615 = 1137LLU;
	int8_t x616 = 1;
	int32_t t148 = -518;

    t148 = ((x613%x614)<=(x615==x616));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x617 = 56935LL;
	int16_t x618 = INT16_MAX;
	uint64_t x619 = 430644LLU;
	int32_t t149 = 7811596;

    t149 = ((x617%x618)<=(x619==x620));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x622 = 169U;
	int8_t x623 = -10;
	uint64_t x624 = 7269771645951813LLU;

    t150 = ((x621%x622)<=(x623==x624));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x626 = -1;
	static int16_t x628 = -1;

    t151 = ((x625%x626)<=(x627==x628));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x629 = UINT32_MAX;
	int64_t x630 = -107723LL;
	volatile int64_t x631 = 195472884525733LL;
	int32_t t152 = 901933370;

    t152 = ((x629%x630)<=(x631==x632));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x633 = 229330790997861116LL;
	int16_t x634 = INT16_MAX;
	uint8_t x636 = 7U;
	static int32_t t153 = 122109424;

    t153 = ((x633%x634)<=(x635==x636));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x637 = -1;
	static uint16_t x638 = 1U;
	static int16_t x640 = INT16_MIN;
	int32_t t154 = -383;

    t154 = ((x637%x638)<=(x639==x640));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x641 = INT64_MIN;
	int64_t x642 = -20LL;
	static int8_t x643 = INT8_MIN;
	int32_t t155 = 27;

    t155 = ((x641%x642)<=(x643==x644));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint16_t x647 = 8135U;
	volatile int32_t t156 = -3747;

    t156 = ((x645%x646)<=(x647==x648));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x649 = INT8_MIN;
	int8_t x650 = 1;
	int64_t x651 = -1LL;
	int16_t x652 = -207;
	static int32_t t157 = 4078;

    t157 = ((x649%x650)<=(x651==x652));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x653 = UINT16_MAX;
	volatile int16_t x654 = INT16_MAX;
	int8_t x655 = 0;
	int16_t x656 = INT16_MIN;
	int32_t t158 = -2221;

    t158 = ((x653%x654)<=(x655==x656));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint16_t x657 = 5696U;
	int32_t x659 = INT32_MAX;
	int32_t x660 = INT32_MIN;
	volatile int32_t t159 = -213836;

    t159 = ((x657%x658)<=(x659==x660));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint16_t x666 = 59U;
	static volatile uint32_t x667 = 48U;
	uint8_t x668 = UINT8_MAX;
	volatile int32_t t160 = -544;

    t160 = ((x665%x666)<=(x667==x668));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x669 = 83961955;
	uint64_t x670 = UINT64_MAX;
	static int16_t x671 = 1390;
	int32_t t161 = 1;

    t161 = ((x669%x670)<=(x671==x672));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int8_t x673 = INT8_MAX;
	int64_t x674 = -1LL;
	volatile int16_t x675 = INT16_MAX;
	int32_t t162 = 111;

    t162 = ((x673%x674)<=(x675==x676));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x677 = INT16_MIN;
	uint64_t x679 = 262083306038527LLU;
	static int8_t x680 = -1;
	int32_t t163 = 16;

    t163 = ((x677%x678)<=(x679==x680));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x681 = 0U;
	int16_t x682 = INT16_MIN;
	int64_t x683 = INT64_MIN;
	int16_t x684 = -1;
	int32_t t164 = 1;

    t164 = ((x681%x682)<=(x683==x684));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x685 = INT64_MIN;
	static int32_t x687 = INT32_MIN;
	static uint64_t x688 = 233452787905LLU;
	int32_t t165 = -272423961;

    t165 = ((x685%x686)<=(x687==x688));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x689 = INT8_MIN;
	uint16_t x690 = 5325U;
	uint8_t x691 = 4U;
	volatile int16_t x692 = -3244;

    t166 = ((x689%x690)<=(x691==x692));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x693 = 198352088;
	int8_t x694 = -1;
	static uint32_t x696 = UINT32_MAX;

    t167 = ((x693%x694)<=(x695==x696));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x697 = INT8_MAX;
	static int32_t x698 = -960565;
	int64_t x699 = -281LL;

    t168 = ((x697%x698)<=(x699==x700));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x701 = INT16_MAX;
	int8_t x702 = 17;
	static uint64_t x703 = 4887453825LLU;
	int8_t x704 = INT8_MIN;
	static int32_t t169 = -267;

    t169 = ((x701%x702)<=(x703==x704));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x705 = -1LL;
	static int16_t x706 = INT16_MAX;
	int16_t x707 = INT16_MIN;
	int16_t x708 = -454;
	volatile int32_t t170 = 1;

    t170 = ((x705%x706)<=(x707==x708));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x709 = INT8_MAX;
	uint16_t x710 = 1U;
	volatile int16_t x711 = INT16_MIN;
	int16_t x712 = INT16_MIN;
	volatile int32_t t171 = -2121;

    t171 = ((x709%x710)<=(x711==x712));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x713 = INT64_MAX;
	int64_t x714 = INT64_MIN;
	int16_t x716 = INT16_MIN;
	volatile int32_t t172 = 5;

    t172 = ((x713%x714)<=(x715==x716));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x717 = -1LL;
	uint16_t x718 = 3649U;
	int64_t x719 = -1LL;
	static int64_t x720 = 40883245282780609LL;
	volatile int32_t t173 = -167907787;

    t173 = ((x717%x718)<=(x719==x720));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x721 = 113735572LL;
	uint16_t x722 = 5U;
	int8_t x723 = -1;
	uint32_t x724 = UINT32_MAX;
	int32_t t174 = 6;

    t174 = ((x721%x722)<=(x723==x724));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x725 = 6U;
	int64_t x726 = INT64_MIN;
	uint64_t x727 = UINT64_MAX;
	int32_t x728 = INT32_MAX;
	volatile int32_t t175 = 110534;

    t175 = ((x725%x726)<=(x727==x728));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x729 = 6U;
	uint64_t x730 = 490778LLU;
	volatile int64_t x731 = 724LL;
	int32_t t176 = -2316;

    t176 = ((x729%x730)<=(x731==x732));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x733 = INT32_MIN;
	int8_t x736 = -3;
	int32_t t177 = 409495;

    t177 = ((x733%x734)<=(x735==x736));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x741 = -280548LL;
	int16_t x742 = INT16_MIN;
	uint16_t x743 = 1U;
	int64_t x744 = INT64_MIN;
	volatile int32_t t178 = -17684672;

    t178 = ((x741%x742)<=(x743==x744));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x745 = -1;
	uint16_t x747 = 1313U;
	uint64_t x748 = 675265LLU;
	volatile int32_t t179 = -2;

    t179 = ((x745%x746)<=(x747==x748));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x749 = UINT8_MAX;
	int32_t x751 = INT32_MIN;
	int8_t x752 = INT8_MAX;
	int32_t t180 = 27220612;

    t180 = ((x749%x750)<=(x751==x752));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint8_t x753 = UINT8_MAX;
	int16_t x754 = -1;
	int32_t t181 = -497;

    t181 = ((x753%x754)<=(x755==x756));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x757 = -1;
	static int32_t x758 = 3736181;
	volatile int64_t x759 = -27LL;
	volatile int16_t x760 = 0;
	int32_t t182 = 8813;

    t182 = ((x757%x758)<=(x759==x760));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x761 = INT64_MIN;
	int8_t x762 = -39;
	static uint32_t x763 = UINT32_MAX;
	int64_t x764 = -1LL;
	int32_t t183 = 40046;

    t183 = ((x761%x762)<=(x763==x764));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x765 = 2U;
	int32_t x766 = -39980;
	uint32_t x767 = 255U;
	uint8_t x768 = 4U;
	static volatile int32_t t184 = -1532951;

    t184 = ((x765%x766)<=(x767==x768));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x769 = 1411LLU;
	volatile int16_t x770 = INT16_MAX;
	static int64_t x771 = -1LL;
	static volatile int32_t t185 = 24567996;

    t185 = ((x769%x770)<=(x771==x772));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x773 = 2233953068235399715LL;
	int8_t x774 = -1;
	static int32_t x775 = -1;
	volatile int64_t x776 = -1111287312955158361LL;
	volatile int32_t t186 = 500814538;

    t186 = ((x773%x774)<=(x775==x776));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x778 = 3U;
	int8_t x779 = INT8_MIN;
	static int32_t x780 = INT32_MIN;

    t187 = ((x777%x778)<=(x779==x780));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x781 = INT64_MIN;
	int64_t x782 = INT64_MIN;
	volatile int32_t t188 = 49709;

    t188 = ((x781%x782)<=(x783==x784));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x785 = INT8_MIN;
	int32_t x786 = INT32_MAX;

    t189 = ((x785%x786)<=(x787==x788));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x791 = UINT8_MAX;
	static int32_t x792 = INT32_MIN;
	int32_t t190 = 272860425;

    t190 = ((x789%x790)<=(x791==x792));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x793 = INT32_MAX;
	int8_t x795 = -52;
	int8_t x796 = 3;

    t191 = ((x793%x794)<=(x795==x796));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x797 = -1;
	volatile uint16_t x798 = 7U;
	uint16_t x799 = UINT16_MAX;
	uint8_t x800 = 0U;
	int32_t t192 = 15;

    t192 = ((x797%x798)<=(x799==x800));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x802 = -1;
	uint64_t x803 = 4233LLU;
	volatile uint64_t x804 = 22884833777LLU;

    t193 = ((x801%x802)<=(x803==x804));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x806 = UINT64_MAX;
	int16_t x807 = INT16_MIN;
	int32_t x808 = INT32_MAX;

    t194 = ((x805%x806)<=(x807==x808));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x809 = INT64_MIN;
	int64_t x810 = INT64_MIN;
	uint32_t x811 = 1560000U;
	static int16_t x812 = INT16_MAX;
	volatile int32_t t195 = 118;

    t195 = ((x809%x810)<=(x811==x812));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x813 = 62;
	uint64_t x814 = UINT64_MAX;
	uint16_t x816 = 1366U;
	volatile int32_t t196 = 0;

    t196 = ((x813%x814)<=(x815==x816));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x817 = INT32_MIN;
	static int16_t x818 = INT16_MIN;
	int8_t x819 = INT8_MAX;
	uint16_t x820 = 2564U;
	int32_t t197 = -41975;

    t197 = ((x817%x818)<=(x819==x820));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint16_t x821 = 19U;
	int32_t x822 = INT32_MIN;
	uint16_t x823 = 4U;
	int16_t x824 = -1;
	static int32_t t198 = 1;

    t198 = ((x821%x822)<=(x823==x824));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x825 = -1;
	int64_t x826 = INT64_MIN;
	uint64_t x827 = 4253461565719LLU;
	static int8_t x828 = 1;
	int32_t t199 = 16472336;

    t199 = ((x825%x826)<=(x827==x828));

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

