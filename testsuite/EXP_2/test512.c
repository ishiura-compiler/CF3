
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

uint64_t x2 = UINT64_MAX;
int32_t x4 = INT32_MIN;
uint16_t x12 = 2888U;
int32_t t1 = -4707;
int32_t t2 = 4121797;
int32_t x20 = -62;
int8_t x23 = INT8_MIN;
int32_t t5 = 39435;
uint64_t x40 = 1LLU;
uint8_t x50 = UINT8_MAX;
int16_t x52 = -1;
int8_t x72 = -1;
int32_t t15 = -704520341;
int8_t x85 = INT8_MAX;
int8_t x104 = INT8_MAX;
uint8_t x108 = 26U;
static uint8_t x110 = 24U;
int32_t x116 = -1;
volatile int32_t t23 = -1691;
uint32_t x127 = 1714021551U;
uint16_t x130 = UINT16_MAX;
uint64_t x131 = 812657LLU;
volatile int32_t x141 = INT32_MAX;
int16_t x144 = -520;
static volatile int64_t x168 = INT64_MAX;
volatile int32_t t28 = 10352;
int64_t x170 = INT64_MIN;
int8_t x180 = INT8_MAX;
int64_t x183 = 1575LL;
static int64_t x200 = INT64_MIN;
int32_t t35 = -2;
int32_t x227 = -26832875;
int32_t x234 = 123;
int16_t x240 = 0;
volatile int16_t x250 = 3003;
uint16_t x251 = 22040U;
uint32_t x255 = 3789057U;
int8_t x262 = -1;
static int32_t x267 = -187515;
int8_t x278 = -1;
uint64_t x280 = 31953950222368LLU;
int8_t x283 = 0;
int32_t x289 = INT32_MAX;
static volatile int32_t x293 = -1;
static int64_t x295 = 1LL;
int32_t x301 = -8;
static int64_t x303 = -16LL;
static volatile int32_t t54 = -12365;
static int32_t x310 = -1;
int32_t x312 = INT32_MAX;
static int8_t x314 = 1;
int64_t x316 = -550932543LL;
volatile int32_t t57 = 225685;
volatile int32_t t58 = -1889;
volatile uint32_t x332 = UINT32_MAX;
int16_t x337 = -1;
volatile int32_t t61 = 1842;
uint16_t x346 = 1674U;
static int64_t x349 = -1LL;
volatile uint64_t x361 = 231604216LLU;
int64_t x364 = -1LL;
static volatile int8_t x365 = INT8_MAX;
int16_t x371 = 0;
int16_t x378 = INT16_MAX;
int16_t x379 = -11631;
volatile uint16_t x381 = 79U;
volatile int8_t x384 = -52;
int8_t x385 = INT8_MIN;
int16_t x388 = -6;
int16_t x389 = 6;
uint8_t x399 = 2U;
uint32_t x400 = UINT32_MAX;
volatile int32_t t73 = 168029;
int8_t x403 = INT8_MIN;
volatile int8_t x415 = INT8_MIN;
static int16_t x416 = 182;
volatile int32_t t78 = 705504;
int64_t x427 = INT64_MIN;
static volatile int32_t t80 = 8421572;
volatile int16_t x434 = -1;
volatile int16_t x435 = INT16_MIN;
int64_t x436 = INT64_MIN;
static int16_t x450 = INT16_MIN;
int8_t x451 = INT8_MIN;
uint8_t x453 = 30U;
volatile int32_t x462 = 0;
int16_t x483 = INT16_MIN;
volatile int32_t t90 = 22726;
uint16_t x486 = 14255U;
int64_t x487 = -1LL;
static int64_t x490 = -32457848LL;
uint8_t x492 = UINT8_MAX;
static int32_t x508 = INT32_MIN;
int32_t t97 = 0;
int32_t x522 = 1;
uint16_t x561 = UINT16_MAX;
uint32_t x562 = 845760644U;
int16_t x563 = INT16_MIN;
static int64_t x564 = INT64_MIN;
int8_t x570 = INT8_MIN;
volatile int8_t x575 = INT8_MAX;
static int32_t x577 = 286;
static int32_t x583 = -1;
static volatile uint8_t x594 = 1U;
int64_t x605 = 2186LL;
volatile int32_t t113 = -106;
static volatile uint8_t x611 = 1U;
int16_t x612 = INT16_MIN;
static uint32_t x613 = UINT32_MAX;
uint64_t x615 = UINT64_MAX;
volatile int16_t x616 = 2;
static uint16_t x617 = UINT16_MAX;
uint16_t x622 = UINT16_MAX;
uint32_t x636 = UINT32_MAX;
int8_t x643 = INT8_MIN;
int16_t x644 = -1;
static uint64_t x645 = 5247354161LLU;
int32_t t123 = 571;
int32_t x649 = INT32_MIN;
static uint8_t x650 = 3U;
volatile int32_t x661 = INT32_MIN;
volatile uint32_t x663 = 1633U;
volatile int8_t x671 = INT8_MIN;
int16_t x672 = INT16_MIN;
int32_t t128 = 3869;
int8_t x689 = -32;
volatile int32_t t133 = 15005;
uint32_t x714 = UINT32_MAX;
uint16_t x716 = 1U;
int8_t x718 = -1;
int8_t x719 = INT8_MIN;
int8_t x722 = INT8_MIN;
uint8_t x723 = 6U;
int64_t x729 = INT64_MAX;
uint64_t x732 = 99LLU;
int16_t x737 = 0;
volatile int32_t x740 = -1;
static int8_t x744 = INT8_MIN;
int16_t x746 = INT16_MIN;
static volatile int16_t x747 = INT16_MIN;
int16_t x754 = INT16_MAX;
uint64_t x755 = 1205LLU;
int8_t x765 = INT8_MIN;
volatile uint16_t x767 = 4503U;
int32_t t144 = -828212663;
static volatile uint32_t x769 = 3U;
int16_t x771 = -1;
static volatile uint8_t x778 = UINT8_MAX;
static int32_t t147 = 10704033;
volatile int16_t x787 = 199;
int32_t x791 = -1;
uint64_t x802 = UINT64_MAX;
int64_t x803 = 1082208632679097LL;
int32_t t152 = -1322;
int64_t x807 = -1LL;
int32_t t153 = -41315;
static volatile uint8_t x819 = 38U;
int16_t x830 = -1;
static int32_t t158 = 152851724;
int64_t x833 = INT64_MIN;
volatile int16_t x834 = -8280;
static uint16_t x835 = UINT16_MAX;
static int16_t x837 = INT16_MIN;
int64_t x840 = INT64_MIN;
uint16_t x844 = 5511U;
static uint8_t x846 = 5U;
int16_t x847 = 124;
int16_t x855 = -1;
int64_t x857 = INT64_MIN;
int8_t x865 = INT8_MIN;
uint32_t x867 = UINT32_MAX;
uint32_t x892 = 1387246U;
volatile int32_t t171 = -6528;
volatile int16_t x899 = INT16_MIN;
int8_t x902 = INT8_MIN;
int64_t x911 = INT64_MIN;
static int32_t x914 = -1;
int16_t x939 = INT16_MIN;
uint8_t x945 = UINT8_MAX;
uint32_t x947 = 47849U;
int16_t x949 = -1;
int8_t x951 = INT8_MAX;
static int8_t x959 = INT8_MIN;
int8_t x967 = INT8_MAX;
volatile int32_t t187 = 6975195;
uint16_t x975 = 14243U;
int8_t x978 = -63;
int32_t t189 = -44621081;
int16_t x982 = INT16_MIN;
int16_t x986 = -1;
volatile int8_t x992 = INT8_MIN;
int64_t x994 = 14LL;
volatile int32_t t193 = -926271;
uint32_t x1004 = UINT32_MAX;
uint16_t x1010 = 1625U;
volatile uint8_t x1011 = 4U;
static int32_t x1013 = INT32_MIN;
volatile int32_t t197 = -485;
static uint16_t x1017 = 166U;
uint8_t x1018 = 2U;
int8_t x1020 = -1;
volatile int32_t t198 = -17;
uint8_t x1022 = 38U;
int32_t t199 = -1308209;


