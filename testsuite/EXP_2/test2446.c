
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

volatile uint16_t x5 = UINT16_MAX;
int32_t x7 = INT32_MIN;
volatile int32_t t2 = 0;
int8_t x13 = INT8_MIN;
static uint64_t x14 = 2103LLU;
static uint8_t x20 = 19U;
volatile int8_t x24 = INT8_MIN;
volatile int32_t x33 = -1;
uint16_t x34 = 1220U;
volatile int32_t t9 = -1;
int8_t x42 = INT8_MIN;
int16_t x45 = -1;
int32_t x48 = -1;
int32_t t11 = -114084811;
int16_t x49 = 2764;
uint16_t x57 = UINT16_MAX;
int8_t x60 = -1;
static volatile int32_t t16 = 8315745;
static uint16_t x78 = UINT16_MAX;
volatile int8_t x81 = INT8_MIN;
int32_t x87 = -346;
volatile int32_t t21 = 80;
static uint32_t x91 = 153215U;
static int8_t x93 = INT8_MIN;
volatile int32_t t24 = 214472;
static volatile int16_t x101 = INT16_MIN;
int8_t x104 = -1;
volatile int32_t t26 = 0;
volatile int16_t x110 = INT16_MAX;
uint64_t x111 = 130LLU;
int16_t x114 = INT16_MIN;
volatile int32_t t28 = 23946;
int16_t x117 = INT16_MIN;
uint32_t x118 = 475U;
static int16_t x132 = INT16_MAX;
int16_t x138 = -4;
uint8_t x139 = 3U;
uint16_t x145 = UINT16_MAX;
int64_t x148 = INT64_MAX;
int32_t t36 = -647975749;
static volatile int32_t t38 = -501097247;
uint16_t x160 = 414U;
uint64_t x164 = 1183808714079130028LLU;
static int16_t x174 = INT16_MAX;
int16_t x175 = -4506;
int32_t x177 = -1;
static int32_t x180 = -2;
uint64_t x181 = UINT64_MAX;
volatile int32_t t46 = -3;
volatile int8_t x191 = 6;
uint8_t x193 = UINT8_MAX;
volatile int32_t x204 = -139528;
int32_t t52 = -31196837;
uint16_t x215 = 115U;
int8_t x227 = -16;
static int16_t x231 = -1;
int32_t t58 = 1036348582;
volatile int16_t x238 = INT16_MIN;
static volatile int64_t x243 = -1LL;
static volatile uint8_t x247 = 3U;
volatile int32_t t62 = 1;
volatile int32_t x254 = INT32_MIN;
static volatile int32_t t63 = -6762195;
int32_t t65 = 8197;
int16_t x266 = -5393;
int32_t t67 = 143767796;
int64_t x274 = 326711758470958589LL;
volatile int32_t t68 = -274324;
uint8_t x279 = UINT8_MAX;
volatile int64_t x282 = INT64_MIN;
uint32_t x284 = 35029510U;
volatile uint64_t x286 = 138005LLU;
int16_t x289 = -4;
static uint16_t x297 = 590U;
volatile int32_t t78 = 12;
int8_t x330 = INT8_MIN;
uint64_t x331 = 1327179395781790310LLU;
volatile int32_t t83 = -48656341;
int64_t x344 = -25730069821198832LL;
int16_t x346 = 6113;
static uint32_t x349 = 0U;
uint32_t x363 = 106922547U;
int16_t x365 = INT16_MAX;
uint8_t x375 = 7U;
int32_t t93 = -54205;
int16_t x380 = 1;
static uint16_t x381 = UINT16_MAX;
int8_t x384 = 1;
int32_t t95 = -6;
volatile int32_t t96 = -27511;
int32_t x397 = 1848577;
int64_t x398 = -1396901440100LL;
int8_t x399 = INT8_MIN;
volatile int16_t x403 = -1;
uint8_t x410 = 62U;
static int16_t x412 = -11;
int8_t x414 = -18;
volatile int8_t x415 = -1;
int8_t x419 = INT8_MIN;
uint16_t x421 = 9U;
volatile uint16_t x423 = 5839U;
static int16_t x425 = INT16_MIN;
uint32_t x428 = 367U;
int8_t x429 = -2;
volatile int8_t x430 = -1;
volatile int8_t x431 = 7;
static volatile uint16_t x434 = 1U;
volatile int32_t t108 = 1;
uint16_t x437 = 6759U;
static uint8_t x453 = UINT8_MAX;
uint8_t x472 = 30U;
volatile int32_t x473 = INT32_MIN;
int8_t x475 = 1;
int8_t x477 = INT8_MIN;
int16_t x479 = 3254;
int8_t x483 = INT8_MIN;
uint32_t x487 = UINT32_MAX;
static uint32_t x494 = 7U;
uint64_t x496 = 21LLU;
uint8_t x497 = 88U;
volatile uint64_t x499 = 7LLU;
static int32_t t124 = -48774339;
static volatile uint64_t x502 = 3508421276891LLU;
uint64_t x504 = UINT64_MAX;
uint64_t x507 = 171316139574781LLU;
int16_t x508 = 2;
volatile int8_t x511 = INT8_MAX;
static int64_t x513 = 74513863148LL;
volatile int8_t x514 = 1;
static int8_t x524 = INT8_MAX;
int16_t x526 = INT16_MIN;
volatile int8_t x530 = -1;
uint32_t x531 = 1506U;
int64_t x532 = 523135933343166LL;
static int16_t x533 = 13;
int64_t x538 = INT64_MAX;
int32_t x543 = -1;
int32_t t135 = 60810;
uint64_t x546 = UINT64_MAX;
static uint8_t x562 = 67U;
uint8_t x563 = 3U;
volatile int64_t x578 = -3247863LL;
uint64_t x581 = 1876508189947LLU;
volatile int8_t x589 = -1;
uint8_t x594 = UINT8_MAX;
volatile uint8_t x600 = UINT8_MAX;
int16_t x611 = -1;
int32_t t152 = 15551;
volatile int16_t x614 = -1;
volatile int64_t x619 = 135901971526225LL;
static int32_t x625 = INT32_MIN;
uint16_t x627 = 40U;
int32_t t158 = 709555;
volatile int32_t t159 = -6191242;
int8_t x644 = INT8_MIN;
volatile int32_t t160 = -389;
int8_t x645 = INT8_MIN;
volatile uint8_t x648 = UINT8_MAX;
uint16_t x649 = UINT16_MAX;
static int32_t x650 = INT32_MAX;
static uint8_t x654 = 5U;
volatile int32_t t163 = 24629;
static int32_t t164 = 0;
int8_t x663 = INT8_MIN;
static volatile uint64_t x666 = 4806653048918063LLU;
int32_t t166 = 0;
volatile uint64_t x669 = 26723168LLU;
int8_t x670 = 9;
volatile uint32_t x674 = UINT32_MAX;
static volatile int32_t x678 = -3328498;
int64_t x682 = INT64_MAX;
int32_t x683 = -1;
int8_t x684 = 9;
uint8_t x686 = UINT8_MAX;
int32_t x688 = INT32_MIN;
int16_t x689 = INT16_MIN;
int64_t x690 = INT64_MAX;
int8_t x698 = INT8_MAX;
int32_t t175 = 0;
int32_t t176 = -6138;
int64_t x709 = -106641863LL;
static int8_t x720 = -1;
int16_t x734 = -1;
volatile int32_t t184 = -1;
uint16_t x742 = 4064U;
uint8_t x744 = UINT8_MAX;
int32_t x749 = INT32_MAX;
int64_t x761 = -2372859530LL;
int16_t x763 = -1;
int32_t x766 = INT32_MIN;
int64_t x778 = 47068314LL;
int16_t x793 = INT16_MIN;
int8_t x796 = 0;
static uint32_t x797 = 738338U;
int8_t x800 = INT8_MIN;


