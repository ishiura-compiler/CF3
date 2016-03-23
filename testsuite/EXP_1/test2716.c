
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

uint8_t x2 = UINT8_MAX;
uint8_t x7 = UINT8_MAX;
int32_t x12 = -1;
uint32_t t5 = 16435227U;
volatile uint32_t t10 = 527247U;
volatile int16_t x53 = INT16_MAX;
volatile int32_t t13 = 221494833;
int16_t x59 = -18;
uint8_t x60 = UINT8_MAX;
static int8_t x66 = INT8_MIN;
volatile int8_t x69 = -1;
int8_t x74 = -1;
static volatile uint32_t x80 = 1198U;
int64_t x81 = INT64_MIN;
int32_t x85 = INT32_MIN;
int32_t x87 = 0;
int16_t x89 = INT16_MIN;
static int32_t x91 = INT32_MIN;
static uint64_t x108 = 366576823914453868LLU;
int16_t x109 = 6;
int64_t t27 = -5265LL;
volatile int8_t x115 = INT8_MAX;
int8_t x124 = INT8_MIN;
volatile int64_t t30 = 1812627177580599875LL;
static int8_t x125 = -4;
int8_t x128 = INT8_MIN;
volatile int32_t x130 = INT32_MIN;
int32_t t32 = 1;
int64_t x138 = INT64_MAX;
int64_t t34 = 39268LL;
static uint64_t x141 = 7321558317LLU;
volatile uint16_t x142 = 2030U;
volatile uint64_t t35 = 45842682257251LLU;
uint32_t x164 = 865496U;
volatile int32_t x167 = INT32_MIN;
int32_t x168 = 72346;
static volatile int32_t t41 = 1;
volatile uint64_t x175 = 43109678819250LLU;
static int32_t t47 = 202;
volatile int16_t x195 = INT16_MIN;
static int16_t x201 = 5;
static volatile uint32_t t50 = 87809U;
static uint16_t x205 = 24U;
static int8_t x211 = 0;
int64_t t52 = 16328961LL;
uint16_t x214 = 733U;
int32_t x218 = -1;
volatile uint64_t x232 = 31910817LLU;
int16_t x236 = -1;
static int16_t x239 = INT16_MIN;
static int64_t t59 = -14659LL;
volatile uint16_t x250 = UINT16_MAX;
int8_t x256 = INT8_MIN;
uint16_t x257 = 1U;
volatile uint64_t t65 = 984211322LLU;
volatile int64_t x266 = 48560366952817LL;
volatile int64_t t69 = 508LL;
int32_t x286 = INT32_MIN;
volatile int64_t t72 = 415822277315857432LL;
uint64_t x294 = 2LLU;
uint8_t x301 = 4U;
static uint32_t x305 = 2828U;
int64_t t76 = -1355833265112LL;
static uint8_t x311 = 48U;
uint16_t x313 = UINT16_MAX;
int8_t x320 = INT8_MIN;
int32_t x321 = -1725;
int64_t x323 = 470017LL;
volatile uint64_t t81 = 3127LLU;
static uint32_t x329 = 14619U;
uint8_t x331 = 34U;
static volatile uint32_t t83 = 13U;
static volatile int8_t x337 = -1;
int64_t x342 = INT64_MIN;
uint8_t x346 = 0U;
static int32_t x349 = INT32_MIN;
uint32_t x350 = UINT32_MAX;
uint8_t x351 = 101U;
static int8_t x358 = INT8_MIN;
int32_t x367 = INT32_MAX;
static int64_t x372 = 39777312LL;
volatile uint64_t t92 = 309105LLU;
int64_t x373 = INT64_MIN;
static volatile int16_t x374 = -7;
volatile int16_t x376 = -1;
static int32_t x377 = -1715141;
int16_t x381 = INT16_MIN;
int8_t x383 = INT8_MIN;
int32_t x384 = -30;
uint64_t x387 = UINT64_MAX;
volatile uint16_t x388 = 42U;
volatile uint64_t t96 = 23LLU;
int16_t x393 = 217;
uint32_t x396 = UINT32_MAX;
volatile int64_t t98 = 34328193290656632LL;
volatile int64_t t102 = 706396663261659668LL;
volatile int16_t x417 = INT16_MIN;
uint32_t x422 = 4871814U;
static int16_t x429 = 96;
uint64_t x432 = 3615194132721LLU;
static volatile int16_t x438 = INT16_MIN;
uint64_t t109 = 4364601531332442466LLU;
int16_t x443 = -919;
volatile int8_t x447 = -18;
int16_t x448 = INT16_MIN;
int16_t x456 = INT16_MIN;
volatile uint64_t t114 = 2LLU;
static int32_t t115 = -105748;
volatile int64_t x473 = INT64_MIN;
uint32_t x476 = 222668U;
int32_t x485 = -1;
static int32_t x486 = INT32_MIN;
int32_t t121 = -7085;
static int32_t x505 = INT32_MIN;
volatile uint32_t x510 = UINT32_MAX;
static volatile int32_t x513 = INT32_MIN;
int16_t x516 = INT16_MAX;
volatile int64_t t129 = -5016408LL;
volatile uint32_t x525 = 433152U;
uint16_t x530 = 101U;
volatile uint32_t x534 = UINT32_MAX;
static uint32_t t133 = 211290U;
int8_t x537 = 1;
int64_t x541 = INT64_MIN;
int32_t x542 = -1;
int16_t x545 = -1;
static int32_t x546 = 1493;
static int16_t x549 = -1;
int16_t x551 = -1;
int32_t x553 = -1;
static int32_t x555 = INT32_MIN;
int8_t x560 = 3;
volatile int8_t x564 = 6;
int16_t x567 = -12665;
int64_t x579 = -230658LL;
uint8_t x580 = UINT8_MAX;
uint8_t x585 = UINT8_MAX;
static int32_t x589 = -1;
uint32_t x590 = 686U;
uint32_t t147 = 969097U;
uint64_t x605 = UINT64_MAX;
uint8_t x616 = 10U;
int32_t x619 = INT32_MAX;
int8_t x624 = 5;
volatile uint8_t x630 = UINT8_MAX;
volatile int8_t x634 = INT8_MAX;
int32_t x639 = -5;
int64_t x643 = INT64_MAX;
int64_t x645 = INT64_MIN;
static volatile uint32_t x648 = 431293709U;
volatile int16_t x651 = INT16_MIN;
int64_t x654 = -87179212786LL;
int8_t x655 = INT8_MIN;
int32_t t164 = -1;
uint8_t x662 = 1U;
int8_t x664 = INT8_MIN;
static uint32_t x666 = 285U;
volatile int64_t t167 = 1829360414913857LL;
volatile uint16_t x675 = 1U;
volatile int32_t t168 = -1856;
uint64_t x679 = UINT64_MAX;
int16_t x681 = INT16_MIN;
int8_t x684 = -1;
int16_t x685 = 41;
int16_t x693 = -3923;
int8_t x694 = INT8_MAX;
int64_t x701 = 130532LL;
int16_t x703 = -1;
int8_t x711 = INT8_MAX;
uint16_t x716 = UINT16_MAX;
int16_t x721 = INT16_MAX;
volatile int8_t x722 = INT8_MAX;
int32_t x723 = INT32_MIN;
static volatile int32_t x729 = INT32_MIN;
volatile int32_t t183 = 13138769;
uint32_t x741 = 20090791U;
volatile uint32_t t185 = 2079196U;
int32_t x754 = INT32_MIN;
uint32_t x757 = 14U;
int32_t x761 = INT32_MIN;
static volatile int64_t t190 = -21930126468463LL;
static volatile int16_t x771 = 165;
int32_t x772 = 677;
uint8_t x776 = 9U;
int16_t x779 = INT16_MIN;
int8_t x792 = -1;


