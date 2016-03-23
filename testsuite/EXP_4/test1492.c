
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

uint32_t x3 = UINT32_MAX;
static int32_t x5 = 25375;
uint32_t x7 = UINT32_MAX;
uint64_t x13 = UINT64_MAX;
int64_t x17 = INT64_MAX;
static int32_t x23 = INT32_MIN;
int16_t x31 = INT16_MAX;
volatile int32_t x34 = 8;
volatile uint32_t x37 = UINT32_MAX;
volatile int32_t t9 = 6;
int32_t x41 = INT32_MIN;
static volatile int8_t x42 = INT8_MAX;
int32_t x48 = 47129490;
static int32_t x50 = INT32_MIN;
volatile int32_t t12 = 213422;
static int16_t x53 = INT16_MAX;
volatile int16_t x57 = 3551;
int16_t x75 = INT16_MIN;
uint16_t x83 = 19166U;
static int8_t x85 = INT8_MAX;
uint16_t x87 = UINT16_MAX;
int16_t x90 = INT16_MIN;
volatile int64_t x98 = INT64_MIN;
int32_t x109 = 11;
int8_t x112 = INT8_MAX;
uint16_t x113 = 3U;
static uint32_t x120 = UINT32_MAX;
volatile int32_t t29 = -3891;
uint64_t x124 = 4LLU;
int32_t t30 = 1612;
static int16_t x130 = INT16_MIN;
uint64_t x138 = 137534435957309532LLU;
int64_t x144 = INT64_MIN;
int32_t x152 = -483;
int32_t t37 = -174124;
int32_t x156 = INT32_MIN;
volatile int32_t t38 = -204217;
static volatile int32_t t39 = -43189183;
volatile uint32_t x161 = 503737U;
volatile uint8_t x165 = 2U;
int32_t x171 = -1;
int64_t x176 = -1064385677751LL;
static volatile uint16_t x180 = UINT16_MAX;
uint16_t x181 = 2361U;
int8_t x185 = INT8_MIN;
volatile int64_t x187 = INT64_MAX;
uint8_t x189 = 9U;
uint8_t x191 = UINT8_MAX;
int64_t x202 = -1LL;
volatile int32_t t50 = -45269;
int64_t x205 = INT64_MAX;
uint16_t x206 = 205U;
int32_t t51 = 6499115;
int16_t x210 = 46;
int8_t x211 = INT8_MIN;
int64_t x212 = -1LL;
int8_t x219 = -1;
volatile int32_t t54 = 375726;
int32_t x228 = 1380171;
volatile uint16_t x233 = 13U;
int64_t x237 = -1LL;
int32_t t59 = 19015;
volatile uint64_t x243 = 135130357303313LLU;
int64_t x244 = 103066765LL;
int32_t x245 = INT32_MAX;
static uint64_t x251 = 473LLU;
int8_t x257 = 18;
uint8_t x261 = 97U;
int8_t x263 = INT8_MAX;
static uint64_t x267 = UINT64_MAX;
int32_t t67 = 30330992;
int32_t x275 = INT32_MIN;
int16_t x276 = INT16_MIN;
static volatile int32_t x279 = -1;
int16_t x281 = INT16_MIN;
int64_t x283 = INT64_MIN;
static volatile int32_t x288 = INT32_MIN;
static uint8_t x289 = 12U;
static int32_t x294 = INT32_MAX;
static volatile uint16_t x301 = 56U;
int64_t x303 = INT64_MIN;
int32_t t75 = -875;
int64_t x320 = -1LL;
int64_t x323 = INT64_MAX;
static volatile int16_t x328 = -1;
int32_t x336 = INT32_MIN;
volatile int32_t t83 = -2086077;
volatile uint32_t x337 = 6U;
uint64_t x344 = UINT64_MAX;
uint32_t x351 = UINT32_MAX;
int8_t x353 = INT8_MIN;
int32_t x355 = INT32_MAX;
volatile int32_t t88 = -7183;
int32_t t89 = 12109;
static volatile uint32_t x362 = 233824698U;
int16_t x363 = 5403;
uint32_t x364 = UINT32_MAX;
uint8_t x365 = UINT8_MAX;
int32_t x366 = -1;
int32_t t91 = 11473229;
static int32_t t92 = -2646979;
uint8_t x374 = 21U;
int16_t x375 = INT16_MAX;
int16_t x376 = 1;
volatile uint8_t x377 = 14U;
int8_t x382 = -1;
uint64_t x386 = 2471582964174LLU;
uint32_t x393 = UINT32_MAX;
uint64_t x416 = 175506719120LLU;
volatile int32_t t103 = 377;
volatile int32_t t104 = 36214782;
int16_t x421 = INT16_MIN;
int32_t x423 = INT32_MIN;
int8_t x424 = INT8_MAX;
uint8_t x429 = 1U;
int8_t x433 = INT8_MIN;
static volatile int32_t t108 = 44802621;
static int64_t x439 = -1LL;
int8_t x440 = INT8_MIN;
volatile int16_t x449 = 11;
volatile int32_t t112 = -2;
uint64_t x457 = 3864103734LLU;
static int8_t x460 = INT8_MIN;
int32_t t114 = -1601986;
volatile int32_t x461 = INT32_MIN;
int32_t x462 = 22700;
int32_t t115 = 0;
int32_t x466 = INT32_MIN;
int32_t t117 = 0;
volatile int32_t t118 = -1656579;
int16_t x478 = INT16_MIN;
volatile int32_t x481 = -15405259;
uint16_t x485 = 0U;
volatile int32_t t121 = -1;
uint32_t x493 = 62U;
int8_t x494 = INT8_MIN;
volatile int32_t x495 = INT32_MIN;
int32_t t123 = -3380;
uint32_t x498 = UINT32_MAX;
int64_t x501 = -56LL;
volatile int8_t x502 = 0;
int16_t x507 = 912;
volatile uint64_t x509 = UINT64_MAX;
static volatile int16_t x512 = INT16_MIN;
int16_t x513 = INT16_MAX;
int64_t x515 = 186195635LL;
volatile int32_t t128 = 6;
static uint16_t x519 = UINT16_MAX;
uint32_t x520 = 398998U;
int8_t x523 = -1;
volatile int16_t x526 = INT16_MIN;
int16_t x532 = 1023;
int64_t x533 = INT64_MIN;
static volatile int32_t t134 = -41;
static int16_t x544 = INT16_MAX;
int64_t x551 = INT64_MIN;
volatile int8_t x553 = -54;
volatile int8_t x557 = -1;
int32_t x558 = INT32_MAX;
static uint16_t x571 = UINT16_MAX;
int8_t x573 = INT8_MAX;
volatile int32_t t145 = -21;
int32_t x588 = INT32_MIN;
volatile int32_t x589 = INT32_MIN;
int16_t x595 = 13;
int64_t x600 = INT64_MIN;
uint64_t x603 = UINT64_MAX;
uint64_t x604 = 328469382579162320LLU;
static uint8_t x618 = 5U;
volatile int32_t t154 = 3181878;
static uint16_t x626 = UINT16_MAX;
volatile int8_t x627 = INT8_MIN;
int32_t x631 = -972546306;
static int32_t x632 = INT32_MAX;
uint64_t x633 = UINT64_MAX;
int16_t x634 = -53;
int32_t x637 = -73736154;
volatile int16_t x638 = -1;
static int8_t x642 = -1;
uint32_t x650 = UINT32_MAX;
int8_t x651 = INT8_MAX;
int64_t x653 = -110989LL;
int16_t x659 = INT16_MIN;
int32_t x665 = -135975;
int16_t x679 = INT16_MIN;
static int8_t x682 = 1;
volatile int8_t x683 = -1;
int32_t x685 = -24658;
uint32_t x688 = 18U;
int32_t t171 = 5;
int32_t x689 = INT32_MIN;
int8_t x693 = -3;
int16_t x709 = -1;
volatile int16_t x711 = 0;
uint16_t x716 = UINT16_MAX;
uint32_t x717 = 11755624U;
int16_t x719 = INT16_MIN;
int32_t x720 = 93105;
volatile int32_t x721 = INT32_MIN;
volatile uint16_t x722 = UINT16_MAX;
static int64_t x723 = INT64_MAX;
static volatile int8_t x724 = INT8_MIN;
int8_t x725 = -44;
volatile uint64_t x732 = UINT64_MAX;
volatile int32_t t182 = 2265250;
int32_t x733 = INT32_MIN;
int32_t x736 = INT32_MIN;
int32_t t184 = 5030;
volatile int16_t x743 = -1;
int32_t x744 = INT32_MIN;
uint8_t x752 = 6U;
uint32_t x754 = UINT32_MAX;
uint32_t x759 = 6676U;
uint32_t x761 = 3742U;
uint8_t x766 = 3U;
static int8_t x768 = INT8_MAX;
uint32_t x776 = 1375U;
int32_t x780 = INT32_MAX;
uint8_t x783 = UINT8_MAX;
int32_t t197 = 183;
int32_t x797 = INT32_MIN;
int64_t x798 = INT64_MAX;
uint16_t x800 = UINT16_MAX;


