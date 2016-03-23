
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

uint8_t x5 = 2U;
uint16_t x7 = UINT16_MAX;
int16_t x11 = INT16_MIN;
volatile int32_t x16 = INT32_MAX;
int32_t x32 = 40845;
int8_t x39 = 2;
volatile int8_t x40 = 6;
uint64_t t7 = 394725244LLU;
int16_t x61 = INT16_MAX;
int16_t x76 = INT16_MIN;
volatile int8_t x78 = INT8_MIN;
uint8_t x83 = 1U;
int64_t x103 = 30427LL;
int8_t x106 = -1;
uint64_t x107 = UINT64_MAX;
static int32_t x131 = 4;
int64_t t25 = 0LL;
int32_t x134 = INT32_MAX;
int64_t x139 = -1LL;
uint64_t x140 = 85LLU;
static volatile uint64_t t27 = 997LLU;
uint32_t x145 = 1675876U;
volatile uint64_t t29 = 102164562444LLU;
static uint16_t x161 = UINT16_MAX;
uint16_t x164 = 104U;
int8_t x165 = -59;
int8_t x168 = -53;
static int32_t x170 = -2;
static uint8_t x171 = 1U;
int8_t x176 = INT8_MIN;
static volatile int64_t t34 = 954306LL;
int32_t x180 = -900;
uint32_t x189 = 48559U;
int32_t x194 = INT32_MAX;
int32_t x196 = INT32_MIN;
static volatile int64_t t37 = 3046059719669233599LL;
uint8_t x200 = 69U;
static int64_t x208 = INT64_MIN;
int8_t x220 = -1;
uint64_t t43 = 2LLU;
int8_t x231 = -1;
int32_t x232 = 8418;
volatile int64_t t45 = 48LL;
static uint32_t x236 = UINT32_MAX;
int32_t t48 = 4;
uint8_t x247 = 18U;
uint32_t x251 = 7U;
volatile int32_t x255 = INT32_MIN;
static volatile uint64_t x264 = UINT64_MAX;
static volatile uint64_t t53 = 375384268859854LLU;
int8_t x276 = INT8_MIN;
int8_t x279 = INT8_MAX;
volatile int64_t x280 = INT64_MAX;
uint32_t x281 = 237972U;
static uint64_t x286 = UINT64_MAX;
uint64_t t61 = 16725096818271LLU;
int64_t x299 = INT64_MIN;
int8_t x302 = INT8_MIN;
volatile int16_t x311 = -1;
int32_t x312 = 0;
int64_t t65 = 14281844LL;
static uint16_t x313 = 2245U;
volatile uint8_t x314 = 0U;
static int64_t x321 = INT64_MIN;
int64_t t67 = -7090LL;
static int16_t x326 = -144;
static volatile uint32_t x327 = 2U;
uint8_t x331 = 1U;
int8_t x336 = -1;
static volatile uint64_t t70 = 8469719887250519LLU;
int32_t x340 = INT32_MIN;
volatile uint32_t t71 = 6540725U;
int32_t t73 = -3396928;
int32_t t74 = -22;
int64_t x360 = -5219LL;
int64_t x362 = 1058832LL;
volatile int64_t t77 = 77LL;
uint16_t x369 = 494U;
int64_t x370 = -1LL;
int64_t x373 = INT64_MAX;
int64_t t80 = -18290929703LL;
volatile uint32_t t81 = 116350U;
int64_t x385 = -1LL;
int8_t x396 = -8;
volatile int32_t t84 = -224480;
volatile int32_t x402 = -1;
volatile int8_t x405 = INT8_MIN;
static volatile int64_t t86 = 467096092276340LL;
uint16_t x409 = 77U;
int8_t x416 = 21;
int32_t x424 = 25;
volatile int32_t t90 = 6742767;
int8_t x425 = INT8_MAX;
int64_t x428 = -1LL;
uint64_t x431 = 307657482LLU;
int64_t x433 = INT64_MAX;
volatile int32_t t94 = 1;
int8_t x451 = INT8_MIN;
int64_t x455 = INT64_MAX;
int16_t x456 = INT16_MAX;
uint16_t x457 = 531U;
uint16_t x458 = 11577U;
volatile uint32_t t99 = 605U;
volatile int32_t x465 = -1;
uint32_t x466 = 46490U;
volatile int64_t x469 = INT64_MAX;
int64_t x471 = -1380642LL;
int32_t x475 = -1;
uint64_t t102 = 271135697348LLU;
int32_t t104 = -1870794;
static uint32_t t106 = 20212U;
int64_t x506 = -1LL;
volatile int32_t x507 = INT32_MIN;
uint32_t x514 = 5U;
int64_t x516 = -1LL;
uint64_t t112 = 6443569LLU;
static uint64_t t113 = 394062LLU;
int64_t x537 = INT64_MIN;
static volatile uint32_t x543 = 248839U;
uint64_t t116 = 4659431875445743LLU;
volatile uint8_t x556 = 123U;
uint16_t x561 = 0U;
int32_t x566 = INT32_MIN;
int16_t x571 = INT16_MIN;
volatile int8_t x572 = -1;
uint8_t x573 = UINT8_MAX;
uint16_t x576 = UINT16_MAX;
uint32_t x579 = UINT32_MAX;
int64_t t123 = 752995091031928211LL;
int64_t x582 = -1LL;
static int8_t x584 = INT8_MIN;
int64_t x586 = -52029LL;
uint8_t x588 = 116U;
int64_t x610 = -2430717769281979LL;
int8_t x611 = 0;
uint64_t x618 = 1839436206819072475LLU;
int16_t x623 = INT16_MIN;
uint16_t x629 = 8U;
int32_t x637 = 368;
volatile uint64_t t137 = 24730029903244LLU;
volatile int64_t x642 = INT64_MIN;
volatile uint64_t t138 = 340947473LLU;
int8_t x648 = INT8_MIN;
int8_t x649 = -24;
uint64_t x651 = 60017206LLU;
uint64_t t140 = 4254107352182466LLU;
uint8_t x665 = 24U;
int32_t x666 = 478;
uint16_t x669 = UINT16_MAX;
int64_t x671 = -1LL;
int16_t x672 = INT16_MAX;
int16_t x678 = -7;
uint32_t x681 = 8010287U;
volatile int16_t x687 = INT16_MAX;
int8_t x694 = 0;
static int64_t x699 = 7LL;
int8_t x712 = INT8_MIN;
uint64_t x714 = UINT64_MAX;
int8_t x715 = -1;
int32_t x716 = 245;
static uint64_t t155 = 193944686379449106LLU;
uint64_t t156 = 1114944595769918LLU;
int16_t x737 = INT16_MAX;
int16_t x740 = INT16_MIN;
volatile int32_t x751 = INT32_MIN;
int16_t x762 = INT16_MAX;
static int32_t x764 = INT32_MAX;
int16_t x767 = INT16_MIN;
int16_t x771 = -1;
static int16_t x772 = 15650;
uint64_t x778 = UINT64_MAX;
static int16_t x779 = INT16_MIN;
static uint64_t t168 = 19904790421652628LLU;
uint64_t x782 = 8021701726LLU;
int64_t x784 = INT64_MAX;
uint64_t t169 = 28867LLU;
volatile int8_t x789 = INT8_MIN;
uint64_t t170 = 568759696345323LLU;
static int64_t x797 = 2698933944LL;
int16_t x800 = INT16_MIN;
volatile uint8_t x801 = 12U;
int16_t x802 = -1011;
static volatile int64_t t174 = -295746229LL;
int32_t x814 = 50509;
static uint32_t x815 = 203U;
int64_t x820 = INT64_MIN;
int16_t x822 = INT16_MIN;
int32_t x833 = INT32_MAX;
int16_t x834 = 1;
uint32_t x842 = 435045841U;
uint32_t x845 = 60615604U;
int16_t x849 = INT16_MAX;
volatile uint8_t x850 = 63U;
uint8_t x852 = 53U;
volatile int16_t x854 = 0;
uint64_t x863 = 456799026LLU;
static uint8_t x869 = 8U;
uint64_t x873 = 16309LLU;
int8_t x882 = -60;
static int64_t t192 = 346968148548082LL;
int64_t x892 = -915085219698LL;
int16_t x898 = INT16_MIN;
static volatile uint8_t x900 = 0U;
volatile int64_t t197 = 352188506510539045LL;
volatile int64_t x906 = INT64_MIN;
uint64_t x910 = 9033130484977038390LLU;


