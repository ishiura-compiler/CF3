
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

int8_t x3 = INT8_MAX;
int16_t x13 = INT16_MIN;
uint8_t x21 = 6U;
int64_t x29 = -1LL;
static uint64_t x30 = 7636892805167LLU;
uint32_t x35 = 388648364U;
volatile int32_t x36 = -1;
uint32_t t8 = 21219989U;
uint8_t x39 = 2U;
static volatile uint32_t x43 = 1U;
static int64_t x44 = INT64_MIN;
volatile uint32_t x55 = 43U;
uint16_t x60 = 1789U;
int64_t x62 = INT64_MAX;
volatile int64_t t16 = 756238495309496419LL;
static uint32_t x79 = 7155U;
static uint64_t x85 = 115104492642329LLU;
uint16_t x88 = 1012U;
int16_t x96 = INT16_MIN;
int16_t x100 = -1;
volatile int64_t x104 = INT64_MIN;
int64_t t25 = 14LL;
uint64_t x111 = 645799335355LLU;
volatile int32_t x119 = -861;
uint32_t x125 = 545791215U;
uint32_t x128 = 211200U;
volatile uint32_t t30 = 13598U;
static uint32_t x131 = UINT32_MAX;
volatile uint16_t x132 = 23378U;
uint32_t t31 = 1926307303U;
static int8_t x134 = -1;
static int64_t x140 = 3634632805048533126LL;
int32_t x143 = -24290982;
static int32_t t34 = -58290;
static int64_t x148 = -79LL;
int64_t t35 = 208687642LL;
int8_t x152 = INT8_MAX;
uint16_t x153 = UINT16_MAX;
int8_t x156 = INT8_MIN;
volatile uint16_t x160 = UINT16_MAX;
int64_t x163 = -20LL;
volatile int64_t t39 = 1985039869894652LL;
uint64_t x165 = 7563974LLU;
static volatile uint64_t t42 = 89090LLU;
int64_t x179 = INT64_MIN;
uint16_t x184 = 729U;
int8_t x185 = INT8_MIN;
volatile uint16_t x187 = 319U;
uint32_t x192 = 23289U;
int8_t x197 = -1;
volatile int16_t x202 = 1;
int8_t x206 = 1;
int16_t x207 = INT16_MIN;
volatile uint64_t t50 = 557610690749LLU;
int32_t x209 = -1;
uint16_t x210 = UINT16_MAX;
volatile int32_t t51 = 0;
uint64_t t52 = 430LLU;
int8_t x224 = 0;
int64_t x225 = -1LL;
volatile int16_t x237 = 9;
uint32_t x238 = UINT32_MAX;
static volatile int32_t t60 = -18580881;
static int32_t t61 = 58919;
int8_t x258 = -1;
int8_t x261 = INT8_MAX;
int32_t x266 = INT32_MIN;
volatile int32_t t66 = -115937116;
int16_t x276 = -9;
int8_t x277 = INT8_MAX;
int16_t x281 = INT16_MAX;
static uint64_t x292 = 1LLU;
volatile uint64_t t71 = 25390481943LLU;
static volatile uint64_t x293 = 79498623523LLU;
int32_t x296 = -1;
static uint64_t t73 = 7835468688332109387LLU;
int32_t x306 = INT32_MAX;
int8_t x311 = INT8_MIN;
uint32_t x317 = 6U;
static volatile uint32_t x318 = 3750U;
int16_t x319 = INT16_MIN;
int32_t t77 = -88760062;
int16_t x322 = INT16_MAX;
int64_t x328 = -1LL;
int64_t t79 = 510740517850098LL;
int32_t x332 = INT32_MAX;
int8_t x334 = INT8_MAX;
volatile int8_t x336 = -1;
uint64_t x339 = UINT64_MAX;
static uint8_t x340 = 8U;
int16_t x356 = INT16_MIN;
int16_t x358 = 15005;
int16_t x359 = INT16_MAX;
static volatile int32_t t87 = 472;
uint64_t x373 = 19627583LLU;
uint16_t x378 = 28792U;
uint64_t x379 = UINT64_MAX;
volatile int16_t x384 = INT16_MIN;
int16_t x388 = INT16_MAX;
volatile int16_t x396 = -3;
static volatile int32_t t97 = 0;
static int8_t x406 = INT8_MAX;
int8_t x408 = 9;
int16_t x417 = INT16_MIN;
static int16_t x423 = 13;
int32_t t103 = -817774906;
uint16_t x425 = 2041U;
uint8_t x430 = 12U;
volatile uint64_t t105 = 1024363475392925LLU;
int8_t x433 = 0;
static int32_t x437 = -1;
static volatile int32_t x438 = INT32_MAX;
uint64_t x439 = 1118649664351081LLU;
int32_t t108 = -109390;
volatile uint32_t t110 = 14U;
int64_t t111 = -10488629195LL;
static int32_t x460 = INT32_MIN;
volatile int32_t t112 = -89444;
int8_t x463 = INT8_MIN;
static int64_t t113 = 107464308336347094LL;
int32_t x466 = INT32_MAX;
int32_t x470 = INT32_MIN;
volatile int64_t t115 = -532249LL;
static uint8_t x475 = UINT8_MAX;
volatile int32_t t116 = -218;
int8_t x479 = -1;
int32_t x482 = 23426972;
volatile int64_t x486 = INT64_MAX;
uint16_t x487 = 635U;
int32_t t119 = -332938915;
uint32_t x492 = UINT32_MAX;
uint64_t x495 = 8LLU;
static uint8_t x497 = UINT8_MAX;
volatile int16_t x498 = INT16_MIN;
int16_t x499 = INT16_MIN;
int8_t x500 = 53;
uint32_t t123 = 2028U;
uint64_t x515 = UINT64_MAX;
int64_t x520 = -1LL;
int64_t t126 = 95LL;
static int32_t x524 = -1;
static uint32_t t127 = 6U;
int16_t x525 = -1;
static int8_t x527 = INT8_MIN;
volatile int32_t x531 = INT32_MIN;
static int32_t x539 = -1;
int16_t x540 = 2;
volatile int8_t x541 = -4;
int32_t x545 = INT32_MAX;
static int32_t t133 = -1239;
int32_t x549 = INT32_MIN;
static volatile int64_t t135 = 63066LL;
uint32_t x563 = UINT32_MAX;
uint32_t x565 = 10547U;
int64_t x571 = -1LL;
volatile uint32_t x574 = 3976073U;
static volatile int16_t x576 = -10;
int64_t x580 = -2772406240859762454LL;
static int8_t x588 = -1;
int32_t x589 = 780418596;
int32_t x597 = INT32_MIN;
int64_t x601 = INT64_MAX;
int16_t x605 = INT16_MIN;
uint64_t x608 = 857249285201671233LLU;
int32_t x619 = INT32_MIN;
static int64_t x621 = -7091LL;
int16_t x630 = -1;
uint64_t x632 = 412767173LLU;
int16_t x634 = -42;
int64_t x636 = 7104998LL;
static uint16_t x638 = 7393U;
int32_t x641 = -61706;
static int64_t x643 = INT64_MAX;
int64_t t155 = -15203LL;
uint32_t x647 = 58655U;
volatile int32_t t157 = 91;
int8_t x654 = INT8_MIN;
int8_t x672 = 15;
volatile int32_t x673 = INT32_MIN;
volatile uint64_t t164 = 4047929888LLU;
int16_t x683 = 3152;
int32_t x687 = INT32_MIN;
uint64_t x689 = 2418994765259LLU;
int64_t t167 = -43873901946992LL;
volatile int8_t x694 = -1;
uint64_t x696 = 18745748986779041LLU;
volatile uint64_t t168 = 12922252LLU;
static uint32_t x700 = 63677U;
volatile uint32_t t169 = 45121097U;
int32_t t171 = -104038879;
volatile uint64_t x712 = UINT64_MAX;
volatile uint64_t t172 = 10130124LLU;
int8_t x718 = -21;
uint32_t x719 = 12440118U;
int32_t x722 = -4048;
static int16_t x726 = INT16_MIN;
static int32_t t177 = -3554;
uint64_t x740 = 320992LLU;
int64_t t181 = -4741249402152382LL;
int16_t x753 = 0;
uint8_t x755 = 24U;
static uint16_t x756 = 122U;
static int32_t t183 = -108664133;
int16_t x757 = INT16_MIN;
int64_t t184 = -1145919099LL;
int64_t x768 = INT64_MAX;
uint64_t x770 = 753679756LLU;
uint16_t x773 = UINT16_MAX;
int8_t x775 = INT8_MIN;
int32_t x777 = INT32_MIN;
volatile int64_t x780 = INT64_MIN;
int16_t x785 = INT16_MIN;
int64_t x787 = INT64_MAX;
static uint32_t x788 = 1U;
volatile int64_t t191 = 189LL;
uint8_t x789 = 2U;
int16_t x802 = INT16_MIN;
static volatile int32_t x803 = INT32_MAX;
static int8_t x804 = INT8_MAX;
volatile uint8_t x814 = UINT8_MAX;
volatile uint32_t t199 = 9509525U;


