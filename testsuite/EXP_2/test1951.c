
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

static int32_t x5 = INT32_MAX;
uint32_t x13 = 7150957U;
volatile int32_t t3 = -1327;
static volatile int32_t x22 = -3325;
static uint16_t x26 = 11726U;
volatile int16_t x33 = INT16_MAX;
int16_t x36 = -114;
volatile int16_t x43 = INT16_MIN;
uint16_t x46 = UINT16_MAX;
volatile uint8_t x48 = UINT8_MAX;
int64_t x51 = INT64_MIN;
int8_t x56 = -1;
static volatile int32_t x58 = 113500239;
uint16_t x59 = UINT16_MAX;
static uint8_t x63 = 7U;
int64_t x64 = -4451641360LL;
uint16_t x67 = UINT16_MAX;
int64_t x70 = INT64_MIN;
uint16_t x72 = 16417U;
volatile int64_t t16 = -129993570LL;
int64_t t17 = 517234230157554602LL;
uint32_t x82 = 18734670U;
int32_t x85 = 7207592;
int16_t x91 = INT16_MIN;
static volatile int64_t t21 = -29484727LL;
uint32_t x94 = 25635U;
int64_t x103 = 12465305908538LL;
uint16_t x110 = 187U;
volatile int16_t x124 = INT16_MAX;
uint8_t x126 = 1U;
uint8_t x130 = 1U;
uint32_t x136 = UINT32_MAX;
volatile int32_t x145 = INT32_MIN;
int32_t t35 = 12619;
static volatile int64_t x155 = INT64_MIN;
int16_t x164 = INT16_MAX;
uint16_t x167 = UINT16_MAX;
uint32_t x170 = UINT32_MAX;
int8_t x173 = -1;
int32_t x174 = INT32_MIN;
uint64_t x183 = UINT64_MAX;
int32_t t44 = 505371852;
volatile int32_t x185 = INT32_MIN;
int16_t x193 = INT16_MIN;
uint64_t x195 = UINT64_MAX;
uint16_t x201 = UINT16_MAX;
volatile uint8_t x206 = 23U;
int64_t x207 = 4LL;
volatile int64_t t51 = 2998231592938160LL;
int64_t x232 = INT64_MIN;
volatile int64_t t57 = 58264871LL;
uint8_t x238 = 4U;
int64_t x239 = INT64_MIN;
int32_t x246 = INT32_MAX;
int32_t t61 = -108;
uint64_t x256 = 67LLU;
volatile uint32_t x258 = 206U;
int32_t x259 = -1;
volatile int32_t x260 = -1;
volatile uint64_t t63 = 19991LLU;
static int16_t x266 = INT16_MIN;
int8_t x267 = INT8_MIN;
static volatile int64_t t66 = 633480953914LL;
volatile int16_t x274 = INT16_MIN;
volatile int64_t x280 = -115328189878665LL;
volatile int64_t x281 = 26LL;
volatile int32_t x290 = INT32_MIN;
int64_t x291 = 7923492LL;
int16_t x300 = -1;
static int32_t x305 = INT32_MIN;
int16_t x312 = INT16_MIN;
static int8_t x313 = INT8_MIN;
int8_t x315 = 45;
int8_t x316 = INT8_MAX;
int16_t x317 = -1;
static int16_t x318 = 1;
volatile int8_t x319 = INT8_MIN;
int32_t x320 = INT32_MIN;
static int32_t t78 = 1496423;
uint16_t x334 = UINT16_MAX;
volatile int64_t x336 = INT64_MAX;
volatile uint64_t x337 = UINT64_MAX;
int64_t x340 = 48LL;
static int64_t x341 = INT64_MIN;
volatile int16_t x343 = -1;
int64_t x349 = 16287LL;
int32_t x350 = INT32_MIN;
int8_t x354 = -1;
int64_t x365 = 79265812026001623LL;
int64_t x368 = -1LL;
static volatile uint64_t x374 = 248307LLU;
int32_t x377 = INT32_MIN;
static uint8_t x391 = 4U;
uint8_t x392 = 83U;
volatile int64_t t95 = 632804055896246LL;
int64_t x394 = -78130315120423921LL;
int64_t x397 = INT64_MAX;
int8_t x399 = INT8_MIN;
volatile int64_t t97 = -3083562933764743LL;
volatile int16_t x401 = INT16_MAX;
volatile int32_t t98 = -708;
static volatile int64_t x408 = -1LL;
static int32_t x410 = 28948268;
volatile int32_t t101 = -11;
volatile int32_t x429 = -76308841;
uint8_t x439 = 10U;
int32_t x440 = 118485201;
uint32_t x445 = 1005U;
int16_t x450 = INT16_MIN;
int32_t x452 = -6714286;
static uint32_t x457 = 2446098U;
static int64_t x461 = INT64_MIN;
static volatile int16_t x463 = INT16_MAX;
static uint16_t x468 = 31U;
int32_t x469 = 411095;
uint8_t x471 = 1U;
volatile int16_t x476 = INT16_MIN;
uint64_t x477 = 1286498LLU;
uint32_t x478 = 15610364U;
volatile uint32_t t117 = 6744U;
uint64_t x493 = UINT64_MAX;
volatile uint16_t x495 = 52U;
int64_t x498 = INT64_MIN;
static volatile int16_t x501 = -156;
int8_t x504 = 1;
static int32_t t122 = -183857243;
int64_t t123 = -702594LL;
static volatile uint32_t t124 = 416503U;
volatile int64_t x518 = INT64_MAX;
uint8_t x519 = 2U;
static uint64_t x523 = 6606LLU;
volatile uint64_t t127 = 109815LLU;
volatile int64_t x538 = INT64_MAX;
uint32_t t131 = 1U;
int8_t x549 = -3;
static int8_t x552 = INT8_MIN;
int32_t x559 = -1;
int32_t t139 = 2604;
int8_t x584 = INT8_MAX;
int16_t x585 = INT16_MAX;
int32_t x599 = -4029;
int32_t x605 = -1;
volatile uint64_t x612 = 59034722178LLU;
int32_t t149 = 0;
int16_t x618 = 27;
static int32_t x620 = -647384;
static int8_t x621 = INT8_MIN;
uint8_t x626 = 38U;
uint16_t x628 = UINT16_MAX;
int32_t x629 = INT32_MAX;
int64_t x634 = 3738LL;
volatile int64_t x640 = INT64_MIN;
static int64_t x643 = INT64_MIN;
int16_t x648 = -6217;
static volatile uint16_t x651 = 28U;
static volatile int8_t x655 = INT8_MAX;
static int32_t x657 = -1;
int16_t x659 = INT16_MIN;
int32_t t161 = 383823;
int8_t x665 = -1;
int16_t x667 = INT16_MIN;
volatile int64_t x672 = -604563LL;
uint64_t x682 = UINT64_MAX;
volatile int16_t x689 = -24;
static int32_t t168 = 1;
uint16_t x693 = 27514U;
static int8_t x697 = -1;
uint16_t x698 = 2U;
static int32_t x700 = -1;
int64_t x706 = INT64_MIN;
int64_t x712 = -1LL;
static int8_t x718 = INT8_MAX;
int32_t x719 = 1;
uint64_t x720 = 88279994593LLU;
uint32_t x721 = UINT32_MAX;
int8_t x722 = INT8_MIN;
int8_t x725 = INT8_MIN;
int32_t x732 = INT32_MIN;
static uint8_t x733 = 43U;
static int32_t t178 = -573675170;
volatile int64_t x738 = 3894539LL;
volatile int32_t t179 = -5177872;
uint32_t x741 = UINT32_MAX;
int32_t x748 = INT32_MIN;
int16_t x750 = INT16_MIN;
static uint64_t x754 = 25076610487992698LLU;
int64_t x756 = -1LL;
int64_t t183 = 190595137592666985LL;
int32_t x759 = INT32_MIN;
uint64_t x760 = 8039082LLU;
int8_t x761 = -1;
uint16_t x767 = 1970U;
uint64_t x770 = 8682341321576888LLU;
int32_t x772 = INT32_MIN;
volatile int64_t x773 = -1LL;
volatile int64_t t188 = -234861705LL;
int32_t t189 = 232;
int8_t x782 = INT8_MIN;
static uint16_t x783 = 1033U;
volatile uint32_t t190 = 4U;
volatile int32_t x791 = INT32_MIN;
int16_t x792 = INT16_MAX;
uint64_t x795 = UINT64_MAX;
int32_t x797 = 125210;
int32_t x804 = INT32_MAX;
volatile int64_t x805 = 5LL;
int8_t x808 = 5;
volatile int64_t t196 = -640LL;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	int64_t x2 = 3734962112LL;
	static uint8_t x3 = 86U;
	int16_t x4 = INT16_MAX;
	int32_t t0 = -345580419;

    t0 = ((x1^(x2<=x3))%x4);

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x6 = 1364479272LLU;
	int16_t x7 = -1;
	uint16_t x8 = UINT16_MAX;
	static volatile int32_t t1 = -43;

    t1 = ((x5^(x6<=x7))%x8);

    if (t1 != 32766) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x14 = 5;
	uint32_t x15 = 0U;
	uint16_t x16 = 1U;
	volatile uint32_t t2 = 3542578U;

    t2 = ((x13^(x14<=x15))%x16);

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x17 = UINT8_MAX;
	uint16_t x18 = UINT16_MAX;
	int32_t x19 = INT32_MIN;
	int16_t x20 = -6;

    t3 = ((x17^(x18<=x19))%x20);

    if (t3 != 3) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x21 = INT16_MAX;
	volatile uint16_t x23 = 5U;
	volatile int16_t x24 = INT16_MIN;
	int32_t t4 = 38;

    t4 = ((x21^(x22<=x23))%x24);

    if (t4 != 32766) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = 3227934;
	uint8_t x27 = 26U;
	uint64_t x28 = 3400091413LLU;
	volatile uint64_t t5 = 79518611LLU;

    t5 = ((x25^(x26<=x27))%x28);

    if (t5 != 3227934LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x29 = -131599912;
	static int8_t x30 = -1;
	static uint16_t x31 = 218U;
	uint16_t x32 = 57U;
	volatile int32_t t6 = 605161903;

    t6 = ((x29^(x30<=x31))%x32);

    if (t6 != -21) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x34 = -42;
	static uint64_t x35 = 1693755193838LLU;
	static volatile int32_t t7 = 59027;

    t7 = ((x33^(x34<=x35))%x36);

    if (t7 != 49) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x37 = UINT8_MAX;
	int8_t x38 = INT8_MIN;
	uint16_t x39 = 18U;
	static uint8_t x40 = UINT8_MAX;
	volatile int32_t t8 = 26;

    t8 = ((x37^(x38<=x39))%x40);

    if (t8 != 254) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x41 = -3341282096005695LL;
	uint16_t x42 = 2173U;
	int8_t x44 = 29;
	int64_t t9 = -11358245991LL;

    t9 = ((x41^(x42<=x43))%x44);

    if (t9 != -11LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x45 = UINT64_MAX;
	int16_t x47 = INT16_MIN;
	uint64_t t10 = 162514LLU;

    t10 = ((x45^(x46<=x47))%x48);

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x49 = 0U;
	uint64_t x50 = 39587962LLU;
	volatile uint8_t x52 = 30U;
	volatile uint32_t t11 = 8751U;

    t11 = ((x49^(x50<=x51))%x52);

    if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x53 = -1;
	int8_t x54 = 56;
	int8_t x55 = 1;
	int32_t t12 = -5146781;

    t12 = ((x53^(x54<=x55))%x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x57 = 30029911U;
	int16_t x60 = -1;
	volatile uint32_t t13 = 65363627U;

    t13 = ((x57^(x58<=x59))%x60);

    if (t13 != 30029911U) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = INT64_MAX;
	uint16_t x62 = 24245U;
	static volatile int64_t t14 = -97701588LL;

    t14 = ((x61^(x62<=x63))%x64);

    if (t14 != 1160115487LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x65 = INT8_MIN;
	int32_t x66 = INT32_MIN;
	uint64_t x68 = UINT64_MAX;
	uint64_t t15 = 5333032714534835360LLU;

    t15 = ((x65^(x66<=x67))%x68);

    if (t15 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = -265382LL;
	volatile int16_t x71 = -13;

    t16 = ((x69^(x70<=x71))%x72);

    if (t16 != -2709LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x73 = 69166808LL;
	uint32_t x74 = 24U;
	volatile int16_t x75 = -1;
	int8_t x76 = -1;

    t17 = ((x73^(x74<=x75))%x76);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x77 = INT32_MAX;
	int64_t x78 = -1LL;
	int32_t x79 = 44676650;
	int16_t x80 = INT16_MIN;
	static volatile int32_t t18 = -3;

    t18 = ((x77^(x78<=x79))%x80);

    if (t18 != 32766) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x81 = 25LLU;
	uint64_t x83 = UINT64_MAX;
	volatile uint64_t x84 = UINT64_MAX;
	uint64_t t19 = 6891LLU;

    t19 = ((x81^(x82<=x83))%x84);

    if (t19 != 24LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x86 = UINT64_MAX;
	static uint32_t x87 = 7U;
	uint16_t x88 = 5609U;
	int32_t t20 = 90760004;

    t20 = ((x85^(x86<=x87))%x88);

    if (t20 != 27) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x89 = 11;
	int16_t x90 = -1;
	int64_t x92 = INT64_MIN;

    t21 = ((x89^(x90<=x91))%x92);

    if (t21 != 11LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x93 = INT32_MAX;
	int8_t x95 = -1;
	static uint8_t x96 = 116U;
	int32_t t22 = -1969823;

    t22 = ((x93^(x94<=x95))%x96);

    if (t22 != 6) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x97 = -1;
	volatile int64_t x98 = INT64_MIN;
	int64_t x99 = INT64_MIN;
	static int32_t x100 = INT32_MAX;
	volatile int32_t t23 = 425459;

    t23 = ((x97^(x98<=x99))%x100);

    if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int64_t x101 = INT64_MAX;
	static uint16_t x102 = 1U;
	volatile uint16_t x104 = 26U;
	static int64_t t24 = 1816526332529LL;

    t24 = ((x101^(x102<=x103))%x104);

    if (t24 != 6LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x105 = UINT16_MAX;
	uint8_t x106 = UINT8_MAX;
	volatile uint16_t x107 = 73U;
	uint32_t x108 = 469U;
	uint32_t t25 = 8820U;

    t25 = ((x105^(x106<=x107))%x108);

    if (t25 != 344U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x109 = UINT16_MAX;
	volatile int16_t x111 = INT16_MAX;
	static int8_t x112 = -1;
	volatile int32_t t26 = -10;

    t26 = ((x109^(x110<=x111))%x112);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x113 = 7738894U;
	static volatile uint32_t x114 = UINT32_MAX;
	static volatile uint64_t x115 = 88887886786LLU;
	static int32_t x116 = INT32_MIN;
	volatile uint32_t t27 = 12024231U;

    t27 = ((x113^(x114<=x115))%x116);

    if (t27 != 7738895U) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x117 = -1;
	int16_t x118 = INT16_MIN;
	volatile int32_t x119 = INT32_MAX;
	uint16_t x120 = 22085U;
	static int32_t t28 = -1688336;

    t28 = ((x117^(x118<=x119))%x120);

    if (t28 != -2) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x121 = 12U;
	uint32_t x122 = UINT32_MAX;
	volatile uint64_t x123 = UINT64_MAX;
	volatile int32_t t29 = -255;

    t29 = ((x121^(x122<=x123))%x124);

    if (t29 != 13) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x125 = INT16_MAX;
	int32_t x127 = -1;
	static uint32_t x128 = 8026U;
	volatile uint32_t t30 = 13U;

    t30 = ((x125^(x126<=x127))%x128);

    if (t30 != 663U) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x129 = INT16_MAX;
	volatile int64_t x131 = -1LL;
	int32_t x132 = INT32_MAX;
	int32_t t31 = -46;

    t31 = ((x129^(x130<=x131))%x132);

    if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x133 = INT32_MIN;
	int8_t x134 = -34;
	volatile int8_t x135 = 3;
	uint32_t t32 = 1659917U;

    t32 = ((x133^(x134<=x135))%x136);

    if (t32 != 2147483649U) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x137 = -1;
	int8_t x138 = INT8_MIN;
	int16_t x139 = INT16_MIN;
	volatile int64_t x140 = -181LL;
	volatile int64_t t33 = 24521150075857363LL;

    t33 = ((x137^(x138<=x139))%x140);

    if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x141 = INT32_MIN;
	uint64_t x142 = 13LLU;
	int32_t x143 = INT32_MIN;
	uint64_t x144 = 275321950LLU;
	volatile uint64_t t34 = 22265249LLU;

    t34 = ((x141^(x142<=x143))%x144);

    if (t34 != 120270269LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x146 = INT32_MIN;
	int64_t x147 = 9501338949427325LL;
	int32_t x148 = -1;

    t35 = ((x145^(x146<=x147))%x148);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x149 = INT8_MIN;
	int32_t x150 = INT32_MIN;
	volatile int8_t x151 = -1;
	volatile uint16_t x152 = UINT16_MAX;
	volatile int32_t t36 = -172441524;

    t36 = ((x149^(x150<=x151))%x152);

    if (t36 != -127) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x153 = 1U;
	static int8_t x154 = -1;
	int64_t x156 = INT64_MIN;
	int64_t t37 = 7465073883991LL;

    t37 = ((x153^(x154<=x155))%x156);

    if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x157 = UINT16_MAX;
	static volatile int8_t x158 = INT8_MIN;
	int16_t x159 = -243;
	uint16_t x160 = UINT16_MAX;
	int32_t t38 = 10;

    t38 = ((x157^(x158<=x159))%x160);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x161 = 51411LLU;
	static int32_t x162 = -15;
	volatile uint8_t x163 = UINT8_MAX;
	volatile uint64_t t39 = 33802103431659332LLU;

    t39 = ((x161^(x162<=x163))%x164);

    if (t39 != 18643LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x165 = -1LL;
	static uint8_t x166 = 1U;
	int64_t x168 = INT64_MIN;
	volatile int64_t t40 = -6335147301159669LL;

    t40 = ((x165^(x166<=x167))%x168);

    if (t40 != -2LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x169 = 22U;
	int8_t x171 = INT8_MIN;
	int16_t x172 = -1;
	int32_t t41 = 1;

    t41 = ((x169^(x170<=x171))%x172);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x175 = UINT16_MAX;
	static uint8_t x176 = UINT8_MAX;
	volatile int32_t t42 = 0;

    t42 = ((x173^(x174<=x175))%x176);

    if (t42 != -2) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x177 = 46912U;
	int16_t x178 = INT16_MAX;
	int64_t x179 = -1LL;
	volatile int32_t x180 = INT32_MAX;
	uint32_t t43 = 45134621U;

    t43 = ((x177^(x178<=x179))%x180);

    if (t43 != 46912U) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x181 = INT32_MIN;
	static volatile int8_t x182 = INT8_MIN;
	uint8_t x184 = 31U;

    t44 = ((x181^(x182<=x183))%x184);

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x186 = 33;
	int64_t x187 = INT64_MIN;
	volatile int16_t x188 = -5;
	static volatile int32_t t45 = 15;

    t45 = ((x185^(x186<=x187))%x188);

    if (t45 != -3) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x189 = 630275453777585211LLU;
	uint32_t x190 = 1496223U;
	uint8_t x191 = UINT8_MAX;
	int8_t x192 = -3;
	volatile uint64_t t46 = 1456303814LLU;

    t46 = ((x189^(x190<=x191))%x192);

    if (t46 != 630275453777585211LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x194 = 13;
	uint64_t x196 = 3926LLU;
	uint64_t t47 = 7920483070328185997LLU;

    t47 = ((x193^(x194<=x195))%x196);

    if (t47 != 2583LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x197 = -1;
	uint64_t x198 = 108968922783095749LLU;
	int16_t x199 = -15;
	int16_t x200 = 18;
	volatile int32_t t48 = 124;

    t48 = ((x197^(x198<=x199))%x200);

    if (t48 != -2) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x202 = INT32_MIN;
	int32_t x203 = 49;
	uint32_t x204 = 5050271U;
	volatile uint32_t t49 = 812213U;

    t49 = ((x201^(x202<=x203))%x204);

    if (t49 != 65534U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x205 = 321359LLU;
	static uint16_t x208 = UINT16_MAX;
	uint64_t t50 = 25524219543322460LLU;

    t50 = ((x205^(x206<=x207))%x208);

    if (t50 != 59219LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x209 = 3355U;
	static int32_t x210 = -1;
	static int64_t x211 = -1LL;
	int64_t x212 = INT64_MIN;

    t51 = ((x209^(x210<=x211))%x212);

    if (t51 != 3354LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x213 = UINT64_MAX;
	uint32_t x214 = UINT32_MAX;
	volatile int64_t x215 = INT64_MIN;
	uint8_t x216 = 5U;
	volatile uint64_t t52 = 18653756207LLU;

    t52 = ((x213^(x214<=x215))%x216);

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x217 = 2LLU;
	uint8_t x218 = 99U;
	int64_t x219 = INT64_MAX;
	uint32_t x220 = 1U;
	uint64_t t53 = 1682682720355712LLU;

    t53 = ((x217^(x218<=x219))%x220);

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int32_t x221 = 18324156;
	static int16_t x222 = INT16_MIN;
	int64_t x223 = INT64_MIN;
	volatile int16_t x224 = INT16_MIN;
	static volatile int32_t t54 = -131384;

    t54 = ((x221^(x222<=x223))%x224);

    if (t54 != 6844) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x225 = 10414;
	uint64_t x226 = UINT64_MAX;
	int16_t x227 = INT16_MAX;
	uint32_t x228 = UINT32_MAX;
	static uint32_t t55 = 3U;

    t55 = ((x225^(x226<=x227))%x228);

    if (t55 != 10414U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x229 = 67242135114LLU;
	uint64_t x230 = UINT64_MAX;
	int32_t x231 = INT32_MAX;
	uint64_t t56 = 215966LLU;

    t56 = ((x229^(x230<=x231))%x232);

    if (t56 != 67242135114LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x233 = 40;
	int8_t x234 = INT8_MAX;
	static volatile int16_t x235 = -1;
	int64_t x236 = INT64_MAX;

    t57 = ((x233^(x234<=x235))%x236);

    if (t57 != 40LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x237 = INT64_MAX;
	static volatile uint16_t x240 = UINT16_MAX;
	volatile int64_t t58 = 14481321LL;

    t58 = ((x237^(x238<=x239))%x240);

    if (t58 != 32767LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x241 = -1;
	static uint32_t x242 = UINT32_MAX;
	int8_t x243 = INT8_MIN;
	static uint8_t x244 = 75U;
	volatile int32_t t59 = -121688435;

    t59 = ((x241^(x242<=x243))%x244);

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x245 = 127987025016274447LLU;
	int32_t x247 = 1717681;
	volatile int8_t x248 = INT8_MAX;
	uint64_t t60 = 6464722LLU;

    t60 = ((x245^(x246<=x247))%x248);

    if (t60 != 5LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x249 = INT32_MIN;
	int64_t x250 = -2LL;
	uint16_t x251 = 13633U;
	int16_t x252 = 7678;

    t61 = ((x249^(x250<=x251))%x252);

    if (t61 != -793) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x253 = UINT64_MAX;
	volatile int16_t x254 = INT16_MIN;
	volatile uint32_t x255 = 70985709U;
	static volatile uint64_t t62 = 1LLU;

    t62 = ((x253^(x254<=x255))%x256);

    if (t62 != 16LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x257 = UINT64_MAX;

    t63 = ((x257^(x258<=x259))%x260);

    if (t63 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x261 = INT16_MIN;
	static uint64_t x262 = 10LLU;
	int8_t x263 = INT8_MIN;
	uint16_t x264 = 6U;
	int32_t t64 = -43343;

    t64 = ((x261^(x262<=x263))%x264);

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x265 = 171040841968348760LLU;
	int16_t x268 = INT16_MIN;
	static volatile uint64_t t65 = 166043LLU;

    t65 = ((x265^(x266<=x267))%x268);

    if (t65 != 171040841968348761LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x269 = INT8_MIN;
	volatile int64_t x270 = INT64_MAX;
	static uint16_t x271 = 83U;
	volatile int64_t x272 = INT64_MIN;

    t66 = ((x269^(x270<=x271))%x272);

    if (t66 != -128LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x273 = -1;
	int8_t x275 = INT8_MIN;
	int8_t x276 = INT8_MIN;
	volatile int32_t t67 = -37211;

    t67 = ((x273^(x274<=x275))%x276);

    if (t67 != -2) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x277 = 485856LLU;
	int32_t x278 = -1;
	uint32_t x279 = 458771U;
	volatile uint64_t t68 = 266938815916508876LLU;

    t68 = ((x277^(x278<=x279))%x280);

    if (t68 != 485856LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x282 = 2699101LLU;
	static int16_t x283 = INT16_MIN;
	uint8_t x284 = 6U;
	int64_t t69 = 1927727844866220339LL;

    t69 = ((x281^(x282<=x283))%x284);

    if (t69 != 3LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x285 = 0U;
	uint16_t x286 = UINT16_MAX;
	uint16_t x287 = 124U;
	int8_t x288 = -58;
	int32_t t70 = -28780198;

    t70 = ((x285^(x286<=x287))%x288);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x289 = INT32_MAX;
	int32_t x292 = -6295;
	static int32_t t71 = -1;

    t71 = ((x289^(x290<=x291))%x292);

    if (t71 != 1051) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int32_t x293 = -991798704;
	static uint8_t x294 = 5U;
	int64_t x295 = 8762138356LL;
	uint32_t x296 = UINT32_MAX;
	volatile uint32_t t72 = 12479386U;

    t72 = ((x293^(x294<=x295))%x296);

    if (t72 != 3303168593U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x297 = UINT8_MAX;
	int32_t x298 = -287346027;
	volatile uint16_t x299 = UINT16_MAX;
	int32_t t73 = 44;

    t73 = ((x297^(x298<=x299))%x300);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x301 = 1860U;
	volatile uint32_t x302 = UINT32_MAX;
	uint8_t x303 = 49U;
	volatile uint8_t x304 = UINT8_MAX;
	uint32_t t74 = 158976U;

    t74 = ((x301^(x302<=x303))%x304);

    if (t74 != 75U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x306 = UINT16_MAX;
	int64_t x307 = INT64_MIN;
	int32_t x308 = INT32_MIN;
	static int32_t t75 = 1798548;

    t75 = ((x305^(x306<=x307))%x308);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint16_t x309 = UINT16_MAX;
	volatile int32_t x310 = INT32_MIN;
	uint32_t x311 = UINT32_MAX;
	volatile int32_t t76 = 55504755;

    t76 = ((x309^(x310<=x311))%x312);

    if (t76 != 32766) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x314 = INT64_MAX;
	int32_t t77 = 259654;

    t77 = ((x313^(x314<=x315))%x316);

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    

    t78 = ((x317^(x318<=x319))%x320);

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x321 = UINT64_MAX;
	volatile int32_t x322 = 266879;
	static volatile uint8_t x323 = UINT8_MAX;
	volatile int64_t x324 = -3475838314194LL;
	uint64_t t79 = 2161162552359382LLU;

    t79 = ((x321^(x322<=x323))%x324);

    if (t79 != 3475838314193LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x325 = INT64_MAX;
	int32_t x326 = INT32_MIN;
	int32_t x327 = INT32_MAX;
	static int8_t x328 = INT8_MAX;
	int64_t t80 = -83931242LL;

    t80 = ((x325^(x326<=x327))%x328);

    if (t80 != 126LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x329 = 832011711LL;
	int8_t x330 = INT8_MAX;
	int16_t x331 = INT16_MIN;
	int64_t x332 = -258175403013739672LL;
	static volatile int64_t t81 = 205924406LL;

    t81 = ((x329^(x330<=x331))%x332);

    if (t81 != 832011711LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x333 = -1;
	volatile int8_t x335 = -8;
	volatile int64_t t82 = 426LL;

    t82 = ((x333^(x334<=x335))%x336);

    if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x338 = INT16_MAX;
	int16_t x339 = -364;
	static uint64_t t83 = 8471463522LLU;

    t83 = ((x337^(x338<=x339))%x340);

    if (t83 != 15LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x342 = 8LL;
	static uint64_t x344 = 18356LLU;
	volatile uint64_t t84 = 3526104561LLU;

    t84 = ((x341^(x342<=x343))%x344);

    if (t84 != 13684LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x345 = 51;
	int8_t x346 = -1;
	static uint32_t x347 = 219830226U;
	uint16_t x348 = 13U;
	static volatile int32_t t85 = 66;

    t85 = ((x345^(x346<=x347))%x348);

    if (t85 != 12) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x351 = INT64_MAX;
	uint64_t x352 = 2505071332622LLU;
	static uint64_t t86 = 592050LLU;

    t86 = ((x349^(x350<=x351))%x352);

    if (t86 != 16286LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x353 = 4251923729888LL;
	int64_t x355 = INT64_MIN;
	int8_t x356 = -28;
	volatile int64_t t87 = -432220588888418885LL;

    t87 = ((x353^(x354<=x355))%x356);

    if (t87 != 16LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x357 = 544583376LL;
	int16_t x358 = -1;
	uint64_t x359 = 6624908620484670LLU;
	int32_t x360 = 125;
	volatile int64_t t88 = 26537757118LL;

    t88 = ((x357^(x358<=x359))%x360);

    if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x361 = 24U;
	static uint32_t x362 = 12521222U;
	int8_t x363 = INT8_MIN;
	static uint16_t x364 = 32429U;
	static volatile int32_t t89 = 50;

    t89 = ((x361^(x362<=x363))%x364);

    if (t89 != 25) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x366 = 1U;
	uint32_t x367 = 12959884U;
	volatile int64_t t90 = 245454824313106LL;

    t90 = ((x365^(x366<=x367))%x368);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x369 = -1;
	int16_t x370 = 0;
	int64_t x371 = 14119LL;
	volatile int16_t x372 = INT16_MIN;
	volatile int32_t t91 = 515625;

    t91 = ((x369^(x370<=x371))%x372);

    if (t91 != -2) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x373 = 1;
	volatile int8_t x375 = -1;
	uint32_t x376 = UINT32_MAX;
	volatile uint32_t t92 = 626U;

    t92 = ((x373^(x374<=x375))%x376);

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x378 = -898LL;
	int16_t x379 = 1470;
	uint32_t x380 = UINT32_MAX;
	volatile uint32_t t93 = 37972U;

    t93 = ((x377^(x378<=x379))%x380);

    if (t93 != 2147483649U) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x381 = INT16_MIN;
	int64_t x382 = INT64_MIN;
	int8_t x383 = -6;
	uint16_t x384 = 661U;
	int32_t t94 = 27;

    t94 = ((x381^(x382<=x383))%x384);

    if (t94 != -378) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x389 = 10220LL;
	static int8_t x390 = INT8_MAX;

    t95 = ((x389^(x390<=x391))%x392);

    if (t95 != 11LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x393 = -13;
	int32_t x395 = -1;
	uint32_t x396 = 648U;
	static uint32_t t96 = 2U;

    t96 = ((x393^(x394<=x395))%x396);

    if (t96 != 602U) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint32_t x398 = 19827671U;
	int64_t x400 = INT64_MIN;

    t97 = ((x397^(x398<=x399))%x400);

    if (t97 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x402 = 4137734969LLU;
	int32_t x403 = INT32_MIN;
	int8_t x404 = 51;

    t98 = ((x401^(x402<=x403))%x404);

    if (t98 != 24) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x405 = UINT32_MAX;
	volatile int16_t x406 = INT16_MIN;
	uint8_t x407 = UINT8_MAX;
	int64_t t99 = 1784580LL;

    t99 = ((x405^(x406<=x407))%x408);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x409 = -3892272003LL;
	int32_t x411 = INT32_MAX;
	int32_t x412 = INT32_MIN;
	int64_t t100 = 1300721LL;

    t100 = ((x409^(x410<=x411))%x412);

    if (t100 != -1744788356LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x413 = UINT8_MAX;
	int16_t x414 = -1;
	uint32_t x415 = 7054U;
	static volatile int16_t x416 = -1;

    t101 = ((x413^(x414<=x415))%x416);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x417 = -1;
	int32_t x418 = -5643494;
	int64_t x419 = INT64_MIN;
	int16_t x420 = INT16_MIN;
	int32_t t102 = 177418;

    t102 = ((x417^(x418<=x419))%x420);

    if (t102 != -1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x421 = -1;
	int16_t x422 = -1;
	int64_t x423 = INT64_MIN;
	uint16_t x424 = 87U;
	static int32_t t103 = 934;

    t103 = ((x421^(x422<=x423))%x424);

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x430 = INT32_MIN;
	volatile int64_t x431 = INT64_MIN;
	int8_t x432 = -32;
	volatile int32_t t104 = -44668958;

    t104 = ((x429^(x430<=x431))%x432);

    if (t104 != -9) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x433 = -1;
	int8_t x434 = INT8_MIN;
	static int8_t x435 = INT8_MAX;
	static int32_t x436 = INT32_MIN;
	int32_t t105 = 0;

    t105 = ((x433^(x434<=x435))%x436);

    if (t105 != -2) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x437 = -29;
	static int64_t x438 = INT64_MIN;
	int32_t t106 = 41864282;

    t106 = ((x437^(x438<=x439))%x440);

    if (t106 != -30) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x441 = 12234355134LLU;
	volatile int32_t x442 = -14374926;
	int32_t x443 = INT32_MAX;
	static int64_t x444 = INT64_MIN;
	volatile uint64_t t107 = 0LLU;

    t107 = ((x441^(x442<=x443))%x444);

    if (t107 != 12234355135LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x446 = UINT64_MAX;
	int8_t x447 = INT8_MIN;
	int64_t x448 = INT64_MAX;
	volatile int64_t t108 = -11LL;

    t108 = ((x445^(x446<=x447))%x448);

    if (t108 != 1005LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x449 = INT16_MIN;
	uint16_t x451 = UINT16_MAX;
	int32_t t109 = 518;

    t109 = ((x449^(x450<=x451))%x452);

    if (t109 != -32767) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x458 = INT8_MIN;
	uint8_t x459 = 20U;
	uint64_t x460 = 857285LLU;
	uint64_t t110 = 114LLU;

    t110 = ((x457^(x458<=x459))%x460);

    if (t110 != 731529LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x462 = INT32_MAX;
	volatile uint64_t x464 = UINT64_MAX;
	volatile uint64_t t111 = 1455031393967960LLU;

    t111 = ((x461^(x462<=x463))%x464);

    if (t111 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x465 = -30614338258987LL;
	static int8_t x466 = INT8_MIN;
	int64_t x467 = 7111801572343LL;
	volatile int64_t t112 = 8096513371300946LL;

    t112 = ((x465^(x466<=x467))%x468);

    if (t112 != -1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x470 = INT16_MIN;
	int8_t x472 = 1;
	volatile int32_t t113 = 646582;

    t113 = ((x469^(x470<=x471))%x472);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x473 = UINT64_MAX;
	uint32_t x474 = 9755U;
	volatile uint64_t x475 = UINT64_MAX;
	static uint64_t t114 = 3602862437743096462LLU;

    t114 = ((x473^(x474<=x475))%x476);

    if (t114 != 32766LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x479 = UINT32_MAX;
	int8_t x480 = INT8_MAX;
	static uint64_t t115 = 242127310640772LLU;

    t115 = ((x477^(x478<=x479))%x480);

    if (t115 != 116LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x481 = INT64_MIN;
	static uint64_t x482 = UINT64_MAX;
	uint16_t x483 = 1279U;
	int32_t x484 = INT32_MIN;
	int64_t t116 = -22168613878544LL;

    t116 = ((x481^(x482<=x483))%x484);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x485 = 22;
	volatile int64_t x486 = INT64_MIN;
	volatile int8_t x487 = INT8_MIN;
	uint32_t x488 = UINT32_MAX;

    t117 = ((x485^(x486<=x487))%x488);

    if (t117 != 23U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x489 = 48U;
	int64_t x490 = INT64_MAX;
	volatile int8_t x491 = INT8_MIN;
	int16_t x492 = INT16_MIN;
	volatile int32_t t118 = -1;

    t118 = ((x489^(x490<=x491))%x492);

    if (t118 != 48) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x494 = INT8_MIN;
	uint64_t x496 = 30957098896709LLU;
	static uint64_t t119 = 2201897LLU;

    t119 = ((x493^(x494<=x495))%x496);

    if (t119 != 27983138592694LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x497 = 121U;
	volatile uint32_t x499 = 42U;
	static int8_t x500 = -1;
	static volatile int32_t t120 = -116243913;

    t120 = ((x497^(x498<=x499))%x500);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x502 = INT64_MAX;
	int16_t x503 = 1;
	volatile int32_t t121 = -187;

    t121 = ((x501^(x502<=x503))%x504);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x505 = INT8_MIN;
	int32_t x506 = INT32_MIN;
	uint16_t x507 = 46U;
	int16_t x508 = 5;

    t122 = ((x505^(x506<=x507))%x508);

    if (t122 != -2) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x509 = INT32_MIN;
	int64_t x510 = -1LL;
	int8_t x511 = INT8_MIN;
	volatile int64_t x512 = INT64_MIN;

    t123 = ((x509^(x510<=x511))%x512);

    if (t123 != -2147483648LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x513 = 88U;
	int16_t x514 = 4061;
	uint8_t x515 = 2U;
	volatile int32_t x516 = INT32_MAX;

    t124 = ((x513^(x514<=x515))%x516);

    if (t124 != 88U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x517 = UINT16_MAX;
	uint16_t x520 = UINT16_MAX;
	int32_t t125 = 206;

    t125 = ((x517^(x518<=x519))%x520);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x521 = INT32_MAX;
	int16_t x522 = INT16_MIN;
	volatile uint64_t x524 = UINT64_MAX;
	static uint64_t t126 = 7952794781668177392LLU;

    t126 = ((x521^(x522<=x523))%x524);

    if (t126 != 2147483647LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x525 = 0;
	int32_t x526 = 4371;
	int16_t x527 = INT16_MIN;
	uint64_t x528 = 14164997009705LLU;

    t127 = ((x525^(x526<=x527))%x528);

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x529 = -1;
	int32_t x530 = INT32_MIN;
	static uint8_t x531 = 2U;
	volatile uint32_t x532 = 993883U;
	volatile uint32_t t128 = 14981U;

    t128 = ((x529^(x530<=x531))%x532);

    if (t128 != 398851U) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x533 = INT32_MIN;
	uint64_t x534 = 428960LLU;
	int32_t x535 = INT32_MIN;
	volatile int64_t x536 = INT64_MAX;
	volatile int64_t t129 = -62437060170187LL;

    t129 = ((x533^(x534<=x535))%x536);

    if (t129 != -2147483647LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x537 = -1089247LL;
	volatile int64_t x539 = INT64_MAX;
	int32_t x540 = -245;
	static volatile int64_t t130 = 2491396085917616LL;

    t130 = ((x537^(x538<=x539))%x540);

    if (t130 != -223LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x541 = INT16_MIN;
	volatile int8_t x542 = 15;
	volatile uint32_t x543 = 6U;
	volatile uint32_t x544 = 7U;

    t131 = ((x541^(x542<=x543))%x544);

    if (t131 != 3U) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x545 = INT32_MIN;
	int8_t x546 = INT8_MAX;
	int64_t x547 = INT64_MIN;
	volatile int16_t x548 = INT16_MIN;
	static int32_t t132 = -682;

    t132 = ((x545^(x546<=x547))%x548);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x550 = 3U;
	int16_t x551 = INT16_MIN;
	volatile int32_t t133 = -2;

    t133 = ((x549^(x550<=x551))%x552);

    if (t133 != -3) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x553 = INT32_MIN;
	uint64_t x554 = UINT64_MAX;
	int32_t x555 = -1;
	int32_t x556 = INT32_MIN;
	volatile int32_t t134 = -43236;

    t134 = ((x553^(x554<=x555))%x556);

    if (t134 != -2147483647) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x557 = -1;
	int16_t x558 = INT16_MIN;
	uint16_t x560 = 1217U;
	static int32_t t135 = 118;

    t135 = ((x557^(x558<=x559))%x560);

    if (t135 != -2) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x561 = 0LLU;
	int64_t x562 = -1LL;
	static uint16_t x563 = 25595U;
	uint8_t x564 = 2U;
	volatile uint64_t t136 = 96LLU;

    t136 = ((x561^(x562<=x563))%x564);

    if (t136 != 1LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x565 = -2735LL;
	uint32_t x566 = UINT32_MAX;
	int32_t x567 = INT32_MIN;
	uint8_t x568 = UINT8_MAX;
	volatile int64_t t137 = -1037576LL;

    t137 = ((x565^(x566<=x567))%x568);

    if (t137 != -185LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x569 = INT16_MIN;
	static int8_t x570 = 0;
	uint8_t x571 = 33U;
	static int32_t x572 = INT32_MAX;
	int32_t t138 = 106;

    t138 = ((x569^(x570<=x571))%x572);

    if (t138 != -32767) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x573 = 0;
	int8_t x574 = INT8_MIN;
	int32_t x575 = INT32_MAX;
	uint16_t x576 = UINT16_MAX;

    t139 = ((x573^(x574<=x575))%x576);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x577 = INT16_MIN;
	static volatile uint64_t x578 = 127484916LLU;
	int16_t x579 = INT16_MIN;
	uint32_t x580 = UINT32_MAX;
	volatile uint32_t t140 = 28U;

    t140 = ((x577^(x578<=x579))%x580);

    if (t140 != 4294934529U) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x581 = INT32_MIN;
	volatile int64_t x582 = INT64_MIN;
	static int64_t x583 = -37193080611001LL;
	int32_t t141 = -3294667;

    t141 = ((x581^(x582<=x583))%x584);

    if (t141 != -7) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int16_t x586 = -313;
	volatile int32_t x587 = INT32_MIN;
	static int32_t x588 = -1;
	int32_t t142 = 5;

    t142 = ((x585^(x586<=x587))%x588);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x589 = 6U;
	uint64_t x590 = 49997LLU;
	static volatile uint8_t x591 = 21U;
	int64_t x592 = INT64_MIN;
	int64_t t143 = 5932153065719074LL;

    t143 = ((x589^(x590<=x591))%x592);

    if (t143 != 6LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x593 = INT32_MIN;
	uint64_t x594 = UINT64_MAX;
	volatile int64_t x595 = -1LL;
	uint64_t x596 = UINT64_MAX;
	volatile uint64_t t144 = 14974415511204LLU;

    t144 = ((x593^(x594<=x595))%x596);

    if (t144 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x597 = 2599U;
	uint32_t x598 = UINT32_MAX;
	int32_t x600 = INT32_MAX;
	volatile int32_t t145 = -1256231;

    t145 = ((x597^(x598<=x599))%x600);

    if (t145 != 2599) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x601 = 271197693844955901LLU;
	int32_t x602 = INT32_MAX;
	int8_t x603 = INT8_MAX;
	static volatile int64_t x604 = -8010742LL;
	uint64_t t146 = 3870789535LLU;

    t146 = ((x601^(x602<=x603))%x604);

    if (t146 != 271197693844955901LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x606 = INT64_MAX;
	int16_t x607 = 17;
	int64_t x608 = -1LL;
	int64_t t147 = -2LL;

    t147 = ((x605^(x606<=x607))%x608);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x609 = INT16_MIN;
	uint32_t x610 = UINT32_MAX;
	int64_t x611 = INT64_MIN;
	uint64_t t148 = 7326096271981824671LLU;

    t148 = ((x609^(x610<=x611))%x612);

    if (t148 != 23048593118LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int8_t x613 = -1;
	static int8_t x614 = -1;
	static volatile int8_t x615 = INT8_MAX;
	static volatile int8_t x616 = -1;

    t149 = ((x613^(x614<=x615))%x616);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x617 = 5U;
	volatile uint64_t x619 = 90458429LLU;
	int32_t t150 = -266;

    t150 = ((x617^(x618<=x619))%x620);

    if (t150 != 4) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x622 = INT8_MAX;
	int8_t x623 = 4;
	int16_t x624 = -26;
	int32_t t151 = 41;

    t151 = ((x621^(x622<=x623))%x624);

    if (t151 != -24) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x625 = INT8_MAX;
	volatile int16_t x627 = INT16_MAX;
	int32_t t152 = 101702;

    t152 = ((x625^(x626<=x627))%x628);

    if (t152 != 126) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x630 = -1;
	static int64_t x631 = INT64_MIN;
	uint8_t x632 = UINT8_MAX;
	volatile int32_t t153 = -1;

    t153 = ((x629^(x630<=x631))%x632);

    if (t153 != 127) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x633 = UINT32_MAX;
	static uint16_t x635 = 3434U;
	static uint16_t x636 = 6668U;
	uint32_t t154 = 13352871U;

    t154 = ((x633^(x634<=x635))%x636);

    if (t154 != 1807U) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile uint8_t x637 = 4U;
	int8_t x638 = 1;
	int32_t x639 = -498834868;
	volatile int64_t t155 = -33912LL;

    t155 = ((x637^(x638<=x639))%x640);

    if (t155 != 4LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x641 = INT32_MIN;
	int32_t x642 = -1;
	volatile uint32_t x644 = 229289312U;
	volatile uint32_t t156 = 88U;

    t156 = ((x641^(x642<=x643))%x644);

    if (t156 != 83879840U) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x645 = INT64_MAX;
	volatile int64_t x646 = -90193719531851LL;
	int64_t x647 = -1LL;
	volatile int64_t t157 = 2269048295284626LL;

    t157 = ((x645^(x646<=x647))%x648);

    if (t157 != 1048LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x649 = 0U;
	int32_t x650 = INT32_MIN;
	static int8_t x652 = -1;
	int32_t t158 = -9;

    t158 = ((x649^(x650<=x651))%x652);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x653 = -1628072416586443LL;
	uint32_t x654 = UINT32_MAX;
	int64_t x656 = -1LL;
	static int64_t t159 = -45427581665LL;

    t159 = ((x653^(x654<=x655))%x656);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x658 = INT16_MAX;
	static int64_t x660 = 6263107415LL;
	static volatile int64_t t160 = -44474061158LL;

    t160 = ((x657^(x658<=x659))%x660);

    if (t160 != -1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x661 = INT16_MIN;
	uint64_t x662 = UINT64_MAX;
	uint16_t x663 = 103U;
	volatile int8_t x664 = INT8_MAX;

    t161 = ((x661^(x662<=x663))%x664);

    if (t161 != -2) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x666 = INT64_MIN;
	uint32_t x668 = 14071899U;
	static volatile uint32_t t162 = 360724U;

    t162 = ((x665^(x666<=x667))%x668);

    if (t162 != 3038099U) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x669 = INT64_MIN;
	int64_t x670 = INT64_MAX;
	int64_t x671 = INT64_MIN;
	volatile int64_t t163 = -126714087474304LL;

    t163 = ((x669^(x670<=x671))%x672);

    if (t163 != -427559LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x673 = 10529299U;
	int8_t x674 = -1;
	int32_t x675 = INT32_MAX;
	int64_t x676 = -6082452996LL;
	volatile int64_t t164 = 2107313332196LL;

    t164 = ((x673^(x674<=x675))%x676);

    if (t164 != 10529298LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x677 = -29047079;
	static uint32_t x678 = UINT32_MAX;
	int16_t x679 = INT16_MAX;
	static int16_t x680 = 3685;
	int32_t t165 = 478;

    t165 = ((x677^(x678<=x679))%x680);

    if (t165 != -1909) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x681 = -1;
	uint64_t x683 = UINT64_MAX;
	uint64_t x684 = 1436203LLU;
	volatile uint64_t t166 = 1644004838LLU;

    t166 = ((x681^(x682<=x683))%x684);

    if (t166 != 998840LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x685 = 1;
	static int32_t x686 = INT32_MAX;
	volatile int64_t x687 = INT64_MIN;
	int8_t x688 = INT8_MIN;
	int32_t t167 = 39;

    t167 = ((x685^(x686<=x687))%x688);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x690 = 36593364;
	static volatile uint64_t x691 = 6LLU;
	volatile uint8_t x692 = UINT8_MAX;

    t168 = ((x689^(x690<=x691))%x692);

    if (t168 != -24) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x694 = INT64_MAX;
	int16_t x695 = INT16_MIN;
	uint64_t x696 = 3LLU;
	static volatile uint64_t t169 = 800810450LLU;

    t169 = ((x693^(x694<=x695))%x696);

    if (t169 != 1LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x699 = INT32_MIN;
	static volatile int32_t t170 = 0;

    t170 = ((x697^(x698<=x699))%x700);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x701 = -3012845;
	int16_t x702 = -1;
	int16_t x703 = -1;
	int32_t x704 = INT32_MIN;
	int32_t t171 = 2089216;

    t171 = ((x701^(x702<=x703))%x704);

    if (t171 != -3012846) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x705 = 0U;
	volatile uint32_t x707 = 6011U;
	uint8_t x708 = 125U;
	int32_t t172 = -16;

    t172 = ((x705^(x706<=x707))%x708);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x709 = INT32_MIN;
	static uint64_t x710 = UINT64_MAX;
	int16_t x711 = INT16_MAX;
	volatile int64_t t173 = 15746808LL;

    t173 = ((x709^(x710<=x711))%x712);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x717 = 72U;
	uint64_t t174 = 461560096204LLU;

    t174 = ((x717^(x718<=x719))%x720);

    if (t174 != 72LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x723 = INT8_MIN;
	int8_t x724 = INT8_MIN;
	uint32_t t175 = 0U;

    t175 = ((x721^(x722<=x723))%x724);

    if (t175 != 126U) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x726 = INT8_MIN;
	int32_t x727 = INT32_MIN;
	volatile uint8_t x728 = UINT8_MAX;
	volatile int32_t t176 = 54;

    t176 = ((x725^(x726<=x727))%x728);

    if (t176 != -128) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x729 = 59450825;
	int64_t x730 = INT64_MAX;
	int32_t x731 = INT32_MAX;
	int32_t t177 = -23;

    t177 = ((x729^(x730<=x731))%x732);

    if (t177 != 59450825) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x734 = 24U;
	static int64_t x735 = INT64_MAX;
	static int8_t x736 = -1;

    t178 = ((x733^(x734<=x735))%x736);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x737 = INT8_MAX;
	int32_t x739 = -14126;
	volatile uint16_t x740 = 676U;

    t179 = ((x737^(x738<=x739))%x740);

    if (t179 != 127) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x742 = 39U;
	int64_t x743 = INT64_MAX;
	static volatile int8_t x744 = -30;
	volatile uint32_t t180 = 231931U;

    t180 = ((x741^(x742<=x743))%x744);

    if (t180 != 28U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x745 = UINT32_MAX;
	uint32_t x746 = 6568U;
	int64_t x747 = INT64_MIN;
	static volatile uint32_t t181 = 6323U;

    t181 = ((x745^(x746<=x747))%x748);

    if (t181 != 2147483647U) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x749 = 368;
	int32_t x751 = INT32_MIN;
	uint8_t x752 = UINT8_MAX;
	volatile int32_t t182 = 2763;

    t182 = ((x749^(x750<=x751))%x752);

    if (t182 != 113) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x753 = 411U;
	static uint16_t x755 = 3U;

    t183 = ((x753^(x754<=x755))%x756);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x757 = -1;
	volatile int16_t x758 = -1;
	volatile uint64_t t184 = 44LLU;

    t184 = ((x757^(x758<=x759))%x760);

    if (t184 != 7482087LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x762 = INT32_MIN;
	static int32_t x763 = INT32_MIN;
	int32_t x764 = -1;
	volatile int32_t t185 = 470368497;

    t185 = ((x761^(x762<=x763))%x764);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x765 = INT16_MIN;
	int8_t x766 = -30;
	volatile int8_t x768 = 5;
	int32_t t186 = -2406800;

    t186 = ((x765^(x766<=x767))%x768);

    if (t186 != -2) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x769 = INT16_MAX;
	uint64_t x771 = 6613917609673148766LLU;
	volatile int32_t t187 = 0;

    t187 = ((x769^(x770<=x771))%x772);

    if (t187 != 32766) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x774 = 5U;
	int16_t x775 = INT16_MIN;
	static uint16_t x776 = 1U;

    t188 = ((x773^(x774<=x775))%x776);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x777 = UINT16_MAX;
	int16_t x778 = INT16_MAX;
	int32_t x779 = INT32_MAX;
	volatile int16_t x780 = 39;

    t189 = ((x777^(x778<=x779))%x780);

    if (t189 != 14) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x781 = 2305888U;
	uint32_t x784 = 483264380U;

    t190 = ((x781^(x782<=x783))%x784);

    if (t190 != 2305889U) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x785 = INT8_MIN;
	static volatile int16_t x786 = -5;
	volatile int64_t x787 = 852092LL;
	uint32_t x788 = UINT32_MAX;
	static uint32_t t191 = 17U;

    t191 = ((x785^(x786<=x787))%x788);

    if (t191 != 4294967169U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x789 = 2U;
	uint8_t x790 = 4U;
	int32_t t192 = 109;

    t192 = ((x789^(x790<=x791))%x792);

    if (t192 != 2) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x793 = 66U;
	uint64_t x794 = 6984782LLU;
	int8_t x796 = INT8_MAX;
	volatile uint32_t t193 = 2U;

    t193 = ((x793^(x794<=x795))%x796);

    if (t193 != 67U) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x798 = -1LL;
	int8_t x799 = INT8_MIN;
	volatile int8_t x800 = INT8_MIN;
	int32_t t194 = -793311197;

    t194 = ((x797^(x798<=x799))%x800);

    if (t194 != 26) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x801 = 65442573LLU;
	static uint8_t x802 = 42U;
	static int32_t x803 = -1;
	static volatile uint64_t t195 = 2972227002237577679LLU;

    t195 = ((x801^(x802<=x803))%x804);

    if (t195 != 65442573LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x806 = 1792;
	static uint32_t x807 = UINT32_MAX;

    t196 = ((x805^(x806<=x807))%x808);

    if (t196 != 4LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x809 = -126532716002712LL;
	int8_t x810 = 35;
	uint16_t x811 = 6U;
	int8_t x812 = INT8_MAX;
	int64_t t197 = -185879391410LL;

    t197 = ((x809^(x810<=x811))%x812);

    if (t197 != -70LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x813 = 3;
	int64_t x814 = INT64_MAX;
	int16_t x815 = INT16_MIN;
	static uint16_t x816 = 169U;
	volatile int32_t t198 = 379567533;

    t198 = ((x813^(x814<=x815))%x816);

    if (t198 != 3) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x817 = INT16_MIN;
	int8_t x818 = INT8_MIN;
	static volatile uint64_t x819 = 445085663607740581LLU;
	uint64_t x820 = 2906517487792649523LLU;
	volatile uint64_t t199 = 973081075483800LLU;

    t199 = ((x817^(x818<=x819))%x820);

    if (t199 != 1007639146953621710LLU) { NG(); } else { ; }
	
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

