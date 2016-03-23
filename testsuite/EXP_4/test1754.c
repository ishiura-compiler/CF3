
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

int8_t x6 = -1;
int16_t x11 = -3150;
static int8_t x28 = INT8_MIN;
int32_t t6 = -1402481;
int8_t x31 = 56;
static int64_t t7 = INT64_MAX;
static int64_t x33 = -1LL;
int64_t x41 = INT64_MIN;
int32_t x42 = INT32_MAX;
static volatile int64_t x43 = -1LL;
int16_t x45 = INT16_MAX;
int64_t x47 = INT64_MAX;
static int64_t x48 = -1LL;
static int8_t x52 = 3;
volatile int16_t x53 = INT16_MIN;
static volatile int16_t x70 = INT16_MIN;
int16_t x77 = -1;
int32_t x79 = INT32_MIN;
int64_t t18 = -14379655126LL;
int64_t x90 = INT64_MAX;
int8_t x92 = INT8_MIN;
static int32_t x94 = 15257;
int32_t t22 = 4850112;
volatile uint8_t x110 = 42U;
static volatile uint32_t x114 = 6U;
int8_t x123 = -58;
int64_t t28 = 18316LL;
volatile uint16_t x128 = 22U;
int64_t x130 = INT64_MIN;
static int8_t x135 = 1;
int32_t t31 = 9;
uint64_t x141 = 5932553480641124LLU;
volatile uint16_t x145 = 341U;
int32_t t35 = 121419;
static int16_t x164 = INT16_MIN;
volatile uint32_t t38 = 31318U;
uint64_t x170 = UINT64_MAX;
uint8_t x176 = 14U;
volatile int64_t t41 = 6414816871365322LL;
int16_t x178 = INT16_MAX;
int32_t x181 = 4;
int8_t x185 = -1;
volatile uint16_t x187 = 0U;
uint8_t x188 = UINT8_MAX;
int16_t x193 = INT16_MIN;
int8_t x194 = INT8_MIN;
uint16_t x197 = 570U;
static int8_t x208 = 4;
int32_t t48 = -51112709;
uint8_t x215 = 121U;
static int16_t x219 = -3;
int8_t x233 = -1;
static volatile uint8_t x234 = 78U;
uint64_t x244 = UINT64_MAX;
int32_t t57 = 5;
int8_t x245 = -27;
static volatile int16_t x247 = INT16_MIN;
uint8_t x248 = UINT8_MAX;
uint8_t x250 = UINT8_MAX;
static int8_t x251 = -4;
volatile int32_t t59 = 1708;
int64_t t60 = -2184640591424342LL;
static volatile uint64_t x267 = 22LLU;
uint16_t x270 = 14U;
static int64_t t63 = -31839657874LL;
volatile int8_t x276 = INT8_MIN;
uint16_t x283 = UINT16_MAX;
int8_t x295 = INT8_MAX;
static int32_t x300 = 196757;
int16_t x303 = INT16_MIN;
int64_t t71 = 2400894776LL;
int16_t x315 = 39;
int64_t x320 = -43546LL;
int16_t x323 = INT16_MIN;
static uint64_t t76 = 4315848427209387LLU;
int16_t x339 = INT16_MAX;
int16_t x343 = 1363;
int64_t x348 = INT64_MAX;
volatile int64_t x351 = -1LL;
int16_t x353 = INT16_MAX;
int64_t x354 = INT64_MIN;
uint8_t x361 = 3U;
uint8_t x367 = 14U;
int64_t x373 = INT64_MAX;
static int8_t x374 = -23;
int64_t t89 = -53609LL;
static volatile int64_t t90 = -502079LL;
volatile int64_t x381 = INT64_MAX;
volatile int8_t x382 = -44;
static volatile uint8_t x391 = UINT8_MAX;
uint32_t t93 = 13808158U;
uint16_t x395 = UINT16_MAX;
static int32_t t94 = 78901108;
int64_t x397 = -676986LL;
int32_t x398 = INT32_MIN;
static int32_t x400 = INT32_MIN;
volatile uint32_t t98 = 1901841642U;
uint16_t x421 = 47U;
static int64_t x426 = -43277284LL;
int64_t t101 = -3560409LL;
static int64_t x434 = 156813302430016LL;
volatile int8_t x440 = INT8_MIN;
int32_t t105 = -2;
uint64_t t109 = 61LLU;
uint32_t x471 = 21U;
volatile int32_t x473 = INT32_MIN;
uint64_t x476 = UINT64_MAX;
int32_t x488 = INT32_MIN;
uint64_t t115 = 2061387608780625LLU;
uint16_t x489 = 114U;
uint8_t x495 = UINT8_MAX;
int16_t x504 = INT16_MAX;
uint64_t x508 = UINT64_MAX;
int32_t x516 = 9;
int16_t x518 = -1;
int32_t t123 = -1878338;
static uint32_t x526 = 44485027U;
int16_t x528 = INT16_MAX;
volatile int64_t x534 = INT64_MIN;
volatile uint64_t x538 = 26833092494058LLU;
uint8_t x539 = UINT8_MAX;
volatile uint64_t t127 = 397143240112844LLU;
int8_t x542 = -1;
int64_t t129 = -48801307438771LL;
uint64_t x554 = 2206864244592197784LLU;
static int8_t x556 = -1;
static volatile uint64_t t131 = 4846179823LLU;
volatile int8_t x559 = INT8_MIN;
int8_t x562 = 0;
volatile int32_t t133 = 770026;
int16_t x567 = INT16_MAX;
int32_t x573 = 26;
volatile int16_t x574 = 139;
int8_t x575 = -59;
volatile uint32_t x576 = 25706711U;
uint32_t t136 = 16U;
static int16_t x582 = INT16_MAX;
static int16_t x589 = INT16_MIN;
int16_t x591 = -1;
int64_t x592 = INT64_MAX;
int8_t x593 = 14;
uint64_t x597 = UINT64_MAX;
volatile uint8_t x598 = 4U;
static uint8_t x599 = 60U;
int16_t x607 = -976;
int16_t x609 = -1;
volatile int32_t t144 = -772;
uint32_t t146 = 97U;
int8_t x621 = INT8_MIN;
static int16_t x626 = -1;
volatile int32_t t148 = -44946818;
static int64_t x629 = 35341071207903LL;
int8_t x632 = INT8_MAX;
static uint64_t t149 = 52436217LLU;
int16_t x635 = -1;
int32_t x636 = INT32_MAX;
int16_t x640 = -1;
int64_t t152 = -90101522516LL;
static int64_t x647 = INT64_MIN;
volatile int32_t t153 = 2372006;
int64_t t155 = 52896LL;
uint16_t x663 = UINT16_MAX;
volatile uint64_t t156 = 274726719LLU;
volatile int16_t x666 = INT16_MIN;
static int16_t x667 = 186;
int64_t x670 = -19LL;
volatile int64_t t164 = -7560266228926LL;
int16_t x698 = -1;
volatile int64_t t165 = -77LL;
volatile int8_t x709 = INT8_MIN;
uint8_t x715 = 27U;
uint32_t x716 = 1769653439U;
int32_t t169 = -36639616;
volatile int32_t t172 = -84685116;
uint64_t x733 = 19930770400124988LLU;
static uint64_t x735 = 60436384348172LLU;
int64_t x737 = INT64_MIN;
int8_t x738 = INT8_MAX;
volatile int64_t t175 = 3564901191628LL;
uint16_t x746 = UINT16_MAX;
uint32_t t177 = 6980U;
static int64_t x762 = 16834697171LL;
int8_t x768 = -1;
static volatile uint32_t t182 = 2415821U;
volatile int16_t x771 = INT16_MIN;
int32_t t183 = -391;
uint64_t x788 = UINT64_MAX;
volatile int64_t t187 = -121LL;
uint64_t x790 = UINT64_MAX;
static volatile int64_t x800 = INT64_MIN;
int32_t x801 = 40471;
uint64_t x802 = 726580LLU;
static volatile int32_t x803 = -16694043;
uint16_t x804 = UINT16_MAX;
int8_t x808 = INT8_MAX;
int64_t t192 = -376443961LL;
uint8_t x811 = 0U;
static int64_t x816 = INT64_MIN;
int32_t t194 = 22177;
int16_t x818 = -1;
uint16_t x822 = 30U;
uint32_t t196 = 650U;
volatile uint8_t x825 = 2U;
uint16_t x828 = 9711U;
int16_t x830 = -139;
int32_t t198 = 11096406;
volatile int64_t t199 = 44607658897420LL;


