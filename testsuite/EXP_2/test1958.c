
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

int32_t x1 = -19842;
int8_t x2 = 12;
int8_t x18 = -1;
uint64_t x21 = 124697236LLU;
int8_t x29 = INT8_MAX;
int16_t x35 = INT16_MIN;
static volatile int8_t x36 = INT8_MAX;
int32_t t8 = -1634;
int8_t x39 = INT8_MAX;
uint32_t x42 = UINT32_MAX;
int16_t x45 = -7;
int8_t x47 = INT8_MAX;
static int8_t x53 = -32;
uint32_t x57 = 25902487U;
uint16_t x61 = 8017U;
volatile int8_t x62 = 7;
volatile uint64_t t16 = 1033392240294998093LLU;
int32_t x69 = INT32_MIN;
uint32_t x70 = 928279U;
uint16_t x71 = 28131U;
volatile int64_t t17 = 2339790970131LL;
uint8_t x73 = 62U;
int64_t x75 = -1LL;
int32_t t20 = 1;
int16_t x86 = INT16_MIN;
int16_t x96 = INT16_MIN;
int32_t x97 = INT32_MAX;
int8_t x101 = INT8_MAX;
int8_t x108 = -2;
int64_t x112 = INT64_MIN;
static int64_t x115 = -80LL;
int64_t x119 = -1844535662528LL;
int64_t x121 = -54817LL;
uint32_t t32 = 113U;
volatile int8_t x135 = INT8_MIN;
int64_t x136 = INT64_MIN;
int32_t x137 = -129115;
volatile int8_t x148 = -23;
uint64_t x152 = 11944517606794LLU;
volatile uint16_t x159 = 2U;
uint16_t x161 = 719U;
int32_t t40 = -961;
static uint8_t x166 = UINT8_MAX;
int8_t x171 = -7;
static int8_t x175 = INT8_MIN;
uint16_t x178 = 2043U;
uint64_t t45 = 3996376510487238LLU;
volatile int8_t x189 = INT8_MIN;
int64_t x190 = -1LL;
static int64_t x192 = 3LL;
uint64_t x197 = UINT64_MAX;
static int16_t x200 = INT16_MAX;
static int8_t x202 = -1;
int32_t t50 = -3644;
uint8_t x209 = 9U;
static int64_t x219 = 3LL;
uint16_t x228 = 272U;
int32_t x234 = -27723430;
volatile int64_t t58 = 16LL;
int8_t x237 = INT8_MAX;
static volatile int64_t t61 = -176388105LL;
uint64_t x260 = UINT64_MAX;
uint32_t x266 = 28355154U;
static volatile uint64_t t67 = 24853102LLU;
volatile uint8_t x274 = UINT8_MAX;
static volatile uint32_t x275 = 1703U;
volatile int32_t t68 = -58;
uint16_t x286 = 0U;
static volatile int32_t t73 = -727947167;
static volatile uint32_t t74 = 1618982490U;
int64_t x305 = INT64_MAX;
int64_t x306 = 1628776253367075410LL;
int64_t x309 = INT64_MIN;
static uint8_t x316 = 124U;
volatile int8_t x317 = INT8_MAX;
volatile uint16_t x322 = UINT16_MAX;
int8_t x323 = 46;
uint64_t x328 = UINT64_MAX;
int16_t x330 = -61;
int32_t x336 = -1;
volatile int64_t t84 = 8493637073299838LL;
volatile uint32_t x341 = 889701U;
volatile uint64_t t85 = 6242914LLU;
static int32_t x348 = -1;
uint16_t x355 = 1U;
static int8_t x357 = INT8_MAX;
static int16_t x360 = 27;
static int8_t x361 = 12;
int16_t x368 = -1800;
volatile uint64_t x370 = 62072LLU;
uint8_t x372 = 48U;
uint8_t x375 = 11U;
volatile uint64_t t94 = 259576LLU;
int32_t t95 = 143;
int16_t x396 = INT16_MAX;
volatile int32_t t98 = -1;
int16_t x402 = INT16_MIN;
uint8_t x403 = UINT8_MAX;
static int32_t x415 = INT32_MIN;
uint32_t x424 = 200612544U;
static uint8_t x428 = 121U;
int32_t x433 = 15;
static volatile uint32_t x437 = UINT32_MAX;
int16_t x439 = -11;
int16_t x443 = INT16_MIN;
uint32_t x444 = UINT32_MAX;
volatile uint32_t t110 = 315U;
int64_t x446 = -1LL;
int64_t t112 = 217818183592LL;
int8_t x454 = INT8_MIN;
volatile int8_t x460 = -1;
uint64_t x463 = 2LLU;
volatile int8_t x469 = INT8_MAX;
static int16_t x473 = -13;
volatile uint8_t x476 = 4U;
int32_t x477 = INT32_MIN;
int32_t x479 = -1;
int8_t x487 = -14;
volatile uint8_t x492 = UINT8_MAX;
static int64_t t125 = -963535598356LL;
volatile uint64_t t127 = 7279371LLU;
int16_t x519 = -1;
volatile uint16_t x521 = 15689U;
uint16_t x526 = 441U;
uint32_t x529 = 6603U;
uint8_t x532 = UINT8_MAX;
int32_t x544 = INT32_MAX;
uint16_t x546 = UINT16_MAX;
uint16_t x555 = UINT16_MAX;
int16_t x560 = INT16_MIN;
int32_t t139 = 287;
uint32_t x563 = 2835U;
uint64_t t140 = 16995590117LLU;
int16_t x567 = INT16_MAX;
uint8_t x574 = 16U;
int32_t t143 = 359394;
static uint16_t x577 = UINT16_MAX;
static uint8_t x578 = UINT8_MAX;
uint64_t x586 = UINT64_MAX;
uint16_t x589 = 3U;
volatile int32_t t147 = -1074;
uint8_t x603 = 15U;
uint64_t x605 = UINT64_MAX;
static uint8_t x609 = 9U;
int32_t x611 = INT32_MIN;
volatile int64_t x612 = INT64_MIN;
int32_t x613 = INT32_MIN;
static uint8_t x614 = 4U;
uint64_t x615 = 15348536439845888LLU;
int64_t t153 = 4141195707984730072LL;
static uint8_t x624 = UINT8_MAX;
uint32_t x630 = 1348676U;
static uint32_t x631 = UINT32_MAX;
volatile int64_t t158 = 18603LL;
static volatile int64_t x650 = INT64_MAX;
volatile uint64_t x664 = 50199810LLU;
int64_t x666 = -341651024LL;
int16_t x667 = -1;
static int32_t x671 = 3271767;
int32_t x673 = -1;
static uint8_t x675 = 10U;
static uint64_t x683 = 1152235981150943780LLU;
volatile int64_t t171 = 127060LL;
uint16_t x691 = UINT16_MAX;
static volatile int64_t t172 = -5534779384455LL;
volatile int64_t x695 = INT64_MAX;
static volatile int64_t t173 = -81049721LL;
uint64_t x703 = UINT64_MAX;
int64_t x706 = -1LL;
volatile int64_t x709 = INT64_MIN;
int64_t t177 = 45278429514LL;
uint16_t x713 = 31262U;
int16_t x715 = INT16_MIN;
int16_t x720 = INT16_MAX;
static int64_t x723 = INT64_MIN;
static uint8_t x730 = 30U;
int16_t x733 = INT16_MAX;
int16_t x734 = -1;
int16_t x749 = INT16_MIN;
int64_t x754 = 752007034169LL;
int8_t x762 = 1;
volatile uint8_t x767 = UINT8_MAX;
uint8_t x778 = 0U;
uint32_t x784 = 93064U;
int8_t x786 = INT8_MIN;
int32_t x793 = INT32_MIN;
int64_t x799 = INT64_MAX;


