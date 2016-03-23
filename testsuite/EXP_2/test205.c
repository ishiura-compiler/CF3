
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

int64_t x5 = -2261157641454LL;
volatile int8_t x8 = INT8_MIN;
uint16_t x14 = 3U;
int16_t x18 = -2613;
uint32_t x21 = 4471U;
int32_t x25 = INT32_MAX;
static int32_t t5 = -15;
volatile uint32_t x29 = 78932U;
uint32_t x30 = UINT32_MAX;
int32_t x41 = 16020;
int32_t x45 = 416532862;
static int16_t x50 = INT16_MAX;
static volatile int32_t t10 = 101;
uint64_t x54 = 783676453096610LLU;
volatile int8_t x60 = -1;
uint64_t x61 = UINT64_MAX;
int8_t x63 = INT8_MIN;
int16_t x68 = -1;
static volatile int32_t x71 = INT32_MAX;
volatile int32_t t15 = 8912987;
uint64_t x76 = 139354552LLU;
volatile int32_t t16 = -2;
static volatile int32_t t17 = -6285;
uint16_t x89 = 7745U;
int16_t x90 = INT16_MAX;
volatile int64_t x91 = INT64_MAX;
uint16_t x94 = 6590U;
uint64_t x96 = 31502785514705869LLU;
int32_t x105 = -1;
static int16_t x112 = INT16_MAX;
int32_t t21 = -87626;
int16_t x120 = 5;
volatile uint8_t x129 = 25U;
static uint8_t x132 = UINT8_MAX;
int32_t t30 = -19057;
int32_t x155 = -1;
static uint16_t x176 = 12649U;
int16_t x183 = 0;
uint16_t x185 = 31722U;
int8_t x186 = -1;
uint64_t x188 = 60725593878856013LLU;
uint64_t x194 = 3LLU;
static int8_t x206 = 3;
volatile int64_t x207 = -1LL;
volatile int32_t x211 = -401397218;
uint8_t x218 = UINT8_MAX;
uint16_t x219 = UINT16_MAX;
uint32_t x223 = 10507U;
int16_t x224 = INT16_MAX;
volatile int32_t t43 = 4;
int64_t x226 = -118LL;
uint64_t x228 = UINT64_MAX;
volatile int64_t x237 = 327848239LL;
int32_t x246 = -5829;
int16_t x253 = INT16_MAX;
uint16_t x254 = 587U;
volatile int32_t t52 = 32;
volatile uint32_t x270 = 2098433U;
static int32_t x271 = -1;
uint16_t x273 = UINT16_MAX;
static volatile int16_t x274 = -1;
int16_t x275 = -1;
volatile int32_t t54 = 78010966;
int16_t x295 = INT16_MIN;
int32_t t57 = 1;
uint64_t x297 = 23999043026108LLU;
uint16_t x300 = UINT16_MAX;
int64_t x306 = INT64_MAX;
int8_t x308 = INT8_MAX;
volatile uint32_t x310 = UINT32_MAX;
volatile int64_t x316 = INT64_MIN;
static uint16_t x319 = 378U;
int32_t t64 = -21212;
int32_t x332 = INT32_MIN;
int32_t x333 = 6192;
int32_t t67 = 20419651;
uint32_t x343 = UINT32_MAX;
volatile uint16_t x350 = 14U;
static int16_t x352 = INT16_MAX;
static int16_t x357 = -1;
volatile int8_t x358 = 0;
static int8_t x359 = INT8_MAX;
int8_t x367 = INT8_MIN;
uint64_t x375 = 327LLU;
int64_t x379 = 2253992LL;
volatile uint64_t x385 = 59141500199570288LLU;
volatile int8_t x387 = 38;
int32_t t78 = -1;
uint8_t x389 = UINT8_MAX;
volatile int32_t t79 = -1402;
volatile int32_t t80 = 1054135416;
int8_t x403 = -1;
int32_t t82 = -6991258;
uint16_t x433 = 78U;
int8_t x443 = 0;
static int32_t t88 = 60585117;
volatile uint8_t x455 = 0U;
int8_t x456 = INT8_MIN;
static int16_t x460 = INT16_MIN;
static int16_t x461 = INT16_MIN;
volatile uint64_t x466 = 5LLU;
int32_t t93 = 2594;
static int16_t x479 = -1;
volatile int64_t x481 = INT64_MAX;
int8_t x482 = -1;
int16_t x483 = -1;
int16_t x485 = -1;
uint32_t x488 = 1U;
int64_t x503 = -1LL;
int32_t t100 = 0;
int32_t t102 = -147673;
uint64_t x518 = UINT64_MAX;
uint64_t x521 = UINT64_MAX;
static int64_t x527 = 2189621708083382LL;
static int16_t x536 = INT16_MIN;
int32_t t106 = -21336388;
volatile int32_t t107 = 370489;
int32_t x541 = INT32_MIN;
uint32_t x542 = 66U;
volatile int32_t x547 = -53593;
int16_t x552 = INT16_MAX;
int16_t x557 = INT16_MIN;
int16_t x567 = INT16_MIN;
uint64_t x569 = 3137787288290301813LLU;
uint16_t x571 = UINT16_MAX;
int32_t x572 = INT32_MIN;
static volatile int32_t t114 = -1056960757;
int32_t t116 = 3269;
uint32_t x588 = 21U;
int32_t x589 = INT32_MIN;
int64_t x598 = -4007990LL;
uint8_t x604 = 1U;
static int16_t x606 = -4587;
uint8_t x607 = UINT8_MAX;
static int16_t x613 = INT16_MIN;
static int32_t t126 = 191122197;
int32_t t128 = 18827;
int8_t x631 = -1;
int32_t x634 = INT32_MIN;
volatile int32_t t130 = -5311;
static int32_t t132 = -2257807;
static uint16_t x651 = 0U;
volatile int32_t t134 = 304;
uint8_t x655 = 8U;
volatile uint64_t x657 = UINT64_MAX;
int8_t x658 = INT8_MIN;
volatile int32_t x659 = INT32_MIN;
int32_t t136 = 2369403;
int32_t t138 = 445474;
uint16_t x671 = UINT16_MAX;
int16_t x672 = INT16_MIN;
uint64_t x674 = 520232650LLU;
uint32_t x679 = 1840420830U;
int32_t t142 = -15794080;
int32_t t144 = 1;
int8_t x694 = INT8_MIN;
uint16_t x695 = 1U;
static int16_t x703 = -1;
static int32_t t147 = -109947221;
volatile int32_t t148 = 31727998;
int8_t x719 = INT8_MIN;
uint8_t x724 = UINT8_MAX;
int64_t x730 = INT64_MIN;
static int32_t t153 = 450;
uint64_t x745 = 17LLU;
volatile int16_t x751 = -1;
int8_t x753 = INT8_MAX;
int32_t t156 = 0;
static uint64_t x757 = UINT64_MAX;
int8_t x761 = INT8_MAX;
int32_t t160 = 15;
volatile int32_t t161 = 3808603;
int32_t t162 = 765;
int32_t t163 = -1024787548;
uint32_t x789 = 1156150U;
uint64_t x793 = 232670158997505900LLU;
volatile int64_t x797 = INT64_MIN;
static uint16_t x799 = UINT16_MAX;
uint64_t x803 = 3820866LLU;
static uint16_t x817 = UINT16_MAX;
volatile int8_t x819 = INT8_MIN;
static uint8_t x823 = UINT8_MAX;
int8_t x824 = -1;
volatile int32_t t172 = 360759957;
int32_t t173 = 6916;
int32_t x830 = 225580409;
volatile int64_t x836 = -909585957LL;
int32_t t177 = 47796;
int16_t x854 = -31;
uint8_t x856 = 18U;
uint64_t x859 = 401038900504488480LLU;
volatile int32_t t180 = 848982000;
int32_t x869 = 2;
volatile uint64_t x870 = UINT64_MAX;
static volatile int32_t x875 = -21905580;
uint16_t x882 = UINT16_MAX;
volatile uint16_t x889 = UINT16_MAX;
static int32_t t187 = 23303750;
static int16_t x901 = 0;
volatile uint64_t x903 = 15885195LLU;
volatile int32_t t189 = 1;
static int64_t x905 = 110408171581695LL;
static int64_t x908 = INT64_MAX;
int32_t t190 = 21;
volatile int32_t x909 = 2492688;
static int32_t x914 = 786225;
static int16_t x915 = INT16_MIN;
int64_t x916 = INT64_MIN;
volatile int16_t x920 = INT16_MAX;
uint16_t x922 = UINT16_MAX;
int32_t t194 = 2746;
int16_t x927 = -1;
uint8_t x928 = UINT8_MAX;
int32_t x933 = INT32_MAX;
uint32_t x943 = 427977077U;