void f0(void) {
    	int64_t x1 = -1LL;
	int16_t x3 = -1;
	int32_t x4 = -1;
	int64_t t0 = 7504419979002LL;

    t0 = (((x1^x2)&x3)^x4);

    if (t0 != 255LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -15097330828LL;
	uint32_t x6 = 34U;
	volatile int16_t x8 = INT16_MAX;
	volatile int64_t t1 = -122110367994LL;

    t1 = (((x5^x6)&x7)^x8);

    if (t1 != 32681LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	int8_t x10 = -1;
	int64_t x11 = INT64_MAX;
	volatile int64_t t2 = 21408323020905LL;

    t2 = (((x9^x10)&x11)^x12);

    if (t2 != -32768LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -1LL;
	int16_t x14 = INT16_MIN;
	volatile uint16_t x15 = UINT16_MAX;
	int64_t x16 = 28823313742395LL;
	static volatile int64_t t3 = -713723438719LL;

    t3 = (((x13^x14)&x15)^x16);

    if (t3 != 28823313712580LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = UINT8_MAX;
	uint8_t x18 = 77U;
	volatile int64_t x19 = INT64_MIN;
	static volatile uint8_t x20 = 1U;
	volatile int64_t t4 = -2574300134LL;

    t4 = (((x17^x18)&x19)^x20);

    if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 5198889U;
	volatile int32_t x22 = INT32_MAX;
	static int32_t x23 = INT32_MIN;
	static int32_t x24 = 77750711;

    t5 = (((x21^x22)&x23)^x24);

    if (t5 != 77750711U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = UINT64_MAX;
	uint16_t x26 = 10U;
	int32_t x27 = INT32_MIN;
	static uint16_t x28 = 38U;
	volatile uint64_t t6 = 17LLU;

    t6 = (((x25^x26)&x27)^x28);

    if (t6 != 18446744071562068006LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x29 = 2U;
	uint32_t x30 = UINT32_MAX;
	uint32_t x31 = UINT32_MAX;
	uint32_t x32 = UINT32_MAX;
	volatile uint32_t t7 = 521365640U;

    t7 = (((x29^x30)&x31)^x32);

    if (t7 != 2U) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x33 = -1;
	uint8_t x34 = UINT8_MAX;
	int32_t x35 = INT32_MIN;
	uint32_t x36 = 8946284U;
	uint32_t t8 = 116U;

    t8 = (((x33^x34)&x35)^x36);

    if (t8 != 2156429932U) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x37 = -1;
	int32_t x38 = INT32_MAX;
	int32_t x39 = INT32_MAX;
	int64_t x40 = INT64_MIN;
	int64_t t9 = INT64_MIN;

    t9 = (((x37^x38)&x39)^x40);

    if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	uint8_t x42 = 1U;
	int32_t x43 = INT32_MIN;
	uint32_t x44 = 1291037035U;

    t10 = (((x41^x42)&x43)^x44);

    if (t10 != 3438520683U) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = 7656;
	int8_t x46 = -10;
	int16_t x47 = INT16_MIN;
	int16_t x48 = 2;
	static volatile int32_t t11 = -1;

    t11 = (((x45^x46)&x47)^x48);

    if (t11 != -32766) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = 19;
	int32_t x50 = INT32_MIN;
	uint64_t x51 = 519829707575910914LLU;
	uint8_t x52 = 2U;
	uint64_t t12 = 21LLU;

    t12 = (((x49^x50)&x51)^x52);

    if (t12 != 519829705835151360LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x54 = 18473U;
	int16_t x55 = 3911;
	static uint8_t x56 = 3U;

    t13 = (((x53^x54)&x55)^x56);

    if (t13 != 1861) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MAX;
	int16_t x58 = INT16_MIN;
	volatile int32_t t14 = -629;

    t14 = (((x57^x58)&x59)^x60);

    if (t14 != -2147451119) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = -15;
	int32_t x62 = INT32_MAX;
	int32_t x63 = -44;
	volatile uint64_t x64 = 1953113645261863LLU;
	volatile uint64_t t15 = 349824823759389LLU;

    t15 = (((x61^x62)&x63)^x64);

    if (t15 != 18444790959696258083LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MAX;
	int64_t x67 = 64885204225LL;
	int16_t x68 = INT16_MIN;
	int64_t t16 = 14090237309812745LL;

    t16 = (((x65^x66)&x67)^x68);

    if (t16 != -64424542207LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x70 = INT64_MIN;
	int16_t x71 = INT16_MAX;
	int32_t x72 = INT32_MAX;
	static int64_t t17 = -2668751LL;

    t17 = (((x69^x70)&x71)^x72);

    if (t17 != 2147450880LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = 117U;
	int64_t x75 = 2299850406776LL;
	static int8_t x76 = INT8_MAX;
	static int64_t t18 = -11660LL;

    t18 = (((x73^x74)&x75)^x76);

    if (t18 != 2299850406775LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int32_t x77 = -1;
	volatile int32_t x78 = INT32_MAX;
	int16_t x79 = -2753;
	static volatile uint32_t t19 = 3851U;

    t19 = (((x77^x78)&x79)^x80);

    if (t19 != 2147484846U) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x82 = INT16_MAX;
	uint8_t x83 = 3U;
	int8_t x84 = INT8_MAX;
	static int64_t t20 = -5LL;

    t20 = (((x81^x82)&x83)^x84);

    if (t20 != 124LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x86 = INT16_MAX;
	volatile int64_t x88 = INT64_MIN;
	static volatile int64_t t21 = INT64_MIN;

    t21 = (((x85^x86)&x87)^x88);

    if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x90 = 75066523LL;
	volatile int64_t x92 = -1LL;
	int64_t t22 = -22150063318736LL;

    t22 = (((x89^x90)&x91)^x92);

    if (t22 != 2147483647LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = -1;
	int16_t x94 = 42;
	volatile int8_t x95 = INT8_MAX;
	int8_t x96 = -4;
	static volatile int32_t t23 = 2;

    t23 = (((x93^x94)&x95)^x96);

    if (t23 != -87) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = INT8_MIN;
	volatile int16_t x98 = INT16_MIN;
	int32_t x99 = -1;
	int16_t x100 = 423;
	int32_t t24 = -1;

    t24 = (((x97^x98)&x99)^x100);

    if (t24 != 32295) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x101 = INT16_MAX;
	volatile uint16_t x102 = 2565U;
	volatile int32_t x103 = INT32_MIN;
	static uint8_t x104 = 61U;
	int32_t t25 = 49827156;

    t25 = (((x101^x102)&x103)^x104);

    if (t25 != 61) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint8_t x105 = 0U;
	uint32_t x106 = UINT32_MAX;
	volatile int32_t x107 = -774926425;
	uint64_t t26 = 377677LLU;

    t26 = (((x105^x106)&x107)^x108);

    if (t26 != 366576820444746955LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x110 = -1;
	static int64_t x111 = INT64_MIN;
	int8_t x112 = INT8_MAX;

    t27 = (((x109^x110)&x111)^x112);

    if (t27 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = 52;
	static int8_t x114 = -62;
	int8_t x116 = INT8_MIN;
	int32_t t28 = -24299028;

    t28 = (((x113^x114)&x115)^x116);

    if (t28 != -10) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = INT8_MIN;
	static volatile int32_t x118 = INT32_MAX;
	int64_t x119 = INT64_MAX;
	int8_t x120 = 1;
	volatile int64_t t29 = 8794018963238LL;

    t29 = (((x117^x118)&x119)^x120);

    if (t29 != 9223372034707292286LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x121 = -226;
	uint32_t x122 = 246U;
	volatile int64_t x123 = INT64_MIN;

    t30 = (((x121^x122)&x123)^x124);

    if (t30 != -128LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x126 = -1;
	int32_t x127 = 48896;
	int32_t t31 = 58;

    t31 = (((x125^x126)&x127)^x128);

    if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = INT32_MAX;
	static uint16_t x131 = UINT16_MAX;
	int8_t x132 = -7;

    t32 = (((x129^x130)&x131)^x132);

    if (t32 != -65530) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x133 = INT64_MIN;
	static uint32_t x134 = UINT32_MAX;
	static int32_t x135 = INT32_MIN;
	int16_t x136 = 0;
	static volatile int64_t t33 = -883559812LL;

    t33 = (((x133^x134)&x135)^x136);

    if (t33 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x137 = INT64_MAX;
	int32_t x139 = 6;
	int32_t x140 = INT32_MIN;

    t34 = (((x137^x138)&x139)^x140);

    if (t34 != -2147483648LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x143 = UINT16_MAX;
	int16_t x144 = -1;

    t35 = (((x141^x142)&x143)^x144);

    if (t35 != 18446744073709544764LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = INT64_MAX;
	volatile uint32_t x146 = UINT32_MAX;
	int32_t x147 = INT32_MAX;
	int32_t x148 = -664;
	volatile int64_t t36 = -7179468304LL;

    t36 = (((x145^x146)&x147)^x148);

    if (t36 != -664LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x149 = INT64_MIN;
	int32_t x150 = INT32_MIN;
	static int8_t x151 = -8;
	int32_t x152 = INT32_MIN;
	int64_t t37 = INT64_MIN;

    t37 = (((x149^x150)&x151)^x152);

    if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = -3063064;
	static uint64_t x154 = UINT64_MAX;
	int8_t x155 = INT8_MAX;
	int8_t x156 = INT8_MIN;
	volatile uint64_t t38 = 10LLU;

    t38 = (((x153^x154)&x155)^x156);

    if (t38 != 18446744073709551511LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int8_t x157 = -1;
	uint32_t x158 = 247254U;
	int32_t x159 = -1;
	uint8_t x160 = UINT8_MAX;
	volatile uint32_t t39 = 1U;

    t39 = (((x157^x158)&x159)^x160);

    if (t39 != 4294720214U) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x161 = -1LL;
	static int32_t x162 = INT32_MIN;
	uint64_t x163 = UINT64_MAX;
	volatile uint64_t t40 = 117762LLU;

    t40 = (((x161^x162)&x163)^x164);

    if (t40 != 2146618151LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = INT16_MIN;
	int8_t x166 = INT8_MAX;

    t41 = (((x165^x166)&x167)^x168);

    if (t41 != -2147411302) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MIN;
	int16_t x170 = INT16_MAX;
	volatile uint16_t x171 = UINT16_MAX;
	int8_t x172 = INT8_MIN;
	int64_t t42 = 472LL;

    t42 = (((x169^x170)&x171)^x172);

    if (t42 != -32641LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x173 = -36250199;
	uint32_t x174 = 309120233U;
	static uint8_t x176 = 4U;
	static volatile uint64_t t43 = 1160388196LLU;

    t43 = (((x173^x174)&x175)^x176);

    if (t43 != 1091698948LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint64_t x177 = 294742LLU;
	static uint16_t x178 = 3774U;
	uint16_t x179 = 3880U;
	uint8_t x180 = 0U;
	volatile uint64_t t44 = 11LLU;

    t44 = (((x177^x178)&x179)^x180);

    if (t44 != 296LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = -1;
	static uint16_t x182 = 7690U;
	uint8_t x183 = UINT8_MAX;
	uint16_t x184 = 17004U;
	int32_t t45 = 7896;

    t45 = (((x181^x182)&x183)^x184);

    if (t45 != 17049) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x185 = INT16_MIN;
	static volatile int16_t x186 = -466;
	int16_t x187 = -1;
	static volatile uint8_t x188 = 34U;
	volatile int32_t t46 = 1;

    t46 = (((x185^x186)&x187)^x188);

    if (t46 != 32268) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = 800U;
	int16_t x190 = -1147;
	uint16_t x191 = 5289U;
	int32_t x192 = -15646178;

    t47 = (((x189^x190)&x191)^x192);

    if (t47 != -15641921) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x193 = INT32_MIN;
	static uint64_t x194 = 2423LLU;
	volatile int64_t x196 = INT64_MIN;
	uint64_t t48 = 1329313839908356818LLU;

    t48 = (((x193^x194)&x195)^x196);

    if (t48 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = INT64_MIN;
	int64_t x198 = -1LL;
	static uint32_t x199 = UINT32_MAX;
	uint8_t x200 = UINT8_MAX;
	int64_t t49 = 255887LL;

    t49 = (((x197^x198)&x199)^x200);

    if (t49 != 4294967040LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x202 = 2791658U;
	static uint8_t x203 = UINT8_MAX;
	int8_t x204 = 4;

    t50 = (((x201^x202)&x203)^x204);

    if (t50 != 235U) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x206 = 14;
	int8_t x207 = INT8_MIN;
	volatile uint32_t x208 = 26124455U;
	volatile uint32_t t51 = 115524769U;

    t51 = (((x205^x206)&x207)^x208);

    if (t51 != 26124455U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x209 = 0U;
	volatile int16_t x210 = INT16_MIN;
	int64_t x212 = -24842396992644988LL;

    t52 = (((x209^x210)&x211)^x212);

    if (t52 != -24842396992644988LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x213 = INT16_MAX;
	volatile uint8_t x215 = 47U;
	volatile uint8_t x216 = 3U;
	int32_t t53 = 856;

    t53 = (((x213^x214)&x215)^x216);

    if (t53 != 33) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int8_t x217 = -1;
	static int32_t x219 = -1;
	uint16_t x220 = 4U;
	int32_t t54 = 3112788;

    t54 = (((x217^x218)&x219)^x220);

    if (t54 != 4) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x221 = INT8_MIN;
	int32_t x222 = INT32_MIN;
	uint32_t x223 = 422264U;
	int64_t x224 = INT64_MAX;
	int64_t t55 = -54021190638007865LL;

    t55 = (((x221^x222)&x223)^x224);

    if (t55 != 9223372036854353663LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x225 = INT16_MIN;
	volatile int8_t x226 = INT8_MIN;
	volatile uint16_t x227 = 11U;
	int16_t x228 = -3666;
	static volatile int32_t t56 = -533681403;

    t56 = (((x225^x226)&x227)^x228);

    if (t56 != -3666) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x229 = -1;
	volatile int16_t x230 = -10;
	static volatile int32_t x231 = -164290;
	uint64_t t57 = 1LLU;

    t57 = (((x229^x230)&x231)^x232);

    if (t57 != 31910825LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x233 = 6557308917LL;
	uint8_t x234 = 12U;
	uint16_t x235 = UINT16_MAX;
	static volatile int64_t t58 = -2186306521933304511LL;

    t58 = (((x233^x234)&x235)^x236);

    if (t58 != -38906LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = -1LL;
	int16_t x238 = -1;
	int32_t x240 = INT32_MIN;

    t59 = (((x237^x238)&x239)^x240);

    if (t59 != -2147483648LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = 127796983LLU;
	uint8_t x242 = 0U;
	static int64_t x243 = 1672531719LL;
	int8_t x244 = 0;
	static volatile uint64_t t60 = 119496LLU;

    t60 = (((x241^x242)&x243)^x244);

    if (t60 != 59770375LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x245 = -1LL;
	int64_t x246 = INT64_MAX;
	int64_t x247 = 5623828598233LL;
	volatile uint32_t x248 = UINT32_MAX;
	int64_t t61 = -34371434380346272LL;

    t61 = (((x245^x246)&x247)^x248);

    if (t61 != 4294967295LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x249 = INT64_MIN;
	volatile uint8_t x251 = 1U;
	volatile int8_t x252 = -1;
	static int64_t t62 = 11764857LL;

    t62 = (((x249^x250)&x251)^x252);

    if (t62 != -2LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x253 = 6765566U;
	static uint32_t x254 = UINT32_MAX;
	int32_t x255 = INT32_MIN;
	volatile uint32_t t63 = 14366U;

    t63 = (((x253^x254)&x255)^x256);

    if (t63 != 2147483520U) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x258 = INT8_MIN;
	int16_t x259 = INT16_MIN;
	uint8_t x260 = 1U;
	static volatile int32_t t64 = 2;

    t64 = (((x257^x258)&x259)^x260);

    if (t64 != -32767) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint16_t x261 = 1593U;
	static uint64_t x262 = 45LLU;
	uint64_t x263 = 2LLU;
	uint64_t x264 = 1135173068473432579LLU;

    t65 = (((x261^x262)&x263)^x264);

    if (t65 != 1135173068473432579LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = -1;
	int32_t x267 = 501600;
	volatile int16_t x268 = 107;
	volatile int64_t t66 = -32611614492LL;

    t66 = (((x265^x266)&x267)^x268);

    if (t66 != 231019LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x269 = INT16_MIN;
	int64_t x270 = -1LL;
	int64_t x271 = 454LL;
	int16_t x272 = INT16_MIN;
	int64_t t67 = 42406LL;

    t67 = (((x269^x270)&x271)^x272);

    if (t67 != -32314LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x273 = UINT16_MAX;
	int16_t x274 = INT16_MIN;
	int8_t x275 = INT8_MAX;
	int8_t x276 = -1;
	volatile int32_t t68 = -35132;

    t68 = (((x273^x274)&x275)^x276);

    if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int16_t x277 = INT16_MAX;
	int8_t x278 = INT8_MIN;
	int64_t x279 = INT64_MIN;
	uint8_t x280 = UINT8_MAX;

    t69 = (((x277^x278)&x279)^x280);

    if (t69 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = 60877053167LL;
	uint32_t x282 = 258498442U;
	int32_t x283 = INT32_MIN;
	uint64_t x284 = 949446LLU;
	static uint64_t t70 = 1629343999822767LLU;

    t70 = (((x281^x282)&x283)^x284);

    if (t70 != 60130491590LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = INT64_MAX;
	static volatile int8_t x287 = -1;
	static int8_t x288 = 3;
	int64_t t71 = 452021658841724LL;

    t71 = (((x285^x286)&x287)^x288);

    if (t71 != -9223372034707292164LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x289 = 2U;
	int64_t x290 = 109370371LL;
	int16_t x291 = 152;
	static int8_t x292 = -1;

    t72 = (((x289^x290)&x291)^x292);

    if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x293 = -2;
	int64_t x295 = INT64_MAX;
	int8_t x296 = INT8_MIN;
	static uint64_t t73 = 2904102492490LLU;

    t73 = (((x293^x294)&x295)^x296);

    if (t73 != 9223372036854775932LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x297 = UINT8_MAX;
	uint8_t x298 = UINT8_MAX;
	int64_t x299 = INT64_MAX;
	static uint64_t x300 = UINT64_MAX;
	volatile uint64_t t74 = UINT64_MAX;

    t74 = (((x297^x298)&x299)^x300);

    if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x302 = 584;
	volatile int8_t x303 = -2;
	static int32_t x304 = INT32_MAX;
	static volatile int32_t t75 = 10350;

    t75 = (((x301^x302)&x303)^x304);

    if (t75 != 2147483059) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x306 = 18093198366LL;
	uint8_t x307 = 1U;
	int16_t x308 = INT16_MIN;

    t76 = (((x305^x306)&x307)^x308);

    if (t76 != -32768LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x309 = -3798;
	static uint8_t x310 = 8U;
	static uint32_t x312 = 29593672U;
	volatile uint32_t t77 = 0U;

    t77 = (((x309^x310)&x311)^x312);

    if (t77 != 29593704U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x314 = 29U;
	static int32_t x315 = 98385;
	static uint8_t x316 = 1U;
	static volatile int32_t t78 = 496562;

    t78 = (((x313^x314)&x315)^x316);

    if (t78 != 32833) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x317 = UINT64_MAX;
	static volatile int64_t x318 = INT64_MAX;
	uint32_t x319 = 1525202828U;
	static volatile uint64_t t79 = 2133006860LLU;

    t79 = (((x317^x318)&x319)^x320);

    if (t79 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x322 = 2LLU;
	int64_t x324 = -3886998215595LL;
	volatile uint64_t t80 = 3086240077914LLU;

    t80 = (((x321^x322)&x323)^x324);

    if (t80 != 18446740186711526484LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x325 = UINT64_MAX;
	uint64_t x326 = UINT64_MAX;
	int32_t x327 = INT32_MIN;
	int64_t x328 = INT64_MIN;

    t81 = (((x325^x326)&x327)^x328);

    if (t81 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x330 = 757;
	uint32_t x332 = UINT32_MAX;
	volatile uint32_t t82 = 168U;

    t82 = (((x329^x330)&x331)^x332);

    if (t82 != 4294967261U) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x333 = -1;
	uint32_t x334 = 0U;
	int32_t x335 = -1;
	int8_t x336 = -4;

    t83 = (((x333^x334)&x335)^x336);

    if (t83 != 3U) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x338 = -551707;
	int32_t x339 = -1;
	volatile int16_t x340 = INT16_MIN;
	int32_t t84 = -159415532;

    t84 = (((x337^x338)&x339)^x340);

    if (t84 != -529638) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x341 = 112202U;
	static uint64_t x343 = 55616LLU;
	volatile int16_t x344 = -1;
	uint64_t t85 = 7613362LLU;

    t85 = (((x341^x342)&x343)^x344);

    if (t85 != 18446744073709514687LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x345 = INT8_MIN;
	uint8_t x347 = UINT8_MAX;
	static uint16_t x348 = 456U;
	int32_t t86 = 146143;

    t86 = (((x345^x346)&x347)^x348);

    if (t86 != 328) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x352 = 13075421135LLU;
	static volatile uint64_t t87 = 13354LLU;

    t87 = (((x349^x350)&x351)^x352);

    if (t87 != 13075421098LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x353 = UINT64_MAX;
	uint64_t x354 = 21346350661742LLU;
	int32_t x355 = -146838;
	uint64_t x356 = 163686753LLU;
	volatile uint64_t t88 = 85795LLU;

    t88 = (((x353^x354)&x355)^x356);

    if (t88 != 18446722727245540193LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x357 = 2U;
	uint32_t x359 = 36004U;
	volatile uint16_t x360 = UINT16_MAX;
	volatile uint32_t t89 = 557U;

    t89 = (((x357^x358)&x359)^x360);

    if (t89 != 29567U) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = INT8_MIN;
	uint32_t x362 = 59U;
	int64_t x363 = INT64_MAX;
	int16_t x364 = -9420;
	int64_t t90 = -214533603LL;

    t90 = (((x361^x362)&x363)^x364);

    if (t90 != -4294957937LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x365 = UINT64_MAX;
	volatile int8_t x366 = 45;
	uint32_t x368 = 3U;
	volatile uint64_t t91 = 921820929089436LLU;

    t91 = (((x365^x366)&x367)^x368);

    if (t91 != 2147483601LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x369 = INT8_MIN;
	uint64_t x370 = 399LLU;
	uint8_t x371 = UINT8_MAX;

    t92 = (((x369^x370)&x371)^x372);

    if (t92 != 39777327LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x375 = 16875U;
	volatile int64_t t93 = -70835242576LL;

    t93 = (((x373^x374)&x375)^x376);

    if (t93 != -16874LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x378 = 39634U;
	uint16_t x379 = UINT16_MAX;
	int64_t x380 = 0LL;
	volatile int64_t t94 = 15LL;

    t94 = (((x377^x378)&x379)^x380);

    if (t94 != 20201LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x382 = -1922;
	volatile int32_t t95 = -277;

    t95 = (((x381^x382)&x383)^x384);

    if (t95 != -30750) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = 510949LL;
	int8_t x386 = INT8_MIN;

    t96 = (((x385^x386)&x387)^x388);

    if (t96 != 18446744073709040719LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x389 = INT64_MAX;
	uint32_t x390 = 41U;
	int16_t x391 = -1;
	int64_t x392 = -1LL;
	static volatile int64_t t97 = 12852324598719LL;

    t97 = (((x389^x390)&x391)^x392);

    if (t97 != -9223372036854775767LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x394 = -1;
	int64_t x395 = 28172738294659804LL;

    t98 = (((x393^x394)&x395)^x396);

    if (t98 != 28172735798101499LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x397 = -93LL;
	uint8_t x398 = 3U;
	uint64_t x399 = UINT64_MAX;
	int64_t x400 = -366LL;
	static volatile uint64_t t99 = 6416LLU;

    t99 = (((x397^x398)&x399)^x400);

    if (t99 != 306LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = INT64_MIN;
	uint32_t x402 = UINT32_MAX;
	int32_t x403 = 2811;
	uint64_t x404 = 284976781327737999LLU;
	volatile uint64_t t100 = 359070042829225313LLU;

    t100 = (((x401^x402)&x403)^x404);

    if (t100 != 284976781327740532LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x405 = UINT64_MAX;
	int8_t x406 = INT8_MIN;
	int64_t x407 = -3589723356234660587LL;
	int16_t x408 = INT16_MAX;
	volatile uint64_t t101 = 396LLU;

    t101 = (((x405^x406)&x407)^x408);

    if (t101 != 32746LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x409 = UINT16_MAX;
	int8_t x410 = INT8_MAX;
	static int8_t x411 = -11;
	int64_t x412 = 200695337133361665LL;

    t102 = (((x409^x410)&x411)^x412);

    if (t102 != 200695337133389185LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x413 = UINT8_MAX;
	int8_t x414 = -11;
	static int32_t x415 = INT32_MIN;
	uint64_t x416 = UINT64_MAX;
	static volatile uint64_t t103 = 61524261208LLU;

    t103 = (((x413^x414)&x415)^x416);

    if (t103 != 2147483647LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x418 = 76U;
	static uint64_t x419 = 14924179LLU;
	int16_t x420 = INT16_MIN;
	volatile uint64_t t104 = 12936LLU;

    t104 = (((x417^x418)&x419)^x420);

    if (t104 != 18446744073694609408LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x421 = -1LL;
	int64_t x423 = INT64_MAX;
	int8_t x424 = INT8_MIN;
	static int64_t t105 = -65595917702LL;

    t105 = (((x421^x422)&x423)^x424);

    if (t105 != -9223372036849903879LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = -31;
	int32_t x426 = INT32_MIN;
	int64_t x427 = INT64_MAX;
	volatile uint16_t x428 = 23U;
	volatile int64_t t106 = -2433541LL;

    t106 = (((x425^x426)&x427)^x428);

    if (t106 != 2147483638LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int8_t x430 = INT8_MAX;
	volatile int16_t x431 = -1;
	volatile uint64_t t107 = 14637LLU;

    t107 = (((x429^x430)&x431)^x432);

    if (t107 != 3615194132718LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x433 = 15U;
	static int8_t x434 = INT8_MIN;
	volatile int16_t x435 = -1;
	int8_t x436 = 3;
	volatile int32_t t108 = 1;

    t108 = (((x433^x434)&x435)^x436);

    if (t108 != -116) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = -1;
	volatile int16_t x439 = INT16_MIN;
	uint64_t x440 = 2728173095LLU;

    t109 = (((x437^x438)&x439)^x440);

    if (t109 != 2728173095LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = -1;
	int16_t x442 = INT16_MIN;
	int32_t x444 = INT32_MAX;
	int32_t t110 = -9983553;

    t110 = (((x441^x442)&x443)^x444);

    if (t110 != 2147451798) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x445 = 29685206896840LLU;
	int8_t x446 = -1;
	uint64_t t111 = 100673789747129875LLU;

    t111 = (((x445^x446)&x447)^x448);

    if (t111 != 29685206888230LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x449 = INT32_MIN;
	int32_t x450 = 167647883;
	volatile int8_t x451 = 1;
	int16_t x452 = -15;
	volatile int32_t t112 = -7304174;

    t112 = (((x449^x450)&x451)^x452);

    if (t112 != -16) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x453 = INT16_MAX;
	uint8_t x454 = UINT8_MAX;
	int64_t x455 = INT64_MIN;
	static volatile int64_t t113 = 7871742475180687LL;

    t113 = (((x453^x454)&x455)^x456);

    if (t113 != -32768LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = -11097930162620LL;
	static uint32_t x458 = UINT32_MAX;
	uint64_t x459 = 423592311LLU;
	volatile int16_t x460 = 108;

    t114 = (((x457^x458)&x459)^x460);

    if (t114 != 271515999LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x461 = 32U;
	int16_t x462 = 2;
	volatile int16_t x463 = INT16_MAX;
	int32_t x464 = INT32_MIN;

    t115 = (((x461^x462)&x463)^x464);

    if (t115 != -2147483614) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x465 = INT64_MIN;
	uint8_t x466 = 0U;
	volatile int64_t x467 = -1LL;
	volatile int16_t x468 = INT16_MIN;
	int64_t t116 = -21801181LL;

    t116 = (((x465^x466)&x467)^x468);

    if (t116 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = 24515778LL;
	uint32_t x470 = 10663634U;
	static volatile uint32_t x471 = 50770U;
	volatile uint16_t x472 = 63U;
	int64_t t117 = 852264LL;

    t117 = (((x469^x470)&x471)^x472);

    if (t117 != 33327LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x474 = INT64_MAX;
	int64_t x475 = 13635633LL;
	static int64_t t118 = -203LL;

    t118 = (((x473^x474)&x475)^x476);

    if (t118 != 13858301LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x477 = 28U;
	int64_t x478 = -1LL;
	int32_t x479 = -386746;
	uint16_t x480 = 3U;
	volatile int64_t t119 = 18003LL;

    t119 = (((x477^x478)&x479)^x480);

    if (t119 != -386751LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x481 = -1LL;
	int64_t x482 = INT64_MIN;
	int64_t x483 = INT64_MIN;
	int64_t x484 = -1LL;
	volatile int64_t t120 = -7626130LL;

    t120 = (((x481^x482)&x483)^x484);

    if (t120 != -1LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x487 = INT32_MAX;
	int8_t x488 = INT8_MAX;

    t121 = (((x485^x486)&x487)^x488);

    if (t121 != 2147483520) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = 0;
	static volatile int32_t x490 = 43763;
	static uint8_t x491 = 1U;
	int8_t x492 = INT8_MAX;
	volatile int32_t t122 = 47;

    t122 = (((x489^x490)&x491)^x492);

    if (t122 != 126) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x493 = INT64_MIN;
	int16_t x494 = -1;
	volatile uint8_t x495 = 93U;
	uint8_t x496 = UINT8_MAX;
	static int64_t t123 = -155051481965696LL;

    t123 = (((x493^x494)&x495)^x496);

    if (t123 != 162LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = 0;
	uint8_t x498 = 124U;
	static uint16_t x499 = 44U;
	static uint16_t x500 = 382U;
	int32_t t124 = 272;

    t124 = (((x497^x498)&x499)^x500);

    if (t124 != 338) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x501 = UINT16_MAX;
	int8_t x502 = INT8_MAX;
	uint32_t x503 = UINT32_MAX;
	uint8_t x504 = 6U;
	uint32_t t125 = 266605811U;

    t125 = (((x501^x502)&x503)^x504);

    if (t125 != 65414U) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x506 = INT32_MAX;
	int32_t x507 = INT32_MIN;
	uint64_t x508 = 2503505322865LLU;
	volatile uint64_t t126 = 21LLU;

    t126 = (((x505^x506)&x507)^x508);

    if (t126 != 18446741571430490993LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x509 = INT16_MIN;
	volatile int16_t x511 = -1;
	uint64_t x512 = UINT64_MAX;
	volatile uint64_t t127 = 2LLU;

    t127 = (((x509^x510)&x511)^x512);

    if (t127 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x514 = 3U;
	uint16_t x515 = 61U;
	uint32_t t128 = 43511U;

    t128 = (((x513^x514)&x515)^x516);

    if (t128 != 32766U) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x517 = -1;
	static int64_t x518 = -665066831908LL;
	volatile int16_t x519 = INT16_MIN;
	volatile int8_t x520 = INT8_MIN;

    t129 = (((x517^x518)&x519)^x520);

    if (t129 != -665066832000LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x521 = UINT32_MAX;
	volatile int64_t x522 = INT64_MAX;
	uint16_t x523 = UINT16_MAX;
	int32_t x524 = -1;
	int64_t t130 = -114670468508233LL;

    t130 = (((x521^x522)&x523)^x524);

    if (t130 != -1LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x526 = 3U;
	int32_t x527 = 3463310;
	volatile int64_t x528 = INT64_MIN;
	volatile int64_t t131 = -15681994277107LL;

    t131 = (((x525^x526)&x527)^x528);

    if (t131 != -9223372036854474750LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = 46;
	uint8_t x531 = 2U;
	int16_t x532 = INT16_MIN;
	volatile int32_t t132 = 808599;

    t132 = (((x529^x530)&x531)^x532);

    if (t132 != -32766) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = -1;
	int8_t x535 = INT8_MIN;
	int16_t x536 = INT16_MIN;

    t133 = (((x533^x534)&x535)^x536);

    if (t133 != 4294934528U) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x538 = -1;
	int64_t x539 = -1LL;
	int8_t x540 = 23;
	int64_t t134 = -8388185427586748LL;

    t134 = (((x537^x538)&x539)^x540);

    if (t134 != -23LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x543 = 1002030;
	uint16_t x544 = 1U;
	int64_t t135 = -29208286337409521LL;

    t135 = (((x541^x542)&x543)^x544);

    if (t135 != 1002031LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x547 = INT32_MIN;
	int64_t x548 = -1LL;
	volatile int64_t t136 = 124566334566LL;

    t136 = (((x545^x546)&x547)^x548);

    if (t136 != 2147483647LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x550 = -1;
	int64_t x552 = INT64_MAX;
	static volatile int64_t t137 = INT64_MAX;

    t137 = (((x549^x550)&x551)^x552);

    if (t137 != INT64_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x554 = 0U;
	int32_t x556 = 1;
	int32_t t138 = -1;

    t138 = (((x553^x554)&x555)^x556);

    if (t138 != -2147483647) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x557 = 44U;
	volatile int64_t x558 = 2788551LL;
	int64_t x559 = 2241698896922LL;
	int64_t t139 = -1LL;

    t139 = (((x557^x558)&x559)^x560);

    if (t139 != 2788361LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = INT16_MIN;
	int16_t x562 = INT16_MIN;
	uint16_t x563 = 10346U;
	int32_t t140 = -375368;

    t140 = (((x561^x562)&x563)^x564);

    if (t140 != 6) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint16_t x565 = UINT16_MAX;
	uint32_t x566 = UINT32_MAX;
	int8_t x568 = 0;
	volatile uint32_t t141 = 427468566U;

    t141 = (((x565^x566)&x567)^x568);

    if (t141 != 4294901760U) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = 15;
	uint8_t x570 = 30U;
	int32_t x571 = INT32_MAX;
	int8_t x572 = -1;
	int32_t t142 = -151;

    t142 = (((x569^x570)&x571)^x572);

    if (t142 != -18) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = -1;
	uint64_t x574 = 54496903714LLU;
	int8_t x575 = -1;
	volatile int8_t x576 = INT8_MAX;
	static uint64_t t143 = 5102672799231872360LLU;

    t143 = (((x573^x574)&x575)^x576);

    if (t143 != 18446744019212647842LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = 5933;
	int8_t x578 = 14;
	volatile int64_t t144 = 32087258977382LL;

    t144 = (((x577^x578)&x579)^x580);

    if (t144 != 4829LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = -1071118LL;
	volatile uint16_t x582 = 1U;
	static volatile int8_t x583 = 26;
	volatile int16_t x584 = INT16_MAX;
	int64_t t145 = -4599861137364612LL;

    t145 = (((x581^x582)&x583)^x584);

    if (t145 != 32749LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x586 = INT8_MIN;
	int16_t x587 = -1;
	int16_t x588 = INT16_MIN;
	volatile int32_t t146 = 1;

    t146 = (((x585^x586)&x587)^x588);

    if (t146 != 32639) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x591 = -1;
	int8_t x592 = -19;

    t147 = (((x589^x590)&x591)^x592);

    if (t147 != 700U) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x593 = -5644LL;
	static uint8_t x594 = UINT8_MAX;
	volatile uint32_t x595 = 20U;
	static int8_t x596 = 15;
	int64_t t148 = -63450542518LL;

    t148 = (((x593^x594)&x595)^x596);

    if (t148 != 15LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = INT8_MAX;
	volatile int16_t x598 = 142;
	uint64_t x599 = UINT64_MAX;
	uint16_t x600 = 1U;
	volatile uint64_t t149 = 36LLU;

    t149 = (((x597^x598)&x599)^x600);

    if (t149 != 240LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = INT32_MIN;
	static int16_t x602 = INT16_MIN;
	uint64_t x603 = UINT64_MAX;
	uint32_t x604 = 571062671U;
	volatile uint64_t t150 = 1325689LLU;

    t150 = (((x601^x602)&x603)^x604);

    if (t150 != 1576417679LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x606 = 61;
	uint32_t x607 = 455818U;
	static int64_t x608 = INT64_MIN;
	volatile uint64_t t151 = 278330LLU;

    t151 = (((x605^x606)&x607)^x608);

    if (t151 != 9223372036855231618LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = -1;
	static uint64_t x610 = 5819608496823028LLU;
	static int64_t x611 = 394729LL;
	static uint8_t x612 = UINT8_MAX;
	uint64_t t152 = 93224811033LLU;

    t152 = (((x609^x610)&x611)^x612);

    if (t152 != 1526LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x613 = UINT8_MAX;
	static int32_t x614 = -4391764;
	uint32_t x615 = 158593751U;
	uint32_t t153 = 2885142U;

    t153 = (((x613^x614)&x615)^x616);

    if (t153 != 154202201U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = 1U;
	int64_t x618 = INT64_MIN;
	uint16_t x620 = 530U;
	volatile int64_t t154 = -15LL;

    t154 = (((x617^x618)&x619)^x620);

    if (t154 != 531LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x621 = 26284239;
	int16_t x622 = -7;
	int8_t x623 = 0;
	volatile int32_t t155 = 39138;

    t155 = (((x621^x622)&x623)^x624);

    if (t155 != 5) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x625 = 332U;
	int8_t x626 = -1;
	uint64_t x627 = 1LLU;
	uint8_t x628 = UINT8_MAX;
	volatile uint64_t t156 = 10910527LLU;

    t156 = (((x625^x626)&x627)^x628);

    if (t156 != 254LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x629 = UINT8_MAX;
	int8_t x631 = INT8_MIN;
	volatile int64_t x632 = INT64_MAX;
	int64_t t157 = INT64_MAX;

    t157 = (((x629^x630)&x631)^x632);

    if (t157 != INT64_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = 1838349121992LL;
	uint8_t x635 = 0U;
	int64_t x636 = -816192714LL;
	volatile int64_t t158 = -232837167032222328LL;

    t158 = (((x633^x634)&x635)^x636);

    if (t158 != -816192714LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint16_t x637 = 35U;
	int64_t x638 = -1LL;
	int64_t x640 = -1LL;
	volatile int64_t t159 = 67924108912LL;

    t159 = (((x637^x638)&x639)^x640);

    if (t159 != 39LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x641 = INT16_MAX;
	int64_t x642 = INT64_MIN;
	uint64_t x644 = 2318329LLU;
	static uint64_t t160 = 57126LLU;

    t160 = (((x641^x642)&x643)^x644);

    if (t160 != 2301958LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x646 = -1;
	int8_t x647 = 34;
	volatile int64_t t161 = -253866971717LL;

    t161 = (((x645^x646)&x647)^x648);

    if (t161 != 431293743LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x649 = 2U;
	static int8_t x650 = INT8_MAX;
	int16_t x652 = 3261;
	volatile int32_t t162 = 0;

    t162 = (((x649^x650)&x651)^x652);

    if (t162 != 3261) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = INT32_MIN;
	uint64_t x656 = UINT64_MAX;
	uint64_t t163 = 3109912LLU;

    t163 = (((x653^x654)&x655)^x656);

    if (t163 != 18446743986942588927LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x657 = UINT8_MAX;
	static int16_t x658 = -3278;
	uint16_t x659 = 753U;
	int8_t x660 = INT8_MIN;

    t164 = (((x657^x658)&x659)^x660);

    if (t164 != -703) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = 20;
	uint8_t x663 = UINT8_MAX;
	volatile int32_t t165 = -1;

    t165 = (((x661^x662)&x663)^x664);

    if (t165 != -107) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = INT32_MIN;
	int64_t x667 = INT64_MIN;
	int64_t x668 = -1LL;
	int64_t t166 = -1LL;

    t166 = (((x665^x666)&x667)^x668);

    if (t166 != -1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x669 = 8U;
	static volatile int8_t x670 = 1;
	int64_t x671 = INT64_MIN;
	uint32_t x672 = 10U;

    t167 = (((x669^x670)&x671)^x672);

    if (t167 != 10LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = INT8_MAX;
	uint16_t x674 = UINT16_MAX;
	int32_t x676 = -1;

    t168 = (((x673^x674)&x675)^x676);

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x677 = -1;
	int16_t x678 = INT16_MAX;
	int32_t x680 = INT32_MIN;
	static volatile uint64_t t169 = 36LLU;

    t169 = (((x677^x678)&x679)^x680);

    if (t169 != 2147450880LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x682 = INT32_MIN;
	static volatile int8_t x683 = INT8_MIN;
	volatile int32_t t170 = 541;

    t170 = (((x681^x682)&x683)^x684);

    if (t170 != -2147450881) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x686 = 52U;
	int8_t x687 = -1;
	int32_t x688 = INT32_MIN;
	volatile int32_t t171 = 494588240;

    t171 = (((x685^x686)&x687)^x688);

    if (t171 != -2147483619) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = 1LL;
	int32_t x690 = -356956;
	int32_t x691 = INT32_MIN;
	uint16_t x692 = 211U;
	volatile int64_t t172 = -537647888LL;

    t172 = (((x689^x690)&x691)^x692);

    if (t172 != -2147483437LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x695 = INT8_MAX;
	static int8_t x696 = INT8_MIN;
	int32_t t173 = 63;

    t173 = (((x693^x694)&x695)^x696);

    if (t173 != -46) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x697 = 1U;
	volatile uint8_t x698 = UINT8_MAX;
	int32_t x699 = INT32_MAX;
	static volatile int8_t x700 = 6;
	volatile int32_t t174 = 9855;

    t174 = (((x697^x698)&x699)^x700);

    if (t174 != 248) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x702 = 8205019101495LLU;
	static volatile int16_t x704 = INT16_MAX;
	uint64_t t175 = 7LLU;

    t175 = (((x701^x702)&x703)^x704);

    if (t175 != 8205019003692LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = INT8_MIN;
	uint32_t x706 = 146U;
	volatile uint8_t x707 = 1U;
	int8_t x708 = -62;
	uint32_t t176 = 46108448U;

    t176 = (((x705^x706)&x707)^x708);

    if (t176 != 4294967234U) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = -1658542;
	static uint32_t x710 = 2U;
	volatile int64_t x712 = INT64_MIN;
	volatile int64_t t177 = -2197186710155363426LL;

    t177 = (((x709^x710)&x711)^x712);

    if (t177 != -9223372036854775728LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x713 = 3640550627914829LLU;
	int32_t x714 = INT32_MIN;
	uint64_t x715 = 921533LLU;
	volatile uint64_t t178 = 97471549428097LLU;

    t178 = (((x713^x714)&x715)^x716);

    if (t178 != 457714LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = -1;
	static int32_t x718 = INT32_MIN;
	volatile int16_t x719 = INT16_MIN;
	int16_t x720 = -1;
	volatile int32_t t179 = -7;

    t179 = (((x717^x718)&x719)^x720);

    if (t179 != -2147450881) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x724 = 2U;
	volatile int32_t t180 = 4190;

    t180 = (((x721^x722)&x723)^x724);

    if (t180 != 2) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x725 = INT16_MIN;
	static int16_t x726 = -1;
	int8_t x727 = -1;
	static int8_t x728 = -13;
	volatile int32_t t181 = -35308;

    t181 = (((x725^x726)&x727)^x728);

    if (t181 != -32756) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x730 = INT16_MIN;
	static int32_t x731 = -1;
	uint8_t x732 = UINT8_MAX;
	volatile int32_t t182 = 4;

    t182 = (((x729^x730)&x731)^x732);

    if (t182 != 2147451135) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x733 = INT8_MIN;
	static int8_t x734 = 31;
	static uint8_t x735 = 7U;
	volatile int32_t x736 = INT32_MAX;

    t183 = (((x733^x734)&x735)^x736);

    if (t183 != 2147483640) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = -8645;
	int16_t x738 = INT16_MIN;
	uint32_t x739 = UINT32_MAX;
	int64_t x740 = -1739805188095LL;
	volatile int64_t t184 = 238LL;

    t184 = (((x737^x738)&x739)^x740);

    if (t184 != -1739805163974LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x742 = -1;
	int32_t x743 = INT32_MAX;
	int8_t x744 = INT8_MIN;

    t185 = (((x741^x742)&x743)^x744);

    if (t185 != 2167574488U) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = INT8_MIN;
	uint32_t x746 = 27U;
	int8_t x747 = -4;
	static int64_t x748 = INT64_MAX;
	volatile int64_t t186 = 36LL;

    t186 = (((x745^x746)&x747)^x748);

    if (t186 != 9223372032559808615LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x749 = INT32_MAX;
	uint64_t x750 = 164LLU;
	int64_t x751 = INT64_MIN;
	int32_t x752 = INT32_MAX;
	uint64_t t187 = 8051311513LLU;

    t187 = (((x749^x750)&x751)^x752);

    if (t187 != 2147483647LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x753 = UINT8_MAX;
	uint16_t x755 = 213U;
	uint32_t x756 = 130U;
	volatile uint32_t t188 = 3878362U;

    t188 = (((x753^x754)&x755)^x756);

    if (t188 != 87U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x758 = 17365286991896LLU;
	int32_t x759 = -1;
	uint8_t x760 = 2U;
	uint64_t t189 = 67855677555LLU;

    t189 = (((x757^x758)&x759)^x760);

    if (t189 != 17365286991892LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x762 = INT64_MAX;
	uint32_t x763 = UINT32_MAX;
	volatile int8_t x764 = -7;

    t190 = (((x761^x762)&x763)^x764);

    if (t190 != -2147483642LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = -1;
	uint32_t x766 = 15U;
	uint64_t x767 = 17LLU;
	volatile int64_t x768 = -1LL;
	volatile uint64_t t191 = 652343LLU;

    t191 = (((x765^x766)&x767)^x768);

    if (t191 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = 21730;
	int8_t x770 = -1;
	int32_t t192 = -136172733;

    t192 = (((x769^x770)&x771)^x772);

    if (t192 != 672) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x773 = UINT8_MAX;
	static int32_t x774 = INT32_MAX;
	uint8_t x775 = 1U;
	volatile int32_t t193 = -93;

    t193 = (((x773^x774)&x775)^x776);

    if (t193 != 9) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = INT16_MAX;
	volatile int8_t x778 = INT8_MIN;
	uint32_t x780 = 112U;
	uint32_t t194 = 216313097U;

    t194 = (((x777^x778)&x779)^x780);

    if (t194 != 4294934640U) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = INT16_MIN;
	uint64_t x782 = UINT64_MAX;
	int16_t x783 = INT16_MIN;
	uint32_t x784 = 148766U;
	volatile uint64_t t195 = 559LLU;

    t195 = (((x781^x782)&x783)^x784);

    if (t195 != 148766LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x785 = 7U;
	volatile int8_t x786 = INT8_MIN;
	int32_t x787 = INT32_MIN;
	int8_t x788 = -3;
	uint32_t t196 = 371947U;

    t196 = (((x785^x786)&x787)^x788);

    if (t196 != 2147483645U) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = INT64_MIN;
	static int64_t x790 = -1LL;
	int8_t x791 = -40;
	int64_t t197 = 216202217LL;

    t197 = (((x789^x790)&x791)^x792);

    if (t197 != -9223372036854775769LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x793 = 6LLU;
	uint64_t x794 = UINT64_MAX;
	uint32_t x795 = 14181570U;
	volatile int64_t x796 = -14785339LL;
	volatile uint64_t t198 = 813607LLU;

    t198 = (((x793^x794)&x795)^x796);

    if (t198 != 18446744073705750533LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = INT16_MIN;
	volatile int8_t x798 = INT8_MIN;
	int32_t x799 = INT32_MIN;
	volatile int8_t x800 = -1;
	int32_t t199 = 5;

    t199 = (((x797^x798)&x799)^x800);

    if (t199 != -1) { NG(); } else { ; }
	
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