void f0(void) {
    	int32_t x1 = -1;
	static int32_t x3 = -3;
	volatile int32_t t0 = -177538951;

    t0 = ((x1>(x2*x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x9 = INT16_MIN;
	static int16_t x10 = -1;
	static uint8_t x11 = 3U;

    t1 = ((x9>(x10*x11))==x12);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x13 = 4U;
	int16_t x14 = INT16_MIN;
	uint64_t x15 = 4194730609LLU;
	volatile int32_t x16 = INT32_MIN;

    t2 = ((x13>(x14*x15))==x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x17 = 4U;
	uint8_t x18 = UINT8_MAX;
	int64_t x19 = -1LL;
	volatile int32_t t3 = 1;

    t3 = ((x17>(x18*x19))==x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x21 = 799808349703673871LLU;
	int64_t x22 = 213799LL;
	int8_t x24 = -2;
	volatile int32_t t4 = -374;

    t4 = ((x21>(x22*x23))==x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x25 = 859U;
	int8_t x26 = INT8_MIN;
	int8_t x27 = -2;
	int64_t x28 = INT64_MIN;

    t5 = ((x25>(x26*x27))==x28);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x29 = 29;
	volatile int64_t x30 = -61112475LL;
	static volatile int8_t x31 = INT8_MAX;
	int64_t x32 = 29833903436LL;
	int32_t t6 = -1;

    t6 = ((x29>(x30*x31))==x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x33 = 12U;
	static volatile int8_t x34 = INT8_MIN;
	int64_t x35 = -22427423559670LL;
	int16_t x36 = -1;
	static volatile int32_t t7 = -15;

    t7 = ((x33>(x34*x35))==x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x37 = INT64_MAX;
	uint64_t x38 = UINT64_MAX;
	uint16_t x39 = 143U;
	volatile int32_t t8 = -14;

    t8 = ((x37>(x38*x39))==x40);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x41 = INT16_MIN;
	uint64_t x42 = 517629555824707LLU;
	int16_t x43 = INT16_MIN;
	volatile int8_t x44 = INT8_MIN;
	int32_t t9 = 388;

    t9 = ((x41>(x42*x43))==x44);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x49 = -1;
	uint64_t x51 = UINT64_MAX;
	volatile int32_t t10 = 31232;

    t10 = ((x49>(x50*x51))==x52);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x57 = -61628LL;
	int16_t x58 = INT16_MIN;
	int32_t x59 = -1;
	uint32_t x60 = UINT32_MAX;
	volatile int32_t t11 = 8121;

    t11 = ((x57>(x58*x59))==x60);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x61 = INT8_MAX;
	int8_t x62 = INT8_MIN;
	int8_t x63 = 59;
	uint8_t x64 = 89U;
	static int32_t t12 = -82558;

    t12 = ((x61>(x62*x63))==x64);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x65 = INT64_MIN;
	int8_t x66 = INT8_MIN;
	int16_t x67 = 12;
	static volatile int8_t x68 = INT8_MAX;
	int32_t t13 = 197044256;

    t13 = ((x65>(x66*x67))==x68);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x69 = INT32_MIN;
	uint32_t x70 = UINT32_MAX;
	static int16_t x71 = -6648;
	static int32_t t14 = 533869478;

    t14 = ((x69>(x70*x71))==x72);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x73 = 69U;
	uint8_t x74 = UINT8_MAX;
	uint64_t x75 = UINT64_MAX;
	volatile int64_t x76 = -1LL;

    t15 = ((x73>(x74*x75))==x76);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x81 = -25843;
	int64_t x82 = 11259541022335370LL;
	uint8_t x83 = UINT8_MAX;
	int16_t x84 = INT16_MIN;
	static int32_t t16 = 304539;

    t16 = ((x81>(x82*x83))==x84);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x86 = -5;
	static int8_t x87 = INT8_MIN;
	static volatile int64_t x88 = 1LL;
	int32_t t17 = 1357;

    t17 = ((x85>(x86*x87))==x88);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x93 = UINT64_MAX;
	volatile int16_t x94 = INT16_MIN;
	int16_t x95 = INT16_MIN;
	static uint16_t x96 = 7U;
	volatile int32_t t18 = 78417;

    t18 = ((x93>(x94*x95))==x96);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x101 = UINT8_MAX;
	static int64_t x102 = 27198189861347LL;
	uint8_t x103 = 0U;
	int32_t t19 = -4084;

    t19 = ((x101>(x102*x103))==x104);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x105 = INT32_MIN;
	static int32_t x106 = -19;
	int32_t x107 = -75290051;
	volatile int32_t t20 = 557;

    t20 = ((x105>(x106*x107))==x108);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x109 = 96;
	uint16_t x111 = 2U;
	static int8_t x112 = 19;
	volatile int32_t t21 = -2627429;

    t21 = ((x109>(x110*x111))==x112);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x113 = 0;
	static int8_t x114 = INT8_MIN;
	int16_t x115 = 165;
	int32_t t22 = -166624322;

    t22 = ((x113>(x114*x115))==x116);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x117 = INT32_MIN;
	int32_t x118 = -30566;
	int8_t x119 = INT8_MIN;
	int32_t x120 = 702862;

    t23 = ((x117>(x118*x119))==x120);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x125 = 39;
	uint64_t x126 = UINT64_MAX;
	uint8_t x128 = 64U;
	static int32_t t24 = 4640;

    t24 = ((x125>(x126*x127))==x128);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int64_t x129 = -175LL;
	static int64_t x132 = INT64_MAX;
	static int32_t t25 = 380;

    t25 = ((x129>(x130*x131))==x132);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x142 = INT8_MIN;
	uint64_t x143 = 14751LLU;
	volatile int32_t t26 = -812505;

    t26 = ((x141>(x142*x143))==x144);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x153 = UINT64_MAX;
	static int8_t x154 = INT8_MAX;
	int64_t x155 = -1LL;
	int8_t x156 = INT8_MAX;
	int32_t t27 = -14475;

    t27 = ((x153>(x154*x155))==x156);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x165 = 282605;
	uint32_t x166 = 4913701U;
	uint8_t x167 = UINT8_MAX;

    t28 = ((x165>(x166*x167))==x168);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x169 = 17262U;
	int16_t x171 = 0;
	int64_t x172 = 2522877817378170LL;
	int32_t t29 = 15;

    t29 = ((x169>(x170*x171))==x172);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x173 = 7325U;
	int16_t x174 = 11;
	uint32_t x175 = 54171U;
	int64_t x176 = INT64_MAX;
	static int32_t t30 = -346275285;

    t30 = ((x173>(x174*x175))==x176);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x177 = INT16_MIN;
	volatile int16_t x178 = INT16_MIN;
	int64_t x179 = -1LL;
	int32_t t31 = -271625;

    t31 = ((x177>(x178*x179))==x180);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x181 = 4168978LL;
	int8_t x182 = INT8_MIN;
	int64_t x184 = INT64_MIN;
	volatile int32_t t32 = 5815932;

    t32 = ((x181>(x182*x183))==x184);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x189 = -13026;
	int32_t x190 = INT32_MAX;
	static uint32_t x191 = 994419007U;
	uint32_t x192 = 0U;
	int32_t t33 = -2;

    t33 = ((x189>(x190*x191))==x192);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x197 = 156142;
	uint32_t x198 = UINT32_MAX;
	uint32_t x199 = UINT32_MAX;
	volatile int32_t t34 = -1;

    t34 = ((x197>(x198*x199))==x200);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x201 = UINT8_MAX;
	static volatile int16_t x202 = 80;
	int32_t x203 = 2045593;
	uint8_t x204 = UINT8_MAX;

    t35 = ((x201>(x202*x203))==x204);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int8_t x225 = -1;
	volatile uint32_t x226 = UINT32_MAX;
	int64_t x228 = INT64_MIN;
	volatile int32_t t36 = -471;

    t36 = ((x225>(x226*x227))==x228);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x229 = 142U;
	uint16_t x230 = 28608U;
	volatile uint32_t x231 = UINT32_MAX;
	int16_t x232 = INT16_MIN;
	int32_t t37 = 166128;

    t37 = ((x229>(x230*x231))==x232);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x233 = 1082089366565458800LLU;
	int16_t x235 = 0;
	static int8_t x236 = -4;
	int32_t t38 = -31646494;

    t38 = ((x233>(x234*x235))==x236);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x237 = INT16_MIN;
	uint32_t x238 = UINT32_MAX;
	int64_t x239 = -361151LL;
	int32_t t39 = -6034;

    t39 = ((x237>(x238*x239))==x240);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x241 = 1U;
	volatile uint32_t x242 = 4435U;
	uint16_t x243 = 30U;
	int32_t x244 = INT32_MIN;
	int32_t t40 = -21803;

    t40 = ((x241>(x242*x243))==x244);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x245 = INT16_MIN;
	volatile int32_t x246 = -4;
	int8_t x247 = INT8_MIN;
	int8_t x248 = 1;
	volatile int32_t t41 = -10815239;

    t41 = ((x245>(x246*x247))==x248);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x249 = UINT8_MAX;
	static volatile int8_t x252 = INT8_MIN;
	int32_t t42 = 291;

    t42 = ((x249>(x250*x251))==x252);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x253 = INT32_MAX;
	int32_t x254 = 293;
	static volatile uint8_t x256 = 0U;
	volatile int32_t t43 = 369959981;

    t43 = ((x253>(x254*x255))==x256);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x261 = -717689;
	static uint16_t x263 = 15977U;
	int64_t x264 = INT64_MAX;
	int32_t t44 = -943634;

    t44 = ((x261>(x262*x263))==x264);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x265 = -105431913789805LL;
	uint32_t x266 = UINT32_MAX;
	int32_t x268 = INT32_MIN;
	volatile int32_t t45 = -30357;

    t45 = ((x265>(x266*x267))==x268);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x269 = 30U;
	int8_t x270 = INT8_MIN;
	int8_t x271 = -9;
	int64_t x272 = INT64_MAX;
	volatile int32_t t46 = 2530998;

    t46 = ((x269>(x270*x271))==x272);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x273 = 9325491894LLU;
	uint64_t x274 = 197498LLU;
	static volatile int16_t x275 = -1;
	uint32_t x276 = 1664U;
	int32_t t47 = 327;

    t47 = ((x273>(x274*x275))==x276);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x277 = INT64_MIN;
	static uint8_t x279 = 51U;
	volatile int32_t t48 = 417302;

    t48 = ((x277>(x278*x279))==x280);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x281 = INT16_MIN;
	int32_t x282 = 318051;
	int8_t x284 = 11;
	int32_t t49 = -1;

    t49 = ((x281>(x282*x283))==x284);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x285 = -3;
	uint8_t x286 = UINT8_MAX;
	int8_t x287 = INT8_MAX;
	int16_t x288 = INT16_MIN;
	int32_t t50 = -38928;

    t50 = ((x285>(x286*x287))==x288);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint32_t x290 = UINT32_MAX;
	static uint16_t x291 = 9491U;
	int8_t x292 = -29;
	int32_t t51 = -1;

    t51 = ((x289>(x290*x291))==x292);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x294 = -1;
	uint64_t x296 = 1608819161119711LLU;
	volatile int32_t t52 = 255667;

    t52 = ((x293>(x294*x295))==x296);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x302 = INT32_MAX;
	int32_t x304 = INT32_MAX;
	int32_t t53 = -255071;

    t53 = ((x301>(x302*x303))==x304);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x305 = 1064140771706LL;
	volatile int64_t x306 = 449630337774301LL;
	static int64_t x307 = -1LL;
	uint8_t x308 = UINT8_MAX;

    t54 = ((x305>(x306*x307))==x308);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x309 = -1;
	static int32_t x311 = -1;
	static int32_t t55 = 3689650;

    t55 = ((x309>(x310*x311))==x312);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x313 = INT32_MAX;
	static int8_t x315 = -1;
	volatile int32_t t56 = 18148420;

    t56 = ((x313>(x314*x315))==x316);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x317 = INT64_MIN;
	int16_t x318 = -2946;
	int32_t x319 = -1;
	int32_t x320 = 8224732;

    t57 = ((x317>(x318*x319))==x320);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int64_t x325 = INT64_MAX;
	static volatile int32_t x326 = 1911;
	uint32_t x327 = 453U;
	static uint64_t x328 = 502LLU;

    t58 = ((x325>(x326*x327))==x328);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x329 = -15;
	uint64_t x330 = 50841635879322398LLU;
	volatile int8_t x331 = 32;
	volatile int32_t t59 = -1140898;

    t59 = ((x329>(x330*x331))==x332);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x338 = 9765U;
	static uint16_t x339 = UINT16_MAX;
	volatile int16_t x340 = INT16_MIN;
	int32_t t60 = -531937954;

    t60 = ((x337>(x338*x339))==x340);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x341 = -7;
	int8_t x342 = INT8_MIN;
	int16_t x343 = -17;
	int16_t x344 = INT16_MIN;

    t61 = ((x341>(x342*x343))==x344);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x345 = 44U;
	uint32_t x347 = 14137995U;
	static int16_t x348 = INT16_MIN;
	int32_t t62 = 3804219;

    t62 = ((x345>(x346*x347))==x348);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int8_t x350 = INT8_MIN;
	int8_t x351 = 1;
	int64_t x352 = INT64_MIN;
	static int32_t t63 = 0;

    t63 = ((x349>(x350*x351))==x352);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x353 = -1;
	volatile int32_t x354 = 31481;
	uint8_t x355 = UINT8_MAX;
	static volatile uint32_t x356 = UINT32_MAX;
	volatile int32_t t64 = 8489;

    t64 = ((x353>(x354*x355))==x356);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x362 = 30;
	static int64_t x363 = -1LL;
	int32_t t65 = -107050849;

    t65 = ((x361>(x362*x363))==x364);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x366 = INT16_MAX;
	volatile uint16_t x367 = UINT16_MAX;
	uint8_t x368 = 10U;
	int32_t t66 = -659604;

    t66 = ((x365>(x366*x367))==x368);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x369 = 3U;
	static uint8_t x370 = 119U;
	volatile int32_t x372 = 1837083;
	int32_t t67 = -264;

    t67 = ((x369>(x370*x371))==x372);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x373 = INT32_MIN;
	uint16_t x374 = 557U;
	int16_t x375 = -1931;
	int16_t x376 = -1;
	static int32_t t68 = -428745;

    t68 = ((x373>(x374*x375))==x376);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x377 = INT8_MAX;
	int16_t x380 = INT16_MIN;
	int32_t t69 = 13481;

    t69 = ((x377>(x378*x379))==x380);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x382 = -1;
	int8_t x383 = INT8_MAX;
	int32_t t70 = -5765;

    t70 = ((x381>(x382*x383))==x384);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x386 = 81U;
	int8_t x387 = INT8_MIN;
	volatile int32_t t71 = -35766815;

    t71 = ((x385>(x386*x387))==x388);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int16_t x390 = INT16_MIN;
	uint32_t x391 = UINT32_MAX;
	static int8_t x392 = 1;
	volatile int32_t t72 = -37;

    t72 = ((x389>(x390*x391))==x392);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x397 = UINT64_MAX;
	int8_t x398 = INT8_MIN;

    t73 = ((x397>(x398*x399))==x400);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x401 = INT16_MIN;
	int8_t x402 = INT8_MAX;
	int16_t x404 = -1;
	static int32_t t74 = 6665;

    t74 = ((x401>(x402*x403))==x404);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint32_t x405 = 680285U;
	int64_t x406 = -1LL;
	static int16_t x407 = INT16_MIN;
	int16_t x408 = INT16_MAX;
	int32_t t75 = 4160612;

    t75 = ((x405>(x406*x407))==x408);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint16_t x409 = 236U;
	uint64_t x410 = 471LLU;
	uint32_t x411 = UINT32_MAX;
	int32_t x412 = INT32_MIN;
	volatile int32_t t76 = 12;

    t76 = ((x409>(x410*x411))==x412);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x413 = INT64_MIN;
	static int64_t x414 = -1LL;
	static int32_t t77 = -749464416;

    t77 = ((x413>(x414*x415))==x416);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x417 = -11;
	int64_t x418 = INT64_MAX;
	volatile int8_t x419 = -1;
	uint64_t x420 = 50LLU;

    t78 = ((x417>(x418*x419))==x420);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x421 = INT64_MIN;
	int32_t x422 = -5;
	static uint16_t x423 = 7U;
	uint32_t x424 = UINT32_MAX;
	volatile int32_t t79 = 7110900;

    t79 = ((x421>(x422*x423))==x424);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int32_t x425 = INT32_MIN;
	uint64_t x426 = 411480LLU;
	static int8_t x428 = INT8_MAX;

    t80 = ((x425>(x426*x427))==x428);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x429 = 1754U;
	int32_t x430 = -1;
	static uint16_t x431 = UINT16_MAX;
	uint16_t x432 = 20U;
	int32_t t81 = -121136;

    t81 = ((x429>(x430*x431))==x432);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x433 = UINT32_MAX;
	volatile int32_t t82 = -51;

    t82 = ((x433>(x434*x435))==x436);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x437 = 1615LLU;
	static uint32_t x438 = 462945U;
	volatile uint16_t x439 = UINT16_MAX;
	int16_t x440 = 145;
	int32_t t83 = 62190330;

    t83 = ((x437>(x438*x439))==x440);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x441 = INT64_MAX;
	static int16_t x442 = INT16_MAX;
	int16_t x443 = -1559;
	static volatile int16_t x444 = INT16_MIN;
	static volatile int32_t t84 = 128142;

    t84 = ((x441>(x442*x443))==x444);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x445 = 285U;
	int32_t x446 = -1;
	static volatile int16_t x447 = 18;
	static int8_t x448 = INT8_MIN;
	static int32_t t85 = -12567894;

    t85 = ((x445>(x446*x447))==x448);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x449 = -510705364LL;
	int8_t x452 = INT8_MIN;
	volatile int32_t t86 = -31751606;

    t86 = ((x449>(x450*x451))==x452);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x454 = INT8_MIN;
	volatile uint8_t x455 = UINT8_MAX;
	int32_t x456 = INT32_MIN;
	int32_t t87 = 1266343;

    t87 = ((x453>(x454*x455))==x456);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x461 = 57U;
	int16_t x463 = -1;
	volatile int16_t x464 = 14;
	volatile int32_t t88 = 8638;

    t88 = ((x461>(x462*x463))==x464);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x465 = INT32_MIN;
	int8_t x466 = 1;
	uint16_t x467 = 671U;
	uint32_t x468 = 0U;
	int32_t t89 = 236;

    t89 = ((x465>(x466*x467))==x468);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x481 = UINT8_MAX;
	volatile uint64_t x482 = UINT64_MAX;
	static int32_t x484 = INT32_MAX;

    t90 = ((x481>(x482*x483))==x484);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x485 = -1;
	int32_t x488 = -1;
	volatile int32_t t91 = -53181976;

    t91 = ((x485>(x486*x487))==x488);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x489 = 38;
	volatile uint32_t x491 = UINT32_MAX;
	static int32_t t92 = -124657;

    t92 = ((x489>(x490*x491))==x492);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x493 = INT8_MIN;
	int8_t x494 = INT8_MAX;
	static int16_t x495 = INT16_MAX;
	volatile int32_t x496 = INT32_MAX;
	static int32_t t93 = 1620;

    t93 = ((x493>(x494*x495))==x496);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x497 = -397332157LL;
	int16_t x498 = 0;
	int32_t x499 = INT32_MIN;
	uint8_t x500 = UINT8_MAX;
	int32_t t94 = 19350255;

    t94 = ((x497>(x498*x499))==x500);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x501 = INT32_MAX;
	static int32_t x502 = 7684598;
	static int64_t x503 = -6241713197LL;
	volatile int32_t x504 = INT32_MAX;
	volatile int32_t t95 = -114;

    t95 = ((x501>(x502*x503))==x504);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x505 = -1;
	int16_t x506 = INT16_MAX;
	static uint64_t x507 = 4257459280517166666LLU;
	volatile int32_t t96 = 1014196799;

    t96 = ((x505>(x506*x507))==x508);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x517 = 924583912915536368LL;
	static int16_t x518 = -13006;
	uint8_t x519 = UINT8_MAX;
	uint32_t x520 = UINT32_MAX;

    t97 = ((x517>(x518*x519))==x520);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x521 = 822LL;
	int16_t x523 = INT16_MIN;
	uint16_t x524 = UINT16_MAX;
	volatile int32_t t98 = 9577;

    t98 = ((x521>(x522*x523))==x524);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x533 = 15U;
	uint32_t x534 = UINT32_MAX;
	static volatile uint8_t x535 = UINT8_MAX;
	int8_t x536 = 1;
	volatile int32_t t99 = 77;

    t99 = ((x533>(x534*x535))==x536);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x545 = UINT16_MAX;
	static uint64_t x546 = 2586808902711174316LLU;
	uint64_t x547 = 4038LLU;
	volatile uint8_t x548 = 24U;
	volatile int32_t t100 = -966;

    t100 = ((x545>(x546*x547))==x548);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x549 = INT16_MAX;
	uint32_t x550 = 13971849U;
	static int64_t x551 = -1LL;
	uint16_t x552 = UINT16_MAX;
	int32_t t101 = 4385;

    t101 = ((x549>(x550*x551))==x552);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x553 = -1;
	uint16_t x554 = 2824U;
	uint16_t x555 = 102U;
	static int16_t x556 = INT16_MIN;
	int32_t t102 = -109577073;

    t102 = ((x553>(x554*x555))==x556);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x557 = INT8_MIN;
	uint64_t x558 = UINT64_MAX;
	uint64_t x559 = 60LLU;
	int64_t x560 = INT64_MAX;
	int32_t t103 = -11131;

    t103 = ((x557>(x558*x559))==x560);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t t104 = 93;

    t104 = ((x561>(x562*x563))==x564);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x565 = -513;
	static uint16_t x566 = 3U;
	int16_t x567 = INT16_MIN;
	static volatile uint16_t x568 = 83U;
	volatile int32_t t105 = -506721199;

    t105 = ((x565>(x566*x567))==x568);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x569 = UINT32_MAX;
	uint8_t x571 = UINT8_MAX;
	uint16_t x572 = UINT16_MAX;
	volatile int32_t t106 = -985125;

    t106 = ((x569>(x570*x571))==x572);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x573 = -4;
	int32_t x574 = -10210;
	uint32_t x576 = 1925255220U;
	volatile int32_t t107 = 8484957;

    t107 = ((x573>(x574*x575))==x576);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x578 = -1;
	volatile int32_t x579 = -1;
	int32_t x580 = INT32_MIN;
	static volatile int32_t t108 = 22;

    t108 = ((x577>(x578*x579))==x580);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x581 = INT16_MAX;
	int32_t x582 = 0;
	volatile int16_t x584 = INT16_MIN;
	int32_t t109 = 66229;

    t109 = ((x581>(x582*x583))==x584);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x589 = -1LL;
	volatile int16_t x590 = 1;
	uint16_t x591 = UINT16_MAX;
	int32_t x592 = INT32_MIN;
	volatile int32_t t110 = -2;

    t110 = ((x589>(x590*x591))==x592);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x593 = 482U;
	uint8_t x595 = UINT8_MAX;
	static int32_t x596 = -107091;
	int32_t t111 = -118;

    t111 = ((x593>(x594*x595))==x596);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x597 = INT16_MAX;
	static uint8_t x598 = 3U;
	int8_t x599 = -1;
	int16_t x600 = INT16_MAX;
	volatile int32_t t112 = 0;

    t112 = ((x597>(x598*x599))==x600);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x606 = INT16_MIN;
	int16_t x607 = -1;
	volatile int16_t x608 = -1;

    t113 = ((x605>(x606*x607))==x608);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x609 = INT32_MIN;
	volatile uint32_t x610 = 18709U;
	volatile int32_t t114 = 1;

    t114 = ((x609>(x610*x611))==x612);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x614 = 26;
	int32_t t115 = 1;

    t115 = ((x613>(x614*x615))==x616);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x618 = INT16_MIN;
	int8_t x619 = -1;
	static int16_t x620 = INT16_MAX;
	static volatile int32_t t116 = 45279320;

    t116 = ((x617>(x618*x619))==x620);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint16_t x621 = 7U;
	uint8_t x623 = 13U;
	uint64_t x624 = 2904292332837LLU;
	int32_t t117 = -551;

    t117 = ((x621>(x622*x623))==x624);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x625 = -1521070274734LL;
	volatile int64_t x626 = 0LL;
	uint8_t x627 = UINT8_MAX;
	uint16_t x628 = UINT16_MAX;
	volatile int32_t t118 = -16522409;

    t118 = ((x625>(x626*x627))==x628);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x629 = 540308672788LLU;
	int8_t x630 = INT8_MAX;
	int64_t x631 = -2132610801LL;
	int16_t x632 = -7;
	int32_t t119 = -375753;

    t119 = ((x629>(x630*x631))==x632);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x633 = INT32_MIN;
	uint8_t x634 = 25U;
	int8_t x635 = INT8_MIN;
	static volatile int32_t t120 = 43;

    t120 = ((x633>(x634*x635))==x636);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x637 = INT64_MAX;
	int64_t x638 = -1LL;
	static volatile int16_t x639 = INT16_MAX;
	int16_t x640 = INT16_MAX;
	volatile int32_t t121 = 3844;

    t121 = ((x637>(x638*x639))==x640);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x641 = INT32_MIN;
	uint64_t x642 = 8108LLU;
	volatile int32_t t122 = -2;

    t122 = ((x641>(x642*x643))==x644);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x646 = 0U;
	uint32_t x647 = 1033419U;
	uint8_t x648 = 71U;

    t123 = ((x645>(x646*x647))==x648);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x651 = -1LL;
	uint16_t x652 = 2961U;
	int32_t t124 = 122757424;

    t124 = ((x649>(x650*x651))==x652);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x657 = UINT8_MAX;
	uint8_t x658 = 0U;
	volatile int8_t x659 = INT8_MIN;
	volatile int32_t x660 = INT32_MIN;
	volatile int32_t t125 = -37106;

    t125 = ((x657>(x658*x659))==x660);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x662 = 0;
	uint64_t x664 = 6835623198933LLU;
	volatile int32_t t126 = -7;

    t126 = ((x661>(x662*x663))==x664);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x665 = 33025351246772888LLU;
	static int64_t x666 = INT64_MAX;
	int8_t x667 = -1;
	int32_t x668 = INT32_MIN;
	volatile int32_t t127 = -310211117;

    t127 = ((x665>(x666*x667))==x668);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x669 = -1;
	uint16_t x670 = UINT16_MAX;

    t128 = ((x669>(x670*x671))==x672);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x677 = 86765022U;
	int32_t x678 = -1;
	volatile uint16_t x679 = 27397U;
	uint16_t x680 = 16200U;
	int32_t t129 = 265911625;

    t129 = ((x677>(x678*x679))==x680);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x690 = INT32_MIN;
	uint32_t x691 = 1197304984U;
	static int64_t x692 = INT64_MAX;
	volatile int32_t t130 = -2067596;

    t130 = ((x689>(x690*x691))==x692);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x697 = 36;
	uint8_t x698 = 77U;
	uint64_t x699 = UINT64_MAX;
	uint64_t x700 = 1210696244531LLU;
	int32_t t131 = -12687155;

    t131 = ((x697>(x698*x699))==x700);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x701 = -2891;
	volatile int8_t x702 = 0;
	volatile uint64_t x703 = 147259921LLU;
	static uint16_t x704 = UINT16_MAX;
	volatile int32_t t132 = -130140;

    t132 = ((x701>(x702*x703))==x704);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x705 = 6U;
	static volatile int64_t x706 = -1LL;
	int16_t x707 = INT16_MIN;
	int8_t x708 = -1;

    t133 = ((x705>(x706*x707))==x708);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x713 = 2104133837367699349LL;
	static int16_t x715 = INT16_MIN;
	volatile int32_t t134 = 1537;

    t134 = ((x713>(x714*x715))==x716);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x717 = 63;
	int8_t x720 = 5;
	volatile int32_t t135 = 1;

    t135 = ((x717>(x718*x719))==x720);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x721 = INT16_MAX;
	int64_t x724 = INT64_MAX;
	volatile int32_t t136 = 97735;

    t136 = ((x721>(x722*x723))==x724);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x730 = 10;
	static uint16_t x731 = 30844U;
	volatile int32_t t137 = 2;

    t137 = ((x729>(x730*x731))==x732);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x738 = 82334839U;
	int8_t x739 = -1;
	int32_t t138 = 177;

    t138 = ((x737>(x738*x739))==x740);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x741 = INT32_MIN;
	int32_t x742 = 6011;
	int16_t x743 = INT16_MAX;
	int32_t t139 = -1;

    t139 = ((x741>(x742*x743))==x744);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x745 = -14919532187218589LL;
	uint8_t x748 = 119U;
	int32_t t140 = 2528;

    t140 = ((x745>(x746*x747))==x748);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x753 = INT64_MIN;
	uint64_t x756 = UINT64_MAX;
	volatile int32_t t141 = -22;

    t141 = ((x753>(x754*x755))==x756);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x757 = UINT32_MAX;
	static volatile uint16_t x758 = 8U;
	int8_t x759 = 2;
	uint16_t x760 = 9U;
	volatile int32_t t142 = 1;

    t142 = ((x757>(x758*x759))==x760);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x761 = INT32_MIN;
	uint8_t x762 = 68U;
	int32_t x763 = 1170143;
	int64_t x764 = INT64_MIN;
	volatile int32_t t143 = -319651;

    t143 = ((x761>(x762*x763))==x764);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x766 = -1;
	volatile int64_t x768 = INT64_MIN;

    t144 = ((x765>(x766*x767))==x768);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x770 = UINT32_MAX;
	int16_t x772 = -1;
	volatile int32_t t145 = 20;

    t145 = ((x769>(x770*x771))==x772);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x773 = 58;
	static volatile uint32_t x774 = 3062U;
	static uint8_t x775 = 1U;
	volatile uint32_t x776 = 248371278U;
	int32_t t146 = -1240453;

    t146 = ((x773>(x774*x775))==x776);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int64_t x777 = INT64_MIN;
	int8_t x779 = 6;
	int16_t x780 = 14;

    t147 = ((x777>(x778*x779))==x780);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x785 = INT64_MAX;
	volatile int16_t x786 = INT16_MIN;
	int16_t x788 = -1;
	int32_t t148 = 1204;

    t148 = ((x785>(x786*x787))==x788);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x789 = 2LLU;
	int8_t x790 = -1;
	uint8_t x792 = 109U;
	static volatile int32_t t149 = -6857;

    t149 = ((x789>(x790*x791))==x792);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x793 = -1LL;
	volatile uint32_t x794 = 59844U;
	int16_t x795 = INT16_MIN;
	uint32_t x796 = 56400420U;
	static int32_t t150 = -210818007;

    t150 = ((x793>(x794*x795))==x796);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x797 = 138267218225135LL;
	int8_t x798 = INT8_MAX;
	static uint64_t x799 = UINT64_MAX;
	volatile int32_t x800 = INT32_MAX;
	static volatile int32_t t151 = 55155;

    t151 = ((x797>(x798*x799))==x800);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x801 = INT64_MIN;
	int32_t x804 = INT32_MIN;

    t152 = ((x801>(x802*x803))==x804);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x805 = 8;
	static volatile uint8_t x806 = 25U;
	volatile uint16_t x808 = UINT16_MAX;

    t153 = ((x805>(x806*x807))==x808);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint16_t x809 = 7045U;
	int16_t x810 = INT16_MIN;
	int32_t x811 = 1300;
	static volatile uint32_t x812 = 148U;
	volatile int32_t t154 = 217;

    t154 = ((x809>(x810*x811))==x812);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint16_t x813 = UINT16_MAX;
	uint32_t x814 = UINT32_MAX;
	volatile uint8_t x815 = 0U;
	uint32_t x816 = UINT32_MAX;
	int32_t t155 = 20644692;

    t155 = ((x813>(x814*x815))==x816);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x817 = 242020U;
	volatile uint8_t x818 = 57U;
	int16_t x820 = INT16_MIN;
	volatile int32_t t156 = -586;

    t156 = ((x817>(x818*x819))==x820);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x821 = INT16_MIN;
	static int64_t x822 = -1LL;
	static int64_t x823 = 248204482LL;
	int16_t x824 = INT16_MIN;
	int32_t t157 = -15127;

    t157 = ((x821>(x822*x823))==x824);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x829 = INT64_MIN;
	int16_t x831 = -15324;
	uint8_t x832 = UINT8_MAX;

    t158 = ((x829>(x830*x831))==x832);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x836 = -1LL;
	int32_t t159 = 112;

    t159 = ((x833>(x834*x835))==x836);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x838 = 0U;
	volatile int64_t x839 = INT64_MIN;
	volatile int32_t t160 = -4252412;

    t160 = ((x837>(x838*x839))==x840);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x841 = UINT64_MAX;
	int32_t x842 = -1;
	uint16_t x843 = UINT16_MAX;
	volatile int32_t t161 = -49919312;

    t161 = ((x841>(x842*x843))==x844);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x845 = -1;
	static uint16_t x848 = 159U;
	int32_t t162 = 31;

    t162 = ((x845>(x846*x847))==x848);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x849 = 5;
	volatile uint8_t x850 = 115U;
	int16_t x851 = -1;
	volatile uint8_t x852 = 2U;
	volatile int32_t t163 = -982746;

    t163 = ((x849>(x850*x851))==x852);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x853 = INT64_MIN;
	uint8_t x854 = UINT8_MAX;
	int64_t x856 = -3872384664821549LL;
	static int32_t t164 = 23174293;

    t164 = ((x853>(x854*x855))==x856);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x858 = -1;
	static volatile int32_t x859 = 1454941;
	int8_t x860 = INT8_MAX;
	static volatile int32_t t165 = -297022;

    t165 = ((x857>(x858*x859))==x860);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint16_t x866 = 7U;
	int8_t x868 = INT8_MIN;
	int32_t t166 = -936084;

    t166 = ((x865>(x866*x867))==x868);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x869 = 319U;
	uint64_t x870 = 1329649044LLU;
	int64_t x871 = INT64_MAX;
	static int32_t x872 = INT32_MIN;
	volatile int32_t t167 = -3660;

    t167 = ((x869>(x870*x871))==x872);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x873 = -1;
	uint8_t x874 = UINT8_MAX;
	int16_t x875 = 2006;
	static volatile int32_t x876 = -1;
	static int32_t t168 = 1060951;

    t168 = ((x873>(x874*x875))==x876);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x877 = 12U;
	uint8_t x878 = 1U;
	volatile int8_t x879 = INT8_MAX;
	int16_t x880 = -2028;
	int32_t t169 = -62410545;

    t169 = ((x877>(x878*x879))==x880);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x885 = INT32_MAX;
	static uint16_t x886 = UINT16_MAX;
	static int8_t x887 = -13;
	volatile uint16_t x888 = 974U;
	volatile int32_t t170 = 1;

    t170 = ((x885>(x886*x887))==x888);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x889 = -1;
	int16_t x890 = INT16_MIN;
	static int32_t x891 = -1;

    t171 = ((x889>(x890*x891))==x892);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x893 = INT64_MIN;
	int8_t x894 = -24;
	uint16_t x895 = 61U;
	volatile uint64_t x896 = 104LLU;
	int32_t t172 = 23461;

    t172 = ((x893>(x894*x895))==x896);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x897 = UINT16_MAX;
	static uint8_t x898 = 56U;
	volatile uint8_t x900 = UINT8_MAX;
	static int32_t t173 = -6;

    t173 = ((x897>(x898*x899))==x900);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x901 = 218391590U;
	volatile int32_t x903 = 1;
	uint16_t x904 = 9074U;
	volatile int32_t t174 = 224941;

    t174 = ((x901>(x902*x903))==x904);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x909 = INT8_MIN;
	uint64_t x910 = 38LLU;
	uint8_t x912 = UINT8_MAX;
	volatile int32_t t175 = 1029068790;

    t175 = ((x909>(x910*x911))==x912);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x913 = 535U;
	static uint8_t x915 = 1U;
	int8_t x916 = INT8_MAX;
	int32_t t176 = 7183264;

    t176 = ((x913>(x914*x915))==x916);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x921 = UINT16_MAX;
	int8_t x922 = INT8_MIN;
	uint32_t x923 = UINT32_MAX;
	static volatile int8_t x924 = INT8_MAX;
	int32_t t177 = -167;

    t177 = ((x921>(x922*x923))==x924);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x925 = INT64_MIN;
	int8_t x926 = -1;
	int8_t x927 = -1;
	int16_t x928 = INT16_MAX;
	volatile int32_t t178 = -356;

    t178 = ((x925>(x926*x927))==x928);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x933 = INT64_MAX;
	volatile int8_t x934 = 2;
	int8_t x935 = INT8_MAX;
	uint16_t x936 = UINT16_MAX;
	static int32_t t179 = 722177;

    t179 = ((x933>(x934*x935))==x936);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x937 = INT64_MIN;
	uint64_t x938 = 230960811LLU;
	static int16_t x940 = INT16_MIN;
	static int32_t t180 = -9444039;

    t180 = ((x937>(x938*x939))==x940);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x946 = -1;
	volatile int64_t x948 = INT64_MIN;
	int32_t t181 = -3930590;

    t181 = ((x945>(x946*x947))==x948);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x950 = INT16_MIN;
	int16_t x952 = INT16_MAX;
	int32_t t182 = -169;

    t182 = ((x949>(x950*x951))==x952);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x953 = INT8_MAX;
	uint16_t x954 = UINT16_MAX;
	uint8_t x955 = 6U;
	static uint16_t x956 = UINT16_MAX;
	volatile int32_t t183 = 62;

    t183 = ((x953>(x954*x955))==x956);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x957 = INT16_MIN;
	volatile int8_t x958 = INT8_MIN;
	int8_t x960 = -1;
	int32_t t184 = -60664591;

    t184 = ((x957>(x958*x959))==x960);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x961 = INT64_MIN;
	static int8_t x962 = -23;
	uint64_t x963 = UINT64_MAX;
	static int32_t x964 = INT32_MIN;
	static int32_t t185 = -54;

    t185 = ((x961>(x962*x963))==x964);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x965 = INT32_MAX;
	uint8_t x966 = UINT8_MAX;
	volatile uint16_t x968 = UINT16_MAX;
	volatile int32_t t186 = -4;

    t186 = ((x965>(x966*x967))==x968);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x969 = -1;
	volatile int8_t x970 = INT8_MAX;
	int8_t x971 = INT8_MIN;
	int8_t x972 = -1;

    t187 = ((x969>(x970*x971))==x972);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint8_t x973 = 67U;
	volatile uint8_t x974 = 125U;
	volatile uint8_t x976 = 124U;
	static volatile int32_t t188 = -5235;

    t188 = ((x973>(x974*x975))==x976);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x977 = UINT16_MAX;
	uint16_t x979 = 5408U;
	int8_t x980 = INT8_MIN;

    t189 = ((x977>(x978*x979))==x980);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x981 = 75U;
	uint32_t x983 = 131369010U;
	uint16_t x984 = 2748U;
	int32_t t190 = 0;

    t190 = ((x981>(x982*x983))==x984);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x985 = -1;
	volatile uint32_t x987 = 309U;
	static int32_t x988 = INT32_MIN;
	volatile int32_t t191 = 1434;

    t191 = ((x985>(x986*x987))==x988);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int16_t x989 = INT16_MAX;
	int32_t x990 = INT32_MAX;
	int64_t x991 = -715242LL;
	int32_t t192 = 753;

    t192 = ((x989>(x990*x991))==x992);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x993 = UINT16_MAX;
	int16_t x995 = 0;
	uint8_t x996 = 2U;

    t193 = ((x993>(x994*x995))==x996);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x1001 = 25242652724784LLU;
	uint32_t x1002 = 1477108U;
	volatile uint32_t x1003 = 4908205U;
	volatile int32_t t194 = -384;

    t194 = ((x1001>(x1002*x1003))==x1004);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1005 = UINT8_MAX;
	uint8_t x1006 = 102U;
	int8_t x1007 = INT8_MIN;
	uint64_t x1008 = UINT64_MAX;
	int32_t t195 = -4473;

    t195 = ((x1005>(x1006*x1007))==x1008);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x1009 = 753503204LL;
	int64_t x1012 = -186967765LL;
	static volatile int32_t t196 = -1783;

    t196 = ((x1009>(x1010*x1011))==x1012);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x1014 = 5;
	int8_t x1015 = 4;
	uint8_t x1016 = 0U;

    t197 = ((x1013>(x1014*x1015))==x1016);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x1019 = 20U;

    t198 = ((x1017>(x1018*x1019))==x1020);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1021 = INT16_MIN;
	int16_t x1023 = INT16_MIN;
	uint32_t x1024 = 3206U;

    t199 = ((x1021>(x1022*x1023))==x1024);

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

