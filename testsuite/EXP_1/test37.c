
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

int8_t x2 = INT8_MIN;
static int8_t x17 = 20;
uint8_t x19 = 0U;
uint8_t x20 = 8U;
static int16_t x33 = INT16_MAX;
int16_t x35 = 15897;
volatile int64_t x45 = -1LL;
volatile int32_t t7 = 9453;
static volatile int8_t x53 = INT8_MIN;
volatile uint8_t x55 = 41U;
int64_t x56 = INT64_MIN;
int32_t t9 = -160;
int32_t x60 = INT32_MIN;
uint8_t x75 = 13U;
int32_t x76 = INT32_MAX;
static volatile int32_t t13 = 97;
uint8_t x85 = 0U;
uint8_t x86 = 97U;
volatile int64_t x92 = INT64_MAX;
uint16_t x94 = 6460U;
int16_t x108 = -9;
uint32_t x115 = UINT32_MAX;
static volatile int32_t t21 = -4;
int32_t t25 = -11;
uint8_t x139 = 26U;
uint32_t x142 = 2823U;
int16_t x144 = -9809;
int8_t x167 = 4;
int32_t t30 = 39892;
int64_t x177 = INT64_MAX;
int16_t x178 = -1;
int32_t x180 = -1;
int32_t x186 = -1;
int32_t t34 = 662;
static uint32_t x198 = UINT32_MAX;
int16_t x229 = -1;
volatile int32_t x231 = -14;
int32_t t39 = -1301;
uint64_t x233 = 124422053075040LLU;
volatile int32_t t40 = -86;
int16_t x245 = -8939;
uint64_t x253 = 61101LLU;
static uint16_t x262 = 2508U;
int64_t x267 = -206923280671LL;
int64_t x269 = -1LL;
int32_t x278 = INT32_MAX;
volatile uint64_t x279 = 223379588LLU;
static int32_t x283 = 635296864;
static int8_t x297 = -1;
int8_t x299 = INT8_MIN;
uint16_t x302 = 9425U;
uint16_t x303 = 5593U;
static volatile int16_t x308 = -1932;
int64_t x329 = 165640LL;
static int8_t x335 = INT8_MIN;
int32_t x343 = -1;
volatile int16_t x357 = INT16_MIN;
int8_t x358 = INT8_MIN;
int64_t x363 = -936LL;
uint32_t x364 = 156411844U;
static int32_t t61 = -157564;
uint32_t x368 = 24U;
volatile int8_t x395 = -3;
uint32_t x401 = 55U;
uint64_t x402 = 3992127373793LLU;
volatile int32_t t66 = 195330;
int16_t x424 = INT16_MIN;
static volatile int32_t t70 = -98090;
volatile int32_t t71 = -121;
uint16_t x435 = UINT16_MAX;
uint32_t x436 = UINT32_MAX;
int32_t t72 = -78450;
int32_t t73 = -183941;
int32_t t74 = 2;
static volatile uint16_t x445 = UINT16_MAX;
uint16_t x447 = 6376U;
static volatile int32_t t75 = 49;
volatile int8_t x449 = -14;
int8_t x451 = -55;
int8_t x455 = INT8_MIN;
int32_t x456 = INT32_MIN;
volatile int32_t t77 = 802678;
volatile int32_t t78 = 144;
volatile uint8_t x477 = 26U;
uint64_t x514 = 8499731738LLU;
uint32_t x526 = 1131206U;
int16_t x529 = 15;
static int8_t x532 = 11;
static int32_t x534 = -1;
int32_t t88 = 4268111;
static uint8_t x540 = UINT8_MAX;
static int32_t t89 = 126;
static volatile int32_t t91 = 2066577;
uint64_t x565 = UINT64_MAX;
int16_t x568 = 1;
uint64_t x571 = 204LLU;
uint8_t x572 = 0U;
volatile int32_t t95 = 1;
int16_t x591 = INT16_MAX;
int16_t x592 = INT16_MAX;
int64_t x598 = INT64_MIN;
volatile uint16_t x613 = 1959U;
volatile int8_t x614 = -5;
uint8_t x617 = 3U;
int8_t x618 = -1;
int8_t x627 = -1;
int32_t t103 = -7143;
static uint16_t x645 = UINT16_MAX;
volatile int32_t t104 = -1957;
static int8_t x651 = INT8_MAX;
uint8_t x658 = 11U;
static volatile int16_t x660 = INT16_MIN;
volatile int32_t t108 = -726579175;
int32_t x674 = INT32_MAX;
volatile int32_t t109 = -225788026;
uint16_t x683 = UINT16_MAX;
uint64_t x695 = 59001153LLU;
volatile uint16_t x696 = 29681U;
int8_t x698 = INT8_MAX;
volatile int32_t t114 = -20;
int16_t x715 = -1;
uint8_t x716 = 1U;
int16_t x720 = INT16_MIN;
int32_t t117 = -1;
uint32_t x721 = UINT32_MAX;
static int32_t t118 = -745527;
volatile uint8_t x730 = UINT8_MAX;
int8_t x739 = INT8_MIN;
static uint32_t x762 = 6U;
volatile int32_t t124 = -9008949;
static int8_t x786 = INT8_MAX;
int64_t x790 = -871353894LL;
int16_t x800 = INT16_MIN;
int8_t x803 = -1;
int32_t t133 = 2;
uint32_t x837 = 7U;
static int32_t x850 = -1;
volatile uint16_t x873 = 2677U;
volatile int32_t x874 = 36;
uint16_t x879 = UINT16_MAX;
volatile int32_t t141 = 765388;
volatile int8_t x897 = INT8_MAX;
int8_t x900 = 34;
volatile int32_t x908 = -1;
uint8_t x911 = UINT8_MAX;
int16_t x918 = 726;
int64_t x920 = 418281939LL;
static uint64_t x922 = 3923343124214486LLU;
int16_t x927 = -36;
uint8_t x928 = UINT8_MAX;
uint32_t x930 = 186U;
uint16_t x934 = 9U;
int32_t t151 = -7;
uint64_t x938 = UINT64_MAX;
uint16_t x939 = UINT16_MAX;
int32_t t153 = -105;
volatile int8_t x951 = -1;
volatile uint32_t x953 = 1491U;
uint8_t x974 = 1U;
volatile int32_t t159 = 6;
uint32_t x987 = 26U;
uint64_t x996 = UINT64_MAX;
int16_t x998 = 5;
uint64_t x999 = 182431752715057622LLU;
int32_t t167 = -8;
int8_t x1023 = -1;
int16_t x1024 = INT16_MIN;
static int32_t x1034 = -1;
uint32_t x1036 = 1437848U;
int16_t x1050 = INT16_MIN;
int16_t x1052 = INT16_MAX;
int32_t t175 = 9806;
int16_t x1071 = INT16_MAX;
uint8_t x1078 = UINT8_MAX;
int32_t t179 = 147582397;
volatile uint32_t x1095 = 10672782U;
uint64_t x1101 = UINT64_MAX;
int16_t x1107 = -765;
int32_t t185 = -65129005;
uint32_t x1125 = 81U;
volatile int16_t x1128 = 108;
volatile int32_t t187 = -15;
int16_t x1149 = INT16_MIN;
static uint16_t x1158 = 0U;
static int32_t x1167 = 204;
uint64_t x1168 = 786522131340LLU;
uint64_t x1175 = UINT64_MAX;
static uint16_t x1183 = 2447U;
volatile int64_t x1188 = 51LL;
int64_t x1193 = INT64_MIN;
int64_t x1194 = INT64_MAX;
int16_t x1198 = -1;
uint32_t x1200 = 1412693U;
int64_t x1205 = -1LL;
int32_t x1206 = -116;


