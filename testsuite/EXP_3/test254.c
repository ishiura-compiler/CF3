
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

int64_t x3 = INT64_MAX;
uint32_t x13 = UINT32_MAX;
static int16_t x22 = 1;
volatile int8_t x26 = INT8_MIN;
int8_t x35 = 37;
static int64_t x37 = INT64_MIN;
volatile int64_t x41 = -1LL;
volatile int32_t x42 = INT32_MAX;
uint8_t x56 = 0U;
static uint64_t x63 = 2005913128433394LLU;
volatile uint64_t t13 = 118210585354447LLU;
uint8_t x67 = UINT8_MAX;
uint32_t x68 = 126U;
static uint16_t x69 = 2U;
volatile uint64_t t16 = 44421358704005LLU;
int32_t x83 = INT32_MIN;
volatile int16_t x88 = -1;
int64_t t19 = 47324LL;
static int16_t x89 = INT16_MAX;
static int8_t x90 = INT8_MIN;
int64_t x91 = 2291586170638387227LL;
int64_t t21 = 17345336571LL;
volatile int64_t t22 = -507040LL;
uint16_t x106 = 2154U;
uint32_t t24 = 2357U;
volatile uint64_t t27 = 14472497401333LLU;
static int64_t t29 = 63LL;
int32_t x130 = INT32_MIN;
int64_t t31 = -95658LL;
int64_t x138 = INT64_MAX;
static volatile int64_t t32 = 1120559869701468873LL;
volatile int32_t t34 = 92;
static uint32_t x160 = UINT32_MAX;
volatile uint16_t x162 = 1U;
volatile int16_t x167 = 7;
volatile int32_t t37 = -5465390;
static uint32_t x175 = 12995607U;
uint8_t x183 = 8U;
int64_t t40 = 9622LL;
int16_t x195 = INT16_MIN;
uint64_t t43 = 5599033388LLU;
uint16_t x211 = UINT16_MAX;
volatile uint8_t x214 = 62U;
volatile int32_t t45 = -240885;
volatile int16_t x217 = -1;
volatile int8_t x225 = 2;
static volatile int8_t x239 = 1;
int32_t x242 = INT32_MIN;
uint16_t x255 = UINT16_MAX;
static int64_t x258 = -1LL;
volatile int16_t x261 = 6542;
volatile int32_t t55 = 399290675;
static int16_t x273 = 283;
volatile uint32_t x275 = UINT32_MAX;
int16_t x282 = -1;
volatile int64_t x285 = -1LL;
int64_t x287 = -1479395556083902LL;
static int32_t x288 = INT32_MIN;
int64_t t60 = -17146589416LL;
int8_t x290 = INT8_MAX;
volatile int32_t t61 = -2925;
volatile uint64_t x298 = UINT64_MAX;
int16_t x299 = -1;
int32_t x305 = INT32_MAX;
int32_t x307 = 222434077;
int64_t x313 = -1253072900715LL;
uint16_t x327 = UINT16_MAX;
int8_t x330 = -1;
uint32_t x331 = UINT32_MAX;
uint64_t x335 = 75LLU;
volatile int8_t x336 = INT8_MIN;
uint64_t t69 = 4411962336960174572LLU;
static uint8_t x340 = 64U;
volatile uint16_t x352 = UINT16_MAX;
int64_t x355 = 1698391339LL;
int8_t x356 = INT8_MIN;
volatile int16_t x358 = -1853;
uint8_t x365 = UINT8_MAX;
uint16_t x371 = UINT16_MAX;
volatile int16_t x377 = -3627;
int32_t x379 = -436625;
volatile uint32_t x380 = 245U;
uint16_t x381 = UINT16_MAX;
uint8_t x385 = UINT8_MAX;
volatile int64_t x386 = INT64_MIN;
static volatile uint8_t x387 = UINT8_MAX;
static int64_t x389 = -10391477846068LL;
uint8_t x391 = UINT8_MAX;
int32_t x393 = 2204;
uint8_t x394 = 29U;
volatile int16_t x403 = 7;
int16_t x413 = INT16_MIN;
int32_t x414 = INT32_MAX;
static volatile uint32_t x420 = UINT32_MAX;
int8_t x428 = INT8_MIN;
static int16_t x439 = -1;
static int16_t x442 = -55;
volatile uint32_t x447 = UINT32_MAX;
uint64_t x461 = 1631898791837654167LLU;
int64_t t94 = 3250900947015LL;
static int64_t x470 = INT64_MIN;
int64_t x472 = -1LL;
uint64_t x476 = 301LLU;
int64_t x481 = INT64_MIN;
static int64_t x482 = -1LL;
uint64_t x483 = 412170169005320335LLU;
static int8_t x487 = INT8_MIN;
uint8_t x488 = 1U;
static int64_t t99 = 13400LL;
int8_t x491 = -1;
static volatile int8_t x493 = INT8_MIN;
int32_t x495 = -1;
uint64_t x496 = 137098119080811714LLU;
volatile uint64_t t101 = 15202866726064LLU;
static int8_t x500 = INT8_MIN;
static int8_t x505 = -22;
static volatile int8_t x514 = INT8_MIN;
uint64_t t106 = 1276578904008973187LLU;
volatile int64_t x528 = 1829382805665109557LL;
int64_t x530 = -258031333179LL;
static int8_t x531 = INT8_MIN;
int32_t x532 = 524726;
int64_t t113 = -32468417LL;
int64_t x545 = INT64_MAX;
uint64_t x546 = UINT64_MAX;
int64_t x556 = -1LL;
int32_t t117 = 6;
int8_t x588 = 0;
volatile int16_t x596 = 2097;
uint64_t t122 = 3022950856721LLU;
uint64_t x603 = 243417LLU;
int64_t x609 = INT64_MAX;
uint32_t x612 = 0U;
uint8_t x620 = 3U;
volatile int64_t t127 = 1877464LL;
uint64_t x628 = 101536412871043421LLU;
int32_t x634 = -700633;
volatile int32_t x635 = -557;
static int64_t x640 = INT64_MIN;
int32_t x642 = INT32_MIN;
uint64_t t134 = 1405720069505411321LLU;
int16_t x652 = INT16_MIN;
uint32_t x657 = 1U;
uint32_t x658 = 240U;
int8_t x661 = 31;
int64_t t138 = 1062LL;
int8_t x666 = INT8_MIN;
int64_t t140 = 180LL;
uint8_t x678 = UINT8_MAX;
volatile uint64_t t141 = 35520007775026839LLU;
int64_t x681 = INT64_MIN;
static int16_t x686 = INT16_MIN;
volatile int32_t x688 = INT32_MIN;
volatile uint16_t x691 = 9U;
volatile int32_t x697 = -123255;
volatile uint32_t x701 = 61309205U;
int8_t x703 = -1;
volatile int64_t t147 = -2132438856377LL;
int64_t t148 = -23LL;
int32_t x711 = -1;
int64_t x712 = INT64_MIN;
static volatile uint16_t x715 = 1657U;
uint16_t x717 = 3781U;
int32_t x720 = -1;
int32_t t151 = -962528;
static int16_t x725 = INT16_MIN;
int16_t x726 = INT16_MIN;
static int32_t t152 = -963188;
int8_t x739 = -1;
volatile uint16_t x751 = 12905U;
uint32_t x771 = 31U;
volatile uint64_t t159 = 6LLU;
uint8_t x781 = 10U;
static uint16_t x783 = UINT16_MAX;
int64_t x787 = -1LL;
int16_t x788 = 0;
int64_t x789 = INT64_MIN;
uint64_t x790 = 572830297291659315LLU;
int16_t x793 = INT16_MIN;
volatile uint64_t x798 = 34750258308898490LLU;
int16_t x799 = INT16_MAX;
volatile int8_t x800 = 45;
int8_t x802 = INT8_MIN;
static int32_t x803 = -1;
int32_t x804 = INT32_MIN;
int32_t t170 = 567070;
int8_t x822 = 48;
static int64_t x824 = -1LL;
int64_t x837 = -62718679471LL;
int16_t x841 = -1;
uint32_t x842 = 2U;
volatile int64_t x846 = INT64_MAX;
int16_t x849 = -1;
uint32_t x850 = 22243U;
volatile int64_t t178 = -34102903LL;
static int32_t x862 = INT32_MIN;
uint8_t x873 = 56U;
uint64_t t182 = UINT64_MAX;
volatile uint32_t t184 = 1317498U;
int16_t x885 = INT16_MAX;
int16_t x888 = 1;
static volatile uint32_t x898 = UINT32_MAX;
int32_t x900 = -170033575;
int16_t x902 = INT16_MIN;
volatile int32_t x914 = -3682;
uint64_t t191 = 255953942624LLU;
static int8_t x928 = -1;
int64_t t193 = -22LL;
int16_t x940 = -1;
int8_t x941 = -1;
int64_t x943 = 310572590269433709LL;
uint64_t t196 = 5993126015068LLU;
int16_t x948 = -1;
static int8_t x951 = -1;
uint32_t t198 = 1U;
int8_t x955 = -4;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	int32_t x2 = -7;
	int32_t x4 = INT32_MAX;
	static volatile int64_t t0 = -465823876947LL;

    t0 = ((x1%x2)-(x3-x4));

    if (t0 != -9223372034707292159LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x9 = 5;
	volatile uint32_t x10 = 8190376U;
	int8_t x11 = INT8_MIN;
	uint8_t x12 = UINT8_MAX;
	static volatile uint32_t t1 = 16090739U;

    t1 = ((x9%x10)-(x11-x12));

    if (t1 != 388U) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x14 = INT32_MIN;
	static int16_t x15 = -1;
	volatile int64_t x16 = -1LL;
	int64_t t2 = 1LL;

    t2 = ((x13%x14)-(x15-x16));

    if (t2 != 2147483647LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x17 = 25U;
	volatile int64_t x18 = INT64_MAX;
	volatile int8_t x19 = INT8_MIN;
	uint64_t x20 = 1031LLU;
	static volatile uint64_t t3 = 230623931423LLU;

    t3 = ((x17%x18)-(x19-x20));

    if (t3 != 1184LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = INT16_MIN;
	int32_t x23 = -75;
	int8_t x24 = -1;
	volatile int32_t t4 = 28;

    t4 = ((x21%x22)-(x23-x24));

    if (t4 != 74) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = -1;
	int64_t x27 = INT64_MIN;
	int16_t x28 = -4;
	static int64_t t5 = 187420082LL;

    t5 = ((x25%x26)-(x27-x28));

    if (t5 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x29 = 273778541904453LLU;
	static volatile int32_t x30 = -84308112;
	int32_t x31 = INT32_MAX;
	volatile int64_t x32 = -213166489906LL;
	volatile uint64_t t6 = 2122915203056822LLU;

    t6 = ((x29%x30)-(x31-x32));

    if (t6 != 273563227930900LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = INT16_MAX;
	uint16_t x34 = 2361U;
	int8_t x36 = INT8_MIN;
	volatile int32_t t7 = -2;

    t7 = ((x33%x34)-(x35-x36));

    if (t7 != 1909) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x38 = 747336LLU;
	volatile int32_t x39 = INT32_MIN;
	uint32_t x40 = 10U;
	uint64_t t8 = 8385LLU;

    t8 = ((x37%x38)-(x39-x40));

    if (t8 != 18446744071562648858LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x43 = 9U;
	static int32_t x44 = INT32_MAX;
	volatile int64_t t9 = -29LL;

    t9 = ((x41%x42)-(x43-x44));

    if (t9 != 2147483637LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x45 = INT8_MIN;
	uint16_t x46 = 19U;
	static uint32_t x47 = 1704240U;
	int16_t x48 = -1;
	volatile uint32_t t10 = 2098U;

    t10 = ((x45%x46)-(x47-x48));

    if (t10 != 4293263041U) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x53 = -1LL;
	int8_t x54 = INT8_MIN;
	volatile int8_t x55 = INT8_MIN;
	volatile int64_t t11 = -40493187176503499LL;

    t11 = ((x53%x54)-(x55-x56));

    if (t11 != 127LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x57 = 11553U;
	int8_t x58 = INT8_MIN;
	uint64_t x59 = 115387923LLU;
	volatile int64_t x60 = INT64_MIN;
	static volatile uint64_t t12 = 4481717LLU;

    t12 = ((x57%x58)-(x59-x60));

    if (t12 != 9223372036739387918LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x61 = 83;
	uint32_t x62 = 78406U;
	int8_t x64 = -1;

    t13 = ((x61%x62)-(x63-x64));

    if (t13 != 18444738160581118304LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x65 = -1LL;
	volatile int16_t x66 = -55;
	static int64_t t14 = 933198926841717958LL;

    t14 = ((x65%x66)-(x67-x68));

    if (t14 != -130LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x70 = 67709LLU;
	static volatile int8_t x71 = -33;
	int64_t x72 = INT64_MIN;
	volatile uint64_t t15 = 5361797373LLU;

    t15 = ((x69%x70)-(x71-x72));

    if (t15 != 9223372036854775843LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x73 = 27;
	uint8_t x74 = 3U;
	uint64_t x75 = 3665664LLU;
	volatile int8_t x76 = INT8_MIN;

    t16 = ((x73%x74)-(x75-x76));

    if (t16 != 18446744073705885824LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x77 = UINT8_MAX;
	volatile int32_t x78 = INT32_MAX;
	static volatile int8_t x79 = INT8_MAX;
	volatile int8_t x80 = 42;
	int32_t t17 = -76798667;

    t17 = ((x77%x78)-(x79-x80));

    if (t17 != 170) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x81 = -23660873351907161LL;
	uint64_t x82 = 112401876951557LLU;
	int16_t x84 = -4389;
	uint64_t t18 = 1799469001782986LLU;

    t18 = ((x81%x82)-(x83-x84));

    if (t18 != 78364514076743LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x85 = INT64_MIN;
	int8_t x86 = INT8_MIN;
	int16_t x87 = INT16_MIN;

    t19 = ((x85%x86)-(x87-x88));

    if (t19 != 32767LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x92 = INT32_MIN;
	volatile int64_t t20 = 74625803368615430LL;

    t20 = ((x89%x90)-(x91-x92));

    if (t20 != -2291586172785870748LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x93 = 240;
	int8_t x94 = INT8_MIN;
	int64_t x95 = 329523684634459LL;
	int32_t x96 = INT32_MIN;

    t21 = ((x93%x94)-(x95-x96));

    if (t21 != -329525832117995LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x97 = INT64_MIN;
	int8_t x98 = INT8_MIN;
	int32_t x99 = INT32_MIN;
	int64_t x100 = -26304182579LL;

    t22 = ((x97%x98)-(x99-x100));

    if (t22 != -24156698931LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint8_t x101 = 2U;
	int8_t x102 = -1;
	uint64_t x103 = 70841LLU;
	int16_t x104 = -1;
	static uint64_t t23 = 113991345375129LLU;

    t23 = ((x101%x102)-(x103-x104));

    if (t23 != 18446744073709480774LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint32_t x105 = UINT32_MAX;
	volatile int16_t x107 = INT16_MIN;
	int32_t x108 = INT32_MIN;

    t24 = ((x105%x106)-(x107-x108));

    if (t24 != 2147517565U) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x109 = INT64_MIN;
	volatile uint32_t x110 = 309560024U;
	volatile uint8_t x111 = 13U;
	static int16_t x112 = INT16_MIN;
	static int64_t t25 = 71176LL;

    t25 = ((x109%x110)-(x111-x112));

    if (t25 != -157795749LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x113 = UINT32_MAX;
	uint64_t x114 = 111LLU;
	int8_t x115 = INT8_MIN;
	uint64_t x116 = 11LLU;
	uint64_t t26 = 429675531LLU;

    t26 = ((x113%x114)-(x115-x116));

    if (t26 != 145LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x117 = -1;
	volatile int32_t x118 = -324;
	int64_t x119 = -1LL;
	uint64_t x120 = 21661124195LLU;

    t27 = ((x117%x118)-(x119-x120));

    if (t27 != 21661124195LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int16_t x121 = -30;
	int16_t x122 = INT16_MIN;
	int16_t x123 = INT16_MIN;
	static volatile int32_t x124 = INT32_MIN;
	int32_t t28 = 5679;

    t28 = ((x121%x122)-(x123-x124));

    if (t28 != -2147450910) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x125 = -1;
	volatile int64_t x126 = INT64_MAX;
	static volatile int64_t x127 = -1LL;
	static int32_t x128 = 166;

    t29 = ((x125%x126)-(x127-x128));

    if (t29 != 166LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x129 = INT64_MIN;
	static volatile int8_t x131 = INT8_MAX;
	int32_t x132 = 5550640;
	volatile int64_t t30 = 114882LL;

    t30 = ((x129%x130)-(x131-x132));

    if (t30 != 5550513LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x133 = 563;
	uint16_t x134 = 1U;
	int8_t x135 = -62;
	int64_t x136 = 291315LL;

    t31 = ((x133%x134)-(x135-x136));

    if (t31 != 291377LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x137 = -1;
	uint16_t x139 = 322U;
	uint16_t x140 = UINT16_MAX;

    t32 = ((x137%x138)-(x139-x140));

    if (t32 != 65212LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x145 = 7U;
	int16_t x146 = INT16_MIN;
	uint16_t x147 = 0U;
	volatile int16_t x148 = -1;
	volatile int32_t t33 = -3;

    t33 = ((x145%x146)-(x147-x148));

    if (t33 != 6) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x153 = 1;
	int16_t x154 = INT16_MAX;
	static volatile int32_t x155 = INT32_MAX;
	uint8_t x156 = UINT8_MAX;

    t34 = ((x153%x154)-(x155-x156));

    if (t34 != -2147483391) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x157 = 71U;
	uint8_t x158 = UINT8_MAX;
	uint16_t x159 = UINT16_MAX;
	static volatile uint32_t t35 = 26131902U;

    t35 = ((x157%x158)-(x159-x160));

    if (t35 != 4294901831U) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x161 = -1;
	volatile int16_t x163 = -1;
	static volatile int32_t x164 = INT32_MIN;
	volatile int32_t t36 = -1687;

    t36 = ((x161%x162)-(x163-x164));

    if (t36 != -2147483647) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x165 = 4U;
	int32_t x166 = INT32_MIN;
	uint16_t x168 = 26361U;

    t37 = ((x165%x166)-(x167-x168));

    if (t37 != 26358) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x173 = 1U;
	uint32_t x174 = UINT32_MAX;
	uint32_t x176 = UINT32_MAX;
	volatile uint32_t t38 = 13503U;

    t38 = ((x173%x174)-(x175-x176));

    if (t38 != 4281971689U) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x181 = INT32_MIN;
	volatile uint16_t x182 = 7U;
	int8_t x184 = -1;
	int32_t t39 = 45387381;

    t39 = ((x181%x182)-(x183-x184));

    if (t39 != -11) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x185 = UINT16_MAX;
	int64_t x186 = -1LL;
	int64_t x187 = INT64_MIN;
	int64_t x188 = -3636918808271437487LL;

    t40 = ((x185%x186)-(x187-x188));

    if (t40 != 5586453228583338321LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x189 = 30682;
	int16_t x190 = -23;
	int32_t x191 = -1;
	int16_t x192 = INT16_MIN;
	volatile int32_t t41 = 19;

    t41 = ((x189%x190)-(x191-x192));

    if (t41 != -32767) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint16_t x193 = UINT16_MAX;
	int32_t x194 = -1;
	volatile int8_t x196 = INT8_MIN;
	volatile int32_t t42 = 18222117;

    t42 = ((x193%x194)-(x195-x196));

    if (t42 != 32640) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x197 = 7573248U;
	static uint64_t x198 = 536699426005868LLU;
	uint16_t x199 = 16175U;
	int16_t x200 = 387;

    t43 = ((x197%x198)-(x199-x200));

    if (t43 != 7557460LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x209 = INT32_MAX;
	uint32_t x210 = 3926U;
	uint8_t x212 = 1U;
	volatile uint32_t t44 = 417U;

    t44 = ((x209%x210)-(x211-x212));

    if (t44 != 4294902669U) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x213 = INT8_MAX;
	int16_t x215 = -1;
	int8_t x216 = INT8_MIN;

    t45 = ((x213%x214)-(x215-x216));

    if (t45 != -124) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int16_t x218 = INT16_MAX;
	static volatile int8_t x219 = INT8_MIN;
	static int8_t x220 = 1;
	int32_t t46 = 17903769;

    t46 = ((x217%x218)-(x219-x220));

    if (t46 != 128) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x221 = -33;
	volatile int32_t x222 = INT32_MIN;
	uint64_t x223 = 21LLU;
	volatile int32_t x224 = -1;
	static volatile uint64_t t47 = 432006411392287LLU;

    t47 = ((x221%x222)-(x223-x224));

    if (t47 != 18446744073709551561LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x226 = 32987858738LLU;
	int64_t x227 = INT64_MIN;
	volatile int8_t x228 = INT8_MIN;
	uint64_t t48 = 6242645727671154LLU;

    t48 = ((x225%x226)-(x227-x228));

    if (t48 != 9223372036854775682LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x233 = 3675096887LL;
	int8_t x234 = 17;
	uint32_t x235 = UINT32_MAX;
	uint64_t x236 = UINT64_MAX;
	static volatile uint64_t t49 = 721243274783712LLU;

    t49 = ((x233%x234)-(x235-x236));

    if (t49 != 18446744069414584334LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x237 = UINT16_MAX;
	int8_t x238 = INT8_MIN;
	static int8_t x240 = INT8_MIN;
	static int32_t t50 = -171683;

    t50 = ((x237%x238)-(x239-x240));

    if (t50 != -2) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint8_t x241 = 0U;
	uint64_t x243 = 194842384813571163LLU;
	static int32_t x244 = -42484900;
	uint64_t t51 = 115LLU;

    t51 = ((x241%x242)-(x243-x244));

    if (t51 != 18251901688853495553LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x245 = -1;
	volatile int64_t x246 = INT64_MIN;
	static int32_t x247 = INT32_MIN;
	int64_t x248 = -1LL;
	volatile int64_t t52 = -31418LL;

    t52 = ((x245%x246)-(x247-x248));

    if (t52 != 2147483646LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x253 = -1;
	volatile uint8_t x254 = 5U;
	uint8_t x256 = 32U;
	static volatile int32_t t53 = -48;

    t53 = ((x253%x254)-(x255-x256));

    if (t53 != -65504) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x257 = -1;
	volatile uint16_t x259 = 391U;
	static uint16_t x260 = UINT16_MAX;
	int64_t t54 = 83849LL;

    t54 = ((x257%x258)-(x259-x260));

    if (t54 != 65144LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x262 = INT16_MIN;
	int8_t x263 = INT8_MIN;
	int16_t x264 = INT16_MAX;

    t55 = ((x261%x262)-(x263-x264));

    if (t55 != 39437) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x269 = -9;
	static int8_t x270 = 1;
	int16_t x271 = -3;
	uint8_t x272 = UINT8_MAX;
	static volatile int32_t t56 = -163530;

    t56 = ((x269%x270)-(x271-x272));

    if (t56 != 258) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x274 = 3;
	uint16_t x276 = 242U;
	static volatile uint32_t t57 = 22207U;

    t57 = ((x273%x274)-(x275-x276));

    if (t57 != 244U) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x277 = INT16_MAX;
	uint16_t x278 = UINT16_MAX;
	int32_t x279 = -1;
	int32_t x280 = -69051;
	int32_t t58 = -691485;

    t58 = ((x277%x278)-(x279-x280));

    if (t58 != -36283) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int64_t x281 = INT64_MIN;
	int8_t x283 = INT8_MAX;
	static uint16_t x284 = 0U;
	volatile int64_t t59 = 510173677LL;

    t59 = ((x281%x282)-(x283-x284));

    if (t59 != -127LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x286 = INT64_MIN;

    t60 = ((x285%x286)-(x287-x288));

    if (t60 != 1479393408600253LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x289 = INT32_MIN;
	uint16_t x291 = 53U;
	int16_t x292 = INT16_MIN;

    t61 = ((x289%x290)-(x291-x292));

    if (t61 != -32829) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x297 = -1;
	int16_t x300 = -1;
	volatile uint64_t t62 = 3914615333LLU;

    t62 = ((x297%x298)-(x299-x300));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x306 = UINT8_MAX;
	volatile int8_t x308 = -1;
	int32_t t63 = -1717966;

    t63 = ((x305%x306)-(x307-x308));

    if (t63 != -222433951) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x314 = INT32_MIN;
	int16_t x315 = INT16_MIN;
	static int16_t x316 = 1358;
	int64_t t64 = 330LL;

    t64 = ((x313%x314)-(x315-x316));

    if (t64 != -1089899805LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x317 = INT8_MIN;
	uint32_t x318 = 87U;
	int16_t x319 = -255;
	uint32_t x320 = 62721213U;
	uint32_t t65 = 90U;

    t65 = ((x317%x318)-(x319-x320));

    if (t65 != 62721530U) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x321 = INT16_MIN;
	uint32_t x322 = 50629U;
	int16_t x323 = INT16_MAX;
	uint8_t x324 = 69U;
	static uint32_t t66 = 428183615U;

    t66 = ((x321%x322)-(x323-x324));

    if (t66 != 4294960427U) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x325 = -1;
	int16_t x326 = 12479;
	static volatile uint64_t x328 = 447680045197LLU;
	volatile uint64_t t67 = 11LLU;

    t67 = ((x325%x326)-(x327-x328));

    if (t67 != 447679979661LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x329 = INT64_MIN;
	static int8_t x332 = -1;
	static volatile int64_t t68 = -2318248LL;

    t68 = ((x329%x330)-(x331-x332));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x333 = -67366986860LL;
	int32_t x334 = -1;

    t69 = ((x333%x334)-(x335-x336));

    if (t69 != 18446744073709551413LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x337 = -47;
	volatile int32_t x338 = INT32_MIN;
	int32_t x339 = INT32_MAX;
	static int32_t t70 = -1019684;

    t70 = ((x337%x338)-(x339-x340));

    if (t70 != -2147483630) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x341 = -9313;
	volatile int8_t x342 = -6;
	int32_t x343 = -5523283;
	static uint8_t x344 = 0U;
	int32_t t71 = 520231417;

    t71 = ((x341%x342)-(x343-x344));

    if (t71 != 5523282) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x345 = 20205449320406LL;
	int8_t x346 = -1;
	volatile uint32_t x347 = 3700159U;
	int64_t x348 = -1LL;
	static volatile int64_t t72 = -7174366313LL;

    t72 = ((x345%x346)-(x347-x348));

    if (t72 != -3700160LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x349 = INT64_MIN;
	int32_t x350 = -1;
	uint8_t x351 = 4U;
	static int64_t t73 = -15215850128209171LL;

    t73 = ((x349%x350)-(x351-x352));

    if (t73 != 65531LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x353 = INT64_MIN;
	uint16_t x354 = UINT16_MAX;
	volatile int64_t t74 = -483LL;

    t74 = ((x353%x354)-(x355-x356));

    if (t74 != -1698424235LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x357 = -1;
	static int32_t x359 = -1;
	int64_t x360 = INT64_MIN;
	int64_t t75 = INT64_MIN;

    t75 = ((x357%x358)-(x359-x360));

    if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x366 = INT8_MAX;
	volatile int8_t x367 = -1;
	volatile uint16_t x368 = 346U;
	volatile int32_t t76 = 521;

    t76 = ((x365%x366)-(x367-x368));

    if (t76 != 348) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile uint64_t x369 = UINT64_MAX;
	uint16_t x370 = 4U;
	static int64_t x372 = 132LL;
	uint64_t t77 = 1515175LLU;

    t77 = ((x369%x370)-(x371-x372));

    if (t77 != 18446744073709486216LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int64_t x378 = INT64_MAX;
	int64_t t78 = 471606358LL;

    t78 = ((x377%x378)-(x379-x380));

    if (t78 != -4294534053LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x382 = -1;
	int8_t x383 = -44;
	uint64_t x384 = 541929LLU;
	static volatile uint64_t t79 = 49387545LLU;

    t79 = ((x381%x382)-(x383-x384));

    if (t79 != 541973LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x388 = INT8_MIN;
	int64_t t80 = -23341941131LL;

    t80 = ((x385%x386)-(x387-x388));

    if (t80 != -128LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x390 = -1;
	int64_t x392 = INT64_MAX;
	int64_t t81 = 54223095888632LL;

    t81 = ((x389%x390)-(x391-x392));

    if (t81 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x395 = UINT8_MAX;
	int8_t x396 = 3;
	int32_t t82 = -33532025;

    t82 = ((x393%x394)-(x395-x396));

    if (t82 != -252) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x401 = INT32_MAX;
	uint64_t x402 = 31513891211LLU;
	int32_t x404 = -86;
	uint64_t t83 = 1944100676LLU;

    t83 = ((x401%x402)-(x403-x404));

    if (t83 != 2147483554LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x405 = 0U;
	static int16_t x406 = 917;
	volatile int8_t x407 = INT8_MIN;
	uint8_t x408 = 67U;
	static int32_t t84 = -28;

    t84 = ((x405%x406)-(x407-x408));

    if (t84 != 195) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x409 = -224;
	uint32_t x410 = 14U;
	int64_t x411 = INT64_MAX;
	volatile uint8_t x412 = 1U;
	int64_t t85 = 784809LL;

    t85 = ((x409%x410)-(x411-x412));

    if (t85 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x415 = 642588157U;
	uint16_t x416 = 166U;
	volatile uint32_t t86 = 210311746U;

    t86 = ((x413%x414)-(x415-x416));

    if (t86 != 3652346537U) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x417 = -1;
	int32_t x418 = -58;
	int32_t x419 = 14100;
	volatile uint32_t t87 = 590351U;

    t87 = ((x417%x418)-(x419-x420));

    if (t87 != 4294953194U) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x425 = INT64_MIN;
	static int32_t x426 = INT32_MIN;
	volatile int16_t x427 = INT16_MAX;
	int64_t t88 = -877596387LL;

    t88 = ((x425%x426)-(x427-x428));

    if (t88 != -32895LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x429 = INT16_MAX;
	int8_t x430 = -2;
	uint8_t x431 = 19U;
	int8_t x432 = -1;
	static volatile int32_t t89 = 26119927;

    t89 = ((x429%x430)-(x431-x432));

    if (t89 != -19) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint16_t x437 = UINT16_MAX;
	static int32_t x438 = -967698;
	int16_t x440 = -1;
	volatile int32_t t90 = -94;

    t90 = ((x437%x438)-(x439-x440));

    if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x441 = INT8_MIN;
	int16_t x443 = INT16_MIN;
	static int32_t x444 = INT32_MIN;
	volatile int32_t t91 = -2617;

    t91 = ((x441%x442)-(x443-x444));

    if (t91 != -2147450898) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x445 = UINT8_MAX;
	int8_t x446 = -1;
	static volatile int8_t x448 = -14;
	volatile uint32_t t92 = 690994U;

    t92 = ((x445%x446)-(x447-x448));

    if (t92 != 4294967283U) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x462 = 2920566726LL;
	static uint64_t x463 = UINT64_MAX;
	uint8_t x464 = 0U;
	static volatile uint64_t t93 = 1425736918248410319LLU;

    t93 = ((x461%x462)-(x463-x464));

    if (t93 != 1610034716LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x465 = -5695LL;
	static int16_t x466 = INT16_MAX;
	int8_t x467 = INT8_MIN;
	volatile int32_t x468 = -9292951;

    t94 = ((x465%x466)-(x467-x468));

    if (t94 != -9298518LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x469 = -1LL;
	int64_t x471 = 98363LL;
	int64_t t95 = -555099915465059854LL;

    t95 = ((x469%x470)-(x471-x472));

    if (t95 != -98365LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x473 = -1;
	static volatile uint8_t x474 = UINT8_MAX;
	uint64_t x475 = 890841055903381297LLU;
	volatile uint64_t t96 = 1005798LLU;

    t96 = ((x473%x474)-(x475-x476));

    if (t96 != 17555903017806170619LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x477 = 1;
	volatile uint64_t x478 = 1248904985094LLU;
	int16_t x479 = INT16_MAX;
	static uint64_t x480 = 303438LLU;
	static volatile uint64_t t97 = 1750794534519732LLU;

    t97 = ((x477%x478)-(x479-x480));

    if (t97 != 270672LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x484 = INT8_MAX;
	uint64_t t98 = 1483995955335885979LLU;

    t98 = ((x481%x482)-(x483-x484));

    if (t98 != 18034573904704231408LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x485 = INT64_MIN;
	volatile int32_t x486 = INT32_MIN;

    t99 = ((x485%x486)-(x487-x488));

    if (t99 != 129LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x489 = -1;
	int8_t x490 = INT8_MAX;
	static uint16_t x492 = 1U;
	int32_t t100 = -44967;

    t100 = ((x489%x490)-(x491-x492));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x494 = INT32_MAX;

    t101 = ((x493%x494)-(x495-x496));

    if (t101 != 137098119080811587LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint8_t x497 = 1U;
	uint64_t x498 = 1075823336274LLU;
	int8_t x499 = 1;
	uint64_t t102 = 330667788LLU;

    t102 = ((x497%x498)-(x499-x500));

    if (t102 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint32_t x501 = UINT32_MAX;
	int32_t x502 = -23305383;
	volatile uint16_t x503 = UINT16_MAX;
	int8_t x504 = INT8_MIN;
	static volatile uint32_t t103 = 961071U;

    t103 = ((x501%x502)-(x503-x504));

    if (t103 != 23239719U) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x506 = 1;
	int64_t x507 = INT64_MIN;
	int32_t x508 = -1;
	int64_t t104 = INT64_MAX;

    t104 = ((x505%x506)-(x507-x508));

    if (t104 != INT64_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x509 = INT32_MAX;
	int64_t x510 = -123LL;
	static uint16_t x511 = 136U;
	uint64_t x512 = UINT64_MAX;
	static uint64_t t105 = 41978787961LLU;

    t105 = ((x509%x510)-(x511-x512));

    if (t105 != 18446744073709551558LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x513 = 7759328252LLU;
	static uint16_t x515 = 5626U;
	int16_t x516 = 3;

    t106 = ((x513%x514)-(x515-x516));

    if (t106 != 7759322629LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x517 = INT32_MIN;
	static int32_t x518 = INT32_MAX;
	static uint16_t x519 = 2252U;
	uint64_t x520 = 655799145518573381LLU;
	uint64_t t107 = 3357544893701310LLU;

    t107 = ((x517%x518)-(x519-x520));

    if (t107 != 655799145518571128LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x521 = INT8_MIN;
	int16_t x522 = 7;
	uint8_t x523 = 10U;
	int16_t x524 = INT16_MIN;
	int32_t t108 = -1713;

    t108 = ((x521%x522)-(x523-x524));

    if (t108 != -32780) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint8_t x525 = 6U;
	volatile uint8_t x526 = 1U;
	uint64_t x527 = 12282449910401LLU;
	uint64_t t109 = 1LLU;

    t109 = ((x525%x526)-(x527-x528));

    if (t109 != 1829370523215199156LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x529 = 957767787571299396LL;
	volatile int64_t t110 = -41LL;

    t110 = ((x529%x530)-(x531-x532));

    if (t110 != 118232016217LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x533 = -211564;
	uint16_t x534 = UINT16_MAX;
	int8_t x535 = INT8_MAX;
	uint8_t x536 = UINT8_MAX;
	volatile int32_t t111 = -84671780;

    t111 = ((x533%x534)-(x535-x536));

    if (t111 != -14831) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x537 = -7;
	int32_t x538 = INT32_MAX;
	uint8_t x539 = 26U;
	int16_t x540 = INT16_MIN;
	volatile int32_t t112 = 93;

    t112 = ((x537%x538)-(x539-x540));

    if (t112 != -32801) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x541 = INT64_MIN;
	int16_t x542 = -1;
	static volatile int32_t x543 = -1;
	int32_t x544 = 119107;

    t113 = ((x541%x542)-(x543-x544));

    if (t113 != 119108LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x547 = -165;
	int16_t x548 = INT16_MIN;
	static uint64_t t114 = 14904LLU;

    t114 = ((x545%x546)-(x547-x548));

    if (t114 != 9223372036854743204LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x549 = 0;
	volatile uint16_t x550 = 114U;
	uint8_t x551 = 11U;
	volatile uint32_t x552 = 2U;
	uint32_t t115 = 251356182U;

    t115 = ((x549%x550)-(x551-x552));

    if (t115 != 4294967287U) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x553 = INT32_MAX;
	int64_t x554 = INT64_MAX;
	uint8_t x555 = 68U;
	int64_t t116 = 88LL;

    t116 = ((x553%x554)-(x555-x556));

    if (t116 != 2147483578LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x565 = -1;
	volatile int16_t x566 = 7;
	volatile int16_t x567 = -1;
	int16_t x568 = INT16_MIN;

    t117 = ((x565%x566)-(x567-x568));

    if (t117 != -32768) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x577 = 635602LLU;
	uint8_t x578 = 6U;
	volatile uint8_t x579 = 10U;
	volatile uint64_t x580 = 4962283LLU;
	uint64_t t118 = 7LLU;

    t118 = ((x577%x578)-(x579-x580));

    if (t118 != 4962277LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int8_t x581 = -1;
	uint32_t x582 = 1144U;
	static int32_t x583 = INT32_MIN;
	int8_t x584 = -1;
	uint32_t t119 = 17U;

    t119 = ((x581%x582)-(x583-x584));

    if (t119 != 2147483694U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x585 = 0LLU;
	int8_t x586 = INT8_MIN;
	int64_t x587 = INT64_MIN;
	uint64_t t120 = 26351048542LLU;

    t120 = ((x585%x586)-(x587-x588));

    if (t120 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x593 = 76;
	uint16_t x594 = UINT16_MAX;
	int32_t x595 = -1;
	volatile int32_t t121 = 744;

    t121 = ((x593%x594)-(x595-x596));

    if (t121 != 2174) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x597 = UINT64_MAX;
	static volatile int16_t x598 = INT16_MAX;
	int32_t x599 = INT32_MAX;
	uint8_t x600 = UINT8_MAX;

    t122 = ((x597%x598)-(x599-x600));

    if (t122 != 18446744071562068239LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint16_t x601 = UINT16_MAX;
	int16_t x602 = INT16_MIN;
	uint64_t x604 = 1166018053146741046LLU;
	static uint64_t t123 = 81263100LLU;

    t123 = ((x601%x602)-(x603-x604));

    if (t123 != 1166018053146530396LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x605 = INT16_MIN;
	int8_t x606 = INT8_MIN;
	int32_t x607 = INT32_MAX;
	uint64_t x608 = 51098913357513LLU;
	uint64_t t124 = 770393102LLU;

    t124 = ((x605%x606)-(x607-x608));

    if (t124 != 51096765873866LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x610 = 206;
	int32_t x611 = -1;
	int64_t t125 = -853198087243231LL;

    t125 = ((x609%x610)-(x611-x612));

    if (t125 != -4294967114LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x613 = UINT16_MAX;
	uint32_t x614 = UINT32_MAX;
	static int16_t x615 = -1;
	int8_t x616 = INT8_MAX;
	volatile uint32_t t126 = 20642656U;

    t126 = ((x613%x614)-(x615-x616));

    if (t126 != 65663U) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x617 = INT32_MIN;
	static int16_t x618 = 76;
	static int64_t x619 = -1LL;

    t127 = ((x617%x618)-(x619-x620));

    if (t127 != -56LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x621 = UINT32_MAX;
	volatile int16_t x622 = INT16_MIN;
	int32_t x623 = INT32_MIN;
	volatile uint64_t x624 = 208581662888822383LLU;
	volatile uint64_t t128 = 150011155216LLU;

    t128 = ((x621%x622)-(x623-x624));

    if (t128 != 208581665036338798LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x625 = 23333U;
	int16_t x626 = -41;
	static int32_t x627 = INT32_MIN;
	static uint64_t t129 = 2688876LLU;

    t129 = ((x625%x626)-(x627-x628));

    if (t129 != 101536415018527073LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x629 = INT16_MIN;
	int8_t x630 = INT8_MIN;
	static int64_t x631 = -1LL;
	int32_t x632 = INT32_MIN;
	volatile int64_t t130 = 130558398943105LL;

    t130 = ((x629%x630)-(x631-x632));

    if (t130 != -2147483647LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x633 = 3479320LL;
	int32_t x636 = INT32_MIN;
	static volatile int64_t t131 = -12419030280LL;

    t131 = ((x633%x634)-(x635-x636));

    if (t131 != -2146806303LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x637 = 3;
	int32_t x638 = -1;
	static volatile int16_t x639 = -3122;
	static int64_t t132 = -7563898743LL;

    t132 = ((x637%x638)-(x639-x640));

    if (t132 != -9223372036854772686LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x641 = INT64_MIN;
	int16_t x643 = -15;
	int8_t x644 = 45;
	int64_t t133 = -506367LL;

    t133 = ((x641%x642)-(x643-x644));

    if (t133 != 60LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x645 = 7U;
	int16_t x646 = INT16_MIN;
	static volatile uint16_t x647 = 80U;
	uint64_t x648 = UINT64_MAX;

    t134 = ((x645%x646)-(x647-x648));

    if (t134 != 18446744073709551542LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile uint64_t x649 = 23938156993626LLU;
	uint64_t x650 = 998469652882834265LLU;
	uint8_t x651 = 15U;
	volatile uint64_t t135 = 1913LLU;

    t135 = ((x649%x650)-(x651-x652));

    if (t135 != 23938156960843LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x653 = -1;
	static volatile int32_t x654 = INT32_MIN;
	int64_t x655 = INT64_MAX;
	int16_t x656 = 13296;
	static int64_t t136 = 3960153LL;

    t136 = ((x653%x654)-(x655-x656));

    if (t136 != -9223372036854762512LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x659 = INT32_MIN;
	int64_t x660 = INT64_MIN;
	volatile int64_t t137 = -845208458083350LL;

    t137 = ((x657%x658)-(x659-x660));

    if (t137 != -9223372034707292159LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x662 = INT8_MIN;
	int64_t x663 = INT64_MIN;
	int32_t x664 = INT32_MIN;

    t138 = ((x661%x662)-(x663-x664));

    if (t138 != 9223372034707292191LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x665 = INT64_MIN;
	uint16_t x667 = 7470U;
	int32_t x668 = INT32_MAX;
	int64_t t139 = -8527337068LL;

    t139 = ((x665%x666)-(x667-x668));

    if (t139 != 2147476177LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x669 = INT64_MAX;
	static int8_t x670 = -1;
	int16_t x671 = INT16_MIN;
	int8_t x672 = INT8_MIN;

    t140 = ((x669%x670)-(x671-x672));

    if (t140 != 32640LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x677 = UINT64_MAX;
	static volatile uint16_t x679 = 1U;
	static uint16_t x680 = 13U;

    t141 = ((x677%x678)-(x679-x680));

    if (t141 != 12LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x682 = -2LL;
	volatile int64_t x683 = -30LL;
	uint8_t x684 = 58U;
	volatile int64_t t142 = 1134735920LL;

    t142 = ((x681%x682)-(x683-x684));

    if (t142 != 88LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x685 = 174327;
	int64_t x687 = 24629629286421LL;
	volatile int64_t t143 = 371059552LL;

    t143 = ((x685%x686)-(x687-x688));

    if (t143 != -24631776759582LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x689 = -1;
	uint64_t x690 = UINT64_MAX;
	uint32_t x692 = UINT32_MAX;
	uint64_t t144 = 16297LLU;

    t144 = ((x689%x690)-(x691-x692));

    if (t144 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x693 = -27883925LL;
	int8_t x694 = INT8_MIN;
	uint16_t x695 = 23U;
	int16_t x696 = -1;
	static int64_t t145 = -168675LL;

    t145 = ((x693%x694)-(x695-x696));

    if (t145 != -45LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x698 = -2;
	static volatile uint8_t x699 = 45U;
	int32_t x700 = INT32_MAX;
	int32_t t146 = -2081764;

    t146 = ((x697%x698)-(x699-x700));

    if (t146 != 2147483601) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x702 = 86720407;
	volatile int64_t x704 = -1LL;

    t147 = ((x701%x702)-(x703-x704));

    if (t147 != 61309205LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x705 = 0U;
	int64_t x706 = -384034921864721LL;
	static int8_t x707 = -8;
	int8_t x708 = INT8_MIN;

    t148 = ((x705%x706)-(x707-x708));

    if (t148 != -120LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x709 = -1;
	uint32_t x710 = UINT32_MAX;
	volatile int64_t t149 = -1LL;

    t149 = ((x709%x710)-(x711-x712));

    if (t149 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x713 = INT32_MIN;
	static int32_t x714 = INT32_MIN;
	int16_t x716 = -3020;
	int32_t t150 = -213745077;

    t150 = ((x713%x714)-(x715-x716));

    if (t150 != -4677) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x718 = INT32_MIN;
	volatile uint8_t x719 = 24U;

    t151 = ((x717%x718)-(x719-x720));

    if (t151 != 3756) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x727 = UINT8_MAX;
	static volatile uint16_t x728 = 4421U;

    t152 = ((x725%x726)-(x727-x728));

    if (t152 != 4166) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x729 = -1;
	int8_t x730 = -38;
	int64_t x731 = 546836546690450LL;
	uint8_t x732 = 15U;
	volatile int64_t t153 = 160217014602LL;

    t153 = ((x729%x730)-(x731-x732));

    if (t153 != -546836546690436LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint32_t x733 = UINT32_MAX;
	int32_t x734 = 108;
	static int16_t x735 = INT16_MIN;
	uint32_t x736 = 32372U;
	uint32_t t154 = 16606552U;

    t154 = ((x733%x734)-(x735-x736));

    if (t154 != 65215U) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x737 = 3;
	volatile int16_t x738 = 6686;
	volatile uint64_t x740 = UINT64_MAX;
	static volatile uint64_t t155 = 19237398LLU;

    t155 = ((x737%x738)-(x739-x740));

    if (t155 != 3LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x745 = INT64_MIN;
	int32_t x746 = -1;
	volatile int16_t x747 = INT16_MAX;
	int8_t x748 = INT8_MAX;
	volatile int64_t t156 = 1LL;

    t156 = ((x745%x746)-(x747-x748));

    if (t156 != -32640LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x749 = -1;
	uint64_t x750 = UINT64_MAX;
	static volatile uint32_t x752 = 29U;
	volatile uint64_t t157 = 103428190398596LLU;

    t157 = ((x749%x750)-(x751-x752));

    if (t157 != 18446744073709538740LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x761 = -710226300178LL;
	static int32_t x762 = INT32_MAX;
	uint16_t x763 = 87U;
	int32_t x764 = INT32_MAX;
	volatile int64_t t158 = -281943638713742478LL;

    t158 = ((x761%x762)-(x763-x764));

    if (t158 != 590786892LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x769 = INT32_MAX;
	static volatile uint64_t x770 = UINT64_MAX;
	uint32_t x772 = UINT32_MAX;

    t159 = ((x769%x770)-(x771-x772));

    if (t159 != 2147483615LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x773 = UINT8_MAX;
	uint32_t x774 = 14U;
	int32_t x775 = 66576976;
	int8_t x776 = 12;
	static uint32_t t160 = 8112U;

    t160 = ((x773%x774)-(x775-x776));

    if (t160 != 4228390335U) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x777 = UINT64_MAX;
	int64_t x778 = -1LL;
	int16_t x779 = INT16_MIN;
	uint32_t x780 = 20U;
	uint64_t t161 = 14611LLU;

    t161 = ((x777%x778)-(x779-x780));

    if (t161 != 18446744069414617108LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x782 = INT32_MIN;
	uint16_t x784 = 0U;
	static int32_t t162 = -575896;

    t162 = ((x781%x782)-(x783-x784));

    if (t162 != -65525) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x785 = 20963162;
	int8_t x786 = 5;
	volatile int64_t t163 = 2133058295905177908LL;

    t163 = ((x785%x786)-(x787-x788));

    if (t163 != 3LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x791 = -2513080284024301LL;
	int64_t x792 = -1LL;
	volatile uint64_t t164 = 5280238661397140LLU;

    t164 = ((x789%x790)-(x791-x792));

    if (t164 != 60600360472251068LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x794 = 174123370042775LL;
	static int16_t x795 = INT16_MAX;
	int64_t x796 = INT64_MAX;
	volatile int64_t t165 = 62659924806LL;

    t165 = ((x793%x794)-(x795-x796));

    if (t165 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x797 = 0;
	volatile uint64_t t166 = 1500606560LLU;

    t166 = ((x797%x798)-(x799-x800));

    if (t166 != 18446744073709518894LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x801 = 4106216U;
	volatile uint32_t t167 = 0U;

    t167 = ((x801%x802)-(x803-x804));

    if (t167 != 2151589865U) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x809 = -1;
	int16_t x810 = INT16_MIN;
	uint32_t x811 = UINT32_MAX;
	static int8_t x812 = INT8_MIN;
	uint32_t t168 = 2556U;

    t168 = ((x809%x810)-(x811-x812));

    if (t168 != 4294967168U) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x813 = INT32_MIN;
	int8_t x814 = -1;
	static int8_t x815 = INT8_MIN;
	int8_t x816 = -8;
	int32_t t169 = 0;

    t169 = ((x813%x814)-(x815-x816));

    if (t169 != 120) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x817 = UINT16_MAX;
	uint8_t x818 = 2U;
	int16_t x819 = -1;
	static int8_t x820 = INT8_MIN;

    t170 = ((x817%x818)-(x819-x820));

    if (t170 != -126) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x821 = -1LL;
	uint8_t x823 = 3U;
	int64_t t171 = 237914654LL;

    t171 = ((x821%x822)-(x823-x824));

    if (t171 != -5LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x825 = INT64_MIN;
	int8_t x826 = INT8_MAX;
	volatile int32_t x827 = -1;
	int32_t x828 = INT32_MIN;
	volatile int64_t t172 = 14440924LL;

    t172 = ((x825%x826)-(x827-x828));

    if (t172 != -2147483648LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x829 = 360901783LLU;
	int16_t x830 = 3637;
	static int64_t x831 = INT64_MAX;
	static int64_t x832 = INT64_MAX;
	static volatile uint64_t t173 = 94116819747LLU;

    t173 = ((x829%x830)-(x831-x832));

    if (t173 != 2273LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x833 = -1423596;
	volatile uint32_t x834 = 31U;
	uint8_t x835 = 0U;
	volatile uint32_t x836 = 86053U;
	uint32_t t174 = 5295160U;

    t174 = ((x833%x834)-(x835-x836));

    if (t174 != 86074U) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x838 = 1;
	static int8_t x839 = INT8_MIN;
	volatile int64_t x840 = INT64_MIN;
	static int64_t t175 = -3893296734898LL;

    t175 = ((x837%x838)-(x839-x840));

    if (t175 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int8_t x843 = INT8_MIN;
	volatile int8_t x844 = 3;
	uint32_t t176 = 38U;

    t176 = ((x841%x842)-(x843-x844));

    if (t176 != 132U) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x845 = 1;
	static int8_t x847 = 32;
	int16_t x848 = INT16_MIN;
	static volatile int64_t t177 = 446743171234528LL;

    t177 = ((x845%x846)-(x847-x848));

    if (t177 != -32799LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x851 = -3LL;
	int64_t x852 = -42LL;

    t178 = ((x849%x850)-(x851-x852));

    if (t178 != 21900LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x861 = 109089919U;
	int32_t x863 = 431719346;
	int64_t x864 = -1LL;
	int64_t t179 = -1558584815594271LL;

    t179 = ((x861%x862)-(x863-x864));

    if (t179 != -322629428LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x865 = INT16_MIN;
	int8_t x866 = -1;
	int64_t x867 = -1LL;
	static uint32_t x868 = UINT32_MAX;
	volatile int64_t t180 = -39437538LL;

    t180 = ((x865%x866)-(x867-x868));

    if (t180 != 4294967296LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x869 = -1;
	volatile uint16_t x870 = UINT16_MAX;
	uint64_t x871 = 62676008685156LLU;
	volatile uint64_t x872 = 1449643133786563LLU;
	volatile uint64_t t181 = 1150958838210LLU;

    t181 = ((x869%x870)-(x871-x872));

    if (t181 != 1386967125101406LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x874 = -1;
	int16_t x875 = 2;
	static uint64_t x876 = 1LLU;

    t182 = ((x873%x874)-(x875-x876));

    if (t182 != UINT64_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x877 = -1;
	int8_t x878 = -40;
	volatile uint64_t x879 = 6LLU;
	uint16_t x880 = UINT16_MAX;
	static volatile uint64_t t183 = 33147375605049LLU;

    t183 = ((x877%x878)-(x879-x880));

    if (t183 != 65528LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x881 = INT32_MAX;
	static uint32_t x882 = 327490U;
	static uint16_t x883 = 28U;
	static volatile int8_t x884 = -7;

    t184 = ((x881%x882)-(x883-x884));

    if (t184 != 131682U) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x886 = -1;
	static int8_t x887 = -1;
	static int32_t t185 = -37;

    t185 = ((x885%x886)-(x887-x888));

    if (t185 != 2) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x889 = 17LLU;
	static uint8_t x890 = UINT8_MAX;
	int32_t x891 = INT32_MIN;
	int8_t x892 = -1;
	uint64_t t186 = 12183675241691561LLU;

    t186 = ((x889%x890)-(x891-x892));

    if (t186 != 2147483664LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x893 = INT32_MAX;
	uint64_t x894 = 1626LLU;
	static int32_t x895 = 39777;
	volatile int8_t x896 = -1;
	uint64_t t187 = 4803LLU;

    t187 = ((x893%x894)-(x895-x896));

    if (t187 != 18446744073709512895LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x897 = 22U;
	volatile uint8_t x899 = 19U;
	volatile uint32_t t188 = 3841667U;

    t188 = ((x897%x898)-(x899-x900));

    if (t188 != 4124933724U) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x901 = INT16_MIN;
	int8_t x903 = INT8_MIN;
	uint16_t x904 = UINT16_MAX;
	volatile int32_t t189 = 325;

    t189 = ((x901%x902)-(x903-x904));

    if (t189 != 65663) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint8_t x913 = UINT8_MAX;
	int8_t x915 = 0;
	uint32_t x916 = 23860U;
	uint32_t t190 = 73U;

    t190 = ((x913%x914)-(x915-x916));

    if (t190 != 24115U) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x917 = -2340;
	int16_t x918 = -1;
	volatile uint64_t x919 = 574113LLU;
	int64_t x920 = -3LL;

    t191 = ((x917%x918)-(x919-x920));

    if (t191 != 18446744073708977500LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x925 = -1;
	int64_t x926 = INT64_MAX;
	volatile uint16_t x927 = 10U;
	int64_t t192 = 62478508517LL;

    t192 = ((x925%x926)-(x927-x928));

    if (t192 != -12LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x929 = 0U;
	int64_t x930 = -6589822LL;
	static int16_t x931 = 3807;
	uint8_t x932 = 0U;

    t193 = ((x929%x930)-(x931-x932));

    if (t193 != -3807LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x933 = 13649LLU;
	static volatile uint64_t x934 = 7750588509653425466LLU;
	int32_t x935 = -34;
	static volatile int16_t x936 = -1;
	volatile uint64_t t194 = 3996871527258867863LLU;

    t194 = ((x933%x934)-(x935-x936));

    if (t194 != 13682LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x937 = INT32_MIN;
	volatile uint8_t x938 = UINT8_MAX;
	static int64_t x939 = INT64_MIN;
	volatile int64_t t195 = 43289805065721342LL;

    t195 = ((x937%x938)-(x939-x940));

    if (t195 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x942 = 84525683464169574LLU;
	int64_t x944 = INT64_MAX;

    t196 = ((x941%x942)-(x943-x944));

    if (t196 != 8932944525105926581LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x945 = INT16_MIN;
	static uint64_t x946 = UINT64_MAX;
	static int16_t x947 = INT16_MIN;
	uint64_t t197 = UINT64_MAX;

    t197 = ((x945%x946)-(x947-x948));

    if (t197 != UINT64_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x949 = 2;
	int8_t x950 = -4;
	uint32_t x952 = UINT32_MAX;

    t198 = ((x949%x950)-(x951-x952));

    if (t198 != 2U) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x953 = -1;
	int64_t x954 = 277450522361675LL;
	uint16_t x956 = 0U;
	volatile int64_t t199 = 1048168630714609LL;

    t199 = ((x953%x954)-(x955-x956));

    if (t199 != 3LL) { NG(); } else { ; }
	
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

