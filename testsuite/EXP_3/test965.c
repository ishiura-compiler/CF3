
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

static volatile int8_t x14 = -1;
static volatile int8_t x22 = INT8_MIN;
static volatile int64_t x23 = INT64_MIN;
static int32_t x26 = INT32_MIN;
int16_t x28 = 70;
static volatile uint32_t t6 = UINT32_MAX;
int32_t x29 = -424;
int32_t x30 = -130;
static uint64_t x32 = 10LLU;
static volatile int8_t x34 = INT8_MAX;
int8_t x35 = 1;
int16_t x39 = -1;
volatile int64_t t9 = 10LL;
volatile uint64_t t10 = UINT64_MAX;
static int16_t x60 = -1;
volatile int64_t t14 = -5874635458483603LL;
static volatile uint64_t x63 = 2LLU;
volatile int8_t x76 = INT8_MIN;
static int32_t x81 = INT32_MIN;
uint64_t x85 = 50235332LLU;
uint16_t x93 = 96U;
int16_t x96 = INT16_MAX;
volatile int64_t t24 = 8986948LL;
static volatile uint16_t x105 = 14U;
static volatile int64_t x107 = -1LL;
volatile int32_t x109 = -1;
volatile int64_t x110 = -1LL;
static int8_t x112 = INT8_MAX;
volatile int64_t x113 = 407855125845LL;
volatile uint64_t t27 = UINT64_MAX;
int64_t x117 = -10670683LL;
volatile int8_t x121 = 2;
uint64_t x125 = 1LLU;
int8_t x131 = INT8_MIN;
uint8_t x145 = 19U;
int64_t x157 = INT64_MIN;
int64_t t36 = 1018358829887041184LL;
int16_t x168 = 6686;
uint64_t x171 = UINT64_MAX;
volatile uint16_t x180 = 1U;
uint16_t x188 = UINT16_MAX;
uint32_t x190 = 38730317U;
int8_t x192 = -11;
uint64_t t45 = UINT64_MAX;
int8_t x198 = -1;
int16_t x202 = 29;
uint16_t x206 = 32688U;
int8_t x211 = 0;
volatile int32_t x222 = INT32_MIN;
volatile uint8_t x226 = UINT8_MAX;
uint16_t x227 = 509U;
uint16_t x228 = UINT16_MAX;
int16_t x235 = -1;
uint64_t x242 = 24690374486450601LLU;
static uint64_t t57 = 1939935381847605LLU;
int16_t x245 = -1;
uint64_t x247 = UINT64_MAX;
int64_t x248 = -32149279712415246LL;
uint64_t x251 = 19143LLU;
uint64_t t59 = 32LLU;
int32_t x253 = 14914680;
static int32_t x258 = INT32_MIN;
int8_t x259 = -1;
uint8_t x262 = UINT8_MAX;
uint16_t x267 = 654U;
volatile int64_t t63 = -65079518184247LL;
uint8_t x273 = UINT8_MAX;
int64_t x287 = -1LL;
volatile uint32_t x295 = UINT32_MAX;
volatile int64_t t71 = -3LL;
static volatile int64_t t72 = 24496648462820616LL;
uint8_t x308 = 112U;
volatile uint64_t x312 = UINT64_MAX;
int32_t x313 = -1;
static int32_t x322 = 5;
volatile int64_t t77 = 7363308134LL;
volatile uint16_t x328 = UINT16_MAX;
static int16_t x332 = INT16_MAX;
int64_t t79 = 128310206871535506LL;
int64_t x335 = -1LL;
volatile int32_t t82 = -812046;
volatile uint32_t x346 = UINT32_MAX;
uint16_t x355 = 759U;
int32_t x356 = INT32_MIN;
static int16_t x362 = 56;
uint8_t x364 = 57U;
volatile int16_t x366 = INT16_MAX;
int8_t x372 = INT8_MIN;
int32_t x381 = INT32_MIN;
int16_t x383 = -1;
int32_t t92 = -30;
int32_t t94 = -329391;
int64_t x395 = 0LL;
int64_t t95 = 472900324712LL;
volatile uint32_t x397 = 23657U;
static volatile uint32_t t96 = UINT32_MAX;
volatile int64_t x403 = -5159402273034754LL;
int8_t x411 = 0;
volatile uint32_t x412 = 193517U;
static int8_t x418 = INT8_MAX;
int8_t x422 = INT8_MIN;
int64_t x444 = -169657019499953300LL;
uint32_t x447 = 0U;
volatile int8_t x450 = INT8_MAX;
static int8_t x454 = -1;
int64_t x467 = 0LL;
uint16_t x470 = 1561U;
uint32_t x473 = UINT32_MAX;
static int32_t x487 = INT32_MIN;
volatile uint64_t t116 = UINT64_MAX;
int16_t x489 = 2071;
volatile int16_t x491 = -2;
int64_t x493 = INT64_MIN;
uint64_t t118 = 404850LLU;
int64_t x497 = -31867LL;
int8_t x502 = 19;
static uint32_t x503 = UINT32_MAX;
uint32_t t120 = 2U;
uint8_t x513 = UINT8_MAX;
static uint64_t x519 = 3356LLU;
volatile int8_t x521 = -1;
volatile int64_t x524 = INT64_MIN;
static volatile int64_t x532 = -1LL;
int16_t x542 = -75;
volatile int16_t x549 = INT16_MIN;
int64_t x563 = INT64_MAX;
int8_t x564 = INT8_MIN;
uint16_t x566 = 13460U;
int8_t x568 = INT8_MIN;
volatile uint32_t t135 = 8U;
uint32_t x578 = 45U;
static int8_t x580 = -1;
int16_t x581 = -1;
static uint8_t x585 = 1U;
int16_t x586 = INT16_MIN;
int64_t t140 = -1436888186347LL;
static int8_t x598 = 33;
int64_t x600 = INT64_MIN;
volatile int64_t x603 = -1LL;
int8_t x607 = 5;
static int64_t x608 = INT64_MIN;
int16_t x609 = INT16_MIN;
uint64_t x616 = 187913333LLU;
volatile uint64_t t145 = UINT64_MAX;
static int64_t x624 = -18441LL;
int64_t t146 = 82LL;
uint32_t x626 = 1U;
volatile int16_t x630 = INT16_MAX;
volatile uint64_t t148 = 9211726016025634475LLU;
int64_t x637 = INT64_MIN;
int8_t x639 = INT8_MAX;
static int64_t x642 = 467112578831LL;
int32_t x644 = -2346;
int8_t x645 = INT8_MIN;
int64_t x646 = INT64_MAX;
int8_t x649 = -1;
uint64_t x664 = 2450160341136LLU;
volatile uint64_t t156 = UINT64_MAX;
volatile int64_t t157 = -96814266980213LL;
int32_t x672 = 35692;
int32_t t159 = -1;
int8_t x677 = INT8_MIN;
volatile uint64_t t160 = UINT64_MAX;
volatile int8_t x686 = INT8_MAX;
volatile uint8_t x690 = 32U;
int32_t x692 = INT32_MIN;
int16_t x703 = INT16_MIN;
int16_t x704 = INT16_MIN;
int8_t x711 = INT8_MAX;
volatile int32_t x716 = -1;
uint64_t x717 = UINT64_MAX;
static volatile int16_t x722 = -421;
int64_t x726 = -1LL;
volatile uint64_t x730 = 4465754597015542061LLU;
volatile uint64_t x735 = 51999578LLU;
int16_t x736 = -1;
uint64_t x737 = UINT64_MAX;
uint64_t x740 = 60460708052672LLU;
uint32_t x744 = UINT32_MAX;
uint64_t t176 = UINT64_MAX;
int8_t x747 = INT8_MIN;
volatile uint64_t x748 = 20894199376113LLU;
volatile uint16_t x753 = 647U;
volatile uint64_t t179 = 3990962300988134LLU;
int32_t x761 = -1;
int64_t x764 = INT64_MAX;
uint16_t x769 = 16564U;
uint16_t x773 = 434U;
static int16_t x775 = INT16_MAX;
volatile uint8_t x776 = 2U;
int8_t x788 = INT8_MAX;
int64_t t188 = -5692776636LL;
int64_t x801 = INT64_MIN;
volatile int32_t t192 = -3849359;
static uint8_t x819 = UINT8_MAX;
uint8_t x821 = 83U;
static uint32_t x826 = 761898U;
int32_t x827 = 27062;
int8_t x838 = 10;
volatile int16_t x840 = INT16_MIN;


