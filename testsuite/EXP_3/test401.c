
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

static uint16_t x4 = 10U;
int16_t x6 = INT16_MIN;
int64_t x8 = 1398340074482LL;
volatile int32_t t1 = -2;
uint16_t x10 = 21537U;
static uint8_t x23 = UINT8_MAX;
int32_t x25 = INT32_MIN;
uint64_t x26 = UINT64_MAX;
uint32_t x30 = 42950351U;
volatile int32_t t7 = -819889804;
static int32_t x93 = -1;
int16_t x95 = INT16_MAX;
volatile int32_t t11 = 1039397265;
int8_t x112 = INT8_MIN;
volatile int32_t t15 = 3;
int8_t x114 = -3;
volatile int8_t x119 = -3;
static int8_t x120 = 29;
static volatile int32_t t17 = -35847;
uint8_t x129 = 14U;
int8_t x131 = -27;
int64_t x134 = INT64_MAX;
int16_t x137 = -63;
static int32_t t22 = 0;
static uint32_t x159 = 764U;
volatile int16_t x160 = -5;
volatile uint16_t x167 = 109U;
int8_t x168 = 28;
volatile int32_t t24 = -29271;
uint16_t x170 = 16534U;
int64_t x171 = -1LL;
uint32_t x174 = UINT32_MAX;
volatile uint32_t x175 = 1692622U;
volatile int32_t x178 = -1;
static volatile int32_t x183 = INT32_MAX;
volatile int32_t t30 = 3760284;
uint32_t x193 = UINT32_MAX;
int32_t t35 = -28995348;
uint8_t x219 = UINT8_MAX;
int16_t x220 = INT16_MIN;
uint64_t x221 = 259992526738LLU;
static int32_t x238 = -1;
uint8_t x239 = 25U;
volatile uint32_t x242 = 28U;
uint32_t x243 = 380U;
volatile int32_t t41 = -7;
uint64_t x275 = 5077LLU;
int32_t x276 = 232869;
static int16_t x282 = INT16_MAX;
static uint8_t x284 = UINT8_MAX;
static int32_t x292 = -1;
volatile int32_t t48 = -766393435;
int16_t x294 = INT16_MIN;
static int16_t x295 = -1;
static int8_t x296 = INT8_MIN;
uint32_t x310 = 45U;
volatile int32_t t50 = -109652502;
static volatile int32_t x313 = INT32_MIN;
int8_t x323 = INT8_MIN;
static volatile int32_t t52 = 566373;
static uint32_t x343 = 84U;
int32_t t57 = 1;
uint64_t x380 = 42189LLU;
volatile int32_t t58 = -1;
int32_t x382 = -1;
int32_t x384 = INT32_MIN;
int16_t x389 = -1;
int8_t x390 = 48;
static int16_t x391 = -1;
static uint64_t x403 = 793LLU;
int16_t x404 = 2683;
int16_t x405 = INT16_MAX;
uint16_t x413 = 98U;
static uint64_t x415 = 127471255219LLU;
static volatile int32_t t66 = 61272;
int32_t x427 = INT32_MAX;
int16_t x434 = 0;
uint32_t x436 = 13747U;
volatile uint8_t x439 = 3U;
volatile int32_t t72 = 75;
int16_t x453 = -1;
int32_t t73 = 15113842;
int16_t x474 = INT16_MAX;
static int16_t x512 = INT16_MAX;
volatile int32_t t79 = 123909;
volatile uint64_t x531 = 61496490LLU;
uint32_t x534 = 32443U;
static uint64_t x540 = 12271827LLU;
int32_t t83 = -37125919;
uint16_t x546 = 15415U;
uint64_t x547 = 157778737947091LLU;
uint16_t x548 = 9801U;
uint32_t x550 = 116U;
int32_t x552 = 63;
int8_t x554 = INT8_MAX;
uint32_t x556 = 64763362U;
volatile int32_t t91 = -321378;
static int32_t t92 = -7205;
static int32_t x605 = INT32_MAX;
int64_t x606 = 1780189570404LL;
int32_t x617 = -108582681;
uint64_t x619 = UINT64_MAX;
static int32_t t97 = 2287409;
uint8_t x624 = 0U;
uint8_t x627 = 9U;
static int16_t x634 = -78;
int32_t t102 = 38;
int16_t x647 = INT16_MIN;
static volatile int32_t t104 = 5;
uint16_t x661 = UINT16_MAX;
static volatile uint64_t x666 = 1066432118017790601LLU;
volatile int64_t x671 = -1LL;
int8_t x673 = INT8_MIN;
static volatile uint64_t x680 = 9382LLU;
volatile int16_t x681 = INT16_MAX;
volatile int8_t x685 = -1;
static int32_t x687 = -1;
volatile uint64_t x688 = UINT64_MAX;
volatile int32_t t111 = 33441932;
int8_t x689 = -1;
int8_t x690 = -3;
volatile uint32_t x693 = 3787848U;
int16_t x696 = INT16_MIN;
uint64_t x700 = UINT64_MAX;
static uint8_t x701 = 0U;
static int16_t x706 = -1;
int16_t x707 = INT16_MAX;
int64_t x710 = 3417683935504LL;
uint32_t x712 = 2770863U;
volatile int64_t x717 = INT64_MIN;
int64_t x721 = INT64_MIN;
static int64_t x725 = -5500720167LL;
int64_t x728 = 174779987LL;
static int16_t x752 = INT16_MAX;
int64_t x753 = -1LL;
volatile int8_t x761 = INT8_MAX;
static uint8_t x762 = 12U;
int16_t x774 = -177;
static volatile uint16_t x809 = UINT16_MAX;
int32_t t128 = -1;
static int32_t t129 = -10902731;
volatile int32_t t131 = -10;
int16_t x852 = INT16_MAX;
int16_t x854 = INT16_MIN;
int32_t t134 = 0;
uint16_t x879 = UINT16_MAX;
int64_t x882 = INT64_MIN;
int16_t x883 = 5;
int16_t x885 = INT16_MIN;
uint8_t x902 = UINT8_MAX;
int8_t x903 = 1;
static int64_t x905 = INT64_MIN;
volatile uint32_t x928 = UINT32_MAX;
static int8_t x937 = INT8_MAX;
volatile int32_t x939 = 12;
static uint8_t x940 = 32U;
static int32_t t149 = 210;
static volatile int64_t x946 = INT64_MAX;
int16_t x947 = 1;
int8_t x958 = -1;
int8_t x960 = INT8_MIN;
int16_t x974 = INT16_MIN;
volatile uint32_t x980 = UINT32_MAX;
volatile int32_t t157 = 204;
int32_t t158 = -689;
int8_t x991 = -7;
static int16_t x993 = 1;
int8_t x995 = 36;
static int64_t x1005 = INT64_MIN;
volatile uint32_t x1006 = 976549U;
int16_t x1008 = 2;
int8_t x1010 = INT8_MIN;
int32_t t163 = -7696;
uint32_t x1024 = UINT32_MAX;
volatile int32_t t165 = 3;
int8_t x1034 = -1;
int16_t x1042 = 74;
int32_t x1049 = INT32_MAX;
uint16_t x1051 = 26820U;
int16_t x1053 = INT16_MIN;
int16_t x1054 = INT16_MIN;
int32_t t175 = 170850319;
static int32_t x1101 = 1;
static uint8_t x1107 = UINT8_MAX;
uint32_t x1119 = 14795619U;
static uint64_t x1132 = 1LLU;
int32_t x1133 = -1;
volatile int16_t x1142 = INT16_MIN;
static uint8_t x1149 = 1U;
volatile int32_t t185 = 528289;
volatile int16_t x1153 = INT16_MIN;
uint64_t x1154 = 2559244LLU;
uint8_t x1155 = UINT8_MAX;
uint64_t x1161 = UINT64_MAX;
volatile uint32_t x1163 = UINT32_MAX;
int8_t x1167 = INT8_MAX;
volatile int32_t t194 = -14;
volatile uint32_t x1214 = UINT32_MAX;
static int8_t x1216 = INT8_MIN;
int64_t x1217 = -1LL;
volatile int32_t t197 = -173;
int8_t x1226 = 0;
int32_t t199 = 1;


