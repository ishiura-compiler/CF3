
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

static int64_t x1 = INT64_MIN;
uint64_t x2 = 207736157747594LLU;
static int32_t x3 = -1;
int32_t x5 = -95100;
uint8_t x13 = 47U;
int16_t x15 = -2;
int64_t x16 = INT64_MIN;
volatile int64_t t3 = 0LL;
int32_t x17 = INT32_MIN;
uint16_t x18 = 5056U;
static int32_t t4 = 934989;
int64_t x21 = INT64_MIN;
uint64_t x23 = 567422LLU;
volatile int32_t t7 = 3;
int8_t x42 = INT8_MIN;
static int8_t x43 = -1;
int64_t x54 = INT64_MIN;
int8_t x56 = INT8_MIN;
int64_t t13 = 9509029LL;
static int16_t x64 = INT16_MIN;
uint16_t x68 = UINT16_MAX;
volatile int32_t t16 = -1;
volatile uint64_t t18 = 15763633LLU;
int8_t x78 = -1;
int64_t x80 = -511799311431LL;
static int16_t x86 = INT16_MAX;
static int16_t x94 = 2;
static int64_t x96 = -1LL;
uint64_t x97 = UINT64_MAX;
static uint32_t x99 = UINT32_MAX;
static uint16_t x103 = UINT16_MAX;
uint32_t t25 = 531U;
volatile int8_t x107 = -18;
static int32_t t27 = 1501;
int16_t x114 = 48;
uint64_t t29 = 185186960312388LLU;
int64_t x123 = -1LL;
volatile uint32_t x124 = 8582705U;
int32_t x126 = -1;
int16_t x132 = 20;
int32_t t32 = 89202;
int32_t t33 = -12;
int32_t x143 = INT32_MIN;
volatile int32_t t35 = 918;
volatile int32_t x151 = INT32_MAX;
volatile int16_t x157 = 1;
uint16_t x160 = 23898U;
uint32_t x161 = 19U;
int32_t x166 = -1;
static volatile int64_t t41 = -5544944601729373LL;
int8_t x173 = -1;
int8_t x174 = 1;
int64_t x178 = -1LL;
uint16_t x182 = UINT16_MAX;
volatile int64_t x184 = INT64_MAX;
int64_t x186 = INT64_MIN;
int8_t x192 = -51;
volatile uint16_t x197 = 0U;
uint32_t x201 = 852U;
uint16_t x202 = 16U;
int8_t x203 = 0;
static uint64_t x206 = 696465308LLU;
static int32_t x207 = -1;
int16_t x210 = -1;
static uint32_t x213 = UINT32_MAX;
int64_t x216 = 1587LL;
uint16_t x225 = 107U;
int8_t x226 = -1;
uint64_t x238 = 269840515LLU;
volatile int8_t x240 = -1;
uint16_t x242 = 1U;
int8_t x243 = INT8_MIN;
volatile int32_t t61 = -14432248;
static uint32_t x251 = 397152837U;
uint8_t x253 = 1U;
uint32_t x254 = 13U;
int16_t x259 = INT16_MIN;
int64_t x261 = -1652507LL;
int64_t t65 = -582715076609092LL;
int16_t x270 = INT16_MIN;
volatile int32_t t67 = 1396639;
int32_t x275 = 74;
uint16_t x277 = 57U;
static volatile int8_t x283 = INT8_MIN;
volatile int32_t x287 = INT32_MAX;
int16_t x288 = -1851;
int32_t t71 = 377;
uint32_t x294 = 29639U;
int64_t x295 = INT64_MIN;
static int16_t x298 = INT16_MIN;
volatile int16_t x299 = INT16_MAX;
volatile int32_t t75 = -1;
static int32_t t77 = -63480;
uint32_t x321 = 24896701U;
int8_t x322 = INT8_MAX;
volatile int8_t x323 = INT8_MIN;
uint32_t t80 = 31947U;
int8_t x330 = INT8_MIN;
int8_t x332 = INT8_MIN;
uint16_t x342 = 23183U;
static int64_t x346 = INT64_MAX;
uint32_t x350 = 75140380U;
int8_t x353 = -6;
int16_t x360 = INT16_MIN;
int32_t t89 = 258274;
static uint8_t x365 = 6U;
int16_t x367 = -1;
int32_t t91 = -8565832;
volatile int64_t x371 = 23302014LL;
uint16_t x373 = 229U;
static volatile int8_t x375 = -1;
static volatile int32_t x383 = INT32_MIN;
uint32_t x384 = 62U;
static int16_t x385 = INT16_MIN;
static int64_t x387 = -1163LL;
int32_t t96 = 4070;
volatile uint32_t x401 = 930U;
uint8_t x414 = UINT8_MAX;
int16_t x418 = INT16_MAX;
volatile int64_t t105 = -117579LL;
int32_t x426 = -1;
int32_t x433 = INT32_MIN;
int8_t x437 = INT8_MIN;
int64_t x444 = INT64_MAX;
volatile int16_t x445 = INT16_MIN;
int8_t x446 = INT8_MIN;
uint8_t x461 = UINT8_MAX;
static int32_t t115 = -1;
int32_t x471 = INT32_MAX;
int32_t x474 = INT32_MIN;
static int8_t x475 = INT8_MIN;
volatile int32_t t122 = 57732;
int16_t x495 = INT16_MAX;
uint32_t t123 = 15462U;
int64_t x506 = INT64_MAX;
uint32_t t127 = 24U;
int16_t x513 = 2;
uint32_t t129 = 16U;
uint64_t x524 = 3897333617626086428LLU;
volatile int8_t x525 = INT8_MIN;
int32_t x527 = INT32_MIN;
int64_t x530 = INT64_MIN;
static volatile uint32_t t133 = 354659653U;
volatile int32_t t134 = 7;
uint64_t x542 = UINT64_MAX;
uint32_t x543 = 523618074U;
volatile int32_t t135 = 1553618;
uint16_t x548 = UINT16_MAX;
static uint16_t x556 = 40U;
int32_t t138 = -1;
static volatile uint64_t t139 = 16LLU;
int64_t t141 = 3580257547LL;
static int8_t x571 = INT8_MIN;
int32_t x574 = -1;
static uint64_t x575 = UINT64_MAX;
int16_t x578 = -366;
uint64_t x580 = 74875107841796LLU;
static int32_t x596 = 542760;
int8_t x598 = -1;
int16_t x600 = 3290;
int64_t x602 = -1LL;
static uint32_t x610 = UINT32_MAX;
int64_t t152 = -1099972956536906LL;
int8_t x613 = -1;
static int32_t x616 = 15;
static uint16_t x623 = 0U;
static volatile int32_t x638 = INT32_MAX;
static int64_t x639 = INT64_MIN;
static volatile uint64_t t159 = 16449052162LLU;
static volatile uint64_t x641 = UINT64_MAX;
int32_t x648 = INT32_MIN;
uint8_t x653 = UINT8_MAX;
static int32_t t163 = 2514;
int8_t x665 = -1;
uint16_t x666 = 115U;
int16_t x672 = INT16_MAX;
int64_t x682 = INT64_MIN;
int64_t t170 = -182973LL;
int32_t x687 = INT32_MIN;
volatile int32_t t171 = 984;
volatile uint64_t t172 = 1499708LLU;
int64_t t173 = 1LL;
volatile int64_t x699 = -1LL;
int32_t x700 = INT32_MIN;
int16_t x703 = INT16_MAX;
int32_t x704 = INT32_MIN;
int16_t x708 = 18;
int32_t x710 = -1;
static volatile int8_t x717 = INT8_MIN;
int16_t x720 = INT16_MIN;
uint64_t x726 = 50LLU;
static volatile int32_t t181 = 37388813;
int8_t x733 = -1;
uint8_t x738 = 8U;
uint64_t x742 = 5357LLU;
uint16_t x754 = UINT16_MAX;
int16_t x758 = INT16_MIN;
static int16_t x764 = 0;
static uint64_t x766 = UINT64_MAX;
volatile uint8_t x767 = 7U;
int64_t x771 = INT64_MIN;
int8_t x780 = INT8_MAX;
int32_t t194 = -15078131;
static uint8_t x781 = 1U;
static uint32_t x792 = 3U;
int16_t x794 = INT16_MAX;
uint8_t x795 = 17U;
volatile int64_t t199 = -16LL;


