
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

volatile int32_t x4 = 63991;
static volatile int32_t x9 = 320826714;
int16_t x16 = INT16_MIN;
int8_t x18 = INT8_MIN;
volatile int64_t t5 = 12832LL;
int32_t x35 = INT32_MIN;
static int8_t x44 = -3;
int16_t x45 = 14;
static uint32_t x52 = UINT32_MAX;
uint8_t x54 = 125U;
int32_t x67 = -1;
uint32_t x76 = 135689U;
uint32_t x81 = UINT32_MAX;
int64_t t20 = 267984282406497LL;
uint64_t x93 = UINT64_MAX;
static uint64_t x98 = 5612864659209467884LLU;
static uint32_t x109 = 231105U;
volatile int64_t t25 = 151211974257930543LL;
int32_t x114 = INT32_MAX;
int16_t x115 = 3;
volatile uint8_t x122 = 2U;
static volatile int64_t x124 = INT64_MAX;
uint8_t x129 = 1U;
volatile uint32_t x131 = UINT32_MAX;
uint64_t x134 = 1337541134853697LLU;
volatile uint64_t t30 = 6172127404961574466LLU;
int8_t x139 = -1;
int64_t t31 = -4929278LL;
uint64_t x143 = 23735910798LLU;
int64_t x147 = 28776270642744LL;
static volatile int64_t t33 = -3094277335610602LL;
static uint64_t x149 = 3724807LLU;
int16_t x154 = INT16_MIN;
volatile uint32_t x158 = 52414034U;
uint32_t x159 = 3355U;
uint32_t x165 = 83U;
int16_t x166 = INT16_MIN;
volatile int32_t x169 = -260758219;
uint8_t x172 = UINT8_MAX;
uint8_t x175 = 122U;
volatile uint32_t x176 = 1U;
int16_t x184 = INT16_MIN;
uint64_t x189 = 12LLU;
int64_t x190 = -1LL;
volatile uint64_t t44 = 819527LLU;
int32_t t45 = 23708;
volatile int64_t t46 = -419350LL;
int8_t x204 = INT8_MAX;
int16_t x207 = 7103;
volatile uint8_t x210 = UINT8_MAX;
uint16_t x216 = UINT16_MAX;
int64_t x219 = -1301210286103957802LL;
static int16_t x221 = -1;
static int8_t x225 = INT8_MIN;
uint64_t t53 = 5437672365691606116LLU;
int32_t x229 = INT32_MIN;
volatile int8_t x230 = -1;
int16_t x236 = 88;
static uint8_t x242 = 14U;
int64_t x245 = -1LL;
uint8_t x246 = UINT8_MAX;
int32_t x254 = INT32_MIN;
uint16_t x255 = 31U;
static volatile int64_t t60 = -98907314742251LL;
volatile uint64_t x257 = 3231756108LLU;
int32_t x258 = -78627;
uint64_t x262 = 780LLU;
int16_t x264 = INT16_MIN;
uint16_t x266 = 52U;
int32_t x268 = INT32_MIN;
int32_t t63 = 11140075;
int8_t x272 = INT8_MIN;
volatile int64_t t67 = 3707825463574181558LL;
volatile uint64_t t68 = 13964058102LLU;
static volatile int16_t x295 = INT16_MIN;
uint32_t t72 = 204U;
int64_t x305 = 840388LL;
volatile int8_t x307 = INT8_MIN;
volatile uint64_t x309 = UINT64_MAX;
int64_t x311 = -1LL;
int8_t x312 = INT8_MIN;
int32_t x315 = -1;
static int8_t x317 = 1;
int8_t x330 = INT8_MIN;
static volatile uint32_t t79 = 26641085U;
int16_t x333 = -57;
static uint64_t x334 = 56LLU;
volatile uint8_t x336 = UINT8_MAX;
static volatile int32_t x346 = INT32_MIN;
static uint32_t t81 = 25U;
int32_t t82 = 0;
volatile int32_t t83 = 1755;
int32_t x363 = INT32_MIN;
int16_t x366 = -3;
static int16_t x368 = -1807;
int64_t t86 = 16LL;
int64_t x369 = -1LL;
volatile int8_t x372 = INT8_MIN;
volatile uint64_t t87 = 528146313969231LLU;
volatile int8_t x379 = INT8_MIN;
int8_t x383 = INT8_MIN;
int64_t x384 = -1LL;
int64_t t90 = -9832749985LL;
int64_t x392 = INT64_MIN;
static int64_t x394 = INT64_MAX;
uint8_t x402 = 10U;
volatile int8_t x411 = 24;
int64_t x414 = -167427461LL;
static volatile uint64_t t100 = 2118452201176389LLU;
int8_t x426 = -1;
static volatile int64_t t101 = 1LL;
static int64_t x433 = INT64_MIN;
int32_t x444 = -1;
volatile uint64_t t107 = UINT64_MAX;
int32_t x460 = INT32_MIN;
volatile uint32_t t108 = 4539U;
static uint32_t x461 = 73463U;
int16_t x463 = INT16_MIN;
uint32_t t109 = 6873U;
volatile uint32_t x466 = 57U;
uint64_t t110 = 456077620546130LLU;
uint32_t x471 = UINT32_MAX;
static int16_t x473 = -11;
volatile int32_t t112 = 1911;
static int64_t x478 = INT64_MIN;
volatile uint16_t x484 = UINT16_MAX;
static volatile int64_t t115 = -38976082909LL;
int8_t x494 = INT8_MIN;
int32_t x496 = 24211317;
volatile int8_t x501 = 1;
static int32_t x508 = INT32_MAX;
uint16_t x513 = 851U;
int8_t x515 = -1;
static int32_t x517 = INT32_MAX;
uint32_t x519 = UINT32_MAX;
int32_t x522 = INT32_MIN;
int8_t x523 = 15;
static int32_t x524 = INT32_MAX;
int64_t x525 = INT64_MIN;
int64_t x534 = -144450947LL;
volatile int32_t x550 = INT32_MIN;
static volatile int8_t x551 = -13;
uint8_t x553 = UINT8_MAX;
volatile uint64_t x576 = 221326LLU;
int8_t x577 = -1;
int64_t t137 = 65909382318326LL;
int16_t x581 = -1;
volatile int8_t x587 = -1;
int32_t t139 = 1442329;
volatile int8_t x591 = 2;
int32_t x602 = 69;
int64_t x605 = 154641445243LL;
uint64_t x611 = 108265539117LLU;
int16_t x612 = -5301;
volatile uint64_t t146 = 3519LLU;
static int16_t x624 = INT16_MAX;
uint32_t x626 = 2417U;
volatile uint32_t x628 = UINT32_MAX;
uint32_t x629 = 555849U;
int64_t x634 = INT64_MIN;
volatile uint32_t x638 = 61914758U;
int16_t x640 = INT16_MIN;
volatile int64_t t152 = 713554146877269LL;
volatile int16_t x643 = -11802;
uint8_t x644 = 82U;
static volatile int32_t x646 = INT32_MIN;
int16_t x658 = INT16_MIN;
int64_t x665 = 68668924635LL;
uint64_t x670 = 504081LLU;
uint8_t x674 = 11U;
int64_t t160 = -1367894282847LL;
uint64_t x689 = 121443247814293083LLU;
int32_t x692 = INT32_MAX;
volatile uint64_t x693 = UINT64_MAX;
int8_t x703 = INT8_MAX;
volatile int16_t x704 = INT16_MAX;
uint16_t x710 = 6U;
int16_t x713 = -19;
volatile int32_t x721 = INT32_MAX;
int32_t x727 = -11921689;
int16_t x738 = INT16_MIN;
volatile uint16_t x745 = 338U;
int16_t x758 = 225;
volatile uint64_t t180 = 15148LLU;
static int64_t x763 = -1LL;
uint64_t x764 = UINT64_MAX;
int64_t x766 = -3LL;
volatile int32_t t183 = 11;
int16_t x775 = 9525;
static int64_t x778 = 5046LL;
uint32_t x780 = 11U;
int16_t x785 = -162;
int64_t x786 = INT64_MIN;
volatile int16_t x788 = INT16_MAX;
int64_t t187 = -6818618LL;
int32_t x797 = -14240898;
uint32_t x800 = 990219U;
uint64_t t189 = 192226140587390LLU;
int64_t x805 = -14LL;
uint8_t x806 = UINT8_MAX;
uint32_t x807 = 4907U;
static volatile int64_t t190 = -18034275310853LL;
uint64_t t194 = 1109LLU;
int16_t x832 = INT16_MIN;
int8_t x833 = INT8_MAX;
int64_t x834 = -34231LL;
int64_t t196 = 893516921475495676LL;
int32_t x841 = 22139;
volatile int32_t x846 = 61;


