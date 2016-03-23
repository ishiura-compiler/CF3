
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

int8_t x2 = -7;
static int64_t x3 = INT64_MAX;
static volatile int64_t x5 = -331LL;
uint8_t x12 = 9U;
volatile int8_t x13 = -1;
uint64_t x22 = UINT64_MAX;
uint32_t x24 = 0U;
uint32_t x27 = 64U;
int32_t x32 = -1;
int32_t t7 = -47933;
int16_t x40 = -1;
uint64_t x43 = UINT64_MAX;
volatile int32_t t11 = 12050;
volatile uint32_t x49 = 2775U;
static uint32_t t12 = 3215746U;
int8_t x56 = INT8_MIN;
uint64_t x59 = 25746566LLU;
static int32_t x62 = -992341;
static volatile uint64_t t15 = 45LLU;
int64_t x66 = 1626LL;
volatile int8_t x70 = INT8_MAX;
int32_t x73 = INT32_MIN;
volatile uint32_t x97 = UINT32_MAX;
uint64_t x104 = 126LLU;
uint64_t t23 = 3780250622222306726LLU;
static volatile uint64_t x120 = 4069336033438LLU;
volatile uint32_t x128 = 147707942U;
uint8_t x132 = 100U;
static uint32_t x140 = UINT32_MAX;
volatile int64_t t30 = -316LL;
int64_t x142 = INT64_MIN;
int64_t t31 = 485LL;
static uint32_t x149 = 1768630U;
int32_t x155 = INT32_MAX;
int64_t t33 = 4042LL;
static int8_t x161 = -1;
uint8_t x164 = UINT8_MAX;
volatile uint16_t x166 = 150U;
volatile int8_t x184 = -1;
uint16_t x195 = 20U;
int8_t x197 = INT8_MIN;
int16_t x198 = INT16_MIN;
int64_t x206 = INT64_MIN;
uint64_t x211 = 7066831LLU;
uint64_t x215 = UINT64_MAX;
int32_t x219 = 18320998;
static int16_t x221 = INT16_MIN;
uint16_t x232 = 57U;
uint64_t x234 = UINT64_MAX;
uint64_t t52 = 122411LLU;
int32_t t55 = 11044;
uint64_t x261 = 890240LLU;
uint8_t x269 = 5U;
uint32_t x280 = 173U;
int32_t x281 = -1;
uint32_t x282 = 619U;
int32_t x284 = INT32_MIN;
int8_t x287 = -6;
volatile uint16_t x288 = UINT16_MAX;
int32_t t64 = -277393;
int32_t x289 = INT32_MAX;
int32_t x294 = -601;
uint8_t x295 = UINT8_MAX;
uint8_t x296 = 1U;
static int8_t x301 = -30;
int16_t x306 = INT16_MIN;
uint8_t x307 = 5U;
uint64_t x308 = 64853131LLU;
int8_t x309 = -1;
volatile int64_t x310 = 42LL;
uint64_t x312 = 442142LLU;
uint32_t t71 = 1772U;
static int32_t x322 = INT32_MIN;
volatile int16_t x324 = 3;
int32_t x330 = INT32_MIN;
static int32_t x331 = INT32_MAX;
int16_t x332 = 12242;
static int8_t x333 = 6;
volatile uint64_t x335 = 103092LLU;
int16_t x352 = INT16_MIN;
int32_t x355 = -1;
volatile uint8_t x356 = 6U;
volatile int32_t t77 = 3400741;
uint64_t x357 = UINT64_MAX;
int64_t x364 = INT64_MAX;
int8_t x367 = INT8_MIN;
int32_t x379 = INT32_MIN;
uint64_t t82 = UINT64_MAX;
uint16_t x391 = 755U;
static uint16_t x405 = UINT16_MAX;
volatile uint64_t t84 = UINT64_MAX;
uint16_t x414 = UINT16_MAX;
uint8_t x415 = UINT8_MAX;
int16_t x421 = -2836;
uint32_t x422 = 386407526U;
uint32_t t88 = 26U;
uint8_t x431 = 74U;
volatile uint64_t t94 = 375871155007560LLU;
int8_t x452 = 37;
volatile int32_t x453 = INT32_MIN;
uint32_t x454 = 62003U;
int8_t x456 = INT8_MAX;
volatile uint64_t t99 = 6LLU;
int16_t x474 = -1;
uint16_t x489 = UINT16_MAX;
int64_t x490 = -1LL;
static int16_t x492 = 875;
int32_t x494 = INT32_MIN;
int64_t x495 = -1LL;
int32_t x506 = INT32_MIN;
static int32_t x507 = 33;
uint64_t x511 = UINT64_MAX;
static int8_t x513 = INT8_MIN;
int8_t x515 = INT8_MAX;
uint8_t x516 = 125U;
uint8_t x517 = UINT8_MAX;
volatile uint64_t x518 = 252304480413LLU;
int16_t x520 = 0;
static volatile int64_t t112 = 223568933LL;
static int64_t t113 = -410233303LL;
static uint32_t t114 = UINT32_MAX;
static uint32_t x541 = 421U;
uint32_t t115 = 6824U;
uint8_t x547 = UINT8_MAX;
static int8_t x552 = -38;
static int16_t x553 = INT16_MAX;
int16_t x571 = -1;
uint8_t x575 = 18U;
volatile int64_t x587 = INT64_MIN;
uint64_t t126 = 1LLU;
volatile uint32_t x593 = 608814880U;
volatile int32_t x595 = -1;
int16_t x596 = 69;
uint64_t t128 = 6276775LLU;
int64_t x615 = INT64_MIN;
int64_t t130 = 1436873802558937LL;
int8_t x618 = 1;
int32_t x625 = INT32_MIN;
static volatile uint64_t t133 = 1162769372843LLU;
volatile int64_t x631 = INT64_MAX;
static int8_t x633 = INT8_MIN;
int32_t x638 = INT32_MIN;
int64_t x639 = -1LL;
uint64_t x642 = UINT64_MAX;
int32_t x652 = 44543669;
uint32_t x659 = 73859U;
int32_t t140 = 1050;
int16_t x665 = -1;
int16_t x666 = INT16_MIN;
uint32_t x667 = 27209U;
volatile uint64_t x676 = 2220442LLU;
int8_t x685 = -1;
volatile uint16_t x687 = UINT16_MAX;
uint64_t x688 = UINT64_MAX;
int8_t x692 = -1;
uint32_t t146 = UINT32_MAX;
static uint32_t x694 = 433470611U;
uint32_t t147 = UINT32_MAX;
int64_t x705 = 255002668081LL;
int16_t x706 = 119;
int32_t x712 = -1;
volatile int32_t t151 = -372;
uint64_t x717 = UINT64_MAX;
int16_t x719 = INT16_MIN;
static int16_t x720 = -24;
static int8_t x731 = 0;
static volatile int64_t t155 = 2328980421050LL;
static int32_t x750 = INT32_MIN;
int8_t x755 = INT8_MIN;
uint16_t x756 = 54U;
volatile int16_t x758 = INT16_MIN;
uint8_t x770 = 49U;
volatile int64_t t163 = 795998066LL;
int8_t x778 = INT8_MIN;
static int32_t t165 = 1;
volatile uint32_t t166 = 3736530U;
int64_t x794 = INT64_MIN;
int64_t t167 = -10LL;
static int64_t x805 = -1LL;
volatile int16_t x808 = INT16_MIN;
int32_t x810 = INT32_MAX;
static uint16_t x814 = 1U;
int64_t x816 = -10208887LL;
uint16_t x817 = UINT16_MAX;
uint64_t x818 = UINT64_MAX;
volatile int16_t x826 = INT16_MIN;
int32_t t175 = INT32_MAX;
int16_t x838 = -1;
static int16_t x839 = INT16_MIN;
static int8_t x841 = INT8_MAX;
static uint32_t x842 = UINT32_MAX;
volatile uint64_t t178 = 175LLU;
int64_t x852 = INT64_MIN;
uint64_t x854 = 33746187425122LLU;
uint32_t x856 = 14226417U;
uint64_t t180 = 14315LLU;
static uint64_t x857 = 844150773LLU;
static uint64_t t181 = 12LLU;
int64_t x861 = INT64_MIN;
volatile int32_t x864 = -27636759;
uint64_t x865 = 53967184LLU;
static int8_t x866 = INT8_MIN;
int16_t x867 = INT16_MIN;
volatile uint64_t t183 = 521369144197622LLU;
int32_t x871 = -1;
volatile uint64_t x873 = 26283205126770041LLU;
uint32_t x878 = UINT32_MAX;
uint8_t x879 = 2U;
static uint32_t x884 = 129045799U;
static volatile int16_t x890 = -1;
static int8_t x899 = -2;
int64_t x900 = -1LL;
int8_t x907 = 1;
int16_t x908 = INT16_MIN;
int16_t x914 = 0;
int64_t x915 = INT64_MIN;
uint64_t x919 = 1461048637581737LLU;
static volatile int64_t x933 = INT64_MIN;
uint64_t x934 = UINT64_MAX;
int16_t x941 = INT16_MAX;
uint32_t x948 = UINT32_MAX;