void f0(void) {
    	uint32_t x1 = 3U;
	int32_t x2 = -261981;
	int64_t x3 = 234376342767LL;
	static int32_t t0 = 634450345;

    t0 = ((x1+x2)>(x3*x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x5 = UINT16_MAX;
	volatile int16_t x7 = INT16_MIN;

    t1 = ((x5+x6)>(x7*x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -270;
	static volatile uint64_t x11 = 3464688LLU;
	uint16_t x12 = 25333U;
	int32_t t2 = 245279297;

    t2 = ((x9+x10)>(x11*x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = INT8_MIN;
	static uint8_t x18 = 74U;
	static int16_t x19 = -1;
	uint64_t x20 = UINT64_MAX;
	volatile int32_t t3 = 1;

    t3 = ((x17+x18)>(x19*x20));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x21 = -1;
	uint64_t x22 = 7169551LLU;
	int16_t x24 = -84;
	int32_t t4 = -688459;

    t4 = ((x21+x22)>(x23*x24));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x27 = -1LL;
	volatile uint64_t x28 = 4343165652663LLU;
	volatile int32_t t5 = 11681853;

    t5 = ((x25+x26)>(x27*x28));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x29 = -1;
	int8_t x31 = -10;
	int8_t x32 = -1;
	static volatile int32_t t6 = -1439;

    t6 = ((x29+x30)>(x31*x32));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x61 = 10U;
	volatile int16_t x62 = 0;
	static int32_t x63 = INT32_MAX;
	volatile int16_t x64 = -1;

    t7 = ((x61+x62)>(x63*x64));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x65 = INT32_MIN;
	uint8_t x66 = UINT8_MAX;
	static int8_t x67 = INT8_MIN;
	static int8_t x68 = INT8_MIN;
	int32_t t8 = -57482;

    t8 = ((x65+x66)>(x67*x68));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x73 = 1;
	int32_t x74 = 5;
	int8_t x75 = INT8_MAX;
	int16_t x76 = INT16_MAX;
	int32_t t9 = 9312;

    t9 = ((x73+x74)>(x75*x76));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x89 = INT64_MIN;
	uint64_t x90 = UINT64_MAX;
	uint8_t x91 = UINT8_MAX;
	static uint16_t x92 = 2743U;
	volatile int32_t t10 = 501672928;

    t10 = ((x89+x90)>(x91*x92));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x94 = -1LL;
	static volatile uint64_t x96 = 903493LLU;

    t11 = ((x93+x94)>(x95*x96));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x97 = INT8_MIN;
	volatile uint16_t x98 = 3U;
	static volatile int8_t x99 = 1;
	uint16_t x100 = 43U;
	volatile int32_t t12 = 16209;

    t12 = ((x97+x98)>(x99*x100));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x101 = -31;
	uint16_t x102 = UINT16_MAX;
	int32_t x103 = -1;
	volatile int16_t x104 = -1;
	int32_t t13 = 44488;

    t13 = ((x101+x102)>(x103*x104));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x105 = 1U;
	uint32_t x106 = 5222U;
	uint32_t x107 = 486232U;
	int8_t x108 = INT8_MIN;
	volatile int32_t t14 = -14;

    t14 = ((x105+x106)>(x107*x108));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x109 = -2025150730498818LL;
	static volatile int32_t x110 = -998609507;
	uint8_t x111 = UINT8_MAX;

    t15 = ((x109+x110)>(x111*x112));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x113 = -8220436712173233LL;
	static uint8_t x115 = UINT8_MAX;
	uint16_t x116 = 10949U;
	volatile int32_t t16 = -690536897;

    t16 = ((x113+x114)>(x115*x116));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x117 = -1;
	int32_t x118 = INT32_MAX;

    t17 = ((x117+x118)>(x119*x120));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x121 = INT8_MIN;
	static int64_t x122 = 758564997LL;
	int16_t x123 = -3;
	uint64_t x124 = 1LLU;
	volatile int32_t t18 = 2343299;

    t18 = ((x121+x122)>(x123*x124));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x130 = INT8_MIN;
	volatile int8_t x132 = INT8_MIN;
	static volatile int32_t t19 = 31538;

    t19 = ((x129+x130)>(x131*x132));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x133 = -30977487538417025LL;
	int16_t x135 = INT16_MIN;
	uint32_t x136 = 6053U;
	int32_t t20 = 113;

    t20 = ((x133+x134)>(x135*x136));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x138 = 1236348821966461LL;
	static uint16_t x139 = 1223U;
	int8_t x140 = INT8_MIN;
	int32_t t21 = 0;

    t21 = ((x137+x138)>(x139*x140));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x153 = -28;
	static uint64_t x154 = 82091564LLU;
	uint16_t x155 = 7250U;
	uint16_t x156 = 348U;

    t22 = ((x153+x154)>(x155*x156));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x157 = INT16_MIN;
	volatile int8_t x158 = -1;
	volatile int32_t t23 = -1490839;

    t23 = ((x157+x158)>(x159*x160));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x165 = INT32_MIN;
	uint8_t x166 = 5U;

    t24 = ((x165+x166)>(x167*x168));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x169 = INT16_MIN;
	volatile uint64_t x172 = 195626849363585998LLU;
	volatile int32_t t25 = -3220131;

    t25 = ((x169+x170)>(x171*x172));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x173 = UINT64_MAX;
	uint16_t x176 = 15656U;
	int32_t t26 = 5709346;

    t26 = ((x173+x174)>(x175*x176));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int8_t x177 = INT8_MAX;
	static volatile int8_t x179 = INT8_MIN;
	volatile uint16_t x180 = UINT16_MAX;
	volatile int32_t t27 = -97279;

    t27 = ((x177+x178)>(x179*x180));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint64_t x181 = 3493838670215LLU;
	static int16_t x182 = INT16_MAX;
	uint64_t x184 = 1545LLU;
	int32_t t28 = -1951;

    t28 = ((x181+x182)>(x183*x184));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint8_t x185 = 1U;
	int64_t x186 = 215LL;
	uint64_t x187 = 125809342079076300LLU;
	uint16_t x188 = 23U;
	volatile int32_t t29 = 2;

    t29 = ((x185+x186)>(x187*x188));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x189 = -169753LL;
	volatile int64_t x190 = INT64_MAX;
	volatile uint16_t x191 = UINT16_MAX;
	static int64_t x192 = -1LL;

    t30 = ((x189+x190)>(x191*x192));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x194 = INT16_MAX;
	volatile int8_t x195 = -8;
	volatile int16_t x196 = INT16_MAX;
	volatile int32_t t31 = 682158;

    t31 = ((x193+x194)>(x195*x196));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x197 = -1;
	volatile int32_t x198 = 78946197;
	static uint64_t x199 = UINT64_MAX;
	int8_t x200 = INT8_MAX;
	volatile int32_t t32 = 425355583;

    t32 = ((x197+x198)>(x199*x200));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x201 = -1;
	int32_t x202 = 0;
	static int16_t x203 = 4819;
	uint32_t x204 = UINT32_MAX;
	static int32_t t33 = 8112151;

    t33 = ((x201+x202)>(x203*x204));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x205 = 85643;
	static uint64_t x206 = UINT64_MAX;
	int8_t x207 = -1;
	int16_t x208 = INT16_MIN;
	volatile int32_t t34 = 636;

    t34 = ((x205+x206)>(x207*x208));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x213 = -58768717;
	int32_t x214 = -136858;
	volatile uint32_t x215 = UINT32_MAX;
	int16_t x216 = INT16_MIN;

    t35 = ((x213+x214)>(x215*x216));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x217 = INT16_MAX;
	uint16_t x218 = UINT16_MAX;
	int32_t t36 = 211793;

    t36 = ((x217+x218)>(x219*x220));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x222 = 3896LLU;
	uint8_t x223 = 14U;
	int8_t x224 = INT8_MAX;
	volatile int32_t t37 = -2672;

    t37 = ((x221+x222)>(x223*x224));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x229 = 3301LLU;
	static uint16_t x230 = 14U;
	uint8_t x231 = 0U;
	int8_t x232 = INT8_MAX;
	volatile int32_t t38 = 57557299;

    t38 = ((x229+x230)>(x231*x232));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x237 = INT8_MAX;
	static uint32_t x240 = UINT32_MAX;
	int32_t t39 = 9;

    t39 = ((x237+x238)>(x239*x240));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x241 = 97U;
	static int8_t x244 = -1;
	volatile int32_t t40 = -76499838;

    t40 = ((x241+x242)>(x243*x244));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x245 = 0U;
	uint32_t x246 = 161U;
	volatile int64_t x247 = -1LL;
	static int16_t x248 = INT16_MIN;

    t41 = ((x245+x246)>(x247*x248));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x249 = UINT8_MAX;
	int32_t x250 = INT32_MIN;
	volatile int64_t x251 = -1LL;
	int8_t x252 = INT8_MIN;
	volatile int32_t t42 = 10523;

    t42 = ((x249+x250)>(x251*x252));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x269 = 62U;
	int8_t x270 = -11;
	uint8_t x271 = UINT8_MAX;
	int8_t x272 = INT8_MAX;
	volatile int32_t t43 = -304241769;

    t43 = ((x269+x270)>(x271*x272));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x273 = 2036;
	int8_t x274 = -6;
	int32_t t44 = 85;

    t44 = ((x273+x274)>(x275*x276));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x277 = INT32_MIN;
	int8_t x278 = 4;
	uint64_t x279 = 402318188LLU;
	int8_t x280 = INT8_MIN;
	volatile int32_t t45 = -16;

    t45 = ((x277+x278)>(x279*x280));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x281 = -1;
	volatile int8_t x283 = INT8_MAX;
	volatile int32_t t46 = -28186721;

    t46 = ((x281+x282)>(x283*x284));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x285 = INT64_MIN;
	uint32_t x286 = UINT32_MAX;
	volatile int8_t x287 = INT8_MAX;
	volatile int8_t x288 = INT8_MIN;
	int32_t t47 = -14793;

    t47 = ((x285+x286)>(x287*x288));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x289 = INT8_MAX;
	static int32_t x290 = -10;
	uint64_t x291 = UINT64_MAX;

    t48 = ((x289+x290)>(x291*x292));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x293 = 4115U;
	static int32_t t49 = -214;

    t49 = ((x293+x294)>(x295*x296));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x309 = INT8_MIN;
	uint32_t x311 = 12U;
	uint32_t x312 = 6867537U;

    t50 = ((x309+x310)>(x311*x312));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x314 = INT16_MAX;
	uint8_t x315 = UINT8_MAX;
	static int64_t x316 = -8027149LL;
	int32_t t51 = -6751;

    t51 = ((x313+x314)>(x315*x316));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x321 = INT8_MIN;
	volatile uint32_t x322 = UINT32_MAX;
	int32_t x324 = -1;

    t52 = ((x321+x322)>(x323*x324));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x329 = UINT16_MAX;
	uint16_t x330 = UINT16_MAX;
	int64_t x331 = -1LL;
	uint64_t x332 = 3384764598LLU;
	int32_t t53 = -1;

    t53 = ((x329+x330)>(x331*x332));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x341 = -1;
	int32_t x342 = INT32_MAX;
	int8_t x344 = 5;
	volatile int32_t t54 = 1;

    t54 = ((x341+x342)>(x343*x344));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x361 = -9147460;
	volatile uint32_t x362 = 0U;
	static volatile int8_t x363 = INT8_MIN;
	uint32_t x364 = UINT32_MAX;
	volatile int32_t t55 = 6818349;

    t55 = ((x361+x362)>(x363*x364));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x369 = 1U;
	int32_t x370 = -10;
	uint16_t x371 = 16206U;
	static int16_t x372 = -1;
	int32_t t56 = -26775;

    t56 = ((x369+x370)>(x371*x372));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x373 = INT16_MIN;
	static uint64_t x374 = 2232108089131692LLU;
	static uint16_t x375 = UINT16_MAX;
	uint32_t x376 = UINT32_MAX;

    t57 = ((x373+x374)>(x375*x376));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x377 = -498754902;
	static int64_t x378 = -1LL;
	volatile int16_t x379 = INT16_MIN;

    t58 = ((x377+x378)>(x379*x380));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x381 = INT8_MIN;
	static uint64_t x383 = 168853207LLU;
	static volatile int32_t t59 = -3554177;

    t59 = ((x381+x382)>(x383*x384));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x392 = INT16_MIN;
	int32_t t60 = 3633467;

    t60 = ((x389+x390)>(x391*x392));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x393 = -1LL;
	uint16_t x394 = 233U;
	volatile int64_t x395 = INT64_MIN;
	uint64_t x396 = UINT64_MAX;
	int32_t t61 = 29305;

    t61 = ((x393+x394)>(x395*x396));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x397 = 1U;
	int8_t x398 = 1;
	int8_t x399 = INT8_MIN;
	int8_t x400 = 0;
	static int32_t t62 = -15;

    t62 = ((x397+x398)>(x399*x400));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x401 = -21996563621LL;
	volatile int64_t x402 = INT64_MAX;
	volatile int32_t t63 = 100896;

    t63 = ((x401+x402)>(x403*x404));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x406 = -1;
	int8_t x407 = -1;
	static int64_t x408 = -1LL;
	int32_t t64 = 1;

    t64 = ((x405+x406)>(x407*x408));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x414 = INT16_MAX;
	int16_t x416 = 26;
	volatile int32_t t65 = 34507435;

    t65 = ((x413+x414)>(x415*x416));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x421 = 470U;
	static int8_t x422 = INT8_MAX;
	static uint32_t x423 = 1314395367U;
	int16_t x424 = -2;

    t66 = ((x421+x422)>(x423*x424));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x425 = -1;
	volatile int64_t x426 = INT64_MAX;
	int32_t x428 = -1;
	volatile int32_t t67 = -62;

    t67 = ((x425+x426)>(x427*x428));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x429 = 14;
	int64_t x430 = INT64_MIN;
	volatile int16_t x431 = 19;
	static int32_t x432 = 4495;
	volatile int32_t t68 = 691083432;

    t68 = ((x429+x430)>(x431*x432));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x433 = -1;
	int64_t x435 = -305886075882LL;
	int32_t t69 = 70;

    t69 = ((x433+x434)>(x435*x436));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x437 = 1;
	int16_t x438 = -1;
	int16_t x440 = -1;
	volatile int32_t t70 = 34452;

    t70 = ((x437+x438)>(x439*x440));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x441 = 0;
	int32_t x442 = -36921104;
	int16_t x443 = INT16_MAX;
	volatile uint32_t x444 = 4254170U;
	volatile int32_t t71 = -519;

    t71 = ((x441+x442)>(x443*x444));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x445 = INT32_MAX;
	int16_t x446 = INT16_MIN;
	static uint16_t x447 = 136U;
	static uint16_t x448 = 374U;

    t72 = ((x445+x446)>(x447*x448));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x454 = 1598LL;
	static int8_t x455 = INT8_MAX;
	volatile uint8_t x456 = 4U;

    t73 = ((x453+x454)>(x455*x456));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x473 = 250401;
	int8_t x475 = -8;
	uint64_t x476 = 57875581456014LLU;
	int32_t t74 = 30299267;

    t74 = ((x473+x474)>(x475*x476));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x477 = 6169766LLU;
	int16_t x478 = INT16_MIN;
	int64_t x479 = -1LL;
	volatile int64_t x480 = -1LL;
	static int32_t t75 = -25804965;

    t75 = ((x477+x478)>(x479*x480));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x481 = 3960616LLU;
	int64_t x482 = -1LL;
	int32_t x483 = INT32_MAX;
	uint32_t x484 = 454U;
	volatile int32_t t76 = 7;

    t76 = ((x481+x482)>(x483*x484));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x501 = 7U;
	int64_t x502 = -1LL;
	static uint64_t x503 = 50580LLU;
	uint64_t x504 = 492LLU;
	int32_t t77 = 2926;

    t77 = ((x501+x502)>(x503*x504));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x509 = INT8_MIN;
	static volatile int64_t x510 = 4900474LL;
	int8_t x511 = 1;
	static int32_t t78 = 73230026;

    t78 = ((x509+x510)>(x511*x512));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x513 = 412;
	volatile uint64_t x514 = 1765966734861513LLU;
	volatile int64_t x515 = -169782LL;
	static int16_t x516 = 1;

    t79 = ((x513+x514)>(x515*x516));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x525 = 358U;
	static volatile int16_t x526 = -822;
	uint8_t x527 = 6U;
	volatile int8_t x528 = -23;
	static volatile int32_t t80 = -844;

    t80 = ((x525+x526)>(x527*x528));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x529 = 6348;
	int16_t x530 = INT16_MIN;
	static uint16_t x532 = 1U;
	volatile int32_t t81 = 14316118;

    t81 = ((x529+x530)>(x531*x532));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x533 = INT32_MIN;
	uint64_t x535 = UINT64_MAX;
	uint64_t x536 = 362327563LLU;
	volatile int32_t t82 = 103713;

    t82 = ((x533+x534)>(x535*x536));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x537 = 512U;
	uint16_t x538 = UINT16_MAX;
	static int16_t x539 = INT16_MIN;

    t83 = ((x537+x538)>(x539*x540));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x545 = 0;
	volatile int32_t t84 = -115478561;

    t84 = ((x545+x546)>(x547*x548));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x549 = INT8_MIN;
	int8_t x551 = -8;
	int32_t t85 = -129883342;

    t85 = ((x549+x550)>(x551*x552));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x553 = 115U;
	int64_t x555 = 1920344256LL;
	int32_t t86 = 77;

    t86 = ((x553+x554)>(x555*x556));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x561 = INT64_MIN;
	volatile uint16_t x562 = 15U;
	int16_t x563 = 18;
	int8_t x564 = -1;
	int32_t t87 = -30;

    t87 = ((x561+x562)>(x563*x564));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x565 = -5711LL;
	int8_t x566 = -1;
	uint8_t x567 = 10U;
	int64_t x568 = -1115140876619LL;
	int32_t t88 = 19599;

    t88 = ((x565+x566)>(x567*x568));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint64_t x569 = UINT64_MAX;
	volatile int16_t x570 = INT16_MAX;
	int8_t x571 = 30;
	volatile int16_t x572 = -33;
	static int32_t t89 = -2;

    t89 = ((x569+x570)>(x571*x572));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x573 = UINT16_MAX;
	uint32_t x574 = UINT32_MAX;
	int8_t x575 = -1;
	int16_t x576 = INT16_MIN;
	static int32_t t90 = -8142;

    t90 = ((x573+x574)>(x575*x576));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x581 = -1;
	int64_t x582 = -1LL;
	volatile uint8_t x583 = UINT8_MAX;
	volatile int16_t x584 = INT16_MIN;

    t91 = ((x581+x582)>(x583*x584));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x585 = 1U;
	int16_t x586 = INT16_MIN;
	uint16_t x587 = 0U;
	int64_t x588 = INT64_MIN;

    t92 = ((x585+x586)>(x587*x588));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x589 = UINT64_MAX;
	int32_t x590 = -1;
	volatile uint32_t x591 = 16016U;
	static uint32_t x592 = 97599U;
	int32_t t93 = 272576;

    t93 = ((x589+x590)>(x591*x592));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x597 = 10154U;
	int8_t x598 = INT8_MAX;
	uint32_t x599 = 739890827U;
	volatile int8_t x600 = 1;
	static int32_t t94 = -107;

    t94 = ((x597+x598)>(x599*x600));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x601 = -12577;
	int8_t x602 = INT8_MIN;
	int8_t x603 = INT8_MIN;
	uint8_t x604 = 32U;
	volatile int32_t t95 = -259765042;

    t95 = ((x601+x602)>(x603*x604));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x607 = 12212226U;
	int64_t x608 = -1LL;
	volatile int32_t t96 = -40;

    t96 = ((x605+x606)>(x607*x608));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x618 = 0U;
	uint32_t x620 = UINT32_MAX;

    t97 = ((x617+x618)>(x619*x620));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint16_t x621 = 957U;
	int16_t x622 = 176;
	int8_t x623 = INT8_MIN;
	volatile int32_t t98 = 7369;

    t98 = ((x621+x622)>(x623*x624));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x625 = INT32_MIN;
	int64_t x626 = 51091373289698LL;
	int16_t x628 = -1;
	int32_t t99 = 4;

    t99 = ((x625+x626)>(x627*x628));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x629 = INT16_MAX;
	int16_t x630 = INT16_MIN;
	volatile uint32_t x631 = 1U;
	int64_t x632 = -1LL;
	static volatile int32_t t100 = 18;

    t100 = ((x629+x630)>(x631*x632));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x633 = 1LLU;
	int8_t x635 = INT8_MIN;
	volatile uint16_t x636 = 5U;
	static volatile int32_t t101 = 452;

    t101 = ((x633+x634)>(x635*x636));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x641 = 45U;
	int64_t x642 = 268LL;
	uint64_t x643 = UINT64_MAX;
	uint8_t x644 = UINT8_MAX;

    t102 = ((x641+x642)>(x643*x644));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x645 = INT8_MIN;
	int16_t x646 = INT16_MAX;
	static int16_t x648 = -1;
	volatile int32_t t103 = -460234;

    t103 = ((x645+x646)>(x647*x648));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x649 = 44;
	uint8_t x650 = 3U;
	uint8_t x651 = 0U;
	int32_t x652 = INT32_MAX;

    t104 = ((x649+x650)>(x651*x652));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x662 = INT16_MIN;
	uint64_t x663 = UINT64_MAX;
	int16_t x664 = -1;
	int32_t t105 = -29106468;

    t105 = ((x661+x662)>(x663*x664));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x665 = -2662;
	uint32_t x667 = 243U;
	static int8_t x668 = -1;
	int32_t t106 = -5518983;

    t106 = ((x665+x666)>(x667*x668));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint64_t x669 = UINT64_MAX;
	int32_t x670 = INT32_MIN;
	int16_t x672 = 11548;
	volatile int32_t t107 = 228787816;

    t107 = ((x669+x670)>(x671*x672));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x674 = -1LL;
	static int32_t x675 = -1;
	int8_t x676 = -4;
	volatile int32_t t108 = -496364182;

    t108 = ((x673+x674)>(x675*x676));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x677 = INT64_MIN;
	volatile uint16_t x678 = UINT16_MAX;
	int64_t x679 = 1775755822LL;
	int32_t t109 = -164060995;

    t109 = ((x677+x678)>(x679*x680));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x682 = UINT64_MAX;
	static int16_t x683 = 440;
	uint8_t x684 = 14U;
	volatile int32_t t110 = 469612789;

    t110 = ((x681+x682)>(x683*x684));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile uint32_t x686 = 30U;

    t111 = ((x685+x686)>(x687*x688));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int64_t x691 = -1LL;
	int64_t x692 = -1LL;
	volatile int32_t t112 = -60385;

    t112 = ((x689+x690)>(x691*x692));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x694 = 1;
	static int16_t x695 = INT16_MIN;
	volatile int32_t t113 = 131477370;

    t113 = ((x693+x694)>(x695*x696));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x697 = UINT16_MAX;
	int32_t x698 = 58176002;
	volatile int64_t x699 = 5571306585966585LL;
	static int32_t t114 = 16860;

    t114 = ((x697+x698)>(x699*x700));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x702 = -42;
	int32_t x703 = -1;
	int64_t x704 = INT64_MAX;
	int32_t t115 = 0;

    t115 = ((x701+x702)>(x703*x704));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int32_t x705 = 143569399;
	static uint8_t x708 = 19U;
	static volatile int32_t t116 = -484803261;

    t116 = ((x705+x706)>(x707*x708));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x709 = INT16_MAX;
	static volatile int8_t x711 = INT8_MIN;
	int32_t t117 = -721524956;

    t117 = ((x709+x710)>(x711*x712));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x718 = 6;
	static volatile uint64_t x719 = 18736936LLU;
	int64_t x720 = -439LL;
	int32_t t118 = 4028;

    t118 = ((x717+x718)>(x719*x720));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint8_t x722 = 0U;
	uint16_t x723 = UINT16_MAX;
	uint16_t x724 = 0U;
	int32_t t119 = 28499442;

    t119 = ((x721+x722)>(x723*x724));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x726 = INT8_MAX;
	int16_t x727 = INT16_MIN;
	int32_t t120 = 3;

    t120 = ((x725+x726)>(x727*x728));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x749 = -1;
	volatile uint16_t x750 = 10718U;
	int16_t x751 = -1;
	volatile int32_t t121 = 4;

    t121 = ((x749+x750)>(x751*x752));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x754 = 65949787395LLU;
	static int32_t x755 = 58955;
	uint8_t x756 = 6U;
	int32_t t122 = -167789;

    t122 = ((x753+x754)>(x755*x756));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x757 = INT16_MIN;
	uint16_t x758 = 13014U;
	int64_t x759 = -11223LL;
	int16_t x760 = 0;
	volatile int32_t t123 = -2281;

    t123 = ((x757+x758)>(x759*x760));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x763 = 15U;
	volatile int16_t x764 = INT16_MIN;
	volatile int32_t t124 = 1481;

    t124 = ((x761+x762)>(x763*x764));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x773 = UINT16_MAX;
	int32_t x775 = -5;
	uint8_t x776 = UINT8_MAX;
	int32_t t125 = 18;

    t125 = ((x773+x774)>(x775*x776));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x789 = 18U;
	int16_t x790 = INT16_MIN;
	int16_t x791 = -1;
	int8_t x792 = 5;
	int32_t t126 = 2162;

    t126 = ((x789+x790)>(x791*x792));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x805 = 2496U;
	int64_t x806 = INT64_MIN;
	uint16_t x807 = 9216U;
	uint16_t x808 = UINT16_MAX;
	volatile int32_t t127 = -91;

    t127 = ((x805+x806)>(x807*x808));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x810 = -221120LL;
	int64_t x811 = INT64_MAX;
	int8_t x812 = 0;

    t128 = ((x809+x810)>(x811*x812));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x829 = INT8_MIN;
	uint32_t x830 = UINT32_MAX;
	volatile uint64_t x831 = 26937LLU;
	int64_t x832 = INT64_MIN;

    t129 = ((x829+x830)>(x831*x832));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x837 = INT32_MIN;
	uint8_t x838 = 28U;
	uint16_t x839 = 120U;
	int8_t x840 = INT8_MIN;
	volatile int32_t t130 = -1;

    t130 = ((x837+x838)>(x839*x840));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x841 = INT64_MIN;
	volatile uint64_t x842 = UINT64_MAX;
	volatile int64_t x843 = -175053055083LL;
	int64_t x844 = -24LL;

    t131 = ((x841+x842)>(x843*x844));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x845 = INT32_MIN;
	int8_t x846 = INT8_MAX;
	int8_t x847 = INT8_MAX;
	static int16_t x848 = INT16_MAX;
	int32_t t132 = -319017;

    t132 = ((x845+x846)>(x847*x848));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int32_t x849 = -878235926;
	uint64_t x850 = 123517391556LLU;
	static uint64_t x851 = UINT64_MAX;
	int32_t t133 = 74583;

    t133 = ((x849+x850)>(x851*x852));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x853 = -1;
	uint32_t x855 = 87306800U;
	volatile int64_t x856 = -1LL;

    t134 = ((x853+x854)>(x855*x856));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x857 = -6;
	uint8_t x858 = 0U;
	volatile int8_t x859 = 2;
	int8_t x860 = -38;
	int32_t t135 = -3;

    t135 = ((x857+x858)>(x859*x860));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x861 = -1LL;
	volatile int64_t x862 = 385LL;
	uint32_t x863 = 389657125U;
	int8_t x864 = INT8_MIN;
	volatile int32_t t136 = 6264732;

    t136 = ((x861+x862)>(x863*x864));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x865 = INT8_MAX;
	uint32_t x866 = 1488065U;
	uint64_t x867 = 624LLU;
	static int32_t x868 = INT32_MIN;
	static int32_t t137 = -185620;

    t137 = ((x865+x866)>(x867*x868));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x877 = 58U;
	uint32_t x878 = UINT32_MAX;
	static int8_t x880 = INT8_MIN;
	int32_t t138 = 235198;

    t138 = ((x877+x878)>(x879*x880));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x881 = UINT64_MAX;
	volatile int16_t x884 = INT16_MIN;
	static volatile int32_t t139 = -11;

    t139 = ((x881+x882)>(x883*x884));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x886 = INT16_MIN;
	uint32_t x887 = UINT32_MAX;
	int16_t x888 = INT16_MIN;
	volatile int32_t t140 = -62373;

    t140 = ((x885+x886)>(x887*x888));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x893 = -104931;
	static int16_t x894 = INT16_MIN;
	uint64_t x895 = 7989973252LLU;
	volatile uint16_t x896 = 542U;
	int32_t t141 = 2545;

    t141 = ((x893+x894)>(x895*x896));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x897 = -386120;
	uint64_t x898 = UINT64_MAX;
	uint32_t x899 = 5739336U;
	int8_t x900 = INT8_MAX;
	volatile int32_t t142 = -1;

    t142 = ((x897+x898)>(x899*x900));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x901 = INT8_MIN;
	uint8_t x904 = 3U;
	static volatile int32_t t143 = -147;

    t143 = ((x901+x902)>(x903*x904));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint64_t x906 = 248125418LLU;
	int32_t x907 = INT32_MIN;
	static volatile uint64_t x908 = 4736481LLU;
	int32_t t144 = 40700;

    t144 = ((x905+x906)>(x907*x908));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x909 = -1;
	volatile int8_t x910 = INT8_MIN;
	static volatile int64_t x911 = 1LL;
	int8_t x912 = -1;
	volatile int32_t t145 = 13468331;

    t145 = ((x909+x910)>(x911*x912));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x913 = UINT32_MAX;
	static int32_t x914 = 6;
	int32_t x915 = -43556;
	uint8_t x916 = UINT8_MAX;
	volatile int32_t t146 = 672108;

    t146 = ((x913+x914)>(x915*x916));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x925 = INT8_MIN;
	uint64_t x926 = 15787LLU;
	static uint16_t x927 = 233U;
	volatile int32_t t147 = 112876;

    t147 = ((x925+x926)>(x927*x928));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x933 = 3U;
	int16_t x934 = INT16_MIN;
	uint8_t x935 = 23U;
	uint16_t x936 = UINT16_MAX;
	static volatile int32_t t148 = 36087802;

    t148 = ((x933+x934)>(x935*x936));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x938 = -1;

    t149 = ((x937+x938)>(x939*x940));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x941 = 530015379215355355LLU;
	int16_t x942 = -3086;
	volatile uint8_t x943 = 12U;
	volatile int16_t x944 = INT16_MIN;
	int32_t t150 = -1;

    t150 = ((x941+x942)>(x943*x944));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x945 = INT64_MIN;
	static int8_t x948 = INT8_MIN;
	volatile int32_t t151 = 3219769;

    t151 = ((x945+x946)>(x947*x948));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x949 = INT8_MAX;
	static int64_t x950 = 766LL;
	uint16_t x951 = 243U;
	int16_t x952 = -1;
	int32_t t152 = 13936992;

    t152 = ((x949+x950)>(x951*x952));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x957 = -1LL;
	int8_t x959 = -1;
	static volatile int32_t t153 = 1;

    t153 = ((x957+x958)>(x959*x960));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x965 = -1LL;
	static volatile int16_t x966 = -411;
	int64_t x967 = -1LL;
	int16_t x968 = -7598;
	volatile int32_t t154 = -51;

    t154 = ((x965+x966)>(x967*x968));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x969 = 24516715LLU;
	volatile int16_t x970 = INT16_MAX;
	int16_t x971 = -87;
	int8_t x972 = 15;
	volatile int32_t t155 = -29134;

    t155 = ((x969+x970)>(x971*x972));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x973 = 401LL;
	int32_t x975 = 104795411;
	int8_t x976 = -3;
	volatile int32_t t156 = -3;

    t156 = ((x973+x974)>(x975*x976));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x977 = UINT8_MAX;
	uint8_t x978 = 0U;
	uint8_t x979 = 6U;

    t157 = ((x977+x978)>(x979*x980));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x981 = 450000;
	volatile int32_t x982 = -1;
	uint8_t x983 = 81U;
	int16_t x984 = INT16_MIN;

    t158 = ((x981+x982)>(x983*x984));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x989 = 231007159075713328LLU;
	volatile int16_t x990 = -1;
	int8_t x992 = -1;
	volatile int32_t t159 = -760;

    t159 = ((x989+x990)>(x991*x992));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x994 = 32775253448300LL;
	volatile int64_t x996 = 5804LL;
	int32_t t160 = -91967;

    t160 = ((x993+x994)>(x995*x996));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x1007 = UINT8_MAX;
	static int32_t t161 = -191;

    t161 = ((x1005+x1006)>(x1007*x1008));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x1009 = INT8_MIN;
	int8_t x1011 = INT8_MIN;
	static int8_t x1012 = INT8_MIN;
	int32_t t162 = -478573;

    t162 = ((x1009+x1010)>(x1011*x1012));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint32_t x1017 = 170952U;
	int16_t x1018 = -1;
	volatile uint16_t x1019 = UINT16_MAX;
	int16_t x1020 = 7964;

    t163 = ((x1017+x1018)>(x1019*x1020));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x1021 = UINT64_MAX;
	static uint16_t x1022 = 127U;
	int8_t x1023 = 3;
	int32_t t164 = -3906;

    t164 = ((x1021+x1022)>(x1023*x1024));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint8_t x1025 = 13U;
	int32_t x1026 = INT32_MIN;
	volatile int32_t x1027 = 100;
	int64_t x1028 = -43265LL;

    t165 = ((x1025+x1026)>(x1027*x1028));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x1033 = 121U;
	uint8_t x1035 = 0U;
	int16_t x1036 = INT16_MIN;
	volatile int32_t t166 = 1482253;

    t166 = ((x1033+x1034)>(x1035*x1036));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x1041 = 0U;
	int16_t x1043 = INT16_MIN;
	int16_t x1044 = INT16_MAX;
	volatile int32_t t167 = -124;

    t167 = ((x1041+x1042)>(x1043*x1044));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x1045 = 12659;
	int64_t x1046 = INT64_MIN;
	volatile int16_t x1047 = INT16_MIN;
	int8_t x1048 = 55;
	int32_t t168 = -35697;

    t168 = ((x1045+x1046)>(x1047*x1048));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x1050 = -1LL;
	static int16_t x1052 = -1;
	static volatile int32_t t169 = 294168;

    t169 = ((x1049+x1050)>(x1051*x1052));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x1055 = INT16_MIN;
	volatile int16_t x1056 = INT16_MIN;
	volatile int32_t t170 = -248700242;

    t170 = ((x1053+x1054)>(x1055*x1056));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x1057 = 35;
	uint16_t x1058 = UINT16_MAX;
	int8_t x1059 = INT8_MIN;
	volatile int16_t x1060 = INT16_MIN;
	volatile int32_t t171 = -32619;

    t171 = ((x1057+x1058)>(x1059*x1060));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x1065 = 113609684U;
	uint8_t x1066 = 16U;
	int8_t x1067 = -1;
	int16_t x1068 = INT16_MAX;
	int32_t t172 = 976049785;

    t172 = ((x1065+x1066)>(x1067*x1068));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x1081 = 772715555683376LLU;
	static uint64_t x1082 = 75441423211109LLU;
	uint64_t x1083 = 7783298474LLU;
	static uint64_t x1084 = 353092022LLU;
	volatile int32_t t173 = -24;

    t173 = ((x1081+x1082)>(x1083*x1084));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x1085 = 772303;
	uint64_t x1086 = 10962498130425LLU;
	uint32_t x1087 = 9U;
	static volatile int16_t x1088 = INT16_MAX;
	int32_t t174 = -68142;

    t174 = ((x1085+x1086)>(x1087*x1088));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint64_t x1089 = 201LLU;
	int16_t x1090 = INT16_MIN;
	static int16_t x1091 = -1;
	volatile int16_t x1092 = INT16_MAX;

    t175 = ((x1089+x1090)>(x1091*x1092));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x1102 = 10955U;
	int8_t x1103 = 4;
	int8_t x1104 = -1;
	volatile int32_t t176 = 404;

    t176 = ((x1101+x1102)>(x1103*x1104));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x1105 = UINT32_MAX;
	static int32_t x1106 = INT32_MIN;
	int16_t x1108 = INT16_MIN;
	static int32_t t177 = 33;

    t177 = ((x1105+x1106)>(x1107*x1108));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x1117 = UINT64_MAX;
	int16_t x1118 = INT16_MIN;
	static int32_t x1120 = INT32_MIN;
	volatile int32_t t178 = -269518931;

    t178 = ((x1117+x1118)>(x1119*x1120));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x1121 = INT8_MIN;
	uint8_t x1122 = 28U;
	volatile uint64_t x1123 = UINT64_MAX;
	uint32_t x1124 = UINT32_MAX;
	static volatile int32_t t179 = 27103;

    t179 = ((x1121+x1122)>(x1123*x1124));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x1125 = INT16_MIN;
	int16_t x1126 = INT16_MIN;
	volatile uint64_t x1127 = 8LLU;
	int16_t x1128 = 9453;
	int32_t t180 = 162997803;

    t180 = ((x1125+x1126)>(x1127*x1128));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x1129 = INT8_MIN;
	int16_t x1130 = INT16_MAX;
	int16_t x1131 = 363;
	volatile int32_t t181 = 67793270;

    t181 = ((x1129+x1130)>(x1131*x1132));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint16_t x1134 = 5155U;
	uint8_t x1135 = 0U;
	int32_t x1136 = -3847;
	volatile int32_t t182 = -16148;

    t182 = ((x1133+x1134)>(x1135*x1136));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x1141 = 6;
	static volatile int32_t x1143 = -1017143721;
	int8_t x1144 = 0;
	volatile int32_t t183 = 8289027;

    t183 = ((x1141+x1142)>(x1143*x1144));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1145 = INT8_MAX;
	volatile int16_t x1146 = -15243;
	int16_t x1147 = INT16_MIN;
	int8_t x1148 = -1;
	volatile int32_t t184 = -9591;

    t184 = ((x1145+x1146)>(x1147*x1148));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x1150 = UINT32_MAX;
	int16_t x1151 = INT16_MAX;
	static volatile int8_t x1152 = INT8_MAX;

    t185 = ((x1149+x1150)>(x1151*x1152));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint8_t x1156 = 0U;
	volatile int32_t t186 = -29;

    t186 = ((x1153+x1154)>(x1155*x1156));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint32_t x1157 = 982589309U;
	uint16_t x1158 = 0U;
	int32_t x1159 = -1;
	int32_t x1160 = -6553486;
	int32_t t187 = -101899958;

    t187 = ((x1157+x1158)>(x1159*x1160));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1162 = -1;
	volatile uint64_t x1164 = 906797460LLU;
	static int32_t t188 = 37;

    t188 = ((x1161+x1162)>(x1163*x1164));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1165 = 195;
	static uint16_t x1166 = 9U;
	volatile int8_t x1168 = INT8_MAX;
	volatile int32_t t189 = -378;

    t189 = ((x1165+x1166)>(x1167*x1168));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1169 = INT64_MIN;
	uint32_t x1170 = 791572U;
	uint16_t x1171 = UINT16_MAX;
	static int16_t x1172 = INT16_MIN;
	int32_t t190 = 39;

    t190 = ((x1169+x1170)>(x1171*x1172));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x1173 = 63756LLU;
	static int16_t x1174 = INT16_MIN;
	static volatile int8_t x1175 = 3;
	volatile int16_t x1176 = 7268;
	static int32_t t191 = 0;

    t191 = ((x1173+x1174)>(x1175*x1176));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x1181 = UINT64_MAX;
	int64_t x1182 = INT64_MIN;
	int32_t x1183 = 3097351;
	uint32_t x1184 = 15U;
	static volatile int32_t t192 = 2833;

    t192 = ((x1181+x1182)>(x1183*x1184));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x1189 = INT8_MIN;
	int8_t x1190 = INT8_MAX;
	static volatile int64_t x1191 = -1LL;
	int64_t x1192 = -454119LL;
	static volatile int32_t t193 = -519221484;

    t193 = ((x1189+x1190)>(x1191*x1192));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x1193 = UINT64_MAX;
	int64_t x1194 = INT64_MIN;
	static uint32_t x1195 = 374646U;
	uint64_t x1196 = 372356696112LLU;

    t194 = ((x1193+x1194)>(x1195*x1196));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1197 = 1358940;
	int64_t x1198 = -30485LL;
	static int32_t x1199 = INT32_MIN;
	int32_t x1200 = 0;
	static volatile int32_t t195 = -37416838;

    t195 = ((x1197+x1198)>(x1199*x1200));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x1213 = UINT8_MAX;
	volatile int16_t x1215 = -1;
	static int32_t t196 = -214237;

    t196 = ((x1213+x1214)>(x1215*x1216));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int32_t x1218 = 3;
	uint64_t x1219 = UINT64_MAX;
	uint16_t x1220 = 29923U;

    t197 = ((x1217+x1218)>(x1219*x1220));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1221 = INT8_MIN;
	int16_t x1222 = INT16_MAX;
	int16_t x1223 = 2197;
	uint16_t x1224 = UINT16_MAX;
	int32_t t198 = 66524;

    t198 = ((x1221+x1222)>(x1223*x1224));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x1225 = 110U;
	volatile int16_t x1227 = -13;
	volatile uint16_t x1228 = 4880U;

    t199 = ((x1225+x1226)>(x1227*x1228));

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

