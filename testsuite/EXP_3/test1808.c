
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

static int64_t x2 = 7LL;
static int8_t x3 = INT8_MIN;
int8_t x8 = -1;
int8_t x10 = -35;
volatile int32_t t2 = -788703511;
volatile int64_t x22 = INT64_MAX;
int64_t t6 = 10268826LL;
volatile uint8_t x29 = 7U;
static int32_t x31 = INT32_MIN;
volatile int32_t t7 = -21051;
volatile uint16_t x47 = 150U;
uint16_t x50 = 56U;
uint32_t x54 = 280375070U;
static int32_t x56 = INT32_MIN;
uint32_t x57 = UINT32_MAX;
uint32_t x64 = 69U;
volatile int8_t x70 = INT8_MIN;
int16_t x74 = -3;
int8_t x76 = 1;
static uint8_t x80 = 0U;
int32_t x86 = INT32_MIN;
int8_t x87 = -29;
int32_t t21 = -105223339;
static uint8_t x91 = 35U;
int16_t x100 = INT16_MIN;
int16_t x108 = INT16_MIN;
static int32_t x118 = INT32_MAX;
volatile uint16_t x120 = 289U;
static int32_t t29 = 60150;
static int64_t x124 = 1701904LL;
int16_t x126 = -1;
static int32_t x136 = -1;
int64_t x138 = -1LL;
volatile uint64_t x140 = UINT64_MAX;
uint8_t x145 = 0U;
uint16_t x151 = 29U;
static volatile int8_t x159 = INT8_MIN;
volatile uint16_t x161 = 727U;
volatile int16_t x162 = -1;
volatile int32_t t39 = 2451;
static volatile uint8_t x168 = 0U;
int32_t x174 = INT32_MIN;
static volatile uint16_t x178 = 10665U;
int64_t x180 = INT64_MAX;
static uint32_t x183 = 563374247U;
uint32_t x184 = 56516U;
int32_t x190 = 73;
int8_t x195 = INT8_MIN;
int16_t x204 = -588;
int64_t t48 = 402683232LL;
uint32_t x206 = UINT32_MAX;
int16_t x215 = -140;
static volatile uint64_t t51 = 1132534312844246392LLU;
static int64_t x224 = INT64_MIN;
static volatile uint64_t t55 = 7333117902121333370LLU;
uint32_t x233 = UINT32_MAX;
uint64_t x236 = UINT64_MAX;
volatile uint32_t t56 = 57367U;
int64_t x241 = 8274908607819471LL;
int8_t x250 = INT8_MIN;
int32_t x251 = -1;
volatile int32_t t60 = -11690959;
int64_t x253 = INT64_MAX;
int8_t x258 = -1;
static volatile int64_t x266 = -1LL;
uint32_t x267 = 7737502U;
int16_t x269 = -10437;
static int32_t x272 = INT32_MIN;
int16_t x273 = -1;
int32_t x278 = INT32_MAX;
volatile int64_t x285 = INT64_MIN;
int16_t x287 = 3;
int64_t x295 = -184384211807542LL;
volatile int64_t t71 = -4548865LL;
int16_t x299 = 3857;
volatile int32_t x303 = INT32_MIN;
uint64_t x305 = UINT64_MAX;
uint64_t t74 = 153809347868791491LLU;
volatile int16_t x310 = 275;
static volatile int32_t x313 = -1;
volatile int64_t t77 = -7706671688LL;
uint32_t x323 = UINT32_MAX;
int8_t x324 = INT8_MIN;
uint16_t x329 = 70U;
static int64_t x333 = INT64_MIN;
volatile int64_t x336 = -1LL;
int64_t t82 = -224830122LL;
uint16_t x354 = 11U;
int8_t x355 = INT8_MIN;
static uint32_t x357 = UINT32_MAX;
static int32_t x370 = INT32_MIN;
uint16_t x372 = 4U;
int32_t t89 = 260;
int8_t x380 = INT8_MAX;
int32_t x381 = -1392;
static volatile int64_t x382 = INT64_MIN;
int16_t x392 = INT16_MAX;
uint8_t x394 = UINT8_MAX;
int32_t x396 = -4096;
int16_t x397 = -1;
int64_t x400 = INT64_MIN;
int64_t t96 = 1226LL;
volatile int16_t x403 = INT16_MIN;
uint16_t x405 = UINT16_MAX;
uint32_t x415 = UINT32_MAX;
uint64_t x422 = 1221480LLU;
static volatile uint64_t t102 = UINT64_MAX;
int16_t x427 = -1;
volatile int64_t x428 = 25LL;
volatile int64_t t103 = -259173515610204211LL;
volatile uint32_t x430 = 30757014U;
int32_t x431 = 1056101183;
static int16_t x438 = 108;
static int64_t x444 = 152777185420335464LL;
int16_t x450 = INT16_MIN;
int32_t t108 = 28107236;
uint16_t x457 = UINT16_MAX;
volatile int64_t t110 = 1LL;
int8_t x463 = 47;
static volatile int16_t x468 = -1;
int32_t x469 = INT32_MIN;
static int32_t x471 = INT32_MIN;
static uint32_t x472 = 29684086U;
int64_t x474 = 39923643LL;
int64_t x485 = -1LL;
int16_t x493 = -1;
volatile uint8_t x496 = 126U;
int16_t x503 = -1;
int32_t x512 = INT32_MAX;
int16_t x526 = INT16_MAX;
int32_t t127 = 34821;
volatile uint32_t x532 = 829U;
int64_t x540 = 285156LL;
int16_t x550 = 6;
volatile int32_t t132 = 3;
static uint64_t x554 = 1042638LLU;
volatile int32_t x555 = INT32_MIN;
uint64_t t133 = UINT64_MAX;
static int16_t x558 = 11;
static uint64_t x559 = UINT64_MAX;
volatile int16_t x561 = INT16_MIN;
volatile int64_t x565 = -14041LL;
volatile int32_t x567 = INT32_MIN;
static uint64_t t137 = UINT64_MAX;
uint64_t x578 = UINT64_MAX;
volatile uint64_t t139 = 0LLU;
int64_t x595 = 15493227223663LL;
uint64_t t143 = 13951741945732LLU;
int8_t x597 = INT8_MAX;
int8_t x598 = INT8_MIN;
uint64_t x605 = UINT64_MAX;
volatile uint16_t x608 = UINT16_MAX;
static volatile int64_t x610 = -1109670706LL;
static volatile int64_t x614 = INT64_MAX;
uint8_t x617 = 0U;
int32_t t149 = 162294822;
int32_t x623 = INT32_MAX;
static int64_t x624 = -358LL;
volatile int32_t x629 = -10;
int16_t x630 = INT16_MIN;
uint32_t x632 = 21009U;
volatile uint64_t t157 = 2778859347LLU;
uint64_t x654 = 1333316221563129268LLU;
static int64_t x660 = INT64_MIN;
static volatile int64_t x661 = INT64_MAX;
uint16_t x679 = 60U;
volatile int32_t t164 = 132065264;
volatile int32_t x687 = 1165;
int64_t x689 = INT64_MIN;
int64_t x698 = INT64_MAX;
volatile int16_t x701 = INT16_MIN;
uint16_t x703 = UINT16_MAX;
int32_t x705 = INT32_MIN;
volatile uint32_t t172 = UINT32_MAX;
int16_t x713 = -1;
uint8_t x717 = 8U;
int8_t x723 = INT8_MIN;
static uint8_t x725 = 5U;
uint8_t x728 = 1U;
uint64_t x730 = 1876LLU;
static uint16_t x731 = 5U;
uint64_t t177 = 7808829LLU;
static int32_t x737 = INT32_MIN;
int32_t x740 = INT32_MIN;
int32_t t180 = 28;
volatile int8_t x756 = -1;
uint64_t t183 = 16302884134764949LLU;
volatile uint64_t t184 = 981758089201377LLU;
static volatile int16_t x766 = -1718;
static int32_t t187 = -39;
int32_t x780 = -1;
uint64_t t188 = UINT64_MAX;
int16_t x787 = 16189;
int64_t x790 = 511LL;
int32_t x794 = INT32_MAX;
int32_t t192 = 74071637;
uint64_t t194 = 30LLU;
uint16_t x813 = 51U;
int32_t t196 = 815222020;
uint8_t x819 = 3U;
int8_t x824 = INT8_MIN;


