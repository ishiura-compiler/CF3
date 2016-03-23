
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

static uint64_t x11 = UINT64_MAX;
uint32_t x12 = UINT32_MAX;
static volatile uint8_t x13 = 35U;
static int16_t x16 = INT16_MAX;
int32_t x18 = INT32_MIN;
uint32_t x24 = 13U;
static int64_t x32 = -1LL;
volatile int16_t x33 = INT16_MAX;
volatile int32_t t8 = 270668663;
static int32_t t9 = 1968243;
uint16_t x42 = 7U;
static volatile uint8_t x48 = 3U;
int32_t t12 = 1601;
static int8_t x53 = INT8_MIN;
uint8_t x54 = 0U;
int64_t x57 = -3637034117426LL;
int32_t t14 = -848398638;
int64_t x64 = INT64_MIN;
int32_t t15 = 14431;
int64_t x65 = -185808807LL;
volatile uint32_t x66 = 3U;
int32_t t16 = -29460099;
int8_t x69 = 50;
volatile int32_t x71 = -1;
int32_t t17 = -174;
uint32_t x73 = 902072U;
volatile int32_t t18 = -499957;
static int16_t x77 = INT16_MIN;
int64_t x85 = 2394107LL;
int32_t t21 = 424501;
static uint16_t x89 = 3269U;
int32_t t23 = 3693;
static volatile int64_t x98 = -1LL;
uint64_t x103 = UINT64_MAX;
static int64_t x105 = INT64_MAX;
static int64_t x123 = -1LL;
int64_t x125 = -28296908557LL;
int64_t x130 = -2327269950LL;
uint64_t x134 = 328049940152576868LLU;
uint32_t x136 = 86706U;
static volatile int64_t x138 = INT64_MIN;
int32_t x142 = INT32_MIN;
int32_t t35 = -13445;
int64_t x146 = INT64_MIN;
volatile int32_t x152 = INT32_MIN;
uint64_t x153 = UINT64_MAX;
volatile int32_t t38 = 3858181;
static uint64_t x160 = UINT64_MAX;
int32_t x165 = 3;
int32_t x168 = -7623;
uint16_t x175 = 6U;
int16_t x190 = INT16_MIN;
int64_t x197 = -3236172072443364354LL;
uint32_t x202 = 3364U;
int32_t t50 = -439692860;
int64_t x207 = -1667341LL;
int64_t x208 = -806806487723444LL;
volatile int32_t x214 = INT32_MIN;
uint16_t x225 = 2463U;
uint32_t x227 = 441U;
static volatile int16_t x229 = INT16_MAX;
static int64_t x231 = 665829165361757LL;
volatile uint16_t x232 = 13798U;
int32_t t58 = -42691960;
static uint32_t x238 = 156U;
static uint32_t x239 = 29370U;
int8_t x241 = -8;
uint8_t x244 = 4U;
int64_t x250 = 32LL;
int32_t x252 = INT32_MIN;
volatile int64_t x254 = -1220512062133917791LL;
uint8_t x255 = 44U;
int8_t x256 = INT8_MAX;
int16_t x258 = 3;
int16_t x261 = INT16_MIN;
static int16_t x264 = -116;
int32_t t65 = 148415389;
uint8_t x265 = 26U;
int32_t x270 = INT32_MIN;
volatile int32_t x273 = -373;
int8_t x276 = -1;
static volatile int32_t t68 = 39060;
uint64_t x284 = 30849LLU;
static volatile int32_t t70 = -27466;
int8_t x285 = -4;
uint32_t x287 = 15776837U;
int32_t x289 = -1;
int64_t x292 = 1229533776189705762LL;
int64_t x300 = INT64_MIN;
volatile int32_t t74 = -101630;
static volatile int32_t t76 = -6;
int16_t x310 = INT16_MIN;
uint64_t x312 = 14972914LLU;
volatile int16_t x325 = 1088;
uint8_t x328 = 1U;
static volatile int64_t x333 = INT64_MIN;
static int8_t x334 = -1;
int16_t x335 = INT16_MIN;
volatile int8_t x339 = INT8_MIN;
int32_t x341 = INT32_MIN;
volatile uint8_t x345 = UINT8_MAX;
volatile int32_t x346 = -1;
volatile int16_t x349 = INT16_MAX;
int16_t x350 = -1;
volatile int32_t t91 = -7;
int32_t x376 = -125511;
uint8_t x378 = 125U;
volatile int16_t x379 = -1;
int8_t x382 = INT8_MIN;
int32_t t95 = 1;
uint32_t x385 = 21537908U;
volatile int16_t x388 = INT16_MIN;
int32_t t96 = -28281451;
int64_t x394 = INT64_MIN;
static uint64_t x417 = 2866LLU;
int32_t x418 = INT32_MIN;
int64_t x426 = 61006769759LL;
static volatile int32_t x427 = -387;
int32_t x428 = -396;
int32_t x430 = INT32_MIN;
uint32_t x433 = 14U;
int32_t t108 = 452925316;
int8_t x440 = INT8_MIN;
int32_t x446 = -5340489;
int32_t t111 = -165617;
int64_t x451 = INT64_MIN;
volatile int32_t t113 = -4407;
uint8_t x459 = 0U;
int16_t x463 = -1;
int32_t x469 = 109;
static int16_t x473 = 1;
static uint8_t x474 = UINT8_MAX;
int64_t x479 = INT64_MAX;
uint16_t x484 = 379U;
volatile int16_t x488 = INT16_MAX;
volatile uint64_t x491 = 9567LLU;
static int16_t x498 = INT16_MAX;
int8_t x502 = 11;
static int16_t x509 = -25;
int32_t t127 = -1;
int16_t x513 = INT16_MIN;
volatile uint16_t x521 = 0U;
int8_t x525 = INT8_MIN;
static int64_t x539 = -1LL;
uint16_t x540 = 19281U;
int32_t t134 = 1;
int16_t x545 = INT16_MIN;
volatile int32_t x547 = INT32_MAX;
volatile int32_t t136 = 148725427;
volatile int32_t t137 = 9578;
volatile int64_t x553 = 2062346244907452089LL;
int16_t x558 = INT16_MIN;
static volatile int32_t t139 = 125814;
uint32_t x563 = 3U;
static uint32_t x565 = 0U;
int64_t x568 = -1LL;
int16_t x577 = INT16_MIN;
uint64_t x583 = 294LLU;
uint8_t x584 = 1U;
int64_t x588 = 197701942708591024LL;
static volatile int32_t t146 = -15;
static int32_t x590 = INT32_MIN;
int32_t t147 = -1;
static uint64_t x594 = UINT64_MAX;
int64_t x597 = -3657834986LL;
uint32_t x599 = UINT32_MAX;
int64_t x602 = -518LL;
int32_t x612 = INT32_MIN;
static int32_t t152 = -85070;
int8_t x616 = INT8_MIN;
static int8_t x619 = INT8_MIN;
uint8_t x629 = 0U;
int8_t x630 = INT8_MIN;
uint16_t x634 = 24U;
volatile uint32_t x635 = UINT32_MAX;
volatile int8_t x639 = INT8_MAX;
uint8_t x641 = 3U;
static volatile int32_t t160 = 46;
int16_t x650 = INT16_MIN;
static int16_t x651 = 9019;
static volatile int32_t t164 = -1;
uint16_t x668 = 1211U;
int16_t x672 = INT16_MIN;
int64_t x677 = -1LL;
uint16_t x688 = 256U;
static int32_t x691 = INT32_MIN;
static volatile int32_t t172 = 208492701;
static uint16_t x695 = 9886U;
int16_t x705 = -80;
int16_t x711 = -1;
uint16_t x712 = 3439U;
static uint32_t x715 = 128406U;
static int8_t x726 = INT8_MIN;
int32_t x737 = INT32_MAX;
volatile int32_t t186 = -354937;
uint16_t x749 = UINT16_MAX;
int8_t x759 = INT8_MAX;
int16_t x764 = -178;
static int16_t x768 = INT16_MIN;
uint8_t x770 = 100U;
uint16_t x771 = 16528U;
uint8_t x772 = 0U;
volatile int32_t t192 = 54;
volatile int32_t t195 = 7066;
int32_t x787 = 11721;
int16_t x788 = -1011;
static volatile int16_t x796 = INT16_MAX;


