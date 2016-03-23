
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

int8_t x2 = -1;
int8_t x3 = 13;
static volatile int8_t x17 = INT8_MIN;
int16_t x18 = -1;
static volatile int16_t x23 = INT16_MIN;
int32_t x27 = INT32_MIN;
uint64_t x30 = 2LLU;
static int16_t x31 = -7913;
uint32_t x37 = UINT32_MAX;
static uint32_t t6 = 356U;
int32_t x42 = 6414;
int32_t t8 = -520874;
int32_t t9 = -57319;
uint64_t x65 = UINT64_MAX;
volatile int32_t x72 = 55;
static int16_t x78 = -245;
static int16_t x79 = 2;
int16_t x99 = 645;
volatile int32_t t19 = 2106187;
int32_t x101 = 9861571;
int8_t x102 = INT8_MAX;
int8_t x104 = INT8_MIN;
int32_t x110 = 7;
volatile int32_t t22 = 104652;
static uint32_t x115 = UINT32_MAX;
uint16_t x127 = 10U;
int32_t x130 = INT32_MIN;
int32_t x132 = INT32_MIN;
volatile uint32_t x141 = UINT32_MAX;
uint64_t x149 = 5890889916369LLU;
int8_t x153 = 5;
static uint32_t x156 = 4U;
volatile uint16_t x165 = 67U;
volatile int64_t x167 = INT64_MIN;
int16_t x171 = -6672;
uint64_t t35 = 14847099LLU;
volatile uint64_t t38 = 522441611876215LLU;
volatile int64_t t39 = 4LL;
uint16_t x209 = 4U;
static volatile int32_t t41 = -18;
int32_t x218 = INT32_MIN;
int8_t x219 = 5;
int32_t x221 = INT32_MAX;
int32_t x223 = -142717401;
int64_t x227 = 66933056128217359LL;
volatile uint64_t t46 = 252497051LLU;
uint32_t x237 = 490U;
volatile int16_t x238 = -5553;
int8_t x243 = 2;
static uint64_t x247 = 2572661426652LLU;
volatile int32_t x248 = -976;
volatile int64_t x252 = 6628025711LL;
int8_t x253 = INT8_MAX;
int16_t x258 = INT16_MIN;
static uint32_t x261 = 592691669U;
int16_t x264 = INT16_MAX;
volatile int8_t x265 = 0;
volatile uint32_t x268 = UINT32_MAX;
volatile int16_t x270 = INT16_MAX;
int64_t x280 = INT64_MAX;
volatile uint8_t x281 = UINT8_MAX;
static int8_t x283 = 1;
int64_t x287 = INT64_MIN;
volatile int32_t x288 = INT32_MIN;
static volatile int32_t x292 = 27608950;
static volatile uint8_t x293 = 1U;
volatile int64_t x297 = 4040500LL;
static int64_t x298 = -785511198252760008LL;
uint16_t x305 = 1U;
volatile int8_t x320 = 1;
static volatile int64_t x327 = -1LL;
int32_t t65 = 10542;
static int32_t x357 = INT32_MAX;
int32_t x361 = 1086233;
int8_t x367 = -1;
volatile uint32_t t72 = 70061755U;
int64_t x370 = -24393LL;
int64_t t73 = 5480124421368096LL;
static uint32_t x375 = 3U;
static volatile int32_t x380 = -4924;
uint32_t t77 = 391194960U;
volatile int32_t x393 = INT32_MAX;
volatile int16_t x396 = INT16_MAX;
int16_t x405 = INT16_MIN;
int32_t x406 = -1;
uint8_t x411 = 1U;
int32_t x413 = -1;
static int8_t x415 = -1;
int64_t t83 = 65235716589153314LL;
volatile int8_t x422 = INT8_MIN;
int32_t t84 = 488;
static volatile uint64_t x434 = 29650LLU;
int64_t x436 = 4291947420LL;
volatile int16_t x439 = -1;
int16_t x442 = -1875;
volatile int32_t x444 = -204222518;
int16_t x445 = 5401;
uint32_t x451 = 133U;
int64_t x455 = -245247LL;
uint64_t t91 = 70432406LLU;
int64_t x458 = INT64_MIN;
static uint64_t x463 = 9921050LLU;
int16_t x466 = INT16_MIN;
uint8_t x468 = 1U;
uint32_t t95 = 2839U;
volatile int8_t x483 = -1;
uint16_t x486 = 32U;
int32_t x491 = INT32_MIN;
int64_t x492 = INT64_MIN;
static uint8_t x497 = 1U;
uint8_t x498 = UINT8_MAX;
int32_t t101 = 16272675;
uint16_t x508 = 1U;
volatile uint16_t x511 = UINT16_MAX;
static volatile uint16_t x512 = UINT16_MAX;
volatile int64_t t104 = -202LL;
volatile uint32_t t107 = 586923U;
int32_t x525 = -4;
int32_t t108 = 4122034;
static int16_t x536 = INT16_MIN;
static uint64_t t111 = 106035989457560103LLU;
int32_t x555 = 368;
volatile int64_t x567 = INT64_MAX;
uint32_t t114 = 13U;
int16_t x570 = 433;
volatile int32_t x573 = -598;
volatile int32_t x574 = INT32_MAX;
volatile int64_t x580 = INT64_MIN;
static int64_t x587 = -128058404414585LL;
int16_t x589 = INT16_MIN;
uint16_t x591 = 886U;
static volatile int32_t t120 = -22;
int64_t x594 = -1LL;
uint32_t x596 = 2402U;
volatile int32_t x603 = 183847;
volatile int16_t x606 = -1;
static int16_t x608 = -1;
uint16_t x613 = 804U;
uint16_t x614 = 4346U;
volatile int64_t x616 = INT64_MIN;
uint16_t x618 = UINT16_MAX;
static volatile uint32_t x621 = 0U;
uint32_t t128 = 1879011U;
int16_t x628 = INT16_MIN;
uint64_t x631 = 103683294448018851LLU;
static int16_t x632 = -1;
static int64_t x635 = INT64_MAX;
int16_t x641 = INT16_MIN;
int8_t x644 = -1;
int64_t x649 = -1LL;
int16_t x651 = 341;
int8_t x655 = -1;
volatile int32_t x657 = -1;
int16_t x662 = 60;
static int64_t x666 = INT64_MIN;
static uint64_t x671 = 809835962501716569LLU;
uint32_t x672 = 130728U;
int64_t t140 = 590283LL;
int64_t x692 = INT64_MIN;
int32_t x695 = -1;
int64_t t144 = 56378625LL;
volatile int8_t x703 = -1;
volatile int32_t x709 = INT32_MIN;
int16_t x710 = INT16_MIN;
static int64_t x714 = INT64_MAX;
int8_t x715 = INT8_MIN;
static int64_t x719 = -1LL;
int64_t x726 = -355975376502825LL;
int16_t x736 = -1009;
uint64_t x739 = 24676383404857LLU;
int32_t t156 = 648;
int64_t x757 = INT64_MAX;
volatile uint64_t x758 = 6695981LLU;
static int64_t x759 = 37348743LL;
static int8_t x803 = -1;
uint8_t x811 = UINT8_MAX;
int8_t x820 = INT8_MAX;
uint8_t x821 = 8U;
int16_t x822 = INT16_MAX;
int16_t x823 = INT16_MAX;
volatile int32_t t167 = -843234;
static volatile uint16_t x828 = 954U;
volatile int64_t t168 = 1698280LL;
int64_t x834 = -1LL;
int16_t x837 = -2602;
static volatile int32_t x843 = -1;
uint32_t t174 = 18908480U;
static volatile int32_t t175 = -5;
volatile uint64_t t176 = 335LLU;
static uint32_t x866 = UINT32_MAX;
uint32_t t177 = 1987516912U;
int32_t x869 = INT32_MIN;
int64_t x872 = -1LL;
volatile int64_t x877 = -1LL;
static int32_t x884 = INT32_MAX;
static int16_t x885 = -27;
uint16_t x887 = 7U;
int64_t x889 = -1LL;
int64_t x894 = INT64_MAX;
static int32_t x896 = -1;
static int32_t x917 = -1;
int64_t x924 = INT64_MIN;
uint8_t x928 = 8U;
int16_t x931 = 0;
int64_t x936 = INT64_MIN;
static int32_t x948 = 14057;
int64_t x949 = -789679237781LL;


