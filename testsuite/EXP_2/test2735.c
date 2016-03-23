
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

int32_t x2 = INT32_MIN;
int32_t x3 = -1;
int16_t x4 = INT16_MAX;
int8_t x5 = 31;
int16_t x6 = 12592;
static int16_t x14 = INT16_MAX;
int8_t x16 = INT8_MIN;
volatile int64_t x21 = -111571094360LL;
uint64_t x22 = UINT64_MAX;
volatile uint64_t t6 = 101905816LLU;
int8_t x31 = 2;
static int8_t x36 = -9;
static volatile int8_t x39 = 0;
uint16_t x41 = 6883U;
uint16_t x42 = UINT16_MAX;
uint8_t x45 = 13U;
int16_t x46 = -1;
int32_t x55 = INT32_MIN;
uint64_t x56 = UINT64_MAX;
static uint64_t t13 = 16022970LLU;
int8_t x58 = -1;
static int64_t t14 = -4146445LL;
int32_t x63 = INT32_MAX;
uint8_t x65 = 1U;
int32_t x72 = INT32_MIN;
int64_t t17 = 232190185399LL;
int16_t x75 = 0;
volatile uint8_t x90 = UINT8_MAX;
volatile uint64_t t25 = 16663856LLU;
uint32_t x106 = UINT32_MAX;
int32_t x107 = 12300354;
static volatile uint8_t x113 = 63U;
static volatile uint8_t x115 = 16U;
int8_t x120 = INT8_MAX;
int64_t x122 = 31486963LL;
int16_t x123 = INT16_MIN;
volatile int64_t x124 = -69764LL;
static volatile int64_t t30 = 99837134306578562LL;
static int16_t x127 = -1;
uint64_t x148 = 7LLU;
uint64_t t36 = 52402714LLU;
static volatile int32_t t37 = 14;
int8_t x155 = INT8_MIN;
volatile int64_t t38 = 8867388LL;
volatile uint8_t x163 = 92U;
volatile int32_t t39 = -48224397;
static volatile uint16_t x165 = 477U;
static uint64_t x168 = 1759878956162900325LLU;
uint64_t t40 = 8491781204043LLU;
volatile uint64_t x172 = UINT64_MAX;
int16_t x177 = -1;
volatile int16_t x178 = 6;
int32_t x185 = -1;
uint32_t x189 = 2118429806U;
int8_t x193 = INT8_MAX;
int32_t x197 = INT32_MIN;
int8_t x199 = INT8_MIN;
volatile uint64_t x207 = 3911LLU;
uint64_t t50 = 17618499283543936LLU;
int32_t t52 = 32746347;
static volatile int64_t x231 = INT64_MIN;
int8_t x241 = INT8_MAX;
volatile int8_t x243 = INT8_MIN;
uint64_t x244 = UINT64_MAX;
volatile uint64_t t57 = 151473580596251LLU;
int16_t x249 = -587;
static volatile int64_t t59 = 119486LL;
uint64_t x261 = 2666320588LLU;
int64_t x262 = -1LL;
int8_t x272 = -1;
static int64_t x275 = 0LL;
uint8_t x278 = 1U;
int64_t x280 = INT64_MIN;
uint8_t x286 = 1U;
volatile int64_t t68 = 1943LL;
volatile int32_t t70 = 41672661;
int64_t x304 = INT64_MAX;
int16_t x305 = -1801;
volatile int64_t t75 = 40LL;
int64_t x319 = INT64_MAX;
int64_t x320 = INT64_MIN;
int64_t x325 = INT64_MIN;
int8_t x330 = INT8_MIN;
int16_t x334 = INT16_MIN;
int16_t x335 = 1;
volatile int64_t x342 = -1LL;
static int64_t x348 = INT64_MIN;
static uint16_t x352 = 8U;
uint64_t x356 = 360646953028240LLU;
volatile uint64_t t87 = 674863LLU;
int16_t x365 = 3;
int32_t x369 = INT32_MIN;
volatile uint16_t x374 = UINT16_MAX;
int8_t x377 = INT8_MAX;
int8_t x381 = INT8_MIN;
int32_t x389 = INT32_MAX;
volatile int8_t x390 = INT8_MIN;
int16_t x398 = 178;
int16_t x402 = 1;
volatile int32_t t98 = 3;
int16_t x418 = -1;
uint32_t x425 = 57855U;
int16_t x427 = INT16_MAX;
int8_t x429 = -1;
volatile int8_t x430 = INT8_MIN;
int8_t x435 = INT8_MIN;
volatile int64_t t105 = -2899LL;
uint8_t x439 = 3U;
uint32_t x442 = UINT32_MAX;
uint32_t x448 = UINT32_MAX;
int32_t x449 = INT32_MIN;
uint8_t x451 = UINT8_MAX;
int32_t x452 = INT32_MIN;
volatile int8_t x454 = 17;
volatile int64_t x458 = -402879890178LL;
volatile int64_t t112 = -225759LL;
static uint16_t x470 = UINT16_MAX;
uint16_t x474 = UINT16_MAX;
static volatile uint8_t x478 = UINT8_MAX;
static int32_t x485 = -350;
static uint16_t x489 = 0U;
uint64_t t119 = 7399711LLU;
int32_t t120 = -122;
uint32_t x504 = 780U;
volatile int64_t t122 = 6966707LL;
static int32_t x506 = -81;
int32_t t124 = 5295311;
static volatile int64_t t128 = -1LL;
static uint32_t x534 = UINT32_MAX;
volatile int64_t x535 = -1LL;
volatile uint64_t x536 = UINT64_MAX;
volatile int32_t x540 = -1;
static uint32_t x548 = 77U;
static int64_t x550 = INT64_MAX;
uint64_t x554 = 1379293LLU;
int32_t x557 = -1;
uint32_t x560 = 24276448U;
uint32_t t135 = 22814427U;
int16_t x577 = INT16_MIN;
uint16_t x580 = UINT16_MAX;
int64_t x584 = INT64_MAX;
int32_t x591 = -1070;
volatile uint64_t t144 = 244175993LLU;
static int64_t x599 = -1LL;
int8_t x605 = INT8_MIN;
uint8_t x609 = 48U;
volatile uint8_t x616 = 73U;
volatile int8_t x624 = INT8_MAX;
volatile int64_t t151 = 2LL;
int32_t x629 = INT32_MIN;
int32_t x633 = INT32_MIN;
int32_t t154 = -65687;
int16_t x640 = -1;
volatile uint64_t t155 = 67596582948LLU;
uint64_t t156 = 1541838118LLU;
volatile uint32_t x650 = UINT32_MAX;
uint64_t x651 = 205834107385493LLU;
int32_t x673 = -3;
volatile int64_t x676 = -8031464LL;
int8_t x677 = INT8_MAX;
uint32_t x679 = 134185260U;
int64_t x680 = -1LL;
int64_t x683 = 1369226LL;
volatile uint64_t x696 = 46LLU;
int16_t x698 = INT16_MAX;
volatile int64_t t170 = -736734357524258LL;
uint64_t x701 = UINT64_MAX;
volatile int64_t t172 = 12039795LL;
static int8_t x715 = -36;
uint16_t x720 = UINT16_MAX;
volatile uint8_t x722 = 2U;
static uint64_t x724 = UINT64_MAX;
int32_t x725 = INT32_MIN;
uint32_t x728 = UINT32_MAX;
volatile int8_t x731 = INT8_MIN;
static uint16_t x732 = 15U;
static volatile int16_t x735 = 143;
uint32_t x738 = UINT32_MAX;
uint16_t x742 = 680U;
static uint64_t x746 = 3176622122938598LLU;
volatile int16_t x749 = INT16_MAX;
int16_t x753 = INT16_MIN;
int32_t x757 = -1;
int16_t x758 = INT16_MAX;
uint16_t x763 = 236U;
int64_t t185 = -15092091730745745LL;
int16_t x765 = INT16_MIN;
int32_t t186 = -1;
volatile int32_t x771 = INT32_MIN;
volatile int32_t t187 = -42071747;
uint64_t t189 = 23697869676LLU;
static int8_t x783 = INT8_MAX;
int32_t x784 = -1505737;
int64_t x792 = INT64_MIN;
int64_t x798 = 32350882LL;
int64_t x799 = 201591354123142974LL;
int64_t x802 = INT64_MIN;
int8_t x805 = 1;
int16_t x814 = INT16_MIN;
int16_t x817 = INT16_MIN;


