
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

int16_t x3 = INT16_MAX;
static volatile int32_t x4 = -1;
static int64_t x8 = INT64_MIN;
static uint8_t x15 = 0U;
int8_t x19 = INT8_MIN;
volatile int8_t x22 = INT8_MIN;
int32_t x24 = INT32_MAX;
volatile int32_t x27 = -234;
int8_t x33 = INT8_MAX;
int32_t x35 = INT32_MAX;
int32_t x36 = -1;
volatile uint8_t x42 = UINT8_MAX;
static uint32_t x49 = 2700U;
volatile int16_t x55 = 2929;
uint32_t x65 = 7U;
int64_t x66 = 1116789407LL;
volatile int32_t t16 = -383663;
uint64_t x77 = 21546702LLU;
uint16_t x80 = 3238U;
volatile int32_t x83 = -1;
uint32_t x84 = UINT32_MAX;
uint8_t x86 = 8U;
int8_t x87 = INT8_MAX;
volatile uint32_t x88 = UINT32_MAX;
static uint8_t x92 = 0U;
int32_t t23 = -8181;
uint32_t x98 = 520U;
uint8_t x100 = UINT8_MAX;
int8_t x105 = INT8_MAX;
volatile int32_t x106 = INT32_MAX;
static uint8_t x110 = UINT8_MAX;
int32_t x113 = INT32_MAX;
int64_t x115 = -1LL;
int32_t x117 = INT32_MAX;
int32_t t29 = 813498635;
static int16_t x123 = -1;
volatile int32_t t30 = -1371;
uint16_t x129 = 163U;
static volatile int32_t t33 = 249;
volatile uint64_t x137 = UINT64_MAX;
int32_t x138 = INT32_MIN;
int8_t x150 = -1;
static int64_t x152 = -1LL;
int64_t x158 = INT64_MIN;
uint16_t x159 = 7391U;
int64_t x164 = 504561545023765LL;
uint64_t x176 = 3280463409083104608LLU;
static uint32_t x179 = 8U;
uint32_t x191 = 154036716U;
static volatile int32_t t47 = 491762948;
int8_t x196 = INT8_MAX;
int32_t x197 = INT32_MAX;
uint16_t x199 = 36U;
static int32_t x207 = -1;
int32_t t51 = -3399801;
uint32_t x209 = UINT32_MAX;
static int64_t x210 = -1LL;
static uint64_t x219 = 7386LLU;
volatile int16_t x222 = INT16_MIN;
volatile int32_t t55 = -398;
uint8_t x230 = UINT8_MAX;
uint8_t x237 = 76U;
int8_t x244 = 1;
int16_t x251 = 0;
int16_t x253 = INT16_MAX;
int8_t x254 = -1;
int8_t x255 = INT8_MIN;
int16_t x259 = INT16_MIN;
volatile int8_t x264 = INT8_MIN;
uint16_t x265 = UINT16_MAX;
int32_t x266 = INT32_MIN;
volatile uint16_t x267 = 65U;
int8_t x270 = INT8_MIN;
int16_t x272 = 737;
uint32_t x283 = 48U;
int8_t x286 = 17;
uint64_t x298 = 105057125911354LLU;
int32_t t74 = -3121;
uint32_t x301 = 153461915U;
static volatile int64_t x302 = INT64_MAX;
int8_t x303 = INT8_MAX;
int64_t x307 = INT64_MIN;
uint8_t x309 = 4U;
int32_t x310 = INT32_MIN;
int32_t x312 = 1;
int32_t t80 = -1;
int16_t x326 = INT16_MAX;
volatile int32_t x328 = INT32_MAX;
int32_t t84 = 83987;
int8_t x347 = INT8_MIN;
int64_t x348 = INT64_MIN;
int8_t x353 = -1;
int8_t x356 = INT8_MIN;
int16_t x363 = 5625;
volatile int16_t x374 = INT16_MAX;
int16_t x376 = -1;
volatile int32_t t93 = -102678;
uint8_t x381 = 0U;
int64_t x385 = 8364297750LL;
volatile int32_t t97 = -1;
volatile uint64_t x393 = UINT64_MAX;
static volatile int32_t x395 = 154173229;
uint32_t x398 = 194U;
volatile uint32_t x410 = 5U;
static volatile int32_t x414 = -1;
volatile int32_t x415 = INT32_MIN;
static int16_t x418 = -1;
static int32_t x425 = -288338418;
int16_t x428 = -1;
static int16_t x430 = 2816;
int16_t x431 = INT16_MIN;
uint32_t x432 = 24272496U;
uint8_t x434 = 0U;
volatile uint64_t x436 = 62884481906810LLU;
uint16_t x446 = 175U;
int16_t x456 = -1;
int64_t x463 = -1LL;
static int32_t t115 = 114687658;
volatile int64_t x475 = INT64_MIN;
int64_t x476 = -1LL;
int32_t t119 = -147;
int32_t x481 = -4189;
int8_t x483 = INT8_MAX;
volatile uint32_t x484 = 245U;
static volatile int32_t t120 = -15828;
uint64_t x485 = 57070521845LLU;
uint8_t x489 = 75U;
int64_t x504 = INT64_MIN;
static volatile int32_t t125 = 28;
int32_t x511 = INT32_MIN;
int32_t t127 = -24780;
int64_t x520 = 86377829564864996LL;
int32_t t129 = 42;
int16_t x521 = 3;
static uint32_t x535 = UINT32_MAX;
uint32_t x536 = 52U;
static int8_t x538 = 0;
volatile int32_t t134 = -9849119;
int16_t x545 = -1;
static uint8_t x554 = UINT8_MAX;
int32_t x555 = INT32_MIN;
int16_t x560 = INT16_MIN;
static uint16_t x569 = UINT16_MAX;
int16_t x578 = -3;
int16_t x579 = -693;
volatile int32_t t144 = 23487;
int64_t x582 = -1LL;
static volatile uint64_t x583 = 645945096LLU;
volatile int8_t x586 = INT8_MIN;
int32_t t146 = -1505681;
static uint16_t x590 = UINT16_MAX;
int64_t x591 = -1275216LL;
static volatile int32_t t147 = 811849;
static uint16_t x594 = 44U;
uint8_t x595 = 23U;
int32_t x602 = INT32_MIN;
static int64_t x609 = INT64_MIN;
int8_t x613 = INT8_MIN;
int32_t x614 = -1;
uint64_t x615 = UINT64_MAX;
static uint16_t x616 = 16461U;
int32_t t154 = 0;
int64_t x626 = -1LL;
int64_t x627 = INT64_MIN;
int64_t x629 = INT64_MAX;
uint16_t x631 = 93U;
int16_t x635 = -386;
static volatile int32_t t158 = -86;
int32_t t159 = 82;
int16_t x646 = INT16_MAX;
static int32_t x648 = INT32_MIN;
int32_t t161 = 1;
int16_t x654 = -188;
uint8_t x655 = 51U;
int16_t x670 = INT16_MIN;
int16_t x671 = INT16_MIN;
int32_t t167 = 48973;
uint8_t x676 = 1U;
int8_t x678 = 11;
static uint32_t x699 = 7U;
static uint16_t x705 = 1978U;
int8_t x706 = -7;
volatile int32_t t176 = 688;
uint16_t x711 = 470U;
volatile int32_t t177 = -92037;
uint8_t x717 = UINT8_MAX;
static volatile uint32_t x718 = 0U;
static uint8_t x722 = 6U;
uint8_t x723 = UINT8_MAX;
int32_t x727 = 4770060;
uint64_t x728 = 260823772215785LLU;
volatile int32_t t181 = 15216953;
int64_t x729 = -1LL;
int16_t x734 = INT16_MIN;
uint32_t x739 = UINT32_MAX;
volatile int32_t t185 = 1933;
volatile int16_t x748 = -20;
volatile int32_t t187 = -339545660;
static uint64_t x753 = 774836523752LLU;
uint64_t x758 = 3209270778622LLU;
static int32_t t189 = -814223836;
volatile int16_t x763 = INT16_MIN;
int16_t x764 = INT16_MIN;
volatile int32_t x765 = INT32_MIN;
static uint16_t x768 = UINT16_MAX;
static uint8_t x770 = 13U;
uint32_t x774 = 20406U;
int8_t x776 = -1;
int8_t x779 = INT8_MAX;
static volatile uint8_t x794 = UINT8_MAX;
int64_t x798 = INT64_MIN;
int32_t t199 = 7623836;