void f0(void) {
    	volatile int64_t x4 = -30904LL;
	volatile int64_t t0 = 7860891664994LL;

    t0 = ((x1&(x2==x3))&x4);

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = 230805051173740LL;
	int32_t x7 = INT32_MAX;
	static uint16_t x8 = 0U;
	volatile int32_t t1 = 36315;

    t1 = ((x5&(x6==x7))&x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x9 = 0U;
	int32_t x10 = 314;
	static int8_t x11 = INT8_MIN;
	int16_t x12 = INT16_MAX;
	volatile int32_t t2 = -88291218;

    t2 = ((x9&(x10==x11))&x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x14 = 54U;

    t3 = ((x13&(x14==x15))&x16);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x19 = INT16_MIN;
	int16_t x20 = -1;

    t4 = ((x17&(x18==x19))&x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x22 = 252U;
	uint8_t x24 = UINT8_MAX;
	static volatile int64_t t5 = 58274600247529LL;

    t5 = ((x21&(x22==x23))&x24);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = UINT16_MAX;
	volatile int16_t x26 = -1;
	int32_t x27 = INT32_MIN;
	volatile uint64_t x28 = 590423024372LLU;
	uint64_t t6 = 11431212639475067LLU;

    t6 = ((x25&(x26==x27))&x28);

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int16_t x29 = 798;
	uint64_t x30 = 1861454668860383787LLU;
	int64_t x31 = INT64_MIN;
	int32_t x32 = -1;

    t7 = ((x29&(x30==x31))&x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = -4;
	uint16_t x34 = UINT16_MAX;
	int16_t x35 = -1;
	uint64_t x36 = 120723838501LLU;
	volatile uint64_t t8 = 74353453255638LLU;

    t8 = ((x33&(x34==x35))&x36);

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = 12U;
	uint8_t x38 = 0U;
	volatile uint16_t x39 = 25737U;
	int8_t x40 = INT8_MIN;
	volatile int32_t t9 = 8181824;

    t9 = ((x37&(x38==x39))&x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -4045;
	int64_t x44 = INT64_MAX;
	static int64_t t10 = 1001193708LL;

    t10 = ((x41&(x42==x43))&x44);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MIN;
	int8_t x46 = INT8_MIN;
	volatile int32_t x47 = INT32_MIN;
	int16_t x48 = -1;
	volatile int64_t t11 = 3079LL;

    t11 = ((x45&(x46==x47))&x48);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = -1;
	uint64_t x50 = UINT64_MAX;
	int16_t x51 = INT16_MIN;
	uint16_t x52 = UINT16_MAX;
	volatile int32_t t12 = 49016896;

    t12 = ((x49&(x50==x51))&x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = 29351928738442482LL;
	int32_t x55 = INT32_MAX;

    t13 = ((x53&(x54==x55))&x56);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1LL;
	int32_t x58 = -1282644;
	uint32_t x59 = 573271484U;
	int32_t x60 = 62976;
	int64_t t14 = -8LL;

    t14 = ((x57&(x58==x59))&x60);

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x61 = INT32_MIN;
	uint32_t x62 = 43976U;
	int8_t x63 = INT8_MIN;
	int32_t t15 = -2339;

    t15 = ((x61&(x62==x63))&x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = 0U;
	static int64_t x66 = INT64_MAX;
	int8_t x67 = -1;

    t16 = ((x65&(x66==x67))&x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = 2;
	int32_t x70 = -163679341;
	volatile int16_t x71 = -2870;
	int64_t x72 = INT64_MIN;
	volatile int64_t t17 = -4263716LL;

    t17 = ((x69&(x70==x71))&x72);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = 6245U;
	int16_t x74 = -1;
	uint8_t x75 = 0U;
	uint64_t x76 = UINT64_MAX;

    t18 = ((x73&(x74==x75))&x76);

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = -86786LL;
	int8_t x79 = -1;
	int64_t t19 = -21182LL;

    t19 = ((x77&(x78==x79))&x80);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x81 = INT64_MIN;
	static int64_t x82 = 45877994794300LL;
	static int8_t x83 = 2;
	int64_t x84 = INT64_MAX;
	int64_t t20 = 631419635806606LL;

    t20 = ((x81&(x82==x83))&x84);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = UINT32_MAX;
	static volatile int16_t x87 = INT16_MIN;
	static uint32_t x88 = 311729U;
	uint32_t t21 = 158U;

    t21 = ((x85&(x86==x87))&x88);

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 182U;
	uint32_t x90 = UINT32_MAX;
	int16_t x91 = INT16_MAX;
	int64_t x92 = -116201212539LL;
	volatile int64_t t22 = -164LL;

    t22 = ((x89&(x90==x91))&x92);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MAX;
	int32_t x95 = INT32_MIN;
	volatile int64_t t23 = 367335962460739LL;

    t23 = ((x93&(x94==x95))&x96);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x98 = INT64_MAX;
	uint16_t x100 = 1017U;
	uint64_t t24 = 11599161715976389LLU;

    t24 = ((x97&(x98==x99))&x100);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = 885923587U;
	volatile int64_t x102 = INT64_MAX;
	uint8_t x104 = UINT8_MAX;

    t25 = ((x101&(x102==x103))&x104);

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = -76;
	uint32_t x106 = UINT32_MAX;
	uint16_t x108 = 31862U;
	int32_t t26 = 8183626;

    t26 = ((x105&(x106==x107))&x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = 5124U;
	int16_t x110 = 7;
	volatile uint8_t x111 = 6U;
	int32_t x112 = INT32_MAX;

    t27 = ((x109&(x110==x111))&x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = INT16_MIN;
	volatile int64_t x115 = INT64_MIN;
	volatile uint16_t x116 = 2U;
	volatile int32_t t28 = -2458780;

    t28 = ((x113&(x114==x115))&x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = 40509LL;
	int16_t x118 = INT16_MIN;
	uint8_t x119 = 1U;
	uint64_t x120 = UINT64_MAX;

    t29 = ((x117&(x118==x119))&x120);

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x121 = INT32_MIN;
	int8_t x122 = -1;
	uint32_t t30 = 92U;

    t30 = ((x121&(x122==x123))&x124);

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = INT64_MIN;
	int16_t x127 = INT16_MIN;
	static int16_t x128 = 1;
	volatile int64_t t31 = -11740515311388LL;

    t31 = ((x125&(x126==x127))&x128);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x129 = INT8_MIN;
	volatile int32_t x130 = -91555;
	uint16_t x131 = 79U;

    t32 = ((x129&(x130==x131))&x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MIN;
	volatile int32_t x134 = -1;
	int64_t x135 = -635861334LL;
	static int32_t x136 = INT32_MAX;

    t33 = ((x133&(x134==x135))&x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = 54;
	static uint32_t x138 = UINT32_MAX;
	volatile int32_t x139 = -8343685;
	int64_t x140 = INT64_MIN;
	volatile int64_t t34 = -1LL;

    t34 = ((x137&(x138==x139))&x140);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int16_t x141 = INT16_MIN;
	uint8_t x142 = UINT8_MAX;
	static volatile int32_t x144 = INT32_MIN;

    t35 = ((x141&(x142==x143))&x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x145 = UINT16_MAX;
	int8_t x146 = INT8_MAX;
	uint8_t x147 = 0U;
	int32_t x148 = INT32_MIN;
	int32_t t36 = -66240;

    t36 = ((x145&(x146==x147))&x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int64_t x149 = INT64_MIN;
	int32_t x150 = INT32_MAX;
	int64_t x152 = INT64_MIN;
	static int64_t t37 = -2791LL;

    t37 = ((x149&(x150==x151))&x152);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MIN;
	static int16_t x154 = INT16_MAX;
	static int32_t x155 = INT32_MIN;
	static uint64_t x156 = 1589862546350LLU;
	uint64_t t38 = 3841LLU;

    t38 = ((x153&(x154==x155))&x156);

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x158 = 7337556797521LLU;
	uint32_t x159 = UINT32_MAX;
	int32_t t39 = 1791;

    t39 = ((x157&(x158==x159))&x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x162 = -26700112;
	volatile uint64_t x163 = 350LLU;
	uint8_t x164 = 8U;
	static uint32_t t40 = 16U;

    t40 = ((x161&(x162==x163))&x164);

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x165 = INT16_MIN;
	uint16_t x167 = UINT16_MAX;
	int64_t x168 = -20553616578629783LL;

    t41 = ((x165&(x166==x167))&x168);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x169 = 3U;
	static uint8_t x170 = UINT8_MAX;
	volatile uint64_t x171 = UINT64_MAX;
	int64_t x172 = -7279LL;
	int64_t t42 = 23183792020LL;

    t42 = ((x169&(x170==x171))&x172);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x175 = INT64_MIN;
	uint8_t x176 = UINT8_MAX;
	static int32_t t43 = 3037767;

    t43 = ((x173&(x174==x175))&x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x177 = INT64_MAX;
	int32_t x179 = INT32_MIN;
	uint16_t x180 = 1357U;
	volatile int64_t t44 = -1323LL;

    t44 = ((x177&(x178==x179))&x180);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x181 = INT64_MIN;
	static int16_t x183 = INT16_MIN;
	volatile int64_t t45 = 17708926556104LL;

    t45 = ((x181&(x182==x183))&x184);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x185 = INT16_MIN;
	static volatile int64_t x187 = INT64_MIN;
	static int8_t x188 = -1;
	volatile int32_t t46 = 22475153;

    t46 = ((x185&(x186==x187))&x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = 12424U;
	static volatile int8_t x190 = 0;
	int16_t x191 = INT16_MAX;
	volatile int32_t t47 = -65436280;

    t47 = ((x189&(x190==x191))&x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = INT8_MIN;
	uint16_t x194 = 6387U;
	int64_t x195 = 13397596191LL;
	int16_t x196 = INT16_MIN;
	int32_t t48 = -12042907;

    t48 = ((x193&(x194==x195))&x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x198 = 10016834;
	int32_t x199 = 174053;
	int16_t x200 = INT16_MIN;
	volatile int32_t t49 = 663631654;

    t49 = ((x197&(x198==x199))&x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x204 = 476U;
	uint32_t t50 = 22955U;

    t50 = ((x201&(x202==x203))&x204);

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = 296;
	int8_t x208 = -1;
	volatile int32_t t51 = 2846;

    t51 = ((x205&(x206==x207))&x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MIN;
	uint16_t x211 = 15U;
	static uint8_t x212 = 6U;
	int64_t t52 = 132400289129301LL;

    t52 = ((x209&(x210==x211))&x212);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x214 = 133585777;
	static int32_t x215 = -1;
	int64_t t53 = 581LL;

    t53 = ((x213&(x214==x215))&x216);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x217 = 60221U;
	static volatile int64_t x218 = -9652577009928LL;
	int64_t x219 = -4LL;
	uint16_t x220 = 595U;
	volatile uint32_t t54 = 4U;

    t54 = ((x217&(x218==x219))&x220);

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x221 = 6LLU;
	int8_t x222 = -3;
	static int32_t x223 = 7777;
	int16_t x224 = -1;
	uint64_t t55 = 89288203LLU;

    t55 = ((x221&(x222==x223))&x224);

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x227 = 1;
	uint32_t x228 = 3U;
	uint32_t t56 = 2U;

    t56 = ((x225&(x226==x227))&x228);

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = -1;
	int8_t x230 = 0;
	uint32_t x231 = UINT32_MAX;
	int64_t x232 = 211LL;
	volatile int64_t t57 = 258442018630181874LL;

    t57 = ((x229&(x230==x231))&x232);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = INT64_MIN;
	uint16_t x234 = UINT16_MAX;
	volatile int32_t x235 = INT32_MAX;
	int64_t x236 = INT64_MAX;
	int64_t t58 = 108LL;

    t58 = ((x233&(x234==x235))&x236);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = UINT16_MAX;
	static uint32_t x239 = 2915U;
	int32_t t59 = -1;

    t59 = ((x237&(x238==x239))&x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = INT64_MIN;
	int8_t x244 = INT8_MIN;
	static int64_t t60 = 7381854737985641LL;

    t60 = ((x241&(x242==x243))&x244);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x245 = 54U;
	int32_t x246 = INT32_MIN;
	int8_t x247 = INT8_MIN;
	uint8_t x248 = 2U;

    t61 = ((x245&(x246==x247))&x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = INT64_MIN;
	volatile int8_t x250 = INT8_MAX;
	uint32_t x252 = 9952U;
	volatile int64_t t62 = -2911914LL;

    t62 = ((x249&(x250==x251))&x252);

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x255 = INT32_MIN;
	volatile int8_t x256 = INT8_MIN;
	volatile int32_t t63 = 23928718;

    t63 = ((x253&(x254==x255))&x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = -1;
	int64_t x258 = -1LL;
	int8_t x260 = INT8_MIN;
	volatile int32_t t64 = 3393983;

    t64 = ((x257&(x258==x259))&x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x262 = -3;
	uint8_t x263 = 1U;
	uint16_t x264 = UINT16_MAX;

    t65 = ((x261&(x262==x263))&x264);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = INT16_MAX;
	static int32_t x266 = INT32_MIN;
	volatile int64_t x267 = INT64_MIN;
	uint16_t x268 = UINT16_MAX;
	static volatile int32_t t66 = 84960447;

    t66 = ((x265&(x266==x267))&x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = INT32_MAX;
	static volatile uint64_t x271 = 29322943744LLU;
	volatile uint8_t x272 = 3U;

    t67 = ((x269&(x270==x271))&x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x273 = UINT32_MAX;
	int64_t x274 = INT64_MAX;
	int8_t x276 = -1;
	static uint32_t t68 = 585681999U;

    t68 = ((x273&(x274==x275))&x276);

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x278 = -138;
	int32_t x279 = -1;
	uint16_t x280 = UINT16_MAX;
	volatile int32_t t69 = -13;

    t69 = ((x277&(x278==x279))&x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MIN;
	static int16_t x282 = INT16_MIN;
	int8_t x284 = INT8_MIN;
	int32_t t70 = 0;

    t70 = ((x281&(x282==x283))&x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = 1;
	uint32_t x286 = UINT32_MAX;

    t71 = ((x285&(x286==x287))&x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = INT32_MIN;
	int64_t x290 = -22LL;
	uint32_t x291 = 1843239201U;
	int8_t x292 = 1;
	static volatile int32_t t72 = 203125054;

    t72 = ((x289&(x290==x291))&x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int16_t x293 = INT16_MIN;
	uint8_t x296 = UINT8_MAX;
	int32_t t73 = 1111;

    t73 = ((x293&(x294==x295))&x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = -9;
	int8_t x300 = INT8_MIN;
	int32_t t74 = -38462160;

    t74 = ((x297&(x298==x299))&x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x301 = 6;
	static int16_t x302 = 12;
	volatile int32_t x303 = -1;
	int32_t x304 = 3869347;

    t75 = ((x301&(x302==x303))&x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = 1;
	uint8_t x306 = 80U;
	int64_t x307 = 2002385840LL;
	int64_t x308 = 1226944563105LL;
	volatile int64_t t76 = 37530705LL;

    t76 = ((x305&(x306==x307))&x308);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = -6;
	int16_t x310 = 708;
	int8_t x311 = INT8_MIN;
	int16_t x312 = -1;

    t77 = ((x309&(x310==x311))&x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = INT8_MIN;
	int64_t x314 = -838244306335177049LL;
	int32_t x315 = INT32_MAX;
	volatile int64_t x316 = -65080871776LL;
	int64_t t78 = 1LL;

    t78 = ((x313&(x314==x315))&x316);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x317 = UINT8_MAX;
	static volatile int64_t x318 = INT64_MIN;
	uint64_t x319 = 3094094LLU;
	uint8_t x320 = UINT8_MAX;
	static int32_t t79 = -2;

    t79 = ((x317&(x318==x319))&x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x324 = UINT16_MAX;

    t80 = ((x321&(x322==x323))&x324);

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x325 = 663607LLU;
	int32_t x326 = INT32_MIN;
	int64_t x327 = INT64_MIN;
	volatile int64_t x328 = -15521886027032273LL;
	volatile uint64_t t81 = 3882282LLU;

    t81 = ((x325&(x326==x327))&x328);

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = 2609823LL;
	int32_t x331 = INT32_MAX;
	volatile int64_t t82 = -1516190LL;

    t82 = ((x329&(x330==x331))&x332);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x333 = 37887772727840439LLU;
	uint64_t x334 = 8LLU;
	int8_t x335 = INT8_MIN;
	volatile uint32_t x336 = UINT32_MAX;
	static uint64_t t83 = 183236936324106020LLU;

    t83 = ((x333&(x334==x335))&x336);

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = INT8_MIN;
	int64_t x338 = 351026LL;
	static volatile uint32_t x339 = 765U;
	uint16_t x340 = 58U;
	int32_t t84 = 3;

    t84 = ((x337&(x338==x339))&x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = -1;
	int64_t x343 = -1LL;
	int8_t x344 = 5;
	int32_t t85 = 6681;

    t85 = ((x341&(x342==x343))&x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int8_t x345 = INT8_MIN;
	int16_t x347 = 0;
	uint16_t x348 = 36U;
	volatile int32_t t86 = 5;

    t86 = ((x345&(x346==x347))&x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = INT64_MAX;
	int32_t x351 = 101285;
	int64_t x352 = -3232969908717LL;
	volatile int64_t t87 = 0LL;

    t87 = ((x349&(x350==x351))&x352);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x354 = -1;
	static uint16_t x355 = 48U;
	int8_t x356 = 3;
	int32_t t88 = -510501150;

    t88 = ((x353&(x354==x355))&x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = INT32_MIN;
	int32_t x358 = -558264087;
	int16_t x359 = INT16_MAX;

    t89 = ((x357&(x358==x359))&x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x361 = 0U;
	volatile int16_t x362 = -4411;
	static int32_t x363 = INT32_MIN;
	int16_t x364 = INT16_MIN;
	volatile int32_t t90 = 138;

    t90 = ((x361&(x362==x363))&x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x366 = 92U;
	int16_t x368 = INT16_MAX;

    t91 = ((x365&(x366==x367))&x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x369 = UINT64_MAX;
	static int32_t x370 = INT32_MIN;
	static int16_t x372 = INT16_MIN;
	uint64_t t92 = 99092LLU;

    t92 = ((x369&(x370==x371))&x372);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x374 = -1;
	volatile uint16_t x376 = 45U;
	volatile int32_t t93 = -1;

    t93 = ((x373&(x374==x375))&x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x377 = INT64_MIN;
	uint64_t x378 = 2LLU;
	uint8_t x379 = 0U;
	int8_t x380 = INT8_MIN;
	int64_t t94 = 178961LL;

    t94 = ((x377&(x378==x379))&x380);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = INT32_MAX;
	volatile uint64_t x382 = 3094LLU;
	volatile uint32_t t95 = 109U;

    t95 = ((x381&(x382==x383))&x384);

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x386 = INT16_MIN;
	int32_t x388 = -1;

    t96 = ((x385&(x386==x387))&x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = 38002965LL;
	int8_t x390 = -1;
	static volatile uint32_t x391 = UINT32_MAX;
	volatile int32_t x392 = INT32_MAX;
	volatile int64_t t97 = -132416025LL;

    t97 = ((x389&(x390==x391))&x392);

    if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = -2368LL;
	static volatile uint64_t x394 = 13499414LLU;
	int32_t x395 = -1;
	uint32_t x396 = UINT32_MAX;
	volatile int64_t t98 = -258569267992144382LL;

    t98 = ((x393&(x394==x395))&x396);

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x397 = -1LL;
	int32_t x398 = -11;
	uint64_t x399 = 5LLU;
	uint64_t x400 = 96569917084556LLU;
	static volatile uint64_t t99 = 28561885699LLU;

    t99 = ((x397&(x398==x399))&x400);

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x402 = 7063;
	int32_t x403 = INT32_MIN;
	uint64_t x404 = UINT64_MAX;
	volatile uint64_t t100 = 15LLU;

    t100 = ((x401&(x402==x403))&x404);

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = 154LL;
	int8_t x406 = INT8_MAX;
	uint64_t x407 = 11464LLU;
	static int32_t x408 = -695141;
	volatile int64_t t101 = 5LL;

    t101 = ((x405&(x406==x407))&x408);

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x409 = 0U;
	int64_t x410 = -1348211LL;
	int32_t x411 = -551736268;
	uint16_t x412 = UINT16_MAX;
	volatile int32_t t102 = -98;

    t102 = ((x409&(x410==x411))&x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int16_t x413 = 137;
	volatile int8_t x415 = -4;
	static int32_t x416 = INT32_MAX;
	volatile int32_t t103 = 0;

    t103 = ((x413&(x414==x415))&x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = INT16_MIN;
	static uint64_t x419 = 499922760475333399LLU;
	volatile int8_t x420 = INT8_MIN;
	volatile int32_t t104 = -560;

    t104 = ((x417&(x418==x419))&x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = -1LL;
	static volatile uint16_t x422 = 100U;
	volatile int64_t x423 = -1LL;
	int8_t x424 = -1;

    t105 = ((x421&(x422==x423))&x424);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x425 = 371U;
	volatile uint64_t x427 = UINT64_MAX;
	int8_t x428 = 49;
	volatile uint32_t t106 = 352U;

    t106 = ((x425&(x426==x427))&x428);

    if (t106 != 1U) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x429 = -817827972;
	int32_t x430 = INT32_MIN;
	static volatile int8_t x431 = -3;
	int64_t x432 = 1LL;
	volatile int64_t t107 = 17441393128319761LL;

    t107 = ((x429&(x430==x431))&x432);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x434 = -2220;
	int8_t x435 = INT8_MIN;
	static uint8_t x436 = UINT8_MAX;
	int32_t t108 = -12080517;

    t108 = ((x433&(x434==x435))&x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x438 = INT32_MIN;
	int64_t x439 = INT64_MAX;
	static volatile int32_t x440 = INT32_MIN;
	volatile int32_t t109 = 1047766;

    t109 = ((x437&(x438==x439))&x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x441 = -1LL;
	uint64_t x442 = 2LLU;
	int32_t x443 = INT32_MAX;
	volatile int64_t t110 = 106885LL;

    t110 = ((x441&(x442==x443))&x444);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x447 = INT8_MIN;
	int64_t x448 = 111LL;
	int64_t t111 = 11819037248LL;

    t111 = ((x445&(x446==x447))&x448);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x449 = 1282617U;
	int64_t x450 = -1965156445684LL;
	volatile uint64_t x451 = UINT64_MAX;
	uint16_t x452 = UINT16_MAX;
	volatile uint32_t t112 = 197U;

    t112 = ((x449&(x450==x451))&x452);

    if (t112 != 0U) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int32_t x453 = -1;
	uint16_t x454 = UINT16_MAX;
	static int8_t x455 = INT8_MIN;
	volatile int8_t x456 = -1;
	volatile int32_t t113 = -16212941;

    t113 = ((x453&(x454==x455))&x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x457 = 0;
	uint32_t x458 = UINT32_MAX;
	uint32_t x459 = 16813U;
	static int32_t x460 = INT32_MIN;
	volatile int32_t t114 = 0;

    t114 = ((x457&(x458==x459))&x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x462 = 1;
	int64_t x463 = INT64_MIN;
	int32_t x464 = -1;

    t115 = ((x461&(x462==x463))&x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = -1;
	uint32_t x466 = 53U;
	volatile int16_t x467 = INT16_MIN;
	int64_t x468 = -1LL;
	volatile int64_t t116 = 2718239509803335LL;

    t116 = ((x465&(x466==x467))&x468);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = INT16_MAX;
	uint8_t x470 = UINT8_MAX;
	int32_t x472 = INT32_MAX;
	volatile int32_t t117 = -871;

    t117 = ((x469&(x470==x471))&x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x473 = INT64_MAX;
	int16_t x476 = -1;
	static int64_t t118 = -200LL;

    t118 = ((x473&(x474==x475))&x476);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x477 = 489;
	static int16_t x478 = INT16_MIN;
	int16_t x479 = -1;
	int64_t x480 = INT64_MIN;
	int64_t t119 = 60652969577141LL;

    t119 = ((x477&(x478==x479))&x480);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x481 = -1;
	int32_t x482 = INT32_MAX;
	static int64_t x483 = INT64_MIN;
	int32_t x484 = INT32_MIN;
	static volatile int32_t t120 = -252723;

    t120 = ((x481&(x482==x483))&x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x485 = INT8_MIN;
	int32_t x486 = INT32_MIN;
	volatile int16_t x487 = INT16_MIN;
	int32_t x488 = -1;
	int32_t t121 = 767172858;

    t121 = ((x485&(x486==x487))&x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x489 = INT8_MAX;
	int64_t x490 = INT64_MAX;
	volatile int64_t x491 = INT64_MAX;
	int32_t x492 = INT32_MAX;

    t122 = ((x489&(x490==x491))&x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x493 = 5593944U;
	int64_t x494 = INT64_MIN;
	int32_t x496 = 48535102;

    t123 = ((x493&(x494==x495))&x496);

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x497 = UINT64_MAX;
	uint64_t x498 = 23773865894615069LLU;
	uint8_t x499 = 5U;
	uint8_t x500 = 1U;
	volatile uint64_t t124 = 339318LLU;

    t124 = ((x497&(x498==x499))&x500);

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int8_t x501 = -1;
	static uint32_t x502 = 26U;
	int32_t x503 = 46170251;
	volatile int32_t x504 = -1;
	int32_t t125 = -369994415;

    t125 = ((x501&(x502==x503))&x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = INT32_MIN;
	int8_t x507 = -1;
	volatile uint32_t x508 = 2825U;
	uint32_t t126 = 51556U;

    t126 = ((x505&(x506==x507))&x508);

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x509 = 11928U;
	int8_t x510 = INT8_MAX;
	static int32_t x511 = 29045343;
	uint32_t x512 = UINT32_MAX;

    t127 = ((x509&(x510==x511))&x512);

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x514 = INT32_MIN;
	volatile int32_t x515 = INT32_MIN;
	int8_t x516 = -1;
	static int32_t t128 = -32;

    t128 = ((x513&(x514==x515))&x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = INT32_MIN;
	volatile int8_t x518 = 7;
	int16_t x519 = 490;
	uint32_t x520 = 76229U;

    t129 = ((x517&(x518==x519))&x520);

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = -1;
	volatile uint64_t x522 = UINT64_MAX;
	static uint32_t x523 = 225U;
	uint64_t t130 = 5773062LLU;

    t130 = ((x521&(x522==x523))&x524);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x526 = INT64_MAX;
	int8_t x528 = INT8_MIN;
	int32_t t131 = -19636901;

    t131 = ((x525&(x526==x527))&x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint8_t x529 = 3U;
	int16_t x531 = -1;
	int64_t x532 = INT64_MAX;
	int64_t t132 = -2664123327LL;

    t132 = ((x529&(x530==x531))&x532);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile uint32_t x533 = 7383640U;
	static int16_t x534 = INT16_MIN;
	int64_t x535 = -1LL;
	int8_t x536 = INT8_MIN;

    t133 = ((x533&(x534==x535))&x536);

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x537 = 1U;
	int16_t x538 = -4826;
	volatile int64_t x539 = INT64_MIN;
	int16_t x540 = INT16_MAX;

    t134 = ((x537&(x538==x539))&x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = INT16_MIN;
	int16_t x544 = 18;

    t135 = ((x541&(x542==x543))&x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x545 = -1;
	int32_t x546 = INT32_MAX;
	uint64_t x547 = 1366071955520872036LLU;
	int32_t t136 = 27;

    t136 = ((x545&(x546==x547))&x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x549 = INT32_MIN;
	int16_t x550 = -12415;
	uint64_t x551 = 15707606LLU;
	int16_t x552 = 63;
	volatile int32_t t137 = 74094202;

    t137 = ((x549&(x550==x551))&x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = -1;
	int8_t x554 = INT8_MAX;
	uint64_t x555 = 452LLU;

    t138 = ((x553&(x554==x555))&x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x557 = UINT64_MAX;
	int32_t x558 = INT32_MIN;
	static int16_t x559 = 91;
	static volatile int16_t x560 = INT16_MIN;

    t139 = ((x557&(x558==x559))&x560);

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x561 = -1;
	int32_t x562 = INT32_MAX;
	static int32_t x563 = INT32_MAX;
	uint16_t x564 = UINT16_MAX;
	int32_t t140 = 258309;

    t140 = ((x561&(x562==x563))&x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x565 = 15037499030331855LL;
	int32_t x566 = INT32_MAX;
	int8_t x567 = INT8_MIN;
	int64_t x568 = 5848161536165581LL;

    t141 = ((x565&(x566==x567))&x568);

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x569 = INT8_MIN;
	static int64_t x570 = INT64_MAX;
	static int16_t x572 = 53;
	volatile int32_t t142 = 1073062;

    t142 = ((x569&(x570==x571))&x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = INT16_MIN;
	uint64_t x576 = UINT64_MAX;
	static uint64_t t143 = 524288743113897LLU;

    t143 = ((x573&(x574==x575))&x576);

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x577 = 6U;
	int8_t x579 = INT8_MIN;
	volatile uint64_t t144 = 20076388970LLU;

    t144 = ((x577&(x578==x579))&x580);

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = -1;
	static uint64_t x582 = 23175693LLU;
	static int64_t x583 = INT64_MAX;
	static int8_t x584 = INT8_MAX;
	static int32_t t145 = -300881298;

    t145 = ((x581&(x582==x583))&x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x585 = 30913597U;
	uint64_t x586 = UINT64_MAX;
	int64_t x587 = -1LL;
	volatile int64_t x588 = -2249305756LL;
	volatile int64_t t146 = 187588755817LL;

    t146 = ((x585&(x586==x587))&x588);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = INT8_MIN;
	int8_t x590 = 0;
	uint16_t x591 = 604U;
	static uint64_t x592 = 716489651585LLU;
	volatile uint64_t t147 = 70773LLU;

    t147 = ((x589&(x590==x591))&x592);

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = 14107;
	int32_t x594 = -17169158;
	int16_t x595 = -1;
	volatile int32_t t148 = 2371;

    t148 = ((x593&(x594==x595))&x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = 456602075240516LL;
	volatile int64_t x599 = 4597004875281301485LL;
	int64_t t149 = 144430916LL;

    t149 = ((x597&(x598==x599))&x600);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x601 = 160U;
	int8_t x603 = INT8_MAX;
	uint64_t x604 = 183918LLU;
	uint64_t t150 = 4LLU;

    t150 = ((x601&(x602==x603))&x604);

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MAX;
	volatile uint32_t x606 = UINT32_MAX;
	int16_t x607 = INT16_MIN;
	static int64_t x608 = INT64_MAX;
	static volatile int64_t t151 = -1859937846504LL;

    t151 = ((x605&(x606==x607))&x608);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = INT64_MAX;
	volatile uint8_t x611 = 5U;
	static uint32_t x612 = UINT32_MAX;

    t152 = ((x609&(x610==x611))&x612);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x614 = UINT8_MAX;
	volatile int64_t x615 = INT64_MAX;
	volatile int32_t t153 = -3297;

    t153 = ((x613&(x614==x615))&x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x617 = INT8_MIN;
	int64_t x618 = INT64_MIN;
	int16_t x619 = -1;
	volatile uint16_t x620 = UINT16_MAX;
	static int32_t t154 = 664672363;

    t154 = ((x617&(x618==x619))&x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = INT64_MAX;
	volatile int16_t x622 = -15171;
	int32_t x624 = INT32_MIN;
	static volatile int64_t t155 = -179LL;

    t155 = ((x621&(x622==x623))&x624);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x625 = INT64_MIN;
	uint64_t x626 = UINT64_MAX;
	int8_t x627 = -7;
	volatile uint16_t x628 = 631U;
	static volatile int64_t t156 = -1386LL;

    t156 = ((x625&(x626==x627))&x628);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = -10525224273755340LL;
	uint64_t x630 = 491535LLU;
	int64_t x631 = INT64_MAX;
	int16_t x632 = -205;
	volatile int64_t t157 = 129127426333LL;

    t157 = ((x629&(x630==x631))&x632);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int8_t x633 = INT8_MAX;
	static uint64_t x634 = 24600724311LLU;
	int64_t x635 = -22657LL;
	static int32_t x636 = INT32_MIN;
	volatile int32_t t158 = 457267557;

    t158 = ((x633&(x634==x635))&x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x637 = 2226765355356966107LLU;
	uint64_t x640 = UINT64_MAX;

    t159 = ((x637&(x638==x639))&x640);

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x642 = INT8_MIN;
	int8_t x643 = 0;
	volatile int64_t x644 = -1LL;
	static volatile uint64_t t160 = 281LLU;

    t160 = ((x641&(x642==x643))&x644);

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = -16;
	uint32_t x646 = 120U;
	uint64_t x647 = UINT64_MAX;
	static int32_t t161 = 9660884;

    t161 = ((x645&(x646==x647))&x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = INT64_MIN;
	volatile int8_t x650 = -26;
	static int32_t x651 = -8;
	int32_t x652 = INT32_MIN;
	int64_t t162 = 33146110955090LL;

    t162 = ((x649&(x650==x651))&x652);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x654 = -1;
	int32_t x655 = -1421650;
	int8_t x656 = INT8_MAX;

    t163 = ((x653&(x654==x655))&x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = -3;
	int32_t x658 = -577;
	volatile int16_t x659 = 35;
	int64_t x660 = INT64_MIN;
	int64_t t164 = -1377450211LL;

    t164 = ((x657&(x658==x659))&x660);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x661 = INT64_MIN;
	int32_t x662 = INT32_MAX;
	uint16_t x663 = 0U;
	uint64_t x664 = 114945424857228LLU;
	volatile uint64_t t165 = 1482785553146490LLU;

    t165 = ((x661&(x662==x663))&x664);

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x667 = INT8_MIN;
	int8_t x668 = INT8_MAX;
	int32_t t166 = 1082109;

    t166 = ((x665&(x666==x667))&x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint16_t x669 = 20U;
	int16_t x670 = INT16_MIN;
	static int8_t x671 = INT8_MIN;
	int32_t t167 = 67763945;

    t167 = ((x669&(x670==x671))&x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = INT32_MIN;
	uint32_t x674 = 3889454U;
	int32_t x675 = 12;
	uint8_t x676 = 29U;
	volatile int32_t t168 = -4;

    t168 = ((x673&(x674==x675))&x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = INT16_MIN;
	volatile uint8_t x678 = UINT8_MAX;
	static int8_t x679 = -1;
	uint8_t x680 = 5U;
	int32_t t169 = 454511;

    t169 = ((x677&(x678==x679))&x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = -12;
	static int16_t x683 = 1619;
	int64_t x684 = INT64_MIN;

    t170 = ((x681&(x682==x683))&x684);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x685 = -186575;
	static int16_t x686 = INT16_MIN;
	uint16_t x688 = 531U;

    t171 = ((x685&(x686==x687))&x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = 2852349;
	int16_t x690 = INT16_MIN;
	int32_t x691 = -1;
	uint64_t x692 = 130321022LLU;

    t172 = ((x689&(x690==x691))&x692);

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = -1LL;
	int32_t x694 = INT32_MIN;
	int16_t x695 = INT16_MAX;
	int8_t x696 = 1;

    t173 = ((x693&(x694==x695))&x696);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = 4334313;
	uint64_t x698 = 0LLU;
	int32_t t174 = 23;

    t174 = ((x697&(x698==x699))&x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x701 = INT32_MAX;
	int16_t x702 = -1;
	static int32_t t175 = -2;

    t175 = ((x701&(x702==x703))&x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x705 = 427U;
	uint64_t x706 = 121417999291949494LLU;
	static volatile int16_t x707 = INT16_MAX;
	int32_t t176 = 9;

    t176 = ((x705&(x706==x707))&x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = -1;
	static int64_t x711 = INT64_MIN;
	int32_t x712 = 57579565;
	volatile int32_t t177 = 78;

    t177 = ((x709&(x710==x711))&x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = 1LL;
	int64_t x714 = -3836667008400224819LL;
	static volatile uint32_t x715 = 17994U;
	uint16_t x716 = 70U;
	int64_t t178 = -1090824811698968058LL;

    t178 = ((x713&(x714==x715))&x716);

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x718 = INT16_MIN;
	volatile int16_t x719 = INT16_MIN;
	int32_t t179 = -24719012;

    t179 = ((x717&(x718==x719))&x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = -1;
	uint32_t x722 = UINT32_MAX;
	static volatile uint32_t x723 = 370321U;
	int64_t x724 = INT64_MIN;
	int64_t t180 = 123LL;

    t180 = ((x721&(x722==x723))&x724);

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = -1;
	static int8_t x727 = INT8_MIN;
	volatile uint16_t x728 = UINT16_MAX;

    t181 = ((x725&(x726==x727))&x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int8_t x729 = INT8_MAX;
	static uint16_t x730 = 7705U;
	uint32_t x731 = 258992U;
	uint32_t x732 = UINT32_MAX;
	static uint32_t t182 = 226U;

    t182 = ((x729&(x730==x731))&x732);

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x734 = -78020361935657LL;
	static int64_t x735 = 231781LL;
	uint64_t x736 = 316LLU;
	uint64_t t183 = 2662642371059LLU;

    t183 = ((x733&(x734==x735))&x736);

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x737 = INT8_MAX;
	static uint32_t x739 = 28206017U;
	int32_t x740 = 1250;
	volatile int32_t t184 = 3205;

    t184 = ((x737&(x738==x739))&x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = INT8_MIN;
	volatile uint8_t x743 = 3U;
	int64_t x744 = -1LL;
	volatile int64_t t185 = -2603970464921291LL;

    t185 = ((x741&(x742==x743))&x744);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = 1;
	volatile int16_t x746 = -12;
	int32_t x747 = 17128907;
	static int16_t x748 = INT16_MIN;
	int32_t t186 = -550;

    t186 = ((x745&(x746==x747))&x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = INT64_MAX;
	int16_t x750 = -1;
	static int64_t x751 = -2347312638122369333LL;
	uint32_t x752 = 2018U;
	volatile int64_t t187 = 154342987278179414LL;

    t187 = ((x749&(x750==x751))&x752);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = INT8_MIN;
	int16_t x755 = INT16_MIN;
	uint32_t x756 = 4083696U;
	volatile uint32_t t188 = 23U;

    t188 = ((x753&(x754==x755))&x756);

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x757 = 22458U;
	uint8_t x759 = 4U;
	int16_t x760 = -1;
	static volatile uint32_t t189 = 1U;

    t189 = ((x757&(x758==x759))&x760);

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x761 = INT64_MIN;
	static uint16_t x762 = UINT16_MAX;
	int8_t x763 = -9;
	volatile int64_t t190 = 41043541114066154LL;

    t190 = ((x761&(x762==x763))&x764);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = INT16_MIN;
	static uint8_t x768 = 57U;
	int32_t t191 = 47424;

    t191 = ((x765&(x766==x767))&x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x769 = UINT64_MAX;
	int8_t x770 = INT8_MIN;
	static int64_t x772 = INT64_MIN;
	static volatile uint64_t t192 = 949LLU;

    t192 = ((x769&(x770==x771))&x772);

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x773 = UINT32_MAX;
	volatile int64_t x774 = INT64_MIN;
	volatile int32_t x775 = -1;
	volatile uint64_t x776 = UINT64_MAX;
	volatile uint64_t t193 = 130589LLU;

    t193 = ((x773&(x774==x775))&x776);

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile uint8_t x777 = UINT8_MAX;
	int64_t x778 = -3253426431LL;
	int16_t x779 = INT16_MAX;

    t194 = ((x777&(x778==x779))&x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x782 = INT8_MIN;
	static uint64_t x783 = 15LLU;
	uint8_t x784 = 66U;
	int32_t t195 = -951765195;

    t195 = ((x781&(x782==x783))&x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = INT8_MAX;
	int16_t x786 = -245;
	int64_t x787 = -76601191629LL;
	int16_t x788 = INT16_MAX;
	volatile int32_t t196 = 117;

    t196 = ((x785&(x786==x787))&x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = INT64_MIN;
	int16_t x790 = -23;
	int32_t x791 = INT32_MAX;
	int64_t t197 = 4643LL;

    t197 = ((x789&(x790==x791))&x792);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int32_t x793 = INT32_MIN;
	uint8_t x796 = UINT8_MAX;
	static int32_t t198 = 3465;

    t198 = ((x793&(x794==x795))&x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint32_t x797 = UINT32_MAX;
	uint64_t x798 = UINT64_MAX;
	uint8_t x799 = 4U;
	int64_t x800 = -2966187732224LL;

    t199 = ((x797&(x798==x799))&x800);

    if (t199 != 0LL) { NG(); } else { ; }
	
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

