
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

int16_t x2 = 12803;
static int32_t x9 = 3101;
volatile int8_t x10 = INT8_MIN;
int32_t x13 = INT32_MAX;
int8_t x14 = 5;
uint8_t x17 = 18U;
int64_t x19 = INT64_MIN;
volatile int64_t t4 = -848LL;
int64_t x24 = -26380605688LL;
volatile int32_t t6 = 1;
static int64_t x35 = INT64_MAX;
uint8_t x43 = 45U;
volatile uint64_t x52 = 5LLU;
static uint64_t t11 = 6073223LLU;
uint32_t x66 = 2016U;
uint8_t x67 = 1U;
int32_t t17 = 0;
int8_t x84 = INT8_MAX;
volatile int64_t x85 = -5208157387127LL;
static int8_t x88 = INT8_MAX;
uint32_t x91 = UINT32_MAX;
int32_t t22 = -466108055;
uint32_t x106 = 7U;
volatile int64_t x107 = 16237208613727915LL;
volatile int32_t x110 = INT32_MIN;
int16_t x121 = -13759;
static uint8_t x123 = 48U;
int8_t x130 = INT8_MIN;
uint64_t x132 = 2576887711139994LLU;
uint64_t t30 = 184993701793LLU;
int64_t x133 = INT64_MIN;
uint16_t x134 = UINT16_MAX;
volatile int32_t t34 = 383268;
volatile uint64_t t35 = 6639984110LLU;
int16_t x169 = -1360;
static int32_t x171 = INT32_MAX;
static int16_t x172 = -1;
uint16_t x174 = 2U;
int32_t x180 = 490400;
static uint8_t x183 = UINT8_MAX;
volatile uint8_t x190 = 0U;
volatile int8_t x193 = -1;
int32_t x196 = -403127932;
int16_t x200 = INT16_MIN;
volatile int16_t x208 = -1;
volatile uint32_t t47 = UINT32_MAX;
int32_t x210 = -105165;
static uint32_t x217 = 40336U;
int16_t x224 = INT16_MIN;
static volatile int64_t t51 = 29LL;
uint32_t x233 = 18346532U;
static int32_t x237 = 12;
volatile int16_t x244 = -1095;
int32_t t56 = -74530853;
static volatile uint8_t x245 = 25U;
int8_t x249 = 62;
static int16_t x250 = INT16_MIN;
uint32_t x262 = 0U;
static int16_t x266 = -334;
static int32_t x275 = -1;
volatile int64_t x281 = INT64_MAX;
volatile int32_t x283 = -1;
static volatile int64_t x288 = 32LL;
volatile uint64_t t66 = 0LLU;
static int64_t x303 = INT64_MIN;
uint16_t x304 = 517U;
int32_t x305 = INT32_MIN;
int64_t x315 = -1LL;
static int16_t x320 = INT16_MAX;
int8_t x321 = INT8_MIN;
uint16_t x325 = 1995U;
uint32_t t74 = 365U;
uint32_t x340 = 27U;
static int8_t x341 = -1;
volatile uint64_t x343 = UINT64_MAX;
static uint8_t x350 = 11U;
int32_t x357 = INT32_MAX;
uint32_t x363 = 1540U;
volatile uint32_t t80 = 1052504934U;
int8_t x375 = INT8_MAX;
int32_t x385 = INT32_MIN;
volatile int8_t x386 = 0;
static volatile int32_t t85 = -1670677;
int32_t x394 = 1022034;
int64_t x395 = INT64_MIN;
int64_t x408 = 51205LL;
int32_t x409 = INT32_MIN;
int16_t x410 = INT16_MIN;
volatile uint8_t x412 = 114U;
int16_t x416 = -11;
volatile int16_t x423 = 0;
uint64_t t98 = 14461868LLU;
uint16_t x451 = 22U;
static int8_t x453 = INT8_MIN;
static int64_t x457 = INT64_MIN;
int32_t x462 = INT32_MIN;
int64_t x470 = INT64_MIN;
static int16_t x473 = -97;
volatile int16_t x475 = INT16_MIN;
static int8_t x476 = -1;
int8_t x482 = INT8_MAX;
int8_t x483 = INT8_MIN;
uint32_t x484 = 443395U;
int32_t x491 = INT32_MIN;
int64_t t108 = 116553089189LL;
uint32_t x493 = UINT32_MAX;
int32_t x494 = -1;
int64_t x497 = -2221201913LL;
int8_t x498 = INT8_MAX;
volatile int8_t x499 = -11;
static int8_t x506 = 25;
int64_t x513 = -12699086688168991LL;
int64_t x518 = INT64_MAX;
int32_t x523 = -1;
static int16_t x529 = -239;
volatile int16_t x531 = -35;
int32_t t118 = 73;
static volatile int32_t x543 = INT32_MIN;
int8_t x544 = 1;
int64_t x546 = -1LL;
int8_t x548 = INT8_MIN;
int32_t x552 = INT32_MIN;
volatile int32_t t122 = -2;
uint32_t x568 = 3163788U;
static int32_t x569 = INT32_MIN;
volatile int32_t t125 = 15048;
int32_t x573 = -1;
int32_t t126 = 31349;
uint8_t x598 = 6U;
uint32_t x614 = 513U;
static uint8_t x620 = 38U;
int64_t x621 = -4238166LL;
volatile uint32_t x623 = UINT32_MAX;
int64_t x624 = INT64_MIN;
int32_t t137 = -15952;
uint16_t x635 = 14U;
int8_t x640 = INT8_MAX;
uint32_t x647 = 6488U;
int64_t x652 = INT64_MIN;
int64_t x656 = 158LL;
int8_t x662 = 7;
volatile int32_t x669 = -1;
int32_t t148 = 0;
int16_t x675 = INT16_MIN;
int64_t x678 = INT64_MAX;
uint32_t t150 = 1381427U;
volatile uint8_t x682 = 4U;
static volatile uint64_t t151 = 530LLU;
static uint8_t x693 = 45U;
static int16_t x694 = INT16_MAX;
static int32_t x699 = INT32_MIN;
int32_t x700 = 0;
int64_t x701 = 573348231298802343LL;
int64_t x702 = INT64_MAX;
volatile int32_t x706 = -1;
volatile uint64_t t158 = 23707556LLU;
static uint32_t x721 = UINT32_MAX;
volatile uint64_t x725 = 1012214211LLU;
static uint16_t x727 = 496U;
uint16_t x730 = 108U;
int64_t x733 = INT64_MIN;
int32_t t164 = -47037743;
uint32_t x748 = 25918U;
static uint32_t t165 = 3276U;
static int32_t x756 = -5135;
int32_t x758 = INT32_MIN;
uint16_t x763 = 7675U;
int64_t x766 = INT64_MAX;
int16_t x779 = -52;
int32_t t173 = -1375936;
static volatile int16_t x788 = 21;
static int32_t t180 = 825754345;
int64_t x817 = -1LL;
volatile int64_t x822 = INT64_MIN;
volatile uint64_t t186 = 663297292746565LLU;
static volatile int32_t t187 = -561725380;
uint8_t x857 = UINT8_MAX;
int16_t x863 = INT16_MAX;
static volatile int8_t x864 = INT8_MIN;
int32_t t190 = -82242752;
volatile int8_t x866 = INT8_MIN;
static int64_t x869 = INT64_MAX;
static volatile int64_t x884 = -1LL;
int64_t x885 = INT64_MIN;
int32_t x886 = 1;
int16_t x893 = -1;
static int32_t t198 = -11355;
static int64_t t199 = 0LL;