void f0(void) {
    	int32_t x1 = -1;
	int64_t x4 = -7270871324566LL;
	volatile int32_t t0 = -579;

    t0 = ((x1/x2)>>(x3==x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x9 = 87216714601574LLU;
	uint8_t x10 = UINT8_MAX;
	static int8_t x11 = -1;
	int16_t x12 = 31;
	uint64_t t1 = 1853722994175LLU;

    t1 = ((x9/x10)>>(x11==x12));

    if (t1 != 342026331770LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x19 = UINT64_MAX;
	int16_t x20 = 101;
	static volatile int32_t t2 = 441186;

    t2 = ((x17/x18)>>(x19==x20));

    if (t2 != 128) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x21 = -1;
	volatile uint16_t x22 = 3U;
	int16_t x24 = INT16_MIN;
	int32_t t3 = -635;

    t3 = ((x21/x22)>>(x23==x24));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x25 = -3020;
	volatile int64_t x26 = -435654465215301689LL;
	int16_t x28 = -101;
	volatile int64_t t4 = 14171LL;

    t4 = ((x25/x26)>>(x27==x28));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x29 = -1096508LL;
	int8_t x32 = 0;
	volatile uint64_t t5 = 17896171618LLU;

    t5 = ((x29/x30)>>(x31==x32));

    if (t5 != 9223372036854227554LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x38 = 3U;
	volatile int32_t x39 = -14134338;
	int8_t x40 = 1;

    t6 = ((x37/x38)>>(x39==x40));

    if (t6 != 1431655765U) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x41 = INT64_MAX;
	uint32_t x43 = 161603U;
	static int32_t x44 = -1;
	int64_t t7 = 526805374LL;

    t7 = ((x41/x42)>>(x43==x44));

    if (t7 != 1438006242103956LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x45 = INT8_MAX;
	uint16_t x46 = UINT16_MAX;
	uint64_t x47 = 191095211730686LLU;
	volatile int16_t x48 = 118;

    t8 = ((x45/x46)>>(x47==x48));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x49 = 1;
	int32_t x50 = INT32_MIN;
	static volatile int64_t x51 = -1LL;
	static volatile int8_t x52 = INT8_MAX;

    t9 = ((x49/x50)>>(x51==x52));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x57 = -5;
	volatile int8_t x58 = INT8_MIN;
	static int32_t x59 = INT32_MIN;
	volatile uint16_t x60 = 6U;
	static volatile int32_t t10 = -1;

    t10 = ((x57/x58)>>(x59==x60));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint16_t x61 = 137U;
	uint16_t x62 = UINT16_MAX;
	static volatile int8_t x63 = -1;
	uint16_t x64 = UINT16_MAX;
	volatile int32_t t11 = 1293486;

    t11 = ((x61/x62)>>(x63==x64));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x66 = INT8_MAX;
	int16_t x67 = -1;
	int8_t x68 = INT8_MAX;
	static volatile uint64_t t12 = 1776LLU;

    t12 = ((x65/x66)>>(x67==x68));

    if (t12 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x69 = INT32_MAX;
	uint32_t x70 = 1U;
	int8_t x71 = INT8_MAX;
	volatile uint32_t t13 = 3088U;

    t13 = ((x69/x70)>>(x71==x72));

    if (t13 != 2147483647U) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x73 = 3;
	int8_t x74 = INT8_MAX;
	static uint16_t x75 = UINT16_MAX;
	int32_t x76 = INT32_MIN;
	int32_t t14 = 11668190;

    t14 = ((x73/x74)>>(x75==x76));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x77 = 1U;
	volatile int64_t x80 = -1LL;
	volatile int32_t t15 = 9479;

    t15 = ((x77/x78)>>(x79==x80));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x81 = 1;
	uint64_t x82 = UINT64_MAX;
	static int8_t x83 = -15;
	int32_t x84 = INT32_MAX;
	uint64_t t16 = 339102683730LLU;

    t16 = ((x81/x82)>>(x83==x84));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x85 = INT8_MAX;
	volatile int64_t x86 = INT64_MIN;
	int64_t x87 = -1LL;
	int64_t x88 = INT64_MAX;
	static volatile int64_t t17 = -758119LL;

    t17 = ((x85/x86)>>(x87==x88));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x93 = INT8_MIN;
	static volatile uint64_t x94 = 229864180LLU;
	volatile uint8_t x95 = 23U;
	int64_t x96 = INT64_MIN;
	volatile uint64_t t18 = 8705365LLU;

    t18 = ((x93/x94)>>(x95==x96));

    if (t18 != 80250624841LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x97 = -1;
	int8_t x98 = INT8_MIN;
	int16_t x100 = 14;

    t19 = ((x97/x98)>>(x99==x100));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x103 = INT8_MAX;
	volatile int32_t t20 = -3185775;

    t20 = ((x101/x102)>>(x103==x104));

    if (t20 != 77650) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x105 = -1;
	int64_t x106 = INT64_MIN;
	int8_t x107 = INT8_MIN;
	int8_t x108 = INT8_MIN;
	volatile int64_t t21 = 2114717914507155534LL;

    t21 = ((x105/x106)>>(x107==x108));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x109 = -1;
	int64_t x111 = INT64_MIN;
	int8_t x112 = -1;

    t22 = ((x109/x110)>>(x111==x112));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x113 = UINT64_MAX;
	int8_t x114 = INT8_MAX;
	static int8_t x116 = INT8_MIN;
	uint64_t t23 = 35LLU;

    t23 = ((x113/x114)>>(x115==x116));

    if (t23 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x117 = INT16_MIN;
	uint64_t x118 = UINT64_MAX;
	int64_t x119 = INT64_MIN;
	static int64_t x120 = INT64_MIN;
	uint64_t t24 = 52573577230563LLU;

    t24 = ((x117/x118)>>(x119==x120));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x121 = INT16_MIN;
	static int64_t x122 = INT64_MAX;
	uint64_t x123 = UINT64_MAX;
	static int64_t x124 = -1LL;
	volatile int64_t t25 = -160LL;

    t25 = ((x121/x122)>>(x123==x124));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x125 = 16U;
	static int16_t x126 = INT16_MAX;
	uint16_t x128 = 7582U;
	int32_t t26 = 299;

    t26 = ((x125/x126)>>(x127==x128));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x129 = 0;
	static uint64_t x131 = 206958053LLU;
	volatile int32_t t27 = 738904;

    t27 = ((x129/x130)>>(x131==x132));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x133 = 299577177698LLU;
	uint32_t x134 = UINT32_MAX;
	int8_t x135 = -1;
	int16_t x136 = 717;
	uint64_t t28 = 7063318LLU;

    t28 = ((x133/x134)>>(x135==x136));

    if (t28 != 69LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x137 = -1;
	int8_t x138 = INT8_MAX;
	int32_t x139 = 34;
	uint64_t x140 = 0LLU;
	int32_t t29 = -10789939;

    t29 = ((x137/x138)>>(x139==x140));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x142 = -1;
	int8_t x143 = INT8_MIN;
	static int16_t x144 = -2623;
	uint32_t t30 = 239326U;

    t30 = ((x141/x142)>>(x143==x144));

    if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x150 = 1U;
	uint64_t x151 = 14219549697LLU;
	static int32_t x152 = INT32_MIN;
	uint64_t t31 = 103686LLU;

    t31 = ((x149/x150)>>(x151==x152));

    if (t31 != 5890889916369LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x154 = 55U;
	int16_t x155 = -1;
	int32_t t32 = -1300939;

    t32 = ((x153/x154)>>(x155==x156));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x161 = 630693LL;
	static volatile int64_t x162 = INT64_MIN;
	int32_t x163 = INT32_MIN;
	static volatile int64_t x164 = 299657501076LL;
	volatile int64_t t33 = 1643871064LL;

    t33 = ((x161/x162)>>(x163==x164));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x166 = UINT64_MAX;
	uint32_t x168 = 2287U;
	static volatile uint64_t t34 = 137LLU;

    t34 = ((x165/x166)>>(x167==x168));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x169 = -42;
	uint64_t x170 = UINT64_MAX;
	volatile int16_t x172 = 80;

    t35 = ((x169/x170)>>(x171==x172));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x185 = INT32_MIN;
	int8_t x186 = -12;
	int16_t x187 = -10695;
	uint16_t x188 = 123U;
	volatile int32_t t36 = 66348590;

    t36 = ((x185/x186)>>(x187==x188));

    if (t36 != 178956970) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint64_t x189 = 5113204633274345889LLU;
	int32_t x190 = 543770540;
	int8_t x191 = INT8_MIN;
	volatile int8_t x192 = INT8_MAX;
	volatile uint64_t t37 = 430279420554LLU;

    t37 = ((x189/x190)>>(x191==x192));

    if (t37 != 9403239523LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x197 = -7457LL;
	volatile uint64_t x198 = UINT64_MAX;
	volatile uint32_t x199 = UINT32_MAX;
	volatile int8_t x200 = INT8_MAX;

    t38 = ((x197/x198)>>(x199==x200));

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint8_t x201 = UINT8_MAX;
	int64_t x202 = INT64_MIN;
	int8_t x203 = -39;
	int64_t x204 = INT64_MAX;

    t39 = ((x201/x202)>>(x203==x204));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x205 = -1;
	int16_t x206 = 7;
	uint8_t x207 = 12U;
	volatile int16_t x208 = INT16_MIN;
	volatile int32_t t40 = 29674;

    t40 = ((x205/x206)>>(x207==x208));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x210 = INT16_MIN;
	uint64_t x211 = UINT64_MAX;
	static uint64_t x212 = 130355982798747126LLU;

    t41 = ((x209/x210)>>(x211==x212));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x217 = 1951LL;
	int8_t x220 = -1;
	volatile int64_t t42 = 900LL;

    t42 = ((x217/x218)>>(x219==x220));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x222 = 13U;
	int16_t x224 = -190;
	int32_t t43 = -55744564;

    t43 = ((x221/x222)>>(x223==x224));

    if (t43 != 165191049) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x225 = 104986169536LLU;
	static int64_t x226 = -6LL;
	int8_t x228 = 0;
	uint64_t t44 = 3940493781937LLU;

    t44 = ((x225/x226)>>(x227==x228));

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x229 = 2;
	int8_t x230 = INT8_MIN;
	volatile int64_t x231 = -12899LL;
	int32_t x232 = -969;
	int32_t t45 = 8419527;

    t45 = ((x229/x230)>>(x231==x232));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x233 = 17227320188861LLU;
	static uint16_t x234 = UINT16_MAX;
	volatile int8_t x235 = -12;
	uint64_t x236 = 32LLU;

    t46 = ((x233/x234)>>(x235==x236));

    if (t46 != 262872055LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x239 = 54084;
	int32_t x240 = INT32_MAX;
	volatile uint32_t t47 = 26U;

    t47 = ((x237/x238)>>(x239==x240));

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x241 = INT16_MAX;
	int64_t x242 = INT64_MIN;
	int16_t x244 = INT16_MAX;
	volatile int64_t t48 = 6823544276907163LL;

    t48 = ((x241/x242)>>(x243==x244));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x245 = 3;
	static int16_t x246 = INT16_MIN;
	volatile int32_t t49 = 638;

    t49 = ((x245/x246)>>(x247==x248));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x249 = INT16_MIN;
	int8_t x250 = INT8_MIN;
	uint8_t x251 = 4U;
	static int32_t t50 = 1004294399;

    t50 = ((x249/x250)>>(x251==x252));

    if (t50 != 256) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x254 = 19;
	uint16_t x255 = 30U;
	static volatile int16_t x256 = INT16_MIN;
	volatile int32_t t51 = 38902;

    t51 = ((x253/x254)>>(x255==x256));

    if (t51 != 6) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x257 = -3;
	static volatile int64_t x259 = -53889894973142LL;
	int64_t x260 = -5108758084135666LL;
	int32_t t52 = -87474;

    t52 = ((x257/x258)>>(x259==x260));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x262 = INT8_MIN;
	uint8_t x263 = UINT8_MAX;
	volatile uint32_t t53 = 116917525U;

    t53 = ((x261/x262)>>(x263==x264));

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x266 = 2242501239980LLU;
	uint64_t x267 = 785309356LLU;
	volatile uint64_t t54 = 260301832LLU;

    t54 = ((x265/x266)>>(x267==x268));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x269 = 27U;
	int64_t x271 = INT64_MAX;
	static int32_t x272 = INT32_MIN;
	int32_t t55 = -4018;

    t55 = ((x269/x270)>>(x271==x272));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x277 = 12U;
	int32_t x278 = INT32_MIN;
	volatile int16_t x279 = -114;
	static uint32_t t56 = 44186235U;

    t56 = ((x277/x278)>>(x279==x280));

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x282 = INT32_MIN;
	int64_t x284 = INT64_MIN;
	int32_t t57 = 10781;

    t57 = ((x281/x282)>>(x283==x284));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int32_t x285 = INT32_MIN;
	uint64_t x286 = 8LLU;
	static uint64_t t58 = 3190507LLU;

    t58 = ((x285/x286)>>(x287==x288));

    if (t58 != 2305843008945258496LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x289 = INT8_MAX;
	uint64_t x290 = 239495269LLU;
	static volatile uint64_t x291 = 1299581366173418LLU;
	uint64_t t59 = 247220LLU;

    t59 = ((x289/x290)>>(x291==x292));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x294 = -7;
	int64_t x295 = -1LL;
	int16_t x296 = INT16_MIN;
	static int32_t t60 = 201;

    t60 = ((x293/x294)>>(x295==x296));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x299 = -1;
	uint16_t x300 = UINT16_MAX;
	static volatile int64_t t61 = 12732742872465717LL;

    t61 = ((x297/x298)>>(x299==x300));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x301 = 726;
	volatile int64_t x302 = 226319915045481175LL;
	uint8_t x303 = 8U;
	int8_t x304 = 0;
	static int64_t t62 = 2990032303LL;

    t62 = ((x301/x302)>>(x303==x304));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x306 = 8443U;
	uint16_t x307 = 11107U;
	static int8_t x308 = INT8_MIN;
	static int32_t t63 = -26;

    t63 = ((x305/x306)>>(x307==x308));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x317 = INT16_MIN;
	uint32_t x318 = 48879140U;
	int64_t x319 = INT64_MIN;
	static uint32_t t64 = 175230U;

    t64 = ((x317/x318)>>(x319==x320));

    if (t64 != 87U) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x325 = INT8_MIN;
	volatile uint8_t x326 = UINT8_MAX;
	uint32_t x328 = 12600U;

    t65 = ((x325/x326)>>(x327==x328));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint32_t x329 = 760U;
	uint64_t x330 = 5531LLU;
	int8_t x331 = INT8_MIN;
	int32_t x332 = INT32_MIN;
	uint64_t t66 = 22249633664LLU;

    t66 = ((x329/x330)>>(x331==x332));

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x333 = UINT32_MAX;
	int32_t x334 = -1;
	uint32_t x335 = 773929939U;
	static int16_t x336 = -129;
	volatile uint32_t t67 = 398488U;

    t67 = ((x333/x334)>>(x335==x336));

    if (t67 != 1U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x345 = 5U;
	int64_t x346 = INT64_MIN;
	int32_t x347 = -1;
	static int64_t x348 = INT64_MIN;
	volatile int64_t t68 = -178LL;

    t68 = ((x345/x346)>>(x347==x348));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x353 = 49U;
	static uint8_t x354 = 4U;
	uint8_t x355 = 2U;
	int32_t x356 = INT32_MAX;
	volatile int32_t t69 = -794395396;

    t69 = ((x353/x354)>>(x355==x356));

    if (t69 != 12) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x358 = UINT16_MAX;
	volatile int64_t x359 = INT64_MAX;
	int32_t x360 = INT32_MAX;
	int32_t t70 = -74;

    t70 = ((x357/x358)>>(x359==x360));

    if (t70 != 32768) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x362 = 5165635U;
	uint8_t x363 = UINT8_MAX;
	static int16_t x364 = 1;
	static uint32_t t71 = 39437U;

    t71 = ((x361/x362)>>(x363==x364));

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x365 = -4295;
	volatile uint32_t x366 = UINT32_MAX;
	static volatile uint8_t x368 = UINT8_MAX;

    t72 = ((x365/x366)>>(x367==x368));

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x369 = -1LL;
	int8_t x371 = INT8_MIN;
	int64_t x372 = INT64_MAX;

    t73 = ((x369/x370)>>(x371==x372));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x373 = INT16_MIN;
	int64_t x374 = -1LL;
	int64_t x376 = -1LL;
	int64_t t74 = -66363363242942988LL;

    t74 = ((x373/x374)>>(x375==x376));

    if (t74 != 32768LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x377 = INT16_MIN;
	int32_t x378 = INT32_MAX;
	volatile uint8_t x379 = 3U;
	volatile int32_t t75 = -292;

    t75 = ((x377/x378)>>(x379==x380));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x381 = -1LL;
	int64_t x382 = INT64_MAX;
	int64_t x383 = INT64_MAX;
	int8_t x384 = INT8_MIN;
	volatile int64_t t76 = -1676933LL;

    t76 = ((x381/x382)>>(x383==x384));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x385 = UINT32_MAX;
	static int32_t x386 = -1;
	static int8_t x387 = -1;
	static int64_t x388 = INT64_MAX;

    t77 = ((x385/x386)>>(x387==x388));

    if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int8_t x389 = INT8_MIN;
	volatile int16_t x390 = INT16_MAX;
	static uint16_t x391 = 335U;
	uint32_t x392 = UINT32_MAX;
	volatile int32_t t78 = -6;

    t78 = ((x389/x390)>>(x391==x392));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x394 = INT32_MIN;
	volatile uint64_t x395 = 13959417LLU;
	volatile int32_t t79 = 58602736;

    t79 = ((x393/x394)>>(x395==x396));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x397 = 1843303908598428324LLU;
	int32_t x398 = -8162730;
	int8_t x399 = INT8_MAX;
	static volatile int32_t x400 = INT32_MIN;
	volatile uint64_t t80 = 514114324162537LLU;

    t80 = ((x397/x398)>>(x399==x400));

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x407 = INT64_MIN;
	static int16_t x408 = INT16_MIN;
	volatile int32_t t81 = 103894;

    t81 = ((x405/x406)>>(x407==x408));

    if (t81 != 32768) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x409 = 15U;
	int32_t x410 = INT32_MIN;
	int16_t x412 = -8321;
	static volatile int32_t t82 = -15472089;

    t82 = ((x409/x410)>>(x411==x412));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x414 = INT64_MIN;
	uint32_t x416 = UINT32_MAX;

    t83 = ((x413/x414)>>(x415==x416));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x421 = INT16_MIN;
	static int16_t x423 = INT16_MIN;
	static uint32_t x424 = UINT32_MAX;

    t84 = ((x421/x422)>>(x423==x424));

    if (t84 != 256) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint16_t x429 = UINT16_MAX;
	volatile uint64_t x430 = UINT64_MAX;
	int32_t x431 = -6455;
	int64_t x432 = INT64_MIN;
	uint64_t t85 = 5LLU;

    t85 = ((x429/x430)>>(x431==x432));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x433 = -13;
	int32_t x435 = INT32_MIN;
	volatile uint64_t t86 = 38827373LLU;

    t86 = ((x433/x434)>>(x435==x436));

    if (t86 != 622149884442143LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x437 = UINT16_MAX;
	uint64_t x438 = UINT64_MAX;
	uint64_t x440 = 28LLU;
	static volatile uint64_t t87 = 121811133019LLU;

    t87 = ((x437/x438)>>(x439==x440));

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x441 = -311670228;
	uint8_t x443 = 0U;
	volatile int32_t t88 = -12;

    t88 = ((x441/x442)>>(x443==x444));

    if (t88 != 166224) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x446 = INT64_MIN;
	uint16_t x447 = UINT16_MAX;
	uint64_t x448 = UINT64_MAX;
	int64_t t89 = 5LL;

    t89 = ((x445/x446)>>(x447==x448));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x449 = -1;
	uint16_t x450 = UINT16_MAX;
	static volatile uint64_t x452 = 1062648647304440195LLU;
	volatile int32_t t90 = -839016750;

    t90 = ((x449/x450)>>(x451==x452));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile uint64_t x453 = 441491330668331LLU;
	static int16_t x454 = -1;
	uint8_t x456 = UINT8_MAX;

    t91 = ((x453/x454)>>(x455==x456));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x457 = UINT64_MAX;
	volatile int64_t x459 = -5212LL;
	int64_t x460 = INT64_MIN;
	uint64_t t92 = 37019146473LLU;

    t92 = ((x457/x458)>>(x459==x460));

    if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x461 = 91379180483522603LL;
	int8_t x462 = INT8_MAX;
	uint8_t x464 = 1U;
	int64_t t93 = 179510985LL;

    t93 = ((x461/x462)>>(x463==x464));

    if (t93 != 719521106169469LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x465 = -1LL;
	static int64_t x467 = INT64_MIN;
	volatile int64_t t94 = -7331404LL;

    t94 = ((x465/x466)>>(x467==x468));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x469 = 61U;
	volatile uint16_t x470 = 4U;
	volatile uint16_t x471 = 7U;
	int16_t x472 = INT16_MAX;

    t95 = ((x469/x470)>>(x471==x472));

    if (t95 != 15U) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x477 = -1;
	int8_t x478 = INT8_MIN;
	uint32_t x479 = 0U;
	int32_t x480 = INT32_MAX;
	static int32_t t96 = -3;

    t96 = ((x477/x478)>>(x479==x480));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint64_t x481 = 34555LLU;
	int32_t x482 = -281096;
	int16_t x484 = INT16_MAX;
	static uint64_t t97 = 538946582492LLU;

    t97 = ((x481/x482)>>(x483==x484));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x485 = INT8_MAX;
	uint8_t x487 = 26U;
	int64_t x488 = INT64_MIN;
	int32_t t98 = -54581;

    t98 = ((x485/x486)>>(x487==x488));

    if (t98 != 3) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x489 = INT16_MIN;
	int64_t x490 = -18357210483629512LL;
	volatile int64_t t99 = 66563404063605606LL;

    t99 = ((x489/x490)>>(x491==x492));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x493 = UINT16_MAX;
	static int64_t x494 = INT64_MIN;
	int16_t x495 = INT16_MIN;
	int16_t x496 = INT16_MIN;
	int64_t t100 = -7LL;

    t100 = ((x493/x494)>>(x495==x496));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint64_t x499 = 11318454033470737LLU;
	volatile int32_t x500 = 3847167;

    t101 = ((x497/x498)>>(x499==x500));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x501 = 658U;
	int16_t x502 = 2019;
	int16_t x503 = INT16_MIN;
	int16_t x504 = 14;
	static volatile int32_t t102 = -74626058;

    t102 = ((x501/x502)>>(x503==x504));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x505 = -116610LL;
	int32_t x506 = INT32_MIN;
	int64_t x507 = 264983181062578LL;
	static volatile int64_t t103 = -8486127349LL;

    t103 = ((x505/x506)>>(x507==x508));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x509 = -1LL;
	int16_t x510 = INT16_MIN;

    t104 = ((x509/x510)>>(x511==x512));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x513 = 154342U;
	int32_t x514 = 2638;
	int64_t x515 = INT64_MIN;
	int64_t x516 = INT64_MIN;
	static uint32_t t105 = 2155839U;

    t105 = ((x513/x514)>>(x515==x516));

    if (t105 != 29U) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x517 = -1;
	int64_t x518 = INT64_MIN;
	int8_t x519 = 10;
	static int8_t x520 = 0;
	int64_t t106 = 7638818975009000LL;

    t106 = ((x517/x518)>>(x519==x520));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x521 = 825U;
	static int16_t x522 = -1;
	int8_t x523 = INT8_MIN;
	int16_t x524 = INT16_MAX;

    t107 = ((x521/x522)>>(x523==x524));

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x526 = INT32_MIN;
	int16_t x527 = INT16_MAX;
	uint64_t x528 = UINT64_MAX;

    t108 = ((x525/x526)>>(x527==x528));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x529 = 5;
	int16_t x530 = 5;
	uint8_t x531 = 3U;
	int32_t x532 = -1;
	static int32_t t109 = 898;

    t109 = ((x529/x530)>>(x531==x532));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x533 = UINT32_MAX;
	volatile int64_t x534 = 102597980725632604LL;
	int64_t x535 = INT64_MAX;
	int64_t t110 = -4310133377247393LL;

    t110 = ((x533/x534)>>(x535==x536));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x549 = 615544;
	static volatile uint64_t x550 = 17947146493976416LLU;
	int64_t x551 = INT64_MIN;
	int64_t x552 = 1047487795LL;

    t111 = ((x549/x550)>>(x551==x552));

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x553 = INT32_MIN;
	volatile int16_t x554 = -6;
	int16_t x556 = -1;
	int32_t t112 = 194224132;

    t112 = ((x553/x554)>>(x555==x556));

    if (t112 != 357913941) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint64_t x561 = UINT64_MAX;
	static int16_t x562 = INT16_MAX;
	static int64_t x563 = INT64_MIN;
	static volatile uint32_t x564 = UINT32_MAX;
	uint64_t t113 = 93379908061130LLU;

    t113 = ((x561/x562)>>(x563==x564));

    if (t113 != 562967133814800LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x565 = 335110U;
	int32_t x566 = -1;
	int16_t x568 = 15391;

    t114 = ((x565/x566)>>(x567==x568));

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int8_t x569 = INT8_MIN;
	volatile int16_t x571 = INT16_MIN;
	int32_t x572 = INT32_MAX;
	static int32_t t115 = -252;

    t115 = ((x569/x570)>>(x571==x572));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x575 = INT32_MIN;
	uint64_t x576 = 5LLU;
	static volatile int32_t t116 = -1242;

    t116 = ((x573/x574)>>(x575==x576));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x577 = 14229215039965LLU;
	volatile uint8_t x578 = 1U;
	volatile uint8_t x579 = 8U;
	static volatile uint64_t t117 = 515493933LLU;

    t117 = ((x577/x578)>>(x579==x580));

    if (t117 != 14229215039965LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x581 = INT8_MAX;
	uint8_t x582 = UINT8_MAX;
	uint64_t x583 = UINT64_MAX;
	volatile uint64_t x584 = UINT64_MAX;
	static int32_t t118 = -3156382;

    t118 = ((x581/x582)>>(x583==x584));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x585 = -1;
	int32_t x586 = -1;
	volatile uint8_t x588 = UINT8_MAX;
	volatile int32_t t119 = -43781231;

    t119 = ((x585/x586)>>(x587==x588));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x590 = 106033;
	uint8_t x592 = 3U;

    t120 = ((x589/x590)>>(x591==x592));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x593 = UINT64_MAX;
	uint8_t x595 = UINT8_MAX;
	uint64_t t121 = 432066269604LLU;

    t121 = ((x593/x594)>>(x595==x596));

    if (t121 != 1LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x597 = 4U;
	int16_t x598 = -97;
	uint8_t x599 = UINT8_MAX;
	static uint8_t x600 = UINT8_MAX;
	volatile int32_t t122 = 147784;

    t122 = ((x597/x598)>>(x599==x600));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x601 = UINT16_MAX;
	static volatile int64_t x602 = INT64_MIN;
	int32_t x604 = -6473;
	static int64_t t123 = -5012868864617LL;

    t123 = ((x601/x602)>>(x603==x604));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x605 = INT8_MIN;
	int64_t x607 = 6238023648LL;
	int32_t t124 = 38909;

    t124 = ((x605/x606)>>(x607==x608));

    if (t124 != 128) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x609 = 15U;
	int32_t x610 = INT32_MIN;
	static uint16_t x611 = UINT16_MAX;
	int32_t x612 = -564643841;
	static int32_t t125 = -2;

    t125 = ((x609/x610)>>(x611==x612));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x615 = -14064;
	volatile int32_t t126 = -247593;

    t126 = ((x613/x614)>>(x615==x616));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x617 = UINT64_MAX;
	int8_t x619 = INT8_MIN;
	int32_t x620 = -1;
	volatile uint64_t t127 = 7LLU;

    t127 = ((x617/x618)>>(x619==x620));

    if (t127 != 281479271743489LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int32_t x622 = INT32_MAX;
	static volatile int8_t x623 = INT8_MAX;
	volatile uint16_t x624 = 12U;

    t128 = ((x621/x622)>>(x623==x624));

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int8_t x625 = -19;
	int64_t x626 = 6879834LL;
	uint8_t x627 = 23U;
	int64_t t129 = 228202749729LL;

    t129 = ((x625/x626)>>(x627==x628));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x629 = 509U;
	uint64_t x630 = 897LLU;
	volatile uint64_t t130 = 2075994226013LLU;

    t130 = ((x629/x630)>>(x631==x632));

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint16_t x633 = 0U;
	volatile int16_t x634 = INT16_MIN;
	uint32_t x636 = 9356975U;
	int32_t t131 = 6101919;

    t131 = ((x633/x634)>>(x635==x636));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x637 = 0U;
	int8_t x638 = INT8_MIN;
	int8_t x639 = -1;
	int32_t x640 = INT32_MIN;
	int32_t t132 = 54384010;

    t132 = ((x637/x638)>>(x639==x640));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x642 = INT16_MIN;
	static int64_t x643 = INT64_MIN;
	int32_t t133 = -1746065;

    t133 = ((x641/x642)>>(x643==x644));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x645 = INT8_MIN;
	uint32_t x646 = UINT32_MAX;
	static volatile int16_t x647 = INT16_MIN;
	static int64_t x648 = INT64_MAX;
	volatile uint32_t t134 = 253450U;

    t134 = ((x645/x646)>>(x647==x648));

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x650 = 232;
	static uint16_t x652 = 408U;
	static int64_t t135 = -198LL;

    t135 = ((x649/x650)>>(x651==x652));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x653 = 1418129U;
	volatile int8_t x654 = INT8_MAX;
	volatile int16_t x656 = -1;
	static uint32_t t136 = 1510554804U;

    t136 = ((x653/x654)>>(x655==x656));

    if (t136 != 5583U) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x658 = 57;
	int64_t x659 = INT64_MAX;
	uint8_t x660 = UINT8_MAX;
	static int32_t t137 = 7417063;

    t137 = ((x657/x658)>>(x659==x660));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x661 = 29U;
	int64_t x663 = INT64_MAX;
	uint16_t x664 = 45U;
	volatile int32_t t138 = -6642219;

    t138 = ((x661/x662)>>(x663==x664));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x665 = INT16_MIN;
	static int32_t x667 = INT32_MIN;
	uint8_t x668 = 102U;
	int64_t t139 = -5106185460718783LL;

    t139 = ((x665/x666)>>(x667==x668));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x669 = INT64_MAX;
	int64_t x670 = INT64_MAX;

    t140 = ((x669/x670)>>(x671==x672));

    if (t140 != 1LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x681 = INT16_MIN;
	static int8_t x682 = INT8_MIN;
	int64_t x683 = INT64_MIN;
	volatile int16_t x684 = -595;
	volatile int32_t t141 = 186497271;

    t141 = ((x681/x682)>>(x683==x684));

    if (t141 != 256) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x685 = 33U;
	static uint32_t x686 = 46409U;
	int32_t x687 = 0;
	static uint32_t x688 = 244313626U;
	volatile uint32_t t142 = 842419U;

    t142 = ((x685/x686)>>(x687==x688));

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x689 = 0U;
	static int64_t x690 = INT64_MAX;
	uint8_t x691 = 0U;
	volatile int64_t t143 = 69642499178385943LL;

    t143 = ((x689/x690)>>(x691==x692));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int16_t x693 = INT16_MIN;
	int64_t x694 = -212974LL;
	int8_t x696 = INT8_MAX;

    t144 = ((x693/x694)>>(x695==x696));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x701 = INT64_MIN;
	uint64_t x702 = UINT64_MAX;
	uint32_t x704 = 1683034U;
	uint64_t t145 = 1923193296754352665LLU;

    t145 = ((x701/x702)>>(x703==x704));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x705 = UINT16_MAX;
	volatile int64_t x706 = INT64_MIN;
	uint16_t x707 = 730U;
	int64_t x708 = INT64_MAX;
	int64_t t146 = -4162895LL;

    t146 = ((x705/x706)>>(x707==x708));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x711 = INT32_MAX;
	int32_t x712 = -259489;
	volatile int32_t t147 = 43;

    t147 = ((x709/x710)>>(x711==x712));

    if (t147 != 65536) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x713 = INT16_MIN;
	uint32_t x716 = 4925U;
	volatile int64_t t148 = -3492690848479837405LL;

    t148 = ((x713/x714)>>(x715==x716));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint8_t x717 = UINT8_MAX;
	static volatile int16_t x718 = 15;
	volatile uint64_t x720 = UINT64_MAX;
	int32_t t149 = 181;

    t149 = ((x717/x718)>>(x719==x720));

    if (t149 != 8) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x721 = 259052042U;
	uint8_t x722 = 59U;
	static int64_t x723 = -1LL;
	int16_t x724 = 1;
	volatile uint32_t t150 = 4334U;

    t150 = ((x721/x722)>>(x723==x724));

    if (t150 != 4390712U) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int64_t x725 = -6678LL;
	int16_t x727 = 42;
	static uint32_t x728 = 1236U;
	volatile int64_t t151 = 718556234LL;

    t151 = ((x725/x726)>>(x727==x728));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x729 = -1;
	static int64_t x730 = INT64_MIN;
	static volatile int16_t x731 = 10920;
	uint8_t x732 = UINT8_MAX;
	volatile int64_t t152 = 214586604313LL;

    t152 = ((x729/x730)>>(x731==x732));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x733 = 1;
	int16_t x734 = INT16_MIN;
	int32_t x735 = INT32_MAX;
	static volatile int32_t t153 = -3;

    t153 = ((x733/x734)>>(x735==x736));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x737 = 2017847210901709208LL;
	int16_t x738 = INT16_MAX;
	uint32_t x740 = 39U;
	int64_t t154 = -16680108345920458LL;

    t154 = ((x737/x738)>>(x739==x740));

    if (t154 != 61581689227018LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x745 = UINT8_MAX;
	int64_t x746 = INT64_MAX;
	static int16_t x747 = INT16_MIN;
	uint64_t x748 = UINT64_MAX;
	volatile int64_t t155 = 359502LL;

    t155 = ((x745/x746)>>(x747==x748));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x749 = -1;
	int8_t x750 = -1;
	static volatile int8_t x751 = INT8_MIN;
	uint32_t x752 = UINT32_MAX;

    t156 = ((x749/x750)>>(x751==x752));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x760 = 3817;
	volatile uint64_t t157 = 15032LLU;

    t157 = ((x757/x758)>>(x759==x760));

    if (t157 != 1377448955851LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x761 = INT64_MIN;
	int8_t x762 = -46;
	volatile int16_t x763 = -1;
	uint8_t x764 = UINT8_MAX;
	int64_t t158 = 7429144LL;

    t158 = ((x761/x762)>>(x763==x764));

    if (t158 != 200508087757712517LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x769 = INT64_MAX;
	uint8_t x770 = 17U;
	uint32_t x771 = 212099621U;
	static int8_t x772 = 2;
	volatile int64_t t159 = 6340LL;

    t159 = ((x769/x770)>>(x771==x772));

    if (t159 != 542551296285575047LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x773 = -1;
	uint8_t x774 = 13U;
	static uint8_t x775 = 52U;
	int32_t x776 = INT32_MIN;
	static volatile int32_t t160 = 50;

    t160 = ((x773/x774)>>(x775==x776));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x777 = -2;
	uint8_t x778 = 57U;
	int32_t x779 = INT32_MIN;
	static int8_t x780 = -1;
	int32_t t161 = 824106102;

    t161 = ((x777/x778)>>(x779==x780));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x797 = INT8_MIN;
	volatile int64_t x798 = -7767LL;
	uint32_t x799 = 94U;
	int64_t x800 = -1LL;
	volatile int64_t t162 = 455055992044LL;

    t162 = ((x797/x798)>>(x799==x800));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x801 = UINT16_MAX;
	int8_t x802 = INT8_MAX;
	int8_t x804 = INT8_MIN;
	volatile int32_t t163 = 460863374;

    t163 = ((x801/x802)>>(x803==x804));

    if (t163 != 516) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x805 = UINT32_MAX;
	volatile int16_t x806 = -1;
	int64_t x807 = -1LL;
	volatile int64_t x808 = INT64_MIN;
	uint32_t t164 = 81091U;

    t164 = ((x805/x806)>>(x807==x808));

    if (t164 != 1U) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x809 = INT8_MAX;
	int8_t x810 = 1;
	static int16_t x812 = INT16_MAX;
	int32_t t165 = -61;

    t165 = ((x809/x810)>>(x811==x812));

    if (t165 != 127) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x817 = UINT64_MAX;
	volatile int16_t x818 = -12;
	uint64_t x819 = UINT64_MAX;
	volatile uint64_t t166 = 18074510570792255LLU;

    t166 = ((x817/x818)>>(x819==x820));

    if (t166 != 1LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x824 = -1LL;

    t167 = ((x821/x822)>>(x823==x824));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x825 = 13756163558022LL;
	int64_t x826 = 3319LL;
	static int8_t x827 = INT8_MAX;

    t168 = ((x825/x826)>>(x827==x828));

    if (t168 != 4144671153LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x833 = -1;
	static int32_t x835 = -1;
	int8_t x836 = 1;
	int64_t t169 = 416041615139328011LL;

    t169 = ((x833/x834)>>(x835==x836));

    if (t169 != 1LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x838 = INT32_MIN;
	static uint8_t x839 = 127U;
	int64_t x840 = INT64_MIN;
	volatile int32_t t170 = 1;

    t170 = ((x837/x838)>>(x839==x840));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x841 = 66LLU;
	static uint32_t x842 = UINT32_MAX;
	uint16_t x844 = UINT16_MAX;
	volatile uint64_t t171 = 15148337LLU;

    t171 = ((x841/x842)>>(x843==x844));

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x845 = INT64_MAX;
	volatile uint64_t x846 = 2311LLU;
	int8_t x847 = INT8_MIN;
	int32_t x848 = INT32_MAX;
	uint64_t t172 = 1867766574701LLU;

    t172 = ((x845/x846)>>(x847==x848));

    if (t172 != 3991074009889561LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x849 = -1LL;
	uint64_t x850 = 55404LLU;
	static int64_t x851 = 1948699898385LL;
	int32_t x852 = INT32_MIN;
	volatile uint64_t t173 = 92882LLU;

    t173 = ((x849/x850)>>(x851==x852));

    if (t173 != 332949680053959LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x853 = 1626471U;
	static uint16_t x854 = 1U;
	int32_t x855 = INT32_MAX;
	int16_t x856 = INT16_MIN;

    t174 = ((x853/x854)>>(x855==x856));

    if (t174 != 1626471U) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x857 = -16;
	int16_t x858 = -1;
	static int8_t x859 = INT8_MAX;
	static uint32_t x860 = 17783760U;

    t175 = ((x857/x858)>>(x859==x860));

    if (t175 != 16) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint64_t x861 = 271583739036759LLU;
	int64_t x862 = INT64_MIN;
	static int64_t x863 = INT64_MAX;
	int64_t x864 = 55415664LL;

    t176 = ((x861/x862)>>(x863==x864));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x865 = -1;
	int64_t x867 = 3423223681LL;
	int64_t x868 = INT64_MAX;

    t177 = ((x865/x866)>>(x867==x868));

    if (t177 != 1U) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x870 = INT32_MIN;
	int32_t x871 = INT32_MIN;
	int32_t t178 = 5994439;

    t178 = ((x869/x870)>>(x871==x872));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int16_t x873 = INT16_MAX;
	int64_t x874 = 117315124LL;
	int64_t x875 = INT64_MIN;
	int64_t x876 = -563897705401229LL;
	volatile int64_t t179 = -452552LL;

    t179 = ((x873/x874)>>(x875==x876));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x878 = INT32_MAX;
	volatile int8_t x879 = 7;
	int16_t x880 = INT16_MIN;
	int64_t t180 = -7003LL;

    t180 = ((x877/x878)>>(x879==x880));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x881 = INT8_MIN;
	static volatile int32_t x882 = INT32_MIN;
	int16_t x883 = 103;
	int32_t t181 = 1;

    t181 = ((x881/x882)>>(x883==x884));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x886 = 3083U;
	uint8_t x888 = UINT8_MAX;
	int32_t t182 = 126129887;

    t182 = ((x885/x886)>>(x887==x888));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x890 = -8750;
	volatile int8_t x891 = -6;
	volatile int8_t x892 = INT8_MIN;
	volatile int64_t t183 = 2698429961LL;

    t183 = ((x889/x890)>>(x891==x892));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x893 = 3319004997268559387LL;
	int16_t x895 = 4917;
	int64_t t184 = 16871566728LL;

    t184 = ((x893/x894)>>(x895==x896));

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint64_t x897 = 53253251766LLU;
	int64_t x898 = 102962LL;
	int32_t x899 = INT32_MAX;
	int8_t x900 = 1;
	uint64_t t185 = 597301297932171LLU;

    t185 = ((x897/x898)>>(x899==x900));

    if (t185 != 517212LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x905 = INT32_MIN;
	static int32_t x906 = INT32_MIN;
	static uint8_t x907 = UINT8_MAX;
	volatile int8_t x908 = INT8_MIN;
	volatile int32_t t186 = -51081;

    t186 = ((x905/x906)>>(x907==x908));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x909 = 0U;
	int8_t x910 = INT8_MIN;
	uint64_t x911 = UINT64_MAX;
	int32_t x912 = 10770963;
	static volatile int32_t t187 = -397544414;

    t187 = ((x909/x910)>>(x911==x912));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x913 = 1;
	static int64_t x914 = 222LL;
	uint32_t x915 = 9U;
	volatile int32_t x916 = INT32_MIN;
	int64_t t188 = -2226499735003LL;

    t188 = ((x913/x914)>>(x915==x916));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x918 = 140;
	int16_t x919 = INT16_MIN;
	int8_t x920 = INT8_MAX;
	int32_t t189 = 89;

    t189 = ((x917/x918)>>(x919==x920));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x921 = -55885LL;
	int64_t x922 = INT64_MIN;
	uint32_t x923 = 120630635U;
	int64_t t190 = 5LL;

    t190 = ((x921/x922)>>(x923==x924));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x925 = 96985142750LLU;
	uint64_t x926 = UINT64_MAX;
	int32_t x927 = INT32_MAX;
	static volatile uint64_t t191 = 735LLU;

    t191 = ((x925/x926)>>(x927==x928));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint8_t x929 = UINT8_MAX;
	int16_t x930 = INT16_MIN;
	int16_t x932 = INT16_MIN;
	static int32_t t192 = -61343;

    t192 = ((x929/x930)>>(x931==x932));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x933 = 51;
	int64_t x934 = INT64_MIN;
	uint16_t x935 = 29U;
	volatile int64_t t193 = 433LL;

    t193 = ((x933/x934)>>(x935==x936));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x937 = -1;
	int16_t x938 = 29;
	int64_t x939 = INT64_MIN;
	int8_t x940 = -1;
	int32_t t194 = 426;

    t194 = ((x937/x938)>>(x939==x940));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x941 = 1650LLU;
	volatile int64_t x942 = INT64_MAX;
	int8_t x943 = -9;
	int32_t x944 = -1;
	uint64_t t195 = 5906353499513984554LLU;

    t195 = ((x941/x942)>>(x943==x944));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x945 = INT64_MAX;
	uint8_t x946 = 3U;
	int32_t x947 = INT32_MAX;
	int64_t t196 = -1LL;

    t196 = ((x945/x946)>>(x947==x948));

    if (t196 != 3074457345618258602LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x950 = -1LL;
	int16_t x951 = 0;
	uint32_t x952 = UINT32_MAX;
	int64_t t197 = -4032668463137423119LL;

    t197 = ((x949/x950)>>(x951==x952));

    if (t197 != 789679237781LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x953 = 53077924U;
	int8_t x954 = -1;
	uint32_t x955 = 941U;
	uint16_t x956 = UINT16_MAX;
	static volatile uint32_t t198 = 2816788U;

    t198 = ((x953/x954)>>(x955==x956));

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x957 = -1;
	int32_t x958 = 50949;
	static int64_t x959 = 154079108499402LL;
	uint64_t x960 = 124358LLU;
	volatile int32_t t199 = -731236;

    t199 = ((x957/x958)>>(x959==x960));

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