void f0(void) {
    	int64_t x1 = -2254109962769LL;
	int16_t x2 = -7951;
	uint64_t x4 = 46567755854LLU;
	volatile uint64_t t0 = 1LLU;

    t0 = (((x1>x2)/x3)&x4);

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x5 = 1U;
	int64_t x6 = INT64_MAX;
	int16_t x7 = INT16_MIN;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = -59462776;

    t1 = (((x5>x6)/x7)&x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x9 = UINT64_MAX;
	uint8_t x10 = UINT8_MAX;
	static int8_t x11 = INT8_MIN;
	int16_t x12 = -1;
	volatile int32_t t2 = -438;

    t2 = (((x9>x10)/x11)&x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x14 = 51U;
	static int16_t x15 = 4;
	static int16_t x16 = -13;
	volatile int32_t t3 = -58920;

    t3 = (((x13>x14)/x15)&x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x17 = -2650061359007081614LL;
	int64_t x18 = INT64_MAX;
	static uint64_t x19 = UINT64_MAX;
	static volatile uint32_t x20 = 2263337U;
	uint64_t t4 = 118866637421LLU;

    t4 = (((x17>x18)/x19)&x20);

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int16_t x22 = -1;
	int32_t x23 = INT32_MAX;
	int32_t x24 = -1;
	volatile int32_t t5 = 155474;

    t5 = (((x21>x22)/x23)&x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MIN;
	volatile uint32_t x26 = UINT32_MAX;
	volatile int32_t x27 = -934980;
	static int8_t x28 = INT8_MIN;
	static volatile int32_t t6 = 213;

    t6 = (((x25>x26)/x27)&x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x31 = INT64_MIN;
	volatile int16_t x32 = INT16_MIN;
	int64_t t7 = 1384069540256LL;

    t7 = (((x29>x30)/x31)&x32);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	int64_t x34 = INT64_MIN;

    t8 = (((x33>x34)/x35)&x36);

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MIN;
	int16_t x38 = 9;
	int8_t x40 = -1;
	int32_t t9 = 3627;

    t9 = (((x37>x38)/x39)&x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MIN;
	int32_t x42 = INT32_MAX;
	int64_t t10 = 2213912675942830597LL;

    t10 = (((x41>x42)/x43)&x44);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MAX;
	uint16_t x46 = 1U;
	int16_t x47 = -15;
	int32_t x48 = INT32_MIN;
	volatile int32_t t11 = 23993790;

    t11 = (((x45>x46)/x47)&x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = 4044729U;
	int64_t x50 = INT64_MIN;
	uint16_t x51 = 2080U;
	int8_t x52 = INT8_MAX;
	volatile int32_t t12 = -48545871;

    t12 = (((x49>x50)/x51)&x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = UINT16_MAX;
	static int8_t x54 = -5;
	int32_t x56 = INT32_MIN;
	volatile uint32_t t13 = 148990U;

    t13 = (((x53>x54)/x55)&x56);

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MAX;
	uint64_t x58 = UINT64_MAX;
	uint16_t x59 = UINT16_MAX;
	int32_t t14 = -119;

    t14 = (((x57>x58)/x59)&x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = 0;
	int16_t x63 = INT16_MIN;
	int32_t x64 = 1;
	int32_t t15 = -539;

    t15 = (((x61>x62)/x63)&x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x65 = 483;
	static int8_t x66 = INT8_MAX;
	int16_t x67 = 35;
	int64_t x68 = INT64_MIN;

    t16 = (((x65>x66)/x67)&x68);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x69 = INT32_MAX;
	volatile uint8_t x70 = 0U;
	int32_t x71 = -626591172;
	static uint16_t x72 = UINT16_MAX;
	volatile int32_t t17 = 19;

    t17 = (((x69>x70)/x71)&x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = 0;
	static uint64_t x74 = 2334142LLU;
	static int64_t x75 = INT64_MAX;
	uint32_t x76 = 1170244016U;
	static volatile int64_t t18 = 3050269LL;

    t18 = (((x73>x74)/x75)&x76);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = 2;
	int16_t x78 = 13972;
	volatile uint16_t x80 = 3U;
	uint32_t t19 = 2917210U;

    t19 = (((x77>x78)/x79)&x80);

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x81 = 6U;
	int64_t x82 = INT64_MIN;
	int32_t x83 = INT32_MAX;
	static uint64_t x84 = UINT64_MAX;
	volatile uint64_t t20 = 233023640384769LLU;

    t20 = (((x81>x82)/x83)&x84);

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x86 = INT16_MIN;
	int8_t x87 = INT8_MIN;
	int32_t t21 = 0;

    t21 = (((x85>x86)/x87)&x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MIN;
	int64_t x90 = -1LL;
	int64_t x91 = INT64_MIN;
	int16_t x92 = INT16_MAX;
	volatile int64_t t22 = 7624268496957327LL;

    t22 = (((x89>x90)/x91)&x92);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = -7696111131852LL;
	static uint32_t x94 = 404141490U;
	int32_t x95 = INT32_MIN;
	int32_t t23 = 0;

    t23 = (((x93>x94)/x95)&x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int64_t x97 = INT64_MAX;
	static int64_t x98 = INT64_MAX;
	int32_t x99 = INT32_MIN;
	static int32_t t24 = 2075208;

    t24 = (((x97>x98)/x99)&x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = 1888202534U;
	static uint32_t x102 = 0U;
	static int16_t x103 = INT16_MIN;

    t25 = (((x101>x102)/x103)&x104);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x105 = 42;
	int32_t x106 = -624;
	volatile uint64_t x107 = UINT64_MAX;
	static int8_t x108 = INT8_MIN;
	volatile uint64_t t26 = 33895974053LLU;

    t26 = (((x105>x106)/x107)&x108);

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint16_t x109 = 3U;
	volatile int32_t x110 = INT32_MAX;
	volatile uint8_t x112 = 57U;
	volatile uint64_t t27 = 153265188LLU;

    t27 = (((x109>x110)/x111)&x112);

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x117 = -14;
	volatile int64_t x118 = INT64_MIN;
	int8_t x120 = -1;
	static int32_t t28 = -560192733;

    t28 = (((x117>x118)/x119)&x120);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x121 = UINT32_MAX;
	uint64_t x122 = UINT64_MAX;
	static int8_t x123 = INT8_MIN;
	int8_t x124 = INT8_MIN;
	int32_t t29 = -161995;

    t29 = (((x121>x122)/x123)&x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x126 = 3918LLU;
	static volatile int16_t x127 = INT16_MIN;

    t30 = (((x125>x126)/x127)&x128);

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x129 = INT32_MIN;
	int16_t x130 = 20;

    t31 = (((x129>x130)/x131)&x132);

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x133 = INT16_MAX;
	static int8_t x135 = INT8_MAX;
	uint64_t x136 = UINT64_MAX;
	static uint64_t t32 = 1543LLU;

    t32 = (((x133>x134)/x135)&x136);

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x137 = INT32_MIN;
	static uint16_t x138 = 97U;
	static uint8_t x139 = UINT8_MAX;
	volatile int64_t t33 = 246423886LL;

    t33 = (((x137>x138)/x139)&x140);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x141 = 3415239278371LL;
	int32_t x142 = INT32_MIN;
	static volatile int16_t x144 = 8;

    t34 = (((x141>x142)/x143)&x144);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x145 = UINT64_MAX;
	static volatile int8_t x146 = INT8_MIN;
	int32_t x147 = -311;

    t35 = (((x145>x146)/x147)&x148);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x149 = -33315424358LL;
	int64_t x150 = -147757306621353LL;
	static int32_t x151 = -1;
	static int32_t t36 = 871;

    t36 = (((x149>x150)/x151)&x152);

    if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x154 = 1429U;
	int8_t x155 = INT8_MIN;
	int32_t t37 = -16243613;

    t37 = (((x153>x154)/x155)&x156);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x157 = INT64_MIN;
	volatile int64_t x158 = INT64_MAX;
	uint16_t x159 = 1U;
	int32_t t38 = -1566;

    t38 = (((x157>x158)/x159)&x160);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x161 = -1LL;
	int32_t x162 = INT32_MIN;
	int64_t x164 = 19184033059649506LL;

    t39 = (((x161>x162)/x163)&x164);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x166 = INT64_MIN;
	volatile int16_t x167 = INT16_MIN;
	uint32_t x168 = 6406U;
	volatile uint32_t t40 = 373U;

    t40 = (((x165>x166)/x167)&x168);

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x169 = INT64_MIN;
	int64_t x170 = 207055864027152331LL;
	int32_t x171 = -1;
	uint32_t x172 = UINT32_MAX;
	uint32_t t41 = 270644U;

    t41 = (((x169>x170)/x171)&x172);

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x173 = INT16_MIN;
	int8_t x174 = -1;
	int16_t x175 = -218;
	static uint64_t x176 = 1702617480679126819LLU;

    t42 = (((x173>x174)/x175)&x176);

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x177 = 5;
	static int8_t x178 = INT8_MAX;
	int8_t x180 = -44;
	int64_t t43 = -409105098034LL;

    t43 = (((x177>x178)/x179)&x180);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x181 = 334U;
	static int8_t x182 = -1;
	int16_t x183 = -1;
	volatile int32_t t44 = 422;

    t44 = (((x181>x182)/x183)&x184);

    if (t44 != 729) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x186 = 28056691U;
	static int32_t x188 = -4619973;
	volatile int32_t t45 = 48;

    t45 = (((x185>x186)/x187)&x188);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x189 = -332;
	int8_t x190 = -1;
	static int8_t x191 = INT8_MIN;
	volatile uint32_t t46 = 351U;

    t46 = (((x189>x190)/x191)&x192);

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int8_t x193 = -1;
	int32_t x194 = -1;
	volatile int16_t x195 = -2;
	int64_t x196 = INT64_MAX;
	static int64_t t47 = -106807994LL;

    t47 = (((x193>x194)/x195)&x196);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x198 = UINT32_MAX;
	uint8_t x199 = 59U;
	uint8_t x200 = 2U;
	volatile int32_t t48 = 0;

    t48 = (((x197>x198)/x199)&x200);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x201 = -1LL;
	uint16_t x203 = 447U;
	uint16_t x204 = 153U;
	volatile int32_t t49 = -907;

    t49 = (((x201>x202)/x203)&x204);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x205 = INT32_MAX;
	uint64_t x208 = 388458028245LLU;

    t50 = (((x205>x206)/x207)&x208);

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int32_t x211 = INT32_MAX;
	uint8_t x212 = UINT8_MAX;

    t51 = (((x209>x210)/x211)&x212);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x213 = -1LL;
	int64_t x214 = INT64_MIN;
	uint64_t x215 = 2092081836407776LLU;
	int32_t x216 = INT32_MIN;

    t52 = (((x213>x214)/x215)&x216);

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x217 = 1;
	int64_t x218 = INT64_MIN;
	static uint64_t x219 = 1913760859885744682LLU;
	static int64_t x220 = -1LL;
	volatile uint64_t t53 = 1289866513183773074LLU;

    t53 = (((x217>x218)/x219)&x220);

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x221 = INT64_MIN;
	volatile uint64_t x222 = UINT64_MAX;
	int32_t x223 = INT32_MIN;
	volatile int32_t t54 = 22845;

    t54 = (((x221>x222)/x223)&x224);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x226 = -1LL;
	int8_t x227 = INT8_MIN;
	static int64_t x228 = INT64_MIN;
	int64_t t55 = 15448633722879LL;

    t55 = (((x225>x226)/x227)&x228);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x229 = -1;
	static uint8_t x230 = UINT8_MAX;
	int16_t x231 = -1;
	volatile int8_t x232 = INT8_MIN;
	static volatile int32_t t56 = -1352468;

    t56 = (((x229>x230)/x231)&x232);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x233 = 2U;
	int32_t x234 = INT32_MAX;
	int64_t x235 = 3287994LL;
	int64_t x236 = INT64_MAX;
	volatile int64_t t57 = 759805667141LL;

    t57 = (((x233>x234)/x235)&x236);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x239 = -1;
	int64_t x240 = -1LL;
	int64_t t58 = -656648LL;

    t58 = (((x237>x238)/x239)&x240);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x241 = -1LL;
	int16_t x242 = INT16_MAX;
	volatile int64_t x243 = 228559517247698405LL;
	volatile int16_t x244 = 342;
	volatile int64_t t59 = 28078967570372LL;

    t59 = (((x241>x242)/x243)&x244);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x245 = INT32_MIN;
	int32_t x246 = INT32_MIN;
	int8_t x247 = INT8_MIN;
	int8_t x248 = -45;

    t60 = (((x245>x246)/x247)&x248);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x249 = 26917359481487655LL;
	int16_t x250 = INT16_MAX;
	static int16_t x251 = -1;
	int16_t x252 = INT16_MIN;

    t61 = (((x249>x250)/x251)&x252);

    if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x253 = UINT64_MAX;
	int64_t x254 = INT64_MIN;
	int32_t x255 = INT32_MIN;
	uint64_t x256 = 23441021LLU;
	uint64_t t62 = 4756771304906411LLU;

    t62 = (((x253>x254)/x255)&x256);

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x257 = INT64_MIN;
	static int32_t x259 = INT32_MIN;
	int64_t x260 = INT64_MIN;
	static volatile int64_t t63 = -204144342LL;

    t63 = (((x257>x258)/x259)&x260);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x262 = -1;
	int16_t x263 = INT16_MAX;
	int32_t x264 = INT32_MIN;
	int32_t t64 = -947;

    t64 = (((x261>x262)/x263)&x264);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x265 = 1614;
	volatile int8_t x267 = -58;
	uint64_t x268 = 809316377LLU;
	uint64_t t65 = 91405090889612LLU;

    t65 = (((x265>x266)/x267)&x268);

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x269 = INT16_MAX;
	int8_t x270 = INT8_MIN;
	static volatile uint8_t x271 = 19U;
	volatile int32_t x272 = -477589188;

    t66 = (((x269>x270)/x271)&x272);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x273 = -1;
	uint64_t x274 = UINT64_MAX;
	int16_t x275 = 389;
	int32_t t67 = -85826;

    t67 = (((x273>x274)/x275)&x276);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint16_t x278 = UINT16_MAX;
	volatile int16_t x279 = INT16_MAX;
	static int32_t x280 = INT32_MIN;
	int32_t t68 = -494164036;

    t68 = (((x277>x278)/x279)&x280);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x282 = UINT16_MAX;
	uint32_t x283 = 28460U;
	int8_t x284 = INT8_MIN;
	static uint32_t t69 = 337U;

    t69 = (((x281>x282)/x283)&x284);

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x285 = INT8_MIN;
	static uint64_t x286 = 247921480085738526LLU;
	int16_t x287 = INT16_MIN;
	static volatile int64_t x288 = -1LL;
	static volatile int64_t t70 = -1052892603518855414LL;

    t70 = (((x285>x286)/x287)&x288);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x289 = -3;
	int8_t x290 = INT8_MAX;
	uint8_t x291 = UINT8_MAX;

    t71 = (((x289>x290)/x291)&x292);

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x294 = 923;
	int16_t x295 = INT16_MAX;
	volatile int32_t t72 = -73320;

    t72 = (((x293>x294)/x295)&x296);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x297 = INT64_MIN;
	uint32_t x298 = 1441U;
	static uint64_t x299 = 124175434LLU;
	int32_t x300 = INT32_MIN;

    t73 = (((x297>x298)/x299)&x300);

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x305 = INT64_MIN;
	static int8_t x307 = INT8_MIN;
	uint8_t x308 = 1U;
	static int32_t t74 = -37042365;

    t74 = (((x305>x306)/x307)&x308);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x309 = INT16_MIN;
	volatile int8_t x310 = -1;
	uint32_t x312 = UINT32_MAX;
	uint32_t t75 = 8136U;

    t75 = (((x309>x310)/x311)&x312);

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x313 = INT16_MIN;
	int64_t x314 = INT64_MAX;
	volatile int64_t x315 = INT64_MIN;
	uint32_t x316 = 43U;
	static int64_t t76 = 36333110LL;

    t76 = (((x313>x314)/x315)&x316);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x320 = -1;

    t77 = (((x317>x318)/x319)&x320);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint64_t x321 = UINT64_MAX;
	int16_t x323 = INT16_MIN;
	int16_t x324 = INT16_MAX;
	int32_t t78 = 97;

    t78 = (((x321>x322)/x323)&x324);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x325 = 8823;
	volatile int8_t x326 = INT8_MIN;
	int8_t x327 = 29;

    t79 = (((x325>x326)/x327)&x328);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x329 = 6669709187454LLU;
	uint8_t x330 = 84U;
	volatile int8_t x331 = INT8_MIN;
	static volatile int32_t t80 = 12582051;

    t80 = (((x329>x330)/x331)&x332);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x333 = -3;
	int32_t x335 = INT32_MIN;
	volatile int32_t t81 = -32;

    t81 = (((x333>x334)/x335)&x336);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x337 = 3041089284688LL;
	int8_t x338 = 21;
	volatile uint64_t t82 = 74LLU;

    t82 = (((x337>x338)/x339)&x340);

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x341 = INT32_MIN;
	volatile int8_t x342 = INT8_MAX;
	static int32_t x343 = 99241337;
	uint16_t x344 = 1U;
	volatile int32_t t83 = -1303;

    t83 = (((x341>x342)/x343)&x344);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x345 = INT8_MIN;
	int8_t x346 = -53;
	int64_t x347 = -1LL;
	static int64_t x348 = -1LL;
	int64_t t84 = 116LL;

    t84 = (((x345>x346)/x347)&x348);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x349 = INT8_MAX;
	volatile int64_t x350 = INT64_MIN;
	uint32_t x351 = UINT32_MAX;
	volatile uint32_t x352 = 188U;
	volatile uint32_t t85 = 40775496U;

    t85 = (((x349>x350)/x351)&x352);

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x353 = INT64_MAX;
	static int32_t x354 = -3;
	int32_t x355 = -133505672;
	volatile int32_t t86 = -1;

    t86 = (((x353>x354)/x355)&x356);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x357 = 56U;
	uint8_t x360 = 6U;

    t87 = (((x357>x358)/x359)&x360);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x361 = INT64_MAX;
	static int64_t x362 = -195329325133789LL;
	static int8_t x363 = -1;
	int64_t x364 = INT64_MAX;
	static int64_t t88 = INT64_MAX;

    t88 = (((x361>x362)/x363)&x364);

    if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x365 = 5921574U;
	static int32_t x366 = INT32_MIN;
	uint16_t x367 = 72U;
	int8_t x368 = -1;
	int32_t t89 = 70;

    t89 = (((x365>x366)/x367)&x368);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x369 = 301946713740157598LLU;
	static int8_t x370 = INT8_MIN;
	uint32_t x371 = 6789U;
	volatile uint64_t x372 = 531630224175090LLU;
	volatile uint64_t t90 = 13LLU;

    t90 = (((x369>x370)/x371)&x372);

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x374 = -1;
	int8_t x375 = 26;
	static volatile int64_t x376 = -6595483999LL;
	volatile int64_t t91 = 13819599286149LL;

    t91 = (((x373>x374)/x375)&x376);

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x377 = INT16_MIN;
	static int8_t x380 = 1;
	volatile uint64_t t92 = 65225102LLU;

    t92 = (((x377>x378)/x379)&x380);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x381 = INT64_MAX;
	uint64_t x382 = UINT64_MAX;
	uint8_t x383 = 82U;
	static volatile int32_t t93 = 196685992;

    t93 = (((x381>x382)/x383)&x384);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x385 = INT8_MIN;
	static volatile int8_t x386 = INT8_MIN;
	static uint32_t x387 = 1544U;
	volatile uint32_t t94 = 834624436U;

    t94 = (((x385>x386)/x387)&x388);

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x389 = 60811695U;
	uint8_t x390 = UINT8_MAX;
	int16_t x391 = INT16_MIN;
	int32_t x392 = INT32_MAX;
	int32_t t95 = 114225;

    t95 = (((x389>x390)/x391)&x392);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x393 = -1;
	volatile int16_t x394 = INT16_MAX;
	int64_t x395 = -1LL;
	static volatile int64_t t96 = -11116316LL;

    t96 = (((x393>x394)/x395)&x396);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint16_t x397 = 62U;
	int8_t x398 = 0;
	int16_t x399 = 99;
	int8_t x400 = 1;

    t97 = (((x397>x398)/x399)&x400);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x401 = 128;
	volatile int8_t x402 = INT8_MIN;
	static int64_t x403 = INT64_MIN;
	int16_t x404 = INT16_MAX;
	int64_t t98 = 446567933362344300LL;

    t98 = (((x401>x402)/x403)&x404);

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x405 = 14724U;
	int16_t x407 = INT16_MIN;
	int32_t t99 = 1548;

    t99 = (((x405>x406)/x407)&x408);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x409 = 130299U;
	int16_t x410 = INT16_MIN;
	uint8_t x411 = 3U;
	int8_t x412 = INT8_MIN;
	static volatile int32_t t100 = -463621;

    t100 = (((x409>x410)/x411)&x412);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x413 = 5;
	static uint64_t x414 = UINT64_MAX;
	int8_t x415 = INT8_MIN;
	uint32_t x416 = UINT32_MAX;
	uint32_t t101 = 428341883U;

    t101 = (((x413>x414)/x415)&x416);

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x418 = -681458700;
	int16_t x419 = INT16_MIN;
	static volatile int8_t x420 = INT8_MAX;
	volatile int32_t t102 = -859;

    t102 = (((x417>x418)/x419)&x420);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x421 = 35U;
	int32_t x422 = INT32_MIN;
	static uint16_t x424 = UINT16_MAX;

    t103 = (((x421>x422)/x423)&x424);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x426 = INT64_MIN;
	uint32_t x427 = 61U;
	int64_t x428 = INT64_MIN;
	static volatile int64_t t104 = -221787LL;

    t104 = (((x425>x426)/x427)&x428);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x429 = INT64_MAX;
	static int16_t x431 = INT16_MIN;
	uint64_t x432 = 1929346180237LLU;

    t105 = (((x429>x430)/x431)&x432);

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x434 = 2475527937468587LL;
	int64_t x435 = -370721653LL;
	static volatile uint64_t x436 = 0LLU;
	uint64_t t106 = 345694LLU;

    t106 = (((x433>x434)/x435)&x436);

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x440 = INT64_MAX;
	uint64_t t107 = 532070211486049684LLU;

    t107 = (((x437>x438)/x439)&x440);

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x441 = INT16_MIN;
	volatile int64_t x442 = -1LL;
	int16_t x443 = 3514;
	static int8_t x444 = INT8_MAX;

    t108 = (((x441>x442)/x443)&x444);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x445 = 12865232LLU;
	uint64_t x446 = 88708888LLU;
	static int8_t x447 = INT8_MIN;
	int64_t x448 = 8120261412LL;
	volatile int64_t t109 = 2843971972860798769LL;

    t109 = (((x445>x446)/x447)&x448);

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x449 = 174LL;
	int8_t x450 = -1;
	uint32_t x451 = 296532U;
	static int8_t x452 = INT8_MIN;

    t110 = (((x449>x450)/x451)&x452);

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int32_t x453 = INT32_MIN;
	volatile int64_t x454 = -1LL;
	int64_t x455 = INT64_MIN;
	static volatile uint32_t x456 = 87722884U;

    t111 = (((x453>x454)/x455)&x456);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x457 = INT32_MIN;
	uint64_t x458 = 6LLU;
	int16_t x459 = INT16_MAX;

    t112 = (((x457>x458)/x459)&x460);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x461 = UINT8_MAX;
	uint16_t x462 = 1531U;
	int64_t x464 = INT64_MIN;

    t113 = (((x461>x462)/x463)&x464);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x465 = -436436726972559LL;
	static int64_t x467 = 50536LL;
	int16_t x468 = -6143;
	int64_t t114 = -2960113144050806LL;

    t114 = (((x465>x466)/x467)&x468);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint64_t x469 = UINT64_MAX;
	int64_t x471 = 20LL;
	int8_t x472 = -1;

    t115 = (((x469>x470)/x471)&x472);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x473 = INT64_MIN;
	static volatile uint32_t x474 = UINT32_MAX;
	static int32_t x476 = -1;

    t116 = (((x473>x474)/x475)&x476);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint64_t x477 = 83813317LLU;
	int16_t x478 = -1;
	int64_t x480 = INT64_MIN;
	static int64_t t117 = -962193012LL;

    t117 = (((x477>x478)/x479)&x480);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x481 = INT8_MIN;
	static volatile uint64_t x483 = 444608673LLU;
	uint16_t x484 = UINT16_MAX;
	volatile uint64_t t118 = 1633756246045235LLU;

    t118 = (((x481>x482)/x483)&x484);

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x485 = 25U;
	int16_t x488 = INT16_MAX;

    t119 = (((x485>x486)/x487)&x488);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x489 = -10513LL;
	uint16_t x490 = 13495U;
	uint32_t x491 = 37878578U;
	uint32_t t120 = 1690800U;

    t120 = (((x489>x490)/x491)&x492);

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x493 = -1;
	static int8_t x494 = INT8_MIN;
	volatile int16_t x496 = 0;
	uint64_t t121 = 266565374496866LLU;

    t121 = (((x493>x494)/x495)&x496);

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t t122 = -113;

    t122 = (((x497>x498)/x499)&x500);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x501 = INT32_MAX;
	uint8_t x502 = UINT8_MAX;
	static uint32_t x503 = 2U;
	int16_t x504 = -1;

    t123 = (((x501>x502)/x503)&x504);

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x509 = INT16_MIN;
	uint8_t x510 = UINT8_MAX;
	uint8_t x511 = UINT8_MAX;
	uint8_t x512 = 0U;
	static int32_t t124 = -7413470;

    t124 = (((x509>x510)/x511)&x512);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x513 = -1;
	int32_t x514 = INT32_MIN;
	int64_t x516 = INT64_MIN;
	volatile uint64_t t125 = 146054228885675823LLU;

    t125 = (((x513>x514)/x515)&x516);

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x517 = INT8_MIN;
	static volatile int16_t x518 = INT16_MAX;
	volatile int8_t x519 = -7;

    t126 = (((x517>x518)/x519)&x520);

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x521 = -5;
	int8_t x522 = INT8_MAX;
	uint32_t x523 = 219U;

    t127 = (((x521>x522)/x523)&x524);

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x526 = -3;
	uint32_t x528 = 80U;
	volatile uint32_t t128 = 204933222U;

    t128 = (((x525>x526)/x527)&x528);

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x529 = 0U;
	int16_t x530 = 1;
	uint32_t x532 = UINT32_MAX;
	static uint32_t t129 = 11476U;

    t129 = (((x529>x530)/x531)&x532);

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x533 = INT32_MIN;
	int64_t x534 = -1LL;
	uint8_t x535 = UINT8_MAX;
	static volatile uint64_t x536 = 29552348693218540LLU;
	volatile uint64_t t130 = 3486186036221816LLU;

    t130 = (((x533>x534)/x535)&x536);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x537 = INT16_MAX;
	uint16_t x538 = 6325U;
	volatile int32_t t131 = 8036;

    t131 = (((x537>x538)/x539)&x540);

    if (t131 != 2) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x542 = 1825;
	int32_t x543 = 264531905;
	uint16_t x544 = 11882U;
	int32_t t132 = -13710218;

    t132 = (((x541>x542)/x543)&x544);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x546 = UINT8_MAX;
	uint16_t x547 = 40U;
	int8_t x548 = -51;

    t133 = (((x545>x546)/x547)&x548);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x550 = 86895560845838LLU;
	uint8_t x551 = 1U;
	volatile int64_t x552 = -1LL;
	volatile int64_t t134 = 298444362056LL;

    t134 = (((x549>x550)/x551)&x552);

    if (t134 != 1LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x553 = 13;
	int64_t x554 = INT64_MAX;
	static volatile int16_t x555 = INT16_MIN;
	int64_t x556 = INT64_MAX;

    t135 = (((x553>x554)/x555)&x556);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x557 = 2635633030LLU;
	int8_t x558 = INT8_MAX;
	volatile int32_t x559 = INT32_MIN;
	int64_t x560 = INT64_MIN;
	volatile int64_t t136 = -26LL;

    t136 = (((x557>x558)/x559)&x560);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x561 = INT64_MIN;
	int8_t x562 = -28;
	int8_t x564 = 0;
	uint32_t t137 = 275363733U;

    t137 = (((x561>x562)/x563)&x564);

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x566 = INT16_MIN;
	uint64_t x567 = UINT64_MAX;
	static int16_t x568 = INT16_MIN;
	volatile uint64_t t138 = 62204330252LLU;

    t138 = (((x565>x566)/x567)&x568);

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x569 = -1;
	int64_t x570 = -1LL;
	static uint16_t x572 = UINT16_MAX;
	volatile int64_t t139 = 1370LL;

    t139 = (((x569>x570)/x571)&x572);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x573 = UINT16_MAX;
	int8_t x575 = INT8_MAX;
	int32_t t140 = -3061060;

    t140 = (((x573>x574)/x575)&x576);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x577 = INT64_MIN;
	int64_t x578 = -1LL;
	uint64_t x579 = 2867939LLU;
	static volatile uint64_t t141 = 24457LLU;

    t141 = (((x577>x578)/x579)&x580);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x581 = -3;
	uint16_t x582 = 3258U;
	uint8_t x583 = UINT8_MAX;
	uint64_t x584 = 338198574255699LLU;
	static uint64_t t142 = 895LLU;

    t142 = (((x581>x582)/x583)&x584);

    if (t142 != 0LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x585 = INT16_MIN;
	static volatile int64_t x586 = INT64_MIN;
	int16_t x587 = 1;
	int32_t t143 = 3785987;

    t143 = (((x585>x586)/x587)&x588);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint16_t x590 = 13U;
	static uint16_t x591 = 66U;
	volatile int8_t x592 = INT8_MIN;
	volatile int32_t t144 = 1;

    t144 = (((x589>x590)/x591)&x592);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x593 = -1;
	uint32_t x594 = 8108527U;
	int32_t x595 = INT32_MIN;
	static int64_t x596 = 413767903LL;
	static int64_t t145 = 499627LL;

    t145 = (((x593>x594)/x595)&x596);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x598 = 2196165LL;
	uint8_t x599 = 113U;
	uint8_t x600 = 25U;
	int32_t t146 = 2667;

    t146 = (((x597>x598)/x599)&x600);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x602 = -83080;
	int32_t x603 = INT32_MIN;
	int8_t x604 = INT8_MAX;
	int32_t t147 = 5;

    t147 = (((x601>x602)/x603)&x604);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x606 = INT16_MIN;
	int8_t x607 = INT8_MIN;
	uint64_t t148 = 39610595214070LLU;

    t148 = (((x605>x606)/x607)&x608);

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x609 = -1;
	int64_t x610 = 5445090700068LL;
	static int8_t x611 = INT8_MIN;
	int32_t x612 = INT32_MIN;
	static volatile int32_t t149 = -163675521;

    t149 = (((x609>x610)/x611)&x612);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x617 = INT8_MIN;
	int8_t x618 = -1;
	int64_t x620 = 127725LL;
	volatile int64_t t150 = -2728210799857LL;

    t150 = (((x617>x618)/x619)&x620);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x622 = 6U;
	int32_t x623 = INT32_MAX;
	int64_t x624 = INT64_MAX;
	int64_t t151 = -363LL;

    t151 = (((x621>x622)/x623)&x624);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x629 = 0;
	int16_t x631 = -5;
	uint64_t t152 = 58187LLU;

    t152 = (((x629>x630)/x631)&x632);

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x633 = 0U;
	static volatile int8_t x635 = INT8_MAX;
	int64_t t153 = -46957289296434LL;

    t153 = (((x633>x634)/x635)&x636);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x637 = 8349801LLU;
	volatile uint16_t x639 = 31600U;
	volatile int64_t x640 = -22242811656LL;
	volatile int64_t t154 = -2017381564107321LL;

    t154 = (((x637>x638)/x639)&x640);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x642 = INT16_MIN;
	static uint32_t x644 = 1U;

    t155 = (((x641>x642)/x643)&x644);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x645 = -1;
	int8_t x646 = -1;
	volatile int64_t x648 = INT64_MAX;
	static int64_t t156 = -19194887LL;

    t156 = (((x645>x646)/x647)&x648);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x649 = INT16_MAX;
	int8_t x650 = INT8_MIN;
	int8_t x651 = 43;
	int16_t x652 = -1;

    t157 = (((x649>x650)/x651)&x652);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x653 = -1;
	volatile int64_t x655 = 62463552LL;
	int64_t x656 = INT64_MAX;
	static volatile int64_t t158 = -83666054383LL;

    t158 = (((x653>x654)/x655)&x656);

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x657 = 2307601952515LL;
	int16_t x658 = 10;
	int8_t x659 = INT8_MAX;
	uint64_t x660 = UINT64_MAX;
	volatile uint64_t t159 = 127832485508540LLU;

    t159 = (((x657>x658)/x659)&x660);

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x661 = INT32_MAX;
	static volatile uint32_t x662 = 1959972U;
	uint8_t x663 = 1U;
	uint8_t x664 = 1U;
	volatile int32_t t160 = -74;

    t160 = (((x661>x662)/x663)&x664);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x665 = 214097730292389LL;
	int64_t x666 = -1LL;
	uint8_t x667 = 63U;
	int16_t x668 = -689;
	int32_t t161 = -48587;

    t161 = (((x665>x666)/x667)&x668);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x669 = -42700182LL;
	volatile int64_t x670 = INT64_MIN;
	uint64_t x671 = 5LLU;
	uint64_t t162 = 1LLU;

    t162 = (((x669>x670)/x671)&x672);

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x674 = INT64_MAX;
	int64_t x675 = -1LL;
	int32_t x676 = -1;
	volatile int64_t t163 = 11043LL;

    t163 = (((x673>x674)/x675)&x676);

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x677 = UINT64_MAX;
	static uint64_t x678 = 113788350328776LLU;
	uint64_t x679 = UINT64_MAX;
	int64_t x680 = -1LL;

    t164 = (((x677>x678)/x679)&x680);

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x681 = INT32_MIN;
	uint16_t x682 = 216U;
	uint8_t x684 = UINT8_MAX;
	volatile int32_t t165 = -15612736;

    t165 = (((x681>x682)/x683)&x684);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x685 = -408096910LL;
	volatile int64_t x686 = INT64_MIN;
	int64_t x688 = INT64_MIN;
	volatile int64_t t166 = 3LL;

    t166 = (((x685>x686)/x687)&x688);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x690 = -250587795228968LL;
	int8_t x691 = INT8_MIN;
	int64_t x692 = INT64_MIN;

    t167 = (((x689>x690)/x691)&x692);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x693 = -1;
	int32_t x695 = INT32_MAX;

    t168 = (((x693>x694)/x695)&x696);

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x697 = INT64_MIN;
	int64_t x698 = INT64_MIN;
	static volatile int16_t x699 = INT16_MIN;

    t169 = (((x697>x698)/x699)&x700);

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint8_t x701 = 0U;
	int32_t x702 = INT32_MIN;
	static int8_t x703 = INT8_MAX;
	volatile int16_t x704 = -3952;
	volatile int32_t t170 = -5247;

    t170 = (((x701>x702)/x703)&x704);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x705 = -1LL;
	int64_t x706 = -191LL;
	static uint16_t x707 = UINT16_MAX;
	int16_t x708 = INT16_MIN;

    t171 = (((x705>x706)/x707)&x708);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x709 = INT64_MIN;
	static volatile uint64_t x710 = 25720532870LLU;
	int8_t x711 = 10;

    t172 = (((x709>x710)/x711)&x712);

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x713 = -1;
	volatile uint8_t x714 = 53U;
	static uint64_t x715 = 1887845LLU;
	uint64_t x716 = 11824LLU;
	uint64_t t173 = 31224946810407172LLU;

    t173 = (((x713>x714)/x715)&x716);

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x717 = 155713U;
	int8_t x720 = -2;
	uint32_t t174 = 13U;

    t174 = (((x717>x718)/x719)&x720);

    if (t174 != 0U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x721 = 192U;
	volatile int64_t x723 = -22571LL;
	volatile uint8_t x724 = UINT8_MAX;
	int64_t t175 = -35LL;

    t175 = (((x721>x722)/x723)&x724);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x725 = -6LL;
	int64_t x727 = INT64_MIN;
	int64_t x728 = INT64_MIN;
	volatile int64_t t176 = 6104188639740LL;

    t176 = (((x725>x726)/x727)&x728);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x729 = -27534;
	volatile uint8_t x730 = UINT8_MAX;
	static int8_t x731 = INT8_MIN;
	static int16_t x732 = -1;

    t177 = (((x729>x730)/x731)&x732);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x733 = -1;
	int64_t x734 = INT64_MIN;
	uint32_t x735 = 52990U;
	uint8_t x736 = 126U;
	uint32_t t178 = 196774U;

    t178 = (((x733>x734)/x735)&x736);

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x737 = INT64_MIN;
	uint8_t x738 = 2U;
	static uint32_t x739 = 425833549U;
	volatile uint64_t t179 = 5153272552904758150LLU;

    t179 = (((x737>x738)/x739)&x740);

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x741 = INT64_MAX;
	volatile int32_t x742 = INT32_MAX;
	volatile int16_t x743 = INT16_MIN;
	int64_t x744 = 15369LL;
	volatile int64_t t180 = 2286189731399LL;

    t180 = (((x741>x742)/x743)&x744);

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x745 = -931333;
	static int16_t x746 = -309;
	int32_t x747 = -523909117;
	int64_t x748 = -1LL;

    t181 = (((x745>x746)/x747)&x748);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int64_t x749 = INT64_MIN;
	int16_t x750 = INT16_MIN;
	volatile int16_t x751 = INT16_MIN;
	int32_t x752 = -1;
	static volatile int32_t t182 = 0;

    t182 = (((x749>x750)/x751)&x752);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x754 = INT16_MIN;

    t183 = (((x753>x754)/x755)&x756);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x758 = 174419055;
	int64_t x759 = INT64_MIN;
	uint16_t x760 = 4U;

    t184 = (((x757>x758)/x759)&x760);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x761 = -1;
	int8_t x762 = INT8_MAX;
	int16_t x763 = INT16_MAX;
	int16_t x764 = INT16_MIN;
	int32_t t185 = -12656255;

    t185 = (((x761>x762)/x763)&x764);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x765 = -1;
	int32_t x766 = -1;
	int32_t x767 = INT32_MIN;
	int64_t t186 = -1LL;

    t186 = (((x765>x766)/x767)&x768);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x769 = INT8_MIN;
	int64_t x771 = -22393829432579LL;
	static volatile int16_t x772 = INT16_MIN;
	static volatile int64_t t187 = 359769972952153LL;

    t187 = (((x769>x770)/x771)&x772);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x774 = -2869;
	volatile int16_t x776 = 11;
	int32_t t188 = -52;

    t188 = (((x773>x774)/x775)&x776);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x778 = INT8_MIN;
	static uint16_t x779 = UINT16_MAX;
	int64_t t189 = -21469363495296LL;

    t189 = (((x777>x778)/x779)&x780);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x781 = 1355;
	int16_t x782 = INT16_MAX;
	static volatile uint32_t x783 = 11U;
	uint64_t x784 = 3LLU;
	volatile uint64_t t190 = 488184605992558645LLU;

    t190 = (((x781>x782)/x783)&x784);

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x786 = UINT8_MAX;

    t191 = (((x785>x786)/x787)&x788);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x790 = UINT8_MAX;
	uint32_t x791 = UINT32_MAX;
	volatile int32_t x792 = -27;
	static uint32_t t192 = 1720U;

    t192 = (((x789>x790)/x791)&x792);

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x793 = INT32_MAX;
	uint16_t x794 = 923U;
	int8_t x795 = INT8_MIN;
	uint64_t x796 = 249499LLU;
	uint64_t t193 = 29939LLU;

    t193 = (((x793>x794)/x795)&x796);

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x797 = INT16_MIN;
	volatile int8_t x798 = INT8_MIN;
	int32_t x799 = INT32_MIN;
	volatile uint16_t x800 = 14U;
	volatile int32_t t194 = -3;

    t194 = (((x797>x798)/x799)&x800);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x801 = 6567863239LLU;
	volatile int32_t t195 = 17666604;

    t195 = (((x801>x802)/x803)&x804);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x805 = UINT32_MAX;
	int64_t x806 = INT64_MIN;
	static uint16_t x807 = 39U;
	int64_t x808 = INT64_MIN;
	static int64_t t196 = 1118793LL;

    t196 = (((x805>x806)/x807)&x808);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x809 = INT8_MIN;
	int64_t x810 = -1LL;
	int16_t x811 = -1;
	uint16_t x812 = 3U;
	static volatile int32_t t197 = 29489005;

    t197 = (((x809>x810)/x811)&x812);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x813 = -3;
	static int64_t x815 = INT64_MIN;
	static int32_t x816 = -23526665;
	volatile int64_t t198 = -207177LL;

    t198 = (((x813>x814)/x815)&x816);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x817 = -119;
	int32_t x818 = INT32_MIN;
	int32_t x819 = 112349901;
	volatile uint32_t x820 = 222U;

    t199 = (((x817>x818)/x819)&x820);

    if (t199 != 0U) { NG(); } else { ; }
	
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