void f0(void) {
    	int64_t x1 = 3LL;
	uint8_t x2 = UINT8_MAX;
	int16_t x3 = INT16_MAX;
	int16_t x4 = 1;
	int64_t t0 = 3016474LL;

    t0 = (x1/(x2^(x3>x4)));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = UINT32_MAX;
	int16_t x7 = INT16_MIN;
	volatile int32_t x8 = INT32_MIN;
	volatile uint32_t t1 = 307392U;

    t1 = (x5/(x6^(x7>x8)));

    if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -1;
	volatile int16_t x10 = -15482;
	static uint8_t x12 = 0U;
	int32_t t2 = 117;

    t2 = (x9/(x10^(x11>x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MIN;
	int32_t x14 = INT32_MIN;
	int16_t x15 = INT16_MAX;
	int32_t x16 = INT32_MIN;
	int64_t t3 = -43870LL;

    t3 = (x13/(x14^(x15>x16)));

    if (t3 != 4294967298LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1776;
	int64_t x18 = 19LL;
	int16_t x19 = INT16_MIN;
	volatile int64_t x20 = INT64_MAX;
	volatile int64_t t4 = -1LL;

    t4 = (x17/(x18^(x19>x20)));

    if (t4 != -93LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 19441576U;
	volatile uint32_t x22 = UINT32_MAX;
	static uint64_t x23 = UINT64_MAX;
	static int8_t x24 = INT8_MIN;
	volatile uint32_t t5 = 10U;

    t5 = (x21/(x22^(x23>x24)));

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = 0U;
	volatile uint16_t x26 = 124U;
	volatile int64_t x27 = INT64_MIN;

    t6 = (x25/(x26^(x27>x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MAX;
	volatile int8_t x30 = 0;
	int8_t x32 = -2;

    t7 = (x29/(x30^(x31>x32)));

    if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x34 = INT32_MAX;
	volatile uint16_t x35 = UINT16_MAX;
	int8_t x36 = -54;
	volatile int64_t t8 = -1LL;

    t8 = (x33/(x34^(x35>x36)));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x44 = 5U;
	int64_t t9 = -8070401732LL;

    t9 = (x41/(x42^(x43>x44)));

    if (t9 != -4294967298LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x46 = -140555;
	volatile int32_t t10 = -8;

    t10 = (x45/(x46^(x47>x48)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x49 = INT8_MIN;
	volatile int8_t x50 = INT8_MIN;
	int32_t x51 = INT32_MIN;
	static int32_t t11 = 533385189;

    t11 = (x49/(x50^(x51>x52)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x54 = 10847U;
	uint8_t x55 = UINT8_MAX;
	int8_t x56 = -15;
	uint32_t t12 = 0U;

    t12 = (x53/(x54^(x55>x56)));

    if (t12 != 395992U) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = INT32_MAX;
	uint64_t x58 = UINT64_MAX;
	int8_t x59 = -5;
	volatile int8_t x60 = INT8_MIN;
	static uint64_t t13 = 25767057871LLU;

    t13 = (x57/(x58^(x59>x60)));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x61 = INT16_MAX;
	uint16_t x62 = 3U;
	volatile uint32_t x63 = 7689680U;
	int16_t x64 = 14021;
	int32_t t14 = 5695118;

    t14 = (x61/(x62^(x63>x64)));

    if (t14 != 16383) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x65 = 1;
	static volatile int16_t x66 = 6;
	static int8_t x67 = INT8_MIN;
	int64_t x68 = INT64_MIN;
	int32_t t15 = 0;

    t15 = (x65/(x66^(x67>x68)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x69 = INT16_MIN;
	static volatile uint32_t x71 = 1U;
	static int16_t x72 = -3625;
	int32_t t16 = 21;

    t16 = (x69/(x70^(x71>x72)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x73 = -1;
	static int64_t x74 = -1LL;
	int32_t x75 = -1;
	int32_t x76 = INT32_MAX;
	static int64_t t17 = -435812LL;

    t17 = (x73/(x74^(x75>x76)));

    if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int64_t x78 = 56038LL;
	volatile uint8_t x80 = UINT8_MAX;

    t18 = (x77/(x78^(x79>x80)));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x81 = 12142LLU;
	int32_t x82 = -113553229;
	uint8_t x83 = 0U;
	int32_t x84 = 22400;
	volatile uint64_t t19 = 4398811184161710435LLU;

    t19 = (x81/(x82^(x83>x84)));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x85 = 3;
	static uint64_t x86 = 199490852504483817LLU;
	int8_t x87 = 14;
	volatile int32_t x88 = INT32_MAX;
	uint64_t t20 = 49166954LLU;

    t20 = (x85/(x86^(x87>x88)));

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x89 = 791938143;
	volatile int16_t x91 = 233;
	int64_t t21 = 164290525991169LL;

    t21 = (x89/(x90^(x91>x92)));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x93 = UINT8_MAX;
	volatile int64_t x95 = INT64_MIN;
	static int32_t x96 = INT32_MIN;

    t22 = (x93/(x94^(x95>x96)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x101 = 110U;
	int64_t x102 = INT64_MIN;
	int8_t x103 = INT8_MAX;
	int64_t x104 = -1LL;
	int64_t t23 = 24LL;

    t23 = (x101/(x102^(x103>x104)));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint16_t x105 = 47U;
	static int16_t x106 = -1;
	uint8_t x107 = 40U;
	volatile uint16_t x108 = 40U;
	static volatile int32_t t24 = -185544;

    t24 = (x105/(x106^(x107>x108)));

    if (t24 != -47) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x109 = INT16_MAX;
	volatile int16_t x111 = -1;
	int32_t x112 = -3691962;
	static int32_t t25 = -1741;

    t25 = (x109/(x110^(x111>x112)));

    if (t25 != 762) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x113 = UINT32_MAX;
	volatile int8_t x115 = INT8_MIN;
	uint32_t x116 = 2582160U;
	volatile uint32_t t26 = 229942570U;

    t26 = (x113/(x114^(x115>x116)));

    if (t26 != 613566756U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x117 = 107U;
	int32_t x118 = INT32_MAX;
	volatile uint8_t x119 = UINT8_MAX;
	volatile uint16_t x120 = UINT16_MAX;
	static volatile int32_t t27 = -267723;

    t27 = (x117/(x118^(x119>x120)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x121 = INT64_MIN;
	static int64_t x122 = INT64_MIN;
	int64_t x124 = INT64_MIN;

    t28 = (x121/(x122^(x123>x124)));

    if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x125 = 5U;
	static uint32_t x126 = 116U;
	static uint64_t x127 = 21598627247298091LLU;
	uint32_t t29 = 528003951U;

    t29 = (x125/(x126^(x127>x128)));

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x129 = INT16_MAX;
	int8_t x131 = INT8_MIN;
	uint32_t x132 = 223U;
	volatile int64_t t30 = 20772LL;

    t30 = (x129/(x130^(x131>x132)));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x133 = 63;
	int16_t x134 = -8595;
	uint32_t x136 = UINT32_MAX;

    t31 = (x133/(x134^(x135>x136)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x137 = UINT32_MAX;
	int32_t x138 = INT32_MIN;
	int32_t x139 = -26974815;
	uint16_t x140 = 35U;
	static uint32_t t32 = 1893U;

    t32 = (x137/(x138^(x139>x140)));

    if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x142 = 21931048185LLU;
	static int16_t x143 = INT16_MIN;
	volatile int8_t x144 = INT8_MIN;
	uint64_t t33 = 14059006LLU;

    t33 = (x141/(x142^(x143>x144)));

    if (t33 != 270509LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x146 = 5U;
	int8_t x147 = -58;
	int32_t x148 = INT32_MAX;
	volatile int32_t t34 = -68758537;

    t34 = (x145/(x146^(x147>x148)));

    if (t34 != 68) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x149 = -1;
	int32_t x150 = INT32_MIN;
	uint16_t x151 = UINT16_MAX;
	int64_t x152 = -1LL;

    t35 = (x149/(x150^(x151>x152)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x153 = INT16_MAX;
	int64_t x154 = INT64_MIN;
	uint32_t x155 = 112823U;
	int32_t x156 = INT32_MIN;
	static volatile int64_t t36 = 370007LL;

    t36 = (x153/(x154^(x155>x156)));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x157 = INT8_MIN;
	int8_t x158 = -17;
	static int8_t x159 = -1;
	static volatile int16_t x160 = INT16_MIN;
	int32_t t37 = 194937;

    t37 = (x157/(x158^(x159>x160)));

    if (t37 != 7) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x161 = UINT32_MAX;
	volatile int16_t x162 = -212;
	int8_t x163 = INT8_MAX;

    t38 = (x161/(x162^(x163>x164)));

    if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x165 = INT32_MIN;
	uint8_t x166 = UINT8_MAX;
	int32_t x167 = INT32_MIN;
	volatile int32_t x168 = INT32_MIN;
	static volatile int32_t t39 = 7;

    t39 = (x165/(x166^(x167>x168)));

    if (t39 != -8421504) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x169 = INT16_MIN;
	volatile int64_t x171 = INT64_MIN;
	int8_t x172 = 0;
	volatile uint64_t t40 = 786268191903238LLU;

    t40 = (x169/(x170^(x171>x172)));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x173 = -5778LL;
	int8_t x174 = INT8_MAX;
	uint8_t x175 = 55U;

    t41 = (x173/(x174^(x175>x176)));

    if (t41 != -45LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x177 = INT8_MIN;
	uint16_t x179 = 3U;
	volatile int8_t x180 = 12;
	volatile int32_t t42 = 964866914;

    t42 = (x177/(x178^(x179>x180)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x182 = -1362367;
	int8_t x183 = INT8_MIN;
	int64_t x184 = INT64_MIN;
	volatile int32_t t43 = 4;

    t43 = (x181/(x182^(x183>x184)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x186 = -1;
	volatile int32_t t44 = -51;

    t44 = (x185/(x186^(x187>x188)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x189 = -4768050043837LL;
	int64_t x190 = -89319714LL;
	int8_t x191 = -1;
	uint32_t x192 = 14369239U;
	volatile int64_t t45 = 77985307563759153LL;

    t45 = (x189/(x190^(x191>x192)));

    if (t45 != 53381LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x195 = INT8_MAX;
	static uint16_t x196 = UINT16_MAX;
	int32_t t46 = -739;

    t46 = (x193/(x194^(x195>x196)));

    if (t46 != 256) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint8_t x198 = UINT8_MAX;
	static int64_t x199 = INT64_MAX;
	uint8_t x200 = UINT8_MAX;
	static int32_t t47 = -119196646;

    t47 = (x197/(x198^(x199>x200)));

    if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x205 = INT32_MIN;
	static uint8_t x206 = 11U;
	volatile uint8_t x207 = 6U;

    t48 = (x205/(x206^(x207>x208)));

    if (t48 != -214748364) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x209 = 4157U;
	static uint64_t x210 = 6LLU;
	volatile int64_t x211 = INT64_MIN;
	static int64_t x212 = -1LL;
	uint64_t t49 = 1813997LLU;

    t49 = (x209/(x210^(x211>x212)));

    if (t49 != 692LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x213 = INT16_MIN;
	int32_t x214 = INT32_MAX;
	int32_t x216 = INT32_MIN;
	static volatile int32_t t50 = -23;

    t50 = (x213/(x214^(x215>x216)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x217 = INT32_MIN;
	static int16_t x218 = -390;
	int64_t x220 = -1LL;
	volatile int32_t t51 = 3250;

    t51 = (x217/(x218^(x219>x220)));

    if (t51 != 5506368) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x221 = INT64_MIN;
	int16_t x222 = -3929;
	volatile int32_t x223 = 27014;
	int16_t x224 = -3965;
	volatile int64_t t52 = -72505LL;

    t52 = (x221/(x222^(x223>x224)));

    if (t52 != 2346914004288747LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x225 = INT8_MIN;
	int32_t x226 = -49;
	int16_t x227 = INT16_MIN;
	int32_t x228 = 786;
	int32_t t53 = 103;

    t53 = (x225/(x226^(x227>x228)));

    if (t53 != 2) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x229 = -1LL;
	uint8_t x230 = 114U;
	int64_t x231 = -1344LL;
	int16_t x232 = 51;
	volatile int64_t t54 = -46413LL;

    t54 = (x229/(x230^(x231>x232)));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x235 = 1;
	int32_t x236 = 286835;
	volatile int32_t t55 = -121420;

    t55 = (x233/(x234^(x235>x236)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x237 = INT16_MIN;
	static int64_t x238 = INT64_MAX;
	uint8_t x239 = 1U;
	static int8_t x240 = INT8_MIN;
	int64_t t56 = 3108120707936023446LL;

    t56 = (x237/(x238^(x239>x240)));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x241 = INT32_MIN;
	volatile uint8_t x242 = UINT8_MAX;
	uint8_t x243 = 3U;

    t57 = (x241/(x242^(x243>x244)));

    if (t57 != -8421504) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x246 = 20;
	int32_t t58 = 6125972;

    t58 = (x245/(x246^(x247>x248)));

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x249 = -1;
	static int16_t x252 = INT16_MAX;

    t59 = (x249/(x250^(x251>x252)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x253 = INT64_MIN;
	static uint16_t x254 = 9U;
	uint64_t x255 = 17266346073593LLU;
	uint16_t x256 = 3860U;

    t60 = (x253/(x254^(x255>x256)));

    if (t60 != -1152921504606846976LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x261 = -1LL;
	uint16_t x262 = UINT16_MAX;
	static int64_t x263 = 15875602405278153LL;
	int8_t x264 = INT8_MIN;
	volatile int64_t t61 = 3161526029670102060LL;

    t61 = (x261/(x262^(x263>x264)));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x265 = INT64_MIN;
	int32_t x266 = INT32_MIN;
	int8_t x268 = INT8_MIN;
	volatile int64_t t62 = -5514365498731LL;

    t62 = (x265/(x266^(x267>x268)));

    if (t62 != 4294967296LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x269 = -8172383972LL;
	static int8_t x271 = 51;
	volatile uint16_t x272 = 38U;

    t63 = (x269/(x270^(x271>x272)));

    if (t63 != -544825598LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint8_t x273 = 28U;
	int16_t x274 = 3044;
	int16_t x275 = -1;
	int32_t t64 = -1;

    t64 = (x273/(x274^(x275>x276)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int64_t x277 = INT64_MIN;
	uint64_t x278 = UINT64_MAX;
	int32_t x279 = -45;
	int8_t x280 = INT8_MIN;
	volatile uint64_t t65 = 98932114359831493LLU;

    t65 = (x277/(x278^(x279>x280)));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x281 = 4743U;
	int8_t x282 = -2;
	int16_t x284 = 1;
	volatile int32_t t66 = -45;

    t66 = (x281/(x282^(x283>x284)));

    if (t66 != -4743) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x285 = UINT8_MAX;
	int16_t x286 = -1;
	uint8_t x287 = UINT8_MAX;
	int64_t x288 = 860670855051505104LL;
	static volatile int32_t t67 = -3181;

    t67 = (x285/(x286^(x287>x288)));

    if (t67 != -255) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x289 = UINT8_MAX;
	int16_t x290 = INT16_MIN;
	static int8_t x291 = 1;
	uint16_t x292 = UINT16_MAX;
	volatile int32_t t68 = -2006177;

    t68 = (x289/(x290^(x291>x292)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x293 = 314335U;
	volatile uint32_t x294 = 111U;
	volatile uint16_t x296 = 8U;
	static uint32_t t69 = 98U;

    t69 = (x293/(x294^(x295>x296)));

    if (t69 != 2857U) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x297 = INT16_MIN;
	uint32_t x298 = 211U;
	int32_t x299 = -2900;
	volatile uint32_t t70 = 10673855U;

    t70 = (x297/(x298^(x299>x300)));

    if (t70 != 20355139U) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x301 = -926590LL;
	int16_t x302 = INT16_MIN;
	static int32_t x304 = -1;

    t71 = (x301/(x302^(x303>x304)));

    if (t71 != 28LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x305 = INT16_MIN;
	uint16_t x306 = 33U;
	static volatile int64_t x307 = INT64_MIN;
	static int16_t x308 = INT16_MIN;
	volatile int32_t t72 = 291439;

    t72 = (x305/(x306^(x307>x308)));

    if (t72 != -992) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x309 = -1LL;
	int8_t x310 = 3;
	int8_t x311 = INT8_MAX;
	static int64_t x312 = 109LL;
	int64_t t73 = 37524515635LL;

    t73 = (x309/(x310^(x311>x312)));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x313 = -1997;
	volatile uint16_t x314 = 5727U;
	int8_t x316 = -10;
	volatile int32_t t74 = -1798;

    t74 = (x313/(x314^(x315>x316)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x317 = 2U;
	int32_t x318 = INT32_MIN;
	static uint64_t x319 = UINT64_MAX;
	int32_t t75 = 79926;

    t75 = (x317/(x318^(x319>x320)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x321 = 3LLU;
	uint16_t x322 = UINT16_MAX;
	volatile uint8_t x324 = 124U;

    t76 = (x321/(x322^(x323>x324)));

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x325 = 545697863623646LL;
	static int32_t x326 = INT32_MIN;
	volatile uint16_t x327 = 584U;
	int64_t x328 = -10LL;
	int64_t t77 = 5619335962198209LL;

    t77 = (x325/(x326^(x327>x328)));

    if (t77 != -254110LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x329 = -1;
	int8_t x330 = 3;
	int32_t x331 = INT32_MIN;
	uint16_t x332 = UINT16_MAX;
	static int32_t t78 = -48130;

    t78 = (x329/(x330^(x331>x332)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x333 = -1LL;
	int32_t x334 = 74351;
	static int16_t x335 = -1;
	static volatile int64_t x336 = -16787087171LL;
	volatile int64_t t79 = -1730654LL;

    t79 = (x333/(x334^(x335>x336)));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint8_t x337 = 3U;
	int64_t x338 = INT64_MAX;
	int32_t x340 = -4054689;
	int64_t t80 = -16002467287025643LL;

    t80 = (x337/(x338^(x339>x340)));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x341 = 14U;
	uint64_t x342 = 847LLU;
	static volatile int64_t x344 = INT64_MIN;
	volatile uint64_t t81 = 6367237LLU;

    t81 = (x341/(x342^(x343>x344)));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x345 = -1;
	int16_t x346 = -1;
	uint64_t x347 = 3142961LLU;
	int32_t t82 = 1084;

    t82 = (x345/(x346^(x347>x348)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x349 = INT64_MAX;
	int64_t x350 = INT64_MIN;
	uint8_t x352 = UINT8_MAX;
	int64_t t83 = -362902760834873LL;

    t83 = (x349/(x350^(x351>x352)));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x355 = -47;
	int8_t x356 = -2;
	static volatile int64_t t84 = 0LL;

    t84 = (x353/(x354^(x355>x356)));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x357 = 3U;
	int8_t x358 = INT8_MAX;
	uint64_t x359 = 683864LLU;
	int8_t x360 = INT8_MIN;
	volatile int32_t t85 = 510;

    t85 = (x357/(x358^(x359>x360)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x362 = UINT16_MAX;
	int16_t x363 = INT16_MIN;
	int32_t x364 = 0;
	int32_t t86 = 1;

    t86 = (x361/(x362^(x363>x364)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x365 = 2U;
	static int64_t x366 = -1LL;
	int64_t x368 = 5876LL;
	volatile int64_t t87 = 1152295930448165779LL;

    t87 = (x365/(x366^(x367>x368)));

    if (t87 != -2LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x369 = INT32_MAX;
	volatile int8_t x370 = -1;
	int64_t x371 = INT64_MIN;
	uint64_t x372 = UINT64_MAX;
	int32_t t88 = 90938842;

    t88 = (x369/(x370^(x371>x372)));

    if (t88 != -2147483647) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x375 = INT64_MAX;
	volatile int32_t x376 = INT32_MAX;

    t89 = (x373/(x374^(x375>x376)));

    if (t89 != -384307168202282325LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x377 = INT64_MIN;
	int64_t x378 = -3158264925952987042LL;
	volatile int16_t x379 = INT16_MAX;
	uint32_t x380 = 642472U;

    t90 = (x377/(x378^(x379>x380)));

    if (t90 != 2LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x383 = UINT32_MAX;
	int64_t x384 = INT64_MAX;
	static int64_t t91 = -1LL;

    t91 = (x381/(x382^(x383>x384)));

    if (t91 != -209622091746699450LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x385 = INT16_MIN;
	static int16_t x386 = INT16_MAX;
	int64_t x387 = 24024249648LL;
	int32_t x388 = -47965354;
	volatile int32_t t92 = 280671;

    t92 = (x385/(x386^(x387>x388)));

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x389 = UINT32_MAX;
	static int32_t x390 = -2276;
	int8_t x392 = -1;

    t93 = (x389/(x390^(x391>x392)));

    if (t93 != 1U) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x393 = 0;
	int32_t x394 = -263345;
	int64_t x396 = -192922LL;

    t94 = (x393/(x394^(x395>x396)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x399 = INT8_MAX;
	volatile int64_t t95 = -878LL;

    t95 = (x397/(x398^(x399>x400)));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x401 = INT64_MIN;
	volatile int16_t x402 = INT16_MIN;
	uint32_t x403 = 2902875U;
	static int64_t x404 = INT64_MAX;
	int64_t t96 = -7990504417LL;

    t96 = (x401/(x402^(x403>x404)));

    if (t96 != 281474976710656LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint16_t x409 = 152U;
	uint16_t x410 = 14591U;
	int8_t x411 = INT8_MIN;
	static volatile uint64_t x412 = 21814008LLU;
	static volatile int32_t t97 = 2274;

    t97 = (x409/(x410^(x411>x412)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x413 = INT32_MIN;
	uint32_t x414 = 3U;
	volatile uint64_t x415 = 845825330542968LLU;
	volatile int8_t x416 = -1;

    t98 = (x413/(x414^(x415>x416)));

    if (t98 != 715827882U) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x417 = -1;
	int64_t x418 = 738835753515LL;
	int32_t x419 = INT32_MAX;
	volatile int16_t x420 = -1;
	int64_t t99 = 16371729850875182LL;

    t99 = (x417/(x418^(x419>x420)));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x422 = INT64_MIN;
	static uint16_t x423 = UINT16_MAX;
	uint64_t x424 = 1LLU;
	volatile int64_t t100 = -17LL;

    t100 = (x421/(x422^(x423>x424)));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x425 = 1;
	int16_t x427 = INT16_MAX;
	static int32_t x428 = -1833517;

    t101 = (x425/(x426^(x427>x428)));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x429 = -6658275755055104LL;
	static int8_t x430 = INT8_MAX;
	int16_t x431 = 5941;
	static volatile int64_t x432 = -1LL;
	volatile int64_t t102 = -7344164140177334LL;

    t102 = (x429/(x430^(x431>x432)));

    if (t102 != -52843458373453LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x433 = INT64_MIN;
	int64_t x435 = INT64_MIN;
	volatile uint8_t x436 = UINT8_MAX;
	volatile int64_t t103 = -64835LL;

    t103 = (x433/(x434^(x435>x436)));

    if (t103 != -58817LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x437 = -12;
	static volatile int64_t x438 = 61801555136768099LL;
	static int64_t x439 = INT64_MIN;
	int64_t t104 = 386914341LL;

    t104 = (x437/(x438^(x439>x440)));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int8_t x441 = INT8_MAX;
	uint8_t x442 = 86U;
	int16_t x443 = INT16_MIN;
	int16_t x444 = -1;

    t105 = (x441/(x442^(x443>x444)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x445 = INT8_MAX;
	int16_t x446 = INT16_MAX;
	static int64_t x447 = -1LL;
	static int32_t x448 = 686;
	static int32_t t106 = 5177;

    t106 = (x445/(x446^(x447>x448)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x449 = 722037LLU;
	static volatile uint16_t x450 = 202U;
	int64_t x451 = -1LL;
	int16_t x452 = INT16_MIN;
	volatile uint64_t t107 = 102433869553389LLU;

    t107 = (x449/(x450^(x451>x452)));

    if (t107 != 3556LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x457 = 31829885LLU;
	static int64_t x458 = INT64_MAX;
	uint8_t x459 = 11U;
	volatile int32_t x460 = INT32_MIN;
	volatile uint64_t t108 = 34LLU;

    t108 = (x457/(x458^(x459>x460)));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x461 = 7284840784LLU;
	static int8_t x462 = INT8_MIN;
	int8_t x463 = INT8_MIN;
	volatile int8_t x464 = -2;

    t109 = (x461/(x462^(x463>x464)));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x465 = 2402946717959871LLU;
	int8_t x466 = INT8_MIN;
	uint32_t x467 = 2U;
	int64_t x468 = 4807LL;
	volatile uint64_t t110 = 833596586971178638LLU;

    t110 = (x465/(x466^(x467>x468)));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x469 = 11812U;
	uint8_t x470 = UINT8_MAX;
	static volatile int8_t x472 = 1;
	volatile int32_t t111 = 1766;

    t111 = (x469/(x470^(x471>x472)));

    if (t111 != 46) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x474 = 7149819;
	static int16_t x475 = INT16_MIN;
	static volatile int32_t t112 = 963;

    t112 = (x473/(x474^(x475>x476)));

    if (t112 != -300) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x477 = INT32_MIN;
	int16_t x478 = INT16_MAX;
	static int64_t x479 = INT64_MIN;
	int8_t x480 = 1;
	volatile int32_t t113 = 112;

    t113 = (x477/(x478^(x479>x480)));

    if (t113 != -65538) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x481 = 246026LL;
	volatile int16_t x482 = 0;
	int32_t x483 = -1;
	int8_t x484 = -61;
	volatile int64_t t114 = -511LL;

    t114 = (x481/(x482^(x483>x484)));

    if (t114 != 246026LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x485 = INT32_MAX;
	static uint64_t x486 = UINT64_MAX;
	volatile int64_t x487 = 112LL;

    t115 = (x485/(x486^(x487>x488)));

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile uint16_t x490 = 802U;
	volatile int8_t x491 = INT8_MIN;
	volatile int32_t x492 = 76828716;
	static int32_t t116 = 3355875;

    t116 = (x489/(x490^(x491>x492)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x493 = 161U;
	int32_t x494 = 461738336;
	int64_t x496 = 28199929187227LL;
	int32_t t117 = 426937668;

    t117 = (x493/(x494^(x495>x496)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x501 = INT8_MAX;
	int32_t x502 = INT32_MAX;
	int64_t x503 = -1LL;
	int32_t t118 = -1868935;

    t118 = (x501/(x502^(x503>x504)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x505 = 60U;
	int32_t x506 = INT32_MAX;
	static int32_t x507 = INT32_MIN;
	volatile int32_t t119 = -20113;

    t119 = (x505/(x506^(x507>x508)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x509 = INT8_MAX;
	uint16_t x510 = UINT16_MAX;
	uint64_t x511 = 1LLU;
	static volatile uint8_t x512 = UINT8_MAX;
	volatile int32_t t120 = -31922;

    t120 = (x509/(x510^(x511>x512)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x513 = 1U;
	int64_t x514 = INT64_MIN;
	int32_t x515 = INT32_MIN;
	int64_t t121 = 88LL;

    t121 = (x513/(x514^(x515>x516)));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x517 = -1;
	int64_t x519 = 334228990455LL;
	static volatile uint8_t x520 = 19U;
	volatile int32_t t122 = -11232;

    t122 = (x517/(x518^(x519>x520)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x521 = INT8_MIN;
	int8_t x522 = INT8_MIN;
	uint8_t x523 = UINT8_MAX;
	uint64_t x524 = 108058763317608LLU;

    t123 = (x521/(x522^(x523>x524)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x525 = -1;
	volatile int16_t x527 = 137;
	static volatile uint32_t t124 = 10415309U;

    t124 = (x525/(x526^(x527>x528)));

    if (t124 != 96U) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x529 = INT32_MIN;
	volatile uint8_t x530 = 4U;
	int8_t x531 = -19;
	volatile uint32_t x532 = 59293U;
	volatile int32_t t125 = 31;

    t125 = (x529/(x530^(x531>x532)));

    if (t125 != -429496729) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x533 = 28U;
	int64_t x535 = 13400LL;
	int8_t x536 = INT8_MAX;
	volatile int64_t t126 = 649117569038797716LL;

    t126 = (x533/(x534^(x535>x536)));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x537 = 1194795U;
	int32_t x540 = -1;

    t127 = (x537/(x538^(x539>x540)));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x541 = -1;
	int16_t x543 = INT16_MIN;
	int16_t x544 = 3;
	int32_t t128 = 18;

    t128 = (x541/(x542^(x543>x544)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x545 = INT8_MIN;
	static int64_t x546 = -30443216534LL;
	int64_t x547 = INT64_MIN;
	static int64_t x548 = INT64_MIN;

    t129 = (x545/(x546^(x547>x548)));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x549 = 33519161755055LLU;
	int16_t x550 = -1;
	int64_t x551 = -3534676049374851LL;
	int32_t x552 = INT32_MAX;
	volatile uint64_t t130 = 1327LLU;

    t130 = (x549/(x550^(x551>x552)));

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x553 = INT8_MAX;
	uint8_t x555 = 2U;

    t131 = (x553/(x554^(x555>x556)));

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x557 = INT16_MAX;
	uint64_t x558 = 51649394042264782LLU;
	int16_t x560 = -1;
	uint64_t t132 = 75031297734LLU;

    t132 = (x557/(x558^(x559>x560)));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint8_t x561 = 18U;
	uint16_t x563 = UINT16_MAX;
	int32_t x564 = INT32_MIN;

    t133 = (x561/(x562^(x563>x564)));

    if (t133 != 18) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x565 = 1841005U;
	int64_t x566 = INT64_MAX;
	int32_t x568 = -41340439;
	int64_t t134 = 98261LL;

    t134 = (x565/(x566^(x567>x568)));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t t135 = 31501;

    t135 = (x573/(x574^(x575>x576)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x577 = 437U;
	int8_t x578 = -1;
	volatile uint64_t x579 = UINT64_MAX;
	uint8_t x580 = UINT8_MAX;

    t136 = (x577/(x578^(x579>x580)));

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x581 = INT32_MIN;
	volatile int16_t x583 = 12077;
	volatile int16_t x584 = INT16_MIN;
	static int32_t t137 = -226;

    t137 = (x581/(x582^(x583>x584)));

    if (t137 != -65540) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x585 = 1295LL;
	int8_t x586 = -1;
	int64_t x587 = INT64_MIN;
	int16_t x588 = INT16_MAX;
	volatile int64_t t138 = -86321775LL;

    t138 = (x585/(x586^(x587>x588)));

    if (t138 != -1295LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x590 = INT16_MIN;
	static int32_t t139 = 2589;

    t139 = (x589/(x590^(x591>x592)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint16_t x594 = 30713U;
	static uint32_t x595 = 0U;
	int32_t x596 = INT32_MAX;
	static int32_t t140 = -8530531;

    t140 = (x593/(x594^(x595>x596)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x600 = UINT16_MAX;
	static volatile uint64_t t141 = 0LLU;

    t141 = (x597/(x598^(x599>x600)));

    if (t141 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x601 = UINT32_MAX;
	int32_t x602 = -1;
	int64_t x603 = INT64_MIN;
	int32_t x604 = -161691572;
	uint32_t t142 = 11U;

    t142 = (x601/(x602^(x603>x604)));

    if (t142 != 1U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x605 = UINT64_MAX;
	uint32_t x606 = UINT32_MAX;
	uint32_t x608 = 206031U;
	static volatile uint64_t t143 = 38486409575LLU;

    t143 = (x605/(x606^(x607>x608)));

    if (t143 != 4294967298LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x610 = -1;
	int64_t x611 = INT64_MAX;
	int64_t x612 = INT64_MIN;

    t144 = (x609/(x610^(x611>x612)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x613 = -1LL;
	uint64_t x614 = UINT64_MAX;
	uint8_t x615 = 31U;
	int32_t x616 = INT32_MIN;
	volatile uint64_t t145 = 36LLU;

    t145 = (x613/(x614^(x615>x616)));

    if (t145 != 1LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x617 = 247534U;
	int32_t x618 = -447389;
	int8_t x619 = 1;
	volatile int64_t x620 = -168103LL;

    t146 = (x617/(x618^(x619>x620)));

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x622 = INT64_MAX;
	int64_t x623 = INT64_MIN;
	static int8_t x624 = INT8_MIN;
	static volatile int64_t t147 = 54439119609358949LL;

    t147 = (x621/(x622^(x623>x624)));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x625 = -63081622;
	int32_t x627 = 522409;
	volatile int16_t x628 = -2;

    t148 = (x625/(x626^(x627>x628)));

    if (t148 != 31540811) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x630 = 35597151753930LLU;
	int32_t x631 = INT32_MIN;

    t149 = (x629/(x630^(x631>x632)));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x633 = 4;
	int64_t x634 = INT64_MAX;
	int64_t t150 = -33047603968450LL;

    t150 = (x633/(x634^(x635>x636)));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x637 = INT16_MIN;
	int64_t x638 = INT64_MIN;
	uint8_t x639 = UINT8_MAX;
	static int64_t t151 = -6779569472LL;

    t151 = (x637/(x638^(x639>x640)));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x641 = INT32_MAX;
	volatile int64_t x642 = 30297705441LL;
	volatile uint64_t x643 = UINT64_MAX;
	uint64_t x644 = 75649246729769LLU;

    t152 = (x641/(x642^(x643>x644)));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x645 = INT16_MIN;
	int32_t x646 = -1;
	volatile int16_t x648 = INT16_MAX;

    t153 = (x645/(x646^(x647>x648)));

    if (t153 != 32768) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x649 = INT16_MIN;
	uint8_t x650 = 6U;
	int64_t x651 = INT64_MIN;
	int64_t x652 = 25LL;
	volatile int32_t t154 = -3370928;

    t154 = (x649/(x650^(x651>x652)));

    if (t154 != -5461) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x657 = -719;
	int64_t x658 = -102209705034LL;
	uint16_t x659 = 115U;
	int64_t x660 = INT64_MIN;

    t155 = (x657/(x658^(x659>x660)));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x661 = UINT64_MAX;
	uint16_t x662 = UINT16_MAX;
	volatile uint16_t x664 = UINT16_MAX;

    t156 = (x661/(x662^(x663>x664)));

    if (t156 != 281479271743489LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x665 = -1;
	int32_t x668 = INT32_MAX;
	volatile int32_t t157 = -15;

    t157 = (x665/(x666^(x667>x668)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x669 = 59705976;
	int64_t x671 = INT64_MAX;
	int32_t x672 = -1;
	volatile int64_t t158 = -7414902219LL;

    t158 = (x669/(x670^(x671>x672)));

    if (t158 != -2985298LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x673 = 228;
	static volatile int64_t x674 = INT64_MAX;
	static volatile int8_t x675 = 1;
	uint8_t x676 = 0U;
	int64_t t159 = -74211LL;

    t159 = (x673/(x674^(x675>x676)));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x677 = INT64_MIN;
	int16_t x678 = -1;
	static volatile uint16_t x679 = 87U;
	uint8_t x680 = 14U;
	static volatile int64_t t160 = 435892609LL;

    t160 = (x677/(x678^(x679>x680)));

    if (t160 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x681 = -1;
	uint16_t x682 = 146U;
	volatile int8_t x683 = 0;
	int64_t x684 = 1396299561506407LL;
	volatile int32_t t161 = -57638;

    t161 = (x681/(x682^(x683>x684)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x685 = -1LL;
	uint32_t x686 = 219196U;
	static uint16_t x687 = 86U;
	int16_t x688 = -294;
	volatile int64_t t162 = 31060LL;

    t162 = (x685/(x686^(x687>x688)));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x689 = INT32_MIN;
	uint32_t x690 = 3861099U;
	int32_t x691 = INT32_MAX;
	int8_t x692 = -1;
	volatile uint32_t t163 = 24325572U;

    t163 = (x689/(x690^(x691>x692)));

    if (t163 != 556U) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x693 = 20U;
	int64_t x694 = -267LL;
	int8_t x695 = 0;
	static int32_t x696 = 253510;

    t164 = (x693/(x694^(x695>x696)));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x697 = 34359211392068LL;
	int8_t x699 = INT8_MIN;
	volatile uint8_t x700 = 1U;

    t165 = (x697/(x698^(x699>x700)));

    if (t165 != -34359211392068LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x701 = INT32_MAX;
	static int8_t x702 = 6;
	uint64_t x703 = 1899500LLU;
	int64_t x704 = INT64_MAX;
	int32_t t166 = 978;

    t166 = (x701/(x702^(x703>x704)));

    if (t166 != 357913941) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x705 = -1;
	int16_t x706 = INT16_MIN;
	static int16_t x707 = 35;
	int32_t x708 = 997;
	static int32_t t167 = 33657;

    t167 = (x705/(x706^(x707>x708)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x710 = UINT32_MAX;
	int8_t x711 = -1;
	volatile int32_t x712 = INT32_MAX;
	static volatile uint32_t t168 = 3666U;

    t168 = (x709/(x710^(x711>x712)));

    if (t168 != 0U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x713 = UINT16_MAX;
	uint16_t x714 = UINT16_MAX;

    t169 = (x713/(x714^(x715>x716)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint64_t x717 = 1580595428097109LLU;
	int32_t x718 = 73220;
	uint16_t x719 = 23U;
	static int16_t x720 = -757;
	volatile uint64_t t170 = 277148563047258LLU;

    t170 = (x717/(x718^(x719>x720)));

    if (t170 != 21586640828LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x721 = 6655U;
	int32_t x722 = -3;
	static uint64_t x723 = UINT64_MAX;
	static int16_t x724 = 1;
	int32_t t171 = -23037;

    t171 = (x721/(x722^(x723>x724)));

    if (t171 != -1663) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint16_t x725 = 5U;
	int8_t x726 = -1;
	uint8_t x727 = 22U;
	int32_t x728 = -1;

    t172 = (x725/(x726^(x727>x728)));

    if (t172 != -2) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x729 = -1;
	static volatile int32_t x730 = INT32_MAX;
	volatile int64_t x731 = 3LL;
	int16_t x732 = -1;
	int32_t t173 = -4085984;

    t173 = (x729/(x730^(x731>x732)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x734 = 17U;
	int32_t x736 = INT32_MIN;
	uint64_t t174 = 22026756953328566LLU;

    t174 = (x733/(x734^(x735>x736)));

    if (t174 != 1172398258830881LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x739 = 4U;
	volatile int8_t x740 = -1;

    t175 = (x737/(x738^(x739>x740)));

    if (t175 != -73201365371863300LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x741 = 159416903412367LL;
	uint8_t x742 = UINT8_MAX;
	uint32_t x743 = 225U;
	static uint8_t x744 = 11U;
	volatile int64_t t176 = -49908698LL;

    t176 = (x741/(x742^(x743>x744)));

    if (t176 != 627625603985LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x745 = UINT32_MAX;
	static int16_t x747 = -209;
	static int16_t x748 = INT16_MIN;

    t177 = (x745/(x746^(x747>x748)));

    if (t177 != 65538U) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x749 = INT16_MAX;
	volatile int32_t x750 = INT32_MAX;
	int64_t x751 = INT64_MIN;
	int8_t x752 = -1;
	volatile int32_t t178 = 13314109;

    t178 = (x749/(x750^(x751>x752)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x753 = -20;
	int16_t x754 = INT16_MIN;
	static volatile int32_t x755 = INT32_MIN;
	int8_t x756 = -1;
	int32_t t179 = -864;

    t179 = (x753/(x754^(x755>x756)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x757 = -8532;
	volatile uint64_t x758 = 15820094LLU;
	static volatile int64_t x759 = -1LL;
	uint16_t x760 = 1U;
	uint64_t t180 = 1049491931192437LLU;

    t180 = (x757/(x758^(x759>x760)));

    if (t180 != 1166032520015LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x761 = -1;
	static int16_t x763 = INT16_MIN;
	volatile int16_t x764 = INT16_MIN;
	int64_t t181 = 243574LL;

    t181 = (x761/(x762^(x763>x764)));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x765 = 14984U;
	static volatile int16_t x766 = INT16_MIN;
	int8_t x767 = INT8_MIN;

    t182 = (x765/(x766^(x767>x768)));

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x769 = 29U;
	volatile uint8_t x770 = 3U;
	volatile uint16_t x772 = 59U;

    t183 = (x769/(x770^(x771>x772)));

    if (t183 != 9) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x773 = -1;
	int16_t x774 = -1;
	int16_t x775 = INT16_MIN;
	int16_t x776 = INT16_MIN;
	volatile int32_t t184 = -376001;

    t184 = (x773/(x774^(x775>x776)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x777 = INT8_MIN;
	int64_t x778 = -1124520261892366421LL;
	uint8_t x779 = 6U;
	uint16_t x780 = UINT16_MAX;
	int64_t t185 = 1721559570256601883LL;

    t185 = (x777/(x778^(x779>x780)));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x781 = INT64_MIN;
	int16_t x782 = INT16_MAX;
	uint32_t x783 = 1480U;
	int16_t x784 = 0;
	int64_t t186 = 1765LL;

    t186 = (x781/(x782^(x783>x784)));

    if (t186 != -281492157628480LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x785 = INT64_MAX;
	volatile int16_t x786 = -1463;
	int16_t x787 = INT16_MIN;

    t187 = (x785/(x786^(x787>x788)));

    if (t187 != -6304423811930810LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x789 = UINT16_MAX;
	uint16_t x791 = 0U;
	uint16_t x792 = UINT16_MAX;
	uint64_t t188 = 1121397179690857LLU;

    t188 = (x789/(x790^(x791>x792)));

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x793 = 1739480LLU;
	int16_t x794 = INT16_MIN;
	static int8_t x795 = INT8_MIN;
	uint32_t x796 = UINT32_MAX;
	static uint64_t t189 = 8246229LLU;

    t189 = (x793/(x794^(x795>x796)));

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x797 = -93LL;
	uint32_t x798 = UINT32_MAX;
	int32_t x799 = INT32_MIN;
	int64_t t190 = -13108856037692LL;

    t190 = (x797/(x798^(x799>x800)));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t t191 = 18597LLU;

    t191 = (x801/(x802^(x803>x804)));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x805 = -1190220293175461LL;
	volatile int32_t x806 = -6519723;
	int8_t x807 = INT8_MAX;

    t192 = (x805/(x806^(x807>x808)));

    if (t192 != 182556880LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x809 = 24955644;
	volatile int8_t x810 = INT8_MAX;
	int64_t x812 = -8059LL;
	volatile int32_t t193 = 8;

    t193 = (x809/(x810^(x811>x812)));

    if (t193 != 198060) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x813 = -1;
	int32_t x814 = INT32_MIN;
	static int32_t x815 = -2989;

    t194 = (x813/(x814^(x815>x816)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x817 = 80U;
	volatile uint16_t x819 = UINT16_MAX;
	int16_t x820 = -1;
	uint32_t t195 = 139215U;

    t195 = (x817/(x818^(x819>x820)));

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x821 = UINT32_MAX;
	uint8_t x823 = 0U;
	uint32_t x824 = 296U;

    t196 = (x821/(x822^(x823>x824)));

    if (t196 != 143165576U) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x826 = 122982085276536318LLU;
	uint64_t x827 = 3666LLU;
	uint64_t t197 = 20134383LLU;

    t197 = (x825/(x826^(x827>x828)));

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x829 = -1;
	int8_t x831 = 0;
	uint8_t x832 = 50U;

    t198 = (x829/(x830^(x831>x832)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x833 = 3108;
	int64_t x834 = -68651085321226041LL;
	static uint32_t x835 = 3U;
	uint16_t x836 = UINT16_MAX;

    t199 = (x833/(x834^(x835>x836)));

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

