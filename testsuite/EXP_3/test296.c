
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

static uint8_t x2 = 25U;
int32_t t2 = 2604;
uint16_t x15 = UINT16_MAX;
static volatile int64_t t3 = -13607423113LL;
int16_t x17 = INT16_MAX;
static uint32_t x24 = 1776110295U;
int16_t x33 = INT16_MAX;
uint32_t t8 = 297U;
int16_t x44 = -1;
uint64_t x48 = 7823LLU;
static uint64_t t10 = 87402204636806LLU;
int8_t x55 = 1;
int64_t x56 = -691LL;
int64_t x57 = 346217LL;
volatile uint64_t x64 = UINT64_MAX;
volatile uint64_t t14 = 11036759547LLU;
uint16_t x68 = UINT16_MAX;
uint16_t x71 = UINT16_MAX;
int8_t x72 = INT8_MIN;
int32_t t16 = -1587;
static int32_t x85 = -997187;
int64_t x86 = INT64_MAX;
uint16_t x87 = 15818U;
int32_t t17 = 15;
static int8_t x92 = -6;
int32_t t18 = -29924;
uint8_t x96 = 39U;
static uint64_t x109 = UINT64_MAX;
uint8_t x114 = 5U;
int64_t x116 = -6179616286890127LL;
int8_t x117 = INT8_MIN;
uint32_t t26 = 179U;
uint16_t x129 = 5U;
volatile int8_t x131 = -14;
static uint64_t x132 = UINT64_MAX;
int16_t x133 = -22;
uint32_t x137 = 276123U;
uint32_t x139 = 6443U;
static volatile int64_t x140 = -339645988568LL;
int64_t x148 = INT64_MAX;
int64_t t31 = 1878531473651LL;
int64_t x157 = -4975941LL;
static uint32_t x159 = 514800518U;
volatile int8_t x160 = 6;
uint32_t t34 = 793U;
static uint16_t x177 = UINT16_MAX;
uint8_t x187 = UINT8_MAX;
uint8_t x188 = 43U;
static volatile int8_t x189 = INT8_MAX;
int32_t x192 = 10868;
int32_t x194 = INT32_MIN;
uint8_t x198 = 2U;
uint64_t x199 = UINT64_MAX;
volatile uint64_t t43 = 86978104705LLU;
static volatile uint64_t t44 = 27330378LLU;
int8_t x210 = -4;
int32_t x224 = 20637;
uint64_t t50 = 25813345077041663LLU;
uint8_t x236 = 87U;
uint16_t x247 = 468U;
uint64_t t53 = 2098967LLU;
uint8_t x252 = 2U;
uint32_t x255 = 1290337U;
int8_t x275 = INT8_MAX;
uint8_t x276 = 0U;
uint8_t x280 = 6U;
uint16_t x281 = UINT16_MAX;
static uint32_t x287 = 50U;
static int32_t t64 = 791912;
int64_t x295 = 42662572420LL;
uint64_t x296 = 3113904074411427LLU;
static uint32_t x299 = UINT32_MAX;
int32_t x306 = INT32_MIN;
uint16_t x307 = UINT16_MAX;
static volatile int32_t t69 = -699;
uint64_t x316 = UINT64_MAX;
static int32_t x326 = -1;
volatile uint8_t x328 = UINT8_MAX;
static int32_t x334 = -79718;
volatile uint64_t x336 = UINT64_MAX;
int8_t x338 = 42;
int16_t x340 = -9;
uint32_t t76 = 93521U;
int8_t x343 = INT8_MIN;
int8_t x345 = -1;
int8_t x349 = -11;
volatile uint32_t x350 = UINT32_MAX;
volatile int32_t t79 = -41159;
static int64_t x355 = -3525275LL;
uint64_t x359 = 42236280065425LLU;
int32_t x375 = 859997;
static uint32_t x384 = 30044920U;
int32_t t88 = -165817;
static int64_t x402 = 484LL;
volatile int64_t t91 = 1046904LL;
int16_t x418 = -1;
volatile uint32_t x421 = 1823238057U;
int64_t x423 = INT64_MAX;
static uint64_t x432 = UINT64_MAX;
static uint16_t x434 = 5233U;
volatile uint32_t x436 = 548U;
uint8_t x447 = 9U;
static volatile int32_t t98 = -1504;
static int16_t x449 = INT16_MIN;
int16_t x450 = INT16_MIN;
static volatile uint8_t x455 = 7U;
uint64_t x460 = 3LLU;
uint64_t x468 = UINT64_MAX;
volatile int8_t x475 = -22;
uint8_t x477 = UINT8_MAX;
volatile int64_t x488 = INT64_MIN;
volatile int32_t t108 = -3491000;
uint32_t x494 = UINT32_MAX;
volatile int32_t t109 = -236;
volatile int16_t x497 = INT16_MIN;
volatile uint16_t x503 = 119U;
uint64_t x507 = 866103879036776196LLU;
int16_t x508 = -1;
uint64_t t112 = 3LLU;
int16_t x513 = 22;
int8_t x536 = INT8_MIN;
int8_t x552 = INT8_MIN;
volatile uint64_t t120 = 4208772098752409435LLU;
int8_t x559 = INT8_MIN;
volatile uint8_t x563 = 0U;
static uint64_t t123 = 9LLU;
int32_t x575 = INT32_MAX;
volatile int32_t t124 = -23;
static int16_t x578 = 3;
static int16_t x579 = INT16_MIN;
uint64_t x589 = 1042272739162877416LLU;
static uint64_t x590 = UINT64_MAX;
uint64_t x592 = UINT64_MAX;
static int64_t x594 = INT64_MIN;
uint8_t x599 = 57U;
uint16_t x602 = 295U;
uint8_t x604 = 24U;
static volatile uint64_t x613 = 46495LLU;
volatile int64_t x614 = -1LL;
int32_t x615 = 136;
int8_t x617 = INT8_MAX;
int64_t x624 = INT64_MIN;
int32_t t136 = 882;
int64_t t137 = 2899464989894LL;
static volatile int16_t x644 = 1;
static uint16_t x646 = UINT16_MAX;
volatile uint8_t x651 = 16U;
int32_t t142 = 6882;
uint64_t x653 = 102207620370821865LLU;
int16_t x658 = -1;
volatile int64_t x659 = INT64_MIN;
int64_t x662 = INT64_MIN;
uint32_t t145 = 268985U;
int8_t x670 = -1;
static volatile uint32_t x678 = 17402U;
static volatile uint64_t t148 = 469169826958636LLU;
uint8_t x681 = UINT8_MAX;
int16_t x682 = INT16_MIN;
static uint64_t t149 = 52165LLU;
static int16_t x696 = 2;
volatile int16_t x702 = INT16_MIN;
uint16_t x704 = UINT16_MAX;
static uint8_t x705 = UINT8_MAX;
uint16_t x708 = UINT16_MAX;
int64_t x709 = -115300852001634LL;
int32_t x716 = INT32_MIN;
uint64_t t158 = 96181676039LLU;
volatile uint64_t t159 = 197252450756264LLU;
volatile uint8_t x729 = UINT8_MAX;
static int16_t x733 = INT16_MAX;
uint16_t x744 = 951U;
uint64_t x748 = UINT64_MAX;
int32_t x749 = -8;
int16_t x750 = INT16_MIN;
int8_t x751 = -1;
int32_t x753 = -46827462;
int32_t x758 = INT32_MIN;
volatile uint64_t x760 = UINT64_MAX;
int64_t x766 = INT64_MIN;
int32_t x768 = -1;
uint32_t x772 = 4U;
uint32_t x784 = 370U;
uint16_t x788 = 47U;
static volatile int64_t t174 = 161782231904074LL;
int16_t x798 = INT16_MIN;
int16_t x800 = INT16_MIN;
static volatile uint64_t t178 = 283006987928393LLU;
uint16_t x816 = 136U;
volatile int64_t x823 = -19846LL;
int64_t t182 = 1977308411142LL;
volatile uint64_t x827 = UINT64_MAX;
volatile uint16_t x839 = 3U;
int8_t x852 = -1;
uint8_t x854 = UINT8_MAX;
uint8_t x855 = UINT8_MAX;
int8_t x858 = -1;
static volatile uint64_t x860 = 87LLU;
volatile uint64_t t190 = 13LLU;
int32_t x861 = INT32_MIN;
static int64_t x862 = INT64_MIN;
int16_t x864 = INT16_MAX;
uint64_t x867 = 4002LLU;
volatile int32_t t198 = 7520;
static int64_t x893 = -8249294021LL;
int16_t x895 = INT16_MAX;
int8_t x896 = 1;
static volatile int32_t t199 = -3658382;