void f0(void) {
    	uint8_t x1 = 1U;
	volatile int8_t x2 = -1;
	int16_t x3 = INT16_MAX;
	uint16_t x4 = 9U;
	int32_t t0 = 449;

    t0 = ((x1!=(x2|x3))<=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = INT64_MAX;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = 27999216;

    t1 = ((x5!=(x6|x7))<=x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	uint8_t x10 = UINT8_MAX;
	uint32_t x11 = 102U;
	uint16_t x12 = 120U;

    t2 = ((x9!=(x10|x11))<=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x15 = 15U;
	volatile uint32_t x16 = 486U;
	static int32_t t3 = 116585715;

    t3 = ((x13!=(x14|x15))<=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = UINT32_MAX;
	uint8_t x18 = UINT8_MAX;
	int64_t x19 = INT64_MIN;
	volatile int32_t t4 = -339;

    t4 = ((x17!=(x18|x19))<=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = UINT64_MAX;
	uint32_t x22 = UINT32_MAX;
	uint32_t x23 = 5801U;
	volatile int32_t t5 = 489;

    t5 = ((x21!=(x22|x23))<=x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = UINT64_MAX;
	int16_t x26 = INT16_MIN;
	int32_t x27 = -1;
	int32_t x28 = -77484;
	int32_t t6 = -6;

    t6 = ((x25!=(x26|x27))<=x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x29 = INT32_MIN;
	volatile int8_t x30 = INT8_MIN;
	int16_t x31 = -1;
	uint8_t x32 = 76U;
	static volatile int32_t t7 = 238;

    t7 = ((x29!=(x30|x31))<=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x35 = 278120711529LLU;
	static int64_t x36 = 270519792884233LL;
	static volatile int32_t t8 = -62079859;

    t8 = ((x33!=(x34|x35))<=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x37 = INT64_MIN;
	uint16_t x38 = 3401U;
	int16_t x39 = -16;
	int64_t x40 = INT64_MAX;

    t9 = ((x37!=(x38|x39))<=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = 831732592508911410LL;
	uint16_t x43 = UINT16_MAX;
	int64_t x44 = -4993932355558LL;
	static volatile int32_t t10 = 17581293;

    t10 = ((x41!=(x42|x43))<=x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x46 = INT8_MIN;
	int32_t x47 = INT32_MAX;

    t11 = ((x45!=(x46|x47))<=x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x50 = 230731LLU;
	uint8_t x51 = 0U;
	uint64_t x52 = UINT64_MAX;
	int32_t t12 = -2069779;

    t12 = ((x49!=(x50|x51))<=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 12684U;
	volatile int8_t x54 = INT8_MAX;
	volatile int64_t x55 = -1LL;
	static uint8_t x56 = 22U;
	volatile int32_t t13 = -688822980;

    t13 = ((x53!=(x54|x55))<=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x58 = 31U;
	uint16_t x59 = 12257U;
	volatile int32_t t14 = -469938;

    t14 = ((x57!=(x58|x59))<=x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MAX;
	uint64_t x62 = 820LLU;
	int8_t x63 = INT8_MAX;
	volatile uint64_t x64 = 927873204645LLU;
	volatile int32_t t15 = -49335;

    t15 = ((x61!=(x62|x63))<=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MIN;
	volatile int32_t x66 = INT32_MIN;
	uint16_t x67 = 184U;
	static uint32_t x68 = 121955U;

    t16 = ((x65!=(x66|x67))<=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = -1;
	static int64_t x70 = INT64_MIN;
	int32_t x71 = INT32_MIN;
	volatile int8_t x72 = INT8_MIN;
	volatile int32_t t17 = -37460;

    t17 = ((x69!=(x70|x71))<=x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = 16288;
	static int32_t x74 = INT32_MAX;
	volatile int32_t x75 = -1;
	volatile int64_t x76 = INT64_MIN;
	static int32_t t18 = -282;

    t18 = ((x73!=(x74|x75))<=x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = -1LL;
	int32_t x79 = INT32_MIN;
	volatile int64_t x80 = INT64_MIN;
	int32_t t19 = 18920;

    t19 = ((x77!=(x78|x79))<=x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x82 = INT64_MAX;
	static uint64_t x83 = UINT64_MAX;
	int32_t x84 = INT32_MIN;
	static int32_t t20 = -1;

    t20 = ((x81!=(x82|x83))<=x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = 23136357U;
	uint64_t x86 = 973132617420321757LLU;
	uint64_t x88 = UINT64_MAX;

    t21 = ((x85!=(x86|x87))<=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = -10926743;
	int16_t x90 = INT16_MIN;
	static int64_t x92 = -1LL;
	volatile int32_t t22 = 3844;

    t22 = ((x89!=(x90|x91))<=x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x94 = 1U;
	int8_t x95 = 10;
	uint16_t x96 = 79U;
	volatile int32_t t23 = 30;

    t23 = ((x93!=(x94|x95))<=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint8_t x97 = 99U;
	int32_t x98 = INT32_MIN;
	int32_t x99 = INT32_MIN;
	int16_t x100 = INT16_MIN;

    t24 = ((x97!=(x98|x99))<=x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x102 = -1;
	int64_t x103 = INT64_MAX;
	int32_t t25 = -10;

    t25 = ((x101!=(x102|x103))<=x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = -55225;
	volatile int8_t x106 = INT8_MIN;
	static int32_t x107 = INT32_MAX;
	int32_t x108 = INT32_MIN;

    t26 = ((x105!=(x106|x107))<=x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = -1;
	volatile uint32_t x112 = UINT32_MAX;
	volatile int32_t t27 = 11;

    t27 = ((x109!=(x110|x111))<=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x113 = UINT64_MAX;
	uint8_t x115 = 32U;
	int16_t x116 = 5036;

    t28 = ((x113!=(x114|x115))<=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x119 = INT8_MAX;
	int64_t x120 = INT64_MAX;
	int32_t t29 = -7;

    t29 = ((x117!=(x118|x119))<=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x121 = INT16_MIN;
	int16_t x122 = -1;
	volatile uint32_t x123 = 120834384U;
	int16_t x124 = INT16_MIN;
	int32_t t30 = 110;

    t30 = ((x121!=(x122|x123))<=x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MIN;
	uint64_t x126 = UINT64_MAX;
	static int8_t x127 = INT8_MIN;
	static int16_t x128 = INT16_MIN;
	int32_t t31 = 15;

    t31 = ((x125!=(x126|x127))<=x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint64_t x129 = UINT64_MAX;
	static int32_t x130 = 0;
	volatile int8_t x131 = 0;
	volatile int32_t t32 = 91805946;

    t32 = ((x129!=(x130|x131))<=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x133 = 92U;
	int16_t x134 = 8919;
	int16_t x135 = INT16_MIN;
	int16_t x136 = -1;
	int32_t t33 = 12;

    t33 = ((x133!=(x134|x135))<=x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x137 = UINT32_MAX;
	volatile int16_t x140 = INT16_MAX;
	static volatile int32_t t34 = -18771;

    t34 = ((x137!=(x138|x139))<=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x141 = 132U;
	static int16_t x142 = 34;
	volatile int32_t x143 = -272;
	int8_t x144 = -1;
	int32_t t35 = 0;

    t35 = ((x141!=(x142|x143))<=x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x146 = 9685250U;
	int64_t x147 = INT64_MIN;

    t36 = ((x145!=(x146|x147))<=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = -1;
	static int8_t x150 = INT8_MIN;
	static int64_t x151 = -17783228LL;
	int32_t x152 = -1678;
	int32_t t37 = 6209;

    t37 = ((x149!=(x150|x151))<=x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x153 = 120U;
	int32_t x154 = INT32_MIN;
	uint8_t x155 = 2U;
	uint16_t x156 = 2298U;

    t38 = ((x153!=(x154|x155))<=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = 553071;
	int16_t x158 = -12;
	int32_t x159 = INT32_MAX;
	volatile int32_t t39 = -7505563;

    t39 = ((x157!=(x158|x159))<=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = INT16_MIN;
	uint8_t x162 = 0U;
	int64_t x163 = 394490LL;
	int32_t t40 = -1775;

    t40 = ((x161!=(x162|x163))<=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint16_t x165 = UINT16_MAX;
	volatile uint32_t x166 = UINT32_MAX;
	uint8_t x167 = 17U;
	int16_t x168 = 0;
	int32_t t41 = 7;

    t41 = ((x165!=(x166|x167))<=x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = -113810LL;
	int32_t x170 = INT32_MIN;
	int8_t x171 = -3;
	static int16_t x172 = INT16_MAX;
	volatile int32_t t42 = -329653;

    t42 = ((x169!=(x170|x171))<=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = INT16_MAX;
	volatile uint8_t x176 = 45U;
	static volatile int32_t t43 = -6;

    t43 = ((x173!=(x174|x175))<=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int16_t x178 = -3;
	static int8_t x179 = -1;
	volatile int32_t t44 = 1;

    t44 = ((x177!=(x178|x179))<=x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x182 = -1;
	int16_t x183 = -1;
	volatile int16_t x184 = INT16_MIN;
	int32_t t45 = -4226910;

    t45 = ((x181!=(x182|x183))<=x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = INT32_MIN;
	int8_t x186 = -3;
	int8_t x187 = -1;
	static int16_t x188 = -1;

    t46 = ((x185!=(x186|x187))<=x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x189 = -1LL;
	int64_t x190 = INT64_MIN;
	volatile uint32_t x192 = UINT32_MAX;
	static volatile int32_t t47 = 102946523;

    t47 = ((x189!=(x190|x191))<=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x194 = INT32_MAX;
	int16_t x195 = -1;
	volatile int32_t x196 = INT32_MAX;
	volatile int32_t t48 = -1;

    t48 = ((x193!=(x194|x195))<=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x197 = INT16_MIN;
	int8_t x198 = 0;
	uint32_t x199 = 113003U;
	static int8_t x200 = INT8_MIN;
	int32_t t49 = -92767335;

    t49 = ((x197!=(x198|x199))<=x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = 4;
	uint16_t x202 = UINT16_MAX;
	static int64_t x203 = INT64_MIN;
	volatile int32_t t50 = -6594;

    t50 = ((x201!=(x202|x203))<=x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x205 = 38U;
	volatile int8_t x206 = INT8_MIN;
	static volatile int8_t x207 = INT8_MIN;
	int8_t x208 = -1;
	int32_t t51 = -391;

    t51 = ((x205!=(x206|x207))<=x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = -2385;
	int16_t x210 = INT16_MAX;
	int64_t x211 = INT64_MAX;
	volatile uint32_t x212 = 799046498U;

    t52 = ((x209!=(x210|x211))<=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MIN;
	uint16_t x214 = 20846U;
	int8_t x216 = 28;
	static volatile int32_t t53 = 0;

    t53 = ((x213!=(x214|x215))<=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = -1LL;
	uint16_t x218 = 27422U;
	int32_t x219 = INT32_MIN;
	int16_t x220 = -14;
	static volatile int32_t t54 = -16350;

    t54 = ((x217!=(x218|x219))<=x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = -1;
	static volatile int64_t x222 = 64330976968027746LL;
	static int8_t x223 = 1;
	static volatile int64_t x224 = INT64_MAX;
	volatile int32_t t55 = -82;

    t55 = ((x221!=(x222|x223))<=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x225 = 3954LLU;
	int64_t x226 = INT64_MIN;
	uint16_t x228 = 9U;
	volatile int32_t t56 = -473;

    t56 = ((x225!=(x226|x227))<=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x229 = INT16_MIN;
	static uint16_t x230 = 25U;
	int64_t x232 = -1LL;
	int32_t t57 = 856;

    t57 = ((x229!=(x230|x231))<=x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x233 = INT64_MIN;
	int16_t x234 = -1;
	volatile int32_t x235 = 18677363;
	static volatile int64_t x236 = INT64_MIN;

    t58 = ((x233!=(x234|x235))<=x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int64_t x237 = -17586666921172734LL;
	volatile int16_t x239 = INT16_MAX;
	uint64_t x240 = 33831651527965LLU;
	int32_t t59 = 15;

    t59 = ((x237!=(x238|x239))<=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = -63;
	uint8_t x242 = 108U;
	int32_t x244 = INT32_MAX;
	volatile int32_t t60 = 1908;

    t60 = ((x241!=(x242|x243))<=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = -9;
	volatile uint64_t x246 = 14362083LLU;
	int8_t x248 = INT8_MIN;
	volatile int32_t t61 = 303563558;

    t61 = ((x245!=(x246|x247))<=x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x249 = -1;
	volatile uint8_t x250 = UINT8_MAX;
	volatile int64_t x251 = INT64_MAX;
	static volatile int8_t x252 = 40;

    t62 = ((x249!=(x250|x251))<=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x253 = INT32_MIN;
	uint8_t x255 = UINT8_MAX;
	uint16_t x256 = UINT16_MAX;

    t63 = ((x253!=(x254|x255))<=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = INT16_MIN;
	static uint32_t x258 = 409904U;
	static int16_t x259 = -1;
	int32_t x260 = -1;
	volatile int32_t t64 = -8771930;

    t64 = ((x257!=(x258|x259))<=x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = -2;
	volatile int64_t x262 = INT64_MAX;
	int8_t x263 = -1;
	volatile uint64_t x264 = 656255LLU;

    t65 = ((x261!=(x262|x263))<=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x265 = INT32_MIN;
	int32_t x267 = -30523;
	int32_t x268 = INT32_MIN;
	static volatile int32_t t66 = 3;

    t66 = ((x265!=(x266|x267))<=x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = 30278595LL;
	uint32_t x270 = 0U;
	static uint64_t x271 = 59377LLU;
	static uint32_t x272 = UINT32_MAX;

    t67 = ((x269!=(x270|x271))<=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = INT32_MIN;
	int16_t x275 = INT16_MAX;
	volatile uint64_t x276 = UINT64_MAX;

    t68 = ((x273!=(x274|x275))<=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = 50006435331LL;
	volatile int64_t x278 = -871522644LL;
	int32_t x280 = INT32_MIN;
	int32_t t69 = 231993994;

    t69 = ((x277!=(x278|x279))<=x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = INT32_MIN;
	uint8_t x283 = 54U;
	static volatile int32_t t70 = 4714723;

    t70 = ((x281!=(x282|x283))<=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = -2;
	int32_t x287 = INT32_MIN;
	int64_t x288 = -695678LL;
	int32_t t71 = -1;

    t71 = ((x285!=(x286|x287))<=x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x290 = -567697160LL;
	static uint8_t x291 = UINT8_MAX;
	int8_t x292 = INT8_MIN;
	int32_t t72 = 0;

    t72 = ((x289!=(x290|x291))<=x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = 26320790;
	volatile int8_t x294 = 3;
	int64_t x295 = -1LL;
	static volatile uint64_t x296 = UINT64_MAX;
	int32_t t73 = 10;

    t73 = ((x293!=(x294|x295))<=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x298 = INT16_MIN;
	uint64_t x299 = UINT64_MAX;
	int64_t x300 = INT64_MIN;
	static int32_t t74 = -235006243;

    t74 = ((x297!=(x298|x299))<=x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x301 = INT64_MIN;
	int64_t x302 = INT64_MIN;
	uint8_t x303 = UINT8_MAX;
	int32_t x304 = 696178;
	volatile int32_t t75 = -50076;

    t75 = ((x301!=(x302|x303))<=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x305 = 498U;
	static int8_t x306 = INT8_MAX;
	int64_t x307 = -2255659335592799966LL;
	volatile int64_t x308 = INT64_MIN;
	int32_t t76 = 22;

    t76 = ((x305!=(x306|x307))<=x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x309 = INT32_MIN;
	volatile int16_t x310 = INT16_MAX;
	uint16_t x311 = 1U;
	uint16_t x312 = 642U;
	int32_t t77 = 15;

    t77 = ((x309!=(x310|x311))<=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int8_t x313 = INT8_MIN;
	int16_t x314 = -6818;
	static int8_t x315 = INT8_MIN;
	int32_t x316 = INT32_MIN;

    t78 = ((x313!=(x314|x315))<=x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = -27947682;
	volatile int64_t x318 = -6800533776950LL;
	int8_t x319 = INT8_MIN;
	int32_t x320 = -51;
	static int32_t t79 = 7;

    t79 = ((x317!=(x318|x319))<=x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x321 = 3U;
	uint16_t x322 = UINT16_MAX;
	static uint64_t x323 = 859362584323117LLU;
	int16_t x324 = -1;
	int32_t t80 = 4543;

    t80 = ((x321!=(x322|x323))<=x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x325 = INT8_MIN;
	int32_t x326 = INT32_MAX;
	volatile int8_t x327 = INT8_MIN;
	volatile uint16_t x328 = 125U;
	static int32_t t81 = -346826836;

    t81 = ((x325!=(x326|x327))<=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x329 = 3126665785521263LL;
	int64_t x332 = 8134957956006LL;
	int32_t t82 = 16352;

    t82 = ((x329!=(x330|x331))<=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint32_t x333 = UINT32_MAX;
	static volatile uint32_t x334 = UINT32_MAX;
	uint32_t x335 = 4646U;
	static int16_t x336 = INT16_MAX;

    t83 = ((x333!=(x334|x335))<=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x337 = 5U;
	uint64_t x338 = 3310480261469444582LLU;
	static volatile int64_t x339 = 33376659639LL;
	uint32_t x340 = 1U;
	volatile int32_t t84 = -9500058;

    t84 = ((x337!=(x338|x339))<=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x341 = INT8_MIN;
	int8_t x342 = -17;
	int64_t x343 = 1392149512078LL;
	volatile int32_t t85 = -1763701;

    t85 = ((x341!=(x342|x343))<=x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x345 = 2698294736397825147LLU;
	static uint16_t x347 = 20U;
	static int64_t x348 = INT64_MAX;
	int32_t t86 = -718751536;

    t86 = ((x345!=(x346|x347))<=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x350 = 15U;
	volatile int8_t x351 = -1;
	static int8_t x352 = -1;
	volatile int32_t t87 = 2078;

    t87 = ((x349!=(x350|x351))<=x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = INT32_MIN;
	int8_t x354 = INT8_MIN;
	int8_t x355 = -1;
	int64_t x356 = INT64_MIN;
	volatile int32_t t88 = -87024369;

    t88 = ((x353!=(x354|x355))<=x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x357 = 0U;
	volatile int32_t x358 = -61473751;
	int8_t x359 = INT8_MIN;
	int64_t x360 = INT64_MIN;
	static int32_t t89 = 3961541;

    t89 = ((x357!=(x358|x359))<=x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint8_t x361 = 3U;
	int32_t x362 = -1;
	uint32_t x364 = 3287577U;
	int32_t t90 = 163864;

    t90 = ((x361!=(x362|x363))<=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x366 = INT32_MAX;
	static uint64_t x367 = 265LLU;
	uint8_t x368 = 26U;
	int32_t t91 = -33352532;

    t91 = ((x365!=(x366|x367))<=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint32_t x369 = 26486U;
	int16_t x370 = INT16_MAX;
	int64_t x371 = INT64_MAX;
	int8_t x372 = INT8_MIN;
	int32_t t92 = 8280029;

    t92 = ((x369!=(x370|x371))<=x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x373 = UINT32_MAX;
	int16_t x374 = -1;
	volatile int32_t x376 = INT32_MAX;

    t93 = ((x373!=(x374|x375))<=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MIN;
	int32_t x378 = -1;
	int64_t x379 = INT64_MAX;
	static int32_t t94 = -2457534;

    t94 = ((x377!=(x378|x379))<=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x382 = -549;
	uint16_t x383 = 226U;

    t95 = ((x381!=(x382|x383))<=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = -40973;
	int8_t x386 = -1;
	uint32_t x387 = 2U;
	volatile uint8_t x388 = 0U;

    t96 = ((x385!=(x386|x387))<=x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = INT16_MIN;
	uint64_t x390 = UINT64_MAX;
	int32_t x391 = -39043;
	static int64_t x392 = 2818LL;
	volatile int32_t t97 = -4544;

    t97 = ((x389!=(x390|x391))<=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x393 = UINT8_MAX;
	uint32_t x394 = UINT32_MAX;
	static int8_t x395 = 28;
	int8_t x396 = -1;
	int32_t t98 = -90754494;

    t98 = ((x393!=(x394|x395))<=x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x400 = -1320LL;
	volatile int32_t t99 = -56558;

    t99 = ((x397!=(x398|x399))<=x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = INT8_MAX;
	uint8_t x402 = 5U;
	static int64_t x404 = 3LL;
	static int32_t t100 = -25;

    t100 = ((x401!=(x402|x403))<=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = INT64_MAX;
	uint64_t x406 = UINT64_MAX;
	int64_t x407 = INT64_MAX;
	int64_t x408 = -1LL;
	volatile int32_t t101 = 1945543;

    t101 = ((x405!=(x406|x407))<=x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = -327;
	static int16_t x411 = 1569;
	volatile int32_t t102 = -2;

    t102 = ((x409!=(x410|x411))<=x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x413 = 15827U;
	int8_t x416 = -1;
	int32_t t103 = 44;

    t103 = ((x413!=(x414|x415))<=x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = INT16_MIN;
	uint64_t x418 = 64152894928322235LLU;
	uint32_t x420 = 148634628U;
	int32_t t104 = -8178;

    t104 = ((x417!=(x418|x419))<=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x422 = -509588;
	int16_t x424 = 503;
	int32_t t105 = 118385570;

    t105 = ((x421!=(x422|x423))<=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x426 = INT64_MIN;
	int32_t x427 = 1;
	int32_t t106 = -1;

    t106 = ((x425!=(x426|x427))<=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x432 = 15688252U;
	volatile int32_t t107 = 473286;

    t107 = ((x429!=(x430|x431))<=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x433 = 6398082080832423813LLU;
	uint16_t x435 = 5141U;
	int32_t x436 = -1;

    t108 = ((x433!=(x434|x435))<=x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x438 = UINT64_MAX;
	uint16_t x439 = 0U;
	volatile int16_t x440 = 2588;
	static int32_t t109 = -12172;

    t109 = ((x437!=(x438|x439))<=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x441 = 36U;
	int16_t x442 = INT16_MAX;
	int64_t x443 = -550787370546LL;
	static volatile uint32_t x444 = 5475428U;
	int32_t t110 = 15775;

    t110 = ((x441!=(x442|x443))<=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x445 = 7U;
	volatile int64_t x446 = -7LL;
	uint64_t x447 = UINT64_MAX;
	static int64_t x448 = INT64_MIN;
	static volatile int32_t t111 = 142626;

    t111 = ((x445!=(x446|x447))<=x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = -1;
	static uint32_t x450 = 10779U;
	int16_t x451 = -1;
	uint32_t x452 = 109438U;
	volatile int32_t t112 = 625;

    t112 = ((x449!=(x450|x451))<=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x454 = INT8_MIN;
	uint16_t x455 = 154U;
	uint16_t x456 = 66U;
	int32_t t113 = 3;

    t113 = ((x453!=(x454|x455))<=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x457 = 28;
	int64_t x458 = INT64_MIN;
	int16_t x459 = INT16_MIN;
	static volatile int8_t x460 = 0;
	int32_t t114 = -6;

    t114 = ((x457!=(x458|x459))<=x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x461 = 2067348281311LLU;
	int64_t x462 = 1LL;
	static uint32_t x463 = 1U;
	int8_t x464 = -1;
	int32_t t115 = 9961218;

    t115 = ((x461!=(x462|x463))<=x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x465 = 2U;
	int16_t x466 = -1;
	int8_t x467 = 0;
	int64_t x468 = INT64_MIN;
	int32_t t116 = 232709905;

    t116 = ((x465!=(x466|x467))<=x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = INT8_MAX;
	volatile int64_t x470 = -1LL;
	int64_t x471 = -831557377LL;
	volatile int32_t t117 = -310593;

    t117 = ((x469!=(x470|x471))<=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x474 = 5140U;
	static volatile int16_t x476 = INT16_MIN;
	static volatile int32_t t118 = -16300015;

    t118 = ((x473!=(x474|x475))<=x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x478 = INT64_MIN;
	int64_t x480 = -12973805569LL;
	static int32_t t119 = 1563;

    t119 = ((x477!=(x478|x479))<=x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = 6;
	uint16_t x482 = 3528U;
	uint8_t x484 = UINT8_MAX;
	volatile int32_t t120 = 9007997;

    t120 = ((x481!=(x482|x483))<=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint8_t x485 = 29U;
	int8_t x486 = INT8_MIN;
	int8_t x488 = INT8_MAX;
	volatile int32_t t121 = -56;

    t121 = ((x485!=(x486|x487))<=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x489 = INT8_MIN;
	uint64_t x490 = 312373788611332LLU;
	volatile int16_t x491 = -7;
	static int32_t x492 = 138;
	static int32_t t122 = 26;

    t122 = ((x489!=(x490|x491))<=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x493 = -989;
	int16_t x495 = 637;
	int32_t t123 = -182557;

    t123 = ((x493!=(x494|x495))<=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x498 = INT16_MIN;
	volatile int16_t x500 = INT16_MIN;

    t124 = ((x497!=(x498|x499))<=x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = -65;
	uint8_t x503 = 65U;
	volatile int32_t t125 = 4257118;

    t125 = ((x501!=(x502|x503))<=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = 413668;
	int32_t x506 = -196483;
	int32_t t126 = 278;

    t126 = ((x505!=(x506|x507))<=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x509 = 15U;
	volatile int8_t x510 = -2;
	static uint16_t x512 = 136U;
	volatile int32_t t127 = 117627434;

    t127 = ((x509!=(x510|x511))<=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x515 = INT64_MAX;
	int64_t x516 = 485375680065957LL;
	static int32_t t128 = -42;

    t128 = ((x513!=(x514|x515))<=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x517 = -1;
	int64_t x518 = -43394971666994LL;
	int16_t x519 = 4;
	static int16_t x520 = INT16_MIN;
	static volatile int32_t t129 = -435;

    t129 = ((x517!=(x518|x519))<=x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x521 = 80U;
	int32_t x522 = -1;
	uint64_t x523 = 267137811LLU;
	volatile int32_t t130 = 44497;

    t130 = ((x521!=(x522|x523))<=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x525 = 288;
	int16_t x527 = 7;
	static uint64_t x528 = 362LLU;
	int32_t t131 = -85143689;

    t131 = ((x525!=(x526|x527))<=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = -1;
	volatile int32_t t132 = -15268791;

    t132 = ((x529!=(x530|x531))<=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x534 = 3856U;
	int8_t x535 = 1;
	static int8_t x536 = 1;
	volatile int32_t t133 = -54229;

    t133 = ((x533!=(x534|x535))<=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x537 = 12839852267LLU;
	volatile int64_t x539 = INT64_MIN;
	uint64_t x540 = 5609303LLU;
	volatile int32_t t134 = -2;

    t134 = ((x537!=(x538|x539))<=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int16_t x541 = INT16_MAX;
	static volatile uint8_t x542 = UINT8_MAX;
	uint32_t x544 = 100198924U;

    t135 = ((x541!=(x542|x543))<=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = INT8_MAX;
	static uint32_t x547 = 1824575516U;
	int32_t x548 = -164349320;
	static volatile int32_t t136 = -28553;

    t136 = ((x545!=(x546|x547))<=x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = INT64_MAX;
	static uint64_t x550 = 54592747911109LLU;
	int32_t x551 = INT32_MAX;
	uint64_t x552 = 53639655878722LLU;
	int32_t t137 = -51268281;

    t137 = ((x549!=(x550|x551))<=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x553 = INT64_MIN;
	int8_t x554 = -1;
	int8_t x555 = INT8_MAX;
	static uint32_t x556 = 3U;
	volatile int32_t t138 = -306203978;

    t138 = ((x553!=(x554|x555))<=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = INT32_MAX;
	uint64_t x558 = 5451255747LLU;
	static uint16_t x559 = UINT16_MAX;
	uint64_t x560 = 29LLU;
	volatile int32_t t139 = -957259179;

    t139 = ((x557!=(x558|x559))<=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = INT64_MAX;
	int16_t x564 = INT16_MIN;
	volatile int32_t t140 = 16;

    t140 = ((x561!=(x562|x563))<=x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x565 = UINT16_MAX;
	int8_t x566 = INT8_MIN;
	uint64_t x567 = UINT64_MAX;
	volatile int8_t x568 = INT8_MIN;
	static int32_t t141 = 10177;

    t141 = ((x565!=(x566|x567))<=x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x569 = INT16_MAX;
	uint16_t x570 = UINT16_MAX;
	int64_t x571 = INT64_MAX;
	uint64_t x572 = 272843268948430LLU;
	int32_t t142 = -278559762;

    t142 = ((x569!=(x570|x571))<=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x573 = INT64_MIN;
	uint8_t x574 = 0U;
	int32_t x575 = 2032;
	int32_t x576 = INT32_MIN;
	int32_t t143 = 1;

    t143 = ((x573!=(x574|x575))<=x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x577 = 4346284747418517LL;
	uint8_t x579 = 42U;
	uint8_t x580 = UINT8_MAX;
	static int32_t t144 = 7;

    t144 = ((x577!=(x578|x579))<=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x582 = 49U;
	int8_t x583 = INT8_MIN;
	int64_t x584 = 14LL;
	int32_t t145 = -6291890;

    t145 = ((x581!=(x582|x583))<=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = INT16_MAX;
	uint64_t x586 = UINT64_MAX;
	int16_t x587 = -1;
	int32_t x588 = INT32_MIN;
	volatile int32_t t146 = -5771;

    t146 = ((x585!=(x586|x587))<=x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x590 = -1;
	uint64_t x591 = UINT64_MAX;
	int64_t x592 = -1LL;
	int32_t t147 = 131427307;

    t147 = ((x589!=(x590|x591))<=x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = 7403;
	volatile uint64_t x595 = 53547079349206LLU;
	uint64_t x596 = 3865181612656LLU;
	static int32_t t148 = -3;

    t148 = ((x593!=(x594|x595))<=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = -53;
	static int64_t x598 = -1LL;
	int8_t x599 = 3;
	int32_t t149 = -28965;

    t149 = ((x597!=(x598|x599))<=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x601 = 72U;
	int64_t x602 = INT64_MIN;
	uint8_t x603 = UINT8_MAX;
	static uint8_t x604 = UINT8_MAX;
	int32_t t150 = -26488943;

    t150 = ((x601!=(x602|x603))<=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = -1;
	uint8_t x606 = 42U;
	volatile uint32_t x607 = 33U;
	uint32_t x608 = 3448800U;
	static int32_t t151 = 1;

    t151 = ((x605!=(x606|x607))<=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint16_t x609 = 1U;
	uint16_t x610 = UINT16_MAX;
	int64_t x612 = INT64_MIN;

    t152 = ((x609!=(x610|x611))<=x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint8_t x613 = UINT8_MAX;
	int16_t x615 = INT16_MAX;
	uint32_t x616 = 11U;
	int32_t t153 = -87;

    t153 = ((x613!=(x614|x615))<=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x617 = INT64_MAX;
	uint16_t x618 = UINT16_MAX;
	volatile int64_t x620 = INT64_MAX;
	int32_t t154 = -3;

    t154 = ((x617!=(x618|x619))<=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint16_t x621 = 1U;
	int16_t x622 = -84;
	int64_t x623 = INT64_MAX;
	uint16_t x624 = UINT16_MAX;
	int32_t t155 = -128501;

    t155 = ((x621!=(x622|x623))<=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x626 = INT8_MIN;
	int8_t x628 = INT8_MIN;
	volatile int32_t t156 = 87;

    t156 = ((x625!=(x626|x627))<=x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x629 = 3U;
	uint32_t x630 = 11044528U;
	volatile int64_t x631 = 6252131LL;
	static volatile int8_t x632 = INT8_MAX;
	volatile int32_t t157 = 477513162;

    t157 = ((x629!=(x630|x631))<=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x633 = -880911384;
	static int16_t x634 = INT16_MIN;
	int16_t x635 = -57;
	uint8_t x636 = UINT8_MAX;

    t158 = ((x633!=(x634|x635))<=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int64_t x637 = 45LL;
	uint32_t x638 = UINT32_MAX;
	volatile uint8_t x639 = 120U;
	int32_t x640 = INT32_MAX;

    t159 = ((x637!=(x638|x639))<=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x641 = INT32_MAX;
	static int8_t x642 = 5;
	uint8_t x643 = 5U;

    t160 = ((x641!=(x642|x643))<=x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x646 = -1LL;
	int8_t x647 = INT8_MIN;
	int32_t t161 = 128439202;

    t161 = ((x645!=(x646|x647))<=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x651 = INT32_MAX;
	uint32_t x652 = 127478U;
	static int32_t t162 = 1562;

    t162 = ((x649!=(x650|x651))<=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = INT16_MAX;
	uint64_t x655 = 34LLU;
	int8_t x656 = 1;

    t163 = ((x653!=(x654|x655))<=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = -705;
	int64_t x658 = -40830495667648565LL;
	int16_t x659 = 234;
	static volatile int16_t x660 = 1082;

    t164 = ((x657!=(x658|x659))<=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x661 = INT32_MIN;
	int16_t x662 = -1;
	uint32_t x664 = UINT32_MAX;
	int32_t t165 = -163198;

    t165 = ((x661!=(x662|x663))<=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = 79567413;
	int32_t x667 = INT32_MIN;
	volatile int8_t x668 = -1;

    t166 = ((x665!=(x666|x667))<=x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int32_t x671 = -1;
	volatile int32_t x672 = INT32_MAX;
	int32_t t167 = -3;

    t167 = ((x669!=(x670|x671))<=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = 0;
	int8_t x675 = -16;
	int16_t x676 = -1;
	volatile int32_t t168 = 22;

    t168 = ((x673!=(x674|x675))<=x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x677 = 874LLU;
	volatile int64_t x679 = -1LL;
	static int16_t x680 = -1;
	volatile int32_t t169 = -860451;

    t169 = ((x677!=(x678|x679))<=x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x681 = INT64_MIN;
	int32_t t170 = 56083;

    t170 = ((x681!=(x682|x683))<=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = 13;
	int64_t x687 = INT64_MIN;
	static volatile int32_t t171 = -4;

    t171 = ((x685!=(x686|x687))<=x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x691 = -1;
	uint16_t x692 = 6596U;
	volatile int32_t t172 = 13137508;

    t172 = ((x689!=(x690|x691))<=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x693 = -107354LL;
	int32_t x694 = -518;
	int64_t x695 = -1LL;
	uint16_t x696 = 6652U;
	volatile int32_t t173 = 3;

    t173 = ((x693!=(x694|x695))<=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x697 = 15U;
	volatile int8_t x699 = INT8_MIN;
	int32_t x700 = INT32_MAX;
	int32_t t174 = -1410608;

    t174 = ((x697!=(x698|x699))<=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x701 = 11U;
	volatile int32_t x702 = INT32_MAX;
	int8_t x703 = INT8_MIN;
	uint64_t x704 = UINT64_MAX;

    t175 = ((x701!=(x702|x703))<=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x705 = 199949777;
	volatile int8_t x706 = -1;
	int16_t x707 = -4;
	static volatile uint32_t x708 = 112205U;

    t176 = ((x705!=(x706|x707))<=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x710 = UINT8_MAX;
	int16_t x711 = INT16_MAX;
	int16_t x712 = -31;
	int32_t t177 = 78441076;

    t177 = ((x709!=(x710|x711))<=x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = 0;
	volatile int32_t x714 = INT32_MIN;
	int8_t x715 = INT8_MAX;
	int64_t x716 = 258398282LL;
	static volatile int32_t t178 = 1913;

    t178 = ((x713!=(x714|x715))<=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x717 = 7U;
	int64_t x718 = INT64_MAX;
	int64_t x719 = -216766901521LL;
	int32_t t179 = -31369306;

    t179 = ((x717!=(x718|x719))<=x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = 3643;
	int16_t x722 = -6056;
	int16_t x723 = INT16_MIN;
	volatile int16_t x724 = INT16_MAX;
	static volatile int32_t t180 = 15503;

    t180 = ((x721!=(x722|x723))<=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x725 = 1424883U;
	static int32_t x726 = -1;
	volatile int64_t x727 = -228LL;
	int16_t x728 = INT16_MIN;
	int32_t t181 = -12;

    t181 = ((x725!=(x726|x727))<=x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x729 = 4U;
	int8_t x730 = INT8_MIN;
	static volatile int8_t x731 = 36;
	static int16_t x732 = INT16_MIN;
	int32_t t182 = 105301;

    t182 = ((x729!=(x730|x731))<=x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = -1;
	int8_t x735 = 9;
	static int64_t x736 = 89170158784936LL;
	int32_t t183 = -10;

    t183 = ((x733!=(x734|x735))<=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x737 = INT8_MAX;
	int8_t x738 = INT8_MIN;
	int32_t x739 = -1;
	uint16_t x740 = 163U;

    t184 = ((x737!=(x738|x739))<=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint16_t x741 = 2642U;
	static uint64_t x743 = 2LLU;
	volatile int32_t t185 = 2;

    t185 = ((x741!=(x742|x743))<=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = INT8_MIN;
	volatile int16_t x746 = INT16_MIN;
	static uint64_t x747 = 10178703350156668LLU;
	volatile uint32_t x748 = UINT32_MAX;
	static volatile int32_t t186 = 942719432;

    t186 = ((x745!=(x746|x747))<=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x750 = 1112U;
	static volatile int64_t x751 = -1LL;
	int8_t x752 = INT8_MAX;
	volatile int32_t t187 = 1440;

    t187 = ((x749!=(x750|x751))<=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x753 = INT32_MAX;
	int32_t x754 = -59703;
	int64_t x755 = INT64_MIN;
	int64_t x756 = 1907756LL;
	volatile int32_t t188 = 241;

    t188 = ((x753!=(x754|x755))<=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = INT32_MAX;
	static volatile int32_t x758 = -1;
	int64_t x759 = 77588739803LL;
	static uint8_t x760 = 11U;
	volatile int32_t t189 = -3753;

    t189 = ((x757!=(x758|x759))<=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x762 = 830U;
	int32_t x764 = 2;
	int32_t t190 = 29797311;

    t190 = ((x761!=(x762|x763))<=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x765 = UINT64_MAX;
	static int16_t x767 = INT16_MIN;
	uint8_t x768 = 0U;
	volatile int32_t t191 = -5315606;

    t191 = ((x765!=(x766|x767))<=x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x769 = 7337U;
	int8_t x770 = INT8_MAX;
	volatile int8_t x771 = -1;
	static int64_t x772 = INT64_MIN;
	volatile int32_t t192 = -257936;

    t192 = ((x769!=(x770|x771))<=x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x773 = 4978479;
	static volatile int16_t x774 = INT16_MIN;
	uint32_t x775 = 510722703U;
	static uint32_t x776 = 975341305U;
	static int32_t t193 = -54;

    t193 = ((x773!=(x774|x775))<=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = INT8_MIN;
	int32_t x779 = -1;
	int16_t x780 = -1794;
	int32_t t194 = 16362;

    t194 = ((x777!=(x778|x779))<=x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x781 = -2084LL;
	int8_t x782 = INT8_MIN;
	int64_t x783 = -1LL;
	uint16_t x784 = 904U;
	volatile int32_t t195 = 397305;

    t195 = ((x781!=(x782|x783))<=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x785 = INT32_MAX;
	static int32_t x786 = -15917963;
	uint64_t x787 = 12LLU;
	int64_t x788 = -129928LL;
	int32_t t196 = 225;

    t196 = ((x785!=(x786|x787))<=x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x789 = 71975LL;
	int8_t x790 = INT8_MIN;
	int16_t x791 = INT16_MIN;
	static uint16_t x792 = 4U;
	volatile int32_t t197 = -29592;

    t197 = ((x789!=(x790|x791))<=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x794 = INT8_MAX;
	volatile uint16_t x795 = UINT16_MAX;
	int32_t t198 = -12219;

    t198 = ((x793!=(x794|x795))<=x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int8_t x798 = -1;
	uint32_t x799 = UINT32_MAX;
	volatile int32_t t199 = -34865851;

    t199 = ((x797!=(x798|x799))<=x800);

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

