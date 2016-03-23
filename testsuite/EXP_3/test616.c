
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

static uint16_t x1 = 18U;
int8_t x4 = 4;
uint16_t x7 = 117U;
int32_t x12 = -1;
volatile int32_t t2 = -1;
int32_t x14 = INT32_MIN;
static int64_t x16 = INT64_MAX;
int32_t x37 = -33419769;
int16_t x40 = -1;
volatile uint64_t t8 = 1773LLU;
int32_t x47 = INT32_MIN;
volatile int32_t x48 = 13496;
uint64_t x56 = 24237LLU;
int64_t x64 = 7569409LL;
static volatile int8_t x82 = INT8_MAX;
static volatile uint64_t t18 = 103824983993LLU;
uint64_t x86 = 41840LLU;
uint16_t x94 = UINT16_MAX;
int8_t x98 = INT8_MIN;
uint32_t x117 = 17125841U;
int8_t x119 = INT8_MIN;
uint32_t x133 = 603022309U;
volatile int8_t x136 = INT8_MIN;
volatile uint32_t t28 = 101U;
uint32_t x141 = UINT32_MAX;
int8_t x144 = INT8_MIN;
volatile uint16_t x148 = 5U;
uint64_t t32 = 15443358474967288LLU;
int32_t x158 = -1;
uint64_t t34 = 91812785416195LLU;
uint32_t x169 = 323040837U;
static int8_t x177 = INT8_MAX;
int8_t x186 = -1;
volatile int32_t t38 = 114878623;
int64_t x194 = -81LL;
int32_t x195 = 2260551;
int32_t x199 = INT32_MIN;
volatile uint32_t t41 = 84U;
volatile int32_t x213 = 1;
static int8_t x217 = INT8_MIN;
int64_t x228 = INT64_MAX;
uint64_t x233 = UINT64_MAX;
uint8_t x235 = 71U;
uint64_t x239 = UINT64_MAX;
int8_t x244 = INT8_MIN;
volatile int64_t t51 = 1LL;
int64_t x251 = INT64_MAX;
uint16_t x257 = 599U;
static int16_t x264 = INT16_MIN;
volatile int64_t x267 = -155825545LL;
int64_t t56 = -67920114LL;
int16_t x270 = INT16_MIN;
volatile uint8_t x273 = UINT8_MAX;
int16_t x276 = INT16_MIN;
int16_t x278 = 28;
uint8_t x285 = UINT8_MAX;
volatile uint64_t x286 = 129459211LLU;
uint64_t t60 = 16639377086971772LLU;
int16_t x295 = -1;
volatile uint32_t t62 = 522909803U;
volatile uint16_t x297 = UINT16_MAX;
static uint64_t x300 = 6481489429355248853LLU;
int16_t x301 = INT16_MAX;
int8_t x302 = INT8_MIN;
int8_t x308 = INT8_MIN;
uint16_t x309 = UINT16_MAX;
int32_t x310 = -1;
int16_t x314 = 9808;
volatile int8_t x317 = INT8_MAX;
static volatile int16_t x319 = INT16_MIN;
int8_t x320 = INT8_MIN;
int16_t x336 = INT16_MIN;
int8_t x338 = INT8_MAX;
int8_t x342 = -1;
static int8_t x344 = INT8_MAX;
uint64_t x345 = 8116692308552342935LLU;
uint64_t x361 = UINT64_MAX;
volatile uint16_t x373 = 12823U;
uint64_t x376 = UINT64_MAX;
uint64_t t80 = 129227687LLU;
static volatile uint16_t x382 = 16674U;
volatile uint32_t x389 = 1996U;
uint32_t x416 = UINT32_MAX;
int8_t x424 = INT8_MAX;
static int8_t x427 = INT8_MAX;
volatile uint64_t x429 = 2044388043581759509LLU;
uint16_t x432 = 4U;
int32_t x435 = 129076;
int64_t x436 = INT64_MAX;
static volatile int32_t x443 = 4120;
static int16_t x444 = INT16_MAX;
int32_t x446 = -1;
int32_t t96 = -819;
static int16_t x454 = 17;
volatile int32_t x471 = INT32_MIN;
static int32_t x472 = 14508;
static volatile int32_t t101 = 28317986;
int64_t x475 = INT64_MAX;
uint64_t x477 = 3090792LLU;
static int32_t x479 = -1;
uint64_t x480 = UINT64_MAX;
int8_t x486 = INT8_MIN;
uint32_t x491 = 1452841U;
volatile int8_t x492 = -27;
volatile uint32_t t106 = 1783883U;
int32_t x505 = 11882;
static int8_t x513 = -1;
uint64_t x514 = 126LLU;
int8_t x516 = INT8_MAX;
int8_t x535 = -2;
volatile int8_t x536 = INT8_MIN;
static volatile int8_t x540 = 34;
static uint16_t x541 = 885U;
static uint32_t t120 = 3U;
volatile int32_t x553 = -142073862;
int16_t x555 = -1;
uint64_t x558 = 886229581LLU;
static volatile uint8_t x560 = 6U;
uint64_t x565 = UINT64_MAX;
static uint32_t x567 = 34U;
volatile int32_t x579 = 0;
static volatile int64_t t128 = -1646784421765091LL;
static int32_t t129 = 1;
volatile uint64_t t131 = 907761LLU;
int64_t x607 = 46868022821790LL;
int16_t x615 = -2651;
int32_t x616 = INT32_MIN;
uint32_t t134 = 10U;
static volatile uint64_t t135 = 29419126980862LLU;
uint8_t x622 = 0U;
static volatile int64_t t137 = 546838LL;
uint8_t x634 = 0U;
volatile int8_t x635 = INT8_MAX;
uint32_t x636 = 5598468U;
uint64_t x638 = 61278099LLU;
volatile uint8_t x640 = UINT8_MAX;
static volatile int64_t x651 = -8120LL;
volatile int64_t x653 = INT64_MAX;
int32_t x662 = INT32_MAX;
int32_t x670 = -1;
static uint64_t x674 = 532784888453471LLU;
int16_t x675 = -13216;
static int16_t x676 = INT16_MIN;
static uint64_t x691 = 177150035LLU;
uint8_t x692 = 7U;
static uint8_t x694 = 7U;
int8_t x696 = INT8_MIN;
int32_t x701 = -1;
uint8_t x702 = UINT8_MAX;
int64_t t152 = 1884059614444LL;
uint32_t x706 = 10U;
static int16_t x708 = -1;
int8_t x709 = INT8_MAX;
int32_t t154 = -455661;
int32_t x713 = INT32_MAX;
int16_t x723 = INT16_MAX;
static int64_t x724 = -1LL;
volatile int64_t t156 = -603340229957682LL;
int16_t x728 = INT16_MIN;
static uint64_t x729 = 908158LLU;
int8_t x730 = -1;
static int16_t x732 = INT16_MIN;
volatile int32_t t159 = 3;
uint32_t x737 = UINT32_MAX;
int64_t t160 = -11224002461246LL;
volatile int64_t x742 = 990602638489LL;
volatile uint32_t x743 = 8338612U;
int32_t x767 = INT32_MIN;
int64_t t166 = -10894031459150008LL;
uint64_t x777 = UINT64_MAX;
int16_t x787 = -1;
int8_t x792 = -1;
int8_t x802 = INT8_MIN;
int32_t x810 = -19773;
int32_t x812 = INT32_MIN;
uint16_t x819 = 10341U;
static int64_t x828 = 132525667LL;
uint8_t x832 = UINT8_MAX;
volatile int32_t t179 = -120;
volatile uint64_t t180 = 224920LLU;
int32_t x842 = 21;
static int32_t x857 = -18360;
static volatile uint32_t x858 = 1038U;
uint32_t x860 = 1570U;
int16_t x862 = INT16_MAX;
int8_t x864 = INT8_MIN;
uint64_t x866 = 2144929225921638LLU;
int32_t x869 = -1;
int64_t t189 = 119LL;
int32_t x887 = INT32_MIN;
volatile int32_t x890 = 119;
int32_t x892 = -1;
volatile int16_t x906 = -1;
int8_t x907 = INT8_MIN;
volatile int64_t x914 = 2LL;
volatile uint8_t x916 = UINT8_MAX;