void f0(void) {
    	static uint16_t x1 = 191U;
	volatile int32_t t0 = -42069;

    t0 = ((x1^(x2^x3))%x4);

    if (t0 != 32577) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x7 = -1;
	uint32_t x8 = UINT32_MAX;
	volatile uint32_t t1 = 57U;

    t1 = ((x5^(x6^x7))%x8);

    if (t1 != 4294954704U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = UINT32_MAX;
	static int64_t x10 = -1LL;
	int64_t x11 = INT64_MAX;
	int8_t x12 = -57;
	volatile int64_t t2 = 79609LL;

    t2 = ((x9^(x10^x11))%x12);

    if (t2 != -32LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	int64_t x15 = INT64_MAX;
	volatile int64_t t3 = 1335LL;

    t3 = ((x13^(x14^x15))%x16);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x17 = INT16_MIN;
	int32_t x18 = -43;
	static int16_t x19 = INT16_MIN;
	static int32_t x20 = INT32_MIN;
	int32_t t4 = -79;

    t4 = ((x17^(x18^x19))%x20);

    if (t4 != -43) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x23 = 187642411007110LL;
	static int32_t x24 = -61187;
	volatile uint64_t t5 = 43424288351LLU;

    t5 = ((x21^(x22^x23))%x24);

    if (t5 != 187677679253457LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 996LLU;
	uint16_t x26 = 12120U;
	static int32_t x27 = 31437778;
	uint8_t x28 = UINT8_MAX;

    t6 = ((x25^(x26^x27))%x28);

    if (t6 != 238LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	static int16_t x30 = INT16_MIN;
	volatile int16_t x32 = INT16_MIN;
	volatile int32_t t7 = -28362;

    t7 = ((x29^(x30^x31))%x32);

    if (t7 != 32642) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MIN;
	volatile uint16_t x34 = 25U;
	volatile int16_t x35 = INT16_MAX;
	int32_t t8 = 1060;

    t8 = ((x33^(x34^x35))%x36);

    if (t8 != -5) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x37 = 6U;
	uint32_t x38 = 13U;
	uint64_t x40 = 9301106909920568LLU;
	uint64_t t9 = 1547LLU;

    t9 = ((x37^(x38^x39))%x40);

    if (t9 != 11LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x43 = 28478LLU;
	uint32_t x44 = UINT32_MAX;
	uint64_t t10 = 8995049281964312LLU;

    t10 = ((x41^(x42^x43))%x44);

    if (t10 != 35362LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x47 = -235610595;
	int16_t x48 = INT16_MIN;
	volatile int32_t t11 = 18;

    t11 = ((x45^(x46^x47))%x48);

    if (t11 != 8687) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = 2U;
	static int16_t x50 = 7;
	int16_t x51 = -1;
	int8_t x52 = INT8_MAX;
	int32_t t12 = 10;

    t12 = ((x49^(x50^x51))%x52);

    if (t12 != -6) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MAX;
	static int32_t x54 = INT32_MIN;

    t13 = ((x53^(x54^x55))%x56);

    if (t13 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = 44U;
	int8_t x59 = -1;
	int64_t x60 = INT64_MIN;

    t14 = ((x57^(x58^x59))%x60);

    if (t14 != 44LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MAX;
	int64_t x62 = 1LL;
	static int16_t x64 = INT16_MAX;
	volatile int64_t t15 = 922221412LL;

    t15 = ((x61^(x62^x63))%x64);

    if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x66 = -231638;
	int32_t x67 = INT32_MIN;
	int16_t x68 = INT16_MAX;
	volatile int32_t t16 = -16227;

    t16 = ((x65^(x66^x67))%x68);

    if (t16 != 30501) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MIN;
	int64_t x70 = INT64_MAX;
	static int16_t x71 = INT16_MIN;

    t17 = ((x69^(x70^x71))%x72);

    if (t17 != 2147451007LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = -1;
	int64_t x74 = 3638344684LL;
	int8_t x76 = -1;
	volatile int64_t t18 = 959LL;

    t18 = ((x73^(x74^x75))%x76);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = 5931U;
	int32_t x78 = INT32_MIN;
	volatile int16_t x79 = INT16_MIN;
	int64_t x80 = INT64_MAX;
	int64_t t19 = -444353080092197LL;

    t19 = ((x77^(x78^x79))%x80);

    if (t19 != 2147456811LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x81 = INT8_MIN;
	int16_t x82 = INT16_MAX;
	volatile uint32_t x83 = 1650740356U;
	uint16_t x84 = 5254U;
	volatile uint32_t t20 = 89112U;

    t20 = ((x81^(x82^x83))%x84);

    if (t20 != 347U) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = INT8_MAX;
	int64_t x86 = INT64_MIN;
	volatile uint64_t x87 = UINT64_MAX;
	uint64_t x88 = UINT64_MAX;
	uint64_t t21 = 17088342131331204LLU;

    t21 = ((x85^(x86^x87))%x88);

    if (t21 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x89 = 3U;
	int64_t x91 = INT64_MIN;
	int64_t x92 = -1LL;
	int64_t t22 = -3LL;

    t22 = ((x89^(x90^x91))%x92);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x93 = INT16_MAX;
	int64_t x94 = 982693238LL;
	uint64_t x95 = 0LLU;
	int16_t x96 = INT16_MIN;
	volatile uint64_t t23 = 105079906578036984LLU;

    t23 = ((x93^(x94^x95))%x96);

    if (t23 != 982698633LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = INT64_MIN;
	uint64_t x98 = UINT64_MAX;
	volatile int8_t x99 = INT8_MAX;
	int8_t x100 = INT8_MIN;
	uint64_t t24 = 7064947919218LLU;

    t24 = ((x97^(x98^x99))%x100);

    if (t24 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MAX;
	int8_t x102 = 36;
	static int64_t x103 = INT64_MIN;
	volatile uint64_t x104 = UINT64_MAX;

    t25 = ((x101^(x102^x103))%x104);

    if (t25 != 18446744073709551579LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = 6213151662935LLU;
	uint8_t x108 = 20U;
	uint64_t t26 = 229038978346LLU;

    t26 = ((x105^(x106^x107))%x108);

    if (t26 != 6LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = -3641;
	int16_t x110 = 284;
	int8_t x111 = -1;
	volatile int32_t x112 = 70209270;
	int32_t t27 = -52;

    t27 = ((x109^(x110^x111))%x112);

    if (t27 != 3876) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x114 = INT16_MAX;
	int8_t x116 = INT8_MIN;
	volatile int32_t t28 = 0;

    t28 = ((x113^(x114^x115))%x116);

    if (t28 != 80) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint32_t x117 = 103405699U;
	int16_t x118 = INT16_MIN;
	int32_t x119 = INT32_MIN;
	volatile uint32_t t29 = 4025U;

    t29 = ((x117^(x118^x119))%x120);

    if (t29 != 99U) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MIN;

    t30 = ((x121^(x122^x123))%x124);

    if (t30 != 23399LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x125 = INT16_MAX;
	static int64_t x126 = INT64_MIN;
	volatile uint16_t x128 = UINT16_MAX;
	volatile int64_t t31 = 263988683219LL;

    t31 = ((x125^(x126^x127))%x128);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x129 = UINT16_MAX;
	int32_t x130 = -1;
	uint64_t x131 = UINT64_MAX;
	uint32_t x132 = UINT32_MAX;
	volatile uint64_t t32 = 1131905474962835810LLU;

    t32 = ((x129^(x130^x131))%x132);

    if (t32 != 65535LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x133 = INT16_MIN;
	int16_t x134 = -1;
	volatile int64_t x135 = INT64_MIN;
	int8_t x136 = 7;
	int64_t t33 = -3180916768186LL;

    t33 = ((x133^(x134^x135))%x136);

    if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = INT64_MAX;
	int32_t x138 = -196;
	int64_t x139 = INT64_MIN;
	static volatile int8_t x140 = INT8_MIN;
	volatile int64_t t34 = 7903446717LL;

    t34 = ((x137^(x138^x139))%x140);

    if (t34 != 67LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = -69975054LL;
	int32_t x142 = -1;
	volatile int32_t x143 = INT32_MAX;
	static int32_t x144 = -7792;
	volatile int64_t t35 = -995411LL;

    t35 = ((x141^(x142^x143))%x144);

    if (t35 != 5554LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x145 = 6439699LLU;
	int16_t x146 = INT16_MIN;
	static int64_t x147 = -1LL;

    t36 = ((x145^(x146^x147))%x148);

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x149 = UINT8_MAX;
	static uint8_t x150 = 15U;
	static volatile uint8_t x151 = UINT8_MAX;
	int16_t x152 = 5544;

    t37 = ((x149^(x150^x151))%x152);

    if (t37 != 15) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x153 = UINT32_MAX;
	volatile int64_t x154 = -1LL;
	int32_t x156 = INT32_MAX;

    t38 = ((x153^(x154^x155))%x156);

    if (t38 != 2147483521LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x161 = -129;
	uint16_t x162 = 0U;
	volatile uint8_t x164 = 106U;

    t39 = ((x161^(x162^x163))%x164);

    if (t39 != -9) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int8_t x166 = INT8_MIN;
	volatile int32_t x167 = -445860;

    t40 = ((x165^(x166^x167))%x168);

    if (t40 != 445441LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x169 = 200U;
	static int8_t x170 = INT8_MIN;
	int8_t x171 = INT8_MAX;
	volatile uint64_t t41 = 9098269225932078051LLU;

    t41 = ((x169^(x170^x171))%x172);

    if (t41 != 4294967095LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x173 = INT16_MIN;
	static int16_t x174 = INT16_MIN;
	int8_t x175 = INT8_MIN;
	static int16_t x176 = -1;
	volatile int32_t t42 = -55;

    t42 = ((x173^(x174^x175))%x176);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x179 = -1;
	static uint64_t x180 = UINT64_MAX;
	volatile uint64_t t43 = 113904432LLU;

    t43 = ((x177^(x178^x179))%x180);

    if (t43 != 6LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x181 = INT8_MIN;
	int16_t x182 = INT16_MIN;
	static int16_t x183 = 56;
	int8_t x184 = 1;
	int32_t t44 = -28672326;

    t44 = ((x181^(x182^x183))%x184);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x186 = 228622LLU;
	volatile int8_t x187 = -2;
	volatile int8_t x188 = 9;
	volatile uint64_t t45 = 35166LLU;

    t45 = ((x185^(x186^x187))%x188);

    if (t45 != 5LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x190 = 25522U;
	uint8_t x191 = 13U;
	int16_t x192 = INT16_MIN;
	volatile uint32_t t46 = 276424353U;

    t46 = ((x189^(x190^x191))%x192);

    if (t46 != 2118438865U) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x194 = 5;
	int8_t x195 = -1;
	int8_t x196 = -1;
	volatile int32_t t47 = -18112836;

    t47 = ((x193^(x194^x195))%x196);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint16_t x198 = 336U;
	volatile int64_t x200 = -70036491139989LL;
	static volatile int64_t t48 = 205LL;

    t48 = ((x197^(x198^x199))%x200);

    if (t48 != 2147483344LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x201 = -14;
	static int64_t x202 = INT64_MAX;
	volatile int8_t x203 = INT8_MIN;
	volatile int32_t x204 = INT32_MAX;
	volatile int64_t t49 = 31LL;

    t49 = ((x201^(x202^x203))%x204);

    if (t49 != 2147483534LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x205 = INT8_MAX;
	uint8_t x206 = 6U;
	static int32_t x208 = -90109;

    t50 = ((x205^(x206^x207))%x208);

    if (t50 != 3902LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x209 = 378264632;
	uint32_t x210 = 12488756U;
	uint16_t x211 = UINT16_MAX;
	int64_t x212 = INT64_MAX;
	int64_t t51 = -1378LL;

    t51 = ((x209^(x210^x211))%x212);

    if (t51 != 372618227LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x217 = 387;
	volatile int8_t x218 = INT8_MIN;
	int32_t x219 = -1;
	int8_t x220 = -6;

    t52 = ((x217^(x218^x219))%x220);

    if (t52 != 4) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x225 = 13U;
	int8_t x226 = 0;
	int16_t x227 = INT16_MIN;
	int8_t x228 = INT8_MIN;
	int32_t t53 = -89;

    t53 = ((x225^(x226^x227))%x228);

    if (t53 != -115) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x229 = INT8_MIN;
	static uint16_t x230 = UINT16_MAX;
	volatile int8_t x232 = INT8_MIN;
	volatile int64_t t54 = 48394885727732LL;

    t54 = ((x229^(x230^x231))%x232);

    if (t54 != 127LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x233 = 3886;
	int64_t x234 = 180362122138701LL;
	volatile int8_t x235 = INT8_MIN;
	volatile int16_t x236 = -13149;
	volatile int64_t t55 = 12859LL;

    t55 = ((x233^(x234^x235))%x236);

    if (t55 != -4030LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint16_t x237 = 292U;
	static int8_t x238 = INT8_MIN;
	int16_t x239 = -1;
	int16_t x240 = INT16_MIN;
	int32_t t56 = 11107;

    t56 = ((x237^(x238^x239))%x240);

    if (t56 != 347) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x242 = 162U;

    t57 = ((x241^(x242^x243))%x244);

    if (t57 != 4294967133LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x245 = 7U;
	static int64_t x246 = INT64_MIN;
	int64_t x247 = INT64_MIN;
	int32_t x248 = -1;
	int64_t t58 = 120LL;

    t58 = ((x245^(x246^x247))%x248);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x250 = INT8_MIN;
	int64_t x251 = INT64_MIN;
	int8_t x252 = 42;

    t59 = ((x249^(x250^x251))%x252);

    if (t59 != -31LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x253 = -1;
	volatile int16_t x254 = INT16_MIN;
	uint64_t x255 = 9155596933984LLU;
	volatile int32_t x256 = -45777456;
	uint64_t t60 = 173879275205565LLU;

    t60 = ((x253^(x254^x255))%x256);

    if (t60 != 9155596919967LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x257 = INT64_MIN;
	int16_t x258 = INT16_MIN;
	uint32_t x259 = 735679337U;
	int8_t x260 = INT8_MIN;
	volatile int64_t t61 = 156706384277290LL;

    t61 = ((x257^(x258^x259))%x260);

    if (t61 != -23LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x263 = 63;
	uint8_t x264 = 11U;
	volatile uint64_t t62 = 546214573924334242LLU;

    t62 = ((x261^(x262^x263))%x264);

    if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x265 = -1;
	volatile int8_t x266 = INT8_MIN;
	int64_t x267 = INT64_MAX;
	uint16_t x268 = 5780U;
	int64_t t63 = -4515LL;

    t63 = ((x265^(x266^x267))%x268);

    if (t63 != 3060LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x269 = -1;
	volatile uint32_t x270 = 25U;
	int16_t x271 = -67;
	volatile uint32_t t64 = 1297436U;

    t64 = ((x269^(x270^x271))%x272);

    if (t64 != 91U) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x273 = INT64_MIN;
	static volatile int8_t x274 = INT8_MAX;
	int16_t x276 = 9;
	volatile int64_t t65 = -3918813424304LL;

    t65 = ((x273^(x274^x275))%x276);

    if (t65 != -7LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x277 = INT32_MIN;
	volatile int8_t x279 = -13;
	int64_t t66 = 1978907829398733LL;

    t66 = ((x277^(x278^x279))%x280);

    if (t66 != 2147483634LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x281 = 92935073LLU;
	int16_t x282 = 7767;
	uint8_t x283 = UINT8_MAX;
	int8_t x284 = INT8_MIN;
	volatile uint64_t t67 = 344769026097LLU;

    t67 = ((x281^(x282^x283))%x284);

    if (t67 != 92933385LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int32_t x285 = 93;
	volatile int32_t x287 = INT32_MAX;
	int64_t x288 = -62613187345LL;

    t68 = ((x285^(x286^x287))%x288);

    if (t68 != 2147483555LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x289 = 0;
	int16_t x290 = INT16_MAX;
	uint64_t x291 = UINT64_MAX;
	int8_t x292 = INT8_MIN;
	uint64_t t69 = 27914350137LLU;

    t69 = ((x289^(x290^x291))%x292);

    if (t69 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x293 = 69888563;
	int16_t x294 = INT16_MIN;
	static uint16_t x295 = 749U;
	int16_t x296 = 5358;

    t70 = ((x293^(x294^x295))%x296);

    if (t70 != -4336) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x297 = -148584910706647914LL;
	int8_t x298 = INT8_MIN;
	volatile int16_t x299 = INT16_MIN;
	static uint8_t x300 = UINT8_MAX;
	int64_t t71 = -20151248633545LL;

    t71 = ((x297^(x298^x299))%x300);

    if (t71 != -119LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x301 = 0;
	int32_t x302 = INT32_MIN;
	int32_t x303 = INT32_MIN;
	int64_t t72 = 8386LL;

    t72 = ((x301^(x302^x303))%x304);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x306 = 124U;
	int8_t x307 = -2;
	volatile int32_t x308 = INT32_MIN;
	volatile int32_t t73 = 64;

    t73 = ((x305^(x306^x307))%x308);

    if (t73 != 1909) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x309 = INT64_MAX;
	static volatile int8_t x310 = INT8_MAX;
	static int8_t x311 = -1;
	int16_t x312 = INT16_MIN;
	volatile int64_t t74 = 16218LL;

    t74 = ((x309^(x310^x311))%x312);

    if (t74 != -32641LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x313 = INT8_MAX;
	static int64_t x314 = INT64_MAX;
	uint8_t x315 = 0U;
	int64_t x316 = INT64_MIN;

    t75 = ((x313^(x314^x315))%x316);

    if (t75 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x317 = -1LL;
	static int16_t x318 = INT16_MIN;
	int64_t t76 = -5197375LL;

    t76 = ((x317^(x318^x319))%x320);

    if (t76 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x321 = -1LL;
	int8_t x322 = INT8_MIN;
	volatile int64_t x323 = INT64_MIN;
	uint16_t x324 = 3U;
	int64_t t77 = -32360LL;

    t77 = ((x321^(x322^x323))%x324);

    if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x326 = INT16_MIN;
	volatile int8_t x327 = INT8_MIN;
	int32_t x328 = -50615574;
	static volatile int64_t t78 = 9373645LL;

    t78 = ((x325^(x326^x327))%x328);

    if (t78 != -17324126LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x329 = -64;
	uint16_t x331 = UINT16_MAX;
	int64_t x332 = -1LL;
	static int64_t t79 = 118340353136929696LL;

    t79 = ((x329^(x330^x331))%x332);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x333 = INT16_MAX;
	int32_t x336 = 81673701;
	volatile int32_t t80 = -1;

    t80 = ((x333^(x334^x335))%x336);

    if (t80 != -2) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x337 = -1LL;
	uint16_t x338 = 6U;
	int32_t x339 = INT32_MIN;
	int8_t x340 = INT8_MIN;
	volatile int64_t t81 = 25LL;

    t81 = ((x337^(x338^x339))%x340);

    if (t81 != 121LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x341 = INT64_MIN;
	int64_t x343 = -11LL;
	uint64_t x344 = UINT64_MAX;
	volatile uint64_t t82 = 208209058LLU;

    t82 = ((x341^(x342^x343))%x344);

    if (t82 != 9223372036854775818LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x345 = -1;
	static volatile int16_t x346 = INT16_MIN;
	int32_t x347 = INT32_MAX;
	volatile int64_t t83 = -120770725643LL;

    t83 = ((x345^(x346^x347))%x348);

    if (t83 != 2147450880LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x349 = INT16_MAX;
	uint8_t x350 = 121U;
	int16_t x351 = INT16_MAX;
	volatile int32_t t84 = -59020;

    t84 = ((x349^(x350^x351))%x352);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x353 = INT32_MIN;
	int64_t x354 = -40345671815319LL;
	int64_t x355 = INT64_MAX;
	uint64_t t85 = 20655LLU;

    t85 = ((x353^(x354^x355))%x356);

    if (t85 != 146514084307766LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x357 = -1LL;
	int16_t x358 = INT16_MAX;
	uint32_t x359 = 443803733U;
	int64_t x360 = -13965LL;
	static volatile int64_t t86 = 4952075098381453LL;

    t86 = ((x357^(x358^x359))%x360);

    if (t86 != -3313LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x361 = INT32_MIN;
	uint64_t x362 = UINT64_MAX;
	uint16_t x363 = UINT16_MAX;
	uint16_t x364 = 320U;

    t87 = ((x361^(x362^x363))%x364);

    if (t87 != 192LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x366 = -1;
	uint32_t x367 = UINT32_MAX;
	static int32_t x368 = INT32_MIN;
	uint32_t t88 = 220U;

    t88 = ((x365^(x366^x367))%x368);

    if (t88 != 3U) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x370 = 1247LL;
	static int16_t x371 = -1;
	static int64_t x372 = -1LL;
	int64_t t89 = -77005LL;

    t89 = ((x369^(x370^x371))%x372);

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x373 = INT32_MIN;
	volatile int16_t x375 = -1;
	int8_t x376 = -1;
	static int32_t t90 = 1763;

    t90 = ((x373^(x374^x375))%x376);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x378 = INT32_MIN;
	volatile uint64_t x379 = UINT64_MAX;
	static uint8_t x380 = 1U;
	volatile uint64_t t91 = 53633023933767LLU;

    t91 = ((x377^(x378^x379))%x380);

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x382 = 106U;
	int32_t x383 = -1;
	int8_t x384 = INT8_MIN;
	volatile int32_t t92 = -5;

    t92 = ((x381^(x382^x383))%x384);

    if (t92 != 21) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x385 = -12;
	uint64_t x386 = UINT64_MAX;
	int16_t x387 = -1;
	int8_t x388 = INT8_MIN;
	uint64_t t93 = 872931885547454529LLU;

    t93 = ((x385^(x386^x387))%x388);

    if (t93 != 116LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int32_t x391 = 7241;
	uint32_t x392 = 133U;
	uint32_t t94 = 28445496U;

    t94 = ((x389^(x390^x391))%x392);

    if (t94 != 119U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x393 = UINT16_MAX;
	int64_t x394 = INT64_MAX;
	int32_t x395 = INT32_MAX;
	int16_t x396 = 1813;
	int64_t t95 = 4078475961120763100LL;

    t95 = ((x393^(x394^x395))%x396);

    if (t95 != 1694LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint16_t x397 = 7205U;
	volatile int8_t x399 = INT8_MIN;
	int32_t x400 = -1;
	int32_t t96 = -53;

    t96 = ((x397^(x398^x399))%x400);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x401 = INT32_MAX;
	uint64_t x403 = 1LLU;
	volatile uint32_t x404 = 15390U;
	volatile uint64_t t97 = 2LLU;

    t97 = ((x401^(x402^x403))%x404);

    if (t97 != 9217LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x405 = 24U;
	static int8_t x406 = INT8_MIN;
	int8_t x407 = -1;
	uint8_t x408 = 1U;

    t98 = ((x405^(x406^x407))%x408);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x409 = -423;
	volatile int8_t x410 = 0;
	int64_t x411 = 320111871609633LL;
	volatile int32_t x412 = INT32_MIN;
	volatile int64_t t99 = 221655947LL;

    t99 = ((x409^(x410^x411))%x412);

    if (t99 != -1516587656LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x413 = INT16_MAX;
	int8_t x414 = -1;
	int8_t x415 = INT8_MAX;
	uint16_t x416 = UINT16_MAX;
	static volatile int32_t t100 = -6;

    t100 = ((x413^(x414^x415))%x416);

    if (t100 != -32641) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x417 = 1537U;
	static int16_t x419 = -1;
	int64_t x420 = -426112807985935138LL;
	volatile int64_t t101 = 24LL;

    t101 = ((x417^(x418^x419))%x420);

    if (t101 != 1537LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x421 = -108LL;
	uint32_t x422 = 189205700U;
	int16_t x423 = -1;
	static int32_t x424 = INT32_MIN;
	volatile int64_t t102 = -2069933604340LL;

    t102 = ((x421^(x422^x423))%x424);

    if (t102 != -1958277969LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x426 = INT32_MIN;
	int64_t x428 = INT64_MIN;
	volatile int64_t t103 = 30971LL;

    t103 = ((x425^(x426^x427))%x428);

    if (t103 != 2147524096LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x431 = INT32_MIN;
	static int16_t x432 = -1;
	int32_t t104 = 35766;

    t104 = ((x429^(x430^x431))%x432);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x433 = INT64_MAX;
	int16_t x434 = -1;
	int16_t x436 = INT16_MIN;

    t105 = ((x433^(x434^x435))%x436);

    if (t105 != 32640LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x437 = INT32_MAX;
	uint32_t x438 = 29595562U;
	uint8_t x440 = 24U;
	volatile uint32_t t106 = 158718U;

    t106 = ((x437^(x438^x439))%x440);

    if (t106 != 22U) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x441 = INT16_MAX;
	int32_t x443 = INT32_MAX;
	static volatile int64_t x444 = -1LL;
	volatile int64_t t107 = -1665347332501LL;

    t107 = ((x441^(x442^x443))%x444);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x445 = -78981;
	static volatile int32_t x446 = INT32_MIN;
	int16_t x447 = -12;
	uint32_t t108 = 4982U;

    t108 = ((x445^(x446^x447))%x448);

    if (t108 != 2147562639U) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x450 = 4797849583822172LLU;
	static uint64_t t109 = 2555166332946547067LLU;

    t109 = ((x449^(x450^x451))%x452);

    if (t109 != 18441946225472251299LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint8_t x453 = 2U;
	int16_t x455 = INT16_MIN;
	static int64_t x456 = -14289999370723316LL;
	int64_t t110 = -16555359541556LL;

    t110 = ((x453^(x454^x455))%x456);

    if (t110 != -32749LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x457 = INT16_MIN;
	uint16_t x459 = 73U;
	int16_t x460 = INT16_MAX;
	static volatile int64_t t111 = 4167504652250209LL;

    t111 = ((x457^(x458^x459))%x460);

    if (t111 != 22836LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x461 = 3;
	volatile int32_t x462 = 6729;
	int16_t x463 = 161;
	int64_t x464 = INT64_MIN;

    t112 = ((x461^(x462^x463))%x464);

    if (t112 != 6891LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x465 = INT64_MIN;
	uint8_t x466 = 78U;
	uint8_t x467 = 10U;
	uint32_t x468 = 382259154U;
	static int64_t t113 = 5031156LL;

    t113 = ((x465^(x466^x467))%x468);

    if (t113 != -132524076LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int16_t x469 = INT16_MIN;
	uint8_t x471 = 1U;
	uint16_t x472 = UINT16_MAX;
	static volatile int32_t t114 = 104;

    t114 = ((x469^(x470^x471))%x472);

    if (t114 != -32770) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x473 = 0U;
	volatile uint8_t x475 = 24U;
	int32_t x476 = -222095777;
	int32_t t115 = -15347132;

    t115 = ((x473^(x474^x475))%x476);

    if (t115 != 65511) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x477 = INT32_MIN;
	int8_t x479 = INT8_MAX;
	int8_t x480 = INT8_MIN;
	int32_t t116 = -55642;

    t116 = ((x477^(x478^x479))%x480);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x481 = INT8_MIN;
	volatile int8_t x482 = 55;
	static int8_t x483 = INT8_MIN;
	int16_t x484 = INT16_MAX;
	volatile int32_t t117 = 163974524;

    t117 = ((x481^(x482^x483))%x484);

    if (t117 != 55) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x486 = -7;
	int8_t x487 = INT8_MIN;
	int16_t x488 = -419;
	int32_t t118 = 6286856;

    t118 = ((x485^(x486^x487))%x488);

    if (t118 != -293) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x490 = -6;
	uint64_t x491 = 2851LLU;
	static volatile int64_t x492 = 1LL;

    t119 = ((x489^(x490^x491))%x492);

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x493 = 1;
	int32_t x494 = -201734;
	static int32_t x495 = -54;
	volatile int8_t x496 = INT8_MIN;

    t120 = ((x493^(x494^x495))%x496);

    if (t120 != 49) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint16_t x497 = 10966U;
	int32_t x498 = INT32_MIN;
	static int64_t x499 = -1LL;
	uint64_t x500 = 703564LLU;
	volatile uint64_t t121 = 268101973LLU;

    t121 = ((x497^(x498^x499))%x500);

    if (t121 != 195353LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x501 = -1LL;
	int16_t x502 = 27;
	int32_t x503 = -1;

    t122 = ((x501^(x502^x503))%x504);

    if (t122 != 27LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x505 = 478415;
	uint32_t x507 = 28189904U;
	int64_t x508 = -1LL;
	int64_t t123 = 225747503LL;

    t123 = ((x505^(x506^x507))%x508);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x509 = INT32_MAX;
	static int16_t x510 = 9;
	int16_t x511 = -7;
	uint8_t x512 = 13U;

    t124 = ((x509^(x510^x511))%x512);

    if (t124 != -9) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x513 = INT16_MAX;
	int32_t x514 = INT32_MIN;
	uint64_t x515 = 133515163LLU;
	uint8_t x516 = 104U;
	uint64_t t125 = 14638883398731LLU;

    t125 = ((x513^(x514^x515))%x516);

    if (t125 != 12LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int32_t x517 = -13903;
	int32_t x518 = -1;
	int16_t x519 = -1;
	static int32_t x520 = INT32_MIN;
	static volatile int32_t t126 = -69142746;

    t126 = ((x517^(x518^x519))%x520);

    if (t126 != -13903) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x525 = UINT8_MAX;
	volatile uint32_t x526 = UINT32_MAX;
	uint8_t x527 = 8U;
	int32_t x528 = -1;
	volatile uint32_t t127 = 1048110U;

    t127 = ((x525^(x526^x527))%x528);

    if (t127 != 4294967048U) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x529 = INT64_MIN;
	int64_t x530 = -318LL;
	static uint8_t x531 = 14U;
	static uint8_t x532 = 26U;

    t128 = ((x529^(x530^x531))%x532);

    if (t128 != 12LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x533 = -9;
	uint64_t t129 = 884LLU;

    t129 = ((x533^(x534^x535))%x536);

    if (t129 != 4294967287LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x537 = INT8_MAX;
	uint32_t x538 = UINT32_MAX;
	uint16_t x539 = UINT16_MAX;
	uint32_t t130 = 64615636U;

    t130 = ((x537^(x538^x539))%x540);

    if (t130 != 4294901887U) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint8_t x541 = 2U;
	int8_t x542 = INT8_MIN;
	volatile uint8_t x543 = 23U;
	volatile int32_t x544 = INT32_MIN;
	int32_t t131 = -1;

    t131 = ((x541^(x542^x543))%x544);

    if (t131 != -107) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x545 = UINT32_MAX;
	static int16_t x546 = -1;
	int32_t x547 = INT32_MIN;
	uint32_t t132 = 9530U;

    t132 = ((x545^(x546^x547))%x548);

    if (t132 != 2U) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x549 = -15121436105LL;
	uint8_t x551 = 35U;
	static volatile int8_t x552 = INT8_MIN;
	volatile int64_t t133 = 8647085499191548LL;

    t133 = ((x549^(x550^x551))%x552);

    if (t133 != -21LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x553 = 3958;
	int64_t x555 = INT64_MIN;
	static uint16_t x556 = 4U;
	uint64_t t134 = 33708587928LLU;

    t134 = ((x553^(x554^x555))%x556);

    if (t134 != 3LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x558 = INT32_MAX;
	int8_t x559 = -1;

    t135 = ((x557^(x558^x559))%x560);

    if (t135 != 11156223U) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x561 = UINT16_MAX;
	int8_t x562 = 16;
	static volatile uint16_t x563 = 494U;
	int32_t x564 = INT32_MIN;
	static volatile int32_t t136 = 11827846;

    t136 = ((x561^(x562^x563))%x564);

    if (t136 != 65025) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x565 = 2;
	int64_t x566 = INT64_MIN;
	uint32_t x567 = UINT32_MAX;
	int32_t x568 = -1;
	static volatile int64_t t137 = -1LL;

    t137 = ((x565^(x566^x567))%x568);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x569 = 961;
	static uint16_t x570 = 40U;
	uint16_t x571 = 7U;
	int32_t x572 = -1;
	int32_t t138 = -7093758;

    t138 = ((x569^(x570^x571))%x572);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x573 = INT8_MAX;
	uint16_t x574 = 8002U;
	int8_t x575 = INT8_MIN;
	uint32_t x576 = 99575821U;
	uint32_t t139 = 1523U;

    t139 = ((x573^(x574^x575))%x576);

    if (t139 != 13198990U) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x578 = INT32_MIN;
	static volatile uint32_t x579 = UINT32_MAX;
	uint32_t t140 = 793823U;

    t140 = ((x577^(x578^x579))%x580);

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x581 = UINT32_MAX;
	volatile uint32_t x582 = 1611300U;
	int64_t x583 = INT64_MIN;
	volatile int64_t t141 = -14795632718142553LL;

    t141 = ((x581^(x582^x583))%x584);

    if (t141 != -9223372032561419813LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x585 = -1;
	int64_t x586 = INT64_MIN;
	int64_t x587 = INT64_MIN;
	int32_t x588 = INT32_MIN;
	int64_t t142 = -62408702096142LL;

    t142 = ((x585^(x586^x587))%x588);

    if (t142 != -1LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x589 = 1832585;
	int64_t x590 = -1LL;
	static int16_t x592 = -211;
	int64_t t143 = 16209504879LL;

    t143 = ((x589^(x590^x591))%x592);

    if (t143 != 108LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x593 = INT16_MAX;
	int16_t x594 = INT16_MIN;
	int32_t x595 = -45;
	uint64_t x596 = 6721400656LLU;

    t144 = ((x593^(x594^x595))%x596);

    if (t144 != 44LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x597 = -1;
	int32_t x598 = -1;
	volatile int64_t x600 = INT64_MIN;
	int64_t t145 = 80213784849607LL;

    t145 = ((x597^(x598^x599))%x600);

    if (t145 != -1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x601 = UINT8_MAX;
	int16_t x602 = INT16_MIN;
	uint16_t x603 = UINT16_MAX;
	int8_t x604 = 9;
	volatile int32_t t146 = 1;

    t146 = ((x601^(x602^x603))%x604);

    if (t146 != -3) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x606 = -17302899077LL;
	int16_t x607 = -1;
	static int64_t x608 = INT64_MAX;
	static int64_t t147 = 18763595LL;

    t147 = ((x605^(x606^x607))%x608);

    if (t147 != -17302899196LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x610 = INT16_MAX;
	int8_t x611 = 54;
	static volatile int64_t x612 = INT64_MAX;
	int64_t t148 = -373428904957LL;

    t148 = ((x609^(x610^x611))%x612);

    if (t148 != 32761LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x613 = UINT64_MAX;
	uint8_t x614 = 1U;
	volatile int64_t x615 = -1787395840787LL;
	uint64_t t149 = 2196886991162LLU;

    t149 = ((x613^(x614^x615))%x616);

    if (t149 != 24LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x617 = -1LL;
	static int16_t x618 = -1;
	int64_t x619 = 1554617825455LL;
	volatile int16_t x620 = -1;
	int64_t t150 = -1567659620293857860LL;

    t150 = ((x617^(x618^x619))%x620);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x621 = -1LL;
	volatile uint8_t x622 = 91U;
	int64_t x623 = INT64_MAX;

    t151 = ((x621^(x622^x623))%x624);

    if (t151 != -37LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x625 = INT16_MAX;
	uint16_t x626 = UINT16_MAX;
	static uint64_t x627 = 904027690673LLU;
	volatile int8_t x628 = -1;
	uint64_t t152 = 42655803426LLU;

    t152 = ((x625^(x626^x627))%x628);

    if (t152 != 904027657905LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x630 = INT8_MIN;
	volatile int8_t x631 = INT8_MIN;
	static int32_t x632 = 62572;
	int32_t t153 = 208;

    t153 = ((x629^(x630^x631))%x632);

    if (t153 != -12608) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x634 = INT8_MIN;
	int32_t x635 = 80;
	int8_t x636 = -5;

    t154 = ((x633^(x634^x635))%x636);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x637 = 88307877477LLU;
	int64_t x638 = -1LL;
	int64_t x639 = 954894LL;

    t155 = ((x637^(x638^x639))%x640);

    if (t155 != 18446743985402555284LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x641 = 115LLU;
	volatile int16_t x642 = -1;
	int64_t x643 = INT64_MAX;
	int32_t x644 = -170921338;

    t156 = ((x641^(x642^x643))%x644);

    if (t156 != 9223372036854775923LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x645 = -2;
	static uint32_t x646 = 34626730U;
	static int16_t x647 = INT16_MAX;
	volatile uint32_t x648 = 113498174U;
	uint32_t t157 = 359299931U;

    t157 = ((x645^(x646^x647))%x648);

    if (t157 != 60922805U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x649 = 5721524LLU;
	int64_t x652 = 45643049931198839LL;
	volatile uint64_t t158 = 557098135153476488LLU;

    t158 = ((x649^(x650^x651))%x652);

    if (t158 != 205834218030302LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x653 = 6;
	uint32_t x654 = 11832245U;
	uint32_t x655 = 3035039U;
	int16_t x656 = -24;
	volatile uint32_t t159 = 73U;

    t159 = ((x653^(x654^x655))%x656);

    if (t159 != 10142764U) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint64_t x657 = 2937237LLU;
	static uint32_t x658 = 293377431U;
	static uint64_t x659 = 13LLU;
	int16_t x660 = INT16_MIN;
	uint64_t t160 = 625968142LLU;

    t160 = ((x657^(x658^x659))%x660);

    if (t160 != 290472975LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x661 = -1;
	uint64_t x662 = 0LLU;
	volatile int64_t x663 = -394415779030LL;
	uint32_t x664 = UINT32_MAX;
	volatile uint64_t t161 = 60260081476247588LLU;

    t161 = ((x661^(x662^x663))%x664);

    if (t161 != 3573755184LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x665 = -3;
	static int32_t x666 = 41;
	int16_t x667 = -930;
	uint16_t x668 = 4433U;
	static int32_t t162 = -8;

    t162 = ((x665^(x666^x667))%x668);

    if (t162 != 906) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x669 = 1;
	volatile int32_t x670 = 37495;
	int16_t x671 = INT16_MAX;
	static volatile int8_t x672 = INT8_MIN;
	int32_t t163 = 5550850;

    t163 = ((x669^(x670^x671))%x672);

    if (t163 != 9) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x674 = INT8_MIN;
	uint8_t x675 = UINT8_MAX;
	static int64_t t164 = 299541113039369009LL;

    t164 = ((x673^(x674^x675))%x676);

    if (t164 != 130LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x678 = 3U;
	int64_t t165 = 14012LL;

    t165 = ((x677^(x678^x679))%x680);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x681 = 91242U;
	int64_t x682 = 43126970518LL;
	static int32_t x684 = INT32_MIN;
	static int64_t t166 = -56304985077959375LL;

    t166 = ((x681^(x682^x683))%x684);

    if (t166 != 176478326LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint16_t x685 = 101U;
	int8_t x686 = 1;
	int64_t x687 = -1LL;
	volatile uint8_t x688 = 3U;
	int64_t t167 = 10LL;

    t167 = ((x685^(x686^x687))%x688);

    if (t167 != -2LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x689 = -1LL;
	static int8_t x690 = INT8_MIN;
	volatile int8_t x691 = -17;
	static volatile uint64_t x692 = 8427LLU;
	volatile uint64_t t168 = 32459471973055LLU;

    t168 = ((x689^(x690^x691))%x692);

    if (t168 != 7323LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x693 = -5LL;
	int32_t x694 = -7945961;
	int32_t x695 = INT32_MIN;
	uint64_t t169 = 97994342540040755LLU;

    t169 = ((x693^(x694^x695))%x696);

    if (t169 != 16LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x697 = INT16_MAX;
	static int16_t x699 = INT16_MIN;
	static int64_t x700 = -1LL;

    t170 = ((x697^(x698^x699))%x700);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x702 = INT16_MIN;
	static int64_t x703 = 14886LL;
	int8_t x704 = 1;
	volatile uint64_t t171 = 1181076033LLU;

    t171 = ((x701^(x702^x703))%x704);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int16_t x705 = 185;
	int64_t x706 = INT64_MAX;
	static int32_t x707 = INT32_MIN;
	int8_t x708 = -1;

    t172 = ((x705^(x706^x707))%x708);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int16_t x713 = -1;
	volatile uint8_t x714 = 2U;
	int16_t x716 = INT16_MIN;
	int32_t t173 = -4608550;

    t173 = ((x713^(x714^x715))%x716);

    if (t173 != 33) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x717 = INT16_MAX;
	int32_t x718 = 5057;
	int8_t x719 = 11;
	volatile int32_t t174 = 95595652;

    t174 = ((x717^(x718^x719))%x720);

    if (t174 != 27701) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x721 = 49;
	volatile uint32_t x723 = UINT32_MAX;
	volatile uint64_t t175 = 3LLU;

    t175 = ((x721^(x722^x723))%x724);

    if (t175 != 4294967244LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int16_t x726 = -1;
	volatile int64_t x727 = INT64_MIN;
	int64_t t176 = -23973940696LL;

    t176 = ((x725^(x726^x727))%x728);

    if (t176 != -1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x729 = 0;
	int32_t x730 = INT32_MAX;
	volatile int32_t t177 = 0;

    t177 = ((x729^(x730^x731))%x732);

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x733 = 44U;
	uint16_t x734 = 27228U;
	static int8_t x736 = INT8_MIN;
	int32_t t178 = -5794;

    t178 = ((x733^(x734^x735))%x736);

    if (t178 != 127) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x737 = 16U;
	int64_t x739 = -1LL;
	uint64_t x740 = 39046LLU;
	volatile uint64_t t179 = 181162LLU;

    t179 = ((x737^(x738^x739))%x740);

    if (t179 != 21644LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x741 = -4068405;
	uint64_t x743 = 8589LLU;
	static uint8_t x744 = 55U;
	uint64_t t180 = 12LLU;

    t180 = ((x741^(x742^x743))%x744);

    if (t180 != 1LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x745 = -1;
	int8_t x747 = INT8_MIN;
	uint8_t x748 = 1U;
	uint64_t t181 = 753LLU;

    t181 = ((x745^(x746^x747))%x748);

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x750 = 16095;
	int64_t x751 = INT64_MIN;
	static volatile int8_t x752 = INT8_MIN;
	static int64_t t182 = 111636258LL;

    t182 = ((x749^(x750^x751))%x752);

    if (t182 != -96LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x754 = -6;
	int64_t x755 = 11084853346445514LL;
	static int8_t x756 = -1;
	static int64_t t183 = -39022046LL;

    t183 = ((x753^(x754^x755))%x756);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x759 = INT32_MIN;
	volatile uint32_t x760 = 17307173U;
	volatile uint32_t t184 = 2262473U;

    t184 = ((x757^(x758^x759))%x760);

    if (t184 != 1361428U) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x761 = 4U;
	int64_t x762 = INT64_MAX;
	static int32_t x764 = INT32_MIN;

    t185 = ((x761^(x762^x763))%x764);

    if (t185 != 2147483415LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x766 = 6711U;
	uint8_t x767 = 12U;
	volatile int32_t x768 = 1;

    t186 = ((x765^(x766^x767))%x768);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x769 = 2;
	int16_t x770 = -1;
	uint8_t x772 = UINT8_MAX;

    t187 = ((x769^(x770^x771))%x772);

    if (t187 != 125) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x773 = 137127953U;
	int64_t x774 = 4LL;
	int64_t x775 = 3089510804424324872LL;
	static uint16_t x776 = 329U;
	static volatile int64_t t188 = 114002LL;

    t188 = ((x773^(x774^x775))%x776);

    if (t188 != 178LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x777 = 6842484680LLU;
	int32_t x778 = INT32_MIN;
	int64_t x779 = 129267753LL;
	int32_t x780 = INT32_MAX;

    t189 = ((x777^(x778^x779))%x780);

    if (t189 != 275546081LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x781 = 26;
	uint64_t x782 = 212LLU;
	uint64_t t190 = 2LLU;

    t190 = ((x781^(x782^x783))%x784);

    if (t190 != 177LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x785 = INT32_MIN;
	int8_t x786 = 2;
	static uint64_t x787 = UINT64_MAX;
	volatile int8_t x788 = INT8_MIN;
	uint64_t t191 = 207LLU;

    t191 = ((x785^(x786^x787))%x788);

    if (t191 != 2147483645LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x789 = UINT16_MAX;
	int16_t x790 = INT16_MAX;
	volatile int8_t x791 = 1;
	volatile int64_t t192 = 35264LL;

    t192 = ((x789^(x790^x791))%x792);

    if (t192 != 32769LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x793 = UINT32_MAX;
	int32_t x794 = -939914162;
	int8_t x795 = INT8_MAX;
	uint64_t x796 = 37931967323172345LLU;
	static volatile uint64_t t193 = 1825115503960LLU;

    t193 = ((x793^(x794^x795))%x796);

    if (t193 != 939914190LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x797 = 49U;
	int64_t x800 = INT64_MAX;
	volatile int64_t t194 = -39768046041LL;

    t194 = ((x797^(x798^x799))%x800);

    if (t194 != 201591354145465773LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x801 = -1;
	static int32_t x803 = INT32_MAX;
	int64_t x804 = 13809319951045276LL;
	volatile int64_t t195 = -10405101LL;

    t195 = ((x801^(x802^x803))%x804);

    if (t195 != 12555627360093068LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x806 = -1;
	static uint32_t x807 = UINT32_MAX;
	volatile uint32_t x808 = 23336U;
	volatile uint32_t t196 = 2185U;

    t196 = ((x805^(x806^x807))%x808);

    if (t196 != 1U) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x809 = INT64_MIN;
	static int64_t x810 = 2553LL;
	int32_t x811 = INT32_MIN;
	int32_t x812 = -1;
	int64_t t197 = -10578261744344731LL;

    t197 = ((x809^(x810^x811))%x812);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x813 = UINT64_MAX;
	int8_t x815 = -2;
	volatile int32_t x816 = INT32_MAX;
	static volatile uint64_t t198 = 21LLU;

    t198 = ((x813^(x814^x815))%x816);

    if (t198 != 2147450884LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x818 = UINT64_MAX;
	int8_t x819 = -1;
	static volatile uint32_t x820 = UINT32_MAX;
	uint64_t t199 = 23780243LLU;

    t199 = ((x817^(x818^x819))%x820);

    if (t199 != 4294934528LLU) { NG(); } else { ; }
	
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

