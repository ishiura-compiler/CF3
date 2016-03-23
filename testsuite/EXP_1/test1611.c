
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

int8_t x2 = -1;
int8_t x3 = -6;
int8_t x12 = INT8_MIN;
int64_t x28 = INT64_MIN;
int16_t x32 = 95;
volatile int32_t t7 = 18;
uint16_t x38 = 3U;
uint16_t x45 = UINT16_MAX;
uint32_t x46 = 17160725U;
volatile int64_t x53 = INT64_MIN;
uint32_t x56 = UINT32_MAX;
volatile int64_t t15 = -2302000044LL;
int8_t x71 = -1;
volatile uint32_t x74 = 442U;
static int8_t x75 = INT8_MIN;
int64_t x82 = -1LL;
int32_t x98 = -1;
uint32_t x100 = 3717332U;
uint8_t x123 = UINT8_MAX;
static int16_t x133 = -773;
volatile uint32_t t32 = 12680315U;
static int8_t x143 = INT8_MAX;
uint64_t x146 = 7800LLU;
int64_t x149 = -79731108LL;
uint16_t x156 = UINT16_MAX;
volatile int32_t t37 = 103493989;
int32_t x162 = -370914700;
volatile int8_t x166 = -1;
int16_t x167 = 1;
int32_t x170 = -1047759;
volatile int16_t x181 = -1;
int8_t x186 = -1;
volatile uint64_t x191 = 45207LLU;
volatile uint64_t t45 = 360LLU;
int32_t x195 = 55167;
int16_t x202 = INT16_MIN;
uint64_t x203 = 422LLU;
int32_t x214 = -177108;
int32_t x222 = 111509;
int64_t t53 = -415469599LL;
volatile int32_t x229 = INT32_MIN;
volatile int16_t x230 = INT16_MIN;
int64_t x233 = -1LL;
static uint8_t x238 = 1U;
static uint16_t x240 = UINT16_MAX;
int32_t t57 = 15399;
static int8_t x241 = INT8_MIN;
int64_t t58 = -1865243448445LL;
int8_t x248 = INT8_MIN;
uint16_t x250 = 124U;
volatile int8_t x254 = 1;
static volatile int8_t x255 = INT8_MAX;
int64_t x256 = -1LL;
uint32_t x257 = 1048257367U;
int16_t x259 = 51;
uint64_t x274 = 138616460LLU;
int8_t x276 = -1;
int8_t x283 = INT8_MIN;
static int32_t t68 = -20511;
static int8_t x288 = INT8_MAX;
int64_t x289 = -1LL;
volatile int64_t x292 = INT64_MAX;
volatile int32_t t72 = -405749;
volatile int32_t x301 = -3025;
int64_t x311 = INT64_MAX;
int16_t x334 = INT16_MIN;
static int16_t x338 = 20;
volatile uint32_t t81 = 1182U;
int32_t x342 = INT32_MIN;
int64_t x345 = INT64_MIN;
volatile uint8_t x351 = UINT8_MAX;
int64_t t88 = 46LL;
int8_t x373 = INT8_MAX;
int16_t x385 = INT16_MAX;
volatile int16_t x387 = INT16_MIN;
volatile int32_t t93 = -24;
uint32_t x391 = 57U;
static int16_t x409 = INT16_MIN;
int32_t x410 = -1;
uint8_t x415 = 24U;
static int64_t x419 = -1LL;
int8_t x433 = INT8_MIN;
int64_t t105 = INT64_MIN;
uint8_t x445 = 5U;
static volatile uint32_t x452 = 6782U;
uint8_t x460 = UINT8_MAX;
volatile int64_t x465 = INT64_MAX;
uint8_t x467 = UINT8_MAX;
int8_t x468 = INT8_MIN;
uint16_t x469 = 2315U;
uint8_t x471 = 23U;
volatile int8_t x474 = INT8_MIN;
volatile int64_t t114 = 381LL;
uint32_t x478 = UINT32_MAX;
int32_t t115 = 1808;
volatile int8_t x483 = -1;
int64_t x492 = INT64_MIN;
int8_t x493 = INT8_MIN;
int16_t x494 = INT16_MAX;
volatile uint16_t x498 = 199U;
uint8_t x501 = 57U;
uint32_t x506 = 25U;
volatile int16_t x508 = INT16_MAX;
int32_t x512 = -22908;
int16_t x524 = INT16_MAX;
int32_t t126 = 28157692;
int16_t x531 = INT16_MIN;
uint32_t x534 = UINT32_MAX;
static volatile int32_t x538 = 2996953;
int64_t x543 = INT64_MIN;
volatile uint64_t x547 = 1073LLU;
volatile uint64_t t132 = 25895594463809LLU;
static uint16_t x550 = 554U;
volatile int64_t x551 = 34495143242LL;
static volatile uint8_t x552 = 0U;
volatile int64_t x556 = -1LL;
int16_t x562 = 11854;
int8_t x565 = INT8_MAX;
static int64_t x567 = INT64_MIN;
volatile int16_t x576 = INT16_MIN;
uint32_t x578 = 1U;
static int16_t x581 = -1;
int32_t t140 = -58712060;
static uint32_t x586 = UINT32_MAX;
uint32_t x588 = 1203839U;
int64_t x589 = INT64_MIN;
int32_t x599 = -880;
uint8_t x601 = 5U;
uint16_t x602 = 215U;
int16_t x609 = INT16_MIN;
int16_t x616 = INT16_MIN;
volatile uint64_t t148 = 3894569LLU;
uint16_t x617 = 1619U;
static uint32_t x619 = 354149447U;
int64_t t150 = INT64_MIN;
int64_t x626 = 1089382005LL;
volatile uint8_t x627 = 3U;
int64_t t151 = INT64_MAX;
uint32_t x630 = 237313680U;
int32_t x645 = -7656981;
uint64_t x647 = 142633667708471042LLU;
int32_t x652 = -1;
int16_t x660 = -10131;
volatile int64_t x664 = -54LL;
volatile int32_t t161 = -252844786;
uint64_t x669 = 2667LLU;
volatile uint64_t t162 = 563822932416974326LLU;
volatile uint8_t x673 = 7U;
volatile int8_t x675 = INT8_MIN;
volatile int32_t t163 = -4;
uint32_t x686 = UINT32_MAX;
int16_t x687 = -1;
uint32_t x689 = 6U;
uint32_t x690 = 326032356U;
static int32_t t169 = 48859;
uint64_t x712 = UINT64_MAX;
uint64_t t172 = UINT64_MAX;
volatile int16_t x714 = 240;
static volatile int32_t t173 = 1;
int8_t x724 = INT8_MIN;
int64_t t175 = 11LL;
int8_t x726 = INT8_MAX;
int16_t x727 = -1;
static uint32_t x736 = UINT32_MAX;
uint32_t x738 = 155763452U;
uint8_t x739 = 112U;
int64_t x741 = 11042909501211LL;
static int16_t x745 = -499;
int32_t x756 = 13893;
static int8_t x761 = -1;
static int32_t t185 = 152228030;
int32_t x768 = INT32_MIN;
volatile uint8_t x769 = 0U;
int16_t x777 = -1;
int64_t x781 = INT64_MIN;
uint16_t x786 = UINT16_MAX;
volatile uint64_t x788 = 6183898247LLU;
volatile uint64_t x796 = 418129456126385LLU;
int64_t x799 = INT64_MIN;
uint8_t x808 = 9U;
int16_t x814 = 0;


