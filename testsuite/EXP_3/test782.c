
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

uint16_t x10 = 19944U;
uint8_t x16 = UINT8_MAX;
uint8_t x25 = UINT8_MAX;
uint64_t x29 = 26952638824107890LLU;
uint16_t x32 = 9769U;
int64_t x38 = -347366307079516LL;
uint16_t x40 = UINT16_MAX;
int16_t x42 = 12855;
static volatile int8_t x43 = 2;
static volatile int32_t t9 = -1614;
int64_t x46 = -1LL;
static int64_t x48 = 3005833653LL;
static uint32_t x53 = 237400904U;
uint32_t x54 = 26108U;
uint16_t x56 = 18472U;
volatile int8_t x62 = -1;
uint32_t x63 = UINT32_MAX;
uint8_t x65 = 0U;
static int8_t x67 = INT8_MIN;
int8_t x72 = INT8_MAX;
volatile uint32_t x74 = 83334U;
static int32_t x78 = 0;
volatile int8_t x79 = -1;
uint16_t x85 = UINT16_MAX;
volatile uint32_t t20 = 1U;
static int64_t x89 = INT64_MIN;
int64_t x91 = -474007812111LL;
static volatile int16_t x92 = INT16_MIN;
int8_t x94 = INT8_MIN;
uint16_t x95 = 336U;
uint64_t x96 = UINT64_MAX;
uint64_t t22 = 676892770015LLU;
uint16_t x106 = 47U;
uint32_t x111 = 185U;
int16_t x114 = 6843;
int32_t x116 = INT32_MIN;
static int64_t x120 = INT64_MAX;
volatile int64_t t28 = 117874738289662LL;
volatile int16_t x124 = 3;
static int32_t x125 = -1;
int64_t x126 = INT64_MIN;
uint32_t x127 = UINT32_MAX;
int16_t x129 = INT16_MIN;
int64_t t32 = -225550558110683257LL;
int64_t x140 = INT64_MIN;
uint8_t x142 = 0U;
volatile int8_t x148 = -42;
int64_t x149 = INT64_MIN;
int64_t x150 = -1LL;
int8_t x157 = -6;
uint8_t x161 = 0U;
uint16_t x163 = UINT16_MAX;
volatile int64_t x186 = INT64_MIN;
uint64_t x189 = UINT64_MAX;
volatile int16_t x192 = INT16_MAX;
volatile uint64_t t45 = 2960410038718LLU;
uint16_t x201 = UINT16_MAX;
static volatile int8_t x202 = INT8_MIN;
int8_t x206 = -1;
int32_t x221 = -1;
static int64_t x223 = INT64_MIN;
uint8_t x229 = 36U;
static int16_t x235 = INT16_MAX;
static uint16_t x236 = 1U;
int16_t x237 = INT16_MAX;
uint16_t x238 = UINT16_MAX;
int8_t x239 = -1;
int32_t x246 = 52;
int64_t t59 = -9445364LL;
static volatile int16_t x257 = INT16_MIN;
static volatile uint64_t x259 = 2911LLU;
int16_t x264 = INT16_MAX;
static volatile int64_t t63 = -279984368LL;
uint8_t x273 = 2U;
static uint16_t x275 = 1488U;
static volatile uint32_t x281 = UINT32_MAX;
int8_t x284 = INT8_MAX;
volatile int64_t t67 = -1014LL;
uint8_t x285 = 7U;
int8_t x291 = INT8_MAX;
volatile uint64_t t70 = 52LLU;
volatile uint64_t t71 = 30291280930611LLU;
int32_t t72 = -457;
uint8_t x306 = 56U;
uint64_t x307 = 121570504LLU;
volatile int16_t x308 = INT16_MIN;
int64_t x313 = 195188LL;
static volatile int64_t t75 = -119LL;
uint8_t x323 = UINT8_MAX;
uint8_t x336 = 2U;
volatile int64_t t83 = -15480697497560LL;
static uint32_t x349 = 0U;
int64_t x357 = INT64_MIN;
uint64_t x371 = UINT64_MAX;
int64_t x373 = INT64_MIN;
volatile uint64_t t91 = 167297979482LLU;
volatile int16_t x385 = INT16_MIN;
int16_t x388 = INT16_MIN;
int64_t t92 = -165568LL;
static int32_t x389 = -1;
static volatile int32_t t94 = 1;
int8_t x402 = INT8_MIN;
int32_t x407 = INT32_MIN;
volatile int8_t x408 = 1;
volatile int64_t x409 = INT64_MIN;
static uint8_t x412 = 8U;
int16_t x415 = INT16_MIN;
int64_t x422 = 29427997405LL;
volatile int8_t x434 = INT8_MAX;
volatile int32_t x435 = INT32_MAX;
volatile int64_t t103 = 36969833497909283LL;
uint8_t x441 = 1U;
int8_t x449 = -1;
volatile int64_t t108 = 339LL;
static uint8_t x466 = UINT8_MAX;
int32_t x468 = INT32_MIN;
int32_t x471 = INT32_MAX;
int8_t x472 = INT8_MAX;
int64_t x477 = -54859LL;
static int32_t x483 = INT32_MIN;
uint64_t x484 = 3208298072LLU;
int64_t t116 = 113490LL;
int32_t x489 = 630;
volatile uint16_t x493 = 11773U;
int8_t x494 = 25;
volatile uint16_t x496 = UINT16_MAX;
static int32_t t118 = -544313010;
volatile uint16_t x503 = UINT16_MAX;
uint64_t x507 = UINT64_MAX;
volatile int16_t x510 = INT16_MAX;
int64_t t122 = 73697689LL;
static volatile int16_t x534 = -8;
volatile int64_t x536 = 1303256138358697677LL;
int32_t x541 = -1;
int64_t x544 = INT64_MIN;
int32_t x546 = 7;
volatile int16_t x547 = -854;
int16_t x548 = INT16_MAX;
volatile int32_t t131 = 175975;
int8_t x555 = INT8_MIN;
volatile uint64_t t133 = 1113564544991460LLU;
uint32_t x560 = UINT32_MAX;
static volatile int8_t x562 = -1;
int8_t x565 = -1;
static uint8_t x570 = 50U;
uint16_t x572 = 11798U;
volatile int32_t x582 = -69760;
int64_t t141 = 3151427106LL;
static int8_t x589 = -1;
int16_t x591 = 6;
volatile int32_t x593 = INT32_MIN;
int16_t x599 = 3;
int32_t x605 = 968;
volatile uint32_t t146 = 12508076U;
int32_t x609 = -1;
static int64_t t147 = -595116477812807LL;
int16_t x614 = INT16_MAX;
int32_t x615 = -1;
static volatile int32_t t148 = -283585;
uint64_t x631 = UINT64_MAX;
int16_t x635 = INT16_MAX;
int32_t x640 = INT32_MIN;
int8_t x656 = INT8_MIN;
int64_t x660 = INT64_MIN;
volatile int8_t x663 = 0;
int32_t t159 = 4;
int8_t x676 = INT8_MAX;
static uint8_t x680 = 48U;
volatile int32_t t164 = -7733296;
static int32_t x685 = INT32_MIN;
int32_t x688 = INT32_MIN;
static volatile int32_t t165 = -24947001;
int8_t x691 = -1;
int64_t t167 = 12LL;
static int16_t x702 = INT16_MIN;
static volatile int32_t t169 = -147;
volatile int32_t x709 = 4043;
int16_t x710 = -1;
int32_t x720 = -1;
static int8_t x724 = -6;
static uint32_t x726 = UINT32_MAX;
uint16_t x732 = 1U;
static int8_t x734 = INT8_MAX;
int32_t x739 = 348722749;
int16_t x746 = INT16_MAX;
static int8_t x748 = -1;
int32_t x749 = -1;
int32_t x759 = INT32_MAX;
uint64_t t184 = 3604290LLU;
int16_t x770 = 710;
uint16_t x772 = 251U;
volatile int32_t t187 = -18590323;
uint8_t x785 = UINT8_MAX;
volatile uint32_t x788 = 1989404582U;
volatile int64_t x790 = INT64_MIN;
static volatile int64_t t191 = 3459LL;
int64_t x795 = INT64_MAX;
uint8_t x798 = 0U;
int64_t x799 = -1LL;
static int16_t x800 = INT16_MIN;
static int8_t x801 = INT8_MAX;
int64_t t194 = 185LL;