void f0(void) {
    	static int32_t x1 = INT32_MIN;
	volatile uint64_t x2 = 3905166579460LLU;
	static int32_t x3 = INT32_MIN;
	volatile uint32_t x4 = UINT32_MAX;
	volatile uint64_t t0 = 65492370LLU;

    t0 = ((x1|x2)|(x3%x4));

    if (t0 != 18446744072603375364LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = INT16_MAX;
	int64_t x6 = 308768LL;
	volatile int8_t x7 = 1;
	int16_t x8 = INT16_MAX;
	volatile int64_t t1 = -21924424352046225LL;

    t1 = ((x5|x6)|(x7%x8));

    if (t1 != 327679LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 45LLU;
	static volatile uint32_t x10 = 4353U;
	int64_t x11 = INT64_MIN;
	static volatile int16_t x12 = 600;
	volatile uint64_t t2 = 29LLU;

    t2 = ((x9|x10)|(x11%x12));

    if (t2 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 971U;
	int16_t x15 = INT16_MIN;
	int16_t x16 = -158;
	volatile uint32_t t3 = UINT32_MAX;

    t3 = ((x13|x14)|(x15%x16));

    if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 397U;
	int8_t x18 = INT8_MAX;
	volatile int32_t x19 = 125619;
	int16_t x20 = INT16_MAX;
	volatile int32_t t4 = -53589459;

    t4 = ((x17|x18)|(x19%x20));

    if (t4 != 27647) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MAX;
	static volatile uint32_t x24 = 34269U;
	volatile int64_t t5 = -203731LL;

    t5 = ((x21|x22)|(x23%x24));

    if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x25 = INT32_MAX;
	volatile uint32_t x27 = UINT32_MAX;

    t6 = ((x25|x26)|(x27%x28));

    if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x31 = 4U;
	uint64_t t7 = 3797308898LLU;

    t7 = ((x29|x30)|(x31%x32));

    if (t7 != 18446744073709551486LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -1LL;
	static int8_t x36 = -1;
	static volatile int64_t t8 = 55694954771463839LL;

    t8 = ((x33|x34)|(x35%x36));

    if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = 1093;
	volatile int64_t x38 = 4819467486842078LL;
	int16_t x40 = INT16_MIN;

    t9 = ((x37|x38)|(x39%x40));

    if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	static int8_t x42 = -1;
	uint64_t x43 = 96634303270887LLU;
	uint64_t x44 = UINT64_MAX;

    t10 = ((x41|x42)|(x43%x44));

    if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = 23908592295034549LLU;
	int8_t x46 = INT8_MAX;
	int16_t x47 = INT16_MAX;
	uint8_t x48 = 10U;
	uint64_t t11 = 540694895549567LLU;

    t11 = ((x45|x46)|(x47%x48));

    if (t11 != 23908592295034623LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x49 = INT8_MAX;
	static int8_t x50 = INT8_MIN;
	int16_t x51 = INT16_MIN;
	int8_t x52 = -1;
	int32_t t12 = -1;

    t12 = ((x49|x50)|(x51%x52));

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = -1;
	int64_t x54 = -1LL;
	uint16_t x55 = 1662U;
	int32_t x56 = -1;
	int64_t t13 = 1LL;

    t13 = ((x53|x54)|(x55%x56));

    if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x57 = 19;
	static uint16_t x58 = 336U;
	int64_t x59 = INT64_MAX;

    t14 = ((x57|x58)|(x59%x60));

    if (t14 != 339LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x61 = -1;
	int8_t x62 = INT8_MIN;
	volatile uint32_t x64 = 6527811U;
	volatile uint64_t t15 = UINT64_MAX;

    t15 = ((x61|x62)|(x63%x64));

    if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = -55060689;
	uint8_t x66 = UINT8_MAX;
	int32_t x67 = INT32_MAX;
	int16_t x68 = INT16_MAX;
	static volatile int32_t t16 = -4191669;

    t16 = ((x65|x66)|(x67%x68));

    if (t16 != -55060481) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x69 = INT8_MIN;
	static volatile uint16_t x70 = 30381U;
	uint64_t x71 = 154409LLU;
	uint32_t x72 = UINT32_MAX;
	uint64_t t17 = 47544582192125079LLU;

    t17 = ((x69|x70)|(x71%x72));

    if (t17 != 18446744073709551533LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x73 = 1636;
	static uint64_t x74 = 40620764585083LLU;
	uint8_t x75 = UINT8_MAX;
	volatile uint64_t t18 = 37137781548LLU;

    t18 = ((x73|x74)|(x75%x76));

    if (t18 != 40620764585599LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x82 = INT16_MIN;
	volatile uint64_t x83 = 444328854770LLU;
	volatile uint64_t x84 = UINT64_MAX;
	volatile uint64_t t19 = 155587LLU;

    t19 = ((x81|x82)|(x83%x84));

    if (t19 != 18446744073709536498LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x86 = 6651U;
	int64_t x87 = INT64_MAX;
	int32_t x88 = -1040197;
	uint64_t t20 = 2984822438025247LLU;

    t20 = ((x85|x86)|(x87%x88));

    if (t20 != 50315263LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x89 = 3LL;
	static uint64_t x90 = 1002251882LLU;
	int16_t x91 = INT16_MIN;
	int32_t x92 = INT32_MAX;
	static uint64_t t21 = 412873871909777372LLU;

    t21 = ((x89|x90)|(x91%x92));

    if (t21 != 18446744073709528683LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x94 = INT32_MIN;
	volatile int8_t x95 = 8;
	static int32_t t22 = 2;

    t22 = ((x93|x94)|(x95%x96));

    if (t22 != -2147483544) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile uint64_t x97 = 43722LLU;
	uint16_t x98 = 414U;
	static int32_t x99 = -3060492;
	volatile uint64_t x100 = 975LLU;
	static volatile uint64_t t23 = 97507134217476LLU;

    t23 = ((x97|x98)|(x99%x100));

    if (t23 != 44031LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x101 = 25480U;
	uint8_t x102 = 38U;
	volatile int64_t x103 = -1145263LL;
	volatile int32_t x104 = -3514593;

    t24 = ((x101|x102)|(x103%x104));

    if (t24 != -1120257LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x106 = -1LL;
	int64_t x108 = INT64_MIN;
	int64_t t25 = -4673194064944083LL;

    t25 = ((x105|x106)|(x107%x108));

    if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x111 = -1;
	static volatile int64_t t26 = 4006700078266355LL;

    t26 = ((x109|x110)|(x111%x112));

    if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x114 = 207837160LLU;
	volatile int8_t x115 = -13;
	int64_t x116 = INT64_MIN;

    t27 = ((x113|x114)|(x115%x116));

    if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x118 = -1;
	int64_t x119 = INT64_MIN;
	int16_t x120 = INT16_MIN;
	int64_t t28 = 0LL;

    t28 = ((x117|x118)|(x119%x120));

    if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x122 = INT8_MIN;
	static uint64_t x123 = UINT64_MAX;
	int64_t x124 = -1LL;
	uint64_t t29 = 4028204227116921881LLU;

    t29 = ((x121|x122)|(x123%x124));

    if (t29 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x126 = INT32_MAX;
	uint8_t x127 = 14U;
	int32_t x128 = INT32_MIN;
	uint64_t t30 = 29598LLU;

    t30 = ((x125|x126)|(x127%x128));

    if (t30 != 2147483647LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x129 = 4;
	uint64_t x130 = UINT64_MAX;
	int8_t x132 = -1;
	volatile uint64_t t31 = UINT64_MAX;

    t31 = ((x129|x130)|(x131%x132));

    if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x133 = 17621460LLU;
	volatile int16_t x134 = INT16_MIN;
	int32_t x135 = -1;
	volatile int16_t x136 = -1;
	static uint64_t t32 = 107LLU;

    t32 = ((x133|x134)|(x135%x136));

    if (t32 != 18446744073709543892LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x141 = 89U;
	volatile uint32_t x142 = 89020392U;
	int8_t x143 = INT8_MIN;
	uint64_t x144 = 26474174913LLU;
	volatile uint64_t t33 = 643573665611LLU;

    t33 = ((x141|x142)|(x143%x144));

    if (t33 != 15701303295LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint8_t x146 = 1U;
	int8_t x147 = 0;
	static int8_t x148 = INT8_MIN;
	int32_t t34 = -5246039;

    t34 = ((x145|x146)|(x147%x148));

    if (t34 != 19) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x153 = 306LLU;
	uint16_t x154 = 2U;
	int8_t x155 = -27;
	uint8_t x156 = 14U;
	uint64_t t35 = 1791742282094519LLU;

    t35 = ((x153|x154)|(x155%x156));

    if (t35 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x158 = 0U;
	static int32_t x159 = -4;
	uint32_t x160 = 1098243661U;

    t36 = ((x157|x158)|(x159%x160));

    if (t36 != -9223372035854539499LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x161 = -10;
	volatile uint32_t x162 = 102377973U;
	uint16_t x163 = 59U;
	volatile uint64_t x164 = UINT64_MAX;
	uint64_t t37 = 18284LLU;

    t37 = ((x161|x162)|(x163%x164));

    if (t37 != 4294967295LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x165 = INT16_MIN;
	int32_t x166 = 47;
	int32_t x167 = -1;
	volatile int32_t t38 = -30914472;

    t38 = ((x165|x166)|(x167%x168));

    if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x169 = 236539768;
	int16_t x170 = INT16_MIN;
	int8_t x172 = 1;
	volatile uint64_t t39 = 6772379235810684132LLU;

    t39 = ((x169|x170)|(x171%x172));

    if (t39 != 18446744073709539192LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x173 = -1;
	static int64_t x174 = -121LL;
	volatile uint64_t x175 = UINT64_MAX;
	static uint64_t x176 = UINT64_MAX;
	volatile uint64_t t40 = UINT64_MAX;

    t40 = ((x173|x174)|(x175%x176));

    if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x177 = INT32_MIN;
	uint8_t x178 = UINT8_MAX;
	int64_t x179 = -1LL;
	volatile int64_t t41 = -349232895347234LL;

    t41 = ((x177|x178)|(x179%x180));

    if (t41 != -2147483393LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x181 = 0U;
	uint64_t x182 = 3LLU;
	int64_t x183 = INT64_MIN;
	static int32_t x184 = -64572;
	uint64_t t42 = 14663869149LLU;

    t42 = ((x181|x182)|(x183%x184));

    if (t42 != 18446744073709506119LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x185 = 98325U;
	static int64_t x186 = -3317LL;
	uint8_t x187 = 1U;
	volatile int64_t t43 = -67235719279890374LL;

    t43 = ((x185|x186)|(x187%x188));

    if (t43 != -3297LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x189 = -1LL;
	int16_t x191 = 3;
	int64_t t44 = -4089LL;

    t44 = ((x189|x190)|(x191%x192));

    if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x193 = INT8_MIN;
	volatile int8_t x194 = -1;
	uint8_t x195 = UINT8_MAX;
	static uint64_t x196 = UINT64_MAX;

    t45 = ((x193|x194)|(x195%x196));

    if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x197 = INT16_MIN;
	uint16_t x199 = 317U;
	static volatile uint32_t x200 = 14316674U;
	static volatile uint32_t t46 = UINT32_MAX;

    t46 = ((x197|x198)|(x199%x200));

    if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x201 = INT8_MIN;
	int64_t x203 = -119449159285LL;
	uint64_t x204 = UINT64_MAX;
	static volatile uint64_t t47 = 931LLU;

    t47 = ((x201|x202)|(x203%x204));

    if (t47 != 18446744073709551519LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int64_t x205 = -44175309973LL;
	int32_t x207 = -382479679;
	uint64_t x208 = 44275237995753LLU;
	uint64_t t48 = 235861136LLU;

    t48 = ((x205|x206)|(x207%x208));

    if (t48 != 18446744039215497215LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x209 = 2423U;
	volatile uint32_t x210 = UINT32_MAX;
	static volatile int8_t x212 = 6;
	volatile uint32_t t49 = UINT32_MAX;

    t49 = ((x209|x210)|(x211%x212));

    if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint8_t x213 = UINT8_MAX;
	static uint32_t x214 = 3U;
	static volatile int32_t x215 = -1;
	uint32_t x216 = UINT32_MAX;
	volatile uint32_t t50 = 12996166U;

    t50 = ((x213|x214)|(x215%x216));

    if (t50 != 255U) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x217 = -1;
	int32_t x218 = INT32_MAX;
	uint16_t x219 = UINT16_MAX;
	int8_t x220 = INT8_MAX;
	volatile int32_t t51 = 4144610;

    t51 = ((x217|x218)|(x219%x220));

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x221 = 50;
	static uint8_t x223 = UINT8_MAX;
	int64_t x224 = -1LL;
	volatile int64_t t52 = 0LL;

    t52 = ((x221|x222)|(x223%x224));

    if (t52 != -2147483598LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x225 = UINT8_MAX;
	static volatile int32_t t53 = 53121292;

    t53 = ((x225|x226)|(x227%x228));

    if (t53 != 511) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint64_t x229 = 136519436320LLU;
	static int16_t x230 = INT16_MAX;
	static int64_t x231 = INT64_MIN;
	int64_t x232 = -1LL;
	volatile uint64_t t54 = 12165378556653LLU;

    t54 = ((x229|x230)|(x231%x232));

    if (t54 != 136519450623LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x233 = -1;
	static volatile int64_t x234 = INT64_MAX;
	volatile uint32_t x236 = 35U;
	volatile int64_t t55 = -1LL;

    t55 = ((x233|x234)|(x235%x236));

    if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x237 = 15U;
	static int64_t x238 = INT64_MAX;
	static int32_t x239 = INT32_MIN;
	uint8_t x240 = 4U;
	int64_t t56 = INT64_MAX;

    t56 = ((x237|x238)|(x239%x240));

    if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x241 = 871819165U;
	uint64_t x243 = 7529LLU;
	int16_t x244 = INT16_MAX;

    t57 = ((x241|x242)|(x243%x244));

    if (t57 != 24690375347601405LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x246 = INT32_MIN;
	uint64_t t58 = UINT64_MAX;

    t58 = ((x245|x246)|(x247%x248));

    if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x249 = 126U;
	static int32_t x250 = -1;
	uint64_t x252 = 465574006623011LLU;

    t59 = ((x249|x250)|(x251%x252));

    if (t59 != 4294967295LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x254 = 165U;
	volatile int8_t x255 = INT8_MAX;
	volatile uint8_t x256 = 92U;
	int32_t t60 = -64296762;

    t60 = ((x253|x254)|(x255%x256));

    if (t60 != 14914815) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x257 = 6572U;
	int16_t x260 = INT16_MIN;
	uint32_t t61 = UINT32_MAX;

    t61 = ((x257|x258)|(x259%x260));

    if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x261 = INT32_MIN;
	volatile int16_t x263 = INT16_MIN;
	volatile uint8_t x264 = 77U;
	volatile int32_t t62 = -86238;

    t62 = ((x261|x262)|(x263%x264));

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x265 = INT64_MIN;
	static uint32_t x266 = 376440529U;
	int64_t x268 = INT64_MIN;

    t63 = ((x265|x266)|(x267%x268));

    if (t63 != -9223372036478335265LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x269 = -1;
	int16_t x270 = INT16_MIN;
	static int64_t x271 = INT64_MAX;
	int64_t x272 = INT64_MIN;
	int64_t t64 = 34029910207035624LL;

    t64 = ((x269|x270)|(x271%x272));

    if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint64_t x274 = UINT64_MAX;
	uint8_t x275 = 3U;
	int64_t x276 = INT64_MAX;
	static uint64_t t65 = UINT64_MAX;

    t65 = ((x273|x274)|(x275%x276));

    if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x277 = INT32_MIN;
	static int8_t x278 = -2;
	int32_t x279 = INT32_MIN;
	uint8_t x280 = 7U;
	int32_t t66 = 49440468;

    t66 = ((x277|x278)|(x279%x280));

    if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x281 = INT32_MAX;
	uint16_t x282 = 307U;
	volatile int8_t x283 = INT8_MAX;
	volatile int64_t x284 = INT64_MIN;
	volatile int64_t t67 = -3122847135073339LL;

    t67 = ((x281|x282)|(x283%x284));

    if (t67 != 2147483647LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x285 = INT32_MIN;
	int16_t x286 = -35;
	uint32_t x288 = 6U;
	volatile int64_t t68 = -7LL;

    t68 = ((x285|x286)|(x287%x288));

    if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int32_t x289 = -1;
	static volatile uint32_t x290 = UINT32_MAX;
	volatile uint16_t x291 = 355U;
	volatile int16_t x292 = 31;
	static uint32_t t69 = UINT32_MAX;

    t69 = ((x289|x290)|(x291%x292));

    if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x293 = INT64_MAX;
	volatile int8_t x294 = -4;
	static int8_t x296 = -1;
	volatile int64_t t70 = -97721696905868646LL;

    t70 = ((x293|x294)|(x295%x296));

    if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x297 = INT8_MIN;
	int64_t x298 = INT64_MIN;
	int16_t x299 = -5602;
	static uint16_t x300 = 49U;

    t71 = ((x297|x298)|(x299%x300));

    if (t71 != -16LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int64_t x301 = INT64_MIN;
	int8_t x302 = 5;
	uint32_t x303 = UINT32_MAX;
	static volatile int32_t x304 = -2;

    t72 = ((x301|x302)|(x303%x304));

    if (t72 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x305 = 19887U;
	volatile int16_t x306 = 1;
	int16_t x307 = INT16_MIN;
	volatile int32_t t73 = 3993970;

    t73 = ((x305|x306)|(x307%x308));

    if (t73 != -17) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x309 = 0U;
	int8_t x310 = 9;
	int32_t x311 = INT32_MIN;
	volatile uint64_t t74 = 82928262070522317LLU;

    t74 = ((x309|x310)|(x311%x312));

    if (t74 != 18446744071562067977LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x314 = INT32_MAX;
	static uint8_t x315 = UINT8_MAX;
	int8_t x316 = 29;
	static int32_t t75 = 0;

    t75 = ((x313|x314)|(x315%x316));

    if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x317 = -1;
	int8_t x318 = -1;
	uint32_t x319 = 1U;
	int16_t x320 = -1;
	static uint32_t t76 = UINT32_MAX;

    t76 = ((x317|x318)|(x319%x320));

    if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x321 = -684;
	int64_t x323 = -1970123199016258507LL;
	int32_t x324 = -1;

    t77 = ((x321|x322)|(x323%x324));

    if (t77 != -683LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x325 = -13;
	uint16_t x326 = 209U;
	int8_t x327 = -1;
	volatile int32_t t78 = 2;

    t78 = ((x325|x326)|(x327%x328));

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x329 = INT8_MIN;
	int64_t x330 = 105788690928549LL;
	static int8_t x331 = 49;

    t79 = ((x329|x330)|(x331%x332));

    if (t79 != -75LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x333 = -872379463;
	int32_t x334 = INT32_MIN;
	int16_t x336 = INT16_MIN;
	volatile int64_t t80 = -2144466410768317LL;

    t80 = ((x333|x334)|(x335%x336));

    if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x337 = UINT64_MAX;
	int64_t x338 = INT64_MIN;
	int32_t x339 = INT32_MAX;
	int64_t x340 = INT64_MIN;
	volatile uint64_t t81 = UINT64_MAX;

    t81 = ((x337|x338)|(x339%x340));

    if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x341 = -1;
	int16_t x342 = -317;
	int16_t x343 = -693;
	int32_t x344 = -1;

    t82 = ((x341|x342)|(x343%x344));

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x345 = UINT32_MAX;
	int16_t x347 = -1;
	static int64_t x348 = INT64_MIN;
	int64_t t83 = -907155632059406875LL;

    t83 = ((x345|x346)|(x347%x348));

    if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x349 = -1;
	static volatile int8_t x350 = 0;
	static uint64_t x351 = 2286727LLU;
	uint8_t x352 = UINT8_MAX;
	volatile uint64_t t84 = UINT64_MAX;

    t84 = ((x349|x350)|(x351%x352));

    if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint32_t x353 = 1109428541U;
	uint32_t x354 = 15170968U;
	static volatile uint32_t t85 = 7U;

    t85 = ((x353|x354)|(x355%x356));

    if (t85 != 1122500607U) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x357 = INT8_MIN;
	static int32_t x358 = -1;
	volatile uint16_t x359 = UINT16_MAX;
	static int8_t x360 = -1;
	static volatile int32_t t86 = 1;

    t86 = ((x357|x358)|(x359%x360));

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x361 = UINT32_MAX;
	uint64_t x363 = 544LLU;
	uint64_t t87 = 489141LLU;

    t87 = ((x361|x362)|(x363%x364));

    if (t87 != 4294967295LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x365 = INT64_MIN;
	uint64_t x367 = UINT64_MAX;
	volatile uint8_t x368 = UINT8_MAX;
	volatile uint64_t t88 = 1088641638794843918LLU;

    t88 = ((x365|x366)|(x367%x368));

    if (t88 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x369 = -1;
	volatile uint8_t x370 = UINT8_MAX;
	volatile int64_t x371 = 4571397990LL;
	int64_t t89 = 843224077515LL;

    t89 = ((x369|x370)|(x371%x372));

    if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x373 = INT16_MIN;
	int64_t x374 = INT64_MIN;
	uint64_t x375 = 271LLU;
	volatile int8_t x376 = INT8_MIN;
	volatile uint64_t t90 = 59948491110676LLU;

    t90 = ((x373|x374)|(x375%x376));

    if (t90 != 18446744073709519119LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x377 = 4U;
	uint16_t x378 = UINT16_MAX;
	static int32_t x379 = 861517949;
	uint32_t x380 = 37261U;
	uint32_t t91 = 103U;

    t91 = ((x377|x378)|(x379%x380));

    if (t91 != 65535U) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x382 = -230;
	int8_t x384 = -1;

    t92 = ((x381|x382)|(x383%x384));

    if (t92 != -230) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x385 = 2587U;
	uint64_t x386 = UINT64_MAX;
	int16_t x387 = -1;
	volatile int64_t x388 = -1LL;
	volatile uint64_t t93 = UINT64_MAX;

    t93 = ((x385|x386)|(x387%x388));

    if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x389 = INT16_MIN;
	static volatile uint8_t x390 = 3U;
	int8_t x391 = INT8_MAX;
	int8_t x392 = 4;

    t94 = ((x389|x390)|(x391%x392));

    if (t94 != -32765) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x393 = 335420264;
	int16_t x394 = INT16_MIN;
	volatile int16_t x396 = -1;

    t95 = ((x393|x394)|(x395%x396));

    if (t95 != -25752LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int8_t x398 = INT8_MIN;
	int16_t x399 = INT16_MAX;
	volatile uint32_t x400 = UINT32_MAX;

    t96 = ((x397|x398)|(x399%x400));

    if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x401 = UINT64_MAX;
	volatile int64_t x402 = -1LL;
	uint8_t x404 = UINT8_MAX;
	volatile uint64_t t97 = UINT64_MAX;

    t97 = ((x401|x402)|(x403%x404));

    if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x405 = -1LL;
	uint64_t x406 = UINT64_MAX;
	static volatile uint32_t x407 = 125568772U;
	uint8_t x408 = 2U;
	uint64_t t98 = UINT64_MAX;

    t98 = ((x405|x406)|(x407%x408));

    if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x409 = 4382U;
	volatile uint32_t x410 = UINT32_MAX;
	static uint32_t t99 = UINT32_MAX;

    t99 = ((x409|x410)|(x411%x412));

    if (t99 != UINT32_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x413 = UINT64_MAX;
	volatile int32_t x414 = -27358;
	uint16_t x415 = 13262U;
	static volatile uint16_t x416 = 5U;
	volatile uint64_t t100 = UINT64_MAX;

    t100 = ((x413|x414)|(x415%x416));

    if (t100 != UINT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x417 = -1;
	volatile int8_t x419 = -1;
	int64_t x420 = -1LL;
	static volatile int64_t t101 = 6493LL;

    t101 = ((x417|x418)|(x419%x420));

    if (t101 != -1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x421 = INT8_MIN;
	int32_t x423 = 38;
	int16_t x424 = 2;
	int32_t t102 = 1;

    t102 = ((x421|x422)|(x423%x424));

    if (t102 != -128) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x425 = INT16_MAX;
	uint8_t x426 = 0U;
	int32_t x427 = INT32_MIN;
	uint16_t x428 = 1785U;
	volatile int32_t t103 = 1;

    t103 = ((x425|x426)|(x427%x428));

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x429 = UINT32_MAX;
	int16_t x430 = INT16_MAX;
	int16_t x431 = -5;
	static int32_t x432 = -1;
	static volatile uint32_t t104 = UINT32_MAX;

    t104 = ((x429|x430)|(x431%x432));

    if (t104 != UINT32_MAX) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x433 = INT8_MAX;
	int32_t x434 = -1;
	volatile uint64_t x435 = UINT64_MAX;
	uint8_t x436 = 120U;
	uint64_t t105 = UINT64_MAX;

    t105 = ((x433|x434)|(x435%x436));

    if (t105 != UINT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x437 = -2898392945914297LL;
	int16_t x438 = INT16_MIN;
	int32_t x439 = 4857206;
	uint64_t x440 = 2928335581480LLU;
	uint64_t t106 = 1966451866422537326LLU;

    t106 = ((x437|x438)|(x439%x440));

    if (t106 != 18446744073709526903LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x441 = UINT16_MAX;
	uint8_t x442 = UINT8_MAX;
	int64_t x443 = INT64_MAX;
	volatile int64_t t107 = -9932LL;

    t107 = ((x441|x442)|(x443%x444));

    if (t107 != 61892983857348607LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x445 = 3418197U;
	uint8_t x446 = 0U;
	uint32_t x448 = 93081U;
	static volatile uint32_t t108 = 25U;

    t108 = ((x445|x446)|(x447%x448));

    if (t108 != 3418197U) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x449 = 4753712238074775LL;
	int32_t x451 = 492787;
	int8_t x452 = INT8_MIN;
	volatile int64_t t109 = 643116922662LL;

    t109 = ((x449|x450)|(x451%x452));

    if (t109 != 4753712238074879LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x453 = INT16_MAX;
	static volatile int16_t x455 = -1;
	volatile uint64_t x456 = UINT64_MAX;
	static volatile uint64_t t110 = UINT64_MAX;

    t110 = ((x453|x454)|(x455%x456));

    if (t110 != UINT64_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x461 = -1;
	int16_t x462 = INT16_MIN;
	static int64_t x463 = 124363853055431288LL;
	int16_t x464 = INT16_MAX;
	int64_t t111 = 263179978LL;

    t111 = ((x461|x462)|(x463%x464));

    if (t111 != -1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x465 = INT8_MIN;
	uint64_t x466 = 528274LLU;
	volatile int16_t x468 = -1;
	volatile uint64_t t112 = 91LLU;

    t112 = ((x465|x466)|(x467%x468));

    if (t112 != 18446744073709551506LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x469 = INT32_MIN;
	int16_t x471 = -1;
	int64_t x472 = 38294490916396697LL;
	volatile int64_t t113 = -5248027021LL;

    t113 = ((x469|x470)|(x471%x472));

    if (t113 != -1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x474 = INT16_MIN;
	int32_t x475 = -1;
	volatile int16_t x476 = INT16_MAX;
	static uint32_t t114 = UINT32_MAX;

    t114 = ((x473|x474)|(x475%x476));

    if (t114 != UINT32_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x477 = INT8_MIN;
	int16_t x478 = 0;
	int8_t x479 = 18;
	static int64_t x480 = INT64_MAX;
	static int64_t t115 = 480059902085176583LL;

    t115 = ((x477|x478)|(x479%x480));

    if (t115 != -110LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x485 = -1;
	uint64_t x486 = 5970138859124198731LLU;
	static int16_t x488 = 1;

    t116 = ((x485|x486)|(x487%x488));

    if (t116 != UINT64_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x490 = INT8_MAX;
	static uint8_t x492 = UINT8_MAX;
	int32_t t117 = 818091385;

    t117 = ((x489|x490)|(x491%x492));

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x494 = -16;
	int8_t x495 = 29;
	uint64_t x496 = UINT64_MAX;

    t118 = ((x493|x494)|(x495%x496));

    if (t118 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int32_t x498 = INT32_MIN;
	uint8_t x499 = UINT8_MAX;
	int32_t x500 = -1;
	int64_t t119 = -16LL;

    t119 = ((x497|x498)|(x499%x500));

    if (t119 != -31867LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x501 = UINT16_MAX;
	static volatile int32_t x504 = 8237;

    t120 = ((x501|x502)|(x503%x504));

    if (t120 != 65535U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x505 = INT32_MIN;
	static uint16_t x506 = UINT16_MAX;
	volatile uint8_t x507 = 1U;
	int32_t x508 = -1;
	int32_t t121 = -1404;

    t121 = ((x505|x506)|(x507%x508));

    if (t121 != -2147418113) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x509 = -1;
	int8_t x510 = -1;
	volatile int64_t x511 = INT64_MIN;
	volatile uint8_t x512 = 10U;
	int64_t t122 = -2LL;

    t122 = ((x509|x510)|(x511%x512));

    if (t122 != -1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x514 = 54;
	uint64_t x515 = 228112655062LLU;
	uint8_t x516 = 30U;
	volatile uint64_t t123 = 25623564804LLU;

    t123 = ((x513|x514)|(x515%x516));

    if (t123 != 255LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x517 = 3U;
	int32_t x518 = -1;
	static uint64_t x520 = 245320679LLU;
	volatile uint64_t t124 = UINT64_MAX;

    t124 = ((x517|x518)|(x519%x520));

    if (t124 != UINT64_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x522 = INT64_MAX;
	uint16_t x523 = 405U;
	volatile int64_t t125 = 188412433LL;

    t125 = ((x521|x522)|(x523%x524));

    if (t125 != -1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x525 = -1LL;
	volatile uint16_t x526 = UINT16_MAX;
	int8_t x527 = -1;
	int16_t x528 = INT16_MIN;
	int64_t t126 = -31LL;

    t126 = ((x525|x526)|(x527%x528));

    if (t126 != -1LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint16_t x529 = 887U;
	volatile int16_t x530 = INT16_MIN;
	int64_t x531 = -3LL;
	volatile int64_t t127 = 1LL;

    t127 = ((x529|x530)|(x531%x532));

    if (t127 != -31881LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x533 = INT16_MAX;
	static volatile int32_t x534 = -1;
	int32_t x535 = -1;
	int8_t x536 = INT8_MAX;
	volatile int32_t t128 = 720367326;

    t128 = ((x533|x534)|(x535%x536));

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile uint16_t x541 = 22U;
	volatile int16_t x543 = -1;
	volatile int32_t x544 = 813;
	volatile int32_t t129 = 460580588;

    t129 = ((x541|x542)|(x543%x544));

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x545 = UINT32_MAX;
	int16_t x546 = 149;
	int8_t x547 = INT8_MIN;
	int32_t x548 = 3;
	volatile uint32_t t130 = UINT32_MAX;

    t130 = ((x545|x546)|(x547%x548));

    if (t130 != UINT32_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x550 = INT32_MIN;
	static int32_t x551 = INT32_MIN;
	static uint32_t x552 = 111889U;
	uint32_t t131 = 268U;

    t131 = ((x549|x550)|(x551%x552));

    if (t131 != 4294946184U) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x557 = INT8_MIN;
	int8_t x558 = INT8_MAX;
	int8_t x559 = INT8_MIN;
	int64_t x560 = INT64_MIN;
	volatile int64_t t132 = -96383970874715920LL;

    t132 = ((x557|x558)|(x559%x560));

    if (t132 != -1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x561 = 14;
	static int16_t x562 = INT16_MAX;
	static int64_t t133 = -921605960442899LL;

    t133 = ((x561|x562)|(x563%x564));

    if (t133 != 32767LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x565 = -1;
	uint32_t x567 = 1U;
	uint32_t t134 = UINT32_MAX;

    t134 = ((x565|x566)|(x567%x568));

    if (t134 != UINT32_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x569 = 26;
	static int16_t x570 = -1356;
	uint32_t x571 = UINT32_MAX;
	int32_t x572 = INT32_MAX;

    t135 = ((x569|x570)|(x571%x572));

    if (t135 != 4294965951U) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint64_t x573 = 364920857274LLU;
	int64_t x574 = -1LL;
	int64_t x575 = -1LL;
	uint64_t x576 = 739LLU;
	volatile uint64_t t136 = UINT64_MAX;

    t136 = ((x573|x574)|(x575%x576));

    if (t136 != UINT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x577 = INT64_MIN;
	volatile int64_t x579 = -51LL;
	int64_t t137 = 5153915LL;

    t137 = ((x577|x578)|(x579%x580));

    if (t137 != -9223372036854775763LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x582 = UINT16_MAX;
	static volatile uint32_t x583 = 98366U;
	int8_t x584 = -1;
	volatile uint32_t t138 = UINT32_MAX;

    t138 = ((x581|x582)|(x583%x584));

    if (t138 != UINT32_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int8_t x587 = -19;
	int8_t x588 = INT8_MAX;
	int32_t t139 = 2079906;

    t139 = ((x585|x586)|(x587%x588));

    if (t139 != -19) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x593 = 1888845502LL;
	static int32_t x594 = -1;
	int32_t x595 = -1;
	int16_t x596 = INT16_MAX;

    t140 = ((x593|x594)|(x595%x596));

    if (t140 != -1LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x597 = UINT64_MAX;
	int8_t x599 = -1;
	volatile uint64_t t141 = UINT64_MAX;

    t141 = ((x597|x598)|(x599%x600));

    if (t141 != UINT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x601 = INT8_MIN;
	uint8_t x602 = UINT8_MAX;
	volatile int64_t x604 = -1LL;
	int64_t t142 = 260314011310813261LL;

    t142 = ((x601|x602)|(x603%x604));

    if (t142 != -1LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x605 = INT64_MIN;
	uint8_t x606 = 5U;
	volatile int64_t t143 = -141449077734868LL;

    t143 = ((x605|x606)|(x607%x608));

    if (t143 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x610 = INT16_MIN;
	int32_t x611 = INT32_MIN;
	int32_t x612 = -1;
	int32_t t144 = -1;

    t144 = ((x609|x610)|(x611%x612));

    if (t144 != -32768) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x613 = -1LL;
	uint64_t x614 = 171878LLU;
	uint16_t x615 = UINT16_MAX;

    t145 = ((x613|x614)|(x615%x616));

    if (t145 != UINT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x621 = INT16_MIN;
	static int8_t x622 = -3;
	static volatile int32_t x623 = INT32_MIN;

    t146 = ((x621|x622)|(x623%x624));

    if (t146 != -1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x625 = INT64_MAX;
	int64_t x627 = 118722792775LL;
	uint32_t x628 = 1615U;
	int64_t t147 = INT64_MAX;

    t147 = ((x625|x626)|(x627%x628));

    if (t147 != INT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x629 = 6103532203976LLU;
	static int64_t x631 = INT64_MAX;
	int8_t x632 = -1;

    t148 = ((x629|x630)|(x631%x632));

    if (t148 != 6103532208127LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x633 = INT16_MIN;
	int32_t x634 = INT32_MIN;
	int64_t x635 = INT64_MAX;
	int16_t x636 = INT16_MIN;
	volatile int64_t t149 = -492430657358940054LL;

    t149 = ((x633|x634)|(x635%x636));

    if (t149 != -1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x638 = 4U;
	int64_t x640 = 28621905834LL;
	volatile int64_t t150 = -427420099LL;

    t150 = ((x637|x638)|(x639%x640));

    if (t150 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x641 = 1545721993U;
	int16_t x643 = INT16_MIN;
	volatile int64_t t151 = -1LL;

    t151 = ((x641|x642)|(x643%x644));

    if (t151 != -81LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x647 = INT8_MIN;
	int8_t x648 = INT8_MIN;
	volatile int64_t t152 = 48407416717208LL;

    t152 = ((x645|x646)|(x647%x648));

    if (t152 != -1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x650 = -1LL;
	uint32_t x651 = 17U;
	uint64_t x652 = 1LLU;
	uint64_t t153 = UINT64_MAX;

    t153 = ((x649|x650)|(x651%x652));

    if (t153 != UINT64_MAX) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x653 = INT64_MIN;
	volatile uint64_t x654 = UINT64_MAX;
	int32_t x655 = 223219892;
	int8_t x656 = -1;
	volatile uint64_t t154 = UINT64_MAX;

    t154 = ((x653|x654)|(x655%x656));

    if (t154 != UINT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x657 = -1;
	uint16_t x658 = 11947U;
	int32_t x659 = INT32_MAX;
	static volatile uint16_t x660 = UINT16_MAX;
	static int32_t t155 = -1;

    t155 = ((x657|x658)|(x659%x660));

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x661 = 0U;
	static uint64_t x662 = UINT64_MAX;
	static uint16_t x663 = UINT16_MAX;

    t156 = ((x661|x662)|(x663%x664));

    if (t156 != UINT64_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int32_t x665 = -11;
	uint16_t x666 = 0U;
	volatile int64_t x667 = INT64_MAX;
	int16_t x668 = INT16_MIN;

    t157 = ((x665|x666)|(x667%x668));

    if (t157 != -1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x669 = -66733308;
	volatile int32_t x670 = INT32_MIN;
	volatile int64_t x671 = INT64_MIN;
	int64_t t158 = 2233828299754341LL;

    t158 = ((x669|x670)|(x671%x672));

    if (t158 != -1196LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x673 = -79;
	int32_t x674 = INT32_MIN;
	int16_t x675 = -202;
	int32_t x676 = 91362;

    t159 = ((x673|x674)|(x675%x676));

    if (t159 != -73) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x678 = UINT64_MAX;
	int32_t x679 = -88544067;
	uint8_t x680 = 9U;

    t160 = ((x677|x678)|(x679%x680));

    if (t160 != UINT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x681 = -1;
	volatile int32_t x682 = INT32_MAX;
	int8_t x683 = INT8_MIN;
	static int64_t x684 = 315009002240006067LL;
	int64_t t161 = 15612762419552LL;

    t161 = ((x681|x682)|(x683%x684));

    if (t161 != -1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x685 = -5899766;
	static int8_t x687 = 53;
	static volatile int16_t x688 = INT16_MIN;
	volatile int32_t t162 = 1;

    t162 = ((x685|x686)|(x687%x688));

    if (t162 != -5899649) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x689 = 11U;
	static uint16_t x691 = UINT16_MAX;
	volatile int32_t t163 = -15740236;

    t163 = ((x689|x690)|(x691%x692));

    if (t163 != 65535) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x693 = 28;
	volatile int16_t x694 = -3;
	int32_t x695 = 4;
	int16_t x696 = INT16_MIN;
	static volatile int32_t t164 = -54;

    t164 = ((x693|x694)|(x695%x696));

    if (t164 != -3) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x697 = 172U;
	volatile int64_t x698 = -1735643029407898209LL;
	int32_t x699 = -117;
	volatile uint64_t x700 = 2902905324LLU;
	uint64_t t165 = 4327685251283485LLU;

    t165 = ((x697|x698)|(x699%x700));

    if (t165 != 16711101044846978559LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x701 = -7;
	uint8_t x702 = 7U;
	int32_t t166 = -5448;

    t166 = ((x701|x702)|(x703%x704));

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x705 = INT8_MAX;
	int8_t x706 = 0;
	volatile int64_t x707 = 13922255LL;
	static int8_t x708 = 12;
	volatile int64_t t167 = 37586039LL;

    t167 = ((x705|x706)|(x707%x708));

    if (t167 != 127LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x709 = INT16_MAX;
	int8_t x710 = -1;
	static volatile uint16_t x712 = UINT16_MAX;
	int32_t t168 = -510677;

    t168 = ((x709|x710)|(x711%x712));

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x713 = UINT16_MAX;
	uint32_t x714 = UINT32_MAX;
	int8_t x715 = INT8_MAX;
	uint32_t t169 = UINT32_MAX;

    t169 = ((x713|x714)|(x715%x716));

    if (t169 != UINT32_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint32_t x718 = 12697674U;
	static uint64_t x719 = UINT64_MAX;
	int16_t x720 = INT16_MIN;
	uint64_t t170 = UINT64_MAX;

    t170 = ((x717|x718)|(x719%x720));

    if (t170 != UINT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint32_t x721 = 5007U;
	volatile int32_t x723 = INT32_MIN;
	volatile int64_t x724 = INT64_MIN;
	volatile int64_t t171 = 3LL;

    t171 = ((x721|x722)|(x723%x724));

    if (t171 != -33LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x725 = INT32_MAX;
	volatile uint8_t x727 = UINT8_MAX;
	int64_t x728 = -2LL;
	volatile int64_t t172 = 1112540043967224371LL;

    t172 = ((x725|x726)|(x727%x728));

    if (t172 != -1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint32_t x729 = 5U;
	int16_t x731 = INT16_MIN;
	volatile uint16_t x732 = UINT16_MAX;
	uint64_t t173 = 91083576726333408LLU;

    t173 = ((x729|x730)|(x731%x732));

    if (t173 != 18446744073709541677LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x733 = 0;
	uint16_t x734 = 26U;
	uint64_t t174 = 500197809061146LLU;

    t174 = ((x733|x734)|(x735%x736));

    if (t174 != 51999578LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x738 = INT32_MIN;
	static int16_t x739 = INT16_MIN;
	volatile uint64_t t175 = UINT64_MAX;

    t175 = ((x737|x738)|(x739%x740));

    if (t175 != UINT64_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x741 = 1897LL;
	volatile uint64_t x742 = UINT64_MAX;
	volatile uint32_t x743 = 2004821U;

    t176 = ((x741|x742)|(x743%x744));

    if (t176 != UINT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x745 = INT64_MIN;
	uint16_t x746 = UINT16_MAX;
	volatile uint64_t t177 = 775123472121LLU;

    t177 = ((x745|x746)|(x747%x748));

    if (t177 != 9223379672571707391LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x754 = INT64_MIN;
	static int64_t x755 = INT64_MAX;
	int64_t x756 = INT64_MAX;
	volatile int64_t t178 = -29LL;

    t178 = ((x753|x754)|(x755%x756));

    if (t178 != -9223372036854775161LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x757 = -117;
	uint32_t x758 = UINT32_MAX;
	static uint64_t x759 = UINT64_MAX;
	int64_t x760 = INT64_MIN;

    t179 = ((x757|x758)|(x759%x760));

    if (t179 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x762 = INT64_MAX;
	int8_t x763 = INT8_MAX;
	static volatile int64_t t180 = -4778800LL;

    t180 = ((x761|x762)|(x763%x764));

    if (t180 != -1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x765 = 7740422799247107LL;
	int8_t x766 = -1;
	int64_t x767 = -252LL;
	int32_t x768 = -8379;
	static volatile int64_t t181 = -256469753374LL;

    t181 = ((x765|x766)|(x767%x768));

    if (t181 != -1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x770 = 5U;
	int64_t x771 = -1LL;
	static volatile uint16_t x772 = UINT16_MAX;
	volatile int64_t t182 = -2178091378193728735LL;

    t182 = ((x769|x770)|(x771%x772));

    if (t182 != -1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x774 = UINT8_MAX;
	volatile int32_t t183 = 5;

    t183 = ((x773|x774)|(x775%x776));

    if (t183 != 511) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x777 = -1;
	int16_t x778 = -1;
	int32_t x779 = INT32_MIN;
	uint32_t x780 = UINT32_MAX;
	uint32_t t184 = UINT32_MAX;

    t184 = ((x777|x778)|(x779%x780));

    if (t184 != UINT32_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x781 = INT32_MIN;
	static uint64_t x782 = UINT64_MAX;
	int64_t x783 = INT64_MAX;
	int16_t x784 = -1;
	uint64_t t185 = UINT64_MAX;

    t185 = ((x781|x782)|(x783%x784));

    if (t185 != UINT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x785 = -63224;
	int8_t x786 = INT8_MIN;
	int8_t x787 = INT8_MIN;
	int32_t t186 = -5329505;

    t186 = ((x785|x786)|(x787%x788));

    if (t186 != -1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x793 = 0;
	int8_t x794 = INT8_MAX;
	int32_t x795 = INT32_MAX;
	volatile uint8_t x796 = 31U;
	static volatile int32_t t187 = -81;

    t187 = ((x793|x794)|(x795%x796));

    if (t187 != 127) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x797 = 51U;
	int64_t x798 = INT64_MIN;
	int8_t x799 = 4;
	uint16_t x800 = UINT16_MAX;

    t188 = ((x797|x798)|(x799%x800));

    if (t188 != -9223372036854775753LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint64_t x802 = 629316041653237384LLU;
	uint32_t x803 = 30488472U;
	uint64_t x804 = 5904157817452LLU;
	volatile uint64_t t189 = 1780LLU;

    t189 = ((x801|x802)|(x803%x804));

    if (t189 != 9852688078537439128LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x805 = INT8_MAX;
	uint32_t x806 = UINT32_MAX;
	uint16_t x807 = 97U;
	volatile int16_t x808 = -1;
	uint32_t t190 = UINT32_MAX;

    t190 = ((x805|x806)|(x807%x808));

    if (t190 != UINT32_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x809 = -1;
	int32_t x810 = INT32_MIN;
	volatile int64_t x811 = INT64_MAX;
	int8_t x812 = INT8_MIN;
	static int64_t t191 = -2758050LL;

    t191 = ((x809|x810)|(x811%x812));

    if (t191 != -1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x813 = INT16_MIN;
	int8_t x814 = 19;
	int32_t x815 = 54189431;
	static int32_t x816 = INT32_MIN;

    t192 = ((x813|x814)|(x815%x816));

    if (t192 != -8841) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x817 = 4LL;
	int16_t x818 = INT16_MIN;
	uint32_t x820 = 1677U;
	int64_t t193 = -131766570705540983LL;

    t193 = ((x817|x818)|(x819%x820));

    if (t193 != -32513LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x822 = 951U;
	int16_t x823 = -1;
	int32_t x824 = -6092;
	static int32_t t194 = -127280543;

    t194 = ((x821|x822)|(x823%x824));

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x825 = -1LL;
	volatile uint8_t x828 = UINT8_MAX;
	int64_t t195 = -1531696589213LL;

    t195 = ((x825|x826)|(x827%x828));

    if (t195 != -1LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x829 = INT16_MIN;
	volatile uint64_t x830 = UINT64_MAX;
	uint16_t x831 = 207U;
	volatile int32_t x832 = INT32_MIN;
	uint64_t t196 = UINT64_MAX;

    t196 = ((x829|x830)|(x831%x832));

    if (t196 != UINT64_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x833 = INT64_MIN;
	int32_t x834 = INT32_MAX;
	uint64_t x835 = UINT64_MAX;
	uint64_t x836 = UINT64_MAX;
	uint64_t t197 = 121839843434075LLU;

    t197 = ((x833|x834)|(x835%x836));

    if (t197 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x837 = 2;
	int16_t x839 = INT16_MAX;
	volatile int32_t t198 = -461395413;

    t198 = ((x837|x838)|(x839%x840));

    if (t198 != 32767) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x845 = -1;
	volatile uint32_t x846 = 457370950U;
	int64_t x847 = -1LL;
	static int8_t x848 = -1;
	int64_t t199 = 39LL;

    t199 = ((x845|x846)|(x847%x848));

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