void f0(void) {
    	uint64_t x1 = 4066770185035384795LLU;
	uint8_t x3 = 0U;
	int32_t x4 = -1;
	volatile int32_t t0 = 1852;

    t0 = ((x1==x2)-(x3-x4));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 5U;
	uint64_t x6 = UINT64_MAX;
	uint64_t x7 = 15698329LLU;
	int32_t x8 = -1;
	uint64_t t1 = 3402110351135268LLU;

    t1 = ((x5==x6)-(x7-x8));

    if (t1 != 18446744073693853286LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = INT32_MIN;
	static volatile int64_t x10 = 478935462586LL;
	int16_t x11 = 7;
	int16_t x12 = -1;

    t2 = ((x9==x10)-(x11-x12));

    if (t2 != -8) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	volatile int32_t x14 = INT32_MAX;
	static int64_t x16 = -4173197172281159160LL;

    t3 = ((x13==x14)-(x15-x16));

    if (t3 != -4173197172281224695LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x18 = 2;
	uint8_t x19 = UINT8_MAX;
	int16_t x20 = INT16_MIN;
	static volatile int32_t t4 = 303383;

    t4 = ((x17==x18)-(x19-x20));

    if (t4 != -33023) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = UINT16_MAX;
	int8_t x22 = -1;
	volatile uint32_t x23 = 68U;
	volatile uint32_t t5 = 7256U;

    t5 = ((x21==x22)-(x23-x24));

    if (t5 != 1776110227U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x25 = INT64_MIN;
	static int16_t x26 = -1;
	uint32_t x27 = 74169U;
	static int8_t x28 = -9;
	static uint32_t t6 = 122136U;

    t6 = ((x25==x26)-(x27-x28));

    if (t6 != 4294893118U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = 1U;
	uint16_t x30 = 1U;
	int16_t x31 = -2636;
	int16_t x32 = INT16_MIN;
	volatile int32_t t7 = 579242;

    t7 = ((x29==x30)-(x31-x32));

    if (t7 != -30131) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x34 = -9;
	uint32_t x35 = 5554881U;
	int16_t x36 = INT16_MIN;

    t8 = ((x33==x34)-(x35-x36));

    if (t8 != 4289379647U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x41 = 1091158230121826626LLU;
	static int8_t x42 = -32;
	static int16_t x43 = INT16_MIN;
	int32_t t9 = 102;

    t9 = ((x41==x42)-(x43-x44));

    if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x45 = 2049U;
	uint32_t x46 = 1218544752U;
	volatile uint64_t x47 = UINT64_MAX;

    t10 = ((x45==x46)-(x47-x48));

    if (t10 != 7824LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x49 = 341535U;
	int16_t x50 = -85;
	int16_t x51 = INT16_MIN;
	static int16_t x52 = INT16_MIN;
	int32_t t11 = 6692;

    t11 = ((x49==x50)-(x51-x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x53 = INT32_MIN;
	int32_t x54 = INT32_MIN;
	int64_t t12 = 3LL;

    t12 = ((x53==x54)-(x55-x56));

    if (t12 != -691LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x58 = -1;
	static uint16_t x59 = 53U;
	int16_t x60 = INT16_MIN;
	int32_t t13 = 15;

    t13 = ((x57==x58)-(x59-x60));

    if (t13 != -32821) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x61 = 474271665287400LLU;
	volatile uint32_t x62 = 2351440U;
	uint32_t x63 = UINT32_MAX;

    t14 = ((x61==x62)-(x63-x64));

    if (t14 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x65 = INT16_MAX;
	static volatile int8_t x66 = INT8_MAX;
	static int32_t x67 = INT32_MAX;
	volatile int32_t t15 = -5620;

    t15 = ((x65==x66)-(x67-x68));

    if (t15 != -2147418112) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x69 = INT16_MAX;
	static int64_t x70 = INT64_MAX;

    t16 = ((x69==x70)-(x71-x72));

    if (t16 != -65663) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x88 = 14355U;

    t17 = ((x85==x86)-(x87-x88));

    if (t17 != -1463) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x89 = 7U;
	int64_t x90 = -1LL;
	uint16_t x91 = 26U;

    t18 = ((x89==x90)-(x91-x92));

    if (t18 != -32) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x93 = 22U;
	int32_t x94 = -763;
	uint64_t x95 = 73101LLU;
	static volatile uint64_t t19 = 43365699623591LLU;

    t19 = ((x93==x94)-(x95-x96));

    if (t19 != 18446744073709478554LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x97 = -1;
	static int32_t x98 = -21006672;
	volatile int32_t x99 = -1;
	static volatile int8_t x100 = -13;
	static volatile int32_t t20 = -405;

    t20 = ((x97==x98)-(x99-x100));

    if (t20 != -12) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x101 = 1;
	int8_t x102 = INT8_MAX;
	int16_t x103 = INT16_MIN;
	uint16_t x104 = 16U;
	volatile int32_t t21 = -389260758;

    t21 = ((x101==x102)-(x103-x104));

    if (t21 != 32784) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x110 = -1;
	static int16_t x111 = INT16_MIN;
	int64_t x112 = INT64_MIN;
	volatile int64_t t22 = -2049826773LL;

    t22 = ((x109==x110)-(x111-x112));

    if (t22 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x113 = -1;
	int8_t x115 = -1;
	static int64_t t23 = 259830LL;

    t23 = ((x113==x114)-(x115-x116));

    if (t23 != -6179616286890126LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint8_t x118 = UINT8_MAX;
	int16_t x119 = -7;
	uint64_t x120 = 259148956165885LLU;
	static volatile uint64_t t24 = 73656691772382794LLU;

    t24 = ((x117==x118)-(x119-x120));

    if (t24 != 259148956165892LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x121 = -1;
	uint8_t x122 = UINT8_MAX;
	int8_t x123 = -1;
	volatile uint32_t x124 = UINT32_MAX;
	static volatile uint32_t t25 = 299U;

    t25 = ((x121==x122)-(x123-x124));

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x125 = 1;
	static volatile uint32_t x126 = 3U;
	uint32_t x127 = 3U;
	int16_t x128 = INT16_MIN;

    t26 = ((x125==x126)-(x127-x128));

    if (t26 != 4294934525U) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x130 = INT64_MIN;
	uint64_t t27 = 35LLU;

    t27 = ((x129==x130)-(x131-x132));

    if (t27 != 13LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x134 = 204;
	int64_t x135 = -1LL;
	volatile int64_t x136 = INT64_MIN;
	volatile int64_t t28 = -1012364139573814LL;

    t28 = ((x133==x134)-(x135-x136));

    if (t28 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x138 = -1;
	volatile int64_t t29 = -863996533LL;

    t29 = ((x137==x138)-(x139-x140));

    if (t29 != -339645995011LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint32_t x141 = 4271165U;
	uint32_t x142 = 5635704U;
	volatile uint64_t x143 = 3LLU;
	volatile int8_t x144 = -1;
	uint64_t t30 = 258722493LLU;

    t30 = ((x141==x142)-(x143-x144));

    if (t30 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x145 = 1117LL;
	int16_t x146 = -1;
	static uint8_t x147 = UINT8_MAX;

    t31 = ((x145==x146)-(x147-x148));

    if (t31 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x149 = 60515153304436LL;
	volatile uint16_t x150 = UINT16_MAX;
	uint16_t x151 = UINT16_MAX;
	uint32_t x152 = UINT32_MAX;
	volatile uint32_t t32 = 3986339U;

    t32 = ((x149==x150)-(x151-x152));

    if (t32 != 4294901760U) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x153 = -1674585799812557LL;
	uint16_t x154 = UINT16_MAX;
	int32_t x155 = -1;
	int64_t x156 = -3755LL;
	volatile int64_t t33 = -353LL;

    t33 = ((x153==x154)-(x155-x156));

    if (t33 != -3754LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x158 = INT32_MAX;

    t34 = ((x157==x158)-(x159-x160));

    if (t34 != 3780166784U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x161 = 15134U;
	static int8_t x162 = INT8_MIN;
	int32_t x163 = INT32_MIN;
	uint64_t x164 = 4353185624468687LLU;
	static volatile uint64_t t35 = 61894185751897673LLU;

    t35 = ((x161==x162)-(x163-x164));

    if (t35 != 4353187771952335LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x165 = INT8_MIN;
	volatile int8_t x166 = INT8_MIN;
	static int32_t x167 = 1237076;
	int16_t x168 = INT16_MAX;
	int32_t t36 = 1;

    t36 = ((x165==x166)-(x167-x168));

    if (t36 != -1204308) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x169 = -7;
	static volatile int8_t x170 = INT8_MIN;
	int16_t x171 = 7;
	uint64_t x172 = UINT64_MAX;
	volatile uint64_t t37 = 172460288007LLU;

    t37 = ((x169==x170)-(x171-x172));

    if (t37 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x178 = INT64_MIN;
	int16_t x179 = INT16_MIN;
	int64_t x180 = -1LL;
	int64_t t38 = -268LL;

    t38 = ((x177==x178)-(x179-x180));

    if (t38 != 32767LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x181 = UINT32_MAX;
	static int64_t x182 = INT64_MIN;
	int8_t x183 = INT8_MAX;
	uint16_t x184 = UINT16_MAX;
	int32_t t39 = 15;

    t39 = ((x181==x182)-(x183-x184));

    if (t39 != 65408) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x185 = INT8_MIN;
	int32_t x186 = INT32_MIN;
	volatile int32_t t40 = 1987;

    t40 = ((x185==x186)-(x187-x188));

    if (t40 != -212) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x190 = 2035U;
	int32_t x191 = -1;
	volatile int32_t t41 = -2;

    t41 = ((x189==x190)-(x191-x192));

    if (t41 != 10869) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x193 = 162532412522448LL;
	int32_t x195 = INT32_MAX;
	uint64_t x196 = 95946721393886LLU;
	uint64_t t42 = 5445595305477LLU;

    t42 = ((x193==x194)-(x195-x196));

    if (t42 != 95944573910239LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x197 = 1026218128U;
	int16_t x200 = -2507;

    t43 = ((x197==x198)-(x199-x200));

    if (t43 != 18446744073709549110LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x205 = INT8_MIN;
	volatile int32_t x206 = 1;
	uint64_t x207 = 251898775653234LLU;
	volatile uint8_t x208 = 4U;

    t44 = ((x205==x206)-(x207-x208));

    if (t44 != 18446492174933898386LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x209 = UINT64_MAX;
	volatile uint32_t x211 = 0U;
	uint16_t x212 = UINT16_MAX;
	uint32_t t45 = 3536U;

    t45 = ((x209==x210)-(x211-x212));

    if (t45 != 65535U) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x213 = INT64_MIN;
	volatile int16_t x214 = -1;
	uint64_t x215 = 1576143882LLU;
	static volatile int64_t x216 = INT64_MIN;
	uint64_t t46 = 444374072177LLU;

    t46 = ((x213==x214)-(x215-x216));

    if (t46 != 9223372035278631926LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x217 = 77972636136624141LLU;
	static uint8_t x218 = 0U;
	static uint8_t x219 = 29U;
	int32_t x220 = -1;
	volatile int32_t t47 = 408911386;

    t47 = ((x217==x218)-(x219-x220));

    if (t47 != -30) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x221 = INT32_MAX;
	volatile uint16_t x222 = 7U;
	volatile uint64_t x223 = UINT64_MAX;
	uint64_t t48 = 185248409229181114LLU;

    t48 = ((x221==x222)-(x223-x224));

    if (t48 != 20638LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x225 = -63737;
	int16_t x226 = -193;
	volatile uint8_t x227 = 6U;
	static volatile uint8_t x228 = UINT8_MAX;
	int32_t t49 = -245638088;

    t49 = ((x225==x226)-(x227-x228));

    if (t49 != 249) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x229 = 6U;
	int8_t x230 = INT8_MAX;
	uint64_t x231 = 72100312LLU;
	int32_t x232 = 456563;

    t50 = ((x229==x230)-(x231-x232));

    if (t50 != 18446744073637907867LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x233 = 13;
	int8_t x234 = INT8_MIN;
	uint8_t x235 = 0U;
	volatile int32_t t51 = -12381;

    t51 = ((x233==x234)-(x235-x236));

    if (t51 != 87) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x237 = UINT8_MAX;
	int32_t x238 = -82;
	int32_t x239 = -12;
	uint16_t x240 = 166U;
	volatile int32_t t52 = 640209998;

    t52 = ((x237==x238)-(x239-x240));

    if (t52 != 178) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x245 = INT64_MIN;
	static int64_t x246 = INT64_MAX;
	volatile uint64_t x248 = 2LLU;

    t53 = ((x245==x246)-(x247-x248));

    if (t53 != 18446744073709551150LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x249 = INT64_MAX;
	static uint16_t x250 = 14577U;
	volatile uint32_t x251 = 92116342U;
	uint32_t t54 = 10929U;

    t54 = ((x249==x250)-(x251-x252));

    if (t54 != 4202850956U) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x253 = -1;
	volatile uint8_t x254 = UINT8_MAX;
	int64_t x256 = -1LL;
	volatile int64_t t55 = 4LL;

    t55 = ((x253==x254)-(x255-x256));

    if (t55 != -1290338LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x257 = -1;
	int64_t x258 = 0LL;
	static int64_t x259 = 2849728039801741087LL;
	static uint64_t x260 = UINT64_MAX;
	static uint64_t t56 = 3513401435431251498LLU;

    t56 = ((x257==x258)-(x259-x260));

    if (t56 != 15597016033907810528LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x261 = INT64_MIN;
	int8_t x262 = -40;
	int32_t x263 = -1;
	uint8_t x264 = 18U;
	volatile int32_t t57 = -10461198;

    t57 = ((x261==x262)-(x263-x264));

    if (t57 != 19) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x265 = 2339516709623094225LL;
	volatile int16_t x266 = INT16_MIN;
	volatile int64_t x267 = 61605978LL;
	uint64_t x268 = 430427864LLU;
	uint64_t t58 = 45038506971336963LLU;

    t58 = ((x265==x266)-(x267-x268));

    if (t58 != 368821886LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x269 = -1;
	volatile int8_t x270 = -1;
	int64_t x271 = -28547463LL;
	int16_t x272 = INT16_MAX;
	volatile int64_t t59 = 802682LL;

    t59 = ((x269==x270)-(x271-x272));

    if (t59 != 28580231LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x273 = INT8_MIN;
	volatile uint32_t x274 = 29U;
	volatile int32_t t60 = 5394112;

    t60 = ((x273==x274)-(x275-x276));

    if (t60 != -127) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x277 = UINT64_MAX;
	static int32_t x278 = -112112998;
	int64_t x279 = INT64_MAX;
	static volatile int64_t t61 = -125345055LL;

    t61 = ((x277==x278)-(x279-x280));

    if (t61 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x282 = 2U;
	static int16_t x283 = INT16_MIN;
	static volatile int64_t x284 = -1LL;
	volatile int64_t t62 = 81LL;

    t62 = ((x281==x282)-(x283-x284));

    if (t62 != 32767LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x285 = -1;
	static int64_t x286 = INT64_MIN;
	volatile int8_t x288 = -1;
	volatile uint32_t t63 = 69729U;

    t63 = ((x285==x286)-(x287-x288));

    if (t63 != 4294967245U) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x289 = INT16_MAX;
	int32_t x290 = -24197583;
	int16_t x291 = -1;
	int32_t x292 = -78551;

    t64 = ((x289==x290)-(x291-x292));

    if (t64 != -78550) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x293 = UINT64_MAX;
	int16_t x294 = -1;
	volatile uint64_t t65 = 31LLU;

    t65 = ((x293==x294)-(x295-x296));

    if (t65 != 3113861411839008LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x297 = 1909;
	uint8_t x298 = UINT8_MAX;
	uint8_t x300 = 4U;
	volatile uint32_t t66 = 11U;

    t66 = ((x297==x298)-(x299-x300));

    if (t66 != 5U) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x301 = -4185216313463293LL;
	volatile int32_t x302 = -3852;
	volatile int64_t x303 = 9622386757986413LL;
	uint16_t x304 = 192U;
	int64_t t67 = -56789961096802LL;

    t67 = ((x301==x302)-(x303-x304));

    if (t67 != -9622386757986221LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x305 = INT16_MAX;
	static int8_t x308 = INT8_MIN;
	static int32_t t68 = -130614;

    t68 = ((x305==x306)-(x307-x308));

    if (t68 != -65663) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x309 = 11787;
	int16_t x310 = INT16_MIN;
	static volatile int8_t x311 = INT8_MAX;
	static int32_t x312 = 269960;

    t69 = ((x309==x310)-(x311-x312));

    if (t69 != 269833) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x313 = -1;
	int64_t x314 = INT64_MIN;
	int32_t x315 = INT32_MIN;
	uint64_t t70 = 86872166072675631LLU;

    t70 = ((x313==x314)-(x315-x316));

    if (t70 != 2147483647LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x317 = INT32_MAX;
	volatile int16_t x318 = INT16_MIN;
	int16_t x319 = 636;
	static uint8_t x320 = 25U;
	int32_t t71 = 2315;

    t71 = ((x317==x318)-(x319-x320));

    if (t71 != -611) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x321 = -1LL;
	int64_t x322 = -785261292LL;
	uint16_t x323 = UINT16_MAX;
	int16_t x324 = 3853;
	volatile int32_t t72 = -9;

    t72 = ((x321==x322)-(x323-x324));

    if (t72 != -61682) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x325 = -1;
	uint32_t x327 = 0U;
	uint32_t t73 = 46U;

    t73 = ((x325==x326)-(x327-x328));

    if (t73 != 256U) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x329 = 25959LLU;
	uint64_t x330 = 89285119289LLU;
	uint32_t x331 = UINT32_MAX;
	int64_t x332 = 2332LL;
	volatile int64_t t74 = 101838693453749LL;

    t74 = ((x329==x330)-(x331-x332));

    if (t74 != -4294964963LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x333 = 1U;
	static int16_t x335 = -12589;
	volatile uint64_t t75 = 118872088LLU;

    t75 = ((x333==x334)-(x335-x336));

    if (t75 != 12588LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint16_t x337 = UINT16_MAX;
	static uint32_t x339 = 463U;

    t76 = ((x337==x338)-(x339-x340));

    if (t76 != 4294966824U) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x341 = 1U;
	int64_t x342 = INT64_MAX;
	static int8_t x344 = -22;
	static volatile int32_t t77 = -329;

    t77 = ((x341==x342)-(x343-x344));

    if (t77 != 106) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x346 = 23612612LL;
	int32_t x347 = -2;
	uint64_t x348 = UINT64_MAX;
	static volatile uint64_t t78 = 477401LLU;

    t78 = ((x345==x346)-(x347-x348));

    if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x351 = INT8_MAX;
	int8_t x352 = INT8_MIN;

    t79 = ((x349==x350)-(x351-x352));

    if (t79 != -255) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x353 = -957;
	volatile uint16_t x354 = 6703U;
	uint16_t x356 = 287U;
	static volatile int64_t t80 = 388651445LL;

    t80 = ((x353==x354)-(x355-x356));

    if (t80 != 3525562LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x357 = -1;
	uint8_t x358 = UINT8_MAX;
	uint8_t x360 = UINT8_MAX;
	static uint64_t t81 = 49803LLU;

    t81 = ((x357==x358)-(x359-x360));

    if (t81 != 18446701837429486446LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x361 = -1;
	int16_t x362 = -1;
	static uint16_t x363 = UINT16_MAX;
	int32_t x364 = INT32_MAX;
	volatile int32_t t82 = -904;

    t82 = ((x361==x362)-(x363-x364));

    if (t82 != 2147418113) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x369 = -11452189;
	int32_t x370 = INT32_MAX;
	int16_t x371 = INT16_MIN;
	int64_t x372 = INT64_MIN;
	static int64_t t83 = 5591344501301068LL;

    t83 = ((x369==x370)-(x371-x372));

    if (t83 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x373 = -38;
	uint8_t x374 = 73U;
	volatile int16_t x376 = INT16_MIN;
	int32_t t84 = -8377218;

    t84 = ((x373==x374)-(x375-x376));

    if (t84 != -892765) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int16_t x381 = -1;
	int8_t x382 = 12;
	uint16_t x383 = 3265U;
	static volatile uint32_t t85 = 1388370U;

    t85 = ((x381==x382)-(x383-x384));

    if (t85 != 30041655U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x385 = 11;
	volatile int64_t x386 = -1LL;
	static uint8_t x387 = 122U;
	int16_t x388 = -8710;
	static volatile int32_t t86 = 1;

    t86 = ((x385==x386)-(x387-x388));

    if (t86 != -8832) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x389 = INT64_MIN;
	static int16_t x390 = INT16_MIN;
	uint32_t x391 = 473435700U;
	static uint16_t x392 = 18U;
	static uint32_t t87 = 0U;

    t87 = ((x389==x390)-(x391-x392));

    if (t87 != 3821531614U) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x393 = -1;
	static int64_t x394 = -1LL;
	uint16_t x395 = 224U;
	static int8_t x396 = -1;

    t88 = ((x393==x394)-(x395-x396));

    if (t88 != -224) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x397 = -1;
	int32_t x398 = INT32_MAX;
	int8_t x399 = -2;
	uint16_t x400 = 1U;
	volatile int32_t t89 = -42;

    t89 = ((x397==x398)-(x399-x400));

    if (t89 != 3) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x401 = 7;
	static int16_t x403 = -126;
	uint16_t x404 = 15229U;
	static volatile int32_t t90 = 91905459;

    t90 = ((x401==x402)-(x403-x404));

    if (t90 != 15355) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x405 = INT32_MAX;
	uint32_t x406 = 17079U;
	volatile int64_t x407 = -5476907LL;
	volatile int8_t x408 = 2;

    t91 = ((x405==x406)-(x407-x408));

    if (t91 != 5476909LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x413 = 1;
	static uint16_t x414 = 27U;
	uint8_t x415 = 84U;
	static int8_t x416 = INT8_MIN;
	volatile int32_t t92 = -998;

    t92 = ((x413==x414)-(x415-x416));

    if (t92 != -212) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x417 = -1;
	static uint64_t x419 = 73LLU;
	uint64_t x420 = 906127LLU;
	volatile uint64_t t93 = 3383844LLU;

    t93 = ((x417==x418)-(x419-x420));

    if (t93 != 906055LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x422 = INT64_MAX;
	static volatile uint64_t x424 = 1LLU;
	volatile uint64_t t94 = 51208778LLU;

    t94 = ((x421==x422)-(x423-x424));

    if (t94 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x429 = INT32_MAX;
	int64_t x430 = -1LL;
	uint32_t x431 = 7U;
	volatile uint64_t t95 = 866307658796401594LLU;

    t95 = ((x429==x430)-(x431-x432));

    if (t95 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint32_t x433 = 91846486U;
	uint8_t x435 = UINT8_MAX;
	volatile uint32_t t96 = 846542403U;

    t96 = ((x433==x434)-(x435-x436));

    if (t96 != 293U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x437 = 7U;
	int32_t x438 = INT32_MAX;
	int16_t x439 = INT16_MIN;
	uint8_t x440 = 8U;
	int32_t t97 = 11058113;

    t97 = ((x437==x438)-(x439-x440));

    if (t97 != 32776) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x445 = -1;
	int32_t x446 = -1;
	static int8_t x448 = INT8_MIN;

    t98 = ((x445==x446)-(x447-x448));

    if (t98 != -136) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x451 = UINT16_MAX;
	int32_t x452 = INT32_MAX;
	int32_t t99 = 123270;

    t99 = ((x449==x450)-(x451-x452));

    if (t99 != 2147418113) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x453 = 97LLU;
	int32_t x454 = INT32_MIN;
	uint8_t x456 = UINT8_MAX;
	static volatile int32_t t100 = 9058;

    t100 = ((x453==x454)-(x455-x456));

    if (t100 != 248) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x457 = -33;
	int8_t x458 = INT8_MAX;
	volatile int8_t x459 = INT8_MIN;
	uint64_t t101 = 201150961921951LLU;

    t101 = ((x457==x458)-(x459-x460));

    if (t101 != 131LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x461 = -1;
	volatile uint64_t x462 = 749964890330LLU;
	static int32_t x463 = -1;
	uint32_t x464 = 246135979U;
	static volatile uint32_t t102 = 31239U;

    t102 = ((x461==x462)-(x463-x464));

    if (t102 != 246135980U) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x465 = -1;
	uint8_t x466 = UINT8_MAX;
	uint64_t x467 = 221940416694580039LLU;
	static volatile uint64_t t103 = 917138764LLU;

    t103 = ((x465==x466)-(x467-x468));

    if (t103 != 18224803657014971576LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x473 = INT32_MIN;
	int64_t x474 = INT64_MIN;
	volatile uint64_t x476 = UINT64_MAX;
	uint64_t t104 = 6LLU;

    t104 = ((x473==x474)-(x475-x476));

    if (t104 != 21LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x478 = UINT64_MAX;
	int16_t x479 = INT16_MIN;
	int8_t x480 = -1;
	int32_t t105 = 0;

    t105 = ((x477==x478)-(x479-x480));

    if (t105 != 32767) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x481 = 5921432188272630LLU;
	volatile int64_t x482 = -1LL;
	int16_t x483 = 0;
	uint8_t x484 = 9U;
	static volatile int32_t t106 = -1;

    t106 = ((x481==x482)-(x483-x484));

    if (t106 != 9) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x485 = INT64_MIN;
	volatile uint16_t x486 = 10204U;
	volatile uint64_t x487 = UINT64_MAX;
	volatile uint64_t t107 = 367252621553255LLU;

    t107 = ((x485==x486)-(x487-x488));

    if (t107 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x489 = INT32_MIN;
	int16_t x490 = INT16_MIN;
	volatile int8_t x491 = -63;
	volatile uint8_t x492 = UINT8_MAX;

    t108 = ((x489==x490)-(x491-x492));

    if (t108 != 318) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x493 = 34U;
	int8_t x495 = 2;
	volatile int16_t x496 = INT16_MAX;

    t109 = ((x493==x494)-(x495-x496));

    if (t109 != 32765) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint64_t x498 = 27048331643LLU;
	uint32_t x499 = 237U;
	static int16_t x500 = INT16_MIN;
	volatile uint32_t t110 = 175130619U;

    t110 = ((x497==x498)-(x499-x500));

    if (t110 != 4294934291U) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x501 = INT32_MIN;
	uint8_t x502 = 1U;
	volatile int32_t x504 = -1305838;
	int32_t t111 = 0;

    t111 = ((x501==x502)-(x503-x504));

    if (t111 != -1305957) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x505 = -15;
	static volatile uint64_t x506 = UINT64_MAX;

    t112 = ((x505==x506)-(x507-x508));

    if (t112 != 17580640194672775419LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x509 = 10LLU;
	static uint64_t x510 = UINT64_MAX;
	uint16_t x511 = 12324U;
	int8_t x512 = INT8_MIN;
	int32_t t113 = -127;

    t113 = ((x509==x510)-(x511-x512));

    if (t113 != -12452) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x514 = INT32_MIN;
	volatile int32_t x515 = INT32_MAX;
	static int8_t x516 = 6;
	static volatile int32_t t114 = -5481970;

    t114 = ((x513==x514)-(x515-x516));

    if (t114 != -2147483641) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x517 = UINT64_MAX;
	int8_t x518 = 40;
	static int16_t x519 = INT16_MIN;
	int32_t x520 = -1;
	int32_t t115 = 2483829;

    t115 = ((x517==x518)-(x519-x520));

    if (t115 != 32767) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x521 = -3893;
	volatile int64_t x522 = 10LL;
	int32_t x523 = INT32_MIN;
	int32_t x524 = INT32_MIN;
	static volatile int32_t t116 = -115;

    t116 = ((x521==x522)-(x523-x524));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x533 = INT32_MIN;
	uint32_t x534 = UINT32_MAX;
	int32_t x535 = INT32_MIN;
	int32_t t117 = -237961;

    t117 = ((x533==x534)-(x535-x536));

    if (t117 != 2147483520) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x545 = -1;
	uint16_t x546 = 7U;
	int32_t x547 = INT32_MIN;
	static volatile int32_t x548 = INT32_MIN;
	volatile int32_t t118 = 62244;

    t118 = ((x545==x546)-(x547-x548));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x549 = 8U;
	static volatile int64_t x550 = -1LL;
	int32_t x551 = -1;
	int32_t t119 = 32386804;

    t119 = ((x549==x550)-(x551-x552));

    if (t119 != -127) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x553 = INT8_MAX;
	static uint16_t x554 = 966U;
	static int64_t x555 = -20502323871423730LL;
	uint64_t x556 = UINT64_MAX;

    t120 = ((x553==x554)-(x555-x556));

    if (t120 != 20502323871423729LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x557 = INT32_MIN;
	uint8_t x558 = UINT8_MAX;
	int16_t x560 = -94;
	int32_t t121 = 1856;

    t121 = ((x557==x558)-(x559-x560));

    if (t121 != 34) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x561 = INT32_MIN;
	int32_t x562 = 283453224;
	volatile int8_t x564 = 1;
	int32_t t122 = 30;

    t122 = ((x561==x562)-(x563-x564));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x569 = -1;
	int16_t x570 = 5;
	uint64_t x571 = UINT64_MAX;
	int16_t x572 = INT16_MIN;

    t123 = ((x569==x570)-(x571-x572));

    if (t123 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x573 = 12449U;
	int16_t x574 = 1;
	volatile int32_t x576 = 114;

    t124 = ((x573==x574)-(x575-x576));

    if (t124 != -2147483533) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x577 = INT32_MIN;
	static uint16_t x580 = 28580U;
	volatile int32_t t125 = -2698;

    t125 = ((x577==x578)-(x579-x580));

    if (t125 != 61348) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x585 = UINT8_MAX;
	int32_t x586 = -3;
	int32_t x587 = -1;
	int32_t x588 = INT32_MIN;
	volatile int32_t t126 = -17529;

    t126 = ((x585==x586)-(x587-x588));

    if (t126 != -2147483647) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x591 = -1LL;
	volatile uint64_t t127 = 1996032800LLU;

    t127 = ((x589==x590)-(x591-x592));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x593 = UINT8_MAX;
	volatile int16_t x595 = INT16_MAX;
	static int16_t x596 = INT16_MAX;
	static volatile int32_t t128 = -7;

    t128 = ((x593==x594)-(x595-x596));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x597 = INT8_MIN;
	int8_t x598 = INT8_MIN;
	static uint16_t x600 = 4265U;
	int32_t t129 = -455572562;

    t129 = ((x597==x598)-(x599-x600));

    if (t129 != 4209) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x601 = UINT8_MAX;
	uint16_t x603 = 4256U;
	int32_t t130 = -14494035;

    t130 = ((x601==x602)-(x603-x604));

    if (t130 != -4232) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint64_t x605 = 59321419311LLU;
	volatile uint64_t x606 = 224LLU;
	volatile int16_t x607 = 1;
	int64_t x608 = 7LL;
	volatile int64_t t131 = -92971441260099LL;

    t131 = ((x605==x606)-(x607-x608));

    if (t131 != 6LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x609 = 4U;
	uint8_t x610 = 6U;
	int8_t x611 = -1;
	int8_t x612 = 2;
	volatile int32_t t132 = 1352;

    t132 = ((x609==x610)-(x611-x612));

    if (t132 != 3) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x616 = -1;
	int32_t t133 = -45349478;

    t133 = ((x613==x614)-(x615-x616));

    if (t133 != -137) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint8_t x618 = 0U;
	int16_t x619 = INT16_MIN;
	uint64_t x620 = 466904219517543397LLU;
	volatile uint64_t t134 = 19036898LLU;

    t134 = ((x617==x618)-(x619-x620));

    if (t134 != 466904219517576165LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int8_t x621 = INT8_MIN;
	int32_t x622 = INT32_MIN;
	int8_t x623 = INT8_MIN;
	volatile int64_t t135 = -10832651248125LL;

    t135 = ((x621==x622)-(x623-x624));

    if (t135 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x625 = INT16_MIN;
	static uint8_t x626 = UINT8_MAX;
	int8_t x627 = 0;
	int32_t x628 = -7;

    t136 = ((x625==x626)-(x627-x628));

    if (t136 != -7) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x629 = -29;
	int16_t x630 = -77;
	int16_t x631 = -1;
	static int64_t x632 = 258983980LL;

    t137 = ((x629==x630)-(x631-x632));

    if (t137 != 258983981LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x633 = 0U;
	uint64_t x634 = 14497826371828548LLU;
	volatile int16_t x635 = -11;
	int32_t x636 = -49564;
	int32_t t138 = -312141;

    t138 = ((x633==x634)-(x635-x636));

    if (t138 != -49553) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t x637 = 801LLU;
	int8_t x638 = 11;
	int16_t x639 = INT16_MAX;
	uint64_t x640 = UINT64_MAX;
	static volatile uint64_t t139 = 12LLU;

    t139 = ((x637==x638)-(x639-x640));

    if (t139 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x641 = -6268285;
	int8_t x642 = INT8_MAX;
	static int32_t x643 = 7653;
	volatile int32_t t140 = -18;

    t140 = ((x641==x642)-(x643-x644));

    if (t140 != -7652) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x645 = INT8_MIN;
	int32_t x647 = -3406;
	volatile uint64_t x648 = UINT64_MAX;
	volatile uint64_t t141 = 78190757737127LLU;

    t141 = ((x645==x646)-(x647-x648));

    if (t141 != 3405LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint64_t x649 = 1920326535267452436LLU;
	uint8_t x650 = 48U;
	int16_t x652 = -3124;

    t142 = ((x649==x650)-(x651-x652));

    if (t142 != -3140) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int32_t x654 = INT32_MIN;
	int32_t x655 = -1;
	int32_t x656 = 1;
	int32_t t143 = -482204355;

    t143 = ((x653==x654)-(x655-x656));

    if (t143 != 2) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x657 = -40;
	static int8_t x660 = -1;
	static int64_t t144 = INT64_MAX;

    t144 = ((x657==x658)-(x659-x660));

    if (t144 != INT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x661 = 16185569737597108LLU;
	uint32_t x663 = UINT32_MAX;
	int32_t x664 = INT32_MIN;

    t145 = ((x661==x662)-(x663-x664));

    if (t145 != 2147483649U) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x669 = 428;
	uint64_t x671 = UINT64_MAX;
	int32_t x672 = -1;
	uint64_t t146 = 237250441LLU;

    t146 = ((x669==x670)-(x671-x672));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x673 = INT64_MIN;
	int64_t x674 = INT64_MIN;
	uint32_t x675 = 610U;
	int64_t x676 = 480112766692462LL;
	volatile int64_t t147 = 59555961459554LL;

    t147 = ((x673==x674)-(x675-x676));

    if (t147 != 480112766691853LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x677 = -76;
	static uint64_t x679 = UINT64_MAX;
	uint16_t x680 = UINT16_MAX;

    t148 = ((x677==x678)-(x679-x680));

    if (t148 != 65536LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x683 = -1LL;
	uint64_t x684 = UINT64_MAX;

    t149 = ((x681==x682)-(x683-x684));

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x685 = INT64_MAX;
	uint8_t x686 = UINT8_MAX;
	int16_t x687 = INT16_MIN;
	static int32_t x688 = -1;
	int32_t t150 = 989053;

    t150 = ((x685==x686)-(x687-x688));

    if (t150 != 32767) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x689 = INT64_MAX;
	static int32_t x690 = -1;
	int64_t x691 = 3397535LL;
	int8_t x692 = 36;
	int64_t t151 = -565181712587232LL;

    t151 = ((x689==x690)-(x691-x692));

    if (t151 != -3397499LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x693 = -1;
	volatile uint8_t x694 = UINT8_MAX;
	static volatile int8_t x695 = INT8_MIN;
	int32_t t152 = 1;

    t152 = ((x693==x694)-(x695-x696));

    if (t152 != 130) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x697 = -2LL;
	static int64_t x698 = -1LL;
	volatile int8_t x699 = INT8_MIN;
	uint16_t x700 = 42U;
	int32_t t153 = 77;

    t153 = ((x697==x698)-(x699-x700));

    if (t153 != 170) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x701 = INT32_MAX;
	volatile int16_t x703 = INT16_MAX;
	volatile int32_t t154 = 2555;

    t154 = ((x701==x702)-(x703-x704));

    if (t154 != 32768) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x706 = -67;
	int16_t x707 = 0;
	volatile int32_t t155 = 48392624;

    t155 = ((x705==x706)-(x707-x708));

    if (t155 != 65535) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x710 = INT32_MIN;
	uint64_t x711 = UINT64_MAX;
	volatile uint64_t x712 = UINT64_MAX;
	volatile uint64_t t156 = 6855LLU;

    t156 = ((x709==x710)-(x711-x712));

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x713 = UINT64_MAX;
	static uint8_t x714 = 1U;
	int64_t x715 = 188455974401LL;
	static volatile int64_t t157 = 12765LL;

    t157 = ((x713==x714)-(x715-x716));

    if (t157 != -190603458049LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint8_t x717 = 23U;
	int8_t x718 = -10;
	uint8_t x719 = UINT8_MAX;
	uint64_t x720 = UINT64_MAX;

    t158 = ((x717==x718)-(x719-x720));

    if (t158 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x721 = -13;
	int32_t x722 = INT32_MAX;
	static int64_t x723 = -2910317833LL;
	static uint64_t x724 = UINT64_MAX;

    t159 = ((x721==x722)-(x723-x724));

    if (t159 != 2910317832LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x725 = 229298280;
	volatile int8_t x726 = -1;
	static int64_t x727 = INT64_MIN;
	int8_t x728 = INT8_MIN;
	int64_t t160 = -1LL;

    t160 = ((x725==x726)-(x727-x728));

    if (t160 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint32_t x730 = 914387U;
	static uint32_t x731 = UINT32_MAX;
	uint8_t x732 = 1U;
	volatile uint32_t t161 = 109596024U;

    t161 = ((x729==x730)-(x731-x732));

    if (t161 != 2U) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x734 = INT64_MAX;
	static int8_t x735 = -1;
	uint16_t x736 = 98U;
	int32_t t162 = 167239;

    t162 = ((x733==x734)-(x735-x736));

    if (t162 != 99) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x741 = INT32_MIN;
	static int8_t x742 = INT8_MIN;
	static int8_t x743 = -1;
	volatile int32_t t163 = -2501002;

    t163 = ((x741==x742)-(x743-x744));

    if (t163 != 952) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x745 = 13;
	volatile uint64_t x746 = 244LLU;
	volatile uint32_t x747 = UINT32_MAX;
	static uint64_t t164 = 121063393136737LLU;

    t164 = ((x745==x746)-(x747-x748));

    if (t164 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x752 = -546736;
	volatile int32_t t165 = -744238454;

    t165 = ((x749==x750)-(x751-x752));

    if (t165 != -546735) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x754 = -9211498LL;
	volatile int32_t x755 = 0;
	volatile uint8_t x756 = 1U;
	volatile int32_t t166 = -1;

    t166 = ((x753==x754)-(x755-x756));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x757 = 37;
	int32_t x759 = -1;
	volatile uint64_t t167 = 12512934LLU;

    t167 = ((x757==x758)-(x759-x760));

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x761 = -1;
	int8_t x762 = INT8_MIN;
	int32_t x763 = INT32_MAX;
	int64_t x764 = INT64_MAX;
	static int64_t t168 = -3354779843146046LL;

    t168 = ((x761==x762)-(x763-x764));

    if (t168 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x765 = 0;
	int64_t x767 = INT64_MIN;
	int64_t t169 = INT64_MAX;

    t169 = ((x765==x766)-(x767-x768));

    if (t169 != INT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x769 = 414743172;
	int32_t x770 = INT32_MIN;
	volatile uint8_t x771 = 14U;
	volatile uint32_t t170 = 36611672U;

    t170 = ((x769==x770)-(x771-x772));

    if (t170 != 4294967286U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x773 = UINT8_MAX;
	int16_t x774 = -1;
	uint64_t x775 = 40731504312363LLU;
	int64_t x776 = INT64_MIN;
	volatile uint64_t t171 = 436990777003124LLU;

    t171 = ((x773==x774)-(x775-x776));

    if (t171 != 9223331305350463445LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x781 = 56;
	uint32_t x782 = 1053292U;
	static int32_t x783 = INT32_MAX;
	volatile uint32_t t172 = 43625U;

    t172 = ((x781==x782)-(x783-x784));

    if (t172 != 2147484019U) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x785 = INT8_MAX;
	int64_t x786 = INT64_MIN;
	int8_t x787 = INT8_MIN;
	static int32_t t173 = 3177593;

    t173 = ((x785==x786)-(x787-x788));

    if (t173 != 175) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x789 = INT32_MIN;
	uint32_t x790 = UINT32_MAX;
	int64_t x791 = 140403528809LL;
	uint8_t x792 = 1U;

    t174 = ((x789==x790)-(x791-x792));

    if (t174 != -140403528808LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x793 = -1;
	int16_t x794 = INT16_MAX;
	volatile int16_t x795 = -7872;
	int64_t x796 = 3829101LL;
	volatile int64_t t175 = 119467769LL;

    t175 = ((x793==x794)-(x795-x796));

    if (t175 != 3836973LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x797 = 1U;
	int16_t x799 = INT16_MIN;
	volatile int32_t t176 = -3;

    t176 = ((x797==x798)-(x799-x800));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x801 = INT16_MIN;
	int32_t x802 = INT32_MAX;
	volatile int64_t x803 = -1LL;
	uint16_t x804 = 111U;
	static volatile int64_t t177 = 3056958175027456LL;

    t177 = ((x801==x802)-(x803-x804));

    if (t177 != 112LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x805 = -1;
	uint8_t x806 = 1U;
	static uint64_t x807 = 14LLU;
	static int32_t x808 = -1;

    t178 = ((x805==x806)-(x807-x808));

    if (t178 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x809 = INT8_MIN;
	volatile int64_t x810 = INT64_MIN;
	static volatile int8_t x811 = INT8_MIN;
	int64_t x812 = 9592LL;
	volatile int64_t t179 = 807616913311999LL;

    t179 = ((x809==x810)-(x811-x812));

    if (t179 != 9720LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint32_t x813 = UINT32_MAX;
	uint16_t x814 = 417U;
	int16_t x815 = 2241;
	static int32_t t180 = -6;

    t180 = ((x813==x814)-(x815-x816));

    if (t180 != -2105) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x817 = INT32_MIN;
	int64_t x818 = -134897529842LL;
	volatile int32_t x819 = -1;
	int16_t x820 = -1;
	volatile int32_t t181 = -11200;

    t181 = ((x817==x818)-(x819-x820));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x821 = 4U;
	static uint64_t x822 = UINT64_MAX;
	static int64_t x824 = -1LL;

    t182 = ((x821==x822)-(x823-x824));

    if (t182 != 19845LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x825 = UINT16_MAX;
	int64_t x826 = 1197797LL;
	volatile uint16_t x828 = 67U;
	volatile uint64_t t183 = 14136325696747LLU;

    t183 = ((x825==x826)-(x827-x828));

    if (t183 != 68LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x829 = -1;
	static int64_t x830 = -117345114152965377LL;
	static uint64_t x831 = 12469878064622LLU;
	int16_t x832 = INT16_MIN;
	uint64_t t184 = 35462731487LLU;

    t184 = ((x829==x830)-(x831-x832));

    if (t184 != 18446731603831454226LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x833 = UINT16_MAX;
	int32_t x834 = INT32_MIN;
	int32_t x835 = -1;
	static int16_t x836 = -1;
	int32_t t185 = -3171;

    t185 = ((x833==x834)-(x835-x836));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x837 = INT8_MAX;
	static uint32_t x838 = UINT32_MAX;
	uint64_t x840 = 7673LLU;
	volatile uint64_t t186 = 103680779273454LLU;

    t186 = ((x837==x838)-(x839-x840));

    if (t186 != 7670LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x845 = 3U;
	static int64_t x846 = INT64_MIN;
	int8_t x847 = -44;
	uint16_t x848 = UINT16_MAX;
	volatile int32_t t187 = 0;

    t187 = ((x845==x846)-(x847-x848));

    if (t187 != 65579) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x849 = 1605;
	uint64_t x850 = 23LLU;
	int8_t x851 = INT8_MIN;
	int32_t t188 = -1437471;

    t188 = ((x849==x850)-(x851-x852));

    if (t188 != 127) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x853 = 716461332;
	uint8_t x856 = 18U;
	volatile int32_t t189 = -57;

    t189 = ((x853==x854)-(x855-x856));

    if (t189 != -237) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x857 = UINT32_MAX;
	int64_t x859 = 3126567687134154LL;

    t190 = ((x857==x858)-(x859-x860));

    if (t190 != 18443617506022417550LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x863 = 2761;
	int32_t t191 = -628653417;

    t191 = ((x861==x862)-(x863-x864));

    if (t191 != 30006) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x865 = INT64_MIN;
	uint16_t x866 = UINT16_MAX;
	uint32_t x868 = 46211U;
	uint64_t t192 = 153034LLU;

    t192 = ((x865==x866)-(x867-x868));

    if (t192 != 42209LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x869 = INT64_MIN;
	uint16_t x870 = 29795U;
	volatile int16_t x871 = -3;
	volatile uint32_t x872 = UINT32_MAX;
	uint32_t t193 = 57828U;

    t193 = ((x869==x870)-(x871-x872));

    if (t193 != 2U) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x873 = -1196LL;
	int16_t x874 = INT16_MIN;
	int8_t x875 = -1;
	int16_t x876 = INT16_MIN;
	volatile int32_t t194 = -172;

    t194 = ((x873==x874)-(x875-x876));

    if (t194 != -32767) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x877 = 353618U;
	int64_t x878 = -1LL;
	int32_t x879 = -27;
	volatile uint16_t x880 = 3U;
	static int32_t t195 = -32;

    t195 = ((x877==x878)-(x879-x880));

    if (t195 != 30) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x881 = INT8_MIN;
	uint8_t x882 = UINT8_MAX;
	int32_t x883 = -1;
	int32_t x884 = -1;
	volatile int32_t t196 = 249785;

    t196 = ((x881==x882)-(x883-x884));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x885 = INT64_MAX;
	int16_t x886 = -1;
	int8_t x887 = INT8_MAX;
	uint32_t x888 = 2412767U;
	uint32_t t197 = 21U;

    t197 = ((x885==x886)-(x887-x888));

    if (t197 != 2412640U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x889 = UINT8_MAX;
	int8_t x890 = INT8_MIN;
	int16_t x891 = -42;
	int16_t x892 = -28;

    t198 = ((x889==x890)-(x891-x892));

    if (t198 != 14) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x894 = 3;

    t199 = ((x893==x894)-(x895-x896));

    if (t199 != -32766) { NG(); } else { ; }
	
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

