
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

uint32_t x5 = UINT32_MAX;
int16_t x6 = INT16_MIN;
uint32_t x7 = UINT32_MAX;
static int16_t x8 = 16374;
int32_t x12 = -149370;
uint64_t x13 = 12547266703445LLU;
uint8_t x23 = UINT8_MAX;
int32_t x27 = -1;
volatile int16_t x35 = INT16_MIN;
static int64_t x38 = INT64_MIN;
int8_t x40 = 0;
static int32_t x41 = -1;
int8_t x55 = -1;
volatile int64_t x66 = -1LL;
uint8_t x68 = UINT8_MAX;
uint32_t x72 = 23U;
uint64_t x73 = UINT64_MAX;
int64_t x76 = INT64_MIN;
uint32_t x79 = 1553827562U;
int16_t x80 = INT16_MIN;
uint64_t t19 = 602480558LLU;
static int8_t x96 = INT8_MIN;
uint16_t x100 = 6238U;
static int16_t x106 = INT16_MAX;
volatile int32_t x109 = INT32_MAX;
uint32_t x111 = UINT32_MAX;
uint32_t x115 = UINT32_MAX;
volatile int32_t x119 = 111624180;
uint64_t x121 = 9042153333482619812LLU;
int32_t x124 = -546947;
volatile uint64_t t26 = 36LLU;
static volatile int16_t x129 = -1;
int16_t x130 = -1;
static int8_t x131 = -10;
uint64_t x137 = 30739686414LLU;
uint64_t t29 = 3213575177163714526LLU;
uint64_t x143 = 725112061LLU;
volatile int32_t t33 = -6577;
int16_t x157 = INT16_MAX;
int64_t x158 = -4LL;
int64_t t34 = 384707785275119289LL;
int32_t x161 = INT32_MAX;
int8_t x162 = INT8_MIN;
int16_t x164 = INT16_MIN;
int32_t x179 = -23;
uint32_t x186 = 3201U;
int8_t x192 = -5;
static int8_t x193 = -1;
static int16_t x196 = -1;
int16_t x197 = -1;
volatile int16_t x203 = -22;
volatile int64_t t46 = -224208LL;
int16_t x210 = -15;
uint32_t x215 = 408252U;
int32_t x224 = INT32_MIN;
static int8_t x228 = INT8_MIN;
volatile uint32_t t51 = 13166153U;
uint16_t x230 = 0U;
uint64_t x231 = 7713LLU;
int32_t t52 = 25974;
int32_t x234 = -30;
int32_t x235 = -1;
static uint8_t x243 = 96U;
int8_t x246 = 4;
static int8_t x248 = INT8_MAX;
uint32_t x249 = UINT32_MAX;
uint64_t x253 = 21941203342132LLU;
uint8_t x254 = UINT8_MAX;
int64_t t58 = -11LL;
int64_t x269 = -300095522592LL;
uint64_t x270 = UINT64_MAX;
uint32_t x272 = UINT32_MAX;
static int16_t x274 = INT16_MIN;
int16_t x275 = 56;
volatile uint32_t t62 = 54792U;
static volatile uint32_t x282 = 5255U;
int32_t x286 = INT32_MAX;
volatile uint32_t t64 = 498984562U;
int64_t x291 = -96LL;
uint16_t x292 = 4164U;
static int32_t t65 = -390173149;
static int32_t x298 = 195;
static int64_t x302 = -1LL;
volatile int64_t t68 = 18029017724803LL;
static uint32_t x305 = UINT32_MAX;
static volatile uint32_t t69 = 78U;
static int32_t x310 = INT32_MAX;
int32_t x311 = 0;
int32_t x312 = INT32_MIN;
uint32_t t70 = 3U;
uint16_t x315 = 5U;
int16_t x317 = 565;
int32_t t72 = -50721;
int16_t x321 = 2979;
int8_t x335 = INT8_MAX;
int8_t x340 = 0;
static uint16_t x353 = 2032U;
volatile int16_t x355 = INT16_MAX;
uint8_t x357 = 2U;
uint8_t x361 = 25U;
volatile int16_t x366 = -696;
int8_t x373 = INT8_MIN;
static int16_t x374 = INT16_MAX;
static int64_t x376 = INT64_MAX;
int16_t x379 = INT16_MIN;
static uint16_t x387 = UINT16_MAX;
uint32_t t86 = 530669643U;
int32_t x392 = INT32_MIN;
int8_t x396 = INT8_MIN;
volatile int8_t x398 = -5;
static volatile int32_t t91 = 2115341;
uint32_t x410 = 58U;
static uint32_t x416 = 190575040U;
volatile int32_t t94 = 509;
volatile int32_t x421 = -1;
int32_t x423 = INT32_MAX;
uint32_t x440 = UINT32_MAX;
int64_t x442 = -1LL;
int8_t x444 = INT8_MIN;
int32_t x448 = INT32_MIN;
volatile int64_t x456 = INT64_MIN;
uint32_t x458 = 3U;
int64_t x463 = -1LL;
static int64_t x470 = -1LL;
int16_t x472 = 226;
int8_t x482 = -8;
int32_t x484 = -1;
static volatile uint64_t t109 = 10586383654LLU;
static uint32_t x502 = UINT32_MAX;
volatile int16_t x504 = INT16_MIN;
uint8_t x513 = 3U;
uint64_t x515 = 1629887239LLU;
static uint64_t x517 = 258497275LLU;
volatile uint16_t x525 = UINT16_MAX;
int16_t x526 = 0;
int64_t x530 = INT64_MIN;
int16_t x537 = INT16_MIN;
int64_t x538 = -131915890787314LL;
volatile int64_t t119 = -1756250970536LL;
int64_t x548 = -1LL;
volatile int32_t t121 = -4138034;
uint64_t x561 = UINT64_MAX;
volatile int16_t x563 = INT16_MIN;
volatile uint8_t x566 = 1U;
int64_t x568 = -3975137625678021LL;
volatile int64_t x574 = -1LL;
volatile int32_t x577 = INT32_MIN;
uint32_t x579 = 7U;
int32_t t127 = 60695;
uint8_t x591 = 1U;
static uint32_t x593 = 6416U;
uint32_t x595 = 235993U;
int16_t x596 = -510;
static uint32_t t131 = 128410052U;
volatile int64_t t133 = 1224161736977725936LL;
static int16_t x618 = INT16_MIN;
static int32_t x619 = INT32_MAX;
static uint8_t x620 = 56U;
uint8_t x622 = UINT8_MAX;
int32_t x637 = INT32_MAX;
int64_t x638 = -1LL;
static int64_t x639 = INT64_MAX;
static int16_t x640 = INT16_MIN;
uint16_t x643 = UINT16_MAX;
int8_t x644 = -31;
volatile int64_t t141 = 1802144710719291LL;
int64_t x645 = INT64_MAX;
int32_t x651 = INT32_MIN;
int16_t x665 = INT16_MIN;
int16_t x668 = INT16_MAX;
uint32_t x670 = UINT32_MAX;
static int64_t x674 = 13942LL;
volatile int8_t x685 = -1;
uint64_t x692 = UINT64_MAX;
static uint64_t t153 = 17165737358LLU;
int16_t x697 = 21;
volatile uint8_t x703 = 117U;
static int32_t x707 = 3675;
uint64_t x708 = 9477633680599014LLU;
int8_t x720 = INT8_MIN;
uint32_t x721 = UINT32_MAX;
uint64_t x723 = 24709276LLU;
uint64_t t163 = 188481424LLU;
static uint16_t x733 = 1500U;
static volatile uint8_t x735 = 2U;
int32_t x736 = INT32_MAX;
volatile int16_t x739 = INT16_MIN;
static int64_t x749 = INT64_MAX;
static uint64_t x750 = 2542446299495279LLU;
int32_t x751 = INT32_MAX;
int16_t x753 = -1;
int16_t x754 = -1;
int32_t t168 = -2275795;
static int64_t x763 = INT64_MIN;
volatile int32_t x767 = 1031116;
uint8_t x771 = 26U;
volatile uint64_t t172 = 1056067022877444LLU;
uint64_t x780 = UINT64_MAX;
int64_t x781 = -9750760372LL;
int16_t x784 = INT16_MAX;
uint64_t t177 = 9252307LLU;
int8_t x793 = 6;
int32_t x807 = INT32_MIN;
uint16_t x813 = 1U;
volatile uint32_t x816 = 3U;
volatile uint32_t t182 = 54U;
int16_t x822 = -1;
volatile int32_t t184 = -306808;
int64_t x828 = INT64_MIN;
int32_t x831 = -183;
static int16_t x837 = 0;
int8_t x840 = INT8_MIN;
uint8_t x851 = 1U;
uint8_t x855 = UINT8_MAX;
static volatile int64_t t193 = -6LL;
uint8_t x875 = 0U;
volatile int32_t t196 = 4;
uint8_t x895 = 1U;