void f0(void) {
    	int16_t x1 = -1;
	uint32_t x2 = 5311U;
	static volatile int64_t x3 = INT64_MIN;
	int8_t x4 = INT8_MIN;
	static int64_t t0 = -2073475861LL;

    t0 = (x1%(x2^(x3-x4)));

    if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x6 = -1;
	int8_t x8 = INT8_MIN;
	int32_t t1 = 54925855;

    t1 = (x5%(x6^(x7-x8)));

    if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x9 = -1LL;
	static volatile int32_t x10 = -693085;
	int8_t x12 = -26;
	volatile int64_t t2 = -11LL;

    t2 = (x9%(x10^(x11-x12)));

    if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -2;
	static int64_t x14 = INT64_MIN;
	int8_t x15 = INT8_MAX;
	static int64_t t3 = -40154650LL;

    t3 = (x13%(x14^(x15-x16)));

    if (t3 != -2LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x17 = INT16_MAX;
	static uint32_t x18 = 48U;
	uint32_t x19 = 1248863U;
	static int16_t x20 = 15046;
	volatile uint32_t t4 = 117764U;

    t4 = (x17%(x18^(x19-x20)));

    if (t4 != 32767U) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x29 = INT16_MIN;
	uint16_t x30 = 0U;
	int16_t x31 = 882;
	static int32_t t5 = -1172;

    t5 = (x29%(x30^(x31-x32)));

    if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x33 = INT16_MIN;
	int16_t x34 = -12982;
	int16_t x35 = 174;
	volatile uint8_t x36 = 4U;
	volatile int32_t t6 = -6606361;

    t6 = (x33%(x34^(x35-x36)));

    if (t6 != -7104) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x37 = 2160795193LLU;
	uint32_t x38 = 2U;

    t7 = (x37%(x38^(x39-x40)));

    if (t7 != 2160795193LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x45 = UINT16_MAX;
	uint32_t x46 = 6U;
	int8_t x47 = -1;
	int32_t x48 = -1;
	uint32_t t8 = 40U;

    t8 = (x45%(x46^(x47-x48)));

    if (t8 != 3U) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x49 = 547469LLU;
	uint32_t x50 = 1U;
	volatile int8_t x51 = -47;
	int64_t x52 = INT64_MIN;
	volatile uint64_t t9 = 115506065226084LLU;

    t9 = (x49%(x50^(x51-x52)));

    if (t9 != 547469LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x53 = 1U;
	volatile int64_t x54 = -3260736782609131138LL;
	int32_t x55 = 18;
	static uint64_t x56 = UINT64_MAX;
	uint64_t t10 = 128442LLU;

    t10 = (x53%(x54^(x55-x56)));

    if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x57 = INT32_MIN;
	int64_t x58 = -1LL;
	uint64_t x59 = UINT64_MAX;
	int16_t x60 = 1;
	volatile uint64_t t11 = 12145898239LLU;

    t11 = (x57%(x58^(x59-x60)));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x62 = -1;
	int16_t x63 = -1578;
	static uint8_t x64 = UINT8_MAX;
	int32_t t12 = 567780220;

    t12 = (x61%(x62^(x63-x64)));

    if (t12 != 1623) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x65 = 158059LLU;
	uint8_t x66 = 2U;
	uint8_t x67 = 12U;
	uint8_t x68 = 6U;
	volatile uint64_t t13 = 41758LLU;

    t13 = (x65%(x66^(x67-x68)));

    if (t13 != 3LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x69 = -1;
	volatile int64_t x70 = INT64_MIN;
	int16_t x71 = -1;
	uint8_t x72 = 0U;
	int64_t t14 = -1168430LL;

    t14 = (x69%(x70^(x71-x72)));

    if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x73 = UINT8_MAX;
	uint64_t x74 = 1786116502781LLU;
	uint64_t x75 = 7460037480LLU;
	volatile uint64_t t15 = 3271951245830198644LLU;

    t15 = (x73%(x74^(x75-x76)));

    if (t15 != 255LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x77 = -7;
	volatile int64_t x79 = 8724796LL;
	int64_t x80 = 225580986934027LL;
	int64_t t16 = -16192910911LL;

    t16 = (x77%(x78^(x79-x80)));

    if (t16 != -7LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x81 = 62;
	uint64_t x82 = 86LLU;
	int64_t x84 = -118LL;
	uint64_t t17 = 21619LLU;

    t17 = (x81%(x82^(x83-x84)));

    if (t17 != 29LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x97 = INT32_MIN;
	volatile uint32_t x98 = UINT32_MAX;
	volatile int32_t x99 = -1;
	int64_t x100 = -1LL;
	int64_t t18 = -4946LL;

    t18 = (x97%(x98^(x99-x100)));

    if (t18 != -2147483648LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x101 = INT64_MIN;
	uint8_t x102 = 1U;
	volatile int8_t x104 = 61;
	volatile int64_t t19 = 1586527006162192LL;

    t19 = (x101%(x102^(x103-x104)));

    if (t19 != -11528LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x105 = -6;
	volatile int32_t x108 = INT32_MIN;
	volatile uint64_t t20 = 1621385LLU;

    t20 = (x105%(x106^(x107-x108)));

    if (t20 != 2147483642LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x109 = INT8_MIN;
	volatile uint8_t x110 = 13U;
	int64_t x111 = INT64_MIN;
	static uint64_t x112 = 26LLU;
	volatile uint64_t t21 = 5LLU;

    t21 = (x109%(x110^(x111-x112)));

    if (t21 != 9223372036854775701LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x113 = -1;
	static int8_t x114 = INT8_MIN;
	volatile uint64_t x115 = 1027791LLU;
	int16_t x116 = INT16_MIN;
	uint64_t t22 = 6599723LLU;

    t22 = (x113%(x114^(x115-x116)));

    if (t22 != 1060528LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x121 = UINT16_MAX;
	uint16_t x122 = 18U;
	int8_t x123 = 9;
	int32_t x124 = -1;
	int32_t t23 = 24051;

    t23 = (x121%(x122^(x123-x124)));

    if (t23 != 15) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint8_t x125 = 38U;
	volatile uint8_t x126 = 3U;
	uint16_t x127 = 2U;
	int32_t x128 = INT32_MAX;
	volatile int32_t t24 = -194;

    t24 = (x125%(x126^(x127-x128)));

    if (t24 != 38) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x129 = 0U;
	int64_t x130 = INT64_MAX;
	int32_t x132 = INT32_MAX;

    t25 = (x129%(x130^(x131-x132)));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x133 = 27LLU;
	int64_t x135 = INT64_MAX;
	volatile int64_t x136 = INT64_MAX;
	uint64_t t26 = 1LLU;

    t26 = (x133%(x134^(x135-x136)));

    if (t26 != 27LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x137 = 250550024U;
	int32_t x138 = INT32_MIN;

    t27 = (x137%(x138^(x139-x140)));

    if (t27 != 250550024LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x146 = INT16_MAX;
	static int16_t x147 = INT16_MIN;
	uint16_t x148 = UINT16_MAX;
	uint32_t t28 = 1281522446U;

    t28 = (x145%(x146^(x147-x148)));

    if (t28 != 1675876U) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x149 = INT32_MAX;
	uint8_t x150 = 35U;
	volatile int32_t x151 = INT32_MAX;
	uint64_t x152 = 28735645LLU;

    t29 = (x149%(x150^(x151-x152)));

    if (t29 != 28735678LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x153 = INT64_MAX;
	static volatile uint8_t x154 = 13U;
	static int8_t x155 = 19;
	static uint64_t x156 = UINT64_MAX;
	uint64_t t30 = 2087322740LLU;

    t30 = (x153%(x154^(x155-x156)));

    if (t30 != 7LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x162 = INT64_MIN;
	int16_t x163 = -197;
	volatile int64_t t31 = 841LL;

    t31 = (x161%(x162^(x163-x164)));

    if (t31 != 65535LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x166 = 61U;
	uint16_t x167 = 5468U;
	int32_t t32 = 3142919;

    t32 = (x165%(x166^(x167-x168)));

    if (t32 != -59) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x169 = INT16_MIN;
	int16_t x172 = INT16_MIN;
	static int32_t t33 = 21907;

    t33 = (x169%(x170^(x171-x172)));

    if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x173 = 123040048169421LL;
	int16_t x174 = INT16_MAX;
	int32_t x175 = 136088;

    t34 = (x173%(x174^(x175-x176)));

    if (t34 != 117706LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x177 = UINT16_MAX;
	int16_t x178 = INT16_MAX;
	int16_t x179 = 13;
	int32_t t35 = 0;

    t35 = (x177%(x178^(x179-x180)));

    if (t35 != 1827) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x190 = INT16_MIN;
	uint8_t x191 = 62U;
	volatile uint32_t x192 = 31342903U;
	volatile uint32_t t36 = 8104U;

    t36 = (x189%(x190^(x191-x192)));

    if (t36 != 48559U) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x193 = INT32_MAX;
	int64_t x195 = -1077914816876549LL;

    t37 = (x193%(x194^(x195-x196)));

    if (t37 != 2147483647LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x197 = INT16_MIN;
	int64_t x198 = -8860543439541467LL;
	uint8_t x199 = 2U;
	int64_t t38 = -80LL;

    t38 = (x197%(x198^(x199-x200)));

    if (t38 != -32768LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x205 = INT64_MIN;
	static volatile uint8_t x206 = 49U;
	int8_t x207 = -63;
	int64_t t39 = 1985855LL;

    t39 = (x205%(x206^(x207-x208)));

    if (t39 != -16LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x209 = INT64_MAX;
	volatile uint32_t x210 = 21940799U;
	volatile int8_t x211 = 0;
	int16_t x212 = INT16_MIN;
	int64_t t40 = 5625298891LL;

    t40 = (x209%(x210^(x211-x212)));

    if (t40 != 5574265LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x213 = -2;
	static uint8_t x214 = UINT8_MAX;
	static int8_t x215 = INT8_MIN;
	volatile uint64_t x216 = UINT64_MAX;
	volatile uint64_t t41 = 1772318LLU;

    t41 = (x213%(x214^(x215-x216)));

    if (t41 != 128LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x217 = UINT64_MAX;
	uint8_t x218 = 16U;
	int8_t x219 = 0;
	uint64_t t42 = 313017796LLU;

    t42 = (x217%(x218^(x219-x220)));

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x221 = -1;
	volatile int32_t x222 = 9910135;
	int32_t x223 = INT32_MIN;
	static uint64_t x224 = 9630658268541469LLU;

    t43 = (x221%(x222^(x223-x224)));

    if (t43 != 9630660425385323LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x225 = 31956;
	static int32_t x226 = INT32_MIN;
	int32_t x227 = 33868;
	uint32_t x228 = UINT32_MAX;
	uint32_t t44 = 26U;

    t44 = (x225%(x226^(x227-x228)));

    if (t44 != 31956U) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x229 = 2;
	static int64_t x230 = INT64_MAX;

    t45 = (x229%(x230^(x231-x232)));

    if (t45 != 2LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x233 = UINT64_MAX;
	volatile int32_t x234 = INT32_MAX;
	int32_t x235 = INT32_MAX;
	uint64_t t46 = 1564779LLU;

    t46 = (x233%(x234^(x235-x236)));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x237 = 161159749434LLU;
	int8_t x238 = -1;
	int64_t x239 = INT64_MAX;
	volatile int32_t x240 = 109779860;
	uint64_t t47 = 108233001283LLU;

    t47 = (x237%(x238^(x239-x240)));

    if (t47 != 161159749434LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x241 = -1;
	static int8_t x242 = -2;
	int32_t x243 = INT32_MIN;
	volatile int16_t x244 = INT16_MIN;

    t48 = (x241%(x242^(x243-x244)));

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x245 = 102062876LLU;
	uint32_t x246 = UINT32_MAX;
	static volatile uint32_t x248 = 490947U;
	volatile uint64_t t49 = 17580001898411760LLU;

    t49 = (x245%(x246^(x247-x248)));

    if (t49 != 440780LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x249 = INT64_MIN;
	volatile uint64_t x250 = 227406LLU;
	volatile int32_t x252 = -4066;
	uint64_t t50 = 13418300322LLU;

    t50 = (x249%(x250^(x251-x252)));

    if (t50 != 184204LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x253 = -1;
	static uint8_t x254 = 22U;
	uint32_t x256 = 920881991U;
	uint32_t t51 = 1671390062U;

    t51 = (x253%(x254^(x255-x256)));

    if (t51 != 615162354U) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int16_t x257 = 2816;
	uint8_t x258 = 28U;
	volatile int16_t x259 = -1;
	uint64_t x260 = UINT64_MAX;
	uint64_t t52 = 8608515292781LLU;

    t52 = (x257%(x258^(x259-x260)));

    if (t52 != 16LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x261 = -1;
	int16_t x262 = -7118;
	uint32_t x263 = 14U;

    t53 = (x261%(x262^(x263-x264)));

    if (t53 != 7106LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x265 = UINT8_MAX;
	static int16_t x266 = 815;
	static int64_t x267 = INT64_MAX;
	uint16_t x268 = 2U;
	volatile int64_t t54 = 38297226566308LL;

    t54 = (x265%(x266^(x267-x268)));

    if (t54 != 255LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x269 = INT64_MAX;
	int32_t x270 = -1;
	int32_t x271 = 1;
	static int8_t x272 = INT8_MIN;
	volatile int64_t t55 = 2235366986952334LL;

    t55 = (x269%(x270^(x271-x272)));

    if (t55 != 7LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x273 = -1LL;
	uint32_t x274 = UINT32_MAX;
	volatile uint32_t x275 = 5418864U;
	int64_t t56 = -334856506899584813LL;

    t56 = (x273%(x274^(x275-x276)));

    if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x277 = INT8_MIN;
	static int16_t x278 = -1;
	volatile int64_t t57 = 1LL;

    t57 = (x277%(x278^(x279-x280)));

    if (t57 != -128LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x282 = 34U;
	uint32_t x283 = 323612U;
	int8_t x284 = INT8_MIN;
	volatile uint32_t t58 = 18U;

    t58 = (x281%(x282^(x283-x284)));

    if (t58 != 237972U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x285 = 13983U;
	static int64_t x287 = INT64_MIN;
	static int16_t x288 = INT16_MIN;
	volatile uint64_t t59 = 10LLU;

    t59 = (x285%(x286^(x287-x288)));

    if (t59 != 13983LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x289 = 112;
	int16_t x290 = INT16_MIN;
	uint64_t x291 = UINT64_MAX;
	uint64_t x292 = UINT64_MAX;
	volatile uint64_t t60 = 931LLU;

    t60 = (x289%(x290^(x291-x292)));

    if (t60 != 112LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x293 = INT16_MIN;
	int32_t x294 = 864;
	volatile int32_t x295 = INT32_MAX;
	uint64_t x296 = 873169291775533737LLU;

    t61 = (x293%(x294^(x295-x296)));

    if (t61 != 873169289628017098LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x297 = INT32_MIN;
	volatile int8_t x298 = 12;
	int8_t x300 = -51;
	int64_t t62 = -391139852785778531LL;

    t62 = (x297%(x298^(x299-x300)));

    if (t62 != -2147483648LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x301 = -1LL;
	int16_t x303 = -3;
	uint8_t x304 = 26U;
	volatile int64_t t63 = -240372868997977LL;

    t63 = (x301%(x302^(x303-x304)));

    if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x305 = INT16_MIN;
	uint64_t x306 = 77026LLU;
	static int16_t x307 = 1423;
	int8_t x308 = INT8_MAX;
	static volatile uint64_t t64 = 67998103172409435LLU;

    t64 = (x305%(x306^(x307-x308)));

    if (t64 != 31334LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x309 = -1LL;
	int32_t x310 = INT32_MIN;

    t65 = (x309%(x310^(x311-x312)));

    if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x315 = 4;
	uint8_t x316 = UINT8_MAX;
	volatile int32_t t66 = -4617378;

    t66 = (x313%(x314^(x315-x316)));

    if (t66 != 237) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x322 = 8;
	int16_t x323 = 6;
	static int8_t x324 = INT8_MIN;

    t67 = (x321%(x322^(x323-x324)));

    if (t67 != -76LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x325 = -1;
	volatile uint64_t x328 = 276178LLU;
	volatile uint64_t t68 = 2LLU;

    t68 = (x325%(x326^(x327-x328)));

    if (t68 != 205311LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x329 = INT16_MAX;
	uint8_t x330 = 90U;
	static uint32_t x332 = 1599U;
	static uint32_t t69 = 193U;

    t69 = (x329%(x330^(x331-x332)));

    if (t69 != 32767U) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x333 = INT8_MIN;
	uint64_t x334 = 176176190355LLU;
	static uint8_t x335 = 0U;

    t70 = (x333%(x334^(x335-x336)));

    if (t70 != 70684607484LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x337 = 6U;
	int32_t x338 = 3;
	uint32_t x339 = UINT32_MAX;

    t71 = (x337%(x338^(x339-x340)));

    if (t71 != 6U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x341 = 31823U;
	uint16_t x342 = UINT16_MAX;
	int16_t x343 = 1;
	static volatile uint16_t x344 = UINT16_MAX;
	volatile int32_t t72 = -3483;

    t72 = (x341%(x342^(x343-x344)));

    if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int8_t x345 = 0;
	int32_t x346 = INT32_MIN;
	volatile int32_t x347 = 118501;
	int16_t x348 = -3961;

    t73 = (x345%(x346^(x347-x348)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x349 = INT8_MIN;
	int8_t x350 = -50;
	static int8_t x351 = INT8_MIN;
	static int16_t x352 = INT16_MIN;

    t74 = (x349%(x350^(x351-x352)));

    if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x353 = -442;
	volatile uint16_t x354 = UINT16_MAX;
	int8_t x355 = INT8_MAX;
	uint16_t x356 = UINT16_MAX;
	int32_t t75 = -2;

    t75 = (x353%(x354^(x355-x356)));

    if (t75 != -55) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x357 = INT64_MIN;
	int8_t x358 = INT8_MAX;
	static int32_t x359 = INT32_MIN;
	int64_t t76 = 483998LL;

    t76 = (x357%(x358^(x359-x360)));

    if (t76 != -53003808LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x361 = 180956U;
	int16_t x363 = INT16_MIN;
	static int8_t x364 = INT8_MIN;

    t77 = (x361%(x362^(x363-x364)));

    if (t77 != 180956LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x365 = INT8_MIN;
	volatile int32_t x366 = INT32_MAX;
	int32_t x367 = -89374264;
	static volatile int32_t x368 = INT32_MIN;
	volatile int32_t t78 = 5649;

    t78 = (x365%(x366^(x367-x368)));

    if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x371 = INT8_MIN;
	static int64_t x372 = -1LL;
	static volatile int64_t t79 = 2547135977678251LL;

    t79 = (x369%(x370^(x371-x372)));

    if (t79 != 116LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x374 = 2U;
	volatile int64_t x375 = INT64_MIN;
	int32_t x376 = INT32_MIN;

    t80 = (x373%(x374^(x375-x376)));

    if (t80 != 2147483649LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x377 = INT16_MIN;
	volatile int32_t x378 = INT32_MIN;
	uint32_t x379 = 14951U;
	uint8_t x380 = UINT8_MAX;

    t81 = (x377%(x378^(x379-x380)));

    if (t81 != 2147436184U) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x386 = INT32_MIN;
	volatile int32_t x387 = -4;
	int64_t x388 = -171425574553LL;
	int64_t t82 = 264572254348LL;

    t82 = (x385%(x386^(x387-x388)));

    if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x389 = -47;
	int8_t x390 = INT8_MIN;
	int64_t x391 = -1LL;
	uint16_t x392 = UINT16_MAX;
	int64_t t83 = 28277LL;

    t83 = (x389%(x390^(x391-x392)));

    if (t83 != -47LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint16_t x393 = 35U;
	int8_t x394 = -1;
	static int16_t x395 = INT16_MIN;

    t84 = (x393%(x394^(x395-x396)));

    if (t84 != 35) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x401 = INT32_MIN;
	uint64_t x403 = 206742984553361LLU;
	int32_t x404 = -1190585;
	uint64_t t85 = 583610170LLU;

    t85 = (x401%(x402^(x403-x404)));

    if (t85 != 206740838260299LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x406 = INT64_MAX;
	uint32_t x407 = 246U;
	static int64_t x408 = -1LL;

    t86 = (x405%(x406^(x407-x408)));

    if (t86 != -128LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x410 = 26812236741752187LLU;
	int8_t x411 = INT8_MIN;
	uint16_t x412 = 900U;
	uint64_t t87 = 215130425832008397LLU;

    t87 = (x409%(x410^(x411-x412)));

    if (t87 != 77LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x413 = -833LL;
	int16_t x414 = -4;
	static int32_t x415 = INT32_MAX;
	volatile int64_t t88 = -433813109427LL;

    t88 = (x413%(x414^(x415-x416)));

    if (t88 != -833LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x417 = UINT8_MAX;
	volatile int32_t x418 = -1;
	static uint64_t x419 = 124280402537LLU;
	int8_t x420 = INT8_MIN;
	uint64_t t89 = 172LLU;

    t89 = (x417%(x418^(x419-x420)));

    if (t89 != 255LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int8_t x421 = -3;
	int8_t x422 = -13;
	uint8_t x423 = 8U;

    t90 = (x421%(x422^(x423-x424)));

    if (t90 != -3) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x426 = 62665992334LLU;
	static volatile int8_t x427 = -1;
	volatile uint64_t t91 = 29LLU;

    t91 = (x425%(x426^(x427-x428)));

    if (t91 != 127LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x429 = INT64_MAX;
	uint8_t x430 = 33U;
	static uint64_t x432 = 294049LLU;
	volatile uint64_t t92 = 2708LLU;

    t92 = (x429%(x430^(x431-x432)));

    if (t92 != 26061807LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x434 = 5613003U;
	uint32_t x435 = 44200U;
	volatile int64_t x436 = 1668175940452932LL;
	int64_t t93 = 11554LL;

    t93 = (x433%(x434^(x435-x436)));

    if (t93 != 27290379106966LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x437 = -1;
	static volatile int16_t x438 = INT16_MAX;
	static int8_t x439 = INT8_MAX;
	static uint8_t x440 = UINT8_MAX;

    t94 = (x437%(x438^(x439-x440)));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x445 = -1LL;
	static int64_t x446 = 13638087888308786LL;
	int8_t x447 = -1;
	int16_t x448 = INT16_MIN;
	volatile int64_t t95 = -596143702822669348LL;

    t95 = (x445%(x446^(x447-x448)));

    if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x449 = 5544;
	uint16_t x450 = 84U;
	uint32_t x452 = UINT32_MAX;
	static uint32_t t96 = 2U;

    t96 = (x449%(x450^(x451-x452)));

    if (t96 != 5544U) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x453 = -1;
	uint8_t x454 = UINT8_MAX;
	static volatile int64_t t97 = -5LL;

    t97 = (x453%(x454^(x455-x456)));

    if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x459 = INT8_MIN;
	uint32_t x460 = 23233777U;
	uint32_t t98 = 7U;

    t98 = (x457%(x458^(x459-x460)));

    if (t98 != 531U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x461 = UINT8_MAX;
	uint32_t x462 = 1039334U;
	uint16_t x463 = 25U;
	int32_t x464 = INT32_MAX;

    t99 = (x461%(x462^(x463-x464)));

    if (t99 != 255U) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x467 = INT8_MAX;
	int64_t x468 = 1LL;
	int64_t t100 = -874461LL;

    t100 = (x465%(x466^(x467-x468)));

    if (t100 != -1LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x470 = INT8_MIN;
	int8_t x472 = INT8_MIN;
	int64_t t101 = -310LL;

    t101 = (x469%(x470^(x471-x472)));

    if (t101 != 1251361LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x473 = 2U;
	int32_t x474 = INT32_MIN;
	uint64_t x476 = UINT64_MAX;

    t102 = (x473%(x474^(x475-x476)));

    if (t102 != 2LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x481 = 2;
	uint16_t x482 = UINT16_MAX;
	uint64_t x483 = 92743742121LLU;
	int8_t x484 = 0;
	uint64_t t103 = 2984399900LLU;

    t103 = (x481%(x482^(x483-x484)));

    if (t103 != 2LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x485 = -1;
	int16_t x486 = INT16_MIN;
	int16_t x487 = INT16_MIN;
	int16_t x488 = INT16_MAX;

    t104 = (x485%(x486^(x487-x488)));

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x493 = UINT16_MAX;
	int64_t x494 = -123700792036619581LL;
	uint64_t x495 = 1669070692568963723LLU;
	uint64_t x496 = 118216187744LLU;
	uint64_t t105 = 705595433LLU;

    t105 = (x493%(x494^(x495-x496)));

    if (t105 != 65535LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x497 = INT16_MAX;
	static int16_t x498 = 740;
	uint32_t x499 = 273714U;
	int16_t x500 = -1;

    t106 = (x497%(x498^(x499-x500)));

    if (t106 != 32767U) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x501 = -25;
	uint32_t x502 = 1841U;
	volatile uint64_t x503 = 38LLU;
	static int32_t x504 = 2978302;
	uint64_t t107 = 1032523146461356LLU;

    t107 = (x501%(x502^(x503-x504)));

    if (t107 != 2979534LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x505 = -26277031462LL;
	static int16_t x508 = 0;
	volatile int64_t t108 = -353633308443755200LL;

    t108 = (x505%(x506^(x507-x508)));

    if (t108 != -507227698LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x509 = INT32_MAX;
	static int16_t x510 = 11;
	int8_t x511 = INT8_MAX;
	int16_t x512 = INT16_MIN;
	static int32_t t109 = 111252146;

    t109 = (x509%(x510^(x511-x512)));

    if (t109 != 26911) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int8_t x513 = 5;
	static uint16_t x515 = UINT16_MAX;
	int64_t t110 = -7383LL;

    t110 = (x513%(x514^(x515-x516)));

    if (t110 != 5LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x517 = 381U;
	volatile int8_t x518 = 15;
	uint64_t x519 = 892030904821920657LLU;
	int64_t x520 = INT64_MIN;
	volatile uint64_t t111 = 318209558687286597LLU;

    t111 = (x517%(x518^(x519-x520)));

    if (t111 != 381LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x521 = INT8_MIN;
	int32_t x522 = INT32_MIN;
	uint64_t x523 = 15424LLU;
	static volatile int16_t x524 = -3559;

    t112 = (x521%(x522^(x523-x524)));

    if (t112 != 2147464537LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x529 = 38;
	int16_t x530 = 0;
	uint64_t x531 = 21094476LLU;
	int16_t x532 = INT16_MIN;

    t113 = (x529%(x530^(x531-x532)));

    if (t113 != 38LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x533 = 31U;
	int16_t x534 = 31;
	uint8_t x535 = 123U;
	uint64_t x536 = 7311LLU;
	uint64_t t114 = 29432LLU;

    t114 = (x533%(x534^(x535-x536)));

    if (t114 != 31LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x538 = INT32_MIN;
	uint8_t x539 = UINT8_MAX;
	int32_t x540 = -749;
	volatile int64_t t115 = -4LL;

    t115 = (x537%(x538^(x539-x540)));

    if (t115 != -2016032LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x541 = 12744864U;
	uint64_t x542 = UINT64_MAX;
	int16_t x544 = 1797;

    t116 = (x541%(x542^(x543-x544)));

    if (t116 != 12744864LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x549 = -1;
	int32_t x550 = INT32_MIN;
	int16_t x551 = -1;
	volatile int64_t x552 = INT64_MAX;
	volatile int64_t t117 = 540208742401881LL;

    t117 = (x549%(x550^(x551-x552)));

    if (t117 != -1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint8_t x553 = 11U;
	volatile int64_t x554 = -1LL;
	int16_t x555 = 13907;
	volatile int64_t t118 = -974391908891649LL;

    t118 = (x553%(x554^(x555-x556)));

    if (t118 != 11LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x562 = -1885065LL;
	int8_t x563 = INT8_MAX;
	uint8_t x564 = 5U;
	int64_t t119 = -7LL;

    t119 = (x561%(x562^(x563-x564)));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x565 = INT64_MAX;
	int16_t x567 = INT16_MAX;
	int16_t x568 = INT16_MAX;
	volatile int64_t t120 = -2177089215555912451LL;

    t120 = (x565%(x566^(x567-x568)));

    if (t120 != 2147483647LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x569 = UINT64_MAX;
	int64_t x570 = INT64_MAX;
	volatile uint64_t t121 = 14903286409LLU;

    t121 = (x569%(x570^(x571-x572)));

    if (t121 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x574 = INT64_MAX;
	int32_t x575 = -409603;
	int64_t t122 = 26811145LL;

    t122 = (x573%(x574^(x575-x576)));

    if (t122 != 255LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x577 = INT16_MIN;
	int16_t x578 = INT16_MIN;
	int64_t x580 = -25258140719456960LL;

    t123 = (x577%(x578^(x579-x580)));

    if (t123 != -32768LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x581 = 109U;
	volatile int32_t x583 = INT32_MIN;
	volatile int64_t t124 = 49876702331LL;

    t124 = (x581%(x582^(x583-x584)));

    if (t124 != 109LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x585 = 13038208;
	int8_t x587 = INT8_MIN;
	volatile int64_t t125 = 35070222736616LL;

    t125 = (x585%(x586^(x587-x588)));

    if (t125 != 46633LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x589 = -2422;
	static int16_t x590 = -8225;
	volatile uint32_t x591 = UINT32_MAX;
	int16_t x592 = INT16_MAX;
	static uint32_t t126 = 322193775U;

    t126 = (x589%(x590^(x591-x592)));

    if (t126 != 13503U) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x593 = 0;
	volatile int8_t x594 = INT8_MIN;
	int8_t x595 = INT8_MIN;
	uint32_t x596 = 224828615U;
	volatile uint32_t t127 = 839U;

    t127 = (x593%(x594^(x595-x596)));

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x597 = 4U;
	static int32_t x598 = -1;
	static int32_t x599 = INT32_MAX;
	int64_t x600 = INT64_MAX;
	volatile int64_t t128 = -665LL;

    t128 = (x597%(x598^(x599-x600)));

    if (t128 != 4LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x601 = INT32_MIN;
	int8_t x602 = -1;
	uint64_t x603 = 42097009249LLU;
	int32_t x604 = INT32_MIN;
	uint64_t t129 = 98765193753666037LLU;

    t129 = (x601%(x602^(x603-x604)));

    if (t129 != 42097009250LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint16_t x609 = 7U;
	int64_t x612 = 45689674150568305LL;
	static int64_t t130 = -33284470674LL;

    t130 = (x609%(x610^(x611-x612)));

    if (t130 != 7LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x613 = -1;
	uint16_t x614 = UINT16_MAX;
	uint8_t x615 = 1U;
	static volatile uint64_t x616 = UINT64_MAX;
	volatile uint64_t t131 = 68LLU;

    t131 = (x613%(x614^(x615-x616)));

    if (t131 != 80LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x617 = -2;
	int16_t x619 = INT16_MAX;
	volatile int8_t x620 = INT8_MIN;
	static volatile uint64_t t132 = 1LLU;

    t132 = (x617%(x618^(x619-x620)));

    if (t132 != 52382005518499734LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x621 = 291936U;
	volatile int8_t x622 = INT8_MAX;
	uint32_t x624 = 265056U;
	uint32_t t133 = 317778600U;

    t133 = (x621%(x622^(x623-x624)));

    if (t133 != 291936U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x625 = UINT8_MAX;
	volatile int16_t x626 = -8120;
	uint8_t x627 = 36U;
	static int8_t x628 = -1;
	volatile int32_t t134 = 774034;

    t134 = (x625%(x626^(x627-x628)));

    if (t134 != 255) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x630 = INT64_MIN;
	uint32_t x631 = 759423868U;
	int8_t x632 = 8;
	static volatile int64_t t135 = 265531657LL;

    t135 = (x629%(x630^(x631-x632)));

    if (t135 != 8LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x633 = INT16_MIN;
	int64_t x634 = -295590846LL;
	int16_t x635 = INT16_MAX;
	int16_t x636 = -38;
	int64_t t136 = -122443832484316127LL;

    t136 = (x633%(x634^(x635-x636)));

    if (t136 != -32768LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x638 = -1LL;
	static uint8_t x639 = 0U;
	static uint64_t x640 = UINT64_MAX;

    t137 = (x637%(x638^(x639-x640)));

    if (t137 != 368LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x641 = 250LLU;
	int32_t x643 = INT32_MIN;
	int8_t x644 = -1;

    t138 = (x641%(x642^(x643-x644)));

    if (t138 != 250LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint16_t x645 = UINT16_MAX;
	int64_t x646 = INT64_MIN;
	int16_t x647 = INT16_MIN;
	volatile int64_t t139 = -2179760483848334LL;

    t139 = (x645%(x646^(x647-x648)));

    if (t139 != 65535LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x650 = 1078330589141006LLU;
	int16_t x652 = -3738;

    t140 = (x649%(x650^(x651-x652)));

    if (t140 != 822041453596108LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x653 = INT64_MIN;
	int32_t x654 = -170;
	static uint32_t x655 = UINT32_MAX;
	int32_t x656 = INT32_MIN;
	volatile int64_t t141 = -19051914435051093LL;

    t141 = (x653%(x654^(x655-x656)));

    if (t141 != -57122LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x667 = INT32_MIN;
	volatile uint32_t x668 = 3753U;
	static uint32_t t142 = 5U;

    t142 = (x665%(x666^(x667-x668)));

    if (t142 != 24U) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint64_t x670 = UINT64_MAX;
	static volatile uint64_t t143 = 148647550LLU;

    t143 = (x669%(x670^(x671-x672)));

    if (t143 != 1LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x677 = -1;
	volatile int16_t x679 = -1;
	uint8_t x680 = UINT8_MAX;
	int32_t t144 = -114;

    t144 = (x677%(x678^(x679-x680)));

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x682 = INT16_MAX;
	int16_t x683 = INT16_MIN;
	int8_t x684 = -1;
	uint32_t t145 = 126662U;

    t145 = (x681%(x682^(x683-x684)));

    if (t145 != 8010287U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x685 = 566U;
	static int8_t x686 = 1;
	volatile int8_t x688 = INT8_MIN;
	int32_t t146 = 1;

    t146 = (x685%(x686^(x687-x688)));

    if (t146 != 566) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x689 = UINT16_MAX;
	int16_t x690 = 1;
	volatile int32_t x691 = INT32_MIN;
	uint32_t x692 = 649529359U;
	uint32_t t147 = 8U;

    t147 = (x689%(x690^(x691-x692)));

    if (t147 != 65535U) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x693 = INT64_MIN;
	volatile int64_t x695 = 48033437806503991LL;
	static int32_t x696 = 6;
	volatile int64_t t148 = -2513065085297332185LL;

    t148 = (x693%(x694^(x695-x696)));

    if (t148 != -951978006010688LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x697 = INT32_MIN;
	static volatile uint16_t x698 = 17U;
	static int64_t x700 = INT64_MAX;
	static volatile int64_t t149 = -26688LL;

    t149 = (x697%(x698^(x699-x700)));

    if (t149 != -2147483648LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x701 = 2511595565820040299LLU;
	int16_t x702 = INT16_MIN;
	int8_t x703 = INT8_MAX;
	int8_t x704 = INT8_MIN;
	volatile uint64_t t150 = 62557LLU;

    t150 = (x701%(x702^(x703-x704)));

    if (t150 != 2511595565820040299LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x705 = 0U;
	uint64_t x706 = UINT64_MAX;
	int8_t x707 = INT8_MIN;
	volatile int8_t x708 = INT8_MIN;
	volatile uint64_t t151 = 2699962950LLU;

    t151 = (x705%(x706^(x707-x708)));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x709 = 373412298LL;
	uint64_t x710 = 6561213253LLU;
	uint64_t x711 = 28LLU;
	volatile uint64_t t152 = 573LLU;

    t152 = (x709%(x710^(x711-x712)));

    if (t152 != 373412298LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x713 = INT8_MAX;
	volatile uint64_t t153 = 1960194101LLU;

    t153 = (x713%(x714^(x715-x716)));

    if (t153 != 127LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int16_t x717 = -9;
	static uint64_t x718 = UINT64_MAX;
	int32_t x719 = -1;
	static uint64_t x720 = 787599LLU;
	volatile uint64_t t154 = 1472756936313540654LLU;

    t154 = (x717%(x718^(x719-x720)));

    if (t154 != 712402LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x721 = 0;
	int16_t x722 = INT16_MAX;
	uint64_t x723 = 829962779938527LLU;
	int8_t x724 = -1;

    t155 = (x721%(x722^(x723-x724)));

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x725 = INT8_MIN;
	static volatile int32_t x726 = INT32_MAX;
	int32_t x727 = INT32_MAX;
	uint64_t x728 = 6748447972292765123LLU;

    t156 = (x725%(x726^(x727-x728)));

    if (t156 != 6748447971832551869LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x729 = INT64_MAX;
	uint16_t x730 = 127U;
	uint32_t x731 = 1036692106U;
	uint32_t x732 = 27580U;
	int64_t t157 = 43LL;

    t157 = (x729%(x730^(x731-x732)));

    if (t157 != 14069502LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint8_t x733 = 0U;
	int64_t x734 = INT64_MAX;
	int16_t x735 = INT16_MIN;
	uint32_t x736 = 1U;
	volatile int64_t t158 = 112742135170LL;

    t158 = (x733%(x734^(x735-x736)));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x738 = -626976;
	static int8_t x739 = -1;
	volatile int32_t t159 = -12199026;

    t159 = (x737%(x738^(x739-x740)));

    if (t159 != 32767) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x741 = 59U;
	int8_t x742 = INT8_MIN;
	static uint64_t x743 = 104631LLU;
	volatile int32_t x744 = 0;
	uint64_t t160 = 1863LLU;

    t160 = (x741%(x742^(x743-x744)));

    if (t160 != 59LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x745 = 4411;
	uint8_t x746 = 111U;
	uint16_t x747 = 0U;
	static uint32_t x748 = 1U;
	volatile uint32_t t161 = 0U;

    t161 = (x745%(x746^(x747-x748)));

    if (t161 != 4411U) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint16_t x749 = 275U;
	uint32_t x750 = UINT32_MAX;
	static int32_t x752 = INT32_MIN;
	uint32_t t162 = 199354722U;

    t162 = (x749%(x750^(x751-x752)));

    if (t162 != 275U) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x757 = 1569684U;
	int8_t x758 = 1;
	int64_t x759 = INT64_MAX;
	uint16_t x760 = 2U;
	volatile int64_t t163 = -96026LL;

    t163 = (x757%(x758^(x759-x760)));

    if (t163 != 1569684LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x761 = INT32_MAX;
	static volatile uint64_t x763 = 7658LLU;
	static volatile uint64_t t164 = 28LLU;

    t164 = (x761%(x762^(x763-x764)));

    if (t164 != 2147483647LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x765 = 991811364U;
	int8_t x766 = INT8_MIN;
	static int32_t x768 = -1;
	volatile uint32_t t165 = 522410028U;

    t165 = (x765%(x766^(x767-x768)));

    if (t165 != 14579U) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x769 = INT8_MIN;
	volatile uint8_t x770 = 1U;
	int32_t t166 = 81;

    t166 = (x769%(x770^(x771-x772)));

    if (t166 != -128) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x773 = INT32_MIN;
	volatile int8_t x774 = -56;
	int16_t x775 = -1;
	int16_t x776 = INT16_MIN;
	volatile int32_t t167 = -11;

    t167 = (x773%(x774^(x775-x776)));

    if (t167 != -6050) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x777 = -27;
	volatile uint16_t x780 = 49U;

    t168 = (x777%(x778^(x779-x780)));

    if (t168 != 6821LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x781 = 73568308U;
	volatile uint16_t x783 = UINT16_MAX;

    t169 = (x781%(x782^(x783-x784)));

    if (t169 != 73568308LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x790 = 34898928;
	volatile int8_t x791 = -12;
	uint64_t x792 = 404977098711398137LLU;

    t170 = (x789%(x790^(x791-x792)));

    if (t170 != 404977098676565109LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x793 = INT32_MIN;
	int64_t x794 = 3534395LL;
	uint8_t x795 = UINT8_MAX;
	uint16_t x796 = 1U;
	int64_t t171 = -1175157840242374LL;

    t171 = (x793%(x794^(x795-x796)));

    if (t171 != -2022117LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x798 = -2987LL;
	volatile uint8_t x799 = 43U;
	int64_t t172 = -3181347807247492559LL;

    t172 = (x797%(x798^(x799-x800)));

    if (t172 != 26964LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x803 = -9;
	uint8_t x804 = 5U;
	int32_t t173 = 2233112;

    t173 = (x801%(x802^(x803-x804)));

    if (t173 != 12) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x805 = 6;
	int64_t x806 = INT64_MIN;
	uint16_t x807 = UINT16_MAX;
	int8_t x808 = INT8_MAX;

    t174 = (x805%(x806^(x807-x808)));

    if (t174 != 6LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x809 = UINT64_MAX;
	static uint32_t x810 = UINT32_MAX;
	volatile uint64_t x811 = 23636LLU;
	static uint64_t x812 = 28821719LLU;
	uint64_t t175 = 13313615LLU;

    t175 = (x809%(x810^(x811-x812)));

    if (t175 != 4266169213LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x813 = UINT8_MAX;
	uint16_t x816 = 4U;
	uint32_t t176 = 80064U;

    t176 = (x813%(x814^(x815-x816)));

    if (t176 != 255U) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x817 = 55U;
	uint32_t x818 = 14907U;
	int8_t x819 = INT8_MIN;
	volatile int64_t t177 = -14046880714LL;

    t177 = (x817%(x818^(x819-x820)));

    if (t177 != 55LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x821 = -8;
	volatile int64_t x823 = -536196382307LL;
	int32_t x824 = INT32_MIN;
	int64_t t178 = 195808304LL;

    t178 = (x821%(x822^(x823-x824)));

    if (t178 != -8LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x825 = UINT16_MAX;
	int16_t x826 = 6908;
	static uint64_t x827 = UINT64_MAX;
	int16_t x828 = 0;
	static uint64_t t179 = 202350LLU;

    t179 = (x825%(x826^(x827-x828)));

    if (t179 != 65535LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x829 = -1LL;
	volatile int32_t x830 = -83;
	int64_t x831 = INT64_MAX;
	volatile uint32_t x832 = 31766U;
	int64_t t180 = 46LL;

    t180 = (x829%(x830^(x831-x832)));

    if (t180 != -1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x835 = INT64_MIN;
	volatile int64_t x836 = -1LL;
	volatile int64_t t181 = 116990024LL;

    t181 = (x833%(x834^(x835-x836)));

    if (t181 != 2147483647LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x837 = 0;
	int64_t x838 = 867140671111095LL;
	uint64_t x839 = 1209183360LLU;
	volatile uint64_t x840 = 53LLU;
	static volatile uint64_t t182 = 938702754723280LLU;

    t182 = (x837%(x838^(x839-x840)));

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x841 = -13580;
	volatile uint32_t x843 = 211590290U;
	uint32_t x844 = 455608208U;
	volatile uint32_t t183 = 344U;

    t183 = (x841%(x842^(x843-x844)));

    if (t183 != 392493601U) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x846 = INT16_MIN;
	int64_t x847 = 57152161LL;
	int32_t x848 = 6;
	int64_t t184 = -5LL;

    t184 = (x845%(x846^(x847-x848)));

    if (t184 != 3440207LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x851 = INT16_MIN;
	volatile int32_t t185 = 2;

    t185 = (x849%(x850^(x851-x852)));

    if (t185 != 32767) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x853 = 1U;
	uint8_t x855 = UINT8_MAX;
	uint64_t x856 = 29LLU;
	volatile uint64_t t186 = 8LLU;

    t186 = (x853%(x854^(x855-x856)));

    if (t186 != 1LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x861 = INT8_MIN;
	volatile uint16_t x862 = 2U;
	uint64_t x864 = 728171359640713LLU;
	uint64_t t187 = 277741241703601511LLU;

    t187 = (x861%(x862^(x863-x864)));

    if (t187 != 728170902841557LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x865 = -40;
	int16_t x866 = INT16_MIN;
	int16_t x867 = -1;
	int8_t x868 = 0;
	volatile int32_t t188 = -14483;

    t188 = (x865%(x866^(x867-x868)));

    if (t188 != -40) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x870 = 2U;
	int8_t x871 = -1;
	int64_t x872 = 1953739143LL;
	volatile int64_t t189 = 48340434390LL;

    t189 = (x869%(x870^(x871-x872)));

    if (t189 != 8LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x874 = INT8_MAX;
	uint8_t x875 = 16U;
	static int16_t x876 = INT16_MIN;
	volatile uint64_t t190 = 950258703LLU;

    t190 = (x873%(x874^(x875-x876)));

    if (t190 != 16309LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int8_t x877 = -13;
	volatile int32_t x878 = INT32_MAX;
	static int64_t x879 = -44458711055757LL;
	int8_t x880 = INT8_MIN;
	static int64_t t191 = 333625879617LL;

    t191 = (x877%(x878^(x879-x880)));

    if (t191 != -13LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x881 = INT8_MIN;
	int64_t x883 = -1LL;
	uint32_t x884 = 46951495U;

    t192 = (x881%(x882^(x883-x884)));

    if (t192 != -128LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x885 = UINT64_MAX;
	int8_t x886 = -6;
	uint32_t x887 = 15U;
	uint8_t x888 = UINT8_MAX;
	uint64_t t193 = 0LLU;

    t193 = (x885%(x886^(x887-x888)));

    if (t193 != 15LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x889 = INT16_MAX;
	volatile uint64_t x890 = 2414923LLU;
	int8_t x891 = 6;
	volatile uint64_t t194 = 1165929191004LLU;

    t194 = (x889%(x890^(x891-x892)));

    if (t194 != 32767LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x893 = UINT64_MAX;
	static int32_t x894 = -1;
	volatile int64_t x895 = -193264879594922798LL;
	uint64_t x896 = 91931825080280711LLU;
	volatile uint64_t t195 = 725181958391LLU;

    t195 = (x893%(x894^(x895-x896)));

    if (t195 != 194154974496527103LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x897 = INT32_MIN;
	uint32_t x899 = 2569981U;
	uint32_t t196 = 0U;

    t196 = (x897%(x898^(x899-x900)));

    if (t196 != 2147483648U) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint32_t x901 = UINT32_MAX;
	volatile int64_t x902 = -158515784734806841LL;
	volatile int8_t x903 = -4;
	volatile uint8_t x904 = 3U;

    t197 = (x901%(x902^(x903-x904)));

    if (t197 != 4294967295LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x905 = 2396960267LLU;
	volatile uint64_t x907 = 2545391695314764LLU;
	int8_t x908 = INT8_MAX;
	uint64_t t198 = 4260733644602128LLU;

    t198 = (x905%(x906^(x907-x908)));

    if (t198 != 2396960267LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x909 = -9287131575131LL;
	int64_t x911 = -1LL;
	uint32_t x912 = UINT32_MAX;
	volatile uint64_t t199 = 1185949LLU;

    t199 = (x909%(x910^(x911-x912)));

    if (t199 != 9033121201911978095LLU) { NG(); } else { ; }
	
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

