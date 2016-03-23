
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

int16_t x2 = INT16_MIN;
uint8_t x9 = 12U;
volatile int16_t x11 = INT16_MAX;
int64_t x20 = 122962LL;
static uint8_t x29 = 0U;
static int64_t x35 = INT64_MIN;
int32_t t7 = -26421;
volatile uint8_t x44 = 0U;
static volatile uint32_t x52 = 2U;
int8_t x61 = 5;
volatile int8_t x62 = INT8_MIN;
int8_t x66 = INT8_MAX;
int32_t x68 = -15151766;
volatile int32_t t13 = -331894820;
int16_t x76 = 4962;
static int8_t x79 = INT8_MAX;
volatile uint16_t x85 = 182U;
int16_t x87 = -1;
static volatile int32_t x92 = 974;
uint16_t x96 = 0U;
static int32_t t21 = -98;
int32_t x101 = INT32_MIN;
static int8_t x108 = -1;
volatile int32_t x111 = -355;
uint16_t x112 = 55U;
uint8_t x114 = 1U;
volatile int32_t x120 = -1;
int32_t t27 = -209128005;
int8_t x128 = INT8_MIN;
int8_t x129 = INT8_MAX;
int8_t x135 = INT8_MAX;
int32_t x142 = INT32_MIN;
int16_t x144 = 1;
int32_t x155 = INT32_MAX;
int32_t x156 = INT32_MIN;
int64_t x157 = 19801561010497334LL;
int16_t x158 = -3112;
volatile uint16_t x163 = UINT16_MAX;
volatile uint8_t x173 = UINT8_MAX;
int32_t x175 = 31724;
volatile uint32_t x177 = 433606816U;
int32_t x180 = -18219969;
volatile uint32_t x185 = 333U;
int8_t x188 = -1;
int64_t x190 = INT64_MIN;
uint16_t x192 = 226U;
uint16_t x193 = UINT16_MAX;
int16_t x194 = -7;
static volatile uint64_t x196 = 1149818355873550LLU;
int8_t x197 = -24;
int64_t x216 = -1LL;
int16_t x218 = INT16_MAX;
volatile int32_t t50 = 0;
volatile int32_t t53 = 438960;
int8_t x242 = INT8_MIN;
uint16_t x243 = 1563U;
volatile int32_t t54 = -358150931;
int32_t t55 = -204788503;
static int16_t x249 = INT16_MIN;
uint32_t x250 = UINT32_MAX;
uint64_t x251 = 4403187593859276786LLU;
volatile int16_t x252 = 10;
static uint16_t x253 = UINT16_MAX;
int32_t t57 = 1946;
int64_t x271 = INT64_MIN;
int8_t x275 = 0;
volatile int32_t t62 = -53883711;
static uint32_t x299 = 158061420U;
int8_t x301 = INT8_MAX;
int32_t x302 = -1;
volatile uint64_t x306 = 5004591LLU;
int8_t x318 = -1;
volatile uint8_t x319 = UINT8_MAX;
static int64_t x327 = 647123327144LL;
uint32_t x330 = 49575U;
volatile int32_t t72 = 22;
static int8_t x335 = -3;
int32_t t73 = 58812972;
static int32_t t77 = -1;
volatile int32_t x358 = 0;
int32_t t80 = 84952089;
int8_t x374 = INT8_MIN;
int16_t x379 = INT16_MIN;
volatile int32_t t82 = 158878;
uint8_t x382 = 126U;
static int32_t x385 = -627;
volatile int32_t t84 = 1566129;
uint64_t x401 = 471168LLU;
uint32_t x410 = UINT32_MAX;
int32_t x411 = -1;
int8_t x413 = INT8_MIN;
volatile int32_t t89 = 1;
uint64_t x419 = 6851149821LLU;
int64_t x420 = 100LL;
uint64_t x425 = 107284862157965352LLU;
uint8_t x435 = 10U;
volatile uint64_t x436 = UINT64_MAX;
int64_t x442 = -124786736481LL;
uint32_t x444 = UINT32_MAX;
int64_t x449 = -1LL;
static int32_t x451 = -882888273;
int64_t x457 = 1302LL;
int32_t x461 = INT32_MIN;
int32_t t101 = 347003060;
static int32_t x475 = INT32_MIN;
uint16_t x488 = 329U;
volatile int32_t t104 = -15462971;
static int32_t x490 = -55572308;
int32_t x491 = 2;
volatile int32_t t105 = -242991;
uint16_t x512 = 457U;
int8_t x515 = 22;
int32_t x525 = INT32_MAX;
static volatile int32_t t114 = -80;
int64_t x536 = -9994309LL;
int16_t x538 = -119;
volatile int32_t x546 = -1194654;
int64_t x557 = INT64_MAX;
uint8_t x560 = 3U;
int32_t x563 = INT32_MAX;
uint32_t x564 = 1303U;
volatile int32_t t124 = -955127879;
int16_t x575 = INT16_MIN;
uint8_t x576 = 88U;
int16_t x586 = 8;
int8_t x591 = -3;
static volatile uint64_t x592 = 0LLU;
static int16_t x594 = -1;
int32_t x609 = 3;
volatile int32_t t133 = -144835;
uint64_t x616 = 658293LLU;
int32_t t134 = -1372978;
int64_t x628 = -1LL;
uint16_t x630 = UINT16_MAX;
static volatile uint8_t x635 = 59U;
int32_t t139 = -811595;
int16_t x640 = INT16_MIN;
uint64_t x641 = 61909380844LLU;
int16_t x643 = -10;
uint32_t x644 = 96267936U;
volatile int32_t t141 = -426421649;
int16_t x663 = 4;
static uint8_t x670 = 3U;
int8_t x676 = 33;
int8_t x682 = INT8_MIN;
volatile int32_t x683 = INT32_MIN;
int8_t x691 = -1;
uint8_t x694 = UINT8_MAX;
volatile int32_t t152 = 377383668;
volatile int64_t x698 = -909LL;
uint64_t x713 = 13720LLU;
int32_t x717 = 851173;
int64_t x719 = INT64_MIN;
uint64_t x720 = 85585LLU;
volatile int32_t t157 = -58475;
uint64_t x723 = UINT64_MAX;
int8_t x724 = INT8_MIN;
volatile uint8_t x726 = 107U;
volatile int32_t t160 = -17070;
volatile int32_t t162 = 148;
uint8_t x746 = 12U;
static volatile int32_t t163 = 51;
static int64_t x752 = INT64_MAX;
volatile int32_t t166 = -2;
int64_t x762 = 14106LL;
volatile int8_t x763 = -7;
static int32_t t167 = 0;
int32_t x770 = 33893125;
volatile int32_t t169 = -61323859;
static int8_t x773 = INT8_MIN;
uint8_t x774 = UINT8_MAX;
int32_t t170 = 319605;
int32_t x783 = 318;
int8_t x792 = INT8_MIN;
uint32_t x797 = 266077U;
int64_t x799 = INT64_MAX;
uint32_t x803 = 3347U;
volatile uint8_t x804 = 1U;
volatile uint16_t x809 = 141U;
int32_t x821 = 213867009;
int16_t x826 = INT16_MIN;
static int16_t x835 = 68;
int64_t x839 = INT64_MIN;
int32_t x847 = INT32_MIN;
int32_t x850 = INT32_MIN;
volatile int32_t t188 = 0;
int32_t x857 = 25755177;
static volatile int32_t x862 = INT32_MAX;
uint32_t x863 = UINT32_MAX;
int32_t x872 = -1;
int32_t t192 = -2992;
uint16_t x873 = 1U;
volatile int32_t t193 = -5241;
volatile uint32_t x879 = 3U;
uint16_t x881 = UINT16_MAX;
int8_t x882 = INT8_MIN;
volatile int8_t x885 = INT8_MIN;
int16_t x888 = -1;
int32_t t196 = 433741952;
static uint16_t x892 = 1U;


