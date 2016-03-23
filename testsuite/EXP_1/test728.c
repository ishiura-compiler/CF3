
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

static int8_t x4 = INT8_MAX;
int16_t x9 = INT16_MAX;
static int32_t x12 = INT32_MIN;
int64_t x19 = INT64_MIN;
int8_t x23 = INT8_MIN;
uint64_t x27 = 1946648159603653430LLU;
int64_t x30 = INT64_MIN;
volatile int32_t t7 = 188;
int16_t x41 = -1;
volatile int32_t t10 = -157717;
int16_t x45 = -57;
int32_t t11 = 1;
volatile int8_t x51 = -1;
int32_t x52 = INT32_MAX;
volatile uint8_t x53 = UINT8_MAX;
volatile uint32_t x55 = 5U;
int64_t x59 = INT64_MIN;
int32_t t14 = 246089250;
int64_t x69 = 36LL;
int64_t t17 = -355303762957836232LL;
int64_t t18 = 0LL;
uint8_t x79 = 96U;
uint8_t x80 = 97U;
int64_t x81 = 727902213LL;
int64_t x83 = INT64_MAX;
volatile int32_t t21 = 430463503;
volatile int32_t x92 = INT32_MAX;
static volatile int64_t t23 = 8000468961731569LL;
uint64_t x104 = 29547027758544LLU;
uint64_t t25 = 3669710LLU;
volatile int32_t x105 = INT32_MIN;
uint8_t x106 = 1U;
int16_t x112 = 3;
int32_t x116 = INT32_MIN;
static volatile int32_t x119 = INT32_MAX;
int32_t t29 = 570679;
static int8_t x123 = INT8_MIN;
static uint16_t x127 = UINT16_MAX;
static int16_t x137 = INT16_MIN;
uint64_t t34 = UINT64_MAX;
int64_t t35 = -187LL;
static int32_t t36 = 730011;
int64_t x151 = -1LL;
int32_t x153 = INT32_MAX;
int64_t x157 = INT64_MIN;
static volatile uint16_t x159 = UINT16_MAX;
static volatile int32_t t41 = 31361;
int32_t t42 = -1829;
uint64_t x192 = 40078408416030LLU;
uint64_t t47 = 199931376728827863LLU;
int32_t x195 = -1;
int64_t x196 = INT64_MAX;
int32_t x204 = INT32_MIN;
int64_t t51 = INT64_MIN;
volatile int64_t x210 = INT64_MIN;
int64_t x212 = INT64_MIN;
volatile int16_t x213 = INT16_MIN;
int32_t x218 = -1;
static uint32_t x226 = UINT32_MAX;
int32_t x232 = INT32_MIN;
static volatile int8_t x234 = INT8_MIN;
uint32_t x240 = UINT32_MAX;
volatile uint32_t t59 = UINT32_MAX;
static volatile int8_t x242 = INT8_MIN;
static uint8_t x245 = 15U;
uint64_t x246 = 24487885257844861LLU;
uint64_t x249 = UINT64_MAX;
volatile int32_t t62 = -718636610;
volatile int32_t t63 = -6739608;
uint8_t x268 = UINT8_MAX;
int16_t x270 = INT16_MAX;
uint32_t x283 = 102729U;
volatile int16_t x290 = INT16_MAX;
volatile uint32_t x295 = 62U;
volatile uint32_t t73 = 265553U;
uint16_t x301 = UINT16_MAX;
int32_t x303 = INT32_MIN;
static uint16_t x311 = 130U;
static int32_t x321 = INT32_MAX;
static uint8_t x325 = 0U;
uint8_t x327 = 0U;
uint16_t x330 = 13718U;
uint64_t x333 = UINT64_MAX;
int16_t x336 = INT16_MIN;
static int64_t x343 = -1LL;
volatile int64_t x349 = 992429451115752599LL;
static volatile int32_t x351 = INT32_MAX;
volatile uint32_t x364 = UINT32_MAX;
uint32_t t91 = 176258828U;
int32_t t92 = -390;
static int64_t x382 = 688787273LL;
volatile int64_t t95 = 49581297LL;
volatile int16_t x390 = INT16_MIN;
volatile int64_t t96 = 84LL;
static int64_t t97 = -8901226712670232LL;
int64_t x399 = INT64_MIN;
volatile int32_t t98 = 485013;
static int64_t x402 = 1788LL;
static int64_t x404 = -5113474804129818LL;
volatile int64_t t99 = -143582979LL;
static uint8_t x406 = UINT8_MAX;
volatile int32_t x416 = INT32_MIN;
uint32_t x418 = UINT32_MAX;
static int16_t x421 = -1;
int32_t x422 = INT32_MAX;
int32_t x424 = -15848820;
uint32_t t105 = 14983625U;
uint32_t x430 = UINT32_MAX;
int8_t x431 = INT8_MIN;
int32_t x432 = -25469405;
volatile int8_t x434 = INT8_MIN;
uint32_t x435 = 173135U;
volatile uint32_t x444 = UINT32_MAX;
uint16_t x445 = 81U;
uint32_t t110 = 102472U;
int32_t x452 = INT32_MIN;
volatile int32_t t111 = -1;
int32_t x454 = INT32_MIN;
uint64_t x455 = 63617270125930713LLU;
int32_t x457 = 88;
int16_t x458 = -11248;
static int32_t t113 = 6812975;
static int8_t x465 = 0;
int64_t x467 = 63015679LL;
static uint16_t x473 = UINT16_MAX;
volatile uint8_t x474 = UINT8_MAX;
uint64_t x479 = 1077892408272667379LLU;
uint8_t x480 = 56U;
volatile int32_t t117 = 23271480;
uint64_t x484 = 105026951878LLU;
uint32_t x490 = 20718U;
uint32_t x497 = UINT32_MAX;
int16_t x502 = INT16_MIN;
int64_t x504 = -1717LL;
int16_t x507 = -12486;
int16_t x508 = INT16_MIN;
uint32_t x516 = UINT32_MAX;
static int32_t x526 = 3652;
volatile int32_t x527 = -1164;
static int64_t x531 = 292433217700LL;
static volatile int32_t t131 = INT32_MAX;
int8_t x545 = INT8_MIN;
uint16_t x550 = UINT16_MAX;
volatile uint32_t t135 = UINT32_MAX;
int16_t x568 = INT16_MIN;
int64_t x569 = 4244863545LL;
int8_t x572 = INT8_MIN;
uint8_t x577 = 1U;
int16_t x579 = -1;
int16_t x588 = -1;
uint8_t x589 = 0U;
uint64_t x590 = UINT64_MAX;
static int32_t x595 = 124;
static uint16_t x597 = 48U;
volatile uint16_t x601 = UINT16_MAX;
int8_t x603 = 0;
volatile int32_t x604 = -1;
static int16_t x605 = INT16_MIN;
static int16_t x609 = INT16_MIN;
uint32_t x610 = 33332086U;
static uint64_t x615 = UINT64_MAX;
uint32_t x623 = UINT32_MAX;
int8_t x627 = -1;
volatile uint64_t t151 = 10870967200LLU;
int64_t x632 = INT64_MAX;
int32_t x634 = -1;
static volatile uint32_t x636 = 378521U;
int64_t x637 = 1388995843LL;
int8_t x639 = INT8_MIN;
int32_t t154 = INT32_MAX;
static int32_t t155 = -53190241;
int64_t x649 = INT64_MIN;
uint32_t x651 = 2119660022U;
int64_t x652 = INT64_MIN;
volatile int8_t x655 = INT8_MIN;
int32_t x656 = -136;
int32_t t158 = 1473850;
volatile int8_t x657 = -1;
static int8_t x664 = INT8_MIN;
int64_t x676 = INT64_MIN;
int64_t t162 = INT64_MIN;
volatile uint8_t x677 = 0U;
int8_t x690 = -1;
int32_t x692 = -95616709;
int8_t x699 = INT8_MIN;
int64_t t168 = INT64_MAX;
int8_t x701 = INT8_MIN;
int16_t x706 = -58;
static int64_t t171 = INT64_MIN;
uint64_t x713 = UINT64_MAX;
volatile int32_t x716 = -1;
int16_t x718 = -1;
int64_t x719 = -1LL;
int64_t t174 = -1631229539LL;
static volatile uint32_t x729 = 353U;
int32_t t177 = INT32_MAX;
volatile int64_t x742 = -1448LL;
uint32_t x743 = 225163U;
volatile int8_t x745 = INT8_MIN;
int8_t x768 = -11;
uint8_t x793 = 2U;
int16_t x797 = INT16_MAX;
int8_t x804 = INT8_MIN;
volatile int32_t t193 = 77995591;
int32_t x805 = -1;
int64_t x807 = INT64_MIN;
uint32_t x813 = 14U;
int32_t x815 = -1;
int8_t x817 = INT8_MIN;
uint64_t x828 = 95688831LLU;


