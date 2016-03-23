
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

static int64_t x2 = -1LL;
int8_t x3 = -25;
int16_t x18 = -1;
int32_t x20 = INT32_MIN;
int16_t x22 = 92;
int64_t x23 = -60599587LL;
static int32_t x25 = -5;
int8_t x27 = -3;
uint64_t x28 = 86224112LLU;
int32_t x31 = INT32_MAX;
volatile int16_t x35 = 47;
int8_t x60 = INT8_MAX;
uint8_t x61 = 0U;
static uint16_t x65 = 2462U;
int8_t x67 = -1;
uint32_t x70 = UINT32_MAX;
uint64_t x72 = 221LLU;
volatile uint64_t t14 = 50082154061110LLU;
int32_t x75 = INT32_MIN;
int8_t x79 = INT8_MIN;
static volatile int64_t t16 = 1982489791681320268LL;
uint16_t x83 = 870U;
int64_t t17 = -2161232651112615306LL;
int16_t x90 = INT16_MAX;
int8_t x103 = INT8_MIN;
uint16_t x104 = UINT16_MAX;
static int64_t x105 = INT64_MAX;
int8_t x106 = INT8_MIN;
int64_t x108 = -1LL;
static uint8_t x114 = 21U;
int64_t x116 = INT64_MIN;
static volatile int64_t t25 = -11LL;
int64_t t26 = -127LL;
static volatile uint32_t t31 = 160U;
static int64_t x149 = -4398603625122835LL;
static uint8_t x150 = UINT8_MAX;
uint8_t x154 = 99U;
int32_t t35 = -905;
static int32_t x162 = INT32_MAX;
uint64_t x165 = UINT64_MAX;
static int8_t x170 = INT8_MAX;
volatile uint64_t t39 = 4485982878869044445LLU;
int64_t t40 = 2679617449567698LL;
volatile int64_t x181 = -1LL;
int64_t x189 = -3023872920108969677LL;
volatile int32_t x192 = 42139;
volatile uint8_t x195 = 3U;
static volatile int32_t t46 = 84;
int32_t x205 = -100223;
uint64_t x208 = UINT64_MAX;
volatile int64_t t48 = 1403931570611889LL;
uint64_t x214 = UINT64_MAX;
uint32_t x216 = 62U;
static volatile uint32_t x221 = 28U;
int32_t x222 = -3170151;
volatile uint8_t x231 = UINT8_MAX;
volatile int64_t t53 = -772927589LL;
int32_t x236 = -1;
static volatile uint64_t t54 = 6067456962920LLU;
int8_t x247 = -1;
static int8_t x252 = INT8_MAX;
static uint8_t x259 = 1U;
int8_t x260 = INT8_MIN;
uint8_t x265 = UINT8_MAX;
int32_t x271 = INT32_MIN;
int16_t x276 = 396;
volatile int64_t x289 = 8040LL;
int64_t t68 = 14290720LL;
int32_t x297 = 22234;
static uint32_t x300 = UINT32_MAX;
volatile int64_t x306 = INT64_MIN;
int8_t x315 = INT8_MAX;
int8_t x325 = -1;
uint64_t x335 = 399091572LLU;
volatile uint64_t t78 = 3988615125516LLU;
static int64_t x338 = 32848374551556698LL;
static uint8_t x340 = 8U;
volatile int64_t t79 = -172540327417796LL;
int8_t x341 = INT8_MAX;
uint16_t x343 = 1779U;
uint64_t t80 = 72912050LLU;
volatile int64_t x345 = -1LL;
uint32_t x348 = 162U;
int16_t x355 = -15638;
int16_t x356 = 30;
int64_t x369 = -1LL;
int8_t x373 = 0;
static uint32_t t89 = 28U;
uint64_t x384 = 216520732640LLU;
uint64_t x387 = 359LLU;
int64_t t93 = 59LL;
static uint64_t x400 = 1750293422LLU;
uint16_t x402 = 4903U;
int32_t t96 = 39040;
volatile int16_t x417 = INT16_MIN;
static int16_t x424 = -115;
int8_t x425 = INT8_MAX;
int16_t x430 = -1;
int64_t t101 = -27989182116LL;
int64_t x434 = INT64_MIN;
static int64_t x436 = INT64_MIN;
int64_t x438 = INT64_MIN;
volatile int16_t x448 = INT16_MAX;
int8_t x451 = INT8_MAX;
uint8_t x456 = UINT8_MAX;
int32_t x458 = -340614233;
int64_t t108 = 308470686LL;
uint64_t x461 = 51808LLU;
static uint8_t x462 = UINT8_MAX;
static int32_t x466 = 27;
static uint64_t x467 = UINT64_MAX;
int16_t x470 = 983;
int64_t x472 = -1009720797416679805LL;
int64_t x478 = -1LL;
uint16_t x485 = 137U;
static volatile uint64_t x487 = 565323233129162331LLU;
uint64_t t115 = 71878068688202016LLU;
int32_t x490 = INT32_MIN;
volatile int64_t x492 = 12756LL;
static int8_t x493 = INT8_MIN;
uint32_t x500 = 264530221U;
int64_t x506 = INT64_MIN;
uint32_t x513 = 249809843U;
int64_t x517 = 296841LL;
uint32_t x519 = UINT32_MAX;
volatile int64_t t122 = -516634187354235LL;
static volatile int64_t t123 = -311663566023907LL;
int8_t x525 = INT8_MIN;
int8_t x529 = INT8_MAX;
int8_t x532 = INT8_MIN;
int32_t t125 = -167;
int64_t x540 = INT64_MIN;
volatile uint8_t x542 = UINT8_MAX;
uint32_t x547 = 3U;
int8_t x552 = -1;
volatile int32_t t130 = -135;
volatile int64_t x553 = INT64_MIN;
int16_t x559 = INT16_MAX;
volatile int32_t t133 = 113513625;
static uint16_t x567 = 10U;
uint64_t t134 = 8525597356993766211LLU;
volatile int8_t x571 = INT8_MIN;
int32_t x578 = INT32_MIN;
int64_t t137 = -10LL;
uint64_t x584 = UINT64_MAX;
int16_t x598 = INT16_MAX;
volatile int8_t x606 = INT8_MAX;
int32_t x621 = INT32_MAX;
int64_t x625 = -1LL;
int32_t x632 = INT32_MAX;
uint64_t t148 = 205957872518422LLU;
volatile int16_t x634 = INT16_MIN;
int8_t x635 = 0;
volatile int32_t x637 = INT32_MIN;
static int32_t x639 = INT32_MIN;
uint16_t x641 = 7U;
int64_t x642 = -8017LL;
int64_t t151 = 107189567413319158LL;
int16_t x652 = INT16_MIN;
uint64_t x654 = 4239704646979531LLU;
int8_t x660 = -1;
int32_t t155 = -1;
uint32_t t156 = 1275U;
uint32_t x667 = 2131U;
int16_t x670 = INT16_MAX;
int32_t x678 = INT32_MIN;
int16_t x679 = -4;
uint32_t t162 = 1625903208U;
uint32_t x692 = 1121611U;
uint64_t x693 = 56162336219LLU;
volatile uint64_t t164 = 3490589851724132794LLU;
int64_t x707 = INT64_MIN;
volatile int64_t t167 = 13285497548797LL;
volatile int8_t x710 = 28;
int8_t x715 = -30;
int8_t x717 = 1;
uint8_t x718 = 7U;
static int8_t x719 = INT8_MAX;
uint8_t x720 = 37U;
static uint64_t x721 = 509969LLU;
int32_t x722 = -233104926;
volatile int16_t x723 = INT16_MIN;
int16_t x730 = 210;
volatile uint16_t x733 = 0U;
int16_t x735 = -2;
uint16_t x738 = UINT16_MAX;
volatile uint64_t t175 = 2456021LLU;
int32_t x747 = INT32_MIN;
int32_t t178 = -22;
uint32_t x754 = 2U;
uint16_t x755 = 1U;
volatile int16_t x762 = INT16_MAX;
static volatile int16_t x764 = -34;
int16_t x765 = INT16_MAX;
static int32_t x768 = 37658;
int16_t x770 = INT16_MIN;
static volatile int32_t t183 = 577;
uint64_t x782 = UINT64_MAX;
static volatile uint64_t t185 = 52430671700273LLU;
static int32_t x786 = -1;
volatile int64_t x788 = -1LL;
int8_t x795 = INT8_MIN;
int16_t x798 = INT16_MAX;
int64_t x810 = -4141942LL;
volatile int64_t t192 = -655LL;
int64_t x817 = 1015094762820LL;
uint16_t x818 = UINT16_MAX;
int8_t x823 = INT8_MAX;
static volatile int32_t x828 = -1;
int32_t t196 = -21;
int16_t x837 = 1784;
uint64_t t197 = 1941733759603736LLU;