void f0(void) {
    	static int64_t x1 = -4145666076295LL;
	int32_t x4 = -1;
	volatile int32_t t0 = -1033173;

    t0 = (((x1>x2)/x3)+x4);

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint32_t x5 = 567921884U;
	int64_t x6 = 453959434LL;
	int64_t x7 = INT64_MIN;
	volatile uint16_t x8 = UINT16_MAX;
	static volatile int64_t t1 = -5LL;

    t1 = (((x5>x6)/x7)+x8);

    if (t1 != 65535LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = -448;
	uint64_t x10 = UINT64_MAX;
	volatile int16_t x11 = INT16_MIN;
	int32_t t2 = 1;

    t2 = (((x9>x10)/x11)+x12);

    if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	volatile uint32_t x14 = 6379U;
	int32_t x15 = INT32_MIN;
	int16_t x16 = -105;
	int32_t t3 = 23596220;

    t3 = (((x13>x14)/x15)+x16);

    if (t3 != -105) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 1U;
	static int8_t x18 = INT8_MIN;
	volatile int16_t x19 = 3973;
	uint8_t x20 = UINT8_MAX;
	volatile int32_t t4 = 116467793;

    t4 = (((x17>x18)/x19)+x20);

    if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = 0;
	uint8_t x22 = 10U;
	int8_t x23 = INT8_MAX;
	int64_t x24 = INT64_MAX;
	volatile int64_t t5 = INT64_MAX;

    t5 = (((x21>x22)/x23)+x24);

    if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x25 = -1;
	uint8_t x26 = 111U;
	static uint64_t x27 = 234333LLU;
	static uint64_t t6 = 32161779LLU;

    t6 = (((x25>x26)/x27)+x28);

    if (t6 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int8_t x29 = 1;
	static volatile uint64_t x30 = UINT64_MAX;
	int16_t x31 = INT16_MAX;

    t7 = (((x29>x30)/x31)+x32);

    if (t7 != 95) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 16LLU;
	static uint8_t x34 = UINT8_MAX;
	static volatile int32_t x35 = -1;
	uint16_t x36 = 9U;
	static int32_t t8 = -139213128;

    t8 = (((x33>x34)/x35)+x36);

    if (t8 != 9) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x37 = INT32_MIN;
	volatile uint32_t x39 = UINT32_MAX;
	int16_t x40 = -1;
	volatile uint32_t t9 = UINT32_MAX;

    t9 = (((x37>x38)/x39)+x40);

    if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint8_t x41 = 97U;
	int64_t x42 = 2173809181308LL;
	uint32_t x43 = UINT32_MAX;
	uint32_t x44 = 430684U;
	volatile uint32_t t10 = 4384382U;

    t10 = (((x41>x42)/x43)+x44);

    if (t10 != 430684U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x47 = -2;
	uint16_t x48 = UINT16_MAX;
	volatile int32_t t11 = 65711003;

    t11 = (((x45>x46)/x47)+x48);

    if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x49 = 1818U;
	static volatile int8_t x50 = INT8_MIN;
	int64_t x51 = INT64_MIN;
	int64_t x52 = INT64_MAX;
	int64_t t12 = INT64_MAX;

    t12 = (((x49>x50)/x51)+x52);

    if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x54 = -8;
	static int8_t x55 = INT8_MIN;
	static uint32_t t13 = UINT32_MAX;

    t13 = (((x53>x54)/x55)+x56);

    if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x57 = 3U;
	int32_t x58 = -8563678;
	volatile int32_t x59 = INT32_MIN;
	int8_t x60 = 1;
	static int32_t t14 = 80607;

    t14 = (((x57>x58)/x59)+x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = 4036U;
	uint16_t x62 = 1747U;
	int64_t x63 = -1LL;
	static int16_t x64 = -27;

    t15 = (((x61>x62)/x63)+x64);

    if (t15 != -28LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = INT64_MIN;
	uint8_t x66 = 1U;
	uint64_t x67 = 8372121835833LLU;
	uint64_t x68 = 7535228774050LLU;
	volatile uint64_t t16 = 1571362301037LLU;

    t16 = (((x65>x66)/x67)+x68);

    if (t16 != 7535228774050LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x69 = UINT8_MAX;
	int64_t x70 = INT64_MAX;
	int8_t x72 = INT8_MAX;
	static volatile int32_t t17 = 109;

    t17 = (((x69>x70)/x71)+x72);

    if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = -1;
	int64_t x76 = -17082197LL;
	int64_t t18 = -244734465815973LL;

    t18 = (((x73>x74)/x75)+x76);

    if (t18 != -17082197LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x81 = INT64_MAX;
	uint64_t x83 = 88811790665LLU;
	int64_t x84 = INT64_MIN;
	uint64_t t19 = 58250675LLU;

    t19 = (((x81>x82)/x83)+x84);

    if (t19 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x85 = INT8_MAX;
	int16_t x86 = -1;
	int8_t x87 = INT8_MIN;
	static uint8_t x88 = 1U;
	volatile int32_t t20 = -202;

    t20 = (((x85>x86)/x87)+x88);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x89 = INT8_MIN;
	int64_t x90 = -1LL;
	uint16_t x91 = 357U;
	volatile int8_t x92 = -19;
	int32_t t21 = 1655774;

    t21 = (((x89>x90)/x91)+x92);

    if (t21 != -19) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x93 = 21;
	int8_t x94 = 28;
	volatile int16_t x95 = -1;
	volatile int8_t x96 = INT8_MIN;
	volatile int32_t t22 = 1729;

    t22 = (((x93>x94)/x95)+x96);

    if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x97 = INT16_MIN;
	static uint32_t x99 = 12387754U;
	volatile uint32_t t23 = 897U;

    t23 = (((x97>x98)/x99)+x100);

    if (t23 != 3717332U) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x105 = INT8_MAX;
	int16_t x106 = -1;
	static uint64_t x107 = 2LLU;
	uint16_t x108 = UINT16_MAX;
	volatile uint64_t t24 = 95LLU;

    t24 = (((x105>x106)/x107)+x108);

    if (t24 != 65535LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x109 = -894;
	int16_t x110 = INT16_MAX;
	volatile uint64_t x111 = 26207400458914LLU;
	int8_t x112 = INT8_MIN;
	static volatile uint64_t t25 = 318070880054858850LLU;

    t25 = (((x109>x110)/x111)+x112);

    if (t25 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x113 = 81153190LL;
	int8_t x114 = -1;
	int32_t x115 = -1;
	volatile int64_t x116 = -1LL;
	static int64_t t26 = -8566981563181LL;

    t26 = (((x113>x114)/x115)+x116);

    if (t26 != -2LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x117 = INT8_MAX;
	uint8_t x118 = 28U;
	int32_t x119 = INT32_MAX;
	int16_t x120 = INT16_MIN;
	static volatile int32_t t27 = 9814963;

    t27 = (((x117>x118)/x119)+x120);

    if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x121 = UINT8_MAX;
	int32_t x122 = -22903;
	int8_t x124 = -1;
	static volatile int32_t t28 = 23;

    t28 = (((x121>x122)/x123)+x124);

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x125 = 1;
	int8_t x126 = INT8_MIN;
	uint32_t x127 = 17943U;
	int16_t x128 = INT16_MIN;
	static volatile uint32_t t29 = 1U;

    t29 = (((x125>x126)/x127)+x128);

    if (t29 != 4294934528U) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint64_t x129 = 0LLU;
	int32_t x130 = 19908879;
	int8_t x131 = INT8_MAX;
	int16_t x132 = -1;
	volatile int32_t t30 = 2162213;

    t30 = (((x129>x130)/x131)+x132);

    if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x134 = -1;
	int16_t x135 = INT16_MAX;
	static uint16_t x136 = 5784U;
	int32_t t31 = 59767;

    t31 = (((x133>x134)/x135)+x136);

    if (t31 != 5784) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x137 = 1U;
	int16_t x138 = -1;
	volatile uint8_t x139 = UINT8_MAX;
	volatile uint32_t x140 = 0U;

    t32 = (((x137>x138)/x139)+x140);

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x141 = -1LL;
	volatile int16_t x142 = INT16_MIN;
	int8_t x144 = INT8_MIN;
	int32_t t33 = -642888;

    t33 = (((x141>x142)/x143)+x144);

    if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x145 = -1;
	volatile int32_t x147 = INT32_MAX;
	volatile int64_t x148 = -1LL;
	volatile int64_t t34 = 258730LL;

    t34 = (((x145>x146)/x147)+x148);

    if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x150 = 44872507U;
	int64_t x151 = INT64_MAX;
	uint8_t x152 = 21U;
	static volatile int64_t t35 = 20196116LL;

    t35 = (((x149>x150)/x151)+x152);

    if (t35 != 21LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint8_t x153 = 1U;
	int64_t x154 = -1LL;
	int32_t x155 = INT32_MIN;
	volatile int32_t t36 = 10121;

    t36 = (((x153>x154)/x155)+x156);

    if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x157 = INT8_MIN;
	static volatile uint32_t x158 = 0U;
	static int32_t x159 = -6737744;
	static int16_t x160 = -1;

    t37 = (((x157>x158)/x159)+x160);

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x161 = 6288;
	volatile int16_t x163 = INT16_MAX;
	static uint64_t x164 = 5LLU;
	uint64_t t38 = 48860LLU;

    t38 = (((x161>x162)/x163)+x164);

    if (t38 != 5LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x165 = 3U;
	static volatile int32_t x168 = -2;
	static volatile int32_t t39 = -444454;

    t39 = (((x165>x166)/x167)+x168);

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x169 = INT16_MIN;
	int16_t x171 = INT16_MIN;
	volatile int16_t x172 = -1;
	int32_t t40 = -172369786;

    t40 = (((x169>x170)/x171)+x172);

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x173 = -4;
	static uint16_t x174 = UINT16_MAX;
	int64_t x175 = -1LL;
	int8_t x176 = 7;
	int64_t t41 = -4637870986114LL;

    t41 = (((x173>x174)/x175)+x176);

    if (t41 != 7LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x177 = INT8_MIN;
	int16_t x178 = INT16_MIN;
	volatile uint64_t x179 = 28953LLU;
	int32_t x180 = -1;
	uint64_t t42 = UINT64_MAX;

    t42 = (((x177>x178)/x179)+x180);

    if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int32_t x182 = INT32_MIN;
	int8_t x183 = INT8_MAX;
	int64_t x184 = INT64_MIN;
	int64_t t43 = INT64_MIN;

    t43 = (((x181>x182)/x183)+x184);

    if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x185 = 187200706U;
	volatile int64_t x187 = -1LL;
	int32_t x188 = -2059968;
	static volatile int64_t t44 = -1241322LL;

    t44 = (((x185>x186)/x187)+x188);

    if (t44 != -2059968LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x189 = 1;
	uint64_t x190 = UINT64_MAX;
	int32_t x192 = INT32_MIN;

    t45 = (((x189>x190)/x191)+x192);

    if (t45 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x193 = UINT64_MAX;
	int32_t x194 = -1;
	int32_t x196 = -185608907;
	volatile int32_t t46 = -23;

    t46 = (((x193>x194)/x195)+x196);

    if (t46 != -185608907) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x197 = 6703U;
	int32_t x198 = INT32_MIN;
	static int16_t x199 = 2;
	static volatile int64_t x200 = INT64_MAX;
	volatile int64_t t47 = INT64_MAX;

    t47 = (((x197>x198)/x199)+x200);

    if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x201 = INT16_MIN;
	static int32_t x204 = 2510877;
	uint64_t t48 = 1490354343LLU;

    t48 = (((x201>x202)/x203)+x204);

    if (t48 != 2510877LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x205 = INT64_MIN;
	int16_t x206 = -1;
	uint32_t x207 = 1U;
	int32_t x208 = 93;
	volatile uint32_t t49 = 1U;

    t49 = (((x205>x206)/x207)+x208);

    if (t49 != 93U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x209 = 21U;
	static int16_t x210 = -1;
	uint64_t x211 = UINT64_MAX;
	int64_t x212 = INT64_MAX;
	static volatile uint64_t t50 = 10LLU;

    t50 = (((x209>x210)/x211)+x212);

    if (t50 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x213 = 6U;
	uint16_t x215 = 10U;
	int32_t x216 = INT32_MIN;
	int32_t t51 = INT32_MIN;

    t51 = (((x213>x214)/x215)+x216);

    if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x217 = INT32_MIN;
	static volatile uint32_t x218 = 29227330U;
	uint8_t x219 = 10U;
	int32_t x220 = -368556;
	static volatile int32_t t52 = 8635371;

    t52 = (((x217>x218)/x219)+x220);

    if (t52 != -368556) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x221 = -1LL;
	volatile int64_t x223 = -1LL;
	volatile uint16_t x224 = UINT16_MAX;

    t53 = (((x221>x222)/x223)+x224);

    if (t53 != 65535LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x225 = -30708208108802LL;
	static uint8_t x226 = 25U;
	uint8_t x227 = 4U;
	uint32_t x228 = UINT32_MAX;
	uint32_t t54 = UINT32_MAX;

    t54 = (((x225>x226)/x227)+x228);

    if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x231 = 591127LL;
	uint8_t x232 = 29U;
	int64_t t55 = -1LL;

    t55 = (((x229>x230)/x231)+x232);

    if (t55 != 29LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x234 = 3;
	int32_t x235 = INT32_MAX;
	volatile int32_t x236 = INT32_MIN;
	static int32_t t56 = INT32_MIN;

    t56 = (((x233>x234)/x235)+x236);

    if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x237 = -1;
	int8_t x239 = INT8_MIN;

    t57 = (((x237>x238)/x239)+x240);

    if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x242 = INT32_MIN;
	static int8_t x243 = INT8_MAX;
	int64_t x244 = 7LL;

    t58 = (((x241>x242)/x243)+x244);

    if (t58 != 7LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x245 = INT64_MIN;
	int32_t x246 = -12036606;
	static int16_t x247 = -1;
	volatile int32_t t59 = -2405;

    t59 = (((x245>x246)/x247)+x248);

    if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x249 = 1384U;
	static uint64_t x251 = 6413627LLU;
	volatile int32_t x252 = -30369727;
	volatile uint64_t t60 = 200389379013LLU;

    t60 = (((x249>x250)/x251)+x252);

    if (t60 != 18446744073679181889LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x253 = 3U;
	static volatile int64_t t61 = 2278125326LL;

    t61 = (((x253>x254)/x255)+x256);

    if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x258 = INT16_MAX;
	int64_t x260 = -1LL;
	int64_t t62 = -55247869904LL;

    t62 = (((x257>x258)/x259)+x260);

    if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x261 = INT16_MAX;
	uint64_t x262 = UINT64_MAX;
	uint8_t x263 = 8U;
	uint64_t x264 = 19210527904646LLU;
	uint64_t t63 = 786163LLU;

    t63 = (((x261>x262)/x263)+x264);

    if (t63 != 19210527904646LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x265 = UINT32_MAX;
	static int32_t x266 = 0;
	int32_t x267 = 1;
	int64_t x268 = 235187062800LL;
	static int64_t t64 = 9034723573646810LL;

    t64 = (((x265>x266)/x267)+x268);

    if (t64 != 235187062801LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x269 = INT16_MIN;
	volatile uint64_t x270 = 7LLU;
	int32_t x271 = INT32_MIN;
	int16_t x272 = INT16_MIN;
	volatile int32_t t65 = 902901;

    t65 = (((x269>x270)/x271)+x272);

    if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x273 = INT8_MIN;
	static int32_t x275 = 69;
	int32_t t66 = -2298978;

    t66 = (((x273>x274)/x275)+x276);

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x277 = -1;
	static volatile uint32_t x278 = UINT32_MAX;
	int8_t x279 = INT8_MIN;
	uint16_t x280 = 2U;
	int32_t t67 = -3;

    t67 = (((x277>x278)/x279)+x280);

    if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x281 = INT32_MIN;
	volatile uint8_t x282 = 112U;
	static volatile int32_t x284 = -1;

    t68 = (((x281>x282)/x283)+x284);

    if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x285 = 132LLU;
	int8_t x286 = INT8_MIN;
	int16_t x287 = -14;
	volatile int32_t t69 = -716217486;

    t69 = (((x285>x286)/x287)+x288);

    if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x290 = 1U;
	volatile int64_t x291 = INT64_MIN;
	int64_t t70 = INT64_MAX;

    t70 = (((x289>x290)/x291)+x292);

    if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x293 = INT64_MAX;
	uint16_t x294 = 0U;
	int32_t x295 = 57474639;
	int64_t x296 = -147039477LL;
	int64_t t71 = -29906163027363800LL;

    t71 = (((x293>x294)/x295)+x296);

    if (t71 != -147039477LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x297 = INT32_MIN;
	static int16_t x298 = 1;
	int16_t x299 = 19;
	int32_t x300 = -115;

    t72 = (((x297>x298)/x299)+x300);

    if (t72 != -115) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x302 = UINT8_MAX;
	uint16_t x303 = 6U;
	uint16_t x304 = 22739U;
	static int32_t t73 = -46;

    t73 = (((x301>x302)/x303)+x304);

    if (t73 != 22739) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint64_t x309 = 5572155935098227548LLU;
	uint8_t x310 = UINT8_MAX;
	static int8_t x312 = -1;
	volatile int64_t t74 = -1LL;

    t74 = (((x309>x310)/x311)+x312);

    if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x313 = 353320138104LLU;
	uint64_t x314 = UINT64_MAX;
	static volatile int64_t x315 = INT64_MAX;
	static volatile uint64_t x316 = 1LLU;
	volatile uint64_t t75 = 25525329LLU;

    t75 = (((x313>x314)/x315)+x316);

    if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x317 = INT16_MIN;
	static uint64_t x318 = UINT64_MAX;
	int32_t x319 = 233124;
	int64_t x320 = INT64_MIN;
	int64_t t76 = INT64_MIN;

    t76 = (((x317>x318)/x319)+x320);

    if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x321 = 5125;
	uint16_t x322 = 118U;
	int64_t x323 = INT64_MIN;
	int8_t x324 = INT8_MIN;
	int64_t t77 = -78212102917LL;

    t77 = (((x321>x322)/x323)+x324);

    if (t77 != -128LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x325 = 62005369974873LLU;
	static int32_t x326 = -1;
	static volatile uint32_t x327 = 3U;
	int32_t x328 = 46335;
	uint32_t t78 = 1095508U;

    t78 = (((x325>x326)/x327)+x328);

    if (t78 != 46335U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x329 = UINT32_MAX;
	int32_t x330 = -1;
	uint8_t x331 = 2U;
	int64_t x332 = -1LL;
	volatile int64_t t79 = -74LL;

    t79 = (((x329>x330)/x331)+x332);

    if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x333 = 35930475LLU;
	int16_t x335 = 52;
	static uint16_t x336 = 27U;
	int32_t t80 = 2799181;

    t80 = (((x333>x334)/x335)+x336);

    if (t80 != 27) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x337 = 168U;
	static volatile int8_t x339 = -1;
	volatile uint32_t x340 = 4911U;

    t81 = (((x337>x338)/x339)+x340);

    if (t81 != 4910U) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x341 = 19285063LL;
	uint32_t x343 = 57917091U;
	int64_t x344 = INT64_MAX;
	int64_t t82 = INT64_MAX;

    t82 = (((x341>x342)/x343)+x344);

    if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x346 = 1;
	int8_t x347 = INT8_MAX;
	static int32_t x348 = INT32_MAX;
	int32_t t83 = INT32_MAX;

    t83 = (((x345>x346)/x347)+x348);

    if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint32_t x349 = 23U;
	static int8_t x350 = INT8_MIN;
	volatile uint64_t x352 = 36627716373483LLU;
	uint64_t t84 = 2414225LLU;

    t84 = (((x349>x350)/x351)+x352);

    if (t84 != 36627716373483LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x353 = 802636395971867LL;
	int16_t x354 = INT16_MIN;
	uint64_t x355 = UINT64_MAX;
	int8_t x356 = 2;
	uint64_t t85 = 18928LLU;

    t85 = (((x353>x354)/x355)+x356);

    if (t85 != 2LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x357 = -52;
	volatile uint8_t x358 = 11U;
	volatile int8_t x359 = INT8_MIN;
	int64_t x360 = INT64_MIN;
	int64_t t86 = INT64_MIN;

    t86 = (((x357>x358)/x359)+x360);

    if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x361 = UINT16_MAX;
	int32_t x362 = INT32_MAX;
	int32_t x363 = -9125377;
	int32_t x364 = -10;
	volatile int32_t t87 = 859534;

    t87 = (((x361>x362)/x363)+x364);

    if (t87 != -10) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x365 = INT32_MIN;
	uint32_t x366 = 245723U;
	static int64_t x367 = 1LL;
	int64_t x368 = 0LL;

    t88 = (((x365>x366)/x367)+x368);

    if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x369 = 106;
	static uint64_t x370 = UINT64_MAX;
	int16_t x371 = -1;
	int32_t x372 = INT32_MIN;
	volatile int32_t t89 = INT32_MIN;

    t89 = (((x369>x370)/x371)+x372);

    if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint32_t x374 = UINT32_MAX;
	static int32_t x375 = INT32_MIN;
	static volatile int64_t x376 = INT64_MAX;
	volatile int64_t t90 = INT64_MAX;

    t90 = (((x373>x374)/x375)+x376);

    if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x377 = -2;
	int64_t x378 = -481527096952632409LL;
	static uint32_t x379 = 1028382U;
	int64_t x380 = INT64_MIN;
	volatile int64_t t91 = INT64_MIN;

    t91 = (((x377>x378)/x379)+x380);

    if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x381 = -1;
	int64_t x382 = INT64_MIN;
	uint8_t x383 = UINT8_MAX;
	int16_t x384 = -15;
	volatile int32_t t92 = -14991;

    t92 = (((x381>x382)/x383)+x384);

    if (t92 != -15) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x386 = UINT8_MAX;
	uint16_t x388 = UINT16_MAX;

    t93 = (((x385>x386)/x387)+x388);

    if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x389 = -1LL;
	int8_t x390 = INT8_MIN;
	static volatile int8_t x392 = -1;
	volatile uint32_t t94 = UINT32_MAX;

    t94 = (((x389>x390)/x391)+x392);

    if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x397 = INT32_MIN;
	static uint32_t x398 = 504766U;
	uint16_t x399 = 477U;
	uint8_t x400 = 63U;
	static int32_t t95 = -254;

    t95 = (((x397>x398)/x399)+x400);

    if (t95 != 63) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x401 = INT8_MIN;
	int16_t x402 = 1;
	int32_t x403 = -38;
	int16_t x404 = INT16_MIN;
	int32_t t96 = -13308896;

    t96 = (((x401>x402)/x403)+x404);

    if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x405 = 16LLU;
	static int64_t x406 = -1LL;
	int64_t x407 = INT64_MAX;
	static int16_t x408 = -457;
	volatile int64_t t97 = -54337LL;

    t97 = (((x405>x406)/x407)+x408);

    if (t97 != -457LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x411 = 25U;
	static int32_t x412 = 0;
	static int32_t t98 = -516065214;

    t98 = (((x409>x410)/x411)+x412);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x413 = UINT16_MAX;
	int8_t x414 = -1;
	static int16_t x416 = INT16_MIN;
	static int32_t t99 = 56515575;

    t99 = (((x413>x414)/x415)+x416);

    if (t99 != -32768) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x417 = 29U;
	static uint8_t x418 = 50U;
	uint32_t x420 = 265U;
	volatile int64_t t100 = -1398720LL;

    t100 = (((x417>x418)/x419)+x420);

    if (t100 != 265LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x421 = 4;
	uint8_t x422 = UINT8_MAX;
	static volatile int16_t x423 = INT16_MIN;
	volatile uint32_t x424 = UINT32_MAX;
	uint32_t t101 = UINT32_MAX;

    t101 = (((x421>x422)/x423)+x424);

    if (t101 != UINT32_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x425 = UINT32_MAX;
	int16_t x426 = INT16_MIN;
	uint16_t x427 = UINT16_MAX;
	int16_t x428 = 0;
	int32_t t102 = 78284;

    t102 = (((x425>x426)/x427)+x428);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x429 = INT32_MAX;
	volatile int16_t x430 = -1;
	int32_t x431 = INT32_MIN;
	uint16_t x432 = 1U;
	static volatile int32_t t103 = 1129;

    t103 = (((x429>x430)/x431)+x432);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x434 = -11;
	volatile int8_t x435 = INT8_MIN;
	static uint8_t x436 = 47U;
	int32_t t104 = -1;

    t104 = (((x433>x434)/x435)+x436);

    if (t104 != 47) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x437 = UINT64_MAX;
	static volatile int32_t x438 = -1;
	uint8_t x439 = UINT8_MAX;
	volatile int64_t x440 = INT64_MIN;

    t105 = (((x437>x438)/x439)+x440);

    if (t105 != INT64_MIN) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x441 = INT32_MAX;
	int64_t x442 = INT64_MIN;
	int64_t x443 = INT64_MAX;
	int16_t x444 = INT16_MIN;
	int64_t t106 = -102030LL;

    t106 = (((x441>x442)/x443)+x444);

    if (t106 != -32768LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x446 = INT8_MIN;
	volatile int32_t x447 = INT32_MAX;
	uint8_t x448 = 12U;
	volatile int32_t t107 = 1035683;

    t107 = (((x445>x446)/x447)+x448);

    if (t107 != 12) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x449 = INT64_MAX;
	uint8_t x450 = UINT8_MAX;
	uint16_t x451 = UINT16_MAX;
	uint32_t t108 = 1607U;

    t108 = (((x449>x450)/x451)+x452);

    if (t108 != 6782U) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x453 = 15;
	uint32_t x454 = 69180217U;
	static volatile uint8_t x455 = 1U;
	volatile uint32_t x456 = UINT32_MAX;
	volatile uint32_t t109 = UINT32_MAX;

    t109 = (((x453>x454)/x455)+x456);

    if (t109 != UINT32_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x457 = INT8_MIN;
	volatile int32_t x458 = -1;
	int32_t x459 = INT32_MIN;
	volatile int32_t t110 = -46;

    t110 = (((x457>x458)/x459)+x460);

    if (t110 != 255) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x461 = -1LL;
	uint8_t x462 = 10U;
	uint16_t x463 = 486U;
	uint16_t x464 = 8053U;
	volatile int32_t t111 = -447;

    t111 = (((x461>x462)/x463)+x464);

    if (t111 != 8053) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x466 = 52U;
	int32_t t112 = -294629;

    t112 = (((x465>x466)/x467)+x468);

    if (t112 != -128) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x470 = -1LL;
	volatile int32_t x472 = 0;
	static int32_t t113 = 40042905;

    t113 = (((x469>x470)/x471)+x472);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x473 = -68569353891872504LL;
	int64_t x475 = -330844001974LL;
	uint8_t x476 = 0U;

    t114 = (((x473>x474)/x475)+x476);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x477 = INT32_MAX;
	volatile int8_t x479 = -1;
	int8_t x480 = -1;

    t115 = (((x477>x478)/x479)+x480);

    if (t115 != -1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x481 = -6;
	int8_t x482 = -39;
	static int8_t x484 = 28;
	int32_t t116 = -452309;

    t116 = (((x481>x482)/x483)+x484);

    if (t116 != 27) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x485 = INT32_MIN;
	int8_t x486 = INT8_MIN;
	static int32_t x487 = INT32_MIN;
	uint8_t x488 = 39U;
	volatile int32_t t117 = 1;

    t117 = (((x485>x486)/x487)+x488);

    if (t117 != 39) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint8_t x489 = UINT8_MAX;
	volatile uint16_t x490 = UINT16_MAX;
	int32_t x491 = INT32_MIN;
	volatile int64_t t118 = INT64_MIN;

    t118 = (((x489>x490)/x491)+x492);

    if (t118 != INT64_MIN) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x495 = INT32_MIN;
	int16_t x496 = 378;
	volatile int32_t t119 = -732239;

    t119 = (((x493>x494)/x495)+x496);

    if (t119 != 378) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x497 = -1;
	int32_t x499 = -1;
	static uint16_t x500 = 375U;
	int32_t t120 = -77;

    t120 = (((x497>x498)/x499)+x500);

    if (t120 != 375) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x502 = UINT16_MAX;
	volatile int16_t x503 = INT16_MAX;
	int8_t x504 = INT8_MIN;
	int32_t t121 = 3214;

    t121 = (((x501>x502)/x503)+x504);

    if (t121 != -128) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x505 = -1;
	static int32_t x507 = -1;
	int32_t t122 = -10;

    t122 = (((x505>x506)/x507)+x508);

    if (t122 != 32766) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x509 = 17654;
	uint8_t x510 = 5U;
	static int8_t x511 = INT8_MIN;
	volatile int32_t t123 = -125;

    t123 = (((x509>x510)/x511)+x512);

    if (t123 != -22908) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x513 = -1;
	uint32_t x514 = 18438U;
	static int8_t x515 = -11;
	int32_t x516 = INT32_MIN;
	volatile int32_t t124 = INT32_MIN;

    t124 = (((x513>x514)/x515)+x516);

    if (t124 != INT32_MIN) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x517 = 7;
	static volatile uint32_t x518 = 31U;
	volatile uint64_t x519 = 11034370939LLU;
	volatile int64_t x520 = -10288LL;
	volatile uint64_t t125 = 326LLU;

    t125 = (((x517>x518)/x519)+x520);

    if (t125 != 18446744073709541328LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x521 = -1;
	uint32_t x522 = UINT32_MAX;
	int8_t x523 = INT8_MAX;

    t126 = (((x521>x522)/x523)+x524);

    if (t126 != 32767) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x525 = UINT16_MAX;
	uint64_t x526 = 131724500818206751LLU;
	int32_t x527 = INT32_MIN;
	static int64_t x528 = 2108141096893178LL;
	int64_t t127 = 2836379640LL;

    t127 = (((x525>x526)/x527)+x528);

    if (t127 != 2108141096893178LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x529 = 107U;
	static int64_t x530 = -1LL;
	static volatile uint16_t x532 = UINT16_MAX;
	volatile int32_t t128 = -1;

    t128 = (((x529>x530)/x531)+x532);

    if (t128 != 65535) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x533 = -1;
	int64_t x535 = -118464485339122901LL;
	int8_t x536 = INT8_MIN;
	volatile int64_t t129 = 1856LL;

    t129 = (((x533>x534)/x535)+x536);

    if (t129 != -128LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x537 = UINT16_MAX;
	int16_t x539 = INT16_MAX;
	int8_t x540 = -1;
	volatile int32_t t130 = -596611454;

    t130 = (((x537>x538)/x539)+x540);

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile uint8_t x541 = 3U;
	int32_t x542 = INT32_MIN;
	int32_t x544 = INT32_MIN;
	int64_t t131 = -21301777LL;

    t131 = (((x541>x542)/x543)+x544);

    if (t131 != -2147483648LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x545 = -254710256790LL;
	uint32_t x546 = UINT32_MAX;
	static int64_t x548 = INT64_MAX;

    t132 = (((x545>x546)/x547)+x548);

    if (t132 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x549 = INT16_MIN;
	static int64_t t133 = -941874560429398LL;

    t133 = (((x549>x550)/x551)+x552);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x553 = -1351;
	uint64_t x554 = 145859252LLU;
	uint32_t x555 = 3292891U;
	int64_t t134 = 71385198333880LL;

    t134 = (((x553>x554)/x555)+x556);

    if (t134 != -1LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x561 = 115U;
	static volatile int32_t x563 = INT32_MAX;
	uint32_t x564 = 1136U;
	volatile uint32_t t135 = 49638U;

    t135 = (((x561>x562)/x563)+x564);

    if (t135 != 1136U) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x566 = INT64_MIN;
	static volatile uint32_t x568 = 227U;
	static int64_t t136 = 46282489LL;

    t136 = (((x565>x566)/x567)+x568);

    if (t136 != 227LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x569 = 11;
	uint16_t x570 = 25442U;
	uint64_t x571 = 69363582LLU;
	int32_t x572 = 23548;
	uint64_t t137 = 1378LLU;

    t137 = (((x569>x570)/x571)+x572);

    if (t137 != 23548LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x573 = 1;
	volatile int16_t x574 = -1;
	static uint16_t x575 = UINT16_MAX;
	int32_t t138 = -57418;

    t138 = (((x573>x574)/x575)+x576);

    if (t138 != -32768) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x577 = UINT64_MAX;
	int16_t x579 = INT16_MAX;
	int32_t x580 = INT32_MIN;
	volatile int32_t t139 = INT32_MIN;

    t139 = (((x577>x578)/x579)+x580);

    if (t139 != INT32_MIN) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x582 = 9346350U;
	volatile uint16_t x583 = UINT16_MAX;
	uint16_t x584 = 823U;

    t140 = (((x581>x582)/x583)+x584);

    if (t140 != 823) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x585 = INT64_MIN;
	int16_t x587 = -4;
	volatile uint32_t t141 = 5945U;

    t141 = (((x585>x586)/x587)+x588);

    if (t141 != 1203839U) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x590 = 879;
	int64_t x591 = -9743242489845LL;
	volatile int16_t x592 = INT16_MIN;
	int64_t t142 = -3793931LL;

    t142 = (((x589>x590)/x591)+x592);

    if (t142 != -32768LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x593 = INT16_MIN;
	int32_t x594 = INT32_MIN;
	volatile int8_t x595 = 12;
	int8_t x596 = 11;
	int32_t t143 = 534;

    t143 = (((x593>x594)/x595)+x596);

    if (t143 != 11) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x597 = 295U;
	int64_t x598 = 23416640461LL;
	int16_t x600 = INT16_MAX;
	volatile int32_t t144 = 8960;

    t144 = (((x597>x598)/x599)+x600);

    if (t144 != 32767) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x603 = UINT32_MAX;
	uint16_t x604 = 56U;
	uint32_t t145 = 281002U;

    t145 = (((x601>x602)/x603)+x604);

    if (t145 != 56U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x605 = UINT64_MAX;
	volatile uint8_t x606 = 29U;
	static volatile int32_t x607 = INT32_MIN;
	uint64_t x608 = 0LLU;
	volatile uint64_t t146 = 7LLU;

    t146 = (((x605>x606)/x607)+x608);

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile uint64_t x610 = UINT64_MAX;
	uint32_t x611 = 2U;
	uint16_t x612 = UINT16_MAX;
	static uint32_t t147 = 1455634174U;

    t147 = (((x609>x610)/x611)+x612);

    if (t147 != 65535U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x613 = 0U;
	int16_t x614 = INT16_MIN;
	volatile uint64_t x615 = 413151895474LLU;

    t148 = (((x613>x614)/x615)+x616);

    if (t148 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x618 = 4940U;
	volatile uint16_t x620 = UINT16_MAX;
	static volatile uint32_t t149 = 13012084U;

    t149 = (((x617>x618)/x619)+x620);

    if (t149 != 65535U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x621 = 8LLU;
	uint16_t x622 = 30830U;
	int16_t x623 = INT16_MAX;
	int64_t x624 = INT64_MIN;

    t150 = (((x621>x622)/x623)+x624);

    if (t150 != INT64_MIN) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x625 = 364798U;
	int64_t x628 = INT64_MAX;

    t151 = (((x625>x626)/x627)+x628);

    if (t151 != INT64_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x629 = 339;
	int32_t x631 = INT32_MIN;
	int64_t x632 = -1LL;
	int64_t t152 = 151907902096LL;

    t152 = (((x629>x630)/x631)+x632);

    if (t152 != -1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x633 = 5132U;
	int64_t x634 = -1LL;
	int64_t x635 = -1LL;
	uint8_t x636 = UINT8_MAX;
	volatile int64_t t153 = 3580LL;

    t153 = (((x633>x634)/x635)+x636);

    if (t153 != 254LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x637 = UINT16_MAX;
	int64_t x638 = INT64_MAX;
	static int64_t x639 = 1731491314211LL;
	static volatile uint64_t x640 = 26LLU;
	volatile uint64_t t154 = 725LLU;

    t154 = (((x637>x638)/x639)+x640);

    if (t154 != 26LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x641 = 112265;
	int32_t x642 = INT32_MAX;
	int64_t x643 = -1LL;
	int32_t x644 = INT32_MAX;
	int64_t t155 = 2711443LL;

    t155 = (((x641>x642)/x643)+x644);

    if (t155 != 2147483647LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x646 = INT16_MAX;
	static int16_t x648 = INT16_MIN;
	static volatile uint64_t t156 = 16168LLU;

    t156 = (((x645>x646)/x647)+x648);

    if (t156 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x649 = INT64_MIN;
	volatile uint64_t x650 = 5279LLU;
	uint16_t x651 = 13U;
	int32_t t157 = 15365;

    t157 = (((x649>x650)/x651)+x652);

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x653 = INT8_MIN;
	int64_t x654 = 6661836055659912LL;
	uint8_t x655 = 1U;
	uint64_t x656 = 817031962213LLU;
	static volatile uint64_t t158 = 7377650242LLU;

    t158 = (((x653>x654)/x655)+x656);

    if (t158 != 817031962213LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x657 = UINT16_MAX;
	uint16_t x658 = 209U;
	int16_t x659 = INT16_MIN;
	static volatile int32_t t159 = 991;

    t159 = (((x657>x658)/x659)+x660);

    if (t159 != -10131) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x661 = -847028;
	int64_t x662 = -30043697139232605LL;
	static volatile int64_t x663 = -1LL;
	static int64_t t160 = 235387589493613LL;

    t160 = (((x661>x662)/x663)+x664);

    if (t160 != -55LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x665 = INT16_MAX;
	int32_t x666 = 1355;
	int16_t x667 = -1;
	int8_t x668 = INT8_MIN;

    t161 = (((x665>x666)/x667)+x668);

    if (t161 != -129) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x670 = INT64_MIN;
	uint8_t x671 = 2U;
	uint64_t x672 = 38715LLU;

    t162 = (((x669>x670)/x671)+x672);

    if (t162 != 38715LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x674 = 295U;
	int32_t x676 = -997;

    t163 = (((x673>x674)/x675)+x676);

    if (t163 != -997) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x677 = INT64_MIN;
	int16_t x678 = INT16_MIN;
	uint64_t x679 = UINT64_MAX;
	uint8_t x680 = 2U;
	static volatile uint64_t t164 = 458881847894680814LLU;

    t164 = (((x677>x678)/x679)+x680);

    if (t164 != 2LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x681 = UINT64_MAX;
	uint8_t x682 = 15U;
	volatile int8_t x683 = 4;
	volatile int16_t x684 = -1;
	static volatile int32_t t165 = 1340;

    t165 = (((x681>x682)/x683)+x684);

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x685 = INT8_MIN;
	uint8_t x688 = 119U;
	volatile int32_t t166 = -1491960;

    t166 = (((x685>x686)/x687)+x688);

    if (t166 != 119) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x691 = INT64_MIN;
	uint64_t x692 = 122401236976LLU;
	volatile uint64_t t167 = 46946026705995LLU;

    t167 = (((x689>x690)/x691)+x692);

    if (t167 != 122401236976LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x693 = UINT16_MAX;
	static int8_t x694 = -32;
	volatile int64_t x695 = 142308LL;
	static int32_t x696 = INT32_MIN;
	static volatile int64_t t168 = -4092LL;

    t168 = (((x693>x694)/x695)+x696);

    if (t168 != -2147483648LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint32_t x697 = UINT32_MAX;
	volatile int8_t x698 = -1;
	int8_t x699 = INT8_MIN;
	volatile int32_t x700 = -1;

    t169 = (((x697>x698)/x699)+x700);

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x701 = INT16_MIN;
	uint8_t x702 = 4U;
	int64_t x703 = -23891LL;
	int16_t x704 = -1;
	volatile int64_t t170 = -29704381LL;

    t170 = (((x701>x702)/x703)+x704);

    if (t170 != -1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x705 = 0;
	uint64_t x706 = 243659713719873434LLU;
	int32_t x707 = INT32_MIN;
	int16_t x708 = 0;
	static volatile int32_t t171 = -28210;

    t171 = (((x705>x706)/x707)+x708);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint16_t x709 = 431U;
	static int32_t x710 = INT32_MIN;
	static uint8_t x711 = UINT8_MAX;

    t172 = (((x709>x710)/x711)+x712);

    if (t172 != UINT64_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int32_t x713 = -14;
	static uint8_t x715 = 2U;
	int8_t x716 = INT8_MAX;

    t173 = (((x713>x714)/x715)+x716);

    if (t173 != 127) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x717 = 127853535LL;
	volatile int64_t x718 = -12LL;
	int16_t x719 = INT16_MAX;
	uint32_t x720 = 944295943U;
	volatile uint32_t t174 = 2323U;

    t174 = (((x717>x718)/x719)+x720);

    if (t174 != 944295943U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x721 = 11U;
	static int32_t x722 = 4;
	int64_t x723 = INT64_MIN;

    t175 = (((x721>x722)/x723)+x724);

    if (t175 != -128LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x725 = INT8_MIN;
	uint16_t x728 = UINT16_MAX;
	int32_t t176 = -7224866;

    t176 = (((x725>x726)/x727)+x728);

    if (t176 != 65535) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x729 = 8U;
	volatile int32_t x730 = -1;
	uint8_t x731 = 10U;
	uint8_t x732 = 105U;
	volatile int32_t t177 = -166;

    t177 = (((x729>x730)/x731)+x732);

    if (t177 != 105) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x733 = INT32_MAX;
	int32_t x734 = INT32_MIN;
	uint32_t x735 = UINT32_MAX;
	volatile uint32_t t178 = UINT32_MAX;

    t178 = (((x733>x734)/x735)+x736);

    if (t178 != UINT32_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x737 = INT8_MIN;
	int8_t x740 = -1;
	int32_t t179 = -101046;

    t179 = (((x737>x738)/x739)+x740);

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x742 = INT8_MIN;
	int32_t x743 = INT32_MIN;
	int8_t x744 = 1;
	volatile int32_t t180 = 2508048;

    t180 = (((x741>x742)/x743)+x744);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x746 = 62133066649187LLU;
	volatile int64_t x747 = -3875241969078LL;
	static uint8_t x748 = UINT8_MAX;
	int64_t t181 = -1LL;

    t181 = (((x745>x746)/x747)+x748);

    if (t181 != 255LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x749 = 1U;
	int32_t x750 = -1;
	int8_t x751 = -1;
	int16_t x752 = -1;
	volatile int32_t t182 = 863865;

    t182 = (((x749>x750)/x751)+x752);

    if (t182 != -2) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x753 = -38086014764405LL;
	static uint16_t x754 = 14U;
	int8_t x755 = -1;
	int32_t t183 = -38031;

    t183 = (((x753>x754)/x755)+x756);

    if (t183 != 13893) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x757 = 5709;
	int32_t x758 = INT32_MAX;
	uint16_t x759 = UINT16_MAX;
	static int16_t x760 = -1;
	volatile int32_t t184 = 331;

    t184 = (((x757>x758)/x759)+x760);

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x762 = INT64_MIN;
	volatile int8_t x763 = 24;
	static int16_t x764 = INT16_MIN;

    t185 = (((x761>x762)/x763)+x764);

    if (t185 != -32768) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint16_t x765 = UINT16_MAX;
	int32_t x766 = INT32_MIN;
	uint32_t x767 = UINT32_MAX;
	volatile uint32_t t186 = 3U;

    t186 = (((x765>x766)/x767)+x768);

    if (t186 != 2147483648U) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x770 = 9U;
	static int8_t x771 = 16;
	int64_t x772 = 2412889837LL;
	int64_t t187 = 182LL;

    t187 = (((x769>x770)/x771)+x772);

    if (t187 != 2412889837LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x773 = -1;
	static uint32_t x774 = UINT32_MAX;
	volatile int16_t x775 = -1;
	static uint32_t x776 = 3812359U;
	uint32_t t188 = 128303731U;

    t188 = (((x773>x774)/x775)+x776);

    if (t188 != 3812359U) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x778 = UINT16_MAX;
	int32_t x779 = INT32_MIN;
	static int64_t x780 = 12052LL;
	volatile int64_t t189 = 1924LL;

    t189 = (((x777>x778)/x779)+x780);

    if (t189 != 12052LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x782 = 127U;
	int32_t x783 = INT32_MAX;
	int16_t x784 = -1;
	volatile int32_t t190 = 1384070;

    t190 = (((x781>x782)/x783)+x784);

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x785 = INT32_MIN;
	int64_t x787 = -2291458225489171LL;
	volatile uint64_t t191 = 46658176938LLU;

    t191 = (((x785>x786)/x787)+x788);

    if (t191 != 6183898247LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x789 = 21146516710287427LL;
	int8_t x790 = INT8_MAX;
	volatile int32_t x791 = INT32_MAX;
	static uint16_t x792 = 1949U;
	volatile int32_t t192 = -9;

    t192 = (((x789>x790)/x791)+x792);

    if (t192 != 1949) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x793 = INT8_MAX;
	volatile int16_t x794 = INT16_MIN;
	int16_t x795 = -1;
	volatile uint64_t t193 = 178262LLU;

    t193 = (((x793>x794)/x795)+x796);

    if (t193 != 418129456126384LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint16_t x797 = 11023U;
	uint16_t x798 = UINT16_MAX;
	int64_t x800 = 3465LL;
	int64_t t194 = 13642LL;

    t194 = (((x797>x798)/x799)+x800);

    if (t194 != 3465LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x801 = 53151403866720LL;
	volatile uint16_t x802 = 30243U;
	uint16_t x803 = 88U;
	int64_t x804 = -1LL;
	volatile int64_t t195 = 72643907LL;

    t195 = (((x801>x802)/x803)+x804);

    if (t195 != -1LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x805 = 0;
	int64_t x806 = -1LL;
	int16_t x807 = -1;
	int32_t t196 = 119407;

    t196 = (((x805>x806)/x807)+x808);

    if (t196 != 8) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint8_t x813 = UINT8_MAX;
	uint64_t x815 = 705136265233417184LLU;
	int8_t x816 = 1;
	static volatile uint64_t t197 = 244958535689569LLU;

    t197 = (((x813>x814)/x815)+x816);

    if (t197 != 1LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x817 = -1;
	int32_t x818 = INT32_MIN;
	int16_t x819 = -1;
	uint8_t x820 = 0U;
	int32_t t198 = 46436372;

    t198 = (((x817>x818)/x819)+x820);

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x821 = UINT32_MAX;
	int8_t x822 = INT8_MIN;
	int64_t x823 = INT64_MIN;
	static int16_t x824 = INT16_MIN;
	volatile int64_t t199 = 43LL;

    t199 = (((x821>x822)/x823)+x824);

    if (t199 != -32768LL) { NG(); } else { ; }
	
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