void f0(void) {
    	int16_t x1 = 2;
	uint8_t x3 = 24U;
	uint8_t x4 = 91U;
	int32_t t0 = -1;

    t0 = ((x1!=x2)|(x3+x4));

    if (t0 != 115) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -1LL;
	int16_t x6 = INT16_MAX;
	static int16_t x7 = 1;
	int64_t x8 = -465LL;
	volatile int64_t t1 = -773582406LL;

    t1 = ((x5!=x6)|(x7+x8));

    if (t1 != -463LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x11 = INT32_MAX;
	int32_t x12 = INT32_MIN;
	static volatile int32_t t2 = 1022;

    t2 = ((x9!=x10)|(x11+x12));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x15 = INT8_MIN;
	int32_t x16 = -1;
	int32_t t3 = -128643992;

    t3 = ((x13!=x14)|(x15+x16));

    if (t3 != -129) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x18 = 473U;
	int64_t x20 = 202269597849269LL;

    t4 = ((x17!=x18)|(x19+x20));

    if (t4 != -9223169767256926539LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x21 = UINT32_MAX;
	volatile int8_t x22 = INT8_MIN;
	volatile int16_t x23 = -1;
	volatile int64_t t5 = 41756948149833483LL;

    t5 = ((x21!=x22)|(x23+x24));

    if (t5 != -26380605689LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 187U;
	uint8_t x26 = 44U;
	int8_t x27 = 0;
	int16_t x28 = 67;

    t6 = ((x25!=x26)|(x27+x28));

    if (t6 != 67) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x33 = 79926U;
	static volatile int64_t x34 = -1LL;
	volatile int32_t x36 = -1;
	volatile int64_t t7 = INT64_MAX;

    t7 = ((x33!=x34)|(x35+x36));

    if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x37 = -1;
	volatile int16_t x38 = INT16_MAX;
	int32_t x39 = INT32_MAX;
	int8_t x40 = -1;
	int32_t t8 = INT32_MAX;

    t8 = ((x37!=x38)|(x39+x40));

    if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x41 = 7753;
	uint64_t x42 = UINT64_MAX;
	int16_t x44 = INT16_MIN;
	volatile int32_t t9 = 4;

    t9 = ((x41!=x42)|(x43+x44));

    if (t9 != -32723) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x45 = UINT64_MAX;
	int8_t x46 = -1;
	uint32_t x47 = 0U;
	uint32_t x48 = 29671U;
	uint32_t t10 = 3925405U;

    t10 = ((x45!=x46)|(x47+x48));

    if (t10 != 29671U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x49 = -1;
	volatile int64_t x50 = INT64_MIN;
	int16_t x51 = -1;

    t11 = ((x49!=x50)|(x51+x52));

    if (t11 != 5LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x53 = INT16_MAX;
	static uint64_t x54 = UINT64_MAX;
	static uint16_t x55 = 3934U;
	static int32_t x56 = INT32_MIN;
	volatile int32_t t12 = 1733;

    t12 = ((x53!=x54)|(x55+x56));

    if (t12 != -2147479713) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x57 = -1LL;
	int8_t x58 = INT8_MAX;
	static int64_t x59 = -1LL;
	volatile uint32_t x60 = 1857546663U;
	volatile int64_t t13 = 262592LL;

    t13 = ((x57!=x58)|(x59+x60));

    if (t13 != 1857546663LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = -1LL;
	volatile uint8_t x62 = 13U;
	static int8_t x63 = -1;
	uint32_t x64 = 1833U;
	volatile uint32_t t14 = 18U;

    t14 = ((x61!=x62)|(x63+x64));

    if (t14 != 1833U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x65 = 27U;
	int16_t x68 = -76;
	volatile int32_t t15 = 63935;

    t15 = ((x65!=x66)|(x67+x68));

    if (t15 != -75) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x69 = -3613841;
	int16_t x70 = -1;
	static int8_t x71 = 0;
	volatile int32_t x72 = INT32_MAX;
	volatile int32_t t16 = INT32_MAX;

    t16 = ((x69!=x70)|(x71+x72));

    if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x73 = 3U;
	static uint8_t x74 = UINT8_MAX;
	uint16_t x75 = 0U;
	uint16_t x76 = 7U;

    t17 = ((x73!=x74)|(x75+x76));

    if (t17 != 7) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x81 = 0U;
	volatile int32_t x82 = -58;
	uint8_t x83 = 27U;
	int32_t t18 = 428;

    t18 = ((x81!=x82)|(x83+x84));

    if (t18 != 155) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x86 = INT64_MIN;
	int16_t x87 = -1;
	volatile int32_t t19 = 6800;

    t19 = ((x85!=x86)|(x87+x88));

    if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x89 = 3535809502679342380LLU;
	volatile uint64_t x90 = UINT64_MAX;
	uint64_t x92 = 2244LLU;
	static volatile uint64_t t20 = 36525851LLU;

    t20 = ((x89!=x90)|(x91+x92));

    if (t20 != 4294969539LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x93 = UINT32_MAX;
	static int32_t x94 = 1052;
	static volatile uint8_t x95 = 46U;
	int8_t x96 = INT8_MIN;
	volatile int32_t t21 = -445354;

    t21 = ((x93!=x94)|(x95+x96));

    if (t21 != -81) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x97 = 2;
	int32_t x98 = -244423;
	uint8_t x99 = 65U;
	volatile int32_t x100 = -1;

    t22 = ((x97!=x98)|(x99+x100));

    if (t22 != 65) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x101 = UINT32_MAX;
	static int32_t x102 = INT32_MIN;
	int8_t x103 = INT8_MAX;
	static uint32_t x104 = 40859U;
	volatile uint32_t t23 = 22043698U;

    t23 = ((x101!=x102)|(x103+x104));

    if (t23 != 40987U) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x105 = INT16_MAX;
	static uint32_t x108 = 14U;
	int64_t t24 = -7246LL;

    t24 = ((x105!=x106)|(x107+x108));

    if (t24 != 16237208613727929LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x109 = 90U;
	static volatile int64_t x111 = 354672999LL;
	int16_t x112 = INT16_MAX;
	int64_t t25 = 39181377215091LL;

    t25 = ((x109!=x110)|(x111+x112));

    if (t25 != 354705767LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x113 = UINT32_MAX;
	int16_t x114 = INT16_MIN;
	uint32_t x115 = UINT32_MAX;
	static int32_t x116 = -1;
	volatile uint32_t t26 = UINT32_MAX;

    t26 = ((x113!=x114)|(x115+x116));

    if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x117 = -1;
	static int32_t x118 = 461;
	uint64_t x119 = UINT64_MAX;
	uint8_t x120 = UINT8_MAX;
	static uint64_t t27 = 827410014LLU;

    t27 = ((x117!=x118)|(x119+x120));

    if (t27 != 255LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x122 = INT64_MIN;
	static volatile int16_t x124 = 1;
	int32_t t28 = -1913;

    t28 = ((x121!=x122)|(x123+x124));

    if (t28 != 49) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x125 = 2863234U;
	volatile int64_t x126 = 0LL;
	volatile uint32_t x127 = 164282596U;
	int16_t x128 = -5907;
	uint32_t t29 = 165083118U;

    t29 = ((x125!=x126)|(x127+x128));

    if (t29 != 164276689U) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x129 = 95562499LLU;
	int64_t x131 = INT64_MAX;

    t30 = ((x129!=x130)|(x131+x132));

    if (t30 != 9225948924565915801LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x135 = 1;
	volatile uint16_t x136 = 8118U;
	int32_t t31 = -744629;

    t31 = ((x133!=x134)|(x135+x136));

    if (t31 != 8119) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x137 = INT32_MIN;
	int16_t x138 = INT16_MIN;
	int64_t x139 = INT64_MIN;
	int32_t x140 = INT32_MAX;
	int64_t t32 = 70602026862291550LL;

    t32 = ((x137!=x138)|(x139+x140));

    if (t32 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x141 = -1;
	int8_t x142 = -55;
	uint16_t x143 = 4U;
	volatile int64_t x144 = 91LL;
	volatile int64_t t33 = 18810574419176762LL;

    t33 = ((x141!=x142)|(x143+x144));

    if (t33 != 95LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x145 = INT8_MAX;
	int16_t x146 = INT16_MAX;
	int8_t x147 = INT8_MAX;
	int16_t x148 = -1;

    t34 = ((x145!=x146)|(x147+x148));

    if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x153 = INT32_MIN;
	uint8_t x154 = 27U;
	int16_t x155 = INT16_MIN;
	volatile uint64_t x156 = 6799908319344185LLU;

    t35 = ((x153!=x154)|(x155+x156));

    if (t35 != 6799908319311417LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x157 = INT64_MIN;
	static int16_t x158 = 0;
	static int32_t x159 = INT32_MIN;
	uint32_t x160 = 1U;
	uint32_t t36 = 879082U;

    t36 = ((x157!=x158)|(x159+x160));

    if (t36 != 2147483649U) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x165 = 64U;
	int64_t x166 = INT64_MIN;
	static int16_t x167 = INT16_MIN;
	int32_t x168 = 96;
	static int32_t t37 = 2510;

    t37 = ((x165!=x166)|(x167+x168));

    if (t37 != -32671) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x170 = -9;
	volatile int32_t t38 = INT32_MAX;

    t38 = ((x169!=x170)|(x171+x172));

    if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x173 = -10;
	int32_t x175 = INT32_MIN;
	static uint8_t x176 = 3U;
	volatile int32_t t39 = -1698983;

    t39 = ((x173!=x174)|(x175+x176));

    if (t39 != -2147483645) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x177 = UINT64_MAX;
	int8_t x178 = 0;
	int8_t x179 = -1;
	volatile int32_t t40 = 150131;

    t40 = ((x177!=x178)|(x179+x180));

    if (t40 != 490399) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x181 = INT64_MIN;
	uint32_t x182 = 2U;
	uint16_t x184 = UINT16_MAX;
	volatile int32_t t41 = 14;

    t41 = ((x181!=x182)|(x183+x184));

    if (t41 != 65791) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x185 = INT16_MIN;
	static int8_t x186 = -1;
	uint8_t x187 = 1U;
	int64_t x188 = INT64_MIN;
	int64_t t42 = -888452LL;

    t42 = ((x185!=x186)|(x187+x188));

    if (t42 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint64_t x189 = UINT64_MAX;
	static volatile uint64_t x191 = 3LLU;
	uint32_t x192 = 21207U;
	volatile uint64_t t43 = 39904605LLU;

    t43 = ((x189!=x190)|(x191+x192));

    if (t43 != 21211LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x194 = INT64_MAX;
	int16_t x195 = 148;
	volatile int32_t t44 = 39417;

    t44 = ((x193!=x194)|(x195+x196));

    if (t44 != -403127783) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x197 = -1;
	int32_t x198 = -57;
	uint8_t x199 = 0U;
	int32_t t45 = 5112908;

    t45 = ((x197!=x198)|(x199+x200));

    if (t45 != -32767) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x201 = -2LL;
	uint64_t x202 = 24LLU;
	uint16_t x203 = 16U;
	uint64_t x204 = UINT64_MAX;
	static uint64_t t46 = 1949524103892120LLU;

    t46 = ((x201!=x202)|(x203+x204));

    if (t46 != 15LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x205 = 5941U;
	int8_t x206 = INT8_MAX;
	uint32_t x207 = UINT32_MAX;

    t47 = ((x205!=x206)|(x207+x208));

    if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x209 = -1LL;
	int16_t x211 = INT16_MIN;
	int64_t x212 = INT64_MAX;
	int64_t t48 = -426950484LL;

    t48 = ((x209!=x210)|(x211+x212));

    if (t48 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x213 = 0U;
	static int8_t x214 = 0;
	volatile uint16_t x215 = 2558U;
	int16_t x216 = INT16_MAX;
	volatile int32_t t49 = 171830;

    t49 = ((x213!=x214)|(x215+x216));

    if (t49 != 35325) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x218 = INT64_MAX;
	int32_t x219 = 3;
	static int32_t x220 = -8340904;
	volatile int32_t t50 = 821417;

    t50 = ((x217!=x218)|(x219+x220));

    if (t50 != -8340901) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x221 = INT32_MIN;
	uint32_t x222 = 3U;
	int64_t x223 = -50042658LL;

    t51 = ((x221!=x222)|(x223+x224));

    if (t51 != -50075425LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint16_t x225 = UINT16_MAX;
	static volatile int64_t x226 = -1LL;
	static uint8_t x227 = UINT8_MAX;
	volatile uint64_t x228 = UINT64_MAX;
	uint64_t t52 = 781937016455852643LLU;

    t52 = ((x225!=x226)|(x227+x228));

    if (t52 != 255LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x229 = 4691557;
	int64_t x230 = -10949LL;
	uint64_t x231 = 125LLU;
	int64_t x232 = -1560035445610LL;
	uint64_t t53 = 16703204228LLU;

    t53 = ((x229!=x230)|(x231+x232));

    if (t53 != 18446742513674106131LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x234 = INT64_MIN;
	static int8_t x235 = INT8_MAX;
	static int8_t x236 = INT8_MIN;
	static int32_t t54 = -385322019;

    t54 = ((x233!=x234)|(x235+x236));

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x238 = INT32_MIN;
	uint32_t x239 = 224U;
	static uint16_t x240 = 7U;
	uint32_t t55 = 4451U;

    t55 = ((x237!=x238)|(x239+x240));

    if (t55 != 231U) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x241 = 2;
	int32_t x242 = INT32_MIN;
	uint16_t x243 = 2U;

    t56 = ((x241!=x242)|(x243+x244));

    if (t56 != -1093) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x246 = -13;
	static volatile int16_t x247 = -127;
	int32_t x248 = INT32_MAX;
	static volatile int32_t t57 = 2;

    t57 = ((x245!=x246)|(x247+x248));

    if (t57 != 2147483521) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x251 = 7;
	uint8_t x252 = 0U;
	int32_t t58 = 2881;

    t58 = ((x249!=x250)|(x251+x252));

    if (t58 != 7) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x257 = 19161U;
	volatile int32_t x258 = INT32_MIN;
	int16_t x259 = -1;
	int64_t x260 = 2LL;
	volatile int64_t t59 = 107LL;

    t59 = ((x257!=x258)|(x259+x260));

    if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint64_t x261 = UINT64_MAX;
	uint32_t x263 = 1709196256U;
	uint8_t x264 = 28U;
	static uint32_t t60 = 4U;

    t60 = ((x261!=x262)|(x263+x264));

    if (t60 != 1709196285U) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x265 = INT64_MIN;
	int8_t x267 = 6;
	int32_t x268 = INT32_MIN;
	volatile int32_t t61 = 4929425;

    t61 = ((x265!=x266)|(x267+x268));

    if (t61 != -2147483641) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x269 = 18U;
	int32_t x270 = INT32_MAX;
	volatile uint16_t x271 = UINT16_MAX;
	int16_t x272 = 373;
	static int32_t t62 = -110262;

    t62 = ((x269!=x270)|(x271+x272));

    if (t62 != 65909) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x273 = INT8_MAX;
	int8_t x274 = 6;
	static int8_t x276 = 1;
	volatile int32_t t63 = -6;

    t63 = ((x273!=x274)|(x275+x276));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x282 = 6U;
	uint32_t x284 = UINT32_MAX;
	uint32_t t64 = UINT32_MAX;

    t64 = ((x281!=x282)|(x283+x284));

    if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x285 = -1;
	uint32_t x286 = 262723U;
	static int32_t x287 = INT32_MIN;
	int64_t t65 = -5980358LL;

    t65 = ((x285!=x286)|(x287+x288));

    if (t65 != -2147483615LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int8_t x289 = -18;
	static volatile uint64_t x290 = UINT64_MAX;
	int32_t x291 = INT32_MIN;
	static uint64_t x292 = 113LLU;

    t66 = ((x289!=x290)|(x291+x292));

    if (t66 != 18446744071562068081LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x293 = INT32_MAX;
	volatile int8_t x294 = -61;
	int8_t x295 = INT8_MIN;
	uint8_t x296 = UINT8_MAX;
	int32_t t67 = -457;

    t67 = ((x293!=x294)|(x295+x296));

    if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x301 = -1;
	int32_t x302 = INT32_MIN;
	int64_t t68 = -5LL;

    t68 = ((x301!=x302)|(x303+x304));

    if (t68 != -9223372036854775291LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x306 = UINT8_MAX;
	int8_t x307 = 7;
	int32_t x308 = INT32_MIN;
	static volatile int32_t t69 = 68;

    t69 = ((x305!=x306)|(x307+x308));

    if (t69 != -2147483641) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x313 = INT64_MAX;
	volatile int16_t x314 = 1;
	volatile int16_t x316 = INT16_MIN;
	static int64_t t70 = 457751542478LL;

    t70 = ((x313!=x314)|(x315+x316));

    if (t70 != -32769LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x317 = 1465447287478865LL;
	int32_t x318 = INT32_MIN;
	int64_t x319 = 0LL;
	volatile int64_t t71 = -20871680039171080LL;

    t71 = ((x317!=x318)|(x319+x320));

    if (t71 != 32767LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x322 = INT32_MIN;
	static int8_t x323 = -57;
	int16_t x324 = 0;
	volatile int32_t t72 = 663;

    t72 = ((x321!=x322)|(x323+x324));

    if (t72 != -57) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x326 = 6230U;
	int64_t x327 = INT64_MIN;
	uint16_t x328 = 1932U;
	volatile int64_t t73 = 38399LL;

    t73 = ((x325!=x326)|(x327+x328));

    if (t73 != -9223372036854773875LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x329 = INT32_MIN;
	static int32_t x330 = -1;
	static volatile int8_t x331 = INT8_MIN;
	uint32_t x332 = 29093091U;

    t74 = ((x329!=x330)|(x331+x332));

    if (t74 != 29092963U) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x337 = -2182635597588LL;
	static int32_t x338 = -1;
	int32_t x339 = INT32_MIN;
	uint32_t t75 = 41966952U;

    t75 = ((x337!=x338)|(x339+x340));

    if (t75 != 2147483675U) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x342 = 1;
	int32_t x344 = 116734281;
	uint64_t t76 = 3503676010872404844LLU;

    t76 = ((x341!=x342)|(x343+x344));

    if (t76 != 116734281LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x345 = 1U;
	int32_t x346 = INT32_MAX;
	static int64_t x347 = -1LL;
	static int16_t x348 = INT16_MIN;
	volatile int64_t t77 = 2481692619149496LL;

    t77 = ((x345!=x346)|(x347+x348));

    if (t77 != -32769LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x349 = INT8_MIN;
	int16_t x351 = 0;
	int8_t x352 = -1;
	int32_t t78 = -60024971;

    t78 = ((x349!=x350)|(x351+x352));

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x358 = 4695U;
	volatile int8_t x359 = INT8_MIN;
	volatile uint64_t x360 = 145416795LLU;
	uint64_t t79 = 3559509LLU;

    t79 = ((x357!=x358)|(x359+x360));

    if (t79 != 145416667LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x361 = -1;
	static int8_t x362 = 12;
	static int8_t x364 = INT8_MIN;

    t80 = ((x361!=x362)|(x363+x364));

    if (t80 != 1413U) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int8_t x369 = INT8_MIN;
	volatile int8_t x370 = INT8_MAX;
	static uint32_t x371 = 252U;
	static int16_t x372 = -1;
	uint32_t t81 = 3207U;

    t81 = ((x369!=x370)|(x371+x372));

    if (t81 != 251U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x373 = 480LLU;
	static volatile int16_t x374 = INT16_MAX;
	int8_t x376 = -1;
	int32_t t82 = 65111220;

    t82 = ((x373!=x374)|(x375+x376));

    if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x377 = INT32_MAX;
	int32_t x378 = 633167059;
	static uint32_t x379 = 401U;
	int16_t x380 = -90;
	uint32_t t83 = 1738897U;

    t83 = ((x377!=x378)|(x379+x380));

    if (t83 != 311U) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint64_t x381 = UINT64_MAX;
	int32_t x382 = INT32_MIN;
	int8_t x383 = -1;
	int8_t x384 = -51;
	int32_t t84 = -401040;

    t84 = ((x381!=x382)|(x383+x384));

    if (t84 != -51) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int16_t x387 = 148;
	int16_t x388 = -32;

    t85 = ((x385!=x386)|(x387+x388));

    if (t85 != 117) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x389 = 486U;
	int32_t x390 = -5923;
	uint32_t x391 = 13183654U;
	uint64_t x392 = 21672614555LLU;
	uint64_t t86 = 112798844781LLU;

    t86 = ((x389!=x390)|(x391+x392));

    if (t86 != 21685798209LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x393 = UINT64_MAX;
	static uint8_t x396 = 118U;
	volatile int64_t t87 = 63LL;

    t87 = ((x393!=x394)|(x395+x396));

    if (t87 != -9223372036854775689LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x397 = 79416;
	static uint8_t x398 = UINT8_MAX;
	static uint64_t x399 = UINT64_MAX;
	static volatile uint8_t x400 = 1U;
	uint64_t t88 = 309056909479775LLU;

    t88 = ((x397!=x398)|(x399+x400));

    if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x401 = 2091U;
	volatile uint32_t x402 = 11120390U;
	volatile int8_t x403 = -1;
	volatile int8_t x404 = INT8_MAX;
	volatile int32_t t89 = -81772438;

    t89 = ((x401!=x402)|(x403+x404));

    if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x405 = 3U;
	uint8_t x406 = UINT8_MAX;
	int64_t x407 = 2239223537822LL;
	volatile int64_t t90 = 246796LL;

    t90 = ((x405!=x406)|(x407+x408));

    if (t90 != 2239223589027LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x411 = INT32_MIN;
	int32_t t91 = 40387;

    t91 = ((x409!=x410)|(x411+x412));

    if (t91 != -2147483533) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x413 = 13958U;
	uint8_t x414 = 0U;
	int8_t x415 = INT8_MIN;
	static volatile int32_t t92 = -3;

    t92 = ((x413!=x414)|(x415+x416));

    if (t92 != -139) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x421 = INT32_MIN;
	int64_t x422 = 1LL;
	static int64_t x424 = -1LL;
	static int64_t t93 = 5449258610168LL;

    t93 = ((x421!=x422)|(x423+x424));

    if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x429 = 47U;
	int64_t x430 = INT64_MIN;
	int64_t x431 = -1LL;
	int16_t x432 = 8323;
	volatile int64_t t94 = 13441018004591LL;

    t94 = ((x429!=x430)|(x431+x432));

    if (t94 != 8323LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x433 = -1;
	uint16_t x434 = 11256U;
	int8_t x435 = INT8_MAX;
	uint16_t x436 = 1996U;
	int32_t t95 = -440747;

    t95 = ((x433!=x434)|(x435+x436));

    if (t95 != 2123) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int32_t x437 = -3128898;
	volatile int32_t x438 = -1;
	int64_t x439 = -1LL;
	volatile int32_t x440 = 24118;
	static volatile int64_t t96 = 249816493316063055LL;

    t96 = ((x437!=x438)|(x439+x440));

    if (t96 != 24117LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x441 = -3;
	volatile uint32_t x442 = 0U;
	int16_t x443 = 1686;
	volatile int16_t x444 = INT16_MAX;
	int32_t t97 = 1;

    t97 = ((x441!=x442)|(x443+x444));

    if (t97 != 34453) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint32_t x445 = 15U;
	uint8_t x446 = 1U;
	int32_t x447 = INT32_MAX;
	uint64_t x448 = 5530LLU;

    t98 = ((x445!=x446)|(x447+x448));

    if (t98 != 2147489177LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x449 = -1;
	int16_t x450 = INT16_MAX;
	uint8_t x452 = 28U;
	int32_t t99 = 36;

    t99 = ((x449!=x450)|(x451+x452));

    if (t99 != 51) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x454 = INT32_MIN;
	uint16_t x455 = 6U;
	int64_t x456 = 2916658LL;
	int64_t t100 = -3946LL;

    t100 = ((x453!=x454)|(x455+x456));

    if (t100 != 2916665LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x458 = 3U;
	uint8_t x459 = 7U;
	int32_t x460 = -1;
	int32_t t101 = 19810545;

    t101 = ((x457!=x458)|(x459+x460));

    if (t101 != 7) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x461 = INT32_MAX;
	int32_t x463 = INT32_MIN;
	volatile int64_t x464 = -8LL;
	static volatile int64_t t102 = -8760617871LL;

    t102 = ((x461!=x462)|(x463+x464));

    if (t102 != -2147483655LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x469 = INT16_MIN;
	static int16_t x471 = -1;
	int32_t x472 = -1;
	int32_t t103 = 108450;

    t103 = ((x469!=x470)|(x471+x472));

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x474 = 786LLU;
	static volatile int32_t t104 = 100791339;

    t104 = ((x473!=x474)|(x475+x476));

    if (t104 != -32769) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x477 = -267023854;
	int16_t x478 = 165;
	uint64_t x479 = 32713190967LLU;
	volatile uint16_t x480 = 1992U;
	uint64_t t105 = 61383LLU;

    t105 = ((x477!=x478)|(x479+x480));

    if (t105 != 32713192959LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x481 = INT64_MAX;
	static uint32_t t106 = 1272053576U;

    t106 = ((x481!=x482)|(x483+x484));

    if (t106 != 443267U) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x485 = INT16_MIN;
	uint32_t x486 = UINT32_MAX;
	uint16_t x487 = 0U;
	static int8_t x488 = INT8_MIN;
	int32_t t107 = 518012;

    t107 = ((x485!=x486)|(x487+x488));

    if (t107 != -127) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x489 = -1;
	int32_t x490 = INT32_MIN;
	int64_t x492 = -2006228992LL;

    t108 = ((x489!=x490)|(x491+x492));

    if (t108 != -4153712639LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x495 = -1;
	uint64_t x496 = 1996216599399LLU;
	static volatile uint64_t t109 = 3345468LLU;

    t109 = ((x493!=x494)|(x495+x496));

    if (t109 != 1996216599398LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x500 = -1;
	volatile int32_t t110 = -691134;

    t110 = ((x497!=x498)|(x499+x500));

    if (t110 != -11) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x505 = 4301U;
	static int32_t x507 = 928213570;
	int32_t x508 = INT32_MIN;
	volatile int32_t t111 = -1032735869;

    t111 = ((x505!=x506)|(x507+x508));

    if (t111 != -1219270077) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x509 = INT64_MIN;
	volatile uint32_t x510 = UINT32_MAX;
	uint64_t x511 = 6029LLU;
	int64_t x512 = INT64_MIN;
	uint64_t t112 = 133290536LLU;

    t112 = ((x509!=x510)|(x511+x512));

    if (t112 != 9223372036854781837LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x514 = 788721;
	int8_t x515 = -1;
	static int8_t x516 = -1;
	volatile int32_t t113 = -2814;

    t113 = ((x513!=x514)|(x515+x516));

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x517 = -1;
	uint32_t x519 = 127987U;
	static volatile int16_t x520 = 250;
	static volatile uint32_t t114 = 425233U;

    t114 = ((x517!=x518)|(x519+x520));

    if (t114 != 128237U) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x521 = 24U;
	int32_t x522 = INT32_MIN;
	static int8_t x524 = -29;
	volatile int32_t t115 = -8;

    t115 = ((x521!=x522)|(x523+x524));

    if (t115 != -29) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x530 = 27300362U;
	volatile int16_t x532 = INT16_MAX;
	volatile int32_t t116 = 5810990;

    t116 = ((x529!=x530)|(x531+x532));

    if (t116 != 32733) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint32_t x533 = UINT32_MAX;
	uint32_t x534 = UINT32_MAX;
	int16_t x535 = INT16_MAX;
	int16_t x536 = -10;
	volatile int32_t t117 = -7;

    t117 = ((x533!=x534)|(x535+x536));

    if (t117 != 32757) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x537 = INT32_MIN;
	int64_t x538 = -108LL;
	int16_t x539 = 22;
	int32_t x540 = INT32_MIN;

    t118 = ((x537!=x538)|(x539+x540));

    if (t118 != -2147483625) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x541 = 228333781105823848LLU;
	static volatile int32_t x542 = INT32_MIN;
	int32_t t119 = -289933;

    t119 = ((x541!=x542)|(x543+x544));

    if (t119 != -2147483647) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x545 = 13;
	int32_t x547 = INT32_MAX;
	int32_t t120 = 114502;

    t120 = ((x545!=x546)|(x547+x548));

    if (t120 != 2147483519) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x549 = INT64_MIN;
	uint32_t x550 = UINT32_MAX;
	int64_t x551 = INT64_MAX;
	int64_t t121 = -36653LL;

    t121 = ((x549!=x550)|(x551+x552));

    if (t121 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x553 = INT16_MIN;
	uint16_t x554 = UINT16_MAX;
	volatile int8_t x555 = 4;
	uint8_t x556 = UINT8_MAX;

    t122 = ((x553!=x554)|(x555+x556));

    if (t122 != 259) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x557 = -1;
	int8_t x558 = -1;
	static volatile int64_t x559 = 261519067661201280LL;
	static int8_t x560 = 29;
	int64_t t123 = 122692032LL;

    t123 = ((x557!=x558)|(x559+x560));

    if (t123 != 261519067661201309LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x565 = -1;
	static int16_t x566 = -802;
	uint64_t x567 = 23LLU;
	volatile uint64_t t124 = 23675312990LLU;

    t124 = ((x565!=x566)|(x567+x568));

    if (t124 != 3163811LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x570 = INT64_MAX;
	int16_t x571 = -1;
	int8_t x572 = -1;

    t125 = ((x569!=x570)|(x571+x572));

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int64_t x574 = INT64_MIN;
	int8_t x575 = INT8_MIN;
	static int16_t x576 = INT16_MIN;

    t126 = ((x573!=x574)|(x575+x576));

    if (t126 != -32895) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x577 = 3319127661LLU;
	volatile uint16_t x578 = 63U;
	uint16_t x579 = 1565U;
	uint16_t x580 = 3U;
	static int32_t t127 = -30139884;

    t127 = ((x577!=x578)|(x579+x580));

    if (t127 != 1569) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x581 = -1;
	int32_t x582 = -1;
	int8_t x583 = INT8_MIN;
	uint8_t x584 = UINT8_MAX;
	static int32_t t128 = -18697037;

    t128 = ((x581!=x582)|(x583+x584));

    if (t128 != 127) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x593 = INT64_MAX;
	static int16_t x594 = -1;
	int32_t x595 = INT32_MAX;
	static volatile int16_t x596 = -213;
	volatile int32_t t129 = -61198;

    t129 = ((x593!=x594)|(x595+x596));

    if (t129 != 2147483435) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x597 = -897758LL;
	uint64_t x599 = UINT64_MAX;
	volatile uint16_t x600 = UINT16_MAX;
	uint64_t t130 = 49296LLU;

    t130 = ((x597!=x598)|(x599+x600));

    if (t130 != 65535LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x601 = INT64_MIN;
	static volatile int16_t x602 = INT16_MIN;
	int8_t x603 = 5;
	int32_t x604 = 1;
	static int32_t t131 = -90313603;

    t131 = ((x601!=x602)|(x603+x604));

    if (t131 != 7) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x605 = 1U;
	int64_t x606 = 255652432938LL;
	int64_t x607 = INT64_MIN;
	uint64_t x608 = 31501785LLU;
	volatile uint64_t t132 = 9133280860492448LLU;

    t132 = ((x605!=x606)|(x607+x608));

    if (t132 != 9223372036886277593LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x609 = 75U;
	uint64_t x610 = UINT64_MAX;
	int8_t x611 = -1;
	static uint32_t x612 = 63476311U;
	static volatile uint32_t t133 = 378599U;

    t133 = ((x609!=x610)|(x611+x612));

    if (t133 != 63476311U) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint32_t x613 = UINT32_MAX;
	uint8_t x615 = UINT8_MAX;
	uint64_t x616 = 33863122927LLU;
	uint64_t t134 = 1632856867LLU;

    t134 = ((x613!=x614)|(x615+x616));

    if (t134 != 33863123183LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint16_t x617 = 10639U;
	uint64_t x618 = 6257234174788254LLU;
	static int16_t x619 = INT16_MIN;
	volatile int32_t t135 = -48767;

    t135 = ((x617!=x618)|(x619+x620));

    if (t135 != -32729) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x622 = INT8_MAX;
	int64_t t136 = 32630LL;

    t136 = ((x621!=x622)|(x623+x624));

    if (t136 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int16_t x625 = INT16_MIN;
	int8_t x626 = INT8_MAX;
	int32_t x627 = -24603;
	uint8_t x628 = 26U;

    t137 = ((x625!=x626)|(x627+x628));

    if (t137 != -24577) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x629 = -4;
	int32_t x630 = INT32_MIN;
	int64_t x631 = -1LL;
	volatile int16_t x632 = 154;
	int64_t t138 = 6884LL;

    t138 = ((x629!=x630)|(x631+x632));

    if (t138 != 153LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x633 = 249;
	volatile int64_t x634 = INT64_MIN;
	int64_t x636 = -1LL;
	volatile int64_t t139 = 292121645123519626LL;

    t139 = ((x633!=x634)|(x635+x636));

    if (t139 != 13LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x637 = UINT64_MAX;
	volatile int64_t x638 = -8133736675678629LL;
	int32_t x639 = INT32_MIN;
	int32_t t140 = 38;

    t140 = ((x637!=x638)|(x639+x640));

    if (t140 != -2147483521) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x641 = INT8_MIN;
	int8_t x642 = INT8_MIN;
	uint32_t x643 = UINT32_MAX;
	int8_t x644 = INT8_MAX;
	static volatile uint32_t t141 = 39U;

    t141 = ((x641!=x642)|(x643+x644));

    if (t141 != 126U) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x645 = 222788418LLU;
	int32_t x646 = INT32_MAX;
	volatile uint64_t x648 = UINT64_MAX;
	static volatile uint64_t t142 = 2797429041959239LLU;

    t142 = ((x645!=x646)|(x647+x648));

    if (t142 != 6487LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x649 = 15U;
	int64_t x650 = -435675LL;
	uint16_t x651 = 584U;
	static int64_t t143 = -218221915249LL;

    t143 = ((x649!=x650)|(x651+x652));

    if (t143 != -9223372036854775223LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint32_t x653 = 38U;
	int16_t x654 = 38;
	int64_t x655 = INT64_MIN;
	volatile int64_t t144 = -522086958630LL;

    t144 = ((x653!=x654)|(x655+x656));

    if (t144 != -9223372036854775650LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x657 = 0;
	static volatile int64_t x658 = INT64_MAX;
	volatile int16_t x659 = INT16_MAX;
	int64_t x660 = 828999475712718446LL;
	static int64_t t145 = 2LL;

    t145 = ((x657!=x658)|(x659+x660));

    if (t145 != 828999475712751213LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x661 = 2;
	uint32_t x663 = 8901224U;
	uint16_t x664 = 3473U;
	uint32_t t146 = 0U;

    t146 = ((x661!=x662)|(x663+x664));

    if (t146 != 8904697U) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x665 = 166071194U;
	uint32_t x666 = 117832705U;
	static volatile uint64_t x667 = 469374737752390LLU;
	int8_t x668 = -1;
	uint64_t t147 = 267675591725443906LLU;

    t147 = ((x665!=x666)|(x667+x668));

    if (t147 != 469374737752389LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x670 = INT32_MAX;
	int32_t x671 = INT32_MIN;
	static uint16_t x672 = UINT16_MAX;

    t148 = ((x669!=x670)|(x671+x672));

    if (t148 != -2147418113) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x673 = INT16_MAX;
	static int64_t x674 = INT64_MAX;
	volatile uint16_t x676 = 1018U;
	volatile int32_t t149 = 7699;

    t149 = ((x673!=x674)|(x675+x676));

    if (t149 != -31749) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x677 = UINT32_MAX;
	static int32_t x679 = INT32_MAX;
	volatile uint32_t x680 = 37156U;

    t150 = ((x677!=x678)|(x679+x680));

    if (t150 != 2147520803U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x681 = 8U;
	volatile uint64_t x683 = 391LLU;
	int16_t x684 = INT16_MAX;

    t151 = ((x681!=x682)|(x683+x684));

    if (t151 != 33159LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x685 = 10491162LL;
	static int8_t x686 = 58;
	volatile int64_t x687 = -1LL;
	int64_t x688 = INT64_MAX;
	volatile int64_t t152 = INT64_MAX;

    t152 = ((x685!=x686)|(x687+x688));

    if (t152 != INT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x689 = -97689324LL;
	int8_t x690 = INT8_MIN;
	static uint16_t x691 = 27U;
	uint16_t x692 = 4U;
	int32_t t153 = -3504312;

    t153 = ((x689!=x690)|(x691+x692));

    if (t153 != 31) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x695 = -2;
	int64_t x696 = 18930614258LL;
	volatile int64_t t154 = 5403874LL;

    t154 = ((x693!=x694)|(x695+x696));

    if (t154 != 18930614257LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x697 = -819218215925LL;
	uint16_t x698 = UINT16_MAX;
	static volatile int32_t t155 = -1514790;

    t155 = ((x697!=x698)|(x699+x700));

    if (t155 != -2147483647) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x703 = -21;
	int16_t x704 = -1;
	volatile int32_t t156 = 46149146;

    t156 = ((x701!=x702)|(x703+x704));

    if (t156 != -21) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x705 = INT16_MIN;
	static int16_t x707 = INT16_MIN;
	static int32_t x708 = INT32_MAX;
	int32_t t157 = -230251;

    t157 = ((x705!=x706)|(x707+x708));

    if (t157 != 2147450879) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x709 = -1LL;
	int8_t x710 = INT8_MIN;
	uint64_t x711 = 14913520LLU;
	volatile int64_t x712 = INT64_MAX;

    t158 = ((x709!=x710)|(x711+x712));

    if (t158 != 9223372036869689327LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x722 = INT64_MIN;
	uint8_t x723 = 38U;
	static uint8_t x724 = 3U;
	int32_t t159 = -12;

    t159 = ((x721!=x722)|(x723+x724));

    if (t159 != 41) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x726 = UINT64_MAX;
	volatile int32_t x728 = 1099;
	static int32_t t160 = -1394;

    t160 = ((x725!=x726)|(x727+x728));

    if (t160 != 1595) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x729 = INT16_MIN;
	int16_t x731 = INT16_MIN;
	static volatile uint16_t x732 = UINT16_MAX;
	int32_t t161 = -5;

    t161 = ((x729!=x730)|(x731+x732));

    if (t161 != 32767) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x734 = INT8_MAX;
	uint32_t x735 = 47U;
	int16_t x736 = INT16_MIN;
	volatile uint32_t t162 = 1277U;

    t162 = ((x733!=x734)|(x735+x736));

    if (t162 != 4294934575U) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x737 = 0U;
	int32_t x738 = INT32_MAX;
	int16_t x739 = -25;
	uint8_t x740 = 0U;
	volatile int32_t t163 = -745;

    t163 = ((x737!=x738)|(x739+x740));

    if (t163 != -25) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x741 = 3621200LLU;
	uint64_t x742 = UINT64_MAX;
	int16_t x743 = INT16_MIN;
	int16_t x744 = INT16_MIN;

    t164 = ((x741!=x742)|(x743+x744));

    if (t164 != -65535) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x745 = -90559948666LL;
	int64_t x746 = INT64_MIN;
	static int16_t x747 = INT16_MIN;

    t165 = ((x745!=x746)|(x747+x748));

    if (t165 != 4294960447U) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x749 = INT8_MIN;
	static volatile int8_t x750 = -14;
	volatile uint32_t x751 = 1874353997U;
	volatile int32_t x752 = INT32_MIN;
	volatile uint32_t t166 = 11792U;

    t166 = ((x749!=x750)|(x751+x752));

    if (t166 != 4021837645U) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x753 = INT16_MIN;
	volatile int32_t x754 = INT32_MIN;
	volatile int16_t x755 = INT16_MIN;
	static volatile int32_t t167 = 315;

    t167 = ((x753!=x754)|(x755+x756));

    if (t167 != -37903) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x757 = 596914383503LL;
	int64_t x759 = -224LL;
	int8_t x760 = INT8_MAX;
	int64_t t168 = -9971379184LL;

    t168 = ((x757!=x758)|(x759+x760));

    if (t168 != -97LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x761 = 2U;
	int32_t x762 = INT32_MAX;
	int64_t x764 = 20LL;
	volatile int64_t t169 = 52549LL;

    t169 = ((x761!=x762)|(x763+x764));

    if (t169 != 7695LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x765 = INT16_MAX;
	volatile int64_t x767 = -70827702346509LL;
	static uint16_t x768 = 0U;
	static int64_t t170 = -15286719558402459LL;

    t170 = ((x765!=x766)|(x767+x768));

    if (t170 != -70827702346509LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x769 = INT8_MIN;
	int32_t x770 = INT32_MIN;
	uint8_t x771 = 40U;
	static int8_t x772 = INT8_MIN;
	int32_t t171 = -6;

    t171 = ((x769!=x770)|(x771+x772));

    if (t171 != -87) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x773 = INT64_MIN;
	uint16_t x774 = UINT16_MAX;
	int16_t x775 = INT16_MIN;
	int16_t x776 = INT16_MIN;
	int32_t t172 = -52586840;

    t172 = ((x773!=x774)|(x775+x776));

    if (t172 != -65535) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile uint16_t x777 = 3763U;
	int64_t x778 = -42LL;
	int16_t x780 = INT16_MIN;

    t173 = ((x777!=x778)|(x779+x780));

    if (t173 != -32819) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x781 = INT8_MIN;
	static uint32_t x782 = UINT32_MAX;
	static volatile int16_t x783 = -5;
	int32_t x784 = -396078;
	int32_t t174 = 1;

    t174 = ((x781!=x782)|(x783+x784));

    if (t174 != -396083) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x785 = 1;
	int64_t x786 = -1LL;
	volatile int32_t x787 = 12518846;
	static volatile int32_t t175 = 5;

    t175 = ((x785!=x786)|(x787+x788));

    if (t175 != 12518867) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x789 = 7834332625550LL;
	int32_t x790 = 118937;
	volatile uint64_t x791 = UINT64_MAX;
	volatile uint64_t x792 = 674LLU;
	uint64_t t176 = 2LLU;

    t176 = ((x789!=x790)|(x791+x792));

    if (t176 != 673LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x797 = 68U;
	uint32_t x798 = 7394386U;
	int16_t x799 = -2;
	int8_t x800 = 2;
	static volatile int32_t t177 = 6449004;

    t177 = ((x797!=x798)|(x799+x800));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x801 = 2411U;
	volatile int16_t x802 = -14;
	static volatile int8_t x803 = INT8_MIN;
	uint8_t x804 = 7U;
	int32_t t178 = 94868;

    t178 = ((x801!=x802)|(x803+x804));

    if (t178 != -121) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x805 = INT64_MIN;
	uint8_t x806 = 1U;
	volatile int64_t x807 = 2247LL;
	uint16_t x808 = 241U;
	static int64_t t179 = -838LL;

    t179 = ((x805!=x806)|(x807+x808));

    if (t179 != 2489LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x809 = INT32_MAX;
	int32_t x810 = 5471498;
	uint16_t x811 = 1647U;
	int8_t x812 = INT8_MIN;

    t180 = ((x809!=x810)|(x811+x812));

    if (t180 != 1519) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x813 = INT32_MIN;
	int16_t x814 = INT16_MIN;
	uint8_t x815 = UINT8_MAX;
	uint32_t x816 = UINT32_MAX;
	uint32_t t181 = 4212682U;

    t181 = ((x813!=x814)|(x815+x816));

    if (t181 != 255U) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x818 = -1;
	volatile int16_t x819 = -1;
	int32_t x820 = -8043;
	int32_t t182 = -129875;

    t182 = ((x817!=x818)|(x819+x820));

    if (t182 != -8044) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint64_t x821 = 4572LLU;
	volatile uint32_t x823 = UINT32_MAX;
	volatile uint16_t x824 = 384U;
	static volatile uint32_t t183 = 1000U;

    t183 = ((x821!=x822)|(x823+x824));

    if (t183 != 383U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x829 = UINT16_MAX;
	uint8_t x830 = 6U;
	static uint16_t x831 = 0U;
	int16_t x832 = -1;
	int32_t t184 = -916726;

    t184 = ((x829!=x830)|(x831+x832));

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x837 = INT16_MIN;
	int8_t x838 = INT8_MIN;
	static uint64_t x839 = 227064LLU;
	int8_t x840 = -6;
	uint64_t t185 = 45006LLU;

    t185 = ((x837!=x838)|(x839+x840));

    if (t185 != 227059LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint16_t x845 = 1U;
	int64_t x846 = -1LL;
	int64_t x847 = INT64_MIN;
	volatile uint64_t x848 = 329LLU;

    t186 = ((x845!=x846)|(x847+x848));

    if (t186 != 9223372036854776137LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x849 = -1;
	uint64_t x850 = 5809LLU;
	int8_t x851 = INT8_MIN;
	int32_t x852 = INT32_MAX;

    t187 = ((x849!=x850)|(x851+x852));

    if (t187 != 2147483519) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x853 = 1U;
	uint64_t x854 = 3LLU;
	static uint64_t x855 = 1859927609LLU;
	volatile int32_t x856 = -828695370;
	uint64_t t188 = 272526998LLU;

    t188 = ((x853!=x854)|(x855+x856));

    if (t188 != 1031232239LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x858 = INT8_MIN;
	static int16_t x859 = INT16_MIN;
	static volatile int32_t x860 = 439520;
	volatile int32_t t189 = 8235526;

    t189 = ((x857!=x858)|(x859+x860));

    if (t189 != 406753) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x861 = -1;
	int16_t x862 = -3785;

    t190 = ((x861!=x862)|(x863+x864));

    if (t190 != 32639) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint16_t x865 = 1236U;
	volatile int8_t x867 = 0;
	uint16_t x868 = 13662U;
	int32_t t191 = 25913811;

    t191 = ((x865!=x866)|(x867+x868));

    if (t191 != 13663) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x870 = INT16_MIN;
	int8_t x871 = 0;
	volatile int16_t x872 = INT16_MIN;
	int32_t t192 = 1;

    t192 = ((x869!=x870)|(x871+x872));

    if (t192 != -32767) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x873 = INT8_MIN;
	uint64_t x874 = 9LLU;
	volatile uint64_t x875 = UINT64_MAX;
	int64_t x876 = -40744821938LL;
	uint64_t t193 = 3038335081058LLU;

    t193 = ((x873!=x874)|(x875+x876));

    if (t193 != 18446744032964729677LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x877 = INT32_MIN;
	int32_t x878 = INT32_MIN;
	uint8_t x879 = 3U;
	int64_t x880 = INT64_MIN;
	volatile int64_t t194 = -17150442864043LL;

    t194 = ((x877!=x878)|(x879+x880));

    if (t194 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x881 = INT8_MAX;
	uint64_t x882 = 7413799815200LLU;
	static volatile int8_t x883 = -1;
	int64_t t195 = 56356461696936661LL;

    t195 = ((x881!=x882)|(x883+x884));

    if (t195 != -1LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x887 = 1U;
	static volatile int8_t x888 = INT8_MIN;
	int32_t t196 = 7267322;

    t196 = ((x885!=x886)|(x887+x888));

    if (t196 != -127) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint16_t x889 = 3328U;
	uint16_t x890 = 3U;
	int64_t x891 = 105294LL;
	uint64_t x892 = 65509023LLU;
	static volatile uint64_t t197 = 6696682962LLU;

    t197 = ((x889!=x890)|(x891+x892));

    if (t197 != 65614317LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x894 = INT64_MAX;
	uint16_t x895 = UINT16_MAX;
	int16_t x896 = -120;

    t198 = ((x893!=x894)|(x895+x896));

    if (t198 != 65415) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x897 = -1LL;
	volatile int64_t x898 = -398735508794459LL;
	int64_t x899 = INT64_MIN;
	uint32_t x900 = 3996U;

    t199 = ((x897!=x898)|(x899+x900));

    if (t199 != -9223372036854771811LL) { NG(); } else { ; }
	
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

