
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

uint16_t x3 = 1U;
int32_t x6 = -1;
volatile int32_t x8 = INT32_MAX;
int64_t x15 = INT64_MAX;
volatile uint64_t t3 = 271704LLU;
uint64_t t4 = UINT64_MAX;
static int16_t x27 = INT16_MIN;
int64_t t6 = -450505358814LL;
volatile uint32_t x31 = 270U;
uint32_t t7 = 703123235U;
uint32_t x42 = 191520U;
volatile uint64_t t10 = 853502236045LLU;
int32_t x45 = -1;
int16_t x48 = 1;
volatile int64_t t11 = 6381539LL;
int32_t x49 = 0;
int64_t x55 = 5040087824661LL;
static volatile uint16_t x56 = 15115U;
uint32_t x57 = 94814U;
uint32_t x63 = 1452U;
int64_t t15 = 2LL;
int8_t x70 = 0;
uint8_t x76 = 8U;
int8_t x79 = INT8_MIN;
int64_t x85 = INT64_MAX;
volatile uint64_t t21 = 1510892646309LLU;
static int64_t x93 = INT64_MIN;
volatile uint8_t x95 = 3U;
int16_t x97 = INT16_MIN;
uint8_t x106 = 3U;
int8_t x110 = 14;
volatile uint64_t x118 = 29387LLU;
int16_t x120 = -1;
volatile int64_t x122 = -457168170595918LL;
uint64_t x127 = UINT64_MAX;
int8_t x144 = INT8_MIN;
static int64_t x145 = INT64_MIN;
int64_t x146 = 11668938854425LL;
static uint8_t x148 = UINT8_MAX;
int64_t x150 = INT64_MAX;
volatile int16_t x151 = 1747;
uint16_t x169 = 7U;
volatile int32_t x172 = INT32_MIN;
int8_t x177 = INT8_MAX;
uint8_t x180 = UINT8_MAX;
int16_t x187 = INT16_MIN;
volatile int32_t t47 = -10418;
static volatile int64_t t49 = 27779LL;
uint64_t x202 = UINT64_MAX;
uint64_t t50 = 32754506294LLU;
int16_t x211 = INT16_MAX;
volatile int64_t x219 = INT64_MIN;
int16_t x222 = -1;
uint64_t x228 = 205479LLU;
uint64_t t56 = 735394649904LLU;
int32_t x236 = -15047745;
volatile int64_t x240 = -1LL;
uint16_t x242 = 6U;
volatile int32_t x246 = 5563;
volatile uint64_t t63 = 10070476798317LLU;
int16_t x258 = 0;
uint64_t x260 = 12689LLU;
uint16_t x262 = UINT16_MAX;
int16_t x266 = 1;
static uint16_t x268 = 18U;
int64_t t66 = 65227966LL;
volatile uint64_t x269 = 1923155153326414LLU;
int64_t x289 = INT64_MIN;
volatile uint32_t x300 = 246670880U;
volatile uint32_t t74 = 8771603U;
volatile int32_t t75 = -1;
uint32_t t76 = 205179207U;
volatile int32_t x309 = -251425046;
uint8_t x310 = 3U;
volatile int16_t x311 = -596;
volatile uint16_t x312 = UINT16_MAX;
static int32_t x313 = INT32_MIN;
int64_t x318 = INT64_MIN;
uint64_t x320 = UINT64_MAX;
uint16_t x327 = 14213U;
static volatile int32_t x328 = INT32_MIN;
volatile int8_t x329 = INT8_MIN;
volatile int16_t x341 = 23;
int64_t x345 = 16976573106835LL;
int64_t x351 = -1LL;
uint16_t x358 = UINT16_MAX;
uint32_t x363 = 0U;
int64_t x377 = INT64_MIN;
uint32_t x381 = 9U;
int8_t x387 = -43;
volatile uint64_t t107 = 15987688936639LLU;
uint32_t x433 = UINT32_MAX;
uint32_t x437 = 272501735U;
static int16_t x438 = INT16_MAX;
int32_t x439 = -2351330;
int8_t x441 = INT8_MIN;
int32_t x447 = INT32_MIN;
int8_t x448 = INT8_MIN;
int64_t x451 = 34LL;
int8_t x458 = 2;
int16_t x461 = INT16_MAX;
int64_t x465 = -13265443LL;
int32_t t117 = -42684294;
int16_t x473 = 3;
int32_t x478 = INT32_MIN;
volatile uint32_t x481 = UINT32_MAX;
static uint32_t t120 = 3419385U;
uint16_t x488 = 316U;
int16_t x492 = 1636;
volatile int64_t x496 = INT64_MIN;
volatile int64_t t123 = INT64_MAX;
int16_t x499 = 127;
volatile uint32_t t124 = 4U;
int32_t x501 = INT32_MAX;
uint16_t x504 = 21U;
volatile int64_t t126 = 7686781163879862LL;
int8_t x509 = -1;
int8_t x511 = -1;
int16_t x517 = 0;
volatile uint16_t x533 = 7U;
static int16_t x536 = -54;
int8_t x539 = -1;
uint8_t x551 = 2U;
uint16_t x552 = UINT16_MAX;
int32_t x554 = -1;
static int16_t x562 = -1;
int64_t x565 = -1LL;
volatile int16_t x566 = 4;
volatile int64_t t141 = 12174759033LL;
volatile uint32_t x573 = 13910048U;
static int8_t x578 = -1;
uint8_t x581 = UINT8_MAX;
static int8_t x587 = -1;
static uint64_t t146 = 9926LLU;
static volatile uint32_t x589 = 3U;
static volatile int64_t t147 = 51069324LL;
int64_t x599 = -1LL;
int64_t t149 = 0LL;
uint64_t x613 = UINT64_MAX;
int64_t x616 = -1LL;
static volatile int64_t t154 = 1337007121180LL;
int32_t x624 = INT32_MIN;
int64_t x625 = -26974663LL;
int64_t t156 = -9527948828886957LL;
int8_t x642 = INT8_MAX;
uint8_t x644 = 11U;
int64_t x645 = 14499015124911LL;
int16_t x646 = -1;
static volatile int64_t t161 = -853850196599939LL;
int32_t x652 = -1;
static int16_t x661 = INT16_MIN;
int8_t x664 = -1;
int8_t x669 = INT8_MIN;
static uint32_t x679 = 1783848U;
uint8_t x680 = 7U;
static int64_t x681 = INT64_MIN;
int64_t x685 = INT64_MAX;
uint64_t x686 = 4936LLU;
uint64_t x698 = UINT64_MAX;
static volatile int64_t x703 = -1216LL;
static uint16_t x704 = UINT16_MAX;
int32_t x710 = 4007;
int32_t x715 = 23;
int16_t x717 = INT16_MIN;
int16_t x721 = 379;
int32_t t181 = 6169;
uint8_t x737 = 1U;
int64_t x741 = INT64_MIN;
int32_t x745 = INT32_MIN;
static int32_t x751 = INT32_MAX;
int64_t t189 = 15418838LL;
uint32_t x761 = 2287U;
volatile int32_t x764 = INT32_MAX;
volatile int64_t t191 = -4607498878806512LL;
int8_t x769 = -2;
int8_t x771 = INT8_MIN;
static int16_t x783 = INT16_MAX;
volatile int16_t x785 = INT16_MAX;
int8_t x790 = 24;
volatile uint16_t x794 = UINT16_MAX;
static uint64_t x800 = 116420LLU;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	volatile uint64_t x2 = 210LLU;
	static int16_t x4 = 3588;
	volatile uint64_t t0 = 123209LLU;

    t0 = ((x1&(x2|x3))^x4);

    if (t0 != 3588LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MAX;
	int64_t x7 = INT64_MAX;
	static volatile int64_t t1 = -3LL;

    t1 = ((x5&(x6|x7))^x8);

    if (t1 != 2147450880LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 322U;
	static int64_t x10 = -12123009578851986LL;
	volatile uint64_t x11 = UINT64_MAX;
	static int32_t x12 = -14;
	static volatile uint64_t t2 = 19LLU;

    t2 = ((x9&(x10|x11))^x12);

    if (t2 != 18446744073709551280LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MAX;
	static int32_t x14 = INT32_MIN;
	volatile uint64_t x16 = 56037LLU;

    t3 = ((x13&(x14|x15))^x16);

    if (t3 != 2147427610LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 0U;
	uint8_t x18 = 0U;
	int16_t x19 = INT16_MIN;
	uint64_t x20 = UINT64_MAX;

    t4 = ((x17&(x18|x19))^x20);

    if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x21 = -629955549LL;
	int8_t x22 = INT8_MIN;
	static int64_t x23 = INT64_MAX;
	static volatile uint8_t x24 = 0U;
	volatile int64_t t5 = 1252753491062038477LL;

    t5 = ((x21&(x22|x23))^x24);

    if (t5 != -629955549LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -1;
	static int64_t x26 = INT64_MAX;
	static volatile int16_t x28 = 0;

    t6 = ((x25&(x26|x27))^x28);

    if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = -1;
	volatile int32_t x30 = -1;
	static int32_t x32 = INT32_MIN;

    t7 = ((x29&(x30|x31))^x32);

    if (t7 != 2147483647U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = 3U;
	int8_t x34 = -1;
	uint64_t x35 = 95220439081482LLU;
	int32_t x36 = -51;
	uint64_t t8 = 2LLU;

    t8 = ((x33&(x34|x35))^x36);

    if (t8 != 18446744073709551566LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MAX;
	static int16_t x38 = INT16_MIN;
	uint32_t x39 = UINT32_MAX;
	volatile int64_t x40 = 164420827LL;
	volatile int64_t t9 = -33260582541LL;

    t9 = ((x37&(x38|x39))^x40);

    if (t9 != 1983062820LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint64_t x41 = 14452091LLU;
	int8_t x43 = INT8_MIN;
	volatile int8_t x44 = -1;

    t10 = ((x41&(x42|x43))^x44);

    if (t10 != 18446744073695099615LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x46 = 7U;
	static int64_t x47 = 6247LL;

    t11 = ((x45&(x46|x47))^x48);

    if (t11 != 6246LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x50 = 1655638U;
	uint8_t x51 = 0U;
	int32_t x52 = -1;
	uint32_t t12 = UINT32_MAX;

    t12 = ((x49&(x50|x51))^x52);

    if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int64_t x53 = -1LL;
	uint8_t x54 = UINT8_MAX;
	int64_t t13 = 1758LL;

    t13 = ((x53&(x54|x55))^x56);

    if (t13 != 5040087810804LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x58 = INT16_MIN;
	int64_t x59 = -1LL;
	static int8_t x60 = -1;
	volatile int64_t t14 = -7479LL;

    t14 = ((x57&(x58|x59))^x60);

    if (t14 != -94815LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MAX;
	volatile int8_t x62 = 1;
	volatile int16_t x64 = 357;

    t15 = ((x61&(x62|x63))^x64);

    if (t15 != 1224LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = 30U;
	static int64_t x66 = -1LL;
	uint16_t x67 = 31816U;
	int32_t x68 = INT32_MIN;
	volatile int64_t t16 = -28LL;

    t16 = ((x65&(x66|x67))^x68);

    if (t16 != -2147483618LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MIN;
	uint8_t x71 = 39U;
	uint64_t x72 = 398LLU;
	uint64_t t17 = 373676951735LLU;

    t17 = ((x69&(x70|x71))^x72);

    if (t17 != 398LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = 1U;
	int8_t x74 = INT8_MIN;
	static volatile int64_t x75 = INT64_MAX;
	int64_t t18 = 74815947808LL;

    t18 = ((x73&(x74|x75))^x76);

    if (t18 != 9LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x77 = 864432U;
	int16_t x78 = INT16_MAX;
	volatile int32_t x80 = 9305;
	static volatile uint32_t t19 = 24U;

    t19 = ((x77&(x78|x79))^x80);

    if (t19 != 857321U) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = 190921744695448LL;
	int16_t x82 = INT16_MIN;
	static uint64_t x83 = 15604820871LLU;
	uint16_t x84 = 2U;
	volatile uint64_t t20 = 1176791783659LLU;

    t20 = ((x81&(x82|x83))^x84);

    if (t20 != 190921744679042LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x86 = UINT64_MAX;
	volatile int32_t x87 = -15624376;
	int64_t x88 = -2799019601308184LL;

    t21 = ((x85&(x86|x87))^x88);

    if (t21 != 9226171056456083991LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = -193772458088101LL;
	int8_t x90 = -1;
	int32_t x91 = INT32_MIN;
	static int32_t x92 = 103714;
	int64_t t22 = 4486346LL;

    t22 = ((x89&(x90|x91))^x92);

    if (t22 != -193772458181511LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x94 = INT32_MIN;
	static uint8_t x96 = 2U;
	static volatile int64_t t23 = 1478485961026LL;

    t23 = ((x93&(x94|x95))^x96);

    if (t23 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x98 = INT32_MAX;
	int8_t x99 = -1;
	int32_t x100 = INT32_MAX;
	volatile int32_t t24 = -665910269;

    t24 = ((x97&(x98|x99))^x100);

    if (t24 != -2147450881) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = INT32_MIN;
	uint16_t x102 = 2U;
	volatile int32_t x103 = INT32_MIN;
	int8_t x104 = -1;
	int32_t t25 = INT32_MAX;

    t25 = ((x101&(x102|x103))^x104);

    if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x105 = -1;
	uint64_t x107 = 38159LLU;
	int64_t x108 = 14598068085436146LL;
	uint64_t t26 = 857962289741LLU;

    t26 = ((x105&(x106|x107))^x108);

    if (t26 != 14598068085406717LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x109 = UINT64_MAX;
	int64_t x111 = -7596LL;
	static int64_t x112 = 301542400LL;
	uint64_t t27 = 3658829562618069471LLU;

    t27 = ((x109&(x110|x111))^x112);

    if (t27 != 18446744073408007774LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x113 = 215516;
	volatile int8_t x114 = INT8_MIN;
	static int64_t x115 = INT64_MIN;
	int32_t x116 = 1;
	int64_t t28 = -2797823598LL;

    t28 = ((x113&(x114|x115))^x116);

    if (t28 != 215425LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = -1LL;
	volatile int8_t x119 = -28;
	static uint64_t t29 = 425LLU;

    t29 = ((x117&(x118|x119))^x120);

    if (t29 != 16LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x121 = 1089U;
	int64_t x123 = 0LL;
	uint8_t x124 = 45U;
	static int64_t t30 = 0LL;

    t30 = ((x121&(x122|x123))^x124);

    if (t30 != 45LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = INT8_MIN;
	int32_t x126 = INT32_MAX;
	volatile uint16_t x128 = 21351U;
	uint64_t t31 = 8476201LLU;

    t31 = ((x125&(x126|x127))^x128);

    if (t31 != 18446744073709530343LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x129 = INT64_MIN;
	volatile uint8_t x130 = UINT8_MAX;
	int32_t x131 = -1;
	uint32_t x132 = UINT32_MAX;
	volatile int64_t t32 = -3399156316500LL;

    t32 = ((x129&(x130|x131))^x132);

    if (t32 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MIN;
	uint8_t x134 = UINT8_MAX;
	int16_t x135 = -1;
	static int64_t x136 = INT64_MAX;
	int64_t t33 = -67008336032995424LL;

    t33 = ((x133&(x134|x135))^x136);

    if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = -1;
	int16_t x138 = -3;
	volatile int16_t x139 = 2954;
	uint8_t x140 = 0U;
	static int32_t t34 = 1773;

    t34 = ((x137&(x138|x139))^x140);

    if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x141 = INT64_MAX;
	static int64_t x142 = -1LL;
	int32_t x143 = 462753929;
	volatile int64_t t35 = -7532560LL;

    t35 = ((x141&(x142|x143))^x144);

    if (t35 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x147 = -348;
	volatile int64_t t36 = 164180280LL;

    t36 = ((x145&(x146|x147))^x148);

    if (t36 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile uint8_t x149 = 15U;
	uint64_t x152 = 72200468LLU;
	uint64_t t37 = 77567999LLU;

    t37 = ((x149&(x150|x151))^x152);

    if (t37 != 72200475LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x153 = INT8_MIN;
	static volatile int32_t x154 = INT32_MIN;
	uint32_t x155 = 538826223U;
	static int16_t x156 = INT16_MIN;
	static volatile uint32_t t38 = 59075U;

    t38 = ((x153&(x154|x155))^x156);

    if (t38 != 1608668544U) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = INT64_MAX;
	int16_t x158 = 3;
	int32_t x159 = 72637;
	int32_t x160 = INT32_MAX;
	int64_t t39 = 120948830204424083LL;

    t39 = ((x157&(x158|x159))^x160);

    if (t39 != 2147411008LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x161 = -13647;
	volatile int32_t x162 = 933018055;
	static int16_t x163 = INT16_MAX;
	static volatile int64_t x164 = INT64_MIN;
	int64_t t40 = 51LL;

    t40 = ((x161&(x162|x163))^x164);

    if (t40 != -9223372035921753423LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = INT32_MIN;
	static uint8_t x166 = UINT8_MAX;
	static uint64_t x167 = UINT64_MAX;
	uint64_t x168 = UINT64_MAX;
	uint64_t t41 = 73369202520LLU;

    t41 = ((x165&(x166|x167))^x168);

    if (t41 != 2147483647LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x170 = 28;
	int64_t x171 = INT64_MIN;
	int64_t t42 = -1788395660456084411LL;

    t42 = ((x169&(x170|x171))^x172);

    if (t42 != -2147483644LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = 1096431310949474012LLU;
	volatile int8_t x174 = INT8_MIN;
	static int16_t x175 = -7;
	static volatile int16_t x176 = -11;
	static uint64_t t43 = 2830239359LLU;

    t43 = ((x173&(x174|x175))^x176);

    if (t43 != 17350312762760077613LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x178 = -1LL;
	uint16_t x179 = 6U;
	volatile int64_t t44 = 249436796859332LL;

    t44 = ((x177&(x178|x179))^x180);

    if (t44 != 128LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = -801;
	uint64_t x182 = 7510641494309LLU;
	volatile int8_t x183 = INT8_MIN;
	static int64_t x184 = -474283809554LL;
	volatile uint64_t t45 = 18642728385LLU;

    t45 = ((x181&(x182|x183))^x184);

    if (t45 != 474283808875LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = -1091;
	int16_t x186 = INT16_MAX;
	volatile int32_t x188 = INT32_MAX;
	int32_t t46 = 40393186;

    t46 = ((x185&(x186|x187))^x188);

    if (t46 != -2147482558) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x189 = 94;
	volatile int16_t x190 = INT16_MIN;
	static int8_t x191 = -1;
	static uint8_t x192 = 61U;

    t47 = ((x189&(x190|x191))^x192);

    if (t47 != 99) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = -47;
	volatile uint64_t x194 = 34750895254LLU;
	static volatile uint32_t x195 = 9U;
	static int32_t x196 = -4068130;
	uint64_t t48 = 30LLU;

    t48 = ((x193&(x194|x195))^x196);

    if (t48 != 18446744038956693583LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x197 = 11413U;
	volatile int32_t x198 = -1;
	static int64_t x199 = 502658011694331346LL;
	int32_t x200 = 50477;

    t49 = ((x197&(x198|x199))^x200);

    if (t49 != 59832LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = INT16_MIN;
	volatile uint8_t x203 = UINT8_MAX;
	int16_t x204 = INT16_MIN;

    t50 = ((x201&(x202|x203))^x204);

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int16_t x205 = INT16_MAX;
	volatile int64_t x206 = INT64_MIN;
	volatile int8_t x207 = -4;
	int16_t x208 = 52;
	volatile int64_t t51 = 6LL;

    t51 = ((x205&(x206|x207))^x208);

    if (t51 != 32712LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = INT8_MAX;
	volatile int32_t x210 = -1;
	static uint64_t x212 = UINT64_MAX;
	volatile uint64_t t52 = 165389LLU;

    t52 = ((x209&(x210|x211))^x212);

    if (t52 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x213 = -1LL;
	uint64_t x214 = UINT64_MAX;
	int8_t x215 = INT8_MIN;
	uint8_t x216 = 31U;
	uint64_t t53 = 29LLU;

    t53 = ((x213&(x214|x215))^x216);

    if (t53 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int16_t x217 = -1;
	uint64_t x218 = 29572488927332179LLU;
	static int16_t x220 = INT16_MIN;
	uint64_t t54 = 1584284972269952LLU;

    t54 = ((x217&(x218|x219))^x220);

    if (t54 != 9193799547927447379LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = 558583190516590291LLU;
	uint16_t x223 = 2U;
	int64_t x224 = -924216492LL;
	volatile uint64_t t55 = 2203LLU;

    t55 = ((x221&(x222|x223))^x224);

    if (t55 != 17888160882271679879LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x225 = INT16_MIN;
	int32_t x226 = INT32_MIN;
	uint64_t x227 = 17611596LLU;

    t56 = ((x225&(x226|x227))^x228);

    if (t56 != 18446744071579869863LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = -1LL;
	int64_t x230 = INT64_MIN;
	int32_t x231 = INT32_MAX;
	int16_t x232 = -1;
	static int64_t t57 = -9991098LL;

    t57 = ((x229&(x230|x231))^x232);

    if (t57 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x233 = UINT16_MAX;
	static uint32_t x234 = UINT32_MAX;
	static int32_t x235 = INT32_MIN;
	uint32_t t58 = 319673831U;

    t58 = ((x233&(x234|x235))^x236);

    if (t58 != 4279934016U) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x237 = -10915800582380709LL;
	uint8_t x238 = UINT8_MAX;
	int8_t x239 = INT8_MAX;
	volatile int64_t t59 = 8161881LL;

    t59 = ((x237&(x238|x239))^x240);

    if (t59 != -92LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = INT64_MIN;
	int32_t x243 = INT32_MIN;
	volatile int32_t x244 = -3055;
	volatile int64_t t60 = 2598248266458690808LL;

    t60 = ((x241&(x242|x243))^x244);

    if (t60 != 9223372036854772753LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x245 = -1;
	uint32_t x247 = 57U;
	int32_t x248 = 0;
	uint32_t t61 = 294U;

    t61 = ((x245&(x246|x247))^x248);

    if (t61 != 5563U) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x249 = INT32_MAX;
	int16_t x250 = 2;
	volatile int64_t x251 = INT64_MAX;
	static uint16_t x252 = 14989U;
	int64_t t62 = 3614817520773325LL;

    t62 = ((x249&(x250|x251))^x252);

    if (t62 != 2147468658LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = INT32_MAX;
	int32_t x254 = -1;
	int32_t x255 = 0;
	static uint64_t x256 = 97LLU;

    t63 = ((x253&(x254|x255))^x256);

    if (t63 != 2147483550LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x257 = 905135U;
	static volatile uint8_t x259 = 100U;
	volatile uint64_t t64 = 31516455636810474LLU;

    t64 = ((x257&(x258|x259))^x260);

    if (t64 != 12725LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x261 = UINT64_MAX;
	volatile int16_t x263 = 12187;
	static int8_t x264 = INT8_MIN;
	uint64_t t65 = 4724017LLU;

    t65 = ((x261&(x262|x263))^x264);

    if (t65 != 18446744073709486207LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x265 = -1LL;
	int8_t x267 = INT8_MIN;

    t66 = ((x265&(x266|x267))^x268);

    if (t66 != -109LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x270 = 4U;
	int64_t x271 = INT64_MIN;
	int64_t x272 = INT64_MIN;
	volatile uint64_t t67 = 3115484066LLU;

    t67 = ((x269&(x270|x271))^x272);

    if (t67 != 9223372036854775812LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x273 = 130LLU;
	int32_t x274 = INT32_MAX;
	uint8_t x275 = 0U;
	int32_t x276 = -720006;
	static uint64_t t68 = 14220LLU;

    t68 = ((x273&(x274|x275))^x276);

    if (t68 != 18446744073708831736LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x277 = UINT16_MAX;
	volatile uint8_t x278 = UINT8_MAX;
	uint32_t x279 = UINT32_MAX;
	int16_t x280 = INT16_MIN;
	volatile uint32_t t69 = 12U;

    t69 = ((x277&(x278|x279))^x280);

    if (t69 != 4294934527U) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x281 = 0U;
	uint64_t x282 = 2970289233242030LLU;
	int64_t x283 = INT64_MIN;
	static uint8_t x284 = 13U;
	static uint64_t t70 = 14323LLU;

    t70 = ((x281&(x282|x283))^x284);

    if (t70 != 13LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x285 = -1LL;
	int32_t x286 = INT32_MIN;
	static uint16_t x287 = 11U;
	uint16_t x288 = 3359U;
	int64_t t71 = 0LL;

    t71 = ((x285&(x286|x287))^x288);

    if (t71 != -2147480300LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x290 = UINT16_MAX;
	int64_t x291 = INT64_MAX;
	int16_t x292 = INT16_MAX;
	int64_t t72 = -1427396744LL;

    t72 = ((x289&(x290|x291))^x292);

    if (t72 != 32767LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = INT32_MAX;
	uint8_t x294 = 29U;
	volatile uint64_t x295 = 253470832463491LLU;
	volatile int32_t x296 = 4;
	volatile uint64_t t73 = 2877976840130LLU;

    t73 = ((x293&(x294|x295))^x296);

    if (t73 != 1190006427LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x297 = INT32_MIN;
	int8_t x298 = INT8_MAX;
	int32_t x299 = INT32_MIN;

    t74 = ((x297&(x298|x299))^x300);

    if (t74 != 2394154528U) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = 5091;
	int16_t x302 = -1;
	uint16_t x303 = 3800U;
	int16_t x304 = INT16_MIN;

    t75 = ((x301&(x302|x303))^x304);

    if (t75 != -27677) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = -56;
	volatile int32_t x306 = -1;
	uint32_t x307 = UINT32_MAX;
	volatile uint32_t x308 = UINT32_MAX;

    t76 = ((x305&(x306|x307))^x308);

    if (t76 != 55U) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t t77 = 156633;

    t77 = ((x309&(x310|x311))^x312);

    if (t77 != -251432107) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x314 = INT16_MIN;
	uint32_t x315 = 13631U;
	uint16_t x316 = 0U;
	static uint32_t t78 = 40615181U;

    t78 = ((x313&(x314|x315))^x316);

    if (t78 != 2147483648U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x317 = UINT8_MAX;
	int16_t x319 = INT16_MAX;
	volatile uint64_t t79 = 8501810201LLU;

    t79 = ((x317&(x318|x319))^x320);

    if (t79 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = 13U;
	static int16_t x322 = INT16_MIN;
	int16_t x323 = INT16_MAX;
	static int8_t x324 = -47;
	volatile uint32_t t80 = 5U;

    t80 = ((x321&(x322|x323))^x324);

    if (t80 != 4294967260U) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x325 = UINT16_MAX;
	volatile int8_t x326 = INT8_MIN;
	volatile int32_t t81 = 0;

    t81 = ((x325&(x326|x327))^x328);

    if (t81 != -2147418235) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x330 = UINT8_MAX;
	static int32_t x331 = INT32_MIN;
	uint64_t x332 = UINT64_MAX;
	static volatile uint64_t t82 = 4152161486139LLU;

    t82 = ((x329&(x330|x331))^x332);

    if (t82 != 2147483519LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x333 = UINT8_MAX;
	int64_t x334 = -324LL;
	int32_t x335 = -1;
	int32_t x336 = INT32_MAX;
	int64_t t83 = 4065119301423661042LL;

    t83 = ((x333&(x334|x335))^x336);

    if (t83 != 2147483392LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x337 = INT64_MAX;
	uint64_t x338 = UINT64_MAX;
	volatile int8_t x339 = INT8_MAX;
	uint8_t x340 = 14U;
	uint64_t t84 = 0LLU;

    t84 = ((x337&(x338|x339))^x340);

    if (t84 != 9223372036854775793LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x342 = 1146U;
	int64_t x343 = INT64_MIN;
	uint32_t x344 = 2056U;
	static volatile int64_t t85 = -4442518977409474LL;

    t85 = ((x341&(x342|x343))^x344);

    if (t85 != 2074LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x346 = INT64_MIN;
	int8_t x347 = INT8_MIN;
	uint16_t x348 = 6U;
	volatile int64_t t86 = -28813LL;

    t86 = ((x345&(x346|x347))^x348);

    if (t86 != 16976573106822LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = -214031LL;
	int16_t x350 = -9239;
	int16_t x352 = INT16_MIN;
	int64_t t87 = -7050LL;

    t87 = ((x349&(x350|x351))^x352);

    if (t87 != 211953LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x353 = INT16_MAX;
	int8_t x354 = 4;
	static int16_t x355 = -3676;
	int32_t x356 = INT32_MIN;
	static int32_t t88 = 73;

    t88 = ((x353&(x354|x355))^x356);

    if (t88 != -2147454556) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = -1;
	volatile int32_t x359 = INT32_MIN;
	uint64_t x360 = 8388696620LLU;
	uint64_t t89 = 133459103LLU;

    t89 = ((x357&(x358|x359))^x360);

    if (t89 != 18446744067065882067LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x361 = INT64_MIN;
	int64_t x362 = -218716559805428676LL;
	static int32_t x364 = INT32_MIN;
	volatile int64_t t90 = 2005870499875890LL;

    t90 = ((x361&(x362|x363))^x364);

    if (t90 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = INT64_MAX;
	int64_t x366 = INT64_MIN;
	uint8_t x367 = 23U;
	uint8_t x368 = 31U;
	volatile int64_t t91 = -7004466096LL;

    t91 = ((x365&(x366|x367))^x368);

    if (t91 != 8LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = 18;
	uint64_t x370 = 5LLU;
	int64_t x371 = 13442438410983LL;
	volatile int64_t x372 = INT64_MAX;
	uint64_t t92 = 1029392217LLU;

    t92 = ((x369&(x370|x371))^x372);

    if (t92 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x373 = UINT16_MAX;
	static int64_t x374 = INT64_MIN;
	uint64_t x375 = 9128830725972935LLU;
	uint16_t x376 = 18U;
	volatile uint64_t t93 = 12905LLU;

    t93 = ((x373&(x374|x375))^x376);

    if (t93 != 58325LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x378 = -1;
	uint8_t x379 = 2U;
	int64_t x380 = INT64_MAX;
	int64_t t94 = 541LL;

    t94 = ((x377&(x378|x379))^x380);

    if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x382 = 86U;
	uint32_t x383 = 0U;
	volatile int8_t x384 = -3;
	static uint32_t t95 = 28U;

    t95 = ((x381&(x382|x383))^x384);

    if (t95 != 4294967293U) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = INT16_MIN;
	int8_t x386 = INT8_MAX;
	int16_t x388 = -1;
	static int32_t t96 = -25844969;

    t96 = ((x385&(x386|x387))^x388);

    if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = INT16_MAX;
	uint8_t x390 = UINT8_MAX;
	int8_t x391 = 28;
	int64_t x392 = -1LL;
	int64_t t97 = 2449776LL;

    t97 = ((x389&(x390|x391))^x392);

    if (t97 != -256LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int16_t x393 = INT16_MIN;
	static int16_t x394 = INT16_MAX;
	uint16_t x395 = 4256U;
	int16_t x396 = INT16_MAX;
	volatile int32_t t98 = -107758884;

    t98 = ((x393&(x394|x395))^x396);

    if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x397 = 15;
	volatile uint16_t x398 = UINT16_MAX;
	int16_t x399 = -1;
	int16_t x400 = -1;
	static volatile int32_t t99 = -16567335;

    t99 = ((x397&(x398|x399))^x400);

    if (t99 != -16) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x401 = INT32_MIN;
	volatile uint64_t x402 = UINT64_MAX;
	int8_t x403 = INT8_MIN;
	int64_t x404 = -1LL;
	volatile uint64_t t100 = 1726025316667716687LLU;

    t100 = ((x401&(x402|x403))^x404);

    if (t100 != 2147483647LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = 1693100;
	static int8_t x406 = INT8_MAX;
	uint16_t x407 = 55U;
	static int8_t x408 = -1;
	volatile int32_t t101 = -17156382;

    t101 = ((x405&(x406|x407))^x408);

    if (t101 != -45) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x409 = -2157LL;
	int32_t x410 = 162093817;
	volatile uint64_t x411 = 547628684710221LLU;
	static volatile int32_t x412 = -1;
	uint64_t t102 = 239LLU;

    t102 = ((x409&(x410|x411))^x412);

    if (t102 != 18446196445016370286LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x413 = 1U;
	int32_t x414 = -3315786;
	int64_t x415 = INT64_MIN;
	int16_t x416 = INT16_MIN;
	int64_t t103 = 284438201361943946LL;

    t103 = ((x413&(x414|x415))^x416);

    if (t103 != -32768LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = INT64_MIN;
	int16_t x418 = INT16_MAX;
	volatile int16_t x419 = INT16_MIN;
	volatile uint32_t x420 = 11493955U;
	volatile int64_t t104 = 1107883LL;

    t104 = ((x417&(x418|x419))^x420);

    if (t104 != -9223372036843281853LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = -1;
	uint16_t x422 = UINT16_MAX;
	uint64_t x423 = UINT64_MAX;
	volatile int16_t x424 = INT16_MIN;
	volatile uint64_t t105 = 58805753892LLU;

    t105 = ((x421&(x422|x423))^x424);

    if (t105 != 32767LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x425 = INT8_MAX;
	uint64_t x426 = 17636742007362181LLU;
	int64_t x427 = -1LL;
	volatile int16_t x428 = 39;
	static uint64_t t106 = 1701333LLU;

    t106 = ((x425&(x426|x427))^x428);

    if (t106 != 88LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x429 = 31567923079LLU;
	static uint16_t x430 = 15U;
	int8_t x431 = INT8_MIN;
	uint8_t x432 = UINT8_MAX;

    t107 = ((x429&(x430|x431))^x432);

    if (t107 != 31567923064LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x434 = 1477869757U;
	int64_t x435 = INT64_MAX;
	static uint64_t x436 = 5667389137788514805LLU;
	volatile uint64_t t108 = 7LLU;

    t108 = ((x433&(x434|x435))^x436);

    if (t108 != 5667389135312473610LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x440 = 6U;
	static volatile uint32_t t109 = 682807571U;

    t109 = ((x437&(x438|x439))^x440);

    if (t109 != 270273505U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x442 = UINT32_MAX;
	volatile int8_t x443 = INT8_MAX;
	int64_t x444 = -61553858LL;
	int64_t t110 = -81132970375LL;

    t110 = ((x441&(x442|x443))^x444);

    if (t110 != -4233413442LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x445 = 182756U;
	static int64_t x446 = INT64_MAX;
	int64_t t111 = -146357471964LL;

    t111 = ((x445&(x446|x447))^x448);

    if (t111 != -182684LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x449 = UINT16_MAX;
	static uint16_t x450 = UINT16_MAX;
	int8_t x452 = 0;
	int64_t t112 = 1608969036819LL;

    t112 = ((x449&(x450|x451))^x452);

    if (t112 != 65535LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = -1;
	static int16_t x454 = 854;
	uint64_t x455 = 280LLU;
	static uint64_t x456 = 901850227060LLU;
	uint64_t t113 = 3981949855383727790LLU;

    t113 = ((x453&(x454|x455))^x456);

    if (t113 != 901850227242LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = UINT64_MAX;
	uint16_t x459 = 28836U;
	uint32_t x460 = 24U;
	uint64_t t114 = 54LLU;

    t114 = ((x457&(x458|x459))^x460);

    if (t114 != 28862LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x462 = -1;
	static int32_t x463 = INT32_MIN;
	uint8_t x464 = 1U;
	static int32_t t115 = -491408959;

    t115 = ((x461&(x462|x463))^x464);

    if (t115 != 32766) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x466 = 0U;
	uint8_t x467 = UINT8_MAX;
	static int8_t x468 = -61;
	volatile int64_t t116 = 3303573LL;

    t116 = ((x465&(x466|x467))^x468);

    if (t116 != -226LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = 128694;
	uint16_t x470 = UINT16_MAX;
	int16_t x471 = INT16_MAX;
	static uint16_t x472 = 470U;

    t117 = ((x469&(x470|x471))^x472);

    if (t117 != 63328) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x474 = INT64_MIN;
	int8_t x475 = INT8_MAX;
	int64_t x476 = INT64_MAX;
	int64_t t118 = 6127767LL;

    t118 = ((x473&(x474|x475))^x476);

    if (t118 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = INT8_MIN;
	uint64_t x479 = UINT64_MAX;
	int16_t x480 = 6;
	uint64_t t119 = 373679LLU;

    t119 = ((x477&(x478|x479))^x480);

    if (t119 != 18446744073709551494LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x482 = 51U;
	int16_t x483 = INT16_MAX;
	int8_t x484 = 1;

    t120 = ((x481&(x482|x483))^x484);

    if (t120 != 32766U) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = 42075LL;
	int32_t x486 = -1;
	static uint64_t x487 = 924LLU;
	volatile uint64_t t121 = 270357396752549LLU;

    t121 = ((x485&(x486|x487))^x488);

    if (t121 != 42343LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x489 = INT8_MIN;
	int8_t x490 = INT8_MIN;
	volatile uint16_t x491 = UINT16_MAX;
	int32_t t122 = 5;

    t122 = ((x489&(x490|x491))^x492);

    if (t122 != -1564) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x493 = -1;
	static int32_t x494 = -1;
	int8_t x495 = -1;

    t123 = ((x493&(x494|x495))^x496);

    if (t123 != INT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x497 = INT16_MIN;
	volatile uint16_t x498 = 14703U;
	static volatile uint32_t x500 = 32889397U;

    t124 = ((x497&(x498|x499))^x500);

    if (t124 != 32889397U) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x502 = INT8_MIN;
	volatile int16_t x503 = -611;
	static int32_t t125 = 15029861;

    t125 = ((x501&(x502|x503))^x504);

    if (t125 != 2147483528) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x505 = INT64_MIN;
	static int64_t x506 = -1LL;
	int32_t x507 = INT32_MIN;
	volatile int8_t x508 = 45;

    t126 = ((x505&(x506|x507))^x508);

    if (t126 != -9223372036854775763LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x510 = 8U;
	int16_t x512 = 1;
	int32_t t127 = -14200;

    t127 = ((x509&(x510|x511))^x512);

    if (t127 != -2) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x513 = UINT8_MAX;
	int64_t x514 = INT64_MAX;
	int32_t x515 = INT32_MIN;
	static uint16_t x516 = 2U;
	volatile int64_t t128 = 19LL;

    t128 = ((x513&(x514|x515))^x516);

    if (t128 != 253LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x518 = 39U;
	int8_t x519 = INT8_MAX;
	int64_t x520 = -1LL;
	volatile int64_t t129 = -2901LL;

    t129 = ((x517&(x518|x519))^x520);

    if (t129 != -1LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x521 = 3U;
	int32_t x522 = 30147107;
	uint16_t x523 = UINT16_MAX;
	static int64_t x524 = -54062LL;
	int64_t t130 = -30166710LL;

    t130 = ((x521&(x522|x523))^x524);

    if (t130 != -54063LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int8_t x525 = 3;
	int64_t x526 = 114392LL;
	static volatile int8_t x527 = INT8_MIN;
	static volatile int16_t x528 = -1;
	volatile int64_t t131 = 82LL;

    t131 = ((x525&(x526|x527))^x528);

    if (t131 != -1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x529 = 1039483847LL;
	int32_t x530 = INT32_MAX;
	volatile uint32_t x531 = 2345734U;
	static uint32_t x532 = 27457992U;
	volatile int64_t t132 = 34824957447LL;

    t132 = ((x529&(x530|x531))^x532);

    if (t132 != 1012382223LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x534 = 1958828696995LL;
	int64_t x535 = INT64_MIN;
	static volatile int64_t t133 = -151LL;

    t133 = ((x533&(x534|x535))^x536);

    if (t133 != -55LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x537 = INT16_MIN;
	int32_t x538 = -1;
	int32_t x540 = -1;
	int32_t t134 = 315;

    t134 = ((x537&(x538|x539))^x540);

    if (t134 != 32767) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int8_t x541 = 4;
	uint64_t x542 = 4056045423545338LLU;
	int16_t x543 = INT16_MAX;
	int8_t x544 = INT8_MIN;
	volatile uint64_t t135 = 47222706659738366LLU;

    t135 = ((x541&(x542|x543))^x544);

    if (t135 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = -1LL;
	int8_t x546 = INT8_MIN;
	static uint16_t x547 = 3357U;
	int16_t x548 = 18;
	int64_t t136 = 86221060772LL;

    t136 = ((x545&(x546|x547))^x548);

    if (t136 != -113LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x549 = 79U;
	int32_t x550 = INT32_MIN;
	int32_t t137 = 36;

    t137 = ((x549&(x550|x551))^x552);

    if (t137 != 65533) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int32_t x553 = -1;
	volatile int16_t x555 = INT16_MIN;
	static int32_t x556 = 0;
	volatile int32_t t138 = 207757;

    t138 = ((x553&(x554|x555))^x556);

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = -103;
	int32_t x558 = -31;
	static volatile int16_t x559 = 17;
	static volatile uint32_t x560 = UINT32_MAX;
	static volatile uint32_t t139 = 6522882U;

    t139 = ((x557&(x558|x559))^x560);

    if (t139 != 110U) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = INT16_MIN;
	static int8_t x563 = INT8_MIN;
	int32_t x564 = -1;
	volatile int32_t t140 = 170395;

    t140 = ((x561&(x562|x563))^x564);

    if (t140 != 32767) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x567 = -238;
	uint16_t x568 = UINT16_MAX;

    t141 = ((x565&(x566|x567))^x568);

    if (t141 != -65303LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = -23331;
	int16_t x570 = INT16_MIN;
	int16_t x571 = INT16_MIN;
	int64_t x572 = -1LL;
	int64_t t142 = 8972439103745024LL;

    t142 = ((x569&(x570|x571))^x572);

    if (t142 != 32767LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint32_t x574 = UINT32_MAX;
	volatile int16_t x575 = -1306;
	int8_t x576 = -1;
	uint32_t t143 = 197U;

    t143 = ((x573&(x574|x575))^x576);

    if (t143 != 4281057247U) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = INT16_MIN;
	static int64_t x579 = -1996976077689LL;
	static volatile int16_t x580 = -71;
	int64_t t144 = 734LL;

    t144 = ((x577&(x578|x579))^x580);

    if (t144 != 32697LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile uint32_t x582 = 851521U;
	int16_t x583 = INT16_MIN;
	uint64_t x584 = 2849033658385385LLU;
	uint64_t t145 = 1395LLU;

    t145 = ((x581&(x582|x583))^x584);

    if (t145 != 2849033658385320LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x585 = 84405059298LLU;
	volatile int64_t x586 = INT64_MIN;
	int8_t x588 = INT8_MIN;

    t146 = ((x585&(x586|x587))^x588);

    if (t146 != 18446743989304492386LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x590 = UINT16_MAX;
	int64_t x591 = -54437LL;
	uint8_t x592 = UINT8_MAX;

    t147 = ((x589&(x590|x591))^x592);

    if (t147 != 252LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x593 = UINT32_MAX;
	uint64_t x594 = UINT64_MAX;
	uint16_t x595 = UINT16_MAX;
	volatile int8_t x596 = -1;
	uint64_t t148 = 369791063216743LLU;

    t148 = ((x593&(x594|x595))^x596);

    if (t148 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x597 = 1U;
	int64_t x598 = INT64_MIN;
	int8_t x600 = -1;

    t149 = ((x597&(x598|x599))^x600);

    if (t149 != -2LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = 122;
	static int16_t x602 = 80;
	int16_t x603 = -1;
	volatile int32_t x604 = INT32_MAX;
	static int32_t t150 = 58209;

    t150 = ((x601&(x602|x603))^x604);

    if (t150 != 2147483525) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = INT64_MAX;
	int8_t x606 = INT8_MAX;
	static uint8_t x607 = UINT8_MAX;
	int16_t x608 = -1;
	int64_t t151 = -13956284LL;

    t151 = ((x605&(x606|x607))^x608);

    if (t151 != -256LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x609 = INT16_MIN;
	volatile uint8_t x610 = 1U;
	int64_t x611 = INT64_MIN;
	volatile uint8_t x612 = 1U;
	volatile int64_t t152 = -3984834911963853LL;

    t152 = ((x609&(x610|x611))^x612);

    if (t152 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x614 = INT16_MAX;
	uint32_t x615 = UINT32_MAX;
	volatile uint64_t t153 = 397334301LLU;

    t153 = ((x613&(x614|x615))^x616);

    if (t153 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint16_t x617 = 1203U;
	int64_t x618 = 1377030095742LL;
	uint16_t x619 = 344U;
	int64_t x620 = 1LL;

    t154 = ((x617&(x618|x619))^x620);

    if (t154 != 51LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x621 = -1LL;
	volatile int8_t x622 = INT8_MIN;
	uint32_t x623 = 626450576U;
	volatile int64_t t155 = 0LL;

    t155 = ((x621&(x622|x623))^x624);

    if (t155 != -2147483760LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x626 = 3U;
	volatile int32_t x627 = -1;
	int32_t x628 = -59;

    t156 = ((x625&(x626|x627))^x628);

    if (t156 != 26974716LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x629 = UINT8_MAX;
	static volatile int64_t x630 = -2442228522108509LL;
	uint16_t x631 = UINT16_MAX;
	uint8_t x632 = 2U;
	static volatile int64_t t157 = -4855918541721LL;

    t157 = ((x629&(x630|x631))^x632);

    if (t157 != 253LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = 8142;
	int8_t x634 = INT8_MAX;
	int32_t x635 = INT32_MIN;
	static int64_t x636 = INT64_MIN;
	int64_t t158 = 63303178445479909LL;

    t158 = ((x633&(x634|x635))^x636);

    if (t158 != -9223372036854775730LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x637 = 172373180071LLU;
	uint16_t x638 = 36U;
	int8_t x639 = INT8_MAX;
	int16_t x640 = -1;
	uint64_t t159 = 399554359LLU;

    t159 = ((x637&(x638|x639))^x640);

    if (t159 != 18446744073709551576LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = INT16_MIN;
	int8_t x643 = INT8_MIN;
	static int32_t t160 = -13644;

    t160 = ((x641&(x642|x643))^x644);

    if (t160 != -32757) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x647 = INT64_MIN;
	int16_t x648 = INT16_MAX;

    t161 = ((x645&(x646|x647))^x648);

    if (t161 != 14499015104592LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = -1;
	int8_t x650 = INT8_MIN;
	int32_t x651 = -1;
	volatile int32_t t162 = 6361;

    t162 = ((x649&(x650|x651))^x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = -1717;
	uint16_t x654 = 62U;
	int8_t x655 = INT8_MIN;
	int32_t x656 = INT32_MIN;
	volatile int32_t t163 = -426335744;

    t163 = ((x653&(x654|x655))^x656);

    if (t163 != 2147481866) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x657 = -1;
	int16_t x658 = INT16_MIN;
	volatile uint32_t x659 = UINT32_MAX;
	uint8_t x660 = 55U;
	uint32_t t164 = 7164U;

    t164 = ((x657&(x658|x659))^x660);

    if (t164 != 4294967240U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x662 = 40890975U;
	int64_t x663 = INT64_MAX;
	static volatile int64_t t165 = -99421534LL;

    t165 = ((x661&(x662|x663))^x664);

    if (t165 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x665 = 2U;
	uint16_t x666 = 654U;
	int16_t x667 = INT16_MIN;
	static int16_t x668 = -1;
	int32_t t166 = 992;

    t166 = ((x665&(x666|x667))^x668);

    if (t166 != -3) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint16_t x670 = 443U;
	volatile int64_t x671 = -1LL;
	uint32_t x672 = 57878130U;
	volatile int64_t t167 = -52218580530372LL;

    t167 = ((x669&(x670|x671))^x672);

    if (t167 != -57878030LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = -7;
	int64_t x674 = INT64_MIN;
	int64_t x675 = -1LL;
	int64_t x676 = -1LL;
	volatile int64_t t168 = -654LL;

    t168 = ((x673&(x674|x675))^x676);

    if (t168 != 6LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x677 = UINT32_MAX;
	volatile uint32_t x678 = 3108U;
	volatile uint32_t t169 = 2076U;

    t169 = ((x677&(x678|x679))^x680);

    if (t169 != 1784875U) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x682 = -1LL;
	uint64_t x683 = 148573LLU;
	volatile int8_t x684 = 0;
	static uint64_t t170 = 161622103LLU;

    t170 = ((x681&(x682|x683))^x684);

    if (t170 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x687 = 8780156569320LLU;
	static uint32_t x688 = 15U;
	volatile uint64_t t171 = 3408332218LLU;

    t171 = ((x685&(x686|x687))^x688);

    if (t171 != 8780156573671LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = INT8_MIN;
	volatile int8_t x690 = INT8_MIN;
	int16_t x691 = INT16_MAX;
	uint16_t x692 = 17U;
	int32_t t172 = -106;

    t172 = ((x689&(x690|x691))^x692);

    if (t172 != -111) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = -320536139;
	static int64_t x694 = -1626229676635LL;
	int64_t x695 = -1LL;
	int64_t x696 = -1LL;
	volatile int64_t t173 = -875317LL;

    t173 = ((x693&(x694|x695))^x696);

    if (t173 != 320536138LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = 1320;
	volatile int32_t x699 = INT32_MIN;
	int16_t x700 = 10393;
	volatile uint64_t t174 = 628326733276LLU;

    t174 = ((x697&(x698|x699))^x700);

    if (t174 != 11697LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = INT8_MIN;
	int32_t x702 = -7;
	static int64_t t175 = 1274838112492127694LL;

    t175 = ((x701&(x702|x703))^x704);

    if (t175 != -65409LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = -3;
	int16_t x706 = -1;
	volatile int64_t x707 = 494427537739LL;
	int64_t x708 = INT64_MAX;
	int64_t t176 = 1535994LL;

    t176 = ((x705&(x706|x707))^x708);

    if (t176 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x709 = UINT64_MAX;
	volatile uint16_t x711 = 3U;
	static volatile uint8_t x712 = 0U;
	volatile uint64_t t177 = 1LLU;

    t177 = ((x709&(x710|x711))^x712);

    if (t177 != 4007LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = 3;
	uint32_t x714 = 1910U;
	uint64_t x716 = 148120LLU;
	static uint64_t t178 = 2893173616384924453LLU;

    t178 = ((x713&(x714|x715))^x716);

    if (t178 != 148123LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x718 = INT64_MIN;
	int16_t x719 = INT16_MIN;
	volatile uint64_t x720 = UINT64_MAX;
	volatile uint64_t t179 = 2072499894737831LLU;

    t179 = ((x717&(x718|x719))^x720);

    if (t179 != 32767LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x722 = INT32_MAX;
	int16_t x723 = INT16_MIN;
	int16_t x724 = INT16_MAX;
	volatile int32_t t180 = 988;

    t180 = ((x721&(x722|x723))^x724);

    if (t180 != 32388) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint8_t x725 = 3U;
	int32_t x726 = INT32_MIN;
	int8_t x727 = INT8_MIN;
	static volatile int16_t x728 = INT16_MAX;

    t181 = ((x725&(x726|x727))^x728);

    if (t181 != 32767) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x729 = -1;
	volatile uint8_t x730 = 4U;
	uint64_t x731 = 779673LLU;
	int8_t x732 = -1;
	static volatile uint64_t t182 = 7LLU;

    t182 = ((x729&(x730|x731))^x732);

    if (t182 != 18446744073708771938LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = INT64_MIN;
	static volatile int8_t x734 = -1;
	int16_t x735 = INT16_MAX;
	int16_t x736 = -1;
	volatile int64_t t183 = INT64_MAX;

    t183 = ((x733&(x734|x735))^x736);

    if (t183 != INT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x738 = 123317856U;
	int16_t x739 = INT16_MIN;
	int32_t x740 = INT32_MIN;
	volatile uint32_t t184 = 55312595U;

    t184 = ((x737&(x738|x739))^x740);

    if (t184 != 2147483648U) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x742 = -8271;
	static volatile uint32_t x743 = 67434614U;
	volatile int8_t x744 = INT8_MIN;
	volatile int64_t t185 = -170660487LL;

    t185 = ((x741&(x742|x743))^x744);

    if (t185 != -128LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x746 = 254762LL;
	static volatile int8_t x747 = 0;
	static int32_t x748 = -99008200;
	int64_t t186 = 4277657404357834940LL;

    t186 = ((x745&(x746|x747))^x748);

    if (t186 != -99008200LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x749 = 2960;
	uint8_t x750 = 0U;
	volatile int64_t x752 = INT64_MIN;
	int64_t t187 = 4243300936LL;

    t187 = ((x749&(x750|x751))^x752);

    if (t187 != -9223372036854772848LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = -1;
	int32_t x754 = -1;
	volatile int64_t x755 = INT64_MIN;
	static int16_t x756 = -1;
	static volatile int64_t t188 = 68934757278681LL;

    t188 = ((x753&(x754|x755))^x756);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = INT64_MIN;
	int32_t x758 = -1;
	int8_t x759 = -1;
	int8_t x760 = 1;

    t189 = ((x757&(x758|x759))^x760);

    if (t189 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x762 = INT16_MAX;
	volatile uint32_t x763 = 322199752U;
	volatile uint32_t t190 = 6000061U;

    t190 = ((x761&(x762|x763))^x764);

    if (t190 != 2147481360U) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x765 = INT8_MIN;
	int16_t x766 = INT16_MIN;
	int64_t x767 = -1LL;
	int8_t x768 = INT8_MAX;

    t191 = ((x765&(x766|x767))^x768);

    if (t191 != -1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x770 = INT32_MIN;
	static int64_t x772 = -1LL;
	int64_t t192 = 1313LL;

    t192 = ((x769&(x770|x771))^x772);

    if (t192 != 127LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = INT64_MIN;
	static uint32_t x774 = 7U;
	int32_t x775 = -1;
	static int8_t x776 = INT8_MIN;
	static volatile int64_t t193 = -45682769107647LL;

    t193 = ((x773&(x774|x775))^x776);

    if (t193 != -128LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = INT64_MIN;
	uint32_t x778 = 30U;
	int64_t x779 = 962679LL;
	int64_t x780 = -50171747598941603LL;
	volatile int64_t t194 = 620131886238385LL;

    t194 = ((x777&(x778|x779))^x780);

    if (t194 != -50171747598941603LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x781 = INT64_MIN;
	int8_t x782 = INT8_MIN;
	static int32_t x784 = -53669060;
	volatile int64_t t195 = 4911386915LL;

    t195 = ((x781&(x782|x783))^x784);

    if (t195 != 9223372036801106748LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x786 = UINT32_MAX;
	int64_t x787 = -5062586945LL;
	int64_t x788 = INT64_MIN;
	int64_t t196 = 65329438LL;

    t196 = ((x785&(x786|x787))^x788);

    if (t196 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint8_t x789 = UINT8_MAX;
	int8_t x791 = INT8_MIN;
	int64_t x792 = INT64_MAX;
	static int64_t t197 = -8LL;

    t197 = ((x789&(x790|x791))^x792);

    if (t197 != 9223372036854775655LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int8_t x793 = INT8_MIN;
	uint16_t x795 = 420U;
	uint8_t x796 = 0U;
	volatile int32_t t198 = 49;

    t198 = ((x793&(x794|x795))^x796);

    if (t198 != 65408) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x797 = 62U;
	int32_t x798 = INT32_MIN;
	static volatile int32_t x799 = 61142;
	uint64_t t199 = 61LLU;

    t199 = ((x797&(x798|x799))^x800);

    if (t199 != 116434LLU) { NG(); } else { ; }
	
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

