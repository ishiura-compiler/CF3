
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

int16_t x3 = -1;
static int16_t x21 = INT16_MIN;
uint8_t x26 = 14U;
uint16_t x29 = UINT16_MAX;
int8_t x36 = INT8_MAX;
static volatile int32_t t6 = -107;
volatile uint32_t t8 = 146U;
static int32_t t11 = -952;
static uint64_t t12 = 12145LLU;
int64_t t13 = -149203758LL;
static int8_t x69 = INT8_MIN;
uint8_t x78 = 5U;
volatile uint32_t t15 = 31488415U;
static int16_t x87 = 465;
int32_t x88 = -1;
static uint8_t x91 = 5U;
uint8_t x92 = 2U;
static uint8_t x94 = UINT8_MAX;
volatile uint64_t x122 = 2813356101077LLU;
int16_t x123 = INT16_MIN;
volatile uint16_t x131 = UINT16_MAX;
uint16_t x132 = 808U;
volatile int64_t t26 = -9878262406056LL;
static int16_t x141 = INT16_MAX;
int8_t x143 = INT8_MIN;
volatile int16_t x144 = INT16_MIN;
int8_t x146 = INT8_MIN;
volatile int32_t x150 = -109;
uint64_t t30 = 40696586851LLU;
uint64_t x157 = 75LLU;
volatile int64_t x162 = 27823342456LL;
int32_t x166 = INT32_MAX;
uint64_t x168 = 1360043415LLU;
uint64_t x173 = UINT64_MAX;
int16_t x174 = INT16_MIN;
volatile int32_t x175 = 24;
int8_t x180 = INT8_MAX;
uint64_t t36 = 248329775703383281LLU;
uint16_t x184 = UINT16_MAX;
int64_t x190 = -1LL;
int64_t x195 = 148182437625221LL;
static int64_t x201 = INT64_MIN;
int64_t x204 = INT64_MAX;
int64_t x205 = INT64_MIN;
int8_t x206 = 1;
static int8_t x208 = INT8_MAX;
static uint16_t x223 = 9104U;
uint8_t x224 = UINT8_MAX;
int32_t t48 = 2669749;
int8_t x249 = -1;
int64_t x251 = -1LL;
int8_t x254 = INT8_MIN;
static int16_t x255 = -1;
volatile uint32_t t53 = 479U;
volatile int32_t t57 = 44889061;
int16_t x275 = INT16_MIN;
uint32_t x293 = 162874732U;
volatile int64_t t61 = -522917LL;
int64_t x298 = -1LL;
int64_t t64 = -4072LL;
int8_t x310 = -1;
volatile int8_t x312 = INT8_MIN;
uint64_t x319 = UINT64_MAX;
uint64_t t67 = 114573637431797665LLU;
uint64_t t68 = 2922082986789LLU;
int8_t x328 = INT8_MIN;
static int8_t x332 = INT8_MAX;
volatile int32_t x343 = INT32_MIN;
int16_t x352 = -1;
int32_t t75 = -72537;
static volatile uint32_t x360 = UINT32_MAX;
static int8_t x361 = INT8_MAX;
int16_t x362 = INT16_MAX;
static volatile uint8_t x363 = 2U;
static int16_t x365 = INT16_MIN;
uint32_t x367 = UINT32_MAX;
int8_t x369 = -2;
int64_t x371 = 67052542LL;
uint16_t x372 = UINT16_MAX;
int32_t x380 = INT32_MIN;
static int64_t x411 = -1LL;
uint32_t x412 = 270877401U;
static int16_t x414 = 4750;
volatile int8_t x415 = 0;
uint64_t x416 = UINT64_MAX;
static uint16_t x432 = 24507U;
int32_t t89 = -62350691;
volatile int64_t x435 = INT64_MAX;
int16_t x445 = -178;
volatile uint64_t x448 = 1626LLU;
uint64_t t93 = 11204088407406806LLU;
static int8_t x463 = INT8_MIN;
int32_t t95 = -238;
static int8_t x466 = INT8_MAX;
volatile int32_t t96 = -1162591;
static int32_t t98 = -180224512;
int8_t x488 = INT8_MIN;
int32_t t100 = -10;
int64_t x492 = 2902049771266LL;
volatile int8_t x497 = INT8_MAX;
static volatile uint64_t t102 = 83568LLU;
int64_t x508 = INT64_MIN;
uint16_t x514 = 24U;
volatile int32_t t107 = -2;
uint32_t x525 = 1U;
int16_t x535 = 1;
volatile uint64_t t110 = 14720942140567577LLU;
static int8_t x541 = INT8_MIN;
uint8_t x553 = 0U;
uint32_t x564 = 35438483U;
int64_t t116 = 516209184786LL;
volatile int32_t t117 = 490217512;
int16_t x574 = -1;
volatile uint8_t x575 = 30U;
static volatile int32_t t119 = -1120;
int64_t x579 = 3032081911448LL;
uint8_t x580 = 2U;
volatile uint64_t x589 = 232893LLU;
static int16_t x590 = INT16_MAX;
static int8_t x593 = 10;
uint32_t x595 = UINT32_MAX;
int8_t x601 = -1;
static volatile int32_t t126 = -10590262;
int8_t x610 = -10;
int16_t x613 = INT16_MAX;
int32_t t129 = -64935149;
uint64_t x618 = 889452770LLU;
uint32_t x620 = 6278U;
int32_t x633 = INT32_MAX;
volatile uint64_t x637 = 27455LLU;
int64_t x643 = INT64_MIN;
uint32_t x644 = 66052130U;
volatile uint32_t t135 = 141946U;
int8_t x645 = INT8_MAX;
uint32_t x646 = 18593425U;
uint8_t x650 = 5U;
int64_t x654 = -1LL;
static int8_t x655 = INT8_MIN;
volatile uint32_t x656 = 209225U;
uint32_t x657 = 297U;
int64_t x658 = INT64_MAX;
uint8_t x659 = UINT8_MAX;
int8_t x670 = INT8_MIN;
volatile int64_t t141 = 5LL;
volatile int64_t x680 = INT64_MIN;
static int8_t x683 = 0;
static volatile int32_t t143 = 332148030;
int8_t x685 = -1;
volatile int8_t x686 = -1;
volatile int16_t x692 = -1;
static volatile uint32_t t145 = UINT32_MAX;
int8_t x698 = INT8_MAX;
static volatile int32_t t148 = -99407474;
uint32_t t149 = 565106761U;
static int16_t x718 = 101;
static int8_t x722 = INT8_MIN;
int8_t x727 = -50;
uint64_t x733 = UINT64_MAX;
volatile uint64_t t155 = 240LLU;
static volatile int64_t x740 = INT64_MIN;
volatile int32_t t157 = -23014952;
static volatile int8_t x750 = INT8_MIN;
int16_t x758 = INT16_MIN;
volatile uint8_t x763 = 0U;
int16_t x764 = 10363;
volatile int16_t x765 = -1;
int64_t t163 = 12850888568LL;
int64_t x770 = -1LL;
int64_t x782 = INT64_MIN;
uint16_t x791 = UINT16_MAX;
int64_t t168 = -604219LL;
static uint64_t x799 = UINT64_MAX;
int8_t x815 = INT8_MAX;
volatile int32_t t174 = -11;
uint16_t x822 = 30U;
int16_t x825 = -1;
uint32_t x832 = 14U;
int32_t x843 = INT32_MIN;
int32_t x852 = -1;
int16_t x853 = INT16_MAX;
volatile uint32_t x855 = 221U;
uint16_t x859 = 535U;
volatile int16_t x861 = 0;
int8_t x862 = INT8_MIN;
volatile int64_t t186 = -2365240LL;
uint8_t x877 = 11U;
volatile uint8_t x882 = UINT8_MAX;
uint16_t x883 = 279U;
int32_t x884 = -1;
volatile int8_t x885 = INT8_MIN;
uint32_t x896 = 389U;
volatile uint64_t t192 = 15187222LLU;
uint64_t t193 = 81648753550LLU;
int64_t x905 = -213591LL;
volatile int32_t t195 = -362366;
uint16_t x919 = UINT16_MAX;
static int8_t x922 = -1;
int8_t x927 = 3;
int16_t x928 = INT16_MIN;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	volatile int8_t x2 = INT8_MIN;
	uint32_t x4 = UINT32_MAX;
	uint32_t t0 = 60U;

    t0 = ((x1-(x2==x3))+x4);

    if (t0 != 4294967167U) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	volatile int32_t x6 = 115;
	static uint8_t x7 = UINT8_MAX;
	int16_t x8 = INT16_MAX;
	int32_t t1 = -759;

    t1 = ((x5-(x6==x7))+x8);

    if (t1 != -2147450881) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	static volatile uint8_t x10 = 0U;
	static int16_t x11 = INT16_MIN;
	volatile int16_t x12 = 123;
	int32_t t2 = 158;

    t2 = ((x9-(x10==x11))+x12);

    if (t2 != 122) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x22 = 5714LLU;
	uint16_t x23 = 0U;
	static int32_t x24 = 138658667;
	volatile int32_t t3 = 8898;

    t3 = ((x21-(x22==x23))+x24);

    if (t3 != 138625899) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x25 = INT16_MIN;
	static uint32_t x27 = 13038130U;
	int16_t x28 = INT16_MAX;
	volatile int32_t t4 = 5;

    t4 = ((x25-(x26==x27))+x28);

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x30 = -8;
	int64_t x31 = INT64_MAX;
	volatile int32_t x32 = 2319;
	static volatile int32_t t5 = -1936083;

    t5 = ((x29-(x30==x31))+x32);

    if (t5 != 67854) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x33 = 47U;
	uint8_t x34 = 0U;
	static volatile int64_t x35 = -1LL;

    t6 = ((x33-(x34==x35))+x36);

    if (t6 != 174) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint8_t x37 = 70U;
	uint8_t x38 = 8U;
	int8_t x39 = -1;
	int16_t x40 = INT16_MIN;
	int32_t t7 = 2;

    t7 = ((x37-(x38==x39))+x40);

    if (t7 != -32698) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x41 = 23309U;
	volatile int16_t x42 = 18;
	int8_t x43 = 3;
	int8_t x44 = INT8_MAX;

    t8 = ((x41-(x42==x43))+x44);

    if (t8 != 23436U) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x45 = -2036704;
	static volatile int32_t x46 = 0;
	int8_t x47 = -3;
	uint64_t x48 = 5125707LLU;
	volatile uint64_t t9 = 11122697445481LLU;

    t9 = ((x45-(x46==x47))+x48);

    if (t9 != 3089003LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x49 = INT8_MIN;
	uint64_t x50 = UINT64_MAX;
	uint32_t x51 = UINT32_MAX;
	int32_t x52 = 3487;
	int32_t t10 = 49;

    t10 = ((x49-(x50==x51))+x52);

    if (t10 != 3359) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x53 = INT32_MIN;
	static int64_t x54 = INT64_MAX;
	static int16_t x55 = -5588;
	uint8_t x56 = 2U;

    t11 = ((x53-(x54==x55))+x56);

    if (t11 != -2147483646) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x57 = 16092561206977LLU;
	int32_t x58 = -1;
	volatile uint16_t x59 = UINT16_MAX;
	uint16_t x60 = 152U;

    t12 = ((x57-(x58==x59))+x60);

    if (t12 != 16092561207129LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x61 = INT8_MIN;
	int32_t x62 = INT32_MIN;
	int8_t x63 = -1;
	int64_t x64 = 51761180LL;

    t13 = ((x61-(x62==x63))+x64);

    if (t13 != 51761052LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x70 = INT8_MIN;
	int64_t x71 = INT64_MIN;
	static int16_t x72 = 63;
	int32_t t14 = 212095678;

    t14 = ((x69-(x70==x71))+x72);

    if (t14 != -65) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x77 = INT16_MIN;
	static uint32_t x79 = UINT32_MAX;
	volatile uint32_t x80 = 105574U;

    t15 = ((x77-(x78==x79))+x80);

    if (t15 != 72806U) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x81 = 61;
	uint32_t x82 = 451U;
	uint32_t x83 = 19U;
	int16_t x84 = INT16_MIN;
	volatile int32_t t16 = 6479;

    t16 = ((x81-(x82==x83))+x84);

    if (t16 != -32707) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x85 = 245462695369LL;
	uint8_t x86 = 0U;
	int64_t t17 = 58990837552LL;

    t17 = ((x85-(x86==x87))+x88);

    if (t17 != 245462695368LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x89 = INT64_MIN;
	static int8_t x90 = -1;
	volatile int64_t t18 = 139490083160827LL;

    t18 = ((x89-(x90==x91))+x92);

    if (t18 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x93 = -8637;
	int8_t x95 = INT8_MIN;
	uint64_t x96 = UINT64_MAX;
	uint64_t t19 = 94LLU;

    t19 = ((x93-(x94==x95))+x96);

    if (t19 != 18446744073709542978LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x101 = INT8_MAX;
	volatile int16_t x102 = -1;
	int32_t x103 = -153707315;
	static uint32_t x104 = 193U;
	static uint32_t t20 = 0U;

    t20 = ((x101-(x102==x103))+x104);

    if (t20 != 320U) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x109 = -1LL;
	uint32_t x110 = UINT32_MAX;
	uint16_t x111 = UINT16_MAX;
	int32_t x112 = INT32_MIN;
	volatile int64_t t21 = -3855317936112820618LL;

    t21 = ((x109-(x110==x111))+x112);

    if (t21 != -2147483649LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x117 = -1;
	int16_t x118 = 10;
	int8_t x119 = 14;
	uint32_t x120 = UINT32_MAX;
	uint32_t t22 = 2U;

    t22 = ((x117-(x118==x119))+x120);

    if (t22 != 4294967294U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x121 = 408370249LLU;
	uint8_t x124 = 40U;
	static uint64_t t23 = 611309108LLU;

    t23 = ((x121-(x122==x123))+x124);

    if (t23 != 408370289LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x129 = 12545911491LLU;
	uint32_t x130 = UINT32_MAX;
	volatile uint64_t t24 = 333302529286LLU;

    t24 = ((x129-(x130==x131))+x132);

    if (t24 != 12545912299LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x133 = INT32_MIN;
	int64_t x134 = INT64_MAX;
	static volatile int64_t x135 = -1LL;
	int32_t x136 = 3726749;
	int32_t t25 = -389234306;

    t25 = ((x133-(x134==x135))+x136);

    if (t25 != -2143756899) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x137 = INT16_MIN;
	int32_t x138 = -1;
	int32_t x139 = INT32_MAX;
	static int64_t x140 = -3383LL;

    t26 = ((x137-(x138==x139))+x140);

    if (t26 != -36151LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x142 = -1LL;
	volatile int32_t t27 = 14745;

    t27 = ((x141-(x142==x143))+x144);

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x145 = -1;
	int8_t x147 = INT8_MAX;
	uint64_t x148 = UINT64_MAX;
	uint64_t t28 = 428283501LLU;

    t28 = ((x145-(x146==x147))+x148);

    if (t28 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x149 = 2124LLU;
	volatile int32_t x151 = -1;
	int16_t x152 = -1;
	volatile uint64_t t29 = 3445200LLU;

    t29 = ((x149-(x150==x151))+x152);

    if (t29 != 2123LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x153 = 7U;
	static int8_t x154 = INT8_MAX;
	int8_t x155 = 15;
	static uint64_t x156 = 3LLU;

    t30 = ((x153-(x154==x155))+x156);

    if (t30 != 10LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x158 = UINT8_MAX;
	int64_t x159 = INT64_MIN;
	volatile uint32_t x160 = UINT32_MAX;
	volatile uint64_t t31 = 45342386791051105LLU;

    t31 = ((x157-(x158==x159))+x160);

    if (t31 != 4294967370LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x161 = INT32_MAX;
	int16_t x163 = -2;
	volatile uint32_t x164 = 7321056U;
	static uint32_t t32 = 561U;

    t32 = ((x161-(x162==x163))+x164);

    if (t32 != 2154804703U) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x165 = INT16_MIN;
	static uint16_t x167 = UINT16_MAX;
	uint64_t t33 = 0LLU;

    t33 = ((x165-(x166==x167))+x168);

    if (t33 != 1360010647LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x169 = 1LLU;
	uint8_t x170 = UINT8_MAX;
	static int32_t x171 = INT32_MIN;
	int32_t x172 = 519;
	volatile uint64_t t34 = 80905310LLU;

    t34 = ((x169-(x170==x171))+x172);

    if (t34 != 520LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x176 = INT8_MIN;
	uint64_t t35 = 66844760224770704LLU;

    t35 = ((x173-(x174==x175))+x176);

    if (t35 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x177 = 1LLU;
	uint32_t x178 = UINT32_MAX;
	int32_t x179 = 224;

    t36 = ((x177-(x178==x179))+x180);

    if (t36 != 128LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x181 = -1;
	static uint16_t x182 = UINT16_MAX;
	static uint64_t x183 = 2629013690445257144LLU;
	volatile int32_t t37 = -14;

    t37 = ((x181-(x182==x183))+x184);

    if (t37 != 65534) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x185 = INT8_MAX;
	static uint8_t x186 = UINT8_MAX;
	int16_t x187 = -1;
	int16_t x188 = INT16_MIN;
	volatile int32_t t38 = 30447;

    t38 = ((x185-(x186==x187))+x188);

    if (t38 != -32641) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x189 = 4;
	uint8_t x191 = 118U;
	int8_t x192 = 2;
	static int32_t t39 = 568;

    t39 = ((x189-(x190==x191))+x192);

    if (t39 != 6) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x193 = UINT16_MAX;
	int64_t x194 = -103470LL;
	int8_t x196 = INT8_MAX;
	volatile int32_t t40 = -22597;

    t40 = ((x193-(x194==x195))+x196);

    if (t40 != 65662) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x197 = UINT16_MAX;
	int16_t x198 = 0;
	int8_t x199 = INT8_MIN;
	static int64_t x200 = INT64_MIN;
	volatile int64_t t41 = -194401LL;

    t41 = ((x197-(x198==x199))+x200);

    if (t41 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint8_t x202 = 6U;
	int8_t x203 = 2;
	volatile int64_t t42 = -415LL;

    t42 = ((x201-(x202==x203))+x204);

    if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x207 = INT8_MIN;
	int64_t t43 = 454210002LL;

    t43 = ((x205-(x206==x207))+x208);

    if (t43 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x209 = 659;
	int32_t x210 = INT32_MIN;
	int64_t x211 = 37LL;
	static uint32_t x212 = 6978U;
	uint32_t t44 = 3U;

    t44 = ((x209-(x210==x211))+x212);

    if (t44 != 7637U) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x217 = -1;
	int8_t x218 = INT8_MAX;
	int32_t x219 = INT32_MAX;
	volatile int16_t x220 = INT16_MIN;
	int32_t t45 = 1403;

    t45 = ((x217-(x218==x219))+x220);

    if (t45 != -32769) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x221 = 1;
	static volatile int64_t x222 = -1LL;
	static int32_t t46 = -42053383;

    t46 = ((x221-(x222==x223))+x224);

    if (t46 != 256) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x225 = INT32_MIN;
	static volatile int32_t x226 = INT32_MAX;
	volatile uint32_t x227 = 15U;
	uint64_t x228 = UINT64_MAX;
	volatile uint64_t t47 = 30785LLU;

    t47 = ((x225-(x226==x227))+x228);

    if (t47 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x229 = 27;
	uint32_t x230 = 1478U;
	uint32_t x231 = UINT32_MAX;
	volatile uint8_t x232 = 14U;

    t48 = ((x229-(x230==x231))+x232);

    if (t48 != 41) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x233 = -1;
	volatile uint16_t x234 = 1934U;
	int64_t x235 = INT64_MIN;
	volatile uint32_t x236 = 2162U;
	volatile uint32_t t49 = 90703971U;

    t49 = ((x233-(x234==x235))+x236);

    if (t49 != 2161U) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x237 = -1;
	static volatile int64_t x238 = INT64_MAX;
	static volatile int8_t x239 = INT8_MIN;
	volatile uint16_t x240 = 8513U;
	static volatile int32_t t50 = 3;

    t50 = ((x237-(x238==x239))+x240);

    if (t50 != 8512) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x241 = -1;
	int16_t x242 = -1;
	int16_t x243 = -160;
	uint16_t x244 = UINT16_MAX;
	int32_t t51 = -7060882;

    t51 = ((x241-(x242==x243))+x244);

    if (t51 != 65534) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x250 = UINT32_MAX;
	int64_t x252 = INT64_MAX;
	volatile int64_t t52 = 1LL;

    t52 = ((x249-(x250==x251))+x252);

    if (t52 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x253 = -178;
	static uint32_t x256 = 1U;

    t53 = ((x253-(x254==x255))+x256);

    if (t53 != 4294967119U) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x257 = INT8_MIN;
	uint16_t x258 = UINT16_MAX;
	uint32_t x259 = 2001506U;
	static int64_t x260 = -1437LL;
	int64_t t54 = -24314475634034777LL;

    t54 = ((x257-(x258==x259))+x260);

    if (t54 != -1565LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint8_t x261 = UINT8_MAX;
	int8_t x262 = -1;
	int32_t x263 = INT32_MIN;
	int64_t x264 = -1LL;
	static volatile int64_t t55 = -31786777812215LL;

    t55 = ((x261-(x262==x263))+x264);

    if (t55 != 254LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint16_t x265 = 226U;
	uint32_t x266 = UINT32_MAX;
	int64_t x267 = INT64_MIN;
	int64_t x268 = -29345338388717LL;
	volatile int64_t t56 = -6411431LL;

    t56 = ((x265-(x266==x267))+x268);

    if (t56 != -29345338388491LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int16_t x269 = 15;
	int64_t x270 = INT64_MAX;
	int32_t x271 = INT32_MAX;
	int16_t x272 = -1;

    t57 = ((x269-(x270==x271))+x272);

    if (t57 != 14) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x273 = -186;
	static int32_t x274 = INT32_MIN;
	static uint8_t x276 = 4U;
	int32_t t58 = -308160779;

    t58 = ((x273-(x274==x275))+x276);

    if (t58 != -182) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x277 = 1563626843059403LL;
	int16_t x278 = 1405;
	volatile int32_t x279 = INT32_MIN;
	uint32_t x280 = 463057U;
	int64_t t59 = -16647196169808LL;

    t59 = ((x277-(x278==x279))+x280);

    if (t59 != 1563626843522460LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x281 = 387391LLU;
	static uint64_t x282 = UINT64_MAX;
	int32_t x283 = INT32_MAX;
	int8_t x284 = 1;
	static volatile uint64_t t60 = 1LLU;

    t60 = ((x281-(x282==x283))+x284);

    if (t60 != 387392LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x294 = -5449880LL;
	volatile uint16_t x295 = 29525U;
	int64_t x296 = -1LL;

    t61 = ((x293-(x294==x295))+x296);

    if (t61 != 162874731LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x297 = INT8_MAX;
	volatile int16_t x299 = INT16_MIN;
	static uint8_t x300 = 23U;
	volatile int32_t t62 = -18;

    t62 = ((x297-(x298==x299))+x300);

    if (t62 != 150) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x301 = INT16_MAX;
	static volatile uint64_t x302 = UINT64_MAX;
	int16_t x303 = INT16_MAX;
	static int8_t x304 = INT8_MIN;
	volatile int32_t t63 = -3939;

    t63 = ((x301-(x302==x303))+x304);

    if (t63 != 32639) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x305 = -2704;
	int16_t x306 = 0;
	static int16_t x307 = INT16_MAX;
	static int64_t x308 = -1LL;

    t64 = ((x305-(x306==x307))+x308);

    if (t64 != -2705LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x309 = INT16_MIN;
	int64_t x311 = INT64_MAX;
	volatile int32_t t65 = -75;

    t65 = ((x309-(x310==x311))+x312);

    if (t65 != -32896) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x313 = 507701LL;
	int64_t x314 = -1LL;
	int64_t x315 = INT64_MIN;
	int16_t x316 = -1;
	int64_t t66 = 30LL;

    t66 = ((x313-(x314==x315))+x316);

    if (t66 != 507700LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x317 = -1;
	static int64_t x318 = -1LL;
	uint64_t x320 = UINT64_MAX;

    t67 = ((x317-(x318==x319))+x320);

    if (t67 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x321 = 4883;
	uint32_t x322 = UINT32_MAX;
	volatile uint8_t x323 = 4U;
	volatile uint64_t x324 = 61845974208128121LLU;

    t68 = ((x321-(x322==x323))+x324);

    if (t68 != 61845974208133004LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x325 = 0U;
	uint64_t x326 = 8LLU;
	int8_t x327 = -1;
	int32_t t69 = -368643;

    t69 = ((x325-(x326==x327))+x328);

    if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint8_t x329 = UINT8_MAX;
	uint16_t x330 = 1864U;
	int8_t x331 = INT8_MIN;
	volatile int32_t t70 = 1316520;

    t70 = ((x329-(x330==x331))+x332);

    if (t70 != 382) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x333 = UINT32_MAX;
	volatile int32_t x334 = -1;
	volatile uint32_t x335 = 24628U;
	volatile int32_t x336 = -24;
	uint32_t t71 = 714U;

    t71 = ((x333-(x334==x335))+x336);

    if (t71 != 4294967271U) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x337 = INT8_MIN;
	static volatile int16_t x338 = 0;
	uint16_t x339 = 30U;
	int32_t x340 = -70;
	int32_t t72 = 916;

    t72 = ((x337-(x338==x339))+x340);

    if (t72 != -198) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint8_t x341 = UINT8_MAX;
	int64_t x342 = INT64_MIN;
	int32_t x344 = -1;
	static volatile int32_t t73 = -25537429;

    t73 = ((x341-(x342==x343))+x344);

    if (t73 != 254) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x345 = UINT64_MAX;
	uint32_t x346 = UINT32_MAX;
	volatile int32_t x347 = INT32_MAX;
	int16_t x348 = -1;
	uint64_t t74 = 4914LLU;

    t74 = ((x345-(x346==x347))+x348);

    if (t74 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x349 = UINT16_MAX;
	static int32_t x350 = 59;
	int64_t x351 = 229LL;

    t75 = ((x349-(x350==x351))+x352);

    if (t75 != 65534) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x353 = -7;
	int64_t x354 = 126746254LL;
	uint16_t x355 = 6059U;
	static int16_t x356 = INT16_MAX;
	volatile int32_t t76 = 12153;

    t76 = ((x353-(x354==x355))+x356);

    if (t76 != 32760) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x357 = 12;
	uint16_t x358 = UINT16_MAX;
	int32_t x359 = INT32_MIN;
	uint32_t t77 = 1U;

    t77 = ((x357-(x358==x359))+x360);

    if (t77 != 11U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x364 = UINT64_MAX;
	volatile uint64_t t78 = 500591826062383202LLU;

    t78 = ((x361-(x362==x363))+x364);

    if (t78 != 126LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x366 = INT16_MIN;
	static int8_t x368 = INT8_MAX;
	int32_t t79 = -25594;

    t79 = ((x365-(x366==x367))+x368);

    if (t79 != -32641) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x370 = INT8_MIN;
	volatile int32_t t80 = -4;

    t80 = ((x369-(x370==x371))+x372);

    if (t80 != 65533) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x377 = INT32_MAX;
	uint8_t x378 = 4U;
	uint8_t x379 = 85U;
	int32_t t81 = 8188;

    t81 = ((x377-(x378==x379))+x380);

    if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x381 = INT8_MAX;
	uint8_t x382 = UINT8_MAX;
	int32_t x383 = 9;
	int16_t x384 = INT16_MIN;
	static volatile int32_t t82 = -12;

    t82 = ((x381-(x382==x383))+x384);

    if (t82 != -32641) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x389 = 20U;
	volatile int16_t x390 = INT16_MAX;
	uint32_t x391 = 547U;
	uint8_t x392 = UINT8_MAX;
	int32_t t83 = 251;

    t83 = ((x389-(x390==x391))+x392);

    if (t83 != 275) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x401 = -1LL;
	int32_t x402 = -1;
	uint16_t x403 = 807U;
	int32_t x404 = INT32_MAX;
	volatile int64_t t84 = 1898689987749LL;

    t84 = ((x401-(x402==x403))+x404);

    if (t84 != 2147483646LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x405 = 1792;
	static uint8_t x406 = 13U;
	uint32_t x407 = UINT32_MAX;
	static int16_t x408 = INT16_MIN;
	int32_t t85 = -85114129;

    t85 = ((x405-(x406==x407))+x408);

    if (t85 != -30976) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x409 = 1U;
	int8_t x410 = INT8_MIN;
	volatile uint32_t t86 = 5086284U;

    t86 = ((x409-(x410==x411))+x412);

    if (t86 != 270877402U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x413 = 1286533710278LLU;
	volatile uint64_t t87 = 1083789LLU;

    t87 = ((x413-(x414==x415))+x416);

    if (t87 != 1286533710277LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x421 = -1;
	int64_t x422 = INT64_MIN;
	uint16_t x423 = UINT16_MAX;
	int8_t x424 = 2;
	static volatile int32_t t88 = 8;

    t88 = ((x421-(x422==x423))+x424);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x429 = INT16_MAX;
	static int64_t x430 = INT64_MIN;
	int64_t x431 = -1LL;

    t89 = ((x429-(x430==x431))+x432);

    if (t89 != 57274) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x433 = -7229093841592844LL;
	uint8_t x434 = 1U;
	int64_t x436 = INT64_MAX;
	volatile int64_t t90 = 1LL;

    t90 = ((x433-(x434==x435))+x436);

    if (t90 != 9216142943013182963LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x437 = 30;
	static uint64_t x438 = 12LLU;
	volatile int32_t x439 = -1;
	int16_t x440 = INT16_MIN;
	static int32_t t91 = -15;

    t91 = ((x437-(x438==x439))+x440);

    if (t91 != -32738) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x441 = INT8_MIN;
	static uint64_t x442 = 334574452278003LLU;
	uint8_t x443 = 4U;
	int64_t x444 = INT64_MAX;
	static int64_t t92 = 336401823513LL;

    t92 = ((x441-(x442==x443))+x444);

    if (t92 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x446 = -1;
	uint64_t x447 = 217070676868LLU;

    t93 = ((x445-(x446==x447))+x448);

    if (t93 != 1448LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x449 = INT8_MAX;
	static volatile uint8_t x450 = 5U;
	int64_t x451 = -731LL;
	int32_t x452 = INT32_MIN;
	volatile int32_t t94 = -133548303;

    t94 = ((x449-(x450==x451))+x452);

    if (t94 != -2147483521) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x461 = -1;
	int32_t x462 = 8538184;
	static uint16_t x464 = 59U;

    t95 = ((x461-(x462==x463))+x464);

    if (t95 != 58) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x465 = 9190;
	volatile uint16_t x467 = 0U;
	uint8_t x468 = 29U;

    t96 = ((x465-(x466==x467))+x468);

    if (t96 != 9219) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x473 = 199U;
	uint8_t x474 = 20U;
	int64_t x475 = -24LL;
	volatile int64_t x476 = 444012617709931483LL;
	int64_t t97 = 277371362858353409LL;

    t97 = ((x473-(x474==x475))+x476);

    if (t97 != 444012617709931682LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x477 = 2;
	int64_t x478 = -662664LL;
	volatile int64_t x479 = INT64_MIN;
	static volatile uint8_t x480 = 127U;

    t98 = ((x477-(x478==x479))+x480);

    if (t98 != 129) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x481 = 1454358;
	uint16_t x482 = 103U;
	volatile int8_t x483 = INT8_MAX;
	int64_t x484 = -116024868697198LL;
	static volatile int64_t t99 = -66LL;

    t99 = ((x481-(x482==x483))+x484);

    if (t99 != -116024867242840LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x485 = INT16_MIN;
	int32_t x486 = -99;
	static volatile uint32_t x487 = 623936U;

    t100 = ((x485-(x486==x487))+x488);

    if (t100 != -32896) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x489 = -1;
	static int16_t x490 = INT16_MAX;
	int64_t x491 = INT64_MIN;
	static volatile int64_t t101 = -388364LL;

    t101 = ((x489-(x490==x491))+x492);

    if (t101 != 2902049771265LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x498 = -1LL;
	static volatile int32_t x499 = 2129;
	uint64_t x500 = UINT64_MAX;

    t102 = ((x497-(x498==x499))+x500);

    if (t102 != 126LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x505 = 1;
	static uint64_t x506 = UINT64_MAX;
	static int32_t x507 = -3;
	volatile int64_t t103 = -136219353728772LL;

    t103 = ((x505-(x506==x507))+x508);

    if (t103 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x509 = 185U;
	volatile uint32_t x510 = 8U;
	uint8_t x511 = 34U;
	volatile int64_t x512 = -1LL;
	volatile int64_t t104 = 28719439606134593LL;

    t104 = ((x509-(x510==x511))+x512);

    if (t104 != 184LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x513 = 324479844756LLU;
	uint16_t x515 = 338U;
	volatile int32_t x516 = INT32_MAX;
	static volatile uint64_t t105 = 0LLU;

    t105 = ((x513-(x514==x515))+x516);

    if (t105 != 326627328403LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x517 = -1566;
	int16_t x518 = 53;
	static int8_t x519 = -11;
	uint32_t x520 = UINT32_MAX;
	uint32_t t106 = 12159613U;

    t106 = ((x517-(x518==x519))+x520);

    if (t106 != 4294965729U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x521 = 2436U;
	int64_t x522 = INT64_MAX;
	int64_t x523 = -1393274244LL;
	int8_t x524 = 0;

    t107 = ((x521-(x522==x523))+x524);

    if (t107 != 2436) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x526 = 897U;
	int32_t x527 = INT32_MIN;
	int64_t x528 = INT64_MIN;
	volatile int64_t t108 = -7800730321337418LL;

    t108 = ((x525-(x526==x527))+x528);

    if (t108 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x533 = 64U;
	int8_t x534 = 0;
	static uint64_t x536 = 1365LLU;
	volatile uint64_t t109 = 101465764916723LLU;

    t109 = ((x533-(x534==x535))+x536);

    if (t109 != 1429LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x537 = 2398U;
	static uint64_t x538 = UINT64_MAX;
	int32_t x539 = 42575122;
	static volatile uint64_t x540 = 1784923411LLU;

    t110 = ((x537-(x538==x539))+x540);

    if (t110 != 1784925809LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x542 = -1;
	int16_t x543 = -1;
	volatile int8_t x544 = -1;
	int32_t t111 = 56558261;

    t111 = ((x541-(x542==x543))+x544);

    if (t111 != -130) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x545 = -1079159739304LL;
	int32_t x546 = -1;
	uint32_t x547 = 202U;
	int32_t x548 = -1;
	volatile int64_t t112 = -2046LL;

    t112 = ((x545-(x546==x547))+x548);

    if (t112 != -1079159739305LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x549 = 6956848U;
	int16_t x550 = INT16_MIN;
	static int8_t x551 = INT8_MIN;
	int16_t x552 = -1;
	uint32_t t113 = 0U;

    t113 = ((x549-(x550==x551))+x552);

    if (t113 != 6956847U) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x554 = 119;
	int16_t x555 = -1;
	int32_t x556 = -9127390;
	int32_t t114 = 311;

    t114 = ((x553-(x554==x555))+x556);

    if (t114 != -9127390) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x557 = INT64_MAX;
	static volatile int32_t x558 = INT32_MAX;
	uint64_t x559 = 219473897749LLU;
	static int8_t x560 = INT8_MIN;
	volatile int64_t t115 = -3556056878123LL;

    t115 = ((x557-(x558==x559))+x560);

    if (t115 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x561 = -2LL;
	int64_t x562 = INT64_MIN;
	int16_t x563 = INT16_MAX;

    t116 = ((x561-(x562==x563))+x564);

    if (t116 != 35438481LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x565 = INT16_MIN;
	int8_t x566 = INT8_MIN;
	int32_t x567 = -1;
	static uint8_t x568 = 0U;

    t117 = ((x565-(x566==x567))+x568);

    if (t117 != -32768) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x569 = UINT8_MAX;
	int32_t x570 = -671257108;
	uint8_t x571 = UINT8_MAX;
	static uint16_t x572 = UINT16_MAX;
	static int32_t t118 = 546074129;

    t118 = ((x569-(x570==x571))+x572);

    if (t118 != 65790) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x573 = 10;
	int8_t x576 = INT8_MIN;

    t119 = ((x573-(x574==x575))+x576);

    if (t119 != -118) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x577 = INT8_MAX;
	volatile int8_t x578 = -1;
	volatile int32_t t120 = -1;

    t120 = ((x577-(x578==x579))+x580);

    if (t120 != 129) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x581 = INT8_MIN;
	static int8_t x582 = INT8_MAX;
	uint8_t x583 = 60U;
	int64_t x584 = 32291124LL;
	volatile int64_t t121 = 329193775629621LL;

    t121 = ((x581-(x582==x583))+x584);

    if (t121 != 32290996LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint32_t x585 = 1092U;
	static uint32_t x586 = UINT32_MAX;
	uint32_t x587 = 140311096U;
	static volatile int16_t x588 = -5485;
	uint32_t t122 = 325U;

    t122 = ((x585-(x586==x587))+x588);

    if (t122 != 4294962903U) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x591 = -1;
	int8_t x592 = INT8_MAX;
	static volatile uint64_t t123 = 194695173382LLU;

    t123 = ((x589-(x590==x591))+x592);

    if (t123 != 233020LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x594 = -2;
	int32_t x596 = -3675;
	int32_t t124 = -117936528;

    t124 = ((x593-(x594==x595))+x596);

    if (t124 != -3665) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x597 = INT16_MIN;
	uint8_t x598 = 0U;
	uint64_t x599 = UINT64_MAX;
	uint8_t x600 = 9U;
	volatile int32_t t125 = 17;

    t125 = ((x597-(x598==x599))+x600);

    if (t125 != -32759) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x602 = INT8_MIN;
	static volatile uint8_t x603 = 2U;
	int32_t x604 = 113027;

    t126 = ((x601-(x602==x603))+x604);

    if (t126 != 113026) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x605 = 139973842613145LL;
	uint16_t x606 = 5031U;
	int16_t x607 = INT16_MIN;
	int64_t x608 = -1LL;
	volatile int64_t t127 = -30LL;

    t127 = ((x605-(x606==x607))+x608);

    if (t127 != 139973842613144LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int16_t x609 = INT16_MAX;
	int32_t x611 = INT32_MIN;
	int32_t x612 = -1;
	int32_t t128 = 2176;

    t128 = ((x609-(x610==x611))+x612);

    if (t128 != 32766) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x614 = INT32_MAX;
	uint32_t x615 = UINT32_MAX;
	int32_t x616 = -1;

    t129 = ((x613-(x614==x615))+x616);

    if (t129 != 32766) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x617 = 402745013591734LLU;
	int32_t x619 = -1;
	volatile uint64_t t130 = 152617809824LLU;

    t130 = ((x617-(x618==x619))+x620);

    if (t130 != 402745013598012LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x621 = INT16_MIN;
	static volatile uint64_t x622 = UINT64_MAX;
	volatile int16_t x623 = INT16_MIN;
	int32_t x624 = 708807289;
	volatile int32_t t131 = 111;

    t131 = ((x621-(x622==x623))+x624);

    if (t131 != 708774521) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x625 = 3804;
	static int8_t x626 = INT8_MIN;
	uint16_t x627 = 3019U;
	volatile int16_t x628 = INT16_MAX;
	volatile int32_t t132 = -2485780;

    t132 = ((x625-(x626==x627))+x628);

    if (t132 != 36571) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x634 = INT32_MIN;
	volatile uint32_t x635 = UINT32_MAX;
	volatile uint64_t x636 = UINT64_MAX;
	volatile uint64_t t133 = 983090454LLU;

    t133 = ((x633-(x634==x635))+x636);

    if (t133 != 2147483646LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x638 = 140698183700486808LL;
	volatile uint64_t x639 = 36LLU;
	int64_t x640 = INT64_MAX;
	uint64_t t134 = 6409LLU;

    t134 = ((x637-(x638==x639))+x640);

    if (t134 != 9223372036854803262LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x641 = 1;
	int64_t x642 = -46041614440543LL;

    t135 = ((x641-(x642==x643))+x644);

    if (t135 != 66052131U) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x647 = -1LL;
	int16_t x648 = 14;
	int32_t t136 = 5161;

    t136 = ((x645-(x646==x647))+x648);

    if (t136 != 141) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x649 = 19;
	uint8_t x651 = 21U;
	int16_t x652 = 4636;
	volatile int32_t t137 = -5;

    t137 = ((x649-(x650==x651))+x652);

    if (t137 != 4655) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x653 = UINT8_MAX;
	uint32_t t138 = 16381245U;

    t138 = ((x653-(x654==x655))+x656);

    if (t138 != 209480U) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t x660 = UINT64_MAX;
	volatile uint64_t t139 = 1485550136984360LLU;

    t139 = ((x657-(x658==x659))+x660);

    if (t139 != 296LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x665 = INT8_MAX;
	volatile int32_t x666 = -1;
	int16_t x667 = 1;
	int32_t x668 = -837263;
	static int32_t t140 = 14912996;

    t140 = ((x665-(x666==x667))+x668);

    if (t140 != -837136) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x669 = INT64_MAX;
	volatile int32_t x671 = 16772416;
	static int8_t x672 = -1;

    t141 = ((x669-(x670==x671))+x672);

    if (t141 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x677 = 96U;
	uint32_t x678 = 1437009578U;
	uint32_t x679 = 462889U;
	int64_t t142 = -44066LL;

    t142 = ((x677-(x678==x679))+x680);

    if (t142 != -9223372036854775712LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x681 = UINT16_MAX;
	int16_t x682 = INT16_MAX;
	int16_t x684 = INT16_MAX;

    t143 = ((x681-(x682==x683))+x684);

    if (t143 != 98302) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x687 = INT8_MIN;
	uint32_t x688 = 13345U;
	uint32_t t144 = 147U;

    t144 = ((x685-(x686==x687))+x688);

    if (t144 != 13344U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x689 = 0U;
	int8_t x690 = 59;
	uint8_t x691 = UINT8_MAX;

    t145 = ((x689-(x690==x691))+x692);

    if (t145 != UINT32_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x693 = 704093LL;
	int8_t x694 = 1;
	int32_t x695 = -1;
	uint32_t x696 = 21U;
	volatile int64_t t146 = -60944239713882LL;

    t146 = ((x693-(x694==x695))+x696);

    if (t146 != 704114LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint8_t x697 = 58U;
	static uint32_t x699 = 1447268723U;
	int16_t x700 = 14;
	volatile int32_t t147 = 2429;

    t147 = ((x697-(x698==x699))+x700);

    if (t147 != 72) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x701 = INT16_MIN;
	uint32_t x702 = 1013085U;
	int8_t x703 = INT8_MIN;
	volatile int8_t x704 = 6;

    t148 = ((x701-(x702==x703))+x704);

    if (t148 != -32762) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x705 = 2067U;
	static int16_t x706 = -1;
	int8_t x707 = -1;
	uint32_t x708 = 14U;

    t149 = ((x705-(x706==x707))+x708);

    if (t149 != 2080U) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x709 = -7;
	int64_t x710 = INT64_MIN;
	uint32_t x711 = 0U;
	uint64_t x712 = UINT64_MAX;
	uint64_t t150 = 1965009LLU;

    t150 = ((x709-(x710==x711))+x712);

    if (t150 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x713 = -800211048896330LL;
	volatile int32_t x714 = 91316418;
	int64_t x715 = 2518294125645786LL;
	int16_t x716 = INT16_MAX;
	int64_t t151 = -24974983LL;

    t151 = ((x713-(x714==x715))+x716);

    if (t151 != -800211048863563LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x717 = INT64_MAX;
	int16_t x719 = INT16_MAX;
	int64_t x720 = INT64_MIN;
	int64_t t152 = -9LL;

    t152 = ((x717-(x718==x719))+x720);

    if (t152 != -1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x721 = 2309U;
	int8_t x723 = -1;
	int64_t x724 = INT64_MIN;
	int64_t t153 = -103899LL;

    t153 = ((x721-(x722==x723))+x724);

    if (t153 != -9223372036854773499LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x725 = INT32_MIN;
	int16_t x726 = -1;
	static int8_t x728 = INT8_MAX;
	volatile int32_t t154 = -777;

    t154 = ((x725-(x726==x727))+x728);

    if (t154 != -2147483521) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x734 = -2;
	int16_t x735 = 108;
	uint64_t x736 = 3429194542517009LLU;

    t155 = ((x733-(x734==x735))+x736);

    if (t155 != 3429194542517008LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x737 = INT16_MAX;
	uint8_t x738 = 3U;
	static int64_t x739 = INT64_MAX;
	int64_t t156 = -106232909930822583LL;

    t156 = ((x737-(x738==x739))+x740);

    if (t156 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x741 = UINT16_MAX;
	uint64_t x742 = 1039242LLU;
	volatile int8_t x743 = 14;
	uint16_t x744 = 860U;

    t157 = ((x741-(x742==x743))+x744);

    if (t157 != 66395) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x745 = INT64_MAX;
	int64_t x746 = INT64_MIN;
	uint32_t x747 = 1899U;
	int16_t x748 = -408;
	volatile int64_t t158 = 1846062362LL;

    t158 = ((x745-(x746==x747))+x748);

    if (t158 != 9223372036854775399LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x749 = 1023U;
	int32_t x751 = INT32_MIN;
	volatile int8_t x752 = INT8_MIN;
	volatile int32_t t159 = -54;

    t159 = ((x749-(x750==x751))+x752);

    if (t159 != 895) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x753 = 30U;
	volatile uint16_t x754 = 28591U;
	volatile uint16_t x755 = 6593U;
	int16_t x756 = 103;
	int32_t t160 = 1004543626;

    t160 = ((x753-(x754==x755))+x756);

    if (t160 != 133) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x757 = INT16_MAX;
	uint64_t x759 = 644089841LLU;
	uint32_t x760 = 1615U;
	static volatile uint32_t t161 = 55497291U;

    t161 = ((x757-(x758==x759))+x760);

    if (t161 != 34382U) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x761 = INT8_MAX;
	static int32_t x762 = INT32_MIN;
	volatile int32_t t162 = 5;

    t162 = ((x761-(x762==x763))+x764);

    if (t162 != 10490) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x766 = UINT64_MAX;
	uint16_t x767 = 513U;
	int64_t x768 = INT64_MAX;

    t163 = ((x765-(x766==x767))+x768);

    if (t163 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x769 = INT16_MIN;
	int8_t x771 = 0;
	volatile int16_t x772 = 1;
	volatile int32_t t164 = -24;

    t164 = ((x769-(x770==x771))+x772);

    if (t164 != -32767) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x773 = INT16_MIN;
	volatile int64_t x774 = -133628613039LL;
	int64_t x775 = INT64_MIN;
	volatile int16_t x776 = -486;
	volatile int32_t t165 = -13;

    t165 = ((x773-(x774==x775))+x776);

    if (t165 != -33254) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x781 = INT16_MIN;
	int32_t x783 = INT32_MIN;
	uint8_t x784 = 43U;
	int32_t t166 = -5;

    t166 = ((x781-(x782==x783))+x784);

    if (t166 != -32725) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x785 = 1U;
	volatile uint64_t x786 = UINT64_MAX;
	static volatile int8_t x787 = -1;
	int64_t x788 = INT64_MIN;
	volatile int64_t t167 = INT64_MIN;

    t167 = ((x785-(x786==x787))+x788);

    if (t167 != INT64_MIN) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x789 = 4;
	static uint32_t x790 = 493174U;
	volatile int64_t x792 = 2850145LL;

    t168 = ((x789-(x790==x791))+x792);

    if (t168 != 2850149LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x793 = -46;
	int64_t x794 = INT64_MIN;
	uint16_t x795 = 13617U;
	uint16_t x796 = 11U;
	volatile int32_t t169 = 9;

    t169 = ((x793-(x794==x795))+x796);

    if (t169 != -35) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x797 = UINT64_MAX;
	volatile uint16_t x798 = UINT16_MAX;
	int16_t x800 = -4;
	volatile uint64_t t170 = 1135LLU;

    t170 = ((x797-(x798==x799))+x800);

    if (t170 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x805 = -1;
	static volatile int16_t x806 = 104;
	static int64_t x807 = INT64_MIN;
	int64_t x808 = -11364931110617107LL;
	int64_t t171 = 64657LL;

    t171 = ((x805-(x806==x807))+x808);

    if (t171 != -11364931110617108LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint16_t x809 = UINT16_MAX;
	int8_t x810 = INT8_MAX;
	static int64_t x811 = INT64_MIN;
	volatile uint64_t x812 = UINT64_MAX;
	volatile uint64_t t172 = 349956092034LLU;

    t172 = ((x809-(x810==x811))+x812);

    if (t172 != 65534LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x813 = -1;
	static int32_t x814 = INT32_MIN;
	uint32_t x816 = UINT32_MAX;
	volatile uint32_t t173 = 65205U;

    t173 = ((x813-(x814==x815))+x816);

    if (t173 != 4294967294U) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x817 = INT8_MIN;
	uint16_t x818 = UINT16_MAX;
	static uint32_t x819 = 289520629U;
	int16_t x820 = 12474;

    t174 = ((x817-(x818==x819))+x820);

    if (t174 != 12346) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x821 = INT8_MIN;
	static uint32_t x823 = UINT32_MAX;
	int64_t x824 = INT64_MAX;
	int64_t t175 = 14411076LL;

    t175 = ((x821-(x822==x823))+x824);

    if (t175 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x826 = 19050311252792323LL;
	uint8_t x827 = UINT8_MAX;
	int8_t x828 = -1;
	int32_t t176 = 1972;

    t176 = ((x825-(x826==x827))+x828);

    if (t176 != -2) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x829 = INT32_MAX;
	static uint16_t x830 = 136U;
	int64_t x831 = -57691044827LL;
	uint32_t t177 = 10743U;

    t177 = ((x829-(x830==x831))+x832);

    if (t177 != 2147483661U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x833 = 0U;
	int16_t x834 = -1;
	static int8_t x835 = 6;
	int8_t x836 = -1;
	volatile int32_t t178 = -11720291;

    t178 = ((x833-(x834==x835))+x836);

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x841 = 1913340781LLU;
	int16_t x842 = -1;
	static uint32_t x844 = 180178198U;
	uint64_t t179 = 1333124LLU;

    t179 = ((x841-(x842==x843))+x844);

    if (t179 != 2093518979LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x845 = 53469454260124LLU;
	int32_t x846 = 110748;
	uint32_t x847 = UINT32_MAX;
	static uint8_t x848 = 6U;
	uint64_t t180 = 101LLU;

    t180 = ((x845-(x846==x847))+x848);

    if (t180 != 53469454260130LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x849 = 19090947LL;
	static uint32_t x850 = UINT32_MAX;
	int16_t x851 = INT16_MAX;
	volatile int64_t t181 = -5281128121159367LL;

    t181 = ((x849-(x850==x851))+x852);

    if (t181 != 19090946LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x854 = 153U;
	volatile int16_t x856 = INT16_MAX;
	volatile int32_t t182 = 853266171;

    t182 = ((x853-(x854==x855))+x856);

    if (t182 != 65534) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x857 = 144;
	int16_t x858 = -15106;
	static int8_t x860 = INT8_MIN;
	int32_t t183 = 112169;

    t183 = ((x857-(x858==x859))+x860);

    if (t183 != 16) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x863 = -1LL;
	int16_t x864 = INT16_MIN;
	volatile int32_t t184 = -13;

    t184 = ((x861-(x862==x863))+x864);

    if (t184 != -32768) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x865 = INT32_MAX;
	uint8_t x866 = 0U;
	static uint64_t x867 = 672397046576294LLU;
	static int64_t x868 = 1251030238793237LL;
	volatile int64_t t185 = 616714684LL;

    t185 = ((x865-(x866==x867))+x868);

    if (t185 != 1251032386276884LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int16_t x869 = INT16_MIN;
	uint64_t x870 = 12938LLU;
	volatile int32_t x871 = INT32_MIN;
	int64_t x872 = -5346315766705LL;

    t186 = ((x869-(x870==x871))+x872);

    if (t186 != -5346315799473LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x878 = 1;
	uint8_t x879 = 5U;
	int16_t x880 = -1;
	volatile int32_t t187 = -235;

    t187 = ((x877-(x878==x879))+x880);

    if (t187 != 10) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x881 = 24U;
	int32_t t188 = 17;

    t188 = ((x881-(x882==x883))+x884);

    if (t188 != 23) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x886 = -101LL;
	int64_t x887 = INT64_MIN;
	int8_t x888 = INT8_MIN;
	int32_t t189 = 774420;

    t189 = ((x885-(x886==x887))+x888);

    if (t189 != -256) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x889 = 109U;
	static int8_t x890 = 2;
	volatile int64_t x891 = -1LL;
	int32_t x892 = INT32_MIN;
	volatile int32_t t190 = -9;

    t190 = ((x889-(x890==x891))+x892);

    if (t190 != -2147483539) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x893 = -1LL;
	static int32_t x894 = 10;
	uint64_t x895 = 161311066749735587LLU;
	static volatile int64_t t191 = -20899729341148078LL;

    t191 = ((x893-(x894==x895))+x896);

    if (t191 != 388LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x897 = 121LLU;
	int32_t x898 = INT32_MAX;
	static int64_t x899 = 1822370654108455LL;
	volatile int64_t x900 = INT64_MAX;

    t192 = ((x897-(x898==x899))+x900);

    if (t192 != 9223372036854775928LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x901 = UINT8_MAX;
	volatile int16_t x902 = INT16_MIN;
	int64_t x903 = -1LL;
	static volatile uint64_t x904 = 35240LLU;

    t193 = ((x901-(x902==x903))+x904);

    if (t193 != 35495LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x906 = INT64_MAX;
	int64_t x907 = INT64_MIN;
	volatile uint64_t x908 = UINT64_MAX;
	volatile uint64_t t194 = 13736785LLU;

    t194 = ((x905-(x906==x907))+x908);

    if (t194 != 18446744073709338024LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x909 = 1;
	volatile uint8_t x910 = UINT8_MAX;
	volatile uint16_t x911 = UINT16_MAX;
	static int8_t x912 = INT8_MAX;

    t195 = ((x909-(x910==x911))+x912);

    if (t195 != 128) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x913 = -49;
	int32_t x914 = INT32_MIN;
	uint64_t x915 = 218004704033169LLU;
	volatile uint64_t x916 = UINT64_MAX;
	uint64_t t196 = 2177970LLU;

    t196 = ((x913-(x914==x915))+x916);

    if (t196 != 18446744073709551566LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x917 = 0U;
	volatile int16_t x918 = 0;
	int8_t x920 = -1;
	volatile int32_t t197 = -475;

    t197 = ((x917-(x918==x919))+x920);

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x921 = 575LLU;
	static int32_t x923 = 4069902;
	int64_t x924 = 43292137515LL;
	uint64_t t198 = 2640LLU;

    t198 = ((x921-(x922==x923))+x924);

    if (t198 != 43292138090LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x925 = -54439847;
	volatile int32_t x926 = INT32_MAX;
	volatile int32_t t199 = -1;

    t199 = ((x925-(x926==x927))+x928);

    if (t199 != -54472615) { NG(); } else { ; }
	
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