void f0(void) {
    	int32_t x1 = 160;
	int64_t x4 = -1LL;
	volatile int64_t t0 = -4LL;

    t0 = ((x1/x2)-(x3<=x4));

    if (t0 != 21LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x5 = INT64_MIN;
	volatile uint64_t x6 = 250438916627260LLU;
	static volatile uint8_t x7 = 30U;
	uint64_t t1 = 1980268579185LLU;

    t1 = ((x5/x6)-(x7<=x8));

    if (t1 != 36828LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 22U;
	int8_t x11 = INT8_MIN;
	static uint32_t x12 = UINT32_MAX;

    t2 = ((x9/x10)-(x11<=x12));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MAX;
	int32_t x14 = INT32_MAX;
	int32_t x15 = INT32_MAX;
	int32_t x16 = -1;
	volatile int32_t t3 = 360;

    t3 = ((x13/x14)-(x15<=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	uint16_t x18 = 251U;
	uint64_t x19 = 2746LLU;
	uint8_t x20 = 85U;
	int32_t t4 = -47065988;

    t4 = ((x17/x18)-(x19<=x20));

    if (t4 != -130) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x21 = UINT64_MAX;
	int64_t x23 = INT64_MIN;
	int8_t x24 = 3;
	uint64_t t5 = 50393LLU;

    t5 = ((x21/x22)-(x23<=x24));

    if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -2462609155949397359LL;
	volatile uint32_t x26 = 117260984U;
	uint16_t x27 = 3U;
	static volatile uint16_t x28 = 1772U;

    t6 = ((x25/x26)-(x27<=x28));

    if (t6 != -21001095778LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x30 = INT8_MIN;
	int32_t x32 = INT32_MIN;

    t7 = ((x29/x30)-(x31<=x32));

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -1;
	int16_t x34 = INT16_MAX;
	volatile int32_t x35 = INT32_MAX;
	uint8_t x36 = 1U;
	static volatile int32_t t8 = -2;

    t8 = ((x33/x34)-(x35<=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = 34;
	volatile int32_t x38 = -1;
	volatile int32_t x39 = INT32_MIN;
	int8_t x40 = INT8_MIN;
	int32_t t9 = 3859;

    t9 = ((x37/x38)-(x39<=x40));

    if (t9 != -35) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x41 = INT16_MIN;
	int16_t x42 = 8;
	static int8_t x43 = -31;
	uint32_t x44 = UINT32_MAX;
	volatile int32_t t10 = 1928251;

    t10 = ((x41/x42)-(x43<=x44));

    if (t10 != -4097) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = -415712;
	int16_t x46 = INT16_MIN;
	int32_t x48 = INT32_MAX;
	static volatile int32_t t11 = 3272;

    t11 = ((x45/x46)-(x47<=x48));

    if (t11 != 11) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = 3U;
	static int16_t x51 = INT16_MIN;
	int32_t x52 = INT32_MIN;
	static uint32_t t12 = 2495172U;

    t12 = ((x49/x50)-(x51<=x52));

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x53 = 728288236456383LLU;
	int64_t x55 = 607992724LL;
	volatile uint64_t t13 = 64LLU;

    t13 = ((x53/x54)-(x55<=x56));

    if (t13 != 2597549LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x58 = -1;
	int64_t x59 = 8218LL;
	uint64_t x60 = 1524LLU;
	volatile uint32_t t14 = 106177545U;

    t14 = ((x57/x58)-(x59<=x60));

    if (t14 != 1U) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MIN;
	volatile int16_t x62 = INT16_MIN;
	int32_t x63 = INT32_MIN;
	int32_t t15 = -568;

    t15 = ((x61/x62)-(x63<=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = 526042711110LLU;
	int32_t x66 = 6;
	int32_t x67 = -378886018;
	int32_t x68 = INT32_MIN;
	volatile uint64_t t16 = 1077215058194886LLU;

    t16 = ((x65/x66)-(x67<=x68));

    if (t16 != 87673785185LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = -1;
	int32_t x71 = INT32_MIN;
	volatile int16_t x72 = -1;
	static int32_t t17 = 6588016;

    t17 = ((x69/x70)-(x71<=x72));

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = 352470LL;
	volatile int8_t x75 = INT8_MIN;
	int64_t t18 = -11996301LL;

    t18 = ((x73/x74)-(x75<=x76));

    if (t18 != -117491LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MIN;
	int32_t x78 = -12;
	static int8_t x79 = 19;
	static int32_t t19 = 89;

    t19 = ((x77/x78)-(x79<=x80));

    if (t19 != 10) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int16_t x81 = INT16_MIN;
	static int8_t x82 = INT8_MIN;
	static uint8_t x83 = 21U;
	volatile uint16_t x84 = 0U;
	int32_t t20 = 0;

    t20 = ((x81/x82)-(x83<=x84));

    if (t20 != 256) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x85 = UINT16_MAX;
	static volatile int16_t x88 = 0;

    t21 = ((x85/x86)-(x87<=x88));

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MIN;
	int8_t x90 = INT8_MIN;
	int8_t x92 = 0;
	static volatile int32_t t22 = 10384849;

    t22 = ((x89/x90)-(x91<=x92));

    if (t22 != 256) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x93 = -55;
	uint16_t x94 = 15U;
	int16_t x95 = INT16_MIN;
	volatile uint8_t x96 = UINT8_MAX;
	int32_t t23 = -137265;

    t23 = ((x93/x94)-(x95<=x96));

    if (t23 != -4) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = INT64_MIN;
	int8_t x98 = INT8_MIN;
	int16_t x99 = 6;
	volatile int64_t t24 = -599832801621511011LL;

    t24 = ((x97/x98)-(x99<=x100));

    if (t24 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x101 = INT64_MAX;
	volatile uint8_t x102 = UINT8_MAX;
	int32_t x103 = -149794662;
	volatile int8_t x104 = 20;
	volatile int64_t t25 = -427687893582874LL;

    t25 = ((x101/x102)-(x103<=x104));

    if (t25 != 36170086419038335LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x105 = INT64_MAX;
	int16_t x106 = INT16_MIN;
	uint32_t x107 = 1U;
	int64_t t26 = 12839051LL;

    t26 = ((x105/x106)-(x107<=x108));

    if (t26 != -281474976710656LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MIN;
	int16_t x110 = INT16_MAX;
	int8_t x111 = -1;
	int64_t x112 = -1LL;
	volatile int32_t t27 = -2213305;

    t27 = ((x109/x110)-(x111<=x112));

    if (t27 != -65539) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = 19878;
	static uint64_t x114 = 150848308954001LLU;
	int32_t x115 = 7811;
	volatile int16_t x116 = 1;
	uint64_t t28 = 179LLU;

    t28 = ((x113/x114)-(x115<=x116));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = -1;
	volatile int16_t x119 = -24;

    t29 = ((x117/x118)-(x119<=x120));

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MAX;
	volatile int16_t x122 = INT16_MIN;
	static int16_t x123 = -1;
	volatile int32_t t30 = -237040473;

    t30 = ((x121/x122)-(x123<=x124));

    if (t30 != -65536) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MIN;
	static uint8_t x127 = 0U;
	int64_t x128 = -925339LL;
	volatile int32_t t31 = 643121;

    t31 = ((x125/x126)-(x127<=x128));

    if (t31 != 32768) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = -1;
	uint32_t x130 = UINT32_MAX;
	int32_t x131 = INT32_MAX;
	int8_t x132 = INT8_MIN;
	volatile uint32_t t32 = 30U;

    t32 = ((x129/x130)-(x131<=x132));

    if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x133 = 156;
	volatile int16_t x134 = 3;
	int64_t x135 = -1599320709692LL;
	volatile int32_t t33 = 112;

    t33 = ((x133/x134)-(x135<=x136));

    if (t33 != 51) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x137 = -4;
	static uint64_t x139 = 51814LLU;
	volatile int64_t t34 = -953300462LL;

    t34 = ((x137/x138)-(x139<=x140));

    if (t34 != 3LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x146 = INT8_MAX;
	int16_t x147 = -59;
	int64_t x148 = INT64_MIN;
	volatile int32_t t35 = 481173;

    t35 = ((x145/x146)-(x147<=x148));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint8_t x149 = 65U;
	int64_t x150 = -138458346159725LL;
	uint16_t x152 = 0U;
	int64_t t36 = -224LL;

    t36 = ((x149/x150)-(x151<=x152));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x153 = INT32_MIN;
	volatile int64_t x154 = -1LL;
	volatile int32_t x155 = INT32_MAX;
	uint64_t x156 = UINT64_MAX;
	static volatile int64_t t37 = -245LL;

    t37 = ((x153/x154)-(x155<=x156));

    if (t37 != 2147483647LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x157 = -1;
	uint32_t x158 = 9664U;
	uint8_t x160 = 3U;
	static uint32_t t38 = 1834281963U;

    t38 = ((x157/x158)-(x159<=x160));

    if (t38 != 444428U) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint16_t x163 = 260U;
	int32_t x164 = -6235;

    t39 = ((x161/x162)-(x163<=x164));

    if (t39 != -727) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x165 = -3;
	int8_t x166 = INT8_MIN;
	int16_t x167 = 233;
	volatile int32_t t40 = -472;

    t40 = ((x165/x166)-(x167<=x168));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x173 = UINT32_MAX;
	uint64_t x175 = UINT64_MAX;
	int16_t x176 = -1;
	uint32_t t41 = 20641357U;

    t41 = ((x173/x174)-(x175<=x176));

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x177 = 25617273238013040LLU;
	int16_t x179 = INT16_MAX;
	volatile uint64_t t42 = 881598290716LLU;

    t42 = ((x177/x178)-(x179<=x180));

    if (t42 != 2401994677731LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x181 = UINT32_MAX;
	volatile int32_t x182 = INT32_MIN;
	uint32_t t43 = 95U;

    t43 = ((x181/x182)-(x183<=x184));

    if (t43 != 1U) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x185 = -1;
	static uint64_t x186 = 22960372LLU;
	uint16_t x187 = 29U;
	int32_t x188 = INT32_MIN;
	uint64_t t44 = 1048743641LLU;

    t44 = ((x185/x186)-(x187<=x188));

    if (t44 != 803416602906LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x189 = 7587226U;
	int16_t x191 = INT16_MIN;
	int32_t x192 = INT32_MIN;
	uint32_t t45 = 1660742U;

    t45 = ((x189/x190)-(x191<=x192));

    if (t45 != 103934U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x193 = 4002075951LLU;
	static int16_t x194 = INT16_MIN;
	int32_t x196 = 33856;
	volatile uint64_t t46 = UINT64_MAX;

    t46 = ((x193/x194)-(x195<=x196));

    if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x197 = UINT8_MAX;
	volatile int8_t x198 = 1;
	int16_t x199 = -1;
	uint8_t x200 = 0U;
	static int32_t t47 = -39860543;

    t47 = ((x197/x198)-(x199<=x200));

    if (t47 != 254) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x201 = 2421468LL;
	static uint8_t x202 = UINT8_MAX;
	int32_t x203 = INT32_MIN;

    t48 = ((x201/x202)-(x203<=x204));

    if (t48 != 9494LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x205 = INT64_MAX;
	int16_t x207 = 0;
	int8_t x208 = 21;
	int64_t t49 = 6024LL;

    t49 = ((x205/x206)-(x207<=x208));

    if (t49 != 2147483647LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x209 = -1LL;
	static int16_t x210 = INT16_MIN;
	static uint8_t x211 = UINT8_MAX;
	int16_t x212 = INT16_MAX;
	volatile int64_t t50 = -120186615632362522LL;

    t50 = ((x209/x210)-(x211<=x212));

    if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x213 = UINT64_MAX;
	volatile uint32_t x214 = 9U;
	static uint64_t x216 = UINT64_MAX;

    t51 = ((x213/x214)-(x215<=x216));

    if (t51 != 2049638230412172400LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x217 = UINT64_MAX;
	int8_t x218 = 1;
	int64_t x219 = INT64_MIN;
	int16_t x220 = -30;
	uint64_t t52 = 225892LLU;

    t52 = ((x217/x218)-(x219<=x220));

    if (t52 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x221 = -1;
	int64_t x222 = INT64_MIN;
	uint64_t x223 = UINT64_MAX;
	static int64_t t53 = -78LL;

    t53 = ((x221/x222)-(x223<=x224));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x225 = -476LL;
	int32_t x226 = -1;
	int16_t x227 = INT16_MIN;
	static int16_t x228 = -1;
	static volatile int64_t t54 = 20769848688480LL;

    t54 = ((x225/x226)-(x227<=x228));

    if (t54 != 475LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x229 = UINT64_MAX;
	int16_t x230 = INT16_MIN;
	volatile int8_t x231 = INT8_MIN;
	volatile uint32_t x232 = 302540U;

    t55 = ((x229/x230)-(x231<=x232));

    if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x234 = 6U;
	int64_t x235 = -3528555030621309052LL;

    t56 = ((x233/x234)-(x235<=x236));

    if (t56 != 715827881U) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x237 = INT8_MIN;
	int8_t x238 = INT8_MAX;
	static uint8_t x239 = 1U;
	static int8_t x240 = INT8_MIN;
	int32_t t57 = 7430006;

    t57 = ((x237/x238)-(x239<=x240));

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint16_t x242 = UINT16_MAX;
	uint16_t x243 = UINT16_MAX;
	uint64_t x244 = 3074295110208865551LLU;
	volatile int64_t t58 = 2178485816352040799LL;

    t58 = ((x241/x242)-(x243<=x244));

    if (t58 != 126267011638LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x245 = -1LL;
	static uint8_t x246 = UINT8_MAX;
	int16_t x247 = 252;
	int64_t x248 = -1LL;
	int64_t t59 = 982413554503LL;

    t59 = ((x245/x246)-(x247<=x248));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x249 = -21;
	static int8_t x252 = -1;

    t60 = ((x249/x250)-(x251<=x252));

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x254 = 1;
	int32_t x255 = -87;
	int8_t x256 = -52;
	volatile int64_t t61 = -13873LL;

    t61 = ((x253/x254)-(x255<=x256));

    if (t61 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x257 = -1;
	volatile int64_t x259 = -1LL;
	uint16_t x260 = 8745U;
	volatile int32_t t62 = 0;

    t62 = ((x257/x258)-(x259<=x260));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x261 = 780481287150628LLU;
	uint32_t x262 = 359231581U;
	int64_t x263 = -1LL;
	int32_t x264 = INT32_MIN;
	volatile uint64_t t63 = 17461535344LLU;

    t63 = ((x261/x262)-(x263<=x264));

    if (t63 != 2172641LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x265 = 1U;
	int8_t x268 = -6;
	int64_t t64 = -6451928992391023LL;

    t64 = ((x265/x266)-(x267<=x268));

    if (t64 != -2LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x270 = INT16_MIN;
	volatile int64_t x271 = INT64_MIN;
	static int32_t t65 = 4359155;

    t65 = ((x269/x270)-(x271<=x272));

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x274 = INT16_MIN;
	int64_t x275 = -1LL;
	int8_t x276 = INT8_MIN;
	volatile int32_t t66 = -158;

    t66 = ((x273/x274)-(x275<=x276));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x277 = INT16_MIN;
	static int32_t x279 = INT32_MIN;
	int16_t x280 = INT16_MAX;
	volatile int32_t t67 = 14;

    t67 = ((x277/x278)-(x279<=x280));

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x281 = 385288U;
	int64_t x282 = INT64_MAX;
	volatile int32_t x283 = -1;
	uint32_t x284 = 2676U;
	volatile int64_t t68 = -155723315539127457LL;

    t68 = ((x281/x282)-(x283<=x284));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x286 = UINT16_MAX;
	volatile int8_t x288 = -1;
	static volatile int64_t t69 = 15LL;

    t69 = ((x285/x286)-(x287<=x288));

    if (t69 != -140739635871744LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x289 = -1;
	int16_t x290 = -441;
	uint32_t x291 = 2910171U;
	static int32_t x292 = -3;
	volatile int32_t t70 = 97;

    t70 = ((x289/x290)-(x291<=x292));

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x293 = -7;
	int64_t x294 = -1LL;
	uint64_t x296 = UINT64_MAX;

    t71 = ((x293/x294)-(x295<=x296));

    if (t71 != 6LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x297 = -30138;
	static uint64_t x298 = 2693550941850LLU;
	volatile uint32_t x300 = 6U;
	volatile uint64_t t72 = 5521208254421383950LLU;

    t72 = ((x297/x298)-(x299<=x300));

    if (t72 != 6848485LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x301 = INT32_MIN;
	static int8_t x302 = INT8_MIN;
	int16_t x304 = INT16_MIN;
	int32_t t73 = 83;

    t73 = ((x301/x302)-(x303<=x304));

    if (t73 != 16777215) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x306 = -1;
	uint16_t x307 = 605U;
	uint16_t x308 = 290U;

    t74 = ((x305/x306)-(x307<=x308));

    if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x309 = 83342LLU;
	int32_t x311 = INT32_MIN;
	uint64_t x312 = 4439721794915926LLU;
	volatile uint64_t t75 = 243977428LLU;

    t75 = ((x309/x310)-(x311<=x312));

    if (t75 != 303LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x314 = INT64_MIN;
	uint16_t x315 = 37U;
	uint8_t x316 = 100U;
	volatile int64_t t76 = 32230393943401027LL;

    t76 = ((x313/x314)-(x315<=x316));

    if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x317 = 1797047256LL;
	volatile uint32_t x318 = UINT32_MAX;
	int8_t x319 = 52;
	uint16_t x320 = UINT16_MAX;

    t77 = ((x317/x318)-(x319<=x320));

    if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x321 = -1;
	int64_t x322 = INT64_MAX;
	volatile int64_t t78 = -2394971404515742LL;

    t78 = ((x321/x322)-(x323<=x324));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x325 = INT8_MAX;
	volatile int16_t x326 = INT16_MIN;
	static volatile int16_t x327 = -1;
	uint32_t x328 = UINT32_MAX;
	volatile int32_t t79 = 6905;

    t79 = ((x325/x326)-(x327<=x328));

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x330 = INT8_MIN;
	static int32_t x331 = -2362220;
	uint64_t x332 = 231909145359448LLU;
	volatile int32_t t80 = -511255;

    t80 = ((x329/x330)-(x331<=x332));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x334 = 1814;
	int8_t x335 = INT8_MIN;
	volatile int64_t t81 = -94689655333986LL;

    t81 = ((x333/x334)-(x335<=x336));

    if (t81 != -5084549083161398LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x337 = -1LL;
	int32_t x338 = INT32_MAX;
	int64_t x339 = INT64_MAX;
	int16_t x340 = 173;

    t82 = ((x337/x338)-(x339<=x340));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x345 = -1LL;
	uint32_t x346 = 23248U;
	int8_t x347 = INT8_MAX;
	int8_t x348 = INT8_MIN;
	int64_t t83 = 204895131742178LL;

    t83 = ((x345/x346)-(x347<=x348));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x349 = UINT32_MAX;
	uint16_t x350 = 4U;
	int16_t x351 = -1;
	volatile int16_t x352 = -1;
	volatile uint32_t t84 = 41U;

    t84 = ((x349/x350)-(x351<=x352));

    if (t84 != 1073741822U) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x353 = 0U;
	volatile int32_t x356 = -1;
	volatile int32_t t85 = 13767415;

    t85 = ((x353/x354)-(x355<=x356));

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x358 = -132;
	int16_t x359 = -13;
	static int8_t x360 = -1;
	volatile uint32_t t86 = 117195U;

    t86 = ((x357/x358)-(x359<=x360));

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x361 = INT64_MAX;
	int8_t x362 = -1;
	int32_t x363 = INT32_MAX;
	volatile uint8_t x364 = 16U;
	volatile int64_t t87 = 27074419168LL;

    t87 = ((x361/x362)-(x363<=x364));

    if (t87 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x365 = -2503587263185616881LL;
	static uint64_t x366 = UINT64_MAX;
	int64_t x367 = INT64_MIN;
	static int16_t x368 = INT16_MIN;
	volatile uint64_t t88 = UINT64_MAX;

    t88 = ((x365/x366)-(x367<=x368));

    if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint16_t x369 = UINT16_MAX;
	int32_t x371 = INT32_MAX;

    t89 = ((x369/x370)-(x371<=x372));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x373 = INT16_MIN;
	uint32_t x374 = 3U;
	static int32_t x375 = 3648340;
	static int64_t x376 = INT64_MAX;
	volatile uint32_t t90 = 1006237U;

    t90 = ((x373/x374)-(x375<=x376));

    if (t90 != 1431644841U) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x377 = INT16_MIN;
	int16_t x378 = INT16_MAX;
	int64_t x379 = INT64_MIN;
	int32_t t91 = 6119;

    t91 = ((x377/x378)-(x379<=x380));

    if (t91 != -2) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x383 = INT8_MAX;
	int64_t x384 = INT64_MIN;
	volatile int64_t t92 = -699075858165632792LL;

    t92 = ((x381/x382)-(x383<=x384));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x385 = 1783LLU;
	volatile int16_t x386 = -1;
	int16_t x387 = INT16_MAX;
	static int16_t x388 = -4809;
	uint64_t t93 = 13136488446028LLU;

    t93 = ((x385/x386)-(x387<=x388));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x389 = 23;
	uint32_t x390 = UINT32_MAX;
	int32_t x391 = -13852413;
	uint32_t t94 = UINT32_MAX;

    t94 = ((x389/x390)-(x391<=x392));

    if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x393 = 10102739LLU;
	uint32_t x395 = 15761U;
	volatile uint64_t t95 = 1484598LLU;

    t95 = ((x393/x394)-(x395<=x396));

    if (t95 != 39617LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int64_t x398 = INT64_MIN;
	int8_t x399 = -1;

    t96 = ((x397/x398)-(x399<=x400));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x401 = INT16_MIN;
	int64_t x402 = INT64_MIN;
	static uint64_t x404 = 55144540534LLU;
	static volatile int64_t t97 = -4903738305LL;

    t97 = ((x401/x402)-(x403<=x404));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x406 = 1;
	volatile int64_t x407 = INT64_MIN;
	int64_t x408 = -13687724026LL;
	int32_t t98 = -448476518;

    t98 = ((x405/x406)-(x407<=x408));

    if (t98 != 65534) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x409 = 19U;
	int32_t x410 = -1;
	volatile uint64_t x411 = UINT64_MAX;
	volatile int16_t x412 = INT16_MAX;
	int32_t t99 = -44697;

    t99 = ((x409/x410)-(x411<=x412));

    if (t99 != -19) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x413 = -151;
	static int8_t x414 = -1;
	uint32_t x416 = 34459U;
	int32_t t100 = -46075024;

    t100 = ((x413/x414)-(x415<=x416));

    if (t100 != 151) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x417 = INT64_MAX;
	int16_t x418 = INT16_MIN;
	volatile int16_t x419 = 8;
	int8_t x420 = 1;
	int64_t t101 = -4275364405921LL;

    t101 = ((x417/x418)-(x419<=x420));

    if (t101 != -281474976710655LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x421 = 59LLU;
	uint32_t x423 = 8061918U;
	int8_t x424 = INT8_MIN;

    t102 = ((x421/x422)-(x423<=x424));

    if (t102 != UINT64_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x425 = INT64_MAX;
	uint16_t x426 = UINT16_MAX;

    t103 = ((x425/x426)-(x427<=x428));

    if (t103 != 140739635871743LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x429 = INT16_MIN;
	int32_t x432 = INT32_MIN;
	volatile uint32_t t104 = 161877U;

    t104 = ((x429/x430)-(x431<=x432));

    if (t104 != 139U) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x437 = INT64_MIN;
	int8_t x439 = -1;
	uint64_t x440 = UINT64_MAX;
	int64_t t105 = 819974306423391LL;

    t105 = ((x437/x438)-(x439<=x440));

    if (t105 != -85401592933840517LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint8_t x441 = 1U;
	int8_t x442 = -1;
	int64_t x443 = INT64_MIN;
	static volatile int32_t t106 = 1;

    t106 = ((x441/x442)-(x443<=x444));

    if (t106 != -2) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x445 = 30U;
	volatile int32_t x446 = -1;
	int32_t x447 = INT32_MIN;
	uint64_t x448 = UINT64_MAX;
	volatile int32_t t107 = -975762938;

    t107 = ((x445/x446)-(x447<=x448));

    if (t107 != -31) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x449 = 2793;
	uint8_t x451 = 1U;
	static int16_t x452 = INT16_MAX;

    t108 = ((x449/x450)-(x451<=x452));

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x453 = INT8_MAX;
	int32_t x454 = -1377777;
	int64_t x455 = INT64_MAX;
	int64_t x456 = INT64_MIN;
	int32_t t109 = 0;

    t109 = ((x453/x454)-(x455<=x456));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x458 = -41LL;
	static volatile uint32_t x459 = UINT32_MAX;
	volatile int8_t x460 = -2;

    t110 = ((x457/x458)-(x459<=x460));

    if (t110 != -1598LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x461 = INT16_MAX;
	static int64_t x462 = INT64_MAX;
	static uint16_t x464 = 27360U;
	static int64_t t111 = 5842553541495LL;

    t111 = ((x461/x462)-(x463<=x464));

    if (t111 != -1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x465 = UINT64_MAX;
	static int64_t x466 = INT64_MIN;
	volatile int32_t x467 = -1;
	uint64_t t112 = 118LLU;

    t112 = ((x465/x466)-(x467<=x468));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x470 = UINT8_MAX;
	volatile int32_t t113 = 187;

    t113 = ((x469/x470)-(x471<=x472));

    if (t113 != -8421504) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x473 = -1LL;
	static int16_t x475 = INT16_MAX;
	int32_t x476 = INT32_MIN;
	int64_t t114 = 2834029385701LL;

    t114 = ((x473/x474)-(x475<=x476));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x477 = INT16_MAX;
	int16_t x478 = INT16_MAX;
	int8_t x479 = 25;
	int8_t x480 = -1;
	int32_t t115 = 62;

    t115 = ((x477/x478)-(x479<=x480));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint16_t x481 = 25U;
	volatile int32_t x482 = INT32_MIN;
	uint32_t x483 = UINT32_MAX;
	static volatile int64_t x484 = INT64_MAX;
	static int32_t t116 = -3;

    t116 = ((x481/x482)-(x483<=x484));

    if (t116 != -1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x486 = UINT8_MAX;
	int16_t x487 = -3;
	static volatile int32_t x488 = INT32_MIN;
	int64_t t117 = -4LL;

    t117 = ((x485/x486)-(x487<=x488));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x489 = INT16_MAX;
	static int32_t x490 = -3;
	static int16_t x491 = -1;
	int64_t x492 = INT64_MAX;
	volatile int32_t t118 = 0;

    t118 = ((x489/x490)-(x491<=x492));

    if (t118 != -10923) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x494 = 60152LL;
	int16_t x495 = INT16_MIN;
	volatile int64_t t119 = 190527LL;

    t119 = ((x493/x494)-(x495<=x496));

    if (t119 != -1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x497 = 20;
	volatile uint64_t x498 = 858926724LLU;
	int32_t x499 = INT32_MAX;
	int32_t x500 = INT32_MAX;
	volatile uint64_t t120 = UINT64_MAX;

    t120 = ((x497/x498)-(x499<=x500));

    if (t120 != UINT64_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x501 = -1;
	uint64_t x502 = UINT64_MAX;
	int64_t x504 = INT64_MIN;
	volatile uint64_t t121 = 6180400659LLU;

    t121 = ((x501/x502)-(x503<=x504));

    if (t121 != 1LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x505 = 104;
	uint32_t x506 = 831393240U;
	uint32_t x507 = UINT32_MAX;
	int64_t x508 = INT64_MAX;
	volatile uint32_t t122 = UINT32_MAX;

    t122 = ((x505/x506)-(x507<=x508));

    if (t122 != UINT32_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x509 = INT32_MIN;
	int16_t x510 = INT16_MIN;
	static int8_t x511 = 0;
	int32_t t123 = -10;

    t123 = ((x509/x510)-(x511<=x512));

    if (t123 != 65535) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x513 = INT8_MAX;
	volatile int16_t x514 = -1;
	volatile int16_t x515 = INT16_MIN;
	int16_t x516 = 4;
	volatile int32_t t124 = 0;

    t124 = ((x513/x514)-(x515<=x516));

    if (t124 != -128) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x517 = INT8_MAX;
	int32_t x518 = INT32_MIN;
	int16_t x519 = INT16_MIN;
	uint16_t x520 = 5U;
	int32_t t125 = 19546979;

    t125 = ((x517/x518)-(x519<=x520));

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x521 = INT64_MIN;
	int32_t x522 = INT32_MIN;
	static int16_t x523 = 213;
	int8_t x524 = INT8_MIN;
	int64_t t126 = -3215134637505673443LL;

    t126 = ((x521/x522)-(x523<=x524));

    if (t126 != 4294967296LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x525 = INT32_MIN;
	uint32_t x527 = 2U;
	static volatile int32_t x528 = INT32_MAX;

    t127 = ((x525/x526)-(x527<=x528));

    if (t127 != -65539) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x529 = -1;
	int8_t x530 = 1;
	uint8_t x531 = UINT8_MAX;
	int32_t t128 = 63;

    t128 = ((x529/x530)-(x531<=x532));

    if (t128 != -2) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x533 = UINT64_MAX;
	static int8_t x534 = 1;
	int32_t x535 = INT32_MAX;
	int32_t x536 = 571347263;
	static volatile uint64_t t129 = UINT64_MAX;

    t129 = ((x533/x534)-(x535<=x536));

    if (t129 != UINT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x537 = -1;
	static int8_t x538 = -1;
	volatile int32_t x539 = 5461;
	volatile int32_t t130 = 16;

    t130 = ((x537/x538)-(x539<=x540));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x545 = 30475;
	uint16_t x546 = 52U;
	int64_t x547 = INT64_MIN;
	static volatile int32_t x548 = -1;
	volatile int32_t t131 = 58603742;

    t131 = ((x545/x546)-(x547<=x548));

    if (t131 != 585) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x549 = UINT16_MAX;
	int64_t x551 = -1LL;
	int16_t x552 = -7;

    t132 = ((x549/x550)-(x551<=x552));

    if (t132 != 10922) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x553 = 307U;
	static volatile int16_t x556 = INT16_MIN;

    t133 = ((x553/x554)-(x555<=x556));

    if (t133 != UINT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x557 = INT64_MIN;
	int32_t x560 = INT32_MIN;
	volatile int64_t t134 = 45LL;

    t134 = ((x557/x558)-(x559<=x560));

    if (t134 != -838488366986797800LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x562 = INT8_MAX;
	uint64_t x563 = UINT64_MAX;
	volatile uint8_t x564 = 11U;
	volatile int32_t t135 = 30854590;

    t135 = ((x561/x562)-(x563<=x564));

    if (t135 != -258) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x566 = INT8_MIN;
	int64_t x568 = INT64_MAX;
	int64_t t136 = -74184452LL;

    t136 = ((x565/x566)-(x567<=x568));

    if (t136 != 108LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x569 = 14355673955794LLU;
	static int8_t x570 = -1;
	int8_t x571 = INT8_MIN;
	int8_t x572 = -6;

    t137 = ((x569/x570)-(x571<=x572));

    if (t137 != UINT64_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x573 = INT64_MIN;
	volatile int32_t x574 = -32366;
	static uint64_t x575 = 1839867909338244LLU;
	int8_t x576 = -1;
	static volatile int64_t t138 = 71591774422LL;

    t138 = ((x573/x574)-(x575<=x576));

    if (t138 != 284971020109211LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x577 = INT32_MIN;
	static uint32_t x579 = UINT32_MAX;
	volatile uint16_t x580 = UINT16_MAX;

    t139 = ((x577/x578)-(x579<=x580));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint32_t x581 = 32367U;
	static int32_t x582 = INT32_MIN;
	volatile uint8_t x583 = 4U;
	uint8_t x584 = 0U;
	uint32_t t140 = 5269103U;

    t140 = ((x581/x582)-(x583<=x584));

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x585 = -1LL;
	int16_t x586 = -6545;
	int32_t x587 = -906310;
	uint8_t x588 = 52U;
	volatile int64_t t141 = 482527414LL;

    t141 = ((x585/x586)-(x587<=x588));

    if (t141 != -1LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x589 = 75209149;
	volatile uint16_t x590 = 15U;
	uint8_t x591 = UINT8_MAX;
	int32_t x592 = -1;
	int32_t t142 = -7170;

    t142 = ((x589/x590)-(x591<=x592));

    if (t142 != 5013943) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x593 = INT64_MIN;
	uint64_t x594 = UINT64_MAX;
	int32_t x596 = 0;

    t143 = ((x593/x594)-(x595<=x596));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint8_t x599 = 6U;
	volatile int16_t x600 = -1;
	int32_t t144 = 13311921;

    t144 = ((x597/x598)-(x599<=x600));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x601 = UINT64_MAX;
	int8_t x602 = INT8_MIN;
	int16_t x603 = -42;
	int32_t x604 = INT32_MAX;
	uint64_t t145 = 2LLU;

    t145 = ((x601/x602)-(x603<=x604));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x606 = 148611602166406139LL;
	uint64_t x607 = 56222417279860LLU;
	uint64_t t146 = 1952567861368581985LLU;

    t146 = ((x605/x606)-(x607<=x608));

    if (t146 != 124LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x609 = INT32_MAX;
	int16_t x611 = -580;
	int8_t x612 = -46;
	int64_t t147 = -3508683191769419610LL;

    t147 = ((x609/x610)-(x611<=x612));

    if (t147 != -2LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x613 = INT16_MIN;
	int16_t x615 = 498;
	volatile uint32_t x616 = 43208689U;
	int64_t t148 = 211LL;

    t148 = ((x613/x614)-(x615<=x616));

    if (t148 != -1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x618 = -1;
	int16_t x619 = -1;
	int32_t x620 = -1;

    t149 = ((x617/x618)-(x619<=x620));

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x621 = INT16_MIN;
	uint64_t x622 = 41044LLU;
	volatile uint64_t t150 = 2140914973LLU;

    t150 = ((x621/x622)-(x623<=x624));

    if (t150 != 449438263173899LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x625 = UINT16_MAX;
	volatile int64_t x626 = 1919840LL;
	volatile uint32_t x627 = UINT32_MAX;
	int64_t x628 = INT64_MIN;
	int64_t t151 = -207510LL;

    t151 = ((x625/x626)-(x627<=x628));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x631 = UINT32_MAX;
	volatile int32_t t152 = 85778139;

    t152 = ((x629/x630)-(x631<=x632));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint8_t x633 = 7U;
	static volatile int16_t x634 = INT16_MAX;
	int32_t x635 = 405347;
	int64_t x636 = INT64_MAX;
	volatile int32_t t153 = -4284;

    t153 = ((x633/x634)-(x635<=x636));

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x637 = 11037087339LL;
	volatile int32_t x638 = -53;
	uint16_t x639 = UINT16_MAX;
	int16_t x640 = 910;
	volatile int64_t t154 = 16217LL;

    t154 = ((x637/x638)-(x639<=x640));

    if (t154 != -208246930LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x641 = 24540LL;
	static int64_t x642 = INT64_MAX;
	uint16_t x643 = 10U;
	int8_t x644 = INT8_MAX;
	volatile int64_t t155 = 102198816791795LL;

    t155 = ((x641/x642)-(x643<=x644));

    if (t155 != -1LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x645 = -1;
	static volatile uint8_t x646 = 7U;
	int8_t x647 = INT8_MIN;
	int32_t x648 = INT32_MIN;
	volatile int32_t t156 = -36847;

    t156 = ((x645/x646)-(x647<=x648));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x649 = 612809426965LLU;
	uint8_t x650 = 123U;
	uint8_t x651 = 76U;
	int16_t x652 = INT16_MIN;

    t157 = ((x649/x650)-(x651<=x652));

    if (t157 != 4982190463LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x653 = UINT16_MAX;
	volatile uint32_t x655 = 109U;
	uint16_t x656 = UINT16_MAX;
	volatile uint64_t t158 = UINT64_MAX;

    t158 = ((x653/x654)-(x655<=x656));

    if (t158 != UINT64_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x657 = UINT16_MAX;
	int32_t x658 = INT32_MIN;
	int32_t x659 = INT32_MAX;
	static int32_t t159 = -7211;

    t159 = ((x657/x658)-(x659<=x660));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x662 = INT64_MIN;
	int64_t x663 = INT64_MAX;
	int32_t x664 = INT32_MIN;
	volatile int64_t t160 = -19756096748180692LL;

    t160 = ((x661/x662)-(x663<=x664));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x665 = -1;
	static uint32_t x666 = 1776U;
	uint8_t x667 = UINT8_MAX;
	static uint16_t x668 = 29339U;
	static volatile uint32_t t161 = 11U;

    t161 = ((x665/x666)-(x667<=x668));

    if (t161 != 2418336U) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x669 = -1;
	volatile int32_t x670 = 580352630;
	volatile uint32_t x671 = 593U;
	volatile int64_t x672 = INT64_MAX;
	volatile int32_t t162 = 51757002;

    t162 = ((x669/x670)-(x671<=x672));

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x673 = INT16_MIN;
	int16_t x674 = 51;
	int32_t x675 = INT32_MIN;
	volatile int32_t x676 = INT32_MAX;
	volatile int32_t t163 = 0;

    t163 = ((x673/x674)-(x675<=x676));

    if (t163 != -643) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x677 = 0U;
	volatile int8_t x678 = INT8_MIN;
	static volatile int64_t x680 = INT64_MIN;

    t164 = ((x677/x678)-(x679<=x680));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x681 = INT64_MIN;
	int8_t x682 = 20;
	int8_t x683 = 1;
	int64_t x684 = -1LL;
	volatile int64_t t165 = -647052605LL;

    t165 = ((x681/x682)-(x683<=x684));

    if (t165 != -461168601842738790LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x685 = -1;
	static int64_t x686 = -1LL;
	int32_t x688 = INT32_MIN;
	static int64_t t166 = -3712703142133951LL;

    t166 = ((x685/x686)-(x687<=x688));

    if (t166 != 1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x690 = 1039463838890LLU;
	uint32_t x691 = UINT32_MAX;
	volatile uint32_t x692 = 21613214U;
	static uint64_t t167 = 56408LLU;

    t167 = ((x689/x690)-(x691<=x692));

    if (t167 != 8873201LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x693 = INT16_MAX;
	uint64_t x694 = UINT64_MAX;
	uint16_t x695 = 9U;
	uint64_t x696 = 448LLU;
	uint64_t t168 = UINT64_MAX;

    t168 = ((x693/x694)-(x695<=x696));

    if (t168 != UINT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x697 = -1;
	uint32_t x699 = 14160474U;
	volatile int64_t x700 = INT64_MIN;
	int64_t t169 = 39588216687499LL;

    t169 = ((x697/x698)-(x699<=x700));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint8_t x702 = 4U;
	static uint8_t x704 = 21U;
	volatile int32_t t170 = -1;

    t170 = ((x701/x702)-(x703<=x704));

    if (t170 != -8192) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint8_t x706 = UINT8_MAX;
	int8_t x707 = 1;
	static int32_t x708 = -1;
	volatile int32_t t171 = 11;

    t171 = ((x705/x706)-(x707<=x708));

    if (t171 != -8421504) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x709 = 31657917U;
	int32_t x710 = -811;
	int8_t x711 = -1;
	int64_t x712 = 3596276682476LL;

    t172 = ((x709/x710)-(x711<=x712));

    if (t172 != UINT32_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x714 = INT16_MIN;
	int32_t x715 = INT32_MIN;
	int64_t x716 = -141980749LL;
	volatile int32_t t173 = 202931940;

    t173 = ((x713/x714)-(x715<=x716));

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x718 = 1U;
	int64_t x719 = INT64_MIN;
	int8_t x720 = INT8_MIN;
	uint32_t t174 = 597346273U;

    t174 = ((x717/x718)-(x719<=x720));

    if (t174 != 7U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x721 = 1U;
	int8_t x722 = INT8_MIN;
	int16_t x724 = INT16_MIN;
	int32_t t175 = 1198;

    t175 = ((x721/x722)-(x723<=x724));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x726 = -1;
	uint8_t x727 = 15U;
	volatile int32_t t176 = -3442821;

    t176 = ((x725/x726)-(x727<=x728));

    if (t176 != -5) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x729 = UINT32_MAX;
	static volatile int64_t x732 = INT64_MIN;

    t177 = ((x729/x730)-(x731<=x732));

    if (t177 != 2289428LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint8_t x733 = 7U;
	static volatile int64_t x734 = INT64_MAX;
	static int8_t x735 = -1;
	int32_t x736 = -1;
	volatile int64_t t178 = 1942457LL;

    t178 = ((x733/x734)-(x735<=x736));

    if (t178 != -1LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x738 = 2LLU;
	static int64_t x739 = -1LL;
	uint64_t t179 = 27151LLU;

    t179 = ((x737/x738)-(x739<=x740));

    if (t179 != 9223372035781033984LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x745 = INT8_MIN;
	int8_t x746 = -4;
	int16_t x747 = -1;
	static uint64_t x748 = 1021979810138266217LLU;

    t180 = ((x745/x746)-(x747<=x748));

    if (t180 != 32) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x749 = -1LL;
	static uint16_t x750 = 96U;
	int32_t x751 = 102826684;
	static int16_t x752 = INT16_MIN;
	volatile int64_t t181 = -15LL;

    t181 = ((x749/x750)-(x751<=x752));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x753 = -1;
	int16_t x754 = -1;
	volatile int8_t x755 = INT8_MAX;
	int32_t t182 = 35562;

    t182 = ((x753/x754)-(x755<=x756));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x757 = UINT64_MAX;
	int8_t x758 = INT8_MAX;
	uint64_t x759 = UINT64_MAX;
	uint32_t x760 = 5235U;

    t183 = ((x757/x758)-(x759<=x760));

    if (t183 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint64_t x761 = 23230025061552LLU;
	int8_t x762 = 1;
	uint32_t x763 = 0U;
	static int16_t x764 = INT16_MIN;

    t184 = ((x761/x762)-(x763<=x764));

    if (t184 != 23230025061551LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x765 = INT16_MIN;
	volatile uint16_t x767 = 14U;
	static uint16_t x768 = UINT16_MAX;
	int32_t t185 = -221;

    t185 = ((x765/x766)-(x767<=x768));

    if (t185 != 18) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x769 = 1693U;
	static int64_t x770 = INT64_MIN;
	uint16_t x771 = 145U;
	static volatile int64_t x772 = -81388344459LL;
	static int64_t t186 = 1LL;

    t186 = ((x769/x770)-(x771<=x772));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x773 = INT16_MIN;
	int8_t x774 = INT8_MIN;
	int16_t x775 = -4;
	volatile uint32_t x776 = UINT32_MAX;

    t187 = ((x773/x774)-(x775<=x776));

    if (t187 != 255) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x777 = INT16_MIN;
	uint64_t x778 = UINT64_MAX;
	static int8_t x779 = -1;

    t188 = ((x777/x778)-(x779<=x780));

    if (t188 != UINT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x781 = 3;
	uint64_t x782 = UINT64_MAX;
	uint16_t x783 = 1015U;
	volatile int8_t x784 = INT8_MAX;
	uint64_t t189 = 40196662058LLU;

    t189 = ((x781/x782)-(x783<=x784));

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x785 = 5071222U;
	volatile int8_t x786 = INT8_MIN;
	static uint16_t x788 = 185U;
	volatile uint32_t t190 = 4882212U;

    t190 = ((x785/x786)-(x787<=x788));

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x789 = -21;
	int8_t x791 = INT8_MIN;
	int8_t x792 = -3;
	static volatile int64_t t191 = -1191841629970LL;

    t191 = ((x789/x790)-(x791<=x792));

    if (t191 != -1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x793 = INT32_MIN;
	int16_t x795 = -1;
	int32_t x796 = INT32_MAX;

    t192 = ((x793/x794)-(x795<=x796));

    if (t192 != -2) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x797 = -3386;
	uint64_t x798 = UINT64_MAX;
	uint8_t x799 = UINT8_MAX;
	uint64_t x800 = UINT64_MAX;
	uint64_t t193 = UINT64_MAX;

    t193 = ((x797/x798)-(x799<=x800));

    if (t193 != UINT64_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x801 = 3;
	uint64_t x802 = 3813183649194LLU;
	static int64_t x803 = INT64_MAX;
	volatile int16_t x804 = 0;

    t194 = ((x801/x802)-(x803<=x804));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x809 = INT16_MIN;
	volatile uint8_t x810 = 64U;
	static int8_t x811 = 29;
	int32_t x812 = INT32_MAX;
	int32_t t195 = 1;

    t195 = ((x809/x810)-(x811<=x812));

    if (t195 != -513) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x814 = INT32_MAX;
	static int8_t x815 = INT8_MAX;
	int32_t x816 = INT32_MIN;

    t196 = ((x813/x814)-(x815<=x816));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x817 = -1;
	static int16_t x818 = -7;
	static int16_t x820 = 776;
	volatile int32_t t197 = 534246;

    t197 = ((x817/x818)-(x819<=x820));

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x821 = INT16_MAX;
	int8_t x822 = 3;
	volatile int32_t x823 = INT32_MIN;
	volatile int32_t t198 = 0;

    t198 = ((x821/x822)-(x823<=x824));

    if (t198 != 10921) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x825 = 546970148517LL;
	int16_t x826 = INT16_MIN;
	volatile int16_t x827 = INT16_MAX;
	uint64_t x828 = 459LLU;
	static int64_t t199 = 1LL;

    t199 = ((x825/x826)-(x827<=x828));

    if (t199 != -16692204LL) { NG(); } else { ; }
	
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

