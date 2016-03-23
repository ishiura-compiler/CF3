
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

static int16_t x1 = INT16_MIN;
uint32_t x2 = 25U;
static int64_t x5 = -1347LL;
int32_t x7 = -81725;
int32_t x8 = INT32_MAX;
uint16_t x22 = UINT16_MAX;
int64_t x29 = INT64_MAX;
uint64_t x34 = 5919091042478LLU;
int16_t x42 = INT16_MAX;
volatile int32_t t11 = 24601;
static volatile int16_t x55 = -52;
int64_t x56 = INT64_MAX;
uint64_t x58 = 29211625LLU;
int64_t x62 = INT64_MAX;
static int32_t x65 = 788694;
volatile int64_t x71 = -1LL;
uint64_t x80 = UINT64_MAX;
int64_t x84 = INT64_MIN;
int64_t x91 = INT64_MIN;
int32_t t22 = -5;
volatile int8_t x93 = -1;
int64_t t23 = -74437512878735LL;
uint8_t x102 = UINT8_MAX;
volatile int16_t x109 = INT16_MIN;
int32_t x118 = -617372;
uint16_t x122 = UINT16_MAX;
int8_t x151 = -1;
volatile int64_t x156 = INT64_MIN;
int64_t t38 = 819152LL;
int8_t x157 = 0;
uint32_t t41 = 369994127U;
int64_t x177 = INT64_MIN;
static volatile uint64_t x179 = 14620LLU;
volatile int32_t t44 = 0;
static uint32_t x181 = 234U;
static uint64_t x193 = 157703257LLU;
uint16_t x194 = 39U;
uint32_t x198 = UINT32_MAX;
volatile int32_t t49 = -339432146;
static volatile int32_t t51 = -6350;
volatile uint32_t t53 = 2295407U;
static volatile int8_t x223 = -1;
uint8_t x227 = UINT8_MAX;
int16_t x229 = 15282;
static int32_t x235 = -2198038;
uint64_t x241 = 361138885722LLU;
int16_t x244 = -1;
volatile int8_t x245 = INT8_MIN;
volatile int32_t t65 = 6708727;
volatile int32_t x265 = INT32_MIN;
volatile int16_t x270 = 1;
static int16_t x271 = INT16_MIN;
volatile int64_t x280 = 60346035368861LL;
int8_t x286 = INT8_MAX;
int8_t x291 = 14;
uint32_t t72 = 829U;
static uint32_t x301 = 433430U;
int64_t x304 = -1238521539391193LL;
static int16_t x307 = INT16_MAX;
int32_t x310 = INT32_MIN;
volatile uint64_t t79 = 1203898267217650LLU;
static uint8_t x323 = 1U;
static int32_t x332 = -1;
int64_t x333 = INT64_MIN;
volatile int32_t t83 = 19373;
uint64_t x337 = 619LLU;
int64_t x354 = -6LL;
volatile int32_t x359 = INT32_MIN;
volatile int32_t t89 = -357252;
volatile int32_t x361 = -1;
uint16_t x368 = 1U;
int32_t t96 = 25;
int8_t x389 = INT8_MIN;
volatile int8_t x391 = INT8_MIN;
static int32_t x396 = -31;
static int64_t x400 = -1LL;
int32_t x402 = INT32_MAX;
int64_t x405 = 16867743338137892LL;
static volatile int32_t t101 = -32;
int8_t x419 = INT8_MIN;
int32_t x420 = INT32_MAX;
int32_t x424 = -362184;
volatile int64_t x427 = INT64_MIN;
int32_t x430 = 10;
static uint32_t x433 = 26574648U;
int8_t x436 = INT8_MIN;
uint32_t x437 = 84524U;
uint64_t x447 = 3188LLU;
int16_t x453 = INT16_MIN;
uint8_t x455 = 1U;
static int32_t t113 = -3634;
volatile int64_t x457 = INT64_MAX;
int32_t x460 = INT32_MIN;
int16_t x461 = -1;
static int16_t x467 = -1;
volatile uint8_t x480 = 0U;
int16_t x484 = -1;
volatile int32_t t122 = 32;
uint32_t x500 = 26U;
int64_t x503 = INT64_MIN;
int8_t x505 = 2;
int32_t t126 = 99;
static uint8_t x522 = UINT8_MAX;
uint64_t t130 = 6430268LLU;
int64_t x525 = 336229503799LL;
int32_t x527 = 221742;
uint32_t x532 = 92632587U;
volatile int32_t t133 = -4030853;
static volatile int16_t x538 = INT16_MIN;
volatile int32_t x543 = -4613390;
static int64_t x549 = INT64_MAX;
static uint64_t x555 = UINT64_MAX;
volatile int8_t x566 = -2;
int64_t t141 = 6313LL;
volatile int64_t x578 = 61643386549LL;
int32_t x579 = -1;
static uint16_t x583 = 511U;
volatile int32_t t145 = -5;
static int8_t x585 = -1;
static volatile int64_t x588 = 11LL;
volatile int64_t x592 = 2LL;
volatile int64_t t147 = -278948LL;
uint32_t x594 = 4U;
int8_t x595 = INT8_MIN;
int32_t x598 = INT32_MIN;
int32_t x600 = 6344;
uint8_t x601 = 15U;
int32_t t150 = -459703284;
uint8_t x606 = 124U;
int32_t t151 = -261;
uint8_t x613 = 14U;
static int32_t t153 = 0;
int8_t x618 = INT8_MIN;
int16_t x628 = -991;
volatile uint32_t x634 = UINT32_MAX;
static int16_t x635 = INT16_MIN;
volatile uint64_t x636 = UINT64_MAX;
int16_t x638 = INT16_MIN;
uint32_t x645 = 1U;
int16_t x651 = INT16_MAX;
volatile int64_t x658 = INT64_MAX;
int16_t x664 = INT16_MAX;
volatile int32_t t165 = -27086485;
volatile int64_t t166 = -68207227070LL;
uint32_t x669 = 1U;
volatile int64_t x675 = INT64_MIN;
static volatile int8_t x676 = -1;
volatile int64_t x679 = -221LL;
uint16_t x680 = 13U;
static int64_t x683 = -73053LL;
static volatile uint8_t x689 = 112U;
static int16_t x690 = INT16_MAX;
int8_t x691 = INT8_MIN;
static int32_t x695 = INT32_MAX;
volatile int32_t t173 = -103;
static int32_t x706 = INT32_MIN;
volatile int32_t t176 = 1;
uint64_t x716 = 131954274251955LLU;
int16_t x717 = -504;
int32_t x721 = INT32_MIN;
uint8_t x724 = 1U;
int8_t x726 = INT8_MIN;
int64_t x728 = INT64_MIN;
int32_t x729 = -6;
int32_t x735 = -102;
int64_t x737 = INT64_MIN;
volatile uint8_t x740 = 13U;
volatile int32_t t188 = -972259380;
uint64_t x760 = 0LLU;
int16_t x763 = -1;
static int64_t x774 = INT64_MIN;
uint8_t x777 = 6U;
volatile int32_t x781 = 5;
int8_t x788 = -1;
int32_t t198 = 1;
static int32_t x799 = 11838836;
int16_t x800 = -1;


