
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

int16_t x1 = INT16_MIN;
volatile int64_t x5 = INT64_MIN;
int32_t x7 = INT32_MAX;
uint32_t x8 = 2813709U;
volatile uint32_t x10 = 84U;
int64_t x12 = -1LL;
int8_t x16 = -16;
int8_t x25 = -5;
volatile uint16_t x27 = UINT16_MAX;
int64_t x28 = INT64_MIN;
volatile int32_t x30 = INT32_MIN;
uint8_t x31 = 7U;
static int32_t t9 = INT32_MAX;
volatile int16_t x49 = 1190;
uint16_t x54 = 13844U;
int16_t x61 = -1;
volatile uint64_t x62 = UINT64_MAX;
uint16_t x64 = 109U;
static int16_t x67 = 30;
volatile int16_t x69 = -1;
static volatile int32_t t14 = -83259;
int32_t x79 = INT32_MAX;
int64_t x80 = -1LL;
int64_t t16 = -2475311395234LL;
volatile uint64_t t17 = 6388724780956272962LLU;
uint16_t x86 = UINT16_MAX;
static int16_t x90 = 418;
int64_t x94 = INT64_MAX;
int32_t x95 = INT32_MIN;
int32_t t20 = -1147759;
uint32_t x103 = 3314U;
volatile uint32_t t23 = 225591728U;
static int8_t x110 = INT8_MIN;
int16_t x112 = -1;
static uint16_t x116 = 370U;
int64_t x117 = INT64_MIN;
static int16_t x118 = INT16_MAX;
static int16_t x124 = -1;
static volatile uint8_t x127 = 5U;
int16_t x141 = 0;
volatile uint32_t t33 = 7499U;
int16_t x166 = -1;
int8_t x168 = INT8_MIN;
static int32_t t38 = 207796789;
int16_t x171 = INT16_MIN;
static uint8_t x174 = 5U;
volatile int64_t t40 = INT64_MIN;
int64_t x177 = INT64_MAX;
int32_t t41 = 432;
volatile int32_t x181 = 1;
uint16_t x186 = 60U;
int64_t x187 = INT64_MIN;
int32_t x188 = 355525;
volatile int32_t t44 = 24;
int8_t x195 = INT8_MIN;
int64_t x203 = INT64_MAX;
uint32_t x210 = UINT32_MAX;
static uint32_t x216 = 1U;
int16_t x217 = -1;
int64_t x221 = -1LL;
volatile int32_t x229 = INT32_MIN;
int32_t x235 = -1;
int32_t t56 = 51;
volatile int32_t t57 = 989916;
static uint16_t x251 = UINT16_MAX;
int64_t x258 = -2551039LL;
static int32_t x262 = INT32_MIN;
int64_t x265 = INT64_MAX;
uint64_t x274 = 12513323631886795LLU;
uint32_t x280 = 254U;
volatile uint32_t t68 = 49250U;
int32_t x292 = INT32_MIN;
static volatile uint32_t x297 = 12973876U;
int8_t x307 = INT8_MIN;
static volatile int64_t x309 = INT64_MAX;
static volatile uint32_t x311 = 436623U;
volatile int8_t x320 = INT8_MIN;
volatile int32_t t76 = -1;
int32_t x322 = -1;
static volatile int32_t t79 = -22;
uint16_t x341 = 2U;
int16_t x351 = -1;
int32_t t82 = -1;
static volatile int32_t t83 = -19471;
volatile uint8_t x363 = 2U;
int8_t x368 = INT8_MAX;
volatile int64_t x372 = -1LL;
volatile int32_t t90 = 99;
volatile int64_t x392 = INT64_MAX;
static int64_t t91 = INT64_MAX;
static int32_t x397 = 1595232;
static uint64_t x417 = UINT64_MAX;
int16_t x420 = INT16_MAX;
int32_t t97 = 0;
int64_t x421 = INT64_MAX;
int16_t x431 = -1;
uint64_t x432 = 543868566225LLU;
int32_t t101 = -16071;
uint16_t x441 = UINT16_MAX;
int32_t x445 = 3731679;
static int32_t x454 = INT32_MIN;
volatile int32_t t104 = -57823693;
int64_t x466 = INT64_MAX;
static int16_t x474 = INT16_MIN;
int16_t x487 = -1;
uint16_t x488 = 1020U;
volatile int32_t t112 = -3424;
int64_t x500 = INT64_MIN;
int8_t x504 = -1;
static uint16_t x511 = 109U;
static volatile uint16_t x514 = 1U;
static int32_t x516 = INT32_MIN;
volatile int32_t t118 = INT32_MIN;
uint64_t x519 = 46LLU;
int16_t x526 = -1;
uint32_t x527 = UINT32_MAX;
uint64_t x528 = 10981557861125912LLU;
volatile uint16_t x529 = UINT16_MAX;
static uint8_t x530 = 56U;
int32_t x538 = INT32_MAX;
volatile int64_t x541 = INT64_MIN;
int8_t x542 = INT8_MAX;
int8_t x547 = INT8_MAX;
volatile int16_t x556 = 0;
int64_t x566 = INT64_MIN;
int64_t x575 = -375909070764412469LL;
static int64_t t130 = -12592LL;
int8_t x587 = INT8_MIN;
int32_t t132 = 82;
static int32_t x589 = 1984;
static int32_t x594 = 519207;
int16_t x596 = 16;
int32_t x598 = INT32_MIN;
uint8_t x599 = 28U;
volatile int8_t x603 = INT8_MIN;
uint8_t x607 = 0U;
int64_t x609 = 2217975637135046865LL;
uint16_t x610 = UINT16_MAX;
int64_t x611 = INT64_MAX;
int64_t x615 = INT64_MAX;
volatile int64_t x616 = INT64_MIN;
static volatile int16_t x624 = -5;
int32_t x625 = INT32_MAX;
uint16_t x629 = 15980U;
int64_t x638 = 22307817721LL;
int8_t x641 = INT8_MIN;
static volatile int32_t t145 = -69618;
uint32_t x650 = 50948U;
uint32_t x653 = UINT32_MAX;
int8_t x654 = -1;
int32_t x656 = -2;
uint32_t x662 = 7910067U;
static int16_t x674 = 1;
int16_t x680 = INT16_MIN;
static uint32_t x681 = 1815259022U;
int8_t x684 = INT8_MIN;
int32_t x687 = INT32_MAX;
uint16_t x691 = 1U;
uint32_t x692 = 76U;
volatile int32_t t157 = 0;
static uint32_t x706 = 3U;
static uint16_t x708 = UINT16_MAX;
volatile int64_t x710 = INT64_MIN;
volatile int8_t x711 = INT8_MIN;
uint64_t x712 = UINT64_MAX;
uint8_t x716 = 3U;
uint8_t x719 = UINT8_MAX;
uint16_t x724 = UINT16_MAX;
int32_t x726 = -1;
int64_t t164 = -4021697LL;
int32_t x743 = INT32_MAX;
int8_t x748 = INT8_MAX;
uint8_t x749 = 0U;
static volatile int64_t x752 = INT64_MIN;
uint16_t x753 = UINT16_MAX;
volatile int16_t x755 = -24;
uint32_t x756 = 126946U;
static int64_t x762 = 469512LL;
static int64_t x768 = -5734LL;
int16_t x769 = -1;
int32_t x772 = 0;
int32_t t173 = -12;
int32_t t177 = -274024712;
volatile int8_t x793 = INT8_MAX;
uint8_t x795 = 3U;
uint32_t x796 = UINT32_MAX;
volatile uint32_t t178 = UINT32_MAX;
int64_t x802 = 12041499LL;
int32_t x804 = 1;
static int32_t x806 = INT32_MIN;
int64_t x817 = 143001870786216529LL;
static int8_t x830 = -8;
uint8_t x834 = 110U;
int64_t t188 = 105309292718957840LL;
uint16_t x849 = 251U;
static uint16_t x852 = 11620U;
static int64_t x856 = 88215789LL;
int64_t x861 = INT64_MIN;
volatile uint32_t x866 = UINT32_MAX;
volatile int32_t x871 = -1;