void f0(void) {
    	int16_t x1 = 3353;
	int16_t x2 = INT16_MIN;
	static uint16_t x3 = 106U;
	int32_t x4 = -3864;
	volatile int32_t t0 = 27980783;

    t0 = ((x1+(x2-x3))>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x6 = UINT8_MAX;
	static volatile int16_t x7 = INT16_MIN;
	int32_t t1 = -124077;

    t1 = ((x5+(x6-x7))>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int8_t x13 = INT8_MIN;
	int32_t x15 = 447;
	int16_t x16 = -1;
	static volatile int32_t t2 = 1644;

    t2 = ((x13+(x14-x15))>x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint32_t x17 = 51969282U;
	volatile int16_t x19 = -14;
	int32_t x20 = -2;
	int32_t t3 = -2;

    t3 = ((x17+(x18-x19))>x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x22 = -1LL;
	int16_t x23 = 856;
	int8_t x24 = INT8_MAX;
	int32_t t4 = -13991;

    t4 = ((x21+(x22-x23))>x24);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x26 = INT16_MIN;
	int32_t x27 = -1;
	volatile uint64_t x28 = 102159252124913LLU;

    t5 = ((x25+(x26-x27))>x28);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x31 = INT16_MAX;
	uint16_t x32 = UINT16_MAX;
	int32_t t6 = -10063;

    t6 = ((x29+(x30-x31))>x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x37 = 2;
	volatile int8_t x38 = -13;
	int32_t x39 = 129416392;
	int8_t x40 = INT8_MIN;
	int32_t t7 = 15;

    t7 = ((x37+(x38-x39))>x40);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x42 = 2604015;
	int32_t x43 = INT32_MAX;
	int32_t x44 = INT32_MIN;
	volatile int32_t t8 = 62;

    t8 = ((x41+(x42-x43))>x44);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x46 = -34973003;
	int16_t x47 = -1048;
	int8_t x48 = INT8_MAX;
	int32_t t9 = -523366148;

    t9 = ((x45+(x46-x47))>x48);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x49 = 15U;
	static uint8_t x51 = 117U;
	volatile int32_t x52 = INT32_MIN;

    t10 = ((x49+(x50-x51))>x52);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x53 = INT16_MIN;
	static uint64_t x55 = UINT64_MAX;
	int64_t x56 = -58414268LL;
	volatile int32_t t11 = 76883605;

    t11 = ((x53+(x54-x55))>x56);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x57 = -6287399567LL;
	int8_t x58 = INT8_MAX;
	static uint64_t x59 = UINT64_MAX;
	volatile int32_t t12 = 3;

    t12 = ((x57+(x58-x59))>x60);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x62 = 89LLU;
	int16_t x64 = INT16_MIN;
	int32_t t13 = 10419;

    t13 = ((x61+(x62-x63))>x64);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x65 = UINT16_MAX;
	uint32_t x66 = 3018U;
	static volatile uint16_t x67 = 12U;
	static volatile int32_t t14 = -9397;

    t14 = ((x65+(x66-x67))>x68);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint16_t x69 = 8U;
	static volatile uint64_t x70 = UINT64_MAX;
	int64_t x72 = INT64_MAX;

    t15 = ((x69+(x70-x71))>x72);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x73 = INT16_MIN;
	volatile uint64_t x74 = 133345526701LLU;
	int32_t x75 = 250;

    t16 = ((x73+(x74-x75))>x76);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x85 = INT32_MAX;
	static int8_t x86 = INT8_MIN;
	volatile uint8_t x87 = UINT8_MAX;
	static int16_t x88 = INT16_MIN;

    t17 = ((x85+(x86-x87))>x88);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x92 = INT8_MIN;
	volatile int32_t t18 = 3;

    t18 = ((x89+(x90-x91))>x92);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x93 = 216U;
	int64_t x95 = -1LL;
	volatile int32_t t19 = -64850711;

    t19 = ((x93+(x94-x95))>x96);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x106 = INT16_MIN;
	uint32_t x107 = 151063031U;
	int32_t x108 = -905982;
	int32_t t20 = 15;

    t20 = ((x105+(x106-x107))>x108);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x109 = -9;
	static volatile int64_t x110 = -1LL;
	int16_t x111 = INT16_MIN;

    t21 = ((x109+(x110-x111))>x112);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x113 = INT16_MAX;
	int8_t x114 = INT8_MIN;
	int32_t x115 = -1;
	int16_t x116 = -1;
	static int32_t t22 = -1;

    t22 = ((x113+(x114-x115))>x116);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x117 = 13112U;
	volatile int8_t x118 = INT8_MAX;
	static uint64_t x119 = 2822772717868LLU;
	int32_t t23 = 69308641;

    t23 = ((x117+(x118-x119))>x120);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x121 = 10175483993337182LL;
	int8_t x122 = INT8_MAX;
	static int8_t x123 = -3;
	int32_t x124 = INT32_MIN;
	volatile int32_t t24 = 2759938;

    t24 = ((x121+(x122-x123))>x124);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x125 = UINT16_MAX;
	uint8_t x126 = UINT8_MAX;
	static uint8_t x127 = 96U;
	volatile int8_t x128 = INT8_MIN;
	int32_t t25 = 1593;

    t25 = ((x125+(x126-x127))>x128);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint64_t x130 = 82LLU;
	int8_t x131 = 1;
	volatile int32_t t26 = 55401;

    t26 = ((x129+(x130-x131))>x132);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int32_t x133 = -1;
	int32_t x134 = -43726715;
	int64_t x135 = 10132299232241346LL;
	static uint8_t x136 = 3U;
	int32_t t27 = -5;

    t27 = ((x133+(x134-x135))>x136);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x137 = UINT8_MAX;
	volatile int16_t x138 = INT16_MIN;
	uint16_t x139 = 1U;
	volatile uint16_t x140 = UINT16_MAX;
	int32_t t28 = 140217;

    t28 = ((x137+(x138-x139))>x140);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x141 = -1;
	volatile uint32_t x142 = 125526U;
	uint8_t x143 = 85U;
	uint32_t x144 = 251386U;
	static volatile int32_t t29 = -6114;

    t29 = ((x141+(x142-x143))>x144);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x145 = UINT32_MAX;
	uint32_t x146 = 2830U;
	int8_t x147 = 0;
	uint64_t x148 = UINT64_MAX;

    t30 = ((x145+(x146-x147))>x148);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x153 = INT16_MIN;
	volatile int8_t x154 = 14;
	static uint16_t x156 = UINT16_MAX;
	int32_t t31 = -1010531;

    t31 = ((x153+(x154-x155))>x156);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x157 = UINT8_MAX;
	int8_t x158 = INT8_MIN;
	int16_t x159 = INT16_MAX;
	static int64_t x160 = INT64_MAX;
	volatile int32_t t32 = 873;

    t32 = ((x157+(x158-x159))>x160);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x165 = INT32_MAX;
	static int32_t x166 = INT32_MIN;
	uint64_t x167 = 223589774252839422LLU;
	uint32_t x168 = 29885U;
	volatile int32_t t33 = 6570;

    t33 = ((x165+(x166-x167))>x168);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x173 = 891U;
	int32_t x174 = INT32_MIN;
	int16_t x175 = INT16_MIN;
	int32_t t34 = 13284405;

    t34 = ((x173+(x174-x175))>x176);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x177 = 7U;
	int32_t x178 = -24;
	int32_t x179 = INT32_MIN;
	uint32_t x180 = 282200868U;
	static int32_t t35 = -306467;

    t35 = ((x177+(x178-x179))>x180);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x181 = 22U;
	uint32_t x182 = 0U;
	int16_t x184 = -1;
	static int32_t t36 = -260905;

    t36 = ((x181+(x182-x183))>x184);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x187 = 14;
	volatile int32_t t37 = 100736;

    t37 = ((x185+(x186-x187))>x188);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x189 = 559640418369579LLU;
	static int32_t x190 = INT32_MAX;
	int8_t x191 = INT8_MAX;
	int16_t x192 = INT16_MAX;
	volatile int32_t t38 = -318;

    t38 = ((x189+(x190-x191))>x192);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x193 = -1;
	uint8_t x195 = UINT8_MAX;
	uint64_t x196 = 36LLU;
	volatile int32_t t39 = -15;

    t39 = ((x193+(x194-x195))>x196);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x205 = 5578U;
	uint32_t x208 = UINT32_MAX;
	volatile int32_t t40 = 229627;

    t40 = ((x205+(x206-x207))>x208);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x209 = 58;
	volatile uint64_t x210 = UINT64_MAX;
	int32_t x212 = -1;
	volatile int32_t t41 = -16231;

    t41 = ((x209+(x210-x211))>x212);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x217 = INT16_MIN;
	int32_t x220 = INT32_MAX;
	volatile int32_t t42 = 17551912;

    t42 = ((x217+(x218-x219))>x220);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x221 = INT16_MIN;
	int8_t x222 = INT8_MIN;

    t43 = ((x221+(x222-x223))>x224);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x225 = -1;
	uint8_t x227 = 31U;
	int32_t t44 = 72;

    t44 = ((x225+(x226-x227))>x228);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x229 = INT8_MIN;
	static int32_t x230 = -1;
	uint32_t x231 = 4331759U;
	uint16_t x232 = 3611U;
	int32_t t45 = 0;

    t45 = ((x229+(x230-x231))>x232);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x233 = UINT16_MAX;
	int64_t x234 = 107140914LL;
	int16_t x235 = 6;
	int32_t x236 = INT32_MIN;
	int32_t t46 = -244047464;

    t46 = ((x233+(x234-x235))>x236);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x238 = 1U;
	volatile uint64_t x239 = UINT64_MAX;
	uint32_t x240 = 71U;
	volatile int32_t t47 = -283226;

    t47 = ((x237+(x238-x239))>x240);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x241 = 153686632812LLU;
	volatile int32_t x242 = INT32_MIN;
	int64_t x243 = INT64_MIN;
	uint16_t x244 = UINT16_MAX;
	static int32_t t48 = -617466483;

    t48 = ((x241+(x242-x243))>x244);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x245 = UINT16_MAX;
	uint16_t x247 = 31U;
	volatile int8_t x248 = INT8_MIN;
	static int32_t t49 = 223105147;

    t49 = ((x245+(x246-x247))>x248);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x255 = 8042;
	volatile int64_t x256 = 47LL;
	int32_t t50 = -86;

    t50 = ((x253+(x254-x255))>x256);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x257 = -1LL;
	int16_t x258 = INT16_MAX;
	uint32_t x259 = UINT32_MAX;
	uint64_t x260 = 3684LLU;
	int32_t t51 = -702;

    t51 = ((x257+(x258-x259))>x260);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x261 = 642151;
	static volatile uint32_t x262 = 30387U;
	int32_t x263 = 377;
	uint64_t x264 = 17270LLU;

    t52 = ((x261+(x262-x263))>x264);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint64_t x269 = UINT64_MAX;
	volatile int64_t x272 = INT64_MIN;
	int32_t t53 = -1;

    t53 = ((x269+(x270-x271))>x272);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x276 = 1U;

    t54 = ((x273+(x274-x275))>x276);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x281 = 370U;
	uint8_t x282 = 77U;
	uint64_t x283 = 892386003357LLU;
	int8_t x284 = INT8_MAX;
	static int32_t t55 = 3013;

    t55 = ((x281+(x282-x283))>x284);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x289 = INT8_MIN;
	volatile uint8_t x290 = 6U;
	int32_t x291 = -2381;
	uint8_t x292 = 2U;
	volatile int32_t t56 = -13883868;

    t56 = ((x289+(x290-x291))>x292);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x293 = INT16_MAX;
	int32_t x294 = 7982;
	static int8_t x296 = INT8_MIN;

    t57 = ((x293+(x294-x295))>x296);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x298 = INT32_MIN;
	volatile int32_t x299 = -1244;
	volatile int32_t t58 = -1350715;

    t58 = ((x297+(x298-x299))>x300);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x301 = INT16_MAX;
	int16_t x302 = -3;
	uint64_t x303 = UINT64_MAX;
	uint32_t x304 = UINT32_MAX;
	int32_t t59 = -174208086;

    t59 = ((x301+(x302-x303))>x304);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x305 = 53LLU;
	volatile uint64_t x307 = 3796034976312184502LLU;
	volatile int32_t t60 = -3313162;

    t60 = ((x305+(x306-x307))>x308);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x309 = INT16_MAX;
	int8_t x311 = -13;
	volatile int64_t x312 = 25LL;
	volatile int32_t t61 = 2;

    t61 = ((x309+(x310-x311))>x312);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x313 = INT64_MIN;
	uint8_t x314 = 80U;
	volatile int64_t x315 = -1LL;
	int32_t t62 = -7;

    t62 = ((x313+(x314-x315))>x316);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x317 = -1;
	volatile int16_t x318 = INT16_MAX;
	uint32_t x320 = 1606479851U;
	int32_t t63 = -8144970;

    t63 = ((x317+(x318-x319))>x320);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x325 = -813686198;
	uint32_t x326 = UINT32_MAX;
	static uint64_t x327 = 34637173381653212LLU;
	volatile uint8_t x328 = UINT8_MAX;

    t64 = ((x325+(x326-x327))>x328);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x329 = INT8_MIN;
	int32_t x330 = -120551;
	uint16_t x331 = 0U;
	int32_t t65 = -172872;

    t65 = ((x329+(x330-x331))>x332);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x334 = INT16_MIN;
	static volatile int64_t x335 = 14853749964634327LL;
	int32_t x336 = -1124;
	static volatile int32_t t66 = -553817637;

    t66 = ((x333+(x334-x335))>x336);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int32_t x337 = -1;
	static uint32_t x338 = 3308517U;
	int8_t x339 = -1;
	int16_t x340 = -1;

    t67 = ((x337+(x338-x339))>x340);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x341 = -365789370LL;
	int32_t x342 = INT32_MAX;
	int64_t x344 = INT64_MIN;
	volatile int32_t t68 = 967197901;

    t68 = ((x341+(x342-x343))>x344);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x345 = -1LL;
	uint32_t x346 = 2944U;
	volatile int32_t x347 = INT32_MIN;
	volatile uint8_t x348 = 1U;
	static int32_t t69 = 180103;

    t69 = ((x345+(x346-x347))>x348);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x349 = 474848260U;
	static volatile int8_t x351 = 2;
	int32_t t70 = -878;

    t70 = ((x349+(x350-x351))>x352);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x353 = INT32_MIN;
	static int16_t x354 = INT16_MIN;
	uint32_t x355 = 13584U;
	static int16_t x356 = INT16_MIN;
	int32_t t71 = 44;

    t71 = ((x353+(x354-x355))>x356);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x360 = UINT8_MAX;
	volatile int32_t t72 = 0;

    t72 = ((x357+(x358-x359))>x360);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x361 = -1;
	uint32_t x362 = 0U;
	static int64_t x363 = -419665569926741LL;
	volatile int8_t x364 = INT8_MAX;
	int32_t t73 = 154;

    t73 = ((x361+(x362-x363))>x364);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x365 = INT64_MIN;
	uint8_t x366 = 8U;
	int64_t x368 = INT64_MAX;
	int32_t t74 = -4;

    t74 = ((x365+(x366-x367))>x368);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x373 = INT32_MAX;
	volatile uint16_t x374 = 58U;
	volatile int16_t x376 = 21;
	volatile int32_t t75 = -38;

    t75 = ((x373+(x374-x375))>x376);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x377 = INT16_MAX;
	static int64_t x378 = INT64_MAX;
	uint32_t x380 = 359U;
	int32_t t76 = 496723;

    t76 = ((x377+(x378-x379))>x380);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x381 = 11702245LL;
	uint16_t x382 = UINT16_MAX;
	static volatile int16_t x383 = INT16_MIN;
	volatile int8_t x384 = -14;
	volatile int32_t t77 = -595631;

    t77 = ((x381+(x382-x383))>x384);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x386 = -84LL;
	volatile int16_t x388 = -1;

    t78 = ((x385+(x386-x387))>x388);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x390 = INT8_MIN;
	uint32_t x391 = UINT32_MAX;
	int32_t x392 = 1009;

    t79 = ((x389+(x390-x391))>x392);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x393 = INT8_MIN;
	int8_t x394 = -1;
	uint16_t x395 = UINT16_MAX;
	int64_t x396 = INT64_MIN;

    t80 = ((x393+(x394-x395))>x396);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x401 = INT8_MIN;
	uint16_t x402 = 3055U;
	int64_t x404 = -1LL;
	int32_t t81 = 218412;

    t81 = ((x401+(x402-x403))>x404);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x405 = 75U;
	int8_t x406 = -1;
	int8_t x407 = INT8_MIN;
	int32_t x408 = -1;

    t82 = ((x405+(x406-x407))>x408);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x409 = 7447U;
	uint64_t x410 = UINT64_MAX;
	volatile int8_t x411 = INT8_MIN;
	int64_t x412 = INT64_MAX;
	int32_t t83 = -39;

    t83 = ((x409+(x410-x411))>x412);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x413 = -1;
	static volatile uint32_t x414 = 16U;
	int16_t x415 = -719;
	static int32_t x416 = -1;
	volatile int32_t t84 = 58;

    t84 = ((x413+(x414-x415))>x416);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x421 = 1;
	uint8_t x422 = 28U;
	int16_t x423 = -1;
	static uint32_t x424 = 1U;
	static volatile int32_t t85 = 58698;

    t85 = ((x421+(x422-x423))>x424);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x425 = UINT16_MAX;
	uint8_t x426 = 15U;
	int32_t x427 = -1;
	int8_t x428 = -1;
	static volatile int32_t t86 = 366706;

    t86 = ((x425+(x426-x427))>x428);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x434 = INT32_MAX;
	int64_t x435 = 1LL;
	uint64_t x436 = 389501103770039LLU;
	static int32_t t87 = 2670373;

    t87 = ((x433+(x434-x435))>x436);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int8_t x441 = INT8_MIN;
	volatile int8_t x442 = INT8_MAX;
	volatile int32_t x444 = -1;

    t88 = ((x441+(x442-x443))>x444);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x445 = INT64_MIN;
	int16_t x446 = -1;
	int64_t x447 = INT64_MIN;
	int32_t x448 = INT32_MAX;
	volatile int32_t t89 = 155941;

    t89 = ((x445+(x446-x447))>x448);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x453 = 12490LL;
	volatile uint64_t x454 = UINT64_MAX;
	int32_t t90 = 377504;

    t90 = ((x453+(x454-x455))>x456);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x457 = -1;
	uint64_t x458 = UINT64_MAX;
	static volatile int8_t x459 = INT8_MAX;
	volatile int32_t t91 = 6199;

    t91 = ((x457+(x458-x459))>x460);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x462 = 483LLU;
	int64_t x463 = 87838461922LL;
	static volatile int16_t x464 = -5;
	int32_t t92 = 12;

    t92 = ((x461+(x462-x463))>x464);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x465 = INT64_MAX;
	uint16_t x467 = UINT16_MAX;
	uint64_t x468 = UINT64_MAX;

    t93 = ((x465+(x466-x467))>x468);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x473 = 12315971U;
	int16_t x474 = -15;
	int8_t x475 = INT8_MAX;
	uint8_t x476 = 1U;
	int32_t t94 = 1283608;

    t94 = ((x473+(x474-x475))>x476);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x477 = INT8_MIN;
	int8_t x478 = -10;
	static uint64_t x480 = 7862929339450230716LLU;
	volatile int32_t t95 = 2773850;

    t95 = ((x477+(x478-x479))>x480);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x484 = INT64_MIN;
	volatile int32_t t96 = 532162792;

    t96 = ((x481+(x482-x483))>x484);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x486 = -1;
	int8_t x487 = -1;
	volatile int32_t t97 = -1088201;

    t97 = ((x485+(x486-x487))>x488);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x489 = UINT64_MAX;
	int16_t x490 = INT16_MAX;
	static int16_t x491 = INT16_MIN;
	uint16_t x492 = 193U;
	static int32_t t98 = 36438;

    t98 = ((x489+(x490-x491))>x492);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int64_t x497 = -170933937978543431LL;
	uint64_t x498 = 24664145106669LLU;
	uint8_t x499 = 4U;
	static int64_t x500 = 1676543366337378LL;
	static int32_t t99 = 1169;

    t99 = ((x497+(x498-x499))>x500);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x501 = 181795U;
	int32_t x502 = INT32_MIN;
	int32_t x504 = INT32_MIN;

    t100 = ((x501+(x502-x503))>x504);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x505 = -1LL;
	static volatile uint64_t x506 = UINT64_MAX;
	int32_t x507 = 31221157;
	volatile int64_t x508 = -4627795LL;
	volatile int32_t t101 = -1;

    t101 = ((x505+(x506-x507))>x508);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x509 = -418;
	volatile int8_t x510 = -1;
	int64_t x511 = -1LL;
	uint32_t x512 = UINT32_MAX;

    t102 = ((x509+(x510-x511))>x512);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x517 = INT8_MIN;
	int64_t x519 = -2318915LL;
	volatile uint64_t x520 = UINT64_MAX;
	static volatile int32_t t103 = 374238757;

    t103 = ((x517+(x518-x519))>x520);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x522 = INT64_MAX;
	static volatile uint64_t x523 = 27634938916LLU;
	int64_t x524 = -1LL;
	int32_t t104 = 51969;

    t104 = ((x521+(x522-x523))>x524);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x525 = INT16_MIN;
	static uint8_t x526 = 8U;
	int32_t x528 = INT32_MAX;
	int32_t t105 = 820259;

    t105 = ((x525+(x526-x527))>x528);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x533 = INT32_MIN;
	static uint64_t x534 = UINT64_MAX;
	uint64_t x535 = 233468848649648284LLU;

    t106 = ((x533+(x534-x535))>x536);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x537 = INT64_MIN;
	uint32_t x538 = 492199791U;
	uint16_t x539 = UINT16_MAX;
	volatile int32_t x540 = INT32_MIN;

    t107 = ((x537+(x538-x539))>x540);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x543 = INT8_MIN;
	uint32_t x544 = 42664U;
	static volatile int32_t t108 = 2;

    t108 = ((x541+(x542-x543))>x544);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x545 = INT32_MIN;
	int64_t x546 = -9735771131807LL;
	static int8_t x548 = INT8_MIN;
	int32_t t109 = -1849971;

    t109 = ((x545+(x546-x547))>x548);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x549 = 61312U;
	uint32_t x550 = 1371U;
	uint16_t x551 = 276U;
	volatile int32_t t110 = -301599;

    t110 = ((x549+(x550-x551))>x552);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint16_t x553 = 32421U;
	static int32_t x554 = 868;
	uint32_t x555 = 7773604U;
	volatile int32_t x556 = INT32_MIN;
	static int32_t t111 = -2680;

    t111 = ((x553+(x554-x555))>x556);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x558 = INT16_MAX;
	static uint32_t x559 = 387798U;
	volatile int64_t x560 = INT64_MIN;
	int32_t t112 = -28604;

    t112 = ((x557+(x558-x559))>x560);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint64_t x565 = 777067409862599LLU;
	uint32_t x566 = UINT32_MAX;
	volatile uint32_t x568 = 1U;
	static int32_t t113 = 1;

    t113 = ((x565+(x566-x567))>x568);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x570 = 5U;

    t114 = ((x569+(x570-x571))>x572);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x573 = -1544051776004846669LL;
	int32_t x574 = -1;
	uint8_t x575 = 7U;
	int16_t x576 = INT16_MIN;
	int32_t t115 = 254927;

    t115 = ((x573+(x574-x575))>x576);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x577 = INT32_MIN;
	int32_t x578 = INT32_MAX;
	int64_t x579 = INT64_MAX;
	int16_t x580 = INT16_MIN;

    t116 = ((x577+(x578-x579))>x580);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x581 = 12U;
	volatile int8_t x582 = INT8_MIN;
	int8_t x583 = INT8_MAX;
	uint8_t x584 = 49U;
	int32_t t117 = -124;

    t117 = ((x581+(x582-x583))>x584);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x585 = INT16_MIN;
	uint64_t x586 = 77026506797502918LLU;
	static uint32_t x587 = 6U;
	volatile int32_t t118 = 1;

    t118 = ((x585+(x586-x587))>x588);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x590 = -1LL;
	int8_t x591 = -1;
	int64_t x592 = INT64_MIN;
	volatile int32_t t119 = 2346;

    t119 = ((x589+(x590-x591))>x592);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x593 = 3890U;
	static int16_t x594 = -1;
	int16_t x595 = INT16_MAX;
	int32_t x596 = -1;
	int32_t t120 = -1;

    t120 = ((x593+(x594-x595))>x596);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x597 = UINT32_MAX;
	int8_t x599 = 41;
	int32_t x600 = -1;
	static volatile int32_t t121 = 9793;

    t121 = ((x597+(x598-x599))>x600);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x601 = -8;
	int8_t x602 = 50;
	int64_t x603 = INT64_MAX;
	volatile int32_t t122 = 1962193;

    t122 = ((x601+(x602-x603))>x604);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x605 = -378714LL;
	int16_t x608 = INT16_MAX;
	int32_t t123 = -135549082;

    t123 = ((x605+(x606-x607))>x608);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x609 = -1;
	int16_t x610 = -10;
	int32_t x611 = 1330277;
	int8_t x612 = -1;
	static int32_t t124 = -1;

    t124 = ((x609+(x610-x611))>x612);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x614 = INT32_MAX;
	int8_t x615 = INT8_MAX;
	int64_t x616 = -3008909LL;
	volatile int32_t t125 = -84896421;

    t125 = ((x613+(x614-x615))>x616);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x617 = 14057552LLU;
	int32_t x618 = -1;
	uint32_t x619 = 2594U;
	int64_t x620 = -1LL;

    t126 = ((x617+(x618-x619))>x620);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x621 = -1LL;
	int64_t x622 = INT64_MIN;
	uint64_t x623 = UINT64_MAX;
	uint8_t x624 = 1U;
	volatile int32_t t127 = 1453419;

    t127 = ((x621+(x622-x623))>x624);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint8_t x625 = UINT8_MAX;
	int16_t x626 = INT16_MIN;
	int32_t x627 = -1;
	uint64_t x628 = 355LLU;

    t128 = ((x625+(x626-x627))>x628);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x629 = INT8_MAX;
	static volatile uint16_t x630 = 19149U;
	volatile uint32_t x632 = 62U;
	static volatile int32_t t129 = -2359986;

    t129 = ((x629+(x630-x631))>x632);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x633 = UINT8_MAX;
	static volatile int64_t x635 = 185LL;
	uint64_t x636 = 271211452LLU;

    t130 = ((x633+(x634-x635))>x636);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x637 = INT16_MIN;
	static volatile int16_t x638 = -1;
	int8_t x639 = INT8_MIN;
	static int8_t x640 = -1;
	static int32_t t131 = 4;

    t131 = ((x637+(x638-x639))>x640);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x641 = 1011U;
	int16_t x642 = INT16_MIN;
	int8_t x643 = -1;
	int16_t x644 = INT16_MIN;

    t132 = ((x641+(x642-x643))>x644);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x645 = -1136782;
	volatile uint16_t x646 = UINT16_MAX;
	volatile int16_t x647 = -1;
	int8_t x648 = -1;
	volatile int32_t t133 = -1;

    t133 = ((x645+(x646-x647))>x648);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x649 = UINT16_MAX;
	uint16_t x650 = 88U;
	static int32_t x652 = -1;

    t134 = ((x649+(x650-x651))>x652);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x653 = 39U;
	uint16_t x654 = 10U;
	volatile int64_t x656 = INT64_MIN;
	static volatile int32_t t135 = -23863;

    t135 = ((x653+(x654-x655))>x656);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x660 = 0;

    t136 = ((x657+(x658-x659))>x660);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x661 = -1;
	int64_t x662 = -1LL;
	static int64_t x663 = 9596885034241LL;
	static int32_t x664 = INT32_MIN;
	volatile int32_t t137 = 12281027;

    t137 = ((x661+(x662-x663))>x664);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x665 = -1;
	volatile uint64_t x666 = 330979717376918LLU;
	static int8_t x667 = INT8_MAX;
	volatile int16_t x668 = -1;

    t138 = ((x665+(x666-x667))>x668);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x669 = UINT8_MAX;
	volatile int8_t x670 = INT8_MIN;
	int32_t t139 = -55806;

    t139 = ((x669+(x670-x671))>x672);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x673 = INT16_MAX;
	uint64_t x675 = UINT64_MAX;
	volatile int32_t x676 = INT32_MIN;
	volatile int32_t t140 = 0;

    t140 = ((x673+(x674-x675))>x676);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x677 = -46;
	int16_t x678 = INT16_MIN;
	int32_t x680 = INT32_MAX;
	volatile int32_t t141 = 1479367;

    t141 = ((x677+(x678-x679))>x680);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x681 = -1LL;
	int64_t x682 = -1LL;
	volatile uint32_t x683 = UINT32_MAX;
	int32_t x684 = INT32_MIN;

    t142 = ((x681+(x682-x683))>x684);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x685 = -1;
	int8_t x686 = 9;
	int8_t x687 = INT8_MAX;
	uint8_t x688 = 0U;
	volatile int32_t t143 = 0;

    t143 = ((x685+(x686-x687))>x688);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x689 = INT16_MIN;
	int64_t x690 = -1919LL;
	volatile int8_t x691 = -6;
	int16_t x692 = INT16_MIN;

    t144 = ((x689+(x690-x691))>x692);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x693 = INT32_MAX;
	static uint16_t x696 = 89U;
	int32_t t145 = 2;

    t145 = ((x693+(x694-x695))>x696);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x701 = 4467;
	int32_t x702 = 2439;
	static uint16_t x704 = UINT16_MAX;
	volatile int32_t t146 = 135580;

    t146 = ((x701+(x702-x703))>x704);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x705 = 144377189704067570LLU;
	volatile int8_t x706 = INT8_MIN;
	uint64_t x707 = UINT64_MAX;
	static int64_t x708 = 4155603513786LL;

    t147 = ((x705+(x706-x707))>x708);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x709 = INT64_MIN;
	uint64_t x710 = 5479573888201486LLU;
	int64_t x711 = INT64_MIN;
	int16_t x712 = -3241;

    t148 = ((x709+(x710-x711))>x712);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x717 = 12LL;
	static int8_t x718 = 0;
	int32_t x720 = -4159589;
	int32_t t149 = 542;

    t149 = ((x717+(x718-x719))>x720);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x721 = -1;
	int16_t x722 = INT16_MIN;
	int16_t x723 = 3;
	int32_t t150 = -1064;

    t150 = ((x721+(x722-x723))>x724);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x729 = INT64_MAX;
	int8_t x731 = 0;
	int64_t x732 = INT64_MIN;
	static volatile int32_t t151 = 841;

    t151 = ((x729+(x730-x731))>x732);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x733 = -683472102;
	static int32_t x734 = INT32_MAX;
	int16_t x735 = INT16_MAX;
	int8_t x736 = INT8_MIN;
	static int32_t t152 = 37164;

    t152 = ((x733+(x734-x735))>x736);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x741 = -1LL;
	static uint16_t x742 = 9U;
	int8_t x743 = INT8_MIN;
	int8_t x744 = -11;

    t153 = ((x741+(x742-x743))>x744);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x746 = 278095636752764699LLU;
	int8_t x747 = INT8_MIN;
	int8_t x748 = INT8_MIN;
	static volatile int32_t t154 = -1;

    t154 = ((x745+(x746-x747))>x748);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x749 = -33316400155484LL;
	uint8_t x750 = 60U;
	int32_t x752 = INT32_MAX;
	int32_t t155 = -190648;

    t155 = ((x749+(x750-x751))>x752);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x754 = 471148LL;
	static int8_t x755 = -1;
	static int64_t x756 = INT64_MAX;

    t156 = ((x753+(x754-x755))>x756);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x758 = -56;
	int16_t x759 = INT16_MIN;
	int8_t x760 = INT8_MAX;
	static int32_t t157 = 7341;

    t157 = ((x757+(x758-x759))>x760);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x762 = -31;
	int8_t x763 = -1;
	static int64_t x764 = INT64_MIN;
	static volatile int32_t t158 = -26231;

    t158 = ((x761+(x762-x763))>x764);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x765 = INT8_MAX;
	static int32_t x766 = INT32_MAX;
	uint32_t x767 = 206U;
	volatile uint32_t x768 = 559U;
	volatile int32_t t159 = -9934896;

    t159 = ((x765+(x766-x767))>x768);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x769 = INT32_MAX;
	static volatile uint16_t x770 = UINT16_MAX;
	int64_t x771 = -469250787471LL;
	static int8_t x772 = 29;

    t160 = ((x769+(x770-x771))>x772);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x773 = -1;
	uint32_t x774 = 1000798740U;
	int16_t x775 = INT16_MAX;
	int32_t x776 = INT32_MIN;

    t161 = ((x773+(x774-x775))>x776);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x777 = -209;
	int32_t x778 = -2;
	uint16_t x779 = 1402U;
	static int32_t x780 = -1;

    t162 = ((x777+(x778-x779))>x780);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x781 = -1LL;
	uint16_t x782 = 23U;
	uint8_t x783 = 0U;
	uint16_t x784 = 199U;

    t163 = ((x781+(x782-x783))>x784);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x785 = 23U;
	int8_t x786 = -1;
	int8_t x787 = -1;
	uint64_t x788 = 424085083LLU;
	static int32_t t164 = 1407;

    t164 = ((x785+(x786-x787))>x788);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x790 = 829;
	uint32_t x791 = 108155U;
	int16_t x792 = INT16_MAX;
	volatile int32_t t165 = 76;

    t165 = ((x789+(x790-x791))>x792);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x794 = 42460LLU;
	int32_t x795 = 6;
	int8_t x796 = INT8_MIN;
	volatile int32_t t166 = -292;

    t166 = ((x793+(x794-x795))>x796);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint16_t x798 = UINT16_MAX;
	int16_t x800 = 1561;
	int32_t t167 = -1;

    t167 = ((x797+(x798-x799))>x800);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x801 = INT16_MIN;
	volatile int8_t x802 = 55;
	static volatile int64_t x804 = INT64_MAX;
	volatile int32_t t168 = 1129514;

    t168 = ((x801+(x802-x803))>x804);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x805 = 98U;
	uint16_t x806 = UINT16_MAX;
	static uint64_t x807 = 2760017909LLU;
	int64_t x808 = 2721369LL;
	int32_t t169 = -42633196;

    t169 = ((x805+(x806-x807))>x808);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x813 = -1;
	uint64_t x814 = UINT64_MAX;
	static volatile uint64_t x815 = 5LLU;
	uint32_t x816 = 83437U;
	int32_t t170 = 5124043;

    t170 = ((x813+(x814-x815))>x816);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x818 = 430U;
	volatile int16_t x820 = INT16_MIN;
	volatile int32_t t171 = 761300;

    t171 = ((x817+(x818-x819))>x820);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x821 = -1;
	volatile int16_t x822 = 1;

    t172 = ((x821+(x822-x823))>x824);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x825 = 10462U;
	volatile uint64_t x826 = UINT64_MAX;
	uint8_t x827 = 5U;
	int64_t x828 = INT64_MIN;

    t173 = ((x825+(x826-x827))>x828);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x829 = INT32_MIN;
	uint32_t x831 = 87840U;
	static int32_t x832 = INT32_MIN;
	static int32_t t174 = -3628574;

    t174 = ((x829+(x830-x831))>x832);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x833 = 7191U;
	volatile int8_t x834 = -1;
	volatile int64_t x835 = INT64_MAX;
	static volatile int32_t t175 = -4442;

    t175 = ((x833+(x834-x835))>x836);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x837 = -1;
	static volatile int8_t x838 = -1;
	uint8_t x839 = 0U;
	uint64_t x840 = UINT64_MAX;
	volatile int32_t t176 = -429273932;

    t176 = ((x837+(x838-x839))>x840);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x845 = 6;
	static volatile int16_t x846 = -51;
	int32_t x847 = INT32_MIN;
	uint64_t x848 = UINT64_MAX;

    t177 = ((x845+(x846-x847))>x848);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x849 = -1LL;
	static uint32_t x850 = 3U;
	uint8_t x851 = UINT8_MAX;
	int64_t x852 = INT64_MIN;
	static volatile int32_t t178 = 0;

    t178 = ((x849+(x850-x851))>x852);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x853 = INT8_MAX;
	static volatile int8_t x855 = INT8_MIN;
	volatile int32_t t179 = -2003;

    t179 = ((x853+(x854-x855))>x856);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x857 = 136853732U;
	int8_t x858 = INT8_MAX;
	uint16_t x860 = 0U;

    t180 = ((x857+(x858-x859))>x860);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x861 = 757LLU;
	int8_t x862 = -26;
	volatile int8_t x863 = 1;
	int32_t x864 = INT32_MIN;
	volatile int32_t t181 = 104274;

    t181 = ((x861+(x862-x863))>x864);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x871 = -187059;
	int16_t x872 = -2518;
	int32_t t182 = 0;

    t182 = ((x869+(x870-x871))>x872);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x873 = INT64_MIN;
	int8_t x874 = -2;
	volatile uint64_t x876 = UINT64_MAX;
	static int32_t t183 = -243325801;

    t183 = ((x873+(x874-x875))>x876);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x877 = UINT16_MAX;
	uint16_t x878 = UINT16_MAX;
	volatile uint8_t x879 = 25U;
	int64_t x880 = INT64_MAX;
	int32_t t184 = -11772167;

    t184 = ((x877+(x878-x879))>x880);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x881 = -1LL;
	int8_t x883 = 0;
	static volatile int8_t x884 = INT8_MAX;
	volatile int32_t t185 = 59416;

    t185 = ((x881+(x882-x883))>x884);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x885 = -1930LL;
	int16_t x886 = -1;
	int8_t x887 = INT8_MIN;
	static uint32_t x888 = 7416U;
	int32_t t186 = 5;

    t186 = ((x885+(x886-x887))>x888);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x890 = INT32_MIN;
	int32_t x891 = -6682;
	static int16_t x892 = -1;

    t187 = ((x889+(x890-x891))>x892);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x893 = INT32_MAX;
	static volatile int32_t x894 = INT32_MIN;
	int16_t x895 = -1;
	int64_t x896 = INT64_MIN;
	int32_t t188 = 21032378;

    t188 = ((x893+(x894-x895))>x896);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x902 = -1LL;
	uint8_t x904 = 1U;

    t189 = ((x901+(x902-x903))>x904);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x906 = INT32_MIN;
	static int8_t x907 = -1;

    t190 = ((x905+(x906-x907))>x908);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x910 = INT16_MIN;
	uint32_t x911 = 0U;
	int64_t x912 = INT64_MIN;
	int32_t t191 = 32281;

    t191 = ((x909+(x910-x911))>x912);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x913 = INT64_MIN;
	int32_t t192 = 206;

    t192 = ((x913+(x914-x915))>x916);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x917 = UINT32_MAX;
	uint16_t x918 = UINT16_MAX;
	uint16_t x919 = UINT16_MAX;
	volatile int32_t t193 = -15208341;

    t193 = ((x917+(x918-x919))>x920);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x921 = 512LLU;
	int8_t x923 = INT8_MIN;
	uint32_t x924 = UINT32_MAX;

    t194 = ((x921+(x922-x923))>x924);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x925 = UINT16_MAX;
	volatile uint32_t x926 = 478370U;
	int32_t t195 = -18611343;

    t195 = ((x925+(x926-x927))>x928);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x929 = -1LL;
	int8_t x930 = INT8_MIN;
	static uint8_t x931 = 1U;
	volatile int32_t x932 = -3622152;
	int32_t t196 = 1025592571;

    t196 = ((x929+(x930-x931))>x932);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x934 = 597U;
	int16_t x935 = INT16_MAX;
	uint32_t x936 = 646592275U;
	volatile int32_t t197 = -942;

    t197 = ((x933+(x934-x935))>x936);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x937 = 814903274LLU;
	uint64_t x938 = 5711713436560LLU;
	volatile uint32_t x939 = 92U;
	int32_t x940 = INT32_MIN;
	int32_t t198 = -574;

    t198 = ((x937+(x938-x939))>x940);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint32_t x941 = 279996155U;
	int32_t x942 = INT32_MIN;
	int8_t x944 = -1;
	volatile int32_t t199 = 137732754;

    t199 = ((x941+(x942-x943))>x944);

    if (t199 != 0) { NG(); } else { ; }
	
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