void f0(void) {
    	volatile uint64_t x1 = 39843LLU;
	volatile int32_t x2 = INT32_MIN;
	volatile uint8_t x3 = 96U;
	int32_t x4 = INT32_MIN;
	int32_t t0 = -1612;

    t0 = ((x1>x2)*(x3>x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MAX;
	static uint8_t x6 = 1U;
	static volatile int8_t x7 = 1;
	static int16_t x8 = INT16_MIN;
	volatile int32_t t1 = -132351030;

    t1 = ((x5>x6)*(x7>x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	int16_t x10 = INT16_MAX;
	volatile int32_t t2 = -65271194;

    t2 = ((x9>x10)*(x11>x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x14 = 12;
	static int8_t x15 = -31;
	int32_t t3 = -918420941;

    t3 = ((x13>x14)*(x15>x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	volatile uint32_t x19 = 65U;
	uint64_t x20 = 8892138048539055658LLU;
	int32_t t4 = -6153809;

    t4 = ((x17>x18)*(x19>x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MIN;
	int16_t x22 = INT16_MAX;
	volatile int16_t x23 = 2344;
	int32_t t5 = -21;

    t5 = ((x21>x22)*(x23>x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	int8_t x26 = INT8_MIN;
	int8_t x27 = 1;
	int16_t x28 = INT16_MIN;
	int32_t t6 = 963917;

    t6 = ((x25>x26)*(x27>x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = UINT8_MAX;
	int8_t x30 = -1;
	int64_t x31 = INT64_MAX;
	int32_t t7 = -1;

    t7 = ((x29>x30)*(x31>x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x34 = INT32_MIN;
	volatile uint8_t x35 = 58U;
	int8_t x36 = INT8_MIN;

    t8 = ((x33>x34)*(x35>x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = 8949LL;
	uint16_t x38 = UINT16_MAX;
	int8_t x39 = INT8_MIN;
	int8_t x40 = INT8_MIN;

    t9 = ((x37>x38)*(x39>x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	int64_t x43 = INT64_MIN;
	int32_t x44 = 0;
	static int32_t t10 = -58;

    t10 = ((x41>x42)*(x43>x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -603;
	int16_t x46 = INT16_MAX;
	static uint8_t x47 = 10U;
	int32_t t11 = 1;

    t11 = ((x45>x46)*(x47>x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = 684;
	static uint32_t x50 = 4016102U;
	static volatile int32_t x51 = INT32_MIN;
	int32_t x52 = -1;

    t12 = ((x49>x50)*(x51>x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x55 = INT8_MAX;
	static int64_t x56 = INT64_MIN;
	int32_t t13 = -9680;

    t13 = ((x53>x54)*(x55>x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x58 = 0U;
	int16_t x59 = -1;
	int8_t x60 = INT8_MIN;

    t14 = ((x57>x58)*(x59>x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint32_t x61 = UINT32_MAX;
	volatile int8_t x62 = -1;
	uint32_t x63 = 828U;

    t15 = ((x61>x62)*(x63>x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x67 = 11807;
	uint64_t x68 = 472LLU;

    t16 = ((x65>x66)*(x67>x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x70 = UINT16_MAX;
	static int8_t x72 = 59;

    t17 = ((x69>x70)*(x71>x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x74 = 9684;
	int16_t x75 = -9109;
	static int8_t x76 = -1;

    t18 = ((x73>x74)*(x75>x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x78 = INT32_MAX;
	static int32_t x79 = 127748633;
	uint32_t x80 = UINT32_MAX;
	volatile int32_t t19 = -75;

    t19 = ((x77>x78)*(x79>x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x81 = INT8_MIN;
	uint8_t x82 = UINT8_MAX;
	volatile uint32_t x83 = 141474633U;
	uint32_t x84 = UINT32_MAX;
	int32_t t20 = 195983;

    t20 = ((x81>x82)*(x83>x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x86 = INT64_MAX;
	int64_t x87 = INT64_MIN;
	static int16_t x88 = INT16_MIN;

    t21 = ((x85>x86)*(x87>x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x90 = UINT32_MAX;
	int32_t x91 = INT32_MIN;
	static int16_t x92 = -10;
	static int32_t t22 = 9009835;

    t22 = ((x89>x90)*(x91>x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x93 = 4U;
	static int32_t x94 = 2;
	int16_t x95 = -111;
	int64_t x96 = INT64_MIN;

    t23 = ((x93>x94)*(x95>x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = 821058046591962722LLU;
	int64_t x99 = 687418019037LL;
	volatile int8_t x100 = INT8_MIN;
	volatile int32_t t24 = -413494716;

    t24 = ((x97>x98)*(x99>x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = 12U;
	int64_t x102 = 7397LL;
	volatile uint64_t x104 = 465715996696LLU;
	static int32_t t25 = 22142525;

    t25 = ((x101>x102)*(x103>x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x106 = UINT8_MAX;
	static volatile int8_t x107 = -1;
	int64_t x108 = 4138354807060LL;
	volatile int32_t t26 = 93403;

    t26 = ((x105>x106)*(x107>x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MIN;
	uint64_t x110 = 1LLU;
	static int8_t x111 = -1;
	int64_t x112 = INT64_MIN;
	int32_t t27 = 40251872;

    t27 = ((x109>x110)*(x111>x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint8_t x113 = UINT8_MAX;
	uint32_t x114 = 193U;
	int64_t x115 = -851332104574642189LL;
	int32_t x116 = 7964;
	int32_t t28 = 0;

    t28 = ((x113>x114)*(x115>x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x117 = INT16_MIN;
	volatile int16_t x118 = INT16_MIN;
	uint32_t x119 = 13866987U;
	int16_t x120 = 0;
	static int32_t t29 = 0;

    t29 = ((x117>x118)*(x119>x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MIN;
	uint64_t x122 = 4104848481465362LLU;
	volatile int16_t x124 = 56;
	volatile int32_t t30 = -511754;

    t30 = ((x121>x122)*(x123>x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x126 = INT64_MAX;
	static int8_t x127 = -19;
	volatile int32_t x128 = 30;
	int32_t t31 = 457062;

    t31 = ((x125>x126)*(x127>x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x129 = -13459504;
	int16_t x131 = -621;
	uint16_t x132 = UINT16_MAX;
	volatile int32_t t32 = 553398081;

    t32 = ((x129>x130)*(x131>x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x133 = -18239602749724380LL;
	uint64_t x135 = 27LLU;
	volatile int32_t t33 = -1;

    t33 = ((x133>x134)*(x135>x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x137 = 16659758326984LL;
	static int16_t x139 = INT16_MIN;
	int32_t x140 = INT32_MIN;
	volatile int32_t t34 = -5970;

    t34 = ((x137>x138)*(x139>x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x141 = 207701983LLU;
	int16_t x143 = INT16_MAX;
	uint32_t x144 = 177U;

    t35 = ((x141>x142)*(x143>x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x145 = INT64_MIN;
	uint64_t x147 = 8989454291LLU;
	static int16_t x148 = -1;
	volatile int32_t t36 = -20611729;

    t36 = ((x145>x146)*(x147>x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x149 = -131985982LL;
	int8_t x150 = INT8_MIN;
	int64_t x151 = 168486LL;
	static volatile int32_t t37 = -120764483;

    t37 = ((x149>x150)*(x151>x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x154 = INT16_MIN;
	uint8_t x155 = 5U;
	volatile int32_t x156 = INT32_MIN;

    t38 = ((x153>x154)*(x155>x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = 6U;
	int16_t x158 = -1;
	volatile int32_t x159 = -1;
	volatile int32_t t39 = -22525697;

    t39 = ((x157>x158)*(x159>x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x161 = INT64_MAX;
	uint64_t x162 = UINT64_MAX;
	int32_t x163 = INT32_MAX;
	static int64_t x164 = INT64_MIN;
	int32_t t40 = -264137622;

    t40 = ((x161>x162)*(x163>x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x166 = -274;
	int32_t x167 = -1;
	int32_t t41 = 121422;

    t41 = ((x165>x166)*(x167>x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MAX;
	int16_t x170 = -1;
	static int16_t x171 = 1432;
	volatile int64_t x172 = INT64_MIN;
	volatile int32_t t42 = 56192125;

    t42 = ((x169>x170)*(x171>x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = UINT64_MAX;
	static int64_t x174 = -67602107501515LL;
	volatile int32_t x176 = 1006;
	volatile int32_t t43 = 63003;

    t43 = ((x173>x174)*(x175>x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int64_t x177 = INT64_MAX;
	int32_t x178 = -2484989;
	uint8_t x179 = 119U;
	volatile uint16_t x180 = 40U;
	volatile int32_t t44 = 33378213;

    t44 = ((x177>x178)*(x179>x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = INT16_MIN;
	uint32_t x182 = 897662710U;
	int8_t x183 = INT8_MIN;
	static int16_t x184 = INT16_MIN;
	static volatile int32_t t45 = -52141335;

    t45 = ((x181>x182)*(x183>x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = -1;
	volatile uint8_t x186 = 10U;
	uint8_t x187 = UINT8_MAX;
	int64_t x188 = INT64_MIN;
	volatile int32_t t46 = 445391;

    t46 = ((x185>x186)*(x187>x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = INT16_MAX;
	uint16_t x191 = UINT16_MAX;
	int16_t x192 = -1;
	volatile int32_t t47 = 3405691;

    t47 = ((x189>x190)*(x191>x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = INT8_MAX;
	uint8_t x194 = 0U;
	int16_t x195 = 7171;
	int8_t x196 = INT8_MAX;
	volatile int32_t t48 = 14255;

    t48 = ((x193>x194)*(x195>x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x198 = INT64_MIN;
	uint32_t x199 = UINT32_MAX;
	int64_t x200 = INT64_MIN;
	volatile int32_t t49 = -69;

    t49 = ((x197>x198)*(x199>x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = INT16_MIN;
	int64_t x203 = INT64_MAX;
	int32_t x204 = INT32_MAX;

    t50 = ((x201>x202)*(x203>x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int32_t x205 = INT32_MIN;
	int32_t x206 = 33420715;
	static volatile int32_t t51 = 227906;

    t51 = ((x205>x206)*(x207>x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x209 = 7395U;
	static int16_t x210 = -1;
	static volatile int8_t x211 = -1;
	uint16_t x212 = 0U;
	int32_t t52 = -15121242;

    t52 = ((x209>x210)*(x211>x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = -1LL;
	static uint8_t x215 = UINT8_MAX;
	static int8_t x216 = -9;
	volatile int32_t t53 = -12;

    t53 = ((x213>x214)*(x215>x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x217 = INT64_MAX;
	int32_t x218 = -1;
	int16_t x219 = INT16_MIN;
	volatile int64_t x220 = INT64_MAX;
	volatile int32_t t54 = 217;

    t54 = ((x217>x218)*(x219>x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = INT16_MIN;
	int16_t x222 = INT16_MIN;
	int8_t x223 = INT8_MIN;
	uint32_t x224 = UINT32_MAX;
	int32_t t55 = -4458;

    t55 = ((x221>x222)*(x223>x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x226 = UINT8_MAX;
	uint8_t x228 = UINT8_MAX;
	int32_t t56 = 500453;

    t56 = ((x225>x226)*(x227>x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x230 = -1;
	static volatile int32_t t57 = -114327597;

    t57 = ((x229>x230)*(x231>x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = -1LL;
	int16_t x234 = INT16_MIN;
	volatile int8_t x235 = INT8_MAX;
	static int8_t x236 = INT8_MIN;

    t58 = ((x233>x234)*(x235>x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = 8U;
	volatile int64_t x240 = INT64_MIN;
	int32_t t59 = 444;

    t59 = ((x237>x238)*(x239>x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x242 = -1LL;
	volatile int32_t x243 = INT32_MIN;
	static int32_t t60 = 3304;

    t60 = ((x241>x242)*(x243>x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = INT8_MIN;
	int64_t x246 = INT64_MIN;
	int64_t x247 = -1LL;
	int8_t x248 = -1;
	volatile int32_t t61 = -42932;

    t61 = ((x245>x246)*(x247>x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x249 = -1;
	uint16_t x251 = 14994U;
	volatile int32_t t62 = 1;

    t62 = ((x249>x250)*(x251>x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x253 = -1;
	volatile int32_t t63 = 841;

    t63 = ((x253>x254)*(x255>x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x257 = 385087464LLU;
	static int64_t x259 = INT64_MIN;
	int64_t x260 = INT64_MAX;
	static volatile int32_t t64 = 3;

    t64 = ((x257>x258)*(x259>x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x262 = UINT32_MAX;
	int64_t x263 = -1LL;

    t65 = ((x261>x262)*(x263>x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x266 = 7212;
	static int32_t x267 = INT32_MIN;
	int16_t x268 = INT16_MIN;
	int32_t t66 = -70558;

    t66 = ((x265>x266)*(x267>x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x269 = 0U;
	uint32_t x271 = UINT32_MAX;
	uint64_t x272 = 15777LLU;
	int32_t t67 = 12;

    t67 = ((x269>x270)*(x271>x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x274 = 12;
	int64_t x275 = -221494453221410LL;

    t68 = ((x273>x274)*(x275>x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x277 = 30U;
	int8_t x278 = INT8_MIN;
	int16_t x279 = -347;
	uint16_t x280 = UINT16_MAX;
	volatile int32_t t69 = -942922;

    t69 = ((x277>x278)*(x279>x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = -1;
	int8_t x282 = 29;
	int8_t x283 = 1;

    t70 = ((x281>x282)*(x283>x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x286 = INT16_MAX;
	int32_t x288 = INT32_MAX;
	volatile int32_t t71 = 75393;

    t71 = ((x285>x286)*(x287>x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x290 = -1LL;
	int8_t x291 = 10;
	volatile int32_t t72 = 493;

    t72 = ((x289>x290)*(x291>x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x293 = 56574126175023335LL;
	volatile int16_t x294 = -5902;
	int8_t x295 = INT8_MIN;
	int32_t x296 = INT32_MAX;
	volatile int32_t t73 = -431;

    t73 = ((x293>x294)*(x295>x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = INT8_MAX;
	static volatile uint8_t x298 = UINT8_MAX;
	volatile uint8_t x299 = 3U;

    t74 = ((x297>x298)*(x299>x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = INT64_MIN;
	static int8_t x302 = INT8_MIN;
	int64_t x303 = INT64_MIN;
	uint16_t x304 = 24U;
	int32_t t75 = 85360343;

    t75 = ((x301>x302)*(x303>x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = INT16_MAX;
	uint64_t x306 = 6224337LLU;
	static int8_t x307 = INT8_MIN;
	static int8_t x308 = INT8_MIN;

    t76 = ((x305>x306)*(x307>x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = INT16_MIN;
	int32_t x311 = 25296668;
	volatile int32_t t77 = -5418;

    t77 = ((x309>x310)*(x311>x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = INT32_MIN;
	static int32_t x314 = INT32_MIN;
	volatile int64_t x315 = -1LL;
	volatile int32_t x316 = -1;
	static int32_t t78 = 33383943;

    t78 = ((x313>x314)*(x315>x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x317 = INT32_MAX;
	uint64_t x318 = 4453234LLU;
	static volatile uint16_t x319 = UINT16_MAX;
	int32_t x320 = -1;
	int32_t t79 = 64016859;

    t79 = ((x317>x318)*(x319>x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x321 = -1;
	int16_t x322 = -9179;
	int16_t x323 = -2440;
	int16_t x324 = 177;
	int32_t t80 = 167024704;

    t80 = ((x321>x322)*(x323>x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x326 = -2;
	uint8_t x327 = 23U;
	volatile int32_t t81 = -118095608;

    t81 = ((x325>x326)*(x327>x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = INT8_MIN;
	volatile int32_t x330 = INT32_MIN;
	int64_t x331 = 1747813302591LL;
	volatile int16_t x332 = INT16_MIN;
	int32_t t82 = 889378;

    t82 = ((x329>x330)*(x331>x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x336 = INT8_MAX;
	static int32_t t83 = -42070;

    t83 = ((x333>x334)*(x335>x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint16_t x337 = UINT16_MAX;
	int8_t x338 = INT8_MIN;
	int8_t x340 = INT8_MAX;
	int32_t t84 = 1806;

    t84 = ((x337>x338)*(x339>x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x342 = -1;
	volatile int32_t x343 = -1;
	static volatile int16_t x344 = INT16_MIN;
	int32_t t85 = 46888;

    t85 = ((x341>x342)*(x343>x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x347 = -777;
	int16_t x348 = 3675;
	volatile int32_t t86 = -7747962;

    t86 = ((x345>x346)*(x347>x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x351 = INT32_MIN;
	static uint16_t x352 = UINT16_MAX;
	volatile int32_t t87 = 1;

    t87 = ((x349>x350)*(x351>x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x353 = 0U;
	uint32_t x354 = UINT32_MAX;
	static uint16_t x355 = UINT16_MAX;
	uint8_t x356 = 1U;
	int32_t t88 = -247;

    t88 = ((x353>x354)*(x355>x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = INT16_MAX;
	static int16_t x358 = INT16_MIN;
	int32_t x359 = INT32_MIN;
	static uint64_t x360 = UINT64_MAX;
	static int32_t t89 = 339;

    t89 = ((x357>x358)*(x359>x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = -1;
	int32_t x362 = -1;
	static uint8_t x363 = 12U;
	static uint32_t x364 = UINT32_MAX;
	int32_t t90 = 109;

    t90 = ((x361>x362)*(x363>x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x365 = 1751U;
	volatile int16_t x366 = -11167;
	uint32_t x367 = UINT32_MAX;
	int16_t x368 = INT16_MIN;

    t91 = ((x365>x366)*(x367>x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x369 = -1;
	uint16_t x370 = 26622U;
	volatile int8_t x371 = -1;
	int8_t x372 = -14;
	int32_t t92 = -413;

    t92 = ((x369>x370)*(x371>x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x373 = 0;
	int8_t x374 = INT8_MIN;
	int8_t x375 = INT8_MIN;
	int32_t t93 = 1652044;

    t93 = ((x373>x374)*(x375>x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x377 = UINT32_MAX;
	static uint32_t x380 = 10478816U;
	int32_t t94 = 2105376;

    t94 = ((x377>x378)*(x379>x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x381 = 2U;
	int16_t x383 = 23;
	int8_t x384 = INT8_MAX;

    t95 = ((x381>x382)*(x383>x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x386 = UINT8_MAX;
	int32_t x387 = 0;

    t96 = ((x385>x386)*(x387>x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x389 = UINT64_MAX;
	volatile uint8_t x390 = 4U;
	uint16_t x391 = UINT16_MAX;
	static uint8_t x392 = 3U;
	int32_t t97 = -97;

    t97 = ((x389>x390)*(x391>x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x393 = 1823645U;
	static uint32_t x395 = 69418U;
	int32_t x396 = 15;
	static int32_t t98 = -1;

    t98 = ((x393>x394)*(x395>x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x397 = INT16_MIN;
	int8_t x398 = 0;
	volatile int8_t x399 = INT8_MAX;
	volatile int32_t x400 = 56331;
	int32_t t99 = 64544;

    t99 = ((x397>x398)*(x399>x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = -1;
	static uint16_t x402 = UINT16_MAX;
	int8_t x403 = INT8_MIN;
	volatile uint64_t x404 = 186048447LLU;
	volatile int32_t t100 = 15085;

    t100 = ((x401>x402)*(x403>x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = 413612696094LL;
	static uint64_t x406 = UINT64_MAX;
	int32_t x407 = -310;
	static uint16_t x408 = UINT16_MAX;
	static volatile int32_t t101 = -335;

    t101 = ((x405>x406)*(x407>x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x409 = 452U;
	volatile int8_t x410 = INT8_MAX;
	int16_t x411 = -6833;
	int32_t x412 = 3949990;
	volatile int32_t t102 = -18614416;

    t102 = ((x409>x410)*(x411>x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = 6;
	uint8_t x414 = 7U;
	int16_t x415 = INT16_MIN;
	int32_t x416 = INT32_MIN;
	int32_t t103 = 3;

    t103 = ((x413>x414)*(x415>x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x419 = -1;
	uint64_t x420 = UINT64_MAX;
	int32_t t104 = -1;

    t104 = ((x417>x418)*(x419>x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x421 = 678U;
	int16_t x422 = INT16_MIN;
	static int8_t x423 = INT8_MIN;
	int16_t x424 = 1;
	int32_t t105 = 392542742;

    t105 = ((x421>x422)*(x423>x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = INT8_MIN;
	int32_t t106 = 102009777;

    t106 = ((x425>x426)*(x427>x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x429 = -1179560827073677966LL;
	int8_t x431 = INT8_MIN;
	volatile int16_t x432 = INT16_MIN;
	volatile int32_t t107 = -113;

    t107 = ((x429>x430)*(x431>x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x434 = -1;
	static volatile int8_t x435 = INT8_MIN;
	uint32_t x436 = UINT32_MAX;

    t108 = ((x433>x434)*(x435>x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = -31394777823664431LL;
	int64_t x438 = INT64_MIN;
	int32_t x439 = 2263;
	int32_t t109 = 3;

    t109 = ((x437>x438)*(x439>x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int64_t x441 = INT64_MIN;
	int8_t x442 = -29;
	static int16_t x443 = -1341;
	uint32_t x444 = 13762736U;
	int32_t t110 = -15565;

    t110 = ((x441>x442)*(x443>x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x445 = -12;
	int16_t x447 = 507;
	int64_t x448 = INT64_MIN;

    t111 = ((x445>x446)*(x447>x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x449 = -11;
	uint32_t x450 = 50636827U;
	volatile int16_t x452 = INT16_MIN;
	volatile int32_t t112 = -82868;

    t112 = ((x449>x450)*(x451>x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = INT32_MAX;
	int32_t x454 = -475;
	static volatile int16_t x455 = -1;
	static int64_t x456 = 5182686590697225LL;

    t113 = ((x453>x454)*(x455>x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = INT16_MAX;
	volatile int64_t x458 = INT64_MAX;
	int32_t x460 = -1;
	volatile int32_t t114 = -290541347;

    t114 = ((x457>x458)*(x459>x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x461 = UINT64_MAX;
	int16_t x462 = INT16_MAX;
	uint16_t x464 = UINT16_MAX;
	int32_t t115 = -1551826;

    t115 = ((x461>x462)*(x463>x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = INT64_MIN;
	static uint32_t x466 = 32U;
	int16_t x467 = INT16_MIN;
	uint16_t x468 = 1U;
	volatile int32_t t116 = 84295389;

    t116 = ((x465>x466)*(x467>x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x470 = 7U;
	volatile int8_t x471 = INT8_MAX;
	int32_t x472 = INT32_MIN;
	int32_t t117 = 5258;

    t117 = ((x469>x470)*(x471>x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x475 = 56U;
	int64_t x476 = -1331316822161956604LL;
	int32_t t118 = -12681350;

    t118 = ((x473>x474)*(x475>x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = INT64_MAX;
	int32_t x478 = -1;
	int64_t x480 = INT64_MAX;
	int32_t t119 = 211831426;

    t119 = ((x477>x478)*(x479>x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile uint64_t x481 = 517412887LLU;
	uint64_t x482 = UINT64_MAX;
	uint64_t x483 = 205546459505LLU;
	volatile int32_t t120 = -18;

    t120 = ((x481>x482)*(x483>x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = INT16_MAX;
	int8_t x486 = INT8_MAX;
	uint64_t x487 = 15LLU;
	int32_t t121 = 669079544;

    t121 = ((x485>x486)*(x487>x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = INT16_MIN;
	uint8_t x490 = UINT8_MAX;
	int64_t x492 = -1LL;
	volatile int32_t t122 = 3;

    t122 = ((x489>x490)*(x491>x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x493 = 15U;
	int64_t x494 = 695903797711025LL;
	static uint16_t x495 = 11041U;
	volatile int32_t x496 = INT32_MIN;
	volatile int32_t t123 = -173487;

    t123 = ((x493>x494)*(x495>x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x497 = 94;
	int16_t x499 = INT16_MIN;
	static int64_t x500 = -1LL;
	static volatile int32_t t124 = 14452;

    t124 = ((x497>x498)*(x499>x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x501 = UINT8_MAX;
	static uint64_t x503 = UINT64_MAX;
	int8_t x504 = -1;
	volatile int32_t t125 = 34936;

    t125 = ((x501>x502)*(x503>x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x505 = INT32_MIN;
	static int16_t x506 = INT16_MIN;
	int8_t x507 = INT8_MAX;
	uint32_t x508 = UINT32_MAX;
	volatile int32_t t126 = 173351;

    t126 = ((x505>x506)*(x507>x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x510 = 18470503;
	int32_t x511 = INT32_MIN;
	volatile uint8_t x512 = UINT8_MAX;

    t127 = ((x509>x510)*(x511>x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x514 = -30;
	int16_t x515 = INT16_MIN;
	uint16_t x516 = 31U;
	volatile int32_t t128 = 57428;

    t128 = ((x513>x514)*(x515>x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = -3153497329495LL;
	int32_t x518 = -350673;
	static uint32_t x519 = UINT32_MAX;
	static uint32_t x520 = 2U;
	int32_t t129 = 0;

    t129 = ((x517>x518)*(x519>x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile uint8_t x522 = 0U;
	int32_t x523 = INT32_MIN;
	int16_t x524 = -43;
	volatile int32_t t130 = -103153876;

    t130 = ((x521>x522)*(x523>x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x526 = INT32_MIN;
	volatile int32_t x527 = INT32_MIN;
	uint16_t x528 = 112U;
	int32_t t131 = -579;

    t131 = ((x525>x526)*(x527>x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = INT64_MIN;
	int16_t x530 = INT16_MIN;
	int64_t x531 = INT64_MIN;
	int8_t x532 = -1;
	static int32_t t132 = 8357;

    t132 = ((x529>x530)*(x531>x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = -307375;
	int32_t x534 = INT32_MIN;
	static int64_t x535 = -43245097871886414LL;
	static int32_t x536 = -948632;
	int32_t t133 = 353594;

    t133 = ((x533>x534)*(x535>x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x537 = 5069U;
	uint64_t x538 = UINT64_MAX;

    t134 = ((x537>x538)*(x539>x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x541 = INT32_MIN;
	volatile int64_t x542 = 165989126847LL;
	volatile int32_t x543 = INT32_MIN;
	static int16_t x544 = 4052;
	static volatile int32_t t135 = 427640;

    t135 = ((x541>x542)*(x543>x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint8_t x546 = UINT8_MAX;
	volatile uint16_t x548 = UINT16_MAX;

    t136 = ((x545>x546)*(x547>x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint8_t x549 = 58U;
	int16_t x550 = INT16_MIN;
	volatile int8_t x551 = INT8_MAX;
	int8_t x552 = INT8_MIN;

    t137 = ((x549>x550)*(x551>x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint32_t x554 = 7013633U;
	volatile int16_t x555 = INT16_MIN;
	static uint16_t x556 = 1U;
	static int32_t t138 = -6;

    t138 = ((x553>x554)*(x555>x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = -1;
	int32_t x559 = INT32_MAX;
	int64_t x560 = -1LL;

    t139 = ((x557>x558)*(x559>x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x561 = INT8_MIN;
	int16_t x562 = INT16_MIN;
	volatile int8_t x564 = -1;
	volatile int32_t t140 = 44767766;

    t140 = ((x561>x562)*(x563>x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x566 = 61427585U;
	static uint16_t x567 = UINT16_MAX;
	int32_t t141 = -139571;

    t141 = ((x565>x566)*(x567>x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x569 = UINT32_MAX;
	int8_t x570 = 0;
	int16_t x571 = -41;
	int64_t x572 = -24LL;
	volatile int32_t t142 = -475940692;

    t142 = ((x569>x570)*(x571>x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x573 = 21U;
	int8_t x574 = INT8_MIN;
	uint16_t x575 = 12U;
	uint16_t x576 = 811U;
	volatile int32_t t143 = 0;

    t143 = ((x573>x574)*(x575>x576));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x578 = UINT64_MAX;
	uint64_t x579 = UINT64_MAX;
	int16_t x580 = INT16_MAX;
	volatile int32_t t144 = -794800344;

    t144 = ((x577>x578)*(x579>x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = INT16_MAX;
	int32_t x582 = INT32_MIN;
	volatile int32_t t145 = -1971131;

    t145 = ((x581>x582)*(x583>x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x585 = INT8_MIN;
	uint32_t x586 = 7183569U;
	int32_t x587 = -146510903;

    t146 = ((x585>x586)*(x587>x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int8_t x589 = INT8_MAX;
	int16_t x591 = INT16_MIN;
	int64_t x592 = -437310989LL;

    t147 = ((x589>x590)*(x591>x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int64_t x593 = INT64_MIN;
	volatile int16_t x595 = -60;
	int32_t x596 = INT32_MIN;
	static int32_t t148 = -21035;

    t148 = ((x593>x594)*(x595>x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x598 = 1;
	volatile int16_t x600 = -1;
	volatile int32_t t149 = 31813;

    t149 = ((x597>x598)*(x599>x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = INT32_MAX;
	uint16_t x603 = UINT16_MAX;
	int8_t x604 = -1;
	int32_t t150 = 82537281;

    t150 = ((x601>x602)*(x603>x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x605 = 3U;
	uint8_t x606 = UINT8_MAX;
	int16_t x607 = INT16_MIN;
	int16_t x608 = -3;
	volatile int32_t t151 = -159532445;

    t151 = ((x605>x606)*(x607>x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = INT32_MIN;
	volatile int32_t x610 = INT32_MIN;
	volatile int8_t x611 = -1;

    t152 = ((x609>x610)*(x611>x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x613 = INT64_MIN;
	int64_t x614 = INT64_MIN;
	volatile int8_t x615 = INT8_MAX;
	int32_t t153 = -23247079;

    t153 = ((x613>x614)*(x615>x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = -1498;
	volatile int32_t x618 = -1;
	static uint16_t x620 = 7931U;
	int32_t t154 = 97;

    t154 = ((x617>x618)*(x619>x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x621 = 105U;
	static uint8_t x622 = UINT8_MAX;
	static int16_t x623 = INT16_MIN;
	int64_t x624 = -1LL;
	volatile int32_t t155 = -141441;

    t155 = ((x621>x622)*(x623>x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x625 = 104068978642919874LL;
	uint16_t x626 = UINT16_MAX;
	int32_t x627 = INT32_MAX;
	static int32_t x628 = INT32_MIN;
	static int32_t t156 = 16210;

    t156 = ((x625>x626)*(x627>x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x631 = 4288U;
	int32_t x632 = INT32_MAX;
	volatile int32_t t157 = -381;

    t157 = ((x629>x630)*(x631>x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = -1;
	static int8_t x636 = INT8_MIN;
	int32_t t158 = -16096399;

    t158 = ((x633>x634)*(x635>x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x637 = UINT32_MAX;
	int64_t x638 = INT64_MAX;
	volatile uint16_t x640 = 5929U;
	volatile int32_t t159 = 113;

    t159 = ((x637>x638)*(x639>x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint16_t x642 = UINT16_MAX;
	int32_t x643 = -1;
	static volatile int32_t x644 = -1;

    t160 = ((x641>x642)*(x643>x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x645 = INT64_MIN;
	int16_t x646 = -48;
	int64_t x647 = -1LL;
	int32_t x648 = INT32_MIN;
	volatile int32_t t161 = 585;

    t161 = ((x645>x646)*(x647>x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x649 = -1;
	static volatile int16_t x652 = INT16_MIN;
	volatile int32_t t162 = 11222239;

    t162 = ((x649>x650)*(x651>x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = INT32_MIN;
	int16_t x654 = -1;
	uint8_t x655 = 37U;
	static int8_t x656 = -1;
	int32_t t163 = 0;

    t163 = ((x653>x654)*(x655>x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = INT32_MIN;
	volatile uint64_t x658 = 240027852LLU;
	volatile int64_t x659 = INT64_MIN;
	uint16_t x660 = UINT16_MAX;

    t164 = ((x657>x658)*(x659>x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MIN;
	static uint16_t x662 = 1417U;
	uint8_t x663 = UINT8_MAX;
	int16_t x664 = INT16_MIN;
	int32_t t165 = -123;

    t165 = ((x661>x662)*(x663>x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = INT8_MIN;
	static uint16_t x666 = UINT16_MAX;
	static int32_t x667 = INT32_MIN;
	static int32_t t166 = 296502089;

    t166 = ((x665>x666)*(x667>x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x669 = 37493LLU;
	static int64_t x670 = -1LL;
	int32_t x671 = -1;
	static volatile int32_t t167 = 24;

    t167 = ((x669>x670)*(x671>x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x673 = 11U;
	int8_t x674 = -1;
	volatile int8_t x675 = -7;
	static int16_t x676 = 800;
	int32_t t168 = -10094;

    t168 = ((x673>x674)*(x675>x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x678 = 48LLU;
	static int16_t x679 = INT16_MIN;
	int32_t x680 = INT32_MAX;
	volatile int32_t t169 = -383541457;

    t169 = ((x677>x678)*(x679>x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = -142;
	uint32_t x682 = UINT32_MAX;
	int64_t x683 = 653521389429819LL;
	int16_t x684 = INT16_MIN;
	volatile int32_t t170 = 57088;

    t170 = ((x681>x682)*(x683>x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = -1;
	uint8_t x686 = UINT8_MAX;
	static int16_t x687 = -1;
	int32_t t171 = -447763043;

    t171 = ((x685>x686)*(x687>x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x689 = UINT64_MAX;
	int64_t x690 = INT64_MIN;
	int32_t x692 = -1;

    t172 = ((x689>x690)*(x691>x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x693 = INT16_MIN;
	int8_t x694 = INT8_MAX;
	uint64_t x696 = 309LLU;
	volatile int32_t t173 = 547226073;

    t173 = ((x693>x694)*(x695>x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x697 = INT32_MAX;
	uint8_t x698 = 9U;
	uint8_t x699 = UINT8_MAX;
	static uint32_t x700 = 20U;
	static volatile int32_t t174 = 76433162;

    t174 = ((x697>x698)*(x699>x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = INT64_MAX;
	static volatile uint16_t x702 = 120U;
	uint64_t x703 = 18712LLU;
	volatile int64_t x704 = INT64_MAX;
	volatile int32_t t175 = 1044604426;

    t175 = ((x701>x702)*(x703>x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x706 = 63661224457708607LLU;
	volatile int32_t x707 = INT32_MAX;
	int16_t x708 = -1;
	int32_t t176 = 10;

    t176 = ((x705>x706)*(x707>x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x709 = 308LLU;
	int8_t x710 = INT8_MIN;
	volatile int32_t t177 = -222125405;

    t177 = ((x709>x710)*(x711>x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = INT32_MAX;
	int8_t x714 = 3;
	int32_t x716 = INT32_MIN;
	int32_t t178 = 12743;

    t178 = ((x713>x714)*(x715>x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = -96823354LL;
	static uint64_t x718 = UINT64_MAX;
	uint32_t x719 = 5517585U;
	uint8_t x720 = 7U;
	int32_t t179 = -473;

    t179 = ((x717>x718)*(x719>x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x721 = 96U;
	volatile uint32_t x722 = UINT32_MAX;
	uint32_t x723 = 1413471433U;
	static int32_t x724 = -1;
	volatile int32_t t180 = -67229;

    t180 = ((x721>x722)*(x723>x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x725 = 979U;
	int64_t x727 = -91794413437248675LL;
	int64_t x728 = 52211LL;
	volatile int32_t t181 = 5;

    t181 = ((x725>x726)*(x727>x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x729 = 2024508LLU;
	volatile int32_t x730 = INT32_MAX;
	int8_t x731 = -17;
	uint32_t x732 = UINT32_MAX;
	static volatile int32_t t182 = -32818;

    t182 = ((x729>x730)*(x731>x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = INT8_MAX;
	int8_t x734 = INT8_MIN;
	uint32_t x735 = 2U;
	uint64_t x736 = 1257183161LLU;
	volatile int32_t t183 = 937790;

    t183 = ((x733>x734)*(x735>x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x738 = INT8_MIN;
	int32_t x739 = INT32_MIN;
	int8_t x740 = INT8_MIN;
	int32_t t184 = 1484;

    t184 = ((x737>x738)*(x739>x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x741 = INT8_MIN;
	int64_t x742 = INT64_MIN;
	int64_t x743 = 28678LL;
	int16_t x744 = -1;
	static volatile int32_t t185 = 1205;

    t185 = ((x741>x742)*(x743>x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x745 = INT64_MIN;
	int8_t x746 = -3;
	static uint16_t x747 = 699U;
	static volatile int16_t x748 = 16093;

    t186 = ((x745>x746)*(x747>x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x750 = INT16_MAX;
	uint16_t x751 = 971U;
	int64_t x752 = INT64_MIN;
	int32_t t187 = -5880797;

    t187 = ((x749>x750)*(x751>x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = -1;
	static uint8_t x754 = 57U;
	int32_t x755 = INT32_MIN;
	uint16_t x756 = UINT16_MAX;
	int32_t t188 = 22405639;

    t188 = ((x753>x754)*(x755>x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x757 = INT64_MAX;
	int8_t x758 = 0;
	static volatile int8_t x760 = -28;
	int32_t t189 = 10729482;

    t189 = ((x757>x758)*(x759>x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x761 = UINT16_MAX;
	int8_t x762 = -1;
	uint64_t x763 = UINT64_MAX;
	volatile int32_t t190 = -370244;

    t190 = ((x761>x762)*(x763>x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = INT32_MIN;
	uint8_t x766 = 1U;
	uint32_t x767 = 0U;
	int32_t t191 = 717;

    t191 = ((x765>x766)*(x767>x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x769 = INT8_MAX;

    t192 = ((x769>x770)*(x771>x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x773 = UINT8_MAX;
	volatile uint64_t x774 = 2430918295370699702LLU;
	uint8_t x775 = 13U;
	static int8_t x776 = 20;
	static int32_t t193 = -1145;

    t193 = ((x773>x774)*(x775>x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = INT16_MAX;
	uint32_t x778 = 362072U;
	volatile int32_t x779 = INT32_MAX;
	int32_t x780 = INT32_MAX;
	volatile int32_t t194 = 30353;

    t194 = ((x777>x778)*(x779>x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x781 = 8097369818832341LLU;
	uint8_t x782 = 88U;
	uint8_t x783 = UINT8_MAX;
	uint16_t x784 = 760U;

    t195 = ((x781>x782)*(x783>x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x785 = 89656164U;
	uint8_t x786 = 1U;
	int32_t t196 = 64953;

    t196 = ((x785>x786)*(x787>x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int32_t x789 = INT32_MAX;
	volatile int8_t x790 = -1;
	uint32_t x791 = 515566U;
	int8_t x792 = 3;
	volatile int32_t t197 = -8995;

    t197 = ((x789>x790)*(x791>x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x793 = 762U;
	int32_t x794 = 249945858;
	volatile uint16_t x795 = UINT16_MAX;
	static volatile int32_t t198 = 18864186;

    t198 = ((x793>x794)*(x795>x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = INT16_MAX;
	int8_t x798 = INT8_MIN;
	uint16_t x799 = UINT16_MAX;
	volatile uint64_t x800 = UINT64_MAX;
	int32_t t199 = -95408590;

    t199 = ((x797>x798)*(x799>x800));

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