void f0(void) {
    	int64_t x1 = -1475232029884035716LL;
	uint64_t x3 = UINT64_MAX;
	uint8_t x4 = 19U;
	static int32_t t0 = -4;

    t0 = ((x1|x2)!=(x3+x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x10 = 5;
	int64_t x12 = -5628748LL;
	volatile int32_t t1 = 475473636;

    t1 = ((x9|x10)!=(x11+x12));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x17 = 1729U;
	int32_t x18 = -1;
	int16_t x19 = -9;
	volatile int32_t t2 = -6455;

    t2 = ((x17|x18)!=(x19+x20));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x21 = INT16_MAX;
	int64_t x22 = -111157602LL;
	static volatile uint64_t x23 = UINT64_MAX;
	static volatile int64_t x24 = -1LL;
	volatile int32_t t3 = 10260762;

    t3 = ((x21|x22)!=(x23+x24));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x25 = INT32_MIN;
	volatile int32_t x26 = -2816897;
	uint32_t x27 = 1796814282U;
	uint64_t x28 = 477LLU;
	static int32_t t4 = 598;

    t4 = ((x25|x26)!=(x27+x28));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x30 = 41U;
	volatile uint16_t x31 = 28269U;
	uint32_t x32 = 128942U;
	volatile int32_t t5 = 116536;

    t5 = ((x29|x30)!=(x31+x32));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x33 = UINT32_MAX;
	int64_t x34 = INT64_MIN;
	uint16_t x36 = 3U;
	volatile int32_t t6 = 38;

    t6 = ((x33|x34)!=(x35+x36));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x37 = INT64_MIN;
	int16_t x38 = 51;
	uint32_t x39 = 332U;
	int32_t x40 = -1;

    t7 = ((x37|x38)!=(x39+x40));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x41 = INT8_MIN;
	uint16_t x42 = 113U;
	int32_t x43 = 932468263;
	volatile int32_t t8 = 17;

    t8 = ((x41|x42)!=(x43+x44));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x45 = 116828184LL;
	int64_t x46 = -1LL;
	int8_t x47 = INT8_MIN;
	static int32_t x48 = -1;
	int32_t t9 = 6079;

    t9 = ((x45|x46)!=(x47+x48));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x49 = UINT16_MAX;
	uint64_t x50 = UINT64_MAX;
	uint8_t x51 = 20U;
	int32_t t10 = 50053;

    t10 = ((x49|x50)!=(x51+x52));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x57 = -1;
	int32_t x58 = INT32_MIN;
	int32_t x59 = INT32_MAX;
	int8_t x60 = -1;
	int32_t t11 = 115;

    t11 = ((x57|x58)!=(x59+x60));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x63 = INT64_MIN;
	uint64_t x64 = UINT64_MAX;
	volatile int32_t t12 = -7;

    t12 = ((x61|x62)!=(x63+x64));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x65 = INT8_MAX;
	uint8_t x67 = 79U;

    t13 = ((x65|x66)!=(x67+x68));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x69 = 210;
	int32_t x70 = -1;
	uint64_t x71 = 275473670394551LLU;
	int16_t x72 = INT16_MAX;
	int32_t t14 = 69204;

    t14 = ((x69|x70)!=(x71+x72));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x73 = 8904LLU;
	volatile int32_t x74 = -1;
	int16_t x75 = -23;
	int32_t t15 = 19938369;

    t15 = ((x73|x74)!=(x75+x76));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x77 = UINT16_MAX;
	static int16_t x78 = 13;
	int32_t x80 = INT32_MIN;
	static volatile int32_t t16 = 2595;

    t16 = ((x77|x78)!=(x79+x80));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x81 = INT16_MAX;
	int64_t x82 = 0LL;
	int16_t x83 = INT16_MAX;
	static volatile uint8_t x84 = 8U;
	int32_t t17 = -41;

    t17 = ((x81|x82)!=(x83+x84));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x86 = UINT8_MAX;
	int64_t x88 = INT64_MAX;
	int32_t t18 = -50;

    t18 = ((x85|x86)!=(x87+x88));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x89 = 83U;
	static int16_t x90 = -1;
	int64_t x91 = 1973313LL;
	volatile int32_t t19 = -2261806;

    t19 = ((x89|x90)!=(x91+x92));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x93 = INT16_MIN;
	int16_t x94 = INT16_MIN;
	volatile int64_t x95 = INT64_MAX;
	volatile int32_t t20 = 52352;

    t20 = ((x93|x94)!=(x95+x96));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x97 = -1;
	int8_t x98 = -1;
	volatile int32_t x99 = 2618;
	int32_t x100 = INT32_MIN;

    t21 = ((x97|x98)!=(x99+x100));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x102 = 30;
	int16_t x103 = 11559;
	static int8_t x104 = -1;
	int32_t t22 = -27356300;

    t22 = ((x101|x102)!=(x103+x104));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x105 = INT16_MIN;
	int8_t x106 = INT8_MIN;
	uint8_t x107 = UINT8_MAX;
	int32_t t23 = 1909365;

    t23 = ((x105|x106)!=(x107+x108));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x109 = UINT64_MAX;
	int8_t x110 = INT8_MIN;
	int32_t t24 = 47;

    t24 = ((x109|x110)!=(x111+x112));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x113 = 15286U;
	volatile int16_t x115 = INT16_MIN;
	static uint16_t x116 = 5U;
	volatile int32_t t25 = -151354;

    t25 = ((x113|x114)!=(x115+x116));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x117 = -1;
	int16_t x118 = 103;
	int64_t x119 = -1LL;
	int32_t t26 = -675762894;

    t26 = ((x117|x118)!=(x119+x120));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x121 = -51;
	uint32_t x122 = 412U;
	int8_t x123 = INT8_MIN;
	volatile int8_t x124 = 27;

    t27 = ((x121|x122)!=(x123+x124));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x125 = -1;
	uint32_t x126 = 3571U;
	static volatile uint8_t x127 = 13U;
	static volatile int32_t t28 = -7132522;

    t28 = ((x125|x126)!=(x127+x128));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x130 = UINT8_MAX;
	uint64_t x131 = 16240LLU;
	int32_t x132 = INT32_MIN;
	int32_t t29 = 1051994764;

    t29 = ((x129|x130)!=(x131+x132));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x133 = -1;
	int16_t x134 = -55;
	volatile int8_t x136 = INT8_MIN;
	int32_t t30 = -6633;

    t30 = ((x133|x134)!=(x135+x136));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x137 = 425481U;
	volatile int8_t x138 = -1;
	volatile int8_t x139 = 37;
	int8_t x140 = 34;
	volatile int32_t t31 = 46852843;

    t31 = ((x137|x138)!=(x139+x140));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x141 = -1;
	static int16_t x143 = -1;
	volatile int32_t t32 = 3;

    t32 = ((x141|x142)!=(x143+x144));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x145 = INT8_MIN;
	volatile int64_t x146 = INT64_MIN;
	static uint32_t x147 = UINT32_MAX;
	int64_t x148 = -1LL;
	int32_t t33 = 5585604;

    t33 = ((x145|x146)!=(x147+x148));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint64_t x149 = 3449255919472199737LLU;
	static uint32_t x150 = 18030U;
	int8_t x151 = -1;
	int8_t x152 = 1;
	static int32_t t34 = -487809906;

    t34 = ((x149|x150)!=(x151+x152));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x153 = -1;
	volatile uint32_t x154 = UINT32_MAX;
	int32_t t35 = -143;

    t35 = ((x153|x154)!=(x155+x156));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint32_t x159 = 1U;
	int64_t x160 = INT64_MIN;
	int32_t t36 = -98954839;

    t36 = ((x157|x158)!=(x159+x160));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x161 = 125U;
	int64_t x162 = -106915847623LL;
	volatile int8_t x164 = -3;
	volatile int32_t t37 = 7;

    t37 = ((x161|x162)!=(x163+x164));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x165 = -1;
	uint64_t x166 = 248LLU;
	int16_t x167 = -506;
	static int16_t x168 = -1;
	int32_t t38 = -165156;

    t38 = ((x165|x166)!=(x167+x168));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x169 = INT32_MAX;
	int64_t x170 = 308234LL;
	int16_t x171 = INT16_MIN;
	volatile int16_t x172 = INT16_MAX;
	int32_t t39 = -3;

    t39 = ((x169|x170)!=(x171+x172));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x174 = -1;
	volatile int16_t x176 = INT16_MIN;
	static int32_t t40 = 291059513;

    t40 = ((x173|x174)!=(x175+x176));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x178 = 37927859LLU;
	uint8_t x179 = 48U;
	int32_t t41 = -31;

    t41 = ((x177|x178)!=(x179+x180));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x181 = 44LLU;
	volatile int32_t x182 = 5968;
	int32_t x183 = INT32_MAX;
	int64_t x184 = -1LL;
	static volatile int32_t t42 = 1;

    t42 = ((x181|x182)!=(x183+x184));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x186 = 26328LL;
	int32_t x187 = -1;
	int32_t t43 = 610;

    t43 = ((x185|x186)!=(x187+x188));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x189 = 33;
	volatile int8_t x191 = INT8_MIN;
	int32_t t44 = 8023;

    t44 = ((x189|x190)!=(x191+x192));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x195 = INT64_MIN;
	int32_t t45 = 336;

    t45 = ((x193|x194)!=(x195+x196));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x198 = INT16_MAX;
	static int16_t x199 = INT16_MIN;
	int64_t x200 = -4745957LL;
	volatile int32_t t46 = 0;

    t46 = ((x197|x198)!=(x199+x200));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x205 = 0U;
	int64_t x206 = 621875992562LL;
	uint8_t x207 = UINT8_MAX;
	uint16_t x208 = 12U;
	int32_t t47 = -5129793;

    t47 = ((x205|x206)!=(x207+x208));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x209 = 90U;
	uint16_t x210 = 55U;
	int64_t x211 = 27615603LL;
	uint8_t x212 = 1U;
	int32_t t48 = -1962;

    t48 = ((x209|x210)!=(x211+x212));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x213 = 47U;
	volatile uint16_t x214 = 1U;
	uint64_t x215 = UINT64_MAX;
	int32_t t49 = 156;

    t49 = ((x213|x214)!=(x215+x216));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x217 = 3U;
	int16_t x219 = INT16_MAX;
	uint16_t x220 = 2198U;

    t50 = ((x217|x218)!=(x219+x220));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x221 = 32U;
	volatile int64_t x222 = 176748169278LL;
	int8_t x223 = INT8_MAX;
	int32_t x224 = 313;
	volatile int32_t t51 = 12895628;

    t51 = ((x221|x222)!=(x223+x224));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x233 = 14393U;
	volatile int32_t x234 = 353;
	uint32_t x235 = 58U;
	uint64_t x236 = UINT64_MAX;
	int32_t t52 = 1272162;

    t52 = ((x233|x234)!=(x235+x236));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x237 = 22695084793269071LLU;
	int64_t x238 = 453110304217988808LL;
	int8_t x239 = 24;
	int16_t x240 = 56;

    t53 = ((x237|x238)!=(x239+x240));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x241 = -176;
	static int16_t x244 = -1;

    t54 = ((x241|x242)!=(x243+x244));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x245 = -1LL;
	int8_t x246 = INT8_MAX;
	static uint8_t x247 = 3U;
	uint8_t x248 = UINT8_MAX;

    t55 = ((x245|x246)!=(x247+x248));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t t56 = -104676835;

    t56 = ((x249|x250)!=(x251+x252));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x254 = INT16_MIN;
	volatile int16_t x255 = INT16_MIN;
	static int16_t x256 = -1;

    t57 = ((x253|x254)!=(x255+x256));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x257 = 0;
	int16_t x258 = INT16_MIN;
	volatile int64_t x259 = INT64_MIN;
	uint32_t x260 = 469779U;
	int32_t t58 = -5;

    t58 = ((x257|x258)!=(x259+x260));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x261 = 0U;
	volatile uint64_t x262 = 1668LLU;
	static volatile int32_t x263 = INT32_MIN;
	int8_t x264 = 48;
	static int32_t t59 = -2;

    t59 = ((x261|x262)!=(x263+x264));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x265 = INT8_MIN;
	static uint16_t x266 = UINT16_MAX;
	static int64_t x267 = -1LL;
	uint32_t x268 = 175048U;
	volatile int32_t t60 = -6;

    t60 = ((x265|x266)!=(x267+x268));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x269 = 20;
	volatile uint64_t x270 = 2119642998LLU;
	int16_t x272 = INT16_MAX;
	static volatile int32_t t61 = 1;

    t61 = ((x269|x270)!=(x271+x272));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x273 = 172432912U;
	int32_t x274 = -12746;
	int8_t x276 = INT8_MIN;

    t62 = ((x273|x274)!=(x275+x276));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x277 = UINT64_MAX;
	uint8_t x278 = UINT8_MAX;
	int64_t x279 = -1383499984733LL;
	uint8_t x280 = UINT8_MAX;
	int32_t t63 = 181;

    t63 = ((x277|x278)!=(x279+x280));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x285 = 0;
	volatile int16_t x286 = INT16_MIN;
	volatile int32_t x287 = 65443;
	int16_t x288 = INT16_MAX;
	volatile int32_t t64 = -840908;

    t64 = ((x285|x286)!=(x287+x288));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x293 = 774U;
	int8_t x294 = INT8_MAX;
	uint64_t x295 = 6384761964274916LLU;
	static uint32_t x296 = UINT32_MAX;
	static int32_t t65 = 172649409;

    t65 = ((x293|x294)!=(x295+x296));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x297 = -1;
	int32_t x298 = INT32_MAX;
	uint16_t x300 = 4U;
	static volatile int32_t t66 = -360;

    t66 = ((x297|x298)!=(x299+x300));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x303 = 7U;
	int16_t x304 = 1;
	static int32_t t67 = -306551482;

    t67 = ((x301|x302)!=(x303+x304));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x305 = 125U;
	int64_t x307 = 1299478180162529LL;
	uint32_t x308 = 103002U;
	static int32_t t68 = -448883;

    t68 = ((x305|x306)!=(x307+x308));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x313 = 7U;
	int64_t x314 = INT64_MIN;
	int16_t x315 = -2;
	static int64_t x316 = 1008359629441LL;
	volatile int32_t t69 = 72;

    t69 = ((x313|x314)!=(x315+x316));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x317 = INT32_MIN;
	uint16_t x320 = UINT16_MAX;
	volatile int32_t t70 = -968;

    t70 = ((x317|x318)!=(x319+x320));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x325 = UINT16_MAX;
	uint16_t x326 = 0U;
	volatile int32_t x328 = INT32_MIN;
	int32_t t71 = -122;

    t71 = ((x325|x326)!=(x327+x328));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x329 = 2U;
	volatile int32_t x331 = -14672;
	int32_t x332 = -38;

    t72 = ((x329|x330)!=(x331+x332));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x333 = INT64_MAX;
	uint16_t x334 = UINT16_MAX;
	int32_t x336 = -242;

    t73 = ((x333|x334)!=(x335+x336));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x337 = INT8_MAX;
	int8_t x338 = INT8_MIN;
	int16_t x339 = INT16_MAX;
	int8_t x340 = -1;
	static int32_t t74 = 3255;

    t74 = ((x337|x338)!=(x339+x340));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x341 = INT16_MIN;
	volatile int16_t x342 = INT16_MIN;
	volatile uint8_t x343 = 9U;
	uint16_t x344 = 434U;
	volatile int32_t t75 = 0;

    t75 = ((x341|x342)!=(x343+x344));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x345 = 116U;
	uint16_t x346 = 2751U;
	uint16_t x347 = 5U;
	static uint64_t x348 = UINT64_MAX;
	volatile int32_t t76 = -119457;

    t76 = ((x345|x346)!=(x347+x348));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x349 = 1836188059847006604LLU;
	int16_t x350 = -1;
	volatile int16_t x351 = 3984;
	int16_t x352 = -2588;

    t77 = ((x349|x350)!=(x351+x352));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x353 = -1LL;
	static int64_t x354 = 1215934LL;
	uint8_t x355 = 7U;
	int8_t x356 = INT8_MIN;
	volatile int32_t t78 = 27736;

    t78 = ((x353|x354)!=(x355+x356));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x357 = -1;
	static uint16_t x359 = 6U;
	uint8_t x360 = UINT8_MAX;
	int32_t t79 = 19972966;

    t79 = ((x357|x358)!=(x359+x360));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x369 = -1;
	static int8_t x370 = 1;
	int64_t x371 = -1477405912978390LL;
	int64_t x372 = 12LL;

    t80 = ((x369|x370)!=(x371+x372));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x373 = -1;
	static int16_t x375 = 3;
	uint64_t x376 = UINT64_MAX;
	volatile int32_t t81 = 632454;

    t81 = ((x373|x374)!=(x375+x376));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x377 = UINT16_MAX;
	int64_t x378 = INT64_MIN;
	int8_t x380 = -1;

    t82 = ((x377|x378)!=(x379+x380));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint8_t x381 = UINT8_MAX;
	uint32_t x383 = 623401834U;
	volatile int64_t x384 = INT64_MIN;
	volatile int32_t t83 = -508585;

    t83 = ((x381|x382)!=(x383+x384));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x386 = -1;
	static uint64_t x387 = 2899503LLU;
	int32_t x388 = -3748;

    t84 = ((x385|x386)!=(x387+x388));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x397 = UINT64_MAX;
	static uint32_t x398 = 68U;
	volatile int8_t x399 = -1;
	uint64_t x400 = 64408910038LLU;
	int32_t t85 = 31;

    t85 = ((x397|x398)!=(x399+x400));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x402 = 45149LLU;
	static uint8_t x403 = UINT8_MAX;
	static int32_t x404 = 2136081;
	int32_t t86 = 22180;

    t86 = ((x401|x402)!=(x403+x404));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x405 = INT32_MAX;
	int64_t x406 = INT64_MAX;
	int32_t x407 = 249868;
	uint32_t x408 = 138718793U;
	volatile int32_t t87 = -6077306;

    t87 = ((x405|x406)!=(x407+x408));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x409 = 65245U;
	volatile uint16_t x412 = 259U;
	static volatile int32_t t88 = 504;

    t88 = ((x409|x410)!=(x411+x412));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int8_t x414 = -22;
	int8_t x415 = INT8_MIN;
	uint64_t x416 = 6950493364LLU;

    t89 = ((x413|x414)!=(x415+x416));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x417 = 13U;
	volatile uint32_t x418 = UINT32_MAX;
	volatile int32_t t90 = -80959513;

    t90 = ((x417|x418)!=(x419+x420));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x421 = 37U;
	uint32_t x422 = 13U;
	static uint16_t x423 = 1850U;
	static uint16_t x424 = 2037U;
	volatile int32_t t91 = -1164;

    t91 = ((x421|x422)!=(x423+x424));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x426 = 243445290U;
	int16_t x427 = INT16_MAX;
	uint64_t x428 = 918LLU;
	int32_t t92 = -41771340;

    t92 = ((x425|x426)!=(x427+x428));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x433 = 86572636;
	volatile int8_t x434 = 25;
	int32_t t93 = -155043;

    t93 = ((x433|x434)!=(x435+x436));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int64_t x437 = 5483723220LL;
	uint16_t x438 = UINT16_MAX;
	int32_t x439 = INT32_MAX;
	uint32_t x440 = UINT32_MAX;
	static volatile int32_t t94 = 1069152990;

    t94 = ((x437|x438)!=(x439+x440));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int16_t x441 = -964;
	uint64_t x443 = 3210599LLU;
	int32_t t95 = -15239568;

    t95 = ((x441|x442)!=(x443+x444));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x450 = INT16_MIN;
	uint8_t x452 = 0U;
	int32_t t96 = -82119958;

    t96 = ((x449|x450)!=(x451+x452));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x453 = -1LL;
	int8_t x454 = 3;
	static int64_t x455 = 1813LL;
	uint32_t x456 = 54413932U;
	int32_t t97 = 127584341;

    t97 = ((x453|x454)!=(x455+x456));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint16_t x458 = 2U;
	int8_t x459 = INT8_MIN;
	int8_t x460 = -9;
	int32_t t98 = 6309020;

    t98 = ((x457|x458)!=(x459+x460));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x462 = -1LL;
	volatile uint64_t x463 = 4LLU;
	int32_t x464 = INT32_MIN;
	volatile int32_t t99 = 15;

    t99 = ((x461|x462)!=(x463+x464));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x465 = -1;
	uint8_t x466 = UINT8_MAX;
	int16_t x467 = INT16_MIN;
	int32_t x468 = 33532;
	static volatile int32_t t100 = -2826986;

    t100 = ((x465|x466)!=(x467+x468));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x469 = -700;
	uint32_t x470 = UINT32_MAX;
	uint32_t x471 = UINT32_MAX;
	uint32_t x472 = UINT32_MAX;

    t101 = ((x469|x470)!=(x471+x472));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x473 = 244U;
	volatile uint8_t x474 = 34U;
	volatile int32_t x476 = 946752;
	static volatile int32_t t102 = -43;

    t102 = ((x473|x474)!=(x475+x476));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x477 = 0U;
	int8_t x478 = 1;
	volatile int64_t x479 = INT64_MIN;
	int8_t x480 = INT8_MAX;
	volatile int32_t t103 = -176274;

    t103 = ((x477|x478)!=(x479+x480));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x485 = 1;
	static int32_t x486 = INT32_MIN;
	int64_t x487 = -2795826030LL;

    t104 = ((x485|x486)!=(x487+x488));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x489 = -1;
	int32_t x492 = -119296058;

    t105 = ((x489|x490)!=(x491+x492));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x493 = 180U;
	int32_t x494 = 337536995;
	int8_t x495 = INT8_MAX;
	volatile int16_t x496 = INT16_MIN;
	static volatile int32_t t106 = 1399;

    t106 = ((x493|x494)!=(x495+x496));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x497 = UINT32_MAX;
	int8_t x498 = -1;
	int64_t x499 = -9985460795590LL;
	uint16_t x500 = 393U;
	static int32_t t107 = -11;

    t107 = ((x497|x498)!=(x499+x500));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x501 = UINT16_MAX;
	uint16_t x502 = 0U;
	volatile uint8_t x503 = 1U;
	int64_t x504 = INT64_MIN;
	int32_t t108 = -881;

    t108 = ((x501|x502)!=(x503+x504));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x509 = INT8_MIN;
	volatile int32_t x510 = INT32_MIN;
	uint16_t x511 = UINT16_MAX;
	int32_t t109 = 3;

    t109 = ((x509|x510)!=(x511+x512));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x513 = UINT32_MAX;
	static uint32_t x514 = 278318U;
	uint16_t x516 = 1U;
	volatile int32_t t110 = 1;

    t110 = ((x513|x514)!=(x515+x516));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x517 = INT8_MAX;
	static uint8_t x518 = 1U;
	uint64_t x519 = UINT64_MAX;
	int8_t x520 = 0;
	static int32_t t111 = -140960;

    t111 = ((x517|x518)!=(x519+x520));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x521 = INT16_MIN;
	int8_t x522 = 0;
	static int32_t x523 = -4;
	static uint64_t x524 = 2529493766500LLU;
	int32_t t112 = -38225;

    t112 = ((x521|x522)!=(x523+x524));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x526 = -1;
	uint64_t x527 = 30LLU;
	int8_t x528 = INT8_MIN;
	volatile int32_t t113 = -163215272;

    t113 = ((x525|x526)!=(x527+x528));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int8_t x529 = -1;
	int16_t x530 = INT16_MIN;
	uint8_t x531 = 0U;
	static volatile uint64_t x532 = 5723727LLU;

    t114 = ((x529|x530)!=(x531+x532));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint16_t x533 = 20U;
	static int64_t x534 = INT64_MAX;
	int16_t x535 = INT16_MIN;
	int32_t t115 = 321015;

    t115 = ((x533|x534)!=(x535+x536));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x537 = 13510306192378698LL;
	volatile int8_t x539 = 0;
	uint64_t x540 = 3199LLU;
	volatile int32_t t116 = -2;

    t116 = ((x537|x538)!=(x539+x540));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x541 = 0;
	int32_t x542 = 65636;
	int16_t x543 = INT16_MAX;
	int64_t x544 = -1LL;
	int32_t t117 = 1;

    t117 = ((x541|x542)!=(x543+x544));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x545 = 3168;
	uint8_t x547 = 7U;
	uint8_t x548 = 3U;
	volatile int32_t t118 = -850820880;

    t118 = ((x545|x546)!=(x547+x548));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x549 = 1391043LLU;
	volatile int32_t x550 = -1;
	int32_t x551 = INT32_MIN;
	uint16_t x552 = 1244U;
	int32_t t119 = 839301;

    t119 = ((x549|x550)!=(x551+x552));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x553 = -880;
	int16_t x554 = 53;
	int64_t x555 = -1LL;
	volatile int8_t x556 = 0;
	int32_t t120 = -228228;

    t120 = ((x553|x554)!=(x555+x556));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int8_t x558 = INT8_MIN;
	uint16_t x559 = UINT16_MAX;
	int32_t t121 = 3070056;

    t121 = ((x557|x558)!=(x559+x560));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x561 = -1;
	int32_t x562 = 10328879;
	volatile int32_t t122 = 0;

    t122 = ((x561|x562)!=(x563+x564));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x565 = 49;
	int32_t x566 = INT32_MIN;
	volatile int8_t x567 = -1;
	int64_t x568 = -1LL;
	volatile int32_t t123 = 74979859;

    t123 = ((x565|x566)!=(x567+x568));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x569 = 2177695LL;
	int8_t x570 = -2;
	int8_t x571 = -15;
	volatile uint8_t x572 = 8U;

    t124 = ((x569|x570)!=(x571+x572));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x573 = UINT64_MAX;
	int8_t x574 = 1;
	volatile int32_t t125 = 18651;

    t125 = ((x573|x574)!=(x575+x576));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x581 = UINT64_MAX;
	volatile int64_t x582 = INT64_MAX;
	static int32_t x583 = 5071;
	uint8_t x584 = 4U;
	volatile int32_t t126 = -164302086;

    t126 = ((x581|x582)!=(x583+x584));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x585 = INT32_MIN;
	int8_t x587 = 6;
	volatile int16_t x588 = INT16_MAX;
	volatile int32_t t127 = 247;

    t127 = ((x585|x586)!=(x587+x588));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x589 = INT64_MIN;
	int64_t x590 = INT64_MAX;
	int32_t t128 = 30757;

    t128 = ((x589|x590)!=(x591+x592));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x593 = -1LL;
	int64_t x595 = -1LL;
	int32_t x596 = -1;
	int32_t t129 = -65;

    t129 = ((x593|x594)!=(x595+x596));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x597 = 1U;
	static uint32_t x598 = UINT32_MAX;
	volatile uint16_t x599 = 163U;
	volatile int32_t x600 = -2958584;
	volatile int32_t t130 = -276366697;

    t130 = ((x597|x598)!=(x599+x600));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x601 = INT32_MIN;
	int64_t x602 = 6084936600557962LL;
	static uint16_t x603 = 4005U;
	uint64_t x604 = UINT64_MAX;
	volatile int32_t t131 = 628;

    t131 = ((x601|x602)!=(x603+x604));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x605 = UINT32_MAX;
	int8_t x606 = 11;
	int32_t x607 = -1;
	uint16_t x608 = 25U;
	volatile int32_t t132 = 68178026;

    t132 = ((x605|x606)!=(x607+x608));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x610 = 7;
	int8_t x611 = INT8_MAX;
	uint16_t x612 = 230U;

    t133 = ((x609|x610)!=(x611+x612));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x613 = INT64_MIN;
	int8_t x614 = -2;
	volatile int16_t x615 = INT16_MIN;

    t134 = ((x613|x614)!=(x615+x616));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x617 = INT64_MIN;
	volatile uint64_t x618 = 534101929297LLU;
	int64_t x619 = INT64_MIN;
	static volatile int64_t x620 = 42124153318865026LL;
	static volatile int32_t t135 = 60150239;

    t135 = ((x617|x618)!=(x619+x620));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x621 = UINT16_MAX;
	int8_t x622 = -1;
	int32_t x623 = 947989610;
	int32_t x624 = INT32_MIN;
	static int32_t t136 = 4;

    t136 = ((x621|x622)!=(x623+x624));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x625 = UINT64_MAX;
	uint32_t x626 = 68826426U;
	uint8_t x627 = UINT8_MAX;
	int32_t t137 = -180;

    t137 = ((x625|x626)!=(x627+x628));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x629 = 26U;
	int8_t x631 = INT8_MIN;
	int8_t x632 = INT8_MIN;
	static int32_t t138 = -52940295;

    t138 = ((x629|x630)!=(x631+x632));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x633 = INT64_MIN;
	int8_t x634 = INT8_MAX;
	int16_t x636 = INT16_MIN;

    t139 = ((x633|x634)!=(x635+x636));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x637 = INT32_MAX;
	int16_t x638 = -1;
	uint16_t x639 = 150U;
	int32_t t140 = -334574;

    t140 = ((x637|x638)!=(x639+x640));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x642 = INT16_MIN;

    t141 = ((x641|x642)!=(x643+x644));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x645 = UINT64_MAX;
	int32_t x646 = 31;
	static int16_t x647 = INT16_MIN;
	volatile int64_t x648 = INT64_MAX;
	volatile int32_t t142 = -100;

    t142 = ((x645|x646)!=(x647+x648));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x653 = INT64_MAX;
	int64_t x654 = 1072721847623165LL;
	uint64_t x655 = UINT64_MAX;
	uint8_t x656 = 2U;
	static int32_t t143 = 572647067;

    t143 = ((x653|x654)!=(x655+x656));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint64_t x657 = UINT64_MAX;
	int16_t x658 = INT16_MAX;
	volatile int64_t x659 = INT64_MIN;
	volatile uint16_t x660 = UINT16_MAX;
	int32_t t144 = 0;

    t144 = ((x657|x658)!=(x659+x660));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x661 = -1;
	uint16_t x662 = UINT16_MAX;
	int8_t x664 = 62;
	volatile int32_t t145 = 109379;

    t145 = ((x661|x662)!=(x663+x664));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x665 = -105230LL;
	static int16_t x666 = INT16_MIN;
	int32_t x667 = INT32_MIN;
	int64_t x668 = 742LL;
	volatile int32_t t146 = 1923979;

    t146 = ((x665|x666)!=(x667+x668));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x669 = -1LL;
	static volatile int16_t x671 = INT16_MAX;
	static int8_t x672 = INT8_MIN;
	static int32_t t147 = 10588;

    t147 = ((x669|x670)!=(x671+x672));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint16_t x673 = 0U;
	static uint8_t x674 = UINT8_MAX;
	int16_t x675 = INT16_MAX;
	int32_t t148 = -1291;

    t148 = ((x673|x674)!=(x675+x676));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x677 = INT64_MIN;
	int64_t x678 = -69862674369440401LL;
	volatile uint64_t x679 = 15425LLU;
	uint8_t x680 = 31U;
	volatile int32_t t149 = -29422;

    t149 = ((x677|x678)!=(x679+x680));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x681 = INT8_MIN;
	int8_t x684 = 1;
	volatile int32_t t150 = -200974896;

    t150 = ((x681|x682)!=(x683+x684));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x689 = -1;
	int64_t x690 = INT64_MAX;
	int64_t x692 = INT64_MAX;
	volatile int32_t t151 = -939;

    t151 = ((x689|x690)!=(x691+x692));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x693 = INT8_MIN;
	int64_t x695 = 1438951895209831550LL;
	int32_t x696 = -188539;

    t152 = ((x693|x694)!=(x695+x696));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x697 = -7627499LL;
	int64_t x699 = INT64_MIN;
	static volatile int8_t x700 = 9;
	volatile int32_t t153 = -639;

    t153 = ((x697|x698)!=(x699+x700));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x701 = INT64_MIN;
	static uint32_t x702 = 861851U;
	volatile int32_t x703 = INT32_MIN;
	volatile uint32_t x704 = UINT32_MAX;
	static int32_t t154 = 0;

    t154 = ((x701|x702)!=(x703+x704));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x705 = 490008;
	static volatile int64_t x706 = -1LL;
	static int8_t x707 = 39;
	static int64_t x708 = INT64_MIN;
	static int32_t t155 = 100;

    t155 = ((x705|x706)!=(x707+x708));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x714 = UINT16_MAX;
	static int32_t x715 = -49;
	volatile int8_t x716 = -1;
	volatile int32_t t156 = 9;

    t156 = ((x713|x714)!=(x715+x716));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x718 = INT32_MIN;

    t157 = ((x717|x718)!=(x719+x720));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int64_t x721 = 1596873308LL;
	static int32_t x722 = -31;
	int32_t t158 = 1;

    t158 = ((x721|x722)!=(x723+x724));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x725 = INT8_MIN;
	uint8_t x727 = UINT8_MAX;
	int8_t x728 = INT8_MIN;
	int32_t t159 = -1;

    t159 = ((x725|x726)!=(x727+x728));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x733 = -4774;
	uint8_t x734 = 12U;
	uint32_t x735 = 1879U;
	int8_t x736 = INT8_MIN;

    t160 = ((x733|x734)!=(x735+x736));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x737 = 23901053873689823LLU;
	int64_t x738 = INT64_MIN;
	int64_t x739 = -6LL;
	int64_t x740 = 195LL;
	int32_t t161 = 17;

    t161 = ((x737|x738)!=(x739+x740));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x741 = INT8_MIN;
	int8_t x742 = INT8_MIN;
	int8_t x743 = 12;
	uint16_t x744 = UINT16_MAX;

    t162 = ((x741|x742)!=(x743+x744));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x745 = 386622;
	uint64_t x747 = UINT64_MAX;
	static uint32_t x748 = UINT32_MAX;

    t163 = ((x745|x746)!=(x747+x748));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x749 = INT16_MIN;
	int64_t x750 = INT64_MIN;
	int8_t x751 = INT8_MIN;
	static volatile int32_t t164 = 0;

    t164 = ((x749|x750)!=(x751+x752));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x753 = 849544755U;
	int32_t x754 = 13;
	volatile uint32_t x755 = 7841389U;
	int32_t x756 = INT32_MIN;
	volatile int32_t t165 = 807241720;

    t165 = ((x753|x754)!=(x755+x756));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x757 = UINT8_MAX;
	uint16_t x758 = 231U;
	int32_t x759 = -12762790;
	static int32_t x760 = 10422325;

    t166 = ((x757|x758)!=(x759+x760));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x761 = INT16_MAX;
	uint32_t x764 = 15808382U;

    t167 = ((x761|x762)!=(x763+x764));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x765 = UINT16_MAX;
	int16_t x766 = INT16_MIN;
	int64_t x767 = 2879682423LL;
	uint32_t x768 = UINT32_MAX;
	static int32_t t168 = -966;

    t168 = ((x765|x766)!=(x767+x768));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x769 = UINT8_MAX;
	volatile uint64_t x771 = UINT64_MAX;
	uint32_t x772 = 108391813U;

    t169 = ((x769|x770)!=(x771+x772));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x775 = INT8_MIN;
	int32_t x776 = -18;

    t170 = ((x773|x774)!=(x775+x776));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x777 = UINT8_MAX;
	int16_t x778 = INT16_MAX;
	int32_t x779 = 1034;
	uint8_t x780 = 0U;
	int32_t t171 = 631761216;

    t171 = ((x777|x778)!=(x779+x780));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x781 = INT64_MIN;
	volatile int32_t x782 = -9963;
	static int64_t x784 = 149342718229LL;
	int32_t t172 = 129;

    t172 = ((x781|x782)!=(x783+x784));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x785 = -6926529575230715LL;
	volatile int8_t x786 = INT8_MIN;
	int16_t x787 = INT16_MAX;
	int64_t x788 = INT64_MIN;
	volatile int32_t t173 = 106472;

    t173 = ((x785|x786)!=(x787+x788));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x789 = INT16_MAX;
	uint64_t x790 = 191598469LLU;
	uint32_t x791 = 17301U;
	volatile int32_t t174 = -334660879;

    t174 = ((x789|x790)!=(x791+x792));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x793 = 753;
	int8_t x794 = -1;
	int32_t x795 = 1302;
	volatile int16_t x796 = 1;
	int32_t t175 = 397783;

    t175 = ((x793|x794)!=(x795+x796));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x798 = 207459001U;
	int8_t x800 = INT8_MIN;
	int32_t t176 = 54779012;

    t176 = ((x797|x798)!=(x799+x800));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x801 = 2;
	uint16_t x802 = UINT16_MAX;
	int32_t t177 = -70960245;

    t177 = ((x801|x802)!=(x803+x804));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x805 = INT8_MAX;
	uint32_t x806 = UINT32_MAX;
	int64_t x807 = 5856LL;
	int8_t x808 = INT8_MIN;
	volatile int32_t t178 = -7567653;

    t178 = ((x805|x806)!=(x807+x808));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x810 = INT32_MIN;
	volatile uint16_t x811 = 1U;
	uint32_t x812 = 612449U;
	static volatile int32_t t179 = 976;

    t179 = ((x809|x810)!=(x811+x812));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint32_t x813 = 838U;
	int8_t x814 = INT8_MIN;
	static int16_t x815 = INT16_MIN;
	int16_t x816 = INT16_MIN;
	static volatile int32_t t180 = -423;

    t180 = ((x813|x814)!=(x815+x816));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x817 = -6589129LL;
	int32_t x818 = 27576442;
	volatile uint16_t x819 = UINT16_MAX;
	uint8_t x820 = UINT8_MAX;
	int32_t t181 = -2;

    t181 = ((x817|x818)!=(x819+x820));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x822 = 608150357LL;
	static uint8_t x823 = 1U;
	volatile uint32_t x824 = 29U;
	volatile int32_t t182 = 329;

    t182 = ((x821|x822)!=(x823+x824));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x825 = INT16_MIN;
	volatile int64_t x827 = INT64_MAX;
	volatile uint64_t x828 = 337945746564922LLU;
	volatile int32_t t183 = 740994438;

    t183 = ((x825|x826)!=(x827+x828));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x829 = 219720321704408LLU;
	uint32_t x830 = 489782687U;
	int8_t x831 = -1;
	static int16_t x832 = INT16_MAX;
	static int32_t t184 = 1;

    t184 = ((x829|x830)!=(x831+x832));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x833 = -433LL;
	int16_t x834 = 0;
	uint8_t x836 = 40U;
	int32_t t185 = -51412931;

    t185 = ((x833|x834)!=(x835+x836));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x837 = 1884U;
	int8_t x838 = INT8_MIN;
	int16_t x840 = INT16_MAX;
	volatile int32_t t186 = -1468615;

    t186 = ((x837|x838)!=(x839+x840));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x845 = 3U;
	int16_t x846 = INT16_MAX;
	int64_t x848 = -55950101374LL;
	volatile int32_t t187 = 114129;

    t187 = ((x845|x846)!=(x847+x848));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x849 = -3;
	volatile int32_t x851 = -1;
	uint64_t x852 = 84055194LLU;

    t188 = ((x849|x850)!=(x851+x852));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x853 = INT16_MIN;
	static int16_t x854 = INT16_MIN;
	volatile int8_t x855 = -2;
	static int32_t x856 = 32352023;
	volatile int32_t t189 = -15;

    t189 = ((x853|x854)!=(x855+x856));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x858 = 529761585;
	int8_t x859 = -1;
	int32_t x860 = 3656;
	volatile int32_t t190 = -24967;

    t190 = ((x857|x858)!=(x859+x860));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x861 = 1;
	uint64_t x864 = 5443LLU;
	volatile int32_t t191 = 7993845;

    t191 = ((x861|x862)!=(x863+x864));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x869 = INT16_MIN;
	uint64_t x870 = UINT64_MAX;
	uint64_t x871 = 1711LLU;

    t192 = ((x869|x870)!=(x871+x872));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x874 = UINT32_MAX;
	int64_t x875 = -1LL;
	int32_t x876 = INT32_MIN;

    t193 = ((x873|x874)!=(x875+x876));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x877 = 76U;
	volatile uint8_t x878 = UINT8_MAX;
	volatile uint8_t x880 = UINT8_MAX;
	int32_t t194 = -1;

    t194 = ((x877|x878)!=(x879+x880));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int8_t x883 = -1;
	uint8_t x884 = UINT8_MAX;
	int32_t t195 = 695;

    t195 = ((x881|x882)!=(x883+x884));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x886 = 5;
	int32_t x887 = 3;

    t196 = ((x885|x886)!=(x887+x888));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x889 = UINT64_MAX;
	uint32_t x890 = 256592U;
	int16_t x891 = INT16_MIN;
	volatile int32_t t197 = 28995526;

    t197 = ((x889|x890)!=(x891+x892));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x893 = INT64_MIN;
	volatile int64_t x894 = INT64_MIN;
	uint32_t x895 = UINT32_MAX;
	int32_t x896 = INT32_MAX;
	int32_t t198 = -444126;

    t198 = ((x893|x894)!=(x895+x896));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x897 = -466;
	uint32_t x898 = 9518U;
	int32_t x899 = 66912181;
	volatile int32_t x900 = -1;
	int32_t t199 = 954331580;

    t199 = ((x897|x898)!=(x899+x900));

    if (t199 != 1) { NG(); } else { ; }
	
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

