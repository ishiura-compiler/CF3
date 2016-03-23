
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

int8_t x2 = -19;
int8_t x4 = 9;
int16_t x7 = 36;
uint8_t x11 = UINT8_MAX;
volatile int16_t x12 = -1;
volatile int32_t t2 = -3;
volatile int64_t x18 = INT64_MIN;
volatile int8_t x19 = INT8_MIN;
static volatile int32_t t4 = 13975569;
static volatile int32_t t6 = -12;
volatile int32_t t7 = -140000;
int8_t x38 = 60;
int8_t x52 = INT8_MIN;
volatile int32_t t11 = -81733;
uint8_t x53 = 12U;
int32_t x54 = INT32_MIN;
static int64_t x57 = -1LL;
static int32_t t13 = 7;
uint16_t x62 = UINT16_MAX;
uint8_t x66 = 4U;
static volatile int32_t t15 = 5069;
int32_t x71 = 1;
int16_t x82 = INT16_MIN;
uint64_t x84 = 168466048549941LLU;
static int16_t x88 = -7559;
static int32_t t21 = 2;
volatile int64_t x94 = INT64_MIN;
static int32_t t23 = -3547013;
volatile int32_t t24 = 0;
int32_t x105 = 489438;
int32_t t25 = -1;
int64_t x124 = -186LL;
volatile int64_t x126 = -1LL;
uint32_t x129 = 200357556U;
int64_t x146 = -15689LL;
uint16_t x148 = 25U;
int16_t x152 = -1;
int64_t x156 = -5102923933LL;
static int32_t x158 = INT32_MAX;
int8_t x166 = -10;
uint32_t x168 = 431U;
volatile int32_t t37 = -7;
int8_t x176 = -1;
static volatile int32_t t39 = 1425310;
static int16_t x181 = -133;
int64_t x183 = INT64_MIN;
volatile uint64_t x189 = 427829247581204340LLU;
int16_t x190 = -1;
static uint32_t x199 = 42U;
int8_t x202 = INT8_MIN;
int64_t x204 = -777237698218LL;
int16_t x205 = INT16_MIN;
static int64_t x209 = -408729LL;
int32_t x223 = -605906;
static int64_t x224 = -1LL;
int32_t x228 = -1;
uint16_t x232 = 5U;
uint8_t x236 = 9U;
volatile int32_t t53 = -32167554;
int64_t x237 = -1LL;
volatile int16_t x242 = INT16_MIN;
int32_t x244 = INT32_MIN;
int32_t x246 = INT32_MAX;
int32_t x247 = -1;
uint16_t x253 = 0U;
int64_t x259 = -1LL;
int16_t x264 = INT16_MIN;
int16_t x269 = 220;
uint32_t x276 = 2102U;
int32_t t63 = -4621;
static uint16_t x283 = 51U;
int64_t x297 = 4000630744787LL;
int32_t t67 = -117156;
int16_t x301 = INT16_MIN;
uint16_t x302 = UINT16_MAX;
volatile int32_t t68 = -2;
uint32_t x313 = UINT32_MAX;
uint32_t x314 = UINT32_MAX;
uint32_t x315 = 46051418U;
uint64_t x324 = UINT64_MAX;
volatile int64_t x329 = 48541713LL;
int8_t x330 = INT8_MIN;
int64_t x332 = -1LL;
static volatile int32_t t77 = 12;
int8_t x341 = -8;
volatile int32_t t78 = -84516;
volatile int32_t x345 = 26414;
int8_t x348 = INT8_MIN;
static int64_t x353 = -12176LL;
volatile int16_t x354 = INT16_MIN;
volatile uint8_t x365 = 1U;
static int8_t x366 = INT8_MIN;
uint64_t x372 = UINT64_MAX;
int32_t t85 = -49;
int8_t x379 = 0;
int64_t x391 = -1LL;
volatile int32_t t91 = -6730917;
uint64_t x398 = 7185LLU;
volatile int64_t x399 = INT64_MIN;
static int32_t t92 = -34;
int32_t x401 = -1;
int32_t t93 = -6611768;
static int64_t x406 = INT64_MIN;
static int32_t t94 = 1;
int32_t x414 = 123407887;
uint16_t x420 = 335U;
uint16_t x423 = 3U;
volatile int16_t x424 = -1;
volatile uint32_t x427 = 54U;
volatile int32_t x435 = -1;
int8_t x439 = 2;
int32_t t101 = -590;
int32_t x442 = 9;
volatile int32_t t103 = -1;
static int64_t x454 = -84532173LL;
volatile int16_t x458 = INT16_MIN;
int64_t x470 = 4246927LL;
int32_t x472 = 1;
volatile uint32_t x481 = 41561U;
static int32_t x483 = INT32_MAX;
int16_t x484 = -2051;
uint32_t x490 = 126058U;
static int16_t x499 = 28;
uint8_t x501 = 31U;
int8_t x502 = INT8_MIN;
int16_t x504 = INT16_MAX;
volatile int32_t t116 = -1717;
static int16_t x511 = INT16_MIN;
int32_t x512 = 4909004;
volatile int8_t x520 = -1;
volatile int32_t t120 = 3;
volatile int32_t t121 = -1;
volatile int32_t t122 = -2184969;
volatile int32_t t123 = -26926;
uint8_t x538 = 14U;
static int32_t t124 = 249;
static int16_t x542 = INT16_MIN;
uint8_t x546 = 18U;
volatile int32_t t126 = 2055316;
static uint16_t x554 = 304U;
int16_t x555 = INT16_MAX;
int8_t x556 = INT8_MIN;
int32_t t128 = -59821;
volatile int64_t x559 = INT64_MAX;
int32_t x561 = -1;
int16_t x563 = INT16_MIN;
volatile int32_t t131 = 5285442;
static int64_t x569 = -1LL;
volatile uint64_t x572 = 6235006543589LLU;
volatile int16_t x576 = 523;
static int32_t x577 = INT32_MIN;
int32_t x580 = -8190;
int32_t t134 = 1;
int16_t x593 = -1;
static int32_t x601 = INT32_MAX;
volatile int8_t x605 = INT8_MAX;
volatile int64_t x606 = INT64_MIN;
volatile int32_t t142 = -239;
int64_t x613 = -1LL;
uint16_t x617 = UINT16_MAX;
uint8_t x618 = UINT8_MAX;
static int16_t x619 = -4420;
int32_t x622 = -1;
int8_t x623 = INT8_MAX;
volatile int64_t x627 = -1LL;
int32_t x628 = INT32_MIN;
int32_t t146 = -3649;
uint64_t x629 = UINT64_MAX;
int16_t x631 = INT16_MAX;
int32_t t147 = 1;
volatile uint64_t x633 = 40730019981973LLU;
int32_t t148 = 849782384;
int64_t x640 = 14346LL;
int16_t x641 = INT16_MIN;
static int8_t x649 = INT8_MIN;
static uint8_t x652 = UINT8_MAX;
int8_t x653 = INT8_MIN;
volatile int16_t x654 = INT16_MIN;
volatile int8_t x670 = INT8_MIN;
uint32_t x671 = 9628780U;
volatile int32_t t157 = 146;
static int64_t x682 = 105971930LL;
volatile uint32_t x684 = UINT32_MAX;
uint16_t x685 = 94U;
static uint16_t x686 = 6239U;
static uint16_t x690 = UINT16_MAX;
int64_t x691 = 0LL;
int64_t x694 = -1LL;
volatile int32_t t164 = -1;
static int16_t x709 = INT16_MAX;
uint8_t x711 = UINT8_MAX;
static int8_t x725 = INT8_MAX;
static int8_t x726 = INT8_MIN;
static int32_t x728 = 32452;
uint32_t x747 = 1669319U;
volatile uint16_t x759 = 0U;
volatile int32_t x765 = INT32_MAX;
int32_t x769 = INT32_MIN;
uint8_t x773 = UINT8_MAX;
static uint32_t x775 = 476803238U;
int16_t x776 = INT16_MIN;
uint32_t x779 = 188U;
int32_t x788 = -46614;
volatile int32_t t187 = 30105;
uint16_t x801 = 0U;
uint64_t x813 = 43154283LLU;
int64_t x816 = INT64_MAX;
uint64_t x820 = 598661LLU;
volatile uint32_t x823 = 3754U;
volatile int64_t x830 = INT64_MIN;
volatile int32_t t196 = 1;
int8_t x837 = INT8_MIN;
int8_t x842 = -2;
uint32_t x843 = 2U;


