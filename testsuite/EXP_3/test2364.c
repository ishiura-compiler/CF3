
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

static int32_t x4 = INT32_MIN;
volatile int32_t t0 = 0;
static int16_t x7 = INT16_MIN;
static int32_t x16 = INT32_MIN;
static int8_t x18 = -1;
int16_t x19 = INT16_MAX;
uint32_t x22 = 13U;
volatile uint64_t x29 = 294248403426481890LLU;
static uint32_t x39 = 426226U;
uint64_t x41 = 905LLU;
int8_t x44 = -1;
volatile uint64_t t9 = 256940LLU;
static int16_t x46 = 19;
volatile int64_t x55 = -1LL;
int64_t x70 = INT64_MIN;
static uint32_t x72 = UINT32_MAX;
int16_t x82 = -1;
uint32_t t17 = 6417U;
volatile int8_t x94 = -1;
int8_t x106 = -1;
int8_t x108 = INT8_MAX;
static int64_t x114 = -5724LL;
uint64_t t25 = 127LLU;
static uint8_t x117 = 43U;
int16_t x118 = 1;
int16_t x122 = INT16_MAX;
volatile int32_t x124 = INT32_MIN;
uint32_t x128 = 61961U;
int16_t x129 = INT16_MIN;
int64_t t29 = -7630710LL;
static int32_t x152 = INT32_MAX;
int32_t x157 = -1;
int32_t x167 = INT32_MIN;
int16_t x168 = -1;
int16_t x171 = INT16_MAX;
uint8_t x190 = 32U;
static int32_t t41 = -1;
uint32_t x194 = 878764U;
int64_t t42 = -38LL;
int32_t x201 = INT32_MIN;
int64_t t44 = 0LL;
static int16_t x205 = INT16_MAX;
static volatile int8_t x209 = -1;
int64_t t46 = 15LL;
uint32_t t50 = 0U;
static uint32_t x233 = 7U;
static uint32_t x244 = 32426U;
volatile int64_t t53 = -860622LL;
static int32_t x245 = INT32_MIN;
volatile int32_t t54 = -111;
uint16_t x253 = UINT16_MAX;
static int32_t x254 = INT32_MIN;
int64_t x259 = -3LL;
static uint16_t x267 = UINT16_MAX;
int32_t t57 = -7538433;
int32_t x272 = INT32_MIN;
uint32_t x299 = 1U;
volatile int64_t t64 = 51577723LL;
uint64_t t67 = 95LLU;
volatile int16_t x317 = -290;
uint8_t x320 = UINT8_MAX;
int8_t x323 = 43;
int8_t x335 = INT8_MAX;
uint8_t x356 = UINT8_MAX;
static int64_t x359 = INT64_MAX;
uint64_t t77 = 28365235713677LLU;
uint32_t x363 = 124U;
uint32_t x366 = 2323112U;
int32_t x368 = INT32_MIN;
int32_t x369 = -1;
uint8_t x374 = UINT8_MAX;
uint32_t x375 = UINT32_MAX;
uint8_t x376 = 95U;
uint32_t t81 = 153889836U;
volatile int16_t x379 = -1;
int64_t x382 = -4580910LL;
uint16_t x383 = UINT16_MAX;
uint64_t t84 = 10560942283764LLU;
volatile int64_t x391 = 738289378534LL;
static int64_t x394 = -77LL;
volatile uint64_t x395 = 13701865098351LLU;
int16_t x399 = INT16_MIN;
uint16_t x400 = 202U;
int8_t x405 = INT8_MIN;
int16_t x407 = -22;
int8_t x410 = -8;
int8_t x416 = INT8_MIN;
volatile int64_t t90 = -55411069505919LL;
int16_t x417 = -59;
static uint32_t x422 = 44262120U;
volatile int64_t t93 = 0LL;
volatile int32_t t94 = 0;
int32_t x435 = INT32_MIN;
int64_t x443 = -1LL;
int64_t t100 = 238LL;
static int32_t x466 = INT32_MIN;
static uint16_t x470 = UINT16_MAX;
int8_t x479 = 0;
volatile uint32_t t105 = 5U;
static volatile int8_t x488 = -1;
static int16_t x489 = 135;
uint8_t x490 = UINT8_MAX;
volatile int64_t x498 = INT64_MIN;
int16_t x501 = -1;
uint8_t x503 = 0U;
int64_t t111 = -25988145317083LL;
static int32_t x511 = -1;
static uint32_t x516 = UINT32_MAX;
volatile uint32_t t113 = 55U;
int32_t t115 = INT32_MIN;
int32_t x531 = INT32_MIN;
volatile int64_t x537 = -245153620951LL;
static volatile int64_t x539 = 217LL;
volatile uint64_t t118 = 65500568790730775LLU;
int8_t x541 = INT8_MIN;
int64_t x544 = INT64_MAX;
int64_t x547 = 7757LL;
int8_t x553 = INT8_MIN;
int64_t t122 = -514191LL;
uint64_t t124 = 643747367868278LLU;
static int64_t x572 = -1093605045712373LL;
volatile uint8_t x576 = 34U;
static int8_t x578 = -1;
volatile int64_t t127 = 11264137503727715LL;
int32_t x582 = -1;
uint64_t x583 = 103830LLU;
volatile uint8_t x584 = UINT8_MAX;
static int32_t x586 = -56966264;
int64_t x587 = INT64_MIN;
volatile int8_t x588 = INT8_MAX;
volatile uint64_t t129 = 200LLU;
uint32_t x591 = 961175863U;
int64_t x599 = 2579315877215309706LL;
static volatile uint32_t t133 = 683570U;
static int64_t x610 = 5376646LL;
static int16_t x615 = 498;
volatile int8_t x621 = INT8_MAX;
int32_t x624 = INT32_MIN;
int8_t x629 = -23;
static int16_t x631 = -8093;
int32_t t139 = 442;
int8_t x638 = 17;
uint64_t t141 = 259145304LLU;
int64_t x663 = 4105952LL;
uint16_t x670 = 51U;
int32_t x671 = INT32_MIN;
uint8_t x679 = 0U;
static int8_t x681 = -1;
volatile int32_t x683 = INT32_MIN;
int32_t x684 = 137476;
uint8_t x685 = 12U;
int32_t x687 = 3;
int64_t t149 = -856750631335147LL;
int8_t x695 = 1;
volatile int32_t x701 = -4329645;
static int32_t x703 = -1;
volatile uint64_t t154 = 1011LLU;
volatile int32_t t155 = -116790;
int16_t x714 = -7184;
static uint32_t x716 = UINT32_MAX;
uint32_t t156 = 9461U;
int16_t x717 = -1;
static int8_t x724 = -22;
volatile uint64_t t160 = 101621172702LLU;
int8_t x739 = INT8_MAX;
volatile int16_t x743 = -23;
volatile int8_t x744 = -1;
volatile uint64_t x747 = UINT64_MAX;
int32_t x758 = -5775099;
int64_t x760 = -1LL;
volatile uint32_t t167 = 61297380U;
static uint64_t x778 = UINT64_MAX;
int32_t x781 = INT32_MIN;
uint32_t x784 = UINT32_MAX;
static int64_t x786 = -1LL;
int64_t x791 = INT64_MIN;
int32_t x792 = -32168;
volatile int32_t x800 = -1;
uint64_t t174 = 115538675LLU;
uint8_t x801 = UINT8_MAX;
static volatile int64_t x802 = INT64_MIN;
int16_t x803 = 1571;
static int16_t x805 = INT16_MIN;
uint64_t x818 = 107312558272367LLU;
static volatile uint16_t x821 = 225U;
int8_t x831 = INT8_MAX;
volatile int16_t x834 = INT16_MAX;
int8_t x835 = -1;
static uint32_t x836 = 1212U;
uint32_t t182 = 170U;
static int64_t x847 = -225988654673434022LL;
volatile int8_t x852 = -1;
uint32_t t185 = 2166U;
int16_t x854 = INT16_MIN;
static int16_t x867 = -1;
int32_t t189 = -1;
uint8_t x873 = 5U;
int32_t x882 = INT32_MIN;
uint32_t x883 = 1418579950U;
int16_t x884 = INT16_MIN;
volatile uint32_t x888 = UINT32_MAX;
uint32_t x897 = UINT32_MAX;
static int8_t x906 = -1;
volatile int32_t t195 = -103828;
static uint32_t x909 = 11U;
uint16_t x910 = 3U;
int64_t x912 = -218958488080140456LL;
uint16_t x913 = UINT16_MAX;
static int16_t x916 = -3;
uint32_t x920 = 493U;
int64_t t198 = -1LL;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	int32_t x2 = INT32_MAX;
	int32_t x3 = -1;

    t0 = ((x1+x2)&(x3|x4));

    if (t0 != 2147450879) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = 1;
	int64_t x6 = 688154671057212LL;
	int32_t x8 = INT32_MIN;
	static volatile int64_t t1 = 32678269LL;

    t1 = ((x5+x6)&(x7|x8));

    if (t1 != 688154671054848LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x13 = 13U;
	uint16_t x14 = UINT16_MAX;
	volatile uint64_t x15 = 533651389LLU;
	uint64_t t2 = 48023356750147LLU;

    t2 = ((x13+x14)&(x15|x16));

    if (t2 != 12LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = -1;
	uint16_t x20 = 1U;
	int32_t t3 = -435625;

    t3 = ((x17+x18)&(x19|x20));

    if (t3 != 32766) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x21 = INT8_MAX;
	static uint32_t x23 = UINT32_MAX;
	uint16_t x24 = 3U;
	volatile uint32_t t4 = 1379781U;

    t4 = ((x21+x22)&(x23|x24));

    if (t4 != 140U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x25 = 210U;
	uint16_t x26 = 334U;
	int8_t x27 = -1;
	static int64_t x28 = -1LL;
	int64_t t5 = 39524802931557603LL;

    t5 = ((x25+x26)&(x27|x28));

    if (t5 != 544LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x30 = INT64_MIN;
	int8_t x31 = -2;
	volatile int64_t x32 = 7LL;
	volatile uint64_t t6 = 17266771295LLU;

    t6 = ((x29+x30)&(x31|x32));

    if (t6 != 9517620440281257698LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x33 = -1LL;
	volatile uint32_t x34 = UINT32_MAX;
	volatile uint8_t x35 = UINT8_MAX;
	int64_t x36 = 367389822776678959LL;
	int64_t t7 = -875428LL;

    t7 = ((x33+x34)&(x35|x36));

    if (t7 != 3904019198LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x37 = 1542836439U;
	static uint32_t x38 = 1008168U;
	static int8_t x40 = -13;
	volatile uint32_t t8 = 179323771U;

    t8 = ((x37+x38)&(x39|x40));

    if (t8 != 1543844595U) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x42 = INT8_MAX;
	volatile int8_t x43 = INT8_MIN;

    t9 = ((x41+x42)&(x43|x44));

    if (t9 != 1032LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x45 = 41LLU;
	uint8_t x47 = UINT8_MAX;
	uint8_t x48 = 60U;
	uint64_t t10 = 206539035679LLU;

    t10 = ((x45+x46)&(x47|x48));

    if (t10 != 60LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x49 = 4983U;
	uint8_t x50 = UINT8_MAX;
	uint64_t x51 = 78752LLU;
	uint8_t x52 = 16U;
	uint64_t t11 = 120712559225805LLU;

    t11 = ((x49+x50)&(x51|x52));

    if (t11 != 4144LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x53 = UINT16_MAX;
	volatile uint32_t x54 = 757U;
	int16_t x56 = INT16_MIN;
	int64_t t12 = 371248980177LL;

    t12 = ((x53+x54)&(x55|x56));

    if (t12 != 66292LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x57 = 3677645LLU;
	int32_t x58 = 56;
	uint8_t x59 = UINT8_MAX;
	int64_t x60 = -244145LL;
	uint64_t t13 = 1384LLU;

    t13 = ((x57+x58)&(x59|x60));

    if (t13 != 3671557LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = -7302660LL;
	uint64_t x62 = UINT64_MAX;
	static uint8_t x63 = UINT8_MAX;
	static uint64_t x64 = 5400623544LLU;
	volatile uint64_t t14 = 115810LLU;

    t14 = ((x61+x62)&(x63|x64));

    if (t14 != 5393912315LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x69 = 7279354571856LL;
	static int16_t x71 = -342;
	static int64_t t15 = 1995091840830320487LL;

    t15 = ((x69+x70)&(x71|x72));

    if (t15 != 3679972432LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x77 = -1LL;
	int8_t x78 = INT8_MAX;
	volatile uint16_t x79 = 3U;
	int16_t x80 = INT16_MIN;
	volatile int64_t t16 = -3926LL;

    t16 = ((x77+x78)&(x79|x80));

    if (t16 != 2LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x81 = INT16_MIN;
	volatile uint32_t x83 = 394281535U;
	static uint32_t x84 = 0U;

    t17 = ((x81+x82)&(x83|x84));

    if (t17 != 394281535U) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x85 = INT8_MAX;
	uint64_t x86 = 16650510120LLU;
	static uint16_t x87 = 14918U;
	int16_t x88 = -1;
	uint64_t t18 = 2116175445LLU;

    t18 = ((x85+x86)&(x87|x88));

    if (t18 != 16650510247LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x89 = INT32_MIN;
	uint16_t x90 = 372U;
	volatile uint16_t x91 = 24177U;
	static uint8_t x92 = UINT8_MAX;
	static int32_t t19 = -6;

    t19 = ((x89+x90)&(x91|x92));

    if (t19 != 116) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x93 = UINT64_MAX;
	static volatile int8_t x95 = -1;
	int16_t x96 = -1;
	uint64_t t20 = 13620616580LLU;

    t20 = ((x93+x94)&(x95|x96));

    if (t20 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x97 = UINT8_MAX;
	int32_t x98 = INT32_MIN;
	volatile int64_t x99 = -1LL;
	static uint32_t x100 = 1616675U;
	static volatile int64_t t21 = 3260199729412LL;

    t21 = ((x97+x98)&(x99|x100));

    if (t21 != -2147483393LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x101 = INT64_MIN;
	uint8_t x102 = UINT8_MAX;
	static int64_t x103 = INT64_MAX;
	int8_t x104 = INT8_MIN;
	static int64_t t22 = -7540644LL;

    t22 = ((x101+x102)&(x103|x104));

    if (t22 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x105 = INT8_MIN;
	static volatile uint16_t x107 = 3303U;
	int32_t t23 = 2453576;

    t23 = ((x105+x106)&(x107|x108));

    if (t23 != 3199) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x109 = -30;
	int32_t x110 = -1;
	static uint32_t x111 = 12U;
	volatile int32_t x112 = 3;
	uint32_t t24 = 54767859U;

    t24 = ((x109+x110)&(x111|x112));

    if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x113 = 3540071945365LL;
	volatile uint64_t x115 = UINT64_MAX;
	int64_t x116 = 7404LL;

    t25 = ((x113+x114)&(x115|x116));

    if (t25 != 3540071939641LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x119 = UINT32_MAX;
	volatile int8_t x120 = INT8_MAX;
	volatile uint32_t t26 = 832U;

    t26 = ((x117+x118)&(x119|x120));

    if (t26 != 44U) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x121 = -2;
	static int8_t x123 = INT8_MAX;
	volatile int32_t t27 = -1;

    t27 = ((x121+x122)&(x123|x124));

    if (t27 != 125) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x125 = 2139U;
	uint8_t x126 = 30U;
	static int64_t x127 = INT64_MIN;
	int64_t t28 = -3LL;

    t28 = ((x125+x126)&(x127|x128));

    if (t28 != 9LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x130 = INT64_MAX;
	volatile uint8_t x131 = 100U;
	static volatile int64_t x132 = INT64_MIN;

    t29 = ((x129+x130)&(x131|x132));

    if (t29 != 100LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x133 = INT16_MIN;
	uint8_t x134 = 9U;
	static uint64_t x135 = UINT64_MAX;
	uint32_t x136 = 7421U;
	volatile uint64_t t30 = 648LLU;

    t30 = ((x133+x134)&(x135|x136));

    if (t30 != 18446744073709518857LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x137 = INT16_MIN;
	uint32_t x138 = UINT32_MAX;
	int16_t x139 = -1519;
	int64_t x140 = 9395938850903962LL;
	volatile int64_t t31 = 89172LL;

    t31 = ((x137+x138)&(x139|x140));

    if (t31 != 4294934427LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x141 = INT16_MAX;
	int64_t x142 = 1LL;
	int8_t x143 = INT8_MIN;
	int64_t x144 = 13LL;
	volatile int64_t t32 = -96LL;

    t32 = ((x141+x142)&(x143|x144));

    if (t32 != 32768LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint16_t x149 = 5U;
	static volatile int16_t x150 = 12522;
	int8_t x151 = INT8_MIN;
	int32_t t33 = 106491193;

    t33 = ((x149+x150)&(x151|x152));

    if (t33 != 12527) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint16_t x158 = UINT16_MAX;
	static uint32_t x159 = UINT32_MAX;
	uint16_t x160 = 118U;
	uint32_t t34 = 1063881375U;

    t34 = ((x157+x158)&(x159|x160));

    if (t34 != 65534U) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x161 = 65682605;
	volatile int16_t x162 = -1;
	int64_t x163 = INT64_MIN;
	static int8_t x164 = -41;
	int64_t t35 = -332635900LL;

    t35 = ((x161+x162)&(x163|x164));

    if (t35 != 65682564LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x165 = 2U;
	static uint64_t x166 = 5279214853LLU;
	volatile uint64_t t36 = 272608379853LLU;

    t36 = ((x165+x166)&(x167|x168));

    if (t36 != 5279214855LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x169 = 13704U;
	int64_t x170 = -4052765491621749LL;
	static volatile uint8_t x172 = UINT8_MAX;
	static int64_t t37 = 31839544065LL;

    t37 = ((x169+x170)&(x171|x172));

    if (t37 != 17939LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x173 = INT16_MAX;
	int64_t x174 = -43LL;
	static uint16_t x175 = 3U;
	static uint32_t x176 = 94880U;
	static int64_t t38 = 1214119162LL;

    t38 = ((x173+x174)&(x175|x176));

    if (t38 != 29312LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x177 = -22LL;
	int8_t x178 = INT8_MIN;
	uint8_t x179 = UINT8_MAX;
	int32_t x180 = -1;
	int64_t t39 = 3523LL;

    t39 = ((x177+x178)&(x179|x180));

    if (t39 != -150LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x181 = INT16_MIN;
	volatile int16_t x182 = INT16_MAX;
	static int64_t x183 = -57099914095079305LL;
	int8_t x184 = INT8_MIN;
	volatile int64_t t40 = -186160734LL;

    t40 = ((x181+x182)&(x183|x184));

    if (t40 != -9LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x189 = 2U;
	static int16_t x191 = INT16_MIN;
	uint8_t x192 = 19U;

    t41 = ((x189+x190)&(x191|x192));

    if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x193 = 66612571LL;
	int32_t x195 = -1;
	uint32_t x196 = UINT32_MAX;

    t42 = ((x193+x194)&(x195|x196));

    if (t42 != 67491335LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x197 = INT64_MIN;
	int8_t x198 = INT8_MAX;
	volatile int32_t x199 = -1;
	static uint64_t x200 = 18614LLU;
	uint64_t t43 = 3321419907506LLU;

    t43 = ((x197+x198)&(x199|x200));

    if (t43 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x202 = -8283573076649031LL;
	static int16_t x203 = INT16_MIN;
	uint16_t x204 = 161U;

    t44 = ((x201+x202)&(x203|x204));

    if (t44 != -8283575224139615LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x206 = -1;
	volatile int16_t x207 = INT16_MIN;
	volatile uint32_t x208 = 38050865U;
	volatile uint32_t t45 = 959497339U;

    t45 = ((x205+x206)&(x207|x208));

    if (t45 != 7216U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x210 = 1756878U;
	int8_t x211 = INT8_MIN;
	int64_t x212 = -162LL;

    t46 = ((x209+x210)&(x211|x212));

    if (t46 != 1756876LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x213 = INT16_MAX;
	int64_t x214 = -1LL;
	int32_t x215 = -8177;
	static int16_t x216 = -1;
	int64_t t47 = -6855025021LL;

    t47 = ((x213+x214)&(x215|x216));

    if (t47 != 32766LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x217 = 11591928U;
	static int64_t x218 = -12103904583LL;
	uint64_t x219 = 15815LLU;
	int32_t x220 = INT32_MIN;
	uint64_t t48 = 49055LLU;

    t48 = ((x217+x218)&(x219|x220));

    if (t48 != 18446744060824662401LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x225 = 52LL;
	static int8_t x226 = 8;
	int16_t x227 = INT16_MIN;
	int32_t x228 = -1818460;
	volatile int64_t t49 = 62688352688921201LL;

    t49 = ((x225+x226)&(x227|x228));

    if (t49 != 36LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x229 = INT32_MIN;
	uint32_t x230 = 4770457U;
	static volatile uint8_t x231 = 91U;
	static int32_t x232 = -1;

    t50 = ((x229+x230)&(x231|x232));

    if (t50 != 2152254105U) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x234 = INT8_MAX;
	static uint8_t x235 = 2U;
	static int32_t x236 = INT32_MIN;
	volatile uint32_t t51 = 945U;

    t51 = ((x233+x234)&(x235|x236));

    if (t51 != 2U) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x237 = 447135623930277949LL;
	int16_t x238 = 687;
	volatile int32_t x239 = -495;
	int64_t x240 = INT64_MIN;
	static int64_t t52 = 32608742347LL;

    t52 = ((x237+x238)&(x239|x240));

    if (t52 != 447135623930278400LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x241 = -7871846486346LL;
	static volatile int8_t x242 = INT8_MIN;
	int64_t x243 = INT64_MIN;

    t53 = ((x241+x242)&(x243|x244));

    if (t53 != -9223372036854747614LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x246 = 1232;
	int8_t x247 = -1;
	static int32_t x248 = INT32_MAX;

    t54 = ((x245+x246)&(x247|x248));

    if (t54 != -2147482416) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint32_t x255 = 52923573U;
	static uint32_t x256 = 464259044U;
	uint32_t t55 = 143443U;

    t55 = ((x253+x254)&(x255|x256));

    if (t55 != 36853U) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x257 = -1;
	static volatile int8_t x258 = INT8_MIN;
	int64_t x260 = INT64_MIN;
	volatile int64_t t56 = 119561LL;

    t56 = ((x257+x258)&(x259|x260));

    if (t56 != -131LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x265 = 131;
	uint16_t x266 = UINT16_MAX;
	int16_t x268 = 120;

    t57 = ((x265+x266)&(x267|x268));

    if (t57 != 130) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x269 = -1;
	int16_t x270 = -1;
	int32_t x271 = INT32_MIN;
	volatile int32_t t58 = INT32_MIN;

    t58 = ((x269+x270)&(x271|x272));

    if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x273 = 752U;
	volatile uint64_t x274 = UINT64_MAX;
	int64_t x275 = -1LL;
	volatile int8_t x276 = INT8_MIN;
	volatile uint64_t t59 = 243209471630996LLU;

    t59 = ((x273+x274)&(x275|x276));

    if (t59 != 751LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int8_t x281 = 10;
	volatile uint64_t x282 = UINT64_MAX;
	int64_t x283 = INT64_MAX;
	int32_t x284 = INT32_MIN;
	volatile uint64_t t60 = 1144LLU;

    t60 = ((x281+x282)&(x283|x284));

    if (t60 != 9LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x285 = 1;
	int64_t x286 = 931129049564053LL;
	static volatile uint8_t x287 = 1U;
	volatile uint8_t x288 = 85U;
	volatile int64_t t61 = -3848169798LL;

    t61 = ((x285+x286)&(x287|x288));

    if (t61 != 20LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x289 = 13233;
	uint16_t x290 = UINT16_MAX;
	volatile int32_t x291 = 1441355;
	volatile uint16_t x292 = 83U;
	int32_t t62 = 238576752;

    t62 = ((x289+x290)&(x291|x292));

    if (t62 != 78352) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int16_t x293 = -1;
	uint16_t x294 = 10575U;
	uint8_t x295 = UINT8_MAX;
	int16_t x296 = -1;
	volatile int32_t t63 = -567753204;

    t63 = ((x293+x294)&(x295|x296));

    if (t63 != 10574) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x297 = INT16_MIN;
	static int8_t x298 = -5;
	static int64_t x300 = INT64_MIN;

    t64 = ((x297+x298)&(x299|x300));

    if (t64 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x301 = INT32_MIN;
	static int16_t x302 = 5;
	int64_t x303 = INT64_MIN;
	static uint32_t x304 = 2474405U;
	int64_t t65 = 1LL;

    t65 = ((x301+x302)&(x303|x304));

    if (t65 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x305 = -1;
	int8_t x306 = -1;
	volatile int64_t x307 = 7LL;
	int32_t x308 = INT32_MIN;
	volatile int64_t t66 = 1941774623300798LL;

    t66 = ((x305+x306)&(x307|x308));

    if (t66 != -2147483642LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x309 = 148956924LLU;
	int64_t x310 = INT64_MAX;
	int32_t x311 = INT32_MAX;
	int32_t x312 = -1;

    t67 = ((x309+x310)&(x311|x312));

    if (t67 != 9223372037003732731LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x313 = UINT8_MAX;
	static uint16_t x314 = UINT16_MAX;
	int8_t x315 = -1;
	volatile uint8_t x316 = 23U;
	static volatile int32_t t68 = 0;

    t68 = ((x313+x314)&(x315|x316));

    if (t68 != 65790) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x318 = INT16_MIN;
	uint8_t x319 = UINT8_MAX;
	volatile int32_t t69 = 82232;

    t69 = ((x317+x318)&(x319|x320));

    if (t69 != 222) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x321 = 151;
	volatile int64_t x322 = INT64_MIN;
	int8_t x324 = -1;
	int64_t t70 = 38083549868LL;

    t70 = ((x321+x322)&(x323|x324));

    if (t70 != -9223372036854775657LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x329 = INT16_MAX;
	uint16_t x330 = 67U;
	int8_t x331 = -9;
	uint8_t x332 = UINT8_MAX;
	volatile int32_t t71 = 24949022;

    t71 = ((x329+x330)&(x331|x332));

    if (t71 != 32834) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x333 = INT16_MIN;
	static int64_t x334 = INT64_MAX;
	int8_t x336 = INT8_MIN;
	static int64_t t72 = -444042599369022339LL;

    t72 = ((x333+x334)&(x335|x336));

    if (t72 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x337 = INT64_MIN;
	uint16_t x338 = UINT16_MAX;
	volatile uint64_t x339 = 6388LLU;
	int64_t x340 = INT64_MIN;
	uint64_t t73 = 2495752264LLU;

    t73 = ((x337+x338)&(x339|x340));

    if (t73 != 9223372036854782196LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x345 = INT32_MAX;
	uint64_t x346 = 17549665263753LLU;
	static int8_t x347 = -1;
	int16_t x348 = INT16_MAX;
	static volatile uint64_t t74 = 129041243244176826LLU;

    t74 = ((x345+x346)&(x347|x348));

    if (t74 != 17551812747400LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x349 = INT32_MIN;
	int64_t x350 = 249495325650879370LL;
	static int64_t x351 = INT64_MIN;
	int16_t x352 = INT16_MAX;
	int64_t t75 = 1263795719356LL;

    t75 = ((x349+x350)&(x351|x352));

    if (t75 != 906LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x353 = UINT64_MAX;
	volatile int32_t x354 = INT32_MIN;
	static int32_t x355 = INT32_MAX;
	volatile uint64_t t76 = 1830312819LLU;

    t76 = ((x353+x354)&(x355|x356));

    if (t76 != 2147483647LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x357 = UINT64_MAX;
	volatile int8_t x358 = -1;
	int32_t x360 = INT32_MIN;

    t77 = ((x357+x358)&(x359|x360));

    if (t77 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x361 = INT8_MIN;
	int64_t x362 = INT64_MAX;
	int8_t x364 = INT8_MIN;
	static int64_t t78 = -464LL;

    t78 = ((x361+x362)&(x363|x364));

    if (t78 != 4294967164LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x365 = -1;
	uint8_t x367 = 20U;
	volatile uint32_t t79 = 5U;

    t79 = ((x365+x366)&(x367|x368));

    if (t79 != 4U) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint16_t x370 = UINT16_MAX;
	static volatile int16_t x371 = -3645;
	uint64_t x372 = UINT64_MAX;
	static uint64_t t80 = 645473LLU;

    t80 = ((x369+x370)&(x371|x372));

    if (t80 != 65534LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x373 = INT8_MAX;

    t81 = ((x373+x374)&(x375|x376));

    if (t81 != 382U) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x377 = -1248570797636937LL;
	int16_t x378 = INT16_MAX;
	static uint64_t x380 = UINT64_MAX;
	volatile uint64_t t82 = 99506923899667431LLU;

    t82 = ((x377+x378)&(x379|x380));

    if (t82 != 18445495502911947446LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x381 = INT16_MIN;
	static int32_t x384 = INT32_MIN;
	volatile int64_t t83 = -41523090460009LL;

    t83 = ((x381+x382)&(x383|x384));

    if (t83 != -2147444270LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile uint64_t x385 = 30857LLU;
	uint64_t x386 = 33432065505LLU;
	static int64_t x387 = INT64_MAX;
	uint64_t x388 = UINT64_MAX;

    t84 = ((x385+x386)&(x387|x388));

    if (t84 != 33432096362LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x389 = -1;
	volatile uint8_t x390 = 4U;
	uint64_t x392 = 1776126354523LLU;
	uint64_t t85 = 53921LLU;

    t85 = ((x389+x390)&(x391|x392));

    if (t85 != 3LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x393 = INT32_MIN;
	int16_t x396 = 8;
	volatile uint64_t t86 = 814268LLU;

    t86 = ((x393+x394)&(x395|x396));

    if (t86 != 13701865098275LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x397 = INT16_MAX;
	static volatile uint32_t x398 = 127656U;
	uint32_t t87 = 1850U;

    t87 = ((x397+x398)&(x399|x400));

    if (t87 != 131202U) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint64_t x406 = UINT64_MAX;
	static uint8_t x408 = 61U;
	static volatile uint64_t t88 = 42202415624270302LLU;

    t88 = ((x405+x406)&(x407|x408));

    if (t88 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x409 = -1;
	int8_t x411 = INT8_MIN;
	volatile int32_t x412 = -1;
	volatile int32_t t89 = 553197637;

    t89 = ((x409+x410)&(x411|x412));

    if (t89 != -9) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x413 = 2175529LL;
	uint8_t x414 = 3U;
	int16_t x415 = INT16_MAX;

    t90 = ((x413+x414)&(x415|x416));

    if (t90 != 2175532LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x418 = 911127228U;
	int64_t x419 = -1LL;
	static int32_t x420 = INT32_MIN;
	int64_t t91 = 0LL;

    t91 = ((x417+x418)&(x419|x420));

    if (t91 != 911127169LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x421 = -25;
	static volatile uint32_t x423 = UINT32_MAX;
	uint8_t x424 = UINT8_MAX;
	volatile uint32_t t92 = 0U;

    t92 = ((x421+x422)&(x423|x424));

    if (t92 != 44262095U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x425 = 40U;
	int8_t x426 = INT8_MIN;
	int8_t x427 = INT8_MIN;
	volatile int64_t x428 = INT64_MAX;

    t93 = ((x425+x426)&(x427|x428));

    if (t93 != -88LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x429 = -1;
	static int32_t x430 = -1;
	int8_t x431 = -5;
	int32_t x432 = 191848579;

    t94 = ((x429+x430)&(x431|x432));

    if (t94 != -6) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint8_t x433 = 0U;
	int32_t x434 = -517;
	volatile uint32_t x436 = 19652U;
	uint32_t t95 = 222U;

    t95 = ((x433+x434)&(x435|x436));

    if (t95 != 2147503296U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x437 = 30859617U;
	uint64_t x438 = UINT64_MAX;
	int32_t x439 = 25;
	uint16_t x440 = 10U;
	uint64_t t96 = 1160405850064LLU;

    t96 = ((x437+x438)&(x439|x440));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x441 = 0U;
	int32_t x442 = INT32_MIN;
	int16_t x444 = INT16_MIN;
	volatile int64_t t97 = 7823958537740LL;

    t97 = ((x441+x442)&(x443|x444));

    if (t97 != -2147483648LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x449 = INT64_MAX;
	volatile int16_t x450 = -1427;
	uint16_t x451 = UINT16_MAX;
	int32_t x452 = -1;
	volatile int64_t t98 = 126LL;

    t98 = ((x449+x450)&(x451|x452));

    if (t98 != 9223372036854774380LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x453 = 0;
	volatile int64_t x454 = -1LL;
	uint8_t x455 = UINT8_MAX;
	volatile uint32_t x456 = 29U;
	volatile int64_t t99 = -268968888692136546LL;

    t99 = ((x453+x454)&(x455|x456));

    if (t99 != 255LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x461 = -1LL;
	int8_t x462 = INT8_MIN;
	volatile int8_t x463 = INT8_MIN;
	uint16_t x464 = 3809U;

    t100 = ((x461+x462)&(x463|x464));

    if (t100 != -159LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x465 = UINT32_MAX;
	volatile int64_t x467 = 201LL;
	volatile int16_t x468 = 0;
	static int64_t t101 = 2121777165710772LL;

    t101 = ((x465+x466)&(x467|x468));

    if (t101 != 201LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x469 = -1;
	static volatile int32_t x471 = 51;
	int16_t x472 = INT16_MIN;
	int32_t t102 = -41;

    t102 = ((x469+x470)&(x471|x472));

    if (t102 != 32818) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x473 = UINT32_MAX;
	int64_t x474 = -1LL;
	int64_t x475 = INT64_MIN;
	volatile int64_t x476 = -1LL;
	volatile int64_t t103 = 85591LL;

    t103 = ((x473+x474)&(x475|x476));

    if (t103 != 4294967294LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x477 = -1;
	static int16_t x478 = -1;
	uint32_t x480 = 13U;
	static volatile uint32_t t104 = 1460981U;

    t104 = ((x477+x478)&(x479|x480));

    if (t104 != 12U) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x481 = -1;
	int8_t x482 = -7;
	uint8_t x483 = 11U;
	uint32_t x484 = 92123U;

    t105 = ((x481+x482)&(x483|x484));

    if (t105 != 92120U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x485 = UINT64_MAX;
	int64_t x486 = 123424642645484LL;
	volatile uint8_t x487 = UINT8_MAX;
	volatile uint64_t t106 = 18847619266LLU;

    t106 = ((x485+x486)&(x487|x488));

    if (t106 != 123424642645483LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int64_t x491 = -1LL;
	static int64_t x492 = -1LL;
	int64_t t107 = 0LL;

    t107 = ((x489+x490)&(x491|x492));

    if (t107 != 390LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x493 = 3U;
	static uint64_t x494 = 4517LLU;
	int16_t x495 = INT16_MIN;
	int32_t x496 = 30919;
	volatile uint64_t t108 = 238013196551LLU;

    t108 = ((x493+x494)&(x495|x496));

    if (t108 != 4224LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x497 = INT16_MAX;
	int16_t x499 = INT16_MIN;
	int64_t x500 = INT64_MIN;
	volatile int64_t t109 = INT64_MIN;

    t109 = ((x497+x498)&(x499|x500));

    if (t109 != INT64_MIN) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x502 = INT16_MIN;
	static volatile uint32_t x504 = 31021089U;
	uint32_t t110 = 7U;

    t110 = ((x501+x502)&(x503|x504));

    if (t110 != 31021089U) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x505 = -15031602162082LL;
	int32_t x506 = INT32_MIN;
	static uint8_t x507 = UINT8_MAX;
	int16_t x508 = 7;

    t111 = ((x505+x506)&(x507|x508));

    if (t111 != 94LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x509 = INT64_MAX;
	volatile int16_t x510 = INT16_MIN;
	uint8_t x512 = 0U;
	volatile int64_t t112 = 33630158069260LL;

    t112 = ((x509+x510)&(x511|x512));

    if (t112 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x513 = 1283188931U;
	uint32_t x514 = UINT32_MAX;
	uint8_t x515 = UINT8_MAX;

    t113 = ((x513+x514)&(x515|x516));

    if (t113 != 1283188930U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x521 = UINT64_MAX;
	int64_t x522 = INT64_MIN;
	static uint32_t x523 = UINT32_MAX;
	static volatile int32_t x524 = -10436;
	volatile uint64_t t114 = 2494976213LLU;

    t114 = ((x521+x522)&(x523|x524));

    if (t114 != 4294967295LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x525 = INT16_MIN;
	int8_t x526 = -1;
	int32_t x527 = INT32_MIN;
	volatile uint8_t x528 = 0U;

    t115 = ((x525+x526)&(x527|x528));

    if (t115 != INT32_MIN) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x529 = INT64_MIN;
	int8_t x530 = 14;
	int8_t x532 = -1;
	volatile int64_t t116 = -3662597LL;

    t116 = ((x529+x530)&(x531|x532));

    if (t116 != -9223372036854775794LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x533 = -3;
	uint32_t x534 = UINT32_MAX;
	int16_t x535 = INT16_MIN;
	uint32_t x536 = 1091393185U;
	volatile uint32_t t117 = 982U;

    t117 = ((x533+x534)&(x535|x536));

    if (t117 != 4294956704U) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x538 = UINT32_MAX;
	uint64_t x540 = 1LLU;

    t118 = ((x537+x538)&(x539|x540));

    if (t118 != 8LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x542 = 7;
	uint16_t x543 = 22U;
	volatile int64_t t119 = 5714665LL;

    t119 = ((x541+x542)&(x543|x544));

    if (t119 != 9223372036854775687LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile uint16_t x545 = 0U;
	uint64_t x546 = 1606719322LLU;
	static volatile uint32_t x548 = 2899074U;
	uint64_t t120 = 8805443265423656LLU;

    t120 = ((x545+x546)&(x547|x548));

    if (t120 != 267850LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x549 = -770463;
	static int16_t x550 = -1;
	static int64_t x551 = INT64_MAX;
	int32_t x552 = 0;
	int64_t t121 = -537LL;

    t121 = ((x549+x550)&(x551|x552));

    if (t121 != 9223372036854005344LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x554 = 26LL;
	int64_t x555 = -1LL;
	int8_t x556 = INT8_MIN;

    t122 = ((x553+x554)&(x555|x556));

    if (t122 != -102LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x557 = -2054;
	int16_t x558 = -1;
	volatile int8_t x559 = INT8_MIN;
	uint32_t x560 = 1780034673U;
	volatile uint32_t t123 = 2865U;

    t123 = ((x557+x558)&(x559|x560));

    if (t123 != 4294965233U) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x565 = 5367LLU;
	int32_t x566 = -1;
	uint32_t x567 = 0U;
	uint32_t x568 = UINT32_MAX;

    t124 = ((x565+x566)&(x567|x568));

    if (t124 != 5366LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x569 = INT8_MAX;
	uint8_t x570 = UINT8_MAX;
	static int16_t x571 = -34;
	static int64_t t125 = 304LL;

    t125 = ((x569+x570)&(x571|x572));

    if (t125 != 350LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x573 = 306541036;
	int32_t x574 = -516787;
	static int8_t x575 = 45;
	int32_t t126 = 102;

    t126 = ((x573+x574)&(x575|x576));

    if (t126 != 41) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x577 = 26U;
	int64_t x579 = -1LL;
	uint32_t x580 = 0U;

    t127 = ((x577+x578)&(x579|x580));

    if (t127 != 25LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x581 = -391689790395697LL;
	volatile uint64_t t128 = 480895706944592429LLU;

    t128 = ((x581+x582)&(x583|x584));

    if (t128 != 206LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x585 = 8843983065695695989LLU;

    t129 = ((x585+x586)&(x587|x588));

    if (t129 != 125LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x589 = 28U;
	volatile int16_t x590 = INT16_MAX;
	uint64_t x592 = UINT64_MAX;
	uint64_t t130 = 255362742892900LLU;

    t130 = ((x589+x590)&(x591|x592));

    if (t130 != 32795LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x593 = -59;
	int64_t x594 = -1LL;
	static int32_t x595 = INT32_MIN;
	static uint8_t x596 = 79U;
	int64_t t131 = 142LL;

    t131 = ((x593+x594)&(x595|x596));

    if (t131 != -2147483580LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x597 = 5412U;
	int16_t x598 = -1;
	int64_t x600 = -30348395636038683LL;
	int64_t t132 = 116256319008152381LL;

    t132 = ((x597+x598)&(x599|x600));

    if (t132 != 1315LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x601 = -1;
	uint32_t x602 = UINT32_MAX;
	static volatile int16_t x603 = -1;
	volatile int16_t x604 = INT16_MIN;

    t133 = ((x601+x602)&(x603|x604));

    if (t133 != 4294967294U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x605 = UINT8_MAX;
	int8_t x606 = -1;
	uint8_t x607 = UINT8_MAX;
	int16_t x608 = INT16_MIN;
	volatile int32_t t134 = -1;

    t134 = ((x605+x606)&(x607|x608));

    if (t134 != 254) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x609 = 0;
	static int64_t x611 = INT64_MIN;
	int64_t x612 = INT64_MIN;
	int64_t t135 = -133759410LL;

    t135 = ((x609+x610)&(x611|x612));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x613 = -1;
	int16_t x614 = INT16_MIN;
	int32_t x616 = -64032;
	volatile int32_t t136 = 48;

    t136 = ((x613+x614)&(x615|x616));

    if (t136 != -64014) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x617 = 8497LL;
	volatile int8_t x618 = INT8_MIN;
	static int8_t x619 = INT8_MIN;
	int16_t x620 = -118;
	volatile int64_t t137 = 103491LL;

    t137 = ((x617+x618)&(x619|x620));

    if (t137 != 8320LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x622 = INT64_MIN;
	int8_t x623 = INT8_MIN;
	int64_t t138 = INT64_MIN;

    t138 = ((x621+x622)&(x623|x624));

    if (t138 != INT64_MIN) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x630 = 7;
	volatile int32_t x632 = INT32_MAX;

    t139 = ((x629+x630)&(x631|x632));

    if (t139 != -16) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x633 = -1;
	int32_t x634 = -1;
	int16_t x635 = 13931;
	int64_t x636 = -5307488LL;
	int64_t t140 = -8LL;

    t140 = ((x633+x634)&(x635|x636));

    if (t140 != -5294102LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x637 = -1;
	uint64_t x639 = 103786771094537787LLU;
	static int16_t x640 = -153;

    t141 = ((x637+x638)&(x639|x640));

    if (t141 != 16LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x645 = INT64_MIN;
	uint8_t x646 = 14U;
	int8_t x647 = INT8_MIN;
	int32_t x648 = INT32_MAX;
	int64_t t142 = -51LL;

    t142 = ((x645+x646)&(x647|x648));

    if (t142 != -9223372036854775794LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x653 = 47;
	uint32_t x654 = 155433U;
	volatile int8_t x655 = INT8_MIN;
	static uint16_t x656 = 58U;
	volatile uint32_t t143 = 1319U;

    t143 = ((x653+x654)&(x655|x656));

    if (t143 != 155416U) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x661 = UINT16_MAX;
	uint32_t x662 = 88817153U;
	int16_t x664 = INT16_MIN;
	volatile int64_t t144 = 880LL;

    t144 = ((x661+x662)&(x663|x664));

    if (t144 != 88876544LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x665 = 1;
	uint16_t x666 = UINT16_MAX;
	int32_t x667 = 140;
	int32_t x668 = INT32_MAX;
	volatile int32_t t145 = 182;

    t145 = ((x665+x666)&(x667|x668));

    if (t145 != 65536) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x669 = 0U;
	volatile int64_t x672 = -746953258035LL;
	int64_t t146 = 1383055LL;

    t146 = ((x669+x670)&(x671|x672));

    if (t146 != 1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x677 = -1LL;
	static int64_t x678 = -1LL;
	int32_t x680 = -2298;
	volatile int64_t t147 = 23012130622995LL;

    t147 = ((x677+x678)&(x679|x680));

    if (t147 != -2298LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x682 = UINT8_MAX;
	volatile int32_t t148 = 833633038;

    t148 = ((x681+x682)&(x683|x684));

    if (t148 != 4) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x686 = 13U;
	static int64_t x688 = 227175380504937888LL;

    t149 = ((x685+x686)&(x687|x688));

    if (t149 != 1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x689 = INT8_MIN;
	static uint64_t x690 = 17009966398923LLU;
	uint8_t x691 = 3U;
	uint64_t x692 = 5LLU;
	static volatile uint64_t t150 = 1104970046944647LLU;

    t150 = ((x689+x690)&(x691|x692));

    if (t150 != 3LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x693 = -1;
	uint32_t x694 = 295U;
	int64_t x696 = -1LL;
	int64_t t151 = 263982714657142LL;

    t151 = ((x693+x694)&(x695|x696));

    if (t151 != 294LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x697 = -1;
	int16_t x698 = -1;
	int16_t x699 = 464;
	int16_t x700 = -1;
	int32_t t152 = -385236;

    t152 = ((x697+x698)&(x699|x700));

    if (t152 != -2) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint16_t x702 = 59U;
	int16_t x704 = INT16_MIN;
	volatile int32_t t153 = 688416;

    t153 = ((x701+x702)&(x703|x704));

    if (t153 != -4329586) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x705 = INT8_MIN;
	uint64_t x706 = 47719258099318439LLU;
	static uint8_t x707 = 1U;
	int16_t x708 = -1;

    t154 = ((x705+x706)&(x707|x708));

    if (t154 != 47719258099318311LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x709 = 50U;
	static int8_t x710 = INT8_MIN;
	int8_t x711 = INT8_MIN;
	int32_t x712 = INT32_MAX;

    t155 = ((x709+x710)&(x711|x712));

    if (t155 != -78) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x713 = 2U;
	int16_t x715 = INT16_MIN;

    t156 = ((x713+x714)&(x715|x716));

    if (t156 != 4294960114U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x718 = 25U;
	int32_t x719 = INT32_MIN;
	int16_t x720 = INT16_MIN;
	volatile int32_t t157 = 13750602;

    t157 = ((x717+x718)&(x719|x720));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x721 = INT64_MIN;
	static uint8_t x722 = UINT8_MAX;
	volatile int32_t x723 = INT32_MAX;
	int64_t t158 = -1919211375619LL;

    t158 = ((x721+x722)&(x723|x724));

    if (t158 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x725 = INT16_MAX;
	uint16_t x726 = 1507U;
	int64_t x727 = 467LL;
	int8_t x728 = -1;
	static volatile int64_t t159 = -73248024972LL;

    t159 = ((x725+x726)&(x727|x728));

    if (t159 != 34274LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x729 = INT8_MAX;
	int32_t x730 = INT32_MIN;
	uint64_t x731 = UINT64_MAX;
	volatile int8_t x732 = -1;

    t160 = ((x729+x730)&(x731|x732));

    if (t160 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint32_t x733 = 773U;
	static volatile int32_t x734 = INT32_MIN;
	int16_t x735 = 1;
	int8_t x736 = INT8_MAX;
	uint32_t t161 = 296674868U;

    t161 = ((x733+x734)&(x735|x736));

    if (t161 != 5U) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x737 = INT16_MIN;
	uint8_t x738 = 8U;
	int64_t x740 = INT64_MIN;
	volatile int64_t t162 = -147LL;

    t162 = ((x737+x738)&(x739|x740));

    if (t162 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x741 = 2603945788LL;
	volatile int16_t x742 = INT16_MIN;
	volatile int64_t t163 = 2743596013LL;

    t163 = ((x741+x742)&(x743|x744));

    if (t163 != 2603913020LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x745 = INT32_MAX;
	int16_t x746 = INT16_MIN;
	int64_t x748 = -569LL;
	uint64_t t164 = 0LLU;

    t164 = ((x745+x746)&(x747|x748));

    if (t164 != 2147450879LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x749 = INT8_MIN;
	int8_t x750 = 2;
	uint64_t x751 = 28LLU;
	int16_t x752 = INT16_MIN;
	uint64_t t165 = 5944LLU;

    t165 = ((x749+x750)&(x751|x752));

    if (t165 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x757 = UINT16_MAX;
	int16_t x759 = INT16_MIN;
	static int64_t t166 = -110796275493959LL;

    t166 = ((x757+x758)&(x759|x760));

    if (t166 != -5709564LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x769 = 423889381U;
	volatile uint16_t x770 = UINT16_MAX;
	int32_t x771 = -43759293;
	static uint8_t x772 = 7U;

    t167 = ((x769+x770)&(x771|x772));

    if (t167 != 423889220U) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x773 = INT16_MAX;
	int64_t x774 = 1LL;
	int32_t x775 = INT32_MIN;
	static volatile uint64_t x776 = UINT64_MAX;
	uint64_t t168 = 419969455629LLU;

    t168 = ((x773+x774)&(x775|x776));

    if (t168 != 32768LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x777 = -9;
	uint64_t x779 = 3655476026LLU;
	int16_t x780 = INT16_MAX;
	uint64_t t169 = 2LLU;

    t169 = ((x777+x778)&(x779|x780));

    if (t169 != 3655499766LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x782 = 66579456U;
	int16_t x783 = INT16_MAX;
	volatile uint32_t t170 = 4176U;

    t170 = ((x781+x782)&(x783|x784));

    if (t170 != 2214063104U) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x785 = -28981937;
	int16_t x787 = -1;
	int8_t x788 = 0;
	int64_t t171 = -54LL;

    t171 = ((x785+x786)&(x787|x788));

    if (t171 != -28981938LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x789 = INT32_MAX;
	int64_t x790 = -1LL;
	volatile int64_t t172 = 59423111590911LL;

    t172 = ((x789+x790)&(x791|x792));

    if (t172 != 2147451480LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x793 = INT32_MAX;
	uint64_t x794 = UINT64_MAX;
	uint16_t x795 = UINT16_MAX;
	static volatile uint8_t x796 = 1U;
	volatile uint64_t t173 = 663154707LLU;

    t173 = ((x793+x794)&(x795|x796));

    if (t173 != 65534LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x797 = UINT64_MAX;
	uint32_t x798 = 4229U;
	int8_t x799 = -1;

    t174 = ((x797+x798)&(x799|x800));

    if (t174 != 4228LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x804 = UINT16_MAX;
	static volatile int64_t t175 = -2149889655930LL;

    t175 = ((x801+x802)&(x803|x804));

    if (t175 != 255LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x806 = -1;
	static int64_t x807 = 619073753276737LL;
	volatile int32_t x808 = -1;
	int64_t t176 = -165193249103LL;

    t176 = ((x805+x806)&(x807|x808));

    if (t176 != -32769LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x809 = 0;
	int8_t x810 = 60;
	volatile uint64_t x811 = UINT64_MAX;
	volatile int8_t x812 = INT8_MAX;
	volatile uint64_t t177 = 26LLU;

    t177 = ((x809+x810)&(x811|x812));

    if (t177 != 60LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x813 = 71;
	volatile int16_t x814 = 5;
	volatile int64_t x815 = 2080483981617401071LL;
	int8_t x816 = 0;
	int64_t t178 = -2048566682781574LL;

    t178 = ((x813+x814)&(x815|x816));

    if (t178 != 76LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int16_t x817 = INT16_MIN;
	volatile uint16_t x819 = 0U;
	static volatile int16_t x820 = INT16_MIN;
	uint64_t t179 = 1605LLU;

    t179 = ((x817+x818)&(x819|x820));

    if (t179 != 107312558211072LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x822 = 339578950;
	static volatile int8_t x823 = -1;
	int32_t x824 = INT32_MIN;
	int32_t t180 = -2360;

    t180 = ((x821+x822)&(x823|x824));

    if (t180 != 339579175) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x829 = -116551657087002867LL;
	int8_t x830 = INT8_MIN;
	uint16_t x832 = 0U;
	static volatile int64_t t181 = 11805LL;

    t181 = ((x829+x830)&(x831|x832));

    if (t181 != 13LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x833 = 7U;

    t182 = ((x833+x834)&(x835|x836));

    if (t182 != 32774U) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x837 = INT16_MAX;
	uint32_t x838 = 76285897U;
	uint64_t x839 = UINT64_MAX;
	uint32_t x840 = 8U;
	static uint64_t t183 = 2251LLU;

    t183 = ((x837+x838)&(x839|x840));

    if (t183 != 76318664LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x845 = 37U;
	uint16_t x846 = UINT16_MAX;
	int64_t x848 = -1LL;
	volatile int64_t t184 = -3LL;

    t184 = ((x845+x846)&(x847|x848));

    if (t184 != 65572LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x849 = 1;
	static int32_t x850 = INT32_MIN;
	volatile uint32_t x851 = 22U;

    t185 = ((x849+x850)&(x851|x852));

    if (t185 != 2147483649U) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile uint64_t x853 = UINT64_MAX;
	int16_t x855 = 90;
	uint16_t x856 = 4U;
	uint64_t t186 = 2136962LLU;

    t186 = ((x853+x854)&(x855|x856));

    if (t186 != 94LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x861 = INT8_MIN;
	volatile int8_t x862 = INT8_MAX;
	static volatile int32_t x863 = -1;
	static uint32_t x864 = 1U;
	volatile uint32_t t187 = UINT32_MAX;

    t187 = ((x861+x862)&(x863|x864));

    if (t187 != UINT32_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x865 = 1914U;
	int64_t x866 = INT64_MIN;
	static volatile int8_t x868 = INT8_MIN;
	volatile int64_t t188 = 3544503LL;

    t188 = ((x865+x866)&(x867|x868));

    if (t188 != -9223372036854773894LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x869 = -1;
	int16_t x870 = -1;
	static int16_t x871 = INT16_MIN;
	int16_t x872 = -270;

    t189 = ((x869+x870)&(x871|x872));

    if (t189 != -270) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x874 = INT16_MIN;
	volatile int8_t x875 = 9;
	int16_t x876 = -3317;
	int32_t t190 = -321131;

    t190 = ((x873+x874)&(x875|x876));

    if (t190 != -32767) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint16_t x881 = UINT16_MAX;
	static volatile uint32_t t191 = 4138391U;

    t191 = ((x881+x882)&(x883|x884));

    if (t191 != 2147536878U) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint64_t x885 = UINT64_MAX;
	static volatile uint8_t x886 = 4U;
	int64_t x887 = -1LL;
	static uint64_t t192 = 74450445935452LLU;

    t192 = ((x885+x886)&(x887|x888));

    if (t192 != 3LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x889 = 134778918LL;
	uint64_t x890 = 2858358534613916LLU;
	int16_t x891 = INT16_MIN;
	static volatile uint16_t x892 = 2325U;
	uint64_t t193 = 7LLU;

    t193 = ((x889+x890)&(x891|x892));

    if (t193 != 2858358669379840LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x898 = INT16_MIN;
	int8_t x899 = INT8_MIN;
	uint32_t x900 = 65951U;
	volatile uint32_t t194 = 5276U;

    t194 = ((x897+x898)&(x899|x900));

    if (t194 != 4294934431U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x905 = UINT16_MAX;
	volatile int8_t x907 = INT8_MIN;
	static int32_t x908 = INT32_MAX;

    t195 = ((x905+x906)&(x907|x908));

    if (t195 != 65534) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x911 = -1;
	int64_t t196 = -48202409774LL;

    t196 = ((x909+x910)&(x911|x912));

    if (t196 != 14LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x914 = 248405722178904LL;
	int16_t x915 = INT16_MAX;
	static volatile int64_t t197 = 6285120378909LL;

    t197 = ((x913+x914)&(x915|x916));

    if (t197 != 248405722244439LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x917 = -1;
	int16_t x918 = -1;
	int64_t x919 = -1LL;

    t198 = ((x917+x918)&(x919|x920));

    if (t198 != -2LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x921 = 8331LL;
	int8_t x922 = INT8_MIN;
	int64_t x923 = INT64_MAX;
	uint64_t x924 = 866LLU;
	uint64_t t199 = 50LLU;

    t199 = ((x921+x922)&(x923|x924));

    if (t199 != 8203LLU) { NG(); } else { ; }
	
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