void f0(void) {
    	int32_t x5 = INT32_MIN;
	volatile uint64_t x6 = 580500581806219LLU;
	static int8_t x7 = 0;
	int16_t x8 = -1;
	uint64_t t0 = 1587785LLU;

    t0 = ((x5^x6)&(x7/x8));

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x9 = INT8_MIN;
	int8_t x11 = INT8_MAX;
	int8_t x12 = -1;
	static volatile int32_t t1 = -24;

    t1 = ((x9^x10)&(x11/x12));

    if (t1 != -19968) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = -1;
	volatile uint16_t x14 = 1U;
	int32_t x15 = INT32_MIN;
	static int32_t t2 = 1567371;

    t2 = ((x13^x14)&(x15/x16));

    if (t2 != -8421504) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint8_t x17 = 1U;
	uint64_t x18 = UINT64_MAX;
	int64_t x19 = -1LL;
	int8_t x20 = INT8_MIN;
	volatile uint64_t t3 = 5837740261864LLU;

    t3 = ((x17^x18)&(x19/x20));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x21 = UINT64_MAX;
	static volatile int64_t x22 = INT64_MIN;
	volatile int64_t x23 = -1LL;
	volatile int16_t x24 = 14515;
	uint64_t t4 = 3LLU;

    t4 = ((x21^x22)&(x23/x24));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x26 = -1;
	int32_t x27 = INT32_MAX;
	int8_t x28 = INT8_MAX;
	volatile int32_t t5 = 248;

    t5 = ((x25^x26)&(x27/x28));

    if (t5 != 16909312) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x30 = UINT32_MAX;
	volatile int16_t x31 = INT16_MIN;
	static uint64_t t6 = 16646531382945756LLU;

    t6 = ((x29^x30)&(x31/x32));

    if (t6 != 26952641009496205LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x33 = 14850U;
	static int16_t x34 = INT16_MIN;
	int16_t x35 = INT16_MAX;
	static int16_t x36 = INT16_MIN;
	volatile int32_t t7 = -1;

    t7 = ((x33^x34)&(x35/x36));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x37 = UINT8_MAX;
	uint32_t x39 = 107U;
	int64_t t8 = 4167389297358417LL;

    t8 = ((x37^x38)&(x39/x40));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = INT8_MAX;
	static volatile int16_t x44 = INT16_MIN;

    t9 = ((x41^x42)&(x43/x44));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int16_t x45 = -781;
	static int32_t x47 = -1;
	int64_t t10 = -96175867729658LL;

    t10 = ((x45^x46)&(x47/x48));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x49 = -9376;
	int64_t x50 = -5643539381LL;
	volatile uint16_t x51 = 10U;
	static int64_t x52 = INT64_MAX;
	volatile int64_t t11 = -1294006711304307LL;

    t11 = ((x49^x50)&(x51/x52));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x55 = INT8_MIN;
	uint32_t t12 = 12012106U;

    t12 = ((x53^x54)&(x55/x56));

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x57 = INT64_MIN;
	int8_t x58 = 22;
	static uint64_t x59 = UINT64_MAX;
	uint8_t x60 = 2U;
	volatile uint64_t t13 = 19287738131523LLU;

    t13 = ((x57^x58)&(x59/x60));

    if (t13 != 22LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x61 = UINT16_MAX;
	int32_t x64 = -6237;
	uint32_t t14 = 15030877U;

    t14 = ((x61^x62)&(x63/x64));

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x66 = 515U;
	static int16_t x68 = INT16_MIN;
	uint32_t t15 = 302244936U;

    t15 = ((x65^x66)&(x67/x68));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x69 = INT16_MIN;
	static volatile uint64_t x70 = UINT64_MAX;
	static volatile int64_t x71 = INT64_MAX;
	static uint64_t t16 = 296515838LLU;

    t16 = ((x69^x70)&(x71/x72));

    if (t16 != 16513LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = -245;
	uint32_t x75 = 1126U;
	static volatile uint8_t x76 = 20U;
	static volatile uint32_t t17 = 620689990U;

    t17 = ((x73^x74)&(x75/x76));

    if (t17 != 8U) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x77 = -166;
	int32_t x80 = INT32_MAX;
	int32_t t18 = -1;

    t18 = ((x77^x78)&(x79/x80));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x81 = -1;
	uint32_t x82 = 0U;
	int16_t x83 = -1;
	volatile int16_t x84 = INT16_MIN;
	uint32_t t19 = 1196U;

    t19 = ((x81^x82)&(x83/x84));

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x86 = 8U;
	volatile int16_t x87 = INT16_MIN;
	int32_t x88 = INT32_MIN;

    t20 = ((x85^x86)&(x87/x88));

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x90 = INT16_MIN;
	volatile int64_t t21 = -13LL;

    t21 = ((x89^x90)&(x91/x92));

    if (t21 != 14450688LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x93 = UINT8_MAX;

    t22 = ((x93^x94)&(x95/x96));

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int64_t x97 = INT64_MIN;
	int16_t x98 = INT16_MAX;
	int32_t x99 = 128;
	uint8_t x100 = UINT8_MAX;
	volatile int64_t t23 = 1LL;

    t23 = ((x97^x98)&(x99/x100));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x101 = INT8_MIN;
	static uint32_t x102 = UINT32_MAX;
	volatile int32_t x103 = 108;
	int32_t x104 = -1;
	volatile uint32_t t24 = 251U;

    t24 = ((x101^x102)&(x103/x104));

    if (t24 != 20U) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x105 = -1;
	int64_t x107 = INT64_MIN;
	volatile int16_t x108 = INT16_MIN;
	int64_t t25 = 311639060LL;

    t25 = ((x105^x106)&(x107/x108));

    if (t25 != 281474976710656LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x109 = -53319011046LL;
	int64_t x110 = 124757LL;
	volatile int16_t x112 = INT16_MIN;
	static int64_t t26 = -983433618253LL;

    t26 = ((x109^x110)&(x111/x112));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint32_t x113 = UINT32_MAX;
	uint64_t x115 = 226LLU;
	static volatile uint64_t t27 = 113813262672644LLU;

    t27 = ((x113^x114)&(x115/x116));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x117 = INT32_MIN;
	int64_t x118 = -3137064598516LL;
	int8_t x119 = INT8_MIN;

    t28 = ((x117^x118)&(x119/x120));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x121 = INT64_MAX;
	static int64_t x122 = -1LL;
	int32_t x123 = INT32_MIN;
	int64_t t29 = INT64_MIN;

    t29 = ((x121^x122)&(x123/x124));

    if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x128 = -630039541LL;
	volatile int64_t t30 = -66959520LL;

    t30 = ((x125^x126)&(x127/x128));

    if (t30 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x130 = 25U;
	int16_t x131 = INT16_MIN;
	int32_t x132 = INT32_MIN;
	int32_t t31 = -1;

    t31 = ((x129^x130)&(x131/x132));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x133 = UINT16_MAX;
	volatile int32_t x134 = INT32_MIN;
	int64_t x135 = 178661161168LL;
	static int8_t x136 = INT8_MIN;

    t32 = ((x133^x134)&(x135/x136));

    if (t32 != -2147422705LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x137 = INT16_MIN;
	int32_t x138 = INT32_MAX;
	int16_t x139 = -1;
	static volatile int64_t t33 = 37287889LL;

    t33 = ((x137^x138)&(x139/x140));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint8_t x141 = 43U;
	int8_t x143 = INT8_MAX;
	volatile uint8_t x144 = UINT8_MAX;
	volatile int32_t t34 = -701;

    t34 = ((x141^x142)&(x143/x144));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x145 = INT16_MIN;
	static int64_t x146 = INT64_MAX;
	static uint32_t x147 = 28844U;
	volatile int64_t t35 = 1045544LL;

    t35 = ((x145^x146)&(x147/x148));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x151 = 12287U;
	static uint32_t x152 = 1429U;
	volatile int64_t t36 = 226325841LL;

    t36 = ((x149^x150)&(x151/x152));

    if (t36 != 8LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x153 = INT8_MIN;
	static uint64_t x154 = 272630LLU;
	uint8_t x155 = 44U;
	uint8_t x156 = UINT8_MAX;
	volatile uint64_t t37 = 1589LLU;

    t37 = ((x153^x154)&(x155/x156));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x158 = UINT16_MAX;
	int64_t x159 = -1LL;
	int16_t x160 = INT16_MIN;
	volatile int64_t t38 = -1833LL;

    t38 = ((x157^x158)&(x159/x160));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x162 = -1;
	static uint8_t x164 = UINT8_MAX;
	static int32_t t39 = 3292;

    t39 = ((x161^x162)&(x163/x164));

    if (t39 != 257) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x169 = INT8_MIN;
	int16_t x170 = INT16_MAX;
	volatile uint64_t x171 = 48102458535LLU;
	volatile uint64_t x172 = 215906350491057LLU;
	uint64_t t40 = 244713LLU;

    t40 = ((x169^x170)&(x171/x172));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x173 = -1;
	static volatile uint16_t x174 = 30U;
	volatile uint8_t x175 = 3U;
	volatile uint64_t x176 = UINT64_MAX;
	volatile uint64_t t41 = 4903LLU;

    t41 = ((x173^x174)&(x175/x176));

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x177 = 40799U;
	static int64_t x178 = -1LL;
	int32_t x179 = -1;
	int64_t x180 = INT64_MIN;
	volatile int64_t t42 = 45075535649270410LL;

    t42 = ((x177^x178)&(x179/x180));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x181 = INT8_MIN;
	int8_t x182 = INT8_MAX;
	int16_t x183 = -42;
	int64_t x184 = -47543893776931LL;
	static volatile int64_t t43 = -1300717LL;

    t43 = ((x181^x182)&(x183/x184));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x185 = -1;
	int16_t x187 = -1;
	int32_t x188 = INT32_MAX;
	int64_t t44 = 2093487670803118LL;

    t44 = ((x185^x186)&(x187/x188));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x190 = 1953068712007259085LL;
	volatile int8_t x191 = -1;

    t45 = ((x189^x190)&(x191/x192));

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x193 = -1;
	uint16_t x194 = UINT16_MAX;
	static volatile uint8_t x195 = 11U;
	int8_t x196 = INT8_MIN;
	static volatile int32_t t46 = 252805532;

    t46 = ((x193^x194)&(x195/x196));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x197 = 492546160964660LLU;
	int32_t x198 = -1;
	int32_t x199 = INT32_MIN;
	volatile int32_t x200 = INT32_MIN;
	volatile uint64_t t47 = 95551597345579LLU;

    t47 = ((x197^x198)&(x199/x200));

    if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x203 = INT16_MAX;
	int8_t x204 = -1;
	int32_t t48 = 60374426;

    t48 = ((x201^x202)&(x203/x204));

    if (t48 != -65535) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x205 = -1LL;
	uint16_t x207 = 1497U;
	static uint64_t x208 = UINT64_MAX;
	uint64_t t49 = 1893702332634433053LLU;

    t49 = ((x205^x206)&(x207/x208));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x209 = -1;
	static volatile uint32_t x210 = UINT32_MAX;
	uint32_t x211 = 84495534U;
	static uint8_t x212 = 22U;
	volatile uint32_t t50 = 50U;

    t50 = ((x209^x210)&(x211/x212));

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x213 = 0;
	uint8_t x214 = 35U;
	uint64_t x215 = 292746670111LLU;
	int8_t x216 = INT8_MIN;
	uint64_t t51 = 17889786165250573LLU;

    t51 = ((x213^x214)&(x215/x216));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x217 = -1;
	volatile int32_t x218 = 1851;
	static volatile uint16_t x219 = 2U;
	static int32_t x220 = INT32_MIN;
	volatile int32_t t52 = 18995;

    t52 = ((x217^x218)&(x219/x220));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x222 = INT32_MAX;
	uint64_t x224 = UINT64_MAX;
	uint64_t t53 = 705761489455544916LLU;

    t53 = ((x221^x222)&(x223/x224));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x225 = UINT16_MAX;
	static uint32_t x226 = 30U;
	volatile uint16_t x227 = 28059U;
	int32_t x228 = -14676;
	uint32_t t54 = 493U;

    t54 = ((x225^x226)&(x227/x228));

    if (t54 != 65505U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x230 = 7877U;
	int32_t x231 = INT32_MAX;
	static int64_t x232 = INT64_MAX;
	int64_t t55 = -1683312LL;

    t55 = ((x229^x230)&(x231/x232));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x233 = INT32_MIN;
	int64_t x234 = 1743190619510099LL;
	volatile int64_t t56 = 18LL;

    t56 = ((x233^x234)&(x235/x236));

    if (t56 != 21843LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x240 = 550U;
	uint32_t t57 = 59U;

    t57 = ((x237^x238)&(x239/x240));

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x245 = -1;
	uint8_t x247 = UINT8_MAX;
	static int64_t x248 = -1LL;
	volatile int64_t t58 = 304561845LL;

    t58 = ((x245^x246)&(x247/x248));

    if (t58 != -255LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x249 = 3214LL;
	int32_t x250 = INT32_MAX;
	int8_t x251 = INT8_MIN;
	volatile int8_t x252 = INT8_MIN;

    t59 = ((x249^x250)&(x251/x252));

    if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x253 = 28654446;
	int64_t x254 = 412LL;
	int16_t x255 = INT16_MIN;
	static int16_t x256 = -1;
	volatile int64_t t60 = -65357LL;

    t60 = ((x253^x254)&(x255/x256));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x258 = INT8_MAX;
	static int64_t x260 = -1LL;
	volatile uint64_t t61 = 130914LLU;

    t61 = ((x257^x258)&(x259/x260));

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x261 = -3948409393LL;
	uint32_t x262 = 155848U;
	volatile int16_t x263 = -1;
	int64_t t62 = 244408LL;

    t62 = ((x261^x262)&(x263/x264));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x265 = -50707227979910LL;
	int32_t x266 = INT32_MIN;
	uint16_t x267 = 436U;
	int64_t x268 = -31LL;

    t63 = ((x265^x266)&(x267/x268));

    if (t63 != 50707687296882LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x269 = INT16_MAX;
	static int32_t x270 = INT32_MIN;
	uint64_t x271 = 1LLU;
	static int8_t x272 = 2;
	volatile uint64_t t64 = 5346135614736LLU;

    t64 = ((x269^x270)&(x271/x272));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x274 = -66;
	int8_t x276 = INT8_MIN;
	int32_t t65 = 63541;

    t65 = ((x273^x274)&(x275/x276));

    if (t65 != -76) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x277 = -1;
	int8_t x278 = -1;
	static int64_t x279 = -114147662798LL;
	static int16_t x280 = INT16_MIN;
	volatile int64_t t66 = -76LL;

    t66 = ((x277^x278)&(x279/x280));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x282 = -53697936LL;
	volatile int8_t x283 = 4;

    t67 = ((x281^x282)&(x283/x284));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x286 = -13812500;
	uint8_t x287 = UINT8_MAX;
	static uint8_t x288 = 5U;
	volatile int32_t t68 = -6;

    t68 = ((x285^x286)&(x287/x288));

    if (t68 != 35) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x289 = INT32_MIN;
	int32_t x290 = 108297;
	static volatile int64_t x292 = INT64_MAX;
	static int64_t t69 = -3135372095101666583LL;

    t69 = ((x289^x290)&(x291/x292));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint64_t x293 = 0LLU;
	static volatile int32_t x294 = -1;
	uint64_t x295 = UINT64_MAX;
	volatile uint64_t x296 = 1996216059378621140LLU;

    t70 = ((x293^x294)&(x295/x296));

    if (t70 != 9LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x297 = -4366335;
	static int32_t x298 = INT32_MIN;
	uint32_t x299 = 3704571U;
	uint64_t x300 = UINT64_MAX;

    t71 = ((x297^x298)&(x299/x300));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x301 = -42975;
	int8_t x302 = INT8_MAX;
	volatile int16_t x303 = INT16_MIN;
	static int8_t x304 = INT8_MIN;

    t72 = ((x301^x302)&(x303/x304));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x305 = -1;
	uint64_t t73 = 15LLU;

    t73 = ((x305^x306)&(x307/x308));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x309 = INT32_MIN;
	uint32_t x310 = UINT32_MAX;
	int16_t x311 = 1;
	int8_t x312 = INT8_MAX;
	uint32_t t74 = 14674401U;

    t74 = ((x309^x310)&(x311/x312));

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x314 = INT64_MIN;
	int8_t x315 = 43;
	static uint32_t x316 = 20U;

    t75 = ((x313^x314)&(x315/x316));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x317 = 1U;
	static uint8_t x318 = 30U;
	volatile uint8_t x319 = UINT8_MAX;
	static uint64_t x320 = UINT64_MAX;
	uint64_t t76 = 63160065623392LLU;

    t76 = ((x317^x318)&(x319/x320));

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x321 = -1;
	int16_t x322 = INT16_MAX;
	int8_t x324 = INT8_MAX;
	static int32_t t77 = 453848656;

    t77 = ((x321^x322)&(x323/x324));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x325 = INT64_MAX;
	int16_t x326 = INT16_MIN;
	static int64_t x327 = -1LL;
	int8_t x328 = INT8_MIN;
	int64_t t78 = 0LL;

    t78 = ((x325^x326)&(x327/x328));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x329 = 159846067661LL;
	static int8_t x330 = INT8_MAX;
	uint16_t x331 = 414U;
	volatile int32_t x332 = 1581;
	volatile int64_t t79 = -5LL;

    t79 = ((x329^x330)&(x331/x332));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x333 = INT16_MIN;
	int8_t x334 = 5;
	uint32_t x335 = 225U;
	static uint32_t t80 = 1253474518U;

    t80 = ((x333^x334)&(x335/x336));

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x337 = -1;
	volatile int32_t x338 = INT32_MIN;
	uint8_t x339 = 24U;
	volatile int16_t x340 = INT16_MAX;
	volatile int32_t t81 = -479742;

    t81 = ((x337^x338)&(x339/x340));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x341 = INT8_MIN;
	uint16_t x342 = 1U;
	int32_t x343 = INT32_MIN;
	volatile int16_t x344 = INT16_MAX;
	volatile int32_t t82 = 426045697;

    t82 = ((x341^x342)&(x343/x344));

    if (t82 != -65664) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x345 = -1;
	int64_t x346 = 186LL;
	int32_t x347 = INT32_MIN;
	static uint32_t x348 = 4U;

    t83 = ((x345^x346)&(x347/x348));

    if (t83 != 536870912LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x350 = 3118877057LLU;
	volatile uint16_t x351 = 451U;
	int8_t x352 = INT8_MAX;
	uint64_t t84 = 2064582650LLU;

    t84 = ((x349^x350)&(x351/x352));

    if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x353 = INT8_MIN;
	int64_t x354 = INT64_MAX;
	uint32_t x355 = UINT32_MAX;
	uint32_t x356 = UINT32_MAX;
	volatile int64_t t85 = -3250240765LL;

    t85 = ((x353^x354)&(x355/x356));

    if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x358 = INT8_MIN;
	int64_t x359 = -11675410272623LL;
	int64_t x360 = INT64_MAX;
	int64_t t86 = -2364753116638466LL;

    t86 = ((x357^x358)&(x359/x360));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x361 = INT8_MIN;
	int32_t x362 = INT32_MIN;
	int16_t x363 = 193;
	uint16_t x364 = 2249U;
	volatile int32_t t87 = 0;

    t87 = ((x361^x362)&(x363/x364));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x365 = 0U;
	uint64_t x366 = UINT64_MAX;
	uint16_t x367 = 1580U;
	static int32_t x368 = INT32_MAX;
	volatile uint64_t t88 = 817100LLU;

    t88 = ((x365^x366)&(x367/x368));

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x369 = 28112293U;
	int8_t x370 = INT8_MIN;
	int16_t x372 = INT16_MIN;
	static uint64_t t89 = 1369433801794623337LLU;

    t89 = ((x369^x370)&(x371/x372));

    if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x374 = -1LL;
	uint64_t x375 = UINT64_MAX;
	uint64_t x376 = UINT64_MAX;
	volatile uint64_t t90 = 3186LLU;

    t90 = ((x373^x374)&(x375/x376));

    if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x381 = INT16_MIN;
	int32_t x382 = INT32_MIN;
	uint64_t x383 = 16955LLU;
	int16_t x384 = INT16_MAX;

    t91 = ((x381^x382)&(x383/x384));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int64_t x386 = INT64_MIN;
	int16_t x387 = INT16_MIN;

    t92 = ((x385^x386)&(x387/x388));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x390 = INT64_MAX;
	int16_t x391 = 926;
	volatile uint8_t x392 = 45U;
	int64_t t93 = 674323LL;

    t93 = ((x389^x390)&(x391/x392));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x393 = INT32_MIN;
	volatile int8_t x394 = -1;
	int8_t x395 = -1;
	uint16_t x396 = 7232U;

    t94 = ((x393^x394)&(x395/x396));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x397 = INT64_MIN;
	volatile uint64_t x398 = 40LLU;
	int16_t x399 = -1;
	volatile int64_t x400 = 920293756812480458LL;
	uint64_t t95 = 16457108894LLU;

    t95 = ((x397^x398)&(x399/x400));

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x401 = INT8_MIN;
	int64_t x403 = 14414818LL;
	int32_t x404 = INT32_MIN;
	static volatile int64_t t96 = -40LL;

    t96 = ((x401^x402)&(x403/x404));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x405 = UINT16_MAX;
	static int16_t x406 = -1;
	int32_t t97 = INT32_MIN;

    t97 = ((x405^x406)&(x407/x408));

    if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x410 = INT32_MAX;
	uint16_t x411 = 86U;
	int64_t t98 = -10646496620423LL;

    t98 = ((x409^x410)&(x411/x412));

    if (t98 != 10LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x413 = 9U;
	static int16_t x414 = -1;
	uint16_t x416 = 36U;
	int32_t t99 = 146;

    t99 = ((x413^x414)&(x415/x416));

    if (t99 != -910) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x417 = INT8_MIN;
	uint16_t x418 = 0U;
	int16_t x419 = -1;
	static int8_t x420 = -1;
	static volatile int32_t t100 = 5533740;

    t100 = ((x417^x418)&(x419/x420));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x421 = -1;
	uint32_t x423 = UINT32_MAX;
	int64_t x424 = INT64_MAX;
	volatile int64_t t101 = -3551889169639911015LL;

    t101 = ((x421^x422)&(x423/x424));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x425 = 166575U;
	static uint64_t x426 = UINT64_MAX;
	static int8_t x427 = -1;
	int8_t x428 = INT8_MIN;
	volatile uint64_t t102 = 17650978891461556LLU;

    t102 = ((x425^x426)&(x427/x428));

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x433 = -9874;
	static int64_t x436 = INT64_MIN;

    t103 = ((x433^x434)&(x435/x436));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x437 = INT8_MIN;
	int8_t x438 = INT8_MIN;
	int8_t x439 = -1;
	volatile uint16_t x440 = 1U;
	volatile int32_t t104 = 4;

    t104 = ((x437^x438)&(x439/x440));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x442 = -26;
	uint64_t x443 = 2838482451750LLU;
	uint8_t x444 = 50U;
	uint64_t t105 = 11429017254LLU;

    t105 = ((x441^x442)&(x443/x444));

    if (t105 != 56769649027LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x445 = -1;
	int32_t x446 = -1;
	int8_t x447 = INT8_MAX;
	uint32_t x448 = 1085141451U;
	uint32_t t106 = 575U;

    t106 = ((x445^x446)&(x447/x448));

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint16_t x450 = 373U;
	int64_t x451 = -37LL;
	static volatile int16_t x452 = 300;
	int64_t t107 = 1026602129975655LL;

    t107 = ((x449^x450)&(x451/x452));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x453 = -14;
	static int64_t x454 = 3134LL;
	volatile uint8_t x455 = 5U;
	volatile int8_t x456 = -1;

    t108 = ((x453^x454)&(x455/x456));

    if (t108 != -3128LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x457 = INT16_MAX;
	static int32_t x458 = -1;
	uint32_t x459 = 3U;
	int32_t x460 = INT32_MAX;
	static volatile uint32_t t109 = 24U;

    t109 = ((x457^x458)&(x459/x460));

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x461 = 296639439LLU;
	int32_t x462 = INT32_MIN;
	int32_t x463 = INT32_MAX;
	int64_t x464 = -3503119010942953869LL;
	uint64_t t110 = 3467602106LLU;

    t110 = ((x461^x462)&(x463/x464));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int64_t x465 = INT64_MIN;
	int32_t x467 = 1;
	volatile int64_t t111 = -1531375974655LL;

    t111 = ((x465^x466)&(x467/x468));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int8_t x469 = INT8_MAX;
	int8_t x470 = -1;
	volatile int32_t t112 = -167557;

    t112 = ((x469^x470)&(x471/x472));

    if (t112 != 16909312) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x473 = 6U;
	static uint8_t x474 = UINT8_MAX;
	static int8_t x475 = INT8_MIN;
	uint32_t x476 = UINT32_MAX;
	static volatile uint32_t t113 = 2U;

    t113 = ((x473^x474)&(x475/x476));

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x478 = INT64_MAX;
	int32_t x479 = INT32_MAX;
	int16_t x480 = -1;
	int64_t t114 = INT64_MIN;

    t114 = ((x477^x478)&(x479/x480));

    if (t114 != INT64_MIN) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x481 = 2821U;
	int8_t x482 = INT8_MAX;
	uint64_t t115 = 119351826323712LLU;

    t115 = ((x481^x482)&(x483/x484));

    if (t115 != 2088LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x485 = INT16_MIN;
	int16_t x486 = INT16_MAX;
	volatile int32_t x487 = INT32_MIN;
	int64_t x488 = INT64_MAX;

    t116 = ((x485^x486)&(x487/x488));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x490 = -3;
	volatile int8_t x491 = 0;
	uint16_t x492 = UINT16_MAX;
	static int32_t t117 = -1;

    t117 = ((x489^x490)&(x491/x492));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x495 = 1U;

    t118 = ((x493^x494)&(x495/x496));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x497 = INT64_MIN;
	int16_t x498 = -1640;
	volatile uint16_t x499 = UINT16_MAX;
	volatile int8_t x500 = 20;
	volatile int64_t t119 = -45216LL;

    t119 = ((x497^x498)&(x499/x500));

    if (t119 != 2184LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x501 = -1;
	uint16_t x502 = 80U;
	int8_t x504 = INT8_MIN;
	volatile int32_t t120 = 789999745;

    t120 = ((x501^x502)&(x503/x504));

    if (t120 != -511) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x505 = INT16_MIN;
	int32_t x506 = 20;
	uint64_t x508 = 773825934718538233LLU;
	volatile uint64_t t121 = 4197669056606LLU;

    t121 = ((x505^x506)&(x507/x508));

    if (t121 != 20LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x509 = INT64_MIN;
	volatile int8_t x511 = INT8_MIN;
	volatile uint8_t x512 = 19U;

    t122 = ((x509^x510)&(x511/x512));

    if (t122 != -9223372036854743046LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x513 = UINT64_MAX;
	int8_t x514 = INT8_MIN;
	int8_t x515 = INT8_MIN;
	static uint16_t x516 = 26460U;
	uint64_t t123 = 1535090784340900198LLU;

    t123 = ((x513^x514)&(x515/x516));

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x517 = INT32_MAX;
	int8_t x518 = 2;
	uint64_t x519 = UINT64_MAX;
	int16_t x520 = INT16_MIN;
	volatile uint64_t t124 = 1122630016180775739LLU;

    t124 = ((x517^x518)&(x519/x520));

    if (t124 != 1LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x521 = -11441;
	int8_t x522 = -1;
	int32_t x523 = INT32_MIN;
	uint64_t x524 = 395422341LLU;
	volatile uint64_t t125 = 8LLU;

    t125 = ((x521^x522)&(x523/x524));

    if (t125 != 1200LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x525 = 257234771921426502LLU;
	int8_t x526 = 30;
	uint32_t x527 = 194862U;
	volatile int64_t x528 = 62LL;
	uint64_t t126 = 258888434LLU;

    t126 = ((x525^x526)&(x527/x528));

    if (t126 != 2112LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x529 = INT8_MAX;
	static volatile uint32_t x530 = 423980U;
	static int32_t x531 = INT32_MIN;
	int64_t x532 = -3405887617507374LL;
	volatile int64_t t127 = 56LL;

    t127 = ((x529^x530)&(x531/x532));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x533 = -1LL;
	int64_t x535 = INT64_MAX;
	volatile int64_t t128 = -28225707897LL;

    t128 = ((x533^x534)&(x535/x536));

    if (t128 != 7LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x537 = 1822085U;
	uint8_t x538 = UINT8_MAX;
	int32_t x539 = 56703;
	int32_t x540 = -838247660;
	static volatile uint32_t t129 = 13779874U;

    t129 = ((x537^x538)&(x539/x540));

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x542 = INT32_MIN;
	static uint16_t x543 = 1U;
	int64_t t130 = 26563844920944049LL;

    t130 = ((x541^x542)&(x543/x544));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x545 = INT8_MIN;

    t131 = ((x545^x546)&(x547/x548));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x549 = INT16_MIN;
	uint8_t x550 = UINT8_MAX;
	int16_t x551 = INT16_MIN;
	int32_t x552 = INT32_MIN;
	int32_t t132 = 1314;

    t132 = ((x549^x550)&(x551/x552));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x553 = INT16_MIN;
	uint64_t x554 = 190474772173879LLU;
	uint64_t x556 = 12214956989504910LLU;

    t133 = ((x553^x554)&(x555/x556));

    if (t133 != 1062LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x557 = 5U;
	static uint8_t x558 = 19U;
	int32_t x559 = 3;
	volatile uint32_t t134 = 3933U;

    t134 = ((x557^x558)&(x559/x560));

    if (t134 != 0U) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x561 = 6;
	int32_t x563 = -818;
	uint8_t x564 = UINT8_MAX;
	static int32_t t135 = 896465888;

    t135 = ((x561^x562)&(x563/x564));

    if (t135 != -7) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x566 = 115U;
	uint8_t x567 = 4U;
	static int32_t x568 = INT32_MIN;
	int32_t t136 = 0;

    t136 = ((x565^x566)&(x567/x568));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x569 = -17437004772526017LL;
	int64_t x571 = -2358LL;
	int64_t t137 = -68446539037285951LL;

    t137 = ((x569^x570)&(x571/x572));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x573 = -1;
	uint64_t x574 = 533139378535LLU;
	int64_t x575 = INT64_MIN;
	int32_t x576 = INT32_MAX;
	uint64_t t138 = 1887322339562LLU;

    t138 = ((x573^x574)&(x575/x576));

    if (t138 != 18446743536275205784LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x577 = 2;
	int64_t x578 = INT64_MIN;
	uint64_t x579 = 78501150452LLU;
	int16_t x580 = INT16_MAX;
	volatile uint64_t t139 = 25LLU;

    t139 = ((x577^x578)&(x579/x580));

    if (t139 != 2LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x581 = -1;
	uint32_t x583 = 31624214U;
	uint16_t x584 = 219U;
	volatile uint32_t t140 = 56U;

    t140 = ((x581^x582)&(x583/x584));

    if (t140 != 4114U) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x585 = INT32_MIN;
	uint16_t x586 = 11856U;
	int64_t x587 = INT64_MIN;
	volatile int32_t x588 = -14907;

    t141 = ((x585^x586)&(x587/x588));

    if (t141 != 618726546220096LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint8_t x590 = UINT8_MAX;
	uint32_t x592 = UINT32_MAX;
	uint32_t t142 = 821573417U;

    t142 = ((x589^x590)&(x591/x592));

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x594 = INT16_MIN;
	static int8_t x595 = -1;
	int32_t x596 = INT32_MIN;
	int32_t t143 = 0;

    t143 = ((x593^x594)&(x595/x596));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x597 = INT64_MIN;
	int32_t x598 = INT32_MAX;
	int64_t x600 = -1LL;
	int64_t t144 = -4862031529424LL;

    t144 = ((x597^x598)&(x599/x600));

    if (t144 != -9223372034707292163LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int16_t x601 = -1;
	int16_t x602 = INT16_MIN;
	static int8_t x603 = INT8_MIN;
	int32_t x604 = INT32_MIN;
	volatile int32_t t145 = -1;

    t145 = ((x601^x602)&(x603/x604));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x606 = INT16_MIN;
	volatile uint32_t x607 = 788U;
	uint16_t x608 = 19U;

    t146 = ((x605^x606)&(x607/x608));

    if (t146 != 8U) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x610 = UINT32_MAX;
	static uint16_t x611 = 443U;
	static int64_t x612 = 31168814360459LL;

    t147 = ((x609^x610)&(x611/x612));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint8_t x613 = 30U;
	int16_t x616 = -2;

    t148 = ((x613^x614)&(x615/x616));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x621 = -188;
	uint32_t x622 = 36319905U;
	int32_t x623 = INT32_MIN;
	volatile uint16_t x624 = 2U;
	uint32_t t149 = 3760U;

    t149 = ((x621^x622)&(x623/x624));

    if (t149 != 3221225472U) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x625 = -9;
	static int64_t x626 = INT64_MAX;
	volatile int32_t x627 = INT32_MIN;
	int8_t x628 = 30;
	static volatile int64_t t150 = -3129LL;

    t150 = ((x625^x626)&(x627/x628));

    if (t150 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x629 = 1373U;
	volatile int16_t x630 = -1;
	volatile int64_t x632 = 461696914661567LL;
	uint64_t t151 = 57260LLU;

    t151 = ((x629^x630)&(x631/x632));

    if (t151 != 38914LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x633 = 816722U;
	volatile uint32_t x634 = 3456709U;
	int16_t x636 = -12977;
	uint32_t t152 = 2073U;

    t152 = ((x633^x634)&(x635/x636));

    if (t152 != 3721366U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x637 = 2019U;
	static int32_t x638 = -1;
	static uint8_t x639 = 32U;
	int32_t t153 = 59044548;

    t153 = ((x637^x638)&(x639/x640));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x641 = INT32_MIN;
	int32_t x642 = -154632524;
	uint8_t x643 = UINT8_MAX;
	int8_t x644 = 30;
	static volatile int32_t t154 = 276721;

    t154 = ((x641^x642)&(x643/x644));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x645 = 37U;
	uint64_t x646 = 20994437293411LLU;
	int32_t x647 = -1;
	volatile int64_t x648 = INT64_MAX;
	volatile uint64_t t155 = 3593975464725LLU;

    t155 = ((x645^x646)&(x647/x648));

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x649 = -1;
	int8_t x650 = 1;
	int64_t x651 = 74043317555659LL;
	static int64_t x652 = INT64_MAX;
	volatile int64_t t156 = 1491014694LL;

    t156 = ((x649^x650)&(x651/x652));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x653 = 59U;
	uint8_t x654 = 8U;
	int64_t x655 = -22262824557LL;
	int64_t t157 = -201957465062712LL;

    t157 = ((x653^x654)&(x655/x656));

    if (t157 != 48LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x657 = -1;
	int64_t x658 = -32210281191553209LL;
	int64_t x659 = INT64_MIN;
	int64_t t158 = 52187443766792LL;

    t158 = ((x657^x658)&(x659/x660));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x661 = -6;
	int16_t x662 = 1023;
	int16_t x664 = INT16_MAX;

    t159 = ((x661^x662)&(x663/x664));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x665 = 62U;
	int16_t x666 = -53;
	uint8_t x667 = 0U;
	static int8_t x668 = 4;
	int32_t t160 = -31360401;

    t160 = ((x665^x666)&(x667/x668));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x669 = INT32_MAX;
	int8_t x670 = -1;
	int64_t x671 = -1LL;
	int8_t x672 = -37;
	static volatile int64_t t161 = -275087041340268LL;

    t161 = ((x669^x670)&(x671/x672));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int32_t x673 = INT32_MIN;
	int16_t x674 = -1;
	static int16_t x675 = INT16_MIN;
	volatile int32_t t162 = 9;

    t162 = ((x673^x674)&(x675/x676));

    if (t162 != 2147483390) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x677 = -8LL;
	uint16_t x678 = UINT16_MAX;
	int16_t x679 = 2;
	static int64_t t163 = -3518198591326LL;

    t163 = ((x677^x678)&(x679/x680));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x681 = -14;
	int16_t x682 = 992;
	int32_t x683 = INT32_MIN;
	int16_t x684 = 5694;

    t164 = ((x681^x682)&(x683/x684));

    if (t164 != -377856) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x686 = INT8_MAX;
	int32_t x687 = INT32_MIN;

    t165 = ((x685^x686)&(x687/x688));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x689 = 1;
	int64_t x690 = INT64_MIN;
	int32_t x692 = -5795720;
	int64_t t166 = 6432023LL;

    t166 = ((x689^x690)&(x691/x692));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int32_t x693 = INT32_MAX;
	static int64_t x694 = -36393LL;
	int64_t x695 = -28718056988997024LL;
	int32_t x696 = INT32_MIN;

    t167 = ((x693^x694)&(x695/x696));

    if (t167 != 3072LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x697 = 10U;
	static uint32_t x698 = UINT32_MAX;
	uint16_t x699 = 107U;
	uint64_t x700 = 1180526348524852677LLU;
	uint64_t t168 = 6610643318659LLU;

    t168 = ((x697^x698)&(x699/x700));

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x701 = 236U;
	static int8_t x703 = INT8_MAX;
	uint16_t x704 = UINT16_MAX;

    t169 = ((x701^x702)&(x703/x704));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x705 = UINT32_MAX;
	volatile uint8_t x706 = 78U;
	int16_t x707 = INT16_MAX;
	int32_t x708 = INT32_MIN;
	volatile uint32_t t170 = 40U;

    t170 = ((x705^x706)&(x707/x708));

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint16_t x711 = 36U;
	int8_t x712 = INT8_MIN;
	volatile int32_t t171 = -4;

    t171 = ((x709^x710)&(x711/x712));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x713 = -1;
	int64_t x714 = 2762LL;
	volatile int16_t x715 = -6;
	static int16_t x716 = INT16_MIN;
	volatile int64_t t172 = 38064959831539LL;

    t172 = ((x713^x714)&(x715/x716));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x717 = 6843240U;
	volatile int8_t x718 = -1;
	static int32_t x719 = INT32_MAX;
	volatile uint32_t t173 = 2620U;

    t173 = ((x717^x718)&(x719/x720));

    if (t173 != 2147483649U) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x721 = UINT16_MAX;
	volatile int64_t x722 = INT64_MAX;
	static volatile int64_t x723 = INT64_MIN;
	int64_t t174 = 41679812747188LL;

    t174 = ((x721^x722)&(x723/x724));

    if (t174 != 1537228672809107456LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x725 = UINT16_MAX;
	static int16_t x727 = INT16_MIN;
	int16_t x728 = INT16_MIN;
	static volatile uint32_t t175 = 0U;

    t175 = ((x725^x726)&(x727/x728));

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x729 = UINT32_MAX;
	int8_t x730 = 0;
	volatile uint16_t x731 = 232U;
	volatile uint32_t t176 = 7129U;

    t176 = ((x729^x730)&(x731/x732));

    if (t176 != 232U) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x733 = 950U;
	int64_t x735 = 95080665LL;
	uint16_t x736 = 923U;
	int64_t t177 = 1684163329725919639LL;

    t177 = ((x733^x734)&(x735/x736));

    if (t177 != 576LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x737 = 3;
	int32_t x738 = INT32_MAX;
	int64_t x740 = -2428LL;
	static int64_t t178 = -8575438887LL;

    t178 = ((x737^x738)&(x739/x740));

    if (t178 != 2147340020LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x741 = -6;
	uint64_t x742 = UINT64_MAX;
	int32_t x743 = 1910729;
	uint64_t x744 = 79972LLU;
	uint64_t t179 = 524337367LLU;

    t179 = ((x741^x742)&(x743/x744));

    if (t179 != 5LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x745 = INT16_MAX;
	volatile uint32_t x747 = UINT32_MAX;
	uint32_t t180 = 82879U;

    t180 = ((x745^x746)&(x747/x748));

    if (t180 != 0U) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x750 = INT16_MIN;
	volatile int32_t x751 = INT32_MIN;
	static volatile int8_t x752 = INT8_MAX;
	int32_t t181 = 15278;

    t181 = ((x749^x750)&(x751/x752));

    if (t181 != 31736) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x753 = UINT8_MAX;
	int8_t x754 = 0;
	uint64_t x755 = UINT64_MAX;
	uint64_t x756 = 65523296711LLU;
	volatile uint64_t t182 = 7572LLU;

    t182 = ((x753^x754)&(x755/x756));

    if (t182 != 203LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint64_t x757 = 1LLU;
	uint16_t x758 = 36U;
	static int16_t x760 = INT16_MIN;
	volatile uint64_t t183 = 712590662LLU;

    t183 = ((x757^x758)&(x759/x760));

    if (t183 != 1LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint8_t x761 = 10U;
	uint64_t x762 = UINT64_MAX;
	static int64_t x763 = 75235473516LL;
	volatile int16_t x764 = -29;

    t184 = ((x761^x762)&(x763/x764));

    if (t184 != 18446744071115224944LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint8_t x765 = UINT8_MAX;
	static int64_t x766 = INT64_MIN;
	int8_t x767 = INT8_MIN;
	uint64_t x768 = 1579301693757LLU;
	uint64_t t185 = 1418694308463873844LLU;

    t185 = ((x765^x766)&(x767/x768));

    if (t185 != 60LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x769 = INT8_MIN;
	int64_t x771 = 45092797709971LL;
	static int64_t t186 = -32870380LL;

    t186 = ((x769^x770)&(x771/x772));

    if (t186 != 179652580356LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x773 = -7;
	volatile int32_t x774 = -1;
	static int32_t x775 = INT32_MIN;
	static volatile int8_t x776 = INT8_MIN;

    t187 = ((x773^x774)&(x775/x776));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x777 = UINT16_MAX;
	uint8_t x778 = 11U;
	static int16_t x779 = INT16_MIN;
	int16_t x780 = -8;
	volatile int32_t t188 = -9;

    t188 = ((x777^x778)&(x779/x780));

    if (t188 != 4096) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x781 = 265410309LLU;
	static uint64_t x782 = UINT64_MAX;
	uint8_t x783 = 1U;
	int16_t x784 = INT16_MIN;
	uint64_t t189 = 170547679257614LLU;

    t189 = ((x781^x782)&(x783/x784));

    if (t189 != 0LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int16_t x786 = -1;
	int16_t x787 = INT16_MIN;
	uint32_t t190 = 0U;

    t190 = ((x785^x786)&(x787/x788));

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint16_t x789 = 11929U;
	int64_t x791 = INT64_MIN;
	volatile int8_t x792 = -34;

    t191 = ((x789^x790)&(x791/x792));

    if (t191 != 641LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x793 = INT8_MAX;
	volatile int64_t x794 = -213367341360875LL;
	uint16_t x796 = 29521U;
	static int64_t t192 = 1073LL;

    t192 = ((x793^x794)&(x795/x796));

    if (t192 != 312398758090760LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x797 = INT16_MAX;
	int64_t t193 = -2LL;

    t193 = ((x797^x798)&(x799/x800));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x802 = -80463;
	int16_t x803 = INT16_MIN;
	int64_t x804 = 1244690470LL;

    t194 = ((x801^x802)&(x803/x804));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x805 = -26270726798305781LL;
	static uint32_t x806 = 173309U;
	int16_t x807 = -1;
	int64_t x808 = INT64_MAX;
	int64_t t195 = -547LL;

    t195 = ((x805^x806)&(x807/x808));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x809 = -1;
	int16_t x810 = INT16_MAX;
	static int16_t x811 = INT16_MIN;
	volatile int64_t x812 = INT64_MIN;
	volatile int64_t t196 = 2363974103LL;

    t196 = ((x809^x810)&(x811/x812));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x813 = 1;
	uint8_t x814 = UINT8_MAX;
	static int64_t x815 = INT64_MIN;
	static int16_t x816 = 43;
	volatile int64_t t197 = -98693LL;

    t197 = ((x813^x814)&(x815/x816));

    if (t197 != 126LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x817 = 55235688LL;
	int64_t x818 = -12461348LL;
	int64_t x819 = 185811660069055LL;
	int64_t x820 = INT64_MIN;
	volatile int64_t t198 = -3631618294817382196LL;

    t198 = ((x817^x818)&(x819/x820));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x821 = INT32_MAX;
	static int16_t x822 = INT16_MIN;
	volatile int16_t x823 = INT16_MAX;
	static volatile int16_t x824 = -1;
	int32_t t199 = 109702556;

    t199 = ((x821^x822)&(x823/x824));

    if (t199 != -2147483647) { NG(); } else { ; }
	
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