void f0(void) {
    	int8_t x2 = 7;
	int32_t x3 = INT32_MIN;
	int32_t t0 = 839378;

    t0 = ((x1-x2)^(x3/x4));

    if (t0 != -536870901) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = INT16_MAX;
	uint64_t x6 = UINT64_MAX;
	int64_t x8 = INT64_MIN;
	uint64_t t1 = 59467836774LLU;

    t1 = ((x5-x6)^(x7/x8));

    if (t1 != 32768LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = INT32_MIN;
	volatile int8_t x10 = INT8_MIN;
	int8_t x11 = -1;

    t2 = ((x9-x10)^(x11/x12));

    if (t2 != -2147483519) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = -161719904;
	static uint64_t x15 = 136848088602LLU;
	volatile uint64_t t3 = 27430298413814651LLU;

    t3 = ((x13-x14)^(x15/x16));

    if (t3 != 1985763744LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = UINT64_MAX;
	static int16_t x18 = -1;
	static int64_t x19 = INT64_MAX;
	int64_t x20 = 7361LL;
	volatile uint64_t t4 = 14LLU;

    t4 = ((x17-x18)^(x19/x20));

    if (t4 != 1253005303199942LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -1;
	volatile int8_t x22 = 1;
	int64_t x23 = -1LL;
	uint8_t x24 = UINT8_MAX;
	int64_t t5 = -4773600746108LL;

    t5 = ((x21-x22)^(x23/x24));

    if (t5 != -2LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x25 = INT64_MIN;
	volatile int32_t x26 = -279594;
	uint16_t x27 = UINT16_MAX;
	uint32_t x28 = 10U;
	int64_t t6 = -2573476LL;

    t6 = ((x25-x26)^(x27/x28));

    if (t6 != -9223372036854489677LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = UINT64_MAX;
	int16_t x30 = 3765;
	static int32_t x31 = INT32_MIN;
	int32_t x32 = -16480733;
	static uint64_t t7 = 121729657436LLU;

    t7 = ((x29-x30)^(x31/x32));

    if (t7 != 18446744073709547976LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x38 = 2953933448287LLU;
	int32_t x39 = -1;

    t8 = ((x37-x38)^(x39/x40));

    if (t8 != 18446741119742683561LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x41 = 3464937LL;
	int32_t x42 = -2;
	uint16_t x43 = 0U;
	int16_t x44 = INT16_MAX;
	static volatile int64_t t9 = -131852029539LL;

    t9 = ((x41-x42)^(x43/x44));

    if (t9 != 3464939LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x45 = 60679;
	int8_t x46 = INT8_MAX;
	volatile int32_t t10 = -785088250;

    t10 = ((x45-x46)^(x47/x48));

    if (t10 != -164104) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x49 = 1U;
	static uint64_t x50 = 278LLU;
	static uint8_t x51 = UINT8_MAX;
	volatile int8_t x52 = -1;
	volatile uint64_t t11 = 13289332794LLU;

    t11 = ((x49-x50)^(x51/x52));

    if (t11 != 490LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int8_t x53 = INT8_MAX;
	int16_t x54 = -1;
	static int16_t x55 = -1;
	volatile uint64_t t12 = 24LLU;

    t12 = ((x53-x54)^(x55/x56));

    if (t12 != 761098488827522LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x57 = 63U;
	int8_t x58 = INT8_MAX;
	int8_t x59 = -5;
	int16_t x60 = -566;
	volatile int32_t t13 = -247;

    t13 = ((x57-x58)^(x59/x60));

    if (t13 != -64) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x61 = -1;
	uint8_t x62 = 2U;
	int64_t x63 = -1LL;
	int64_t t14 = 288598885LL;

    t14 = ((x61-x62)^(x63/x64));

    if (t14 != -3LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x65 = INT64_MIN;
	int8_t x66 = -1;
	volatile int16_t x67 = INT16_MAX;
	uint32_t x68 = UINT32_MAX;
	static volatile int64_t t15 = 299280088LL;

    t15 = ((x65-x66)^(x67/x68));

    if (t15 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x69 = 2579;
	static volatile uint8_t x70 = 8U;
	volatile uint64_t x71 = UINT64_MAX;
	volatile int64_t x72 = INT64_MIN;
	static uint64_t t16 = 21944884LLU;

    t16 = ((x69-x70)^(x71/x72));

    if (t16 != 2570LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x77 = -1;
	int32_t x78 = -1;
	uint16_t x79 = 7590U;
	int16_t x80 = -1;
	int32_t t17 = -8129;

    t17 = ((x77-x78)^(x79/x80));

    if (t17 != -7590) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x81 = 4044659700LLU;
	static int16_t x83 = INT16_MIN;
	int32_t x84 = INT32_MAX;

    t18 = ((x81-x82)^(x83/x84));

    if (t18 != 4044659573LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x85 = 194;
	uint8_t x87 = 12U;
	int16_t x88 = 509;
	uint64_t t19 = 16LLU;

    t19 = ((x85-x86)^(x87/x88));

    if (t19 != 18446744073709509970LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x93 = 52;
	int32_t x95 = INT32_MAX;
	int64_t x96 = INT64_MIN;
	volatile int64_t t20 = -103763511714993267LL;

    t20 = ((x93-x94)^(x95/x96));

    if (t20 != -65483LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x97 = INT16_MIN;
	int64_t x99 = INT64_MIN;
	int8_t x100 = 11;
	int64_t t21 = 439LL;

    t21 = ((x97-x98)^(x99/x100));

    if (t21 != 838488366986812824LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x113 = INT32_MIN;
	uint32_t x114 = 260663813U;
	static uint32_t x115 = 2336U;
	int8_t x116 = INT8_MIN;
	uint32_t t22 = 2U;

    t22 = ((x113-x114)^(x115/x116));

    if (t22 != 1886819835U) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x118 = -1;
	int8_t x120 = INT8_MIN;
	static uint32_t t23 = 11161149U;

    t23 = ((x117-x118)^(x119/x120));

    if (t23 != 17125843U) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int32_t x121 = -1;
	int64_t x122 = 7031312LL;
	static uint64_t x123 = 938784398333LLU;
	int64_t x124 = INT64_MIN;
	static uint64_t t24 = 14306LLU;

    t24 = ((x121-x122)^(x123/x124));

    if (t24 != 18446744073702520303LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x125 = INT16_MAX;
	static volatile uint8_t x126 = 81U;
	int32_t x127 = 1074;
	uint64_t x128 = 252112153906360LLU;
	volatile uint64_t t25 = 413103LLU;

    t25 = ((x125-x126)^(x127/x128));

    if (t25 != 32686LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x129 = 5U;
	volatile int16_t x130 = -12;
	uint64_t x131 = 312463178LLU;
	int16_t x132 = -1;
	uint64_t t26 = 1097391LLU;

    t26 = ((x129-x130)^(x131/x132));

    if (t26 != 17LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x134 = -1;
	uint16_t x135 = UINT16_MAX;
	uint32_t t27 = 8280449U;

    t27 = ((x133-x134)^(x135/x136));

    if (t27 != 3691945447U) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x137 = -1;
	uint16_t x138 = 4357U;
	static volatile int16_t x139 = INT16_MIN;
	static uint32_t x140 = 29417907U;

    t28 = ((x137-x138)^(x139/x140));

    if (t28 != 4294962795U) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x142 = INT8_MAX;
	static volatile int8_t x143 = -1;
	uint32_t t29 = 1980U;

    t29 = ((x141-x142)^(x143/x144));

    if (t29 != 4294967168U) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x145 = INT64_MIN;
	int64_t x146 = -1LL;
	static int8_t x147 = INT8_MIN;
	volatile int64_t t30 = 245015374340779LL;

    t30 = ((x145-x146)^(x147/x148));

    if (t30 != 9223372036854775782LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x149 = -418219597630082328LL;
	static int64_t x150 = INT64_MIN;
	volatile int8_t x151 = -1;
	int8_t x152 = INT8_MIN;
	int64_t t31 = -57405528LL;

    t31 = ((x149-x150)^(x151/x152));

    if (t31 != 8805152439224693480LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x153 = 13946U;
	uint8_t x154 = 7U;
	int32_t x155 = -1;
	volatile uint64_t x156 = UINT64_MAX;

    t32 = ((x153-x154)^(x155/x156));

    if (t32 != 13938LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x157 = 31866403;
	int8_t x159 = 1;
	int16_t x160 = -2911;
	int32_t t33 = 21;

    t33 = ((x157-x158)^(x159/x160));

    if (t33 != 31866404) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x165 = 618635218928383LLU;
	volatile int32_t x166 = INT32_MAX;
	uint8_t x167 = UINT8_MAX;
	int32_t x168 = 989;

    t34 = ((x165-x166)^(x167/x168));

    if (t34 != 618633071444736LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x170 = 58539U;
	uint64_t x171 = 450897150540536LLU;
	int64_t x172 = INT64_MAX;
	uint64_t t35 = 3LLU;

    t35 = ((x169-x170)^(x171/x172));

    if (t35 != 322982298LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x173 = -2951774;
	volatile int8_t x174 = 1;
	int64_t x175 = INT64_MIN;
	volatile int16_t x176 = INT16_MIN;
	int64_t t36 = -2LL;

    t36 = ((x173-x174)^(x175/x176));

    if (t36 != -281474979662431LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x178 = 4893U;
	volatile uint16_t x179 = 7U;
	int32_t x180 = 31;
	int32_t t37 = -122453;

    t37 = ((x177-x178)^(x179/x180));

    if (t37 != -4766) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x185 = INT32_MIN;
	int32_t x187 = 15683351;
	volatile int32_t x188 = INT32_MIN;

    t38 = ((x185-x186)^(x187/x188));

    if (t38 != -2147483647) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x193 = UINT64_MAX;
	uint16_t x196 = 2U;
	static volatile uint64_t t39 = 263200854154747LLU;

    t39 = ((x193-x194)^(x195/x196));

    if (t39 != 1130355LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x197 = 2672786142474LLU;
	uint16_t x198 = 434U;
	int64_t x200 = 41303283LL;
	volatile uint64_t t40 = 666036943117LLU;

    t40 = ((x197-x198)^(x199/x200));

    if (t40 != 18446741400923409557LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x201 = 9;
	uint32_t x202 = 4514U;
	int32_t x203 = INT32_MIN;
	uint32_t x204 = 246428245U;

    t41 = ((x201-x202)^(x203/x204));

    if (t41 != 4294962799U) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x205 = 1;
	int64_t x206 = INT64_MAX;
	volatile uint32_t x207 = 2133776901U;
	volatile int32_t x208 = INT32_MAX;
	volatile int64_t t42 = -2LL;

    t42 = ((x205-x206)^(x207/x208));

    if (t42 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x209 = INT32_MIN;
	int8_t x210 = -1;
	int64_t x211 = INT64_MAX;
	volatile int32_t x212 = INT32_MAX;
	int64_t t43 = -5518LL;

    t43 = ((x209-x210)^(x211/x212));

    if (t43 != -6442450941LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x214 = -1;
	static uint64_t x215 = 0LLU;
	int32_t x216 = 12863924;
	volatile uint64_t t44 = 3539748600180LLU;

    t44 = ((x213-x214)^(x215/x216));

    if (t44 != 2LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x218 = -1LL;
	int16_t x219 = 3073;
	int64_t x220 = -13424005498100LL;
	volatile int64_t t45 = 16787LL;

    t45 = ((x217-x218)^(x219/x220));

    if (t45 != -127LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x221 = INT32_MIN;
	volatile uint32_t x222 = UINT32_MAX;
	int64_t x223 = -1LL;
	int16_t x224 = -1;
	int64_t t46 = -964693183162584LL;

    t46 = ((x221-x222)^(x223/x224));

    if (t46 != 2147483648LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x225 = INT8_MAX;
	int16_t x226 = 1;
	volatile int64_t x227 = 8LL;
	volatile int64_t t47 = 10996564827891035LL;

    t47 = ((x225-x226)^(x227/x228));

    if (t47 != 126LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x234 = UINT8_MAX;
	static uint32_t x236 = UINT32_MAX;
	static uint64_t t48 = 515432859496145597LLU;

    t48 = ((x233-x234)^(x235/x236));

    if (t48 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x237 = 12028410U;
	volatile int8_t x238 = 11;
	uint16_t x240 = 4U;
	volatile uint64_t t49 = 353LLU;

    t49 = ((x237-x238)^(x239/x240));

    if (t49 != 4611686018415359504LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x241 = -8727392771017LL;
	static int32_t x242 = -1;
	volatile uint16_t x243 = 658U;
	volatile int64_t t50 = -147916LL;

    t50 = ((x241-x242)^(x243/x244));

    if (t50 != 8727392771011LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x245 = 0;
	int8_t x246 = INT8_MAX;
	static uint32_t x247 = 33253U;
	int64_t x248 = -414309294LL;

    t51 = ((x245-x246)^(x247/x248));

    if (t51 != -127LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x249 = -1LL;
	static volatile int64_t x250 = -3164958516744068LL;
	static volatile int32_t x252 = INT32_MIN;
	int64_t t52 = -2890LL;

    t52 = ((x249-x250)^(x251/x252));

    if (t52 != -3164959989133438LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x253 = -1;
	int64_t x254 = INT64_MIN;
	int32_t x255 = INT32_MIN;
	int16_t x256 = -1039;
	volatile int64_t t53 = 2606LL;

    t53 = ((x253-x254)^(x255/x256));

    if (t53 != 9223372036852708932LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x258 = UINT64_MAX;
	volatile int32_t x259 = 1568210;
	uint16_t x260 = UINT16_MAX;
	uint64_t t54 = 7001LLU;

    t54 = ((x257-x258)^(x259/x260));

    if (t54 != 591LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x261 = 4U;
	int64_t x262 = 501085LL;
	uint8_t x263 = 5U;
	static int64_t t55 = -355222603834LL;

    t55 = ((x261-x262)^(x263/x264));

    if (t55 != -501081LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x265 = -1;
	uint32_t x266 = 126047095U;
	volatile int64_t x268 = INT64_MAX;

    t56 = ((x265-x266)^(x267/x268));

    if (t56 != 4168920200LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint16_t x269 = 1301U;
	uint32_t x271 = 14404U;
	static volatile int32_t x272 = 49253617;
	volatile uint32_t t57 = 7U;

    t57 = ((x269-x270)^(x271/x272));

    if (t57 != 34069U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x274 = 80U;
	int8_t x275 = INT8_MIN;
	int32_t t58 = -221678154;

    t58 = ((x273-x274)^(x275/x276));

    if (t58 != 175) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x277 = INT32_MAX;
	int8_t x279 = -1;
	int64_t x280 = 1648682LL;
	int64_t t59 = -14369LL;

    t59 = ((x277-x278)^(x279/x280));

    if (t59 != 2147483619LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x287 = -3637449869822284LL;
	static volatile int64_t x288 = -1LL;

    t60 = ((x285-x286)^(x287/x288));

    if (t60 != 18443106623815259576LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x289 = INT32_MIN;
	int64_t x290 = -1LL;
	int16_t x291 = INT16_MIN;
	int16_t x292 = INT16_MIN;
	int64_t t61 = 17686711187LL;

    t61 = ((x289-x290)^(x291/x292));

    if (t61 != -2147483648LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x293 = INT8_MAX;
	static int16_t x294 = INT16_MIN;
	static volatile uint32_t x296 = UINT32_MAX;

    t62 = ((x293-x294)^(x295/x296));

    if (t62 != 32894U) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x298 = 89;
	volatile int32_t x299 = 3;
	static volatile uint64_t t63 = 173039LLU;

    t63 = ((x297-x298)^(x299/x300));

    if (t63 != 65446LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x303 = 2389769;
	int16_t x304 = 4745;
	volatile int32_t t64 = 86;

    t64 = ((x301-x302)^(x303/x304));

    if (t64 != 33160) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x305 = UINT64_MAX;
	static uint64_t x306 = UINT64_MAX;
	int16_t x307 = -1;
	uint64_t t65 = 18259LLU;

    t65 = ((x305-x306)^(x307/x308));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x311 = 7471;
	static int8_t x312 = INT8_MIN;
	volatile int32_t t66 = -86646;

    t66 = ((x309-x310)^(x311/x312));

    if (t66 != -65594) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x313 = INT64_MAX;
	volatile int8_t x315 = INT8_MIN;
	static volatile int16_t x316 = INT16_MIN;
	volatile int64_t t67 = -25836700354265937LL;

    t67 = ((x313-x314)^(x315/x316));

    if (t67 != 9223372036854765999LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x318 = 3U;
	volatile int32_t t68 = 7;

    t68 = ((x317-x318)^(x319/x320));

    if (t68 != 380) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x321 = 13U;
	static int32_t x322 = INT32_MIN;
	uint8_t x323 = UINT8_MAX;
	volatile int16_t x324 = INT16_MIN;
	volatile uint32_t t69 = 154156U;

    t69 = ((x321-x322)^(x323/x324));

    if (t69 != 2147483661U) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x333 = -46;
	int32_t x334 = INT32_MIN;
	static int64_t x335 = INT64_MIN;
	int64_t t70 = 510382160400610903LL;

    t70 = ((x333-x334)^(x335/x336));

    if (t70 != 281477124194258LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x337 = INT8_MIN;
	static volatile int16_t x339 = INT16_MAX;
	uint8_t x340 = 29U;
	int32_t t71 = 0;

    t71 = ((x337-x338)^(x339/x340));

    if (t71 != -1176) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x341 = 1U;
	int64_t x343 = 30973174927744LL;
	int64_t t72 = -1448478028796204LL;

    t72 = ((x341-x342)^(x343/x344));

    if (t72 != 243883267145LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t x346 = UINT32_MAX;
	uint16_t x347 = 20U;
	int32_t x348 = INT32_MIN;
	static uint64_t t73 = 6384LLU;

    t73 = ((x345-x346)^(x347/x348));

    if (t73 != 8116692304257375640LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile uint8_t x349 = 3U;
	static uint16_t x350 = 4357U;
	uint64_t x351 = 3620994609936245LLU;
	int8_t x352 = 1;
	uint64_t t74 = 1LLU;

    t74 = ((x349-x350)^(x351/x352));

    if (t74 != 18443123079099619723LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint16_t x353 = 2U;
	static int8_t x354 = INT8_MIN;
	int32_t x355 = -46;
	volatile uint8_t x356 = 78U;
	static volatile int32_t t75 = -15812;

    t75 = ((x353-x354)^(x355/x356));

    if (t75 != 130) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x357 = INT64_MIN;
	static volatile int8_t x358 = INT8_MIN;
	volatile uint64_t x359 = UINT64_MAX;
	uint16_t x360 = 1U;
	uint64_t t76 = 660227623996LLU;

    t76 = ((x357-x358)^(x359/x360));

    if (t76 != 9223372036854775679LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x362 = INT16_MIN;
	int8_t x363 = INT8_MIN;
	volatile int32_t x364 = INT32_MIN;
	uint64_t t77 = 1101622662217613LLU;

    t77 = ((x361-x362)^(x363/x364));

    if (t77 != 32767LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x365 = UINT16_MAX;
	uint32_t x366 = 1093962679U;
	static int8_t x367 = 2;
	volatile int32_t x368 = INT32_MIN;
	uint32_t t78 = 220724925U;

    t78 = ((x365-x366)^(x367/x368));

    if (t78 != 3201070152U) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x369 = -89;
	int16_t x370 = INT16_MIN;
	static uint64_t x371 = 125631727171LLU;
	int64_t x372 = -582392691562073758LL;
	uint64_t t79 = 26678935529073683LLU;

    t79 = ((x369-x370)^(x371/x372));

    if (t79 != 32679LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x374 = -1;
	int8_t x375 = INT8_MAX;

    t80 = ((x373-x374)^(x375/x376));

    if (t80 != 12824LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x377 = 892;
	int16_t x378 = INT16_MIN;
	int8_t x379 = 0;
	int16_t x380 = -1;
	static volatile int32_t t81 = 115042;

    t81 = ((x377-x378)^(x379/x380));

    if (t81 != 33660) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x381 = -2669;
	static volatile uint16_t x383 = 14U;
	static volatile int16_t x384 = INT16_MAX;
	volatile int32_t t82 = -93604;

    t82 = ((x381-x382)^(x383/x384));

    if (t82 != -19343) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x385 = 3;
	int16_t x386 = 0;
	int16_t x387 = INT16_MAX;
	uint64_t x388 = 564186985LLU;
	static volatile uint64_t t83 = 12LLU;

    t83 = ((x385-x386)^(x387/x388));

    if (t83 != 3LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint16_t x390 = UINT16_MAX;
	int16_t x391 = INT16_MIN;
	static int32_t x392 = -1;
	uint32_t t84 = 919431U;

    t84 = ((x389-x390)^(x391/x392));

    if (t84 != 4294936525U) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x397 = INT8_MIN;
	uint32_t x398 = 213225611U;
	int8_t x399 = INT8_MIN;
	static volatile int8_t x400 = INT8_MIN;
	static uint32_t t85 = 4824U;

    t85 = ((x397-x398)^(x399/x400));

    if (t85 != 4081741556U) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x405 = -1;
	volatile uint8_t x406 = UINT8_MAX;
	int8_t x407 = INT8_MIN;
	int8_t x408 = 59;
	volatile int32_t t86 = 925;

    t86 = ((x405-x406)^(x407/x408));

    if (t86 != 254) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x409 = 1;
	uint64_t x410 = 9880620689LLU;
	static uint16_t x411 = 15063U;
	static uint8_t x412 = 3U;
	static uint64_t t87 = 288786319855LLU;

    t87 = ((x409-x410)^(x411/x412));

    if (t87 != 18446744063828927213LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x413 = INT16_MIN;
	int8_t x414 = -1;
	volatile int8_t x415 = 1;
	static uint32_t t88 = 9877935U;

    t88 = ((x413-x414)^(x415/x416));

    if (t88 != 4294934529U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x417 = UINT64_MAX;
	int64_t x418 = INT64_MIN;
	static int32_t x419 = -113;
	uint8_t x420 = UINT8_MAX;
	volatile uint64_t t89 = 2978775310570692LLU;

    t89 = ((x417-x418)^(x419/x420));

    if (t89 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x421 = 1LL;
	volatile uint64_t x422 = UINT64_MAX;
	int16_t x423 = INT16_MIN;
	uint64_t t90 = 431LLU;

    t90 = ((x421-x422)^(x423/x424));

    if (t90 != 18446744073709551356LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x425 = 28982628;
	uint16_t x426 = 31592U;
	volatile int64_t x428 = -8303482226870907LL;
	int64_t t91 = -99115LL;

    t91 = ((x425-x426)^(x427/x428));

    if (t91 != 28951036LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x430 = INT32_MAX;
	int16_t x431 = -201;
	static uint64_t t92 = 2889LLU;

    t92 = ((x429-x430)^(x431/x432));

    if (t92 != 16402356032275275736LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x433 = -1LL;
	int16_t x434 = INT16_MIN;
	static volatile int64_t t93 = -734250858652LL;

    t93 = ((x433-x434)^(x435/x436));

    if (t93 != 32767LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x437 = INT32_MIN;
	int64_t x438 = -1LL;
	int16_t x439 = INT16_MIN;
	volatile int32_t x440 = INT32_MAX;
	volatile int64_t t94 = -545513270LL;

    t94 = ((x437-x438)^(x439/x440));

    if (t94 != -2147483647LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint64_t x441 = UINT64_MAX;
	int8_t x442 = 17;
	static volatile uint64_t t95 = 786342501563LLU;

    t95 = ((x441-x442)^(x443/x444));

    if (t95 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x445 = 113U;
	int8_t x447 = INT8_MAX;
	volatile int8_t x448 = INT8_MIN;

    t96 = ((x445-x446)^(x447/x448));

    if (t96 != 114) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint16_t x449 = 696U;
	uint16_t x450 = 233U;
	int16_t x451 = -10;
	volatile int16_t x452 = INT16_MIN;
	int32_t t97 = 3852900;

    t97 = ((x449-x450)^(x451/x452));

    if (t97 != 463) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x453 = -1;
	static uint16_t x455 = 1035U;
	volatile int64_t x456 = INT64_MAX;
	int64_t t98 = 3619904517788LL;

    t98 = ((x453-x454)^(x455/x456));

    if (t98 != -18LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x461 = INT16_MIN;
	static int16_t x462 = INT16_MIN;
	int16_t x463 = 5;
	int64_t x464 = -1LL;
	volatile int64_t t99 = -6121LL;

    t99 = ((x461-x462)^(x463/x464));

    if (t99 != -5LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x465 = INT16_MIN;
	int8_t x466 = INT8_MIN;
	int64_t x467 = INT64_MAX;
	uint16_t x468 = 22294U;
	int64_t t100 = -46LL;

    t100 = ((x465-x466)^(x467/x468));

    if (t100 != -413715440773670LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x469 = 53;
	int8_t x470 = 0;

    t101 = ((x469-x470)^(x471/x472));

    if (t101 != -147975) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x473 = UINT8_MAX;
	int32_t x474 = -1427;
	uint64_t x476 = 11957750833648LLU;
	static volatile uint64_t t102 = 15278512589353451LLU;

    t102 = ((x473-x474)^(x475/x476));

    if (t102 != 770960LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x478 = INT64_MIN;
	volatile uint64_t t103 = 1LLU;

    t103 = ((x477-x478)^(x479/x480));

    if (t103 != 9223372036857866601LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x481 = UINT16_MAX;
	uint8_t x482 = 3U;
	volatile int8_t x483 = INT8_MIN;
	int64_t x484 = INT64_MIN;
	int64_t t104 = -4539442591329LL;

    t104 = ((x481-x482)^(x483/x484));

    if (t104 != 65532LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x485 = INT16_MAX;
	int16_t x487 = INT16_MIN;
	uint64_t x488 = 8647459533054LLU;
	volatile uint64_t t105 = 815028619089280253LLU;

    t105 = ((x485-x486)^(x487/x488));

    if (t105 != 2100401LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x489 = 28U;
	int8_t x490 = -1;

    t106 = ((x489-x490)^(x491/x492));

    if (t106 != 29U) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int64_t x493 = 1595LL;
	static int32_t x494 = -129758;
	static int8_t x495 = INT8_MIN;
	int8_t x496 = -1;
	int64_t t107 = 114486116990355LL;

    t107 = ((x493-x494)^(x495/x496));

    if (t107 != 131481LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x497 = INT8_MIN;
	uint64_t x498 = UINT64_MAX;
	uint16_t x499 = UINT16_MAX;
	volatile int8_t x500 = -1;
	static volatile uint64_t t108 = 8197621870715LLU;

    t108 = ((x497-x498)^(x499/x500));

    if (t108 != 65408LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x501 = INT32_MAX;
	uint8_t x502 = UINT8_MAX;
	int32_t x503 = -1;
	volatile int64_t x504 = -170671LL;
	static int64_t t109 = 0LL;

    t109 = ((x501-x502)^(x503/x504));

    if (t109 != 2147483392LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x506 = INT16_MAX;
	uint64_t x507 = UINT64_MAX;
	int32_t x508 = -1;
	uint64_t t110 = 827685LLU;

    t110 = ((x505-x506)^(x507/x508));

    if (t110 != 18446744073709530730LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x509 = INT32_MIN;
	int32_t x510 = -1;
	uint64_t x511 = UINT64_MAX;
	static volatile int8_t x512 = INT8_MIN;
	uint64_t t111 = 1712448259302LLU;

    t111 = ((x509-x510)^(x511/x512));

    if (t111 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint64_t x515 = 183683233508898491LLU;
	static uint64_t t112 = 66025956207769090LLU;

    t112 = ((x513-x514)^(x515/x516));

    if (t112 != 18445297749036253292LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x517 = 7714U;
	int8_t x518 = INT8_MIN;
	static int16_t x519 = INT16_MAX;
	static uint64_t x520 = 122694204929213LLU;
	volatile uint64_t t113 = 745617665904598LLU;

    t113 = ((x517-x518)^(x519/x520));

    if (t113 != 7842LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x521 = INT8_MAX;
	uint8_t x522 = 2U;
	static int64_t x523 = -1LL;
	volatile uint32_t x524 = 169120351U;
	int64_t t114 = 18061227795607LL;

    t114 = ((x521-x522)^(x523/x524));

    if (t114 != 125LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x525 = INT8_MIN;
	uint16_t x526 = 11U;
	static int16_t x527 = 1;
	int8_t x528 = -1;
	static int32_t t115 = -4108796;

    t115 = ((x525-x526)^(x527/x528));

    if (t115 != 138) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x529 = -1;
	uint16_t x530 = 1265U;
	static int64_t x531 = -1LL;
	int16_t x532 = INT16_MIN;
	int64_t t116 = -38090733627LL;

    t116 = ((x529-x530)^(x531/x532));

    if (t116 != -1266LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x533 = INT32_MAX;
	int8_t x534 = INT8_MAX;
	static volatile int32_t t117 = -91210971;

    t117 = ((x533-x534)^(x535/x536));

    if (t117 != 2147483520) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x537 = INT64_MAX;
	volatile uint16_t x538 = UINT16_MAX;
	int16_t x539 = 3266;
	int64_t t118 = -477LL;

    t118 = ((x537-x538)^(x539/x540));

    if (t118 != 9223372036854710368LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int64_t x542 = 7LL;
	uint8_t x543 = 0U;
	static int8_t x544 = INT8_MIN;
	int64_t t119 = -108629353058LL;

    t119 = ((x541-x542)^(x543/x544));

    if (t119 != 878LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x549 = -84;
	uint16_t x550 = UINT16_MAX;
	uint32_t x551 = 2344U;
	int16_t x552 = -502;

    t120 = ((x549-x550)^(x551/x552));

    if (t120 != 4294901677U) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x554 = -1;
	int16_t x556 = -2205;
	static int32_t t121 = 15064985;

    t121 = ((x553-x554)^(x555/x556));

    if (t121 != -142073861) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x557 = INT8_MIN;
	volatile int64_t x559 = -1LL;
	static volatile uint64_t t122 = 2010187934148480466LLU;

    t122 = ((x557-x558)^(x559/x560));

    if (t122 != 18446744072823321907LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x561 = INT32_MIN;
	volatile int64_t x562 = -27142LL;
	volatile int8_t x563 = INT8_MIN;
	int8_t x564 = INT8_MIN;
	volatile int64_t t123 = -44LL;

    t123 = ((x561-x562)^(x563/x564));

    if (t123 != -2147456505LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x566 = INT16_MIN;
	int8_t x568 = INT8_MIN;
	volatile uint64_t t124 = 0LLU;

    t124 = ((x565-x566)^(x567/x568));

    if (t124 != 32767LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x569 = -1;
	int16_t x570 = INT16_MIN;
	int8_t x571 = INT8_MAX;
	int64_t x572 = -121612530LL;
	volatile int64_t t125 = -1LL;

    t125 = ((x569-x570)^(x571/x572));

    if (t125 != 32767LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x573 = -1LL;
	int8_t x574 = -1;
	volatile uint64_t x575 = 139576LLU;
	static uint16_t x576 = 168U;
	volatile uint64_t t126 = 51396787942564012LLU;

    t126 = ((x573-x574)^(x575/x576));

    if (t126 != 830LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x577 = UINT64_MAX;
	static uint32_t x578 = 7742686U;
	int64_t x580 = INT64_MIN;
	uint64_t t127 = 183142952026LLU;

    t127 = ((x577-x578)^(x579/x580));

    if (t127 != 18446744073701808929LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x581 = 4U;
	int32_t x582 = 2287;
	uint8_t x583 = 25U;
	volatile int64_t x584 = INT64_MAX;

    t128 = ((x581-x582)^(x583/x584));

    if (t128 != -2283LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x589 = INT32_MAX;
	volatile int16_t x590 = 9385;
	uint8_t x591 = 69U;
	uint16_t x592 = UINT16_MAX;

    t129 = ((x589-x590)^(x591/x592));

    if (t129 != 2147474262) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x593 = -1LL;
	volatile int64_t x594 = INT64_MIN;
	uint8_t x595 = UINT8_MAX;
	static uint8_t x596 = UINT8_MAX;
	volatile int64_t t130 = 55950790118LL;

    t130 = ((x593-x594)^(x595/x596));

    if (t130 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x597 = INT8_MIN;
	int8_t x598 = INT8_MIN;
	int32_t x599 = INT32_MAX;
	volatile uint64_t x600 = UINT64_MAX;

    t131 = ((x597-x598)^(x599/x600));

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x601 = -208LL;
	uint64_t x602 = 1910436034621209158LLU;
	uint64_t x603 = UINT64_MAX;
	uint16_t x604 = UINT16_MAX;
	uint64_t t132 = 67718704200510LLU;

    t132 = ((x601-x602)^(x603/x604));

    if (t132 != 16536589518360085739LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x605 = INT16_MIN;
	static uint64_t x606 = 0LLU;
	volatile int64_t x608 = -1LL;
	volatile uint64_t t133 = 31LLU;

    t133 = ((x605-x606)^(x607/x608));

    if (t133 != 46868022852706LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x613 = 15641363U;
	int16_t x614 = INT16_MAX;

    t134 = ((x613-x614)^(x615/x616));

    if (t134 != 15608596U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x617 = 59860254953LLU;
	int32_t x618 = INT32_MIN;
	int16_t x619 = INT16_MIN;
	int64_t x620 = INT64_MIN;

    t135 = ((x617-x618)^(x619/x620));

    if (t135 != 62007738601LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x621 = UINT8_MAX;
	uint64_t x623 = 91867186800LLU;
	static uint32_t x624 = 28U;
	static uint64_t t136 = 1755534144811LLU;

    t136 = ((x621-x622)^(x623/x624));

    if (t136 != 3280970802LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x629 = 14;
	uint16_t x630 = 648U;
	int16_t x631 = INT16_MIN;
	int64_t x632 = INT64_MIN;

    t137 = ((x629-x630)^(x631/x632));

    if (t137 != -634LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x633 = INT64_MAX;
	int64_t t138 = INT64_MAX;

    t138 = ((x633-x634)^(x635/x636));

    if (t138 != INT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x637 = INT64_MIN;
	int32_t x639 = -1;
	uint64_t t139 = 25360LLU;

    t139 = ((x637-x638)^(x639/x640));

    if (t139 != 9223372036793497709LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x645 = INT64_MIN;
	static uint64_t x646 = 25722824829379LLU;
	uint16_t x647 = 80U;
	int64_t x648 = INT64_MAX;
	volatile uint64_t t140 = 293969LLU;

    t140 = ((x645-x646)^(x647/x648));

    if (t140 != 9223346314029946429LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x649 = 1669;
	uint16_t x650 = 0U;
	int32_t x652 = INT32_MIN;
	int64_t t141 = 0LL;

    t141 = ((x649-x650)^(x651/x652));

    if (t141 != 1669LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x654 = 185497711795329LLU;
	volatile int8_t x655 = -1;
	static uint64_t x656 = 1932829283798LLU;
	static volatile uint64_t t142 = 8788389571420781667LLU;

    t142 = ((x653-x654)^(x655/x656));

    if (t142 != 9223186539135730589LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x657 = -1LL;
	int16_t x658 = -707;
	uint8_t x659 = UINT8_MAX;
	uint32_t x660 = UINT32_MAX;
	int64_t t143 = 9LL;

    t143 = ((x657-x658)^(x659/x660));

    if (t143 != 706LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x661 = -1;
	int64_t x663 = -1LL;
	static int16_t x664 = -1;
	volatile int64_t t144 = 48344084100355LL;

    t144 = ((x661-x662)^(x663/x664));

    if (t144 != -2147483647LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x669 = 75657226LL;
	static int32_t x671 = INT32_MIN;
	int32_t x672 = INT32_MIN;
	static volatile int64_t t145 = -2624LL;

    t145 = ((x669-x670)^(x671/x672));

    if (t145 != 75657226LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x673 = 877350203805943678LLU;
	volatile uint64_t t146 = 101960320808788344LLU;

    t146 = ((x673-x674)^(x675/x676));

    if (t146 != 876817418917490207LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x677 = -5948601LL;
	volatile int64_t x678 = INT64_MIN;
	static int16_t x679 = -1;
	int64_t x680 = INT64_MIN;
	int64_t t147 = -5LL;

    t147 = ((x677-x678)^(x679/x680));

    if (t147 != 9223372036848827207LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x681 = INT32_MAX;
	int64_t x682 = -6119864365895LL;
	volatile int64_t x683 = -4123491216099LL;
	static volatile int8_t x684 = INT8_MAX;
	int64_t t148 = 2LL;

    t148 = ((x681-x682)^(x683/x684));

    if (t148 != -6145747160086LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x689 = INT64_MAX;
	int16_t x690 = INT16_MAX;
	volatile uint64_t t149 = 16167734602LLU;

    t149 = ((x689-x690)^(x691/x692));

    if (t149 != 9223372036829456395LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int8_t x693 = -52;
	uint64_t x695 = UINT64_MAX;
	volatile uint64_t t150 = 5281954LLU;

    t150 = ((x693-x694)^(x695/x696));

    if (t150 != 18446744073709551556LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x697 = INT32_MIN;
	uint64_t x698 = 1916631733769514LLU;
	static uint16_t x699 = 36U;
	uint32_t x700 = 48353866U;
	uint64_t t151 = 4326723415116323LLU;

    t151 = ((x697-x698)^(x699/x700));

    if (t151 != 18444827439828298454LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x703 = INT64_MIN;
	static int32_t x704 = INT32_MIN;

    t152 = ((x701-x702)^(x703/x704));

    if (t152 != -4294967552LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x705 = INT16_MIN;
	static uint32_t x707 = UINT32_MAX;
	volatile uint32_t t153 = 32571U;

    t153 = ((x705-x706)^(x707/x708));

    if (t153 != 4294934519U) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x710 = INT16_MIN;
	uint16_t x711 = UINT16_MAX;
	static int32_t x712 = INT32_MIN;

    t154 = ((x709-x710)^(x711/x712));

    if (t154 != 32895) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x714 = 57U;
	int16_t x715 = -1;
	int32_t x716 = -22;
	uint32_t t155 = 34275244U;

    t155 = ((x713-x714)^(x715/x716));

    if (t155 != 2147483590U) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x721 = -377022LL;
	volatile int32_t x722 = -1302;

    t156 = ((x721-x722)^(x723/x724));

    if (t156 != 377945LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x725 = -1;
	volatile int8_t x726 = 1;
	volatile int32_t x727 = INT32_MIN;
	volatile int32_t t157 = -35;

    t157 = ((x725-x726)^(x727/x728));

    if (t157 != -65538) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x731 = INT32_MIN;
	uint64_t t158 = 1LLU;

    t158 = ((x729-x730)^(x731/x732));

    if (t158 != 842623LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x733 = -1;
	volatile int16_t x734 = -1;
	int8_t x735 = INT8_MIN;
	static volatile int8_t x736 = -1;

    t159 = ((x733-x734)^(x735/x736));

    if (t159 != 128) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x738 = -1LL;
	int64_t x739 = INT64_MAX;
	static uint16_t x740 = 269U;

    t160 = ((x737-x738)^(x739/x740));

    if (t160 != 34287632684762001LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x741 = -1;
	static int64_t x744 = INT64_MAX;
	static volatile int64_t t161 = -2319682795620LL;

    t161 = ((x741-x742)^(x743/x744));

    if (t161 != -990602638490LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x745 = -1143971376624161LL;
	volatile uint8_t x746 = UINT8_MAX;
	int8_t x747 = 0;
	uint16_t x748 = 38U;
	int64_t t162 = 3393482636294157015LL;

    t162 = ((x745-x746)^(x747/x748));

    if (t162 != -1143971376624416LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile uint8_t x749 = 127U;
	static uint64_t x750 = 295142383LLU;
	int64_t x751 = INT64_MAX;
	int8_t x752 = INT8_MIN;
	uint64_t t163 = 19LLU;

    t163 = ((x749-x750)^(x751/x752));

    if (t163 != 72057593742785681LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x757 = -1;
	uint32_t x758 = 2483986U;
	int8_t x759 = INT8_MAX;
	int8_t x760 = INT8_MAX;
	uint32_t t164 = 117983176U;

    t164 = ((x757-x758)^(x759/x760));

    if (t164 != 4292483308U) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x765 = INT32_MAX;
	uint32_t x766 = UINT32_MAX;
	static uint16_t x768 = 13U;
	volatile uint32_t t165 = 12013891U;

    t165 = ((x765-x766)^(x767/x768));

    if (t165 != 1982292599U) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x769 = -1;
	int64_t x770 = INT64_MIN;
	int64_t x771 = INT64_MIN;
	int8_t x772 = INT8_MAX;

    t166 = ((x769-x770)^(x771/x772));

    if (t166 != -9150747060186627968LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint8_t x773 = 1U;
	int32_t x774 = INT32_MAX;
	int8_t x775 = -1;
	uint16_t x776 = UINT16_MAX;
	volatile int32_t t167 = -178111219;

    t167 = ((x773-x774)^(x775/x776));

    if (t167 != -2147483646) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x778 = -5;
	int16_t x779 = INT16_MIN;
	int16_t x780 = INT16_MAX;
	uint64_t t168 = 450984834269147077LLU;

    t168 = ((x777-x778)^(x779/x780));

    if (t168 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x781 = -1LL;
	uint8_t x782 = UINT8_MAX;
	int64_t x783 = INT64_MIN;
	int32_t x784 = INT32_MIN;
	int64_t t169 = 9LL;

    t169 = ((x781-x782)^(x783/x784));

    if (t169 != -4294967552LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x785 = 3U;
	uint32_t x786 = 56195U;
	static int64_t x788 = INT64_MAX;
	int64_t t170 = -6LL;

    t170 = ((x785-x786)^(x787/x788));

    if (t170 != 4294911104LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x789 = 1941241611128LLU;
	static volatile int32_t x790 = -1;
	int32_t x791 = 0;
	volatile uint64_t t171 = 172LLU;

    t171 = ((x789-x790)^(x791/x792));

    if (t171 != 1941241611129LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int32_t x793 = -12989510;
	int16_t x794 = -10;
	int16_t x795 = 19;
	int64_t x796 = INT64_MAX;
	int64_t t172 = -1396677940056578LL;

    t172 = ((x793-x794)^(x795/x796));

    if (t172 != -12989500LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x797 = INT16_MIN;
	volatile int16_t x798 = -6167;
	uint32_t x799 = UINT32_MAX;
	int16_t x800 = INT16_MAX;
	static volatile uint32_t t173 = 8022691U;

    t173 = ((x797-x798)^(x799/x800));

    if (t173 != 4294809619U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x801 = 2U;
	int32_t x803 = -1;
	int32_t x804 = INT32_MAX;
	volatile int32_t t174 = 124263;

    t174 = ((x801-x802)^(x803/x804));

    if (t174 != 130) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x809 = 825744860U;
	static int8_t x811 = -1;
	volatile uint32_t t175 = 256444U;

    t175 = ((x809-x810)^(x811/x812));

    if (t175 != 825764633U) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint64_t x817 = UINT64_MAX;
	uint64_t x818 = 890491407LLU;
	int64_t x820 = INT64_MAX;
	uint64_t t176 = 235240614994826LLU;

    t176 = ((x817-x818)^(x819/x820));

    if (t176 != 18446744072819060208LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x825 = 3793LL;
	int32_t x826 = 302159370;
	int8_t x827 = INT8_MIN;
	volatile int64_t t177 = -50743695LL;

    t177 = ((x825-x826)^(x827/x828));

    if (t177 != -302155577LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x829 = UINT16_MAX;
	int64_t x830 = -1LL;
	int16_t x831 = 85;
	int64_t t178 = 0LL;

    t178 = ((x829-x830)^(x831/x832));

    if (t178 != 65536LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x833 = 5U;
	int32_t x834 = INT32_MAX;
	volatile int32_t x835 = INT32_MAX;
	uint16_t x836 = 6U;

    t179 = ((x833-x834)^(x835/x836));

    if (t179 != -1789569709) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x837 = 2849610378LLU;
	volatile int8_t x838 = INT8_MIN;
	static int8_t x839 = INT8_MIN;
	volatile int16_t x840 = INT16_MAX;

    t180 = ((x837-x838)^(x839/x840));

    if (t180 != 2849610506LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x841 = 3U;
	uint16_t x843 = UINT16_MAX;
	static int8_t x844 = INT8_MAX;
	volatile int32_t t181 = -40936;

    t181 = ((x841-x842)^(x843/x844));

    if (t181 != -534) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x849 = 2247;
	volatile int8_t x850 = INT8_MAX;
	volatile int16_t x851 = 1;
	uint64_t x852 = 76LLU;
	volatile uint64_t t182 = 3760519LLU;

    t182 = ((x849-x850)^(x851/x852));

    if (t182 != 2120LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int16_t x853 = INT16_MIN;
	static int32_t x854 = INT32_MIN;
	int64_t x855 = INT64_MIN;
	uint64_t x856 = 449255523LLU;
	uint64_t t183 = 128434LLU;

    t183 = ((x853-x854)^(x855/x856));

    if (t183 != 20271840822LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x859 = INT64_MAX;
	static volatile int64_t t184 = -1039412LL;

    t184 = ((x857-x858)^(x859/x860));

    if (t184 != 5874755139242043LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x861 = 448U;
	volatile int64_t x863 = INT64_MIN;
	static volatile int64_t t185 = 3543272231966444685LL;

    t185 = ((x861-x862)^(x863/x864));

    if (t185 != -72057594037960255LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x865 = -1;
	int16_t x867 = -72;
	uint64_t x868 = UINT64_MAX;
	volatile uint64_t t186 = 38314LLU;

    t186 = ((x865-x866)^(x867/x868));

    if (t186 != 18444599144483629977LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x870 = -1703;
	volatile int64_t x871 = -1LL;
	static volatile uint16_t x872 = UINT16_MAX;
	int64_t t187 = -41366669205197611LL;

    t187 = ((x869-x870)^(x871/x872));

    if (t187 != 1702LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x873 = -1;
	static int64_t x874 = INT64_MIN;
	int64_t x875 = INT64_MIN;
	uint32_t x876 = 5U;
	int64_t t188 = -89170591061LL;

    t188 = ((x873-x874)^(x875/x876));

    if (t188 != -7378697629483820648LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x877 = INT16_MIN;
	uint8_t x878 = UINT8_MAX;
	static volatile int64_t x879 = INT64_MIN;
	volatile int32_t x880 = INT32_MIN;

    t189 = ((x877-x878)^(x879/x880));

    if (t189 != -4295000319LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x881 = -1;
	static int64_t x882 = INT64_MIN;
	volatile int64_t x883 = INT64_MIN;
	int16_t x884 = INT16_MIN;
	int64_t t190 = -11221LL;

    t190 = ((x881-x882)^(x883/x884));

    if (t190 != 9223090561878065151LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x885 = 928885549U;
	uint16_t x886 = UINT16_MAX;
	volatile int16_t x888 = -561;
	volatile uint32_t t191 = 2U;

    t191 = ((x885-x886)^(x887/x888));

    if (t191 != 929481690U) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x889 = -1;
	int64_t x891 = -710LL;
	volatile int64_t t192 = 2LL;

    t192 = ((x889-x890)^(x891/x892));

    if (t192 != -690LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x893 = 111U;
	volatile uint64_t x894 = 220LLU;
	uint32_t x895 = UINT32_MAX;
	int8_t x896 = INT8_MAX;
	uint64_t t193 = 15837210717302393LLU;

    t193 = ((x893-x894)^(x895/x896));

    if (t193 != 18446744073675732867LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x897 = INT16_MIN;
	uint16_t x898 = 231U;
	int16_t x899 = -8416;
	volatile int16_t x900 = INT16_MAX;
	static volatile int32_t t194 = 42963738;

    t194 = ((x897-x898)^(x899/x900));

    if (t194 != -32999) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x901 = INT16_MIN;
	int32_t x902 = -1;
	static int32_t x903 = -1;
	int64_t x904 = -1LL;
	static int64_t t195 = 24266LL;

    t195 = ((x901-x902)^(x903/x904));

    if (t195 != -32768LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x905 = -54;
	int16_t x908 = INT16_MIN;
	int32_t t196 = -38225826;

    t196 = ((x905-x906)^(x907/x908));

    if (t196 != -53) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x909 = INT8_MIN;
	uint8_t x910 = UINT8_MAX;
	volatile uint8_t x911 = UINT8_MAX;
	static int64_t x912 = INT64_MIN;
	int64_t t197 = 2361642LL;

    t197 = ((x909-x910)^(x911/x912));

    if (t197 != -383LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x913 = 2;
	static int32_t x915 = INT32_MIN;
	static volatile int64_t t198 = -216777645727LL;

    t198 = ((x913-x914)^(x915/x916));

    if (t198 != -8421504LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x917 = INT8_MIN;
	static int32_t x918 = 12468209;
	int8_t x919 = -1;
	int32_t x920 = INT32_MIN;
	int32_t t199 = 14904;

    t199 = ((x917-x918)^(x919/x920));

    if (t199 != -12468337) { NG(); } else { ; }
	
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