void f0(void) {
    	int32_t x1 = -1;
	int16_t x4 = -1;
	volatile int64_t t0 = -16062801842942982LL;

    t0 = ((x1/(x2+x3))+x4);

    if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x6 = 15;
	static int8_t x7 = INT8_MAX;
	int32_t x8 = -1;
	volatile int64_t t1 = 0LL;

    t1 = ((x5/(x6+x7))+x8);

    if (t1 != -3LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MAX;
	static uint64_t x10 = UINT64_MAX;
	volatile uint32_t x11 = 19063U;
	volatile uint64_t t2 = 86049647LLU;

    t2 = ((x9/(x10+x11))+x12);

    if (t2 != 10LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x14 = INT8_MAX;
	int8_t x15 = INT8_MAX;
	volatile int32_t x16 = INT32_MAX;
	int32_t t3 = INT32_MAX;

    t3 = ((x13/(x14+x15))+x16);

    if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x17 = 328044U;
	uint16_t x18 = 6653U;
	uint64_t x19 = 53LLU;
	volatile uint64_t x20 = 17426978269155496LLU;
	static uint64_t t4 = 1LLU;

    t4 = ((x17/(x18+x19))+x20);

    if (t4 != 17426978269155544LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x21 = 57;
	volatile int64_t x23 = INT64_MIN;
	volatile uint64_t t5 = 1657976672306439LLU;

    t5 = ((x21/(x22+x23))+x24);

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = 241;
	uint64_t x26 = 4248553155731LLU;
	volatile int64_t x28 = -107323413322186361LL;
	volatile uint64_t t6 = 129009773LLU;

    t6 = ((x25/(x26+x27))+x28);

    if (t6 != 18339420660387365255LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -59;
	static int32_t x30 = INT32_MIN;
	int16_t x31 = INT16_MAX;

    t7 = ((x29/(x30+x31))+x32);

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = 1036799309;
	int64_t x34 = 295122496891533LL;
	static int32_t x35 = INT32_MIN;
	int64_t x36 = -1LL;
	volatile int64_t t8 = -3302256335LL;

    t8 = ((x33/(x34+x35))+x36);

    if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int64_t x37 = -1LL;
	int64_t x38 = -1LL;
	static uint64_t x39 = UINT64_MAX;
	volatile uint64_t t9 = 356469264404LLU;

    t9 = ((x37/(x38+x39))+x40);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x41 = -858936044;
	uint16_t x42 = 4U;
	int64_t x44 = -1LL;
	uint64_t t10 = 94234208LLU;

    t10 = ((x41/(x42+x43))+x44);

    if (t10 != 6148914690950205189LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = 56U;
	int8_t x46 = INT8_MIN;
	uint16_t x47 = 78U;
	int8_t x48 = INT8_MAX;

    t11 = ((x45/(x46+x47))+x48);

    if (t11 != 126) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x50 = INT8_MAX;
	static volatile int32_t x51 = INT32_MIN;
	int16_t x52 = INT16_MIN;

    t12 = ((x49/(x50+x51))+x52);

    if (t12 != 4294934528U) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint16_t x53 = UINT16_MAX;
	static int32_t x54 = 351965831;
	static int16_t x55 = -906;
	int32_t t13 = 4081384;

    t13 = ((x53/(x54+x55))+x56);

    if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x57 = -1;
	int16_t x58 = INT16_MIN;
	static volatile int16_t x60 = 5767;
	uint64_t t14 = 2929938674306241736LLU;

    t14 = ((x57/(x58+x59))+x60);

    if (t14 != 717386992851LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = UINT32_MAX;
	uint64_t x63 = 164991097LLU;
	uint8_t x64 = 2U;

    t15 = ((x61/(x62+x63))+x64);

    if (t15 != 28LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = 115936;
	uint16_t x67 = 15U;
	int64_t x68 = 15932150LL;
	int64_t t16 = -100505898923LL;

    t16 = ((x65/(x66+x67))+x68);

    if (t16 != 15932220LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint8_t x69 = 36U;
	uint32_t x71 = 1387162717U;
	int8_t x72 = -1;
	volatile uint32_t t17 = UINT32_MAX;

    t17 = ((x69/(x70+x71))+x72);

    if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x74 = -5256;
	int8_t x75 = INT8_MAX;
	volatile int64_t x76 = INT64_MIN;
	int64_t t18 = 147468055LL;

    t18 = ((x73/(x74+x75))+x76);

    if (t18 != -9223372036854357114LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x81 = INT16_MAX;
	int64_t x82 = 1089498873433511LL;
	static int32_t x83 = INT32_MAX;
	volatile int16_t x84 = INT16_MAX;
	int64_t t19 = -2028LL;

    t19 = ((x81/(x82+x83))+x84);

    if (t19 != 32767LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x89 = UINT8_MAX;
	volatile int16_t x90 = INT16_MIN;
	volatile uint16_t x91 = 606U;
	uint32_t x92 = 648825702U;
	volatile uint32_t t20 = 2048898827U;

    t20 = ((x89/(x90+x91))+x92);

    if (t20 != 648825702U) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint8_t x93 = 11U;
	int64_t x94 = -15LL;
	int64_t x95 = INT64_MAX;
	volatile uint8_t x96 = UINT8_MAX;
	int64_t t21 = 2LL;

    t21 = ((x93/(x94+x95))+x96);

    if (t21 != 255LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x98 = UINT16_MAX;
	int8_t x99 = -43;
	uint8_t x100 = UINT8_MAX;
	uint32_t t22 = 21486436U;

    t22 = ((x97/(x98+x99))+x100);

    if (t22 != 65835U) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x101 = INT32_MIN;
	int16_t x102 = -355;
	static int64_t x103 = 0LL;

    t23 = ((x101/(x102+x103))+x104);

    if (t23 != 6049375LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x105 = INT16_MIN;
	int8_t x106 = 0;
	int32_t x107 = INT32_MIN;
	static uint16_t x108 = UINT16_MAX;
	volatile int32_t t24 = -16568565;

    t24 = ((x105/(x106+x107))+x108);

    if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x113 = INT32_MIN;
	int8_t x114 = -1;
	int32_t x115 = -1608946;
	int64_t x116 = 14477LL;
	static volatile int64_t t25 = -8345LL;

    t25 = ((x113/(x114+x115))+x116);

    if (t25 != 15811LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x117 = UINT32_MAX;
	int16_t x118 = -160;
	static uint8_t x119 = UINT8_MAX;
	uint64_t t26 = 14714477813LLU;

    t26 = ((x117/(x118+x119))+x120);

    if (t26 != 4069381243620LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x125 = UINT64_MAX;
	int64_t x126 = INT64_MIN;
	int16_t x127 = 3057;
	uint64_t t27 = 12738087LLU;

    t27 = ((x125/(x126+x127))+x128);

    if (t27 != 147707943LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x129 = INT32_MAX;
	int64_t x130 = INT64_MIN;
	uint16_t x131 = 2U;
	int64_t t28 = 456024306066243LL;

    t28 = ((x129/(x130+x131))+x132);

    if (t28 != 100LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x133 = INT8_MIN;
	static int32_t x134 = INT32_MAX;
	volatile int64_t x135 = INT64_MIN;
	volatile int8_t x136 = INT8_MAX;
	int64_t t29 = -30577342LL;

    t29 = ((x133/(x134+x135))+x136);

    if (t29 != 127LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x137 = INT32_MIN;
	int64_t x138 = INT64_MIN;
	int8_t x139 = INT8_MAX;

    t30 = ((x137/(x138+x139))+x140);

    if (t30 != 4294967295LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x141 = INT32_MIN;
	uint8_t x143 = 25U;
	uint16_t x144 = 52U;

    t31 = ((x141/(x142+x143))+x144);

    if (t31 != 52LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x150 = -30;
	int64_t x151 = -1LL;
	int8_t x152 = INT8_MIN;
	volatile int64_t t32 = -1178109837LL;

    t32 = ((x149/(x150+x151))+x152);

    if (t32 != -57180LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x153 = INT64_MAX;
	static int64_t x154 = INT64_MIN;
	int8_t x156 = 4;

    t33 = ((x153/(x154+x155))+x156);

    if (t33 != 3LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x162 = 28U;
	int32_t x163 = 457;
	volatile int32_t t34 = 1856;

    t34 = ((x161/(x162+x163))+x164);

    if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x165 = 7125973LLU;
	static int16_t x167 = -1;
	static volatile int64_t x168 = INT64_MAX;
	volatile uint64_t t35 = 247086719070985236LLU;

    t35 = ((x165/(x166+x167))+x168);

    if (t35 != 9223372036854823632LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x169 = 2043U;
	volatile int16_t x170 = -1;
	int8_t x171 = -3;
	int64_t x172 = -1LL;
	volatile int64_t t36 = -787399824112782LL;

    t36 = ((x169/(x170+x171))+x172);

    if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x173 = 1100585247448LLU;
	uint32_t x174 = 14U;
	volatile uint32_t x175 = 3322431U;
	static int16_t x176 = INT16_MIN;
	volatile uint64_t t37 = 4175597885440LLU;

    t37 = ((x173/(x174+x175))+x176);

    if (t37 != 298489LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int64_t x177 = -335186976778566LL;
	volatile int32_t x178 = 0;
	volatile int32_t x179 = -47332;
	int32_t x180 = -1333681;
	volatile int64_t t38 = 1573759406LL;

    t38 = ((x177/(x178+x179))+x180);

    if (t38 != 7080280803LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x181 = 0;
	int32_t x182 = 26;
	int64_t x183 = -1LL;
	volatile int64_t t39 = -400482036120LL;

    t39 = ((x181/(x182+x183))+x184);

    if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x185 = INT8_MAX;
	int16_t x186 = INT16_MIN;
	int16_t x187 = 1;
	static uint8_t x188 = 3U;
	volatile int32_t t40 = 62470623;

    t40 = ((x185/(x186+x187))+x188);

    if (t40 != 3) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x189 = INT8_MAX;
	int8_t x190 = -1;
	volatile int64_t x191 = -57LL;
	uint16_t x192 = 1442U;
	volatile int64_t t41 = 30218LL;

    t41 = ((x189/(x190+x191))+x192);

    if (t41 != 1440LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x193 = INT32_MAX;
	uint64_t x194 = UINT64_MAX;
	uint32_t x196 = UINT32_MAX;
	volatile uint64_t t42 = 631LLU;

    t42 = ((x193/(x194+x195))+x196);

    if (t42 != 4407992750LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x199 = INT8_MIN;
	uint8_t x200 = 4U;
	int32_t t43 = -952339;

    t43 = ((x197/(x198+x199))+x200);

    if (t43 != 4) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x201 = -1LL;
	int16_t x202 = 0;
	uint64_t x203 = 4743LLU;
	static int32_t x204 = -6397198;
	volatile uint64_t t44 = 14962664014723209LLU;

    t44 = ((x201/(x202+x203))+x204);

    if (t44 != 3889256597800472LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x205 = 1;
	uint8_t x207 = UINT8_MAX;
	static int16_t x208 = -1;
	int64_t t45 = 14929369400214029LL;

    t45 = ((x205/(x206+x207))+x208);

    if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x209 = -709LL;
	uint64_t x210 = UINT64_MAX;
	int64_t x212 = -1LL;
	volatile uint64_t t46 = 14394009213LLU;

    t46 = ((x209/(x210+x211))+x212);

    if (t46 != 2610327979264LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x213 = -1LL;
	static uint8_t x214 = UINT8_MAX;
	volatile int16_t x216 = INT16_MAX;
	volatile uint64_t t47 = 2LLU;

    t47 = ((x213/(x214+x215))+x216);

    if (t47 != 72624976668180608LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x217 = -1;
	static uint16_t x218 = UINT16_MAX;
	int64_t x220 = INT64_MAX;
	static int64_t t48 = INT64_MAX;

    t48 = ((x217/(x218+x219))+x220);

    if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x222 = INT8_MAX;
	static int8_t x223 = INT8_MIN;
	static int16_t x224 = -2752;
	static volatile int32_t t49 = 82787;

    t49 = ((x221/(x222+x223))+x224);

    if (t49 != 30016) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x225 = 1;
	volatile int64_t x226 = INT64_MIN;
	volatile uint8_t x227 = UINT8_MAX;
	static int64_t x228 = -495LL;
	int64_t t50 = -258704657691LL;

    t50 = ((x225/(x226+x227))+x228);

    if (t50 != -495LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x229 = -1LL;
	static uint32_t x230 = 2U;
	static int32_t x231 = -1;
	int64_t t51 = -519622041648LL;

    t51 = ((x229/(x230+x231))+x232);

    if (t51 != 56LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x233 = INT32_MAX;
	static volatile int32_t x235 = 551;
	int32_t x236 = -1;

    t52 = ((x233/(x234+x235))+x236);

    if (t52 != 3904514LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x241 = INT8_MIN;
	uint8_t x242 = 6U;
	uint16_t x243 = 6U;
	static int64_t x244 = INT64_MAX;
	volatile int64_t t53 = -3070905643623289LL;

    t53 = ((x241/(x242+x243))+x244);

    if (t53 != 9223372036854775797LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x245 = 0U;
	static uint8_t x246 = UINT8_MAX;
	uint16_t x247 = UINT16_MAX;
	uint8_t x248 = 7U;
	static volatile uint32_t t54 = 4U;

    t54 = ((x245/(x246+x247))+x248);

    if (t54 != 7U) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x249 = INT8_MAX;
	int32_t x250 = INT32_MAX;
	int8_t x251 = INT8_MIN;
	int16_t x252 = 1;

    t55 = ((x249/(x250+x251))+x252);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x253 = INT64_MAX;
	int64_t x254 = -482LL;
	uint32_t x255 = UINT32_MAX;
	int8_t x256 = INT8_MIN;
	int64_t t56 = -246LL;

    t56 = ((x253/(x254+x255))+x256);

    if (t56 != 2147483761LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x257 = -1;
	int8_t x258 = INT8_MIN;
	static int8_t x259 = -1;
	int64_t x260 = -7887108071810652LL;
	int64_t t57 = -32131045561LL;

    t57 = ((x257/(x258+x259))+x260);

    if (t57 != -7887108071810652LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int32_t x262 = -1;
	int16_t x263 = INT16_MAX;
	int64_t x264 = INT64_MAX;
	volatile uint64_t t58 = 170195360172141300LLU;

    t58 = ((x261/(x262+x263))+x264);

    if (t58 != 9223372036854775834LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x265 = INT32_MIN;
	uint8_t x266 = 27U;
	uint8_t x267 = UINT8_MAX;
	uint16_t x268 = 18U;
	int32_t t59 = 27003;

    t59 = ((x265/(x266+x267))+x268);

    if (t59 != -7615172) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x270 = INT64_MIN;
	uint64_t x271 = 296570690912548LLU;
	int32_t x272 = -27;
	static uint64_t t60 = 6123736016491413LLU;

    t60 = ((x269/(x270+x271))+x272);

    if (t60 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x273 = 5499;
	uint64_t x274 = 13924027221101LLU;
	uint8_t x275 = 29U;
	volatile int16_t x276 = INT16_MAX;
	uint64_t t61 = 4972535718085394LLU;

    t61 = ((x273/(x274+x275))+x276);

    if (t61 != 32767LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x277 = INT8_MIN;
	uint32_t x278 = 173U;
	volatile int16_t x279 = -3189;
	volatile uint32_t t62 = 14467U;

    t62 = ((x277/(x278+x279))+x280);

    if (t62 != 174U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x283 = 29489384647210LLU;
	static uint64_t t63 = 2850057509LLU;

    t63 = ((x281/(x282+x283))+x284);

    if (t63 != 18446744071562693506LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x285 = -1;
	uint16_t x286 = 0U;

    t64 = ((x285/(x286+x287))+x288);

    if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x290 = 44;
	int8_t x291 = INT8_MAX;
	int8_t x292 = INT8_MIN;
	volatile int32_t t65 = 11438;

    t65 = ((x289/(x290+x291))+x292);

    if (t65 != 12558255) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int16_t x293 = INT16_MIN;
	int32_t t66 = 2;

    t66 = ((x293/(x294+x295))+x296);

    if (t66 != 95) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint8_t x297 = 22U;
	int16_t x298 = INT16_MIN;
	int8_t x299 = 2;
	uint8_t x300 = UINT8_MAX;
	int32_t t67 = 2;

    t67 = ((x297/(x298+x299))+x300);

    if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x302 = 3U;
	uint64_t x303 = 1868662804238501LLU;
	int16_t x304 = INT16_MAX;
	uint64_t t68 = 851639375149913LLU;

    t68 = ((x301/(x302+x303))+x304);

    if (t68 != 42638LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x305 = 993U;
	volatile uint64_t t69 = 1LLU;

    t69 = ((x305/(x306+x307))+x308);

    if (t69 != 64853131LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x311 = UINT32_MAX;
	volatile uint64_t t70 = 6149390895753LLU;

    t70 = ((x309/(x310+x311))+x312);

    if (t70 != 442142LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x317 = 13;
	volatile uint8_t x318 = 58U;
	volatile uint32_t x319 = UINT32_MAX;
	static int8_t x320 = INT8_MAX;

    t71 = ((x317/(x318+x319))+x320);

    if (t71 != 127U) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x321 = INT64_MIN;
	int16_t x323 = INT16_MAX;
	int64_t t72 = -268430146LL;

    t72 = ((x321/(x322+x323))+x324);

    if (t72 != 4295032833LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x329 = 219542940U;
	uint32_t t73 = 0U;

    t73 = ((x329/(x330+x331))+x332);

    if (t73 != 12242U) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x334 = INT8_MIN;
	uint64_t x336 = UINT64_MAX;
	volatile uint64_t t74 = UINT64_MAX;

    t74 = ((x333/(x334+x335))+x336);

    if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x341 = -1;
	int32_t x342 = INT32_MIN;
	uint8_t x343 = UINT8_MAX;
	volatile int64_t x344 = -20142703750596019LL;
	int64_t t75 = 3LL;

    t75 = ((x341/(x342+x343))+x344);

    if (t75 != -20142703750596019LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x349 = 733;
	static volatile int32_t x350 = -16;
	uint16_t x351 = UINT16_MAX;
	volatile int32_t t76 = 827;

    t76 = ((x349/(x350+x351))+x352);

    if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x353 = 29U;
	int16_t x354 = -23;

    t77 = ((x353/(x354+x355))+x356);

    if (t77 != 5) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x358 = 1;
	int64_t x359 = 4685553269LL;
	uint8_t x360 = 17U;
	volatile uint64_t t78 = 2158936LLU;

    t78 = ((x357/(x358+x359))+x360);

    if (t78 != 3936940440LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x361 = 18;
	static uint16_t x362 = UINT16_MAX;
	volatile uint32_t x363 = 4080891U;
	volatile int64_t t79 = INT64_MAX;

    t79 = ((x361/(x362+x363))+x364);

    if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x365 = -1;
	volatile int16_t x366 = INT16_MAX;
	int64_t x368 = INT64_MIN;
	int64_t t80 = INT64_MIN;

    t80 = ((x365/(x366+x367))+x368);

    if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x377 = INT8_MIN;
	static int8_t x378 = 3;
	volatile uint64_t x380 = UINT64_MAX;
	uint64_t t81 = UINT64_MAX;

    t81 = ((x377/(x378+x379))+x380);

    if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x381 = 168897LLU;
	volatile uint32_t x382 = UINT32_MAX;
	int64_t x383 = INT64_MIN;
	int16_t x384 = -1;

    t82 = ((x381/(x382+x383))+x384);

    if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x389 = 47;
	uint32_t x390 = UINT32_MAX;
	volatile int32_t x392 = INT32_MIN;
	uint32_t t83 = 2U;

    t83 = ((x389/(x390+x391))+x392);

    if (t83 != 2147483648U) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x406 = 1760;
	volatile int32_t x407 = 63995272;
	uint64_t x408 = UINT64_MAX;

    t84 = ((x405/(x406+x407))+x408);

    if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x409 = 98U;
	static volatile uint8_t x410 = 0U;
	int64_t x411 = INT64_MIN;
	int8_t x412 = -1;
	volatile int64_t t85 = -61553433821736696LL;

    t85 = ((x409/(x410+x411))+x412);

    if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x413 = 13U;
	int64_t x416 = INT64_MIN;
	volatile int64_t t86 = INT64_MIN;

    t86 = ((x413/(x414+x415))+x416);

    if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x417 = 1;
	uint16_t x418 = 2399U;
	int64_t x419 = 97828240311LL;
	int64_t x420 = INT64_MAX;
	int64_t t87 = INT64_MAX;

    t87 = ((x417/(x418+x419))+x420);

    if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x423 = 1788;
	int8_t x424 = 0;

    t88 = ((x421/(x422+x423))+x424);

    if (t88 != 11U) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x425 = -3604;
	volatile uint32_t x426 = 44379788U;
	static uint16_t x427 = 5U;
	int8_t x428 = -15;
	volatile uint32_t t89 = 32073499U;

    t89 = ((x425/(x426+x427))+x428);

    if (t89 != 81U) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x429 = INT16_MAX;
	uint64_t x430 = 2800LLU;
	int8_t x432 = -1;
	uint64_t t90 = 822527746LLU;

    t90 = ((x429/(x430+x431))+x432);

    if (t90 != 10LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x433 = -386;
	int8_t x434 = 2;
	static uint32_t x435 = UINT32_MAX;
	static volatile uint8_t x436 = 35U;
	volatile uint32_t t91 = 9042U;

    t91 = ((x433/(x434+x435))+x436);

    if (t91 != 4294966945U) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x437 = INT8_MIN;
	volatile int32_t x438 = 3362576;
	static int8_t x439 = INT8_MIN;
	int16_t x440 = -1;
	static int32_t t92 = -351735;

    t92 = ((x437/(x438+x439))+x440);

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x441 = 10546U;
	static uint8_t x442 = UINT8_MAX;
	int32_t x443 = -1;
	uint64_t x444 = UINT64_MAX;
	uint64_t t93 = 8363252186258459480LLU;

    t93 = ((x441/(x442+x443))+x444);

    if (t93 != 40LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x445 = -14179562;
	uint64_t x446 = 114153445326524744LLU;
	uint16_t x447 = 13U;
	uint8_t x448 = 22U;

    t94 = ((x445/(x446+x447))+x448);

    if (t94 != 183LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x449 = INT16_MIN;
	static volatile int16_t x450 = 219;
	int16_t x451 = 6;
	static volatile int32_t t95 = 285572770;

    t95 = ((x449/(x450+x451))+x452);

    if (t95 != -108) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x455 = 62U;
	uint32_t t96 = 125620033U;

    t96 = ((x453/(x454+x455))+x456);

    if (t96 != 34727U) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int64_t x457 = INT64_MAX;
	uint8_t x458 = 105U;
	static uint32_t x459 = UINT32_MAX;
	int16_t x460 = 0;
	int64_t t97 = 3835LL;

    t97 = ((x457/(x458+x459))+x460);

    if (t97 != 88686269585142075LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x465 = 4;
	int8_t x466 = INT8_MIN;
	int64_t x467 = -1LL;
	static uint8_t x468 = UINT8_MAX;
	int64_t t98 = -627156440799LL;

    t98 = ((x465/(x466+x467))+x468);

    if (t98 != 255LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x469 = -1;
	volatile uint32_t x470 = UINT32_MAX;
	static int32_t x471 = INT32_MIN;
	uint64_t x472 = 1448361849286192618LLU;

    t99 = ((x469/(x470+x471))+x472);

    if (t99 != 1448361849286192620LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x473 = INT32_MIN;
	uint16_t x475 = 7169U;
	uint32_t x476 = 48U;
	uint32_t t100 = 15598U;

    t100 = ((x473/(x474+x475))+x476);

    if (t100 != 4294667751U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x477 = 1091782647215626LLU;
	volatile int32_t x478 = -1;
	int64_t x479 = -34239LL;
	static int64_t x480 = -2915592363099946LL;
	uint64_t t101 = 901LLU;

    t101 = ((x477/(x478+x479))+x480);

    if (t101 != 18443828481346451670LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x481 = -523392934LL;
	volatile int32_t x482 = -1;
	static volatile int64_t x483 = 69102520457LL;
	int16_t x484 = INT16_MAX;
	int64_t t102 = -109232LL;

    t102 = ((x481/(x482+x483))+x484);

    if (t102 != 32767LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x485 = -34;
	uint16_t x486 = UINT16_MAX;
	int8_t x487 = -1;
	int16_t x488 = 0;
	volatile int32_t t103 = 1032625;

    t103 = ((x485/(x486+x487))+x488);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x491 = -789;
	volatile int64_t t104 = 205229LL;

    t104 = ((x489/(x490+x491))+x492);

    if (t104 != 793LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x493 = -41;
	static int32_t x496 = -15678762;
	int64_t t105 = -4995689LL;

    t105 = ((x493/(x494+x495))+x496);

    if (t105 != -15678762LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x505 = 1;
	int32_t x508 = INT32_MIN;
	volatile int32_t t106 = INT32_MIN;

    t106 = ((x505/(x506+x507))+x508);

    if (t106 != INT32_MIN) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x509 = UINT8_MAX;
	static int16_t x510 = -4240;
	static uint32_t x512 = 55699U;
	volatile uint64_t t107 = 102246LLU;

    t107 = ((x509/(x510+x511))+x512);

    if (t107 != 55699LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x514 = -221809406LL;
	volatile int64_t t108 = 25097243769LL;

    t108 = ((x513/(x514+x515))+x516);

    if (t108 != 125LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x519 = UINT64_MAX;
	static volatile uint64_t t109 = 54432LLU;

    t109 = ((x517/(x518+x519))+x520);

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x521 = -1;
	uint8_t x522 = 10U;
	static int16_t x523 = 6;
	int16_t x524 = -3293;
	volatile int32_t t110 = 943740776;

    t110 = ((x521/(x522+x523))+x524);

    if (t110 != -3293) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x525 = -1;
	int8_t x526 = -1;
	static int64_t x527 = INT64_MAX;
	int32_t x528 = INT32_MAX;
	int64_t t111 = 969893911970LL;

    t111 = ((x525/(x526+x527))+x528);

    if (t111 != 2147483647LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x529 = INT8_MIN;
	int16_t x530 = INT16_MIN;
	int8_t x531 = -1;
	int64_t x532 = 16352474972LL;

    t112 = ((x529/(x530+x531))+x532);

    if (t112 != 16352474972LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x533 = INT8_MIN;
	int16_t x534 = -1591;
	volatile int64_t x535 = INT64_MAX;
	static int8_t x536 = -1;

    t113 = ((x533/(x534+x535))+x536);

    if (t113 != -1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x537 = 4;
	static uint32_t x538 = UINT32_MAX;
	int32_t x539 = -24130;
	int16_t x540 = -1;

    t114 = ((x537/(x538+x539))+x540);

    if (t114 != UINT32_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x542 = 1;
	uint32_t x543 = 13U;
	int16_t x544 = -123;

    t115 = ((x541/(x542+x543))+x544);

    if (t115 != 4294967203U) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x545 = INT32_MIN;
	int32_t x546 = -1;
	static volatile int64_t x548 = 593942974353LL;
	volatile int64_t t116 = 88400698142056LL;

    t116 = ((x545/(x546+x547))+x548);

    if (t116 != 593934519693LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x549 = -1;
	int8_t x550 = INT8_MAX;
	int8_t x551 = 1;
	volatile int32_t t117 = -373890;

    t117 = ((x549/(x550+x551))+x552);

    if (t117 != -38) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x554 = 161U;
	int64_t x555 = -1LL;
	int32_t x556 = INT32_MAX;
	volatile int64_t t118 = -2294668634376763LL;

    t118 = ((x553/(x554+x555))+x556);

    if (t118 != 2147483851LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x557 = 51LLU;
	static int32_t x558 = -1;
	static volatile uint8_t x559 = UINT8_MAX;
	uint16_t x560 = 19901U;
	static uint64_t t119 = 0LLU;

    t119 = ((x557/(x558+x559))+x560);

    if (t119 != 19901LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint8_t x565 = 3U;
	int16_t x566 = INT16_MAX;
	static int16_t x567 = INT16_MAX;
	int64_t x568 = INT64_MIN;
	static volatile int64_t t120 = INT64_MIN;

    t120 = ((x565/(x566+x567))+x568);

    if (t120 != INT64_MIN) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x569 = UINT64_MAX;
	int64_t x570 = 139436LL;
	volatile int16_t x572 = -1;
	uint64_t t121 = 15666612LLU;

    t121 = ((x569/(x570+x571))+x572);

    if (t121 != 132296368011685LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint16_t x573 = 143U;
	uint16_t x574 = 27309U;
	volatile int32_t x576 = -50772079;
	int32_t t122 = -81455;

    t122 = ((x573/(x574+x575))+x576);

    if (t122 != -50772079) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x577 = -2;
	uint16_t x578 = UINT16_MAX;
	int64_t x579 = -1LL;
	uint8_t x580 = UINT8_MAX;
	int64_t t123 = -134LL;

    t123 = ((x577/(x578+x579))+x580);

    if (t123 != 255LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x581 = 393592673;
	static uint16_t x582 = UINT16_MAX;
	uint64_t x583 = UINT64_MAX;
	static int64_t x584 = INT64_MIN;
	volatile uint64_t t124 = 2098LLU;

    t124 = ((x581/(x582+x583))+x584);

    if (t124 != 9223372036854781813LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x585 = INT8_MAX;
	uint32_t x586 = 2U;
	uint8_t x588 = UINT8_MAX;
	int64_t t125 = 89278299046LL;

    t125 = ((x585/(x586+x587))+x588);

    if (t125 != 255LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x589 = 0LLU;
	uint64_t x590 = UINT64_MAX;
	volatile int16_t x591 = 3763;
	static volatile int8_t x592 = INT8_MIN;

    t126 = ((x589/(x590+x591))+x592);

    if (t126 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x594 = INT16_MIN;
	static volatile uint32_t t127 = 6U;

    t127 = ((x593/(x594+x595))+x596);

    if (t127 != 69U) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x597 = -16361LL;
	static uint32_t x598 = UINT32_MAX;
	uint64_t x599 = 22LLU;
	static int64_t x600 = INT64_MIN;

    t128 = ((x597/(x598+x599))+x600);

    if (t128 != 9223372041149743082LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x609 = -1;
	uint8_t x610 = UINT8_MAX;
	int32_t x611 = -878071912;
	static volatile uint16_t x612 = 1513U;
	volatile int32_t t129 = 4471056;

    t129 = ((x609/(x610+x611))+x612);

    if (t129 != 1513) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x613 = INT32_MAX;
	int8_t x614 = 0;
	static uint32_t x616 = UINT32_MAX;

    t130 = ((x613/(x614+x615))+x616);

    if (t130 != 4294967295LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x617 = -40;
	int8_t x619 = INT8_MAX;
	int64_t x620 = INT64_MAX;
	volatile int64_t t131 = INT64_MAX;

    t131 = ((x617/(x618+x619))+x620);

    if (t131 != INT64_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x621 = 0U;
	uint32_t x622 = 283054U;
	uint64_t x623 = 88917286020414682LLU;
	int8_t x624 = -1;
	volatile uint64_t t132 = UINT64_MAX;

    t132 = ((x621/(x622+x623))+x624);

    if (t132 != UINT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x626 = UINT32_MAX;
	int16_t x627 = INT16_MAX;
	uint64_t x628 = UINT64_MAX;

    t133 = ((x625/(x626+x627))+x628);

    if (t133 != 65539LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x629 = INT64_MIN;
	static int16_t x630 = -1;
	uint32_t x632 = UINT32_MAX;
	int64_t t134 = 108LL;

    t134 = ((x629/(x630+x631))+x632);

    if (t134 != 4294967294LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x634 = INT32_MIN;
	static int64_t x635 = -1573777LL;
	volatile int8_t x636 = 0;
	int64_t t135 = 1700006076521349177LL;

    t135 = ((x633/(x634+x635))+x636);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x637 = 265718244;
	int64_t x640 = -5760796LL;
	volatile int64_t t136 = -2LL;

    t136 = ((x637/(x638+x639))+x640);

    if (t136 != -5760796LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x641 = INT32_MIN;
	static uint64_t x643 = 111752062445628LLU;
	int16_t x644 = -1;
	uint64_t t137 = 180330249962641534LLU;

    t137 = ((x641/(x642+x643))+x644);

    if (t137 != 165067LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x649 = UINT64_MAX;
	int32_t x650 = INT32_MIN;
	static uint8_t x651 = UINT8_MAX;
	volatile uint64_t t138 = 32LLU;

    t138 = ((x649/(x650+x651))+x652);

    if (t138 != 44543670LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x657 = INT64_MIN;
	int8_t x658 = INT8_MAX;
	int32_t x660 = -1;
	int64_t t139 = 907136623684465LL;

    t139 = ((x657/(x658+x659))+x660);

    if (t139 != -124663747693548LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x661 = INT8_MIN;
	int8_t x662 = -1;
	int8_t x663 = -1;
	static volatile int8_t x664 = INT8_MAX;

    t140 = ((x661/(x662+x663))+x664);

    if (t140 != 191) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint8_t x668 = UINT8_MAX;
	static uint32_t t141 = 23604733U;

    t141 = ((x665/(x666+x667))+x668);

    if (t141 != 256U) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x669 = INT8_MIN;
	static volatile int8_t x670 = -14;
	int16_t x671 = 37;
	static int8_t x672 = INT8_MAX;
	int32_t t142 = -6417216;

    t142 = ((x669/(x670+x671))+x672);

    if (t142 != 122) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x673 = 218LLU;
	static volatile int64_t x674 = 38551LL;
	volatile uint8_t x675 = 18U;
	uint64_t t143 = 6007037963832190593LLU;

    t143 = ((x673/(x674+x675))+x676);

    if (t143 != 2220442LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x677 = 1221967070LLU;
	static int8_t x678 = -1;
	int32_t x679 = INT32_MAX;
	uint16_t x680 = UINT16_MAX;
	volatile uint64_t t144 = 22077526097410LLU;

    t144 = ((x677/(x678+x679))+x680);

    if (t144 != 65535LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x686 = 50U;
	volatile uint64_t t145 = 3379670LLU;

    t145 = ((x685/(x686+x687))+x688);

    if (t145 != 65486LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile uint16_t x689 = UINT16_MAX;
	uint32_t x690 = UINT32_MAX;
	volatile int8_t x691 = INT8_MIN;

    t146 = ((x689/(x690+x691))+x692);

    if (t146 != UINT32_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x693 = 0U;
	int8_t x695 = INT8_MAX;
	static int32_t x696 = -1;

    t147 = ((x693/(x694+x695))+x696);

    if (t147 != UINT32_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x697 = -1LL;
	static int32_t x698 = 517615623;
	static int64_t x699 = 1966LL;
	static uint8_t x700 = 1U;
	static volatile int64_t t148 = -492627058029872LL;

    t148 = ((x697/(x698+x699))+x700);

    if (t148 != 1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x701 = 77;
	static uint32_t x702 = UINT32_MAX;
	static int64_t x703 = 1664210LL;
	int32_t x704 = INT32_MAX;
	int64_t t149 = 24759LL;

    t149 = ((x701/(x702+x703))+x704);

    if (t149 != 2147483647LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x707 = 4039;
	int64_t x708 = 2733LL;
	int64_t t150 = 210690317010LL;

    t150 = ((x705/(x706+x707))+x708);

    if (t150 != 61330936LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x709 = INT8_MIN;
	int8_t x710 = INT8_MAX;
	volatile uint8_t x711 = 117U;

    t151 = ((x709/(x710+x711))+x712);

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x718 = 122U;
	volatile uint64_t t152 = 1399815LLU;

    t152 = ((x717/(x718+x719))+x720);

    if (t152 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x721 = 9;
	int16_t x722 = INT16_MIN;
	uint64_t x723 = 507152306747109283LLU;
	static int64_t x724 = INT64_MIN;
	uint64_t t153 = 0LLU;

    t153 = ((x721/(x722+x723))+x724);

    if (t153 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x725 = -3LL;
	uint64_t x726 = 6287951115977710LLU;
	int16_t x727 = INT16_MIN;
	int16_t x728 = INT16_MIN;
	static uint64_t t154 = 17984904LLU;

    t154 = ((x725/(x726+x727))+x728);

    if (t154 != 18446744073709521781LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x729 = INT32_MIN;
	volatile int64_t x730 = INT64_MIN;
	static int64_t x732 = -33349333LL;

    t155 = ((x729/(x730+x731))+x732);

    if (t155 != -33349333LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x733 = -6751;
	static int64_t x734 = -308LL;
	static int32_t x735 = INT32_MIN;
	static int32_t x736 = 955885;
	volatile int64_t t156 = 59495176614028682LL;

    t156 = ((x733/(x734+x735))+x736);

    if (t156 != 955885LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int32_t x745 = INT32_MIN;
	int64_t x746 = -1LL;
	int64_t x747 = INT64_MAX;
	static int16_t x748 = INT16_MAX;
	static int64_t t157 = -97LL;

    t157 = ((x745/(x746+x747))+x748);

    if (t157 != 32767LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x749 = INT8_MIN;
	uint16_t x751 = UINT16_MAX;
	volatile uint8_t x752 = 7U;
	volatile int32_t t158 = -13542452;

    t158 = ((x749/(x750+x751))+x752);

    if (t158 != 7) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x753 = -52;
	static volatile int16_t x754 = -742;
	volatile int32_t t159 = -30547335;

    t159 = ((x753/(x754+x755))+x756);

    if (t159 != 54) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x757 = INT16_MAX;
	uint8_t x759 = 29U;
	uint64_t x760 = UINT64_MAX;
	uint64_t t160 = 118LLU;

    t160 = ((x757/(x758+x759))+x760);

    if (t160 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x761 = 22U;
	static int8_t x762 = INT8_MAX;
	uint64_t x763 = 6883622637165981725LLU;
	int16_t x764 = INT16_MIN;
	uint64_t t161 = 6528760113289LLU;

    t161 = ((x761/(x762+x763))+x764);

    if (t161 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint16_t x765 = UINT16_MAX;
	int32_t x766 = 93967894;
	uint8_t x767 = UINT8_MAX;
	static uint64_t x768 = 115296LLU;
	uint64_t t162 = 2423069LLU;

    t162 = ((x765/(x766+x767))+x768);

    if (t162 != 115296LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x769 = INT64_MIN;
	static int64_t x771 = -16683419673LL;
	uint16_t x772 = 26U;

    t163 = ((x769/(x770+x771))+x772);

    if (t163 != 552846639LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x773 = INT32_MIN;
	volatile uint16_t x774 = 110U;
	volatile int8_t x775 = INT8_MAX;
	int16_t x776 = INT16_MIN;
	static volatile int32_t t164 = -467786763;

    t164 = ((x773/(x774+x775))+x776);

    if (t164 != -9093880) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x777 = 104;
	volatile int16_t x779 = INT16_MIN;
	static int32_t x780 = 2;

    t165 = ((x777/(x778+x779))+x780);

    if (t165 != 2) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x781 = INT8_MIN;
	static uint32_t x782 = UINT32_MAX;
	static uint8_t x783 = UINT8_MAX;
	uint16_t x784 = UINT16_MAX;

    t166 = ((x781/(x782+x783))+x784);

    if (t166 != 16974854U) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x793 = INT64_MIN;
	uint8_t x795 = 6U;
	uint16_t x796 = UINT16_MAX;

    t167 = ((x793/(x794+x795))+x796);

    if (t167 != 65536LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint8_t x797 = UINT8_MAX;
	int32_t x798 = INT32_MAX;
	volatile int16_t x799 = INT16_MIN;
	int8_t x800 = INT8_MAX;
	int32_t t168 = -54169897;

    t168 = ((x797/(x798+x799))+x800);

    if (t168 != 127) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x801 = INT8_MIN;
	int8_t x802 = INT8_MAX;
	uint8_t x803 = UINT8_MAX;
	uint32_t x804 = UINT32_MAX;
	static uint32_t t169 = UINT32_MAX;

    t169 = ((x801/(x802+x803))+x804);

    if (t169 != UINT32_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x806 = INT64_MIN;
	static uint64_t x807 = UINT64_MAX;
	volatile uint64_t t170 = 1034121LLU;

    t170 = ((x805/(x806+x807))+x808);

    if (t170 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x809 = INT16_MIN;
	int32_t x811 = -24453704;
	int16_t x812 = -15;
	volatile int32_t t171 = -3874;

    t171 = ((x809/(x810+x811))+x812);

    if (t171 != -15) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint64_t x813 = 32549155577051946LLU;
	uint32_t x815 = 196855727U;
	uint64_t t172 = 0LLU;

    t172 = ((x813/(x814+x815))+x816);

    if (t172 != 155136342LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x819 = 12935U;
	static uint8_t x820 = 25U;
	uint64_t t173 = 2144358937LLU;

    t173 = ((x817/(x818+x819))+x820);

    if (t173 != 30LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x825 = 11U;
	volatile int32_t x827 = INT32_MAX;
	int8_t x828 = -1;
	int32_t t174 = 111740553;

    t174 = ((x825/(x826+x827))+x828);

    if (t174 != -1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x829 = INT16_MIN;
	uint16_t x830 = UINT16_MAX;
	uint8_t x831 = UINT8_MAX;
	volatile int32_t x832 = INT32_MAX;

    t175 = ((x829/(x830+x831))+x832);

    if (t175 != INT32_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x837 = -1LL;
	static int16_t x840 = INT16_MAX;
	int64_t t176 = -1877194471LL;

    t176 = ((x837/(x838+x839))+x840);

    if (t176 != 32767LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x843 = UINT64_MAX;
	uint16_t x844 = 3069U;
	uint64_t t177 = 3893LLU;

    t177 = ((x841/(x842+x843))+x844);

    if (t177 != 3069LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x845 = 56U;
	volatile int8_t x846 = INT8_MAX;
	uint64_t x847 = UINT64_MAX;
	volatile int16_t x848 = INT16_MIN;

    t178 = ((x845/(x846+x847))+x848);

    if (t178 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x849 = 728847LLU;
	int32_t x850 = -1110197;
	uint8_t x851 = UINT8_MAX;
	static volatile uint64_t t179 = 109113LLU;

    t179 = ((x849/(x850+x851))+x852);

    if (t179 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x853 = INT8_MIN;
	uint8_t x855 = UINT8_MAX;

    t180 = ((x853/(x854+x855))+x856);

    if (t180 != 14773048LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x858 = -3;
	int32_t x859 = INT32_MAX;
	int32_t x860 = -4467;

    t181 = ((x857/(x858+x859))+x860);

    if (t181 != 18446744073709547149LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x862 = INT16_MAX;
	int8_t x863 = 0;
	int64_t t182 = 2067488774074LL;

    t182 = ((x861/(x862+x863))+x864);

    if (t182 != -281483594544159LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x868 = 1146U;

    t183 = ((x865/(x866+x867))+x868);

    if (t183 != 1146LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x869 = INT16_MIN;
	volatile uint8_t x870 = 69U;
	uint8_t x872 = 48U;
	int32_t t184 = 17177208;

    t184 = ((x869/(x870+x871))+x872);

    if (t184 != -433) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x874 = UINT8_MAX;
	uint16_t x875 = 15667U;
	volatile int32_t x876 = -422;
	static uint64_t t185 = 864014820LLU;

    t185 = ((x873/(x874+x875))+x876);

    if (t185 != 1650747715114LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x877 = INT32_MIN;
	static int64_t x880 = -1LL;
	int64_t t186 = 21678105876LL;

    t186 = ((x877/(x878+x879))+x880);

    if (t186 != 2147483647LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x881 = 0;
	uint16_t x882 = 121U;
	int32_t x883 = -194841;
	uint32_t t187 = 4086643U;

    t187 = ((x881/(x882+x883))+x884);

    if (t187 != 129045799U) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x885 = INT8_MAX;
	int16_t x886 = INT16_MIN;
	static int16_t x887 = INT16_MAX;
	uint64_t x888 = 120551374485653LLU;
	volatile uint64_t t188 = 1525859002371LLU;

    t188 = ((x885/(x886+x887))+x888);

    if (t188 != 120551374485526LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x889 = 14607846799739LLU;
	static int64_t x891 = -1LL;
	volatile int16_t x892 = -24;
	static volatile uint64_t t189 = 115657003062399LLU;

    t189 = ((x889/(x890+x891))+x892);

    if (t189 != 18446744073709551592LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x897 = -1LL;
	uint8_t x898 = 77U;
	volatile int64_t t190 = -1206885055LL;

    t190 = ((x897/(x898+x899))+x900);

    if (t190 != -1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x901 = -1;
	static uint32_t x902 = 26798248U;
	int16_t x903 = INT16_MIN;
	int64_t x904 = INT64_MIN;
	volatile int64_t t191 = 0LL;

    t191 = ((x901/(x902+x903))+x904);

    if (t191 != -9223372036854775648LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x905 = 7U;
	int32_t x906 = -763819129;
	int32_t t192 = 6;

    t192 = ((x905/(x906+x907))+x908);

    if (t192 != -32768) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x913 = 229749U;
	int8_t x916 = -10;
	volatile int64_t t193 = 24668340842288LL;

    t193 = ((x913/(x914+x915))+x916);

    if (t193 != -10LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x917 = 4;
	int16_t x918 = -1;
	int64_t x920 = INT64_MAX;
	volatile uint64_t t194 = 1098365LLU;

    t194 = ((x917/(x918+x919))+x920);

    if (t194 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x929 = -1;
	int8_t x930 = -39;
	int16_t x931 = 19;
	int32_t x932 = INT32_MAX;
	int32_t t195 = INT32_MAX;

    t195 = ((x929/(x930+x931))+x932);

    if (t195 != INT32_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x935 = 827LL;
	int64_t x936 = -1LL;
	static uint64_t t196 = 2085256257739396LLU;

    t196 = ((x933/(x934+x935))+x936);

    if (t196 != 11166309971979146LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int64_t x937 = INT64_MIN;
	uint16_t x938 = UINT16_MAX;
	static uint32_t x939 = 2U;
	int16_t x940 = INT16_MIN;
	int64_t t197 = 20082581LL;

    t197 = ((x937/(x938+x939))+x940);

    if (t197 != -140735340937215LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x942 = 7U;
	static int32_t x943 = INT32_MIN;
	int16_t x944 = INT16_MIN;
	volatile uint32_t t198 = 1061U;

    t198 = ((x941/(x942+x943))+x944);

    if (t198 != 4294934528U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x945 = 1090U;
	static int16_t x946 = INT16_MIN;
	volatile int64_t x947 = 1191LL;
	static int64_t t199 = -942LL;

    t199 = ((x945/(x946+x947))+x948);

    if (t199 != 4294967295LL) { NG(); } else { ; }
	
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