void f0(void) {
    	int16_t x1 = -4;
	int8_t x3 = -1;
	int8_t x4 = 0;
	int32_t t0 = -3325695;

    t0 = (((x1+x2)*x3)>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = 8065;
	static int32_t x6 = 1616085;
	int64_t x7 = -1LL;
	volatile uint32_t x8 = 25624065U;
	volatile int32_t t1 = 71172;

    t1 = (((x5+x6)*x7)>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x18 = INT16_MAX;
	int32_t t2 = -7187;

    t2 = (((x17+x18)*x19)>x20);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x21 = -1LL;
	uint16_t x22 = 56U;
	static int8_t x23 = 3;
	int64_t x24 = INT64_MIN;
	int32_t t3 = 0;

    t3 = (((x21+x22)*x23)>x24);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x25 = -1LL;
	static uint32_t x26 = 1253473761U;
	uint8_t x27 = 75U;
	static int32_t x28 = INT32_MIN;
	volatile int32_t t4 = 1;

    t4 = (((x25+x26)*x27)>x28);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x29 = -1LL;
	int8_t x30 = INT8_MIN;
	volatile uint32_t x31 = 28882U;
	int8_t x32 = -1;
	static volatile int32_t t5 = 2234;

    t5 = (((x29+x30)*x31)>x32);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x34 = 1079463U;
	int32_t x36 = INT32_MIN;
	int32_t t6 = 2398;

    t6 = (((x33+x34)*x35)>x36);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x46 = -499718741LL;
	volatile uint32_t x47 = 933042834U;
	static int64_t x48 = -1LL;

    t7 = (((x45+x46)*x47)>x48);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x49 = 2233693843928LL;
	int16_t x50 = -1;
	static int8_t x51 = INT8_MIN;
	int8_t x52 = INT8_MIN;
	volatile int32_t t8 = 6463;

    t8 = (((x49+x50)*x51)>x52);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x54 = -24;

    t9 = (((x53+x54)*x55)>x56);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x57 = -1;
	int32_t x58 = -1;
	static int16_t x59 = INT16_MAX;
	volatile int32_t t10 = -838780;

    t10 = (((x57+x58)*x59)>x60);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x65 = -1LL;
	static uint8_t x66 = UINT8_MAX;
	static int32_t x67 = -1;
	uint32_t x68 = 113847U;
	static volatile int32_t t11 = 23166;

    t11 = (((x65+x66)*x67)>x68);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x69 = 1;
	int16_t x70 = -1;
	uint16_t x71 = 7U;
	int32_t x72 = 4644;
	volatile int32_t t12 = -31403;

    t12 = (((x69+x70)*x71)>x72);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x73 = 3865U;
	int8_t x74 = INT8_MAX;

    t13 = (((x73+x74)*x75)>x76);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x81 = -1;
	static volatile int32_t x82 = -1;
	int8_t x83 = INT8_MAX;
	volatile int64_t x84 = INT64_MIN;
	int32_t t14 = -961322725;

    t14 = (((x81+x82)*x83)>x84);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x87 = UINT16_MAX;
	int64_t x88 = -6821631LL;
	static int32_t t15 = -269672198;

    t15 = (((x85+x86)*x87)>x88);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x89 = 241120U;
	static uint32_t x90 = 53199285U;
	volatile uint8_t x91 = 5U;
	static volatile int32_t t16 = -248790903;

    t16 = (((x89+x90)*x91)>x92);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x93 = 1916205664851LLU;
	volatile int32_t x95 = -1;
	uint32_t x96 = 1003532552U;
	int32_t t17 = -28601365;

    t17 = (((x93+x94)*x95)>x96);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x101 = 354523298492535LLU;
	static uint16_t x102 = 68U;
	int8_t x103 = 1;
	uint16_t x104 = 85U;
	int32_t t18 = 7770;

    t18 = (((x101+x102)*x103)>x104);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x105 = 1330482541LLU;
	int16_t x106 = INT16_MIN;
	static volatile uint16_t x107 = UINT16_MAX;
	int32_t t19 = 485771485;

    t19 = (((x105+x106)*x107)>x108);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x113 = UINT16_MAX;
	int64_t x114 = 6LL;
	int32_t x116 = -6199207;
	int32_t t20 = -573;

    t20 = (((x113+x114)*x115)>x116);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x117 = INT16_MIN;
	int8_t x118 = INT8_MIN;
	int8_t x119 = -1;
	static volatile int8_t x120 = INT8_MAX;

    t21 = (((x117+x118)*x119)>x120);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x121 = 34416776953320LLU;
	int32_t x122 = INT32_MIN;
	int32_t x123 = -1;
	int32_t x124 = -1;
	int32_t t22 = 9487663;

    t22 = (((x121+x122)*x123)>x124);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x125 = INT16_MIN;
	volatile uint32_t x126 = 10325U;
	volatile int64_t x127 = -1LL;
	uint32_t x128 = 1909U;
	volatile int32_t t23 = 1;

    t23 = (((x125+x126)*x127)>x128);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x129 = INT64_MAX;
	uint64_t x130 = 1087LLU;
	uint8_t x131 = UINT8_MAX;
	uint16_t x132 = 28U;
	int32_t t24 = -200335;

    t24 = (((x129+x130)*x131)>x132);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x133 = -37LL;
	int64_t x134 = -506LL;
	static volatile uint8_t x135 = UINT8_MAX;
	int8_t x136 = 0;

    t25 = (((x133+x134)*x135)>x136);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x137 = INT16_MIN;
	static int16_t x138 = INT16_MIN;
	volatile int32_t x140 = INT32_MIN;
	int32_t t26 = 16487959;

    t26 = (((x137+x138)*x139)>x140);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x141 = -1;
	static uint8_t x143 = 17U;
	int32_t t27 = -231350;

    t27 = (((x141+x142)*x143)>x144);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x145 = INT16_MIN;
	uint64_t x146 = UINT64_MAX;
	static int32_t x147 = INT32_MIN;
	int16_t x148 = -1;
	int32_t t28 = -24944;

    t28 = (((x145+x146)*x147)>x148);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint16_t x165 = UINT16_MAX;
	static int8_t x166 = -1;
	uint32_t x168 = 327916047U;
	static int32_t t29 = -13912;

    t29 = (((x165+x166)*x167)>x168);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile uint16_t x169 = 9U;
	int16_t x170 = INT16_MIN;
	int32_t x171 = -1;
	static uint64_t x172 = UINT64_MAX;

    t30 = (((x169+x170)*x171)>x172);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x173 = INT16_MIN;
	static uint16_t x174 = 116U;
	uint16_t x175 = 78U;
	int64_t x176 = INT64_MAX;
	int32_t t31 = 60402349;

    t31 = (((x173+x174)*x175)>x176);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x179 = 1;
	volatile int32_t t32 = 985941;

    t32 = (((x177+x178)*x179)>x180);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x181 = 1;
	static uint32_t x182 = 1114680U;
	int32_t x183 = INT32_MIN;
	uint8_t x184 = UINT8_MAX;
	volatile int32_t t33 = -14861050;

    t33 = (((x181+x182)*x183)>x184);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x185 = 677027512558514LLU;
	static uint32_t x187 = 2313U;
	static int8_t x188 = INT8_MAX;

    t34 = (((x185+x186)*x187)>x188);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x189 = INT64_MAX;
	volatile int8_t x190 = -46;
	int64_t x191 = -1LL;
	volatile int32_t x192 = 11985;
	volatile int32_t t35 = 1476314;

    t35 = (((x189+x190)*x191)>x192);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x193 = 18U;
	volatile uint8_t x194 = 20U;
	uint32_t x195 = 892562U;
	int32_t x196 = INT32_MIN;
	volatile int32_t t36 = -986713374;

    t36 = (((x193+x194)*x195)>x196);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x197 = INT8_MIN;
	int8_t x199 = INT8_MIN;
	volatile uint8_t x200 = 1U;
	volatile int32_t t37 = 0;

    t37 = (((x197+x198)*x199)>x200);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int32_t x205 = INT32_MIN;
	static uint16_t x206 = 5424U;
	static uint8_t x207 = 0U;
	int32_t x208 = INT32_MIN;
	static volatile int32_t t38 = 0;

    t38 = (((x205+x206)*x207)>x208);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x230 = -1LL;
	int8_t x232 = INT8_MAX;

    t39 = (((x229+x230)*x231)>x232);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x234 = -16;
	static uint16_t x235 = 564U;
	int8_t x236 = -1;

    t40 = (((x233+x234)*x235)>x236);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x246 = -459;
	uint32_t x247 = UINT32_MAX;
	static int64_t x248 = INT64_MAX;
	int32_t t41 = 128691862;

    t41 = (((x245+x246)*x247)>x248);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x254 = 0U;
	uint8_t x255 = 2U;
	int8_t x256 = -1;
	volatile int32_t t42 = -990816;

    t42 = (((x253+x254)*x255)>x256);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x257 = -7;
	int16_t x258 = INT16_MAX;
	uint16_t x259 = UINT16_MAX;
	int8_t x260 = -1;
	volatile int32_t t43 = 22976157;

    t43 = (((x257+x258)*x259)>x260);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x261 = 0U;
	int32_t x263 = INT32_MIN;
	static uint8_t x264 = UINT8_MAX;
	int32_t t44 = -556414600;

    t44 = (((x261+x262)*x263)>x264);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x265 = 289LLU;
	int8_t x266 = -1;
	uint8_t x268 = UINT8_MAX;
	static int32_t t45 = 1618;

    t45 = (((x265+x266)*x267)>x268);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x270 = -16325;
	volatile uint16_t x271 = 37U;
	int32_t x272 = INT32_MIN;
	static int32_t t46 = 12483;

    t46 = (((x269+x270)*x271)>x272);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x273 = INT8_MIN;
	int8_t x274 = INT8_MIN;
	static uint32_t x275 = 0U;
	uint8_t x276 = 0U;
	volatile int32_t t47 = 23;

    t47 = (((x273+x274)*x275)>x276);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x277 = -3379658480955LL;
	int32_t x280 = INT32_MAX;
	volatile int32_t t48 = -41935522;

    t48 = (((x277+x278)*x279)>x280);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x281 = 3789961U;
	int16_t x282 = INT16_MAX;
	volatile int8_t x284 = 1;
	int32_t t49 = -429046934;

    t49 = (((x281+x282)*x283)>x284);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint32_t x298 = 7U;
	int16_t x300 = -14816;
	volatile int32_t t50 = 142;

    t50 = (((x297+x298)*x299)>x300);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x301 = UINT16_MAX;
	uint8_t x304 = UINT8_MAX;
	static int32_t t51 = -343949021;

    t51 = (((x301+x302)*x303)>x304);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x305 = UINT32_MAX;
	int16_t x306 = -325;
	uint64_t x307 = UINT64_MAX;
	int32_t t52 = 2645;

    t52 = (((x305+x306)*x307)>x308);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x309 = -1;
	static int8_t x310 = INT8_MIN;
	uint32_t x311 = 777U;
	uint16_t x312 = 0U;
	volatile int32_t t53 = 118945911;

    t53 = (((x309+x310)*x311)>x312);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x325 = INT64_MIN;
	uint64_t x326 = 1965646235348634LLU;
	int8_t x327 = 0;
	volatile uint64_t x328 = UINT64_MAX;
	int32_t t54 = -30414;

    t54 = (((x325+x326)*x327)>x328);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x330 = 4U;
	static volatile int8_t x331 = -8;
	int32_t x332 = 242716;
	volatile int32_t t55 = 0;

    t55 = (((x329+x330)*x331)>x332);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x333 = 3939141U;
	volatile uint16_t x334 = 49U;
	int32_t x336 = -63528461;
	int32_t t56 = -348;

    t56 = (((x333+x334)*x335)>x336);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x337 = INT16_MIN;
	uint16_t x338 = UINT16_MAX;
	int8_t x339 = 1;
	static uint16_t x340 = 1382U;
	static volatile int32_t t57 = -56782049;

    t57 = (((x337+x338)*x339)>x340);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x341 = INT8_MAX;
	int8_t x342 = INT8_MAX;
	uint16_t x344 = 436U;
	int32_t t58 = 147413473;

    t58 = (((x341+x342)*x343)>x344);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x349 = UINT64_MAX;
	int16_t x350 = INT16_MAX;
	int64_t x351 = -1LL;
	int16_t x352 = -128;
	int32_t t59 = -1799;

    t59 = (((x349+x350)*x351)>x352);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x359 = -1;
	static volatile int16_t x360 = INT16_MIN;
	volatile int32_t t60 = -105;

    t60 = (((x357+x358)*x359)>x360);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x361 = 7349107LLU;
	int32_t x362 = -26;

    t61 = (((x361+x362)*x363)>x364);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x365 = -1LL;
	uint32_t x366 = 1480U;
	static int32_t x367 = -1;
	volatile int32_t t62 = 25422135;

    t62 = (((x365+x366)*x367)>x368);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int8_t x369 = -1;
	volatile int16_t x370 = 14;
	uint16_t x371 = 1U;
	static int8_t x372 = 1;
	int32_t t63 = 5516;

    t63 = (((x369+x370)*x371)>x372);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x393 = 13690;
	int16_t x394 = -3;
	static volatile int16_t x396 = -1;
	static volatile int32_t t64 = -4160504;

    t64 = (((x393+x394)*x395)>x396);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x397 = 1047400597U;
	uint16_t x398 = 568U;
	uint32_t x399 = UINT32_MAX;
	uint8_t x400 = 15U;
	int32_t t65 = 973;

    t65 = (((x397+x398)*x399)>x400);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x403 = 12744U;
	uint64_t x404 = 1050359605621LLU;

    t66 = (((x401+x402)*x403)>x404);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x405 = 95636126LLU;
	int16_t x406 = -1;
	static int8_t x407 = -1;
	volatile uint16_t x408 = UINT16_MAX;
	volatile int32_t t67 = -49301344;

    t67 = (((x405+x406)*x407)>x408);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x409 = 7754616841LLU;
	int16_t x410 = INT16_MIN;
	uint8_t x411 = UINT8_MAX;
	uint8_t x412 = 5U;
	static volatile int32_t t68 = -264;

    t68 = (((x409+x410)*x411)>x412);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x413 = INT16_MAX;
	int8_t x414 = INT8_MAX;
	int8_t x415 = INT8_MAX;
	int8_t x416 = INT8_MIN;
	volatile int32_t t69 = -94865;

    t69 = (((x413+x414)*x415)>x416);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x421 = INT8_MAX;
	int64_t x422 = -5202289352368701LL;
	volatile int8_t x423 = -1;

    t70 = (((x421+x422)*x423)>x424);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x429 = -1LL;
	uint32_t x430 = UINT32_MAX;
	int8_t x431 = -1;
	volatile int8_t x432 = -1;

    t71 = (((x429+x430)*x431)>x432);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x433 = -1;
	volatile uint16_t x434 = 4226U;

    t72 = (((x433+x434)*x435)>x436);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint16_t x437 = UINT16_MAX;
	volatile int16_t x438 = -275;
	static volatile int64_t x439 = -1LL;
	uint32_t x440 = 28696U;

    t73 = (((x437+x438)*x439)>x440);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x441 = 333U;
	int64_t x442 = -112LL;
	volatile int8_t x443 = 4;
	uint8_t x444 = 0U;

    t74 = (((x441+x442)*x443)>x444);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x446 = 1U;
	int16_t x448 = -61;

    t75 = (((x445+x446)*x447)>x448);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x450 = UINT16_MAX;
	volatile int64_t x452 = INT64_MIN;
	volatile int32_t t76 = -3;

    t76 = (((x449+x450)*x451)>x452);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x453 = -1LL;
	static int64_t x454 = 301LL;

    t77 = (((x453+x454)*x455)>x456);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x461 = 3938445912086508654LLU;
	volatile uint64_t x462 = 1226579269085LLU;
	int64_t x463 = INT64_MIN;
	int32_t x464 = INT32_MIN;

    t78 = (((x461+x462)*x463)>x464);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x465 = 58678803597579LLU;
	uint32_t x466 = 989U;
	int64_t x467 = INT64_MAX;
	int16_t x468 = 10483;
	static volatile int32_t t79 = 3325;

    t79 = (((x465+x466)*x467)>x468);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x469 = -4;
	volatile int32_t x470 = -13004817;
	static int8_t x471 = INT8_MIN;
	int32_t x472 = INT32_MIN;
	static volatile int32_t t80 = -579;

    t80 = (((x469+x470)*x471)>x472);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x473 = 25U;
	static uint16_t x474 = 936U;
	int16_t x475 = INT16_MIN;
	volatile int64_t x476 = 33427758205216LL;
	static int32_t t81 = -2127;

    t81 = (((x473+x474)*x475)>x476);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x478 = 2075989935U;
	int16_t x479 = INT16_MIN;
	static int64_t x480 = INT64_MAX;
	int32_t t82 = 1;

    t82 = (((x477+x478)*x479)>x480);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x485 = -13;
	volatile uint32_t x486 = 15407521U;
	volatile int8_t x487 = INT8_MIN;
	uint64_t x488 = 12916874LLU;
	static int32_t t83 = 43;

    t83 = (((x485+x486)*x487)>x488);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x513 = UINT32_MAX;
	volatile int16_t x515 = INT16_MIN;
	int64_t x516 = -220807803LL;
	volatile int32_t t84 = 23840;

    t84 = (((x513+x514)*x515)>x516);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x517 = 1U;
	static int16_t x518 = INT16_MAX;
	static int8_t x519 = -1;
	int8_t x520 = INT8_MAX;
	int32_t t85 = 674;

    t85 = (((x517+x518)*x519)>x520);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x525 = 121951U;
	uint32_t x527 = UINT32_MAX;
	volatile int32_t x528 = INT32_MAX;
	int32_t t86 = 830216;

    t86 = (((x525+x526)*x527)>x528);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x530 = UINT32_MAX;
	uint8_t x531 = UINT8_MAX;
	int32_t t87 = 113537822;

    t87 = (((x529+x530)*x531)>x532);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x533 = 3238U;
	int8_t x535 = INT8_MIN;
	uint16_t x536 = 390U;

    t88 = (((x533+x534)*x535)>x536);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x537 = -1LL;
	uint16_t x538 = UINT16_MAX;
	int16_t x539 = -4941;

    t89 = (((x537+x538)*x539)>x540);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x541 = INT16_MIN;
	static int8_t x542 = INT8_MIN;
	uint32_t x543 = UINT32_MAX;
	volatile int16_t x544 = INT16_MIN;
	static int32_t t90 = 899;

    t90 = (((x541+x542)*x543)>x544);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x549 = INT32_MIN;
	static volatile int32_t x550 = INT32_MAX;
	int32_t x551 = -1;
	int16_t x552 = INT16_MIN;

    t91 = (((x549+x550)*x551)>x552);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x557 = -1;
	int8_t x558 = INT8_MIN;
	int16_t x559 = -1;
	int8_t x560 = -2;
	int32_t t92 = -2381;

    t92 = (((x557+x558)*x559)>x560);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x566 = -92055LL;
	int8_t x567 = INT8_MIN;
	volatile int32_t t93 = 1551;

    t93 = (((x565+x566)*x567)>x568);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x569 = 448;
	volatile int64_t x570 = 5LL;
	static int32_t t94 = 8072236;

    t94 = (((x569+x570)*x571)>x572);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x573 = 25U;
	int32_t x574 = INT32_MIN;
	int32_t x575 = INT32_MAX;
	volatile int64_t x576 = INT64_MIN;

    t95 = (((x573+x574)*x575)>x576);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x581 = 53014896;
	volatile int64_t x582 = -1LL;
	int32_t x583 = INT32_MIN;
	uint8_t x584 = 58U;
	static int32_t t96 = 4461;

    t96 = (((x581+x582)*x583)>x584);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x585 = 6U;
	uint8_t x586 = UINT8_MAX;
	uint32_t x587 = 4335U;
	static uint16_t x588 = 55U;
	int32_t t97 = 242;

    t97 = (((x585+x586)*x587)>x588);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x589 = -1;
	int8_t x590 = -1;
	volatile int32_t t98 = -1;

    t98 = (((x589+x590)*x591)>x592);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x593 = 21163456064LLU;
	int16_t x594 = -1;
	uint64_t x595 = 1321828814LLU;
	int16_t x596 = 95;
	int32_t t99 = -1650;

    t99 = (((x593+x594)*x595)>x596);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint32_t x597 = 414193476U;
	uint64_t x599 = 3307189368317LLU;
	int8_t x600 = -1;
	static int32_t t100 = -9;

    t100 = (((x597+x598)*x599)>x600);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint16_t x615 = UINT16_MAX;
	int8_t x616 = -1;
	int32_t t101 = 896;

    t101 = (((x613+x614)*x615)>x616);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x619 = 48U;
	uint16_t x620 = 4947U;
	int32_t t102 = 31838106;

    t102 = (((x617+x618)*x619)>x620);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x625 = -4;
	volatile int16_t x626 = -1;
	int64_t x628 = INT64_MIN;

    t103 = (((x625+x626)*x627)>x628);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x646 = 242886264U;
	uint64_t x647 = 6923LLU;
	uint8_t x648 = 0U;

    t104 = (((x645+x646)*x647)>x648);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x649 = 2U;
	uint8_t x650 = 0U;
	static volatile int64_t x652 = -1LL;
	static volatile int32_t t105 = -110;

    t105 = (((x649+x650)*x651)>x652);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x657 = UINT64_MAX;
	int64_t x659 = -1LL;
	int32_t t106 = -120643;

    t106 = (((x657+x658)*x659)>x660);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x661 = -32;
	volatile uint32_t x662 = 750993U;
	volatile uint32_t x663 = 726590U;
	int64_t x664 = INT64_MIN;
	static volatile int32_t t107 = 303478;

    t107 = (((x661+x662)*x663)>x664);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x665 = INT16_MIN;
	volatile uint64_t x666 = 859246857LLU;
	int8_t x667 = -1;
	uint64_t x668 = 72LLU;

    t108 = (((x665+x666)*x667)>x668);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint32_t x673 = 6U;
	int8_t x675 = -1;
	int16_t x676 = -607;

    t109 = (((x673+x674)*x675)>x676);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x677 = -59;
	int16_t x678 = 0;
	uint32_t x679 = UINT32_MAX;
	int64_t x680 = INT64_MIN;
	volatile int32_t t110 = -207153342;

    t110 = (((x677+x678)*x679)>x680);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x681 = INT8_MIN;
	int64_t x682 = 733365082972LL;
	int8_t x684 = 17;
	volatile int32_t t111 = -1;

    t111 = (((x681+x682)*x683)>x684);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x685 = 1;
	int16_t x686 = INT16_MAX;
	static int32_t x687 = -1;
	int16_t x688 = -1;
	static volatile int32_t t112 = 411138;

    t112 = (((x685+x686)*x687)>x688);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x693 = 313177285562LL;
	volatile uint32_t x694 = UINT32_MAX;
	volatile int32_t t113 = 44;

    t113 = (((x693+x694)*x695)>x696);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x697 = 1738488991U;
	int16_t x699 = -799;
	volatile int16_t x700 = INT16_MAX;

    t114 = (((x697+x698)*x699)>x700);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x705 = UINT16_MAX;
	int8_t x706 = INT8_MIN;
	uint8_t x707 = UINT8_MAX;
	uint64_t x708 = 953305061405LLU;
	volatile int32_t t115 = -1747771;

    t115 = (((x705+x706)*x707)>x708);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x713 = UINT64_MAX;
	static int32_t x714 = INT32_MAX;
	static volatile int32_t t116 = 23;

    t116 = (((x713+x714)*x715)>x716);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x717 = UINT32_MAX;
	static uint64_t x718 = 65738559LLU;
	int16_t x719 = -1;

    t117 = (((x717+x718)*x719)>x720);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint8_t x722 = UINT8_MAX;
	uint64_t x723 = 138819889507LLU;
	uint64_t x724 = 8267632812LLU;

    t118 = (((x721+x722)*x723)>x724);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x729 = 0U;
	int16_t x731 = INT16_MIN;
	static int32_t x732 = INT32_MAX;
	static int32_t t119 = 21168701;

    t119 = (((x729+x730)*x731)>x732);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x737 = 1;
	uint32_t x738 = 46282U;
	static int8_t x740 = INT8_MIN;
	static volatile int32_t t120 = -27317951;

    t120 = (((x737+x738)*x739)>x740);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint16_t x749 = UINT16_MAX;
	int16_t x750 = -1;
	uint16_t x751 = 174U;
	int32_t x752 = INT32_MIN;
	int32_t t121 = -177615;

    t121 = (((x749+x750)*x751)>x752);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x753 = 2711944LL;
	static int8_t x754 = -25;
	uint16_t x755 = 23968U;
	static uint32_t x756 = 11U;
	int32_t t122 = -1;

    t122 = (((x753+x754)*x755)>x756);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x761 = -1LL;
	volatile int8_t x763 = INT8_MIN;
	int64_t x764 = INT64_MIN;
	volatile int32_t t123 = 1;

    t123 = (((x761+x762)*x763)>x764);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x777 = 23U;
	uint8_t x778 = 7U;
	int8_t x779 = INT8_MIN;
	uint32_t x780 = 4847U;

    t124 = (((x777+x778)*x779)>x780);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x785 = INT32_MIN;
	volatile int8_t x787 = -1;
	int64_t x788 = 163612442LL;
	volatile int32_t t125 = 139;

    t125 = (((x785+x786)*x787)>x788);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint8_t x789 = UINT8_MAX;
	int32_t x791 = INT32_MAX;
	static volatile uint32_t x792 = 36612371U;
	volatile int32_t t126 = -1;

    t126 = (((x789+x790)*x791)>x792);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x793 = 5467U;
	int8_t x794 = INT8_MAX;
	static int32_t x795 = -1;
	int64_t x796 = INT64_MIN;
	int32_t t127 = -112;

    t127 = (((x793+x794)*x795)>x796);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x797 = 7029U;
	int8_t x798 = INT8_MIN;
	int8_t x799 = INT8_MAX;
	static int32_t t128 = -349488;

    t128 = (((x797+x798)*x799)>x800);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x801 = -5;
	static int16_t x802 = INT16_MAX;
	int16_t x804 = INT16_MIN;
	static volatile int32_t t129 = 12586;

    t129 = (((x801+x802)*x803)>x804);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x805 = 65U;
	int8_t x806 = INT8_MIN;
	static int16_t x807 = INT16_MAX;
	uint32_t x808 = 61U;
	int32_t t130 = 24;

    t130 = (((x805+x806)*x807)>x808);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x821 = 1043170025LL;
	static int16_t x822 = 1;
	int64_t x823 = -2074531LL;
	int64_t x824 = 232469295LL;
	volatile int32_t t131 = -56343758;

    t131 = (((x821+x822)*x823)>x824);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x825 = INT16_MIN;
	uint64_t x826 = 100LLU;
	volatile uint16_t x827 = UINT16_MAX;
	static int8_t x828 = -1;
	volatile int32_t t132 = -35257308;

    t132 = (((x825+x826)*x827)>x828);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x833 = UINT8_MAX;
	int8_t x834 = INT8_MIN;
	uint8_t x835 = UINT8_MAX;
	volatile uint8_t x836 = UINT8_MAX;

    t133 = (((x833+x834)*x835)>x836);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x838 = -1;
	int64_t x839 = -29714402002098942LL;
	volatile uint8_t x840 = 0U;
	static volatile int32_t t134 = -1;

    t134 = (((x837+x838)*x839)>x840);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x845 = INT16_MIN;
	int8_t x846 = -1;
	volatile uint32_t x847 = 18187628U;
	volatile uint16_t x848 = 1U;
	volatile int32_t t135 = 959;

    t135 = (((x845+x846)*x847)>x848);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x849 = -1;
	uint32_t x851 = UINT32_MAX;
	int16_t x852 = 5598;
	int32_t t136 = 700582;

    t136 = (((x849+x850)*x851)>x852);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x853 = INT32_MAX;
	uint64_t x854 = UINT64_MAX;
	static int8_t x855 = INT8_MIN;
	int16_t x856 = INT16_MIN;
	volatile int32_t t137 = -120895;

    t137 = (((x853+x854)*x855)>x856);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x857 = 4LLU;
	volatile int16_t x858 = INT16_MIN;
	volatile int64_t x859 = INT64_MAX;
	int64_t x860 = -1LL;
	static volatile int32_t t138 = 1012080425;

    t138 = (((x857+x858)*x859)>x860);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x861 = 1LLU;
	static uint8_t x862 = 4U;
	uint32_t x863 = 21U;
	static uint64_t x864 = 511LLU;
	int32_t t139 = -23;

    t139 = (((x861+x862)*x863)>x864);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x875 = 10;
	int16_t x876 = 10;
	volatile int32_t t140 = -6176183;

    t140 = (((x873+x874)*x875)>x876);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x877 = 1U;
	uint32_t x878 = 3U;
	int8_t x880 = -49;

    t141 = (((x877+x878)*x879)>x880);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x881 = 400U;
	uint8_t x882 = 1U;
	uint64_t x883 = 875LLU;
	volatile int64_t x884 = -1LL;
	int32_t t142 = 137520;

    t142 = (((x881+x882)*x883)>x884);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x893 = 4U;
	static volatile int64_t x894 = -272512LL;
	static uint32_t x895 = 5784536U;
	uint32_t x896 = 1531679U;
	int32_t t143 = -216837917;

    t143 = (((x893+x894)*x895)>x896);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x898 = 287983610986221LLU;
	uint32_t x899 = 19571369U;
	static int32_t t144 = -32705221;

    t144 = (((x897+x898)*x899)>x900);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x905 = 252092353896LLU;
	uint16_t x906 = 252U;
	int8_t x907 = INT8_MAX;
	static volatile int32_t t145 = 79080;

    t145 = (((x905+x906)*x907)>x908);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x909 = INT8_MAX;
	volatile uint32_t x910 = UINT32_MAX;
	volatile int8_t x912 = -1;
	volatile int32_t t146 = 177;

    t146 = (((x909+x910)*x911)>x912);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x917 = 4U;
	static uint64_t x919 = UINT64_MAX;
	int32_t t147 = 837814831;

    t147 = (((x917+x918)*x919)>x920);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint8_t x921 = 112U;
	static volatile uint64_t x923 = UINT64_MAX;
	int32_t x924 = -1;
	int32_t t148 = -13407;

    t148 = (((x921+x922)*x923)>x924);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int16_t x925 = INT16_MAX;
	static uint64_t x926 = 6918058675678920LLU;
	volatile int32_t t149 = -5;

    t149 = (((x925+x926)*x927)>x928);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x929 = -3;
	int16_t x931 = -2;
	int32_t x932 = -1;
	volatile int32_t t150 = 244;

    t150 = (((x929+x930)*x931)>x932);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x933 = 4;
	int8_t x935 = 26;
	int64_t x936 = -1LL;

    t151 = (((x933+x934)*x935)>x936);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int8_t x937 = -7;
	int64_t x940 = -60573547323732961LL;
	int32_t t152 = 111023386;

    t152 = (((x937+x938)*x939)>x940);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x945 = 11U;
	int16_t x946 = INT16_MIN;
	int32_t x947 = 0;
	uint32_t x948 = UINT32_MAX;

    t153 = (((x945+x946)*x947)>x948);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x949 = 86U;
	int32_t x950 = INT32_MIN;
	int32_t x952 = -509444;
	int32_t t154 = 889875188;

    t154 = (((x949+x950)*x951)>x952);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x954 = INT8_MAX;
	int16_t x955 = 122;
	static int16_t x956 = INT16_MIN;
	volatile int32_t t155 = -55;

    t155 = (((x953+x954)*x955)>x956);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x957 = -1;
	int8_t x958 = INT8_MIN;
	uint64_t x959 = 1LLU;
	static int8_t x960 = INT8_MIN;
	volatile int32_t t156 = 7;

    t156 = (((x957+x958)*x959)>x960);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x961 = UINT64_MAX;
	static uint16_t x962 = UINT16_MAX;
	volatile int16_t x963 = INT16_MIN;
	uint8_t x964 = 1U;
	int32_t t157 = -32023905;

    t157 = (((x961+x962)*x963)>x964);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int16_t x969 = -81;
	uint64_t x970 = UINT64_MAX;
	uint8_t x971 = UINT8_MAX;
	int16_t x972 = 4;
	volatile int32_t t158 = -27468;

    t158 = (((x969+x970)*x971)>x972);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x973 = INT8_MAX;
	uint16_t x975 = 35U;
	static volatile int16_t x976 = INT16_MIN;

    t159 = (((x973+x974)*x975)>x976);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint16_t x977 = UINT16_MAX;
	int16_t x978 = INT16_MIN;
	int16_t x979 = -1;
	int16_t x980 = -1;
	int32_t t160 = 7537;

    t160 = (((x977+x978)*x979)>x980);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x985 = -1;
	static int16_t x986 = 4;
	int8_t x988 = INT8_MIN;
	int32_t t161 = 1733496;

    t161 = (((x985+x986)*x987)>x988);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x989 = 1385;
	volatile int32_t x990 = -1;
	uint8_t x991 = 81U;
	static int8_t x992 = INT8_MIN;
	volatile int32_t t162 = -45359855;

    t162 = (((x989+x990)*x991)>x992);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x993 = INT8_MIN;
	int8_t x994 = INT8_MIN;
	int16_t x995 = 7;
	int32_t t163 = 4;

    t163 = (((x993+x994)*x995)>x996);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x997 = 78U;
	static uint16_t x1000 = UINT16_MAX;
	static int32_t t164 = 7947952;

    t164 = (((x997+x998)*x999)>x1000);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x1009 = -1;
	volatile int8_t x1010 = -1;
	int8_t x1011 = INT8_MIN;
	int16_t x1012 = INT16_MIN;
	volatile int32_t t165 = 192861207;

    t165 = (((x1009+x1010)*x1011)>x1012);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x1013 = INT64_MIN;
	int16_t x1014 = INT16_MAX;
	uint64_t x1015 = UINT64_MAX;
	static int8_t x1016 = INT8_MIN;
	volatile int32_t t166 = -78691400;

    t166 = (((x1013+x1014)*x1015)>x1016);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x1017 = 0;
	int16_t x1018 = INT16_MIN;
	uint16_t x1019 = 71U;
	volatile uint16_t x1020 = UINT16_MAX;

    t167 = (((x1017+x1018)*x1019)>x1020);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x1021 = 5;
	volatile int8_t x1022 = 20;
	static volatile int32_t t168 = 44797;

    t168 = (((x1021+x1022)*x1023)>x1024);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x1029 = 31;
	uint16_t x1030 = 8379U;
	int16_t x1031 = INT16_MAX;
	uint32_t x1032 = 11326U;
	int32_t t169 = 181248;

    t169 = (((x1029+x1030)*x1031)>x1032);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x1033 = 38U;
	int16_t x1035 = -18;
	int32_t t170 = 1338958;

    t170 = (((x1033+x1034)*x1035)>x1036);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x1037 = 4U;
	static int64_t x1038 = 12260257555LL;
	static volatile int8_t x1039 = -1;
	uint8_t x1040 = 12U;
	volatile int32_t t171 = -3798119;

    t171 = (((x1037+x1038)*x1039)>x1040);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint16_t x1041 = UINT16_MAX;
	int64_t x1042 = -1LL;
	int16_t x1043 = -1;
	int8_t x1044 = 0;
	int32_t t172 = 16;

    t172 = (((x1041+x1042)*x1043)>x1044);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint64_t x1045 = 0LLU;
	uint8_t x1046 = 3U;
	static int16_t x1047 = -1;
	static int32_t x1048 = -1;
	static volatile int32_t t173 = 118608;

    t173 = (((x1045+x1046)*x1047)>x1048);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x1049 = 1;
	int8_t x1051 = -1;
	static volatile int32_t t174 = -880400;

    t174 = (((x1049+x1050)*x1051)>x1052);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x1053 = INT8_MAX;
	static int8_t x1054 = 25;
	int64_t x1055 = -1253415LL;
	static int8_t x1056 = INT8_MIN;

    t175 = (((x1053+x1054)*x1055)>x1056);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x1057 = -8263;
	int64_t x1058 = -1LL;
	uint64_t x1059 = 20740LLU;
	uint64_t x1060 = UINT64_MAX;
	int32_t t176 = -123;

    t176 = (((x1057+x1058)*x1059)>x1060);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x1061 = 2853214828723734LLU;
	int16_t x1062 = INT16_MIN;
	static volatile uint64_t x1063 = UINT64_MAX;
	uint64_t x1064 = 14770389LLU;
	int32_t t177 = 215160757;

    t177 = (((x1061+x1062)*x1063)>x1064);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x1069 = UINT64_MAX;
	int8_t x1070 = INT8_MIN;
	volatile uint8_t x1072 = 101U;
	volatile int32_t t178 = 1671215;

    t178 = (((x1069+x1070)*x1071)>x1072);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint32_t x1077 = 3U;
	uint32_t x1079 = 140074379U;
	int16_t x1080 = INT16_MIN;

    t179 = (((x1077+x1078)*x1079)>x1080);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1093 = INT8_MIN;
	int8_t x1094 = INT8_MAX;
	volatile int8_t x1096 = -1;
	static int32_t t180 = 6316534;

    t180 = (((x1093+x1094)*x1095)>x1096);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x1102 = INT64_MIN;
	int64_t x1103 = INT64_MAX;
	int16_t x1104 = INT16_MAX;
	static volatile int32_t t181 = 5;

    t181 = (((x1101+x1102)*x1103)>x1104);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1105 = -116893925060LL;
	volatile uint32_t x1106 = 201U;
	static uint8_t x1108 = 110U;
	int32_t t182 = 2404;

    t182 = (((x1105+x1106)*x1107)>x1108);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x1109 = UINT32_MAX;
	volatile int64_t x1110 = 2899LL;
	uint64_t x1111 = UINT64_MAX;
	int64_t x1112 = 819009375585LL;
	volatile int32_t t183 = 3;

    t183 = (((x1109+x1110)*x1111)>x1112);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x1117 = INT8_MIN;
	int8_t x1118 = -1;
	uint32_t x1119 = 0U;
	uint16_t x1120 = 3720U;
	volatile int32_t t184 = 5321684;

    t184 = (((x1117+x1118)*x1119)>x1120);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x1121 = -1LL;
	uint64_t x1122 = UINT64_MAX;
	int32_t x1123 = INT32_MIN;
	int64_t x1124 = 10479271478319LL;

    t185 = (((x1121+x1122)*x1123)>x1124);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint8_t x1126 = UINT8_MAX;
	uint16_t x1127 = 18145U;
	volatile int32_t t186 = 138;

    t186 = (((x1125+x1126)*x1127)>x1128);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1133 = 1557;
	int16_t x1134 = INT16_MIN;
	int64_t x1135 = 5818717690813LL;
	static int16_t x1136 = INT16_MIN;

    t187 = (((x1133+x1134)*x1135)>x1136);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x1137 = INT8_MAX;
	static volatile int16_t x1138 = -1;
	volatile uint16_t x1139 = 474U;
	volatile int16_t x1140 = INT16_MIN;
	int32_t t188 = 461304;

    t188 = (((x1137+x1138)*x1139)>x1140);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1141 = 429U;
	int32_t x1142 = INT32_MAX;
	int32_t x1143 = -1;
	static volatile int64_t x1144 = -1LL;
	static int32_t t189 = -46;

    t189 = (((x1141+x1142)*x1143)>x1144);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x1150 = INT16_MIN;
	uint16_t x1151 = 93U;
	int32_t x1152 = INT32_MIN;
	volatile int32_t t190 = 31002288;

    t190 = (((x1149+x1150)*x1151)>x1152);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint64_t x1153 = 0LLU;
	volatile int32_t x1154 = INT32_MIN;
	int64_t x1155 = INT64_MAX;
	volatile uint64_t x1156 = 32456301735140LLU;
	volatile int32_t t191 = -527420961;

    t191 = (((x1153+x1154)*x1155)>x1156);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1157 = -1;
	static uint8_t x1159 = 9U;
	static uint16_t x1160 = 1759U;
	volatile int32_t t192 = -151947623;

    t192 = (((x1157+x1158)*x1159)>x1160);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x1165 = 8305U;
	uint64_t x1166 = UINT64_MAX;
	int32_t t193 = 11400;

    t193 = (((x1165+x1166)*x1167)>x1168);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1173 = -1LL;
	int32_t x1174 = 89317;
	int16_t x1176 = INT16_MIN;
	int32_t t194 = -23510;

    t194 = (((x1173+x1174)*x1175)>x1176);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1181 = 1363U;
	static volatile int16_t x1182 = -1;
	static uint32_t x1184 = UINT32_MAX;
	volatile int32_t t195 = 1;

    t195 = (((x1181+x1182)*x1183)>x1184);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1185 = INT64_MAX;
	int8_t x1186 = -1;
	int8_t x1187 = -1;
	int32_t t196 = 4015286;

    t196 = (((x1185+x1186)*x1187)>x1188);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x1195 = 4294766493612862262LLU;
	int64_t x1196 = -117266LL;
	volatile int32_t t197 = -65540;

    t197 = (((x1193+x1194)*x1195)>x1196);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile uint16_t x1197 = 540U;
	uint16_t x1199 = UINT16_MAX;
	int32_t t198 = -1791;

    t198 = (((x1197+x1198)*x1199)>x1200);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint32_t x1207 = 24U;
	static int8_t x1208 = 0;
	int32_t t199 = -1290509;

    t199 = (((x1205+x1206)*x1207)>x1208);

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