void f0(void) {
    	uint64_t x3 = 149449438266731433LLU;
	int16_t x4 = INT16_MAX;
	int32_t t0 = 94193535;

    t0 = (((x1|x2)!=x3)^x4);

    if (t0 != 32766) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint32_t x6 = 271033U;
	int32_t t1 = -4011;

    t1 = (((x5|x6)!=x7)^x8);

    if (t1 != 2147483646) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x9 = INT16_MAX;
	volatile uint16_t x10 = 5U;
	static int8_t x11 = -1;
	int16_t x12 = INT16_MIN;
	static int32_t t2 = 55318;

    t2 = (((x9|x10)!=x11)^x12);

    if (t2 != -32767) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x13 = INT64_MIN;
	uint16_t x14 = UINT16_MAX;
	int16_t x15 = 0;
	int32_t x16 = INT32_MIN;
	static volatile int32_t t3 = 433608;

    t3 = (((x13|x14)!=x15)^x16);

    if (t3 != -2147483647) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MIN;
	volatile uint8_t x18 = 5U;
	static volatile int8_t x19 = INT8_MIN;
	static uint16_t x20 = 199U;
	volatile int32_t t4 = 5;

    t4 = (((x17|x18)!=x19)^x20);

    if (t4 != 198) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MAX;
	volatile uint16_t x23 = 372U;
	volatile uint16_t x24 = UINT16_MAX;
	int32_t t5 = -75308333;

    t5 = (((x21|x22)!=x23)^x24);

    if (t5 != 65534) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x25 = INT8_MIN;
	int64_t x26 = -1LL;
	int16_t x27 = 534;
	static uint32_t x28 = UINT32_MAX;
	uint32_t t6 = 1583U;

    t6 = (((x25|x26)!=x27)^x28);

    if (t6 != 4294967294U) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x30 = -1;
	static uint16_t x31 = UINT16_MAX;
	int64_t x32 = INT64_MIN;
	volatile int64_t t7 = 1834225LL;

    t7 = (((x29|x30)!=x31)^x32);

    if (t7 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = -1;
	int8_t x35 = -15;
	uint16_t x36 = 93U;
	volatile int32_t t8 = -69663;

    t8 = (((x33|x34)!=x35)^x36);

    if (t8 != 92) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x37 = 43346LLU;
	uint32_t x38 = 454U;
	uint16_t x39 = 79U;
	static volatile int8_t x40 = INT8_MAX;
	static volatile int32_t t9 = 144;

    t9 = (((x37|x38)!=x39)^x40);

    if (t9 != 126) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = -1;
	volatile int32_t x43 = 245905050;
	uint32_t x44 = 119925U;
	volatile uint32_t t10 = 7808536U;

    t10 = (((x41|x42)!=x43)^x44);

    if (t10 != 119924U) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = 142219244LL;
	int64_t x46 = 8LL;
	volatile int32_t x47 = INT32_MIN;
	volatile int16_t x48 = -1;

    t11 = (((x45|x46)!=x47)^x48);

    if (t11 != -2) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x49 = 229357641U;
	int16_t x50 = INT16_MAX;
	uint16_t x51 = UINT16_MAX;
	volatile uint8_t x52 = 0U;
	int32_t t12 = -551;

    t12 = (((x49|x50)!=x51)^x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MAX;
	uint16_t x54 = UINT16_MAX;
	volatile int64_t t13 = -275304924LL;

    t13 = (((x53|x54)!=x55)^x56);

    if (t13 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint64_t x57 = UINT64_MAX;
	int64_t x59 = INT64_MIN;
	int64_t x60 = -125134541697776LL;
	static volatile int64_t t14 = 2974642795LL;

    t14 = (((x57|x58)!=x59)^x60);

    if (t14 != -125134541697775LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = 96U;
	int8_t x63 = -1;
	uint64_t x64 = 1090LLU;
	volatile uint64_t t15 = 1796176LLU;

    t15 = (((x61|x62)!=x63)^x64);

    if (t15 != 1091LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint32_t x66 = 3826462U;
	uint32_t x67 = 979532U;
	int8_t x68 = INT8_MIN;
	int32_t t16 = -789726;

    t16 = (((x65|x66)!=x67)^x68);

    if (t16 != -127) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x69 = INT8_MAX;
	int64_t x70 = INT64_MIN;
	static int32_t x72 = INT32_MAX;
	int32_t t17 = 530361651;

    t17 = (((x69|x70)!=x71)^x72);

    if (t17 != 2147483646) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int64_t x73 = -1LL;
	static volatile int32_t x74 = INT32_MAX;
	volatile int64_t x75 = INT64_MIN;
	static int32_t x76 = -3795065;
	int32_t t18 = 3764005;

    t18 = (((x73|x74)!=x75)^x76);

    if (t18 != -3795066) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = 819955554728725LLU;
	int64_t x78 = INT64_MIN;
	int16_t x79 = INT16_MIN;
	static uint64_t t19 = 17917743707693142LLU;

    t19 = (((x77|x78)!=x79)^x80);

    if (t19 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MAX;
	static uint8_t x82 = 48U;
	volatile int32_t x83 = -1;
	volatile int64_t t20 = -981LL;

    t20 = (((x81|x82)!=x83)^x84);

    if (t20 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = INT32_MIN;
	volatile int8_t x86 = -2;
	int64_t x87 = 246LL;
	volatile uint16_t x88 = 3U;
	int32_t t21 = 20261264;

    t21 = (((x85|x86)!=x87)^x88);

    if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = -42;
	static uint32_t x90 = 234851280U;
	volatile uint8_t x92 = UINT8_MAX;

    t22 = (((x89|x90)!=x91)^x92);

    if (t22 != 254) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x94 = INT16_MIN;
	uint64_t x95 = 20388489838749LLU;
	static int64_t x96 = INT64_MIN;

    t23 = (((x93|x94)!=x95)^x96);

    if (t23 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = INT64_MAX;
	uint8_t x98 = 9U;
	int16_t x99 = INT16_MIN;
	static int64_t x100 = INT64_MIN;
	int64_t t24 = 3417594483561540LL;

    t24 = (((x97|x98)!=x99)^x100);

    if (t24 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x101 = UINT8_MAX;
	volatile int64_t x103 = -3573845LL;
	int16_t x104 = 1;
	static int32_t t25 = 116131830;

    t25 = (((x101|x102)!=x103)^x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x105 = INT64_MAX;
	volatile uint8_t x106 = 11U;
	int16_t x107 = INT16_MAX;
	uint16_t x108 = 4U;
	volatile int32_t t26 = -4;

    t26 = (((x105|x106)!=x107)^x108);

    if (t26 != 5) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x110 = 113;
	int32_t x111 = 61862139;
	int8_t x112 = INT8_MAX;
	volatile int32_t t27 = -77084;

    t27 = (((x109|x110)!=x111)^x112);

    if (t27 != 126) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = INT16_MIN;
	int32_t x114 = INT32_MIN;
	int8_t x115 = INT8_MIN;
	int32_t x116 = INT32_MAX;
	volatile int32_t t28 = -11561;

    t28 = (((x113|x114)!=x115)^x116);

    if (t28 != 2147483646) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MIN;
	volatile uint32_t x119 = 3064U;
	uint16_t x120 = 15821U;
	volatile int32_t t29 = -105565;

    t29 = (((x117|x118)!=x119)^x120);

    if (t29 != 15820) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x121 = INT64_MIN;
	uint64_t x123 = 9324311583653LLU;
	static volatile int64_t x124 = -1LL;
	int64_t t30 = 3345627406371924673LL;

    t30 = (((x121|x122)!=x123)^x124);

    if (t30 != -2LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = -1;
	int32_t x126 = -1195;
	static int16_t x127 = -13012;
	uint16_t x128 = UINT16_MAX;
	volatile int32_t t31 = -87053;

    t31 = (((x125|x126)!=x127)^x128);

    if (t31 != 65534) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x129 = 34081202379LLU;
	uint64_t x130 = 135692090548895715LLU;
	volatile int64_t x131 = INT64_MIN;
	static volatile int8_t x132 = INT8_MAX;
	static volatile int32_t t32 = -242329;

    t32 = (((x129|x130)!=x131)^x132);

    if (t32 != 126) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MAX;
	int32_t x134 = INT32_MAX;
	static int8_t x135 = 3;
	static uint32_t x136 = UINT32_MAX;
	volatile uint32_t t33 = 18U;

    t33 = (((x133|x134)!=x135)^x136);

    if (t33 != 4294967294U) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = INT64_MIN;
	int8_t x138 = INT8_MIN;
	static uint32_t x139 = UINT32_MAX;
	uint64_t x140 = UINT64_MAX;
	uint64_t t34 = 13881547526LLU;

    t34 = (((x137|x138)!=x139)^x140);

    if (t34 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x141 = -189998359674721LL;
	volatile int16_t x142 = INT16_MIN;
	int64_t x143 = INT64_MAX;
	int32_t x144 = INT32_MIN;
	int32_t t35 = 2292;

    t35 = (((x141|x142)!=x143)^x144);

    if (t35 != -2147483647) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x145 = UINT64_MAX;
	int16_t x146 = 10095;
	static int64_t x147 = INT64_MIN;
	int64_t x148 = INT64_MIN;
	static int64_t t36 = -979058LL;

    t36 = (((x145|x146)!=x147)^x148);

    if (t36 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x149 = 0U;
	static int8_t x150 = -14;
	uint16_t x152 = 2886U;
	int32_t t37 = 2;

    t37 = (((x149|x150)!=x151)^x152);

    if (t37 != 2887) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = -3;
	static uint64_t x154 = 61LLU;
	int8_t x155 = -1;

    t38 = (((x153|x154)!=x155)^x156);

    if (t38 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x158 = UINT32_MAX;
	static volatile uint8_t x159 = UINT8_MAX;
	static volatile int16_t x160 = -415;
	int32_t t39 = 45;

    t39 = (((x157|x158)!=x159)^x160);

    if (t39 != -416) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x161 = INT8_MAX;
	uint8_t x162 = UINT8_MAX;
	static int32_t x163 = INT32_MIN;
	uint64_t x164 = UINT64_MAX;
	volatile uint64_t t40 = 1492605LLU;

    t40 = (((x161|x162)!=x163)^x164);

    if (t40 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = -1;
	uint64_t x166 = UINT64_MAX;
	int16_t x167 = 5490;
	static volatile uint32_t x168 = UINT32_MAX;

    t41 = (((x165|x166)!=x167)^x168);

    if (t41 != 4294967294U) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MAX;
	int64_t x170 = -10164102282426830LL;
	uint16_t x171 = 928U;
	static volatile int16_t x172 = INT16_MAX;
	volatile int32_t t42 = 5;

    t42 = (((x169|x170)!=x171)^x172);

    if (t42 != 32766) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x173 = UINT8_MAX;
	uint64_t x174 = UINT64_MAX;
	int8_t x175 = INT8_MIN;
	int32_t x176 = 24;
	volatile int32_t t43 = 1;

    t43 = (((x173|x174)!=x175)^x176);

    if (t43 != 25) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x178 = -1LL;
	int32_t x180 = INT32_MIN;

    t44 = (((x177|x178)!=x179)^x180);

    if (t44 != -2147483647) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x182 = -107LL;
	int16_t x183 = INT16_MAX;
	uint32_t x184 = 1060995U;
	uint32_t t45 = 359871U;

    t45 = (((x181|x182)!=x183)^x184);

    if (t45 != 1060994U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x185 = 1986048289U;
	int64_t x186 = -1381003LL;
	int32_t x187 = -1825;
	uint64_t x188 = 3622361LLU;
	uint64_t t46 = 4868746649623911LLU;

    t46 = (((x185|x186)!=x187)^x188);

    if (t46 != 3622360LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = INT32_MIN;
	static volatile int16_t x190 = INT16_MAX;
	int16_t x191 = 1;
	volatile uint64_t x192 = UINT64_MAX;
	uint64_t t47 = 6308448412344618LLU;

    t47 = (((x189|x190)!=x191)^x192);

    if (t47 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x195 = -1LL;
	volatile int32_t x196 = INT32_MAX;
	int32_t t48 = 1;

    t48 = (((x193|x194)!=x195)^x196);

    if (t48 != 2147483646) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = -2907;
	int8_t x199 = INT8_MIN;
	int8_t x200 = 1;

    t49 = (((x197|x198)!=x199)^x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x201 = -1LL;
	int16_t x202 = INT16_MIN;
	int8_t x203 = INT8_MIN;
	int16_t x204 = -1;
	int32_t t50 = 35;

    t50 = (((x201|x202)!=x203)^x204);

    if (t50 != -2) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x205 = INT16_MIN;
	static int64_t x206 = INT64_MIN;
	uint32_t x207 = UINT32_MAX;
	int32_t x208 = INT32_MAX;

    t51 = (((x205|x206)!=x207)^x208);

    if (t51 != 2147483646) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = 8263443;
	volatile int16_t x210 = INT16_MIN;
	int16_t x211 = -1;
	uint32_t x212 = 976809U;
	uint32_t t52 = 2695U;

    t52 = (((x209|x210)!=x211)^x212);

    if (t52 != 976808U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x213 = 20LLU;
	int16_t x214 = 379;
	int64_t x215 = -1LL;
	static uint32_t x216 = 6U;

    t53 = (((x213|x214)!=x215)^x216);

    if (t53 != 7U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = 11U;
	uint8_t x218 = 6U;
	int64_t x219 = -1LL;
	int64_t x220 = INT64_MAX;
	volatile int64_t t54 = 20706LL;

    t54 = (((x217|x218)!=x219)^x220);

    if (t54 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = -1;
	uint32_t x222 = 4849398U;
	uint32_t x224 = 2003U;
	uint32_t t55 = 448294381U;

    t55 = (((x221|x222)!=x223)^x224);

    if (t55 != 2003U) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = 1283;
	int8_t x226 = -1;
	int32_t x228 = -1;
	int32_t t56 = -1763760;

    t56 = (((x225|x226)!=x227)^x228);

    if (t56 != -2) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint16_t x230 = 25U;
	int64_t x231 = INT64_MIN;
	int16_t x232 = INT16_MIN;
	int32_t t57 = -18;

    t57 = (((x229|x230)!=x231)^x232);

    if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x233 = -1;
	volatile int8_t x234 = INT8_MIN;
	int8_t x236 = 0;
	volatile int32_t t58 = 0;

    t58 = (((x233|x234)!=x235)^x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = INT32_MIN;
	uint16_t x238 = 1311U;
	static volatile uint16_t x239 = 2410U;
	int16_t x240 = INT16_MIN;
	int32_t t59 = 281944932;

    t59 = (((x237|x238)!=x239)^x240);

    if (t59 != -32767) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x242 = 57589U;
	uint32_t x243 = 4U;
	static int32_t t60 = -793678764;

    t60 = (((x241|x242)!=x243)^x244);

    if (t60 != -2) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x246 = -11;
	uint8_t x247 = 4U;
	uint16_t x248 = UINT16_MAX;
	int32_t t61 = -90;

    t61 = (((x245|x246)!=x247)^x248);

    if (t61 != 65534) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x249 = -1;
	int16_t x250 = INT16_MAX;
	volatile int16_t x251 = 28;
	static uint64_t x252 = 109148851556905LLU;
	volatile uint64_t t62 = 3267462831488LLU;

    t62 = (((x249|x250)!=x251)^x252);

    if (t62 != 109148851556904LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x253 = 18714884359734LLU;
	int8_t x254 = -1;
	int64_t x255 = INT64_MIN;
	int32_t x256 = 529943;
	volatile int32_t t63 = -507572;

    t63 = (((x253|x254)!=x255)^x256);

    if (t63 != 529942) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x257 = INT8_MIN;
	static int8_t x258 = INT8_MIN;
	int32_t x259 = 635;
	volatile int32_t x260 = INT32_MIN;
	static int32_t t64 = 2544579;

    t64 = (((x257|x258)!=x259)^x260);

    if (t64 != -2147483647) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x261 = 8453298;
	int16_t x262 = INT16_MAX;
	volatile int16_t x263 = 6;
	volatile int32_t x264 = INT32_MAX;

    t65 = (((x261|x262)!=x263)^x264);

    if (t65 != 2147483646) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x266 = 51U;
	int16_t x267 = INT16_MIN;
	int16_t x268 = -1;
	int32_t t66 = 2;

    t66 = (((x265|x266)!=x267)^x268);

    if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = -1LL;
	volatile int8_t x272 = 51;
	int32_t t67 = 25087;

    t67 = (((x269|x270)!=x271)^x272);

    if (t67 != 50) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = 277034512477976689LL;
	volatile int64_t x274 = INT64_MIN;
	volatile uint64_t x275 = 8150361879878031LLU;
	int8_t x276 = INT8_MIN;
	static volatile int32_t t68 = -1851;

    t68 = (((x273|x274)!=x275)^x276);

    if (t68 != -127) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x277 = 113U;
	int64_t x278 = INT64_MAX;
	int8_t x279 = INT8_MAX;
	int64_t t69 = 13293702053869970LL;

    t69 = (((x277|x278)!=x279)^x280);

    if (t69 != 60346035368860LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int8_t x281 = 13;
	volatile int8_t x282 = -4;
	int8_t x283 = INT8_MIN;
	int64_t x284 = -368263254145876LL;
	int64_t t70 = 4199LL;

    t70 = (((x281|x282)!=x283)^x284);

    if (t70 != -368263254145875LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint32_t x285 = 645597U;
	static int8_t x287 = 1;
	static volatile int64_t x288 = 11858588759LL;
	volatile int64_t t71 = 2701203628LL;

    t71 = (((x285|x286)!=x287)^x288);

    if (t71 != 11858588758LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x289 = UINT32_MAX;
	static uint16_t x290 = 84U;
	static uint32_t x292 = 117973U;

    t72 = (((x289|x290)!=x291)^x292);

    if (t72 != 117972U) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x293 = -212205LL;
	int64_t x294 = INT64_MIN;
	static int16_t x295 = 593;
	uint8_t x296 = UINT8_MAX;
	volatile int32_t t73 = 407;

    t73 = (((x293|x294)!=x295)^x296);

    if (t73 != 254) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x297 = -45798150LL;
	int64_t x298 = -24LL;
	int8_t x299 = 1;
	int16_t x300 = 0;
	volatile int32_t t74 = 1;

    t74 = (((x297|x298)!=x299)^x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x302 = UINT64_MAX;
	volatile int8_t x303 = 11;
	int64_t t75 = 12LL;

    t75 = (((x301|x302)!=x303)^x304);

    if (t75 != -1238521539391194LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = -1LL;
	static uint8_t x306 = 6U;
	volatile int16_t x308 = INT16_MIN;
	int32_t t76 = -66742172;

    t76 = (((x305|x306)!=x307)^x308);

    if (t76 != -32767) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x309 = 9491LLU;
	uint16_t x311 = UINT16_MAX;
	static volatile uint32_t x312 = UINT32_MAX;
	static uint32_t t77 = 1538950U;

    t77 = (((x309|x310)!=x311)^x312);

    if (t77 != 4294967294U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x313 = 65LLU;
	static volatile int64_t x314 = 15819998005974LL;
	volatile int16_t x315 = INT16_MIN;
	int64_t x316 = INT64_MAX;
	volatile int64_t t78 = -760480963313388LL;

    t78 = (((x313|x314)!=x315)^x316);

    if (t78 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x317 = -1;
	int16_t x318 = INT16_MIN;
	int16_t x319 = INT16_MAX;
	uint64_t x320 = UINT64_MAX;

    t79 = (((x317|x318)!=x319)^x320);

    if (t79 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x321 = 396351865088LL;
	int16_t x322 = -1;
	volatile int32_t x324 = INT32_MAX;
	static int32_t t80 = -464329;

    t80 = (((x321|x322)!=x323)^x324);

    if (t80 != 2147483646) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x325 = UINT8_MAX;
	int32_t x326 = INT32_MIN;
	static int8_t x327 = INT8_MAX;
	int32_t x328 = -5;
	volatile int32_t t81 = 23013087;

    t81 = (((x325|x326)!=x327)^x328);

    if (t81 != -6) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = INT16_MAX;
	int8_t x330 = INT8_MIN;
	int8_t x331 = -1;
	static volatile int32_t t82 = -69500;

    t82 = (((x329|x330)!=x331)^x332);

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x334 = -823596;
	static int64_t x335 = INT64_MIN;
	static int16_t x336 = INT16_MIN;

    t83 = (((x333|x334)!=x335)^x336);

    if (t83 != -32767) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x338 = INT32_MIN;
	static uint64_t x339 = 45470600539336068LLU;
	int8_t x340 = INT8_MIN;
	volatile int32_t t84 = -742730;

    t84 = (((x337|x338)!=x339)^x340);

    if (t84 != -127) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x341 = 67035LLU;
	uint8_t x342 = 14U;
	uint32_t x343 = 341110072U;
	int32_t x344 = -9748088;
	int32_t t85 = -17921628;

    t85 = (((x341|x342)!=x343)^x344);

    if (t85 != -9748087) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x345 = UINT64_MAX;
	int16_t x346 = 231;
	int8_t x347 = 0;
	static uint32_t x348 = 789U;
	volatile uint32_t t86 = 7827U;

    t86 = (((x345|x346)!=x347)^x348);

    if (t86 != 788U) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = -1;
	int32_t x350 = 0;
	static int64_t x351 = -157LL;
	uint8_t x352 = 0U;
	int32_t t87 = -42;

    t87 = (((x349|x350)!=x351)^x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x353 = 1U;
	int32_t x355 = INT32_MIN;
	int32_t x356 = -245478;
	static volatile int32_t t88 = 13162001;

    t88 = (((x353|x354)!=x355)^x356);

    if (t88 != -245477) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = INT16_MIN;
	static volatile int64_t x358 = -1LL;
	static int16_t x360 = INT16_MIN;

    t89 = (((x357|x358)!=x359)^x360);

    if (t89 != -32767) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x362 = INT16_MIN;
	static int64_t x363 = INT64_MIN;
	volatile int64_t x364 = -202575794LL;
	int64_t t90 = -2LL;

    t90 = (((x361|x362)!=x363)^x364);

    if (t90 != -202575793LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = INT8_MAX;
	static int32_t x366 = INT32_MIN;
	static uint16_t x367 = 1660U;
	int32_t t91 = 649801940;

    t91 = (((x365|x366)!=x367)^x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x369 = -1LL;
	uint16_t x370 = 1U;
	uint32_t x371 = UINT32_MAX;
	static int16_t x372 = INT16_MAX;
	volatile int32_t t92 = 457626732;

    t92 = (((x369|x370)!=x371)^x372);

    if (t92 != 32766) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x373 = -87194345LL;
	int32_t x374 = INT32_MIN;
	uint64_t x375 = 862960871115228496LLU;
	uint64_t x376 = UINT64_MAX;
	volatile uint64_t t93 = 4103765735034189LLU;

    t93 = (((x373|x374)!=x375)^x376);

    if (t93 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = 1002LL;
	int16_t x378 = INT16_MIN;
	int32_t x379 = INT32_MAX;
	uint16_t x380 = 1U;
	volatile int32_t t94 = -234220;

    t94 = (((x377|x378)!=x379)^x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x381 = INT64_MIN;
	int64_t x382 = -882205LL;
	static int32_t x383 = INT32_MIN;
	int16_t x384 = INT16_MAX;
	static int32_t t95 = 1;

    t95 = (((x381|x382)!=x383)^x384);

    if (t95 != 32766) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint32_t x385 = 13U;
	static int32_t x386 = -22926;
	uint8_t x387 = UINT8_MAX;
	int16_t x388 = 14;

    t96 = (((x385|x386)!=x387)^x388);

    if (t96 != 15) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x390 = 7000U;
	int8_t x392 = 59;
	volatile int32_t t97 = 20833436;

    t97 = (((x389|x390)!=x391)^x392);

    if (t97 != 58) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x393 = 111U;
	static int64_t x394 = -4026479103LL;
	uint64_t x395 = 3742LLU;
	volatile int32_t t98 = -30731;

    t98 = (((x393|x394)!=x395)^x396);

    if (t98 != -32) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x397 = INT16_MIN;
	int64_t x398 = -14430079668LL;
	volatile int32_t x399 = -10;
	static volatile int64_t t99 = 26LL;

    t99 = (((x397|x398)!=x399)^x400);

    if (t99 != -2LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = 0;
	static int32_t x403 = -30404;
	static uint16_t x404 = 4771U;
	int32_t t100 = 672;

    t100 = (((x401|x402)!=x403)^x404);

    if (t100 != 4770) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x406 = 0LL;
	static int8_t x407 = -1;
	int32_t x408 = INT32_MIN;

    t101 = (((x405|x406)!=x407)^x408);

    if (t101 != -2147483647) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = INT16_MAX;
	volatile uint8_t x410 = 17U;
	static int64_t x411 = INT64_MAX;
	static volatile int8_t x412 = 1;
	volatile int32_t t102 = -6;

    t102 = (((x409|x410)!=x411)^x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x413 = -1;
	int16_t x414 = INT16_MAX;
	int64_t x415 = INT64_MIN;
	int8_t x416 = -7;
	static int32_t t103 = -58;

    t103 = (((x413|x414)!=x415)^x416);

    if (t103 != -8) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x417 = INT64_MIN;
	int8_t x418 = INT8_MAX;
	int32_t t104 = -259;

    t104 = (((x417|x418)!=x419)^x420);

    if (t104 != 2147483646) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x421 = UINT32_MAX;
	int16_t x422 = -1;
	static uint32_t x423 = 87133962U;
	int32_t t105 = -215835245;

    t105 = (((x421|x422)!=x423)^x424);

    if (t105 != -362183) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x425 = 6632U;
	uint64_t x426 = UINT64_MAX;
	int32_t x428 = -28;
	int32_t t106 = 3342;

    t106 = (((x425|x426)!=x427)^x428);

    if (t106 != -27) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = INT64_MIN;
	volatile int8_t x431 = INT8_MIN;
	static int16_t x432 = INT16_MAX;
	int32_t t107 = 13812;

    t107 = (((x429|x430)!=x431)^x432);

    if (t107 != 32766) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x434 = INT32_MAX;
	uint64_t x435 = 655026918627LLU;
	volatile int32_t t108 = -13564;

    t108 = (((x433|x434)!=x435)^x436);

    if (t108 != -127) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x438 = -63;
	int16_t x439 = -1;
	volatile int16_t x440 = -4;
	static int32_t t109 = -430689;

    t109 = (((x437|x438)!=x439)^x440);

    if (t109 != -3) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x441 = UINT16_MAX;
	int8_t x442 = INT8_MIN;
	int64_t x443 = -111LL;
	volatile uint32_t x444 = 1174162U;
	volatile uint32_t t110 = 7U;

    t110 = (((x441|x442)!=x443)^x444);

    if (t110 != 1174163U) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x445 = 1807754303473497122LL;
	int32_t x446 = 49327287;
	int32_t x448 = INT32_MAX;
	int32_t t111 = -120;

    t111 = (((x445|x446)!=x447)^x448);

    if (t111 != 2147483646) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = INT16_MAX;
	int16_t x450 = -1;
	int16_t x451 = 2305;
	int64_t x452 = INT64_MIN;
	volatile int64_t t112 = 6657459LL;

    t112 = (((x449|x450)!=x451)^x452);

    if (t112 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x454 = -268;
	int8_t x456 = -1;

    t113 = (((x453|x454)!=x455)^x456);

    if (t113 != -2) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x458 = -1LL;
	uint16_t x459 = UINT16_MAX;
	volatile int32_t t114 = 2300538;

    t114 = (((x457|x458)!=x459)^x460);

    if (t114 != -2147483647) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x462 = INT64_MIN;
	uint64_t x463 = UINT64_MAX;
	volatile int16_t x464 = -2;
	volatile int32_t t115 = 1452777;

    t115 = (((x461|x462)!=x463)^x464);

    if (t115 != -2) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x465 = -1;
	static int32_t x466 = INT32_MIN;
	static uint32_t x468 = 41077U;
	uint32_t t116 = 33674940U;

    t116 = (((x465|x466)!=x467)^x468);

    if (t116 != 41077U) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = 17311093440033LL;
	uint8_t x470 = 3U;
	int64_t x471 = -1LL;
	uint16_t x472 = UINT16_MAX;
	int32_t t117 = 20623192;

    t117 = (((x469|x470)!=x471)^x472);

    if (t117 != 65534) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = INT64_MAX;
	int64_t x474 = INT64_MAX;
	static int16_t x475 = -1;
	int32_t x476 = -266267363;
	volatile int32_t t118 = -2451017;

    t118 = (((x473|x474)!=x475)^x476);

    if (t118 != -266267364) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x477 = INT32_MIN;
	int64_t x478 = INT64_MAX;
	static int32_t x479 = -897075;
	volatile int32_t t119 = -87744;

    t119 = (((x477|x478)!=x479)^x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = 93177;
	volatile uint64_t x482 = UINT64_MAX;
	int16_t x483 = 4594;
	volatile int32_t t120 = 0;

    t120 = (((x481|x482)!=x483)^x484);

    if (t120 != -2) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = INT64_MAX;
	volatile int32_t x486 = INT32_MAX;
	int8_t x487 = INT8_MAX;
	int16_t x488 = INT16_MIN;
	volatile int32_t t121 = 886197;

    t121 = (((x485|x486)!=x487)^x488);

    if (t121 != -32767) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint16_t x489 = 27483U;
	uint8_t x490 = UINT8_MAX;
	volatile uint64_t x491 = UINT64_MAX;
	int32_t x492 = -1;

    t122 = (((x489|x490)!=x491)^x492);

    if (t122 != -2) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x493 = 4U;
	int16_t x494 = INT16_MIN;
	int8_t x495 = INT8_MIN;
	static int64_t x496 = -1LL;
	int64_t t123 = -13LL;

    t123 = (((x493|x494)!=x495)^x496);

    if (t123 != -2LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x497 = UINT32_MAX;
	volatile int32_t x498 = -1;
	static int8_t x499 = INT8_MIN;
	uint32_t t124 = 261983725U;

    t124 = (((x497|x498)!=x499)^x500);

    if (t124 != 27U) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint64_t x501 = 28095531417677171LLU;
	uint64_t x502 = 1588594484708LLU;
	static volatile uint8_t x504 = 99U;
	int32_t t125 = -2369;

    t125 = (((x501|x502)!=x503)^x504);

    if (t125 != 98) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x506 = 34;
	int8_t x507 = -1;
	static int32_t x508 = INT32_MIN;

    t126 = (((x505|x506)!=x507)^x508);

    if (t126 != -2147483647) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x509 = 29286494596475LLU;
	int32_t x510 = -1;
	int32_t x511 = INT32_MIN;
	int16_t x512 = -309;
	int32_t t127 = -117484;

    t127 = (((x509|x510)!=x511)^x512);

    if (t127 != -310) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = 113965393;
	int32_t x514 = -11879;
	static volatile int16_t x515 = 11626;
	uint64_t x516 = UINT64_MAX;
	uint64_t t128 = 1470398LLU;

    t128 = (((x513|x514)!=x515)^x516);

    if (t128 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = -1LL;
	uint16_t x518 = 31U;
	volatile int8_t x519 = INT8_MAX;
	int16_t x520 = INT16_MIN;
	int32_t t129 = 358;

    t129 = (((x517|x518)!=x519)^x520);

    if (t129 != -32767) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = -1;
	static int32_t x523 = INT32_MIN;
	uint64_t x524 = UINT64_MAX;

    t130 = (((x521|x522)!=x523)^x524);

    if (t130 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x526 = 5268U;
	int64_t x528 = INT64_MIN;
	volatile int64_t t131 = 124840100374586302LL;

    t131 = (((x525|x526)!=x527)^x528);

    if (t131 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x529 = 176844U;
	int64_t x530 = INT64_MAX;
	uint64_t x531 = UINT64_MAX;
	volatile uint32_t t132 = 222162111U;

    t132 = (((x529|x530)!=x531)^x532);

    if (t132 != 92632586U) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = 1;
	static uint64_t x534 = 54LLU;
	volatile int8_t x535 = -25;
	volatile uint16_t x536 = 253U;

    t133 = (((x533|x534)!=x535)^x536);

    if (t133 != 252) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x537 = 57808796665LL;
	int32_t x539 = -1;
	static int32_t x540 = 0;
	int32_t t134 = -2;

    t134 = (((x537|x538)!=x539)^x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint32_t x541 = UINT32_MAX;
	volatile uint8_t x542 = 19U;
	int8_t x544 = -10;
	volatile int32_t t135 = -6628;

    t135 = (((x541|x542)!=x543)^x544);

    if (t135 != -9) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x545 = INT64_MIN;
	int8_t x546 = 36;
	static uint16_t x547 = 1574U;
	uint64_t x548 = UINT64_MAX;
	uint64_t t136 = 1LLU;

    t136 = (((x545|x546)!=x547)^x548);

    if (t136 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x550 = -944025212;
	volatile int16_t x551 = INT16_MIN;
	uint32_t x552 = 326U;
	static uint32_t t137 = 814590795U;

    t137 = (((x549|x550)!=x551)^x552);

    if (t137 != 327U) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = INT16_MIN;
	int8_t x554 = INT8_MAX;
	int8_t x556 = INT8_MIN;
	static volatile int32_t t138 = -4835476;

    t138 = (((x553|x554)!=x555)^x556);

    if (t138 != -127) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = INT16_MAX;
	int16_t x558 = 3424;
	int8_t x559 = INT8_MIN;
	int32_t x560 = -36003224;
	volatile int32_t t139 = 46;

    t139 = (((x557|x558)!=x559)^x560);

    if (t139 != -36003223) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = 11955;
	static int64_t x562 = INT64_MAX;
	static int64_t x563 = INT64_MIN;
	int32_t x564 = -1;
	int32_t t140 = 7763;

    t140 = (((x561|x562)!=x563)^x564);

    if (t140 != -2) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint16_t x565 = 1U;
	volatile uint8_t x567 = 0U;
	static int64_t x568 = -1245592251996828866LL;

    t141 = (((x565|x566)!=x567)^x568);

    if (t141 != -1245592251996828865LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x569 = UINT16_MAX;
	uint16_t x570 = 6U;
	int8_t x571 = INT8_MIN;
	uint8_t x572 = 4U;
	int32_t t142 = 1232;

    t142 = (((x569|x570)!=x571)^x572);

    if (t142 != 5) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x573 = 5U;
	int32_t x574 = -30934;
	uint32_t x575 = UINT32_MAX;
	static int32_t x576 = 33873;
	int32_t t143 = 112116;

    t143 = (((x573|x574)!=x575)^x576);

    if (t143 != 33872) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x577 = 27U;
	uint16_t x580 = 2888U;
	int32_t t144 = -363105868;

    t144 = (((x577|x578)!=x579)^x580);

    if (t144 != 2889) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = INT64_MAX;
	int32_t x582 = INT32_MIN;
	static int8_t x584 = INT8_MIN;

    t145 = (((x581|x582)!=x583)^x584);

    if (t145 != -127) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x586 = -4;
	int8_t x587 = 10;
	volatile int64_t t146 = 0LL;

    t146 = (((x585|x586)!=x587)^x588);

    if (t146 != 10LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x589 = 467176021311336LLU;
	int16_t x590 = 62;
	static int16_t x591 = 15;

    t147 = (((x589|x590)!=x591)^x592);

    if (t147 != 3LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = -1LL;
	int16_t x596 = INT16_MIN;
	volatile int32_t t148 = 22;

    t148 = (((x593|x594)!=x595)^x596);

    if (t148 != -32767) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x597 = -4LL;
	uint32_t x599 = UINT32_MAX;
	int32_t t149 = 54;

    t149 = (((x597|x598)!=x599)^x600);

    if (t149 != 6345) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x602 = INT64_MAX;
	uint32_t x603 = UINT32_MAX;
	int8_t x604 = INT8_MIN;

    t150 = (((x601|x602)!=x603)^x604);

    if (t150 != -127) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x605 = -12;
	int64_t x607 = INT64_MIN;
	int8_t x608 = -1;

    t151 = (((x605|x606)!=x607)^x608);

    if (t151 != -2) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x609 = INT8_MIN;
	uint16_t x610 = UINT16_MAX;
	int16_t x611 = INT16_MIN;
	int64_t x612 = 1215039263235326LL;
	volatile int64_t t152 = 829721763635LL;

    t152 = (((x609|x610)!=x611)^x612);

    if (t152 != 1215039263235327LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x614 = -1;
	int16_t x615 = INT16_MIN;
	static int8_t x616 = -3;

    t153 = (((x613|x614)!=x615)^x616);

    if (t153 != -4) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = INT8_MIN;
	static int16_t x619 = 0;
	int8_t x620 = INT8_MIN;
	int32_t t154 = 154627;

    t154 = (((x617|x618)!=x619)^x620);

    if (t154 != -127) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = INT16_MAX;
	int16_t x622 = -3480;
	uint16_t x623 = UINT16_MAX;
	volatile uint8_t x624 = 10U;
	static volatile int32_t t155 = -446523;

    t155 = (((x621|x622)!=x623)^x624);

    if (t155 != 11) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = -23;
	static int64_t x626 = 11842LL;
	static int8_t x627 = -1;
	static volatile int32_t t156 = 1078;

    t156 = (((x625|x626)!=x627)^x628);

    if (t156 != -992) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x629 = INT64_MAX;
	int32_t x630 = -9046857;
	static uint8_t x631 = 4U;
	int32_t x632 = -371815;
	int32_t t157 = -3;

    t157 = (((x629|x630)!=x631)^x632);

    if (t157 != -371816) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = INT16_MIN;
	uint64_t t158 = 100LLU;

    t158 = (((x633|x634)!=x635)^x636);

    if (t158 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint32_t x637 = UINT32_MAX;
	uint64_t x639 = 15303LLU;
	static int8_t x640 = INT8_MAX;
	volatile int32_t t159 = -53656893;

    t159 = (((x637|x638)!=x639)^x640);

    if (t159 != 126) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x641 = UINT8_MAX;
	int64_t x642 = INT64_MIN;
	int32_t x643 = -223;
	int64_t x644 = INT64_MIN;
	int64_t t160 = -30382LL;

    t160 = (((x641|x642)!=x643)^x644);

    if (t160 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x646 = -750194;
	uint64_t x647 = 468232535592123483LLU;
	volatile int16_t x648 = INT16_MIN;
	volatile int32_t t161 = -162108256;

    t161 = (((x645|x646)!=x647)^x648);

    if (t161 != -32767) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x649 = UINT64_MAX;
	static uint16_t x650 = UINT16_MAX;
	int16_t x652 = -1;
	volatile int32_t t162 = 1139492;

    t162 = (((x649|x650)!=x651)^x652);

    if (t162 != -2) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x653 = 105174539995268LL;
	int64_t x654 = 364022LL;
	static int16_t x655 = 1537;
	int64_t x656 = -1LL;
	int64_t t163 = -3089LL;

    t163 = (((x653|x654)!=x655)^x656);

    if (t163 != -2LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x657 = -1LL;
	int8_t x659 = INT8_MIN;
	int8_t x660 = -10;
	int32_t t164 = 1357;

    t164 = (((x657|x658)!=x659)^x660);

    if (t164 != -9) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x661 = INT32_MIN;
	int8_t x662 = -1;
	volatile uint32_t x663 = 3592U;

    t165 = (((x661|x662)!=x663)^x664);

    if (t165 != 32766) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = 26;
	static int32_t x666 = INT32_MIN;
	static volatile uint32_t x667 = UINT32_MAX;
	int64_t x668 = -1LL;

    t166 = (((x665|x666)!=x667)^x668);

    if (t166 != -2LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x670 = -1LL;
	volatile int8_t x671 = -1;
	static uint32_t x672 = 247U;
	uint32_t t167 = 6263556U;

    t167 = (((x669|x670)!=x671)^x672);

    if (t167 != 247U) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x673 = -11;
	int32_t x674 = -1;
	int32_t t168 = -31997;

    t168 = (((x673|x674)!=x675)^x676);

    if (t168 != -2) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = -1;
	int32_t x678 = INT32_MAX;
	int32_t t169 = -933001;

    t169 = (((x677|x678)!=x679)^x680);

    if (t169 != 12) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x681 = -1;
	int8_t x682 = -60;
	int32_t x684 = INT32_MIN;
	volatile int32_t t170 = -41863;

    t170 = (((x681|x682)!=x683)^x684);

    if (t170 != -2147483647) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = 2973338340574837473LL;
	int8_t x686 = -1;
	static int32_t x687 = -4;
	int64_t x688 = -377644633293227LL;
	int64_t t171 = -413914898728LL;

    t171 = (((x685|x686)!=x687)^x688);

    if (t171 != -377644633293228LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x692 = INT32_MAX;
	volatile int32_t t172 = -385599;

    t172 = (((x689|x690)!=x691)^x692);

    if (t172 != 2147483646) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = -1;
	volatile int8_t x694 = INT8_MIN;
	static volatile int32_t x696 = INT32_MIN;

    t173 = (((x693|x694)!=x695)^x696);

    if (t173 != -2147483647) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x697 = 1172335U;
	volatile uint16_t x698 = 5356U;
	int8_t x699 = -2;
	int64_t x700 = -4821076270344416LL;
	volatile int64_t t174 = -104LL;

    t174 = (((x697|x698)!=x699)^x700);

    if (t174 != -4821076270344415LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = INT64_MIN;
	volatile uint8_t x702 = 13U;
	volatile uint32_t x703 = 874U;
	volatile int64_t x704 = INT64_MAX;
	int64_t t175 = -1LL;

    t175 = (((x701|x702)!=x703)^x704);

    if (t175 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = INT64_MAX;
	int64_t x707 = -1075855512748215LL;
	int32_t x708 = -30;

    t176 = (((x705|x706)!=x707)^x708);

    if (t176 != -29) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = -5869LL;
	static int64_t x710 = INT64_MIN;
	int64_t x711 = 89101732603918LL;
	volatile int64_t x712 = -65469856523758059LL;
	static int64_t t177 = -41949753703992934LL;

    t177 = (((x709|x710)!=x711)^x712);

    if (t177 != -65469856523758060LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = -12452927;
	uint16_t x714 = 2252U;
	int16_t x715 = -990;
	uint64_t t178 = 1985257146LLU;

    t178 = (((x713|x714)!=x715)^x716);

    if (t178 != 131954274251954LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint16_t x718 = 5491U;
	static int16_t x719 = INT16_MIN;
	volatile int32_t x720 = INT32_MIN;
	int32_t t179 = -795;

    t179 = (((x717|x718)!=x719)^x720);

    if (t179 != -2147483647) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint16_t x722 = 27836U;
	uint32_t x723 = UINT32_MAX;
	volatile int32_t t180 = 228;

    t180 = (((x721|x722)!=x723)^x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = -1;
	static uint16_t x727 = 20U;
	int64_t t181 = -1650464412703025366LL;

    t181 = (((x725|x726)!=x727)^x728);

    if (t181 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint8_t x730 = 3U;
	static volatile int8_t x731 = INT8_MIN;
	uint16_t x732 = 113U;
	int32_t t182 = -30021;

    t182 = (((x729|x730)!=x731)^x732);

    if (t182 != 112) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = INT32_MIN;
	int64_t x734 = -35849961682563LL;
	volatile int16_t x736 = 3;
	int32_t t183 = -54864646;

    t183 = (((x733|x734)!=x735)^x736);

    if (t183 != 2) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x738 = 181U;
	int8_t x739 = INT8_MIN;
	int32_t t184 = 193;

    t184 = (((x737|x738)!=x739)^x740);

    if (t184 != 12) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint8_t x741 = 4U;
	static uint8_t x742 = UINT8_MAX;
	int32_t x743 = -1;
	volatile int64_t x744 = INT64_MIN;
	int64_t t185 = 2457846263299436LL;

    t185 = (((x741|x742)!=x743)^x744);

    if (t185 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x745 = INT32_MIN;
	volatile int64_t x746 = -11LL;
	uint32_t x747 = UINT32_MAX;
	uint32_t x748 = 870U;
	volatile uint32_t t186 = 18769740U;

    t186 = (((x745|x746)!=x747)^x748);

    if (t186 != 871U) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = INT16_MAX;
	int8_t x750 = -1;
	int16_t x751 = -75;
	int8_t x752 = -1;
	int32_t t187 = -197;

    t187 = (((x749|x750)!=x751)^x752);

    if (t187 != -2) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int8_t x753 = -1;
	int8_t x754 = -23;
	volatile int64_t x755 = INT64_MIN;
	int32_t x756 = INT32_MIN;

    t188 = (((x753|x754)!=x755)^x756);

    if (t188 != -2147483647) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = INT8_MIN;
	static int64_t x758 = 49602671684173LL;
	int16_t x759 = INT16_MIN;
	static uint64_t t189 = 16447947034407LLU;

    t189 = (((x757|x758)!=x759)^x760);

    if (t189 != 1LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x761 = INT16_MAX;
	static int32_t x762 = -1;
	volatile uint16_t x764 = 324U;
	volatile int32_t t190 = 6602;

    t190 = (((x761|x762)!=x763)^x764);

    if (t190 != 324) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = INT16_MIN;
	uint16_t x766 = 7156U;
	uint64_t x767 = UINT64_MAX;
	int64_t x768 = -1LL;
	volatile int64_t t191 = -17LL;

    t191 = (((x765|x766)!=x767)^x768);

    if (t191 != -2LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = 5;
	static int64_t x770 = INT64_MIN;
	uint16_t x771 = 178U;
	uint32_t x772 = UINT32_MAX;
	uint32_t t192 = 939514U;

    t192 = (((x769|x770)!=x771)^x772);

    if (t192 != 4294967294U) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x773 = 2U;
	uint8_t x775 = 5U;
	static volatile int64_t x776 = -1LL;
	int64_t t193 = -1135384LL;

    t193 = (((x773|x774)!=x775)^x776);

    if (t193 != -2LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x778 = INT8_MAX;
	int32_t x779 = -8651506;
	volatile uint8_t x780 = 2U;
	volatile int32_t t194 = -207067060;

    t194 = (((x777|x778)!=x779)^x780);

    if (t194 != 3) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x782 = -6LL;
	volatile int8_t x783 = INT8_MIN;
	int8_t x784 = -1;
	volatile int32_t t195 = 0;

    t195 = (((x781|x782)!=x783)^x784);

    if (t195 != -2) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = -1;
	int32_t x786 = INT32_MAX;
	int32_t x787 = 425;
	int32_t t196 = 13971584;

    t196 = (((x785|x786)!=x787)^x788);

    if (t196 != -2) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = INT16_MAX;
	static int16_t x790 = 10287;
	int8_t x791 = INT8_MIN;
	uint32_t x792 = 214142063U;
	volatile uint32_t t197 = 124322188U;

    t197 = (((x789|x790)!=x791)^x792);

    if (t197 != 214142062U) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = INT32_MIN;
	volatile uint16_t x794 = UINT16_MAX;
	volatile int32_t x795 = 22355475;
	uint16_t x796 = 415U;

    t198 = (((x793|x794)!=x795)^x796);

    if (t198 != 414) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = INT32_MIN;
	uint64_t x798 = 799924910132468LLU;
	static volatile int32_t t199 = -495291353;

    t199 = (((x797|x798)!=x799)^x800);

    if (t199 != -2) { NG(); } else { ; }
	
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

