
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

static int32_t x6 = -1;
int16_t x17 = -100;
uint8_t x20 = 1U;
static volatile uint16_t x21 = 3494U;
int64_t t5 = -6006334579015908LL;
uint32_t x25 = 0U;
int64_t x27 = 128725938866839LL;
int32_t x31 = INT32_MIN;
int64_t x35 = INT64_MAX;
int8_t x36 = INT8_MIN;
volatile int32_t x37 = -231706069;
volatile uint8_t x39 = UINT8_MAX;
int8_t x43 = INT8_MAX;
static uint64_t x46 = UINT64_MAX;
uint32_t x49 = 14454770U;
int32_t x50 = INT32_MIN;
int16_t x51 = -1;
static int64_t x58 = INT64_MIN;
int8_t x59 = INT8_MIN;
int16_t x68 = INT16_MIN;
int32_t x74 = INT32_MIN;
int64_t x79 = INT64_MIN;
uint8_t x80 = 9U;
static int32_t t19 = -1;
volatile uint32_t x86 = 67U;
static int64_t x88 = INT64_MIN;
int32_t x89 = -1407;
volatile int64_t t22 = 4256972LL;
int8_t x99 = INT8_MAX;
uint32_t x103 = 693U;
int64_t t25 = 1650107568570993047LL;
int16_t x115 = INT16_MIN;
int16_t x119 = INT16_MIN;
static int32_t t28 = -1636;
int32_t x124 = 3780;
int64_t x125 = INT64_MIN;
uint16_t x126 = 649U;
uint32_t x128 = 11993773U;
uint16_t x131 = 2037U;
int16_t x140 = 10012;
int32_t t32 = 0;
int32_t t34 = 129246;
static uint64_t x150 = 63LLU;
static int32_t x153 = -1;
static uint32_t t37 = 51U;
int16_t x162 = INT16_MIN;
int32_t x165 = INT32_MAX;
int32_t x170 = INT32_MIN;
int32_t t41 = -1023;
int16_t x184 = INT16_MIN;
static int8_t x185 = -1;
int64_t x187 = 320328213016LL;
volatile int32_t t49 = -1;
int64_t x209 = -4478LL;
volatile uint8_t x211 = UINT8_MAX;
static int32_t t50 = -990457;
volatile int32_t x213 = INT32_MAX;
volatile uint16_t x215 = UINT16_MAX;
volatile uint32_t x217 = UINT32_MAX;
volatile int16_t x220 = -118;
int64_t x229 = INT64_MAX;
static int16_t x241 = INT16_MIN;
uint64_t x250 = UINT64_MAX;
uint64_t x268 = 910010053763006LLU;
uint64_t t62 = 3958248396320043LLU;
uint8_t x269 = 0U;
int32_t x274 = INT32_MIN;
int8_t x278 = INT8_MIN;
uint8_t x280 = 3U;
uint64_t t65 = 0LLU;
volatile int32_t t66 = 2011;
uint16_t x288 = 230U;
uint32_t x293 = 50U;
int16_t x295 = -1;
int64_t t69 = -1LL;
static int64_t x297 = 6755LL;
int32_t x298 = INT32_MAX;
static volatile int32_t x304 = INT32_MAX;
static int32_t t71 = -2092945;
int16_t x306 = INT16_MIN;
volatile int32_t t74 = 280019;
uint8_t x317 = UINT8_MAX;
uint64_t t75 = 12LLU;
volatile int64_t x329 = INT64_MAX;
int32_t x331 = 3;
static uint64_t x334 = UINT64_MAX;
uint8_t x338 = 0U;
volatile int32_t t81 = 807745;
volatile uint16_t x348 = 1U;
int64_t t82 = 680LL;
int32_t x354 = INT32_MAX;
uint64_t x356 = UINT64_MAX;
static volatile int32_t x360 = 60;
static int32_t t85 = -828;
uint64_t x364 = 1301LLU;
volatile int8_t x366 = -10;
volatile int64_t x368 = INT64_MAX;
int64_t x373 = INT64_MAX;
int32_t x381 = -1;
volatile uint64_t x382 = 2179LLU;
volatile int64_t x383 = INT64_MAX;
int32_t x391 = 634;
int8_t x395 = INT8_MAX;
static int32_t x400 = INT32_MAX;
uint8_t x402 = 15U;
volatile int16_t x406 = INT16_MAX;
volatile int16_t x413 = INT16_MIN;
static int16_t x418 = INT16_MIN;
volatile int32_t t99 = 206;
static uint64_t x432 = 13865131LLU;
int8_t x433 = INT8_MIN;
volatile int32_t t105 = 53678003;
int8_t x447 = -1;
static int16_t x452 = INT16_MAX;
int64_t x471 = INT64_MAX;
int8_t x472 = -15;
int32_t x475 = 2006;
uint32_t x478 = UINT32_MAX;
int64_t x486 = INT64_MAX;
int16_t x491 = INT16_MIN;
int64_t x492 = -219LL;
int16_t x493 = INT16_MIN;
int16_t x496 = INT16_MAX;
static volatile uint64_t t118 = 3375LLU;
int32_t t119 = -9;
static int64_t x501 = 5833627992839LL;
uint64_t x510 = 2288994957220924820LLU;
uint32_t x516 = UINT32_MAX;
int64_t t123 = -12LL;
static uint64_t x518 = 120513242656503310LLU;
static int8_t x519 = 35;
volatile int16_t x523 = -4;
int8_t x531 = -1;
uint64_t x534 = 3954793689445221LLU;
static volatile int32_t t128 = -20;
int64_t x538 = INT64_MIN;
volatile int8_t x541 = -1;
int32_t x543 = -368;
static int64_t x544 = 6324012475639LL;
int32_t x545 = 1;
int32_t t131 = 6;
volatile uint32_t x549 = 153065651U;
static int32_t x558 = INT32_MAX;
static volatile int64_t x564 = INT64_MIN;
volatile int32_t t136 = -14;
uint32_t x577 = 1755U;
int32_t x584 = -1;
int64_t t140 = -2042LL;
uint32_t x585 = UINT32_MAX;
uint8_t x588 = UINT8_MAX;
volatile int32_t t143 = 2;
volatile int64_t x599 = INT64_MIN;
int64_t x602 = 12201988LL;
int16_t x603 = INT16_MIN;
static uint16_t x608 = 149U;
int32_t x623 = -3;
static int64_t x638 = INT64_MIN;
uint8_t x641 = UINT8_MAX;
uint8_t x642 = UINT8_MAX;
static uint64_t x644 = 6069132191598LLU;
uint64_t t155 = 1607869709LLU;
int8_t x653 = -1;
uint64_t x657 = 7759900039205380LLU;
int32_t x662 = INT32_MIN;
volatile int16_t x663 = INT16_MAX;
int8_t x664 = -1;
uint16_t x673 = UINT16_MAX;
volatile int64_t x676 = INT64_MIN;
volatile int64_t x677 = INT64_MIN;
int16_t x680 = -1;
int32_t t163 = 453019144;
int64_t x684 = INT64_MIN;
static volatile int64_t x689 = INT64_MIN;
uint64_t t167 = 43615LLU;
static uint8_t x698 = UINT8_MAX;
static int8_t x700 = 40;
volatile int32_t t170 = 3773919;
int16_t x709 = INT16_MAX;
uint32_t x716 = UINT32_MAX;
uint32_t x722 = 10749U;
static uint16_t x728 = 13279U;
int32_t x730 = INT32_MAX;
int64_t t175 = 92077LL;
volatile int32_t x740 = INT32_MIN;
volatile int8_t x743 = -10;
volatile int8_t x744 = -1;
uint8_t x745 = UINT8_MAX;
int8_t x746 = INT8_MIN;
uint64_t x749 = 14060860729068LLU;
volatile int32_t t180 = 1365;
int8_t x755 = INT8_MAX;
volatile int32_t t181 = -358739;
uint64_t t182 = 58314418164524LLU;
int64_t x766 = INT64_MIN;
volatile int64_t t183 = 54LL;
uint8_t x778 = 27U;
uint8_t x784 = UINT8_MAX;
volatile int32_t t187 = 4991;
uint8_t x786 = UINT8_MAX;
uint32_t x788 = UINT32_MAX;
int8_t x790 = -13;
uint64_t t189 = 3822810103821LLU;
int8_t x796 = -15;
uint64_t x801 = UINT64_MAX;
static uint16_t x803 = UINT16_MAX;
volatile int32_t t195 = 179;
int8_t x828 = INT8_MIN;
uint32_t t197 = 1741U;
volatile int64_t t198 = -42131487575298475LL;
static int16_t x839 = INT16_MAX;