void f0(void) {
    	uint16_t x1 = 300U;
	int16_t x2 = INT16_MIN;
	static uint64_t x3 = 3946211309609LLU;
	volatile uint64_t t0 = 2032544038003LLU;

    t0 = ((x1%x2)-(x3/x4));

    if (t0 != 18446744073647883693LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x10 = 10LL;
	uint8_t x11 = UINT8_MAX;
	int8_t x12 = 1;
	volatile int64_t t1 = -20LL;

    t1 = ((x9%x10)-(x11/x12));

    if (t1 != -251LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x13 = -1LL;
	int64_t x14 = -1LL;
	uint32_t x15 = 1298652298U;
	int64_t t2 = 118296012713LL;

    t2 = ((x13%x14)-(x15/x16));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x17 = INT32_MAX;
	int32_t x19 = INT32_MIN;
	uint8_t x20 = 4U;
	int32_t t3 = -268;

    t3 = ((x17%x18)-(x19/x20));

    if (t3 != 536871039) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = INT8_MIN;
	uint8_t x22 = 2U;
	uint64_t x23 = 9980729944LLU;
	uint64_t x24 = 603691502456477754LLU;
	uint64_t t4 = 850895607LLU;

    t4 = ((x21%x22)-(x23/x24));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = 3;
	static uint32_t x26 = 7950U;
	static int32_t x27 = 10;
	int64_t x28 = -5117LL;

    t5 = ((x25%x26)-(x27/x28));

    if (t5 != 3LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x29 = -1;
	int16_t x30 = INT16_MAX;
	volatile int16_t x31 = 1032;
	volatile uint64_t x32 = 47682692079906LLU;
	volatile uint64_t t6 = UINT64_MAX;

    t6 = ((x29%x30)-(x31/x32));

    if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x33 = INT16_MAX;
	int32_t x34 = INT32_MIN;
	uint32_t x36 = UINT32_MAX;
	volatile uint32_t t7 = 992857917U;

    t7 = ((x33%x34)-(x35/x36));

    if (t7 != 32767U) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x37 = 5768U;
	static int32_t x38 = INT32_MAX;
	volatile uint64_t x39 = 256862133LLU;
	int8_t x40 = 4;
	uint64_t t8 = 2192009270495LLU;

    t8 = ((x37%x38)-(x39/x40));

    if (t8 != 18446744073645341851LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x41 = -1;
	uint32_t x42 = 462764542U;
	volatile uint64_t x43 = 16273764250LLU;
	volatile uint64_t t9 = 1961LLU;

    t9 = ((x41%x42)-(x43/x44));

    if (t9 != 130086417LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x46 = 3847U;
	int16_t x47 = INT16_MIN;
	int8_t x48 = INT8_MIN;
	int32_t t10 = 15;

    t10 = ((x45%x46)-(x47/x48));

    if (t10 != -242) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = -32123707324879789LL;
	uint64_t x50 = 48199381860378944LLU;
	int8_t x51 = 60;
	volatile uint64_t t11 = 1161747LLU;

    t11 = ((x49%x50)-(x51/x52));

    if (t11 != 2456495719915219LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint16_t x53 = 808U;
	int32_t x55 = 285;
	int8_t x56 = -1;
	volatile int32_t t12 = 23762569;

    t12 = ((x53%x54)-(x55/x56));

    if (t12 != 343) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x61 = -1;
	static int8_t x62 = INT8_MIN;
	int8_t x63 = INT8_MAX;
	volatile uint8_t x64 = 3U;
	volatile int32_t t13 = -2639;

    t13 = ((x61%x62)-(x63/x64));

    if (t13 != -43) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x65 = 31339LL;
	uint32_t x66 = UINT32_MAX;
	int16_t x68 = INT16_MIN;
	volatile int64_t t14 = -141LL;

    t14 = ((x65%x66)-(x67/x68));

    if (t14 != 31339LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x69 = INT64_MIN;
	int64_t x70 = -1LL;
	int8_t x71 = -6;
	uint32_t x72 = 52431661U;
	volatile int64_t t15 = -617089LL;

    t15 = ((x69%x70)-(x71/x72));

    if (t15 != -81LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x73 = -1;
	int8_t x74 = INT8_MIN;
	static int8_t x75 = INT8_MAX;
	volatile uint32_t t16 = UINT32_MAX;

    t16 = ((x73%x74)-(x75/x76));

    if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x77 = -1;
	static int64_t x78 = -1LL;
	int32_t x79 = -16019;
	volatile uint32_t x80 = UINT32_MAX;
	int64_t t17 = 7570821911720LL;

    t17 = ((x77%x78)-(x79/x80));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x82 = -1;
	int32_t x83 = INT32_MIN;
	static uint8_t x84 = UINT8_MAX;
	uint32_t t18 = 10U;

    t18 = ((x81%x82)-(x83/x84));

    if (t18 != 8421504U) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x85 = INT64_MIN;
	static int64_t x86 = 3LL;
	volatile int8_t x87 = -1;
	static volatile uint32_t x88 = 1297949116U;
	static int64_t t19 = -2777654170LL;

    t19 = ((x85%x86)-(x87/x88));

    if (t19 != -5LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x89 = 1U;
	int64_t x90 = 63LL;
	int64_t x91 = -1LL;
	int64_t x92 = INT64_MIN;

    t20 = ((x89%x90)-(x91/x92));

    if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x94 = 45;
	int16_t x95 = INT16_MIN;
	uint64_t x96 = 962755263525484873LLU;
	volatile uint64_t t21 = 69457745LLU;

    t21 = ((x93%x94)-(x95/x96));

    if (t21 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x97 = UINT64_MAX;
	int64_t x99 = 2919390231383243041LL;
	static int16_t x100 = -137;
	uint64_t t22 = 528LLU;

    t22 = ((x97%x98)-(x99/x100));

    if (t22 != 1629459513828470904LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x101 = 1U;
	int64_t x102 = -1LL;
	int64_t x103 = INT64_MAX;
	int32_t x104 = -338212530;
	static volatile int64_t t23 = 402671627755736550LL;

    t23 = ((x101%x102)-(x103/x104));

    if (t23 != 27270935340LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x105 = INT8_MIN;
	int64_t x106 = -2250813LL;
	static int16_t x107 = 198;
	int8_t x108 = 5;
	int64_t t24 = -9239700490979675LL;

    t24 = ((x105%x106)-(x107/x108));

    if (t24 != -167LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x110 = -1;
	static int32_t x111 = INT32_MIN;
	int64_t x112 = INT64_MIN;

    t25 = ((x109%x110)-(x111/x112));

    if (t25 != 231105LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x113 = INT16_MIN;
	int32_t x116 = 86290;
	int32_t t26 = 22846;

    t26 = ((x113%x114)-(x115/x116));

    if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x117 = 57353979136344LLU;
	int16_t x118 = -1;
	int8_t x119 = 5;
	int8_t x120 = INT8_MIN;
	volatile uint64_t t27 = 10LLU;

    t27 = ((x117%x118)-(x119/x120));

    if (t27 != 57353979136344LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x121 = 1U;
	static uint64_t x123 = UINT64_MAX;
	uint64_t t28 = UINT64_MAX;

    t28 = ((x121%x122)-(x123/x124));

    if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x130 = 6824U;
	int64_t x132 = -5717451028223916LL;
	int64_t t29 = -147363942830LL;

    t29 = ((x129%x130)-(x131/x132));

    if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x133 = 27;
	uint64_t x135 = 3127248LLU;
	volatile int64_t x136 = -1LL;

    t30 = ((x133%x134)-(x135/x136));

    if (t30 != 27LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x137 = -5;
	int64_t x138 = 211317LL;
	int32_t x140 = -6891578;

    t31 = ((x137%x138)-(x139/x140));

    if (t31 != -5LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x141 = 1LLU;
	uint64_t x142 = UINT64_MAX;
	int64_t x144 = INT64_MIN;
	volatile uint64_t t32 = 6LLU;

    t32 = ((x141%x142)-(x143/x144));

    if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x145 = INT32_MIN;
	int32_t x146 = -31267001;
	int64_t x148 = INT64_MIN;

    t33 = ((x145%x146)-(x147/x148));

    if (t33 != -21327580LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x150 = -5;
	uint16_t x151 = 412U;
	int16_t x152 = -1;
	uint64_t t34 = 35LLU;

    t34 = ((x149%x150)-(x151/x152));

    if (t34 != 3725219LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x153 = -1;
	int8_t x155 = -1;
	uint32_t x156 = 3412770U;
	uint32_t t35 = 2U;

    t35 = ((x153%x154)-(x155/x156));

    if (t35 != 4294966037U) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x157 = -1LL;
	volatile int16_t x160 = INT16_MIN;
	int64_t t36 = -1861510288970LL;

    t36 = ((x157%x158)-(x159/x160));

    if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x161 = INT8_MAX;
	volatile int32_t x162 = -47284;
	int64_t x163 = INT64_MAX;
	int64_t x164 = INT64_MIN;
	static int64_t t37 = 11641090437503LL;

    t37 = ((x161%x162)-(x163/x164));

    if (t37 != 127LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x167 = INT64_MAX;
	int8_t x168 = 1;
	int64_t t38 = 29LL;

    t38 = ((x165%x166)-(x167/x168));

    if (t38 != -9223372036854775724LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x170 = INT64_MAX;
	int16_t x171 = 119;
	int64_t t39 = 238102416LL;

    t39 = ((x169%x170)-(x171/x172));

    if (t39 != -260758219LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x173 = -798;
	uint16_t x174 = 60U;
	static volatile uint32_t t40 = 211303U;

    t40 = ((x173%x174)-(x175/x176));

    if (t40 != 4294967156U) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x177 = 4121216;
	int8_t x178 = INT8_MAX;
	volatile int16_t x179 = -1;
	static int32_t x180 = INT32_MAX;
	volatile int32_t t41 = 1959;

    t41 = ((x177%x178)-(x179/x180));

    if (t41 != 66) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x181 = INT32_MIN;
	static int16_t x182 = INT16_MIN;
	int64_t x183 = 1459227769831861421LL;
	int64_t t42 = 115LL;

    t42 = ((x181%x182)-(x183/x184));

    if (t42 != 44532097468013LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x185 = UINT64_MAX;
	int16_t x186 = INT16_MIN;
	uint32_t x187 = UINT32_MAX;
	uint64_t x188 = 5580LLU;
	uint64_t t43 = 0LLU;

    t43 = ((x185%x186)-(x187/x188));

    if (t43 != 18446744073708814676LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x191 = INT16_MIN;
	volatile uint8_t x192 = UINT8_MAX;

    t44 = ((x189%x190)-(x191/x192));

    if (t44 != 140LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x193 = -63;
	volatile int16_t x194 = INT16_MIN;
	uint16_t x195 = 20369U;
	int16_t x196 = 2;

    t45 = ((x193%x194)-(x195/x196));

    if (t45 != -10247) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x197 = INT64_MIN;
	volatile int8_t x198 = INT8_MIN;
	int8_t x199 = INT8_MIN;
	int8_t x200 = -1;

    t46 = ((x197%x198)-(x199/x200));

    if (t46 != -128LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x201 = -1LL;
	uint16_t x202 = UINT16_MAX;
	static uint64_t x203 = 7LLU;
	uint64_t t47 = UINT64_MAX;

    t47 = ((x201%x202)-(x203/x204));

    if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x205 = INT32_MIN;
	int32_t x206 = INT32_MAX;
	int32_t x208 = INT32_MIN;
	static int32_t t48 = 32739010;

    t48 = ((x205%x206)-(x207/x208));

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x209 = INT16_MIN;
	volatile int16_t x211 = 5084;
	volatile uint16_t x212 = 47U;
	static volatile int32_t t49 = 969;

    t49 = ((x209%x210)-(x211/x212));

    if (t49 != -236) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x213 = 2U;
	int32_t x214 = 6;
	static uint64_t x215 = UINT64_MAX;
	uint64_t t50 = 126209118831054157LLU;

    t50 = ((x213%x214)-(x215/x216));

    if (t50 != 18446462594437808129LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x217 = 0U;
	int8_t x218 = INT8_MIN;
	int32_t x220 = INT32_MIN;
	volatile int64_t t51 = 91988876247804LL;

    t51 = ((x217%x218)-(x219/x220));

    if (t51 != -605923256LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x222 = -1001452;
	int32_t x223 = 77;
	volatile int16_t x224 = INT16_MAX;
	volatile int32_t t52 = 650386392;

    t52 = ((x221%x222)-(x223/x224));

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x226 = UINT16_MAX;
	uint64_t x227 = 1643LLU;
	static uint32_t x228 = UINT32_MAX;

    t53 = ((x225%x226)-(x227/x228));

    if (t53 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x231 = 48254;
	uint8_t x232 = 43U;
	int32_t t54 = -5571137;

    t54 = ((x229%x230)-(x231/x232));

    if (t54 != -1122) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x233 = INT32_MIN;
	uint32_t x234 = 828298346U;
	volatile int8_t x235 = -30;
	volatile uint32_t t55 = 5694U;

    t55 = ((x233%x234)-(x235/x236));

    if (t55 != 490886956U) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x237 = 65045458240LLU;
	volatile int16_t x238 = INT16_MIN;
	int32_t x239 = INT32_MAX;
	int64_t x240 = INT64_MIN;
	static volatile uint64_t t56 = 4331032923812595LLU;

    t56 = ((x237%x238)-(x239/x240));

    if (t56 != 65045458240LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x241 = -1;
	int64_t x243 = INT64_MIN;
	volatile int32_t x244 = INT32_MAX;
	volatile int64_t t57 = -337312978988606LL;

    t57 = ((x241%x242)-(x243/x244));

    if (t57 != 4294967297LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x247 = INT8_MIN;
	int8_t x248 = -1;
	static volatile int64_t t58 = -132112043848296161LL;

    t58 = ((x245%x246)-(x247/x248));

    if (t58 != -129LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x249 = 7U;
	uint32_t x250 = 298U;
	int64_t x251 = 1218210434LL;
	int8_t x252 = 1;
	volatile int64_t t59 = 5LL;

    t59 = ((x249%x250)-(x251/x252));

    if (t59 != -1218210427LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x253 = 1;
	int64_t x256 = -1LL;

    t60 = ((x253%x254)-(x255/x256));

    if (t60 != 32LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x259 = 30957U;
	static int16_t x260 = INT16_MAX;
	volatile uint64_t t61 = 65997102LLU;

    t61 = ((x257%x258)-(x259/x260));

    if (t61 != 3231756108LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x261 = 82937547073940LLU;
	uint8_t x263 = 121U;
	uint64_t t62 = 350LLU;

    t62 = ((x261%x262)-(x263/x264));

    if (t62 != 260LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int32_t x265 = -457755;
	volatile int32_t x267 = INT32_MIN;

    t63 = ((x265%x266)-(x267/x268));

    if (t63 != -52) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x269 = 1U;
	int16_t x270 = -1;
	int8_t x271 = INT8_MAX;
	volatile int32_t t64 = -2018;

    t64 = ((x269%x270)-(x271/x272));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x273 = -1;
	int32_t x274 = INT32_MAX;
	uint16_t x275 = UINT16_MAX;
	int32_t x276 = INT32_MIN;
	int32_t t65 = 21479383;

    t65 = ((x273%x274)-(x275/x276));

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x277 = INT64_MIN;
	uint32_t x278 = 2194751U;
	uint8_t x279 = 1U;
	int64_t x280 = -7LL;
	volatile int64_t t66 = 28LL;

    t66 = ((x277%x278)-(x279/x280));

    if (t66 != -1311474LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x281 = INT8_MAX;
	int32_t x282 = INT32_MIN;
	static volatile int64_t x283 = 513605568LL;
	volatile int8_t x284 = INT8_MIN;

    t67 = ((x281%x282)-(x283/x284));

    if (t67 != 4012670LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x285 = INT32_MAX;
	int8_t x286 = -1;
	uint64_t x287 = 183LLU;
	int32_t x288 = INT32_MAX;

    t68 = ((x285%x286)-(x287/x288));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x289 = INT16_MIN;
	uint8_t x290 = 1U;
	static int8_t x291 = INT8_MIN;
	uint64_t x292 = UINT64_MAX;
	uint64_t t69 = 1228LLU;

    t69 = ((x289%x290)-(x291/x292));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x293 = INT16_MIN;
	int32_t x294 = INT32_MIN;
	uint32_t x296 = UINT32_MAX;
	volatile uint32_t t70 = 63981U;

    t70 = ((x293%x294)-(x295/x296));

    if (t70 != 4294934528U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x297 = 6397596U;
	volatile int32_t x298 = -1980159;
	int16_t x299 = 0;
	uint32_t x300 = 38315059U;
	static volatile uint32_t t71 = 1U;

    t71 = ((x297%x298)-(x299/x300));

    if (t71 != 6397596U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x301 = 9646U;
	volatile uint32_t x302 = 3857U;
	static uint32_t x303 = 528U;
	int32_t x304 = -1;

    t72 = ((x301%x302)-(x303/x304));

    if (t72 != 1932U) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x306 = 3857817756LL;
	volatile uint8_t x308 = UINT8_MAX;
	int64_t t73 = -53191LL;

    t73 = ((x305%x306)-(x307/x308));

    if (t73 != 840388LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x310 = 62713313U;
	uint64_t t74 = 2002494996880864LLU;

    t74 = ((x309%x310)-(x311/x312));

    if (t74 != 25802545LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x313 = -70;
	int32_t x314 = INT32_MIN;
	int8_t x316 = INT8_MAX;
	int32_t t75 = 634822;

    t75 = ((x313%x314)-(x315/x316));

    if (t75 != -70) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x318 = INT16_MIN;
	uint32_t x319 = 17932401U;
	int16_t x320 = 11;
	volatile uint32_t t76 = 762U;

    t76 = ((x317%x318)-(x319/x320));

    if (t76 != 4293337079U) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x321 = INT8_MAX;
	int8_t x322 = INT8_MIN;
	static volatile int16_t x323 = INT16_MIN;
	static int8_t x324 = 1;
	int32_t t77 = -658594;

    t77 = ((x321%x322)-(x323/x324));

    if (t77 != 32895) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x325 = 3U;
	volatile int32_t x326 = INT32_MIN;
	volatile int32_t x327 = INT32_MIN;
	int8_t x328 = INT8_MIN;
	int32_t t78 = 0;

    t78 = ((x325%x326)-(x327/x328));

    if (t78 != -16777213) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x329 = INT32_MIN;
	volatile int32_t x331 = INT32_MIN;
	uint32_t x332 = 3543090U;

    t79 = ((x329%x330)-(x331/x332));

    if (t79 != 4294966690U) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x335 = 0;
	uint64_t t80 = 15358252553047775LLU;

    t80 = ((x333%x334)-(x335/x336));

    if (t80 != 15LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x345 = 666439U;
	volatile int8_t x347 = -1;
	int32_t x348 = INT32_MIN;

    t81 = ((x345%x346)-(x347/x348));

    if (t81 != 666439U) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x349 = 391U;
	volatile int16_t x350 = INT16_MIN;
	volatile int8_t x351 = -1;
	volatile int8_t x352 = INT8_MIN;

    t82 = ((x349%x350)-(x351/x352));

    if (t82 != 391) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x353 = -2;
	int32_t x354 = INT32_MAX;
	uint16_t x355 = 6907U;
	volatile int8_t x356 = INT8_MIN;

    t83 = ((x353%x354)-(x355/x356));

    if (t83 != 51) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x357 = INT16_MIN;
	static uint16_t x358 = UINT16_MAX;
	int8_t x359 = -1;
	int32_t x360 = 9;
	int32_t t84 = -1;

    t84 = ((x357%x358)-(x359/x360));

    if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x361 = UINT8_MAX;
	volatile uint16_t x362 = 10U;
	int64_t x364 = 789848LL;
	volatile int64_t t85 = -2178242689867589987LL;

    t85 = ((x361%x362)-(x363/x364));

    if (t85 != 2723LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x365 = UINT32_MAX;
	static int64_t x367 = 10LL;

    t86 = ((x365%x366)-(x367/x368));

    if (t86 != 2LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x370 = 14483683LLU;
	volatile uint64_t x371 = 845428274LLU;

    t87 = ((x369%x370)-(x371/x372));

    if (t87 != 3590615LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x373 = INT16_MIN;
	int32_t x374 = -161403;
	int32_t x375 = INT32_MIN;
	volatile int64_t x376 = INT64_MAX;
	volatile int64_t t88 = 89133LL;

    t88 = ((x373%x374)-(x375/x376));

    if (t88 != -32768LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x377 = 31U;
	int16_t x378 = -613;
	int16_t x380 = INT16_MAX;
	int32_t t89 = -563925004;

    t89 = ((x377%x378)-(x379/x380));

    if (t89 != 31) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x381 = 1347110763U;
	int64_t x382 = INT64_MIN;

    t90 = ((x381%x382)-(x383/x384));

    if (t90 != 1347110635LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x385 = 10;
	static int16_t x386 = 1;
	static uint32_t x387 = UINT32_MAX;
	uint64_t x388 = 18765LLU;
	uint64_t t91 = 124008688069336LLU;

    t91 = ((x385%x386)-(x387/x388));

    if (t91 != 18446744073709322735LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x389 = INT32_MIN;
	int16_t x390 = -1;
	volatile int8_t x391 = 5;
	static volatile int64_t t92 = -27851808098LL;

    t92 = ((x389%x390)-(x391/x392));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x393 = 1;
	volatile int64_t x395 = -1LL;
	int32_t x396 = -1068198082;
	int64_t t93 = 202416108607084LL;

    t93 = ((x393%x394)-(x395/x396));

    if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x397 = UINT32_MAX;
	int64_t x398 = -3LL;
	volatile int32_t x399 = INT32_MAX;
	int16_t x400 = INT16_MAX;
	int64_t t94 = 5572995LL;

    t94 = ((x397%x398)-(x399/x400));

    if (t94 != -65538LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x401 = 12;
	static uint16_t x403 = UINT16_MAX;
	int16_t x404 = INT16_MAX;
	static int32_t t95 = 47;

    t95 = ((x401%x402)-(x403/x404));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x405 = 366;
	static int8_t x406 = -1;
	int8_t x407 = INT8_MIN;
	int64_t x408 = -1LL;
	volatile int64_t t96 = -11LL;

    t96 = ((x405%x406)-(x407/x408));

    if (t96 != -128LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x409 = -523;
	volatile uint16_t x410 = 337U;
	int32_t x412 = -1;
	static volatile int32_t t97 = 36;

    t97 = ((x409%x410)-(x411/x412));

    if (t97 != -162) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x413 = INT32_MIN;
	volatile int8_t x415 = INT8_MAX;
	static int64_t x416 = -3062170253LL;
	volatile int64_t t98 = -64922629632835LL;

    t98 = ((x413%x414)-(x415/x416));

    if (t98 != -138354116LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x417 = INT8_MIN;
	uint8_t x418 = UINT8_MAX;
	int16_t x419 = 567;
	int64_t x420 = INT64_MAX;
	static volatile int64_t t99 = -1LL;

    t99 = ((x417%x418)-(x419/x420));

    if (t99 != -128LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x421 = INT8_MAX;
	uint8_t x422 = 62U;
	volatile int8_t x423 = INT8_MIN;
	volatile uint64_t x424 = UINT64_MAX;

    t100 = ((x421%x422)-(x423/x424));

    if (t100 != 3LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x425 = 2U;
	int64_t x427 = -1LL;
	uint16_t x428 = 111U;

    t101 = ((x425%x426)-(x427/x428));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x429 = -1;
	int32_t x430 = 464;
	int16_t x431 = -267;
	int32_t x432 = INT32_MAX;
	int32_t t102 = 507;

    t102 = ((x429%x430)-(x431/x432));

    if (t102 != -1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x434 = 905U;
	int8_t x435 = -1;
	int32_t x436 = -10011881;
	int64_t t103 = 8158LL;

    t103 = ((x433%x434)-(x435/x436));

    if (t103 != -203LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x437 = 620;
	uint32_t x438 = 120436U;
	int16_t x439 = INT16_MAX;
	volatile int8_t x440 = -14;
	volatile uint32_t t104 = 211U;

    t104 = ((x437%x438)-(x439/x440));

    if (t104 != 2960U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x441 = 4176769050577959LLU;
	static uint64_t x442 = UINT64_MAX;
	int8_t x443 = INT8_MIN;
	uint64_t t105 = 273052010LLU;

    t105 = ((x441%x442)-(x443/x444));

    if (t105 != 4176769050577831LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x445 = -1;
	static volatile int8_t x446 = INT8_MIN;
	static int32_t x447 = -7675099;
	int16_t x448 = INT16_MAX;
	int32_t t106 = 42103410;

    t106 = ((x445%x446)-(x447/x448));

    if (t106 != 233) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x453 = -1LL;
	int8_t x454 = INT8_MAX;
	uint64_t x455 = 67300915554465LLU;
	int8_t x456 = INT8_MIN;

    t107 = ((x453%x454)-(x455/x456));

    if (t107 != UINT64_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x457 = INT32_MIN;
	uint32_t x458 = 3165U;
	static int16_t x459 = INT16_MIN;

    t108 = ((x457%x458)-(x459/x460));

    if (t108 != 2663U) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x462 = INT16_MAX;
	int32_t x464 = -1;

    t109 = ((x461%x462)-(x463/x464));

    if (t109 != 4294942457U) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint8_t x465 = 2U;
	volatile int64_t x467 = INT64_MAX;
	uint64_t x468 = 5829504678LLU;

    t110 = ((x465%x466)-(x467/x468));

    if (t110 != 18446744072127363672LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int8_t x469 = -1;
	volatile int16_t x470 = INT16_MIN;
	int16_t x472 = -39;
	uint32_t t111 = 30U;

    t111 = ((x469%x470)-(x471/x472));

    if (t111 != 4294967294U) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x474 = UINT8_MAX;
	int32_t x475 = INT32_MAX;
	int8_t x476 = INT8_MIN;

    t112 = ((x473%x474)-(x475/x476));

    if (t112 != 16777204) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x477 = 15684366444455146LLU;
	uint8_t x479 = 13U;
	int16_t x480 = INT16_MAX;
	uint64_t t113 = 3473391113664018LLU;

    t113 = ((x477%x478)-(x479/x480));

    if (t113 != 15684366444455146LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x481 = INT8_MIN;
	volatile int64_t x482 = -1587681718542801LL;
	int32_t x483 = INT32_MIN;
	volatile int64_t t114 = -63LL;

    t114 = ((x481%x482)-(x483/x484));

    if (t114 != 32640LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x485 = 346;
	int64_t x486 = -1LL;
	uint16_t x487 = 10U;
	uint16_t x488 = UINT16_MAX;

    t115 = ((x485%x486)-(x487/x488));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x489 = -2915;
	uint64_t x490 = UINT64_MAX;
	int32_t x491 = INT32_MIN;
	static volatile int8_t x492 = INT8_MIN;
	volatile uint64_t t116 = 72646702838LLU;

    t116 = ((x489%x490)-(x491/x492));

    if (t116 != 18446744073692771485LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x493 = 14612483;
	int8_t x495 = 0;
	int32_t t117 = 364;

    t117 = ((x493%x494)-(x495/x496));

    if (t117 != 3) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x497 = INT16_MIN;
	volatile int16_t x498 = -1;
	uint8_t x499 = 5U;
	int32_t x500 = INT32_MIN;
	volatile int32_t t118 = -4083519;

    t118 = ((x497%x498)-(x499/x500));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x502 = INT64_MIN;
	static volatile uint16_t x503 = 30839U;
	int32_t x504 = INT32_MAX;
	volatile int64_t t119 = 120558LL;

    t119 = ((x501%x502)-(x503/x504));

    if (t119 != 1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x505 = 1535;
	uint8_t x506 = 93U;
	volatile int8_t x507 = INT8_MIN;
	volatile int32_t t120 = 852844;

    t120 = ((x505%x506)-(x507/x508));

    if (t120 != 47) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x509 = 234466900355120LLU;
	int32_t x510 = INT32_MIN;
	static int16_t x511 = -7;
	int8_t x512 = 5;
	uint64_t t121 = 786280LLU;

    t121 = ((x509%x510)-(x511/x512));

    if (t121 != 234466900355121LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x514 = 3U;
	uint8_t x516 = 2U;
	volatile int32_t t122 = 309838;

    t122 = ((x513%x514)-(x515/x516));

    if (t122 != 2) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x518 = -1LL;
	int64_t x520 = -1LL;
	int64_t t123 = -39171290114781255LL;

    t123 = ((x517%x518)-(x519/x520));

    if (t123 != 4294967295LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x521 = INT64_MIN;
	static int64_t t124 = 796554251LL;

    t124 = ((x521%x522)-(x523/x524));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x526 = INT16_MAX;
	volatile uint16_t x527 = 2557U;
	int64_t x528 = -1LL;
	int64_t t125 = 6059432284800106LL;

    t125 = ((x525%x526)-(x527/x528));

    if (t125 != 2549LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x529 = INT16_MIN;
	static int16_t x530 = INT16_MIN;
	static uint16_t x531 = UINT16_MAX;
	int16_t x532 = 9921;
	static volatile int32_t t126 = -324644813;

    t126 = ((x529%x530)-(x531/x532));

    if (t126 != -6) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x533 = INT32_MIN;
	static int64_t x535 = -1LL;
	uint64_t x536 = UINT64_MAX;
	volatile uint64_t t127 = 1242133LLU;

    t127 = ((x533%x534)-(x535/x536));

    if (t127 != 18446744073584381225LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x537 = 245274360LLU;
	volatile int64_t x538 = INT64_MIN;
	volatile int32_t x539 = INT32_MAX;
	uint8_t x540 = UINT8_MAX;
	uint64_t t128 = 118092981LLU;

    t128 = ((x537%x538)-(x539/x540));

    if (t128 != 236852856LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x541 = 0U;
	uint64_t x542 = 17687233LLU;
	int64_t x543 = -81160538LL;
	int64_t x544 = -1LL;
	static uint64_t t129 = 2410618073891020LLU;

    t129 = ((x541%x542)-(x543/x544));

    if (t129 != 18446744073628391078LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x545 = INT64_MAX;
	int64_t x546 = -19026LL;
	int32_t x547 = -36;
	int8_t x548 = INT8_MIN;
	volatile int64_t t130 = -1019846967544LL;

    t130 = ((x545%x546)-(x547/x548));

    if (t130 != 7LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x549 = -9;
	static volatile uint64_t x552 = 51307918270814990LLU;
	volatile uint64_t t131 = 238945LLU;

    t131 = ((x549%x550)-(x551/x552));

    if (t131 != 18446744073709551248LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x554 = INT8_MIN;
	uint32_t x555 = 4117367U;
	uint16_t x556 = 15U;
	volatile uint32_t t132 = 4155009U;

    t132 = ((x553%x554)-(x555/x556));

    if (t132 != 4294692932U) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x557 = 581569U;
	int64_t x558 = INT64_MIN;
	int8_t x559 = 3;
	int16_t x560 = -1;
	volatile int64_t t133 = -2258LL;

    t133 = ((x557%x558)-(x559/x560));

    if (t133 != 581572LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x561 = 1;
	int32_t x562 = INT32_MIN;
	volatile int64_t x563 = INT64_MAX;
	int32_t x564 = -863478945;
	static volatile int64_t t134 = -3316LL;

    t134 = ((x561%x562)-(x563/x564));

    if (t134 != 10681640926LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x565 = -8714;
	static int16_t x566 = INT16_MIN;
	uint8_t x567 = 20U;
	static volatile int64_t x568 = 4524391LL;
	static volatile int64_t t135 = -3558LL;

    t135 = ((x565%x566)-(x567/x568));

    if (t135 != -8714LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x573 = -1;
	static int64_t x574 = -1387166905821415LL;
	uint64_t x575 = 1814594167969870852LLU;
	uint64_t t136 = 161548LLU;

    t136 = ((x573%x574)-(x575/x576));

    if (t136 != 18446735874970280270LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x578 = INT32_MAX;
	int32_t x579 = -10540;
	volatile int64_t x580 = INT64_MIN;

    t137 = ((x577%x578)-(x579/x580));

    if (t137 != -1LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x582 = INT32_MAX;
	static int32_t x583 = -1;
	uint16_t x584 = 1610U;
	volatile int32_t t138 = 249408667;

    t138 = ((x581%x582)-(x583/x584));

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x585 = INT16_MAX;
	static int32_t x586 = INT32_MAX;
	static uint16_t x588 = 27U;

    t139 = ((x585%x586)-(x587/x588));

    if (t139 != 32767) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int8_t x589 = INT8_MIN;
	static int16_t x590 = INT16_MAX;
	int16_t x592 = INT16_MAX;
	volatile int32_t t140 = -19;

    t140 = ((x589%x590)-(x591/x592));

    if (t140 != -128) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x593 = INT64_MIN;
	volatile int32_t x594 = INT32_MIN;
	volatile int64_t x595 = -1LL;
	int16_t x596 = -1;
	volatile int64_t t141 = 13745387875LL;

    t141 = ((x593%x594)-(x595/x596));

    if (t141 != -1LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x597 = 65606224LLU;
	uint8_t x598 = 46U;
	static int16_t x599 = INT16_MIN;
	volatile uint32_t x600 = 2456U;
	static uint64_t t142 = 1253LLU;

    t142 = ((x597%x598)-(x599/x600));

    if (t142 != 18446744073707802877LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x601 = -19823;
	static int16_t x603 = -1;
	volatile uint16_t x604 = 2658U;
	volatile int32_t t143 = 36415764;

    t143 = ((x601%x602)-(x603/x604));

    if (t143 != -20) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x606 = -1LL;
	uint32_t x607 = 37639U;
	volatile int8_t x608 = -1;
	int64_t t144 = 15276148201551333LL;

    t144 = ((x605%x606)-(x607/x608));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint64_t x609 = 1715591356139LLU;
	static int8_t x610 = -4;
	volatile uint64_t t145 = 47400LLU;

    t145 = ((x609%x610)-(x611/x612));

    if (t145 != 1715591356139LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x613 = -2322566713622934LL;
	int32_t x614 = 102329;
	volatile uint8_t x615 = 2U;
	uint64_t x616 = 2142108989905004LLU;

    t146 = ((x613%x614)-(x615/x616));

    if (t146 != 18446744073709546315LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x617 = INT8_MIN;
	static int16_t x618 = -8;
	uint32_t x619 = 7888U;
	static volatile int64_t x620 = -1LL;
	volatile int64_t t147 = -1066165LL;

    t147 = ((x617%x618)-(x619/x620));

    if (t147 != 7888LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x621 = UINT16_MAX;
	uint8_t x622 = 25U;
	int32_t x623 = INT32_MAX;
	volatile int32_t t148 = -208972;

    t148 = ((x621%x622)-(x623/x624));

    if (t148 != -65528) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x625 = 3870419LLU;
	int32_t x627 = INT32_MAX;
	volatile uint64_t t149 = 6716366639410656368LLU;

    t149 = ((x625%x626)-(x627/x628));

    if (t149 != 802LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x630 = 5U;
	uint16_t x631 = UINT16_MAX;
	int16_t x632 = -1;
	volatile uint32_t t150 = 234335041U;

    t150 = ((x629%x630)-(x631/x632));

    if (t150 != 65539U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x633 = 1U;
	static int32_t x635 = -1;
	uint8_t x636 = 1U;
	int64_t t151 = 5429826LL;

    t151 = ((x633%x634)-(x635/x636));

    if (t151 != 2LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x637 = -1LL;
	int32_t x639 = INT32_MIN;

    t152 = ((x637%x638)-(x639/x640));

    if (t152 != -65537LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x641 = -927;
	int32_t x642 = INT32_MIN;
	volatile int32_t t153 = 86656299;

    t153 = ((x641%x642)-(x643/x644));

    if (t153 != -784) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int16_t x645 = 8;
	int32_t x647 = -39065;
	static uint32_t x648 = UINT32_MAX;
	uint32_t t154 = 3982944U;

    t154 = ((x645%x646)-(x647/x648));

    if (t154 != 8U) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x649 = INT32_MAX;
	int8_t x650 = 1;
	int64_t x651 = -1LL;
	int16_t x652 = INT16_MIN;
	volatile int64_t t155 = -244463506033850LL;

    t155 = ((x649%x650)-(x651/x652));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x657 = 51683U;
	volatile int64_t x659 = -24824LL;
	uint64_t x660 = 61183463LLU;
	volatile uint64_t t156 = 62111941802732436LLU;

    t156 = ((x657%x658)-(x659/x660));

    if (t156 != 18446743772210747739LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int8_t x661 = 27;
	int64_t x662 = -4351748505409829LL;
	int32_t x663 = INT32_MIN;
	uint8_t x664 = 47U;
	int64_t t157 = -16875369711LL;

    t157 = ((x661%x662)-(x663/x664));

    if (t157 != 45691168LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x666 = 1282;
	int32_t x667 = INT32_MIN;
	uint64_t x668 = 20026660129036577LLU;
	volatile uint64_t t158 = 32762753LLU;

    t158 = ((x665%x666)-(x667/x668));

    if (t158 != 68LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x669 = INT16_MAX;
	volatile int8_t x671 = INT8_MIN;
	static int16_t x672 = INT16_MIN;
	static uint64_t t159 = 300688792749546304LLU;

    t159 = ((x669%x670)-(x671/x672));

    if (t159 != 32767LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x673 = INT8_MIN;
	int64_t x675 = INT64_MIN;
	volatile uint8_t x676 = 7U;

    t160 = ((x673%x674)-(x675/x676));

    if (t160 != 1317624576693539394LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x677 = INT32_MIN;
	int16_t x678 = -318;
	int16_t x679 = -1;
	int32_t x680 = -1;
	volatile int32_t t161 = -63357320;

    t161 = ((x677%x678)-(x679/x680));

    if (t161 != -75) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x681 = 3U;
	int32_t x682 = INT32_MIN;
	uint8_t x683 = 1U;
	int64_t x684 = INT64_MAX;
	volatile int64_t t162 = 2681990161598534708LL;

    t162 = ((x681%x682)-(x683/x684));

    if (t162 != 3LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x685 = -1LL;
	uint32_t x686 = 1282U;
	int16_t x687 = 1002;
	int64_t x688 = INT64_MAX;
	volatile int64_t t163 = -15306916938LL;

    t163 = ((x685%x686)-(x687/x688));

    if (t163 != -1LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x690 = -41030767438846690LL;
	int8_t x691 = 2;
	volatile uint64_t t164 = 7LLU;

    t164 = ((x689%x690)-(x691/x692));

    if (t164 != 121443247814293083LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x694 = INT32_MIN;
	volatile int64_t x695 = INT64_MIN;
	int64_t x696 = INT64_MIN;
	uint64_t t165 = 1LLU;

    t165 = ((x693%x694)-(x695/x696));

    if (t165 != 2147483646LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x697 = UINT64_MAX;
	int8_t x698 = -6;
	int16_t x699 = INT16_MAX;
	uint16_t x700 = 26859U;
	uint64_t t166 = 15548LLU;

    t166 = ((x697%x698)-(x699/x700));

    if (t166 != 4LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x701 = 15;
	int32_t x702 = INT32_MIN;
	volatile int32_t t167 = 423;

    t167 = ((x701%x702)-(x703/x704));

    if (t167 != 15) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x705 = -25;
	uint16_t x706 = UINT16_MAX;
	int8_t x707 = INT8_MAX;
	int32_t x708 = INT32_MIN;
	volatile int32_t t168 = 133274729;

    t168 = ((x705%x706)-(x707/x708));

    if (t168 != -25) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x709 = INT16_MIN;
	int64_t x711 = INT64_MAX;
	int64_t x712 = INT64_MAX;
	int64_t t169 = -3313690682221LL;

    t169 = ((x709%x710)-(x711/x712));

    if (t169 != -3LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x714 = 47;
	static uint64_t x715 = 63706489239748716LLU;
	static int64_t x716 = -20207038449580LL;
	static uint64_t t170 = 8016634LLU;

    t170 = ((x713%x714)-(x715/x716));

    if (t170 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x717 = -14;
	int16_t x718 = INT16_MIN;
	static uint64_t x719 = 8029114811392080LLU;
	int32_t x720 = 107606309;
	uint64_t t171 = 62091364695494775LLU;

    t171 = ((x717%x718)-(x719/x720));

    if (t171 != 18446744073634935951LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint64_t x722 = UINT64_MAX;
	volatile int64_t x723 = INT64_MAX;
	static int64_t x724 = INT64_MIN;
	static uint64_t t172 = 4319324401283378LLU;

    t172 = ((x721%x722)-(x723/x724));

    if (t172 != 2147483647LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x725 = INT64_MIN;
	uint64_t x726 = UINT64_MAX;
	int32_t x728 = INT32_MAX;
	uint64_t t173 = 149294363480540LLU;

    t173 = ((x725%x726)-(x727/x728));

    if (t173 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x729 = -1;
	int8_t x730 = INT8_MIN;
	uint32_t x731 = 5474U;
	static volatile uint64_t x732 = 9486LLU;
	uint64_t t174 = UINT64_MAX;

    t174 = ((x729%x730)-(x731/x732));

    if (t174 != UINT64_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x733 = -1;
	uint16_t x734 = UINT16_MAX;
	int16_t x735 = INT16_MAX;
	int8_t x736 = -1;
	volatile int32_t t175 = -26113;

    t175 = ((x733%x734)-(x735/x736));

    if (t175 != 32766) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x737 = 982U;
	int8_t x739 = -1;
	volatile uint16_t x740 = 190U;
	volatile int32_t t176 = -5700;

    t176 = ((x737%x738)-(x739/x740));

    if (t176 != 982) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x746 = UINT8_MAX;
	uint64_t x747 = 22336LLU;
	uint8_t x748 = UINT8_MAX;
	uint64_t t177 = 8444539LLU;

    t177 = ((x745%x746)-(x747/x748));

    if (t177 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x749 = UINT64_MAX;
	volatile int32_t x750 = INT32_MIN;
	uint32_t x751 = UINT32_MAX;
	int16_t x752 = INT16_MIN;
	uint64_t t178 = 24771828175371065LLU;

    t178 = ((x749%x750)-(x751/x752));

    if (t178 != 2147483646LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x753 = 37342925846LL;
	int32_t x754 = -3;
	volatile int64_t x755 = INT64_MIN;
	uint16_t x756 = 82U;
	int64_t t179 = -549935616004903LL;

    t179 = ((x753%x754)-(x755/x756));

    if (t179 != 112480146790911902LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x757 = 705945611LLU;
	int16_t x759 = INT16_MIN;
	uint64_t x760 = 621211516710460767LLU;

    t180 = ((x757%x758)-(x759/x760));

    if (t180 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x761 = -5;
	uint64_t x762 = UINT64_MAX;
	volatile uint64_t t181 = 1LLU;

    t181 = ((x761%x762)-(x763/x764));

    if (t181 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x765 = INT16_MIN;
	volatile uint16_t x767 = 973U;
	static int64_t x768 = INT64_MAX;
	volatile int64_t t182 = 7992LL;

    t182 = ((x765%x766)-(x767/x768));

    if (t182 != -2LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x769 = INT32_MIN;
	int16_t x770 = -1;
	volatile int16_t x771 = INT16_MAX;
	int32_t x772 = 639523;

    t183 = ((x769%x770)-(x771/x772));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x773 = -1;
	static int64_t x774 = INT64_MAX;
	int64_t x776 = INT64_MIN;
	int64_t t184 = 672251318088507223LL;

    t184 = ((x773%x774)-(x775/x776));

    if (t184 != -1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint16_t x777 = 2U;
	static volatile int16_t x779 = -122;
	int64_t t185 = 26762088LL;

    t185 = ((x777%x778)-(x779/x780));

    if (t185 != -390451559LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x781 = INT32_MIN;
	static int8_t x782 = INT8_MAX;
	volatile int16_t x783 = INT16_MIN;
	volatile int8_t x784 = INT8_MIN;
	static int32_t t186 = 2010705;

    t186 = ((x781%x782)-(x783/x784));

    if (t186 != -264) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x787 = UINT16_MAX;

    t187 = ((x785%x786)-(x787/x788));

    if (t187 != -164LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x793 = INT16_MIN;
	static uint16_t x794 = 1401U;
	int16_t x795 = 0;
	int32_t x796 = INT32_MIN;
	volatile int32_t t188 = -1;

    t188 = ((x793%x794)-(x795/x796));

    if (t188 != -545) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x798 = INT32_MIN;
	uint64_t x799 = 2094408211LLU;

    t189 = ((x797%x798)-(x799/x800));

    if (t189 != 18446744073695308603LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x808 = INT8_MAX;

    t190 = ((x805%x806)-(x807/x808));

    if (t190 != -52LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x809 = INT16_MIN;
	static int32_t x810 = 62657232;
	volatile int16_t x811 = INT16_MIN;
	int64_t x812 = INT64_MAX;
	int64_t t191 = -111676013483083225LL;

    t191 = ((x809%x810)-(x811/x812));

    if (t191 != -32768LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x817 = INT32_MIN;
	uint16_t x818 = UINT16_MAX;
	volatile int8_t x819 = 0;
	static volatile uint16_t x820 = 503U;
	int32_t t192 = 3;

    t192 = ((x817%x818)-(x819/x820));

    if (t192 != -32768) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x821 = UINT8_MAX;
	volatile uint16_t x822 = UINT16_MAX;
	volatile int16_t x823 = -1;
	static int16_t x824 = INT16_MIN;
	int32_t t193 = 810496;

    t193 = ((x821%x822)-(x823/x824));

    if (t193 != 255) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x825 = INT8_MAX;
	int16_t x826 = INT16_MIN;
	uint64_t x827 = 1768232485042428403LLU;
	int16_t x828 = -10;

    t194 = ((x825%x826)-(x827/x828));

    if (t194 != 127LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x829 = UINT8_MAX;
	int8_t x830 = -1;
	uint8_t x831 = 7U;
	volatile int32_t t195 = -70;

    t195 = ((x829%x830)-(x831/x832));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint16_t x835 = UINT16_MAX;
	int16_t x836 = 649;

    t196 = ((x833%x834)-(x835/x836));

    if (t196 != 27LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x837 = INT64_MIN;
	static volatile int32_t x838 = 1;
	volatile int8_t x839 = 1;
	int8_t x840 = 2;
	int64_t t197 = 1LL;

    t197 = ((x837%x838)-(x839/x840));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int32_t x842 = INT32_MIN;
	int32_t x843 = -384434007;
	static uint32_t x844 = 253756U;
	uint32_t t198 = 12U;

    t198 = ((x841%x842)-(x843/x844));

    if (t198 != 6729U) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x845 = 7;
	int16_t x847 = INT16_MIN;
	volatile int32_t x848 = -214981559;
	volatile int32_t t199 = 254826574;

    t199 = ((x845%x846)-(x847/x848));

    if (t199 != 7) { NG(); } else { ; }
	
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

