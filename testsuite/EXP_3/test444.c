
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

static int64_t x2 = 76732164379LL;
int32_t x5 = -242599;
int32_t t1 = 4;
int8_t x18 = INT8_MIN;
static uint16_t x53 = UINT16_MAX;
int16_t x59 = INT16_MIN;
volatile int8_t x60 = -58;
volatile uint8_t x64 = 1U;
uint8_t x66 = 12U;
uint8_t x71 = 5U;
volatile int32_t t10 = 42;
static int16_t x73 = 535;
int64_t x74 = INT64_MIN;
int32_t x75 = 2940793;
int8_t x77 = -1;
int8_t x78 = INT8_MAX;
int32_t t13 = 5783;
uint32_t x89 = UINT32_MAX;
volatile int64_t x90 = INT64_MAX;
volatile int32_t t15 = 28464275;
uint16_t x94 = 8943U;
static volatile uint64_t x100 = UINT64_MAX;
int32_t t17 = 17814951;
volatile int32_t t18 = -2054004;
uint8_t x117 = 20U;
int32_t t20 = 231842375;
int16_t x123 = 5942;
static volatile int32_t t21 = 58;
uint64_t x132 = UINT64_MAX;
int32_t t22 = 318687;
int32_t t23 = -745252;
int32_t t24 = 45604;
int32_t x151 = INT32_MIN;
uint64_t x171 = 25182LLU;
uint16_t x180 = 28U;
volatile int32_t t28 = 704031;
static volatile uint64_t x187 = 208949231812LLU;
uint32_t x198 = 118U;
volatile uint32_t x205 = 355473805U;
uint16_t x207 = 188U;
int64_t x214 = 1352098688335238LL;
static int32_t t36 = -282;
volatile uint8_t x229 = 0U;
int32_t t39 = -2;
static int8_t x245 = -1;
int8_t x256 = -1;
volatile int8_t x263 = INT8_MAX;
volatile int32_t x267 = INT32_MAX;
uint64_t x268 = 1416LLU;
static int8_t x269 = INT8_MAX;
int32_t x274 = 827;
static uint64_t x276 = 2929522371026843LLU;
int8_t x283 = -1;
static int32_t t49 = -27767106;
int8_t x293 = -1;
static int32_t x294 = INT32_MIN;
int8_t x296 = 1;
volatile int32_t x329 = 1961;
int8_t x331 = INT8_MIN;
int32_t t55 = 23;
int32_t t57 = 8;
int32_t x343 = INT32_MIN;
volatile int32_t t58 = 2640285;
int16_t x346 = INT16_MIN;
int16_t x351 = 101;
uint32_t x357 = 46U;
int8_t x365 = INT8_MAX;
int8_t x367 = -1;
int8_t x368 = 0;
static int16_t x378 = INT16_MIN;
int32_t x379 = 275151107;
int16_t x381 = INT16_MIN;
int16_t x384 = -1;
int64_t x386 = 340LL;
static uint64_t x388 = 1971674669640566481LLU;
static int32_t t65 = -2584318;
volatile int64_t x389 = -1LL;
static int32_t t67 = 7890321;
volatile uint16_t x410 = UINT16_MAX;
static volatile int32_t x411 = -1;
static uint16_t x416 = 513U;
int32_t t70 = 1;
uint32_t x435 = 2159980U;
int16_t x446 = INT16_MIN;
uint64_t x451 = UINT64_MAX;
static uint64_t x457 = 315569400118763LLU;
volatile int32_t t75 = 540193;
uint8_t x461 = 7U;
int8_t x462 = 1;
int32_t x463 = 6267;
int32_t t77 = -79;
static int16_t x490 = INT16_MIN;
int32_t x491 = -1;
int32_t t80 = 6238784;
int16_t x500 = INT16_MIN;
volatile int32_t t82 = 397020859;
uint8_t x503 = 91U;
static uint16_t x504 = UINT16_MAX;
volatile int32_t t83 = 0;
int16_t x515 = INT16_MAX;
static int32_t t85 = 81;
int8_t x525 = INT8_MIN;
int8_t x526 = INT8_MIN;
int32_t x530 = INT32_MAX;
uint8_t x531 = 41U;
int32_t x532 = 509;
uint32_t x556 = UINT32_MAX;
uint32_t x559 = UINT32_MAX;
int8_t x560 = 5;
static int16_t x562 = 1282;
static int32_t x567 = -107;
volatile int64_t x568 = -1LL;
int32_t x577 = 153806;
volatile int8_t x587 = INT8_MIN;
uint32_t x589 = 296593U;
int16_t x593 = -1;
uint64_t x595 = 36LLU;
static volatile int16_t x597 = INT16_MIN;
uint8_t x602 = 39U;
static uint8_t x604 = 30U;
int32_t t102 = 121741;
int32_t x618 = INT32_MIN;
int32_t x622 = -1;
int8_t x624 = INT8_MAX;
int16_t x628 = -1;
volatile int32_t t107 = 36722;
static int64_t x629 = INT64_MAX;
volatile int8_t x644 = 13;
int16_t x667 = -1012;
static int64_t x670 = -494LL;
static uint16_t x682 = 254U;
uint8_t x684 = 26U;
uint8_t x693 = 5U;
uint8_t x697 = 23U;
static uint64_t x698 = 11323390531193895LLU;
uint32_t x700 = 13056423U;
int8_t x704 = -1;
volatile int64_t x712 = -1LL;
static int32_t x721 = -1;
static int32_t x726 = INT32_MIN;
int16_t x731 = INT16_MIN;
volatile int32_t x743 = -1;
int32_t x751 = -1;
int16_t x762 = 1334;
static volatile int8_t x764 = 1;
volatile int32_t t132 = 60029;
int32_t t135 = 43268668;
uint64_t x779 = 30132275149138196LLU;
uint16_t x781 = 959U;
static uint16_t x784 = UINT16_MAX;
int32_t x785 = -47;
int32_t t139 = -14610;
uint64_t x795 = 12122878LLU;
uint8_t x796 = UINT8_MAX;
int32_t x802 = -49;
int8_t x803 = -1;
int16_t x804 = -1;
volatile int16_t x818 = INT16_MAX;
uint32_t x826 = 13U;
static int32_t t145 = -391121;
static int32_t x848 = -1;
static int32_t x854 = -1;
uint64_t x856 = UINT64_MAX;
uint32_t x859 = 29U;
int16_t x861 = INT16_MAX;
int8_t x863 = INT8_MIN;
static int32_t x881 = 432906537;
static volatile uint16_t x891 = 20957U;
static volatile int16_t x892 = 7;
volatile int32_t t154 = -21296;
int64_t x898 = INT64_MIN;
volatile int32_t t155 = -3504;
uint32_t x915 = 29U;
int16_t x926 = INT16_MIN;
static int8_t x927 = INT8_MIN;
static int16_t x935 = -1;
int64_t x944 = 1LL;
int32_t x958 = INT32_MAX;
int8_t x968 = INT8_MIN;
static int64_t x979 = 107LL;
int8_t x980 = INT8_MIN;
volatile int32_t t168 = 2;
uint64_t x1002 = 356975044LLU;
int32_t t171 = 3;
uint64_t x1035 = UINT64_MAX;
volatile int8_t x1059 = INT8_MIN;
uint32_t x1064 = UINT32_MAX;
volatile int32_t t177 = 108;
volatile int64_t x1109 = -15278083453438LL;
static volatile int8_t x1120 = INT8_MIN;
volatile int32_t t184 = -44108;
uint64_t x1125 = UINT64_MAX;
int64_t x1126 = -1LL;
int16_t x1127 = -1;
volatile int64_t x1128 = -3989396100LL;
int8_t x1136 = 5;
int64_t x1144 = 1949725556128LL;
volatile int32_t t189 = -29;
volatile int16_t x1147 = 9503;
uint32_t x1150 = 2186297U;
volatile int32_t x1160 = -1;
uint32_t x1167 = 3927U;
int64_t x1171 = 6LL;
int32_t x1190 = -637552563;
static uint8_t x1193 = 87U;
int8_t x1196 = INT8_MIN;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	uint64_t x3 = 2942152026070753LLU;
	int64_t x4 = -1LL;
	static int32_t t0 = -6659708;

    t0 = ((x1/x2)<=(x3*x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x6 = 3104;
	static int32_t x7 = -2557634;
	int16_t x8 = 780;

    t1 = ((x5/x6)<=(x7*x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = 59;
	volatile uint32_t x14 = UINT32_MAX;
	uint16_t x15 = 8154U;
	volatile uint16_t x16 = 2633U;
	int32_t t2 = -415;

    t2 = ((x13/x14)<=(x15*x16));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x17 = 107U;
	uint64_t x19 = 569064798379264161LLU;
	uint32_t x20 = UINT32_MAX;
	int32_t t3 = 43414;

    t3 = ((x17/x18)<=(x19*x20));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x37 = 3641U;
	uint32_t x38 = UINT32_MAX;
	uint32_t x39 = 83671U;
	int64_t x40 = -1LL;
	static int32_t t4 = -39;

    t4 = ((x37/x38)<=(x39*x40));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x41 = 3;
	uint32_t x42 = 761828563U;
	int16_t x43 = INT16_MIN;
	uint16_t x44 = UINT16_MAX;
	int32_t t5 = 220;

    t5 = ((x41/x42)<=(x43*x44));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x54 = -71886070;
	static volatile uint8_t x55 = UINT8_MAX;
	int8_t x56 = 1;
	int32_t t6 = 523070328;

    t6 = ((x53/x54)<=(x55*x56));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint32_t x57 = UINT32_MAX;
	int16_t x58 = INT16_MIN;
	static volatile int32_t t7 = -12990;

    t7 = ((x57/x58)<=(x59*x60));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x61 = -1;
	int8_t x62 = -1;
	volatile uint16_t x63 = 12U;
	int32_t t8 = -18934650;

    t8 = ((x61/x62)<=(x63*x64));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x65 = UINT8_MAX;
	uint32_t x67 = 3661U;
	int32_t x68 = 5509;
	int32_t t9 = 1;

    t9 = ((x65/x66)<=(x67*x68));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int32_t x69 = -1;
	volatile int64_t x70 = INT64_MAX;
	uint8_t x72 = 9U;

    t10 = ((x69/x70)<=(x71*x72));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x76 = 121LLU;
	volatile int32_t t11 = 844331;

    t11 = ((x73/x74)<=(x75*x76));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x79 = 4U;
	int16_t x80 = -1;
	volatile int32_t t12 = 12251;

    t12 = ((x77/x78)<=(x79*x80));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x81 = UINT16_MAX;
	int16_t x82 = INT16_MAX;
	int8_t x83 = 35;
	volatile int64_t x84 = -95703286699910316LL;

    t13 = ((x81/x82)<=(x83*x84));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x85 = 33U;
	int32_t x86 = INT32_MIN;
	int16_t x87 = INT16_MAX;
	uint16_t x88 = UINT16_MAX;
	static volatile int32_t t14 = 1205625;

    t14 = ((x85/x86)<=(x87*x88));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x91 = 33398674977LLU;
	static uint16_t x92 = 17U;

    t15 = ((x89/x90)<=(x91*x92));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x93 = INT64_MIN;
	int8_t x95 = -1;
	volatile uint8_t x96 = 27U;
	volatile int32_t t16 = 518070;

    t16 = ((x93/x94)<=(x95*x96));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x97 = INT8_MIN;
	int8_t x98 = INT8_MIN;
	int64_t x99 = 407738030902973LL;

    t17 = ((x97/x98)<=(x99*x100));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x101 = INT32_MIN;
	uint64_t x102 = UINT64_MAX;
	static int8_t x103 = INT8_MIN;
	static uint64_t x104 = 726731420180785LLU;

    t18 = ((x101/x102)<=(x103*x104));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x109 = 17459U;
	uint32_t x110 = 25002U;
	int16_t x111 = -896;
	static uint64_t x112 = UINT64_MAX;
	int32_t t19 = 42011;

    t19 = ((x109/x110)<=(x111*x112));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x118 = 1LL;
	uint32_t x119 = 17657074U;
	int16_t x120 = 8871;

    t20 = ((x117/x118)<=(x119*x120));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint64_t x121 = UINT64_MAX;
	static int16_t x122 = INT16_MIN;
	uint64_t x124 = UINT64_MAX;

    t21 = ((x121/x122)<=(x123*x124));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x129 = UINT64_MAX;
	uint32_t x130 = UINT32_MAX;
	int32_t x131 = INT32_MIN;

    t22 = ((x129/x130)<=(x131*x132));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x137 = -458;
	uint64_t x138 = UINT64_MAX;
	static volatile uint16_t x139 = 12U;
	volatile uint16_t x140 = 15961U;

    t23 = ((x137/x138)<=(x139*x140));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x141 = 1;
	int64_t x142 = -1LL;
	int64_t x143 = 2LL;
	static volatile uint64_t x144 = 2226416797696LLU;

    t24 = ((x141/x142)<=(x143*x144));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x149 = 15U;
	int16_t x150 = INT16_MIN;
	uint32_t x152 = UINT32_MAX;
	volatile int32_t t25 = -2;

    t25 = ((x149/x150)<=(x151*x152));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x161 = INT32_MAX;
	uint8_t x162 = UINT8_MAX;
	volatile int16_t x163 = -1;
	int8_t x164 = -1;
	int32_t t26 = 973;

    t26 = ((x161/x162)<=(x163*x164));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x169 = 57U;
	int8_t x170 = 50;
	int64_t x172 = INT64_MIN;
	static int32_t t27 = -163371;

    t27 = ((x169/x170)<=(x171*x172));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x177 = INT8_MIN;
	volatile uint32_t x178 = UINT32_MAX;
	int8_t x179 = -1;

    t28 = ((x177/x178)<=(x179*x180));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x181 = INT64_MIN;
	uint32_t x182 = 623523U;
	volatile int8_t x183 = INT8_MAX;
	uint16_t x184 = 13435U;
	static int32_t t29 = 951685033;

    t29 = ((x181/x182)<=(x183*x184));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x185 = INT8_MIN;
	static uint8_t x186 = 1U;
	static int16_t x188 = -1;
	volatile int32_t t30 = -11;

    t30 = ((x185/x186)<=(x187*x188));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x197 = 2180539562580LLU;
	uint64_t x199 = 44LLU;
	uint32_t x200 = 4U;
	volatile int32_t t31 = -1836889;

    t31 = ((x197/x198)<=(x199*x200));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x201 = 51U;
	int8_t x202 = -1;
	uint32_t x203 = 14U;
	volatile int16_t x204 = INT16_MAX;
	int32_t t32 = -402245;

    t32 = ((x201/x202)<=(x203*x204));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint32_t x206 = 63770U;
	int32_t x208 = -1;
	int32_t t33 = 7211;

    t33 = ((x205/x206)<=(x207*x208));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x209 = 798321986407562915LL;
	uint16_t x210 = UINT16_MAX;
	int32_t x211 = INT32_MIN;
	volatile uint32_t x212 = 22179U;
	volatile int32_t t34 = -3457;

    t34 = ((x209/x210)<=(x211*x212));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x213 = -1;
	uint32_t x215 = UINT32_MAX;
	int32_t x216 = -594646835;
	static int32_t t35 = 1928;

    t35 = ((x213/x214)<=(x215*x216));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x217 = 32;
	volatile uint16_t x218 = 231U;
	volatile int32_t x219 = -1;
	int32_t x220 = -209806239;

    t36 = ((x217/x218)<=(x219*x220));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x221 = 1811494011428126LLU;
	static volatile int16_t x222 = INT16_MAX;
	static volatile int16_t x223 = INT16_MIN;
	volatile int16_t x224 = INT16_MIN;
	volatile int32_t t37 = -1;

    t37 = ((x221/x222)<=(x223*x224));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x225 = -14;
	int8_t x226 = INT8_MIN;
	volatile uint8_t x227 = 7U;
	volatile uint8_t x228 = 1U;
	int32_t t38 = 34404571;

    t38 = ((x225/x226)<=(x227*x228));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x230 = 3LLU;
	int8_t x231 = INT8_MAX;
	int8_t x232 = -1;

    t39 = ((x229/x230)<=(x231*x232));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x233 = -1LL;
	int32_t x234 = INT32_MAX;
	uint16_t x235 = 3U;
	uint16_t x236 = UINT16_MAX;
	static volatile int32_t t40 = -1047754;

    t40 = ((x233/x234)<=(x235*x236));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x241 = UINT64_MAX;
	uint16_t x242 = 9U;
	static int8_t x243 = INT8_MIN;
	int8_t x244 = -1;
	int32_t t41 = 25794815;

    t41 = ((x241/x242)<=(x243*x244));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x246 = INT64_MAX;
	int64_t x247 = 22LL;
	int8_t x248 = 13;
	int32_t t42 = -1821088;

    t42 = ((x245/x246)<=(x247*x248));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x249 = 25020642LLU;
	static int16_t x250 = 19;
	int32_t x251 = -1;
	int64_t x252 = INT64_MAX;
	static volatile int32_t t43 = -15;

    t43 = ((x249/x250)<=(x251*x252));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x253 = 5;
	static volatile uint16_t x254 = 14457U;
	int64_t x255 = INT64_MAX;
	volatile int32_t t44 = -7178;

    t44 = ((x253/x254)<=(x255*x256));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x261 = -1LL;
	static volatile int64_t x262 = INT64_MAX;
	uint64_t x264 = UINT64_MAX;
	int32_t t45 = 9;

    t45 = ((x261/x262)<=(x263*x264));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x265 = -36;
	static volatile uint8_t x266 = 10U;
	int32_t t46 = 90978;

    t46 = ((x265/x266)<=(x267*x268));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x270 = INT64_MIN;
	uint64_t x271 = 82892LLU;
	static uint64_t x272 = UINT64_MAX;
	volatile int32_t t47 = 4264922;

    t47 = ((x269/x270)<=(x271*x272));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x273 = 10LLU;
	volatile int64_t x275 = INT64_MIN;
	volatile int32_t t48 = 0;

    t48 = ((x273/x274)<=(x275*x276));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x281 = -1;
	uint32_t x282 = 359647U;
	static int64_t x284 = -1LL;

    t49 = ((x281/x282)<=(x283*x284));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x295 = 1;
	int32_t t50 = -34583901;

    t50 = ((x293/x294)<=(x295*x296));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x301 = INT16_MIN;
	static uint16_t x302 = UINT16_MAX;
	int16_t x303 = INT16_MAX;
	uint16_t x304 = 94U;
	volatile int32_t t51 = 2;

    t51 = ((x301/x302)<=(x303*x304));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x313 = INT32_MAX;
	uint8_t x314 = 20U;
	int8_t x315 = -6;
	int32_t x316 = 85893;
	static int32_t t52 = -81;

    t52 = ((x313/x314)<=(x315*x316));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x317 = 0;
	volatile uint16_t x318 = 104U;
	static volatile int16_t x319 = INT16_MIN;
	int16_t x320 = INT16_MIN;
	static int32_t t53 = 42591284;

    t53 = ((x317/x318)<=(x319*x320));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int8_t x325 = INT8_MIN;
	uint64_t x326 = 180793015LLU;
	uint16_t x327 = 22358U;
	int32_t x328 = -11636;
	volatile int32_t t54 = -1;

    t54 = ((x325/x326)<=(x327*x328));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x330 = INT64_MIN;
	int8_t x332 = INT8_MIN;

    t55 = ((x329/x330)<=(x331*x332));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x333 = -4;
	static int16_t x334 = -5532;
	int32_t x335 = INT32_MIN;
	volatile uint64_t x336 = 1400971989271LLU;
	volatile int32_t t56 = -2703776;

    t56 = ((x333/x334)<=(x335*x336));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x337 = 285U;
	static int64_t x338 = INT64_MIN;
	uint8_t x339 = 1U;
	uint32_t x340 = UINT32_MAX;

    t57 = ((x337/x338)<=(x339*x340));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x341 = INT16_MAX;
	static int32_t x342 = -406;
	uint8_t x344 = 0U;

    t58 = ((x341/x342)<=(x343*x344));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x345 = INT8_MIN;
	uint64_t x347 = 246851876LLU;
	static volatile int16_t x348 = INT16_MIN;
	static int32_t t59 = 40204666;

    t59 = ((x345/x346)<=(x347*x348));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x349 = INT16_MIN;
	uint16_t x350 = 1U;
	uint64_t x352 = UINT64_MAX;
	volatile int32_t t60 = 503897812;

    t60 = ((x349/x350)<=(x351*x352));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x358 = INT8_MAX;
	uint8_t x359 = 1U;
	int8_t x360 = INT8_MIN;
	int32_t t61 = 68;

    t61 = ((x357/x358)<=(x359*x360));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x366 = -1;
	volatile int32_t t62 = -64797;

    t62 = ((x365/x366)<=(x367*x368));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x377 = -1;
	volatile uint16_t x380 = 4U;
	int32_t t63 = 103166;

    t63 = ((x377/x378)<=(x379*x380));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x382 = -1;
	static uint8_t x383 = 1U;
	int32_t t64 = -1;

    t64 = ((x381/x382)<=(x383*x384));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x385 = 14544;
	int32_t x387 = INT32_MAX;

    t65 = ((x385/x386)<=(x387*x388));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x390 = UINT8_MAX;
	uint8_t x391 = 105U;
	int16_t x392 = INT16_MIN;
	int32_t t66 = -796085562;

    t66 = ((x389/x390)<=(x391*x392));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x393 = -1;
	int64_t x394 = -249919535971685965LL;
	uint64_t x395 = 369410216LLU;
	int8_t x396 = 49;

    t67 = ((x393/x394)<=(x395*x396));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x405 = INT32_MIN;
	uint64_t x406 = UINT64_MAX;
	static int16_t x407 = INT16_MIN;
	int8_t x408 = INT8_MAX;
	volatile int32_t t68 = 41;

    t68 = ((x405/x406)<=(x407*x408));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x409 = -1;
	volatile int8_t x412 = INT8_MIN;
	volatile int32_t t69 = 2498;

    t69 = ((x409/x410)<=(x411*x412));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x413 = INT32_MIN;
	uint32_t x414 = 25264U;
	int8_t x415 = INT8_MIN;

    t70 = ((x413/x414)<=(x415*x416));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x433 = UINT8_MAX;
	volatile int16_t x434 = 130;
	int16_t x436 = INT16_MIN;
	volatile int32_t t71 = 255;

    t71 = ((x433/x434)<=(x435*x436));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint16_t x445 = 2250U;
	uint32_t x447 = UINT32_MAX;
	uint32_t x448 = UINT32_MAX;
	static volatile int32_t t72 = -6678823;

    t72 = ((x445/x446)<=(x447*x448));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x449 = INT64_MIN;
	uint64_t x450 = 178LLU;
	static volatile int16_t x452 = INT16_MIN;
	static int32_t t73 = 430513542;

    t73 = ((x449/x450)<=(x451*x452));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x453 = -1;
	static int64_t x454 = INT64_MIN;
	int8_t x455 = INT8_MIN;
	int8_t x456 = 0;
	volatile int32_t t74 = -55;

    t74 = ((x453/x454)<=(x455*x456));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x458 = INT32_MAX;
	int8_t x459 = -1;
	uint16_t x460 = UINT16_MAX;

    t75 = ((x457/x458)<=(x459*x460));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x464 = INT16_MAX;
	int32_t t76 = -6;

    t76 = ((x461/x462)<=(x463*x464));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x465 = -1;
	int16_t x466 = INT16_MIN;
	uint8_t x467 = 68U;
	uint32_t x468 = 301413486U;

    t77 = ((x465/x466)<=(x467*x468));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x481 = 1055257053U;
	uint32_t x482 = UINT32_MAX;
	static uint8_t x483 = 4U;
	volatile uint32_t x484 = 688864U;
	volatile int32_t t78 = 58;

    t78 = ((x481/x482)<=(x483*x484));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x485 = INT64_MIN;
	volatile int32_t x486 = INT32_MIN;
	volatile int64_t x487 = 2511030LL;
	volatile uint16_t x488 = 1U;
	static volatile int32_t t79 = 3294;

    t79 = ((x485/x486)<=(x487*x488));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x489 = INT64_MIN;
	int8_t x492 = -8;

    t80 = ((x489/x490)<=(x491*x492));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x493 = 12299847581LLU;
	int64_t x494 = -61935992388LL;
	static uint8_t x495 = 1U;
	int8_t x496 = INT8_MAX;
	volatile int32_t t81 = -930028;

    t81 = ((x493/x494)<=(x495*x496));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x497 = -11;
	int8_t x498 = -1;
	static volatile uint32_t x499 = 364165479U;

    t82 = ((x497/x498)<=(x499*x500));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x501 = UINT32_MAX;
	int16_t x502 = 1;

    t83 = ((x501/x502)<=(x503*x504));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile uint16_t x509 = UINT16_MAX;
	int32_t x510 = INT32_MIN;
	int8_t x511 = INT8_MIN;
	static uint64_t x512 = 759762777218237LLU;
	int32_t t84 = 25343907;

    t84 = ((x509/x510)<=(x511*x512));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x513 = -1;
	int8_t x514 = -1;
	int8_t x516 = 40;

    t85 = ((x513/x514)<=(x515*x516));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x521 = INT64_MIN;
	int8_t x522 = INT8_MIN;
	uint16_t x523 = 301U;
	uint8_t x524 = UINT8_MAX;
	int32_t t86 = -5331;

    t86 = ((x521/x522)<=(x523*x524));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x527 = -56;
	int8_t x528 = INT8_MAX;
	int32_t t87 = 0;

    t87 = ((x525/x526)<=(x527*x528));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x529 = UINT32_MAX;
	volatile int32_t t88 = 11;

    t88 = ((x529/x530)<=(x531*x532));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x533 = -2;
	static int8_t x534 = INT8_MIN;
	volatile int8_t x535 = -1;
	int16_t x536 = INT16_MAX;
	int32_t t89 = 18743;

    t89 = ((x533/x534)<=(x535*x536));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint32_t x537 = UINT32_MAX;
	uint64_t x538 = 401655491793856005LLU;
	int8_t x539 = INT8_MAX;
	volatile int32_t x540 = -1;
	volatile int32_t t90 = -171422867;

    t90 = ((x537/x538)<=(x539*x540));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x541 = -1;
	static uint64_t x542 = 138376210200646LLU;
	int16_t x543 = INT16_MIN;
	static uint16_t x544 = 7U;
	int32_t t91 = -66768;

    t91 = ((x541/x542)<=(x543*x544));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x553 = INT64_MIN;
	static uint32_t x554 = 81312U;
	volatile int8_t x555 = -1;
	volatile int32_t t92 = 1341;

    t92 = ((x553/x554)<=(x555*x556));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint32_t x557 = 0U;
	int8_t x558 = INT8_MIN;
	volatile int32_t t93 = 1359339;

    t93 = ((x557/x558)<=(x559*x560));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x561 = 7U;
	int32_t x563 = 6;
	uint16_t x564 = UINT16_MAX;
	int32_t t94 = 421421;

    t94 = ((x561/x562)<=(x563*x564));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x565 = INT8_MIN;
	uint16_t x566 = UINT16_MAX;
	volatile int32_t t95 = -923417285;

    t95 = ((x565/x566)<=(x567*x568));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x578 = INT8_MIN;
	volatile int16_t x579 = -1;
	uint8_t x580 = 3U;
	static int32_t t96 = -29716779;

    t96 = ((x577/x578)<=(x579*x580));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint32_t x581 = UINT32_MAX;
	static uint16_t x582 = 542U;
	uint64_t x583 = 4LLU;
	int8_t x584 = -1;
	volatile int32_t t97 = -129828457;

    t97 = ((x581/x582)<=(x583*x584));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x585 = 2;
	uint64_t x586 = 32065LLU;
	static int64_t x588 = -632283LL;
	volatile int32_t t98 = 697240161;

    t98 = ((x585/x586)<=(x587*x588));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x590 = -1;
	uint32_t x591 = UINT32_MAX;
	volatile uint8_t x592 = 22U;
	int32_t t99 = -2;

    t99 = ((x589/x590)<=(x591*x592));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x594 = -1;
	uint32_t x596 = 29817986U;
	volatile int32_t t100 = -121428;

    t100 = ((x593/x594)<=(x595*x596));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x598 = -951583LL;
	uint64_t x599 = 793439775LLU;
	uint64_t x600 = 5LLU;
	int32_t t101 = -613252;

    t101 = ((x597/x598)<=(x599*x600));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x601 = 15;
	int16_t x603 = INT16_MAX;

    t102 = ((x601/x602)<=(x603*x604));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x605 = UINT8_MAX;
	int32_t x606 = INT32_MAX;
	uint8_t x607 = UINT8_MAX;
	static volatile uint16_t x608 = 41U;
	int32_t t103 = -318352345;

    t103 = ((x605/x606)<=(x607*x608));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x613 = 760048651815LLU;
	int16_t x614 = INT16_MIN;
	static int64_t x615 = 54851595873LL;
	int16_t x616 = 3019;
	volatile int32_t t104 = -4;

    t104 = ((x613/x614)<=(x615*x616));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x617 = UINT8_MAX;
	static volatile int32_t x619 = -92;
	uint16_t x620 = UINT16_MAX;
	volatile int32_t t105 = 711244495;

    t105 = ((x617/x618)<=(x619*x620));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x621 = 2512247686LL;
	int16_t x623 = 72;
	volatile int32_t t106 = 7641685;

    t106 = ((x621/x622)<=(x623*x624));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x625 = INT32_MAX;
	static uint16_t x626 = UINT16_MAX;
	int32_t x627 = 7771592;

    t107 = ((x625/x626)<=(x627*x628));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x630 = 171U;
	volatile int64_t x631 = -1LL;
	static uint8_t x632 = UINT8_MAX;
	volatile int32_t t108 = 1622;

    t108 = ((x629/x630)<=(x631*x632));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x633 = -14;
	int8_t x634 = INT8_MIN;
	static volatile int64_t x635 = -783037459027LL;
	int16_t x636 = INT16_MIN;
	static volatile int32_t t109 = 115367381;

    t109 = ((x633/x634)<=(x635*x636));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x637 = -1;
	int32_t x638 = INT32_MAX;
	static int64_t x639 = -18296LL;
	uint64_t x640 = 2820521068LLU;
	int32_t t110 = -11;

    t110 = ((x637/x638)<=(x639*x640));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x641 = 22484U;
	int32_t x642 = INT32_MIN;
	int8_t x643 = INT8_MAX;
	volatile int32_t t111 = 1296432;

    t111 = ((x641/x642)<=(x643*x644));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint16_t x649 = UINT16_MAX;
	int64_t x650 = -1LL;
	uint8_t x651 = 7U;
	int16_t x652 = -1;
	volatile int32_t t112 = 3727;

    t112 = ((x649/x650)<=(x651*x652));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x661 = INT64_MAX;
	int8_t x662 = 9;
	uint64_t x663 = UINT64_MAX;
	uint32_t x664 = 3U;
	static volatile int32_t t113 = 285;

    t113 = ((x661/x662)<=(x663*x664));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x665 = UINT16_MAX;
	volatile int64_t x666 = -1LL;
	static int16_t x668 = 10;
	volatile int32_t t114 = 119382;

    t114 = ((x665/x666)<=(x667*x668));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x669 = -1;
	uint8_t x671 = UINT8_MAX;
	uint64_t x672 = 1428312692399LLU;
	int32_t t115 = 21742;

    t115 = ((x669/x670)<=(x671*x672));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x673 = -1;
	int64_t x674 = INT64_MIN;
	int64_t x675 = INT64_MAX;
	uint64_t x676 = UINT64_MAX;
	int32_t t116 = -39;

    t116 = ((x673/x674)<=(x675*x676));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x681 = 132464276794LLU;
	uint64_t x683 = 40765151244321LLU;
	int32_t t117 = 662853;

    t117 = ((x681/x682)<=(x683*x684));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x689 = INT8_MAX;
	int16_t x690 = -36;
	static int16_t x691 = -1;
	int32_t x692 = INT32_MAX;
	volatile int32_t t118 = 43697122;

    t118 = ((x689/x690)<=(x691*x692));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x694 = 30709U;
	int8_t x695 = INT8_MAX;
	int16_t x696 = -1;
	volatile int32_t t119 = 288223480;

    t119 = ((x693/x694)<=(x695*x696));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint32_t x699 = UINT32_MAX;
	volatile int32_t t120 = -959;

    t120 = ((x697/x698)<=(x699*x700));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x701 = -1LL;
	int16_t x702 = INT16_MIN;
	volatile uint16_t x703 = UINT16_MAX;
	int32_t t121 = 8;

    t121 = ((x701/x702)<=(x703*x704));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x705 = 22;
	static uint16_t x706 = 141U;
	uint16_t x707 = UINT16_MAX;
	int8_t x708 = INT8_MIN;
	volatile int32_t t122 = 2;

    t122 = ((x705/x706)<=(x707*x708));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x709 = 7330U;
	int8_t x710 = -1;
	volatile int16_t x711 = -1;
	volatile int32_t t123 = 7764054;

    t123 = ((x709/x710)<=(x711*x712));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x713 = UINT8_MAX;
	uint16_t x714 = UINT16_MAX;
	uint64_t x715 = UINT64_MAX;
	int8_t x716 = INT8_MIN;
	static int32_t t124 = 161767;

    t124 = ((x713/x714)<=(x715*x716));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x722 = UINT16_MAX;
	volatile int16_t x723 = INT16_MAX;
	uint64_t x724 = UINT64_MAX;
	volatile int32_t t125 = 68014;

    t125 = ((x721/x722)<=(x723*x724));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x725 = 17340U;
	uint64_t x727 = 202086837989LLU;
	int8_t x728 = INT8_MIN;
	volatile int32_t t126 = -601;

    t126 = ((x725/x726)<=(x727*x728));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x729 = 268U;
	volatile uint16_t x730 = 269U;
	int16_t x732 = 6085;
	volatile int32_t t127 = 37874;

    t127 = ((x729/x730)<=(x731*x732));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x737 = 96037935961795340LL;
	uint16_t x738 = 6845U;
	uint32_t x739 = 2382735U;
	int32_t x740 = -1;
	static volatile int32_t t128 = 438;

    t128 = ((x737/x738)<=(x739*x740));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x741 = INT16_MAX;
	int32_t x742 = -1;
	int16_t x744 = INT16_MAX;
	int32_t t129 = -29;

    t129 = ((x741/x742)<=(x743*x744));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x749 = INT8_MIN;
	int16_t x750 = 4125;
	int64_t x752 = INT64_MAX;
	volatile int32_t t130 = 41922;

    t130 = ((x749/x750)<=(x751*x752));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x757 = INT32_MIN;
	int16_t x758 = -319;
	static uint64_t x759 = 258263437879325557LLU;
	static int32_t x760 = INT32_MAX;
	volatile int32_t t131 = -1;

    t131 = ((x757/x758)<=(x759*x760));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x761 = -358980;
	static uint8_t x763 = UINT8_MAX;

    t132 = ((x761/x762)<=(x763*x764));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x765 = -1;
	uint64_t x766 = 15129LLU;
	static int8_t x767 = INT8_MAX;
	volatile uint64_t x768 = 508470061648059LLU;
	int32_t t133 = 0;

    t133 = ((x765/x766)<=(x767*x768));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x769 = INT64_MAX;
	int64_t x770 = INT64_MIN;
	static uint8_t x771 = 49U;
	static int8_t x772 = -2;
	static volatile int32_t t134 = 135781338;

    t134 = ((x769/x770)<=(x771*x772));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x773 = -304083;
	int16_t x774 = INT16_MIN;
	volatile int16_t x775 = 1;
	uint32_t x776 = UINT32_MAX;

    t135 = ((x773/x774)<=(x775*x776));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x777 = UINT16_MAX;
	volatile uint8_t x778 = UINT8_MAX;
	int8_t x780 = INT8_MAX;
	int32_t t136 = 126;

    t136 = ((x777/x778)<=(x779*x780));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint16_t x782 = UINT16_MAX;
	static uint8_t x783 = 9U;
	static int32_t t137 = 57;

    t137 = ((x781/x782)<=(x783*x784));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x786 = INT64_MIN;
	int16_t x787 = -1;
	uint64_t x788 = UINT64_MAX;
	static int32_t t138 = -15074;

    t138 = ((x785/x786)<=(x787*x788));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x789 = UINT16_MAX;
	int64_t x790 = INT64_MIN;
	int64_t x791 = 2254639377210LL;
	int8_t x792 = -1;

    t139 = ((x789/x790)<=(x791*x792));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x793 = INT32_MIN;
	uint16_t x794 = UINT16_MAX;
	static int32_t t140 = 40;

    t140 = ((x793/x794)<=(x795*x796));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x801 = -1;
	volatile int32_t t141 = 20519;

    t141 = ((x801/x802)<=(x803*x804));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x805 = 7U;
	int16_t x806 = INT16_MIN;
	static uint8_t x807 = 1U;
	int16_t x808 = INT16_MAX;
	volatile int32_t t142 = -24494;

    t142 = ((x805/x806)<=(x807*x808));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x817 = UINT8_MAX;
	int8_t x819 = INT8_MIN;
	uint16_t x820 = UINT16_MAX;
	static volatile int32_t t143 = -59;

    t143 = ((x817/x818)<=(x819*x820));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x821 = INT64_MIN;
	volatile int64_t x822 = INT64_MIN;
	uint32_t x823 = 1930203U;
	volatile uint8_t x824 = UINT8_MAX;
	volatile int32_t t144 = 0;

    t144 = ((x821/x822)<=(x823*x824));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x825 = INT64_MAX;
	volatile uint16_t x827 = 1696U;
	uint16_t x828 = 10U;

    t145 = ((x825/x826)<=(x827*x828));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x829 = INT16_MAX;
	volatile int32_t x830 = 378335049;
	uint32_t x831 = 651064U;
	uint64_t x832 = UINT64_MAX;
	int32_t t146 = -814915;

    t146 = ((x829/x830)<=(x831*x832));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x845 = -3;
	int32_t x846 = 8;
	static int32_t x847 = -1;
	int32_t t147 = -10709;

    t147 = ((x845/x846)<=(x847*x848));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x853 = 0U;
	int8_t x855 = -1;
	volatile int32_t t148 = 947845;

    t148 = ((x853/x854)<=(x855*x856));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x857 = 56U;
	uint16_t x858 = UINT16_MAX;
	static int8_t x860 = INT8_MAX;
	static int32_t t149 = -1;

    t149 = ((x857/x858)<=(x859*x860));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x862 = 2586633082LLU;
	int8_t x864 = -15;
	volatile int32_t t150 = -121;

    t150 = ((x861/x862)<=(x863*x864));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x873 = -6015;
	uint64_t x874 = 420LLU;
	int32_t x875 = -1;
	uint32_t x876 = 238U;
	int32_t t151 = 87532;

    t151 = ((x873/x874)<=(x875*x876));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x882 = UINT16_MAX;
	static volatile int8_t x883 = INT8_MAX;
	volatile int32_t x884 = -1;
	static int32_t t152 = -901863669;

    t152 = ((x881/x882)<=(x883*x884));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x889 = -1;
	int32_t x890 = -29;
	static int32_t t153 = 159210720;

    t153 = ((x889/x890)<=(x891*x892));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x893 = -10;
	static volatile int64_t x894 = -290793398907LL;
	volatile uint32_t x895 = 14697U;
	int8_t x896 = -20;

    t154 = ((x893/x894)<=(x895*x896));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x897 = -1;
	int64_t x899 = -20377LL;
	int8_t x900 = INT8_MAX;

    t155 = ((x897/x898)<=(x899*x900));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x901 = 1U;
	static int64_t x902 = INT64_MIN;
	uint64_t x903 = 2988263027522LLU;
	int64_t x904 = INT64_MIN;
	static int32_t t156 = -145;

    t156 = ((x901/x902)<=(x903*x904));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile uint64_t x905 = UINT64_MAX;
	volatile uint64_t x906 = 164195901985LLU;
	static uint64_t x907 = 733909LLU;
	static int8_t x908 = INT8_MIN;
	static int32_t t157 = 471490276;

    t157 = ((x905/x906)<=(x907*x908));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x913 = 6LLU;
	static volatile int8_t x914 = INT8_MIN;
	static uint32_t x916 = UINT32_MAX;
	static int32_t t158 = 170290;

    t158 = ((x913/x914)<=(x915*x916));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x925 = -21;
	int16_t x928 = -1;
	int32_t t159 = -5814989;

    t159 = ((x925/x926)<=(x927*x928));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x929 = INT64_MIN;
	int16_t x930 = INT16_MAX;
	int32_t x931 = -1;
	volatile int64_t x932 = -1LL;
	static int32_t t160 = 259981527;

    t160 = ((x929/x930)<=(x931*x932));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x933 = -906;
	static int32_t x934 = -1;
	int8_t x936 = -1;
	int32_t t161 = 383013438;

    t161 = ((x933/x934)<=(x935*x936));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x941 = -1;
	uint16_t x942 = 15901U;
	static int16_t x943 = INT16_MIN;
	int32_t t162 = -44914830;

    t162 = ((x941/x942)<=(x943*x944));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x957 = 837404880U;
	static volatile int8_t x959 = 1;
	volatile int16_t x960 = INT16_MIN;
	volatile int32_t t163 = 22763084;

    t163 = ((x957/x958)<=(x959*x960));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x965 = UINT8_MAX;
	int32_t x966 = INT32_MAX;
	uint64_t x967 = UINT64_MAX;
	static volatile int32_t t164 = 0;

    t164 = ((x965/x966)<=(x967*x968));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int8_t x969 = INT8_MIN;
	int64_t x970 = INT64_MIN;
	volatile uint64_t x971 = UINT64_MAX;
	uint32_t x972 = 90U;
	static volatile int32_t t165 = -400354717;

    t165 = ((x969/x970)<=(x971*x972));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint16_t x973 = 120U;
	volatile uint8_t x974 = UINT8_MAX;
	int16_t x975 = INT16_MIN;
	uint64_t x976 = UINT64_MAX;
	int32_t t166 = 396452;

    t166 = ((x973/x974)<=(x975*x976));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x977 = INT32_MIN;
	int32_t x978 = 75;
	static volatile int32_t t167 = 288224;

    t167 = ((x977/x978)<=(x979*x980));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x985 = 739465268U;
	uint32_t x986 = UINT32_MAX;
	uint64_t x987 = UINT64_MAX;
	volatile int8_t x988 = INT8_MAX;

    t168 = ((x985/x986)<=(x987*x988));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x1001 = 115149814LLU;
	uint32_t x1003 = UINT32_MAX;
	static uint32_t x1004 = UINT32_MAX;
	int32_t t169 = 4099;

    t169 = ((x1001/x1002)<=(x1003*x1004));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x1009 = INT8_MIN;
	volatile uint32_t x1010 = 346175U;
	volatile uint64_t x1011 = UINT64_MAX;
	int16_t x1012 = INT16_MIN;
	int32_t t170 = -171347687;

    t170 = ((x1009/x1010)<=(x1011*x1012));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x1013 = 25;
	volatile uint64_t x1014 = 133730593446111798LLU;
	static int8_t x1015 = INT8_MIN;
	uint64_t x1016 = UINT64_MAX;

    t171 = ((x1013/x1014)<=(x1015*x1016));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x1033 = 0;
	uint16_t x1034 = 221U;
	int32_t x1036 = -259187;
	volatile int32_t t172 = 146745703;

    t172 = ((x1033/x1034)<=(x1035*x1036));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x1037 = -1;
	uint16_t x1038 = UINT16_MAX;
	uint8_t x1039 = 12U;
	int16_t x1040 = 5;
	int32_t t173 = 17;

    t173 = ((x1037/x1038)<=(x1039*x1040));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int32_t x1049 = INT32_MAX;
	volatile uint64_t x1050 = UINT64_MAX;
	volatile int16_t x1051 = INT16_MAX;
	int8_t x1052 = INT8_MIN;
	volatile int32_t t174 = 9474;

    t174 = ((x1049/x1050)<=(x1051*x1052));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x1053 = INT32_MIN;
	int32_t x1054 = INT32_MIN;
	volatile int32_t x1055 = 6;
	uint32_t x1056 = 4U;
	volatile int32_t t175 = 1570;

    t175 = ((x1053/x1054)<=(x1055*x1056));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x1057 = 15626;
	uint8_t x1058 = UINT8_MAX;
	volatile uint64_t x1060 = UINT64_MAX;
	int32_t t176 = 3361;

    t176 = ((x1057/x1058)<=(x1059*x1060));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x1061 = 247;
	uint8_t x1062 = UINT8_MAX;
	volatile uint32_t x1063 = 1549564U;

    t177 = ((x1061/x1062)<=(x1063*x1064));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x1073 = 0;
	int8_t x1074 = INT8_MIN;
	int16_t x1075 = 3;
	volatile uint16_t x1076 = UINT16_MAX;
	int32_t t178 = -247224;

    t178 = ((x1073/x1074)<=(x1075*x1076));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x1081 = INT32_MIN;
	volatile int16_t x1082 = INT16_MIN;
	uint16_t x1083 = 3336U;
	int64_t x1084 = -9602806230490LL;
	int32_t t179 = 2;

    t179 = ((x1081/x1082)<=(x1083*x1084));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x1085 = 1U;
	int64_t x1086 = 25864116238349LL;
	volatile uint64_t x1087 = UINT64_MAX;
	int32_t x1088 = INT32_MAX;
	int32_t t180 = -71416167;

    t180 = ((x1085/x1086)<=(x1087*x1088));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x1093 = -377579175753LL;
	uint16_t x1094 = 80U;
	volatile int16_t x1095 = -1;
	uint16_t x1096 = 24838U;
	volatile int32_t t181 = -1;

    t181 = ((x1093/x1094)<=(x1095*x1096));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x1105 = -1214;
	int16_t x1106 = INT16_MIN;
	uint32_t x1107 = UINT32_MAX;
	uint32_t x1108 = UINT32_MAX;
	int32_t t182 = -1;

    t182 = ((x1105/x1106)<=(x1107*x1108));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x1110 = INT64_MIN;
	volatile int16_t x1111 = INT16_MIN;
	int32_t x1112 = -1;
	volatile int32_t t183 = 19709593;

    t183 = ((x1109/x1110)<=(x1111*x1112));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x1117 = INT64_MAX;
	uint32_t x1118 = 1U;
	static uint16_t x1119 = 2U;

    t184 = ((x1117/x1118)<=(x1119*x1120));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x1121 = -1;
	uint64_t x1122 = 32373310475817LLU;
	int32_t x1123 = -1;
	static uint8_t x1124 = 5U;
	volatile int32_t t185 = -5483470;

    t185 = ((x1121/x1122)<=(x1123*x1124));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t t186 = -679;

    t186 = ((x1125/x1126)<=(x1127*x1128));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x1129 = -14;
	uint32_t x1130 = UINT32_MAX;
	int16_t x1131 = INT16_MIN;
	uint16_t x1132 = 1U;
	int32_t t187 = 2924;

    t187 = ((x1129/x1130)<=(x1131*x1132));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1133 = -1;
	uint16_t x1134 = 47U;
	int16_t x1135 = INT16_MIN;
	int32_t t188 = 187569662;

    t188 = ((x1133/x1134)<=(x1135*x1136));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1141 = 14;
	static uint32_t x1142 = 61337519U;
	volatile uint16_t x1143 = UINT16_MAX;

    t189 = ((x1141/x1142)<=(x1143*x1144));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1145 = INT16_MIN;
	int16_t x1146 = -1;
	int32_t x1148 = -1;
	int32_t t190 = -3;

    t190 = ((x1145/x1146)<=(x1147*x1148));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1149 = 434;
	static uint32_t x1151 = 12445564U;
	uint64_t x1152 = 4562990600337LLU;
	int32_t t191 = 3;

    t191 = ((x1149/x1150)<=(x1151*x1152));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1153 = -119475665795620375LL;
	static uint8_t x1154 = UINT8_MAX;
	static int16_t x1155 = INT16_MIN;
	volatile uint64_t x1156 = UINT64_MAX;
	int32_t t192 = -1;

    t192 = ((x1153/x1154)<=(x1155*x1156));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x1157 = -1;
	static int8_t x1158 = INT8_MIN;
	volatile int8_t x1159 = INT8_MIN;
	volatile int32_t t193 = 861191808;

    t193 = ((x1157/x1158)<=(x1159*x1160));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint64_t x1161 = 2LLU;
	int64_t x1162 = INT64_MIN;
	static uint64_t x1163 = UINT64_MAX;
	uint64_t x1164 = 268258010842LLU;
	volatile int32_t t194 = 0;

    t194 = ((x1161/x1162)<=(x1163*x1164));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1165 = 10;
	static volatile int64_t x1166 = INT64_MAX;
	uint32_t x1168 = 425U;
	volatile int32_t t195 = 3246820;

    t195 = ((x1165/x1166)<=(x1167*x1168));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1169 = 11;
	uint8_t x1170 = UINT8_MAX;
	static int8_t x1172 = INT8_MAX;
	volatile int32_t t196 = 1398;

    t196 = ((x1169/x1170)<=(x1171*x1172));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1173 = -830092LL;
	volatile uint8_t x1174 = 1U;
	int64_t x1175 = 3096566LL;
	volatile uint16_t x1176 = 2430U;
	int32_t t197 = 98762596;

    t197 = ((x1173/x1174)<=(x1175*x1176));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x1189 = -1;
	uint64_t x1191 = UINT64_MAX;
	volatile uint8_t x1192 = UINT8_MAX;
	volatile int32_t t198 = -972454;

    t198 = ((x1189/x1190)<=(x1191*x1192));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1194 = INT64_MAX;
	int16_t x1195 = -1;
	static volatile int32_t t199 = 1;

    t199 = ((x1193/x1194)<=(x1195*x1196));

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