void f0(void) {
    	int32_t x1 = -1416165;
	volatile uint8_t x2 = UINT8_MAX;
	volatile int32_t x3 = 32829519;
	int32_t t0 = -129433418;

    t0 = (((x1/x2)<=x3)^x4);

    if (t0 != 126) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = INT16_MIN;
	volatile int8_t x6 = -1;
	static int16_t x7 = INT16_MAX;
	volatile int64_t x8 = 64606528915LL;
	int64_t t1 = -232350561LL;

    t1 = (((x5/x6)<=x7)^x8);

    if (t1 != 64606528915LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x10 = INT32_MAX;
	int32_t x11 = 0;
	volatile int32_t t2 = 143803;

    t2 = (((x9/x10)<=x11)^x12);

    if (t2 != -2147483647) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x13 = 2U;
	static uint64_t x14 = 1880327LLU;
	int64_t x15 = -1673396508780LL;
	uint8_t x16 = UINT8_MAX;
	volatile int32_t t3 = -3;

    t3 = (((x13/x14)<=x15)^x16);

    if (t3 != 254) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 33U;
	volatile int64_t x18 = INT64_MIN;
	volatile int64_t x20 = INT64_MAX;
	volatile int64_t t4 = INT64_MAX;

    t4 = (((x17/x18)<=x19)^x20);

    if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = 12452;
	static int64_t x22 = -1LL;
	static int8_t x24 = -1;
	int32_t t5 = -12;

    t5 = (((x21/x22)<=x23)^x24);

    if (t5 != -2) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x25 = -1;
	static uint8_t x26 = UINT8_MAX;
	static uint32_t x28 = 249250U;
	static volatile uint32_t t6 = 4807311U;

    t6 = (((x25/x26)<=x27)^x28);

    if (t6 != 249251U) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = 1;
	int64_t x31 = INT64_MIN;
	static int32_t x32 = 71460102;

    t7 = (((x29/x30)<=x31)^x32);

    if (t7 != 71460102) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x33 = 895643333U;
	volatile uint32_t x34 = UINT32_MAX;
	static uint64_t x35 = 3168654461228118880LLU;
	int64_t x36 = -1LL;
	static int64_t t8 = 1293429673588674LL;

    t8 = (((x33/x34)<=x35)^x36);

    if (t8 != -2LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 698479527237297LLU;
	int64_t x38 = 79839847LL;
	uint32_t x39 = 3U;
	int8_t x40 = INT8_MAX;
	volatile int32_t t9 = 0;

    t9 = (((x37/x38)<=x39)^x40);

    if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x42 = INT8_MAX;
	int64_t x43 = -1LL;
	int8_t x44 = -3;

    t10 = (((x41/x42)<=x43)^x44);

    if (t10 != -3) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x46 = UINT8_MAX;
	uint16_t x47 = UINT16_MAX;
	uint16_t x48 = 7U;

    t11 = (((x45/x46)<=x47)^x48);

    if (t11 != 6) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = UINT64_MAX;
	int32_t x50 = -1;
	volatile int32_t t12 = 852308958;

    t12 = (((x49/x50)<=x51)^x52);

    if (t12 != 2147483646) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint64_t x54 = 7454135LLU;
	static int8_t x56 = INT8_MIN;
	int32_t t13 = -5099751;

    t13 = (((x53/x54)<=x55)^x56);

    if (t13 != -127) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x57 = 160;
	int8_t x58 = -1;
	int32_t x60 = 384598;

    t14 = (((x57/x58)<=x59)^x60);

    if (t14 != 384598) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x61 = INT8_MIN;
	int64_t x62 = -4652416LL;
	static int64_t x63 = INT64_MIN;
	static int32_t x64 = INT32_MIN;
	static volatile int32_t t15 = INT32_MIN;

    t15 = (((x61/x62)<=x63)^x64);

    if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = INT64_MAX;
	static int8_t x66 = 1;
	int16_t x67 = -106;
	int16_t x68 = INT16_MIN;
	int32_t t16 = -1;

    t16 = (((x65/x66)<=x67)^x68);

    if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x70 = INT16_MAX;
	int64_t x71 = -1LL;
	int64_t x72 = -1LL;

    t17 = (((x69/x70)<=x71)^x72);

    if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = UINT8_MAX;
	volatile int64_t x74 = 80602850931LL;
	static int16_t x75 = -1;
	static volatile int64_t x76 = -1LL;

    t18 = (((x73/x74)<=x75)^x76);

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = 59;
	uint32_t x78 = UINT32_MAX;
	volatile int32_t t19 = 7181;

    t19 = (((x77/x78)<=x79)^x80);

    if (t19 != 96) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x82 = UINT64_MAX;
	volatile int64_t x84 = 65921819908LL;
	int64_t t20 = -1037768017274LL;

    t20 = (((x81/x82)<=x83)^x84);

    if (t20 != 65921819909LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x85 = 3785897790226714LLU;
	uint8_t x86 = 49U;
	volatile int64_t x87 = -1LL;
	int8_t x88 = INT8_MIN;

    t21 = (((x85/x86)<=x87)^x88);

    if (t21 != -127) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x89 = 48U;
	uint32_t x90 = UINT32_MAX;
	int64_t x91 = INT64_MAX;
	int32_t t22 = 5110;

    t22 = (((x89/x90)<=x91)^x92);

    if (t22 != 2147483646) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x93 = INT64_MIN;
	uint8_t x94 = UINT8_MAX;
	int32_t x95 = INT32_MIN;
	static int64_t x96 = INT64_MIN;

    t23 = (((x93/x94)<=x95)^x96);

    if (t23 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = 0;
	volatile int8_t x98 = INT8_MIN;
	int8_t x99 = INT8_MIN;
	volatile int8_t x100 = INT8_MAX;
	volatile int32_t t24 = -1412;

    t24 = (((x97/x98)<=x99)^x100);

    if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x101 = INT32_MAX;
	static volatile int64_t x102 = INT64_MAX;
	int8_t x103 = 26;

    t25 = (((x101/x102)<=x103)^x104);

    if (t25 != 29547027758545LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x107 = 3U;
	volatile int64_t x108 = -1LL;
	volatile int64_t t26 = 810061834468874856LL;

    t26 = (((x105/x106)<=x107)^x108);

    if (t26 != -2LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x109 = INT8_MIN;
	uint32_t x110 = 7448U;
	volatile uint32_t x111 = UINT32_MAX;
	volatile int32_t t27 = -4;

    t27 = (((x109/x110)<=x111)^x112);

    if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint8_t x113 = 13U;
	static uint8_t x114 = 8U;
	static int32_t x115 = INT32_MIN;
	static int32_t t28 = INT32_MIN;

    t28 = (((x113/x114)<=x115)^x116);

    if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = 48;
	uint8_t x118 = 91U;
	static int16_t x120 = INT16_MIN;

    t29 = (((x117/x118)<=x119)^x120);

    if (t29 != -32767) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x121 = 1595U;
	int32_t x122 = -1;
	uint32_t x124 = 393716U;
	static volatile uint32_t t30 = 278760U;

    t30 = (((x121/x122)<=x123)^x124);

    if (t30 != 393717U) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x125 = 55493;
	volatile int32_t x126 = INT32_MAX;
	int16_t x128 = -402;
	int32_t t31 = -102;

    t31 = (((x125/x126)<=x127)^x128);

    if (t31 != -401) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = 46;
	int32_t x130 = 148;
	static int32_t x131 = INT32_MIN;
	int8_t x132 = 0;
	static volatile int32_t t32 = 159688;

    t32 = (((x129/x130)<=x131)^x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint32_t x133 = 25U;
	int64_t x134 = INT64_MIN;
	uint16_t x135 = 2U;
	int32_t x136 = INT32_MIN;
	volatile int32_t t33 = 12947167;

    t33 = (((x133/x134)<=x135)^x136);

    if (t33 != -2147483647) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x138 = 24U;
	static volatile int32_t x139 = INT32_MIN;
	uint64_t x140 = UINT64_MAX;

    t34 = (((x137/x138)<=x139)^x140);

    if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = INT64_MIN;
	int16_t x142 = INT16_MAX;
	volatile int16_t x143 = INT16_MAX;
	int64_t x144 = INT64_MIN;

    t35 = (((x141/x142)<=x143)^x144);

    if (t35 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x145 = 1003U;
	uint16_t x146 = 7556U;
	volatile uint32_t x147 = 1532U;
	static int32_t x148 = INT32_MIN;

    t36 = (((x145/x146)<=x147)^x148);

    if (t36 != -2147483647) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MIN;
	static int64_t x150 = INT64_MIN;
	int32_t x152 = INT32_MAX;
	static int32_t t37 = INT32_MAX;

    t37 = (((x149/x150)<=x151)^x152);

    if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x154 = INT8_MIN;
	int32_t x155 = -14167713;
	volatile uint8_t x156 = 1U;
	int32_t t38 = -141954574;

    t38 = (((x153/x154)<=x155)^x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x158 = 780U;
	static int8_t x160 = -1;
	volatile int32_t t39 = -5710;

    t39 = (((x157/x158)<=x159)^x160);

    if (t39 != -2) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = 15;
	volatile int8_t x162 = INT8_MIN;
	int16_t x163 = 1524;
	int16_t x164 = -1;
	int32_t t40 = -8;

    t40 = (((x161/x162)<=x163)^x164);

    if (t40 != -2) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	int64_t x166 = INT64_MAX;
	volatile int8_t x167 = INT8_MAX;
	int8_t x168 = 61;

    t41 = (((x165/x166)<=x167)^x168);

    if (t41 != 60) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MIN;
	int8_t x170 = 13;
	static int64_t x171 = 82LL;
	static volatile uint16_t x172 = UINT16_MAX;

    t42 = (((x169/x170)<=x171)^x172);

    if (t42 != 65534) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = INT64_MIN;
	int64_t x174 = INT64_MIN;
	int8_t x175 = -7;
	static int64_t x176 = -28214835LL;
	volatile int64_t t43 = 1LL;

    t43 = (((x173/x174)<=x175)^x176);

    if (t43 != -28214835LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x177 = 31249079U;
	static int8_t x178 = INT8_MIN;
	static int64_t x179 = -1LL;
	int8_t x180 = INT8_MIN;
	int32_t t44 = -268741;

    t44 = (((x177/x178)<=x179)^x180);

    if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = 0;
	uint64_t x182 = 135456487225LLU;
	volatile uint32_t x183 = 4078U;
	uint64_t x184 = UINT64_MAX;
	volatile uint64_t t45 = 15LLU;

    t45 = (((x181/x182)<=x183)^x184);

    if (t45 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x185 = INT16_MAX;
	uint8_t x186 = 3U;
	uint32_t x187 = UINT32_MAX;
	int8_t x188 = 4;
	volatile int32_t t46 = 1;

    t46 = (((x185/x186)<=x187)^x188);

    if (t46 != 5) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x189 = UINT8_MAX;
	int64_t x190 = -1LL;
	int16_t x191 = 1;

    t47 = (((x189/x190)<=x191)^x192);

    if (t47 != 40078408416031LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x193 = 86U;
	uint16_t x194 = UINT16_MAX;
	int64_t t48 = INT64_MAX;

    t48 = (((x193/x194)<=x195)^x196);

    if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x197 = 212U;
	volatile int64_t x198 = -1LL;
	static int16_t x199 = INT16_MIN;
	int16_t x200 = 1881;
	static int32_t t49 = -164;

    t49 = (((x197/x198)<=x199)^x200);

    if (t49 != 1881) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = -1;
	uint8_t x202 = 5U;
	uint64_t x203 = 3939239104LLU;
	volatile int32_t t50 = -4011;

    t50 = (((x201/x202)<=x203)^x204);

    if (t50 != -2147483647) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x205 = -1;
	uint16_t x206 = 7486U;
	volatile int8_t x207 = INT8_MIN;
	int64_t x208 = INT64_MIN;

    t51 = (((x205/x206)<=x207)^x208);

    if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = 1;
	int16_t x211 = INT16_MIN;
	int64_t t52 = INT64_MIN;

    t52 = (((x209/x210)<=x211)^x212);

    if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x214 = INT64_MAX;
	volatile uint32_t x215 = UINT32_MAX;
	int64_t x216 = INT64_MIN;
	static int64_t t53 = 1476171125353LL;

    t53 = (((x213/x214)<=x215)^x216);

    if (t53 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x217 = 12284LLU;
	volatile int8_t x219 = -1;
	int16_t x220 = 1;
	int32_t t54 = 2;

    t54 = (((x217/x218)<=x219)^x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x221 = -105;
	static uint16_t x222 = UINT16_MAX;
	uint32_t x223 = 3U;
	int64_t x224 = -1LL;
	static int64_t t55 = 369909543LL;

    t55 = (((x221/x222)<=x223)^x224);

    if (t55 != -2LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x225 = UINT8_MAX;
	int8_t x227 = INT8_MIN;
	int32_t x228 = INT32_MIN;
	volatile int32_t t56 = -63;

    t56 = (((x225/x226)<=x227)^x228);

    if (t56 != -2147483647) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x229 = 29U;
	static int8_t x230 = INT8_MIN;
	int8_t x231 = -1;
	int32_t t57 = -92;

    t57 = (((x229/x230)<=x231)^x232);

    if (t57 != -2147483647) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x233 = UINT8_MAX;
	volatile int8_t x235 = INT8_MIN;
	int16_t x236 = INT16_MAX;
	volatile int32_t t58 = 1997932;

    t58 = (((x233/x234)<=x235)^x236);

    if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = INT8_MIN;
	int16_t x238 = INT16_MIN;
	int64_t x239 = INT64_MIN;

    t59 = (((x237/x238)<=x239)^x240);

    if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = -96795LL;
	volatile uint16_t x243 = UINT16_MAX;
	volatile int64_t x244 = -19414036528LL;
	static int64_t t60 = 47746LL;

    t60 = (((x241/x242)<=x243)^x244);

    if (t60 != -19414036527LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x247 = 1;
	int16_t x248 = INT16_MIN;
	int32_t t61 = -75227;

    t61 = (((x245/x246)<=x247)^x248);

    if (t61 != -32767) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x250 = UINT32_MAX;
	volatile uint16_t x251 = 13U;
	volatile int32_t x252 = -1;

    t62 = (((x249/x250)<=x251)^x252);

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = -1;
	volatile int64_t x254 = 199400817438LL;
	uint8_t x255 = 122U;
	uint16_t x256 = UINT16_MAX;

    t63 = (((x253/x254)<=x255)^x256);

    if (t63 != 65534) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = -65;
	int8_t x258 = -19;
	uint32_t x259 = 112609U;
	int32_t x260 = -1;
	int32_t t64 = 0;

    t64 = (((x257/x258)<=x259)^x260);

    if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = -1300;
	int32_t x262 = -7;
	volatile uint32_t x263 = 81006U;
	int64_t x264 = INT64_MIN;
	int64_t t65 = -5LL;

    t65 = (((x261/x262)<=x263)^x264);

    if (t65 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x265 = INT8_MAX;
	int16_t x266 = -72;
	static int64_t x267 = -1LL;
	int32_t t66 = 16359;

    t66 = (((x265/x266)<=x267)^x268);

    if (t66 != 254) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MIN;
	uint64_t x271 = 32648LLU;
	static int64_t x272 = -1LL;
	int64_t t67 = 149689972420370LL;

    t67 = (((x269/x270)<=x271)^x272);

    if (t67 != -2LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x277 = -4;
	int64_t x278 = INT64_MAX;
	static uint8_t x279 = 1U;
	static int32_t x280 = INT32_MIN;
	volatile int32_t t68 = -30564;

    t68 = (((x277/x278)<=x279)^x280);

    if (t68 != -2147483647) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x281 = INT64_MAX;
	int16_t x282 = INT16_MIN;
	int64_t x284 = -993648682450735LL;
	static volatile int64_t t69 = 5538684447680252LL;

    t69 = (((x281/x282)<=x283)^x284);

    if (t69 != -993648682450736LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x285 = -2023007;
	uint64_t x286 = 5878LLU;
	uint8_t x287 = 60U;
	volatile uint64_t x288 = UINT64_MAX;
	volatile uint64_t t70 = UINT64_MAX;

    t70 = (((x285/x286)<=x287)^x288);

    if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x289 = INT16_MAX;
	int32_t x291 = -292085174;
	int16_t x292 = -38;
	int32_t t71 = 12;

    t71 = (((x289/x290)<=x291)^x292);

    if (t71 != -38) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x293 = INT64_MAX;
	int32_t x294 = INT32_MAX;
	uint8_t x296 = 118U;
	volatile int32_t t72 = 1109;

    t72 = (((x293/x294)<=x295)^x296);

    if (t72 != 118) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x297 = -1LL;
	static uint16_t x298 = UINT16_MAX;
	static uint32_t x299 = UINT32_MAX;
	uint32_t x300 = UINT32_MAX;

    t73 = (((x297/x298)<=x299)^x300);

    if (t73 != 4294967294U) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x302 = 2U;
	int8_t x304 = 6;
	volatile int32_t t74 = 8;

    t74 = (((x301/x302)<=x303)^x304);

    if (t74 != 6) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x305 = -1;
	static uint16_t x306 = UINT16_MAX;
	int32_t x307 = INT32_MIN;
	int64_t x308 = INT64_MAX;
	volatile int64_t t75 = INT64_MAX;

    t75 = (((x305/x306)<=x307)^x308);

    if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x309 = UINT8_MAX;
	uint16_t x310 = 4469U;
	volatile uint16_t x312 = UINT16_MAX;
	int32_t t76 = -1;

    t76 = (((x309/x310)<=x311)^x312);

    if (t76 != 65534) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint8_t x313 = UINT8_MAX;
	static int64_t x314 = -1LL;
	int32_t x315 = 1320586;
	int64_t x316 = -61780144340983LL;
	volatile int64_t t77 = -1927748LL;

    t77 = (((x313/x314)<=x315)^x316);

    if (t77 != -61780144340984LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x317 = 0LL;
	uint64_t x318 = 220LLU;
	static int64_t x319 = -1LL;
	uint64_t x320 = 4206967629266LLU;
	volatile uint64_t t78 = 2908LLU;

    t78 = (((x317/x318)<=x319)^x320);

    if (t78 != 4206967629267LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x322 = UINT32_MAX;
	static uint8_t x323 = 2U;
	volatile int8_t x324 = -1;
	volatile int32_t t79 = -26324585;

    t79 = (((x321/x322)<=x323)^x324);

    if (t79 != -2) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x326 = 10U;
	volatile uint32_t x328 = UINT32_MAX;
	volatile uint32_t t80 = 66531U;

    t80 = (((x325/x326)<=x327)^x328);

    if (t80 != 4294967294U) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint64_t x329 = 2334201458975124LLU;
	volatile uint64_t x331 = 18120340LLU;
	static volatile int32_t x332 = -1370343;
	int32_t t81 = 2879;

    t81 = (((x329/x330)<=x331)^x332);

    if (t81 != -1370343) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x334 = INT16_MAX;
	int8_t x335 = INT8_MAX;
	static volatile int32_t t82 = 2265675;

    t82 = (((x333/x334)<=x335)^x336);

    if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x337 = 25;
	int16_t x338 = INT16_MIN;
	uint32_t x339 = 35313028U;
	int8_t x340 = -1;
	int32_t t83 = 403240;

    t83 = (((x337/x338)<=x339)^x340);

    if (t83 != -2) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x341 = INT32_MAX;
	uint32_t x342 = 100199857U;
	int16_t x344 = 880;
	int32_t t84 = -17817;

    t84 = (((x341/x342)<=x343)^x344);

    if (t84 != 880) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x345 = -1;
	uint8_t x346 = 2U;
	int32_t x347 = -1;
	volatile int32_t x348 = INT32_MAX;
	volatile int32_t t85 = INT32_MAX;

    t85 = (((x345/x346)<=x347)^x348);

    if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x350 = INT32_MAX;
	uint8_t x352 = 1U;
	static volatile int32_t t86 = -84578981;

    t86 = (((x349/x350)<=x351)^x352);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x353 = -3935841LL;
	static volatile int32_t x354 = INT32_MAX;
	int64_t x355 = INT64_MIN;
	int8_t x356 = -1;
	static volatile int32_t t87 = -427;

    t87 = (((x353/x354)<=x355)^x356);

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x357 = 6;
	uint16_t x358 = 6782U;
	static uint64_t x359 = 71256453288246LLU;
	int8_t x360 = -1;
	int32_t t88 = 5;

    t88 = (((x357/x358)<=x359)^x360);

    if (t88 != -2) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x361 = 28;
	int32_t x362 = -1;
	int8_t x363 = INT8_MAX;
	uint32_t t89 = 1585U;

    t89 = (((x361/x362)<=x363)^x364);

    if (t89 != 4294967294U) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x365 = INT32_MIN;
	int8_t x366 = INT8_MIN;
	uint64_t x367 = 28426469273620164LLU;
	uint64_t x368 = 102895180236802414LLU;
	uint64_t t90 = 60495154163135LLU;

    t90 = (((x365/x366)<=x367)^x368);

    if (t90 != 102895180236802415LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int32_t x369 = -3340815;
	int8_t x370 = INT8_MIN;
	int32_t x371 = INT32_MAX;
	uint32_t x372 = 911U;

    t91 = (((x369/x370)<=x371)^x372);

    if (t91 != 910U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x373 = 12U;
	uint32_t x374 = UINT32_MAX;
	int16_t x375 = 13450;
	int32_t x376 = -176938827;

    t92 = (((x373/x374)<=x375)^x376);

    if (t92 != -176938828) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x377 = 172755U;
	volatile uint64_t x378 = 551933099132952LLU;
	int64_t x379 = -5573774302810398LL;
	int16_t x380 = INT16_MAX;
	int32_t t93 = 58217;

    t93 = (((x377/x378)<=x379)^x380);

    if (t93 != 32766) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x381 = -31;
	int32_t x383 = -1;
	uint32_t x384 = 127941226U;
	volatile uint32_t t94 = 20819142U;

    t94 = (((x381/x382)<=x383)^x384);

    if (t94 != 127941226U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x385 = 32725U;
	volatile uint64_t x386 = 928909805LLU;
	volatile int64_t x387 = INT64_MIN;
	volatile int64_t x388 = INT64_MIN;

    t95 = (((x385/x386)<=x387)^x388);

    if (t95 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x389 = 5;
	uint8_t x391 = UINT8_MAX;
	int64_t x392 = INT64_MAX;

    t96 = (((x389/x390)<=x391)^x392);

    if (t96 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x393 = 1177LLU;
	int16_t x394 = INT16_MIN;
	int16_t x395 = -1;
	int64_t x396 = -52LL;

    t97 = (((x393/x394)<=x395)^x396);

    if (t97 != -51LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x397 = 48;
	volatile int16_t x398 = INT16_MIN;
	int8_t x400 = INT8_MIN;

    t98 = (((x397/x398)<=x399)^x400);

    if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint64_t x401 = 1534882379LLU;
	int16_t x403 = INT16_MIN;

    t99 = (((x401/x402)<=x403)^x404);

    if (t99 != -5113474804129817LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x405 = INT8_MIN;
	uint32_t x407 = 3U;
	int32_t x408 = -24324792;
	volatile int32_t t100 = 248663;

    t100 = (((x405/x406)<=x407)^x408);

    if (t100 != -24324791) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x409 = 38LL;
	uint64_t x410 = 2774140064874175LLU;
	int32_t x411 = INT32_MIN;
	uint64_t x412 = 108994469190621LLU;
	volatile uint64_t t101 = 31590186684LLU;

    t101 = (((x409/x410)<=x411)^x412);

    if (t101 != 108994469190620LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x413 = INT64_MAX;
	int64_t x414 = -71827098420LL;
	static uint32_t x415 = 32771294U;
	volatile int32_t t102 = -4897394;

    t102 = (((x413/x414)<=x415)^x416);

    if (t102 != -2147483647) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x417 = 11U;
	int16_t x419 = 85;
	int8_t x420 = INT8_MIN;
	volatile int32_t t103 = -546018;

    t103 = (((x417/x418)<=x419)^x420);

    if (t103 != -127) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x423 = UINT64_MAX;
	static int32_t t104 = 8334;

    t104 = (((x421/x422)<=x423)^x424);

    if (t104 != -15848819) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x425 = UINT32_MAX;
	int8_t x426 = INT8_MAX;
	volatile uint32_t x427 = 2905742U;
	static uint32_t x428 = 2288729U;

    t105 = (((x425/x426)<=x427)^x428);

    if (t105 != 2288729U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x429 = 2202U;
	volatile int32_t t106 = -84082148;

    t106 = (((x429/x430)<=x431)^x432);

    if (t106 != -25469406) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint8_t x433 = 1U;
	int16_t x436 = INT16_MIN;
	int32_t t107 = 387960;

    t107 = (((x433/x434)<=x435)^x436);

    if (t107 != -32767) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x437 = INT16_MIN;
	uint16_t x438 = 1491U;
	int16_t x439 = -3714;
	uint8_t x440 = 1U;
	static int32_t t108 = -1256;

    t108 = (((x437/x438)<=x439)^x440);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x441 = 86722884LLU;
	int64_t x442 = -1LL;
	uint32_t x443 = UINT32_MAX;
	volatile uint32_t t109 = 3U;

    t109 = (((x441/x442)<=x443)^x444);

    if (t109 != 4294967294U) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x446 = 41454180634412413LL;
	volatile int32_t x447 = INT32_MAX;
	uint32_t x448 = 918673562U;

    t110 = (((x445/x446)<=x447)^x448);

    if (t110 != 918673563U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x449 = UINT64_MAX;
	volatile int8_t x450 = INT8_MIN;
	volatile uint32_t x451 = 122909726U;

    t111 = (((x449/x450)<=x451)^x452);

    if (t111 != -2147483647) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x453 = -57;
	int16_t x456 = -1;
	int32_t t112 = 33982;

    t112 = (((x453/x454)<=x455)^x456);

    if (t112 != -2) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x459 = INT32_MIN;
	int16_t x460 = -1;

    t113 = (((x457/x458)<=x459)^x460);

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x461 = INT32_MIN;
	int8_t x462 = INT8_MIN;
	uint8_t x463 = 5U;
	uint32_t x464 = UINT32_MAX;
	volatile uint32_t t114 = UINT32_MAX;

    t114 = (((x461/x462)<=x463)^x464);

    if (t114 != UINT32_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint16_t x466 = 5U;
	int32_t x468 = INT32_MIN;
	int32_t t115 = 114148;

    t115 = (((x465/x466)<=x467)^x468);

    if (t115 != -2147483647) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x475 = 5U;
	int8_t x476 = INT8_MIN;
	volatile int32_t t116 = 380926951;

    t116 = (((x473/x474)<=x475)^x476);

    if (t116 != -128) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x477 = INT16_MIN;
	static int16_t x478 = INT16_MIN;

    t117 = (((x477/x478)<=x479)^x480);

    if (t117 != 57) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x481 = INT8_MIN;
	volatile uint16_t x482 = 10U;
	int64_t x483 = 1078512597995812190LL;
	volatile uint64_t t118 = 6LLU;

    t118 = (((x481/x482)<=x483)^x484);

    if (t118 != 105026951879LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x489 = 3894178377LLU;
	static int64_t x491 = INT64_MIN;
	static volatile uint8_t x492 = UINT8_MAX;
	int32_t t119 = -8347072;

    t119 = (((x489/x490)<=x491)^x492);

    if (t119 != 254) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x493 = 6004U;
	uint32_t x494 = 3738547U;
	static int64_t x495 = INT64_MIN;
	int32_t x496 = INT32_MAX;
	int32_t t120 = INT32_MAX;

    t120 = (((x493/x494)<=x495)^x496);

    if (t120 != INT32_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x498 = INT32_MAX;
	static volatile int64_t x499 = INT64_MIN;
	int8_t x500 = -15;
	int32_t t121 = -2599456;

    t121 = (((x497/x498)<=x499)^x500);

    if (t121 != -15) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x501 = -22;
	int8_t x503 = -1;
	int64_t t122 = -3LL;

    t122 = (((x501/x502)<=x503)^x504);

    if (t122 != -1717LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x505 = INT16_MIN;
	static volatile int32_t x506 = INT32_MAX;
	volatile int32_t t123 = -2333487;

    t123 = (((x505/x506)<=x507)^x508);

    if (t123 != -32768) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x509 = -1666;
	static uint64_t x510 = 21787620LLU;
	int32_t x511 = -9;
	int8_t x512 = INT8_MIN;
	static int32_t t124 = -11;

    t124 = (((x509/x510)<=x511)^x512);

    if (t124 != -127) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x513 = 798;
	uint16_t x514 = 1U;
	int32_t x515 = -1;
	volatile uint32_t t125 = UINT32_MAX;

    t125 = (((x513/x514)<=x515)^x516);

    if (t125 != UINT32_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x517 = UINT8_MAX;
	int64_t x518 = -146442830LL;
	volatile uint8_t x519 = 1U;
	int64_t x520 = 512229251832419LL;
	int64_t t126 = 1016914308248LL;

    t126 = (((x517/x518)<=x519)^x520);

    if (t126 != 512229251832418LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x521 = 1612697U;
	volatile int16_t x522 = INT16_MIN;
	static int64_t x523 = -2LL;
	int16_t x524 = -236;
	int32_t t127 = 511581;

    t127 = (((x521/x522)<=x523)^x524);

    if (t127 != -236) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x525 = -2417;
	uint64_t x528 = 118522333LLU;
	uint64_t t128 = 959384535616393LLU;

    t128 = (((x525/x526)<=x527)^x528);

    if (t128 != 118522333LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x529 = 54;
	int64_t x530 = -1LL;
	volatile int32_t x532 = INT32_MIN;
	volatile int32_t t129 = -91929;

    t129 = (((x529/x530)<=x531)^x532);

    if (t129 != -2147483647) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x533 = INT8_MAX;
	int8_t x534 = -1;
	int64_t x535 = -1LL;
	int64_t x536 = INT64_MIN;
	int64_t t130 = 291344LL;

    t130 = (((x533/x534)<=x535)^x536);

    if (t130 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x537 = 3296;
	static uint16_t x538 = 264U;
	int64_t x539 = INT64_MIN;
	int32_t x540 = INT32_MAX;

    t131 = (((x537/x538)<=x539)^x540);

    if (t131 != INT32_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x541 = INT8_MAX;
	int16_t x542 = INT16_MIN;
	int64_t x543 = -200007LL;
	int16_t x544 = -1;
	int32_t t132 = 12;

    t132 = (((x541/x542)<=x543)^x544);

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x546 = 1104U;
	static uint8_t x547 = UINT8_MAX;
	uint64_t x548 = UINT64_MAX;
	uint64_t t133 = 4404251399081094630LLU;

    t133 = (((x545/x546)<=x547)^x548);

    if (t133 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x549 = -3;
	int64_t x551 = -774504LL;
	volatile uint32_t x552 = UINT32_MAX;
	static uint32_t t134 = UINT32_MAX;

    t134 = (((x549/x550)<=x551)^x552);

    if (t134 != UINT32_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x553 = INT8_MIN;
	int32_t x554 = -4345576;
	int32_t x555 = -1;
	uint32_t x556 = UINT32_MAX;

    t135 = (((x553/x554)<=x555)^x556);

    if (t135 != UINT32_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x557 = 1817U;
	int16_t x558 = INT16_MIN;
	static int8_t x559 = INT8_MIN;
	uint32_t x560 = 6U;
	volatile uint32_t t136 = 1U;

    t136 = (((x557/x558)<=x559)^x560);

    if (t136 != 6U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x565 = 31U;
	volatile int16_t x566 = 15685;
	volatile uint8_t x567 = UINT8_MAX;
	int32_t t137 = -102;

    t137 = (((x565/x566)<=x567)^x568);

    if (t137 != -32767) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x570 = INT64_MIN;
	static int64_t x571 = INT64_MIN;
	int32_t t138 = 57985222;

    t138 = (((x569/x570)<=x571)^x572);

    if (t138 != -128) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x573 = -12823LL;
	uint64_t x574 = 58103845LLU;
	int16_t x575 = INT16_MAX;
	volatile int32_t x576 = -424;
	int32_t t139 = -44579;

    t139 = (((x573/x574)<=x575)^x576);

    if (t139 != -424) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x578 = -10;
	static volatile int32_t x580 = -1;
	int32_t t140 = 1;

    t140 = (((x577/x578)<=x579)^x580);

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint16_t x585 = 4U;
	static int32_t x586 = -1;
	static int8_t x587 = -1;
	volatile int32_t t141 = -26697195;

    t141 = (((x585/x586)<=x587)^x588);

    if (t141 != -2) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int8_t x591 = -17;
	static volatile int32_t x592 = INT32_MAX;
	int32_t t142 = -2;

    t142 = (((x589/x590)<=x591)^x592);

    if (t142 != 2147483646) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x593 = -179LL;
	int16_t x594 = -453;
	uint64_t x596 = 862LLU;
	volatile uint64_t t143 = 3293926062136629LLU;

    t143 = (((x593/x594)<=x595)^x596);

    if (t143 != 863LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x598 = INT64_MIN;
	int64_t x599 = -1LL;
	int32_t x600 = 5671235;
	static int32_t t144 = 31414;

    t144 = (((x597/x598)<=x599)^x600);

    if (t144 != 5671235) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x602 = -1;
	volatile int32_t t145 = 1;

    t145 = (((x601/x602)<=x603)^x604);

    if (t145 != -2) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x606 = INT8_MAX;
	int64_t x607 = -14717183993LL;
	int64_t x608 = INT64_MIN;
	volatile int64_t t146 = INT64_MIN;

    t146 = (((x605/x606)<=x607)^x608);

    if (t146 != INT64_MIN) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x611 = 680U;
	int64_t x612 = INT64_MIN;
	int64_t t147 = -585112LL;

    t147 = (((x609/x610)<=x611)^x612);

    if (t147 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x613 = -314LL;
	int32_t x614 = INT32_MIN;
	int32_t x616 = INT32_MAX;
	volatile int32_t t148 = 74896;

    t148 = (((x613/x614)<=x615)^x616);

    if (t148 != 2147483646) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x617 = 1157866U;
	uint32_t x618 = 580972257U;
	int8_t x619 = INT8_MAX;
	uint64_t x620 = 583714739678218454LLU;
	uint64_t t149 = 31456992176304LLU;

    t149 = (((x617/x618)<=x619)^x620);

    if (t149 != 583714739678218455LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x621 = INT64_MAX;
	uint16_t x622 = 17U;
	volatile int32_t x624 = INT32_MIN;
	int32_t t150 = INT32_MIN;

    t150 = (((x621/x622)<=x623)^x624);

    if (t150 != INT32_MIN) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x625 = 284074U;
	static int64_t x626 = INT64_MIN;
	uint64_t x628 = 183914051602019LLU;

    t151 = (((x625/x626)<=x627)^x628);

    if (t151 != 183914051602019LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x629 = INT8_MIN;
	static int64_t x630 = -1831LL;
	static int16_t x631 = INT16_MAX;
	volatile int64_t t152 = -1953410782LL;

    t152 = (((x629/x630)<=x631)^x632);

    if (t152 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x633 = -7167;
	int32_t x635 = INT32_MAX;
	volatile uint32_t t153 = 14175U;

    t153 = (((x633/x634)<=x635)^x636);

    if (t153 != 378520U) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x638 = INT8_MAX;
	int32_t x640 = INT32_MAX;

    t154 = (((x637/x638)<=x639)^x640);

    if (t154 != INT32_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x641 = INT16_MIN;
	uint32_t x642 = 2085U;
	int16_t x643 = INT16_MAX;
	uint8_t x644 = 40U;

    t155 = (((x641/x642)<=x643)^x644);

    if (t155 != 40) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x645 = INT8_MIN;
	int16_t x646 = -1;
	uint8_t x647 = 15U;
	uint8_t x648 = 1U;
	volatile int32_t t156 = -254936;

    t156 = (((x645/x646)<=x647)^x648);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x650 = INT8_MIN;
	volatile int64_t t157 = INT64_MIN;

    t157 = (((x649/x650)<=x651)^x652);

    if (t157 != INT64_MIN) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x653 = UINT32_MAX;
	int64_t x654 = -495087LL;

    t158 = (((x653/x654)<=x655)^x656);

    if (t158 != -135) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint16_t x658 = UINT16_MAX;
	int16_t x659 = -1;
	int8_t x660 = INT8_MIN;
	volatile int32_t t159 = 6336688;

    t159 = (((x657/x658)<=x659)^x660);

    if (t159 != -128) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x661 = INT8_MAX;
	int8_t x662 = INT8_MIN;
	int8_t x663 = INT8_MIN;
	int32_t t160 = 84;

    t160 = (((x661/x662)<=x663)^x664);

    if (t160 != -128) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x665 = INT8_MIN;
	uint64_t x666 = UINT64_MAX;
	static uint32_t x667 = UINT32_MAX;
	uint8_t x668 = 26U;
	volatile int32_t t161 = -101984;

    t161 = (((x665/x666)<=x667)^x668);

    if (t161 != 27) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x673 = -226;
	int8_t x674 = INT8_MIN;
	int8_t x675 = INT8_MIN;

    t162 = (((x673/x674)<=x675)^x676);

    if (t162 != INT64_MIN) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x678 = 299U;
	int32_t x679 = INT32_MAX;
	volatile uint32_t x680 = 976106U;
	volatile uint32_t t163 = 23376U;

    t163 = (((x677/x678)<=x679)^x680);

    if (t163 != 976107U) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint32_t x681 = 442U;
	static int8_t x682 = INT8_MIN;
	uint16_t x683 = UINT16_MAX;
	int64_t x684 = -1LL;
	int64_t t164 = 76022LL;

    t164 = (((x681/x682)<=x683)^x684);

    if (t164 != -2LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x685 = INT8_MIN;
	uint8_t x686 = 7U;
	static volatile uint64_t x687 = UINT64_MAX;
	uint16_t x688 = 10210U;
	volatile int32_t t165 = 1;

    t165 = (((x685/x686)<=x687)^x688);

    if (t165 != 10211) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x689 = -1;
	volatile int64_t x691 = 0LL;
	volatile int32_t t166 = -61;

    t166 = (((x689/x690)<=x691)^x692);

    if (t166 != -95616709) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x693 = INT8_MAX;
	static int32_t x694 = INT32_MIN;
	int16_t x695 = INT16_MAX;
	int32_t x696 = -1;
	volatile int32_t t167 = 69;

    t167 = (((x693/x694)<=x695)^x696);

    if (t167 != -2) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x697 = -1;
	int32_t x698 = INT32_MAX;
	int64_t x700 = INT64_MAX;

    t168 = (((x697/x698)<=x699)^x700);

    if (t168 != INT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x702 = -1;
	volatile int16_t x703 = INT16_MIN;
	int16_t x704 = -1;
	volatile int32_t t169 = 6;

    t169 = (((x701/x702)<=x703)^x704);

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x705 = -1LL;
	int32_t x707 = -1;
	uint16_t x708 = UINT16_MAX;
	volatile int32_t t170 = -51584911;

    t170 = (((x705/x706)<=x707)^x708);

    if (t170 != 65535) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x709 = UINT8_MAX;
	int8_t x710 = INT8_MIN;
	static int32_t x711 = -208608892;
	static volatile int64_t x712 = INT64_MIN;

    t171 = (((x709/x710)<=x711)^x712);

    if (t171 != INT64_MIN) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x714 = UINT16_MAX;
	static int16_t x715 = -3290;
	volatile int32_t t172 = 391946;

    t172 = (((x713/x714)<=x715)^x716);

    if (t172 != -2) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x717 = UINT64_MAX;
	int64_t x720 = -1LL;
	static int64_t t173 = -2021707886716926LL;

    t173 = (((x717/x718)<=x719)^x720);

    if (t173 != -2LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x721 = -1;
	static int16_t x722 = -785;
	uint16_t x723 = 0U;
	static int64_t x724 = INT64_MIN;

    t174 = (((x721/x722)<=x723)^x724);

    if (t174 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x725 = -1LL;
	uint32_t x726 = UINT32_MAX;
	volatile int8_t x727 = 1;
	int32_t x728 = -1;
	volatile int32_t t175 = 1866;

    t175 = (((x725/x726)<=x727)^x728);

    if (t175 != -2) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x730 = -1;
	int64_t x731 = INT64_MIN;
	int16_t x732 = -1;
	int32_t t176 = -1;

    t176 = (((x729/x730)<=x731)^x732);

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int32_t x733 = -1;
	int64_t x734 = -1269747855327226293LL;
	int8_t x735 = -15;
	static volatile int32_t x736 = INT32_MAX;

    t177 = (((x733/x734)<=x735)^x736);

    if (t177 != INT32_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x737 = -1;
	int16_t x738 = 1970;
	int64_t x739 = -1LL;
	uint64_t x740 = 10LLU;
	static volatile uint64_t t178 = 5382495602650872178LLU;

    t178 = (((x737/x738)<=x739)^x740);

    if (t178 != 10LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x741 = 87261134U;
	static int8_t x744 = -1;
	volatile int32_t t179 = 141;

    t179 = (((x741/x742)<=x743)^x744);

    if (t179 != -2) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x746 = UINT8_MAX;
	uint64_t x747 = 133934023362LLU;
	volatile int64_t x748 = -58113512214LL;
	volatile int64_t t180 = -1LL;

    t180 = (((x745/x746)<=x747)^x748);

    if (t180 != -58113512213LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x749 = INT32_MIN;
	int64_t x750 = -1LL;
	static int64_t x751 = -1062245648090505913LL;
	int8_t x752 = INT8_MIN;
	volatile int32_t t181 = -46868;

    t181 = (((x749/x750)<=x751)^x752);

    if (t181 != -128) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int16_t x753 = -1;
	uint16_t x754 = UINT16_MAX;
	uint64_t x755 = 383LLU;
	int8_t x756 = INT8_MIN;
	volatile int32_t t182 = -2;

    t182 = (((x753/x754)<=x755)^x756);

    if (t182 != -127) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint32_t x757 = 5896925U;
	int32_t x758 = INT32_MIN;
	int8_t x759 = -3;
	int16_t x760 = INT16_MIN;
	int32_t t183 = -5;

    t183 = (((x757/x758)<=x759)^x760);

    if (t183 != -32767) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x761 = 2U;
	int32_t x762 = INT32_MIN;
	int8_t x763 = INT8_MIN;
	volatile uint16_t x764 = 252U;
	int32_t t184 = 2017238;

    t184 = (((x761/x762)<=x763)^x764);

    if (t184 != 252) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x765 = -1;
	uint8_t x766 = 2U;
	volatile int32_t x767 = INT32_MAX;
	int32_t t185 = 957;

    t185 = (((x765/x766)<=x767)^x768);

    if (t185 != -12) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x769 = -8;
	int64_t x770 = 6720978438021LL;
	int8_t x771 = -16;
	int32_t x772 = INT32_MAX;
	volatile int32_t t186 = INT32_MAX;

    t186 = (((x769/x770)<=x771)^x772);

    if (t186 != INT32_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x773 = INT16_MAX;
	uint32_t x774 = 960235580U;
	int32_t x775 = -1;
	int16_t x776 = 1;
	int32_t t187 = -14009;

    t187 = (((x773/x774)<=x775)^x776);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x781 = 0;
	volatile int32_t x782 = INT32_MIN;
	volatile uint16_t x783 = 166U;
	volatile uint16_t x784 = 454U;
	static volatile int32_t t188 = -1;

    t188 = (((x781/x782)<=x783)^x784);

    if (t188 != 455) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x785 = -1;
	int64_t x786 = INT64_MAX;
	int8_t x787 = INT8_MIN;
	uint32_t x788 = 757617U;
	volatile uint32_t t189 = 51223864U;

    t189 = (((x785/x786)<=x787)^x788);

    if (t189 != 757617U) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x789 = UINT64_MAX;
	uint16_t x790 = UINT16_MAX;
	static int16_t x791 = INT16_MIN;
	static int8_t x792 = -2;
	volatile int32_t t190 = 25482182;

    t190 = (((x789/x790)<=x791)^x792);

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x794 = INT16_MIN;
	int64_t x795 = -3632506001085831LL;
	int64_t x796 = -35057996821028810LL;
	int64_t t191 = -2108981660738LL;

    t191 = (((x793/x794)<=x795)^x796);

    if (t191 != -35057996821028810LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x798 = INT64_MIN;
	uint8_t x799 = 0U;
	volatile int8_t x800 = INT8_MIN;
	volatile int32_t t192 = -531783830;

    t192 = (((x797/x798)<=x799)^x800);

    if (t192 != -127) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x801 = INT16_MIN;
	int16_t x802 = INT16_MIN;
	int32_t x803 = INT32_MIN;

    t193 = (((x801/x802)<=x803)^x804);

    if (t193 != -128) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile uint16_t x806 = 2U;
	static int64_t x808 = INT64_MIN;
	volatile int64_t t194 = INT64_MIN;

    t194 = (((x805/x806)<=x807)^x808);

    if (t194 != INT64_MIN) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x809 = -1;
	volatile int64_t x810 = INT64_MAX;
	int64_t x811 = -1LL;
	int8_t x812 = INT8_MIN;
	volatile int32_t t195 = 0;

    t195 = (((x809/x810)<=x811)^x812);

    if (t195 != -128) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint8_t x814 = UINT8_MAX;
	uint32_t x816 = 1931027U;
	uint32_t t196 = 2013988969U;

    t196 = (((x813/x814)<=x815)^x816);

    if (t196 != 1931026U) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x818 = 42;
	int8_t x819 = 6;
	volatile uint64_t x820 = UINT64_MAX;
	uint64_t t197 = 61051039493711781LLU;

    t197 = (((x817/x818)<=x819)^x820);

    if (t197 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x821 = 27;
	static int16_t x822 = 41;
	int32_t x823 = -7;
	int32_t x824 = -1;
	int32_t t198 = 37653;

    t198 = (((x821/x822)<=x823)^x824);

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x825 = -51019;
	int16_t x826 = 769;
	static int32_t x827 = -1;
	volatile uint64_t t199 = 9345076560599LLU;

    t199 = (((x825/x826)<=x827)^x828);

    if (t199 != 95688830LLU) { NG(); } else { ; }
	
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