void f0(void) {
    	volatile int32_t x2 = -1;
	int8_t x3 = INT8_MIN;
	uint8_t x4 = 17U;
	int32_t t0 = 718558980;

    t0 = (((x1%x2)>x3)+x4);

    if (t0 != 18) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x6 = -1;
	volatile uint32_t t1 = 121498781U;

    t1 = (((x5%x6)>x7)+x8);

    if (t1 != 2813709U) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x9 = -220577990497270493LL;
	volatile uint64_t x11 = UINT64_MAX;
	static volatile int64_t t2 = -26892295LL;

    t2 = (((x9%x10)>x11)+x12);

    if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -1;
	int64_t x14 = INT64_MIN;
	uint16_t x15 = 836U;
	static volatile int32_t t3 = 498236;

    t3 = (((x13%x14)>x15)+x16);

    if (t3 != -16) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int64_t x17 = -1243261715425293950LL;
	int32_t x18 = 485563;
	static int16_t x19 = 63;
	volatile uint8_t x20 = UINT8_MAX;
	int32_t t4 = -638;

    t4 = (((x17%x18)>x19)+x20);

    if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MIN;
	int8_t x22 = INT8_MAX;
	uint16_t x23 = 16U;
	int32_t x24 = INT32_MAX;
	volatile int32_t t5 = INT32_MAX;

    t5 = (((x21%x22)>x23)+x24);

    if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x26 = 20U;
	static volatile int64_t t6 = INT64_MIN;

    t6 = (((x25%x26)>x27)+x28);

    if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = 1U;
	static uint8_t x32 = 16U;
	volatile int32_t t7 = -6;

    t7 = (((x29%x30)>x31)+x32);

    if (t7 != 16) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MIN;
	int32_t x34 = -1;
	uint32_t x35 = 511U;
	uint8_t x36 = 46U;
	volatile int32_t t8 = 1;

    t8 = (((x33%x34)>x35)+x36);

    if (t8 != 46) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x41 = UINT64_MAX;
	volatile int64_t x42 = INT64_MAX;
	uint16_t x43 = 28838U;
	int32_t x44 = INT32_MAX;

    t9 = (((x41%x42)>x43)+x44);

    if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x50 = INT16_MIN;
	uint32_t x51 = 1771293809U;
	uint16_t x52 = 191U;
	int32_t t10 = 519980;

    t10 = (((x49%x50)>x51)+x52);

    if (t10 != 191) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x53 = INT16_MIN;
	uint16_t x55 = 41U;
	static int64_t x56 = -1031325275007297601LL;
	int64_t t11 = 1882LL;

    t11 = (((x53%x54)>x55)+x56);

    if (t11 != -1031325275007297601LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int16_t x63 = INT16_MIN;
	volatile int32_t t12 = 12011671;

    t12 = (((x61%x62)>x63)+x64);

    if (t12 != 109) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x65 = INT64_MAX;
	int64_t x66 = INT64_MIN;
	int64_t x68 = INT64_MIN;
	volatile int64_t t13 = -167978786104694LL;

    t13 = (((x65%x66)>x67)+x68);

    if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x70 = INT8_MAX;
	volatile int8_t x71 = -11;
	volatile int8_t x72 = INT8_MIN;

    t14 = (((x69%x70)>x71)+x72);

    if (t14 != -127) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x73 = INT32_MAX;
	int8_t x74 = INT8_MIN;
	int64_t x75 = 105666496089105568LL;
	static uint16_t x76 = UINT16_MAX;
	volatile int32_t t15 = 872;

    t15 = (((x73%x74)>x75)+x76);

    if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x77 = 1;
	int8_t x78 = -1;

    t16 = (((x77%x78)>x79)+x80);

    if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x81 = 4U;
	int16_t x82 = -1;
	volatile int8_t x83 = INT8_MIN;
	volatile uint64_t x84 = 242437103400LLU;

    t17 = (((x81%x82)>x83)+x84);

    if (t17 != 242437103401LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x85 = INT16_MIN;
	int64_t x87 = INT64_MIN;
	int64_t x88 = 10497067142965LL;
	volatile int64_t t18 = 206679LL;

    t18 = (((x85%x86)>x87)+x88);

    if (t18 != 10497067142966LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int64_t x89 = INT64_MIN;
	volatile uint8_t x91 = 1U;
	uint32_t x92 = UINT32_MAX;
	uint32_t t19 = UINT32_MAX;

    t19 = (((x89%x90)>x91)+x92);

    if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x93 = INT32_MAX;
	int32_t x96 = -1;

    t20 = (((x93%x94)>x95)+x96);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x97 = 6U;
	int64_t x98 = 308373691LL;
	volatile uint32_t x99 = UINT32_MAX;
	static volatile uint16_t x100 = UINT16_MAX;
	volatile int32_t t21 = 1663634;

    t21 = (((x97%x98)>x99)+x100);

    if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x101 = 94562915202653619LL;
	int32_t x102 = -1;
	int32_t x104 = -80472;
	int32_t t22 = 11831241;

    t22 = (((x101%x102)>x103)+x104);

    if (t22 != -80472) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x105 = UINT32_MAX;
	int64_t x106 = -1LL;
	uint64_t x107 = 34256357262756523LLU;
	uint32_t x108 = 5U;

    t23 = (((x105%x106)>x107)+x108);

    if (t23 != 5U) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x109 = INT64_MIN;
	int16_t x111 = -1;
	int32_t t24 = -13;

    t24 = (((x109%x110)>x111)+x112);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x113 = UINT32_MAX;
	int64_t x114 = INT64_MAX;
	uint8_t x115 = 1U;
	volatile int32_t t25 = -149814;

    t25 = (((x113%x114)>x115)+x116);

    if (t25 != 371) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x119 = 547213866695LL;
	uint8_t x120 = 119U;
	static volatile int32_t t26 = 136042;

    t26 = (((x117%x118)>x119)+x120);

    if (t26 != 119) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x121 = 84337254921070890LL;
	int32_t x122 = INT32_MIN;
	int8_t x123 = -3;
	int32_t t27 = 0;

    t27 = (((x121%x122)>x123)+x124);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x125 = INT16_MIN;
	uint8_t x126 = UINT8_MAX;
	int32_t x128 = -14;
	volatile int32_t t28 = -16630;

    t28 = (((x125%x126)>x127)+x128);

    if (t28 != -14) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x129 = INT8_MIN;
	int16_t x130 = INT16_MIN;
	static volatile int32_t x131 = INT32_MIN;
	static int64_t x132 = INT64_MIN;
	volatile int64_t t29 = -383392LL;

    t29 = (((x129%x130)>x131)+x132);

    if (t29 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x133 = INT32_MIN;
	int16_t x134 = -357;
	volatile int8_t x135 = 47;
	int64_t x136 = INT64_MIN;
	int64_t t30 = INT64_MIN;

    t30 = (((x133%x134)>x135)+x136);

    if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x137 = 91;
	int16_t x138 = INT16_MIN;
	static int8_t x139 = INT8_MIN;
	int16_t x140 = INT16_MIN;
	volatile int32_t t31 = -145167;

    t31 = (((x137%x138)>x139)+x140);

    if (t31 != -32767) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x142 = UINT16_MAX;
	int16_t x143 = INT16_MIN;
	static int8_t x144 = INT8_MAX;
	volatile int32_t t32 = -1;

    t32 = (((x141%x142)>x143)+x144);

    if (t32 != 128) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x145 = 45049588;
	volatile int8_t x146 = -1;
	volatile int16_t x147 = -1;
	uint32_t x148 = 1030437504U;

    t33 = (((x145%x146)>x147)+x148);

    if (t33 != 1030437505U) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x149 = -35108338LL;
	static int16_t x150 = -1;
	int64_t x151 = INT64_MIN;
	volatile uint32_t x152 = 1U;
	volatile uint32_t t34 = 987429U;

    t34 = (((x149%x150)>x151)+x152);

    if (t34 != 2U) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint64_t x153 = UINT64_MAX;
	int8_t x154 = -1;
	static int16_t x155 = INT16_MAX;
	static uint64_t x156 = UINT64_MAX;
	volatile uint64_t t35 = UINT64_MAX;

    t35 = (((x153%x154)>x155)+x156);

    if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x157 = 50;
	int16_t x158 = INT16_MIN;
	uint16_t x159 = 14U;
	static uint64_t x160 = UINT64_MAX;
	uint64_t t36 = 354988LLU;

    t36 = (((x157%x158)>x159)+x160);

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint8_t x161 = 55U;
	uint16_t x162 = 1U;
	int32_t x163 = INT32_MIN;
	int8_t x164 = -1;
	volatile int32_t t37 = -108896803;

    t37 = (((x161%x162)>x163)+x164);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x165 = -3652167790370105076LL;
	volatile int64_t x167 = INT64_MIN;

    t38 = (((x165%x166)>x167)+x168);

    if (t38 != -127) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x169 = 378472U;
	uint16_t x170 = UINT16_MAX;
	uint64_t x172 = 94894LLU;
	uint64_t t39 = 58160LLU;

    t39 = (((x169%x170)>x171)+x172);

    if (t39 != 94894LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x173 = 18U;
	volatile int16_t x175 = INT16_MAX;
	static int64_t x176 = INT64_MIN;

    t40 = (((x173%x174)>x175)+x176);

    if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x178 = INT64_MIN;
	volatile int32_t x179 = INT32_MIN;
	volatile int8_t x180 = 15;

    t41 = (((x177%x178)>x179)+x180);

    if (t41 != 16) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x182 = INT16_MIN;
	int64_t x183 = INT64_MIN;
	int8_t x184 = INT8_MIN;
	int32_t t42 = -202943;

    t42 = (((x181%x182)>x183)+x184);

    if (t42 != -127) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x185 = -1;
	volatile int32_t t43 = -14650800;

    t43 = (((x185%x186)>x187)+x188);

    if (t43 != 355526) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x189 = 96601559;
	volatile int16_t x190 = INT16_MIN;
	int8_t x191 = INT8_MAX;
	int16_t x192 = -1;

    t44 = (((x189%x190)>x191)+x192);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x193 = 0U;
	uint16_t x194 = UINT16_MAX;
	static volatile uint64_t x196 = UINT64_MAX;
	volatile uint64_t t45 = 20088LLU;

    t45 = (((x193%x194)>x195)+x196);

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x197 = 7;
	static int64_t x198 = INT64_MAX;
	static int8_t x199 = INT8_MIN;
	volatile int16_t x200 = INT16_MAX;
	volatile int32_t t46 = 2;

    t46 = (((x197%x198)>x199)+x200);

    if (t46 != 32768) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x201 = INT16_MIN;
	static int16_t x202 = INT16_MAX;
	uint16_t x204 = 4583U;
	int32_t t47 = 74005;

    t47 = (((x201%x202)>x203)+x204);

    if (t47 != 4583) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x205 = INT64_MIN;
	int64_t x206 = INT64_MIN;
	uint16_t x207 = UINT16_MAX;
	static int8_t x208 = INT8_MAX;
	static int32_t t48 = -32;

    t48 = (((x205%x206)>x207)+x208);

    if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x209 = 103U;
	volatile int8_t x211 = INT8_MAX;
	uint64_t x212 = 197659603036354LLU;
	volatile uint64_t t49 = 784LLU;

    t49 = (((x209%x210)>x211)+x212);

    if (t49 != 197659603036354LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x213 = -1LL;
	int32_t x214 = -1;
	uint16_t x215 = 3100U;
	uint32_t t50 = 913U;

    t50 = (((x213%x214)>x215)+x216);

    if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x218 = INT16_MAX;
	uint16_t x219 = 2937U;
	volatile uint16_t x220 = UINT16_MAX;
	static volatile int32_t t51 = 1107;

    t51 = (((x217%x218)>x219)+x220);

    if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x222 = 6712408;
	volatile uint32_t x223 = 947594679U;
	int8_t x224 = INT8_MAX;
	int32_t t52 = -7;

    t52 = (((x221%x222)>x223)+x224);

    if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x225 = INT8_MAX;
	int32_t x226 = INT32_MIN;
	uint32_t x227 = UINT32_MAX;
	static uint8_t x228 = 3U;
	volatile int32_t t53 = -121906391;

    t53 = (((x225%x226)>x227)+x228);

    if (t53 != 3) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x230 = -132;
	static volatile int16_t x231 = -1;
	uint32_t x232 = UINT32_MAX;
	uint32_t t54 = UINT32_MAX;

    t54 = (((x229%x230)>x231)+x232);

    if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x233 = INT16_MIN;
	int8_t x234 = INT8_MIN;
	int8_t x236 = INT8_MAX;
	int32_t t55 = 5;

    t55 = (((x233%x234)>x235)+x236);

    if (t55 != 128) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint8_t x237 = 0U;
	uint32_t x238 = UINT32_MAX;
	static int32_t x239 = INT32_MAX;
	int8_t x240 = INT8_MIN;

    t56 = (((x237%x238)>x239)+x240);

    if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x241 = -178LL;
	int16_t x242 = INT16_MIN;
	int8_t x243 = 0;
	int8_t x244 = -1;

    t57 = (((x241%x242)>x243)+x244);

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x245 = UINT32_MAX;
	static int16_t x246 = INT16_MIN;
	uint8_t x247 = 0U;
	volatile int16_t x248 = -1;
	volatile int32_t t58 = 2892357;

    t58 = (((x245%x246)>x247)+x248);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x249 = UINT16_MAX;
	static int32_t x250 = INT32_MAX;
	uint32_t x252 = 2569149U;
	uint32_t t59 = 63U;

    t59 = (((x249%x250)>x251)+x252);

    if (t59 != 2569149U) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x253 = -8;
	volatile int32_t x254 = -95668915;
	int8_t x255 = INT8_MIN;
	int16_t x256 = INT16_MIN;
	static int32_t t60 = 997375;

    t60 = (((x253%x254)>x255)+x256);

    if (t60 != -32767) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x257 = INT32_MIN;
	int64_t x259 = INT64_MIN;
	static int16_t x260 = INT16_MAX;
	static int32_t t61 = -1;

    t61 = (((x257%x258)>x259)+x260);

    if (t61 != 32768) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x261 = 10;
	uint64_t x263 = UINT64_MAX;
	volatile int64_t x264 = 3075LL;
	volatile int64_t t62 = -632LL;

    t62 = (((x261%x262)>x263)+x264);

    if (t62 != 3075LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x266 = -1LL;
	int64_t x267 = -35037887LL;
	int16_t x268 = -1;
	int32_t t63 = 1827;

    t63 = (((x265%x266)>x267)+x268);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x269 = 0U;
	int32_t x270 = INT32_MAX;
	int32_t x271 = 198518;
	volatile uint8_t x272 = 121U;
	static volatile int32_t t64 = -179761;

    t64 = (((x269%x270)>x271)+x272);

    if (t64 != 121) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x273 = INT64_MAX;
	volatile uint64_t x275 = UINT64_MAX;
	int8_t x276 = 13;
	static volatile int32_t t65 = -2198;

    t65 = (((x273%x274)>x275)+x276);

    if (t65 != 13) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x277 = 1U;
	static volatile int8_t x278 = INT8_MIN;
	int16_t x279 = INT16_MIN;
	volatile uint32_t t66 = 83832239U;

    t66 = (((x277%x278)>x279)+x280);

    if (t66 != 255U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x281 = 11265LLU;
	uint32_t x282 = 5474411U;
	uint64_t x283 = UINT64_MAX;
	int16_t x284 = INT16_MIN;
	volatile int32_t t67 = -215;

    t67 = (((x281%x282)>x283)+x284);

    if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x285 = INT8_MIN;
	volatile int8_t x286 = INT8_MIN;
	int16_t x287 = -1;
	uint32_t x288 = 44544U;

    t68 = (((x285%x286)>x287)+x288);

    if (t68 != 44545U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x289 = UINT32_MAX;
	static int32_t x290 = INT32_MIN;
	volatile int32_t x291 = -1;
	volatile int32_t t69 = INT32_MIN;

    t69 = (((x289%x290)>x291)+x292);

    if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x293 = 125;
	int64_t x294 = INT64_MAX;
	static int64_t x295 = -1LL;
	uint32_t x296 = 62207040U;
	volatile uint32_t t70 = 214313U;

    t70 = (((x293%x294)>x295)+x296);

    if (t70 != 62207041U) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x298 = INT64_MIN;
	volatile uint32_t x299 = 11182U;
	uint32_t x300 = UINT32_MAX;
	volatile uint32_t t71 = 200236U;

    t71 = (((x297%x298)>x299)+x300);

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x301 = INT16_MAX;
	int16_t x302 = INT16_MIN;
	volatile uint16_t x303 = 2U;
	uint16_t x304 = UINT16_MAX;
	static volatile int32_t t72 = -464876;

    t72 = (((x301%x302)>x303)+x304);

    if (t72 != 65536) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x305 = INT64_MIN;
	volatile uint64_t x306 = 28679961214004491LLU;
	int32_t x308 = -1;
	int32_t t73 = 14511340;

    t73 = (((x305%x306)>x307)+x308);

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x310 = UINT64_MAX;
	uint64_t x312 = 820104606461180250LLU;
	static uint64_t t74 = 4LLU;

    t74 = (((x309%x310)>x311)+x312);

    if (t74 != 820104606461180251LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x313 = -1LL;
	int32_t x314 = INT32_MAX;
	volatile uint8_t x315 = 116U;
	uint64_t x316 = UINT64_MAX;
	static uint64_t t75 = UINT64_MAX;

    t75 = (((x313%x314)>x315)+x316);

    if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x317 = UINT8_MAX;
	int16_t x318 = -1;
	int16_t x319 = 666;

    t76 = (((x317%x318)>x319)+x320);

    if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x321 = INT8_MAX;
	uint32_t x323 = UINT32_MAX;
	int64_t x324 = -1LL;
	int64_t t77 = -192947780982604906LL;

    t77 = (((x321%x322)>x323)+x324);

    if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x325 = INT32_MIN;
	int32_t x326 = INT32_MIN;
	uint8_t x327 = 8U;
	volatile int64_t x328 = 439733687683LL;
	int64_t t78 = -1718159865LL;

    t78 = (((x325%x326)>x327)+x328);

    if (t78 != 439733687683LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x333 = INT32_MIN;
	int32_t x334 = 9511318;
	int32_t x335 = -1;
	int16_t x336 = INT16_MAX;

    t79 = (((x333%x334)>x335)+x336);

    if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x337 = 22;
	static volatile int64_t x338 = -1LL;
	uint8_t x339 = UINT8_MAX;
	static int32_t x340 = 7;
	int32_t t80 = -1866570;

    t80 = (((x337%x338)>x339)+x340);

    if (t80 != 7) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x342 = INT64_MAX;
	int16_t x343 = INT16_MAX;
	static uint16_t x344 = 6309U;
	volatile int32_t t81 = 10034;

    t81 = (((x341%x342)>x343)+x344);

    if (t81 != 6309) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x349 = 31;
	volatile int64_t x350 = -12742995893444LL;
	volatile int8_t x352 = -1;

    t82 = (((x349%x350)>x351)+x352);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x353 = 13U;
	volatile int8_t x354 = INT8_MIN;
	int8_t x355 = INT8_MIN;
	static int16_t x356 = INT16_MIN;

    t83 = (((x353%x354)>x355)+x356);

    if (t83 != -32767) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x357 = UINT64_MAX;
	int16_t x358 = 90;
	int32_t x359 = INT32_MAX;
	uint32_t x360 = UINT32_MAX;
	uint32_t t84 = UINT32_MAX;

    t84 = (((x357%x358)>x359)+x360);

    if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x361 = -15;
	int8_t x362 = -12;
	int16_t x364 = -1;
	int32_t t85 = 15;

    t85 = (((x361%x362)>x363)+x364);

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x365 = -1;
	int8_t x366 = 1;
	int8_t x367 = -1;
	int32_t t86 = 190523;

    t86 = (((x365%x366)>x367)+x368);

    if (t86 != 128) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x369 = -1;
	int32_t x370 = INT32_MAX;
	int32_t x371 = -9356924;
	volatile int64_t t87 = 1616455101340132698LL;

    t87 = (((x369%x370)>x371)+x372);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x373 = INT16_MAX;
	int8_t x374 = INT8_MIN;
	int64_t x375 = 48178296208LL;
	int8_t x376 = -1;
	int32_t t88 = 3;

    t88 = (((x373%x374)>x375)+x376);

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x377 = -1;
	int64_t x378 = -1LL;
	int16_t x379 = -2;
	int8_t x380 = INT8_MIN;
	volatile int32_t t89 = 82916767;

    t89 = (((x377%x378)>x379)+x380);

    if (t89 != -127) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint64_t x385 = UINT64_MAX;
	int8_t x386 = INT8_MAX;
	volatile int8_t x387 = INT8_MIN;
	int8_t x388 = 1;

    t90 = (((x385%x386)>x387)+x388);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x389 = 0U;
	int32_t x390 = 2166;
	int32_t x391 = 5617;

    t91 = (((x389%x390)>x391)+x392);

    if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x393 = 41070130U;
	static volatile uint32_t x394 = 451690U;
	int16_t x395 = -1;
	int64_t x396 = -1114585395235561LL;
	int64_t t92 = -1876LL;

    t92 = (((x393%x394)>x395)+x396);

    if (t92 != -1114585395235561LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x398 = 76581673U;
	static int8_t x399 = 54;
	volatile uint8_t x400 = 16U;
	int32_t t93 = 38727;

    t93 = (((x397%x398)>x399)+x400);

    if (t93 != 17) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x401 = 10615U;
	static int64_t x402 = INT64_MIN;
	int64_t x403 = INT64_MIN;
	int16_t x404 = 1;
	static int32_t t94 = 176;

    t94 = (((x401%x402)>x403)+x404);

    if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x405 = -1;
	int8_t x406 = -6;
	int8_t x407 = -2;
	uint16_t x408 = 202U;
	static int32_t t95 = 1946;

    t95 = (((x405%x406)>x407)+x408);

    if (t95 != 203) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x413 = INT32_MAX;
	static int64_t x414 = -1LL;
	int8_t x415 = INT8_MAX;
	int64_t x416 = -4058333174LL;
	int64_t t96 = 1806058674710403071LL;

    t96 = (((x413%x414)>x415)+x416);

    if (t96 != -4058333174LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x418 = -3830528470638708333LL;
	int8_t x419 = -1;

    t97 = (((x417%x418)>x419)+x420);

    if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x422 = -1;
	int16_t x423 = INT16_MIN;
	int64_t x424 = -12032424527996LL;
	volatile int64_t t98 = -240117639030LL;

    t98 = (((x421%x422)>x423)+x424);

    if (t98 != -12032424527995LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x429 = 994U;
	uint8_t x430 = 39U;
	uint64_t t99 = 53674027280LLU;

    t99 = (((x429%x430)>x431)+x432);

    if (t99 != 543868566225LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x433 = INT16_MAX;
	volatile uint8_t x434 = 95U;
	volatile uint8_t x435 = 91U;
	int64_t x436 = 3945102601768509LL;
	int64_t t100 = -1043922554649LL;

    t100 = (((x433%x434)>x435)+x436);

    if (t100 != 3945102601768509LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x437 = 757816622LLU;
	int64_t x438 = -1LL;
	int8_t x439 = INT8_MAX;
	int32_t x440 = -1;

    t101 = (((x437%x438)>x439)+x440);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x442 = INT64_MIN;
	volatile int16_t x443 = 337;
	uint32_t x444 = 1U;
	volatile uint32_t t102 = 1U;

    t102 = (((x441%x442)>x443)+x444);

    if (t102 != 2U) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x446 = 1;
	uint32_t x447 = 1069353724U;
	volatile int32_t x448 = INT32_MAX;
	static int32_t t103 = INT32_MAX;

    t103 = (((x445%x446)>x447)+x448);

    if (t103 != INT32_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x453 = INT16_MIN;
	int64_t x455 = INT64_MIN;
	uint8_t x456 = 13U;

    t104 = (((x453%x454)>x455)+x456);

    if (t104 != 14) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x457 = UINT32_MAX;
	int64_t x458 = INT64_MIN;
	static int32_t x459 = INT32_MAX;
	int32_t x460 = INT32_MIN;
	volatile int32_t t105 = -1030883;

    t105 = (((x457%x458)>x459)+x460);

    if (t105 != -2147483647) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x461 = -11038;
	int16_t x462 = 12696;
	int64_t x463 = INT64_MIN;
	volatile uint8_t x464 = UINT8_MAX;
	static volatile int32_t t106 = -58;

    t106 = (((x461%x462)>x463)+x464);

    if (t106 != 256) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x465 = -172;
	volatile int64_t x467 = -523686702LL;
	uint64_t x468 = 6563937628727638LLU;
	uint64_t t107 = 267746LLU;

    t107 = (((x465%x466)>x467)+x468);

    if (t107 != 6563937628727639LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x469 = INT8_MIN;
	uint32_t x470 = 219341U;
	int64_t x471 = INT64_MAX;
	int64_t x472 = 10LL;
	volatile int64_t t108 = 61LL;

    t108 = (((x469%x470)>x471)+x472);

    if (t108 != 10LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x473 = 597U;
	int32_t x475 = INT32_MIN;
	volatile int64_t x476 = 686158920884400532LL;
	int64_t t109 = 161LL;

    t109 = (((x473%x474)>x475)+x476);

    if (t109 != 686158920884400533LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x481 = UINT16_MAX;
	static int64_t x482 = INT64_MIN;
	uint64_t x483 = 275184753280738LLU;
	int16_t x484 = 2;
	volatile int32_t t110 = -595776;

    t110 = (((x481%x482)>x483)+x484);

    if (t110 != 2) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x485 = INT8_MAX;
	int8_t x486 = INT8_MIN;
	int32_t t111 = 3480;

    t111 = (((x485%x486)>x487)+x488);

    if (t111 != 1021) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x489 = INT64_MIN;
	static int32_t x490 = INT32_MIN;
	volatile uint8_t x491 = 6U;
	static int8_t x492 = INT8_MIN;

    t112 = (((x489%x490)>x491)+x492);

    if (t112 != -128) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x493 = 73326902;
	uint64_t x494 = UINT64_MAX;
	int64_t x495 = -143LL;
	int64_t x496 = -3364LL;
	int64_t t113 = -2093183LL;

    t113 = (((x493%x494)>x495)+x496);

    if (t113 != -3364LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int8_t x497 = INT8_MIN;
	uint16_t x498 = 21676U;
	int32_t x499 = 23453561;
	int64_t t114 = INT64_MIN;

    t114 = (((x497%x498)>x499)+x500);

    if (t114 != INT64_MIN) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x501 = 0;
	int8_t x502 = -3;
	volatile int64_t x503 = INT64_MIN;
	int32_t t115 = 1;

    t115 = (((x501%x502)>x503)+x504);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x505 = INT32_MAX;
	int32_t x506 = -1;
	uint64_t x507 = 15537430365LLU;
	static uint32_t x508 = 195474992U;
	uint32_t t116 = 2U;

    t116 = (((x505%x506)>x507)+x508);

    if (t116 != 195474992U) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x509 = -1;
	int8_t x510 = 1;
	int32_t x512 = 1;
	int32_t t117 = -28493;

    t117 = (((x509%x510)>x511)+x512);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x513 = -3LL;
	static int16_t x515 = 1584;

    t118 = (((x513%x514)>x515)+x516);

    if (t118 != INT32_MIN) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x517 = -1;
	int32_t x518 = -376581730;
	uint32_t x520 = 6570U;
	static volatile uint32_t t119 = 3301562U;

    t119 = (((x517%x518)>x519)+x520);

    if (t119 != 6571U) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint16_t x521 = UINT16_MAX;
	int16_t x522 = INT16_MAX;
	uint64_t x523 = UINT64_MAX;
	volatile int64_t x524 = 3780894153166938LL;
	int64_t t120 = 211705669649912LL;

    t120 = (((x521%x522)>x523)+x524);

    if (t120 != 3780894153166938LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x525 = INT8_MAX;
	volatile uint64_t t121 = 2LLU;

    t121 = (((x525%x526)>x527)+x528);

    if (t121 != 10981557861125912LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x531 = INT16_MIN;
	int64_t x532 = INT64_MIN;
	int64_t t122 = 28997849451812260LL;

    t122 = (((x529%x530)>x531)+x532);

    if (t122 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x537 = INT64_MIN;
	volatile int64_t x539 = INT64_MAX;
	int8_t x540 = -1;
	volatile int32_t t123 = 943;

    t123 = (((x537%x538)>x539)+x540);

    if (t123 != -1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x543 = -1;
	int8_t x544 = INT8_MAX;
	volatile int32_t t124 = -23;

    t124 = (((x541%x542)>x543)+x544);

    if (t124 != 127) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x545 = UINT64_MAX;
	volatile int8_t x546 = INT8_MIN;
	int8_t x548 = -1;
	volatile int32_t t125 = -4959272;

    t125 = (((x545%x546)>x547)+x548);

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x553 = UINT32_MAX;
	volatile uint64_t x554 = 125LLU;
	static int16_t x555 = -1;
	int32_t t126 = 478861;

    t126 = (((x553%x554)>x555)+x556);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x561 = INT16_MIN;
	uint64_t x562 = 272123082385329LLU;
	static int32_t x563 = -1;
	int8_t x564 = -7;
	volatile int32_t t127 = -23333987;

    t127 = (((x561%x562)>x563)+x564);

    if (t127 != -7) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x565 = 0;
	uint32_t x567 = 544240085U;
	int32_t x568 = 11331244;
	static int32_t t128 = -1;

    t128 = (((x565%x566)>x567)+x568);

    if (t128 != 11331244) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x569 = 6;
	int64_t x570 = INT64_MIN;
	int32_t x571 = -3263637;
	uint32_t x572 = UINT32_MAX;
	uint32_t t129 = 24056447U;

    t129 = (((x569%x570)>x571)+x572);

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x573 = INT32_MIN;
	uint64_t x574 = UINT64_MAX;
	int64_t x576 = 105032LL;

    t130 = (((x573%x574)>x575)+x576);

    if (t130 != 105033LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x577 = -30;
	int64_t x578 = INT64_MIN;
	static int8_t x579 = -1;
	volatile uint8_t x580 = 97U;
	int32_t t131 = 47;

    t131 = (((x577%x578)>x579)+x580);

    if (t131 != 97) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint64_t x585 = UINT64_MAX;
	int64_t x586 = INT64_MIN;
	int8_t x588 = -5;

    t132 = (((x585%x586)>x587)+x588);

    if (t132 != -5) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x590 = 4217803421401LL;
	static int32_t x591 = -1;
	static int16_t x592 = -1;
	volatile int32_t t133 = 1;

    t133 = (((x589%x590)>x591)+x592);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint64_t x593 = 128354368242LLU;
	int8_t x595 = INT8_MIN;
	int32_t t134 = 55;

    t134 = (((x593%x594)>x595)+x596);

    if (t134 != 16) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x597 = INT64_MIN;
	volatile int64_t x600 = INT64_MIN;
	int64_t t135 = INT64_MIN;

    t135 = (((x597%x598)>x599)+x600);

    if (t135 != INT64_MIN) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int64_t x601 = INT64_MIN;
	volatile uint8_t x602 = UINT8_MAX;
	static int8_t x604 = 1;
	volatile int32_t t136 = 166637;

    t136 = (((x601%x602)>x603)+x604);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x605 = 0U;
	uint8_t x606 = 55U;
	static uint32_t x608 = 169U;
	uint32_t t137 = 70U;

    t137 = (((x605%x606)>x607)+x608);

    if (t137 != 169U) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint16_t x612 = 3213U;
	static int32_t t138 = 245660320;

    t138 = (((x609%x610)>x611)+x612);

    if (t138 != 3213) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x613 = UINT64_MAX;
	volatile int64_t x614 = INT64_MIN;
	static int64_t t139 = INT64_MIN;

    t139 = (((x613%x614)>x615)+x616);

    if (t139 != INT64_MIN) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x621 = INT16_MIN;
	uint16_t x622 = 3U;
	int16_t x623 = 6;
	volatile int32_t t140 = 79964862;

    t140 = (((x621%x622)>x623)+x624);

    if (t140 != -5) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x626 = 7079745LLU;
	int8_t x627 = -3;
	static int16_t x628 = INT16_MAX;
	int32_t t141 = 11;

    t141 = (((x625%x626)>x627)+x628);

    if (t141 != 32767) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x630 = INT8_MIN;
	int64_t x631 = -1663359536598106LL;
	int64_t x632 = 861LL;
	static int64_t t142 = 478LL;

    t142 = (((x629%x630)>x631)+x632);

    if (t142 != 862LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x637 = INT8_MAX;
	static int32_t x639 = -2;
	int8_t x640 = INT8_MAX;
	volatile int32_t t143 = -24;

    t143 = (((x637%x638)>x639)+x640);

    if (t143 != 128) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x642 = 1;
	int16_t x643 = INT16_MAX;
	static int32_t x644 = INT32_MAX;
	static int32_t t144 = INT32_MAX;

    t144 = (((x641%x642)>x643)+x644);

    if (t144 != INT32_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x645 = 319386428U;
	int32_t x646 = -106;
	uint32_t x647 = 7898099U;
	int32_t x648 = 792028737;

    t145 = (((x645%x646)>x647)+x648);

    if (t145 != 792028738) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile uint64_t x649 = 1150660017LLU;
	int64_t x651 = 22624751810662078LL;
	uint32_t x652 = 59230U;
	uint32_t t146 = 21708436U;

    t146 = (((x649%x650)>x651)+x652);

    if (t146 != 59230U) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x655 = 38;
	static int32_t t147 = -3556197;

    t147 = (((x653%x654)>x655)+x656);

    if (t147 != -2) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x657 = INT16_MAX;
	int8_t x658 = -1;
	uint8_t x659 = UINT8_MAX;
	int16_t x660 = 927;
	int32_t t148 = 1115009;

    t148 = (((x657%x658)>x659)+x660);

    if (t148 != 927) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x661 = 44913LLU;
	uint8_t x663 = 18U;
	int8_t x664 = -5;
	static int32_t t149 = 10;

    t149 = (((x661%x662)>x663)+x664);

    if (t149 != -4) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x665 = UINT16_MAX;
	int64_t x666 = INT64_MIN;
	uint8_t x667 = 24U;
	uint8_t x668 = UINT8_MAX;
	volatile int32_t t150 = -427455;

    t150 = (((x665%x666)>x667)+x668);

    if (t150 != 256) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x669 = 3U;
	int16_t x670 = INT16_MAX;
	int32_t x671 = INT32_MIN;
	int64_t x672 = INT64_MIN;
	int64_t t151 = 4052061740214030LL;

    t151 = (((x669%x670)>x671)+x672);

    if (t151 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x673 = 593193105680432LLU;
	int32_t x675 = INT32_MIN;
	uint32_t x676 = UINT32_MAX;
	uint32_t t152 = UINT32_MAX;

    t152 = (((x673%x674)>x675)+x676);

    if (t152 != UINT32_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x677 = 489261503896666LL;
	static int16_t x678 = INT16_MIN;
	int64_t x679 = INT64_MIN;
	volatile int32_t t153 = -826186;

    t153 = (((x677%x678)>x679)+x680);

    if (t153 != -32767) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x682 = INT32_MAX;
	int32_t x683 = INT32_MAX;
	static int32_t t154 = 1;

    t154 = (((x681%x682)>x683)+x684);

    if (t154 != -128) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x685 = INT8_MAX;
	static volatile int8_t x686 = INT8_MIN;
	volatile int8_t x688 = INT8_MIN;
	static int32_t t155 = -2584998;

    t155 = (((x685%x686)>x687)+x688);

    if (t155 != -128) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x689 = -1LL;
	uint8_t x690 = 3U;
	uint32_t t156 = 0U;

    t156 = (((x689%x690)>x691)+x692);

    if (t156 != 76U) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x697 = 21906845868369866LL;
	int8_t x698 = INT8_MAX;
	uint16_t x699 = UINT16_MAX;
	int8_t x700 = -1;

    t157 = (((x697%x698)>x699)+x700);

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x701 = 6;
	volatile int32_t x702 = INT32_MIN;
	static volatile int64_t x703 = 62889031223010662LL;
	static volatile uint32_t x704 = 61581929U;
	volatile uint32_t t158 = 131U;

    t158 = (((x701%x702)>x703)+x704);

    if (t158 != 61581929U) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x705 = INT64_MIN;
	uint32_t x707 = UINT32_MAX;
	volatile int32_t t159 = -5;

    t159 = (((x705%x706)>x707)+x708);

    if (t159 != 65535) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint16_t x709 = UINT16_MAX;
	static volatile uint64_t t160 = 178851678772LLU;

    t160 = (((x709%x710)>x711)+x712);

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x713 = INT32_MAX;
	static int8_t x714 = 1;
	static uint64_t x715 = 3691516960146149818LLU;
	int32_t t161 = 6275;

    t161 = (((x713%x714)>x715)+x716);

    if (t161 != 3) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x717 = INT16_MIN;
	uint32_t x718 = 29U;
	volatile uint16_t x720 = UINT16_MAX;
	int32_t t162 = -75092727;

    t162 = (((x717%x718)>x719)+x720);

    if (t162 != 65535) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x721 = 9U;
	static int16_t x722 = 655;
	int16_t x723 = 810;
	int32_t t163 = 1355;

    t163 = (((x721%x722)>x723)+x724);

    if (t163 != 65535) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x725 = 13690337LLU;
	uint8_t x727 = UINT8_MAX;
	int64_t x728 = -1LL;

    t164 = (((x725%x726)>x727)+x728);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x733 = -1;
	int16_t x734 = INT16_MIN;
	int32_t x735 = -1027798;
	uint8_t x736 = UINT8_MAX;
	volatile int32_t t165 = 31;

    t165 = (((x733%x734)>x735)+x736);

    if (t165 != 256) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x737 = INT32_MIN;
	uint16_t x738 = UINT16_MAX;
	static int32_t x739 = -1;
	static int64_t x740 = -237087794607LL;
	static int64_t t166 = 403275LL;

    t166 = (((x737%x738)>x739)+x740);

    if (t166 != -237087794607LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x741 = INT8_MIN;
	static uint8_t x742 = 1U;
	volatile int64_t x744 = INT64_MAX;
	volatile int64_t t167 = INT64_MAX;

    t167 = (((x741%x742)>x743)+x744);

    if (t167 != INT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile uint8_t x745 = UINT8_MAX;
	int8_t x746 = 3;
	static uint8_t x747 = 14U;
	int32_t t168 = 809198;

    t168 = (((x745%x746)>x747)+x748);

    if (t168 != 127) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint64_t x750 = 14LLU;
	static int16_t x751 = INT16_MAX;
	volatile int64_t t169 = INT64_MIN;

    t169 = (((x749%x750)>x751)+x752);

    if (t169 != INT64_MIN) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x754 = INT32_MIN;
	uint32_t t170 = 4027U;

    t170 = (((x753%x754)>x755)+x756);

    if (t170 != 126947U) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x761 = 37175LLU;
	static int32_t x763 = -1;
	volatile int32_t x764 = INT32_MIN;
	int32_t t171 = INT32_MIN;

    t171 = (((x761%x762)>x763)+x764);

    if (t171 != INT32_MIN) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x765 = 11153LL;
	int64_t x766 = -1LL;
	static int32_t x767 = 51579183;
	volatile int64_t t172 = -52864LL;

    t172 = (((x765%x766)>x767)+x768);

    if (t172 != -5734LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint64_t x770 = UINT64_MAX;
	int32_t x771 = -18;

    t173 = (((x769%x770)>x771)+x772);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x773 = UINT16_MAX;
	int64_t x774 = INT64_MIN;
	int32_t x775 = 847;
	int16_t x776 = INT16_MIN;
	static int32_t t174 = 697888760;

    t174 = (((x773%x774)>x775)+x776);

    if (t174 != -32767) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x781 = INT32_MIN;
	int32_t x782 = INT32_MIN;
	volatile uint16_t x783 = UINT16_MAX;
	int16_t x784 = INT16_MIN;
	int32_t t175 = 0;

    t175 = (((x781%x782)>x783)+x784);

    if (t175 != -32768) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x785 = INT16_MAX;
	int8_t x786 = -1;
	static volatile int16_t x787 = INT16_MAX;
	uint32_t x788 = 75U;
	uint32_t t176 = 12658U;

    t176 = (((x785%x786)>x787)+x788);

    if (t176 != 75U) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x789 = -1;
	static int16_t x790 = -1;
	int64_t x791 = INT64_MAX;
	int8_t x792 = INT8_MIN;

    t177 = (((x789%x790)>x791)+x792);

    if (t177 != -128) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x794 = -1;

    t178 = (((x793%x794)>x795)+x796);

    if (t178 != UINT32_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x797 = INT8_MIN;
	int16_t x798 = INT16_MAX;
	volatile int64_t x799 = 4023358080207824LL;
	volatile uint16_t x800 = 2U;
	volatile int32_t t179 = -1;

    t179 = (((x797%x798)>x799)+x800);

    if (t179 != 2) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x801 = UINT64_MAX;
	static uint32_t x803 = 291628U;
	int32_t t180 = 1889026;

    t180 = (((x801%x802)>x803)+x804);

    if (t180 != 2) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x805 = 10405744;
	int8_t x807 = INT8_MAX;
	uint16_t x808 = 14747U;
	volatile int32_t t181 = 308324890;

    t181 = (((x805%x806)>x807)+x808);

    if (t181 != 14748) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x809 = INT64_MIN;
	uint16_t x810 = UINT16_MAX;
	int16_t x811 = INT16_MAX;
	static volatile uint16_t x812 = 0U;
	volatile int32_t t182 = -149;

    t182 = (((x809%x810)>x811)+x812);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x813 = 562141098181648834LLU;
	int8_t x814 = INT8_MAX;
	int16_t x815 = 366;
	uint64_t x816 = UINT64_MAX;
	uint64_t t183 = UINT64_MAX;

    t183 = (((x813%x814)>x815)+x816);

    if (t183 != UINT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x818 = UINT16_MAX;
	static volatile int16_t x819 = INT16_MIN;
	static volatile int64_t x820 = 841255688755959570LL;
	volatile int64_t t184 = -3LL;

    t184 = (((x817%x818)>x819)+x820);

    if (t184 != 841255688755959571LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x821 = INT16_MAX;
	uint64_t x822 = 548280919563870LLU;
	static int32_t x823 = -1;
	uint64_t x824 = 32182787417268LLU;
	volatile uint64_t t185 = 448301LLU;

    t185 = (((x821%x822)>x823)+x824);

    if (t185 != 32182787417268LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x825 = UINT64_MAX;
	volatile int16_t x826 = INT16_MAX;
	uint64_t x827 = 1517427LLU;
	uint8_t x828 = 13U;
	int32_t t186 = -57044302;

    t186 = (((x825%x826)>x827)+x828);

    if (t186 != 13) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x829 = INT32_MIN;
	int64_t x831 = INT64_MAX;
	int32_t x832 = -29830;
	volatile int32_t t187 = -565;

    t187 = (((x829%x830)>x831)+x832);

    if (t187 != -29830) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x833 = INT32_MAX;
	int16_t x835 = -3;
	int64_t x836 = -3612267816501572741LL;

    t188 = (((x833%x834)>x835)+x836);

    if (t188 != -3612267816501572740LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x837 = -116872401453837LL;
	uint16_t x838 = 7U;
	int16_t x839 = INT16_MIN;
	static int32_t x840 = -111023;
	int32_t t189 = 3756737;

    t189 = (((x837%x838)>x839)+x840);

    if (t189 != -111022) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x841 = INT8_MIN;
	int8_t x842 = INT8_MIN;
	volatile int8_t x843 = 31;
	uint16_t x844 = UINT16_MAX;
	volatile int32_t t190 = -252583940;

    t190 = (((x841%x842)>x843)+x844);

    if (t190 != 65535) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x845 = 4178401066LLU;
	int8_t x846 = INT8_MIN;
	static int8_t x847 = 15;
	volatile int16_t x848 = -7074;
	volatile int32_t t191 = 1;

    t191 = (((x845%x846)>x847)+x848);

    if (t191 != -7073) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x850 = INT64_MAX;
	static int64_t x851 = INT64_MAX;
	static volatile int32_t t192 = -826445;

    t192 = (((x849%x850)>x851)+x852);

    if (t192 != 11620) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int16_t x853 = INT16_MAX;
	uint32_t x854 = UINT32_MAX;
	int32_t x855 = 1021;
	volatile int64_t t193 = -32651517349LL;

    t193 = (((x853%x854)>x855)+x856);

    if (t193 != 88215790LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x857 = -1;
	uint8_t x858 = 12U;
	int32_t x859 = INT32_MIN;
	int16_t x860 = INT16_MIN;
	volatile int32_t t194 = -11489712;

    t194 = (((x857%x858)>x859)+x860);

    if (t194 != -32767) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x862 = 3U;
	int32_t x863 = INT32_MIN;
	uint32_t x864 = 13772755U;
	static volatile uint32_t t195 = 610974U;

    t195 = (((x861%x862)>x863)+x864);

    if (t195 != 13772756U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x865 = UINT16_MAX;
	int16_t x867 = -482;
	int16_t x868 = INT16_MIN;
	volatile int32_t t196 = 409519;

    t196 = (((x865%x866)>x867)+x868);

    if (t196 != -32768) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x869 = INT16_MIN;
	volatile int64_t x870 = INT64_MIN;
	int16_t x872 = -1;
	int32_t t197 = 14;

    t197 = (((x869%x870)>x871)+x872);

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x873 = 185661732LLU;
	static uint32_t x874 = UINT32_MAX;
	uint8_t x875 = 49U;
	uint64_t x876 = UINT64_MAX;
	static uint64_t t198 = 373625374208763LLU;

    t198 = (((x873%x874)>x875)+x876);

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x877 = UINT64_MAX;
	int64_t x878 = INT64_MAX;
	uint64_t x879 = UINT64_MAX;
	int16_t x880 = -2466;
	int32_t t199 = 12;

    t199 = (((x877%x878)>x879)+x880);

    if (t199 != -2466) { NG(); } else { ; }
	
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