void f0(void) {
    	volatile int8_t x1 = INT8_MIN;
	uint32_t x4 = 2629493U;
	volatile int64_t t0 = 15156676213897LL;

    t0 = (((x1/x2)^x3)%x4);

    if (t0 != -153LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x9 = INT32_MAX;
	int32_t x10 = -1268;
	volatile uint16_t x11 = 22U;
	int16_t x12 = INT16_MIN;
	volatile int32_t t1 = -7;

    t1 = (((x9/x10)^x11)%x12);

    if (t1 != -22409) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x13 = 1;
	static volatile int64_t x14 = 78536LL;
	int8_t x15 = INT8_MIN;
	uint64_t x16 = 17LLU;
	static uint64_t t2 = 52894242LLU;

    t2 = (((x13/x14)^x15)%x16);

    if (t2 != 9LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = -1;
	volatile uint64_t x19 = UINT64_MAX;
	volatile uint64_t t3 = 3037923LLU;

    t3 = (((x17/x18)^x19)%x20);

    if (t3 != 2147483646LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x21 = 1U;
	int32_t x24 = INT32_MAX;
	static int64_t t4 = 13LL;

    t4 = (((x21/x22)^x23)%x24);

    if (t4 != -60599587LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x26 = 5823U;
	volatile uint64_t t5 = 3149LLU;

    t5 = (((x25/x26)^x27)%x28);

    if (t5 != 42544541LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x29 = INT64_MAX;
	int8_t x30 = INT8_MAX;
	static uint64_t x32 = 65436861329LLU;
	uint64_t t6 = 26593LLU;

    t6 = (((x29/x30)^x31)%x32);

    if (t6 != 8602265254LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x33 = 7865U;
	static int32_t x34 = -1;
	static uint32_t x36 = UINT32_MAX;
	volatile uint32_t t7 = 24786357U;

    t7 = (((x33/x34)^x35)%x36);

    if (t7 != 4294959464U) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = -2;
	volatile uint32_t x38 = UINT32_MAX;
	static uint32_t x39 = 109832U;
	volatile uint16_t x40 = 82U;
	volatile uint32_t t8 = 106208254U;

    t8 = (((x37/x38)^x39)%x40);

    if (t8 != 34U) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x45 = 0;
	volatile uint64_t x46 = 1988971893967492LLU;
	volatile int8_t x47 = 3;
	volatile int16_t x48 = -1;
	uint64_t t9 = 7461786336915065115LLU;

    t9 = (((x45/x46)^x47)%x48);

    if (t9 != 3LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x53 = INT16_MIN;
	int8_t x54 = 30;
	int32_t x55 = -1;
	volatile int32_t x56 = INT32_MAX;
	static int32_t t10 = 121;

    t10 = (((x53/x54)^x55)%x56);

    if (t10 != 1091) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int32_t x57 = -124;
	int64_t x58 = -1LL;
	uint16_t x59 = UINT16_MAX;
	static volatile int64_t t11 = -7760284573553143LL;

    t11 = (((x57/x58)^x59)%x60);

    if (t11 != 6LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x62 = INT64_MIN;
	volatile uint8_t x63 = 34U;
	static volatile int64_t x64 = 3427354332123800327LL;
	volatile int64_t t12 = -13976930133573857LL;

    t12 = (((x61/x62)^x63)%x64);

    if (t12 != 34LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x66 = 3662LL;
	uint16_t x68 = 4U;
	static volatile int64_t t13 = 677320650076965328LL;

    t13 = (((x65/x66)^x67)%x68);

    if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x69 = -101;
	static volatile int16_t x71 = INT16_MIN;

    t14 = (((x69/x70)^x71)%x72);

    if (t14 != 196LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x73 = 1021252136406671LL;
	int8_t x74 = INT8_MAX;
	static uint16_t x76 = UINT16_MAX;
	int64_t t15 = 525591507970376LL;

    t15 = (((x73/x74)^x75)%x76);

    if (t15 != -23366LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x77 = UINT32_MAX;
	uint32_t x78 = 22594265U;
	int64_t x80 = INT64_MAX;

    t16 = (((x77/x78)^x79)%x80);

    if (t16 != 4294967102LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x81 = 13;
	int32_t x82 = INT32_MAX;
	int64_t x84 = -1LL;

    t17 = (((x81/x82)^x83)%x84);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x85 = 247LLU;
	volatile int32_t x86 = INT32_MAX;
	uint64_t x87 = 3278LLU;
	static int32_t x88 = INT32_MIN;
	static volatile uint64_t t18 = 53858083546591437LLU;

    t18 = (((x85/x86)^x87)%x88);

    if (t18 != 3278LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x89 = INT16_MIN;
	volatile int64_t x91 = INT64_MIN;
	static int16_t x92 = INT16_MIN;
	static volatile int64_t t19 = -62LL;

    t19 = (((x89/x90)^x91)%x92);

    if (t19 != 32767LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x93 = -114;
	uint64_t x94 = UINT64_MAX;
	int16_t x95 = -1;
	int32_t x96 = INT32_MIN;
	volatile uint64_t t20 = 510269151852378449LLU;

    t20 = (((x93/x94)^x95)%x96);

    if (t20 != 2147483647LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x97 = 24471U;
	static uint16_t x98 = 2704U;
	int32_t x99 = -1;
	volatile int64_t x100 = 12109LL;
	static int64_t t21 = -8029810687LL;

    t21 = (((x97/x98)^x99)%x100);

    if (t21 != -10LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x101 = -1LL;
	static int8_t x102 = -18;
	int64_t t22 = -781744410085LL;

    t22 = (((x101/x102)^x103)%x104);

    if (t22 != -128LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x107 = 443028130058368LLU;
	static uint64_t t23 = 629839475500407139LLU;

    t23 = (((x105/x106)^x107)%x108);

    if (t23 != 18375129507801682049LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x113 = INT64_MIN;
	uint32_t x115 = UINT32_MAX;
	static volatile int64_t t24 = 733871511918290685LL;

    t24 = (((x113/x114)^x115)%x116);

    if (t24 != -439208195708058089LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x117 = 32;
	int8_t x118 = -1;
	static int16_t x119 = -1;
	int64_t x120 = INT64_MIN;

    t25 = (((x117/x118)^x119)%x120);

    if (t25 != 31LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x121 = -1LL;
	int64_t x122 = INT64_MAX;
	int64_t x123 = INT64_MIN;
	uint32_t x124 = 863645071U;

    t26 = (((x121/x122)^x123)%x124);

    if (t26 != -495516135LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x125 = -2;
	uint8_t x126 = 7U;
	int8_t x127 = -1;
	int64_t x128 = INT64_MIN;
	static volatile int64_t t27 = 31LL;

    t27 = (((x125/x126)^x127)%x128);

    if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x129 = INT8_MAX;
	int16_t x130 = 15;
	static uint32_t x131 = 3962906U;
	int8_t x132 = INT8_MAX;
	uint32_t t28 = 4979U;

    t28 = (((x129/x130)^x131)%x132);

    if (t28 != 117U) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x133 = UINT64_MAX;
	uint64_t x134 = 403911LLU;
	uint64_t x135 = 216366392848266LLU;
	int32_t x136 = -1;
	static uint64_t t29 = 1861545036648439978LLU;

    t29 = (((x133/x134)^x135)%x136);

    if (t29 != 260866832479644LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x137 = UINT32_MAX;
	static int64_t x138 = 3187612816051714466LL;
	uint32_t x139 = UINT32_MAX;
	volatile uint64_t x140 = 432363410888LLU;
	volatile uint64_t t30 = 180108LLU;

    t30 = (((x137/x138)^x139)%x140);

    if (t30 != 4294967295LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x141 = INT32_MIN;
	uint8_t x142 = UINT8_MAX;
	int8_t x143 = -1;
	static uint32_t x144 = 5U;

    t31 = (((x141/x142)^x143)%x144);

    if (t31 != 3U) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x145 = -11284;
	static int64_t x146 = -1LL;
	uint64_t x147 = UINT64_MAX;
	static volatile int8_t x148 = -1;
	volatile uint64_t t32 = 133775722LLU;

    t32 = (((x145/x146)^x147)%x148);

    if (t32 != 18446744073709540331LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x151 = -1LL;
	static int8_t x152 = INT8_MIN;
	volatile int64_t t33 = 343504LL;

    t33 = (((x149/x150)^x151)%x152);

    if (t33 != 72LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x153 = 24LLU;
	static int64_t x155 = -74LL;
	int8_t x156 = -1;
	static volatile uint64_t t34 = 489LLU;

    t34 = (((x153/x154)^x155)%x156);

    if (t34 != 18446744073709551542LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x157 = 2U;
	int16_t x158 = -1;
	uint16_t x159 = 1U;
	static int32_t x160 = INT32_MIN;

    t35 = (((x157/x158)^x159)%x160);

    if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int8_t x161 = 1;
	int16_t x163 = 0;
	static int64_t x164 = -1659911014155944772LL;
	int64_t t36 = -577136LL;

    t36 = (((x161/x162)^x163)%x164);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x166 = 55;
	static uint16_t x167 = 1610U;
	volatile int64_t x168 = 26LL;
	volatile uint64_t t37 = 10506LLU;

    t37 = (((x165/x166)^x167)%x168);

    if (t37 != 20LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x169 = 268297448620096LLU;
	int16_t x171 = INT16_MAX;
	uint8_t x172 = 21U;
	volatile uint64_t t38 = 12LLU;

    t38 = (((x169/x170)^x171)%x172);

    if (t38 != 12LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x173 = UINT64_MAX;
	uint16_t x174 = 3667U;
	int16_t x175 = 13;
	static int16_t x176 = INT16_MAX;

    t39 = (((x173/x174)^x175)%x176);

    if (t39 != 11788LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x177 = -31;
	int32_t x178 = INT32_MIN;
	uint16_t x179 = 3U;
	int64_t x180 = INT64_MIN;

    t40 = (((x177/x178)^x179)%x180);

    if (t40 != 3LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x182 = INT8_MIN;
	static uint64_t x183 = 1LLU;
	int16_t x184 = INT16_MIN;
	static uint64_t t41 = 30334903152635580LLU;

    t41 = (((x181/x182)^x183)%x184);

    if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x185 = INT16_MIN;
	uint64_t x186 = UINT64_MAX;
	int32_t x187 = INT32_MIN;
	int64_t x188 = INT64_MAX;
	volatile uint64_t t42 = 2367919620LLU;

    t42 = (((x185/x186)^x187)%x188);

    if (t42 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x190 = INT32_MIN;
	static int64_t x191 = -33392940LL;
	int64_t t43 = -41911445LL;

    t43 = (((x189/x190)^x191)%x192);

    if (t43 != -39944LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x193 = -1;
	uint32_t x194 = 23891208U;
	uint64_t x196 = 19385793958LLU;
	uint64_t t44 = 10688LLU;

    t44 = (((x193/x194)^x195)%x196);

    if (t44 != 176LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x197 = INT8_MIN;
	int16_t x198 = 140;
	volatile int32_t x199 = -1;
	int16_t x200 = INT16_MAX;
	int32_t t45 = 640093614;

    t45 = (((x197/x198)^x199)%x200);

    if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x201 = 1;
	volatile int8_t x202 = INT8_MAX;
	int8_t x203 = INT8_MIN;
	int32_t x204 = -895;

    t46 = (((x201/x202)^x203)%x204);

    if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x206 = INT16_MAX;
	volatile int32_t x207 = 823241;
	uint64_t t47 = 20411LLU;

    t47 = (((x205/x206)^x207)%x208);

    if (t47 != 18446744073708728372LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x209 = INT8_MIN;
	int64_t x210 = INT64_MAX;
	static int16_t x211 = -1;
	volatile int8_t x212 = INT8_MIN;

    t48 = (((x209/x210)^x211)%x212);

    if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x213 = INT32_MAX;
	int64_t x215 = -593871LL;
	volatile uint64_t t49 = 77056367118651996LLU;

    t49 = (((x213/x214)^x215)%x216);

    if (t49 != 43LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x217 = -1LL;
	int32_t x218 = -36873;
	volatile int16_t x219 = INT16_MIN;
	volatile int32_t x220 = INT32_MIN;
	volatile int64_t t50 = 1698201LL;

    t50 = (((x217/x218)^x219)%x220);

    if (t50 != -32768LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x223 = -3819249848LL;
	int32_t x224 = 1;
	static volatile int64_t t51 = 12379516076LL;

    t51 = (((x221/x222)^x223)%x224);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x225 = 10U;
	volatile int8_t x226 = -1;
	int16_t x227 = 418;
	static uint64_t x228 = UINT64_MAX;
	static uint64_t t52 = 4180320942357863LLU;

    t52 = (((x225/x226)^x227)%x228);

    if (t52 != 18446744073709551188LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint32_t x229 = 46025161U;
	int64_t x230 = 3870962374144LL;
	int16_t x232 = INT16_MAX;

    t53 = (((x229/x230)^x231)%x232);

    if (t53 != 255LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x233 = -1LL;
	uint8_t x234 = UINT8_MAX;
	uint64_t x235 = 398528639419LLU;

    t54 = (((x233/x234)^x235)%x236);

    if (t54 != 398528639419LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint16_t x237 = UINT16_MAX;
	static int64_t x238 = INT64_MIN;
	uint32_t x239 = 42U;
	static int8_t x240 = INT8_MAX;
	volatile int64_t t55 = -39218881834LL;

    t55 = (((x237/x238)^x239)%x240);

    if (t55 != 42LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x241 = INT64_MIN;
	int16_t x242 = INT16_MAX;
	int64_t x243 = -2921982873408290LL;
	int32_t x244 = INT32_MIN;
	int64_t t56 = -29431561052185LL;

    t56 = (((x241/x242)^x243)%x244);

    if (t56 != 657560358LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x245 = INT8_MAX;
	int64_t x246 = INT64_MAX;
	static int8_t x248 = -1;
	int64_t t57 = -932141871LL;

    t57 = (((x245/x246)^x247)%x248);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x249 = -14545;
	int16_t x250 = INT16_MIN;
	uint8_t x251 = 0U;
	int32_t t58 = -947;

    t58 = (((x249/x250)^x251)%x252);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x253 = -1;
	volatile int8_t x254 = INT8_MIN;
	volatile int16_t x255 = INT16_MIN;
	int32_t x256 = -4250;
	int32_t t59 = -1956;

    t59 = (((x253/x254)^x255)%x256);

    if (t59 != -3018) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x257 = 863277295538026828LLU;
	int64_t x258 = INT64_MIN;
	volatile uint64_t t60 = 2LLU;

    t60 = (((x257/x258)^x259)%x260);

    if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x261 = 19U;
	uint32_t x262 = UINT32_MAX;
	int64_t x263 = -1LL;
	int64_t x264 = INT64_MIN;
	static int64_t t61 = 660994895051931LL;

    t61 = (((x261/x262)^x263)%x264);

    if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x266 = INT64_MIN;
	static int64_t x267 = INT64_MIN;
	volatile int64_t x268 = INT64_MIN;
	int64_t t62 = -147333492383106LL;

    t62 = (((x265/x266)^x267)%x268);

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x269 = 151016053LLU;
	int16_t x270 = INT16_MIN;
	volatile uint8_t x272 = 5U;
	volatile uint64_t t63 = 5671169080619264180LLU;

    t63 = (((x269/x270)^x271)%x272);

    if (t63 != 3LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int64_t x273 = INT64_MAX;
	int8_t x274 = -51;
	static int64_t x275 = INT64_MIN;
	int64_t t64 = -363LL;

    t64 = (((x273/x274)^x275)%x276);

    if (t64 != 350LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x281 = 174204LLU;
	volatile int16_t x282 = -36;
	uint64_t x283 = 2092498147605931030LLU;
	int64_t x284 = INT64_MAX;
	uint64_t t65 = 1100063LLU;

    t65 = (((x281/x282)^x283)%x284);

    if (t65 != 2092498147605931030LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x285 = INT8_MIN;
	int8_t x286 = INT8_MIN;
	uint16_t x287 = 202U;
	int16_t x288 = INT16_MIN;
	int32_t t66 = -2;

    t66 = (((x285/x286)^x287)%x288);

    if (t66 != 203) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x290 = 216U;
	int8_t x291 = 0;
	static volatile uint64_t x292 = 32211408LLU;
	uint64_t t67 = 33026184425LLU;

    t67 = (((x289/x290)^x291)%x292);

    if (t67 != 37LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x293 = 5850251274531LL;
	static int16_t x294 = INT16_MIN;
	int16_t x295 = 9;
	int16_t x296 = -1;

    t68 = (((x293/x294)^x295)%x296);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x298 = INT8_MIN;
	uint64_t x299 = UINT64_MAX;
	uint64_t t69 = 1354798018961006LLU;

    t69 = (((x297/x298)^x299)%x300);

    if (t69 != 172LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x301 = UINT64_MAX;
	uint64_t x302 = 157728977315641977LLU;
	uint16_t x303 = 701U;
	volatile int64_t x304 = INT64_MIN;
	uint64_t t70 = 7306LLU;

    t70 = (((x301/x302)^x303)%x304);

    if (t70 != 713LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x305 = INT8_MAX;
	static volatile uint64_t x307 = 3763923068966LLU;
	static uint32_t x308 = 200708U;
	volatile uint64_t t71 = 328LLU;

    t71 = (((x305/x306)^x307)%x308);

    if (t71 != 183542LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int32_t x309 = -71682210;
	int8_t x310 = INT8_MIN;
	int8_t x311 = INT8_MIN;
	static uint16_t x312 = 54U;
	int32_t t72 = 5458;

    t72 = (((x309/x310)^x311)%x312);

    if (t72 != -23) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x313 = -1LL;
	uint16_t x314 = UINT16_MAX;
	int16_t x316 = INT16_MIN;
	int64_t t73 = 2073855655LL;

    t73 = (((x313/x314)^x315)%x316);

    if (t73 != 127LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x317 = 1U;
	static int16_t x318 = INT16_MAX;
	int16_t x319 = INT16_MIN;
	volatile uint32_t x320 = 55U;
	volatile uint32_t t74 = 880U;

    t74 = (((x317/x318)^x319)%x320);

    if (t74 != 38U) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x321 = -1;
	uint64_t x322 = UINT64_MAX;
	static uint8_t x323 = UINT8_MAX;
	int16_t x324 = -13;
	uint64_t t75 = 8603616673LLU;

    t75 = (((x321/x322)^x323)%x324);

    if (t75 != 254LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x326 = UINT8_MAX;
	volatile int8_t x327 = INT8_MIN;
	int64_t x328 = 985993LL;
	int64_t t76 = -429923689514506LL;

    t76 = (((x325/x326)^x327)%x328);

    if (t76 != -128LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x329 = -1;
	static int8_t x330 = INT8_MIN;
	volatile int8_t x331 = INT8_MIN;
	uint16_t x332 = 86U;
	volatile int32_t t77 = -6;

    t77 = (((x329/x330)^x331)%x332);

    if (t77 != -42) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x333 = UINT8_MAX;
	int16_t x334 = INT16_MAX;
	int64_t x336 = INT64_MIN;

    t78 = (((x333/x334)^x335)%x336);

    if (t78 != 399091572LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x337 = INT32_MIN;
	static volatile int8_t x339 = INT8_MIN;

    t79 = (((x337/x338)^x339)%x340);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x342 = INT64_MAX;
	static uint64_t x344 = UINT64_MAX;

    t80 = (((x341/x342)^x343)%x344);

    if (t80 != 1779LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x346 = -9621041LL;
	int64_t x347 = INT64_MAX;
	int64_t t81 = 1815465208LL;

    t81 = (((x345/x346)^x347)%x348);

    if (t81 != 25LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x349 = UINT32_MAX;
	int8_t x350 = -1;
	static int8_t x351 = INT8_MIN;
	int32_t x352 = -1;
	uint32_t t82 = 953434U;

    t82 = (((x349/x350)^x351)%x352);

    if (t82 != 4294967169U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x353 = 89U;
	uint16_t x354 = 8U;
	volatile int32_t t83 = -1476;

    t83 = (((x353/x354)^x355)%x356);

    if (t83 != -17) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x357 = 35758936349LLU;
	int32_t x358 = INT32_MAX;
	static volatile int64_t x359 = INT64_MIN;
	int16_t x360 = INT16_MIN;
	volatile uint64_t t84 = 300155220461LLU;

    t84 = (((x357/x358)^x359)%x360);

    if (t84 != 9223372036854775824LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x361 = -1;
	uint16_t x362 = 404U;
	uint16_t x363 = 2U;
	uint8_t x364 = 2U;
	volatile int32_t t85 = -192;

    t85 = (((x361/x362)^x363)%x364);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x365 = INT8_MIN;
	int16_t x366 = INT16_MIN;
	volatile uint16_t x367 = 1449U;
	static volatile int16_t x368 = INT16_MIN;
	static int32_t t86 = -91;

    t86 = (((x365/x366)^x367)%x368);

    if (t86 != 1449) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x370 = 1025U;
	int64_t x371 = INT64_MIN;
	uint8_t x372 = UINT8_MAX;
	volatile int64_t t87 = -1041599877365LL;

    t87 = (((x369/x370)^x371)%x372);

    if (t87 != -128LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x374 = UINT16_MAX;
	int64_t x375 = -1940508305LL;
	static volatile int64_t x376 = INT64_MIN;
	static int64_t t88 = 3LL;

    t88 = (((x373/x374)^x375)%x376);

    if (t88 != -1940508305LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x377 = 42U;
	volatile uint32_t x378 = UINT32_MAX;
	static volatile int32_t x379 = INT32_MIN;
	static volatile uint16_t x380 = 456U;

    t89 = (((x377/x378)^x379)%x380);

    if (t89 != 440U) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x381 = 0;
	uint64_t x382 = 624906341800682LLU;
	volatile int32_t x383 = INT32_MIN;
	static volatile uint64_t t90 = 207695LLU;

    t90 = (((x381/x382)^x383)%x384);

    if (t90 != 212897367328LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x385 = 25731221761747219LLU;
	uint16_t x386 = UINT16_MAX;
	int16_t x388 = -1;
	volatile uint64_t t91 = 12LLU;

    t91 = (((x385/x386)^x387)%x388);

    if (t91 != 392633276132LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x389 = INT64_MAX;
	static uint16_t x390 = UINT16_MAX;
	volatile uint32_t x391 = 58071U;
	int32_t x392 = INT32_MAX;
	int64_t t92 = -217LL;

    t92 = (((x389/x390)^x391)%x392);

    if (t92 != 90840LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x393 = -109;
	volatile int16_t x394 = INT16_MIN;
	int64_t x395 = INT64_MIN;
	int16_t x396 = -14;

    t93 = (((x393/x394)^x395)%x396);

    if (t93 != -8LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x397 = INT8_MIN;
	static volatile int32_t x398 = INT32_MIN;
	int64_t x399 = INT64_MAX;
	static volatile uint64_t t94 = 500676991767067LLU;

    t94 = (((x397/x398)^x399)%x400);

    if (t94 != 1705307885LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x401 = 15;
	uint8_t x403 = UINT8_MAX;
	volatile int16_t x404 = -385;
	int32_t t95 = 32337837;

    t95 = (((x401/x402)^x403)%x404);

    if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x405 = 0;
	int32_t x406 = INT32_MIN;
	int16_t x407 = INT16_MIN;
	static int16_t x408 = INT16_MAX;

    t96 = (((x405/x406)^x407)%x408);

    if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x413 = 180;
	static int8_t x414 = INT8_MIN;
	volatile int8_t x415 = 0;
	uint32_t x416 = 1049998150U;
	volatile uint32_t t97 = 397U;

    t97 = (((x413/x414)^x415)%x416);

    if (t97 != 94974695U) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x418 = INT8_MIN;
	int8_t x419 = -1;
	int64_t x420 = INT64_MAX;
	volatile int64_t t98 = -2034803331388LL;

    t98 = (((x417/x418)^x419)%x420);

    if (t98 != -257LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x421 = INT32_MIN;
	volatile uint16_t x422 = 12978U;
	int64_t x423 = 53328755LL;
	int64_t t99 = -94088169LL;

    t99 = (((x421/x422)^x423)%x424);

    if (t99 != -112LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x426 = -1LL;
	int16_t x427 = INT16_MIN;
	uint16_t x428 = UINT16_MAX;
	int64_t t100 = -31950657424028LL;

    t100 = (((x425/x426)^x427)%x428);

    if (t100 != 32641LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x429 = 0;
	int64_t x431 = INT64_MIN;
	int32_t x432 = INT32_MIN;

    t101 = (((x429/x430)^x431)%x432);

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x433 = UINT8_MAX;
	volatile uint16_t x435 = 2U;
	static volatile int64_t t102 = -2672883336609LL;

    t102 = (((x433/x434)^x435)%x436);

    if (t102 != 2LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x437 = INT64_MIN;
	static volatile int64_t x439 = -26311LL;
	static volatile uint32_t x440 = 2670055U;
	static int64_t t103 = 8560556651LL;

    t103 = (((x437/x438)^x439)%x440);

    if (t103 != -26312LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x441 = INT8_MIN;
	static int64_t x442 = INT64_MAX;
	int8_t x443 = 36;
	int8_t x444 = INT8_MIN;
	volatile int64_t t104 = 537829087817LL;

    t104 = (((x441/x442)^x443)%x444);

    if (t104 != 36LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int64_t x445 = -56394896619117100LL;
	volatile int64_t x446 = -93837036645443124LL;
	int16_t x447 = INT16_MAX;
	int64_t t105 = -5264020549348LL;

    t105 = (((x445/x446)^x447)%x448);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x449 = INT64_MAX;
	int16_t x450 = INT16_MIN;
	static int16_t x452 = -4;
	volatile int64_t t106 = 150708280124LL;

    t106 = (((x449/x450)^x451)%x452);

    if (t106 != -2LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x453 = INT32_MIN;
	static int64_t x454 = INT64_MIN;
	int8_t x455 = 2;
	int64_t t107 = 958437LL;

    t107 = (((x453/x454)^x455)%x456);

    if (t107 != 2LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x457 = 375U;
	int32_t x459 = -1;
	int64_t x460 = INT64_MIN;

    t108 = (((x457/x458)^x459)%x460);

    if (t108 != -1LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x463 = 3U;
	int8_t x464 = INT8_MAX;
	volatile uint64_t t109 = 19753741083LLU;

    t109 = (((x461/x462)^x463)%x464);

    if (t109 != 73LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x465 = INT16_MIN;
	uint8_t x468 = 10U;
	volatile uint64_t t110 = 12LLU;

    t110 = (((x465/x466)^x467)%x468);

    if (t110 != 2LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x469 = 6U;
	int8_t x471 = INT8_MAX;
	int64_t t111 = -36880LL;

    t111 = (((x469/x470)^x471)%x472);

    if (t111 != 127LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x473 = INT8_MIN;
	int16_t x474 = INT16_MIN;
	volatile int8_t x475 = -1;
	volatile uint16_t x476 = 1U;
	volatile int32_t t112 = 64468;

    t112 = (((x473/x474)^x475)%x476);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x477 = INT16_MIN;
	int8_t x479 = INT8_MIN;
	int64_t x480 = INT64_MIN;
	int64_t t113 = -50619LL;

    t113 = (((x477/x478)^x479)%x480);

    if (t113 != -32896LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x481 = 311U;
	volatile uint32_t x482 = UINT32_MAX;
	int16_t x483 = -1;
	int8_t x484 = 2;
	uint32_t t114 = 1660U;

    t114 = (((x481/x482)^x483)%x484);

    if (t114 != 1U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x486 = 18U;
	uint32_t x488 = 32282U;

    t115 = (((x485/x486)^x487)%x488);

    if (t115 != 27280LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x489 = 1369U;
	volatile int64_t x491 = 1630440491802LL;
	int64_t t116 = 1LL;

    t116 = (((x489/x490)^x491)%x492);

    if (t116 != 2586LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x494 = INT8_MAX;
	volatile int32_t x495 = 1;
	static uint16_t x496 = UINT16_MAX;
	int32_t t117 = -3;

    t117 = (((x493/x494)^x495)%x496);

    if (t117 != -2) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x497 = -4027;
	volatile uint64_t x498 = UINT64_MAX;
	volatile int8_t x499 = INT8_MIN;
	volatile uint64_t t118 = 81LLU;

    t118 = (((x497/x498)^x499)%x500);

    if (t118 != 214883002LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x505 = INT8_MAX;
	static volatile uint8_t x507 = 6U;
	uint32_t x508 = UINT32_MAX;
	static volatile int64_t t119 = 406079006LL;

    t119 = (((x505/x506)^x507)%x508);

    if (t119 != 6LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint32_t x509 = UINT32_MAX;
	int8_t x510 = INT8_MIN;
	uint32_t x511 = UINT32_MAX;
	volatile int8_t x512 = 1;
	uint32_t t120 = 292U;

    t120 = (((x509/x510)^x511)%x512);

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x514 = INT32_MIN;
	static uint16_t x515 = 7776U;
	int16_t x516 = 5;
	volatile uint32_t t121 = 42U;

    t121 = (((x513/x514)^x515)%x516);

    if (t121 != 1U) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x518 = -1;
	int64_t x520 = INT64_MAX;

    t122 = (((x517/x518)^x519)%x520);

    if (t122 != -4294670456LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x521 = -1LL;
	int64_t x522 = -1LL;
	int8_t x523 = INT8_MIN;
	volatile int32_t x524 = INT32_MIN;

    t123 = (((x521/x522)^x523)%x524);

    if (t123 != -127LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x526 = INT16_MAX;
	static uint16_t x527 = 28U;
	int64_t x528 = -1LL;
	static int64_t t124 = 71497503629LL;

    t124 = (((x525/x526)^x527)%x528);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x530 = -2707398;
	int16_t x531 = INT16_MAX;

    t125 = (((x529/x530)^x531)%x532);

    if (t125 != 127) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint8_t x533 = 14U;
	int32_t x534 = INT32_MIN;
	volatile int32_t x535 = INT32_MIN;
	int16_t x536 = INT16_MIN;
	volatile int32_t t126 = -64307;

    t126 = (((x533/x534)^x535)%x536);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x537 = 32308606;
	int16_t x538 = -1;
	uint32_t x539 = 83U;
	volatile int64_t t127 = -150267LL;

    t127 = (((x537/x538)^x539)%x540);

    if (t127 != 4262658769LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int8_t x541 = INT8_MIN;
	uint32_t x543 = 321267U;
	int16_t x544 = -1;
	volatile uint32_t t128 = 40940183U;

    t128 = (((x541/x542)^x543)%x544);

    if (t128 != 321267U) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x545 = INT16_MIN;
	int32_t x546 = INT32_MAX;
	int32_t x548 = INT32_MIN;
	uint32_t t129 = 10860U;

    t129 = (((x545/x546)^x547)%x548);

    if (t129 != 3U) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x549 = 36177;
	int16_t x550 = INT16_MIN;
	uint8_t x551 = 1U;

    t130 = (((x549/x550)^x551)%x552);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x554 = UINT32_MAX;
	int8_t x555 = INT8_MIN;
	int32_t x556 = 145717782;
	static int64_t t131 = -2029335LL;

    t131 = (((x553/x554)^x555)%x556);

    if (t131 != 107434572LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x557 = 41U;
	int8_t x558 = -1;
	int64_t x560 = -1354519519684924856LL;
	volatile int64_t t132 = 1727889964465LL;

    t132 = (((x557/x558)^x559)%x560);

    if (t132 != -32728LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x561 = 6U;
	int16_t x562 = -1;
	volatile int32_t x563 = INT32_MIN;
	uint16_t x564 = 1424U;

    t133 = (((x561/x562)^x563)%x564);

    if (t133 != 506) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x565 = 1384233885917289LLU;
	static volatile int16_t x566 = INT16_MAX;
	static uint8_t x568 = 1U;

    t134 = (((x565/x566)^x567)%x568);

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x569 = INT8_MIN;
	int32_t x570 = INT32_MAX;
	static uint8_t x572 = 1U;
	int32_t t135 = 267;

    t135 = (((x569/x570)^x571)%x572);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x573 = INT8_MIN;
	static int16_t x574 = INT16_MAX;
	int8_t x575 = 31;
	static int8_t x576 = -1;
	int32_t t136 = 3;

    t136 = (((x573/x574)^x575)%x576);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x577 = -1;
	int32_t x579 = 78;
	volatile int64_t x580 = -261441435968LL;

    t137 = (((x577/x578)^x579)%x580);

    if (t137 != 78LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x581 = 436U;
	int8_t x582 = INT8_MIN;
	volatile int8_t x583 = INT8_MAX;
	volatile uint64_t t138 = 565402829150LLU;

    t138 = (((x581/x582)^x583)%x584);

    if (t138 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x589 = INT16_MIN;
	int8_t x590 = INT8_MIN;
	int32_t x591 = INT32_MIN;
	uint32_t x592 = UINT32_MAX;
	static uint32_t t139 = 2946943U;

    t139 = (((x589/x590)^x591)%x592);

    if (t139 != 2147483904U) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x593 = INT32_MIN;
	static int16_t x594 = INT16_MIN;
	uint64_t x595 = UINT64_MAX;
	int16_t x596 = -318;
	volatile uint64_t t140 = 564286255775082LLU;

    t140 = (((x593/x594)^x595)%x596);

    if (t140 != 18446744073709486079LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x597 = 6839LLU;
	int8_t x599 = INT8_MIN;
	int32_t x600 = INT32_MIN;
	static volatile uint64_t t141 = 557015881512LLU;

    t141 = (((x597/x598)^x599)%x600);

    if (t141 != 2147483520LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x601 = -27399LL;
	int16_t x602 = INT16_MIN;
	uint32_t x603 = UINT32_MAX;
	volatile int64_t x604 = INT64_MIN;
	volatile int64_t t142 = -1436211910LL;

    t142 = (((x601/x602)^x603)%x604);

    if (t142 != 4294967295LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x605 = INT64_MIN;
	int32_t x607 = INT32_MIN;
	uint32_t x608 = 297215U;
	static volatile int64_t t143 = -456LL;

    t143 = (((x605/x606)^x607)%x608);

    if (t143 != 130237LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint32_t x609 = 1880U;
	int32_t x610 = -19890;
	uint64_t x611 = UINT64_MAX;
	volatile int16_t x612 = INT16_MIN;
	volatile uint64_t t144 = 247118376718158LLU;

    t144 = (((x609/x610)^x611)%x612);

    if (t144 != 32767LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x613 = 92453;
	volatile int16_t x614 = INT16_MAX;
	int64_t x615 = INT64_MIN;
	uint16_t x616 = 280U;
	volatile int64_t t145 = 234866439LL;

    t145 = (((x613/x614)^x615)%x616);

    if (t145 != -6LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x622 = -1;
	static int32_t x623 = INT32_MIN;
	uint8_t x624 = UINT8_MAX;
	static volatile int32_t t146 = 14697802;

    t146 = (((x621/x622)^x623)%x624);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x626 = INT16_MAX;
	static int8_t x627 = INT8_MIN;
	volatile int8_t x628 = INT8_MIN;
	volatile int64_t t147 = 2064834374381093411LL;

    t147 = (((x625/x626)^x627)%x628);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x629 = INT32_MAX;
	int16_t x630 = INT16_MIN;
	volatile uint64_t x631 = 175338608460145LLU;

    t148 = (((x629/x630)^x631)%x632);

    if (t148 != 1283768963LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x633 = 69LLU;
	int8_t x636 = -1;
	uint64_t t149 = 142165261441626337LLU;

    t149 = (((x633/x634)^x635)%x636);

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x638 = INT8_MIN;
	int64_t x640 = INT64_MAX;
	int64_t t150 = 99448LL;

    t150 = (((x637/x638)^x639)%x640);

    if (t150 != -2130706432LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x643 = 0U;
	uint8_t x644 = UINT8_MAX;

    t151 = (((x641/x642)^x643)%x644);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x645 = 6LLU;
	int64_t x646 = INT64_MAX;
	static uint32_t x647 = UINT32_MAX;
	volatile int32_t x648 = INT32_MAX;
	uint64_t t152 = 1343LLU;

    t152 = (((x645/x646)^x647)%x648);

    if (t152 != 1LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x649 = 1653LLU;
	volatile int32_t x650 = 1;
	volatile int8_t x651 = INT8_MIN;
	static uint64_t t153 = 298735936026340LLU;

    t153 = (((x649/x650)^x651)%x652);

    if (t153 != 31221LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x653 = INT64_MIN;
	static int8_t x655 = -1;
	int64_t x656 = INT64_MAX;
	uint64_t t154 = 55LLU;

    t154 = (((x653/x654)^x655)%x656);

    if (t154 != 9223372036854773633LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x657 = INT32_MAX;
	static uint8_t x658 = 9U;
	static int32_t x659 = 52402981;

    t155 = (((x657/x658)^x659)%x660);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x661 = -1;
	volatile uint32_t x662 = UINT32_MAX;
	static uint8_t x663 = 11U;
	int32_t x664 = -1;

    t156 = (((x661/x662)^x663)%x664);

    if (t156 != 10U) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x665 = -307;
	int8_t x666 = INT8_MAX;
	uint64_t x668 = 269LLU;
	uint64_t t157 = 17891891035696844LLU;

    t157 = (((x665/x666)^x667)%x668);

    if (t157 != 68LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x669 = 435246368LLU;
	int16_t x671 = -1;
	int16_t x672 = INT16_MIN;
	uint64_t t158 = 7LLU;

    t158 = (((x669/x670)^x671)%x672);

    if (t158 != 19484LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x673 = 122312985;
	int32_t x674 = INT32_MAX;
	volatile int64_t x675 = INT64_MIN;
	volatile uint8_t x676 = 3U;
	int64_t t159 = 1LL;

    t159 = (((x673/x674)^x675)%x676);

    if (t159 != -2LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x677 = INT8_MIN;
	static uint8_t x680 = 8U;
	int32_t t160 = 3;

    t160 = (((x677/x678)^x679)%x680);

    if (t160 != -4) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x681 = UINT32_MAX;
	volatile int8_t x682 = -1;
	uint64_t x683 = 913640646388LLU;
	static int32_t x684 = -976642;
	uint64_t t161 = 410544520831550LLU;

    t161 = (((x681/x682)^x683)%x684);

    if (t161 != 913640646389LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x685 = 6268U;
	static volatile int32_t x686 = INT32_MAX;
	uint16_t x687 = 30U;
	int8_t x688 = -2;

    t162 = (((x685/x686)^x687)%x688);

    if (t162 != 30U) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x689 = INT8_MAX;
	int8_t x690 = INT8_MAX;
	int64_t x691 = INT64_MIN;
	int64_t t163 = -497563443966LL;

    t163 = (((x689/x690)^x691)%x692);

    if (t163 != -970369LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x694 = INT8_MIN;
	int64_t x695 = 93258586LL;
	static uint64_t x696 = 208968338LLU;

    t164 = (((x693/x694)^x695)%x696);

    if (t164 != 93258586LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x697 = INT32_MAX;
	int8_t x698 = INT8_MAX;
	int8_t x699 = INT8_MAX;
	int16_t x700 = INT16_MIN;
	int32_t t165 = -13490;

    t165 = (((x697/x698)^x699)%x700);

    if (t165 != 1143) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x701 = -1LL;
	int64_t x702 = 53LL;
	uint64_t x703 = 8644534822840LLU;
	static volatile uint16_t x704 = 7U;
	uint64_t t166 = 246953915LLU;

    t166 = (((x701/x702)^x703)%x704);

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x705 = -1;
	int64_t x706 = INT64_MIN;
	uint8_t x708 = 5U;

    t167 = (((x705/x706)^x707)%x708);

    if (t167 != -3LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x709 = 0;
	uint8_t x711 = UINT8_MAX;
	static int64_t x712 = 381LL;
	volatile int64_t t168 = -1LL;

    t168 = (((x709/x710)^x711)%x712);

    if (t168 != 255LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint16_t x713 = 63U;
	uint64_t x714 = UINT64_MAX;
	int64_t x716 = INT64_MAX;
	uint64_t t169 = 11583152156202283LLU;

    t169 = (((x713/x714)^x715)%x716);

    if (t169 != 9223372036854775779LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t t170 = -6432;

    t170 = (((x717/x718)^x719)%x720);

    if (t170 != 16) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x724 = INT64_MAX;
	uint64_t t171 = 454638017004LLU;

    t171 = (((x721/x722)^x723)%x724);

    if (t171 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x725 = -1;
	volatile int64_t x726 = -1LL;
	int8_t x727 = INT8_MAX;
	static int16_t x728 = INT16_MIN;
	volatile int64_t t172 = -2051171969012495LL;

    t172 = (((x725/x726)^x727)%x728);

    if (t172 != 126LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x729 = INT64_MIN;
	int16_t x731 = INT16_MIN;
	uint32_t x732 = 122405U;
	volatile int64_t t173 = 8154LL;

    t173 = (((x729/x730)^x731)%x732);

    if (t173 != 64308LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x734 = INT32_MAX;
	volatile int64_t x736 = 28888LL;
	volatile int64_t t174 = -161223313010LL;

    t174 = (((x733/x734)^x735)%x736);

    if (t174 != -2LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x737 = 4613;
	static uint64_t x739 = 686321717283836LLU;
	static int64_t x740 = INT64_MIN;

    t175 = (((x737/x738)^x739)%x740);

    if (t175 != 686321717283836LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x741 = 3U;
	int8_t x742 = INT8_MIN;
	int8_t x743 = INT8_MAX;
	uint64_t x744 = UINT64_MAX;
	uint64_t t176 = 68200095716984917LLU;

    t176 = (((x741/x742)^x743)%x744);

    if (t176 != 127LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x745 = 1U;
	static uint32_t x746 = UINT32_MAX;
	int64_t x748 = -1LL;
	static volatile int64_t t177 = -8326361625378LL;

    t177 = (((x745/x746)^x747)%x748);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x749 = -727;
	static int16_t x750 = INT16_MAX;
	int8_t x751 = INT8_MIN;
	static uint16_t x752 = 11046U;

    t178 = (((x749/x750)^x751)%x752);

    if (t178 != -128) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x753 = UINT32_MAX;
	int32_t x756 = INT32_MIN;
	static volatile uint32_t t179 = 3721549U;

    t179 = (((x753/x754)^x755)%x756);

    if (t179 != 2147483646U) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x757 = INT32_MIN;
	int8_t x758 = INT8_MAX;
	volatile int16_t x759 = INT16_MIN;
	int8_t x760 = INT8_MIN;
	int32_t t180 = -10028063;

    t180 = (((x757/x758)^x759)%x760);

    if (t180 != 120) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x761 = INT32_MAX;
	uint8_t x763 = 4U;
	static volatile int32_t t181 = 181;

    t181 = (((x761/x762)^x763)%x764);

    if (t181 != 24) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x766 = INT8_MIN;
	int16_t x767 = INT16_MIN;
	static volatile int32_t t182 = -89759;

    t182 = (((x765/x766)^x767)%x768);

    if (t182 != 32513) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x769 = UINT16_MAX;
	int16_t x771 = INT16_MIN;
	int16_t x772 = 2;

    t183 = (((x769/x770)^x771)%x772);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x773 = INT32_MIN;
	static volatile uint32_t x774 = UINT32_MAX;
	int8_t x775 = -1;
	volatile int32_t x776 = 3949640;
	volatile uint32_t t184 = 63544U;

    t184 = (((x773/x774)^x775)%x776);

    if (t184 != 1708615U) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x781 = 30;
	uint16_t x783 = 229U;
	static uint8_t x784 = 22U;

    t185 = (((x781/x782)^x783)%x784);

    if (t185 != 9LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x785 = INT64_MAX;
	volatile uint32_t x787 = UINT32_MAX;
	volatile int64_t t186 = -64050LL;

    t186 = (((x785/x786)^x787)%x788);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x789 = INT8_MAX;
	int64_t x790 = INT64_MAX;
	int64_t x791 = INT64_MIN;
	uint8_t x792 = 7U;
	int64_t t187 = 27698738575603LL;

    t187 = (((x789/x790)^x791)%x792);

    if (t187 != -1LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint8_t x793 = 0U;
	int16_t x794 = -16;
	uint16_t x796 = 4U;
	int32_t t188 = -248111;

    t188 = (((x793/x794)^x795)%x796);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x797 = INT16_MAX;
	int16_t x799 = INT16_MIN;
	int8_t x800 = -1;
	volatile int32_t t189 = 381070088;

    t189 = (((x797/x798)^x799)%x800);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x805 = UINT32_MAX;
	static int8_t x806 = INT8_MAX;
	volatile int64_t x807 = INT64_MIN;
	uint32_t x808 = 1716615588U;
	int64_t t190 = 159634LL;

    t190 = (((x805/x806)^x807)%x808);

    if (t190 != -1558912568LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x809 = INT8_MAX;
	int64_t x811 = -371954LL;
	int8_t x812 = INT8_MAX;
	volatile int64_t t191 = 106LL;

    t191 = (((x809/x810)^x811)%x812);

    if (t191 != -98LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x813 = INT64_MIN;
	uint32_t x814 = UINT32_MAX;
	int8_t x815 = 10;
	static int32_t x816 = INT32_MIN;

    t192 = (((x813/x814)^x815)%x816);

    if (t192 != -2147483638LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x819 = INT16_MAX;
	static int32_t x820 = -1;
	volatile int64_t t193 = -64964448LL;

    t193 = (((x817/x818)^x819)%x820);

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x821 = 85165U;
	static uint16_t x822 = 63U;
	static uint64_t x824 = 1468724017LLU;
	volatile uint64_t t194 = 291011088233LLU;

    t194 = (((x821/x822)^x823)%x824);

    if (t194 != 1336LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x825 = 1;
	volatile uint8_t x826 = 1U;
	static int8_t x827 = -44;
	int32_t t195 = 43996;

    t195 = (((x825/x826)^x827)%x828);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint8_t x829 = UINT8_MAX;
	int32_t x830 = INT32_MIN;
	int8_t x831 = -18;
	static int32_t x832 = -112;

    t196 = (((x829/x830)^x831)%x832);

    if (t196 != -18) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x838 = 202039117412761LLU;
	uint16_t x839 = UINT16_MAX;
	static uint32_t x840 = 55507U;

    t197 = (((x837/x838)^x839)%x840);

    if (t197 != 10028LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x841 = INT16_MIN;
	int16_t x842 = 3;
	int8_t x843 = INT8_MIN;
	uint16_t x844 = 2731U;
	static volatile int32_t t198 = 14351;

    t198 = (((x841/x842)^x843)%x844);

    if (t198 != 42) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x845 = INT32_MAX;
	int32_t x846 = 388634;
	static int8_t x847 = INT8_MAX;
	int64_t x848 = INT64_MIN;
	int64_t t199 = 11565448LL;

    t199 = (((x845/x846)^x847)%x848);

    if (t199 != 5610LL) { NG(); } else { ; }
	
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