void f0(void) {
    	int32_t x1 = 2864;
	uint64_t x2 = 84642947LLU;
	uint64_t x3 = UINT64_MAX;
	int8_t x4 = INT8_MIN;
	uint64_t t0 = 13304292434524268LLU;

    t0 = ((x1+x2)|(x3==x4));

    if (t0 != 84645811LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t t1 = 55910936U;

    t1 = ((x5+x6)|(x7==x8));

    if (t1 != 4294934527U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 597U;
	volatile int8_t x10 = INT8_MIN;
	volatile uint64_t x11 = 1777570193741LLU;
	volatile int32_t t2 = -44;

    t2 = ((x9+x10)|(x11==x12));

    if (t2 != 469) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x14 = UINT64_MAX;
	volatile int64_t x15 = INT64_MAX;
	volatile int8_t x16 = 0;
	static uint64_t t3 = 25912273LLU;

    t3 = ((x13+x14)|(x15==x16));

    if (t3 != 12547266703444LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -795;
	int16_t x18 = 1;
	static int8_t x19 = -14;
	static int32_t x20 = 416984370;
	int32_t t4 = 12887423;

    t4 = ((x17+x18)|(x19==x20));

    if (t4 != -794) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -1LL;
	static int64_t x22 = -1LL;
	int64_t x24 = INT64_MAX;
	static int64_t t5 = 3482496LL;

    t5 = ((x21+x22)|(x23==x24));

    if (t5 != -2LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -87906562;
	int8_t x26 = INT8_MIN;
	static volatile int32_t x28 = INT32_MAX;
	int32_t t6 = 11342625;

    t6 = ((x25+x26)|(x27==x28));

    if (t6 != -87906690) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = 59;
	volatile int16_t x34 = -1;
	int8_t x36 = INT8_MAX;
	int32_t t7 = -19;

    t7 = ((x33+x34)|(x35==x36));

    if (t7 != 58) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x37 = UINT32_MAX;
	int32_t x39 = INT32_MIN;
	int64_t t8 = 20845982719LL;

    t8 = ((x37+x38)|(x39==x40));

    if (t8 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint32_t x42 = UINT32_MAX;
	int16_t x43 = INT16_MIN;
	volatile uint32_t x44 = UINT32_MAX;
	uint32_t t9 = 927807772U;

    t9 = ((x41+x42)|(x43==x44));

    if (t9 != 4294967294U) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x45 = 154410155224529507LLU;
	static int64_t x46 = -1LL;
	int8_t x47 = INT8_MIN;
	volatile int16_t x48 = INT16_MIN;
	volatile uint64_t t10 = 117690281396562689LLU;

    t10 = ((x45+x46)|(x47==x48));

    if (t10 != 154410155224529506LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x53 = 3957155U;
	int8_t x54 = INT8_MIN;
	static int32_t x56 = INT32_MAX;
	static volatile uint32_t t11 = 1357914130U;

    t11 = ((x53+x54)|(x55==x56));

    if (t11 != 3957027U) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x57 = 1;
	int16_t x58 = 76;
	int64_t x59 = INT64_MAX;
	int64_t x60 = INT64_MIN;
	volatile int32_t t12 = 5888;

    t12 = ((x57+x58)|(x59==x60));

    if (t12 != 77) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x65 = INT32_MIN;
	uint32_t x67 = 481115015U;
	int64_t t13 = -904383558008404321LL;

    t13 = ((x65+x66)|(x67==x68));

    if (t13 != -2147483649LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x69 = INT8_MIN;
	uint16_t x70 = 4851U;
	uint8_t x71 = UINT8_MAX;
	volatile int32_t t14 = -695;

    t14 = ((x69+x70)|(x71==x72));

    if (t14 != 4723) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x74 = -2476782886794466085LL;
	volatile int16_t x75 = 1;
	static uint64_t t15 = 3144449033LLU;

    t15 = ((x73+x74)|(x75==x76));

    if (t15 != 15969961186915085530LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x77 = INT16_MIN;
	uint64_t x78 = UINT64_MAX;
	volatile uint64_t t16 = 48213511LLU;

    t16 = ((x77+x78)|(x79==x80));

    if (t16 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x81 = 4355160LLU;
	int64_t x82 = -24603535696745289LL;
	int8_t x83 = INT8_MIN;
	volatile uint8_t x84 = 1U;
	static uint64_t t17 = 609859004234LLU;

    t17 = ((x81+x82)|(x83==x84));

    if (t17 != 18422140538017161487LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x85 = -415710341284383547LL;
	uint16_t x86 = 1U;
	volatile int64_t x87 = 23922776334478372LL;
	volatile int32_t x88 = INT32_MIN;
	volatile int64_t t18 = 394133391415955LL;

    t18 = ((x85+x86)|(x87==x88));

    if (t18 != -415710341284383546LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint8_t x89 = UINT8_MAX;
	static uint64_t x90 = UINT64_MAX;
	int32_t x91 = -1;
	uint8_t x92 = UINT8_MAX;

    t19 = ((x89+x90)|(x91==x92));

    if (t19 != 254LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x93 = UINT64_MAX;
	int64_t x94 = INT64_MAX;
	static uint32_t x95 = 105U;
	static uint64_t t20 = 536770628308177703LLU;

    t20 = ((x93+x94)|(x95==x96));

    if (t20 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x97 = 224LL;
	int32_t x98 = INT32_MIN;
	int32_t x99 = 2267712;
	int64_t t21 = -942394245598215775LL;

    t21 = ((x97+x98)|(x99==x100));

    if (t21 != -2147483424LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x105 = -8;
	uint64_t x107 = 193548LLU;
	volatile int64_t x108 = INT64_MIN;
	volatile int32_t t22 = 255;

    t22 = ((x105+x106)|(x107==x108));

    if (t22 != 32759) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x110 = INT32_MIN;
	int32_t x112 = -1;
	int32_t t23 = 16;

    t23 = ((x109+x110)|(x111==x112));

    if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x113 = 1;
	static uint32_t x114 = 803447U;
	static int64_t x116 = -1616675196999583861LL;
	volatile uint32_t t24 = 470216483U;

    t24 = ((x113+x114)|(x115==x116));

    if (t24 != 803448U) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x117 = INT32_MAX;
	int8_t x118 = INT8_MIN;
	volatile int64_t x120 = INT64_MIN;
	volatile int32_t t25 = -1;

    t25 = ((x117+x118)|(x119==x120));

    if (t25 != 2147483519) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x122 = -889532262069149558LL;
	volatile int64_t x123 = INT64_MAX;

    t26 = ((x121+x122)|(x123==x124));

    if (t26 != 8152621071413470254LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x125 = INT64_MIN;
	uint16_t x126 = 416U;
	volatile uint32_t x127 = 506260246U;
	static int32_t x128 = 40909614;
	volatile int64_t t27 = -4182724LL;

    t27 = ((x125+x126)|(x127==x128));

    if (t27 != -9223372036854775392LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x132 = 0;
	int32_t t28 = 74;

    t28 = ((x129+x130)|(x131==x132));

    if (t28 != -2) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x138 = 45LL;
	int8_t x139 = 7;
	uint16_t x140 = UINT16_MAX;

    t29 = ((x137+x138)|(x139==x140));

    if (t29 != 30739686459LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x141 = UINT32_MAX;
	volatile int16_t x142 = -1;
	static uint8_t x144 = 55U;
	static uint32_t t30 = 95563U;

    t30 = ((x141+x142)|(x143==x144));

    if (t30 != 4294967294U) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x145 = -4185421;
	static int8_t x146 = -1;
	volatile uint32_t x147 = 23U;
	static uint16_t x148 = 3018U;
	int32_t t31 = 5948906;

    t31 = ((x145+x146)|(x147==x148));

    if (t31 != -4185422) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x149 = -1;
	static uint16_t x150 = UINT16_MAX;
	volatile uint8_t x151 = UINT8_MAX;
	static int32_t x152 = INT32_MIN;
	volatile int32_t t32 = -14095081;

    t32 = ((x149+x150)|(x151==x152));

    if (t32 != 65534) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x153 = INT16_MAX;
	int16_t x154 = INT16_MIN;
	int8_t x155 = INT8_MIN;
	volatile int64_t x156 = -31197421LL;

    t33 = ((x153+x154)|(x155==x156));

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x159 = -939;
	int32_t x160 = INT32_MIN;

    t34 = ((x157+x158)|(x159==x160));

    if (t34 != 32763LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x163 = INT32_MAX;
	int32_t t35 = 2998768;

    t35 = ((x161+x162)|(x163==x164));

    if (t35 != 2147483519) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x165 = INT32_MIN;
	uint8_t x166 = UINT8_MAX;
	int32_t x167 = -1;
	int16_t x168 = 88;
	static volatile int32_t t36 = 4;

    t36 = ((x165+x166)|(x167==x168));

    if (t36 != -2147483393) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x169 = INT8_MIN;
	int8_t x170 = INT8_MIN;
	int8_t x171 = 1;
	uint16_t x172 = UINT16_MAX;
	int32_t t37 = -579;

    t37 = ((x169+x170)|(x171==x172));

    if (t37 != -256) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x173 = 447643;
	int8_t x174 = INT8_MAX;
	static int32_t x175 = INT32_MIN;
	int16_t x176 = -1;
	int32_t t38 = -1;

    t38 = ((x173+x174)|(x175==x176));

    if (t38 != 447770) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x177 = 464938LLU;
	int64_t x178 = INT64_MAX;
	int64_t x180 = 100309LL;
	volatile uint64_t t39 = 128993109021LLU;

    t39 = ((x177+x178)|(x179==x180));

    if (t39 != 9223372036855240745LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x181 = INT64_MAX;
	static int32_t x182 = INT32_MIN;
	static uint8_t x183 = UINT8_MAX;
	int16_t x184 = INT16_MIN;
	volatile int64_t t40 = -99990536034082LL;

    t40 = ((x181+x182)|(x183==x184));

    if (t40 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x185 = 275U;
	int32_t x187 = -1;
	int32_t x188 = INT32_MIN;
	static volatile uint32_t t41 = 442656U;

    t41 = ((x185+x186)|(x187==x188));

    if (t41 != 3476U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x189 = UINT16_MAX;
	int8_t x190 = INT8_MIN;
	uint8_t x191 = 1U;
	volatile int32_t t42 = 48;

    t42 = ((x189+x190)|(x191==x192));

    if (t42 != 65407) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x194 = INT8_MIN;
	int32_t x195 = INT32_MIN;
	volatile int32_t t43 = 45631;

    t43 = ((x193+x194)|(x195==x196));

    if (t43 != -129) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x198 = INT16_MIN;
	uint8_t x199 = UINT8_MAX;
	uint32_t x200 = 32246U;
	volatile int32_t t44 = 8;

    t44 = ((x197+x198)|(x199==x200));

    if (t44 != -32769) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x201 = -44494123LL;
	uint16_t x202 = UINT16_MAX;
	int16_t x204 = 640;
	static volatile int64_t t45 = 7LL;

    t45 = ((x201+x202)|(x203==x204));

    if (t45 != -44428588LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x205 = 42LL;
	int64_t x206 = 31904380329417LL;
	volatile int32_t x207 = 0;
	volatile uint8_t x208 = UINT8_MAX;

    t46 = ((x205+x206)|(x207==x208));

    if (t46 != 31904380329459LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x209 = 3U;
	static volatile uint16_t x211 = 33U;
	volatile int64_t x212 = INT64_MIN;
	static int32_t t47 = 1420;

    t47 = ((x209+x210)|(x211==x212));

    if (t47 != -12) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x213 = 14U;
	uint16_t x214 = 1097U;
	int16_t x216 = INT16_MIN;
	volatile int32_t t48 = -34535;

    t48 = ((x213+x214)|(x215==x216));

    if (t48 != 1111) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x217 = INT16_MIN;
	uint32_t x218 = 1340U;
	static int8_t x219 = -27;
	uint8_t x220 = 0U;
	static uint32_t t49 = 198U;

    t49 = ((x217+x218)|(x219==x220));

    if (t49 != 4294935868U) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x221 = INT8_MIN;
	int8_t x222 = -14;
	volatile int64_t x223 = 371LL;
	static volatile int32_t t50 = 258708279;

    t50 = ((x221+x222)|(x223==x224));

    if (t50 != -142) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x225 = 420509832U;
	volatile uint8_t x226 = UINT8_MAX;
	uint16_t x227 = 15048U;

    t51 = ((x225+x226)|(x227==x228));

    if (t51 != 420510087U) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x229 = -1;
	uint16_t x232 = 24495U;

    t52 = ((x229+x230)|(x231==x232));

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x233 = -199LL;
	int32_t x236 = INT32_MAX;
	volatile int64_t t53 = 95285327685LL;

    t53 = ((x233+x234)|(x235==x236));

    if (t53 != -229LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x241 = 14427;
	uint32_t x242 = 490836588U;
	static uint64_t x244 = 32086271115100828LLU;
	volatile uint32_t t54 = 128486U;

    t54 = ((x241+x242)|(x243==x244));

    if (t54 != 490851015U) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint32_t x245 = 4058U;
	uint32_t x247 = 367U;
	volatile uint32_t t55 = 2U;

    t55 = ((x245+x246)|(x247==x248));

    if (t55 != 4062U) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x250 = INT8_MAX;
	int64_t x251 = INT64_MAX;
	int32_t x252 = -1;
	volatile uint32_t t56 = 1012812U;

    t56 = ((x249+x250)|(x251==x252));

    if (t56 != 126U) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x255 = INT32_MIN;
	int32_t x256 = INT32_MIN;
	uint64_t t57 = 64494411304187LLU;

    t57 = ((x253+x254)|(x255==x256));

    if (t57 != 21941203342387LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x257 = -1386LL;
	int16_t x258 = -1;
	int32_t x259 = 29394;
	int16_t x260 = -1;

    t58 = ((x257+x258)|(x259==x260));

    if (t58 != -1387LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x265 = INT64_MIN;
	static int32_t x266 = 7872338;
	int16_t x267 = INT16_MIN;
	int16_t x268 = 1;
	volatile int64_t t59 = -291449914443891LL;

    t59 = ((x265+x266)|(x267==x268));

    if (t59 != -9223372036846903470LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x271 = INT8_MIN;
	uint64_t t60 = 3383318374245LLU;

    t60 = ((x269+x270)|(x271==x272));

    if (t60 != 18446743773614029023LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x273 = 2992497267431LLU;
	uint16_t x276 = 13887U;
	static volatile uint64_t t61 = 1069974LLU;

    t61 = ((x273+x274)|(x275==x276));

    if (t61 != 2992497234663LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x277 = -1;
	uint32_t x278 = 34932U;
	uint32_t x279 = UINT32_MAX;
	int32_t x280 = -1;

    t62 = ((x277+x278)|(x279==x280));

    if (t62 != 34931U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x281 = 12813LLU;
	uint32_t x283 = UINT32_MAX;
	int64_t x284 = 2LL;
	static volatile uint64_t t63 = 247782818653949LLU;

    t63 = ((x281+x282)|(x283==x284));

    if (t63 != 18068LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x285 = UINT32_MAX;
	int32_t x287 = INT32_MAX;
	static uint16_t x288 = 123U;

    t64 = ((x285+x286)|(x287==x288));

    if (t64 != 2147483646U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x289 = 3U;
	int16_t x290 = INT16_MIN;

    t65 = ((x289+x290)|(x291==x292));

    if (t65 != -32765) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x293 = 3434;
	uint32_t x294 = 451U;
	int32_t x295 = -1;
	int8_t x296 = -1;
	static uint32_t t66 = 58108581U;

    t66 = ((x293+x294)|(x295==x296));

    if (t66 != 3885U) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x297 = -1LL;
	volatile int64_t x299 = -1554522471318LL;
	uint32_t x300 = 1U;
	volatile int64_t t67 = 466232517LL;

    t67 = ((x297+x298)|(x299==x300));

    if (t67 != 194LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int16_t x301 = -1;
	volatile uint16_t x303 = UINT16_MAX;
	int16_t x304 = INT16_MAX;

    t68 = ((x301+x302)|(x303==x304));

    if (t68 != -2LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x306 = 1U;
	int16_t x307 = INT16_MIN;
	volatile uint16_t x308 = 6732U;

    t69 = ((x305+x306)|(x307==x308));

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x309 = UINT32_MAX;

    t70 = ((x309+x310)|(x311==x312));

    if (t70 != 2147483646U) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x313 = UINT8_MAX;
	static int16_t x314 = INT16_MIN;
	static volatile int16_t x316 = -1;
	volatile int32_t t71 = 135;

    t71 = ((x313+x314)|(x315==x316));

    if (t71 != -32513) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x318 = INT8_MIN;
	int16_t x319 = INT16_MAX;
	int16_t x320 = 105;

    t72 = ((x317+x318)|(x319==x320));

    if (t72 != 437) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x322 = 267312851438328289LL;
	int8_t x323 = INT8_MAX;
	int16_t x324 = -1;
	int64_t t73 = -22081LL;

    t73 = ((x321+x322)|(x323==x324));

    if (t73 != 267312851438331268LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x329 = INT32_MAX;
	int32_t x330 = -2008467;
	int32_t x331 = INT32_MIN;
	static volatile uint32_t x332 = 9668U;
	int32_t t74 = 92;

    t74 = ((x329+x330)|(x331==x332));

    if (t74 != 2145475180) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x333 = 15;
	volatile int16_t x334 = INT16_MIN;
	uint64_t x336 = UINT64_MAX;
	int32_t t75 = -7;

    t75 = ((x333+x334)|(x335==x336));

    if (t75 != -32753) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x337 = UINT8_MAX;
	volatile int16_t x338 = -1;
	uint16_t x339 = UINT16_MAX;
	volatile int32_t t76 = -1;

    t76 = ((x337+x338)|(x339==x340));

    if (t76 != 254) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x341 = INT8_MAX;
	uint64_t x342 = 41799266563723585LLU;
	static volatile int16_t x343 = -1;
	int32_t x344 = INT32_MAX;
	uint64_t t77 = 7320143687201LLU;

    t77 = ((x341+x342)|(x343==x344));

    if (t77 != 41799266563723712LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x349 = INT8_MIN;
	int8_t x350 = INT8_MAX;
	uint64_t x351 = UINT64_MAX;
	volatile int32_t x352 = INT32_MAX;
	int32_t t78 = -351077;

    t78 = ((x349+x350)|(x351==x352));

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x354 = UINT32_MAX;
	int8_t x356 = INT8_MIN;
	static uint32_t t79 = 184596782U;

    t79 = ((x353+x354)|(x355==x356));

    if (t79 != 2031U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x358 = UINT8_MAX;
	int16_t x359 = 0;
	int8_t x360 = INT8_MAX;
	volatile int32_t t80 = -149509;

    t80 = ((x357+x358)|(x359==x360));

    if (t80 != 257) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x362 = 4087458LL;
	uint32_t x363 = 18633U;
	uint32_t x364 = 995U;
	static int64_t t81 = -7LL;

    t81 = ((x361+x362)|(x363==x364));

    if (t81 != 4087483LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint64_t x365 = UINT64_MAX;
	uint16_t x367 = UINT16_MAX;
	int16_t x368 = -1;
	volatile uint64_t t82 = 9927424837951LLU;

    t82 = ((x365+x366)|(x367==x368));

    if (t82 != 18446744073709550919LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x375 = 1U;
	volatile int32_t t83 = -209576;

    t83 = ((x373+x374)|(x375==x376));

    if (t83 != 32639) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x377 = -47;
	int32_t x378 = -496677456;
	volatile int64_t x380 = INT64_MIN;
	int32_t t84 = -134914;

    t84 = ((x377+x378)|(x379==x380));

    if (t84 != -496677503) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x381 = -1;
	int16_t x382 = -1;
	int32_t x383 = -16582558;
	int16_t x384 = 15;
	int32_t t85 = 48737777;

    t85 = ((x381+x382)|(x383==x384));

    if (t85 != -2) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint32_t x385 = 1396200395U;
	int8_t x386 = INT8_MIN;
	uint64_t x388 = 10660533096606450LLU;

    t86 = ((x385+x386)|(x387==x388));

    if (t86 != 1396200267U) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x389 = 1LL;
	int64_t x390 = INT64_MIN;
	int8_t x391 = INT8_MAX;
	int64_t t87 = 3680LL;

    t87 = ((x389+x390)|(x391==x392));

    if (t87 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x393 = -1;
	int8_t x394 = INT8_MIN;
	volatile int64_t x395 = INT64_MAX;
	volatile int32_t t88 = 6269100;

    t88 = ((x393+x394)|(x395==x396));

    if (t88 != -129) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x397 = 766;
	static uint64_t x399 = 85037LLU;
	int8_t x400 = 0;
	volatile int32_t t89 = 7984;

    t89 = ((x397+x398)|(x399==x400));

    if (t89 != 761) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x401 = 867U;
	volatile int64_t x402 = INT64_MIN;
	int32_t x403 = INT32_MAX;
	uint8_t x404 = 5U;
	int64_t t90 = -467691392903934LL;

    t90 = ((x401+x402)|(x403==x404));

    if (t90 != -9223372036854774941LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x405 = 148;
	int16_t x406 = -1;
	uint8_t x407 = 2U;
	int64_t x408 = -1LL;

    t91 = ((x405+x406)|(x407==x408));

    if (t91 != 147) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint16_t x409 = 150U;
	int8_t x411 = INT8_MIN;
	uint16_t x412 = 0U;
	uint32_t t92 = 4848U;

    t92 = ((x409+x410)|(x411==x412));

    if (t92 != 208U) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint8_t x413 = UINT8_MAX;
	uint64_t x414 = 766551LLU;
	volatile uint16_t x415 = UINT16_MAX;
	uint64_t t93 = 289LLU;

    t93 = ((x413+x414)|(x415==x416));

    if (t93 != 766806LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x417 = -1;
	volatile int32_t x418 = INT32_MAX;
	static int32_t x419 = INT32_MAX;
	static int16_t x420 = -14821;

    t94 = ((x417+x418)|(x419==x420));

    if (t94 != 2147483646) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x422 = INT64_MAX;
	int16_t x424 = INT16_MIN;
	int64_t t95 = 117704980LL;

    t95 = ((x421+x422)|(x423==x424));

    if (t95 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x429 = -40;
	int8_t x430 = INT8_MAX;
	int32_t x431 = INT32_MIN;
	uint8_t x432 = 6U;
	volatile int32_t t96 = -439436;

    t96 = ((x429+x430)|(x431==x432));

    if (t96 != 87) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x433 = INT32_MIN;
	int8_t x434 = 1;
	int64_t x435 = -13165LL;
	int16_t x436 = INT16_MAX;
	int32_t t97 = -15253370;

    t97 = ((x433+x434)|(x435==x436));

    if (t97 != -2147483647) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint32_t x437 = 342U;
	static int32_t x438 = -10;
	uint16_t x439 = 26U;
	uint32_t t98 = 9916822U;

    t98 = ((x437+x438)|(x439==x440));

    if (t98 != 332U) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint64_t x441 = 987898144573750LLU;
	int64_t x443 = -265158934030LL;
	uint64_t t99 = 2919LLU;

    t99 = ((x441+x442)|(x443==x444));

    if (t99 != 987898144573749LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x445 = 6LL;
	volatile int16_t x446 = -1085;
	int32_t x447 = INT32_MIN;
	volatile int64_t t100 = -10963126428968641LL;

    t100 = ((x445+x446)|(x447==x448));

    if (t100 != -1079LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x453 = 29074870U;
	int16_t x454 = -122;
	static int64_t x455 = INT64_MIN;
	volatile uint32_t t101 = 6187833U;

    t101 = ((x453+x454)|(x455==x456));

    if (t101 != 29074749U) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint8_t x457 = UINT8_MAX;
	int64_t x459 = 18LL;
	int8_t x460 = -15;
	uint32_t t102 = 241U;

    t102 = ((x457+x458)|(x459==x460));

    if (t102 != 258U) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x461 = 10;
	int64_t x462 = -1LL;
	int64_t x464 = -531844484836LL;
	int64_t t103 = -56973868563867LL;

    t103 = ((x461+x462)|(x463==x464));

    if (t103 != 9LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x465 = 10U;
	int32_t x466 = -103367267;
	volatile uint16_t x467 = UINT16_MAX;
	int8_t x468 = -1;
	int32_t t104 = -24850;

    t104 = ((x465+x466)|(x467==x468));

    if (t104 != -103367257) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x469 = 0LL;
	int16_t x471 = INT16_MIN;
	volatile int64_t t105 = 4LL;

    t105 = ((x469+x470)|(x471==x472));

    if (t105 != -1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x477 = 10U;
	int16_t x478 = INT16_MIN;
	int8_t x479 = -1;
	int64_t x480 = -117625896954613027LL;
	static volatile int32_t t106 = -1;

    t106 = ((x477+x478)|(x479==x480));

    if (t106 != -32758) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x481 = 18U;
	int32_t x483 = -1;
	int32_t t107 = -2607394;

    t107 = ((x481+x482)|(x483==x484));

    if (t107 != 11) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x489 = INT32_MAX;
	static int8_t x490 = -1;
	int16_t x491 = -1;
	uint32_t x492 = UINT32_MAX;
	volatile int32_t t108 = INT32_MAX;

    t108 = ((x489+x490)|(x491==x492));

    if (t108 != INT32_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x493 = UINT64_MAX;
	volatile uint8_t x494 = UINT8_MAX;
	volatile int64_t x495 = -1LL;
	volatile uint8_t x496 = 20U;

    t109 = ((x493+x494)|(x495==x496));

    if (t109 != 254LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x501 = -1LL;
	static volatile int8_t x503 = -1;
	int64_t t110 = -5272721178LL;

    t110 = ((x501+x502)|(x503==x504));

    if (t110 != 4294967294LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x505 = 1;
	volatile int8_t x506 = 2;
	static uint64_t x507 = UINT64_MAX;
	uint16_t x508 = 6U;
	volatile int32_t t111 = 3242105;

    t111 = ((x505+x506)|(x507==x508));

    if (t111 != 3) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x509 = -1;
	int32_t x510 = -14518;
	static uint16_t x511 = 10644U;
	volatile int8_t x512 = 21;
	int32_t t112 = -3853;

    t112 = ((x509+x510)|(x511==x512));

    if (t112 != -14519) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x514 = UINT64_MAX;
	volatile int16_t x516 = 1;
	volatile uint64_t t113 = 16233561LLU;

    t113 = ((x513+x514)|(x515==x516));

    if (t113 != 2LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x518 = -90;
	static uint16_t x519 = 111U;
	volatile int8_t x520 = -1;
	volatile uint64_t t114 = 24390332LLU;

    t114 = ((x517+x518)|(x519==x520));

    if (t114 != 258497185LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x521 = UINT64_MAX;
	int8_t x522 = INT8_MAX;
	static int64_t x523 = 2LL;
	static volatile int8_t x524 = INT8_MAX;
	uint64_t t115 = 0LLU;

    t115 = ((x521+x522)|(x523==x524));

    if (t115 != 126LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x527 = 1;
	static int32_t x528 = INT32_MIN;
	int32_t t116 = 12687;

    t116 = ((x525+x526)|(x527==x528));

    if (t116 != 65535) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x529 = INT8_MAX;
	static uint32_t x531 = 20250U;
	int16_t x532 = INT16_MAX;
	static volatile int64_t t117 = -19025798216LL;

    t117 = ((x529+x530)|(x531==x532));

    if (t117 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x533 = INT32_MIN;
	static volatile int8_t x534 = 0;
	uint8_t x535 = 54U;
	int32_t x536 = INT32_MAX;
	int32_t t118 = INT32_MIN;

    t118 = ((x533+x534)|(x535==x536));

    if (t118 != INT32_MIN) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x539 = INT16_MIN;
	int32_t x540 = -1;

    t119 = ((x537+x538)|(x539==x540));

    if (t119 != -131915890820082LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x545 = UINT8_MAX;
	static int32_t x546 = INT32_MIN;
	int16_t x547 = INT16_MIN;
	int32_t t120 = -1933746;

    t120 = ((x545+x546)|(x547==x548));

    if (t120 != -2147483393) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x553 = -21758;
	static int16_t x554 = 6899;
	uint64_t x555 = 35LLU;
	int16_t x556 = -223;

    t121 = ((x553+x554)|(x555==x556));

    if (t121 != -14859) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x557 = INT16_MAX;
	uint16_t x558 = 2775U;
	static int32_t x559 = INT32_MIN;
	volatile int16_t x560 = INT16_MAX;
	int32_t t122 = 455564;

    t122 = ((x557+x558)|(x559==x560));

    if (t122 != 35542) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x562 = 1U;
	int64_t x564 = INT64_MAX;
	uint64_t t123 = 490289163365740LLU;

    t123 = ((x561+x562)|(x563==x564));

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x565 = INT16_MAX;
	uint8_t x567 = UINT8_MAX;
	static volatile int32_t t124 = 81113;

    t124 = ((x565+x566)|(x567==x568));

    if (t124 != 32768) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x569 = 497939394947LLU;
	int64_t x570 = INT64_MIN;
	uint32_t x571 = UINT32_MAX;
	static uint64_t x572 = UINT64_MAX;
	uint64_t t125 = 4263808809481202LLU;

    t125 = ((x569+x570)|(x571==x572));

    if (t125 != 9223372534794170755LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x573 = 792U;
	static int16_t x575 = INT16_MAX;
	int16_t x576 = -1;
	volatile int64_t t126 = -5386831LL;

    t126 = ((x573+x574)|(x575==x576));

    if (t126 != 791LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x578 = 16U;
	static uint64_t x580 = UINT64_MAX;

    t127 = ((x577+x578)|(x579==x580));

    if (t127 != -2147483632) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x581 = -5925;
	static uint16_t x582 = 29701U;
	int32_t x583 = -1;
	int32_t x584 = INT32_MAX;
	int32_t t128 = -39082122;

    t128 = ((x581+x582)|(x583==x584));

    if (t128 != 23776) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x585 = UINT16_MAX;
	volatile uint64_t x586 = UINT64_MAX;
	volatile uint16_t x587 = 1170U;
	volatile int8_t x588 = -1;
	uint64_t t129 = 3LLU;

    t129 = ((x585+x586)|(x587==x588));

    if (t129 != 65534LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x589 = -8744379;
	volatile int8_t x590 = -1;
	volatile int64_t x592 = INT64_MIN;
	volatile int32_t t130 = 1;

    t130 = ((x589+x590)|(x591==x592));

    if (t130 != -8744380) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x594 = -25;

    t131 = ((x593+x594)|(x595==x596));

    if (t131 != 6391U) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x597 = INT64_MIN;
	static uint8_t x598 = 1U;
	uint64_t x599 = 491918269LLU;
	int32_t x600 = INT32_MAX;
	volatile int64_t t132 = -1LL;

    t132 = ((x597+x598)|(x599==x600));

    if (t132 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x601 = 406130227LL;
	static uint16_t x602 = 127U;
	int32_t x603 = -632397446;
	int32_t x604 = INT32_MAX;

    t133 = ((x601+x602)|(x603==x604));

    if (t133 != 406130354LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x613 = 6LLU;
	static int16_t x614 = 1;
	uint32_t x615 = 139459U;
	int16_t x616 = 7;
	uint64_t t134 = 6241257507334768LLU;

    t134 = ((x613+x614)|(x615==x616));

    if (t134 != 7LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x617 = -54;
	static volatile int32_t t135 = 11036363;

    t135 = ((x617+x618)|(x619==x620));

    if (t135 != -32822) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x621 = INT8_MIN;
	int8_t x623 = 3;
	int32_t x624 = INT32_MIN;
	static int32_t t136 = -90339370;

    t136 = ((x621+x622)|(x623==x624));

    if (t136 != 127) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x625 = -13;
	int64_t x626 = -1LL;
	int8_t x627 = 1;
	int8_t x628 = INT8_MIN;
	static int64_t t137 = 64120809543048LL;

    t137 = ((x625+x626)|(x627==x628));

    if (t137 != -14LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x629 = UINT64_MAX;
	uint16_t x630 = UINT16_MAX;
	volatile uint32_t x631 = 441U;
	int64_t x632 = 124553687483624LL;
	volatile uint64_t t138 = 707819050LLU;

    t138 = ((x629+x630)|(x631==x632));

    if (t138 != 65534LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x633 = 2LLU;
	uint8_t x634 = 33U;
	volatile int16_t x635 = INT16_MAX;
	volatile int8_t x636 = 0;
	volatile uint64_t t139 = 1791456969379297538LLU;

    t139 = ((x633+x634)|(x635==x636));

    if (t139 != 35LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int64_t t140 = -1LL;

    t140 = ((x637+x638)|(x639==x640));

    if (t140 != 2147483646LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x641 = INT64_MAX;
	int64_t x642 = -1LL;

    t141 = ((x641+x642)|(x643==x644));

    if (t141 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x646 = -1659357;
	volatile int8_t x647 = -1;
	int32_t x648 = INT32_MIN;
	int64_t t142 = 29522LL;

    t142 = ((x645+x646)|(x647==x648));

    if (t142 != 9223372036853116450LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x649 = INT16_MAX;
	volatile int8_t x650 = INT8_MIN;
	uint16_t x652 = 4U;
	int32_t t143 = 150045;

    t143 = ((x649+x650)|(x651==x652));

    if (t143 != 32639) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint16_t x653 = 29U;
	uint16_t x654 = 4U;
	int8_t x655 = INT8_MIN;
	int16_t x656 = -1;
	int32_t t144 = -994680396;

    t144 = ((x653+x654)|(x655==x656));

    if (t144 != 33) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x657 = -142;
	uint32_t x658 = 64785837U;
	int8_t x659 = INT8_MAX;
	static int8_t x660 = INT8_MAX;
	uint32_t t145 = 3U;

    t145 = ((x657+x658)|(x659==x660));

    if (t145 != 64785695U) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x661 = INT64_MIN;
	uint32_t x662 = UINT32_MAX;
	int64_t x663 = -452372487403262335LL;
	int8_t x664 = 1;
	static volatile int64_t t146 = -109519787682LL;

    t146 = ((x661+x662)|(x663==x664));

    if (t146 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x666 = -1LL;
	int32_t x667 = -1;
	volatile int64_t t147 = 207798648470LL;

    t147 = ((x665+x666)|(x667==x668));

    if (t147 != -32769LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x669 = UINT64_MAX;
	volatile int64_t x671 = INT64_MIN;
	int32_t x672 = -1;
	static uint64_t t148 = 29335LLU;

    t148 = ((x669+x670)|(x671==x672));

    if (t148 != 4294967294LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x673 = -1;
	uint32_t x675 = 110839U;
	int64_t x676 = INT64_MIN;
	int64_t t149 = 488116LL;

    t149 = ((x673+x674)|(x675==x676));

    if (t149 != 13941LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x677 = 0LL;
	uint64_t x678 = UINT64_MAX;
	uint8_t x679 = UINT8_MAX;
	volatile int64_t x680 = INT64_MIN;
	uint64_t t150 = UINT64_MAX;

    t150 = ((x677+x678)|(x679==x680));

    if (t150 != UINT64_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x681 = UINT64_MAX;
	int16_t x682 = INT16_MIN;
	volatile uint32_t x683 = 237U;
	uint32_t x684 = 528U;
	volatile uint64_t t151 = 116418472LLU;

    t151 = ((x681+x682)|(x683==x684));

    if (t151 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x686 = UINT32_MAX;
	uint16_t x687 = 19U;
	volatile int64_t x688 = INT64_MIN;
	volatile uint32_t t152 = 10545658U;

    t152 = ((x685+x686)|(x687==x688));

    if (t152 != 4294967294U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x689 = 0U;
	uint64_t x690 = 1733703LLU;
	static int64_t x691 = INT64_MAX;

    t153 = ((x689+x690)|(x691==x692));

    if (t153 != 1733703LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x693 = INT64_MIN;
	uint16_t x694 = UINT16_MAX;
	static uint32_t x695 = 3474122U;
	int32_t x696 = -1;
	volatile int64_t t154 = -44917614189869740LL;

    t154 = ((x693+x694)|(x695==x696));

    if (t154 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x698 = INT32_MIN;
	volatile uint16_t x699 = 2074U;
	int8_t x700 = -1;
	static int32_t t155 = -1220688;

    t155 = ((x697+x698)|(x699==x700));

    if (t155 != -2147483627) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x701 = INT32_MIN;
	volatile uint8_t x702 = 2U;
	static volatile int32_t x704 = -1;
	static volatile int32_t t156 = 7024972;

    t156 = ((x701+x702)|(x703==x704));

    if (t156 != -2147483646) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x705 = 0;
	uint64_t x706 = UINT64_MAX;
	uint64_t t157 = UINT64_MAX;

    t157 = ((x705+x706)|(x707==x708));

    if (t157 != UINT64_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x709 = 11441472100LLU;
	static uint32_t x710 = 1701275U;
	volatile uint8_t x711 = UINT8_MAX;
	uint16_t x712 = 8U;
	static uint64_t t158 = 908362646022348698LLU;

    t158 = ((x709+x710)|(x711==x712));

    if (t158 != 11443173375LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x713 = INT16_MIN;
	uint16_t x714 = 17U;
	uint16_t x715 = UINT16_MAX;
	volatile int16_t x716 = 76;
	int32_t t159 = 1;

    t159 = ((x713+x714)|(x715==x716));

    if (t159 != -32751) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x717 = 1;
	uint8_t x718 = 22U;
	int16_t x719 = -13832;
	volatile int32_t t160 = -134658;

    t160 = ((x717+x718)|(x719==x720));

    if (t160 != 23) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x722 = INT64_MIN;
	static volatile uint16_t x724 = 1946U;
	volatile int64_t t161 = 1LL;

    t161 = ((x721+x722)|(x723==x724));

    if (t161 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x725 = 4676894719429546050LLU;
	volatile int8_t x726 = -1;
	static volatile int16_t x727 = INT16_MIN;
	uint64_t x728 = 1411947651693037LLU;
	static volatile uint64_t t162 = 21548293LLU;

    t162 = ((x725+x726)|(x727==x728));

    if (t162 != 4676894719429546049LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x729 = 412580LLU;
	int64_t x730 = INT64_MIN;
	int32_t x731 = INT32_MAX;
	int32_t x732 = -1;

    t163 = ((x729+x730)|(x731==x732));

    if (t163 != 9223372036855188388LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x734 = -6592418964907LL;
	int64_t t164 = 953989698629LL;

    t164 = ((x733+x734)|(x735==x736));

    if (t164 != -6592418963407LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x737 = -56;
	static uint64_t x738 = 37079963483LLU;
	static uint8_t x740 = 0U;
	uint64_t t165 = 0LLU;

    t165 = ((x737+x738)|(x739==x740));

    if (t165 != 37079963427LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x741 = INT16_MIN;
	uint32_t x742 = UINT32_MAX;
	static int8_t x743 = INT8_MIN;
	int64_t x744 = -1LL;
	volatile uint32_t t166 = 4U;

    t166 = ((x741+x742)|(x743==x744));

    if (t166 != 4294934527U) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x752 = INT32_MAX;
	uint64_t t167 = 5920LLU;

    t167 = ((x749+x750)|(x751==x752));

    if (t167 != 9225914483154271087LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x755 = INT32_MIN;
	uint8_t x756 = UINT8_MAX;

    t168 = ((x753+x754)|(x755==x756));

    if (t168 != -2) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x757 = INT16_MIN;
	static uint16_t x758 = 1809U;
	int8_t x759 = 1;
	int16_t x760 = -1;
	volatile int32_t t169 = 4;

    t169 = ((x757+x758)|(x759==x760));

    if (t169 != -30959) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x761 = -1;
	uint8_t x762 = 2U;
	static int16_t x764 = INT16_MIN;
	volatile int32_t t170 = -197;

    t170 = ((x761+x762)|(x763==x764));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x765 = 216514342298LLU;
	int32_t x766 = INT32_MAX;
	int16_t x768 = -1;
	volatile uint64_t t171 = 3594060248LLU;

    t171 = ((x765+x766)|(x767==x768));

    if (t171 != 218661825945LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile uint32_t x769 = 5U;
	static uint64_t x770 = 1353LLU;
	uint8_t x772 = 4U;

    t172 = ((x769+x770)|(x771==x772));

    if (t172 != 1358LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint32_t x773 = 251032U;
	volatile int16_t x774 = 1;
	volatile int16_t x775 = INT16_MAX;
	static int16_t x776 = -2193;
	volatile uint32_t t173 = 2U;

    t173 = ((x773+x774)|(x775==x776));

    if (t173 != 251033U) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x777 = -32;
	uint8_t x778 = 57U;
	volatile uint64_t x779 = 98LLU;
	int32_t t174 = 14271679;

    t174 = ((x777+x778)|(x779==x780));

    if (t174 != 25) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x782 = 4110LLU;
	int8_t x783 = INT8_MIN;
	uint64_t t175 = 5135400707349896LLU;

    t175 = ((x781+x782)|(x783==x784));

    if (t175 != 18446744063958795354LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x785 = INT32_MAX;
	uint64_t x786 = 954LLU;
	uint32_t x787 = UINT32_MAX;
	uint64_t x788 = 223373918323692LLU;
	static uint64_t t176 = 3LLU;

    t176 = ((x785+x786)|(x787==x788));

    if (t176 != 2147484601LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint64_t x789 = 2660338636151952LLU;
	int16_t x790 = INT16_MIN;
	int32_t x791 = INT32_MIN;
	int16_t x792 = -3;

    t177 = ((x789+x790)|(x791==x792));

    if (t177 != 2660338636119184LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x794 = INT64_MIN;
	int64_t x795 = INT64_MIN;
	uint16_t x796 = 1302U;
	volatile int64_t t178 = 583691855084LL;

    t178 = ((x793+x794)|(x795==x796));

    if (t178 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x797 = 59043LLU;
	int32_t x798 = INT32_MIN;
	uint8_t x799 = 77U;
	static int8_t x800 = INT8_MIN;
	uint64_t t179 = 1975694LLU;

    t179 = ((x797+x798)|(x799==x800));

    if (t179 != 18446744071562127011LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x801 = -12;
	int8_t x802 = INT8_MIN;
	uint64_t x803 = 4710432881LLU;
	uint64_t x804 = 23174591887474LLU;
	static volatile int32_t t180 = -495120607;

    t180 = ((x801+x802)|(x803==x804));

    if (t180 != -140) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x805 = INT8_MIN;
	int32_t x806 = INT32_MAX;
	uint16_t x808 = 235U;
	int32_t t181 = -90;

    t181 = ((x805+x806)|(x807==x808));

    if (t181 != 2147483519) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint32_t x814 = UINT32_MAX;
	int64_t x815 = INT64_MIN;

    t182 = ((x813+x814)|(x815==x816));

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x817 = -36;
	volatile uint8_t x818 = UINT8_MAX;
	static uint16_t x819 = 391U;
	int16_t x820 = INT16_MAX;
	static int32_t t183 = 263992;

    t183 = ((x817+x818)|(x819==x820));

    if (t183 != 219) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x821 = UINT8_MAX;
	int16_t x823 = -1;
	static int32_t x824 = INT32_MIN;

    t184 = ((x821+x822)|(x823==x824));

    if (t184 != 254) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x825 = -1;
	uint32_t x826 = 463445996U;
	uint8_t x827 = 1U;
	volatile uint32_t t185 = 42146117U;

    t185 = ((x825+x826)|(x827==x828));

    if (t185 != 463445995U) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x829 = -10943455444LL;
	int32_t x830 = INT32_MAX;
	static int32_t x832 = -1;
	int64_t t186 = -81227LL;

    t186 = ((x829+x830)|(x831==x832));

    if (t186 != -8795971797LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x833 = 9U;
	volatile int64_t x834 = INT64_MIN;
	int32_t x835 = INT32_MIN;
	uint8_t x836 = 1U;
	int64_t t187 = 2027968861552096947LL;

    t187 = ((x833+x834)|(x835==x836));

    if (t187 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x838 = 103922U;
	int8_t x839 = 3;
	uint32_t t188 = 177041573U;

    t188 = ((x837+x838)|(x839==x840));

    if (t188 != 103922U) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x841 = 0;
	static int32_t x842 = INT32_MIN;
	volatile int16_t x843 = -1;
	uint64_t x844 = UINT64_MAX;
	volatile int32_t t189 = 2734;

    t189 = ((x841+x842)|(x843==x844));

    if (t189 != -2147483647) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x849 = 12295U;
	int64_t x850 = INT64_MIN;
	uint32_t x852 = 1272337882U;
	int64_t t190 = -1LL;

    t190 = ((x849+x850)|(x851==x852));

    if (t190 != -9223372036854763513LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x853 = 194U;
	int64_t x854 = 8660146616314479LL;
	int16_t x856 = 6901;
	int64_t t191 = -574439952LL;

    t191 = ((x853+x854)|(x855==x856));

    if (t191 != 8660146616314673LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x861 = -91025427182LL;
	static int16_t x862 = 1814;
	int16_t x863 = INT16_MIN;
	int16_t x864 = INT16_MAX;
	int64_t t192 = -27653LL;

    t192 = ((x861+x862)|(x863==x864));

    if (t192 != -91025425368LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x865 = 15;
	int64_t x866 = INT64_MIN;
	int32_t x867 = INT32_MIN;
	int32_t x868 = 29361111;

    t193 = ((x865+x866)|(x867==x868));

    if (t193 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x869 = UINT8_MAX;
	int64_t x870 = -1LL;
	int32_t x871 = 302;
	uint32_t x872 = 5424U;
	static volatile int64_t t194 = 27222809211101903LL;

    t194 = ((x869+x870)|(x871==x872));

    if (t194 != 254LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x873 = 2U;
	uint8_t x874 = 55U;
	int32_t x876 = -113536;
	int32_t t195 = -92401;

    t195 = ((x873+x874)|(x875==x876));

    if (t195 != 57) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x881 = 6U;
	int16_t x882 = -1;
	int64_t x883 = -1LL;
	int32_t x884 = 11;

    t196 = ((x881+x882)|(x883==x884));

    if (t196 != 5) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x885 = INT64_MAX;
	int32_t x886 = INT32_MIN;
	volatile int64_t x887 = INT64_MIN;
	volatile uint16_t x888 = 5U;
	static volatile int64_t t197 = 3909850LL;

    t197 = ((x885+x886)|(x887==x888));

    if (t197 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x889 = 1U;
	int16_t x890 = INT16_MAX;
	int16_t x891 = INT16_MIN;
	static int16_t x892 = INT16_MIN;
	int32_t t198 = -405501061;

    t198 = ((x889+x890)|(x891==x892));

    if (t198 != 32769) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x893 = 160U;
	int64_t x894 = -1LL;
	static int64_t x896 = INT64_MAX;
	int64_t t199 = 4473470986LL;

    t199 = ((x893+x894)|(x895==x896));

    if (t199 != 159LL) { NG(); } else { ; }
	
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