void f0(void) {
    	volatile int32_t x1 = 49;
	uint32_t x2 = 46U;
	int32_t x3 = -3558;
	static uint8_t x4 = 10U;
	volatile int32_t t0 = -1;

    t0 = (((x1<=x2)|x3)%x4);

    if (t0 != -8) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int16_t x5 = 2629;
	uint32_t x7 = UINT32_MAX;
	int64_t x8 = -15LL;
	static int64_t t1 = 4238909265LL;

    t1 = (((x5<=x6)|x7)%x8);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = UINT8_MAX;
	static volatile uint32_t x10 = 438325086U;
	volatile int16_t x11 = -1;
	int8_t x12 = -19;
	int32_t t2 = 5;

    t2 = (((x9<=x10)|x11)%x12);

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x13 = INT16_MIN;
	int32_t x14 = INT32_MIN;
	int16_t x15 = INT16_MAX;
	volatile int8_t x16 = INT8_MAX;
	volatile int32_t t3 = -1;

    t3 = (((x13<=x14)|x15)%x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x18 = INT16_MIN;
	int16_t x19 = -319;
	static int32_t t4 = -1;

    t4 = (((x17<=x18)|x19)%x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = 0;
	int64_t x23 = INT64_MAX;
	int32_t x24 = 675996896;

    t5 = (((x21<=x22)|x23)%x24);

    if (t5 != 329976703LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x26 = -1LL;
	int8_t x28 = -1;
	volatile int64_t t6 = -19532811LL;

    t6 = (((x25<=x26)|x27)%x28);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 124U;
	int64_t x30 = -1LL;
	static int32_t x32 = INT32_MIN;
	volatile int32_t t7 = 37;

    t7 = (((x29<=x30)|x31)%x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = UINT16_MAX;
	uint32_t x34 = 722066U;
	volatile int64_t t8 = -16665683LL;

    t8 = (((x33<=x34)|x35)%x36);

    if (t8 != 127LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x38 = -4328025431378605980LL;
	static volatile uint8_t x40 = 13U;
	int32_t t9 = -130;

    t9 = (((x37<=x38)|x39)%x40);

    if (t9 != 8) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MAX;
	uint8_t x42 = 2U;
	int16_t x44 = -1;
	static volatile int32_t t10 = -103002492;

    t10 = (((x41<=x42)|x43)%x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = 187807;
	volatile int32_t x47 = 2755331;
	int64_t x48 = INT64_MAX;
	int64_t t11 = 110059LL;

    t11 = (((x45<=x46)|x47)%x48);

    if (t11 != 2755331LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x52 = INT32_MIN;
	volatile int32_t t12 = -282;

    t12 = (((x49<=x50)|x51)%x52);

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x53 = INT16_MIN;
	int8_t x54 = -1;
	int64_t x55 = -1LL;
	uint8_t x56 = UINT8_MAX;
	int64_t t13 = 2225531636698860LL;

    t13 = (((x53<=x54)|x55)%x56);

    if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MIN;
	int8_t x60 = 2;
	volatile int32_t t14 = 398929638;

    t14 = (((x57<=x58)|x59)%x60);

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = -1;
	uint64_t x62 = 7638177279LLU;
	int16_t x63 = -1;
	uint64_t x64 = 10339872740LLU;
	uint64_t t15 = 1565869517522257LLU;

    t15 = (((x61<=x62)|x63)%x64);

    if (t15 != 2549281955LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x65 = INT8_MIN;
	static int32_t x66 = INT32_MIN;
	volatile int32_t x67 = INT32_MIN;
	int32_t t16 = 27935;

    t16 = (((x65<=x66)|x67)%x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x73 = 3281830824221575701LLU;
	int64_t x75 = -1LL;
	int64_t x76 = -1LL;
	volatile int64_t t17 = -5259961000082LL;

    t17 = (((x73<=x74)|x75)%x76);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x77 = 95U;
	int8_t x78 = -1;
	int64_t t18 = -8LL;

    t18 = (((x77<=x78)|x79)%x80);

    if (t18 != -8LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x81 = 56099195LL;
	int32_t x82 = 825821345;
	int16_t x83 = -1;
	static int16_t x84 = INT16_MAX;

    t19 = (((x81<=x82)|x83)%x84);

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x85 = 11;
	int32_t x87 = -892685421;
	int64_t t20 = 274415220534444571LL;

    t20 = (((x85<=x86)|x87)%x88);

    if (t20 != -892685421LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x90 = 5193301370545LLU;
	int16_t x91 = INT16_MIN;
	static int32_t x92 = -324047;
	volatile int32_t t21 = 363380961;

    t21 = (((x89<=x90)|x91)%x92);

    if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x93 = 60872005U;
	int64_t x94 = -1LL;
	uint32_t x95 = 540296U;
	int64_t x96 = -1708LL;

    t22 = (((x93<=x94)|x95)%x96);

    if (t22 != 568LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x97 = -1;
	int64_t x98 = -6932310LL;
	static int64_t x100 = INT64_MAX;
	volatile int64_t t23 = 671LL;

    t23 = (((x97<=x98)|x99)%x100);

    if (t23 != 127LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x101 = -1;
	volatile int8_t x102 = INT8_MIN;
	uint16_t x104 = 1U;
	volatile uint32_t t24 = 798U;

    t24 = (((x101<=x102)|x103)%x104);

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x105 = 68538241119601LLU;
	static int16_t x106 = -1;
	uint16_t x107 = UINT16_MAX;
	int64_t x108 = INT64_MAX;

    t25 = (((x105<=x106)|x107)%x108);

    if (t25 != 65535LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x109 = -1LL;
	uint8_t x110 = 2U;
	int16_t x111 = INT16_MAX;
	volatile int16_t x112 = INT16_MAX;
	volatile int32_t t26 = 79448;

    t26 = (((x109<=x110)|x111)%x112);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x113 = -1851876157694LL;
	uint32_t x114 = 141U;
	volatile int64_t x116 = INT64_MAX;
	int64_t t27 = 536305014632LL;

    t27 = (((x113<=x114)|x115)%x116);

    if (t27 != -32767LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x117 = UINT32_MAX;
	uint16_t x118 = 0U;
	int8_t x120 = INT8_MIN;

    t28 = (((x117<=x118)|x119)%x120);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x121 = 70U;
	int32_t x122 = 34228;
	static volatile int32_t x123 = INT32_MIN;
	volatile int32_t t29 = 1457717;

    t29 = (((x121<=x122)|x123)%x124);

    if (t29 != -1387) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x127 = UINT64_MAX;
	uint64_t t30 = 4LLU;

    t30 = (((x125<=x126)|x127)%x128);

    if (t30 != 3967968LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x129 = INT32_MAX;
	int16_t x130 = 365;
	int64_t x132 = INT64_MAX;
	int64_t t31 = 189179028734654LL;

    t31 = (((x129<=x130)|x131)%x132);

    if (t31 != 2037LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x137 = -1;
	int32_t x138 = INT32_MIN;
	int32_t x139 = 21;

    t32 = (((x137<=x138)|x139)%x140);

    if (t32 != 21) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x141 = -1;
	int8_t x142 = -4;
	uint8_t x143 = 32U;
	uint32_t x144 = 70U;
	static volatile uint32_t t33 = 25723U;

    t33 = (((x141<=x142)|x143)%x144);

    if (t33 != 32U) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x145 = -1016735;
	uint32_t x146 = UINT32_MAX;
	static int16_t x147 = INT16_MAX;
	static int16_t x148 = -1;

    t34 = (((x145<=x146)|x147)%x148);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x149 = 114328007U;
	int8_t x151 = INT8_MIN;
	int32_t x152 = INT32_MIN;
	static volatile int32_t t35 = 1183868;

    t35 = (((x149<=x150)|x151)%x152);

    if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x154 = INT16_MIN;
	static volatile int16_t x155 = INT16_MAX;
	int8_t x156 = INT8_MAX;
	int32_t t36 = 1;

    t36 = (((x153<=x154)|x155)%x156);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x157 = INT64_MIN;
	int64_t x158 = INT64_MAX;
	int8_t x159 = -1;
	volatile uint32_t x160 = UINT32_MAX;

    t37 = (((x157<=x158)|x159)%x160);

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int8_t x161 = INT8_MAX;
	int64_t x163 = -185799537444LL;
	volatile int32_t x164 = 470701;
	volatile int64_t t38 = -11519490301LL;

    t38 = (((x161<=x162)|x163)%x164);

    if (t38 != -202415LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x166 = INT8_MIN;
	int32_t x167 = 1;
	volatile uint32_t x168 = 12U;
	static uint32_t t39 = 662940430U;

    t39 = (((x165<=x166)|x167)%x168);

    if (t39 != 1U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x169 = INT8_MAX;
	volatile int8_t x171 = INT8_MIN;
	static int64_t x172 = -60880388358506LL;
	static volatile int64_t t40 = 220669186LL;

    t40 = (((x169<=x170)|x171)%x172);

    if (t40 != -128LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x173 = -51;
	volatile int32_t x174 = -1;
	int32_t x175 = -1;
	static volatile uint16_t x176 = UINT16_MAX;

    t41 = (((x173<=x174)|x175)%x176);

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x177 = -668226;
	int64_t x178 = 1LL;
	volatile int64_t x179 = -4723593841699743LL;
	static volatile int32_t x180 = INT32_MIN;
	volatile int64_t t42 = 0LL;

    t42 = (((x177<=x178)|x179)%x180);

    if (t42 != -1694460831LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x181 = -1LL;
	static int64_t x182 = -10LL;
	int64_t x183 = -1803271LL;
	volatile int64_t t43 = -10LL;

    t43 = (((x181<=x182)|x183)%x184);

    if (t43 != -1031LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x186 = 55954969517223LL;
	uint64_t x188 = 4LLU;
	uint64_t t44 = 911852606065365997LLU;

    t44 = (((x185<=x186)|x187)%x188);

    if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x189 = INT16_MAX;
	static int32_t x190 = -1;
	int16_t x191 = -11;
	int32_t x192 = -66613317;
	int32_t t45 = 3408;

    t45 = (((x189<=x190)|x191)%x192);

    if (t45 != -11) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x193 = INT8_MAX;
	static uint64_t x194 = 68825530151LLU;
	int8_t x195 = INT8_MIN;
	static int16_t x196 = INT16_MIN;
	static int32_t t46 = 124383;

    t46 = (((x193<=x194)|x195)%x196);

    if (t46 != -127) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x197 = INT64_MIN;
	uint16_t x198 = 7U;
	int8_t x199 = -1;
	int32_t x200 = INT32_MIN;
	static int32_t t47 = 5;

    t47 = (((x197<=x198)|x199)%x200);

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x201 = 2U;
	uint16_t x202 = 2473U;
	int32_t x203 = INT32_MIN;
	uint64_t x204 = 371393525048956246LLU;
	uint64_t t48 = 182250556033671056LLU;

    t48 = (((x201<=x202)|x203)%x204);

    if (t48 != 248461344163211915LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x205 = 23U;
	static int32_t x206 = -151;
	static int16_t x207 = 2;
	int16_t x208 = INT16_MIN;

    t49 = (((x205<=x206)|x207)%x208);

    if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x210 = INT16_MIN;
	volatile int32_t x212 = INT32_MIN;

    t50 = (((x209<=x210)|x211)%x212);

    if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x214 = 1;
	static int32_t x216 = INT32_MIN;
	int32_t t51 = -16;

    t51 = (((x213<=x214)|x215)%x216);

    if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x218 = INT8_MIN;
	int64_t x219 = -1LL;
	volatile int64_t t52 = 262746148LL;

    t52 = (((x217<=x218)|x219)%x220);

    if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x221 = 3405673305LLU;
	int64_t x222 = INT64_MIN;
	int64_t x223 = INT64_MIN;
	static int16_t x224 = 260;
	volatile int64_t t53 = -6997LL;

    t53 = (((x221<=x222)|x223)%x224);

    if (t53 != -7LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint16_t x230 = UINT16_MAX;
	static int16_t x231 = INT16_MAX;
	int16_t x232 = -1;
	int32_t t54 = -3827;

    t54 = (((x229<=x230)|x231)%x232);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x233 = 2;
	static int32_t x234 = INT32_MIN;
	int16_t x235 = INT16_MIN;
	int8_t x236 = INT8_MIN;
	static int32_t t55 = 819084230;

    t55 = (((x233<=x234)|x235)%x236);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x237 = -1;
	int16_t x238 = -1;
	int32_t x239 = INT32_MIN;
	uint8_t x240 = UINT8_MAX;
	volatile int32_t t56 = -118942;

    t56 = (((x237<=x238)|x239)%x240);

    if (t56 != -127) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x242 = 2U;
	int64_t x243 = 9306827108LL;
	volatile int16_t x244 = -5018;
	static int64_t t57 = 416279291005325488LL;

    t57 = (((x241<=x242)|x243)%x244);

    if (t57 != 2725LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x245 = -91052LL;
	int64_t x246 = 1LL;
	int8_t x247 = INT8_MIN;
	uint64_t x248 = 507359LLU;
	uint64_t t58 = 4192817726LLU;

    t58 = (((x245<=x246)|x247)%x248);

    if (t58 != 118470LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint64_t x249 = UINT64_MAX;
	int32_t x251 = INT32_MIN;
	int8_t x252 = -48;
	volatile int32_t t59 = 0;

    t59 = (((x249<=x250)|x251)%x252);

    if (t59 != -31) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x257 = INT32_MAX;
	uint16_t x258 = UINT16_MAX;
	static int8_t x259 = INT8_MIN;
	static int16_t x260 = 3;
	static int32_t t60 = -24652;

    t60 = (((x257<=x258)|x259)%x260);

    if (t60 != -2) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x261 = 138845837831LLU;
	static int64_t x262 = INT64_MAX;
	static int16_t x263 = INT16_MIN;
	uint8_t x264 = UINT8_MAX;
	volatile int32_t t61 = -47020;

    t61 = (((x261<=x262)|x263)%x264);

    if (t61 != -127) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x265 = 3;
	uint16_t x266 = 3917U;
	uint16_t x267 = 2494U;

    t62 = (((x265<=x266)|x267)%x268);

    if (t62 != 2495LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x270 = UINT32_MAX;
	int16_t x271 = INT16_MIN;
	uint8_t x272 = UINT8_MAX;
	int32_t t63 = 3718093;

    t63 = (((x269<=x270)|x271)%x272);

    if (t63 != -127) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x273 = INT64_MIN;
	static int16_t x275 = INT16_MIN;
	volatile int64_t x276 = -5568740372LL;
	static int64_t t64 = -250134353LL;

    t64 = (((x273<=x274)|x275)%x276);

    if (t64 != -32767LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x277 = INT32_MIN;
	uint64_t x279 = 136811708751870902LLU;

    t65 = (((x277<=x278)|x279)%x280);

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x281 = 958U;
	static int32_t x282 = -14174252;
	int16_t x283 = INT16_MAX;
	int16_t x284 = -1;

    t66 = (((x281<=x282)|x283)%x284);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x285 = INT32_MIN;
	int8_t x286 = -1;
	volatile int16_t x287 = INT16_MIN;
	static volatile int32_t t67 = 1172208;

    t67 = (((x285<=x286)|x287)%x288);

    if (t67 != -107) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x289 = INT8_MAX;
	int8_t x290 = INT8_MIN;
	int8_t x291 = INT8_MAX;
	int64_t x292 = 35747675358697LL;
	int64_t t68 = 338LL;

    t68 = (((x289<=x290)|x291)%x292);

    if (t68 != 127LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x294 = -30691889;
	int64_t x296 = INT64_MAX;

    t69 = (((x293<=x294)|x295)%x296);

    if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x299 = 5U;
	int64_t x300 = INT64_MIN;
	int64_t t70 = -902127129LL;

    t70 = (((x297<=x298)|x299)%x300);

    if (t70 != 5LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x301 = INT8_MIN;
	int8_t x302 = INT8_MIN;
	int8_t x303 = 3;

    t71 = (((x301<=x302)|x303)%x304);

    if (t71 != 3) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x305 = -9;
	static int8_t x307 = -1;
	static int64_t x308 = -1LL;
	volatile int64_t t72 = -60012105LL;

    t72 = (((x305<=x306)|x307)%x308);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x309 = UINT8_MAX;
	static int64_t x310 = INT64_MAX;
	int32_t x311 = 58490;
	int32_t x312 = INT32_MAX;
	int32_t t73 = -301835;

    t73 = (((x309<=x310)|x311)%x312);

    if (t73 != 58491) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x313 = -1;
	static uint32_t x314 = 255904U;
	int8_t x315 = INT8_MAX;
	volatile uint16_t x316 = 44U;

    t74 = (((x313<=x314)|x315)%x316);

    if (t74 != 39) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x318 = -4;
	int32_t x319 = INT32_MIN;
	uint64_t x320 = 269LLU;

    t75 = (((x317<=x318)|x319)%x320);

    if (t75 != 168LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x321 = 1;
	int64_t x322 = -108LL;
	static int8_t x323 = -1;
	static int32_t x324 = INT32_MAX;
	volatile int32_t t76 = 119242159;

    t76 = (((x321<=x322)|x323)%x324);

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x325 = INT32_MIN;
	int64_t x326 = -85675LL;
	int64_t x327 = INT64_MIN;
	int64_t x328 = -4562183LL;
	int64_t t77 = -379LL;

    t77 = (((x325<=x326)|x327)%x328);

    if (t77 != -3940703LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x330 = -15;
	volatile uint64_t x332 = 61278609550374LLU;
	volatile uint64_t t78 = 630LLU;

    t78 = (((x329<=x330)|x331)%x332);

    if (t78 != 3LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x333 = INT32_MIN;
	int64_t x335 = -1LL;
	uint8_t x336 = UINT8_MAX;
	volatile int64_t t79 = 70LL;

    t79 = (((x333<=x334)|x335)%x336);

    if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x337 = INT32_MIN;
	static uint64_t x339 = 67433318LLU;
	volatile int16_t x340 = INT16_MAX;
	uint64_t t80 = 25417LLU;

    t80 = (((x337<=x338)|x339)%x340);

    if (t80 != 31600LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x341 = INT8_MIN;
	uint64_t x342 = UINT64_MAX;
	int32_t x343 = INT32_MIN;
	volatile uint8_t x344 = UINT8_MAX;

    t81 = (((x341<=x342)|x343)%x344);

    if (t81 != -127) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x345 = 16U;
	volatile int16_t x346 = INT16_MAX;
	int64_t x347 = -188481195439435LL;

    t82 = (((x345<=x346)|x347)%x348);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x349 = -11059647543726479LL;
	uint32_t x350 = 78U;
	uint64_t x351 = 15520555240633LLU;
	static uint8_t x352 = UINT8_MAX;
	uint64_t t83 = 16361362871928LLU;

    t83 = (((x349<=x350)|x351)%x352);

    if (t83 != 73LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x353 = INT32_MIN;
	int64_t x355 = INT64_MAX;
	uint64_t t84 = 122439LLU;

    t84 = (((x353<=x354)|x355)%x356);

    if (t84 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x357 = 0U;
	int32_t x358 = -5058561;
	int16_t x359 = -1;

    t85 = (((x357<=x358)|x359)%x360);

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x361 = UINT32_MAX;
	int64_t x362 = -16400091628LL;
	static uint64_t x363 = 1032908703LLU;
	volatile uint64_t t86 = 5644987490661LLU;

    t86 = (((x361<=x362)|x363)%x364);

    if (t86 != 569LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x365 = INT16_MAX;
	int64_t x367 = -808219LL;
	int64_t t87 = 100966309654LL;

    t87 = (((x365<=x366)|x367)%x368);

    if (t87 != -808219LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x374 = 1;
	int32_t x375 = INT32_MIN;
	static int16_t x376 = INT16_MIN;
	int32_t t88 = 593741748;

    t88 = (((x373<=x374)|x375)%x376);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x377 = -1;
	static int64_t x378 = INT64_MIN;
	int16_t x379 = -1;
	static int16_t x380 = 1;
	volatile int32_t t89 = -796888654;

    t89 = (((x377<=x378)|x379)%x380);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x384 = 2U;
	static volatile int64_t t90 = 8581981964014220LL;

    t90 = (((x381<=x382)|x383)%x384);

    if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x385 = 12U;
	static int16_t x386 = 0;
	static int64_t x387 = -1LL;
	uint32_t x388 = UINT32_MAX;
	volatile int64_t t91 = 14346059054080837LL;

    t91 = (((x385<=x386)|x387)%x388);

    if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x389 = 3;
	int16_t x390 = -15417;
	uint64_t x392 = 157219508376568136LLU;
	static uint64_t t92 = 0LLU;

    t92 = (((x389<=x390)|x391)%x392);

    if (t92 != 634LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint16_t x393 = UINT16_MAX;
	uint8_t x394 = UINT8_MAX;
	static int32_t x396 = INT32_MIN;
	int32_t t93 = 274;

    t93 = (((x393<=x394)|x395)%x396);

    if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x397 = 4639;
	uint32_t x398 = 7731U;
	static volatile uint32_t x399 = 394U;
	uint32_t t94 = 19830U;

    t94 = (((x397<=x398)|x399)%x400);

    if (t94 != 395U) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x401 = INT8_MIN;
	int16_t x403 = INT16_MAX;
	static int32_t x404 = INT32_MIN;
	int32_t t95 = 1188888;

    t95 = (((x401<=x402)|x403)%x404);

    if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x405 = INT16_MAX;
	uint32_t x407 = UINT32_MAX;
	uint64_t x408 = UINT64_MAX;
	volatile uint64_t t96 = 513720LLU;

    t96 = (((x405<=x406)|x407)%x408);

    if (t96 != 4294967295LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x409 = INT64_MIN;
	volatile int32_t x410 = -1;
	volatile int32_t x411 = 2;
	uint16_t x412 = UINT16_MAX;
	static int32_t t97 = -52;

    t97 = (((x409<=x410)|x411)%x412);

    if (t97 != 3) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x414 = INT8_MIN;
	int64_t x415 = -1LL;
	static uint8_t x416 = 2U;
	volatile int64_t t98 = 6072LL;

    t98 = (((x413<=x414)|x415)%x416);

    if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x417 = INT8_MIN;
	int16_t x419 = INT16_MIN;
	int16_t x420 = -13139;

    t99 = (((x417<=x418)|x419)%x420);

    if (t99 != -6490) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x421 = 17230;
	int64_t x422 = INT64_MAX;
	int32_t x423 = INT32_MAX;
	volatile int64_t x424 = INT64_MIN;
	volatile int64_t t100 = -1540103076LL;

    t100 = (((x421<=x422)|x423)%x424);

    if (t100 != 2147483647LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x425 = INT64_MIN;
	int8_t x426 = INT8_MIN;
	int64_t x427 = 3466443894273179LL;
	static int64_t x428 = INT64_MIN;
	static volatile int64_t t101 = 360LL;

    t101 = (((x425<=x426)|x427)%x428);

    if (t101 != 3466443894273179LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x429 = INT16_MIN;
	int8_t x430 = 0;
	int8_t x431 = INT8_MIN;
	volatile uint64_t t102 = 5950LLU;

    t102 = (((x429<=x430)|x431)%x432);

    if (t102 != 418405LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x434 = UINT32_MAX;
	uint32_t x435 = 219154410U;
	static volatile uint64_t x436 = UINT64_MAX;
	uint64_t t103 = 5299LLU;

    t103 = (((x433<=x434)|x435)%x436);

    if (t103 != 219154411LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x437 = INT16_MAX;
	uint8_t x438 = UINT8_MAX;
	volatile int32_t x439 = INT32_MIN;
	int32_t x440 = INT32_MIN;
	volatile int32_t t104 = -314545273;

    t104 = (((x437<=x438)|x439)%x440);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x441 = 0;
	volatile uint8_t x442 = 2U;
	uint8_t x443 = 5U;
	int32_t x444 = 3597;

    t105 = (((x441<=x442)|x443)%x444);

    if (t105 != 5) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x445 = 717692LLU;
	uint64_t x446 = 231749LLU;
	volatile int64_t x448 = -1LL;
	volatile int64_t t106 = -958213592LL;

    t106 = (((x445<=x446)|x447)%x448);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x449 = INT8_MIN;
	int64_t x450 = INT64_MIN;
	int32_t x451 = INT32_MIN;
	int32_t t107 = 0;

    t107 = (((x449<=x450)|x451)%x452);

    if (t107 != -2) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x453 = 1U;
	int32_t x454 = INT32_MAX;
	int64_t x455 = -1LL;
	volatile uint16_t x456 = 15545U;
	volatile int64_t t108 = -72327268436587049LL;

    t108 = (((x453<=x454)|x455)%x456);

    if (t108 != -1LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x457 = INT32_MAX;
	volatile uint32_t x458 = UINT32_MAX;
	uint32_t x459 = UINT32_MAX;
	uint32_t x460 = 43736U;
	uint32_t t109 = 1661471450U;

    t109 = (((x457<=x458)|x459)%x460);

    if (t109 != 4623U) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint64_t x461 = UINT64_MAX;
	static int16_t x462 = INT16_MAX;
	uint64_t x463 = 94145077608872LLU;
	int32_t x464 = INT32_MAX;
	uint64_t t110 = 393514623LLU;

    t110 = (((x461<=x462)|x463)%x464);

    if (t110 != 1542008039LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x465 = 28020616921LLU;
	uint16_t x466 = 9U;
	int64_t x467 = -1LL;
	int64_t x468 = -1LL;
	int64_t t111 = -10727131336778LL;

    t111 = (((x465<=x466)|x467)%x468);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x469 = 18;
	volatile uint16_t x470 = UINT16_MAX;
	int64_t t112 = -804959LL;

    t112 = (((x469<=x470)|x471)%x472);

    if (t112 != 7LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint64_t x473 = 6018696651997LLU;
	volatile uint8_t x474 = 10U;
	int64_t x476 = INT64_MIN;
	volatile int64_t t113 = -348438413567775737LL;

    t113 = (((x473<=x474)|x475)%x476);

    if (t113 != 2006LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x477 = 3404597;
	int64_t x479 = INT64_MIN;
	static uint32_t x480 = UINT32_MAX;
	volatile int64_t t114 = 43953248366270LL;

    t114 = (((x477<=x478)|x479)%x480);

    if (t114 != -2147483647LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x481 = INT8_MAX;
	int64_t x482 = INT64_MAX;
	volatile int8_t x483 = INT8_MIN;
	int32_t x484 = -1;
	int32_t t115 = -76;

    t115 = (((x481<=x482)|x483)%x484);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x485 = INT16_MIN;
	volatile int16_t x487 = INT16_MIN;
	int8_t x488 = INT8_MIN;
	volatile int32_t t116 = -121297041;

    t116 = (((x485<=x486)|x487)%x488);

    if (t116 != -127) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x489 = INT64_MIN;
	static uint16_t x490 = UINT16_MAX;
	int64_t t117 = 15626155039078665LL;

    t117 = (((x489<=x490)|x491)%x492);

    if (t117 != -136LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x494 = INT16_MAX;
	static uint64_t x495 = 17069316LLU;

    t118 = (((x493<=x494)|x495)%x496);

    if (t118 != 30477LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x497 = 2U;
	uint16_t x498 = UINT16_MAX;
	uint8_t x499 = UINT8_MAX;
	static uint16_t x500 = 1163U;

    t119 = (((x497<=x498)|x499)%x500);

    if (t119 != 255) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x502 = 1;
	uint32_t x503 = UINT32_MAX;
	static volatile int8_t x504 = -1;
	uint32_t t120 = 2U;

    t120 = (((x501<=x502)|x503)%x504);

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x505 = INT8_MIN;
	int32_t x506 = -9545064;
	int8_t x507 = INT8_MIN;
	volatile int8_t x508 = -1;
	int32_t t121 = -6679;

    t121 = (((x505<=x506)|x507)%x508);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x509 = INT64_MIN;
	int32_t x511 = -1;
	int32_t x512 = -3;
	static volatile int32_t t122 = 3010651;

    t122 = (((x509<=x510)|x511)%x512);

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x513 = 111U;
	int32_t x514 = INT32_MIN;
	int64_t x515 = INT64_MIN;

    t123 = (((x513<=x514)|x515)%x516);

    if (t123 != -2147483648LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x517 = INT16_MIN;
	int32_t x520 = INT32_MIN;
	int32_t t124 = 50486719;

    t124 = (((x517<=x518)|x519)%x520);

    if (t124 != 35) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x521 = -1;
	uint32_t x522 = 992977U;
	uint32_t x524 = 1498322312U;
	static volatile uint32_t t125 = 124303466U;

    t125 = (((x521<=x522)|x523)%x524);

    if (t125 != 1298322668U) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x525 = INT32_MAX;
	int8_t x526 = INT8_MIN;
	int64_t x527 = -441283885342812LL;
	int32_t x528 = 173174;
	int64_t t126 = 239819641LL;

    t126 = (((x525<=x526)|x527)%x528);

    if (t126 != -36250LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x529 = UINT32_MAX;
	uint8_t x530 = UINT8_MAX;
	static int64_t x532 = 1472073699726496625LL;
	volatile int64_t t127 = -1945322621202370326LL;

    t127 = (((x529<=x530)|x531)%x532);

    if (t127 != -1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x533 = INT32_MIN;
	int16_t x535 = INT16_MAX;
	static int16_t x536 = 1670;

    t128 = (((x533<=x534)|x535)%x536);

    if (t128 != 1037) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x537 = UINT32_MAX;
	int8_t x539 = INT8_MAX;
	volatile uint16_t x540 = 117U;
	volatile int32_t t129 = 141402193;

    t129 = (((x537<=x538)|x539)%x540);

    if (t129 != 10) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x542 = INT32_MIN;
	static volatile int64_t t130 = 1072995766730LL;

    t130 = (((x541<=x542)|x543)%x544);

    if (t130 != -368LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint32_t x546 = UINT32_MAX;
	volatile int8_t x547 = INT8_MIN;
	int8_t x548 = INT8_MAX;

    t131 = (((x545<=x546)|x547)%x548);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int16_t x550 = 6301;
	int64_t x551 = -1LL;
	static uint8_t x552 = 6U;
	int64_t t132 = -12390300LL;

    t132 = (((x549<=x550)|x551)%x552);

    if (t132 != -1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x553 = 2;
	uint32_t x554 = 30200942U;
	volatile int16_t x555 = INT16_MAX;
	volatile int16_t x556 = INT16_MAX;
	volatile int32_t t133 = 51;

    t133 = (((x553<=x554)|x555)%x556);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x557 = -6109792LL;
	uint16_t x559 = 11153U;
	volatile int8_t x560 = INT8_MIN;
	volatile int32_t t134 = 6216914;

    t134 = (((x557<=x558)|x559)%x560);

    if (t134 != 17) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x561 = -1;
	uint64_t x562 = 7LLU;
	volatile int32_t x563 = INT32_MIN;
	int64_t t135 = 13015879907LL;

    t135 = (((x561<=x562)|x563)%x564);

    if (t135 != -2147483648LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x565 = -39;
	int32_t x566 = INT32_MIN;
	uint8_t x567 = UINT8_MAX;
	static int32_t x568 = 35053670;

    t136 = (((x565<=x566)|x567)%x568);

    if (t136 != 255) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x569 = INT16_MAX;
	int64_t x570 = INT64_MIN;
	volatile int64_t x571 = INT64_MIN;
	int32_t x572 = -1;
	volatile int64_t t137 = -35602629LL;

    t137 = (((x569<=x570)|x571)%x572);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x573 = INT32_MAX;
	int8_t x574 = 13;
	volatile uint8_t x575 = 40U;
	volatile int8_t x576 = INT8_MIN;
	volatile int32_t t138 = 395180628;

    t138 = (((x573<=x574)|x575)%x576);

    if (t138 != 40) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x578 = INT32_MAX;
	int16_t x579 = 15708;
	int32_t x580 = INT32_MAX;
	int32_t t139 = 476028;

    t139 = (((x577<=x578)|x579)%x580);

    if (t139 != 15709) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x581 = -1;
	uint16_t x582 = UINT16_MAX;
	int64_t x583 = INT64_MIN;

    t140 = (((x581<=x582)|x583)%x584);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x586 = 3673LLU;
	volatile int16_t x587 = INT16_MAX;
	int32_t t141 = 142107559;

    t141 = (((x585<=x586)|x587)%x588);

    if (t141 != 127) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x589 = 2;
	volatile int32_t x590 = INT32_MIN;
	static int32_t x591 = INT32_MIN;
	uint16_t x592 = 1202U;
	volatile int32_t t142 = 7478;

    t142 = (((x589<=x590)|x591)%x592);

    if (t142 != -64) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x593 = -25;
	static int8_t x594 = INT8_MAX;
	int32_t x595 = -1;
	int32_t x596 = INT32_MIN;

    t143 = (((x593<=x594)|x595)%x596);

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint16_t x597 = UINT16_MAX;
	int8_t x598 = -1;
	int32_t x600 = 423;
	static int64_t t144 = -490LL;

    t144 = (((x597<=x598)|x599)%x600);

    if (t144 != -224LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x601 = -1;
	int8_t x604 = INT8_MIN;
	static volatile int32_t t145 = -130707;

    t145 = (((x601<=x602)|x603)%x604);

    if (t145 != -127) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x605 = UINT64_MAX;
	uint8_t x606 = 14U;
	static int16_t x607 = -1;
	volatile int32_t t146 = -6766379;

    t146 = (((x605<=x606)|x607)%x608);

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x609 = INT64_MAX;
	int64_t x610 = -1LL;
	volatile int16_t x611 = 313;
	static volatile uint8_t x612 = UINT8_MAX;
	int32_t t147 = 707;

    t147 = (((x609<=x610)|x611)%x612);

    if (t147 != 58) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x613 = 3U;
	int64_t x614 = INT64_MAX;
	volatile int8_t x615 = 3;
	static int8_t x616 = INT8_MIN;
	volatile int32_t t148 = -3;

    t148 = (((x613<=x614)|x615)%x616);

    if (t148 != 3) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x617 = INT16_MAX;
	int16_t x618 = INT16_MIN;
	uint32_t x619 = 292496U;
	volatile uint16_t x620 = UINT16_MAX;
	uint32_t t149 = 3U;

    t149 = (((x617<=x618)|x619)%x620);

    if (t149 != 30356U) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x621 = INT16_MIN;
	int32_t x622 = INT32_MIN;
	int16_t x624 = INT16_MIN;
	int32_t t150 = -53650195;

    t150 = (((x621<=x622)|x623)%x624);

    if (t150 != -3) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x625 = 6290945;
	static uint8_t x626 = UINT8_MAX;
	static int32_t x627 = INT32_MIN;
	volatile uint8_t x628 = 38U;
	volatile int32_t t151 = -31;

    t151 = (((x625<=x626)|x627)%x628);

    if (t151 != -22) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x629 = 3745436LL;
	int8_t x630 = 8;
	volatile uint32_t x631 = 915895229U;
	uint8_t x632 = UINT8_MAX;
	uint32_t t152 = 63072U;

    t152 = (((x629<=x630)|x631)%x632);

    if (t152 != 254U) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x633 = INT8_MIN;
	static int8_t x634 = INT8_MAX;
	uint16_t x635 = 885U;
	static uint32_t x636 = 931U;
	volatile uint32_t t153 = 87U;

    t153 = (((x633<=x634)|x635)%x636);

    if (t153 != 885U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x637 = 117U;
	int32_t x639 = INT32_MIN;
	uint16_t x640 = UINT16_MAX;
	volatile int32_t t154 = -203;

    t154 = (((x637<=x638)|x639)%x640);

    if (t154 != -32768) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x643 = 29U;

    t155 = (((x641<=x642)|x643)%x644);

    if (t155 != 29LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x645 = INT8_MAX;
	int64_t x646 = -84110LL;
	int64_t x647 = -12354320LL;
	int64_t x648 = INT64_MIN;
	volatile int64_t t156 = 822733736LL;

    t156 = (((x645<=x646)|x647)%x648);

    if (t156 != -12354320LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x649 = 329904001834746LLU;
	int8_t x650 = -1;
	int16_t x651 = 1;
	volatile int8_t x652 = -1;
	volatile int32_t t157 = 491079413;

    t157 = (((x649<=x650)|x651)%x652);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x654 = INT64_MAX;
	static int32_t x655 = INT32_MIN;
	int32_t x656 = INT32_MIN;
	int32_t t158 = 191493457;

    t158 = (((x653<=x654)|x655)%x656);

    if (t158 != -2147483647) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x658 = INT32_MAX;
	static uint16_t x659 = UINT16_MAX;
	int16_t x660 = 2;
	int32_t t159 = 21;

    t159 = (((x657<=x658)|x659)%x660);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x661 = INT16_MAX;
	volatile int32_t t160 = 1675;

    t160 = (((x661<=x662)|x663)%x664);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x669 = INT16_MIN;
	volatile uint8_t x670 = 18U;
	static uint64_t x671 = 221684133760281025LLU;
	volatile int8_t x672 = INT8_MIN;
	uint64_t t161 = 141163834850558788LLU;

    t161 = (((x669<=x670)|x671)%x672);

    if (t161 != 221684133760281025LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x674 = 2611U;
	static int8_t x675 = INT8_MIN;
	volatile int64_t t162 = -393LL;

    t162 = (((x673<=x674)|x675)%x676);

    if (t162 != -128LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x678 = 16U;
	uint16_t x679 = 1941U;

    t163 = (((x677<=x678)|x679)%x680);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x681 = 112U;
	static int8_t x682 = INT8_MAX;
	uint16_t x683 = 2U;
	int64_t t164 = 54LL;

    t164 = (((x681<=x682)|x683)%x684);

    if (t164 != 3LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x685 = INT8_MAX;
	volatile uint32_t x686 = 785501944U;
	volatile int8_t x687 = 3;
	uint8_t x688 = 3U;
	int32_t t165 = -236809653;

    t165 = (((x685<=x686)|x687)%x688);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x690 = -18;
	volatile uint32_t x691 = 10U;
	int64_t x692 = -1LL;
	int64_t t166 = 856875LL;

    t166 = (((x689<=x690)|x691)%x692);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x693 = -1LL;
	uint8_t x694 = 65U;
	uint16_t x695 = 151U;
	uint64_t x696 = 31840950813241710LLU;

    t167 = (((x693<=x694)|x695)%x696);

    if (t167 != 151LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x697 = INT16_MAX;
	int64_t x699 = -1LL;
	int64_t t168 = -18LL;

    t168 = (((x697<=x698)|x699)%x700);

    if (t168 != -1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x701 = 36U;
	int16_t x702 = 491;
	int32_t x703 = INT32_MIN;
	uint64_t x704 = 3LLU;
	uint64_t t169 = 2029568842162572483LLU;

    t169 = (((x701<=x702)|x703)%x704);

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x705 = INT8_MIN;
	int8_t x706 = INT8_MIN;
	volatile int8_t x707 = 46;
	volatile uint16_t x708 = 24U;

    t170 = (((x705<=x706)|x707)%x708);

    if (t170 != 23) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x710 = 7U;
	volatile int32_t x711 = INT32_MIN;
	int16_t x712 = 3;
	static int32_t t171 = -835816;

    t171 = (((x709<=x710)|x711)%x712);

    if (t171 != -2) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint16_t x713 = 12646U;
	int16_t x714 = INT16_MIN;
	int16_t x715 = -1;
	static uint32_t t172 = 1074224951U;

    t172 = (((x713<=x714)|x715)%x716);

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile uint64_t x721 = 133963LLU;
	uint64_t x723 = 13187LLU;
	int16_t x724 = -1311;
	volatile uint64_t t173 = 897118LLU;

    t173 = (((x721<=x722)|x723)%x724);

    if (t173 != 13187LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x725 = INT64_MIN;
	int8_t x726 = 26;
	uint16_t x727 = UINT16_MAX;
	volatile int32_t t174 = 69805;

    t174 = (((x725<=x726)|x727)%x728);

    if (t174 != 12419) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x729 = 87243707258LLU;
	int64_t x731 = INT64_MIN;
	static uint8_t x732 = 1U;

    t175 = (((x729<=x730)|x731)%x732);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x733 = INT32_MAX;
	int64_t x734 = INT64_MIN;
	int32_t x735 = INT32_MIN;
	uint8_t x736 = 115U;
	int32_t t176 = -343962;

    t176 = (((x733<=x734)|x735)%x736);

    if (t176 != -98) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x737 = -20;
	int32_t x738 = -124053550;
	static int8_t x739 = 0;
	int32_t t177 = 1997;

    t177 = (((x737<=x738)|x739)%x740);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x741 = INT32_MAX;
	volatile uint8_t x742 = 83U;
	volatile int32_t t178 = 63344;

    t178 = (((x741<=x742)|x743)%x744);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x747 = 0U;
	volatile int8_t x748 = INT8_MAX;
	static int32_t t179 = 1722360;

    t179 = (((x745<=x746)|x747)%x748);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x750 = UINT64_MAX;
	int32_t x751 = -374273;
	uint8_t x752 = 97U;

    t180 = (((x749<=x750)|x751)%x752);

    if (t180 != -47) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x753 = UINT16_MAX;
	uint16_t x754 = 933U;
	static volatile int8_t x756 = -29;

    t181 = (((x753<=x754)|x755)%x756);

    if (t181 != 11) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int64_t x757 = INT64_MIN;
	static int16_t x758 = INT16_MIN;
	uint64_t x759 = UINT64_MAX;
	uint64_t x760 = UINT64_MAX;

    t182 = (((x757<=x758)|x759)%x760);

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x765 = 55413;
	int64_t x767 = -6670727721968797LL;
	static int64_t x768 = INT64_MIN;

    t183 = (((x765<=x766)|x767)%x768);

    if (t183 != -6670727721968797LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x769 = INT64_MAX;
	volatile int64_t x770 = -51790421LL;
	uint32_t x771 = 15333U;
	uint64_t x772 = UINT64_MAX;
	volatile uint64_t t184 = 630LLU;

    t184 = (((x769<=x770)|x771)%x772);

    if (t184 != 15333LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x773 = UINT64_MAX;
	int32_t x774 = 1;
	uint32_t x775 = 147U;
	uint32_t x776 = UINT32_MAX;
	volatile uint32_t t185 = 62U;

    t185 = (((x773<=x774)|x775)%x776);

    if (t185 != 147U) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x777 = 7;
	int16_t x779 = INT16_MAX;
	uint8_t x780 = 1U;
	volatile int32_t t186 = 35;

    t186 = (((x777<=x778)|x779)%x780);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x781 = INT64_MAX;
	uint16_t x782 = 7U;
	int32_t x783 = -825;

    t187 = (((x781<=x782)|x783)%x784);

    if (t187 != -60) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x785 = INT64_MAX;
	uint32_t x787 = 120138468U;
	uint32_t t188 = 2665581U;

    t188 = (((x785<=x786)|x787)%x788);

    if (t188 != 120138468U) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x789 = INT64_MIN;
	int64_t x791 = -103276162853LL;
	uint64_t x792 = UINT64_MAX;

    t189 = (((x789<=x790)|x791)%x792);

    if (t189 != 18446743970433388763LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x793 = 27U;
	int16_t x794 = -7440;
	uint64_t x795 = 5303503703767014008LLU;
	static uint64_t t190 = 8111567828094912LLU;

    t190 = (((x793<=x794)|x795)%x796);

    if (t190 != 5303503703767014009LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x797 = -1;
	volatile int16_t x798 = INT16_MIN;
	int8_t x799 = 14;
	int64_t x800 = INT64_MIN;
	volatile int64_t t191 = -23848458539788711LL;

    t191 = (((x797<=x798)|x799)%x800);

    if (t191 != 14LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x802 = UINT64_MAX;
	uint8_t x804 = 116U;
	int32_t t192 = -11226997;

    t192 = (((x801<=x802)|x803)%x804);

    if (t192 != 111) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x805 = 51;
	int8_t x806 = -3;
	volatile uint16_t x807 = 63U;
	int64_t x808 = INT64_MIN;
	int64_t t193 = 147982809314472LL;

    t193 = (((x805<=x806)|x807)%x808);

    if (t193 != 63LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x809 = UINT16_MAX;
	uint64_t x810 = UINT64_MAX;
	volatile int16_t x811 = INT16_MIN;
	int32_t x812 = 23843;
	volatile int32_t t194 = 193;

    t194 = (((x809<=x810)|x811)%x812);

    if (t194 != -8924) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x821 = INT8_MIN;
	volatile int16_t x822 = INT16_MIN;
	int32_t x823 = 742384275;
	int32_t x824 = INT32_MAX;

    t195 = (((x821<=x822)|x823)%x824);

    if (t195 != 742384275) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint8_t x825 = 8U;
	int8_t x826 = INT8_MIN;
	int8_t x827 = 0;
	volatile int32_t t196 = -481368672;

    t196 = (((x825<=x826)|x827)%x828);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x829 = -1;
	static int64_t x830 = INT64_MIN;
	volatile uint8_t x831 = UINT8_MAX;
	uint32_t x832 = 169622977U;

    t197 = (((x829<=x830)|x831)%x832);

    if (t197 != 255U) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x833 = -1;
	uint32_t x834 = UINT32_MAX;
	int64_t x835 = INT64_MIN;
	static volatile uint32_t x836 = 461001798U;

    t198 = (((x833<=x834)|x835)%x836);

    if (t198 != -2403169LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x837 = -244;
	int8_t x838 = INT8_MIN;
	static int64_t x840 = INT64_MAX;
	volatile int64_t t199 = 1LL;

    t199 = (((x837<=x838)|x839)%x840);

    if (t199 != 32767LL) { NG(); } else { ; }
	
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