void f0(void) {
    	volatile int16_t x1 = -1;
	volatile int32_t x2 = INT32_MIN;
	int32_t t0 = -35834;

    t0 = (x1>(x2|(x3&x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	int8_t x6 = INT8_MIN;
	static uint8_t x7 = 27U;
	int32_t t1 = 34;

    t1 = (x5>(x6|(x7&x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = UINT8_MAX;
	int16_t x10 = -1;
	int64_t x11 = INT64_MIN;
	int64_t x12 = INT64_MIN;
	volatile int32_t t2 = -143161421;

    t2 = (x9>(x10|(x11&x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -1;
	volatile int32_t x14 = 0;
	static int8_t x16 = INT8_MAX;
	int32_t t3 = -116298;

    t3 = (x13>(x14|(x15&x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = -1LL;
	uint8_t x18 = UINT8_MAX;
	volatile int16_t x20 = -1;
	volatile int32_t t4 = -37890;

    t4 = (x17>(x18|(x19&x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x21 = INT32_MIN;
	int64_t x23 = -68148499629900LL;
	static volatile int32_t t5 = -430539964;

    t5 = (x21>(x22|(x23&x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 200216588558541153LLU;
	volatile uint8_t x26 = 2U;
	static int16_t x28 = 311;
	int32_t t6 = 110179197;

    t6 = (x25>(x26|(x27&x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x29 = INT64_MIN;
	static volatile int64_t x30 = -1LL;
	static uint32_t x31 = 0U;
	int16_t x32 = -1;
	int32_t t7 = -3854603;

    t7 = (x29>(x30|(x31&x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint64_t x34 = 291762910203765396LLU;
	static volatile int32_t t8 = -430745629;

    t8 = (x33>(x34|(x35&x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	int16_t x38 = INT16_MIN;
	int16_t x39 = INT16_MAX;
	int16_t x40 = -1;
	int32_t t9 = 4315;

    t9 = (x37>(x38|(x39&x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x41 = -1;
	static volatile int64_t x43 = -87545278643656LL;
	int32_t x44 = -229400557;
	volatile int32_t t10 = 4142;

    t10 = (x41>(x42|(x43&x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MAX;
	int32_t x46 = INT32_MIN;
	int8_t x47 = INT8_MIN;
	volatile int16_t x48 = 1614;
	int32_t t11 = -43864063;

    t11 = (x45>(x46|(x47&x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x50 = UINT32_MAX;
	volatile int16_t x51 = -15692;
	int16_t x52 = INT16_MIN;
	volatile int32_t t12 = -1;

    t12 = (x49>(x50|(x51&x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = 0U;
	static volatile uint64_t x54 = 3473LLU;
	uint16_t x56 = 0U;
	int32_t t13 = -2074;

    t13 = (x53>(x54|(x55&x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = 29464U;
	static int16_t x58 = INT16_MIN;
	static int16_t x59 = INT16_MIN;
	volatile int32_t x60 = INT32_MIN;
	volatile int32_t t14 = 125681480;

    t14 = (x57>(x58|(x59&x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int16_t x61 = INT16_MAX;
	uint16_t x62 = 46U;
	int16_t x63 = INT16_MIN;
	int16_t x64 = INT16_MAX;
	static volatile int32_t t15 = 1;

    t15 = (x61>(x62|(x63&x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x67 = -200960161608807LL;
	uint32_t x68 = UINT32_MAX;

    t16 = (x65>(x66|(x67&x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MIN;
	int64_t x70 = INT64_MAX;
	int16_t x71 = -2655;
	uint64_t x72 = 96489315460LLU;
	int32_t t17 = -131756971;

    t17 = (x69>(x70|(x71&x72)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x73 = 13078LLU;
	int64_t x74 = INT64_MIN;
	uint8_t x75 = 1U;
	int32_t x76 = 3348;
	int32_t t18 = 105065;

    t18 = (x73>(x74|(x75&x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint8_t x78 = 1U;
	volatile uint16_t x79 = UINT16_MAX;
	static int32_t t19 = -28203740;

    t19 = (x77>(x78|(x79&x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = 8353;
	uint64_t x82 = 256LLU;
	volatile int32_t t20 = 18;

    t20 = (x81>(x82|(x83&x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = -1;
	volatile int32_t t21 = 39866;

    t21 = (x85>(x86|(x87&x88)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x89 = 1494259U;
	int8_t x90 = 1;
	int32_t x91 = -1;
	static volatile int32_t t22 = -7962;

    t22 = (x89>(x90|(x91&x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = UINT8_MAX;
	volatile uint8_t x94 = UINT8_MAX;
	int8_t x95 = -1;
	int64_t x96 = 1339416632065148523LL;

    t23 = (x93>(x94|(x95&x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x97 = INT64_MIN;
	static int8_t x99 = INT8_MIN;
	volatile int32_t t24 = 117;

    t24 = (x97>(x98|(x99&x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x101 = 10927U;
	uint32_t x102 = 30302U;
	static volatile int64_t x103 = -887145LL;
	volatile uint32_t x104 = 230U;
	volatile int32_t t25 = 14;

    t25 = (x101>(x102|(x103&x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x107 = INT8_MIN;
	uint16_t x108 = 1U;
	int32_t t26 = 179;

    t26 = (x105>(x106|(x107&x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MIN;
	static int16_t x111 = 13626;
	static volatile int64_t x112 = -1LL;
	int32_t t27 = -143499706;

    t27 = (x109>(x110|(x111&x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x114 = 4U;
	int8_t x116 = INT8_MIN;
	int32_t t28 = 59;

    t28 = (x113>(x114|(x115&x116)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x118 = INT16_MAX;
	int8_t x119 = 1;
	int64_t x120 = INT64_MAX;

    t29 = (x117>(x118|(x119&x120)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = -1;
	static uint16_t x122 = 0U;
	int64_t x124 = INT64_MAX;

    t30 = (x121>(x122|(x123&x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x125 = -2LL;
	volatile uint64_t x126 = 0LLU;
	static int16_t x127 = INT16_MIN;
	static uint8_t x128 = 3U;
	volatile int32_t t31 = 0;

    t31 = (x125>(x126|(x127&x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x130 = -1;
	int8_t x131 = -1;
	int8_t x132 = INT8_MIN;
	volatile int32_t t32 = -716;

    t32 = (x129>(x130|(x131&x132)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x133 = INT32_MIN;
	static uint64_t x134 = 59224452688LLU;
	volatile int64_t x135 = -1LL;
	static volatile int8_t x136 = INT8_MIN;

    t33 = (x133>(x134|(x135&x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x139 = -7;
	uint32_t x140 = 245U;
	int32_t t34 = -6906;

    t34 = (x137>(x138|(x139&x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint32_t x141 = 1170275U;
	int16_t x142 = INT16_MIN;
	int64_t x143 = INT64_MIN;
	static int32_t x144 = INT32_MIN;
	static volatile int32_t t35 = 83735;

    t35 = (x141>(x142|(x143&x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x145 = 10883089405372285LLU;
	int64_t x146 = INT64_MIN;
	int16_t x147 = -1;
	uint8_t x148 = 1U;
	static volatile int32_t t36 = -11653751;

    t36 = (x145>(x146|(x147&x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = -1LL;
	uint64_t x151 = UINT64_MAX;
	volatile int32_t t37 = -34330;

    t37 = (x149>(x150|(x151&x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = -1;
	int32_t x154 = INT32_MIN;
	volatile uint64_t x155 = UINT64_MAX;
	static uint64_t x156 = 17044608063603LLU;
	int32_t t38 = -4;

    t38 = (x153>(x154|(x155&x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = 2045442589621003LL;
	uint8_t x160 = 78U;
	static int32_t t39 = -191517;

    t39 = (x157>(x158|(x159&x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x161 = UINT64_MAX;
	volatile uint8_t x162 = 68U;
	int16_t x163 = INT16_MAX;
	static int32_t t40 = 15537043;

    t40 = (x161>(x162|(x163&x164)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x165 = 713610415U;
	static volatile int8_t x166 = -27;
	static uint8_t x167 = 3U;
	static volatile int64_t x168 = 4380591742335LL;
	int32_t t41 = -38;

    t41 = (x165>(x166|(x167&x168)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = INT8_MAX;
	uint16_t x170 = 4502U;
	int16_t x171 = 1;
	volatile int32_t x172 = 2795;
	volatile int32_t t42 = -660;

    t42 = (x169>(x170|(x171&x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int8_t x173 = -1;
	int64_t x174 = -1LL;
	uint16_t x175 = 602U;
	volatile int32_t t43 = 1;

    t43 = (x173>(x174|(x175&x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x177 = 14U;
	volatile int8_t x178 = 0;
	int32_t x180 = -1;
	static volatile int32_t t44 = -114818;

    t44 = (x177>(x178|(x179&x180)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x181 = 552853034U;
	int32_t x182 = -1;
	uint64_t x183 = 392622LLU;
	volatile int64_t x184 = INT64_MIN;
	volatile int32_t t45 = -59127;

    t45 = (x181>(x182|(x183&x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x185 = 3590;
	int8_t x186 = -1;
	int32_t x187 = INT32_MIN;
	int32_t x188 = -7;
	int32_t t46 = 687;

    t46 = (x185>(x186|(x187&x188)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x189 = 21U;
	int8_t x190 = INT8_MAX;
	uint64_t x192 = UINT64_MAX;

    t47 = (x189>(x190|(x191&x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = -68;
	static volatile int8_t x194 = 0;
	volatile int16_t x195 = INT16_MAX;
	int32_t t48 = 0;

    t48 = (x193>(x194|(x195&x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x198 = UINT32_MAX;
	uint16_t x200 = UINT16_MAX;
	int32_t t49 = 249723;

    t49 = (x197>(x198|(x199&x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = -1;
	int32_t x202 = 63462179;
	int64_t x203 = 238923LL;
	static volatile uint8_t x204 = 69U;
	volatile int32_t t50 = -102081792;

    t50 = (x201>(x202|(x203&x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x205 = UINT32_MAX;
	volatile int32_t x206 = INT32_MIN;
	volatile int8_t x208 = -13;

    t51 = (x205>(x206|(x207&x208)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x211 = -1;
	uint8_t x212 = UINT8_MAX;
	int32_t t52 = -2006530;

    t52 = (x209>(x210|(x211&x212)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x213 = -6151;
	static uint16_t x214 = 153U;
	uint8_t x215 = 64U;
	int8_t x216 = -36;
	volatile int32_t t53 = -33653766;

    t53 = (x213>(x214|(x215&x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x217 = 1692U;
	int16_t x218 = INT16_MIN;
	volatile int32_t x220 = INT32_MIN;
	static volatile int32_t t54 = 1;

    t54 = (x217>(x218|(x219&x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MIN;
	int64_t x223 = -2700088682124463LL;
	uint64_t x224 = UINT64_MAX;

    t55 = (x221>(x222|(x223&x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x225 = 523258LLU;
	uint64_t x226 = 518140006384LLU;
	int64_t x227 = INT64_MAX;
	volatile int64_t x228 = INT64_MIN;
	volatile int32_t t56 = 2853;

    t56 = (x225>(x226|(x227&x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = INT32_MAX;
	int64_t x231 = -1LL;
	uint16_t x232 = 59U;
	int32_t t57 = -708934889;

    t57 = (x229>(x230|(x231&x232)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x233 = 0;
	int8_t x234 = 3;
	uint32_t x235 = 46140U;
	int8_t x236 = INT8_MIN;
	int32_t t58 = -1;

    t58 = (x233>(x234|(x235&x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x238 = 246585485LLU;
	int64_t x239 = INT64_MAX;
	int8_t x240 = INT8_MIN;
	int32_t t59 = 784048;

    t59 = (x237>(x238|(x239&x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = -1;
	uint32_t x242 = UINT32_MAX;
	int32_t x243 = -1;
	volatile int32_t t60 = 884;

    t60 = (x241>(x242|(x243&x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = INT64_MAX;
	volatile int8_t x246 = INT8_MIN;
	int8_t x247 = -1;
	int64_t x248 = -132287387787536404LL;
	volatile int32_t t61 = -224943828;

    t61 = (x245>(x246|(x247&x248)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = -2024;
	volatile uint8_t x250 = UINT8_MAX;
	uint8_t x252 = 57U;
	int32_t t62 = 76;

    t62 = (x249>(x250|(x251&x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x256 = INT8_MIN;
	static int32_t t63 = 171269;

    t63 = (x253>(x254|(x255&x256)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x257 = 4;
	int64_t x258 = INT64_MIN;
	int32_t x260 = -368066;
	int32_t t64 = 201238;

    t64 = (x257>(x258|(x259&x260)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int8_t x261 = -1;
	static uint16_t x262 = 181U;
	uint32_t x263 = UINT32_MAX;
	static int32_t t65 = -100869329;

    t65 = (x261>(x262|(x263&x264)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x268 = INT64_MIN;
	int32_t t66 = -1852792;

    t66 = (x265>(x266|(x267&x268)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = 34774U;
	uint16_t x271 = 100U;
	int32_t t67 = -1072;

    t67 = (x269>(x270|(x271&x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = INT16_MIN;
	int64_t x274 = -49061LL;
	uint8_t x275 = 89U;
	volatile uint32_t x276 = 27U;
	static int32_t t68 = 1;

    t68 = (x273>(x274|(x275&x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x277 = 3U;
	int64_t x278 = INT64_MAX;
	int64_t x279 = 175369722284884LL;
	volatile uint64_t x280 = 4860622277LLU;
	static int32_t t69 = 1878;

    t69 = (x277>(x278|(x279&x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x281 = 0;
	int32_t x282 = INT32_MAX;
	int32_t x284 = -1;
	static int32_t t70 = 123916746;

    t70 = (x281>(x282|(x283&x284)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x285 = UINT64_MAX;
	int8_t x287 = INT8_MAX;
	uint8_t x288 = UINT8_MAX;
	volatile int32_t t71 = 919442;

    t71 = (x285>(x286|(x287&x288)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x289 = 15U;
	int8_t x290 = -24;
	int32_t x291 = INT32_MIN;
	int64_t x292 = 18870255118827LL;
	int32_t t72 = 0;

    t72 = (x289>(x290|(x291&x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x293 = UINT16_MAX;
	int16_t x294 = -1;
	uint8_t x295 = 1U;
	uint64_t x296 = UINT64_MAX;
	volatile int32_t t73 = 20156723;

    t73 = (x293>(x294|(x295&x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = -30011LL;
	int16_t x299 = 550;
	int32_t x300 = -7510;

    t74 = (x297>(x298|(x299&x300)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x304 = 172308U;
	int32_t t75 = -176049;

    t75 = (x301>(x302|(x303&x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = -1;
	int32_t x306 = -2350526;
	int64_t x308 = INT64_MIN;
	volatile int32_t t76 = -198827;

    t76 = (x305>(x306|(x307&x308)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x311 = INT32_MIN;
	int32_t t77 = -121960;

    t77 = (x309>(x310|(x311&x312)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x313 = 120U;
	uint16_t x314 = 854U;
	int32_t x315 = INT32_MIN;
	volatile int8_t x316 = INT8_MIN;
	volatile int32_t t78 = -578;

    t78 = (x313>(x314|(x315&x316)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x317 = -1435367788LL;
	uint64_t x318 = 7450LLU;
	static int16_t x319 = INT16_MIN;
	uint8_t x320 = UINT8_MAX;
	volatile int32_t t79 = -406;

    t79 = (x317>(x318|(x319&x320)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = 1149946297542LL;
	int32_t x322 = 92197;
	volatile int16_t x323 = -1;
	static int32_t x324 = INT32_MIN;

    t80 = (x321>(x322|(x323&x324)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = -30;
	int16_t x327 = INT16_MIN;
	volatile int32_t t81 = -101418345;

    t81 = (x325>(x326|(x327&x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = -1;
	uint16_t x330 = 0U;
	volatile int32_t x331 = 0;
	volatile int32_t x332 = 11605957;
	volatile int32_t t82 = -6934;

    t82 = (x329>(x330|(x331&x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x333 = 0;
	int32_t x334 = INT32_MAX;
	int32_t x335 = 8994564;
	volatile int8_t x336 = INT8_MIN;
	static int32_t t83 = 14685202;

    t83 = (x333>(x334|(x335&x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = INT8_MAX;
	int32_t x338 = 2006189;
	static int16_t x339 = 847;
	int8_t x340 = INT8_MIN;

    t84 = (x337>(x338|(x339&x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = 0;
	int16_t x342 = 17;
	static volatile int8_t x343 = -1;
	static uint8_t x344 = 25U;
	volatile int32_t t85 = -874592;

    t85 = (x341>(x342|(x343&x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x345 = INT8_MIN;
	int16_t x346 = 518;
	int32_t t86 = 8;

    t86 = (x345>(x346|(x347&x348)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x349 = 0LLU;
	int32_t x350 = INT32_MAX;
	int32_t x351 = -1;
	int8_t x352 = 1;
	volatile int32_t t87 = -17;

    t87 = (x349>(x350|(x351&x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x354 = 5773232;
	int8_t x355 = -1;
	int32_t t88 = -11144500;

    t88 = (x353>(x354|(x355&x356)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x357 = INT32_MIN;
	uint32_t x358 = 130458U;
	int64_t x359 = INT64_MIN;
	int16_t x360 = -1;
	static int32_t t89 = -344301106;

    t89 = (x357>(x358|(x359&x360)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = INT16_MIN;
	volatile int64_t x362 = -1LL;
	volatile int64_t x364 = INT64_MAX;
	static volatile int32_t t90 = 569314;

    t90 = (x361>(x362|(x363&x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = INT16_MIN;
	uint64_t x366 = UINT64_MAX;
	uint8_t x367 = 60U;
	uint8_t x368 = 2U;
	int32_t t91 = -1540857;

    t91 = (x365>(x366|(x367&x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x369 = -1;
	int64_t x370 = 129110LL;
	uint8_t x371 = 21U;
	int16_t x372 = 87;
	static volatile int32_t t92 = 2444;

    t92 = (x369>(x370|(x371&x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = INT64_MAX;
	int16_t x375 = INT16_MIN;

    t93 = (x373>(x374|(x375&x376)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x377 = 17U;
	int32_t x378 = INT32_MIN;
	int16_t x379 = -1890;
	uint32_t x380 = 42U;
	volatile int32_t t94 = 1549368;

    t94 = (x377>(x378|(x379&x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x382 = -5295LL;
	uint64_t x383 = 16663323202LLU;
	volatile int8_t x384 = -1;
	static volatile int32_t t95 = 8645878;

    t95 = (x381>(x382|(x383&x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x386 = INT32_MIN;
	int64_t x387 = INT64_MAX;
	static int16_t x388 = INT16_MIN;
	static int32_t t96 = -13796817;

    t96 = (x385>(x386|(x387&x388)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = INT64_MAX;
	uint32_t x390 = 1U;
	int32_t x391 = INT32_MAX;
	volatile uint8_t x392 = 3U;

    t97 = (x389>(x390|(x391&x392)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x394 = UINT32_MAX;
	static int16_t x396 = -1;
	volatile int32_t t98 = 244;

    t98 = (x393>(x394|(x395&x396)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x397 = 0U;
	uint32_t x399 = UINT32_MAX;
	int64_t x400 = INT64_MIN;
	volatile int32_t t99 = 15061;

    t99 = (x397>(x398|(x399&x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x401 = 124U;
	int32_t x402 = INT32_MAX;
	static int64_t x403 = INT64_MAX;
	int16_t x404 = 134;
	int32_t t100 = -12;

    t100 = (x401>(x402|(x403&x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint16_t x405 = UINT16_MAX;
	static int16_t x406 = INT16_MAX;
	int8_t x407 = INT8_MIN;
	static int16_t x408 = -1;
	static volatile int32_t t101 = -1;

    t101 = (x405>(x406|(x407&x408)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x409 = INT16_MIN;
	int64_t x411 = -2079866583363859LL;
	uint32_t x412 = 452U;
	int32_t t102 = -14186642;

    t102 = (x409>(x410|(x411&x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x413 = 12260787698LLU;
	uint8_t x416 = 0U;
	int32_t t103 = 1;

    t103 = (x413>(x414|(x415&x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = -1LL;
	int64_t x419 = INT64_MAX;
	int64_t x420 = 11742922964LL;
	static int32_t t104 = 269897;

    t104 = (x417>(x418|(x419&x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x421 = UINT16_MAX;
	int16_t x422 = 82;
	int32_t x423 = INT32_MAX;
	int64_t x424 = INT64_MIN;
	volatile int32_t t105 = -643;

    t105 = (x421>(x422|(x423&x424)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x426 = INT8_MIN;
	int32_t x427 = 195040;
	int32_t t106 = 918452;

    t106 = (x425>(x426|(x427&x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x429 = -1;
	int32_t t107 = 922;

    t107 = (x429>(x430|(x431&x432)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = INT8_MAX;
	int32_t x435 = INT32_MIN;
	int32_t t108 = -29708934;

    t108 = (x433>(x434|(x435&x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x437 = -1;
	int8_t x438 = -17;
	uint32_t x439 = UINT32_MAX;
	static uint16_t x440 = 3068U;
	static volatile int32_t t109 = -5923843;

    t109 = (x437>(x438|(x439&x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x441 = 71U;
	int32_t x442 = INT32_MIN;
	uint16_t x443 = UINT16_MAX;
	int8_t x444 = INT8_MIN;
	volatile int32_t t110 = -6;

    t110 = (x441>(x442|(x443&x444)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = INT32_MIN;
	uint64_t x447 = UINT64_MAX;
	int32_t x448 = INT32_MIN;
	volatile int32_t t111 = 1698;

    t111 = (x445>(x446|(x447&x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x449 = UINT64_MAX;
	static uint32_t x450 = UINT32_MAX;
	int32_t x451 = -1;
	int8_t x452 = INT8_MIN;
	volatile int32_t t112 = -701;

    t112 = (x449>(x450|(x451&x452)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x453 = 9U;
	uint16_t x454 = 3U;
	int64_t x455 = -42241939705LL;
	volatile int32_t t113 = -87;

    t113 = (x453>(x454|(x455&x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x457 = 4U;
	int64_t x458 = -2592792270874410402LL;
	static volatile int32_t x459 = 239271;
	int64_t x460 = INT64_MIN;
	volatile int32_t t114 = 8;

    t114 = (x457>(x458|(x459&x460)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = 316;
	int8_t x462 = -25;
	static uint16_t x464 = 23550U;

    t115 = (x461>(x462|(x463&x464)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x465 = 658U;
	static uint32_t x466 = 11389433U;
	volatile int16_t x467 = INT16_MIN;
	static uint32_t x468 = 395U;
	static volatile int32_t t116 = 622541353;

    t116 = (x465>(x466|(x467&x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = -1LL;
	int8_t x470 = INT8_MIN;
	uint64_t x471 = 1115LLU;
	volatile int32_t x472 = INT32_MAX;
	int32_t t117 = -10766;

    t117 = (x469>(x470|(x471&x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x473 = 1;
	uint16_t x474 = UINT16_MAX;
	int32_t t118 = -128216;

    t118 = (x473>(x474|(x475&x476)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x477 = 3183U;
	volatile uint64_t x478 = 190825LLU;
	volatile uint8_t x479 = 7U;
	int32_t x480 = 753640530;

    t119 = (x477>(x478|(x479&x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x482 = INT8_MAX;

    t120 = (x481>(x482|(x483&x484)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x486 = UINT32_MAX;
	int8_t x487 = -1;
	int32_t x488 = -441;
	int32_t t121 = -39811900;

    t121 = (x485>(x486|(x487&x488)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x490 = -69293543228803736LL;
	static int16_t x491 = INT16_MIN;
	uint16_t x492 = 19091U;
	int32_t t122 = -291618450;

    t122 = (x489>(x490|(x491&x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = INT8_MAX;
	static uint32_t x494 = 7U;
	uint16_t x495 = 6075U;
	int32_t x496 = INT32_MAX;
	int32_t t123 = -8;

    t123 = (x493>(x494|(x495&x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x497 = INT64_MIN;
	static int64_t x498 = -35766979976591325LL;
	int16_t x499 = -9;
	int32_t x500 = INT32_MAX;
	volatile int32_t t124 = 20076021;

    t124 = (x497>(x498|(x499&x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = -1;
	int32_t x502 = INT32_MIN;
	static int64_t x503 = INT64_MIN;

    t125 = (x501>(x502|(x503&x504)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x505 = 88U;
	static uint8_t x506 = 50U;
	uint8_t x507 = 0U;
	uint8_t x508 = 17U;
	int32_t t126 = 2;

    t126 = (x505>(x506|(x507&x508)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x509 = INT64_MIN;
	int32_t x510 = 0;
	uint8_t x512 = UINT8_MAX;

    t127 = (x509>(x510|(x511&x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x513 = 140LL;
	volatile uint16_t x514 = 1U;
	uint16_t x515 = 13U;
	static volatile int16_t x516 = INT16_MAX;
	static volatile int32_t t128 = 280204315;

    t128 = (x513>(x514|(x515&x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = 268015735;
	volatile uint32_t x518 = 128U;
	uint32_t x519 = UINT32_MAX;

    t129 = (x517>(x518|(x519&x520)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x522 = INT64_MIN;
	volatile uint64_t x523 = 67518879170657LLU;
	static volatile int64_t x524 = INT64_MAX;
	static int32_t t130 = 31432250;

    t130 = (x521>(x522|(x523&x524)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x525 = -1;
	int64_t x526 = INT64_MIN;
	volatile int32_t x527 = -40;
	static uint16_t x528 = 0U;
	static volatile int32_t t131 = -1561730;

    t131 = (x525>(x526|(x527&x528)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x529 = UINT16_MAX;
	int16_t x530 = INT16_MIN;
	uint8_t x531 = UINT8_MAX;
	int32_t x532 = 6;
	static volatile int32_t t132 = 18686612;

    t132 = (x529>(x530|(x531&x532)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x533 = UINT8_MAX;
	uint8_t x534 = UINT8_MAX;
	int32_t t133 = -47;

    t133 = (x533>(x534|(x535&x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = INT16_MIN;
	uint8_t x539 = 2U;
	int8_t x540 = INT8_MIN;

    t134 = (x537>(x538|(x539&x540)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = 493077922;
	volatile int64_t x542 = INT64_MIN;
	volatile uint8_t x543 = UINT8_MAX;
	int8_t x544 = INT8_MAX;
	volatile int32_t t135 = -33693;

    t135 = (x541>(x542|(x543&x544)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x546 = INT32_MIN;
	volatile int8_t x547 = INT8_MIN;
	int32_t x548 = -1;
	int32_t t136 = -258875730;

    t136 = (x545>(x546|(x547&x548)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = 7;
	static int32_t x550 = -1;
	static int32_t x551 = -1;
	int8_t x552 = INT8_MAX;
	volatile int32_t t137 = -7010971;

    t137 = (x549>(x550|(x551&x552)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = INT64_MIN;
	int32_t x556 = INT32_MIN;
	volatile int32_t t138 = -106;

    t138 = (x553>(x554|(x555&x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = INT64_MIN;
	uint64_t x558 = 29101LLU;
	static volatile int64_t x559 = 3925LL;
	int32_t t139 = -532182994;

    t139 = (x557>(x558|(x559&x560)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = 2400569LL;
	int32_t x562 = 170201;
	int8_t x563 = INT8_MIN;
	volatile int8_t x564 = -1;
	volatile int32_t t140 = -225044;

    t140 = (x561>(x562|(x563&x564)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = INT8_MAX;
	volatile int8_t x566 = 59;
	int32_t x567 = -95;
	uint16_t x568 = 500U;
	volatile int32_t t141 = 93070948;

    t141 = (x565>(x566|(x567&x568)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x570 = 3193U;
	volatile uint8_t x571 = 1U;
	int8_t x572 = -10;
	static volatile int32_t t142 = -501;

    t142 = (x569>(x570|(x571&x572)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x573 = -226085;
	uint32_t x574 = 7U;
	uint16_t x575 = 56U;
	static volatile int64_t x576 = INT64_MAX;
	volatile int32_t t143 = -2;

    t143 = (x573>(x574|(x575&x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x577 = 21U;
	int32_t x580 = INT32_MIN;

    t144 = (x577>(x578|(x579&x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = -6;
	int16_t x584 = 28;
	static int32_t t145 = -29024159;

    t145 = (x581>(x582|(x583&x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = -1;
	static int8_t x587 = -1;
	int64_t x588 = INT64_MIN;

    t146 = (x585>(x586|(x587&x588)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x589 = -143215941;
	volatile int8_t x592 = -1;

    t147 = (x589>(x590|(x591&x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = 1;
	int8_t x596 = -37;
	int32_t t148 = -53587403;

    t148 = (x593>(x594|(x595&x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x597 = INT32_MAX;
	static uint16_t x598 = UINT16_MAX;
	int8_t x599 = INT8_MIN;
	uint16_t x600 = 0U;
	volatile int32_t t149 = 7424;

    t149 = (x597>(x598|(x599&x600)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x601 = INT32_MIN;
	static int64_t x603 = 3942364807LL;
	volatile int8_t x604 = INT8_MAX;
	volatile int32_t t150 = -1;

    t150 = (x601>(x602|(x603&x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x605 = 467U;
	int16_t x606 = -1;
	volatile uint16_t x607 = 9U;
	int8_t x608 = -1;
	int32_t t151 = 277;

    t151 = (x605>(x606|(x607&x608)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x610 = INT16_MIN;
	int16_t x611 = -1844;
	uint32_t x612 = 76299230U;
	volatile int32_t t152 = -501;

    t152 = (x609>(x610|(x611&x612)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t t153 = -590430754;

    t153 = (x613>(x614|(x615&x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = -87;
	volatile int16_t x618 = INT16_MIN;
	int32_t x619 = -12081012;
	uint16_t x620 = 24U;

    t154 = (x617>(x618|(x619&x620)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x621 = INT8_MIN;
	int32_t x622 = INT32_MIN;
	volatile int64_t x623 = 835839892708LL;
	int8_t x624 = INT8_MAX;
	int32_t t155 = -430429230;

    t155 = (x621>(x622|(x623&x624)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = INT32_MIN;
	int32_t x628 = INT32_MIN;
	int32_t t156 = -128938934;

    t156 = (x625>(x626|(x627&x628)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x630 = 14U;
	static int8_t x632 = -7;
	int32_t t157 = -10223;

    t157 = (x629>(x630|(x631&x632)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = INT32_MIN;
	int8_t x634 = INT8_MAX;
	int64_t x636 = INT64_MIN;

    t158 = (x633>(x634|(x635&x636)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x637 = 2834066U;
	int16_t x638 = -14964;
	int32_t x639 = 9;
	int32_t x640 = INT32_MAX;

    t159 = (x637>(x638|(x639&x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = -346393;
	volatile uint16_t x642 = 1122U;
	uint8_t x643 = 95U;
	volatile int64_t x644 = INT64_MIN;
	int32_t t160 = 4642134;

    t160 = (x641>(x642|(x643&x644)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x645 = INT8_MIN;
	uint32_t x647 = UINT32_MAX;

    t161 = (x645>(x646|(x647&x648)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = INT32_MAX;
	uint64_t x650 = 6379123178984LLU;
	static int8_t x651 = -3;
	static volatile uint32_t x652 = UINT32_MAX;
	int32_t t162 = 6163;

    t162 = (x649>(x650|(x651&x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x653 = INT8_MIN;
	volatile int32_t x656 = INT32_MIN;
	volatile int32_t t163 = -232297587;

    t163 = (x653>(x654|(x655&x656)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x657 = -4LL;
	int16_t x658 = INT16_MAX;
	int8_t x659 = -1;
	int64_t x660 = 1LL;
	static volatile int32_t t164 = 180656259;

    t164 = (x657>(x658|(x659&x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = INT32_MAX;
	volatile int8_t x662 = -12;
	int32_t x663 = -2;
	volatile uint8_t x664 = 68U;
	int32_t t165 = -92410;

    t165 = (x661>(x662|(x663&x664)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x665 = 2091779158782198785LLU;
	volatile int64_t x666 = INT64_MAX;
	int64_t x667 = -1233615011906914599LL;
	int64_t x668 = 646684321170588LL;
	int32_t t166 = -13;

    t166 = (x665>(x666|(x667&x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile uint32_t x669 = 6559U;
	int32_t x672 = -49;

    t167 = (x669>(x670|(x671&x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x673 = -56;
	uint8_t x674 = UINT8_MAX;
	uint8_t x675 = UINT8_MAX;
	static int32_t t168 = -3;

    t168 = (x673>(x674|(x675&x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x677 = INT32_MIN;
	int32_t x679 = INT32_MIN;
	uint8_t x680 = UINT8_MAX;
	volatile int32_t t169 = 29;

    t169 = (x677>(x678|(x679&x680)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x681 = INT8_MIN;
	int32_t x682 = 1980;
	static uint32_t x683 = 8449U;
	int64_t x684 = INT64_MIN;
	int32_t t170 = -6;

    t170 = (x681>(x682|(x683&x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = INT16_MIN;
	uint64_t x686 = UINT64_MAX;
	int32_t x687 = INT32_MAX;
	int32_t x688 = -1;
	int32_t t171 = -1;

    t171 = (x685>(x686|(x687&x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = INT64_MIN;
	uint8_t x690 = 60U;
	uint32_t x691 = 5U;
	volatile int32_t x692 = -1;
	int32_t t172 = -3513999;

    t172 = (x689>(x690|(x691&x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = INT16_MIN;
	volatile uint16_t x694 = 52U;
	static uint64_t x695 = 66072572LLU;
	volatile int8_t x696 = INT8_MIN;
	int32_t t173 = 19;

    t173 = (x693>(x694|(x695&x696)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x697 = UINT32_MAX;
	int16_t x698 = INT16_MAX;
	int16_t x700 = INT16_MIN;
	volatile int32_t t174 = 1631;

    t174 = (x697>(x698|(x699&x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = INT16_MIN;
	int16_t x702 = 89;
	static uint64_t x703 = 19145LLU;
	static int64_t x704 = INT64_MAX;
	volatile int32_t t175 = 124789;

    t175 = (x701>(x702|(x703&x704)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x707 = -1;
	int8_t x708 = INT8_MAX;

    t176 = (x705>(x706|(x707&x708)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = -1LL;
	static int16_t x710 = -1;
	int64_t x712 = -1LL;

    t177 = (x709>(x710|(x711&x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = INT32_MIN;
	static uint8_t x714 = 2U;
	int64_t x715 = -12692LL;
	int64_t x716 = INT64_MAX;
	int32_t t178 = -89;

    t178 = (x713>(x714|(x715&x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x719 = INT64_MIN;
	static volatile uint8_t x720 = 19U;
	static int32_t t179 = -105;

    t179 = (x717>(x718|(x719&x720)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = -1;
	int8_t x724 = 7;
	static volatile int32_t t180 = -266727823;

    t180 = (x721>(x722|(x723&x724)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = INT16_MIN;
	int32_t x726 = -129688;

    t181 = (x725>(x726|(x727&x728)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x730 = 50826LLU;
	int8_t x731 = INT8_MIN;
	int32_t x732 = -12;
	int32_t t182 = -69;

    t182 = (x729>(x730|(x731&x732)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x733 = INT16_MIN;
	int16_t x735 = INT16_MIN;
	volatile int8_t x736 = INT8_MIN;
	volatile int32_t t183 = 50373;

    t183 = (x733>(x734|(x735&x736)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = 1;
	int16_t x738 = INT16_MIN;
	volatile int64_t x740 = INT64_MIN;
	volatile int32_t t184 = -89040;

    t184 = (x737>(x738|(x739&x740)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x741 = INT32_MAX;
	uint64_t x742 = 13344390LLU;
	uint8_t x743 = 0U;
	int32_t x744 = INT32_MIN;

    t185 = (x741>(x742|(x743&x744)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x745 = UINT32_MAX;
	int32_t x746 = INT32_MAX;
	int16_t x747 = INT16_MIN;
	int32_t t186 = -1012;

    t186 = (x745>(x746|(x747&x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = -4;
	static int64_t x750 = -1LL;
	int32_t x751 = INT32_MIN;
	uint16_t x752 = 1U;

    t187 = (x749>(x750|(x751&x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x754 = 11818;
	int16_t x755 = -7;
	int32_t x756 = 6185551;
	volatile int32_t t188 = -1892125;

    t188 = (x753>(x754|(x755&x756)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x757 = 1U;
	static uint32_t x759 = UINT32_MAX;
	volatile int64_t x760 = INT64_MAX;

    t189 = (x757>(x758|(x759&x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = -165065854014405LL;
	int32_t x762 = -281;
	static volatile int32_t t190 = 57722;

    t190 = (x761>(x762|(x763&x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x766 = INT32_MIN;
	uint64_t x767 = 5170998903932914439LLU;
	static int32_t t191 = -7744;

    t191 = (x765>(x766|(x767&x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = -13;
	static uint32_t x771 = 3155990U;
	int64_t x772 = INT64_MIN;
	volatile int32_t t192 = 1;

    t192 = (x769>(x770|(x771&x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = -3;
	volatile uint64_t x775 = 438948LLU;
	int32_t t193 = 1;

    t193 = (x773>(x774|(x775&x776)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint8_t x777 = UINT8_MAX;
	int32_t x778 = -3152;
	int64_t x780 = INT64_MAX;
	volatile int32_t t194 = 384;

    t194 = (x777>(x778|(x779&x780)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = -162021988;
	uint8_t x782 = 14U;
	static int8_t x783 = INT8_MIN;
	int64_t x784 = -1LL;
	volatile int32_t t195 = -7812;

    t195 = (x781>(x782|(x783&x784)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = -1;
	static int64_t x786 = INT64_MIN;
	static int8_t x787 = -13;
	int8_t x788 = INT8_MIN;
	int32_t t196 = -2976;

    t196 = (x785>(x786|(x787&x788)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x789 = UINT32_MAX;
	volatile int32_t x790 = 24424;
	static int8_t x791 = -1;
	int16_t x792 = INT16_MIN;
	static volatile int32_t t197 = 2010;

    t197 = (x789>(x790|(x791&x792)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x793 = UINT16_MAX;
	static int32_t x795 = -1266;
	uint32_t x796 = UINT32_MAX;
	int32_t t198 = 5131491;

    t198 = (x793>(x794|(x795&x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = -624659635411238LL;
	int32_t x799 = -13462894;
	int32_t x800 = INT32_MIN;

    t199 = (x797>(x798|(x799&x800)));

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

