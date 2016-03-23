
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

int64_t x2 = INT64_MAX;
uint16_t x3 = 55U;
volatile uint32_t x4 = 10928U;
uint64_t x5 = 25879012047LLU;
volatile uint64_t t1 = 107288078639LLU;
int64_t x15 = 9844604779LL;
static uint32_t x21 = 2U;
int32_t x27 = INT32_MAX;
int64_t x31 = -1LL;
static uint32_t x39 = UINT32_MAX;
int16_t x43 = -3484;
uint64_t x49 = UINT64_MAX;
volatile uint64_t t12 = 1760868LLU;
int16_t x76 = 1439;
int32_t t21 = 194;
static int32_t x93 = INT32_MIN;
int8_t x101 = INT8_MIN;
volatile int64_t t25 = -517526292LL;
uint16_t x115 = 5U;
uint64_t x122 = 30467932LLU;
uint16_t x126 = 26540U;
static int8_t x127 = -8;
int64_t x128 = -1LL;
uint32_t x131 = UINT32_MAX;
static int64_t x132 = INT64_MIN;
int32_t t32 = -395;
static uint64_t x139 = 279083199888745LLU;
uint64_t x141 = UINT64_MAX;
volatile int32_t x144 = INT32_MAX;
static int32_t x151 = INT32_MIN;
static uint32_t x152 = 3U;
volatile uint32_t t36 = 8535U;
volatile uint8_t x154 = 37U;
int8_t x159 = 0;
int64_t x162 = -246587458LL;
uint64_t x166 = UINT64_MAX;
volatile int64_t t43 = -1LL;
int16_t x184 = INT16_MAX;
volatile int64_t t45 = -27459322230196464LL;
uint8_t x190 = 7U;
int16_t x193 = -1;
static uint64_t x194 = 383899439492LLU;
uint16_t x197 = UINT16_MAX;
int32_t x202 = INT32_MIN;
static uint64_t x204 = 728706603LLU;
volatile int8_t x205 = -5;
int16_t x208 = -1;
static int16_t x219 = INT16_MIN;
uint8_t x220 = 46U;
static int32_t x223 = 383133;
int32_t x227 = -1;
volatile uint32_t x234 = UINT32_MAX;
int8_t x237 = -6;
int64_t x238 = 63708406944263LL;
static int8_t x240 = INT8_MIN;
volatile uint64_t x244 = 1501006LLU;
volatile uint64_t x246 = 22163613683981LLU;
volatile int64_t x260 = INT64_MAX;
volatile int64_t t63 = -927LL;
uint8_t x261 = 1U;
uint8_t x264 = 4U;
int32_t x270 = INT32_MAX;
static volatile uint32_t x272 = 1267U;
volatile int64_t x275 = -112602648781009182LL;
uint32_t x280 = 54011U;
int16_t x282 = 328;
volatile int64_t t70 = -6LL;
int16_t x289 = 0;
volatile uint64_t t71 = 12474215407LLU;
static int8_t x298 = -1;
int8_t x299 = -1;
static volatile int8_t x308 = INT8_MIN;
int8_t x310 = INT8_MIN;
static volatile int64_t t76 = -26082656LL;
volatile int16_t x313 = INT16_MIN;
uint32_t x329 = 583199263U;
static uint64_t x334 = UINT64_MAX;
int8_t x335 = INT8_MIN;
uint64_t t81 = 25287382LLU;
uint16_t x340 = 4U;
int64_t x342 = INT64_MIN;
static int32_t x350 = 75267405;
static volatile int64_t t85 = 34721LL;
uint8_t x355 = 6U;
volatile int8_t x358 = -1;
int8_t x366 = INT8_MIN;
volatile int32_t x378 = -13;
int32_t x381 = INT32_MIN;
int8_t x387 = 10;
uint64_t t95 = 298394LLU;
static int16_t x398 = -2;
static uint64_t x399 = 45636701LLU;
uint8_t x402 = 1U;
volatile int8_t x409 = -3;
uint32_t x422 = 26711752U;
int32_t x423 = -1;
volatile int32_t x428 = -383;
uint16_t x438 = 29U;
uint8_t x439 = UINT8_MAX;
int16_t x442 = INT16_MIN;
static uint64_t x448 = 13193LLU;
static uint64_t t105 = 493LLU;
int64_t x449 = -1LL;
volatile uint64_t x451 = UINT64_MAX;
volatile uint64_t t106 = 1129295133815LLU;
uint64_t t107 = 240331070568911LLU;
static uint64_t x457 = UINT64_MAX;
volatile int16_t x458 = INT16_MAX;
int8_t x459 = -1;
int32_t x460 = -3992938;
int8_t x462 = INT8_MIN;
volatile uint64_t t110 = 455LLU;
int16_t x469 = -1;
static volatile int64_t x475 = -1LL;
int64_t x477 = -2247478945559974397LL;
int8_t x485 = -1;
int32_t x486 = INT32_MAX;
int8_t x488 = -1;
int32_t x501 = INT32_MAX;
uint32_t x506 = 443652U;
static volatile uint64_t t120 = 484LLU;
static int16_t x520 = -232;
int8_t x523 = -1;
volatile int64_t t123 = -476367989450271LL;
uint64_t x525 = UINT64_MAX;
int16_t x528 = -67;
static int8_t x529 = INT8_MIN;
int64_t x530 = INT64_MIN;
volatile int32_t x537 = 1496559;
int16_t x538 = INT16_MIN;
int16_t x546 = -1;
static int32_t x547 = INT32_MIN;
int8_t x553 = INT8_MIN;
int32_t x554 = 16;
int64_t x556 = -1LL;
int64_t x561 = 2LL;
int64_t x563 = -856251LL;
static int64_t t134 = 196395LL;
int8_t x578 = INT8_MIN;
static volatile int64_t t136 = -18251LL;
volatile uint64_t t138 = 4574551620437470LLU;
int16_t x594 = -4;
int32_t t140 = 213528134;
static volatile uint16_t x598 = UINT16_MAX;
volatile uint64_t x601 = UINT64_MAX;
int8_t x603 = INT8_MAX;
uint32_t x607 = 1612985424U;
int32_t x616 = -20181593;
static volatile uint32_t t144 = 119U;
static uint32_t x621 = UINT32_MAX;
static uint32_t x622 = 3832083U;
int32_t x631 = INT32_MIN;
int64_t x637 = -1LL;
static int32_t x646 = INT32_MIN;
static uint64_t x651 = UINT64_MAX;
uint64_t t153 = 1745487890493LLU;
int16_t x667 = INT16_MAX;
static int32_t x668 = INT32_MIN;
int16_t x670 = -1;
int32_t x675 = INT32_MIN;
int64_t x676 = -1LL;
volatile int64_t x677 = INT64_MIN;
int64_t x679 = INT64_MIN;
int32_t x683 = -79;
int16_t x687 = INT16_MAX;
uint32_t x689 = UINT32_MAX;
volatile uint32_t t161 = 109730791U;
uint32_t x693 = UINT32_MAX;
volatile int16_t x697 = INT16_MIN;
int8_t x701 = 0;
uint64_t x703 = 7175362LLU;
uint16_t x710 = UINT16_MAX;
volatile int32_t x711 = -1;
static int8_t x712 = INT8_MIN;
volatile int32_t t166 = -495578;
int64_t t167 = 4634608LL;
uint64_t x725 = UINT64_MAX;
volatile int64_t t171 = -62664519190LL;
static int64_t x737 = INT64_MAX;
uint64_t x740 = UINT64_MAX;
volatile uint64_t t172 = 748085134940000776LLU;
static uint8_t x744 = 8U;
uint8_t x756 = 98U;
volatile int16_t x757 = -697;
int64_t x763 = INT64_MAX;
uint8_t x764 = UINT8_MAX;
int16_t x766 = INT16_MIN;
uint64_t x767 = 889730LLU;
volatile int64_t x768 = INT64_MIN;
int64_t x772 = INT64_MIN;
int16_t x777 = INT16_MIN;
int64_t x779 = INT64_MIN;
uint8_t x784 = 11U;
static int8_t x785 = INT8_MIN;
uint32_t t184 = 96932U;
uint64_t x794 = UINT64_MAX;
static int32_t x795 = -466;
static uint16_t x796 = UINT16_MAX;
uint64_t t186 = 146771LLU;
static uint32_t x805 = UINT32_MAX;
uint32_t x829 = UINT32_MAX;
static uint64_t x830 = 47894LLU;
int32_t x831 = INT32_MIN;
uint32_t x833 = UINT32_MAX;
int32_t x839 = 1564;
uint32_t x848 = 1U;
volatile int32_t t199 = 2;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	int64_t t0 = 18828855LL;

    t0 = ((x1%x2)&(x3/x4));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x6 = -7;
	int32_t x7 = 1872268;
	volatile int32_t x8 = INT32_MIN;

    t1 = ((x5%x6)&(x7/x8));

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x9 = 247958LL;
	int32_t x10 = 7794153;
	int8_t x11 = INT8_MAX;
	uint32_t x12 = 325U;
	volatile int64_t t2 = -28887136673LL;

    t2 = ((x9%x10)&(x11/x12));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = 28881193;
	int32_t x14 = -1;
	int32_t x16 = INT32_MAX;
	int64_t t3 = 1908395LL;

    t3 = ((x13%x14)&(x15/x16));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MAX;
	static uint16_t x18 = 60U;
	static uint32_t x19 = 60U;
	int16_t x20 = -729;
	volatile int64_t t4 = 252843143LL;

    t4 = ((x17%x18)&(x19/x20));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x22 = UINT16_MAX;
	int8_t x23 = INT8_MAX;
	int32_t x24 = INT32_MAX;
	static uint32_t t5 = 9727191U;

    t5 = ((x21%x22)&(x23/x24));

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile uint8_t x25 = UINT8_MAX;
	uint64_t x26 = 90441273557LLU;
	int64_t x28 = INT64_MIN;
	volatile uint64_t t6 = 31513458934LLU;

    t6 = ((x25%x26)&(x27/x28));

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MAX;
	int64_t x30 = INT64_MIN;
	static int16_t x32 = INT16_MIN;
	static volatile int64_t t7 = 2991264380285LL;

    t7 = ((x29%x30)&(x31/x32));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = 1;
	static volatile uint16_t x34 = UINT16_MAX;
	int8_t x35 = INT8_MIN;
	int8_t x36 = INT8_MAX;
	volatile int32_t t8 = 144934;

    t8 = ((x33%x34)&(x35/x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MAX;
	static uint64_t x38 = 188247413LLU;
	static int8_t x40 = INT8_MAX;
	volatile uint64_t t9 = 3530247LLU;

    t9 = ((x37%x38)&(x39/x40));

    if (t9 != 2064LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = 1555;
	uint8_t x42 = 1U;
	static int64_t x44 = INT64_MAX;
	int64_t t10 = -206043776LL;

    t10 = ((x41%x42)&(x43/x44));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x45 = 308856U;
	int64_t x46 = INT64_MAX;
	int8_t x47 = INT8_MAX;
	static volatile int64_t x48 = 400279LL;
	int64_t t11 = -161827422800LL;

    t11 = ((x45%x46)&(x47/x48));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x50 = -1;
	int8_t x51 = 9;
	volatile int16_t x52 = -81;

    t12 = ((x49%x50)&(x51/x52));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MIN;
	int32_t x54 = 895303;
	volatile uint16_t x55 = 497U;
	int32_t x56 = -2080708;
	int32_t t13 = 9;

    t13 = ((x53%x54)&(x55/x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 9497U;
	int16_t x58 = 3;
	volatile int16_t x59 = 0;
	uint32_t x60 = UINT32_MAX;
	uint32_t t14 = 163176U;

    t14 = ((x57%x58)&(x59/x60));

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = 9049388796340079LLU;
	volatile uint32_t x62 = UINT32_MAX;
	int64_t x63 = -1807LL;
	int64_t x64 = 344LL;
	static uint64_t t15 = 3919664779LLU;

    t15 = ((x61%x62)&(x63/x64));

    if (t15 != 79957450LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = UINT16_MAX;
	uint8_t x66 = UINT8_MAX;
	int64_t x67 = -12LL;
	int32_t x68 = -1;
	volatile int64_t t16 = 8291134004578LL;

    t16 = ((x65%x66)&(x67/x68));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = -81;
	static volatile uint32_t x70 = UINT32_MAX;
	uint32_t x71 = 4966U;
	int16_t x72 = INT16_MIN;
	volatile uint32_t t17 = 605151U;

    t17 = ((x69%x70)&(x71/x72));

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x73 = -1LL;
	int64_t x74 = 1366586111022LL;
	volatile int8_t x75 = INT8_MIN;
	volatile int64_t t18 = -16548909710463868LL;

    t18 = ((x73%x74)&(x75/x76));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x77 = -1;
	volatile int8_t x78 = 2;
	static uint64_t x79 = 290581LLU;
	uint64_t x80 = 25443995302305590LLU;
	volatile uint64_t t19 = 41301926120092994LLU;

    t19 = ((x77%x78)&(x79/x80));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x81 = 1936LLU;
	int64_t x82 = INT64_MIN;
	int16_t x83 = INT16_MAX;
	static int32_t x84 = INT32_MIN;
	volatile uint64_t t20 = 88539LLU;

    t20 = ((x81%x82)&(x83/x84));

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x85 = 5U;
	static int16_t x86 = INT16_MIN;
	volatile int16_t x87 = -1;
	int8_t x88 = INT8_MIN;

    t21 = ((x85%x86)&(x87/x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x89 = INT64_MIN;
	int64_t x90 = INT64_MIN;
	volatile uint8_t x91 = 3U;
	int64_t x92 = INT64_MIN;
	int64_t t22 = 205143285821284LL;

    t22 = ((x89%x90)&(x91/x92));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x94 = 8177414;
	int32_t x95 = INT32_MAX;
	static int16_t x96 = 1639;
	volatile int32_t t23 = -416732680;

    t23 = ((x93%x94)&(x95/x96));

    if (t23 != 1290272) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int32_t x97 = -1;
	static int32_t x98 = -51500;
	int32_t x99 = -205813;
	int16_t x100 = INT16_MIN;
	volatile int32_t t24 = 13095;

    t24 = ((x97%x98)&(x99/x100));

    if (t24 != 6) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x102 = 1413U;
	int64_t x103 = -1LL;
	uint8_t x104 = UINT8_MAX;

    t25 = ((x101%x102)&(x103/x104));

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x105 = UINT8_MAX;
	static uint8_t x106 = UINT8_MAX;
	static uint8_t x107 = UINT8_MAX;
	volatile int32_t x108 = 9;
	static int32_t t26 = 943576970;

    t26 = ((x105%x106)&(x107/x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x113 = INT32_MIN;
	static int16_t x114 = INT16_MIN;
	static int16_t x116 = -1;
	volatile int32_t t27 = -83300682;

    t27 = ((x113%x114)&(x115/x116));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x117 = 45U;
	uint32_t x118 = UINT32_MAX;
	volatile int16_t x119 = -235;
	int64_t x120 = 52624412LL;
	volatile int64_t t28 = -246485167457792329LL;

    t28 = ((x117%x118)&(x119/x120));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x121 = INT64_MIN;
	static uint16_t x123 = 3100U;
	static int16_t x124 = -1;
	uint64_t t29 = 365LLU;

    t29 = ((x121%x122)&(x123/x124));

    if (t29 != 17285508LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x125 = 16U;
	static volatile int64_t t30 = -199111146243607LL;

    t30 = ((x125%x126)&(x127/x128));

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x129 = 1693278471949364LL;
	int8_t x130 = 58;
	int64_t t31 = -3529LL;

    t31 = ((x129%x130)&(x131/x132));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x133 = INT8_MAX;
	int8_t x134 = 13;
	uint8_t x135 = UINT8_MAX;
	int32_t x136 = -1;

    t32 = ((x133%x134)&(x135/x136));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x137 = 1U;
	uint64_t x138 = 12209469LLU;
	int8_t x140 = -1;
	volatile uint64_t t33 = 384683743419353523LLU;

    t33 = ((x137%x138)&(x139/x140));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x142 = 160U;
	static uint16_t x143 = 9148U;
	volatile uint64_t t34 = 1261179022179LLU;

    t34 = ((x141%x142)&(x143/x144));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x145 = 30U;
	int8_t x146 = INT8_MIN;
	uint64_t x147 = 25556LLU;
	int8_t x148 = INT8_MAX;
	volatile uint64_t t35 = 8095048164537413LLU;

    t35 = ((x145%x146)&(x147/x148));

    if (t35 != 8LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x149 = INT8_MIN;
	int16_t x150 = INT16_MAX;

    t36 = ((x149%x150)&(x151/x152));

    if (t36 != 715827840U) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x153 = -1;
	static int8_t x155 = 3;
	uint64_t x156 = 410LLU;
	volatile uint64_t t37 = 2383562671LLU;

    t37 = ((x153%x154)&(x155/x156));

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x157 = -1;
	int16_t x158 = INT16_MIN;
	int8_t x160 = -6;
	static int32_t t38 = -16523;

    t38 = ((x157%x158)&(x159/x160));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x161 = 0U;
	volatile uint32_t x163 = 293U;
	int32_t x164 = -1946;
	int64_t t39 = -775372553753789147LL;

    t39 = ((x161%x162)&(x163/x164));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x165 = 0;
	static volatile int32_t x167 = INT32_MIN;
	uint64_t x168 = 601814186672765496LLU;
	uint64_t t40 = 1LLU;

    t40 = ((x165%x166)&(x167/x168));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x169 = 1239852;
	uint64_t x170 = UINT64_MAX;
	int64_t x171 = -66620163396107LL;
	int64_t x172 = -1LL;
	static uint64_t t41 = 94462735809LLU;

    t41 = ((x169%x170)&(x171/x172));

    if (t41 != 33288LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x173 = UINT64_MAX;
	static uint16_t x174 = UINT16_MAX;
	int32_t x175 = INT32_MAX;
	static uint64_t x176 = UINT64_MAX;
	volatile uint64_t t42 = 1895164500379213LLU;

    t42 = ((x173%x174)&(x175/x176));

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x177 = UINT32_MAX;
	volatile int64_t x178 = INT64_MIN;
	int64_t x179 = INT64_MIN;
	static int8_t x180 = INT8_MIN;

    t43 = ((x177%x178)&(x179/x180));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x181 = 9U;
	int16_t x182 = -1;
	static int32_t x183 = -22;
	int32_t t44 = -63144731;

    t44 = ((x181%x182)&(x183/x184));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x185 = -1LL;
	uint8_t x186 = 1U;
	static int64_t x187 = INT64_MIN;
	static volatile uint32_t x188 = UINT32_MAX;

    t45 = ((x185%x186)&(x187/x188));

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x189 = INT16_MIN;
	volatile int16_t x191 = 249;
	volatile int32_t x192 = INT32_MAX;
	int32_t t46 = 97515;

    t46 = ((x189%x190)&(x191/x192));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x195 = INT64_MAX;
	uint64_t x196 = UINT64_MAX;
	volatile uint64_t t47 = 141265908419463594LLU;

    t47 = ((x193%x194)&(x195/x196));

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x198 = INT8_MAX;
	int32_t x199 = -1229;
	static int32_t x200 = INT32_MAX;
	int32_t t48 = 137137566;

    t48 = ((x197%x198)&(x199/x200));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x201 = INT8_MIN;
	int32_t x203 = INT32_MIN;
	volatile uint64_t t49 = 676LLU;

    t49 = ((x201%x202)&(x203/x204));

    if (t49 != 25314363776LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x206 = INT8_MIN;
	static int32_t x207 = 271900722;
	volatile int32_t t50 = 349685935;

    t50 = ((x205%x206)&(x207/x208));

    if (t50 != -271900726) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x209 = INT32_MIN;
	uint64_t x210 = 40691763608LLU;
	int64_t x211 = INT64_MAX;
	int8_t x212 = INT8_MAX;
	uint64_t t51 = 284LLU;

    t51 = ((x209%x210)&(x211/x212));

    if (t51 != 268435584LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x213 = -40;
	volatile int8_t x214 = INT8_MIN;
	int16_t x215 = 144;
	static volatile int8_t x216 = -1;
	static volatile int32_t t52 = 3904709;

    t52 = ((x213%x214)&(x215/x216));

    if (t52 != -176) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x217 = UINT8_MAX;
	int8_t x218 = INT8_MIN;
	volatile int32_t t53 = 53824347;

    t53 = ((x217%x218)&(x219/x220));

    if (t53 != 56) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x221 = -18953089600LL;
	static volatile int32_t x222 = -1;
	int64_t x224 = INT64_MAX;
	int64_t t54 = -7912510478LL;

    t54 = ((x221%x222)&(x223/x224));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x225 = 1149;
	static uint64_t x226 = 2119560872105710LLU;
	static int32_t x228 = -20;
	uint64_t t55 = 191920883LLU;

    t55 = ((x225%x226)&(x227/x228));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x229 = 61998U;
	int8_t x230 = -5;
	uint32_t x231 = 61089U;
	static int16_t x232 = -1;
	uint32_t t56 = 1087381808U;

    t56 = ((x229%x230)&(x231/x232));

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint16_t x233 = 111U;
	uint16_t x235 = 7303U;
	int32_t x236 = 806;
	uint32_t t57 = 27095U;

    t57 = ((x233%x234)&(x235/x236));

    if (t57 != 9U) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x239 = -58;
	static volatile int64_t t58 = 39858565643LL;

    t58 = ((x237%x238)&(x239/x240));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x241 = -25;
	volatile int64_t x242 = INT64_MAX;
	static uint16_t x243 = UINT16_MAX;
	uint64_t t59 = 4376605800826071089LLU;

    t59 = ((x241%x242)&(x243/x244));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x245 = 51LLU;
	static volatile int16_t x247 = 1;
	int8_t x248 = -50;
	volatile uint64_t t60 = 3320698829LLU;

    t60 = ((x245%x246)&(x247/x248));

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x249 = INT16_MIN;
	int8_t x250 = INT8_MIN;
	int64_t x251 = -4547367955722216LL;
	uint64_t x252 = 1025197926588592LLU;
	volatile uint64_t t61 = 79832628182114LLU;

    t61 = ((x249%x250)&(x251/x252));

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x253 = UINT32_MAX;
	int8_t x254 = INT8_MIN;
	int16_t x255 = -1;
	int32_t x256 = INT32_MIN;
	volatile uint32_t t62 = 10U;

    t62 = ((x253%x254)&(x255/x256));

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x257 = INT64_MAX;
	volatile uint8_t x258 = 2U;
	int16_t x259 = 7;

    t63 = ((x257%x258)&(x259/x260));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x262 = -527732;
	int16_t x263 = INT16_MIN;
	volatile int32_t t64 = -1798;

    t64 = ((x261%x262)&(x263/x264));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x265 = INT16_MIN;
	int16_t x266 = INT16_MAX;
	uint16_t x267 = UINT16_MAX;
	int64_t x268 = INT64_MIN;
	volatile int64_t t65 = -1485598562LL;

    t65 = ((x265%x266)&(x267/x268));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x269 = -1;
	static int32_t x271 = INT32_MAX;
	uint32_t t66 = 5168U;

    t66 = ((x269%x270)&(x271/x272));

    if (t66 != 1694935U) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x273 = INT16_MIN;
	int8_t x274 = 2;
	int32_t x276 = INT32_MIN;
	int64_t t67 = -31340608740229799LL;

    t67 = ((x273%x274)&(x275/x276));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x277 = INT16_MIN;
	int32_t x278 = 430053;
	int16_t x279 = 3243;
	static uint32_t t68 = 107174U;

    t68 = ((x277%x278)&(x279/x280));

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x281 = INT8_MIN;
	int8_t x283 = INT8_MIN;
	static uint32_t x284 = 5513U;
	volatile uint32_t t69 = 2696U;

    t69 = ((x281%x282)&(x283/x284));

    if (t69 != 779008U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x285 = 299LL;
	int32_t x286 = -1;
	volatile int16_t x287 = INT16_MIN;
	static int64_t x288 = INT64_MIN;

    t70 = ((x285%x286)&(x287/x288));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int16_t x290 = INT16_MIN;
	int32_t x291 = INT32_MAX;
	uint64_t x292 = UINT64_MAX;

    t71 = ((x289%x290)&(x291/x292));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x293 = 0U;
	int32_t x294 = -1;
	uint32_t x295 = 119639091U;
	int8_t x296 = INT8_MIN;
	volatile uint32_t t72 = 89496759U;

    t72 = ((x293%x294)&(x295/x296));

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x297 = -66486546966LL;
	int32_t x300 = INT32_MIN;
	static volatile int64_t t73 = 6941672LL;

    t73 = ((x297%x298)&(x299/x300));

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x301 = 1U;
	volatile int32_t x302 = INT32_MIN;
	int8_t x303 = INT8_MAX;
	int16_t x304 = -78;
	static volatile uint32_t t74 = 5854178U;

    t74 = ((x301%x302)&(x303/x304));

    if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x305 = 1U;
	int64_t x306 = INT64_MIN;
	uint16_t x307 = 32445U;
	int64_t t75 = 1711487703177LL;

    t75 = ((x305%x306)&(x307/x308));

    if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x309 = -25LL;
	uint32_t x311 = 1598U;
	int8_t x312 = -1;

    t76 = ((x309%x310)&(x311/x312));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x314 = UINT32_MAX;
	uint16_t x315 = 132U;
	uint8_t x316 = 1U;
	volatile uint32_t t77 = 553775122U;

    t77 = ((x313%x314)&(x315/x316));

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x317 = INT32_MAX;
	static int16_t x318 = -1;
	int32_t x319 = INT32_MIN;
	int16_t x320 = INT16_MIN;
	volatile int32_t t78 = -29;

    t78 = ((x317%x318)&(x319/x320));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x325 = INT64_MAX;
	uint16_t x326 = 42U;
	volatile int32_t x327 = INT32_MIN;
	volatile int16_t x328 = 2;
	static volatile int64_t t79 = 6134056LL;

    t79 = ((x325%x326)&(x327/x328));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint8_t x330 = UINT8_MAX;
	int32_t x331 = INT32_MIN;
	int64_t x332 = -231554800423425589LL;
	int64_t t80 = -58735LL;

    t80 = ((x329%x330)&(x331/x332));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x333 = INT8_MAX;
	uint32_t x336 = 760774U;

    t81 = ((x333%x334)&(x335/x336));

    if (t81 != 13LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x337 = 860214U;
	static uint64_t x338 = UINT64_MAX;
	int64_t x339 = 31312608LL;
	uint64_t t82 = 67582137LLU;

    t82 = ((x337%x338)&(x339/x340));

    if (t82 != 335920LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x341 = INT8_MIN;
	int8_t x343 = INT8_MIN;
	int8_t x344 = INT8_MIN;
	static int64_t t83 = -9LL;

    t83 = ((x341%x342)&(x343/x344));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x345 = 21670358942460097LL;
	int16_t x346 = -1;
	static uint8_t x347 = 0U;
	int64_t x348 = -47763LL;
	volatile int64_t t84 = -230373203062202LL;

    t84 = ((x345%x346)&(x347/x348));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x349 = -45886368;
	int64_t x351 = INT64_MAX;
	int32_t x352 = INT32_MAX;

    t85 = ((x349%x350)&(x351/x352));

    if (t85 != 4294967296LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x353 = INT32_MAX;
	volatile int32_t x354 = -1;
	volatile int16_t x356 = -34;
	static int32_t t86 = -1;

    t86 = ((x353%x354)&(x355/x356));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x357 = -63;
	static int16_t x359 = 13482;
	uint16_t x360 = UINT16_MAX;
	static int32_t t87 = 689;

    t87 = ((x357%x358)&(x359/x360));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x365 = -31;
	int64_t x367 = -1LL;
	int16_t x368 = INT16_MAX;
	int64_t t88 = 26282327LL;

    t88 = ((x365%x366)&(x367/x368));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x369 = 44U;
	int32_t x370 = -1;
	volatile int8_t x371 = 3;
	uint64_t x372 = 25984LLU;
	volatile uint64_t t89 = 33180080463528384LLU;

    t89 = ((x369%x370)&(x371/x372));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x373 = 9U;
	int64_t x374 = 112595LL;
	uint8_t x375 = 124U;
	int8_t x376 = INT8_MIN;
	volatile int64_t t90 = 194366517LL;

    t90 = ((x373%x374)&(x375/x376));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x377 = INT8_MIN;
	int16_t x379 = INT16_MIN;
	int16_t x380 = -1;
	volatile int32_t t91 = 13169;

    t91 = ((x377%x378)&(x379/x380));

    if (t91 != 32768) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x382 = INT64_MIN;
	int16_t x383 = INT16_MIN;
	uint32_t x384 = 751812356U;
	static int64_t t92 = -26600217LL;

    t92 = ((x381%x382)&(x383/x384));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x385 = INT16_MIN;
	static int32_t x386 = 3685659;
	int32_t x388 = INT32_MAX;
	int32_t t93 = -543707059;

    t93 = ((x385%x386)&(x387/x388));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x389 = INT8_MAX;
	uint64_t x390 = 1715452LLU;
	static int8_t x391 = 20;
	int16_t x392 = 13;
	volatile uint64_t t94 = 87LLU;

    t94 = ((x389%x390)&(x391/x392));

    if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x393 = INT16_MAX;
	volatile uint64_t x394 = 12013341055LLU;
	volatile int8_t x395 = INT8_MAX;
	int64_t x396 = 9763883281785046LL;

    t95 = ((x393%x394)&(x395/x396));

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint32_t x397 = 23U;
	int8_t x400 = INT8_MIN;
	uint64_t t96 = 20509443072464149LLU;

    t96 = ((x397%x398)&(x399/x400));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x401 = 1;
	int32_t x403 = INT32_MIN;
	int64_t x404 = -1LL;
	static volatile int64_t t97 = 127808614LL;

    t97 = ((x401%x402)&(x403/x404));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x405 = UINT64_MAX;
	int16_t x406 = INT16_MAX;
	int8_t x407 = INT8_MAX;
	uint16_t x408 = UINT16_MAX;
	volatile uint64_t t98 = 24LLU;

    t98 = ((x405%x406)&(x407/x408));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x410 = 200601012U;
	static int32_t x411 = -95035;
	volatile int16_t x412 = INT16_MIN;
	volatile uint32_t t99 = 9U;

    t99 = ((x409%x410)&(x411/x412));

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x413 = -1;
	int16_t x414 = INT16_MAX;
	static int32_t x415 = -1;
	volatile int64_t x416 = -1927733367895096896LL;
	int64_t t100 = -13813948724059LL;

    t100 = ((x413%x414)&(x415/x416));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x421 = INT64_MAX;
	uint32_t x424 = 123U;
	int64_t t101 = -567LL;

    t101 = ((x421%x422)&(x423/x424));

    if (t101 != 1343521LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x425 = INT32_MAX;
	int32_t x426 = -5340500;
	int16_t x427 = 1;
	volatile int32_t t102 = 113576;

    t102 = ((x425%x426)&(x427/x428));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x437 = 4985410LL;
	volatile int64_t x440 = -1857LL;
	static int64_t t103 = 164412LL;

    t103 = ((x437%x438)&(x439/x440));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x441 = -6;
	int32_t x443 = INT32_MAX;
	volatile int16_t x444 = INT16_MIN;
	volatile int32_t t104 = 591026198;

    t104 = ((x441%x442)&(x443/x444));

    if (t104 != -65536) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x445 = INT8_MIN;
	static uint8_t x446 = UINT8_MAX;
	uint64_t x447 = 10486LLU;

    t105 = ((x445%x446)&(x447/x448));

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x450 = 34U;
	uint16_t x452 = UINT16_MAX;

    t106 = ((x449%x450)&(x451/x452));

    if (t106 != 281479271743489LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x453 = INT16_MIN;
	volatile uint64_t x454 = UINT64_MAX;
	uint64_t x455 = UINT64_MAX;
	static uint64_t x456 = UINT64_MAX;

    t107 = ((x453%x454)&(x455/x456));

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t t108 = 391LLU;

    t108 = ((x457%x458)&(x459/x460));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x461 = UINT64_MAX;
	int32_t x463 = INT32_MIN;
	int64_t x464 = 38085LL;
	static uint64_t t109 = 72LLU;

    t109 = ((x461%x462)&(x463/x464));

    if (t109 != 62LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x465 = UINT8_MAX;
	uint64_t x466 = 2517302500166745LLU;
	uint8_t x467 = 1U;
	static int8_t x468 = INT8_MIN;

    t110 = ((x465%x466)&(x467/x468));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint16_t x470 = 13U;
	volatile int64_t x471 = 19396484848847LL;
	volatile uint16_t x472 = 854U;
	volatile int64_t t111 = -811168LL;

    t111 = ((x469%x470)&(x471/x472));

    if (t111 != 22712511532LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x473 = 57U;
	static uint64_t x474 = UINT64_MAX;
	static int8_t x476 = -46;
	uint64_t t112 = 342606281460398964LLU;

    t112 = ((x473%x474)&(x475/x476));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x478 = -60;
	int8_t x479 = -1;
	int8_t x480 = 2;
	int64_t t113 = 5026189807732LL;

    t113 = ((x477%x478)&(x479/x480));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x487 = 100U;
	volatile int32_t t114 = 44173;

    t114 = ((x485%x486)&(x487/x488));

    if (t114 != -100) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x489 = 27U;
	volatile int8_t x490 = -1;
	uint64_t x491 = 778024254968LLU;
	static volatile int16_t x492 = INT16_MIN;
	uint64_t t115 = 36LLU;

    t115 = ((x489%x490)&(x491/x492));

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x493 = 2445U;
	static int64_t x494 = 94166142496LL;
	int8_t x495 = -1;
	int64_t x496 = 611169299LL;
	int64_t t116 = -26711LL;

    t116 = ((x493%x494)&(x495/x496));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x497 = INT64_MIN;
	int16_t x498 = INT16_MIN;
	static int32_t x499 = -1;
	volatile int8_t x500 = INT8_MIN;
	int64_t t117 = 16605360816208509LL;

    t117 = ((x497%x498)&(x499/x500));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x502 = INT32_MAX;
	volatile uint16_t x503 = UINT16_MAX;
	int64_t x504 = -1LL;
	volatile int64_t t118 = 26LL;

    t118 = ((x501%x502)&(x503/x504));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x505 = 61710157LLU;
	int8_t x507 = 1;
	volatile uint8_t x508 = 28U;
	volatile uint64_t t119 = 597LLU;

    t119 = ((x505%x506)&(x507/x508));

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x509 = -1;
	volatile int64_t x510 = 3LL;
	int8_t x511 = -2;
	uint64_t x512 = 2325299LLU;

    t120 = ((x509%x510)&(x511/x512));

    if (t120 != 7933063263567LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x513 = -1;
	int16_t x514 = -1;
	volatile uint64_t x515 = 57916LLU;
	uint8_t x516 = 1U;
	uint64_t t121 = 124797323LLU;

    t121 = ((x513%x514)&(x515/x516));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint16_t x517 = 35U;
	volatile uint16_t x518 = UINT16_MAX;
	uint8_t x519 = 14U;
	volatile int32_t t122 = 4531536;

    t122 = ((x517%x518)&(x519/x520));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint16_t x521 = 10620U;
	uint32_t x522 = 3635929U;
	volatile int64_t x524 = 14567370721LL;

    t123 = ((x521%x522)&(x523/x524));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x526 = -1LL;
	int32_t x527 = INT32_MIN;
	volatile uint64_t t124 = 278234861818317LLU;

    t124 = ((x525%x526)&(x527/x528));

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x531 = -1;
	int32_t x532 = INT32_MIN;
	volatile int64_t t125 = 388LL;

    t125 = ((x529%x530)&(x531/x532));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x533 = 7U;
	volatile int16_t x534 = INT16_MIN;
	uint32_t x535 = 130593U;
	static int8_t x536 = -1;
	volatile uint32_t t126 = 21U;

    t126 = ((x533%x534)&(x535/x536));

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x539 = INT8_MIN;
	int32_t x540 = INT32_MIN;
	volatile int32_t t127 = -23288254;

    t127 = ((x537%x538)&(x539/x540));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x541 = -94187740;
	int8_t x542 = 1;
	static volatile int32_t x543 = -1;
	uint64_t x544 = UINT64_MAX;
	uint64_t t128 = 7818232192206762286LLU;

    t128 = ((x541%x542)&(x543/x544));

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x545 = INT8_MIN;
	uint8_t x548 = UINT8_MAX;
	volatile int32_t t129 = -93735;

    t129 = ((x545%x546)&(x547/x548));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint32_t x555 = UINT32_MAX;
	int64_t t130 = 1212179733LL;

    t130 = ((x553%x554)&(x555/x556));

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x557 = UINT16_MAX;
	uint64_t x558 = 629728LLU;
	static uint32_t x559 = UINT32_MAX;
	int32_t x560 = -1;
	uint64_t t131 = 5526073LLU;

    t131 = ((x557%x558)&(x559/x560));

    if (t131 != 1LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x562 = -1;
	int8_t x564 = -1;
	int64_t t132 = 94421LL;

    t132 = ((x561%x562)&(x563/x564));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x565 = INT32_MIN;
	uint16_t x566 = UINT16_MAX;
	int64_t x567 = INT64_MAX;
	static uint16_t x568 = 20U;
	int64_t t133 = 0LL;

    t133 = ((x565%x566)&(x567/x568));

    if (t133 != 461168601842712576LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x569 = INT64_MIN;
	int64_t x570 = INT64_MIN;
	volatile int32_t x571 = INT32_MIN;
	uint8_t x572 = 39U;

    t134 = ((x569%x570)&(x571/x572));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x573 = 76888607U;
	volatile int32_t x574 = -10821612;
	volatile int64_t x575 = -256417020766545LL;
	volatile int8_t x576 = -1;
	volatile int64_t t135 = -827810545327752160LL;

    t135 = ((x573%x574)&(x575/x576));

    if (t135 != 67446801LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x577 = 0;
	int64_t x579 = -1LL;
	int16_t x580 = INT16_MIN;

    t136 = ((x577%x578)&(x579/x580));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int32_t x581 = INT32_MIN;
	uint8_t x582 = 5U;
	volatile int8_t x583 = INT8_MAX;
	volatile int16_t x584 = INT16_MIN;
	int32_t t137 = -57369;

    t137 = ((x581%x582)&(x583/x584));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x585 = -1LL;
	volatile uint64_t x586 = 118305179565LLU;
	static int64_t x587 = INT64_MAX;
	static int32_t x588 = -402;

    t138 = ((x585%x586)&(x587/x588));

    if (t138 != 72480194696LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x589 = INT64_MIN;
	static uint8_t x590 = 32U;
	static uint8_t x591 = 0U;
	uint8_t x592 = UINT8_MAX;
	volatile int64_t t139 = -363172179205326244LL;

    t139 = ((x589%x590)&(x591/x592));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x593 = 2U;
	uint8_t x595 = 6U;
	int8_t x596 = -60;

    t140 = ((x593%x594)&(x595/x596));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x597 = INT16_MIN;
	int32_t x599 = -1;
	volatile uint32_t x600 = 48276170U;
	uint32_t t141 = 50U;

    t141 = ((x597%x598)&(x599/x600));

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint64_t x602 = UINT64_MAX;
	int8_t x604 = INT8_MIN;
	volatile uint64_t t142 = 8311049389LLU;

    t142 = ((x601%x602)&(x603/x604));

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x605 = 2071U;
	volatile int16_t x606 = INT16_MAX;
	volatile uint64_t x608 = UINT64_MAX;
	uint64_t t143 = 453565048870819207LLU;

    t143 = ((x605%x606)&(x607/x608));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x613 = 7571U;
	int32_t x614 = -1;
	int32_t x615 = INT32_MAX;

    t144 = ((x613%x614)&(x615/x616));

    if (t144 != 7570U) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x617 = -1;
	uint32_t x618 = 9659316U;
	uint16_t x619 = 63U;
	int32_t x620 = 1373886;
	uint32_t t145 = 10502351U;

    t145 = ((x617%x618)&(x619/x620));

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x623 = UINT8_MAX;
	volatile int8_t x624 = INT8_MIN;
	uint32_t t146 = 130182U;

    t146 = ((x621%x622)&(x623/x624));

    if (t146 != 3034335U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x625 = INT32_MIN;
	uint32_t x626 = 6622U;
	int8_t x627 = -1;
	uint64_t x628 = 2084965LLU;
	static volatile uint64_t t147 = 229263900LLU;

    t147 = ((x625%x626)&(x627/x628));

    if (t147 != 2048LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint8_t x629 = UINT8_MAX;
	uint8_t x630 = UINT8_MAX;
	int32_t x632 = INT32_MIN;
	volatile int32_t t148 = 91658972;

    t148 = ((x629%x630)&(x631/x632));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x633 = -1;
	uint32_t x634 = 1599U;
	volatile int16_t x635 = INT16_MIN;
	int8_t x636 = -1;
	volatile uint32_t t149 = 13024573U;

    t149 = ((x633%x634)&(x635/x636));

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x638 = -1;
	uint8_t x639 = 72U;
	int8_t x640 = -3;
	static volatile int64_t t150 = -268828285206793LL;

    t150 = ((x637%x638)&(x639/x640));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x641 = 5133U;
	static int8_t x642 = -1;
	uint16_t x643 = 0U;
	int8_t x644 = INT8_MIN;
	volatile uint32_t t151 = 566U;

    t151 = ((x641%x642)&(x643/x644));

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x645 = UINT8_MAX;
	int16_t x647 = INT16_MIN;
	volatile int64_t x648 = INT64_MAX;
	int64_t t152 = -606195599519286552LL;

    t152 = ((x645%x646)&(x647/x648));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x649 = INT16_MIN;
	int16_t x650 = 673;
	static volatile int64_t x652 = -12179728806465750LL;

    t153 = ((x649%x650)&(x651/x652));

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x657 = INT64_MIN;
	int16_t x658 = -1;
	int16_t x659 = -1;
	uint32_t x660 = 104087738U;
	volatile int64_t t154 = -58994522170LL;

    t154 = ((x657%x658)&(x659/x660));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x665 = INT8_MIN;
	int16_t x666 = INT16_MIN;
	volatile int32_t t155 = 1;

    t155 = ((x665%x666)&(x667/x668));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x669 = -102292LL;
	volatile int32_t x671 = -141;
	uint64_t x672 = 24617402066LLU;
	static volatile uint64_t t156 = 2171164676857231251LLU;

    t156 = ((x669%x670)&(x671/x672));

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x673 = INT64_MIN;
	int64_t x674 = INT64_MAX;
	volatile int64_t t157 = 49228LL;

    t157 = ((x673%x674)&(x675/x676));

    if (t157 != 2147483648LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x678 = -842105804LL;
	uint64_t x680 = UINT64_MAX;
	uint64_t t158 = 1LLU;

    t158 = ((x677%x678)&(x679/x680));

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x681 = 2;
	volatile uint8_t x682 = UINT8_MAX;
	uint64_t x684 = 2476657368748LLU;
	uint64_t t159 = 28471475LLU;

    t159 = ((x681%x682)&(x683/x684));

    if (t159 != 2LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x685 = 4948861268064LL;
	uint64_t x686 = 53788419LLU;
	uint16_t x688 = 63U;
	volatile uint64_t t160 = 666940474LLU;

    t160 = ((x685%x686)&(x687/x688));

    if (t160 != 8LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x690 = INT32_MIN;
	int8_t x691 = -1;
	volatile int16_t x692 = INT16_MIN;

    t161 = ((x689%x690)&(x691/x692));

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x694 = INT8_MIN;
	int8_t x695 = INT8_MIN;
	volatile int64_t x696 = -33595515211877LL;
	volatile int64_t t162 = 10870566424LL;

    t162 = ((x693%x694)&(x695/x696));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x698 = INT8_MIN;
	static volatile int16_t x699 = 0;
	volatile int16_t x700 = -1;
	volatile int32_t t163 = 246334;

    t163 = ((x697%x698)&(x699/x700));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x702 = INT8_MIN;
	uint32_t x704 = UINT32_MAX;
	volatile uint64_t t164 = 1222841013220508LLU;

    t164 = ((x701%x702)&(x703/x704));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x705 = 487U;
	uint32_t x706 = 19867U;
	uint32_t x707 = 1025411U;
	uint64_t x708 = 3950535LLU;
	uint64_t t165 = 21509275027LLU;

    t165 = ((x705%x706)&(x707/x708));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x709 = 6191573;

    t166 = ((x709%x710)&(x711/x712));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x713 = INT32_MIN;
	volatile uint32_t x714 = 18900U;
	static int64_t x715 = -409323183238LL;
	uint32_t x716 = 333380U;

    t167 = ((x713%x714)&(x715/x716));

    if (t167 != 736LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x717 = 2;
	volatile int8_t x718 = 1;
	static int16_t x719 = INT16_MAX;
	uint32_t x720 = 56480U;
	static uint32_t t168 = 40558057U;

    t168 = ((x717%x718)&(x719/x720));

    if (t168 != 0U) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x721 = -3769666805732LL;
	volatile uint64_t x722 = 793815329LLU;
	volatile uint32_t x723 = 52U;
	uint64_t x724 = 262480181LLU;
	volatile uint64_t t169 = 54486LLU;

    t169 = ((x721%x722)&(x723/x724));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint16_t x726 = 22901U;
	uint32_t x727 = UINT32_MAX;
	uint64_t x728 = UINT64_MAX;
	uint64_t t170 = 3583163479969LLU;

    t170 = ((x725%x726)&(x727/x728));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x729 = -116909LL;
	int16_t x730 = INT16_MIN;
	static int32_t x731 = 240;
	int8_t x732 = INT8_MIN;

    t171 = ((x729%x730)&(x731/x732));

    if (t171 != -18605LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x738 = INT32_MIN;
	uint32_t x739 = UINT32_MAX;

    t172 = ((x737%x738)&(x739/x740));

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x741 = -1;
	static uint32_t x742 = UINT32_MAX;
	volatile int32_t x743 = -6883;
	static uint32_t t173 = 30U;

    t173 = ((x741%x742)&(x743/x744));

    if (t173 != 0U) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x745 = -1LL;
	volatile int16_t x746 = 44;
	int8_t x747 = INT8_MAX;
	uint8_t x748 = 2U;
	volatile int64_t t174 = 30547939321LL;

    t174 = ((x745%x746)&(x747/x748));

    if (t174 != 63LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x749 = UINT8_MAX;
	int8_t x750 = 2;
	static volatile int32_t x751 = -5647;
	uint8_t x752 = 9U;
	volatile int32_t t175 = 128857073;

    t175 = ((x749%x750)&(x751/x752));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x753 = -367668165741073LL;
	int8_t x754 = INT8_MIN;
	int64_t x755 = 241519466879574LL;
	volatile int64_t t176 = 1LL;

    t176 = ((x753%x754)&(x755/x756));

    if (t176 != 2464484355914LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x758 = 2562;
	int16_t x759 = INT16_MIN;
	static int8_t x760 = -1;
	volatile int32_t t177 = 0;

    t177 = ((x757%x758)&(x759/x760));

    if (t177 != 32768) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x761 = 20U;
	static volatile int32_t x762 = INT32_MIN;
	volatile int64_t t178 = 82LL;

    t178 = ((x761%x762)&(x763/x764));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x765 = INT32_MIN;
	uint64_t t179 = 1148232LLU;

    t179 = ((x765%x766)&(x767/x768));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x769 = INT16_MIN;
	static int16_t x770 = INT16_MIN;
	uint64_t x771 = UINT64_MAX;
	static uint64_t t180 = 443232300222770914LLU;

    t180 = ((x769%x770)&(x771/x772));

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x773 = 103918LLU;
	uint8_t x774 = 3U;
	volatile int64_t x775 = -1LL;
	int16_t x776 = INT16_MIN;
	static uint64_t t181 = 239690016999430LLU;

    t181 = ((x773%x774)&(x775/x776));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x778 = 96U;
	static volatile int16_t x780 = -14265;
	int64_t t182 = 8662699LL;

    t182 = ((x777%x778)&(x779/x780));

    if (t182 != 646573574262496LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x781 = -1LL;
	volatile int64_t x782 = INT64_MAX;
	int64_t x783 = INT64_MIN;
	int64_t t183 = 0LL;

    t183 = ((x781%x782)&(x783/x784));

    if (t183 != -838488366986797800LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x786 = 13U;
	static uint32_t x787 = 478330U;
	int32_t x788 = INT32_MIN;

    t184 = ((x785%x786)&(x787/x788));

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x789 = -1;
	int16_t x790 = 372;
	uint8_t x791 = 8U;
	static int16_t x792 = -1753;
	volatile int32_t t185 = -6792014;

    t185 = ((x789%x790)&(x791/x792));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x793 = -457972753889025LL;

    t186 = ((x793%x794)&(x795/x796));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x797 = -1;
	uint16_t x798 = 25U;
	int32_t x799 = INT32_MIN;
	static volatile int8_t x800 = -57;
	int32_t t187 = 1985327;

    t187 = ((x797%x798)&(x799/x800));

    if (t187 != 37675151) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x801 = INT8_MAX;
	uint8_t x802 = UINT8_MAX;
	int8_t x803 = INT8_MIN;
	volatile int8_t x804 = 2;
	static int32_t t188 = -7;

    t188 = ((x801%x802)&(x803/x804));

    if (t188 != 64) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x806 = INT8_MIN;
	uint8_t x807 = 67U;
	int64_t x808 = 2715LL;
	volatile int64_t t189 = -834586494LL;

    t189 = ((x805%x806)&(x807/x808));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x813 = 3757150002LL;
	int64_t x814 = INT64_MAX;
	int64_t x815 = -167567024963822608LL;
	int16_t x816 = -58;
	int64_t t190 = -36771119473808LL;

    t190 = ((x813%x814)&(x815/x816));

    if (t190 != 3333522706LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x817 = 450244068497LL;
	static int16_t x818 = INT16_MIN;
	static int32_t x819 = 112381292;
	int8_t x820 = -1;
	int64_t t191 = 7724887004262LL;

    t191 = ((x817%x818)&(x819/x820));

    if (t191 != 144LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x821 = INT16_MIN;
	int16_t x822 = -1;
	volatile int32_t x823 = INT32_MAX;
	int64_t x824 = INT64_MIN;
	volatile int64_t t192 = -200358522047867335LL;

    t192 = ((x821%x822)&(x823/x824));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x825 = INT64_MAX;
	uint16_t x826 = 1U;
	int64_t x827 = INT64_MAX;
	volatile int8_t x828 = -7;
	volatile int64_t t193 = 32495713994LL;

    t193 = ((x825%x826)&(x827/x828));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x832 = INT64_MIN;
	uint64_t t194 = 377LLU;

    t194 = ((x829%x830)&(x831/x832));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x834 = 2031668014832127LL;
	static int8_t x835 = INT8_MAX;
	int8_t x836 = INT8_MIN;
	int64_t t195 = -40944728091377LL;

    t195 = ((x833%x834)&(x835/x836));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x837 = 69;
	int32_t x838 = INT32_MIN;
	int64_t x840 = -26560LL;
	volatile int64_t t196 = -2218780683793540127LL;

    t196 = ((x837%x838)&(x839/x840));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x845 = -980917909517258LL;
	int32_t x846 = INT32_MIN;
	int64_t x847 = INT64_MIN;
	volatile int64_t t197 = INT64_MIN;

    t197 = ((x845%x846)&(x847/x848));

    if (t197 != INT64_MIN) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x849 = UINT16_MAX;
	static volatile int16_t x850 = INT16_MIN;
	int32_t x851 = INT32_MAX;
	int8_t x852 = INT8_MIN;
	int32_t t198 = 11429400;

    t198 = ((x849%x850)&(x851/x852));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x853 = -2;
	volatile int16_t x854 = -1;
	int8_t x855 = -1;
	uint8_t x856 = 26U;

    t199 = ((x853%x854)&(x855/x856));

    if (t199 != 0) { NG(); } else { ; }
	
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