void f0(void) {
    	volatile int64_t x3 = 2LL;
	static uint32_t x4 = 206U;
	volatile uint32_t t0 = 4U;

    t0 = ((x1^(x2<=x3))&x4);

    if (t0 != 78U) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -325;
	static uint16_t x6 = UINT16_MAX;
	static volatile int64_t x7 = -1LL;
	int8_t x8 = INT8_MAX;
	volatile int32_t t1 = 200390;

    t1 = ((x5^(x6<=x7))&x8);

    if (t1 != 59) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = INT16_MAX;
	uint8_t x10 = UINT8_MAX;
	volatile uint16_t x11 = 13442U;
	uint32_t x12 = UINT32_MAX;
	volatile uint32_t t2 = 25789U;

    t2 = ((x9^(x10<=x11))&x12);

    if (t2 != 32766U) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint32_t x13 = UINT32_MAX;
	int32_t x14 = INT32_MIN;
	static int16_t x15 = INT16_MIN;
	int8_t x16 = 1;
	uint32_t t3 = 100787U;

    t3 = ((x13^(x14<=x15))&x16);

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x17 = -3;
	volatile int16_t x19 = 24;
	uint32_t x20 = UINT32_MAX;
	volatile uint32_t t4 = 42U;

    t4 = ((x17^(x18<=x19))&x20);

    if (t4 != 4294967292U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x22 = UINT8_MAX;
	int8_t x23 = 50;
	int32_t x24 = INT32_MIN;
	volatile uint64_t t5 = 564LLU;

    t5 = ((x21^(x22<=x23))&x24);

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = 120U;
	int32_t x26 = INT32_MIN;
	static int8_t x27 = 22;
	static uint64_t x28 = 0LLU;
	uint64_t t6 = 2LLU;

    t6 = ((x25^(x26<=x27))&x28);

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x30 = -70455539LL;
	static uint32_t x31 = 6911U;
	int8_t x32 = -34;
	int32_t t7 = -23;

    t7 = ((x29^(x30<=x31))&x32);

    if (t7 != 94) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x33 = -37;
	int16_t x34 = INT16_MIN;

    t8 = ((x33^(x34<=x35))&x36);

    if (t8 != 90) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MIN;
	int64_t x38 = INT64_MIN;
	int64_t x40 = 1049654216485410686LL;
	volatile int64_t t9 = -3150LL;

    t9 = ((x37^(x38<=x39))&x40);

    if (t9 != 1049654215032438784LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = -1LL;
	int32_t x43 = INT32_MIN;
	int32_t x44 = -1;
	volatile int64_t t10 = -1125075857419556925LL;

    t10 = ((x41^(x42<=x43))&x44);

    if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x46 = -229;
	uint32_t x48 = 0U;
	static volatile uint32_t t11 = 64965904U;

    t11 = ((x45^(x46<=x47))&x48);

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MIN;
	uint32_t x50 = UINT32_MAX;
	uint64_t x51 = 29297452482LLU;
	uint32_t x52 = 12U;
	uint32_t t12 = 218U;

    t12 = ((x49^(x50<=x51))&x52);

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x54 = INT16_MIN;
	static int16_t x55 = INT16_MIN;
	int8_t x56 = INT8_MIN;
	static volatile int32_t t13 = 237663;

    t13 = ((x53^(x54<=x55))&x56);

    if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x58 = INT32_MAX;
	static int8_t x59 = INT8_MIN;
	static int64_t x60 = INT64_MAX;
	volatile int64_t t14 = -125974049488LL;

    t14 = ((x57^(x58<=x59))&x60);

    if (t14 != 25902487LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x63 = INT64_MAX;
	int32_t x64 = INT32_MAX;
	int32_t t15 = -44573604;

    t15 = ((x61^(x62<=x63))&x64);

    if (t15 != 8016) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x65 = -1LL;
	static int8_t x66 = -27;
	int32_t x67 = -215366;
	uint64_t x68 = 30932260062LLU;

    t16 = ((x65^(x66<=x67))&x68);

    if (t16 != 30932260062LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x72 = 0LL;

    t17 = ((x69^(x70<=x71))&x72);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x74 = -1;
	int64_t x76 = INT64_MIN;
	int64_t t18 = 72LL;

    t18 = ((x73^(x74<=x75))&x76);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x77 = -1LL;
	uint8_t x78 = 1U;
	uint8_t x79 = 0U;
	uint16_t x80 = 37U;
	int64_t t19 = -6216206LL;

    t19 = ((x77^(x78<=x79))&x80);

    if (t19 != 37LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MIN;
	int8_t x82 = INT8_MIN;
	int64_t x83 = INT64_MIN;
	static int16_t x84 = -1;

    t20 = ((x81^(x82<=x83))&x84);

    if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x85 = -1315148;
	volatile int8_t x87 = -40;
	int64_t x88 = INT64_MAX;
	static int64_t t21 = 27686LL;

    t21 = ((x85^(x86<=x87))&x88);

    if (t21 != 9223372036853460661LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = -8;
	volatile int16_t x90 = INT16_MAX;
	uint16_t x91 = UINT16_MAX;
	int16_t x92 = INT16_MAX;
	int32_t t22 = -66;

    t22 = ((x89^(x90<=x91))&x92);

    if (t22 != 32761) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x93 = UINT16_MAX;
	int16_t x94 = INT16_MIN;
	int64_t x95 = INT64_MIN;
	static int32_t t23 = 1249;

    t23 = ((x93^(x94<=x95))&x96);

    if (t23 != 32768) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x98 = 2U;
	static int32_t x99 = 13270689;
	int64_t x100 = INT64_MAX;
	int64_t t24 = 1314913600651075LL;

    t24 = ((x97^(x98<=x99))&x100);

    if (t24 != 2147483646LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x102 = INT8_MAX;
	uint32_t x103 = 1887U;
	uint16_t x104 = 6951U;
	static int32_t t25 = -2;

    t25 = ((x101^(x102<=x103))&x104);

    if (t25 != 38) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MAX;
	int16_t x106 = INT16_MAX;
	volatile uint32_t x107 = 1504785504U;
	int64_t t26 = -18427801102933096LL;

    t26 = ((x105^(x106<=x107))&x108);

    if (t26 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x109 = 22LLU;
	int32_t x110 = 150632;
	int16_t x111 = -1;
	uint64_t t27 = 61660488398420LLU;

    t27 = ((x109^(x110<=x111))&x112);

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = -1;
	volatile int8_t x114 = 28;
	uint32_t x116 = 1379727984U;
	uint32_t t28 = 505894067U;

    t28 = ((x113^(x114<=x115))&x116);

    if (t28 != 1379727984U) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x117 = 1;
	static int16_t x118 = INT16_MIN;
	uint16_t x120 = 3697U;
	int32_t t29 = 19674271;

    t29 = ((x117^(x118<=x119))&x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x122 = INT16_MIN;
	static int32_t x123 = -7;
	static volatile int64_t x124 = 8127LL;
	int64_t t30 = -3744057389LL;

    t30 = ((x121^(x122<=x123))&x124);

    if (t30 != 2462LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x125 = INT32_MIN;
	volatile int64_t x126 = -1LL;
	int8_t x127 = INT8_MIN;
	static uint16_t x128 = 970U;
	int32_t t31 = -478;

    t31 = ((x125^(x126<=x127))&x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x129 = UINT32_MAX;
	uint8_t x130 = UINT8_MAX;
	static volatile uint64_t x131 = 1671715324LLU;
	static volatile int8_t x132 = INT8_MIN;

    t32 = ((x129^(x130<=x131))&x132);

    if (t32 != 4294967168U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x133 = 29311436109LLU;
	int16_t x134 = INT16_MAX;
	volatile uint64_t t33 = 1565981215657141LLU;

    t33 = ((x133^(x134<=x135))&x136);

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x138 = 5;
	uint8_t x139 = 85U;
	uint32_t x140 = UINT32_MAX;
	static volatile uint32_t t34 = 2312U;

    t34 = ((x137^(x138<=x139))&x140);

    if (t34 != 4294838180U) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x141 = INT8_MIN;
	int64_t x142 = INT64_MIN;
	static int8_t x143 = -1;
	uint32_t x144 = UINT32_MAX;
	uint32_t t35 = 64458628U;

    t35 = ((x141^(x142<=x143))&x144);

    if (t35 != 4294967169U) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int32_t x145 = INT32_MIN;
	int16_t x146 = -253;
	int64_t x147 = -1LL;
	static volatile int32_t t36 = 406257;

    t36 = ((x145^(x146<=x147))&x148);

    if (t36 != -2147483647) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = -1LL;
	int16_t x150 = 100;
	volatile uint8_t x151 = 0U;
	static uint64_t t37 = 484856771LLU;

    t37 = ((x149^(x150<=x151))&x152);

    if (t37 != 11944517606794LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = INT16_MIN;
	volatile uint32_t x154 = 12129688U;
	volatile int32_t x155 = -1;
	int16_t x156 = 1;
	int32_t t38 = -10;

    t38 = ((x153^(x154<=x155))&x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = 4;
	static volatile uint16_t x158 = 9082U;
	int8_t x160 = INT8_MIN;
	int32_t t39 = 43;

    t39 = ((x157^(x158<=x159))&x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x162 = 37U;
	uint32_t x163 = UINT32_MAX;
	volatile uint8_t x164 = UINT8_MAX;

    t40 = ((x161^(x162<=x163))&x164);

    if (t40 != 206) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = INT8_MIN;
	uint16_t x167 = UINT16_MAX;
	static int32_t x168 = -1;
	int32_t t41 = -1;

    t41 = ((x165^(x166<=x167))&x168);

    if (t41 != -127) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = INT8_MIN;
	static uint32_t x170 = 10U;
	volatile int8_t x172 = INT8_MIN;
	volatile int32_t t42 = -1059259;

    t42 = ((x169^(x170<=x171))&x172);

    if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = 4293LL;
	uint16_t x174 = 1U;
	volatile uint32_t x176 = 1830295177U;
	volatile int64_t t43 = -24LL;

    t43 = ((x173^(x174<=x175))&x176);

    if (t43 != 4225LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x177 = 87U;
	int16_t x179 = -244;
	int32_t x180 = 8366;
	volatile uint32_t t44 = 1U;

    t44 = ((x177^(x178<=x179))&x180);

    if (t44 != 6U) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = INT16_MIN;
	int8_t x182 = -1;
	uint16_t x183 = UINT16_MAX;
	uint64_t x184 = 408104015LLU;

    t45 = ((x181^(x182<=x183))&x184);

    if (t45 != 408092673LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = INT32_MIN;
	int64_t x186 = -52218LL;
	int64_t x187 = -2759302102775154650LL;
	int32_t x188 = -4241;
	int32_t t46 = INT32_MIN;

    t46 = ((x185^(x186<=x187))&x188);

    if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x191 = 8;
	volatile int64_t t47 = 1987497632LL;

    t47 = ((x189^(x190<=x191))&x192);

    if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x193 = INT8_MIN;
	int64_t x194 = 1LL;
	int16_t x195 = 90;
	uint8_t x196 = 56U;
	volatile int32_t t48 = 40909;

    t48 = ((x193^(x194<=x195))&x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x198 = -103;
	int64_t x199 = 2219LL;
	uint64_t t49 = 61565893LLU;

    t49 = ((x197^(x198<=x199))&x200);

    if (t49 != 32766LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x201 = INT16_MIN;
	int16_t x203 = 476;
	int16_t x204 = -1;

    t50 = ((x201^(x202<=x203))&x204);

    if (t50 != -32767) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x205 = -44;
	int64_t x206 = INT64_MAX;
	static int8_t x207 = INT8_MAX;
	int64_t x208 = 69331LL;
	volatile int64_t t51 = -1553093940497252LL;

    t51 = ((x205^(x206<=x207))&x208);

    if (t51 != 69328LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x210 = UINT32_MAX;
	uint8_t x211 = UINT8_MAX;
	int16_t x212 = 13136;
	int32_t t52 = -1;

    t52 = ((x209^(x210<=x211))&x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x213 = -12424;
	uint8_t x214 = UINT8_MAX;
	uint64_t x215 = 954LLU;
	int8_t x216 = 1;
	static volatile int32_t t53 = -57222509;

    t53 = ((x213^(x214<=x215))&x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x217 = 2275831134504LL;
	static uint8_t x218 = 5U;
	int16_t x220 = INT16_MIN;
	int64_t t54 = 3160515644LL;

    t54 = ((x217^(x218<=x219))&x220);

    if (t54 != 2275831119872LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = INT16_MIN;
	static int64_t x222 = -1LL;
	uint8_t x223 = 2U;
	int16_t x224 = -1;
	volatile int32_t t55 = 847753;

    t55 = ((x221^(x222<=x223))&x224);

    if (t55 != -32767) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x225 = 239U;
	int64_t x226 = INT64_MIN;
	static int8_t x227 = INT8_MIN;
	volatile int32_t t56 = 263170341;

    t56 = ((x225^(x226<=x227))&x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x229 = -794928LL;
	int8_t x230 = INT8_MIN;
	uint16_t x231 = 21787U;
	volatile int16_t x232 = -6;
	int64_t t57 = -41894190635071165LL;

    t57 = ((x229^(x230<=x231))&x232);

    if (t57 != -794928LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = -1LL;
	uint8_t x235 = 3U;
	volatile int32_t x236 = -1;

    t58 = ((x233^(x234<=x235))&x236);

    if (t58 != -2LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x238 = -3777077755LL;
	uint64_t x239 = UINT64_MAX;
	static uint64_t x240 = UINT64_MAX;
	volatile uint64_t t59 = 423LLU;

    t59 = ((x237^(x238<=x239))&x240);

    if (t59 != 126LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int32_t x241 = -766625;
	int64_t x242 = INT64_MIN;
	static int64_t x243 = -1LL;
	volatile uint32_t x244 = UINT32_MAX;
	volatile uint32_t t60 = 2298U;

    t60 = ((x241^(x242<=x243))&x244);

    if (t60 != 4294200670U) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x245 = 372U;
	int64_t x246 = INT64_MIN;
	int16_t x247 = -1;
	static volatile int64_t x248 = INT64_MAX;

    t61 = ((x245^(x246<=x247))&x248);

    if (t61 != 373LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = 2273478U;
	volatile int64_t x250 = INT64_MIN;
	static int8_t x251 = 0;
	uint64_t x252 = 237LLU;
	uint64_t t62 = 0LLU;

    t62 = ((x249^(x250<=x251))&x252);

    if (t62 != 197LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x253 = INT16_MIN;
	int8_t x254 = INT8_MIN;
	volatile int8_t x255 = INT8_MAX;
	int32_t x256 = INT32_MAX;
	int32_t t63 = -1816;

    t63 = ((x253^(x254<=x255))&x256);

    if (t63 != 2147450881) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = -12872;
	static int32_t x258 = 9206;
	int8_t x259 = 31;
	volatile uint64_t t64 = 4LLU;

    t64 = ((x257^(x258<=x259))&x260);

    if (t64 != 18446744073709538744LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = -1LL;
	volatile int8_t x262 = -3;
	int64_t x263 = INT64_MIN;
	static int64_t x264 = INT64_MAX;
	volatile int64_t t65 = INT64_MAX;

    t65 = ((x261^(x262<=x263))&x264);

    if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x265 = 2U;
	int32_t x267 = INT32_MIN;
	int16_t x268 = 7;
	int32_t t66 = -210;

    t66 = ((x265^(x266<=x267))&x268);

    if (t66 != 3) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x269 = 120589216195018074LLU;
	volatile int32_t x270 = INT32_MIN;
	int8_t x271 = INT8_MIN;
	int16_t x272 = INT16_MAX;

    t67 = ((x269^(x270<=x271))&x272);

    if (t67 != 32091LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x273 = UINT8_MAX;
	volatile int32_t x276 = INT32_MAX;

    t68 = ((x273^(x274<=x275))&x276);

    if (t68 != 254) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x277 = 27565494788165LLU;
	uint16_t x278 = 44U;
	volatile int32_t x279 = -59;
	uint64_t x280 = 1646954915832LLU;
	volatile uint64_t t69 = 17277943028747227LLU;

    t69 = ((x277^(x278<=x279))&x280);

    if (t69 != 1177190146112LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint32_t x281 = UINT32_MAX;
	int32_t x282 = INT32_MAX;
	uint64_t x283 = UINT64_MAX;
	int64_t x284 = INT64_MIN;
	static int64_t t70 = -66LL;

    t70 = ((x281^(x282<=x283))&x284);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int32_t x285 = INT32_MAX;
	int64_t x287 = -1LL;
	uint16_t x288 = 1U;
	volatile int32_t t71 = 780815151;

    t71 = ((x285^(x286<=x287))&x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = -509;
	static volatile int64_t x290 = INT64_MAX;
	static int8_t x291 = INT8_MIN;
	volatile int16_t x292 = -1;
	static volatile int32_t t72 = 2224240;

    t72 = ((x289^(x290<=x291))&x292);

    if (t72 != -509) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x293 = INT16_MIN;
	int64_t x294 = INT64_MIN;
	uint32_t x295 = 297435422U;
	int8_t x296 = 14;

    t73 = ((x293^(x294<=x295))&x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x297 = UINT32_MAX;
	uint16_t x298 = 97U;
	volatile int16_t x299 = -1109;
	static int32_t x300 = -243435;

    t74 = ((x297^(x298<=x299))&x300);

    if (t74 != 4294723861U) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint64_t x301 = 156LLU;
	int16_t x302 = -6729;
	static int8_t x303 = INT8_MIN;
	int32_t x304 = INT32_MAX;
	volatile uint64_t t75 = 2057211945105379094LLU;

    t75 = ((x301^(x302<=x303))&x304);

    if (t75 != 157LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x307 = INT64_MIN;
	uint16_t x308 = 238U;
	static int64_t t76 = -16677672LL;

    t76 = ((x305^(x306<=x307))&x308);

    if (t76 != 238LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x310 = -545;
	int32_t x311 = INT32_MIN;
	uint8_t x312 = 3U;
	volatile int64_t t77 = -27LL;

    t77 = ((x309^(x310<=x311))&x312);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = -1LL;
	uint32_t x314 = UINT32_MAX;
	volatile uint32_t x315 = 3436U;
	int64_t t78 = 5704639286192788LL;

    t78 = ((x313^(x314<=x315))&x316);

    if (t78 != 124LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x318 = 84U;
	static int16_t x319 = INT16_MAX;
	volatile uint32_t x320 = UINT32_MAX;
	volatile uint32_t t79 = 711943U;

    t79 = ((x317^(x318<=x319))&x320);

    if (t79 != 126U) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x321 = 3955U;
	int32_t x324 = INT32_MIN;
	static volatile int32_t t80 = 355002834;

    t80 = ((x321^(x322<=x323))&x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = INT32_MIN;
	uint64_t x326 = 121LLU;
	uint8_t x327 = UINT8_MAX;
	uint64_t t81 = 3081079724773911888LLU;

    t81 = ((x325^(x326<=x327))&x328);

    if (t81 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x329 = INT64_MAX;
	uint64_t x331 = 652375419650201487LLU;
	static int64_t x332 = 342833345457623LL;
	int64_t t82 = 760437827374LL;

    t82 = ((x329^(x330<=x331))&x332);

    if (t82 != 342833345457623LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x333 = 21U;
	int8_t x334 = -14;
	uint16_t x335 = UINT16_MAX;
	int32_t t83 = -182;

    t83 = ((x333^(x334<=x335))&x336);

    if (t83 != 20) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = INT64_MIN;
	volatile int64_t x338 = INT64_MAX;
	int8_t x339 = INT8_MIN;
	static uint16_t x340 = 7093U;

    t84 = ((x337^(x338<=x339))&x340);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x342 = -5543;
	volatile uint32_t x343 = 830U;
	static uint64_t x344 = 15581366342649251LLU;

    t85 = ((x341^(x342<=x343))&x344);

    if (t85 != 524577LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int32_t x345 = INT32_MAX;
	int16_t x346 = -7;
	int64_t x347 = INT64_MIN;
	int32_t t86 = INT32_MAX;

    t86 = ((x345^(x346<=x347))&x348);

    if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x349 = INT32_MIN;
	uint64_t x350 = 130008569777060LLU;
	static volatile uint32_t x351 = 2954681U;
	uint64_t x352 = 10182304779LLU;
	uint64_t t87 = 41483842691364692LLU;

    t87 = ((x349^(x350<=x351))&x352);

    if (t87 != 8589934592LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint16_t x353 = UINT16_MAX;
	uint32_t x354 = 258527U;
	int8_t x356 = -7;
	int32_t t88 = 7;

    t88 = ((x353^(x354<=x355))&x356);

    if (t88 != 65529) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x358 = INT32_MAX;
	volatile int8_t x359 = INT8_MIN;
	int32_t t89 = -3988;

    t89 = ((x357^(x358<=x359))&x360);

    if (t89 != 27) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x362 = 0;
	volatile uint32_t x363 = 1U;
	uint16_t x364 = 1152U;
	int32_t t90 = 3543692;

    t90 = ((x361^(x362<=x363))&x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x365 = -1;
	uint8_t x366 = UINT8_MAX;
	int8_t x367 = INT8_MIN;
	static volatile int32_t t91 = 2;

    t91 = ((x365^(x366<=x367))&x368);

    if (t91 != -1800) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = 0;
	int64_t x371 = INT64_MIN;
	int32_t t92 = -140851889;

    t92 = ((x369^(x370<=x371))&x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = 145;
	volatile int8_t x374 = INT8_MIN;
	int64_t x376 = 6114161151616487LL;
	int64_t t93 = 233578889329060931LL;

    t93 = ((x373^(x374<=x375))&x376);

    if (t93 != 128LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x377 = UINT32_MAX;
	volatile int64_t x378 = INT64_MAX;
	int32_t x379 = 334868328;
	uint64_t x380 = 8LLU;

    t94 = ((x377^(x378<=x379))&x380);

    if (t94 != 8LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint8_t x381 = 40U;
	int8_t x382 = 5;
	int64_t x383 = -6748446106416LL;
	static int8_t x384 = INT8_MIN;

    t95 = ((x381^(x382<=x383))&x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = INT8_MAX;
	int8_t x386 = 12;
	int8_t x387 = -1;
	int16_t x388 = -1;
	static int32_t t96 = -113;

    t96 = ((x385^(x386<=x387))&x388);

    if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x389 = 1U;
	int16_t x390 = -1;
	int16_t x391 = 1;
	volatile int32_t x392 = INT32_MIN;
	int32_t t97 = 467017595;

    t97 = ((x389^(x390<=x391))&x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x393 = 26U;
	static int16_t x394 = INT16_MIN;
	uint64_t x395 = 7804836503440LLU;

    t98 = ((x393^(x394<=x395))&x396);

    if (t98 != 26) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = -1;
	uint16_t x398 = UINT16_MAX;
	uint8_t x399 = 1U;
	volatile int8_t x400 = -1;
	int32_t t99 = 1226;

    t99 = ((x397^(x398<=x399))&x400);

    if (t99 != -1) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x401 = 62356861994LLU;
	static int16_t x404 = 3549;
	static uint64_t t100 = 804833989LLU;

    t100 = ((x401^(x402<=x403))&x404);

    if (t100 != 1033LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x405 = INT16_MIN;
	static int64_t x406 = -1LL;
	uint64_t x407 = UINT64_MAX;
	static int16_t x408 = -7672;
	volatile int32_t t101 = -7575;

    t101 = ((x405^(x406<=x407))&x408);

    if (t101 != -32768) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = 1;
	uint16_t x410 = 3U;
	int64_t x411 = 8561211453LL;
	int16_t x412 = INT16_MIN;
	static int32_t t102 = 24542;

    t102 = ((x409^(x410<=x411))&x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = INT16_MIN;
	uint16_t x414 = 1U;
	uint64_t x416 = UINT64_MAX;
	uint64_t t103 = 15556858555LLU;

    t103 = ((x413^(x414<=x415))&x416);

    if (t103 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = INT16_MIN;
	uint16_t x418 = 60U;
	uint8_t x419 = 17U;
	volatile int16_t x420 = INT16_MIN;
	int32_t t104 = 0;

    t104 = ((x417^(x418<=x419))&x420);

    if (t104 != -32768) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x421 = UINT64_MAX;
	int16_t x422 = INT16_MAX;
	static volatile int32_t x423 = INT32_MIN;
	volatile uint64_t t105 = 1967500538496259228LLU;

    t105 = ((x421^(x422<=x423))&x424);

    if (t105 != 200612544LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x425 = -1;
	int8_t x426 = -2;
	int8_t x427 = -1;
	volatile int32_t t106 = 31351112;

    t106 = ((x425^(x426<=x427))&x428);

    if (t106 != 120) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x429 = 1U;
	uint16_t x430 = 491U;
	uint64_t x431 = 550338149792393LLU;
	int8_t x432 = 25;
	volatile int32_t t107 = 1058;

    t107 = ((x429^(x430<=x431))&x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x434 = INT32_MAX;
	static uint32_t x435 = 155533U;
	volatile int8_t x436 = -1;
	volatile int32_t t108 = -7427;

    t108 = ((x433^(x434<=x435))&x436);

    if (t108 != 15) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x438 = INT64_MAX;
	uint64_t x440 = 211268656400LLU;
	volatile uint64_t t109 = 264612534LLU;

    t109 = ((x437^(x438<=x439))&x440);

    if (t109 != 815258896LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x441 = 0U;
	int16_t x442 = INT16_MAX;

    t110 = ((x441^(x442<=x443))&x444);

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x445 = INT16_MIN;
	int16_t x447 = INT16_MAX;
	int8_t x448 = 10;
	int32_t t111 = -186;

    t111 = ((x445^(x446<=x447))&x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = -29383100882343726LL;
	volatile int8_t x450 = INT8_MAX;
	int64_t x451 = INT64_MIN;
	volatile uint8_t x452 = 0U;

    t112 = ((x449^(x450<=x451))&x452);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint8_t x453 = 46U;
	int16_t x455 = INT16_MAX;
	int32_t x456 = 56;
	static int32_t t113 = 0;

    t113 = ((x453^(x454<=x455))&x456);

    if (t113 != 40) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = -17702193301708728LL;
	int8_t x458 = INT8_MAX;
	static uint16_t x459 = UINT16_MAX;
	volatile int64_t t114 = 3093745LL;

    t114 = ((x457^(x458<=x459))&x460);

    if (t114 != -17702193301708727LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = INT8_MIN;
	volatile uint32_t x462 = UINT32_MAX;
	int64_t x464 = -285587941245LL;
	volatile int64_t t115 = -8839701296824408LL;

    t115 = ((x461^(x462<=x463))&x464);

    if (t115 != -285587941248LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x465 = UINT32_MAX;
	static uint32_t x466 = 509426U;
	int32_t x467 = -159631705;
	int64_t x468 = INT64_MIN;
	int64_t t116 = -66931915271LL;

    t116 = ((x465^(x466<=x467))&x468);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x470 = INT8_MIN;
	static uint16_t x471 = 0U;
	int64_t x472 = -1LL;
	volatile int64_t t117 = -110151941933LL;

    t117 = ((x469^(x470<=x471))&x472);

    if (t117 != 126LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x474 = -1LL;
	int32_t x475 = INT32_MIN;
	volatile int32_t t118 = -46;

    t118 = ((x473^(x474<=x475))&x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x478 = INT16_MAX;
	int16_t x480 = INT16_MIN;
	volatile int32_t t119 = INT32_MIN;

    t119 = ((x477^(x478<=x479))&x480);

    if (t119 != INT32_MIN) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x481 = 1;
	volatile int16_t x482 = INT16_MIN;
	uint8_t x483 = 45U;
	uint8_t x484 = 8U;
	int32_t t120 = 36222;

    t120 = ((x481^(x482<=x483))&x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x485 = 50038059LLU;
	int8_t x486 = -1;
	int16_t x488 = -1;
	static volatile uint64_t t121 = 6970297LLU;

    t121 = ((x485^(x486<=x487))&x488);

    if (t121 != 50038059LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = INT64_MAX;
	volatile int64_t x490 = INT64_MAX;
	static int16_t x491 = INT16_MIN;
	volatile int64_t t122 = 385649LL;

    t122 = ((x489^(x490<=x491))&x492);

    if (t122 != 255LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x493 = 1024550U;
	static int16_t x494 = -6;
	uint64_t x495 = UINT64_MAX;
	static int32_t x496 = -1;
	uint32_t t123 = 88U;

    t123 = ((x493^(x494<=x495))&x496);

    if (t123 != 1024551U) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = -1;
	volatile int64_t x498 = -44LL;
	int64_t x499 = -3994955354306846LL;
	int32_t x500 = 658338178;
	volatile int32_t t124 = -32854171;

    t124 = ((x497^(x498<=x499))&x500);

    if (t124 != 658338178) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x501 = 31U;
	static int32_t x502 = -1770;
	int32_t x503 = -1;
	static int64_t x504 = -7960LL;

    t125 = ((x501^(x502<=x503))&x504);

    if (t125 != 8LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = INT16_MAX;
	int64_t x506 = INT64_MAX;
	static int64_t x507 = INT64_MIN;
	int8_t x508 = INT8_MIN;
	int32_t t126 = 4508784;

    t126 = ((x505^(x506<=x507))&x508);

    if (t126 != 32640) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x509 = 1967109898091LLU;
	static int8_t x510 = -1;
	uint8_t x511 = UINT8_MAX;
	int8_t x512 = INT8_MIN;

    t127 = ((x509^(x510<=x511))&x512);

    if (t127 != 1967109897984LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x513 = 122U;
	int32_t x514 = 985747;
	static int64_t x515 = 8084LL;
	uint8_t x516 = 6U;
	volatile int32_t t128 = 9908358;

    t128 = ((x513^(x514<=x515))&x516);

    if (t128 != 2) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x517 = 4941678449568935854LLU;
	uint32_t x518 = UINT32_MAX;
	volatile int16_t x520 = 12338;
	static uint64_t t129 = 59936829LLU;

    t129 = ((x517^(x518<=x519))&x520);

    if (t129 != 8226LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x522 = UINT16_MAX;
	uint32_t x523 = UINT32_MAX;
	static uint8_t x524 = 23U;
	volatile int32_t t130 = -1;

    t130 = ((x521^(x522<=x523))&x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = INT32_MIN;
	int64_t x527 = INT64_MIN;
	static volatile int8_t x528 = -1;
	static int32_t t131 = INT32_MIN;

    t131 = ((x525^(x526<=x527))&x528);

    if (t131 != INT32_MIN) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x530 = 11U;
	int64_t x531 = -1LL;
	volatile uint32_t t132 = 126U;

    t132 = ((x529^(x530<=x531))&x532);

    if (t132 != 203U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x533 = 2U;
	int32_t x534 = -220644859;
	int16_t x535 = -4;
	volatile int32_t x536 = INT32_MAX;
	static volatile int32_t t133 = 29154390;

    t133 = ((x533^(x534<=x535))&x536);

    if (t133 != 3) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint64_t x537 = UINT64_MAX;
	volatile int8_t x538 = INT8_MIN;
	volatile int8_t x539 = INT8_MAX;
	uint8_t x540 = 24U;
	uint64_t t134 = 669LLU;

    t134 = ((x537^(x538<=x539))&x540);

    if (t134 != 24LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = INT32_MIN;
	volatile uint16_t x542 = 849U;
	static uint8_t x543 = 3U;
	static volatile int32_t t135 = 15765;

    t135 = ((x541^(x542<=x543))&x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = INT32_MIN;
	int16_t x547 = INT16_MIN;
	volatile int32_t x548 = INT32_MAX;
	static volatile int32_t t136 = -1;

    t136 = ((x545^(x546<=x547))&x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = -1;
	int64_t x550 = INT64_MIN;
	int16_t x551 = -3;
	int8_t x552 = INT8_MIN;
	volatile int32_t t137 = -13604543;

    t137 = ((x549^(x550<=x551))&x552);

    if (t137 != -128) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x553 = 905U;
	int32_t x554 = -1;
	int16_t x556 = -1;
	volatile int32_t t138 = -7;

    t138 = ((x553^(x554<=x555))&x556);

    if (t138 != 904) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x557 = INT16_MAX;
	static uint64_t x558 = 343870867683LLU;
	int8_t x559 = INT8_MIN;

    t139 = ((x557^(x558<=x559))&x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint8_t x561 = 8U;
	static volatile int32_t x562 = INT32_MAX;
	uint64_t x564 = UINT64_MAX;

    t140 = ((x561^(x562<=x563))&x564);

    if (t140 != 8LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x565 = 31966916LLU;
	uint64_t x566 = UINT64_MAX;
	volatile uint16_t x568 = 431U;
	volatile uint64_t t141 = 102761481571LLU;

    t141 = ((x565^(x566<=x567))&x568);

    if (t141 != 132LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = INT16_MIN;
	uint32_t x570 = UINT32_MAX;
	uint8_t x571 = 0U;
	int16_t x572 = INT16_MIN;
	volatile int32_t t142 = 2;

    t142 = ((x569^(x570<=x571))&x572);

    if (t142 != -32768) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x573 = UINT16_MAX;
	static int32_t x575 = -1;
	int32_t x576 = -1;

    t143 = ((x573^(x574<=x575))&x576);

    if (t143 != 65535) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x579 = 2;
	volatile int16_t x580 = INT16_MIN;
	int32_t t144 = 16728103;

    t144 = ((x577^(x578<=x579))&x580);

    if (t144 != 32768) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x581 = 2181LLU;
	uint64_t x582 = 1647530678510097664LLU;
	int8_t x583 = 1;
	static int16_t x584 = -7;
	uint64_t t145 = 125601217528752696LLU;

    t145 = ((x581^(x582<=x583))&x584);

    if (t145 != 2177LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x585 = 1086U;
	static int32_t x587 = INT32_MIN;
	volatile uint8_t x588 = UINT8_MAX;
	static int32_t t146 = -215;

    t146 = ((x585^(x586<=x587))&x588);

    if (t146 != 62) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x590 = INT64_MIN;
	int16_t x591 = -4815;
	volatile uint8_t x592 = UINT8_MAX;

    t147 = ((x589^(x590<=x591))&x592);

    if (t147 != 2) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = -1LL;
	uint8_t x594 = 13U;
	static volatile int64_t x595 = INT64_MIN;
	volatile uint32_t x596 = 1129414715U;
	volatile int64_t t148 = 814LL;

    t148 = ((x593^(x594<=x595))&x596);

    if (t148 != 1129414715LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint16_t x597 = 1200U;
	int32_t x598 = -1433763;
	uint16_t x599 = UINT16_MAX;
	int64_t x600 = 28365830988LL;
	static int64_t t149 = -192244353751LL;

    t149 = ((x597^(x598<=x599))&x600);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = INT64_MIN;
	int16_t x602 = -1530;
	volatile uint64_t x604 = 196466481870177LLU;
	uint64_t t150 = 3360LLU;

    t150 = ((x601^(x602<=x603))&x604);

    if (t150 != 1LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x606 = -170;
	int64_t x607 = -1LL;
	uint8_t x608 = 38U;
	volatile uint64_t t151 = 481891077731511LLU;

    t151 = ((x605^(x606<=x607))&x608);

    if (t151 != 38LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x610 = -7;
	static volatile int64_t t152 = 4254606LL;

    t152 = ((x609^(x610<=x611))&x612);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x616 = -200025034395775544LL;

    t153 = ((x613^(x614<=x615))&x616);

    if (t153 != -200025036520685568LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = 385898LL;
	volatile int8_t x618 = -1;
	int8_t x619 = -1;
	uint8_t x620 = 5U;
	volatile int64_t t154 = 1719711631170788LL;

    t154 = ((x617^(x618<=x619))&x620);

    if (t154 != 1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int32_t x621 = INT32_MAX;
	uint64_t x622 = UINT64_MAX;
	volatile uint8_t x623 = 3U;
	static volatile int32_t t155 = 29986;

    t155 = ((x621^(x622<=x623))&x624);

    if (t155 != 255) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint16_t x625 = 2U;
	uint64_t x626 = 6438LLU;
	int32_t x627 = -7;
	volatile int8_t x628 = -1;
	static volatile int32_t t156 = -2898;

    t156 = ((x625^(x626<=x627))&x628);

    if (t156 != 3) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = 252;
	int64_t x632 = INT64_MAX;
	static int64_t t157 = 14487104013028LL;

    t157 = ((x629^(x630<=x631))&x632);

    if (t157 != 253LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = INT64_MIN;
	static uint32_t x634 = 3567715U;
	int32_t x635 = INT32_MAX;
	int8_t x636 = INT8_MAX;

    t158 = ((x633^(x634<=x635))&x636);

    if (t158 != 1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = INT32_MIN;
	uint16_t x638 = 6U;
	int32_t x639 = INT32_MAX;
	int64_t x640 = INT64_MIN;
	static int64_t t159 = INT64_MIN;

    t159 = ((x637^(x638<=x639))&x640);

    if (t159 != INT64_MIN) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x641 = 2606U;
	int64_t x642 = -1975645976LL;
	static int8_t x643 = INT8_MIN;
	int8_t x644 = -24;
	volatile uint32_t t160 = 173U;

    t160 = ((x641^(x642<=x643))&x644);

    if (t160 != 2600U) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = INT8_MAX;
	volatile uint64_t x646 = UINT64_MAX;
	uint64_t x647 = 1881945LLU;
	volatile uint32_t x648 = 0U;
	static volatile uint32_t t161 = 2184480U;

    t161 = ((x645^(x646<=x647))&x648);

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x649 = UINT8_MAX;
	int16_t x651 = -1;
	uint8_t x652 = 1U;
	static int32_t t162 = 36622;

    t162 = ((x649^(x650<=x651))&x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = -27;
	int64_t x654 = -1LL;
	int16_t x655 = INT16_MIN;
	volatile uint8_t x656 = UINT8_MAX;
	volatile int32_t t163 = 6309;

    t163 = ((x653^(x654<=x655))&x656);

    if (t163 != 229) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x657 = INT8_MAX;
	int16_t x658 = INT16_MIN;
	uint64_t x659 = 66660042LLU;
	int8_t x660 = -1;
	int32_t t164 = -30535360;

    t164 = ((x657^(x658<=x659))&x660);

    if (t164 != 127) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x661 = INT32_MIN;
	uint16_t x662 = 4088U;
	int16_t x663 = INT16_MIN;
	uint64_t t165 = 66809299LLU;

    t165 = ((x661^(x662<=x663))&x664);

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x665 = 963176817635211283LLU;
	int64_t x668 = 2520594137890328527LL;
	uint64_t t166 = 1195187417LLU;

    t166 = ((x665^(x666<=x667))&x668);

    if (t166 != 25016097195460610LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = -1LL;
	int8_t x670 = INT8_MIN;
	int16_t x672 = INT16_MAX;
	int64_t t167 = 6LL;

    t167 = ((x669^(x670<=x671))&x672);

    if (t167 != 32766LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x674 = 122U;
	volatile int16_t x676 = INT16_MIN;
	static int32_t t168 = -368431535;

    t168 = ((x673^(x674<=x675))&x676);

    if (t168 != -32768) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = INT64_MIN;
	int16_t x678 = -1832;
	static int32_t x679 = INT32_MIN;
	int64_t x680 = INT64_MIN;
	int64_t t169 = INT64_MIN;

    t169 = ((x677^(x678<=x679))&x680);

    if (t169 != INT64_MIN) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = INT32_MIN;
	volatile uint8_t x682 = UINT8_MAX;
	uint64_t x684 = 1LLU;
	volatile uint64_t t170 = 4280896LLU;

    t170 = ((x681^(x682<=x683))&x684);

    if (t170 != 1LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x685 = -241000LL;
	int32_t x686 = INT32_MAX;
	static int8_t x687 = 48;
	int8_t x688 = -1;

    t171 = ((x685^(x686<=x687))&x688);

    if (t171 != -241000LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x689 = -133159LL;
	uint32_t x690 = 1405961036U;
	static volatile uint8_t x692 = UINT8_MAX;

    t172 = ((x689^(x690<=x691))&x692);

    if (t172 != 217LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = INT64_MAX;
	volatile int8_t x694 = 0;
	uint32_t x696 = 3268401U;

    t173 = ((x693^(x694<=x695))&x696);

    if (t173 != 3268400LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = INT16_MIN;
	int16_t x698 = 478;
	uint32_t x699 = 1648832U;
	volatile int32_t x700 = INT32_MIN;
	int32_t t174 = INT32_MIN;

    t174 = ((x697^(x698<=x699))&x700);

    if (t174 != INT32_MIN) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = INT32_MIN;
	int16_t x702 = -11;
	uint16_t x704 = 110U;
	static int32_t t175 = -1;

    t175 = ((x701^(x702<=x703))&x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = -3831799LL;
	volatile int8_t x707 = INT8_MIN;
	uint64_t x708 = 80203032918624LLU;
	static uint64_t t176 = 370613109184665LLU;

    t176 = ((x705^(x706<=x707))&x708);

    if (t176 != 80203032365056LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x710 = INT8_MAX;
	volatile uint32_t x711 = 2U;
	uint8_t x712 = 82U;

    t177 = ((x709^(x710<=x711))&x712);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint64_t x714 = 58668019419266939LLU;
	volatile int8_t x716 = 15;
	volatile int32_t t178 = -1901;

    t178 = ((x713^(x714<=x715))&x716);

    if (t178 != 15) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = INT64_MIN;
	uint64_t x718 = 176018601300LLU;
	uint64_t x719 = 282342413032LLU;
	int64_t t179 = -6306637522125LL;

    t179 = ((x717^(x718<=x719))&x720);

    if (t179 != 1LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x721 = INT64_MAX;
	int16_t x722 = 6088;
	int8_t x724 = INT8_MIN;
	static volatile int64_t t180 = 905LL;

    t180 = ((x721^(x722<=x723))&x724);

    if (t180 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x725 = -1;
	int32_t x726 = -5812815;
	int8_t x727 = -1;
	int8_t x728 = -41;
	int32_t t181 = 2323;

    t181 = ((x725^(x726<=x727))&x728);

    if (t181 != -42) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x729 = UINT32_MAX;
	int16_t x731 = 3409;
	int16_t x732 = -10;
	uint32_t t182 = 762096048U;

    t182 = ((x729^(x730<=x731))&x732);

    if (t182 != 4294967286U) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x735 = -1;
	uint32_t x736 = 26414U;
	static volatile uint32_t t183 = 20U;

    t183 = ((x733^(x734<=x735))&x736);

    if (t183 != 26414U) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x737 = -1;
	int64_t x738 = -1LL;
	static uint32_t x739 = 1197135571U;
	int32_t x740 = INT32_MAX;
	int32_t t184 = 6;

    t184 = ((x737^(x738<=x739))&x740);

    if (t184 != 2147483646) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x741 = UINT64_MAX;
	int64_t x742 = INT64_MIN;
	int16_t x743 = INT16_MIN;
	int16_t x744 = -2;
	volatile uint64_t t185 = 5722552170095535LLU;

    t185 = ((x741^(x742<=x743))&x744);

    if (t185 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x745 = 57370443900LL;
	int32_t x746 = 170;
	int16_t x747 = -1;
	int16_t x748 = 55;
	static volatile int64_t t186 = 52071668705LL;

    t186 = ((x745^(x746<=x747))&x748);

    if (t186 != 52LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x750 = -1LL;
	volatile int16_t x751 = -1;
	uint64_t x752 = 169776193164277540LLU;
	volatile uint64_t t187 = 279057285924635LLU;

    t187 = ((x749^(x750<=x751))&x752);

    if (t187 != 169776193164247040LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int64_t x753 = -3913LL;
	int8_t x755 = INT8_MIN;
	static volatile uint16_t x756 = 1436U;
	int64_t t188 = 413602LL;

    t188 = ((x753^(x754<=x755))&x756);

    if (t188 != 148LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x757 = UINT64_MAX;
	static uint64_t x758 = 47937204221486810LLU;
	int32_t x759 = INT32_MAX;
	volatile int32_t x760 = INT32_MAX;
	uint64_t t189 = 162LLU;

    t189 = ((x757^(x758<=x759))&x760);

    if (t189 != 2147483647LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = 1;
	uint64_t x763 = 55234LLU;
	static int32_t x764 = INT32_MIN;
	static volatile int32_t t190 = 118121;

    t190 = ((x761^(x762<=x763))&x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x765 = INT64_MAX;
	int16_t x766 = INT16_MIN;
	uint64_t x768 = UINT64_MAX;
	volatile uint64_t t191 = 841703313LLU;

    t191 = ((x765^(x766<=x767))&x768);

    if (t191 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = INT64_MIN;
	int32_t x770 = INT32_MIN;
	int64_t x771 = 1116045LL;
	uint64_t x772 = 8822055167001LLU;
	uint64_t t192 = 78311502529170LLU;

    t192 = ((x769^(x770<=x771))&x772);

    if (t192 != 1LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x773 = UINT16_MAX;
	int64_t x774 = -10LL;
	int64_t x775 = INT64_MAX;
	volatile uint64_t x776 = UINT64_MAX;
	static volatile uint64_t t193 = 865589694718LLU;

    t193 = ((x773^(x774<=x775))&x776);

    if (t193 != 65534LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = 12;
	volatile int16_t x779 = INT16_MAX;
	uint8_t x780 = 12U;
	volatile int32_t t194 = -1;

    t194 = ((x777^(x778<=x779))&x780);

    if (t194 != 12) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int16_t x781 = INT16_MIN;
	int16_t x782 = -52;
	uint32_t x783 = 987374U;
	uint32_t t195 = 193U;

    t195 = ((x781^(x782<=x783))&x784);

    if (t195 != 65536U) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = -1LL;
	int32_t x787 = INT32_MAX;
	volatile uint32_t x788 = 17827948U;
	int64_t t196 = 5800222818183043LL;

    t196 = ((x785^(x786<=x787))&x788);

    if (t196 != 17827948LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = INT16_MIN;
	static uint32_t x790 = 1629981877U;
	volatile int32_t x791 = -1;
	volatile int16_t x792 = INT16_MIN;
	int32_t t197 = 29385;

    t197 = ((x789^(x790<=x791))&x792);

    if (t197 != -32768) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x794 = -1;
	volatile int8_t x795 = 1;
	uint16_t x796 = UINT16_MAX;
	int32_t t198 = 70;

    t198 = ((x793^(x794<=x795))&x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x797 = -1;
	static volatile uint32_t x798 = 2175195U;
	int32_t x800 = -68199274;
	int32_t t199 = -129;

    t199 = ((x797^(x798<=x799))&x800);

    if (t199 != -68199274) { NG(); } else { ; }
	
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

