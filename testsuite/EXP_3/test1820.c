
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

int16_t x3 = -1;
int32_t t1 = -294824;
uint8_t x13 = 0U;
volatile int32_t t3 = 154;
uint8_t x34 = UINT8_MAX;
uint16_t x35 = 2U;
static int16_t x41 = INT16_MIN;
static int16_t x45 = INT16_MAX;
int16_t x49 = INT16_MIN;
int64_t x50 = INT64_MIN;
int64_t x62 = INT64_MAX;
static volatile int64_t t14 = 311357513642LL;
uint64_t x67 = UINT64_MAX;
int32_t x70 = INT32_MAX;
int32_t t17 = 848;
static uint16_t x77 = 29U;
uint16_t x84 = 4U;
uint8_t x88 = 0U;
static int8_t x89 = 1;
int16_t x90 = INT16_MAX;
int32_t t21 = -192625133;
int64_t x94 = INT64_MIN;
uint16_t x96 = 215U;
int16_t x104 = INT16_MIN;
static volatile int32_t t28 = 1973029;
int32_t x121 = INT32_MAX;
static volatile int64_t x122 = INT64_MIN;
int64_t t29 = 3728632447035LL;
int16_t x127 = INT16_MAX;
volatile int64_t t30 = -37696LL;
uint32_t x140 = 33U;
static int32_t t34 = 2326768;
int64_t t35 = 187173762916LL;
int32_t x156 = INT32_MIN;
int8_t x157 = 1;
uint16_t x165 = UINT16_MAX;
int64_t t42 = 9808112LL;
volatile int32_t t44 = 177881;
uint64_t x198 = UINT64_MAX;
volatile uint64_t x201 = 8474869166LLU;
int8_t x204 = 0;
int32_t x208 = INT32_MIN;
static uint8_t x209 = 68U;
int8_t x213 = INT8_MIN;
uint32_t x215 = UINT32_MAX;
uint32_t t52 = 555244390U;
static int32_t x222 = INT32_MIN;
volatile int16_t x226 = INT16_MAX;
int8_t x227 = 0;
volatile uint32_t t55 = 3619533U;
int8_t x230 = -17;
volatile uint64_t t56 = 9646562LLU;
int64_t x239 = INT64_MIN;
int8_t x240 = -1;
volatile int64_t t58 = 3436247LL;
volatile int64_t t61 = -36010594LL;
static volatile int64_t x253 = -1LL;
int64_t t62 = 33LL;
int8_t x257 = INT8_MAX;
volatile uint32_t x260 = 92993U;
int16_t x261 = INT16_MAX;
static int64_t x263 = INT64_MIN;
static volatile uint64_t x269 = UINT64_MAX;
int16_t x273 = 1;
int64_t x277 = INT64_MIN;
static int64_t x281 = -1LL;
int32_t x292 = INT32_MIN;
static volatile int64_t t71 = 207898730525LL;
int64_t x293 = 19326793044LL;
int32_t x295 = INT32_MIN;
int64_t x299 = 61106LL;
int8_t x301 = 0;
volatile int16_t x303 = INT16_MIN;
int32_t x305 = -1;
int32_t x312 = -1;
static volatile int64_t t76 = -524900LL;
uint16_t x320 = 426U;
int8_t x326 = -1;
uint8_t x330 = UINT8_MAX;
int32_t x337 = INT32_MIN;
uint16_t x351 = 246U;
volatile uint64_t x353 = UINT64_MAX;
int16_t x355 = INT16_MIN;
volatile uint64_t t88 = 1411925071719LLU;
static uint32_t x363 = 15099419U;
volatile uint64_t x370 = 2174797836LLU;
uint64_t t92 = 279351998887330540LLU;
int32_t x377 = INT32_MIN;
volatile int32_t x380 = INT32_MIN;
uint64_t x385 = 57610393122134LLU;
uint16_t x387 = 1U;
int32_t x388 = -139;
uint64_t x397 = 397493220984LLU;
static int64_t x400 = INT64_MAX;
static int16_t x405 = -1;
int64_t x406 = 914498574877LL;
int64_t t99 = 831900LL;
volatile int32_t x411 = INT32_MAX;
uint8_t x422 = 63U;
int8_t x425 = INT8_MIN;
int32_t x426 = INT32_MAX;
uint64_t x429 = UINT64_MAX;
uint64_t t105 = 1230641669LLU;
int32_t t106 = -15596288;
int8_t x439 = INT8_MAX;
int32_t x440 = -1;
static int16_t x445 = 2;
uint8_t x448 = UINT8_MAX;
volatile int32_t x449 = -358;
static int8_t x452 = INT8_MIN;
static uint16_t x460 = UINT16_MAX;
int64_t x461 = INT64_MAX;
static int32_t x466 = -1;
static volatile uint64_t x467 = 4563543676972LLU;
int32_t t113 = -13;
volatile uint64_t t115 = 44488517LLU;
volatile int32_t t116 = -107;
static int8_t x481 = INT8_MIN;
volatile uint32_t x491 = 5U;
volatile int16_t x496 = INT16_MIN;
int8_t x498 = INT8_MAX;
int64_t t122 = -1082097413787891947LL;
static int16_t x512 = INT16_MAX;
volatile int64_t x519 = INT64_MAX;
volatile int32_t t126 = -472009767;
int8_t x522 = 5;
uint32_t x523 = UINT32_MAX;
int64_t x524 = 77119857174183LL;
volatile int8_t x527 = INT8_MAX;
volatile int8_t x534 = INT8_MAX;
volatile int64_t t132 = 17992342LL;
volatile int32_t t140 = 3488426;
uint8_t x581 = UINT8_MAX;
int32_t x584 = INT32_MIN;
uint16_t x588 = UINT16_MAX;
int8_t x592 = 4;
uint8_t x597 = 80U;
volatile int64_t x598 = INT64_MIN;
static int64_t x604 = -22LL;
volatile int32_t t148 = -47303325;
volatile uint32_t x615 = UINT32_MAX;
volatile int32_t x626 = INT32_MIN;
int32_t x644 = INT32_MAX;
int8_t x646 = -1;
int16_t x647 = -22;
static int8_t x648 = -1;
int8_t x658 = INT8_MIN;
uint8_t x681 = 96U;
static int64_t x685 = -2234150LL;
int64_t x687 = -1LL;
int8_t x688 = 0;
uint32_t x697 = 2062925477U;
int32_t x698 = -1;
uint8_t x707 = 75U;
static volatile int32_t t171 = -5;
volatile int16_t x714 = INT16_MIN;
int64_t x717 = INT64_MAX;
uint32_t x722 = 20U;
static uint16_t x726 = 7U;
int32_t x729 = 569;
volatile int32_t t176 = -739;
uint16_t x747 = 15656U;
int32_t x748 = INT32_MIN;
int64_t x751 = INT64_MIN;
int16_t x752 = INT16_MIN;
static int8_t x754 = INT8_MAX;
volatile uint64_t t183 = 471941423982LLU;
static volatile int64_t t184 = 329749761382LL;
int8_t x765 = 1;
uint16_t x767 = 2796U;
static uint32_t x773 = 196705971U;
static int32_t x776 = -14;
volatile uint32_t t187 = 5U;
uint32_t x777 = 286150543U;
static volatile int64_t t188 = 104531112LL;
uint16_t x787 = 721U;
int64_t t190 = 40197235921076888LL;
volatile int64_t x791 = INT64_MIN;
int64_t x810 = -28LL;
volatile uint8_t x814 = 15U;
int16_t x824 = INT16_MIN;
static volatile int32_t t199 = 1363;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	static int8_t x2 = INT8_MAX;
	int32_t x4 = 29;
	volatile int32_t t0 = -13831997;

    t0 = ((x1/x2)^(x3<=x4));

    if (t0 != -257) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int32_t x5 = INT32_MAX;
	static int16_t x6 = INT16_MIN;
	int64_t x7 = INT64_MIN;
	uint8_t x8 = 10U;

    t1 = ((x5/x6)^(x7<=x8));

    if (t1 != -65536) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = UINT16_MAX;
	static volatile uint16_t x10 = 17U;
	static volatile uint16_t x11 = 10U;
	uint8_t x12 = 48U;
	volatile int32_t t2 = 351305731;

    t2 = ((x9/x10)^(x11<=x12));

    if (t2 != 3854) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x14 = INT16_MIN;
	int32_t x15 = INT32_MIN;
	volatile int32_t x16 = -1;

    t3 = ((x13/x14)^(x15<=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = UINT16_MAX;
	int32_t x18 = 175258;
	volatile int16_t x19 = -1;
	int8_t x20 = 6;
	volatile int32_t t4 = 1;

    t4 = ((x17/x18)^(x19<=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MAX;
	int8_t x22 = INT8_MIN;
	int8_t x23 = 1;
	int16_t x24 = INT16_MAX;
	volatile int32_t t5 = 352224782;

    t5 = ((x21/x22)^(x23<=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -1LL;
	int64_t x26 = -11155570963348068LL;
	int8_t x27 = -25;
	int16_t x28 = -100;
	volatile int64_t t6 = 1750598LL;

    t6 = ((x25/x26)^(x27<=x28));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x29 = UINT16_MAX;
	uint32_t x30 = UINT32_MAX;
	static uint32_t x31 = 1833348U;
	int32_t x32 = 44;
	uint32_t t7 = 15067U;

    t7 = ((x29/x30)^(x31<=x32));

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = INT64_MIN;
	volatile int16_t x36 = INT16_MIN;
	volatile int64_t t8 = -395761502LL;

    t8 = ((x33/x34)^(x35<=x36));

    if (t8 != -36170086419038336LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x42 = INT16_MIN;
	volatile int32_t x43 = -93615528;
	static int16_t x44 = -6438;
	volatile int32_t t9 = -119777;

    t9 = ((x41/x42)^(x43<=x44));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int64_t x46 = INT64_MAX;
	int32_t x47 = -33;
	int8_t x48 = INT8_MIN;
	static int64_t t10 = 11437LL;

    t10 = ((x45/x46)^(x47<=x48));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x51 = 3;
	static uint8_t x52 = 5U;
	static volatile int64_t t11 = 2266377712LL;

    t11 = ((x49/x50)^(x51<=x52));

    if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x53 = 0U;
	int32_t x54 = -8291435;
	int64_t x55 = -1LL;
	int16_t x56 = 37;
	volatile int32_t t12 = 590;

    t12 = ((x53/x54)^(x55<=x56));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x57 = INT16_MIN;
	static volatile int16_t x58 = INT16_MIN;
	int16_t x59 = -1;
	uint16_t x60 = 3026U;
	int32_t t13 = 1407;

    t13 = ((x57/x58)^(x59<=x60));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x61 = 62U;
	volatile uint64_t x63 = 12965939531LLU;
	int32_t x64 = INT32_MIN;

    t14 = ((x61/x62)^(x63<=x64));

    if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x65 = INT8_MIN;
	int8_t x66 = 26;
	int16_t x68 = INT16_MIN;
	int32_t t15 = 639;

    t15 = ((x65/x66)^(x67<=x68));

    if (t15 != -4) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x69 = UINT64_MAX;
	int32_t x71 = 3774496;
	volatile int16_t x72 = INT16_MAX;
	static volatile uint64_t t16 = 0LLU;

    t16 = ((x69/x70)^(x71<=x72));

    if (t16 != 8589934596LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x73 = INT8_MIN;
	int16_t x74 = INT16_MIN;
	int64_t x75 = -1LL;
	int64_t x76 = -1LL;

    t17 = ((x73/x74)^(x75<=x76));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x78 = INT64_MAX;
	uint32_t x79 = 6927U;
	int8_t x80 = INT8_MAX;
	int64_t t18 = -766830LL;

    t18 = ((x77/x78)^(x79<=x80));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x81 = -1;
	uint16_t x82 = 1009U;
	uint32_t x83 = 2665U;
	int32_t t19 = -56;

    t19 = ((x81/x82)^(x83<=x84));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x85 = 0;
	int64_t x86 = -1LL;
	static int64_t x87 = INT64_MAX;
	int64_t t20 = -19899970774LL;

    t20 = ((x85/x86)^(x87<=x88));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x91 = INT64_MIN;
	volatile int8_t x92 = 29;

    t21 = ((x89/x90)^(x91<=x92));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x93 = UINT8_MAX;
	uint64_t x95 = UINT64_MAX;
	volatile int64_t t22 = 60LL;

    t22 = ((x93/x94)^(x95<=x96));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x97 = -1;
	static uint8_t x98 = 11U;
	uint64_t x99 = 2LLU;
	uint16_t x100 = UINT16_MAX;
	static int32_t t23 = -13663686;

    t23 = ((x97/x98)^(x99<=x100));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x101 = 756307200855531343LL;
	static int8_t x102 = INT8_MAX;
	static int32_t x103 = 44;
	volatile int64_t t24 = -39967611533617965LL;

    t24 = ((x101/x102)^(x103<=x104));

    if (t24 != 5955174809886073LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x105 = 1U;
	int16_t x106 = INT16_MIN;
	int64_t x107 = -505495122LL;
	int32_t x108 = INT32_MIN;
	int32_t t25 = -66403;

    t25 = ((x105/x106)^(x107<=x108));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x109 = 142155136LLU;
	volatile int64_t x110 = -4461078529066579LL;
	int8_t x111 = INT8_MAX;
	int8_t x112 = INT8_MIN;
	volatile uint64_t t26 = 17108LLU;

    t26 = ((x109/x110)^(x111<=x112));

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x113 = -40448729171379LL;
	int16_t x114 = -11;
	uint64_t x115 = UINT64_MAX;
	static int64_t x116 = -1LL;
	volatile int64_t t27 = 92045LL;

    t27 = ((x113/x114)^(x115<=x116));

    if (t27 != 3677157197399LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x117 = UINT16_MAX;
	int32_t x118 = -2375;
	int64_t x119 = INT64_MIN;
	int64_t x120 = INT64_MIN;

    t28 = ((x117/x118)^(x119<=x120));

    if (t28 != -28) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x123 = INT64_MIN;
	int8_t x124 = 1;

    t29 = ((x121/x122)^(x123<=x124));

    if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x125 = 0;
	int64_t x126 = INT64_MIN;
	volatile int64_t x128 = INT64_MIN;

    t30 = ((x125/x126)^(x127<=x128));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x129 = 6LLU;
	uint32_t x130 = 1U;
	volatile uint16_t x131 = 336U;
	static int8_t x132 = INT8_MAX;
	volatile uint64_t t31 = 7866LLU;

    t31 = ((x129/x130)^(x131<=x132));

    if (t31 != 6LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x133 = 7354345LLU;
	static int16_t x134 = INT16_MIN;
	static volatile int32_t x135 = INT32_MAX;
	int32_t x136 = -1;
	static uint64_t t32 = 9755478829088LLU;

    t32 = ((x133/x134)^(x135<=x136));

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x137 = INT16_MAX;
	static int32_t x138 = -57702894;
	uint16_t x139 = 21U;
	volatile int32_t t33 = -20886509;

    t33 = ((x137/x138)^(x139<=x140));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x141 = -1;
	volatile int16_t x142 = INT16_MAX;
	int8_t x143 = INT8_MIN;
	int32_t x144 = INT32_MIN;

    t34 = ((x141/x142)^(x143<=x144));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x145 = -1LL;
	static int8_t x146 = INT8_MAX;
	uint8_t x147 = 4U;
	int32_t x148 = 904388632;

    t35 = ((x145/x146)^(x147<=x148));

    if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x149 = UINT16_MAX;
	int32_t x150 = -26;
	static int64_t x151 = -823583927LL;
	int16_t x152 = -1;
	static volatile int32_t t36 = 557405;

    t36 = ((x149/x150)^(x151<=x152));

    if (t36 != -2519) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x153 = INT32_MAX;
	static int64_t x154 = -1LL;
	static int8_t x155 = INT8_MIN;
	int64_t t37 = -319559476297LL;

    t37 = ((x153/x154)^(x155<=x156));

    if (t37 != -2147483647LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x158 = -1;
	int32_t x159 = INT32_MAX;
	volatile int16_t x160 = -1;
	int32_t t38 = -1;

    t38 = ((x157/x158)^(x159<=x160));

    if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int16_t x161 = -5480;
	int16_t x162 = INT16_MIN;
	int16_t x163 = INT16_MIN;
	int8_t x164 = INT8_MAX;
	volatile int32_t t39 = 591;

    t39 = ((x161/x162)^(x163<=x164));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x166 = INT32_MAX;
	int32_t x167 = 0;
	int32_t x168 = INT32_MIN;
	volatile int32_t t40 = 1892;

    t40 = ((x165/x166)^(x167<=x168));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x169 = -3;
	int32_t x170 = -2;
	static volatile uint64_t x171 = 16334412543502246LLU;
	int16_t x172 = 417;
	int32_t t41 = -1270967;

    t41 = ((x169/x170)^(x171<=x172));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x173 = 92425021372165816LL;
	int8_t x174 = INT8_MIN;
	static uint16_t x175 = 23996U;
	int16_t x176 = INT16_MIN;

    t42 = ((x173/x174)^(x175<=x176));

    if (t42 != -722070479470045LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x177 = -1;
	static volatile int16_t x178 = 560;
	int32_t x179 = INT32_MIN;
	int8_t x180 = -54;
	static volatile int32_t t43 = -277;

    t43 = ((x177/x178)^(x179<=x180));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x181 = -1;
	int8_t x182 = INT8_MAX;
	static volatile int32_t x183 = -293047;
	int64_t x184 = INT64_MIN;

    t44 = ((x181/x182)^(x183<=x184));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x185 = 1;
	int8_t x186 = INT8_MIN;
	uint32_t x187 = 2U;
	uint8_t x188 = 1U;
	volatile int32_t t45 = 1;

    t45 = ((x185/x186)^(x187<=x188));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x189 = INT16_MAX;
	int64_t x190 = INT64_MIN;
	static int8_t x191 = INT8_MAX;
	volatile int8_t x192 = 1;
	int64_t t46 = 11LL;

    t46 = ((x189/x190)^(x191<=x192));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x193 = INT32_MAX;
	int32_t x194 = INT32_MIN;
	uint8_t x195 = 1U;
	static uint8_t x196 = 6U;
	int32_t t47 = 1982715;

    t47 = ((x193/x194)^(x195<=x196));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x197 = INT8_MIN;
	volatile int8_t x199 = 10;
	static uint64_t x200 = 6169337928129LLU;
	uint64_t t48 = 368479274LLU;

    t48 = ((x197/x198)^(x199<=x200));

    if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x202 = INT8_MAX;
	volatile int8_t x203 = INT8_MIN;
	uint64_t t49 = 1LLU;

    t49 = ((x201/x202)^(x203<=x204));

    if (t49 != 66731252LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x205 = INT8_MAX;
	uint32_t x206 = 39972834U;
	static volatile int16_t x207 = INT16_MAX;
	volatile uint32_t t50 = 1705279U;

    t50 = ((x205/x206)^(x207<=x208));

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x210 = -58;
	int16_t x211 = 0;
	int64_t x212 = -1LL;
	volatile int32_t t51 = 786136606;

    t51 = ((x209/x210)^(x211<=x212));

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint32_t x214 = 11490U;
	uint64_t x216 = 512219LLU;

    t52 = ((x213/x214)^(x215<=x216));

    if (t52 != 373800U) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x217 = 6196191592508998LL;
	static int8_t x218 = 7;
	static int8_t x219 = INT8_MIN;
	static int8_t x220 = INT8_MAX;
	static volatile int64_t t53 = 216494760LL;

    t53 = ((x217/x218)^(x219<=x220));

    if (t53 != 885170227501284LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x221 = INT8_MIN;
	int16_t x223 = 8;
	volatile int16_t x224 = -1;
	volatile int32_t t54 = 248191849;

    t54 = ((x221/x222)^(x223<=x224));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x225 = 14834795U;
	volatile int16_t x228 = INT16_MIN;

    t55 = ((x225/x226)^(x227<=x228));

    if (t55 != 452U) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x229 = 160921701LLU;
	volatile int16_t x231 = INT16_MAX;
	int8_t x232 = INT8_MIN;

    t56 = ((x229/x230)^(x231<=x232));

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x233 = INT8_MAX;
	volatile int64_t x234 = INT64_MAX;
	uint16_t x235 = UINT16_MAX;
	static int32_t x236 = -115226;
	static int64_t t57 = -116827LL;

    t57 = ((x233/x234)^(x235<=x236));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x237 = -2LL;
	int8_t x238 = INT8_MIN;

    t58 = ((x237/x238)^(x239<=x240));

    if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x241 = INT32_MIN;
	uint32_t x242 = 446U;
	volatile int64_t x243 = INT64_MIN;
	int64_t x244 = INT64_MIN;
	static uint32_t t59 = 2603U;

    t59 = ((x241/x242)^(x243<=x244));

    if (t59 != 4814984U) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x245 = INT64_MIN;
	uint64_t x246 = 3LLU;
	int16_t x247 = -29;
	uint16_t x248 = 10U;
	volatile uint64_t t60 = 4248292LLU;

    t60 = ((x245/x246)^(x247<=x248));

    if (t60 != 3074457345618258603LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x249 = INT64_MIN;
	int8_t x250 = INT8_MAX;
	uint8_t x251 = 1U;
	uint16_t x252 = UINT16_MAX;

    t61 = ((x249/x250)^(x251<=x252));

    if (t61 != -72624976668147842LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x254 = UINT32_MAX;
	volatile uint64_t x255 = 72396427415838828LLU;
	int16_t x256 = INT16_MAX;

    t62 = ((x253/x254)^(x255<=x256));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x258 = INT16_MAX;
	uint32_t x259 = 435559U;
	volatile int32_t t63 = 1048632300;

    t63 = ((x257/x258)^(x259<=x260));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x262 = INT16_MAX;
	int16_t x264 = INT16_MIN;
	volatile int32_t t64 = -1909;

    t64 = ((x261/x262)^(x263<=x264));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x265 = INT32_MIN;
	volatile int64_t x266 = INT64_MAX;
	volatile int32_t x267 = INT32_MIN;
	static volatile uint16_t x268 = 485U;
	static int64_t t65 = 46739363060361LL;

    t65 = ((x265/x266)^(x267<=x268));

    if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x270 = -1;
	int64_t x271 = INT64_MIN;
	static int8_t x272 = -44;
	volatile uint64_t t66 = 248846848375214LLU;

    t66 = ((x269/x270)^(x271<=x272));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x274 = 25801LL;
	volatile int8_t x275 = -10;
	int32_t x276 = INT32_MAX;
	int64_t t67 = -3230866091915LL;

    t67 = ((x273/x274)^(x275<=x276));

    if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x278 = 1LL;
	int16_t x279 = -1;
	uint32_t x280 = 5203462U;
	static volatile int64_t t68 = INT64_MIN;

    t68 = ((x277/x278)^(x279<=x280));

    if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x282 = UINT64_MAX;
	uint8_t x283 = UINT8_MAX;
	volatile int16_t x284 = -1;
	uint64_t t69 = 58722218997LLU;

    t69 = ((x281/x282)^(x283<=x284));

    if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x285 = 939LLU;
	static volatile int64_t x286 = INT64_MIN;
	uint32_t x287 = 244636U;
	static volatile int16_t x288 = INT16_MIN;
	volatile uint64_t t70 = 930176439394644LLU;

    t70 = ((x285/x286)^(x287<=x288));

    if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x289 = -1;
	int64_t x290 = -39708LL;
	uint8_t x291 = 25U;

    t71 = ((x289/x290)^(x291<=x292));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x294 = -6455;
	int64_t x296 = INT64_MIN;
	static volatile int64_t t72 = -118061LL;

    t72 = ((x293/x294)^(x295<=x296));

    if (t72 != -2994081LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x297 = INT32_MAX;
	static volatile int16_t x298 = INT16_MIN;
	int8_t x300 = -1;
	volatile int32_t t73 = 13228;

    t73 = ((x297/x298)^(x299<=x300));

    if (t73 != -65535) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x302 = INT16_MIN;
	uint64_t x304 = 2818LLU;
	int32_t t74 = 102570701;

    t74 = ((x301/x302)^(x303<=x304));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint8_t x306 = 99U;
	volatile int16_t x307 = -24;
	int64_t x308 = INT64_MAX;
	static volatile int32_t t75 = -40;

    t75 = ((x305/x306)^(x307<=x308));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x309 = 4266U;
	static int64_t x310 = INT64_MIN;
	int64_t x311 = INT64_MAX;

    t76 = ((x309/x310)^(x311<=x312));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x313 = -1;
	int64_t x314 = INT64_MAX;
	static volatile int64_t x315 = INT64_MAX;
	static int16_t x316 = INT16_MAX;
	volatile int64_t t77 = -168073440768LL;

    t77 = ((x313/x314)^(x315<=x316));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x317 = 44;
	int16_t x318 = INT16_MIN;
	static int16_t x319 = INT16_MIN;
	int32_t t78 = -121;

    t78 = ((x317/x318)^(x319<=x320));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x321 = UINT16_MAX;
	int32_t x322 = 5034;
	uint64_t x323 = 28621798870635LLU;
	int64_t x324 = -12LL;
	static volatile int32_t t79 = -155700;

    t79 = ((x321/x322)^(x323<=x324));

    if (t79 != 12) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x325 = -1;
	static volatile uint64_t x327 = 255LLU;
	uint64_t x328 = 1079464021175LLU;
	static volatile int32_t t80 = 119673;

    t80 = ((x325/x326)^(x327<=x328));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x329 = -52;
	static uint16_t x331 = 49U;
	static int8_t x332 = -54;
	volatile int32_t t81 = 601;

    t81 = ((x329/x330)^(x331<=x332));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x333 = -1;
	static uint64_t x334 = 207790257031LLU;
	int8_t x335 = INT8_MIN;
	volatile int64_t x336 = -1LL;
	static volatile uint64_t t82 = 12989LLU;

    t82 = ((x333/x334)^(x335<=x336));

    if (t82 != 88775788LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x338 = 1U;
	int64_t x339 = INT64_MIN;
	volatile uint16_t x340 = UINT16_MAX;
	int32_t t83 = 690371;

    t83 = ((x337/x338)^(x339<=x340));

    if (t83 != -2147483647) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x341 = 4599297201135591LLU;
	int8_t x342 = -1;
	static int8_t x343 = 0;
	volatile int8_t x344 = -15;
	volatile uint64_t t84 = 10946149525800LLU;

    t84 = ((x341/x342)^(x343<=x344));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x345 = 137;
	int32_t x346 = 3;
	volatile uint16_t x347 = 96U;
	int8_t x348 = INT8_MIN;
	volatile int32_t t85 = 8839533;

    t85 = ((x345/x346)^(x347<=x348));

    if (t85 != 45) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint64_t x349 = 70867171624919LLU;
	int64_t x350 = INT64_MAX;
	static int64_t x352 = 1LL;
	uint64_t t86 = 16128LLU;

    t86 = ((x349/x350)^(x351<=x352));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x354 = -1;
	int32_t x356 = -1;
	static uint64_t t87 = 116296492LLU;

    t87 = ((x353/x354)^(x355<=x356));

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x357 = UINT64_MAX;
	int32_t x358 = INT32_MAX;
	int16_t x359 = 12028;
	static int64_t x360 = -1LL;

    t88 = ((x357/x358)^(x359<=x360));

    if (t88 != 8589934596LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x361 = INT8_MIN;
	int32_t x362 = -5136663;
	uint8_t x364 = 41U;
	int32_t t89 = 0;

    t89 = ((x361/x362)^(x363<=x364));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x365 = INT32_MAX;
	int32_t x366 = 9;
	int64_t x367 = 25050959335LL;
	volatile uint8_t x368 = 7U;
	int32_t t90 = -24436294;

    t90 = ((x365/x366)^(x367<=x368));

    if (t90 != 238609294) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x369 = INT32_MIN;
	static int8_t x371 = -1;
	volatile int8_t x372 = INT8_MAX;
	volatile uint64_t t91 = 469802661001100LLU;

    t91 = ((x369/x370)^(x371<=x372));

    if (t91 != 8482050038LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x373 = -2;
	volatile uint64_t x374 = 109773LLU;
	volatile int16_t x375 = 3;
	uint32_t x376 = UINT32_MAX;

    t92 = ((x373/x374)^(x375<=x376));

    if (t92 != 168044456047567LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x378 = -54;
	int16_t x379 = -1;
	int32_t t93 = -27171;

    t93 = ((x377/x378)^(x379<=x380));

    if (t93 != 39768215) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint32_t x381 = 0U;
	int64_t x382 = INT64_MIN;
	volatile int8_t x383 = INT8_MIN;
	int16_t x384 = -1;
	int64_t t94 = -17877LL;

    t94 = ((x381/x382)^(x383<=x384));

    if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x386 = UINT64_MAX;
	volatile uint64_t t95 = 20895508LLU;

    t95 = ((x385/x386)^(x387<=x388));

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x389 = INT8_MIN;
	int16_t x390 = INT16_MAX;
	uint64_t x391 = 51327140688502LLU;
	volatile uint8_t x392 = 56U;
	int32_t t96 = -5;

    t96 = ((x389/x390)^(x391<=x392));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x393 = 13U;
	int64_t x394 = -1LL;
	int64_t x395 = INT64_MAX;
	uint16_t x396 = 10324U;
	int64_t t97 = -277321890106136LL;

    t97 = ((x393/x394)^(x395<=x396));

    if (t97 != -13LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x398 = UINT16_MAX;
	int16_t x399 = INT16_MIN;
	uint64_t t98 = 64922LLU;

    t98 = ((x397/x398)^(x399<=x400));

    if (t98 != 6065356LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint8_t x407 = 29U;
	int16_t x408 = INT16_MIN;

    t99 = ((x405/x406)^(x407<=x408));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x409 = INT8_MIN;
	int32_t x410 = -1;
	int16_t x412 = -1169;
	static int32_t t100 = 6537;

    t100 = ((x409/x410)^(x411<=x412));

    if (t100 != 128) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x413 = -32;
	int16_t x414 = INT16_MAX;
	uint64_t x415 = 2578074252938823994LLU;
	int64_t x416 = 0LL;
	static int32_t t101 = -195;

    t101 = ((x413/x414)^(x415<=x416));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x417 = INT16_MIN;
	volatile uint32_t x418 = 284U;
	int16_t x419 = INT16_MIN;
	int32_t x420 = 0;
	volatile uint32_t t102 = 339299U;

    t102 = ((x417/x418)^(x419<=x420));

    if (t102 != 15123009U) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x421 = -1;
	volatile int8_t x423 = INT8_MIN;
	static int32_t x424 = -1;
	volatile int32_t t103 = 2631020;

    t103 = ((x421/x422)^(x423<=x424));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x427 = INT16_MIN;
	int16_t x428 = INT16_MIN;
	volatile int32_t t104 = -892;

    t104 = ((x425/x426)^(x427<=x428));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x430 = INT32_MIN;
	static int16_t x431 = INT16_MIN;
	volatile int64_t x432 = INT64_MIN;

    t105 = ((x429/x430)^(x431<=x432));

    if (t105 != 1LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x433 = INT16_MAX;
	int16_t x434 = INT16_MAX;
	volatile int8_t x435 = -1;
	volatile int16_t x436 = -7;

    t106 = ((x433/x434)^(x435<=x436));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x437 = INT32_MIN;
	int64_t x438 = INT64_MIN;
	static volatile int64_t t107 = 14683LL;

    t107 = ((x437/x438)^(x439<=x440));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x441 = UINT16_MAX;
	static uint64_t x442 = UINT64_MAX;
	static int64_t x443 = -1LL;
	static int64_t x444 = INT64_MIN;
	volatile uint64_t t108 = 1007711001234040LLU;

    t108 = ((x441/x442)^(x443<=x444));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x446 = INT64_MIN;
	uint32_t x447 = 34239U;
	int64_t t109 = -42326455053LL;

    t109 = ((x445/x446)^(x447<=x448));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint8_t x450 = 3U;
	static uint16_t x451 = 18916U;
	int32_t t110 = 23362595;

    t110 = ((x449/x450)^(x451<=x452));

    if (t110 != -119) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x457 = 552535328192332LL;
	uint64_t x458 = 180LLU;
	static uint32_t x459 = 645U;
	uint64_t t111 = 118LLU;

    t111 = ((x457/x458)^(x459<=x460));

    if (t111 != 3069640712178LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x462 = 2114;
	int64_t x463 = 258531226720LL;
	int16_t x464 = INT16_MAX;
	volatile int64_t t112 = -4419456023486LL;

    t112 = ((x461/x462)^(x463<=x464));

    if (t112 != 4362995287064700LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x465 = UINT8_MAX;
	uint64_t x468 = 855202137131LLU;

    t113 = ((x465/x466)^(x467<=x468));

    if (t113 != -255) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x469 = INT32_MIN;
	static int32_t x470 = 97751;
	int32_t x471 = INT32_MIN;
	int32_t x472 = INT32_MIN;
	int32_t t114 = -6;

    t114 = ((x469/x470)^(x471<=x472));

    if (t114 != -21967) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x473 = INT64_MIN;
	static volatile uint64_t x474 = UINT64_MAX;
	int16_t x475 = INT16_MAX;
	int8_t x476 = INT8_MIN;

    t115 = ((x473/x474)^(x475<=x476));

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x477 = 262;
	int8_t x478 = INT8_MIN;
	int16_t x479 = INT16_MAX;
	static int8_t x480 = INT8_MAX;

    t116 = ((x477/x478)^(x479<=x480));

    if (t116 != -2) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x482 = INT64_MIN;
	static uint32_t x483 = 206172U;
	volatile int64_t x484 = -1LL;
	int64_t t117 = 943LL;

    t117 = ((x481/x482)^(x483<=x484));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x485 = INT16_MAX;
	int64_t x486 = INT64_MAX;
	int8_t x487 = 9;
	static int64_t x488 = -1LL;
	volatile int64_t t118 = 2450986LL;

    t118 = ((x485/x486)^(x487<=x488));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x489 = -3075897506LL;
	volatile uint8_t x490 = UINT8_MAX;
	static int16_t x492 = INT16_MIN;
	volatile int64_t t119 = 2807531LL;

    t119 = ((x489/x490)^(x491<=x492));

    if (t119 != -12062344LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x493 = -521;
	int64_t x494 = 42600207630LL;
	int8_t x495 = INT8_MIN;
	int64_t t120 = -1LL;

    t120 = ((x493/x494)^(x495<=x496));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x497 = 273301575772LL;
	int32_t x499 = 8;
	uint64_t x500 = 65LLU;
	int64_t t121 = -7193457186LL;

    t121 = ((x497/x498)^(x499<=x500));

    if (t121 != 2151980910LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x501 = 1601LL;
	uint16_t x502 = UINT16_MAX;
	static int64_t x503 = INT64_MIN;
	uint16_t x504 = UINT16_MAX;

    t122 = ((x501/x502)^(x503<=x504));

    if (t122 != 1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x505 = INT8_MAX;
	uint32_t x506 = 94348418U;
	volatile uint16_t x507 = UINT16_MAX;
	int16_t x508 = 0;
	uint32_t t123 = 0U;

    t123 = ((x505/x506)^(x507<=x508));

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x509 = -62296LL;
	int16_t x510 = -22;
	uint8_t x511 = UINT8_MAX;
	int64_t t124 = 7682494LL;

    t124 = ((x509/x510)^(x511<=x512));

    if (t124 != 2830LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x513 = 6201U;
	int16_t x514 = -164;
	uint8_t x515 = UINT8_MAX;
	volatile int16_t x516 = INT16_MIN;
	int32_t t125 = 848641499;

    t125 = ((x513/x514)^(x515<=x516));

    if (t125 != -37) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x517 = INT8_MAX;
	uint8_t x518 = UINT8_MAX;
	static int8_t x520 = INT8_MIN;

    t126 = ((x517/x518)^(x519<=x520));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x521 = INT64_MAX;
	volatile int64_t t127 = 839757798497875LL;

    t127 = ((x521/x522)^(x523<=x524));

    if (t127 != 1844674407370955160LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x525 = INT32_MIN;
	uint16_t x526 = 36U;
	uint64_t x528 = 13817432594LLU;
	volatile int32_t t128 = -124413209;

    t128 = ((x525/x526)^(x527<=x528));

    if (t128 != -59652324) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x533 = INT32_MIN;
	int32_t x535 = INT32_MIN;
	int16_t x536 = 6;
	int32_t t129 = -826462;

    t129 = ((x533/x534)^(x535<=x536));

    if (t129 != -16909319) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x537 = 1;
	int8_t x538 = INT8_MAX;
	volatile int32_t x539 = INT32_MIN;
	int8_t x540 = -7;
	volatile int32_t t130 = 15978821;

    t130 = ((x537/x538)^(x539<=x540));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x541 = INT16_MIN;
	uint32_t x542 = 42803U;
	int64_t x543 = 184864830LL;
	int64_t x544 = -1LL;
	volatile uint32_t t131 = 5319U;

    t131 = ((x541/x542)^(x543<=x544));

    if (t131 != 100341U) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x545 = INT64_MIN;
	static int64_t x546 = 599715329156LL;
	volatile int32_t x547 = INT32_MIN;
	int64_t x548 = INT64_MIN;

    t132 = ((x545/x546)^(x547<=x548));

    if (t132 != -15379583LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x549 = -1;
	uint64_t x550 = 375LLU;
	uint32_t x551 = 2460U;
	uint32_t x552 = UINT32_MAX;
	volatile uint64_t t133 = 3295826047798897552LLU;

    t133 = ((x549/x550)^(x551<=x552));

    if (t133 != 49191317529892136LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x553 = 125803LLU;
	uint32_t x554 = UINT32_MAX;
	volatile int32_t x555 = -1;
	volatile int8_t x556 = -4;
	static uint64_t t134 = 972772700988796LLU;

    t134 = ((x553/x554)^(x555<=x556));

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x557 = 0;
	uint8_t x558 = UINT8_MAX;
	int8_t x559 = INT8_MIN;
	uint16_t x560 = UINT16_MAX;
	static volatile int32_t t135 = 9527653;

    t135 = ((x557/x558)^(x559<=x560));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x561 = INT16_MIN;
	volatile uint32_t x562 = 4710U;
	int64_t x563 = INT64_MAX;
	volatile int64_t x564 = 207707996LL;
	volatile uint32_t t136 = 14062708U;

    t136 = ((x561/x562)^(x563<=x564));

    if (t136 != 911875U) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x565 = INT64_MIN;
	volatile int64_t x566 = INT64_MIN;
	int16_t x567 = INT16_MIN;
	static int16_t x568 = 1663;
	int64_t t137 = -179LL;

    t137 = ((x565/x566)^(x567<=x568));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x569 = UINT16_MAX;
	int16_t x570 = INT16_MIN;
	int8_t x571 = -1;
	int32_t x572 = INT32_MIN;
	static volatile int32_t t138 = 1084;

    t138 = ((x569/x570)^(x571<=x572));

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x573 = 482;
	uint32_t x574 = 12820U;
	int32_t x575 = -482992;
	volatile int16_t x576 = -15194;
	volatile uint32_t t139 = 1263U;

    t139 = ((x573/x574)^(x575<=x576));

    if (t139 != 1U) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x577 = -2093093;
	uint8_t x578 = UINT8_MAX;
	uint64_t x579 = 125629021LLU;
	uint32_t x580 = 1U;

    t140 = ((x577/x578)^(x579<=x580));

    if (t140 != -8208) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x582 = INT64_MIN;
	int16_t x583 = INT16_MIN;
	volatile int64_t t141 = -7856627580278LL;

    t141 = ((x581/x582)^(x583<=x584));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x585 = -1LL;
	uint16_t x586 = 13064U;
	volatile int32_t x587 = INT32_MAX;
	static volatile int64_t t142 = 3450308121519011LL;

    t142 = ((x585/x586)^(x587<=x588));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x589 = 1;
	int16_t x590 = INT16_MIN;
	int64_t x591 = INT64_MIN;
	static int32_t t143 = -2061;

    t143 = ((x589/x590)^(x591<=x592));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x593 = -1;
	static int8_t x594 = INT8_MIN;
	static int16_t x595 = -1628;
	int8_t x596 = -1;
	volatile int32_t t144 = 1757978;

    t144 = ((x593/x594)^(x595<=x596));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x599 = UINT16_MAX;
	static int16_t x600 = -1;
	int64_t t145 = -923599721692LL;

    t145 = ((x597/x598)^(x599<=x600));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x601 = 4U;
	static volatile int8_t x602 = INT8_MIN;
	int64_t x603 = INT64_MAX;
	volatile int32_t t146 = 1528287;

    t146 = ((x601/x602)^(x603<=x604));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x605 = 2;
	uint64_t x606 = 4780364LLU;
	int8_t x607 = -1;
	volatile uint64_t x608 = UINT64_MAX;
	uint64_t t147 = 14975579527244788LLU;

    t147 = ((x605/x606)^(x607<=x608));

    if (t147 != 1LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x609 = -284536;
	uint16_t x610 = 1U;
	uint64_t x611 = 14493428332834715LLU;
	int32_t x612 = -1;

    t148 = ((x609/x610)^(x611<=x612));

    if (t148 != -284535) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x613 = 54U;
	int32_t x614 = INT32_MAX;
	volatile uint64_t x616 = 14644LLU;
	static int32_t t149 = 24;

    t149 = ((x613/x614)^(x615<=x616));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x617 = 51;
	int32_t x618 = INT32_MIN;
	int8_t x619 = INT8_MIN;
	uint64_t x620 = 0LLU;
	static int32_t t150 = -3267;

    t150 = ((x617/x618)^(x619<=x620));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x621 = 0U;
	int16_t x622 = INT16_MAX;
	int8_t x623 = INT8_MIN;
	static int16_t x624 = INT16_MAX;
	volatile int32_t t151 = -2356897;

    t151 = ((x621/x622)^(x623<=x624));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x625 = 437;
	int16_t x627 = -1939;
	int8_t x628 = 6;
	int32_t t152 = 148644679;

    t152 = ((x625/x626)^(x627<=x628));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x629 = 6U;
	uint64_t x630 = 4431443315627868070LLU;
	volatile int32_t x631 = INT32_MIN;
	int32_t x632 = INT32_MAX;
	volatile uint64_t t153 = 358115054592204LLU;

    t153 = ((x629/x630)^(x631<=x632));

    if (t153 != 1LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x633 = INT32_MAX;
	uint64_t x634 = 167238250324LLU;
	int8_t x635 = INT8_MIN;
	uint8_t x636 = 0U;
	volatile uint64_t t154 = 102990228956396955LLU;

    t154 = ((x633/x634)^(x635<=x636));

    if (t154 != 1LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x637 = 11699679384305LLU;
	static volatile int64_t x638 = -972607455LL;
	int64_t x639 = INT64_MAX;
	int64_t x640 = 7629548337293207LL;
	uint64_t t155 = 27857639LLU;

    t155 = ((x637/x638)^(x639<=x640));

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x641 = 1;
	volatile uint32_t x642 = 7610U;
	volatile int64_t x643 = 1924LL;
	uint32_t t156 = 247889853U;

    t156 = ((x641/x642)^(x643<=x644));

    if (t156 != 1U) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x645 = INT16_MAX;
	volatile int32_t t157 = -317;

    t157 = ((x645/x646)^(x647<=x648));

    if (t157 != -32768) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x649 = -1;
	uint16_t x650 = UINT16_MAX;
	static int32_t x651 = -504733;
	int64_t x652 = -534877355019004030LL;
	volatile int32_t t158 = -14;

    t158 = ((x649/x650)^(x651<=x652));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x657 = INT8_MAX;
	static int64_t x659 = -31864480351LL;
	uint64_t x660 = 6853594234794LLU;
	int32_t t159 = 0;

    t159 = ((x657/x658)^(x659<=x660));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint32_t x661 = UINT32_MAX;
	static volatile uint64_t x662 = 142791268654LLU;
	int32_t x663 = -6203;
	int8_t x664 = 29;
	static uint64_t t160 = 4236892588704LLU;

    t160 = ((x661/x662)^(x663<=x664));

    if (t160 != 1LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x665 = INT8_MIN;
	static int8_t x666 = INT8_MIN;
	int8_t x667 = 0;
	uint32_t x668 = UINT32_MAX;
	int32_t t161 = -41075752;

    t161 = ((x665/x666)^(x667<=x668));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x669 = INT64_MAX;
	volatile uint16_t x670 = 17255U;
	static int8_t x671 = INT8_MAX;
	uint32_t x672 = UINT32_MAX;
	int64_t t162 = -149223400674LL;

    t162 = ((x669/x670)^(x671<=x672));

    if (t162 != 534533296833079LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x673 = INT8_MAX;
	int8_t x674 = -2;
	static int32_t x675 = -830;
	uint16_t x676 = 2U;
	volatile int32_t t163 = 159289;

    t163 = ((x673/x674)^(x675<=x676));

    if (t163 != -64) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x677 = 3U;
	uint32_t x678 = 1873521U;
	static int64_t x679 = -1LL;
	uint8_t x680 = 1U;
	uint32_t t164 = 22U;

    t164 = ((x677/x678)^(x679<=x680));

    if (t164 != 1U) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x682 = INT16_MIN;
	static int32_t x683 = 1621362;
	uint8_t x684 = 32U;
	int32_t t165 = 865918803;

    t165 = ((x681/x682)^(x683<=x684));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x686 = INT16_MIN;
	int64_t t166 = -1114616014LL;

    t166 = ((x685/x686)^(x687<=x688));

    if (t166 != 69LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int64_t x689 = 512555145739LL;
	int8_t x690 = INT8_MAX;
	int64_t x691 = INT64_MIN;
	uint16_t x692 = 18U;
	int64_t t167 = 13LL;

    t167 = ((x689/x690)^(x691<=x692));

    if (t167 != 4035867288LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x693 = 928906305U;
	uint64_t x694 = 2034955059012LLU;
	static int32_t x695 = INT32_MIN;
	int32_t x696 = -36076;
	static volatile uint64_t t168 = 1337006045590LLU;

    t168 = ((x693/x694)^(x695<=x696));

    if (t168 != 1LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x699 = -1LL;
	volatile int16_t x700 = -78;
	uint32_t t169 = 4192659U;

    t169 = ((x697/x698)^(x699<=x700));

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x705 = UINT64_MAX;
	static volatile int64_t x706 = INT64_MIN;
	static int8_t x708 = INT8_MAX;
	uint64_t t170 = 109LLU;

    t170 = ((x705/x706)^(x707<=x708));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x709 = 1;
	static int16_t x710 = INT16_MAX;
	static uint8_t x711 = 0U;
	uint32_t x712 = 2377U;

    t171 = ((x709/x710)^(x711<=x712));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x713 = 34202031U;
	int64_t x715 = -1LL;
	int16_t x716 = INT16_MIN;
	uint32_t t172 = 267376129U;

    t172 = ((x713/x714)^(x715<=x716));

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint32_t x718 = 1U;
	volatile int8_t x719 = INT8_MIN;
	volatile int32_t x720 = INT32_MIN;
	static volatile int64_t t173 = INT64_MAX;

    t173 = ((x717/x718)^(x719<=x720));

    if (t173 != INT64_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x721 = UINT16_MAX;
	static int32_t x723 = -1;
	static uint8_t x724 = 7U;
	uint32_t t174 = 733U;

    t174 = ((x721/x722)^(x723<=x724));

    if (t174 != 3277U) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x725 = INT16_MIN;
	int8_t x727 = 12;
	volatile int16_t x728 = -1;
	int32_t t175 = 2727704;

    t175 = ((x725/x726)^(x727<=x728));

    if (t175 != -4681) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x730 = 563;
	int8_t x731 = 27;
	volatile int64_t x732 = -1LL;

    t176 = ((x729/x730)^(x731<=x732));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x733 = INT64_MAX;
	int64_t x734 = -1LL;
	static volatile int16_t x735 = INT16_MIN;
	int64_t x736 = INT64_MAX;
	volatile int64_t t177 = INT64_MIN;

    t177 = ((x733/x734)^(x735<=x736));

    if (t177 != INT64_MIN) { NG(); } else { ; }
	
}

void f178(void) {
    	static int8_t x737 = INT8_MIN;
	uint64_t x738 = UINT64_MAX;
	int64_t x739 = INT64_MAX;
	static uint32_t x740 = UINT32_MAX;
	uint64_t t178 = 738245LLU;

    t178 = ((x737/x738)^(x739<=x740));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x741 = INT32_MIN;
	int8_t x742 = 1;
	static int64_t x743 = INT64_MAX;
	static int32_t x744 = INT32_MIN;
	int32_t t179 = INT32_MIN;

    t179 = ((x741/x742)^(x743<=x744));

    if (t179 != INT32_MIN) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x745 = INT8_MIN;
	int16_t x746 = INT16_MIN;
	volatile int32_t t180 = -1;

    t180 = ((x745/x746)^(x747<=x748));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x749 = INT8_MAX;
	volatile int64_t x750 = INT64_MAX;
	static volatile int64_t t181 = 4903LL;

    t181 = ((x749/x750)^(x751<=x752));

    if (t181 != 1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x753 = INT8_MAX;
	volatile int64_t x755 = INT64_MIN;
	static int8_t x756 = INT8_MIN;
	static volatile int32_t t182 = -1412422;

    t182 = ((x753/x754)^(x755<=x756));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x757 = 3139147799015082564LLU;
	static int8_t x758 = -12;
	int16_t x759 = INT16_MAX;
	uint64_t x760 = 4073337350279092896LLU;

    t183 = ((x757/x758)^(x759<=x760));

    if (t183 != 1LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x761 = UINT8_MAX;
	int64_t x762 = 64305331LL;
	uint8_t x763 = 33U;
	static int16_t x764 = 0;

    t184 = ((x761/x762)^(x763<=x764));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x766 = -1;
	int8_t x768 = -1;
	static int32_t t185 = -1779;

    t185 = ((x765/x766)^(x767<=x768));

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x769 = -25;
	uint16_t x770 = 2U;
	uint64_t x771 = 2891906153786028924LLU;
	uint64_t x772 = UINT64_MAX;
	volatile int32_t t186 = -13396;

    t186 = ((x769/x770)^(x771<=x772));

    if (t186 != -11) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x774 = UINT32_MAX;
	int8_t x775 = -6;

    t187 = ((x773/x774)^(x775<=x776));

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x778 = INT64_MAX;
	uint64_t x779 = UINT64_MAX;
	int8_t x780 = 22;

    t188 = ((x777/x778)^(x779<=x780));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x781 = 0;
	int32_t x782 = -24739827;
	static volatile int64_t x783 = -1LL;
	int64_t x784 = -1LL;
	static volatile int32_t t189 = 8960023;

    t189 = ((x781/x782)^(x783<=x784));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x785 = INT8_MIN;
	static int64_t x786 = INT64_MIN;
	volatile uint32_t x788 = 66U;

    t190 = ((x785/x786)^(x787<=x788));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x789 = UINT64_MAX;
	static int64_t x790 = -1LL;
	int32_t x792 = -1;
	volatile uint64_t t191 = 31983018151902LLU;

    t191 = ((x789/x790)^(x791<=x792));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x793 = INT64_MAX;
	uint64_t x794 = 31175632983761LLU;
	volatile uint8_t x795 = 77U;
	int32_t x796 = -1;
	volatile uint64_t t192 = 1052710627538187205LLU;

    t192 = ((x793/x794)^(x795<=x796));

    if (t192 != 295851LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x797 = INT8_MAX;
	volatile uint16_t x798 = UINT16_MAX;
	uint16_t x799 = 31860U;
	uint64_t x800 = 3480437LLU;
	static volatile int32_t t193 = 204;

    t193 = ((x797/x798)^(x799<=x800));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x801 = -42;
	uint8_t x802 = 103U;
	uint64_t x803 = UINT64_MAX;
	volatile int64_t x804 = INT64_MAX;
	static volatile int32_t t194 = 0;

    t194 = ((x801/x802)^(x803<=x804));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x805 = -282116LL;
	static uint32_t x806 = 1274622539U;
	int16_t x807 = INT16_MAX;
	int32_t x808 = -1;
	volatile int64_t t195 = 153LL;

    t195 = ((x805/x806)^(x807<=x808));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x809 = INT16_MAX;
	volatile int16_t x811 = 311;
	int64_t x812 = 58306317827310693LL;
	static int64_t t196 = -223195286207333971LL;

    t196 = ((x809/x810)^(x811<=x812));

    if (t196 != -1169LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x813 = INT64_MAX;
	int16_t x815 = INT16_MIN;
	volatile int64_t x816 = INT64_MIN;
	volatile int64_t t197 = -1837514735072LL;

    t197 = ((x813/x814)^(x815<=x816));

    if (t197 != 614891469123651720LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x817 = -1LL;
	uint8_t x818 = 3U;
	int8_t x819 = -1;
	static int32_t x820 = INT32_MIN;
	volatile int64_t t198 = -4800415515LL;

    t198 = ((x817/x818)^(x819<=x820));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x821 = -1;
	int16_t x822 = -144;
	int32_t x823 = -14610;

    t199 = ((x821/x822)^(x823<=x824));

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