void f0(void) {
    	volatile uint8_t x1 = 19U;
	volatile int8_t x3 = INT8_MIN;
	static int32_t t0 = 10;

    t0 = (((x1/x2)!=x3)==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x5 = 4349655741511005LLU;
	int64_t x6 = -1577443689602890894LL;
	static int8_t x8 = -1;
	volatile int32_t t1 = 612;

    t1 = (((x5/x6)!=x7)==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -812LL;
	uint32_t x10 = UINT32_MAX;

    t2 = (((x9/x10)!=x11)==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = UINT8_MAX;
	uint64_t x14 = UINT64_MAX;
	int16_t x15 = INT16_MAX;
	uint32_t x16 = 4294U;
	static int32_t t3 = -1;

    t3 = (((x13/x14)!=x15)==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	int64_t x20 = -14616LL;

    t4 = (((x17/x18)!=x19)==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 92U;
	int8_t x22 = -58;
	volatile uint64_t x23 = 6491961319495383LLU;
	static uint8_t x24 = UINT8_MAX;
	volatile int32_t t5 = -3874911;

    t5 = (((x21/x22)!=x23)==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x25 = INT32_MAX;
	static volatile int64_t x26 = -3281948585378LL;
	static int16_t x27 = INT16_MAX;
	int8_t x28 = 0;

    t6 = (((x25/x26)!=x27)==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x33 = 14U;
	volatile uint16_t x34 = 72U;
	int8_t x35 = 26;
	int64_t x36 = -496872146959LL;

    t7 = (((x33/x34)!=x35)==x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = 6;
	static int32_t x39 = 241181248;
	static uint64_t x40 = 47347021921848432LLU;
	int32_t t8 = -65;

    t8 = (((x37/x38)!=x39)==x40);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x41 = -21339261138LL;
	uint32_t x42 = 145094U;
	uint16_t x43 = 2556U;
	int64_t x44 = INT64_MAX;
	int32_t t9 = -201726;

    t9 = (((x41/x42)!=x43)==x44);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x45 = 5032063169631LLU;
	int16_t x46 = INT16_MAX;
	int16_t x47 = 1331;
	static int32_t x48 = INT32_MAX;
	volatile int32_t t10 = 249110;

    t10 = (((x45/x46)!=x47)==x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x49 = INT8_MAX;
	uint32_t x50 = 71243U;
	static volatile int64_t x51 = 1LL;

    t11 = (((x49/x50)!=x51)==x52);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x55 = -1;
	int8_t x56 = -5;
	volatile int32_t t12 = 1;

    t12 = (((x53/x54)!=x55)==x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x58 = 2U;
	uint16_t x59 = 9922U;
	static int16_t x60 = INT16_MIN;

    t13 = (((x57/x58)!=x59)==x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x61 = INT16_MAX;
	int64_t x63 = -1785LL;
	volatile int8_t x64 = INT8_MIN;
	volatile int32_t t14 = -43441;

    t14 = (((x61/x62)!=x63)==x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x65 = 21534U;
	uint8_t x67 = 3U;
	int16_t x68 = INT16_MIN;

    t15 = (((x65/x66)!=x67)==x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x69 = 820917U;
	int16_t x70 = 1;
	int32_t x72 = -1;
	static volatile int32_t t16 = -45192;

    t16 = (((x69/x70)!=x71)==x72);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = 485;
	static int32_t x74 = INT32_MAX;
	static uint8_t x75 = 4U;
	volatile uint16_t x76 = 559U;
	int32_t t17 = -5472957;

    t17 = (((x73/x74)!=x75)==x76);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x77 = -2;
	static int64_t x78 = -1LL;
	int64_t x79 = INT64_MIN;
	int8_t x80 = INT8_MIN;
	volatile int32_t t18 = 28;

    t18 = (((x77/x78)!=x79)==x80);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x81 = -429949LL;
	int64_t x83 = INT64_MIN;
	static int32_t t19 = -117008649;

    t19 = (((x81/x82)!=x83)==x84);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int64_t x85 = -1LL;
	int64_t x86 = -1LL;
	int32_t x87 = INT32_MAX;
	static volatile int32_t t20 = 180;

    t20 = (((x85/x86)!=x87)==x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x89 = 53409948443586881LLU;
	static volatile int16_t x90 = -929;
	uint16_t x91 = UINT16_MAX;
	static int64_t x92 = 14749475879LL;

    t21 = (((x89/x90)!=x91)==x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x93 = -1;
	int8_t x95 = 11;
	int64_t x96 = 318869778781LL;
	static volatile int32_t t22 = -16;

    t22 = (((x93/x94)!=x95)==x96);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x97 = 18U;
	static volatile int64_t x98 = -1LL;
	uint32_t x99 = 115050U;
	int8_t x100 = INT8_MIN;

    t23 = (((x97/x98)!=x99)==x100);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x101 = UINT8_MAX;
	int32_t x102 = INT32_MAX;
	int32_t x103 = -1;
	uint64_t x104 = 15188179476968786LLU;

    t24 = (((x101/x102)!=x103)==x104);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x106 = INT64_MIN;
	int32_t x107 = 142068;
	uint8_t x108 = UINT8_MAX;

    t25 = (((x105/x106)!=x107)==x108);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x113 = 11U;
	volatile int8_t x114 = INT8_MIN;
	static volatile int64_t x115 = INT64_MAX;
	volatile int32_t x116 = -1;
	volatile int32_t t26 = -32412;

    t26 = (((x113/x114)!=x115)==x116);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x121 = INT16_MAX;
	uint8_t x122 = UINT8_MAX;
	static int64_t x123 = -1LL;
	volatile int32_t t27 = 13602;

    t27 = (((x121/x122)!=x123)==x124);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x125 = -13;
	int8_t x127 = INT8_MAX;
	volatile int64_t x128 = INT64_MAX;
	int32_t t28 = -248725;

    t28 = (((x125/x126)!=x127)==x128);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x130 = UINT16_MAX;
	static int32_t x131 = INT32_MIN;
	volatile int8_t x132 = 47;
	volatile int32_t t29 = -39;

    t29 = (((x129/x130)!=x131)==x132);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x133 = UINT64_MAX;
	static volatile int32_t x134 = INT32_MAX;
	volatile int64_t x135 = 6101LL;
	static volatile uint64_t x136 = 3434511773732092LLU;
	static int32_t t30 = -184764373;

    t30 = (((x133/x134)!=x135)==x136);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x137 = 1208198706LLU;
	uint32_t x138 = 10U;
	volatile int8_t x139 = INT8_MIN;
	int8_t x140 = INT8_MIN;
	volatile int32_t t31 = 223347;

    t31 = (((x137/x138)!=x139)==x140);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x145 = 185U;
	uint64_t x147 = UINT64_MAX;
	static int32_t t32 = 1;

    t32 = (((x145/x146)!=x147)==x148);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x149 = -1;
	static uint64_t x150 = UINT64_MAX;
	uint64_t x151 = UINT64_MAX;
	volatile int32_t t33 = -378262;

    t33 = (((x149/x150)!=x151)==x152);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x153 = INT16_MIN;
	int8_t x154 = INT8_MAX;
	uint16_t x155 = 15958U;
	volatile int32_t t34 = -1;

    t34 = (((x153/x154)!=x155)==x156);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x157 = 0;
	uint64_t x159 = 129711686599LLU;
	static int64_t x160 = -155931804383LL;
	static int32_t t35 = 2;

    t35 = (((x157/x158)!=x159)==x160);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int8_t x161 = INT8_MIN;
	int32_t x162 = INT32_MIN;
	int32_t x163 = 326552951;
	static int8_t x164 = -1;
	static int32_t t36 = 0;

    t36 = (((x161/x162)!=x163)==x164);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x165 = 3644U;
	int8_t x167 = 9;

    t37 = (((x165/x166)!=x167)==x168);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x169 = INT64_MIN;
	int8_t x170 = 24;
	volatile int8_t x171 = INT8_MIN;
	static uint16_t x172 = 44U;
	int32_t t38 = 342112;

    t38 = (((x169/x170)!=x171)==x172);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x173 = UINT32_MAX;
	volatile uint8_t x174 = 38U;
	volatile int32_t x175 = -9423837;

    t39 = (((x173/x174)!=x175)==x176);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x177 = 17878LLU;
	uint16_t x178 = 5506U;
	uint8_t x179 = UINT8_MAX;
	int8_t x180 = 1;
	volatile int32_t t40 = -274269938;

    t40 = (((x177/x178)!=x179)==x180);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x182 = INT8_MIN;
	static uint32_t x184 = 120U;
	int32_t t41 = 10983;

    t41 = (((x181/x182)!=x183)==x184);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x185 = INT16_MIN;
	int64_t x186 = -1LL;
	static int64_t x187 = -1LL;
	int8_t x188 = INT8_MIN;
	static int32_t t42 = -209572;

    t42 = (((x185/x186)!=x187)==x188);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x191 = INT64_MIN;
	int64_t x192 = 54504045678962LL;
	int32_t t43 = -123738348;

    t43 = (((x189/x190)!=x191)==x192);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x193 = -1;
	volatile uint32_t x194 = UINT32_MAX;
	static uint8_t x195 = UINT8_MAX;
	static volatile int64_t x196 = 14931016139LL;
	volatile int32_t t44 = -5;

    t44 = (((x193/x194)!=x195)==x196);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x197 = -1;
	int8_t x198 = INT8_MIN;
	uint64_t x200 = 53LLU;
	int32_t t45 = -5797577;

    t45 = (((x197/x198)!=x199)==x200);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x201 = 4;
	int64_t x203 = INT64_MAX;
	volatile int32_t t46 = 189907794;

    t46 = (((x201/x202)!=x203)==x204);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x206 = INT32_MIN;
	uint16_t x207 = 387U;
	int16_t x208 = 2569;
	volatile int32_t t47 = 19806413;

    t47 = (((x205/x206)!=x207)==x208);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x210 = 44662U;
	int16_t x211 = -12;
	static int32_t x212 = 335;
	volatile int32_t t48 = -17116637;

    t48 = (((x209/x210)!=x211)==x212);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x213 = 5067031;
	int64_t x214 = INT64_MAX;
	uint16_t x215 = UINT16_MAX;
	volatile int32_t x216 = INT32_MAX;
	volatile int32_t t49 = -195;

    t49 = (((x213/x214)!=x215)==x216);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x221 = INT8_MIN;
	static int64_t x222 = INT64_MIN;
	volatile int32_t t50 = 427768720;

    t50 = (((x221/x222)!=x223)==x224);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x225 = INT32_MIN;
	int16_t x226 = INT16_MAX;
	int32_t x227 = 3185;
	volatile int32_t t51 = -3065305;

    t51 = (((x225/x226)!=x227)==x228);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x229 = 2386U;
	int64_t x230 = -3219766LL;
	int16_t x231 = INT16_MAX;
	volatile int32_t t52 = -26;

    t52 = (((x229/x230)!=x231)==x232);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x233 = -1;
	int16_t x234 = INT16_MAX;
	int32_t x235 = 127;

    t53 = (((x233/x234)!=x235)==x236);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x238 = INT8_MIN;
	int32_t x239 = -1;
	int8_t x240 = -1;
	static volatile int32_t t54 = 0;

    t54 = (((x237/x238)!=x239)==x240);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x241 = INT8_MIN;
	uint64_t x243 = 15615LLU;
	int32_t t55 = -22618;

    t55 = (((x241/x242)!=x243)==x244);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x245 = -2244222859LL;
	int8_t x248 = -1;
	int32_t t56 = 0;

    t56 = (((x245/x246)!=x247)==x248);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x254 = 5;
	volatile uint16_t x255 = UINT16_MAX;
	volatile uint8_t x256 = UINT8_MAX;
	volatile int32_t t57 = -165;

    t57 = (((x253/x254)!=x255)==x256);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x257 = INT8_MIN;
	int8_t x258 = INT8_MIN;
	int8_t x260 = 5;
	int32_t t58 = 92030;

    t58 = (((x257/x258)!=x259)==x260);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint32_t x261 = 5U;
	static int8_t x262 = -1;
	uint8_t x263 = 4U;
	int32_t t59 = -14422835;

    t59 = (((x261/x262)!=x263)==x264);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x265 = INT32_MIN;
	int32_t x266 = INT32_MAX;
	int64_t x267 = -331343130LL;
	volatile int64_t x268 = INT64_MIN;
	volatile int32_t t60 = 217821470;

    t60 = (((x265/x266)!=x267)==x268);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x270 = 5;
	uint8_t x271 = 11U;
	int64_t x272 = -1LL;
	int32_t t61 = 8425;

    t61 = (((x269/x270)!=x271)==x272);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x273 = 36401301;
	int32_t x274 = INT32_MIN;
	uint16_t x275 = 16154U;
	int32_t t62 = -1626;

    t62 = (((x273/x274)!=x275)==x276);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x277 = UINT16_MAX;
	int16_t x278 = INT16_MIN;
	int16_t x279 = INT16_MIN;
	int16_t x280 = INT16_MIN;

    t63 = (((x277/x278)!=x279)==x280);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x281 = 288283LLU;
	int8_t x282 = INT8_MIN;
	uint32_t x284 = 5464U;
	int32_t t64 = 0;

    t64 = (((x281/x282)!=x283)==x284);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x285 = -1;
	volatile int32_t x286 = 37743;
	volatile uint16_t x287 = 43U;
	int32_t x288 = INT32_MAX;
	static int32_t t65 = 0;

    t65 = (((x285/x286)!=x287)==x288);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x289 = 5U;
	uint8_t x290 = UINT8_MAX;
	uint64_t x291 = 15LLU;
	int16_t x292 = -1;
	volatile int32_t t66 = -358735;

    t66 = (((x289/x290)!=x291)==x292);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x298 = 717387U;
	int64_t x299 = 18LL;
	uint8_t x300 = 41U;

    t67 = (((x297/x298)!=x299)==x300);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x303 = INT16_MIN;
	volatile int32_t x304 = INT32_MIN;

    t68 = (((x301/x302)!=x303)==x304);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x305 = INT8_MIN;
	static uint8_t x306 = 119U;
	int64_t x307 = -1LL;
	uint8_t x308 = UINT8_MAX;
	int32_t t69 = 1562;

    t69 = (((x305/x306)!=x307)==x308);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x309 = 880LLU;
	volatile int32_t x310 = -1;
	int32_t x311 = 1307056;
	int8_t x312 = INT8_MIN;
	int32_t t70 = 1393728;

    t70 = (((x309/x310)!=x311)==x312);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x316 = INT8_MIN;
	int32_t t71 = -136;

    t71 = (((x313/x314)!=x315)==x316);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x317 = -1;
	uint16_t x318 = 642U;
	int32_t x319 = 483;
	int16_t x320 = INT16_MAX;
	static volatile int32_t t72 = -1414622;

    t72 = (((x317/x318)!=x319)==x320);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x321 = INT32_MIN;
	uint64_t x322 = 686883527646042687LLU;
	int16_t x323 = INT16_MIN;
	volatile int32_t t73 = -52;

    t73 = (((x321/x322)!=x323)==x324);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x325 = 0LLU;
	volatile int64_t x326 = INT64_MIN;
	static volatile uint16_t x327 = UINT16_MAX;
	int64_t x328 = INT64_MAX;
	int32_t t74 = 632589;

    t74 = (((x325/x326)!=x327)==x328);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x331 = 2;
	volatile int32_t t75 = 8269567;

    t75 = (((x329/x330)!=x331)==x332);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x333 = 3;
	static int32_t x334 = INT32_MAX;
	uint8_t x335 = UINT8_MAX;
	uint64_t x336 = 522239697399LLU;
	volatile int32_t t76 = 0;

    t76 = (((x333/x334)!=x335)==x336);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x337 = 6U;
	volatile uint8_t x338 = 5U;
	volatile int8_t x339 = -1;
	uint64_t x340 = 0LLU;

    t77 = (((x337/x338)!=x339)==x340);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x342 = INT16_MAX;
	int16_t x343 = -30;
	static volatile int64_t x344 = INT64_MAX;

    t78 = (((x341/x342)!=x343)==x344);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x346 = 147U;
	volatile uint64_t x347 = UINT64_MAX;
	static volatile int32_t t79 = -1;

    t79 = (((x345/x346)!=x347)==x348);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x349 = INT64_MAX;
	int8_t x350 = INT8_MIN;
	volatile int8_t x351 = INT8_MIN;
	int8_t x352 = INT8_MIN;
	int32_t t80 = -391;

    t80 = (((x349/x350)!=x351)==x352);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x355 = 0LL;
	static uint32_t x356 = 423684289U;
	volatile int32_t t81 = 7421391;

    t81 = (((x353/x354)!=x355)==x356);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x357 = 63;
	uint16_t x358 = 43U;
	int32_t x359 = INT32_MIN;
	static volatile int8_t x360 = INT8_MAX;
	static int32_t t82 = -253;

    t82 = (((x357/x358)!=x359)==x360);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x361 = -1;
	static uint16_t x362 = UINT16_MAX;
	uint64_t x363 = 1723LLU;
	uint16_t x364 = 151U;
	int32_t t83 = -184054;

    t83 = (((x361/x362)!=x363)==x364);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x367 = 1;
	int16_t x368 = -6;
	int32_t t84 = -384657;

    t84 = (((x365/x366)!=x367)==x368);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x369 = UINT64_MAX;
	int16_t x370 = INT16_MIN;
	static uint8_t x371 = 26U;

    t85 = (((x369/x370)!=x371)==x372);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x373 = 1587U;
	volatile uint8_t x374 = UINT8_MAX;
	static uint8_t x375 = 5U;
	uint16_t x376 = 22U;
	int32_t t86 = -491588845;

    t86 = (((x373/x374)!=x375)==x376);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x377 = INT32_MIN;
	static int8_t x378 = INT8_MIN;
	int8_t x380 = -1;
	static volatile int32_t t87 = 2229;

    t87 = (((x377/x378)!=x379)==x380);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint16_t x381 = 19U;
	int8_t x382 = INT8_MIN;
	int64_t x383 = INT64_MIN;
	int32_t x384 = 2360;
	volatile int32_t t88 = 55;

    t88 = (((x381/x382)!=x383)==x384);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x385 = 112650389;
	int16_t x386 = INT16_MIN;
	int16_t x387 = INT16_MIN;
	int16_t x388 = INT16_MAX;
	static volatile int32_t t89 = 203;

    t89 = (((x385/x386)!=x387)==x388);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x389 = 96654714;
	int32_t x390 = -1;
	int8_t x392 = -5;
	static int32_t t90 = -909;

    t90 = (((x389/x390)!=x391)==x392);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x393 = -5;
	volatile uint8_t x394 = 5U;
	int32_t x395 = -466759151;
	static uint64_t x396 = UINT64_MAX;

    t91 = (((x393/x394)!=x395)==x396);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x397 = -12739;
	volatile int32_t x400 = -6465775;

    t92 = (((x397/x398)!=x399)==x400);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x402 = -1;
	static int32_t x403 = -1;
	static int8_t x404 = -1;

    t93 = (((x401/x402)!=x403)==x404);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint8_t x405 = 15U;
	int16_t x407 = -3;
	static int64_t x408 = INT64_MIN;

    t94 = (((x405/x406)!=x407)==x408);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x409 = -6;
	uint64_t x410 = 4000038950LLU;
	uint16_t x411 = 29611U;
	uint32_t x412 = 8051U;
	static volatile int32_t t95 = -6296044;

    t95 = (((x409/x410)!=x411)==x412);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x413 = INT64_MAX;
	int16_t x415 = INT16_MAX;
	static volatile uint32_t x416 = 31722U;
	volatile int32_t t96 = -70631;

    t96 = (((x413/x414)!=x415)==x416);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x417 = 10U;
	int32_t x418 = INT32_MIN;
	static int64_t x419 = 298666761387711682LL;
	int32_t t97 = -180885;

    t97 = (((x417/x418)!=x419)==x420);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x421 = 890U;
	int32_t x422 = 3649773;
	volatile int32_t t98 = 4739265;

    t98 = (((x421/x422)!=x423)==x424);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int8_t x425 = INT8_MIN;
	uint32_t x426 = 84530U;
	int16_t x428 = INT16_MIN;
	int32_t t99 = -26483616;

    t99 = (((x425/x426)!=x427)==x428);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x433 = 1;
	int64_t x434 = -1LL;
	static int32_t x436 = -1;
	static int32_t t100 = 119;

    t100 = (((x433/x434)!=x435)==x436);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x437 = -630;
	volatile uint8_t x438 = 6U;
	volatile int32_t x440 = 0;

    t101 = (((x437/x438)!=x439)==x440);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x441 = INT32_MIN;
	volatile int64_t x443 = INT64_MAX;
	int16_t x444 = INT16_MIN;
	volatile int32_t t102 = 150;

    t102 = (((x441/x442)!=x443)==x444);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x445 = INT64_MIN;
	int64_t x446 = INT64_MAX;
	static int16_t x447 = INT16_MIN;
	static int32_t x448 = INT32_MIN;

    t103 = (((x445/x446)!=x447)==x448);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x453 = INT32_MIN;
	int32_t x455 = 33325512;
	volatile int8_t x456 = -1;
	int32_t t104 = -39878611;

    t104 = (((x453/x454)!=x455)==x456);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x457 = -1;
	static volatile uint32_t x459 = 14690969U;
	int16_t x460 = -8174;
	volatile int32_t t105 = 23592;

    t105 = (((x457/x458)!=x459)==x460);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x465 = INT32_MAX;
	int64_t x466 = -6267454661LL;
	int8_t x467 = -1;
	uint64_t x468 = 2360LLU;
	volatile int32_t t106 = -14411;

    t106 = (((x465/x466)!=x467)==x468);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x469 = -1;
	uint32_t x471 = 804737U;
	int32_t t107 = 63534287;

    t107 = (((x469/x470)!=x471)==x472);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x473 = 13764463U;
	uint16_t x474 = 130U;
	volatile uint16_t x475 = UINT16_MAX;
	static int8_t x476 = INT8_MIN;
	static int32_t t108 = -7;

    t108 = (((x473/x474)!=x475)==x476);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x477 = 1U;
	int64_t x478 = -163LL;
	uint64_t x479 = 173675375113LLU;
	volatile int8_t x480 = INT8_MIN;
	static int32_t t109 = -12692;

    t109 = (((x477/x478)!=x479)==x480);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int64_t x482 = INT64_MIN;
	volatile int32_t t110 = 87;

    t110 = (((x481/x482)!=x483)==x484);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x485 = -1;
	volatile uint16_t x486 = 19724U;
	int8_t x487 = INT8_MAX;
	volatile int32_t x488 = 101217;
	volatile int32_t t111 = -57832;

    t111 = (((x485/x486)!=x487)==x488);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x489 = -1;
	int32_t x491 = -66584122;
	int32_t x492 = 6;
	int32_t t112 = 1537216;

    t112 = (((x489/x490)!=x491)==x492);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x493 = INT64_MIN;
	volatile int16_t x494 = 1;
	uint16_t x495 = 352U;
	int64_t x496 = -1LL;
	int32_t t113 = 3;

    t113 = (((x493/x494)!=x495)==x496);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x497 = UINT16_MAX;
	volatile uint64_t x498 = 1083LLU;
	int8_t x500 = -16;
	volatile int32_t t114 = -21;

    t114 = (((x497/x498)!=x499)==x500);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint16_t x503 = UINT16_MAX;
	volatile int32_t t115 = 11484093;

    t115 = (((x501/x502)!=x503)==x504);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x505 = INT16_MIN;
	static uint64_t x506 = 5368253999156234LLU;
	volatile uint32_t x507 = 36804U;
	volatile int32_t x508 = -1;

    t116 = (((x505/x506)!=x507)==x508);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x509 = INT8_MIN;
	int16_t x510 = -1;
	int32_t t117 = 190757458;

    t117 = (((x509/x510)!=x511)==x512);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x513 = INT32_MIN;
	uint8_t x514 = 29U;
	volatile uint8_t x515 = UINT8_MAX;
	int16_t x516 = -12538;
	volatile int32_t t118 = -1;

    t118 = (((x513/x514)!=x515)==x516);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x517 = INT8_MAX;
	int64_t x518 = -69005531935LL;
	int16_t x519 = INT16_MAX;
	int32_t t119 = 31535;

    t119 = (((x517/x518)!=x519)==x520);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x521 = -1;
	uint64_t x522 = 22677365549LLU;
	volatile int16_t x523 = INT16_MAX;
	int32_t x524 = INT32_MIN;

    t120 = (((x521/x522)!=x523)==x524);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x525 = INT8_MIN;
	int32_t x526 = 20;
	int8_t x527 = INT8_MIN;
	int32_t x528 = 557;

    t121 = (((x525/x526)!=x527)==x528);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x529 = INT8_MIN;
	uint32_t x530 = 121U;
	int64_t x531 = -7117832312LL;
	int64_t x532 = INT64_MIN;

    t122 = (((x529/x530)!=x531)==x532);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x533 = -1;
	int32_t x534 = -1;
	volatile uint64_t x535 = UINT64_MAX;
	static volatile int32_t x536 = -1;

    t123 = (((x533/x534)!=x535)==x536);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x537 = -1;
	volatile int16_t x539 = INT16_MAX;
	uint16_t x540 = UINT16_MAX;

    t124 = (((x537/x538)!=x539)==x540);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x541 = -1LL;
	volatile uint16_t x543 = 17U;
	int64_t x544 = -1183106345614LL;
	volatile int32_t t125 = -324229449;

    t125 = (((x541/x542)!=x543)==x544);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x545 = INT32_MIN;
	volatile int8_t x547 = 15;
	static int32_t x548 = INT32_MIN;

    t126 = (((x545/x546)!=x547)==x548);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x549 = 1014U;
	int64_t x550 = INT64_MIN;
	static int32_t x551 = 1;
	volatile uint8_t x552 = UINT8_MAX;
	volatile int32_t t127 = -7623409;

    t127 = (((x549/x550)!=x551)==x552);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x553 = INT8_MIN;

    t128 = (((x553/x554)!=x555)==x556);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x557 = 1U;
	int16_t x558 = INT16_MIN;
	uint16_t x560 = 1U;
	volatile int32_t t129 = 0;

    t129 = (((x557/x558)!=x559)==x560);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x562 = 5150113U;
	static uint8_t x564 = UINT8_MAX;
	int32_t t130 = -49;

    t130 = (((x561/x562)!=x563)==x564);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x565 = INT8_MAX;
	volatile int16_t x566 = INT16_MIN;
	volatile int64_t x567 = -1LL;
	volatile uint16_t x568 = UINT16_MAX;

    t131 = (((x565/x566)!=x567)==x568);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x570 = UINT8_MAX;
	uint64_t x571 = 88232443LLU;
	int32_t t132 = 88906;

    t132 = (((x569/x570)!=x571)==x572);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x573 = 14;
	int8_t x574 = INT8_MAX;
	int16_t x575 = INT16_MAX;
	int32_t t133 = 377583;

    t133 = (((x573/x574)!=x575)==x576);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x578 = 120U;
	int16_t x579 = INT16_MIN;

    t134 = (((x577/x578)!=x579)==x580);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x581 = -23406596;
	volatile uint32_t x582 = 422403233U;
	int16_t x583 = -1;
	static uint8_t x584 = 64U;
	volatile int32_t t135 = -194840299;

    t135 = (((x581/x582)!=x583)==x584);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x585 = 11U;
	int32_t x586 = INT32_MIN;
	int32_t x587 = INT32_MAX;
	int32_t x588 = INT32_MIN;
	static volatile int32_t t136 = 12;

    t136 = (((x585/x586)!=x587)==x588);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x589 = 3890003066279910880LLU;
	int16_t x590 = INT16_MAX;
	volatile int32_t x591 = INT32_MIN;
	static uint32_t x592 = 2U;
	static int32_t t137 = 0;

    t137 = (((x589/x590)!=x591)==x592);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x594 = INT64_MIN;
	uint64_t x595 = 2113040092LLU;
	uint64_t x596 = 15LLU;
	volatile int32_t t138 = 1624;

    t138 = (((x593/x594)!=x595)==x596);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint16_t x597 = 3U;
	volatile uint16_t x598 = UINT16_MAX;
	static volatile int64_t x599 = 12149LL;
	static int8_t x600 = 1;
	int32_t t139 = 1054;

    t139 = (((x597/x598)!=x599)==x600);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x602 = 34645005U;
	uint64_t x603 = UINT64_MAX;
	uint8_t x604 = UINT8_MAX;
	int32_t t140 = 31286;

    t140 = (((x601/x602)!=x603)==x604);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x607 = 41;
	uint16_t x608 = UINT16_MAX;
	volatile int32_t t141 = 18181379;

    t141 = (((x605/x606)!=x607)==x608);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x609 = 1;
	static volatile int32_t x610 = -29640;
	int8_t x611 = -36;
	static int8_t x612 = -1;

    t142 = (((x609/x610)!=x611)==x612);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x614 = 1315U;
	uint8_t x615 = 34U;
	uint32_t x616 = 329368811U;
	static int32_t t143 = 117237;

    t143 = (((x613/x614)!=x615)==x616);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint16_t x620 = UINT16_MAX;
	volatile int32_t t144 = 6512;

    t144 = (((x617/x618)!=x619)==x620);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x621 = -31;
	int64_t x624 = INT64_MIN;
	volatile int32_t t145 = 144;

    t145 = (((x621/x622)!=x623)==x624);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x625 = INT16_MIN;
	uint32_t x626 = 237894291U;

    t146 = (((x625/x626)!=x627)==x628);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x630 = -3706;
	int16_t x632 = -1;

    t147 = (((x629/x630)!=x631)==x632);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x634 = 254U;
	int32_t x635 = INT32_MIN;
	volatile uint32_t x636 = 46964240U;

    t148 = (((x633/x634)!=x635)==x636);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x637 = UINT64_MAX;
	static int32_t x638 = -1;
	int16_t x639 = -299;
	static int32_t t149 = 13726;

    t149 = (((x637/x638)!=x639)==x640);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x642 = 662700LLU;
	int32_t x643 = -1;
	static uint32_t x644 = 65648U;
	int32_t t150 = 65496;

    t150 = (((x641/x642)!=x643)==x644);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x645 = -37;
	uint32_t x646 = 4775351U;
	static int8_t x647 = INT8_MIN;
	volatile uint32_t x648 = UINT32_MAX;
	static volatile int32_t t151 = 6439;

    t151 = (((x645/x646)!=x647)==x648);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x650 = INT32_MIN;
	uint8_t x651 = UINT8_MAX;
	volatile int32_t t152 = 568753;

    t152 = (((x649/x650)!=x651)==x652);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x655 = INT16_MIN;
	uint32_t x656 = UINT32_MAX;
	int32_t t153 = 990649856;

    t153 = (((x653/x654)!=x655)==x656);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x657 = 41U;
	uint16_t x658 = 13678U;
	volatile int32_t x659 = INT32_MAX;
	uint16_t x660 = 60U;
	volatile int32_t t154 = 1632332;

    t154 = (((x657/x658)!=x659)==x660);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int32_t x661 = INT32_MAX;
	static int16_t x662 = INT16_MIN;
	int16_t x663 = INT16_MIN;
	int8_t x664 = 48;
	int32_t t155 = -77936;

    t155 = (((x661/x662)!=x663)==x664);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x665 = 948U;
	static int16_t x666 = -1;
	volatile int64_t x667 = INT64_MAX;
	int32_t x668 = INT32_MAX;
	int32_t t156 = -3215;

    t156 = (((x665/x666)!=x667)==x668);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x669 = 33;
	uint32_t x672 = 499130360U;

    t157 = (((x669/x670)!=x671)==x672);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x673 = INT8_MIN;
	int64_t x674 = INT64_MAX;
	uint32_t x675 = 31464040U;
	int8_t x676 = INT8_MAX;
	volatile int32_t t158 = 61784219;

    t158 = (((x673/x674)!=x675)==x676);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x677 = 25;
	uint16_t x678 = 3910U;
	static int64_t x679 = INT64_MAX;
	volatile int64_t x680 = INT64_MIN;
	volatile int32_t t159 = -5440;

    t159 = (((x677/x678)!=x679)==x680);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x681 = 45;
	static volatile uint16_t x683 = UINT16_MAX;
	int32_t t160 = -95;

    t160 = (((x681/x682)!=x683)==x684);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x687 = -1LL;
	static int64_t x688 = -1LL;
	int32_t t161 = 28528805;

    t161 = (((x685/x686)!=x687)==x688);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x689 = INT8_MIN;
	static uint16_t x692 = 294U;
	static volatile int32_t t162 = 686091933;

    t162 = (((x689/x690)!=x691)==x692);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x693 = UINT32_MAX;
	int64_t x695 = INT64_MIN;
	volatile int32_t x696 = 554507;
	volatile int32_t t163 = 5083;

    t163 = (((x693/x694)!=x695)==x696);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x697 = 568401006946LLU;
	int16_t x698 = INT16_MAX;
	static int64_t x699 = INT64_MIN;
	int32_t x700 = -7267826;

    t164 = (((x697/x698)!=x699)==x700);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x701 = 1267125LLU;
	uint16_t x702 = 39U;
	static volatile int8_t x703 = INT8_MIN;
	uint8_t x704 = UINT8_MAX;
	static volatile int32_t t165 = 25279529;

    t165 = (((x701/x702)!=x703)==x704);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x705 = UINT8_MAX;
	volatile int8_t x706 = -1;
	int8_t x707 = INT8_MIN;
	int64_t x708 = 60453110LL;
	int32_t t166 = 12;

    t166 = (((x705/x706)!=x707)==x708);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x710 = INT32_MAX;
	uint8_t x712 = 0U;
	int32_t t167 = 72;

    t167 = (((x709/x710)!=x711)==x712);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x713 = 5349U;
	int64_t x714 = INT64_MIN;
	volatile int16_t x715 = INT16_MAX;
	static uint32_t x716 = 210600U;
	volatile int32_t t168 = -1;

    t168 = (((x713/x714)!=x715)==x716);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x717 = INT32_MAX;
	int64_t x718 = -1LL;
	static uint8_t x719 = 28U;
	static int16_t x720 = -5;
	int32_t t169 = 0;

    t169 = (((x717/x718)!=x719)==x720);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x721 = 400;
	volatile int32_t x722 = 8959224;
	int16_t x723 = -1;
	static uint64_t x724 = 35657250LLU;
	static int32_t t170 = 27;

    t170 = (((x721/x722)!=x723)==x724);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x727 = INT64_MIN;
	int32_t t171 = -15;

    t171 = (((x725/x726)!=x727)==x728);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x729 = -401;
	uint64_t x730 = UINT64_MAX;
	static volatile uint64_t x731 = 71032767427004LLU;
	uint8_t x732 = 4U;
	volatile int32_t t172 = -16;

    t172 = (((x729/x730)!=x731)==x732);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x733 = INT32_MAX;
	int16_t x734 = -1292;
	uint32_t x735 = 234867607U;
	uint32_t x736 = 1194800582U;
	volatile int32_t t173 = 125857752;

    t173 = (((x733/x734)!=x735)==x736);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x737 = 25550;
	int32_t x738 = INT32_MAX;
	static int64_t x739 = 2890925266LL;
	static int16_t x740 = INT16_MIN;
	int32_t t174 = 10542132;

    t174 = (((x737/x738)!=x739)==x740);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x741 = UINT16_MAX;
	static int32_t x742 = 4;
	volatile uint8_t x743 = 24U;
	int16_t x744 = 24;
	volatile int32_t t175 = -203782546;

    t175 = (((x741/x742)!=x743)==x744);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x745 = INT32_MIN;
	static volatile uint8_t x746 = 13U;
	int8_t x748 = INT8_MIN;
	static int32_t t176 = -1111;

    t176 = (((x745/x746)!=x747)==x748);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x749 = -195681864;
	volatile int16_t x750 = INT16_MAX;
	int64_t x751 = 178011441910LL;
	int32_t x752 = -683040296;
	volatile int32_t t177 = 1;

    t177 = (((x749/x750)!=x751)==x752);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x757 = -149612471821328LL;
	uint32_t x758 = UINT32_MAX;
	uint64_t x760 = UINT64_MAX;
	volatile int32_t t178 = -1476;

    t178 = (((x757/x758)!=x759)==x760);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x761 = INT8_MAX;
	static int8_t x762 = INT8_MIN;
	static int32_t x763 = -1;
	static int16_t x764 = 23;
	int32_t t179 = -997;

    t179 = (((x761/x762)!=x763)==x764);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x766 = -1;
	uint64_t x767 = 1LLU;
	int64_t x768 = INT64_MIN;
	int32_t t180 = 13960083;

    t180 = (((x765/x766)!=x767)==x768);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x770 = -144340;
	int32_t x771 = INT32_MIN;
	volatile uint16_t x772 = 26317U;
	int32_t t181 = 314384605;

    t181 = (((x769/x770)!=x771)==x772);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x774 = 3902U;
	static volatile int32_t t182 = 14;

    t182 = (((x773/x774)!=x775)==x776);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x777 = UINT8_MAX;
	volatile int8_t x778 = INT8_MIN;
	int8_t x780 = -3;
	volatile int32_t t183 = 1267367;

    t183 = (((x777/x778)!=x779)==x780);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x781 = INT16_MAX;
	static uint16_t x782 = 2U;
	int32_t x783 = -1013;
	uint64_t x784 = 1711247LLU;
	volatile int32_t t184 = -17274;

    t184 = (((x781/x782)!=x783)==x784);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int32_t x785 = INT32_MIN;
	volatile int32_t x786 = INT32_MAX;
	volatile int64_t x787 = INT64_MIN;
	volatile int32_t t185 = -915113942;

    t185 = (((x785/x786)!=x787)==x788);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x789 = -1;
	uint16_t x790 = UINT16_MAX;
	int16_t x791 = INT16_MAX;
	volatile uint32_t x792 = 32U;
	int32_t t186 = 2;

    t186 = (((x789/x790)!=x791)==x792);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint16_t x793 = 1U;
	int64_t x794 = 254LL;
	static int32_t x795 = INT32_MIN;
	int32_t x796 = INT32_MIN;

    t187 = (((x793/x794)!=x795)==x796);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x797 = 2205LL;
	int16_t x798 = 316;
	int32_t x799 = 1;
	int64_t x800 = -1LL;
	volatile int32_t t188 = -3527893;

    t188 = (((x797/x798)!=x799)==x800);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x802 = 2;
	int32_t x803 = INT32_MIN;
	int16_t x804 = -1691;
	static volatile int32_t t189 = 18093;

    t189 = (((x801/x802)!=x803)==x804);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int16_t x805 = -10381;
	int64_t x806 = INT64_MAX;
	static volatile int16_t x807 = 8375;
	int16_t x808 = INT16_MIN;
	static int32_t t190 = 918427;

    t190 = (((x805/x806)!=x807)==x808);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x809 = -641;
	uint32_t x810 = 144U;
	volatile int32_t x811 = 9449507;
	static uint16_t x812 = 26U;
	static int32_t t191 = -36;

    t191 = (((x809/x810)!=x811)==x812);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x814 = INT8_MIN;
	int16_t x815 = 1;
	static int32_t t192 = 811673;

    t192 = (((x813/x814)!=x815)==x816);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x817 = INT32_MIN;
	uint16_t x818 = 15383U;
	uint32_t x819 = 32629U;
	volatile int32_t t193 = -20848695;

    t193 = (((x817/x818)!=x819)==x820);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x821 = 0;
	int8_t x822 = INT8_MAX;
	volatile uint32_t x824 = UINT32_MAX;
	static volatile int32_t t194 = -4365258;

    t194 = (((x821/x822)!=x823)==x824);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x825 = 26317556870393LLU;
	static volatile uint32_t x826 = UINT32_MAX;
	volatile uint64_t x827 = UINT64_MAX;
	static int64_t x828 = -1LL;
	volatile int32_t t195 = 23581;

    t195 = (((x825/x826)!=x827)==x828);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x829 = 25U;
	uint8_t x831 = 36U;
	volatile int32_t x832 = INT32_MIN;

    t196 = (((x829/x830)!=x831)==x832);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x833 = 4973;
	int16_t x834 = -989;
	int16_t x835 = INT16_MIN;
	uint16_t x836 = UINT16_MAX;
	volatile int32_t t197 = 11285;

    t197 = (((x833/x834)!=x835)==x836);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x838 = INT32_MIN;
	volatile int32_t x839 = -1;
	volatile int16_t x840 = INT16_MAX;
	volatile int32_t t198 = 2823;

    t198 = (((x837/x838)!=x839)==x840);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x841 = INT32_MIN;
	static int16_t x844 = -1;
	int32_t t199 = -1056498;

    t199 = (((x841/x842)!=x843)==x844);

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