void f0(void) {
    	int32_t x1 = -1;
	uint64_t x2 = 190093693LLU;
	uint32_t x4 = 12091074U;
	int32_t t0 = 3386160;

    t0 = (x1==(x2>(x3==x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x6 = 510U;
	static int8_t x8 = INT8_MIN;
	int32_t t1 = 5688666;

    t1 = (x5==(x6>(x7==x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x9 = UINT8_MAX;
	uint16_t x10 = UINT16_MAX;
	static int8_t x11 = 26;
	int8_t x12 = INT8_MAX;
	int32_t t2 = -1486930;

    t2 = (x9==(x10>(x11==x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x14 = INT16_MIN;
	int64_t x15 = INT64_MIN;
	uint32_t x16 = UINT32_MAX;
	volatile int32_t t3 = 41135376;

    t3 = (x13==(x14>(x15==x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x18 = INT16_MIN;
	int32_t x19 = 66599980;
	int64_t x20 = 7448287LL;
	volatile int32_t t4 = -38882;

    t4 = (x17==(x18>(x19==x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = UINT32_MAX;
	volatile uint16_t x22 = 0U;
	volatile int32_t x24 = -28735628;
	volatile int32_t t5 = -6134510;

    t5 = (x21==(x22>(x23==x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -1;
	static int8_t x26 = INT8_MIN;
	volatile int32_t x27 = -190951;
	uint32_t x28 = 81499U;
	int32_t t6 = -8904;

    t6 = (x25==(x26>(x27==x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -3;
	int64_t x30 = INT64_MIN;
	uint64_t x32 = 2534528300LLU;
	static int32_t t7 = -470361409;

    t7 = (x29==(x30>(x31==x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x33 = INT8_MAX;
	static uint64_t x35 = UINT64_MAX;
	int16_t x36 = INT16_MAX;
	volatile int32_t t8 = 7;

    t8 = (x33==(x34>(x35==x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x38 = -1LL;
	static volatile int8_t x39 = INT8_MIN;
	int64_t x40 = INT64_MIN;

    t9 = (x37==(x38>(x39==x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x43 = INT32_MIN;
	int64_t x44 = INT64_MIN;
	static int32_t t10 = -6819;

    t10 = (x41==(x42>(x43==x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = 27LLU;
	uint32_t x46 = UINT32_MAX;
	int64_t x47 = -1LL;
	int32_t t11 = -2822;

    t11 = (x45==(x46>(x47==x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = 6U;
	int8_t x51 = -1;
	int16_t x52 = -81;

    t12 = (x49==(x50>(x51==x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x54 = -1;
	int16_t x55 = INT16_MIN;
	int32_t x56 = INT32_MIN;
	volatile int32_t t13 = -40806;

    t13 = (x53==(x54>(x55==x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint32_t x58 = UINT32_MAX;
	int8_t x59 = INT8_MAX;
	static int32_t x60 = INT32_MIN;
	int32_t t14 = 911;

    t14 = (x57==(x58>(x59==x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x61 = UINT8_MAX;
	int16_t x62 = INT16_MIN;
	volatile int64_t x63 = INT64_MIN;
	static int8_t x64 = INT8_MIN;
	int32_t t15 = -79;

    t15 = (x61==(x62>(x63==x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 1651U;
	int32_t x66 = INT32_MIN;
	static uint8_t x67 = UINT8_MAX;
	int8_t x68 = INT8_MIN;
	volatile int32_t t16 = -523742120;

    t16 = (x65==(x66>(x67==x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MAX;
	static int8_t x70 = INT8_MIN;
	uint64_t x71 = UINT64_MAX;
	static uint64_t x72 = UINT64_MAX;
	int32_t t17 = -3150890;

    t17 = (x69==(x70>(x71==x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int16_t x73 = INT16_MAX;
	uint16_t x74 = UINT16_MAX;
	volatile int32_t x76 = -1;
	static volatile int32_t t18 = -5568423;

    t18 = (x73==(x74>(x75==x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x77 = 27589;
	static int16_t x78 = 2178;
	int32_t x79 = 1;
	uint16_t x80 = UINT16_MAX;
	int32_t t19 = -10282977;

    t19 = (x77==(x78>(x79==x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int32_t x81 = -1259032;
	int32_t x82 = INT32_MIN;
	int16_t x84 = INT16_MIN;
	volatile int32_t t20 = -19621;

    t20 = (x81==(x82>(x83==x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x86 = INT8_MIN;
	uint64_t x88 = 23773608LLU;
	static volatile int32_t t21 = 1;

    t21 = (x85==(x86>(x87==x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x89 = 570LL;
	uint8_t x91 = 126U;
	volatile uint16_t x92 = UINT16_MAX;
	volatile int32_t t22 = 67702;

    t22 = (x89==(x90>(x91==x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x93 = 705638LLU;
	uint64_t x94 = 328245LLU;
	uint8_t x95 = 43U;
	uint64_t x96 = 6226058LLU;
	static int32_t t23 = 2;

    t23 = (x93==(x94>(x95==x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x97 = UINT64_MAX;
	int8_t x99 = 41;
	int16_t x100 = -1;
	int32_t t24 = 1854251;

    t24 = (x97==(x98>(x99==x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x101 = 8LLU;
	uint16_t x102 = 373U;
	static int8_t x103 = INT8_MIN;
	static volatile uint64_t x104 = 1504633172124645354LLU;
	int32_t t25 = -1316;

    t25 = (x101==(x102>(x103==x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = -1LL;
	int16_t x106 = INT16_MIN;
	static volatile int64_t x107 = -1LL;
	int8_t x108 = INT8_MIN;
	int32_t t26 = 49485427;

    t26 = (x105==(x106>(x107==x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x110 = INT8_MAX;
	int8_t x111 = -1;
	volatile int32_t t27 = -121682;

    t27 = (x109==(x110>(x111==x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x114 = 6161;
	static int64_t x115 = INT64_MIN;
	uint16_t x116 = 12548U;
	static volatile int32_t t28 = -759164479;

    t28 = (x113==(x114>(x115==x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x117 = -4223015;
	uint64_t x118 = 828010442234757LLU;
	static volatile int8_t x119 = -20;

    t29 = (x117==(x118>(x119==x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x121 = -307;
	uint16_t x122 = 2U;
	uint64_t x123 = 0LLU;

    t30 = (x121==(x122>(x123==x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = 7748146LL;
	volatile uint32_t x126 = 792306343U;
	uint16_t x127 = 86U;
	int8_t x128 = 0;
	volatile int32_t t31 = 12;

    t31 = (x125==(x126>(x127==x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x129 = UINT16_MAX;
	volatile uint16_t x131 = UINT16_MAX;
	uint8_t x132 = UINT8_MAX;
	int32_t t32 = 7043;

    t32 = (x129==(x130>(x131==x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x133 = INT64_MIN;
	static uint64_t x134 = 25191355LLU;
	int64_t x135 = 502LL;
	volatile int16_t x136 = -35;
	volatile int32_t t33 = -70488435;

    t33 = (x133==(x134>(x135==x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x137 = -1;
	int8_t x139 = -7;
	static volatile uint8_t x140 = UINT8_MAX;
	int32_t t34 = 1429250;

    t34 = (x137==(x138>(x139==x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x141 = INT64_MIN;
	int64_t x142 = INT64_MAX;
	volatile int8_t x143 = -1;
	volatile int32_t t35 = 6408384;

    t35 = (x141==(x142>(x143==x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = INT16_MAX;
	int32_t x146 = INT32_MIN;
	uint8_t x147 = 2U;
	volatile uint8_t x148 = UINT8_MAX;
	int32_t t36 = -92892;

    t36 = (x145==(x146>(x147==x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MIN;
	uint32_t x150 = 1320468U;
	static uint32_t x151 = 56U;

    t37 = (x149==(x150>(x151==x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x153 = 9;
	int8_t x154 = INT8_MIN;
	uint64_t x155 = 87914139998854949LLU;

    t38 = (x153==(x154>(x155==x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x157 = INT8_MAX;
	static int64_t x158 = -1LL;
	uint32_t x159 = 2510U;
	int64_t x160 = 5264973436598LL;

    t39 = (x157==(x158>(x159==x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x162 = -57;
	static int64_t x163 = INT64_MIN;
	int32_t x164 = INT32_MIN;
	int32_t t40 = -36;

    t40 = (x161==(x162>(x163==x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x166 = -1;
	int8_t x167 = 1;
	int32_t x168 = 630;
	volatile int32_t t41 = 40372;

    t41 = (x165==(x166>(x167==x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int64_t x169 = INT64_MIN;
	int32_t x170 = INT32_MIN;
	int16_t x172 = INT16_MIN;
	volatile int32_t t42 = -3797;

    t42 = (x169==(x170>(x171==x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x173 = 113U;
	int16_t x174 = -1;
	static int32_t x175 = INT32_MIN;
	volatile int32_t t43 = 231;

    t43 = (x173==(x174>(x175==x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int8_t x177 = 28;
	int16_t x178 = INT16_MIN;
	static int16_t x179 = -1;
	int32_t t44 = 2239888;

    t44 = (x177==(x178>(x179==x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x182 = -1;
	int8_t x183 = INT8_MAX;
	uint16_t x184 = 1U;
	int32_t t45 = 6;

    t45 = (x181==(x182>(x183==x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x186 = UINT64_MAX;
	volatile int64_t x188 = 4LL;
	int32_t t46 = 139;

    t46 = (x185==(x186>(x187==x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x190 = INT8_MIN;
	int16_t x192 = INT16_MIN;
	volatile int32_t t47 = -142;

    t47 = (x189==(x190>(x191==x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = -1;
	int8_t x194 = INT8_MIN;
	int32_t x195 = INT32_MIN;
	volatile int8_t x196 = INT8_MAX;
	static int32_t t48 = 5;

    t48 = (x193==(x194>(x195==x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x197 = 13883874113844LLU;
	int8_t x198 = INT8_MIN;
	static volatile uint16_t x199 = 4U;
	static uint16_t x200 = UINT16_MAX;
	volatile int32_t t49 = 1566;

    t49 = (x197==(x198>(x199==x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x201 = INT16_MIN;
	int16_t x203 = 144;
	int64_t x204 = -4843103029794750LL;

    t50 = (x201==(x202>(x203==x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x207 = -201;
	int64_t x208 = -18LL;

    t51 = (x205==(x206>(x207==x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x209 = INT16_MIN;
	int32_t t52 = 1;

    t52 = (x209==(x210>(x211==x212)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x213 = -1;
	static volatile int8_t x214 = INT8_MIN;
	int8_t x215 = INT8_MAX;
	uint8_t x216 = 2U;
	int32_t t53 = -59778;

    t53 = (x213==(x214>(x215==x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = -26683208;
	static int16_t x218 = -1;
	uint16_t x220 = 0U;

    t54 = (x217==(x218>(x219==x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x221 = INT32_MAX;
	static int32_t x222 = INT32_MIN;
	uint64_t x223 = 200134431663256LLU;
	volatile uint32_t x224 = UINT32_MAX;
	volatile int32_t t55 = 642;

    t55 = (x221==(x222>(x223==x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x225 = -1;
	volatile uint32_t x226 = 416U;
	int64_t x227 = INT64_MIN;
	static int32_t t56 = 20;

    t56 = (x225==(x226>(x227==x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = INT8_MIN;
	int64_t x230 = -28429819887951LL;
	uint8_t x231 = 19U;
	int8_t x232 = INT8_MIN;
	static volatile int32_t t57 = 756399962;

    t57 = (x229==(x230>(x231==x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x234 = INT16_MAX;
	int8_t x235 = INT8_MIN;
	uint8_t x236 = 0U;
	volatile int32_t t58 = -32601;

    t58 = (x233==(x234>(x235==x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x238 = UINT64_MAX;
	volatile int32_t x239 = INT32_MIN;
	volatile int64_t x240 = 1LL;

    t59 = (x237==(x238>(x239==x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x241 = -1LL;
	int32_t x242 = -1859442;
	int32_t t60 = -6;

    t60 = (x241==(x242>(x243==x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x246 = 1U;
	int8_t x247 = 6;
	int8_t x248 = 2;
	static int32_t t61 = 378;

    t61 = (x245==(x246>(x247==x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = INT8_MIN;
	int32_t x250 = -39509;
	static int16_t x252 = -15679;
	int32_t t62 = -110;

    t62 = (x249==(x250>(x251==x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = INT8_MIN;
	int64_t x254 = INT64_MIN;
	volatile int8_t x255 = 16;
	int32_t x256 = INT32_MIN;
	volatile int32_t t63 = -7;

    t63 = (x253==(x254>(x255==x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x258 = INT32_MAX;
	uint8_t x259 = 8U;
	int32_t x260 = -3987560;
	volatile int32_t t64 = 841;

    t64 = (x257==(x258>(x259==x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x262 = INT16_MIN;
	int8_t x264 = INT8_MIN;
	static int32_t t65 = 12209233;

    t65 = (x261==(x262>(x263==x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = INT8_MAX;
	int16_t x266 = -1;
	static int64_t x268 = -138430414693LL;
	volatile int32_t t66 = 16327725;

    t66 = (x265==(x266>(x267==x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x269 = -11;
	uint64_t x270 = 556967376598629847LLU;
	volatile int8_t x271 = 33;
	int32_t x272 = INT32_MIN;

    t67 = (x269==(x270>(x271==x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x273 = 0U;
	int64_t x274 = 119833427992LL;
	volatile int32_t t68 = -5083;

    t68 = (x273==(x274>(x275==x276)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = 152593027519LL;
	volatile uint32_t x278 = 211509854U;
	static int8_t x280 = -1;
	static int32_t t69 = 1;

    t69 = (x277==(x278>(x279==x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x282 = INT16_MIN;
	int32_t x284 = INT32_MIN;
	int32_t t70 = -6985807;

    t70 = (x281==(x282>(x283==x284)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = INT64_MIN;
	int64_t x286 = -494LL;
	uint64_t x287 = UINT64_MAX;
	volatile int32_t t71 = 309960822;

    t71 = (x285==(x286>(x287==x288)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x290 = 8;
	uint8_t x291 = UINT8_MAX;
	int8_t x292 = -1;
	volatile int32_t t72 = 1;

    t72 = (x289==(x290>(x291==x292)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = -1619473836112LL;
	int32_t x295 = -1;
	int32_t x296 = -774503411;
	static volatile int32_t t73 = -53;

    t73 = (x293==(x294>(x295==x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = INT16_MAX;
	static int16_t x298 = INT16_MIN;
	int64_t x299 = 3162LL;
	volatile uint64_t x300 = 463732793607506833LLU;
	int32_t t74 = -378130825;

    t74 = (x297==(x298>(x299==x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int16_t x302 = -8;
	uint32_t x304 = 118U;

    t75 = (x301==(x302>(x303==x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = -1;
	int32_t x306 = INT32_MIN;
	static int64_t x307 = 4097443LL;
	volatile int64_t x308 = -19LL;
	volatile int32_t t76 = 1;

    t76 = (x305==(x306>(x307==x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x309 = 64U;
	int16_t x310 = -1;
	static int16_t x311 = INT16_MAX;
	volatile int8_t x312 = 1;
	volatile int32_t t77 = -2816;

    t77 = (x309==(x310>(x311==x312)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = -44;
	static volatile uint64_t x314 = 7956142517447906LLU;
	uint16_t x315 = UINT16_MAX;
	static uint32_t x316 = UINT32_MAX;
	static int32_t t78 = 152731;

    t78 = (x313==(x314>(x315==x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int64_t x317 = INT64_MIN;
	static uint64_t x318 = 1LLU;
	int16_t x319 = INT16_MIN;
	volatile int32_t t79 = -20148;

    t79 = (x317==(x318>(x319==x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x321 = 413501680U;
	uint8_t x322 = 1U;
	volatile int16_t x324 = 1;
	int32_t t80 = -18357;

    t80 = (x321==(x322>(x323==x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = -1LL;
	uint16_t x326 = UINT16_MAX;
	volatile int32_t x327 = INT32_MIN;
	int32_t t81 = 0;

    t81 = (x325==(x326>(x327==x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = 0;
	int8_t x330 = INT8_MAX;
	int8_t x331 = -33;
	volatile int8_t x332 = INT8_MAX;
	volatile int32_t t82 = -91164513;

    t82 = (x329==(x330>(x331==x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = -1;
	int64_t x334 = 149649757944757977LL;
	volatile int16_t x335 = 12920;

    t83 = (x333==(x334>(x335==x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x338 = 157678482U;
	int16_t x339 = 0;
	int8_t x340 = INT8_MAX;
	int32_t t84 = 75;

    t84 = (x337==(x338>(x339==x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = -6276;
	static int32_t x342 = INT32_MAX;
	static int64_t x343 = -1LL;
	static int32_t t85 = 159;

    t85 = (x341==(x342>(x343==x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = 3;
	uint64_t x346 = UINT64_MAX;
	int32_t x347 = -1;
	int64_t x348 = 412LL;
	volatile int32_t t86 = -26690;

    t86 = (x345==(x346>(x347==x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x349 = INT8_MIN;
	static int8_t x350 = 0;
	int32_t x352 = -1;
	int32_t t87 = -432;

    t87 = (x349==(x350>(x351==x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x354 = -1LL;
	volatile int16_t x356 = INT16_MAX;

    t88 = (x353==(x354>(x355==x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x357 = -1;
	volatile uint32_t x358 = UINT32_MAX;
	volatile int64_t x359 = INT64_MIN;
	uint32_t x360 = 837U;

    t89 = (x357==(x358>(x359==x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x361 = 18840903LLU;
	int32_t t90 = -234580690;

    t90 = (x361==(x362>(x363==x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x367 = INT8_MIN;
	int32_t x368 = 421;

    t91 = (x365==(x366>(x367==x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = -46009019LL;
	static int32_t x370 = 5907;
	volatile uint8_t x371 = 0U;
	uint32_t x372 = 11995381U;

    t92 = (x369==(x370>(x371==x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x373 = 70;
	volatile int32_t t93 = -6886294;

    t93 = (x373==(x374>(x375==x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x378 = 206LLU;
	int64_t x379 = 14391LL;
	uint64_t x380 = 862601453642437LLU;
	volatile int32_t t94 = 14;

    t94 = (x377==(x378>(x379==x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x381 = INT16_MAX;
	int8_t x383 = INT8_MAX;
	static int8_t x384 = 3;
	static int32_t t95 = -9851;

    t95 = (x381==(x382>(x383==x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x385 = UINT64_MAX;
	int8_t x387 = INT8_MAX;
	int64_t x388 = INT64_MAX;
	static int32_t t96 = -73;

    t96 = (x385==(x386>(x387==x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = INT32_MAX;
	uint16_t x390 = 0U;
	int8_t x391 = -1;
	uint64_t x392 = 3412466832224LLU;
	volatile int32_t t97 = -32491;

    t97 = (x389==(x390>(x391==x392)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x394 = INT32_MIN;
	int64_t x395 = INT64_MIN;
	int64_t x396 = INT64_MIN;
	static int32_t t98 = -3;

    t98 = (x393==(x394>(x395==x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x397 = UINT8_MAX;
	int16_t x398 = 1;
	int8_t x399 = -1;
	volatile uint32_t x400 = 345369566U;
	int32_t t99 = 6094008;

    t99 = (x397==(x398>(x399==x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = INT32_MIN;
	volatile int64_t x402 = -1LL;
	static int16_t x403 = -1;
	uint8_t x404 = 7U;
	volatile int32_t t100 = 428714129;

    t100 = (x401==(x402>(x403==x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MAX;
	int16_t x406 = INT16_MIN;
	int32_t x407 = INT32_MIN;
	uint8_t x408 = 56U;
	int32_t t101 = 7547617;

    t101 = (x405==(x406>(x407==x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MAX;
	int64_t x410 = INT64_MIN;
	int32_t x411 = -1;
	int32_t x412 = INT32_MIN;
	int32_t t102 = -14;

    t102 = (x409==(x410>(x411==x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = INT64_MAX;
	int8_t x414 = 37;
	volatile int64_t x415 = INT64_MIN;

    t103 = (x413==(x414>(x415==x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = -55982327LL;
	int8_t x418 = INT8_MIN;
	volatile uint64_t x419 = 940930203LLU;
	int64_t x420 = -338016435702676LL;

    t104 = (x417==(x418>(x419==x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint16_t x422 = UINT16_MAX;
	volatile int32_t t105 = -1;

    t105 = (x421==(x422>(x423==x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = INT16_MIN;
	int32_t x426 = INT32_MIN;
	static int16_t x427 = -1;
	static int16_t x428 = -1;
	int32_t t106 = -59570;

    t106 = (x425==(x426>(x427==x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x430 = 0U;
	int32_t x431 = 19;
	uint32_t x432 = UINT32_MAX;
	static int32_t t107 = -16072;

    t107 = (x429==(x430>(x431==x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int64_t x434 = INT64_MAX;
	uint64_t x435 = UINT64_MAX;
	uint8_t x436 = UINT8_MAX;

    t108 = (x433==(x434>(x435==x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = INT32_MIN;
	int32_t x438 = -1;
	static volatile int32_t t109 = -4187616;

    t109 = (x437==(x438>(x439==x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = INT16_MAX;
	uint16_t x442 = 843U;
	int16_t x443 = -4561;
	uint32_t x444 = UINT32_MAX;
	volatile int32_t t110 = -409;

    t110 = (x441==(x442>(x443==x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x445 = UINT64_MAX;
	static int8_t x446 = INT8_MIN;
	int8_t x447 = INT8_MIN;
	static int32_t x448 = INT32_MIN;
	int32_t t111 = -1403;

    t111 = (x445==(x446>(x447==x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x450 = UINT8_MAX;
	static int32_t x451 = 1;
	int8_t x452 = -1;

    t112 = (x449==(x450>(x451==x452)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x453 = INT16_MAX;
	uint16_t x454 = UINT16_MAX;
	int32_t x455 = -373799769;
	int16_t x456 = INT16_MAX;
	int32_t t113 = -3292;

    t113 = (x453==(x454>(x455==x456)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x458 = UINT32_MAX;
	int8_t x459 = INT8_MIN;

    t114 = (x457==(x458>(x459==x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x463 = 173;
	uint16_t x464 = UINT16_MAX;

    t115 = (x461==(x462>(x463==x464)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x465 = 964U;
	uint16_t x467 = 1U;
	volatile int16_t x468 = -24;
	volatile int32_t t116 = 587641658;

    t116 = (x465==(x466>(x467==x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint16_t x469 = 19U;
	uint8_t x470 = 76U;
	int8_t x471 = INT8_MAX;
	volatile int8_t x472 = 0;

    t117 = (x469==(x470>(x471==x472)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int64_t x473 = INT64_MIN;
	volatile int8_t x474 = INT8_MIN;
	volatile int8_t x475 = 7;
	int64_t x476 = -12289370992LL;

    t118 = (x473==(x474>(x475==x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = INT8_MAX;
	volatile uint8_t x479 = UINT8_MAX;
	uint32_t x480 = 7U;
	volatile int32_t t119 = -198904;

    t119 = (x477==(x478>(x479==x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x482 = INT64_MIN;
	int32_t x483 = INT32_MIN;
	static uint64_t x484 = 87573861LLU;
	int32_t t120 = 6688909;

    t120 = (x481==(x482>(x483==x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x486 = INT64_MIN;
	int16_t x487 = -1;
	int64_t x488 = INT64_MAX;

    t121 = (x485==(x486>(x487==x488)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = INT64_MIN;
	volatile uint16_t x490 = 30U;
	static int8_t x491 = INT8_MAX;
	int16_t x492 = -1;
	int32_t t122 = -1;

    t122 = (x489==(x490>(x491==x492)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x496 = -1;

    t123 = (x493==(x494>(x495==x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x497 = UINT32_MAX;
	uint64_t x499 = UINT64_MAX;
	volatile int32_t x500 = INT32_MIN;
	int32_t t124 = 11;

    t124 = (x497==(x498>(x499==x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x503 = -637;
	volatile uint16_t x504 = UINT16_MAX;
	volatile int32_t t125 = 0;

    t125 = (x501==(x502>(x503==x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = 8;
	static uint16_t x506 = 13741U;
	uint16_t x508 = 1U;
	int32_t t126 = -5;

    t126 = (x505==(x506>(x507==x508)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x510 = INT32_MIN;
	static int32_t x511 = 487986;
	volatile int32_t t127 = -44878343;

    t127 = (x509==(x510>(x511==x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x514 = -1;
	uint16_t x516 = 15U;

    t128 = (x513==(x514>(x515==x516)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x517 = 40U;
	uint8_t x518 = 113U;
	int32_t t129 = 744;

    t129 = (x517==(x518>(x519==x520)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = INT16_MIN;
	int64_t x522 = 158743LL;
	int64_t x524 = 3589286891LL;
	volatile int32_t t130 = -365;

    t130 = (x521==(x522>(x523==x524)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x525 = INT16_MIN;
	static int32_t x527 = INT32_MIN;
	static int16_t x528 = INT16_MAX;
	volatile int32_t t131 = 1920;

    t131 = (x525==(x526>(x527==x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = 4842;
	static int64_t x530 = -69991425LL;
	static uint8_t x531 = UINT8_MAX;
	int32_t t132 = -87543;

    t132 = (x529==(x530>(x531==x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x534 = 2U;
	static uint64_t x535 = UINT64_MAX;
	static int16_t x536 = INT16_MIN;
	volatile int32_t t133 = -2359;

    t133 = (x533==(x534>(x535==x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int16_t x537 = INT16_MAX;
	uint32_t x538 = 2312919U;
	uint8_t x539 = 23U;
	uint16_t x540 = 101U;

    t134 = (x537==(x538>(x539==x540)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x541 = INT64_MIN;
	int16_t x542 = -1;
	int16_t x543 = -1;
	int32_t t135 = -6851529;

    t135 = (x541==(x542>(x543==x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x545 = 82U;
	volatile uint16_t x546 = 1744U;
	static uint32_t x547 = 8328U;
	static int16_t x548 = INT16_MAX;
	volatile int32_t t136 = 15781;

    t136 = (x545==(x546>(x547==x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint64_t x549 = 29522933507LLU;
	int16_t x550 = INT16_MIN;
	uint16_t x552 = 893U;
	volatile int32_t t137 = 1;

    t137 = (x549==(x550>(x551==x552)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x554 = UINT16_MAX;
	static int16_t x555 = -1;
	volatile int32_t x556 = -1;
	volatile int32_t t138 = -44458707;

    t138 = (x553==(x554>(x555==x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x559 = 682390U;
	static uint64_t x560 = 14LLU;
	volatile int32_t t139 = 2063;

    t139 = (x557==(x558>(x559==x560)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x561 = 610U;
	uint32_t x562 = UINT32_MAX;
	uint16_t x563 = 25U;
	uint8_t x564 = 27U;
	volatile int32_t t140 = -1;

    t140 = (x561==(x562>(x563==x564)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x565 = 3121U;
	uint64_t x566 = 10049226930605057LLU;
	int64_t x567 = -534450519LL;
	uint32_t x568 = UINT32_MAX;
	int32_t t141 = 3644;

    t141 = (x565==(x566>(x567==x568)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x569 = 422U;
	int32_t x570 = -33;
	int32_t x572 = INT32_MIN;
	int32_t t142 = -13267;

    t142 = (x569==(x570>(x571==x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x574 = 12LL;
	uint8_t x575 = 1U;
	int8_t x576 = -4;
	int32_t t143 = -200;

    t143 = (x573==(x574>(x575==x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x577 = UINT8_MAX;
	volatile int32_t x578 = INT32_MAX;
	int8_t x579 = INT8_MAX;
	uint16_t x580 = 17U;
	int32_t t144 = 1;

    t144 = (x577==(x578>(x579==x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = INT32_MAX;
	int32_t x582 = INT32_MIN;
	int8_t x583 = -1;
	uint16_t x584 = 5U;

    t145 = (x581==(x582>(x583==x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x585 = 245685U;
	int16_t x586 = -954;
	int8_t x587 = -26;
	int32_t t146 = 103332098;

    t146 = (x585==(x586>(x587==x588)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x590 = UINT64_MAX;
	uint16_t x591 = 16U;
	uint8_t x592 = 0U;
	volatile int32_t t147 = 993262143;

    t147 = (x589==(x590>(x591==x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x593 = 6;
	int64_t x594 = 945071LL;
	uint8_t x596 = 15U;
	int32_t t148 = -116631514;

    t148 = (x593==(x594>(x595==x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x597 = UINT8_MAX;
	int32_t x598 = -305;
	uint32_t x599 = 39991U;
	int32_t t149 = -49132436;

    t149 = (x597==(x598>(x599==x600)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x601 = 10U;
	uint8_t x602 = UINT8_MAX;
	static int32_t t150 = 5667;

    t150 = (x601==(x602>(x603==x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x605 = UINT16_MAX;
	int8_t x606 = INT8_MIN;
	static volatile int16_t x607 = INT16_MAX;
	static volatile int8_t x608 = INT8_MIN;
	int32_t t151 = -5439;

    t151 = (x605==(x606>(x607==x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = -1LL;
	static int8_t x610 = INT8_MIN;
	int8_t x611 = -51;
	int8_t x612 = INT8_MIN;
	int32_t t152 = -2;

    t152 = (x609==(x610>(x611==x612)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = -30;
	int32_t x614 = INT32_MAX;
	volatile int8_t x615 = 15;
	int16_t x616 = -1;
	volatile int32_t t153 = 17651476;

    t153 = (x613==(x614>(x615==x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = INT64_MIN;
	int32_t x619 = INT32_MAX;
	volatile int8_t x620 = INT8_MIN;

    t154 = (x617==(x618>(x619==x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = -1;
	volatile uint8_t x622 = 31U;
	uint64_t x623 = 1470521401LLU;
	int64_t x624 = INT64_MAX;
	int32_t t155 = -313321283;

    t155 = (x621==(x622>(x623==x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x625 = 515583777U;
	uint32_t x628 = UINT32_MAX;
	int32_t t156 = 25;

    t156 = (x625==(x626>(x627==x628)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint32_t x629 = 7342U;
	uint32_t x630 = 140U;
	int32_t t157 = -4232112;

    t157 = (x629==(x630>(x631==x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x635 = INT16_MIN;
	volatile int32_t x636 = -275282582;
	volatile int32_t t158 = -15;

    t158 = (x633==(x634>(x635==x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint16_t x639 = UINT16_MAX;
	int8_t x640 = INT8_MIN;
	volatile int32_t t159 = 2266899;

    t159 = (x637==(x638>(x639==x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x641 = 3158863845LL;
	int64_t x643 = INT64_MIN;
	static uint32_t x644 = 7471530U;
	volatile int32_t t160 = 1070;

    t160 = (x641==(x642>(x643==x644)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = -1LL;
	int32_t x646 = -1;
	uint32_t x647 = 407U;
	int64_t x648 = 1656373262578LL;
	static int32_t t161 = -814;

    t161 = (x645==(x646>(x647==x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x649 = 447927823951175LLU;
	uint8_t x652 = 26U;
	static int32_t t162 = 274164;

    t162 = (x649==(x650>(x651==x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x654 = INT64_MAX;
	int8_t x655 = 1;
	static uint32_t x656 = 931U;
	volatile int32_t t163 = -31;

    t163 = (x653==(x654>(x655==x656)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = INT8_MIN;
	uint16_t x658 = 1434U;
	uint32_t x660 = 1160757748U;
	int32_t t164 = -361;

    t164 = (x657==(x658>(x659==x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = -546501LL;
	int32_t x662 = INT32_MIN;
	int16_t x663 = -1;
	int64_t x664 = INT64_MIN;
	volatile int32_t t165 = -3416;

    t165 = (x661==(x662>(x663==x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x666 = -1LL;
	uint64_t x667 = 8467LLU;
	int8_t x668 = -1;
	int32_t t166 = -734;

    t166 = (x665==(x666>(x667==x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x669 = -1;
	int8_t x670 = INT8_MIN;
	int64_t x671 = INT64_MAX;
	volatile int8_t x672 = INT8_MAX;
	int32_t t167 = 240;

    t167 = (x669==(x670>(x671==x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x673 = 32U;
	static int32_t x674 = INT32_MIN;
	int8_t x675 = -1;
	uint16_t x676 = 3100U;
	static int32_t t168 = -100;

    t168 = (x673==(x674>(x675==x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = INT32_MAX;
	static uint16_t x678 = 42U;
	static int32_t x680 = INT32_MIN;
	volatile int32_t t169 = 0;

    t169 = (x677==(x678>(x679==x680)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x681 = 0U;
	static uint64_t x684 = 241836665LLU;
	volatile int32_t t170 = 338;

    t170 = (x681==(x682>(x683==x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x686 = INT16_MIN;
	int64_t x687 = INT64_MIN;

    t171 = (x685==(x686>(x687==x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x690 = 1959LL;
	volatile int32_t x691 = INT32_MAX;
	static int8_t x692 = INT8_MIN;
	static int32_t t172 = -199;

    t172 = (x689==(x690>(x691==x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int64_t x694 = 174188LL;
	int16_t x695 = 841;
	int32_t x696 = -1;
	volatile int32_t t173 = 4776;

    t173 = (x693==(x694>(x695==x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = -431560LL;
	uint32_t x698 = UINT32_MAX;
	uint32_t x699 = 899784199U;
	volatile int64_t x700 = INT64_MIN;
	int32_t t174 = 3582683;

    t174 = (x697==(x698>(x699==x700)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x701 = 1;
	int64_t x702 = 113LL;
	int64_t x703 = -94405LL;
	uint8_t x704 = UINT8_MAX;
	static int32_t t175 = -703;

    t175 = (x701==(x702>(x703==x704)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x705 = 175U;
	volatile uint16_t x706 = 3U;
	int32_t x707 = INT32_MAX;
	volatile int8_t x708 = 57;
	static volatile int32_t t176 = 3286;

    t176 = (x705==(x706>(x707==x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x710 = INT64_MIN;
	int8_t x712 = INT8_MAX;
	int32_t t177 = 2499;

    t177 = (x709==(x710>(x711==x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = INT16_MIN;
	static int64_t x714 = -3768497354LL;
	volatile uint16_t x715 = 68U;
	volatile int32_t t178 = 168906339;

    t178 = (x713==(x714>(x715==x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x718 = UINT8_MAX;
	static volatile int32_t t179 = -1594512;

    t179 = (x717==(x718>(x719==x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t t180 = -99296741;

    t180 = (x721==(x722>(x723==x724)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x726 = 1U;
	uint16_t x727 = 7853U;
	int8_t x728 = -2;
	int32_t t181 = 101332;

    t181 = (x725==(x726>(x727==x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = -1;
	int16_t x730 = INT16_MIN;
	int8_t x731 = 14;

    t182 = (x729==(x730>(x731==x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x734 = UINT64_MAX;
	int16_t x735 = INT16_MAX;
	volatile int32_t t183 = 361782;

    t183 = (x733==(x734>(x735==x736)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = -19393373675LL;
	volatile uint16_t x738 = 3078U;
	uint32_t x739 = 262U;
	uint64_t x740 = 42LLU;

    t184 = (x737==(x738>(x739==x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = INT32_MAX;
	static uint16_t x742 = UINT16_MAX;
	volatile int32_t t185 = 31068369;

    t185 = (x741==(x742>(x743==x744)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = -44;
	int8_t x746 = -1;
	uint8_t x747 = 6U;
	int16_t x748 = -1;
	int32_t t186 = -416;

    t186 = (x745==(x746>(x747==x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x749 = 0U;
	int16_t x750 = INT16_MIN;
	int16_t x751 = -1;
	int32_t t187 = 37597886;

    t187 = (x749==(x750>(x751==x752)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x753 = UINT16_MAX;
	int8_t x755 = INT8_MIN;
	static volatile int64_t x756 = 0LL;
	int32_t t188 = -17007550;

    t188 = (x753==(x754>(x755==x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x757 = 216U;
	static int8_t x758 = INT8_MIN;
	int32_t x760 = -16314;
	int32_t t189 = 1131141;

    t189 = (x757==(x758>(x759==x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x762 = INT32_MIN;
	int32_t x763 = -1;
	volatile int64_t x764 = -1778861314553323LL;
	volatile int32_t t190 = -65087;

    t190 = (x761==(x762>(x763==x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x765 = 120701942U;
	volatile int64_t x767 = INT64_MIN;
	volatile int32_t t191 = -4;

    t191 = (x765==(x766>(x767==x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = INT32_MIN;
	static uint16_t x770 = 17U;
	static volatile int8_t x771 = -1;
	int32_t x772 = INT32_MAX;
	static volatile int32_t t192 = 1903;

    t192 = (x769==(x770>(x771==x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = 147;
	volatile uint64_t x774 = UINT64_MAX;
	volatile uint64_t x775 = 2321250178145114LLU;
	int32_t t193 = -163779530;

    t193 = (x773==(x774>(x775==x776)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x777 = INT8_MIN;
	int32_t x778 = INT32_MIN;
	volatile uint64_t x779 = UINT64_MAX;
	volatile int32_t t194 = 24;

    t194 = (x777==(x778>(x779==x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = INT64_MIN;
	int8_t x782 = INT8_MAX;
	uint64_t x784 = 3852015019714LLU;
	int32_t t195 = 418679;

    t195 = (x781==(x782>(x783==x784)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = 23496911178LL;
	int8_t x786 = INT8_MIN;
	volatile uint16_t x787 = UINT16_MAX;
	int64_t x788 = INT64_MIN;
	static int32_t t196 = -709313657;

    t196 = (x785==(x786>(x787==x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x789 = 1247U;
	int16_t x790 = INT16_MIN;
	int64_t x791 = 30330664331243LL;
	int64_t x792 = -1LL;

    t197 = (x789==(x790>(x791==x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x793 = 1U;
	int64_t x794 = 11155LL;
	int8_t x795 = INT8_MIN;
	volatile int32_t x796 = -1;
	volatile int32_t t198 = -101494957;

    t198 = (x793==(x794>(x795==x796)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x799 = -1LL;
	int32_t t199 = 460150;

    t199 = (x797==(x798>(x799==x800)));

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

