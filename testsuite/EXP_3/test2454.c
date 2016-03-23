
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

static int16_t x4 = -1;
int64_t x11 = -44853LL;
static int32_t x13 = 33967;
int32_t x17 = -1;
int8_t x24 = INT8_MIN;
int32_t t6 = 17;
static int32_t x32 = 55562;
volatile int32_t t7 = 262266116;
uint8_t x34 = UINT8_MAX;
volatile int8_t x36 = -1;
uint64_t x46 = 85051694LLU;
int32_t x49 = 2037;
volatile uint8_t x51 = UINT8_MAX;
int32_t x53 = -364527725;
int8_t x66 = INT8_MAX;
static uint64_t x71 = 449113323LLU;
volatile uint8_t x73 = UINT8_MAX;
int64_t x76 = 1857556235LL;
int64_t t18 = -127346146397678LL;
uint32_t x101 = UINT32_MAX;
int8_t x107 = -1;
volatile int32_t t26 = 2691604;
static volatile int32_t t27 = -68356;
uint16_t x114 = 6281U;
uint16_t x116 = 0U;
volatile uint64_t t28 = 29215LLU;
uint16_t x122 = UINT16_MAX;
uint64_t x132 = 11LLU;
static volatile int8_t x133 = 0;
uint8_t x138 = UINT8_MAX;
volatile int32_t x140 = 3755;
int16_t x141 = INT16_MIN;
int64_t x143 = INT64_MIN;
volatile int64_t t35 = 2013399707042803LL;
int64_t x146 = -60547LL;
int16_t x151 = INT16_MIN;
int32_t x155 = -1;
uint32_t x156 = 218088U;
static volatile uint64_t x177 = UINT64_MAX;
int32_t x181 = INT32_MIN;
static volatile int32_t x184 = -1;
int64_t t46 = -14554202093LL;
int64_t x194 = 143327LL;
uint8_t x195 = 0U;
int64_t x199 = -1LL;
volatile uint64_t t49 = 15381342497LLU;
uint16_t x202 = 3U;
int32_t t51 = -28925;
volatile int32_t t54 = -3150;
int8_t x221 = INT8_MAX;
static int8_t x223 = INT8_MAX;
uint32_t x229 = 3U;
volatile uint16_t x232 = UINT16_MAX;
int64_t x234 = -1LL;
int32_t t59 = 3;
int64_t x246 = 446393957871LL;
uint32_t x251 = UINT32_MAX;
uint8_t x253 = 1U;
uint64_t t63 = 169637724926640LLU;
volatile int16_t x257 = INT16_MIN;
uint64_t x262 = 297297355912055019LLU;
volatile int32_t x263 = INT32_MIN;
static uint8_t x265 = 7U;
volatile int16_t x266 = -3741;
static uint32_t t66 = 30825894U;
int64_t t70 = -503487LL;
uint64_t x288 = UINT64_MAX;
int64_t x293 = 97958LL;
static int16_t x297 = -210;
int8_t x305 = -1;
volatile int8_t x307 = 2;
int8_t x312 = -1;
volatile int16_t x315 = INT16_MIN;
uint16_t x316 = 6U;
static volatile int32_t t78 = -492167387;
int8_t x322 = INT8_MAX;
volatile int32_t t80 = 148803882;
volatile int64_t x326 = INT64_MIN;
static volatile uint16_t x330 = UINT16_MAX;
static int32_t x336 = INT32_MIN;
int32_t t83 = 47;
int16_t x338 = -1;
int32_t x340 = -1;
uint64_t x347 = 239811426088LLU;
int16_t x365 = INT16_MAX;
static int8_t x368 = INT8_MIN;
int64_t t91 = -183139049793LL;
static volatile uint16_t x369 = UINT16_MAX;
int64_t x371 = -1LL;
int64_t t92 = -453318318149512216LL;
volatile uint64_t x376 = 18075LLU;
static int8_t x379 = 0;
volatile uint64_t t95 = 40375LLU;
uint64_t x385 = 4348723683199648554LLU;
volatile int16_t x389 = -1;
int8_t x394 = -32;
int8_t x396 = INT8_MAX;
int64_t x398 = INT64_MAX;
static uint64_t x399 = 50LLU;
volatile uint64_t t99 = 7869216824528LLU;
uint8_t x405 = UINT8_MAX;
uint64_t x422 = UINT64_MAX;
int64_t x424 = -420934LL;
volatile int64_t t105 = -33075767476874LL;
uint64_t x425 = 476LLU;
volatile int16_t x429 = -1;
uint32_t x432 = 14167U;
uint64_t x437 = UINT64_MAX;
uint16_t x443 = 16215U;
int8_t x444 = INT8_MIN;
volatile int64_t x449 = -1LL;
volatile uint32_t t112 = 63457U;
int16_t x453 = -1;
int16_t x459 = INT16_MAX;
uint8_t x465 = 3U;
static int64_t x471 = INT64_MIN;
static int8_t x473 = 14;
uint8_t x476 = UINT8_MAX;
int8_t x477 = 2;
int16_t x479 = INT16_MAX;
uint32_t x480 = UINT32_MAX;
static uint64_t x485 = UINT64_MAX;
volatile int16_t x496 = INT16_MIN;
uint64_t x497 = UINT64_MAX;
int8_t x499 = 1;
uint8_t x517 = 9U;
volatile uint64_t t130 = 0LLU;
int64_t t131 = 3408LL;
uint64_t x529 = UINT64_MAX;
volatile uint32_t x534 = 30882615U;
static volatile int32_t t135 = -77886764;
static int64_t x547 = INT64_MAX;
volatile int64_t x548 = INT64_MIN;
int64_t x549 = -1LL;
int16_t x551 = INT16_MAX;
volatile uint64_t x554 = 36639LLU;
volatile int8_t x559 = -1;
int8_t x564 = 5;
volatile int32_t t140 = -11098;
int32_t x566 = -1;
uint32_t x567 = 62044618U;
static int8_t x573 = INT8_MAX;
int8_t x582 = -1;
uint64_t x583 = UINT64_MAX;
uint64_t t146 = 10906109225241817LLU;
static uint64_t x589 = 930709LLU;
volatile int64_t x590 = INT64_MIN;
volatile uint32_t x591 = 23823611U;
int8_t x592 = INT8_MIN;
uint32_t t147 = 2U;
int64_t x599 = -268300823676232771LL;
volatile int64_t t149 = -6126555327755020LL;
int8_t x615 = INT8_MIN;
uint32_t x618 = 398727U;
int32_t t158 = -28696;
uint64_t x640 = 2781476LLU;
int32_t x641 = 5;
volatile int8_t x643 = INT8_MIN;
uint32_t t160 = 362221U;
static uint16_t x659 = 465U;
volatile int64_t t164 = 37654828869093831LL;
uint64_t x662 = UINT64_MAX;
volatile uint32_t x665 = 11U;
static int64_t t166 = 148857705636839514LL;
volatile int8_t x669 = INT8_MAX;
volatile int32_t x672 = INT32_MAX;
int64_t x680 = -3421LL;
volatile uint64_t x682 = 476080633674LLU;
int8_t x686 = INT8_MIN;
volatile int8_t x702 = 2;
int16_t x703 = INT16_MAX;
int16_t x704 = INT16_MIN;
static uint64_t x710 = 0LLU;
uint8_t x713 = 9U;
int64_t x715 = INT64_MIN;
uint32_t x721 = UINT32_MAX;
static volatile int64_t x724 = INT64_MIN;
static int64_t t180 = -1140792275449785754LL;
uint32_t x725 = 341929U;
int32_t x726 = -25725956;
uint8_t x736 = UINT8_MAX;
int8_t x737 = INT8_MIN;
uint16_t x738 = 15U;
uint8_t x754 = 5U;
int64_t x758 = INT64_MIN;
uint8_t x759 = 61U;
uint16_t x760 = UINT16_MAX;
int64_t x763 = 1256973717323598LL;
int64_t x771 = INT64_MIN;
volatile int64_t t192 = -17768989037LL;
static int8_t x773 = INT8_MIN;
static uint32_t t194 = 8404629U;
uint64_t x784 = 532436297771358LLU;
uint32_t x791 = 6U;
volatile uint32_t x793 = 149U;
int64_t x795 = INT64_MIN;


void f0(void) {
    	uint64_t x1 = UINT64_MAX;
	volatile int32_t x2 = -124109481;
	int32_t x3 = INT32_MIN;
	volatile int32_t t0 = -10;

    t0 = ((x1==x2)/(x3|x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 20359U;
	int16_t x6 = INT16_MIN;
	int8_t x7 = INT8_MIN;
	volatile uint8_t x8 = 0U;
	volatile int32_t t1 = 69036;

    t1 = ((x5==x6)/(x7|x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	static uint32_t x10 = 6801302U;
	volatile int8_t x12 = INT8_MIN;
	static int64_t t2 = -83358LL;

    t2 = ((x9==x10)/(x11|x12));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x14 = UINT32_MAX;
	int8_t x15 = -1;
	int16_t x16 = -1;
	volatile int32_t t3 = -3886896;

    t3 = ((x13==x14)/(x15|x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x18 = INT16_MIN;
	volatile int16_t x19 = 45;
	uint8_t x20 = UINT8_MAX;
	volatile int32_t t4 = 0;

    t4 = ((x17==x18)/(x19|x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x21 = 2999904LLU;
	uint32_t x22 = 146U;
	uint64_t x23 = 2504LLU;
	volatile uint64_t t5 = 102672LLU;

    t5 = ((x21==x22)/(x23|x24));

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MAX;
	static int32_t x26 = INT32_MIN;
	int16_t x27 = INT16_MIN;
	static int8_t x28 = -6;

    t6 = ((x25==x26)/(x27|x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = 0U;
	static int8_t x30 = INT8_MIN;
	int32_t x31 = INT32_MIN;

    t7 = ((x29==x30)/(x31|x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x33 = 0;
	volatile int32_t x35 = INT32_MIN;
	volatile int32_t t8 = -24447891;

    t8 = ((x33==x34)/(x35|x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 165627073554306917LLU;
	int8_t x38 = INT8_MAX;
	int32_t x39 = -3562;
	volatile uint64_t x40 = UINT64_MAX;
	volatile uint64_t t9 = 1795443332721LLU;

    t9 = ((x37==x38)/(x39|x40));

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x41 = INT8_MIN;
	uint64_t x42 = 56902LLU;
	int8_t x43 = INT8_MIN;
	int16_t x44 = 146;
	int32_t t10 = -649415;

    t10 = ((x41==x42)/(x43|x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = 267957LL;
	volatile int64_t x47 = INT64_MIN;
	static volatile int64_t x48 = INT64_MIN;
	static int64_t t11 = 282LL;

    t11 = ((x45==x46)/(x47|x48));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x50 = 7U;
	volatile int64_t x52 = INT64_MAX;
	int64_t t12 = 41LL;

    t12 = ((x49==x50)/(x51|x52));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x54 = 39U;
	int32_t x55 = INT32_MIN;
	int8_t x56 = INT8_MAX;
	int32_t t13 = -68908;

    t13 = ((x53==x54)/(x55|x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -23378LL;
	volatile uint32_t x58 = UINT32_MAX;
	uint64_t x59 = UINT64_MAX;
	uint16_t x60 = UINT16_MAX;
	volatile uint64_t t14 = 123LLU;

    t14 = ((x57==x58)/(x59|x60));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x61 = 188U;
	static uint16_t x62 = 20U;
	int32_t x63 = -1;
	uint32_t x64 = 4354U;
	static uint32_t t15 = 416151U;

    t15 = ((x61==x62)/(x63|x64));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x65 = 3543U;
	uint8_t x67 = UINT8_MAX;
	static uint32_t x68 = 367U;
	volatile uint32_t t16 = 1167U;

    t16 = ((x65==x66)/(x67|x68));

    if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MIN;
	static int16_t x70 = -3530;
	int16_t x72 = INT16_MAX;
	uint64_t t17 = 30951589977LLU;

    t17 = ((x69==x70)/(x71|x72));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x74 = INT8_MIN;
	int64_t x75 = -3LL;

    t18 = ((x73==x74)/(x75|x76));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = 14U;
	uint32_t x78 = 7528922U;
	int16_t x79 = -1;
	static volatile int64_t x80 = INT64_MIN;
	static volatile int64_t t19 = -8142515332LL;

    t19 = ((x77==x78)/(x79|x80));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int64_t x81 = -1LL;
	volatile int64_t x82 = -1LL;
	uint16_t x83 = 1282U;
	static uint16_t x84 = 56U;
	volatile int32_t t20 = -15;

    t20 = ((x81==x82)/(x83|x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = INT8_MIN;
	uint32_t x86 = 152662864U;
	int64_t x87 = INT64_MAX;
	int16_t x88 = -1;
	int64_t t21 = -24896949595741606LL;

    t21 = ((x85==x86)/(x87|x88));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x89 = -66371847189LL;
	int16_t x90 = -14757;
	int32_t x91 = -1;
	int8_t x92 = -1;
	volatile int32_t t22 = -1252;

    t22 = ((x89==x90)/(x91|x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = UINT64_MAX;
	static uint64_t x94 = 145251730440243LLU;
	uint16_t x95 = UINT16_MAX;
	int16_t x96 = 0;
	static int32_t t23 = -226139356;

    t23 = ((x93==x94)/(x95|x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x97 = -1302484869246LL;
	uint8_t x98 = 56U;
	uint64_t x99 = 1LLU;
	uint32_t x100 = UINT32_MAX;
	volatile uint64_t t24 = 699166LLU;

    t24 = ((x97==x98)/(x99|x100));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x102 = INT32_MIN;
	static int16_t x103 = INT16_MIN;
	int8_t x104 = INT8_MIN;
	volatile int32_t t25 = -30;

    t25 = ((x101==x102)/(x103|x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = 39;
	uint64_t x106 = 15237LLU;
	int32_t x108 = INT32_MIN;

    t26 = ((x105==x106)/(x107|x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = -1LL;
	int8_t x110 = INT8_MIN;
	int32_t x111 = INT32_MAX;
	static int32_t x112 = INT32_MIN;

    t27 = ((x109==x110)/(x111|x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x113 = -119;
	uint64_t x115 = 2091499069207144765LLU;

    t28 = ((x113==x114)/(x115|x116));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x117 = -28;
	int16_t x118 = INT16_MIN;
	static int64_t x119 = -1777789789392353224LL;
	static int32_t x120 = -1;
	volatile int64_t t29 = -16645111741928859LL;

    t29 = ((x117==x118)/(x119|x120));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x121 = INT16_MAX;
	volatile int8_t x123 = INT8_MIN;
	int16_t x124 = -340;
	int32_t t30 = 1504;

    t30 = ((x121==x122)/(x123|x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MIN;
	int64_t x126 = INT64_MAX;
	int8_t x127 = INT8_MIN;
	volatile int8_t x128 = INT8_MIN;
	int32_t t31 = -5881775;

    t31 = ((x125==x126)/(x127|x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x129 = UINT8_MAX;
	int8_t x130 = -1;
	int16_t x131 = INT16_MAX;
	volatile uint64_t t32 = 14187091258249516LLU;

    t32 = ((x129==x130)/(x131|x132));

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x134 = INT16_MAX;
	uint64_t x135 = 8433534790LLU;
	uint8_t x136 = 1U;
	uint64_t t33 = 6230778LLU;

    t33 = ((x133==x134)/(x135|x136));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = INT32_MAX;
	uint8_t x139 = UINT8_MAX;
	static volatile int32_t t34 = 87117;

    t34 = ((x137==x138)/(x139|x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x142 = 485053843;
	uint32_t x144 = 210424U;

    t35 = ((x141==x142)/(x143|x144));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = INT16_MIN;
	int8_t x147 = INT8_MAX;
	int8_t x148 = -1;
	static volatile int32_t t36 = 21;

    t36 = ((x145==x146)/(x147|x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = -1;
	int64_t x150 = INT64_MIN;
	int8_t x152 = INT8_MIN;
	static int32_t t37 = 123567;

    t37 = ((x149==x150)/(x151|x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = -1;
	int32_t x154 = INT32_MIN;
	static uint32_t t38 = 5U;

    t38 = ((x153==x154)/(x155|x156));

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = 126U;
	volatile int16_t x158 = 14897;
	int16_t x159 = -1;
	uint32_t x160 = 33271342U;
	uint32_t t39 = 131254U;

    t39 = ((x157==x158)/(x159|x160));

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x161 = 123U;
	int8_t x162 = INT8_MIN;
	int8_t x163 = -10;
	uint8_t x164 = 0U;
	int32_t t40 = -8058;

    t40 = ((x161==x162)/(x163|x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = INT16_MIN;
	uint8_t x166 = 0U;
	static int64_t x167 = 0LL;
	int8_t x168 = 1;
	int64_t t41 = 966581259667LL;

    t41 = ((x165==x166)/(x167|x168));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x169 = INT32_MAX;
	int8_t x170 = INT8_MIN;
	volatile uint16_t x171 = UINT16_MAX;
	int64_t x172 = -1LL;
	int64_t t42 = 4665496057422LL;

    t42 = ((x169==x170)/(x171|x172));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = -55;
	static int64_t x174 = -174564LL;
	volatile int16_t x175 = INT16_MIN;
	uint16_t x176 = 0U;
	int32_t t43 = 234914;

    t43 = ((x173==x174)/(x175|x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x178 = -1;
	int8_t x179 = INT8_MIN;
	int16_t x180 = 809;
	volatile int32_t t44 = -68;

    t44 = ((x177==x178)/(x179|x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x182 = INT32_MIN;
	int64_t x183 = INT64_MIN;
	int64_t t45 = -123345186571185LL;

    t45 = ((x181==x182)/(x183|x184));

    if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = -1LL;
	volatile uint16_t x186 = UINT16_MAX;
	int8_t x187 = 0;
	static volatile int64_t x188 = 151186233754LL;

    t46 = ((x185==x186)/(x187|x188));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x189 = INT16_MAX;
	int32_t x190 = INT32_MAX;
	int64_t x191 = -1990585780024697LL;
	volatile int32_t x192 = INT32_MAX;
	int64_t t47 = 9316068758086042LL;

    t47 = ((x189==x190)/(x191|x192));

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x193 = -1;
	volatile uint64_t x196 = 2277878724452920LLU;
	uint64_t t48 = 1LLU;

    t48 = ((x193==x194)/(x195|x196));

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x197 = UINT32_MAX;
	uint8_t x198 = 13U;
	uint64_t x200 = UINT64_MAX;

    t49 = ((x197==x198)/(x199|x200));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MIN;
	int8_t x203 = INT8_MIN;
	int8_t x204 = -1;
	volatile int32_t t50 = 1547;

    t50 = ((x201==x202)/(x203|x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x205 = 13071U;
	int8_t x206 = INT8_MAX;
	uint16_t x207 = 1187U;
	int16_t x208 = INT16_MAX;

    t51 = ((x205==x206)/(x207|x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint8_t x209 = 5U;
	static int16_t x210 = INT16_MAX;
	volatile uint32_t x211 = UINT32_MAX;
	volatile int8_t x212 = INT8_MIN;
	uint32_t t52 = 175702U;

    t52 = ((x209==x210)/(x211|x212));

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = INT16_MIN;
	int8_t x214 = INT8_MAX;
	int32_t x215 = INT32_MAX;
	uint8_t x216 = 17U;
	static volatile int32_t t53 = -8226881;

    t53 = ((x213==x214)/(x215|x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x217 = 6046181213576178LLU;
	int32_t x218 = 1;
	int8_t x219 = -18;
	int16_t x220 = -1;

    t54 = ((x217==x218)/(x219|x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x222 = 1900902LLU;
	static int16_t x224 = 28;
	int32_t t55 = 214124687;

    t55 = ((x221==x222)/(x223|x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x225 = UINT64_MAX;
	static int8_t x226 = -1;
	volatile int64_t x227 = -1074637403463675155LL;
	static uint32_t x228 = UINT32_MAX;
	int64_t t56 = 854LL;

    t56 = ((x225==x226)/(x227|x228));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint16_t x230 = UINT16_MAX;
	volatile int32_t x231 = INT32_MIN;
	volatile int32_t t57 = -37953;

    t57 = ((x229==x230)/(x231|x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x233 = 1140LL;
	volatile int32_t x235 = 26029;
	static uint8_t x236 = 96U;
	volatile int32_t t58 = 1;

    t58 = ((x233==x234)/(x235|x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x237 = 1;
	int64_t x238 = INT64_MIN;
	int32_t x239 = INT32_MAX;
	int32_t x240 = INT32_MIN;

    t59 = ((x237==x238)/(x239|x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x241 = -1LL;
	uint64_t x242 = 4608584990104LLU;
	int8_t x243 = -1;
	int64_t x244 = -1LL;
	volatile int64_t t60 = 23LL;

    t60 = ((x241==x242)/(x243|x244));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x245 = 602U;
	int16_t x247 = INT16_MIN;
	volatile int16_t x248 = INT16_MAX;
	volatile int32_t t61 = -8358;

    t61 = ((x245==x246)/(x247|x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x249 = 0U;
	uint32_t x250 = UINT32_MAX;
	int64_t x252 = 4076LL;
	int64_t t62 = 59668515LL;

    t62 = ((x249==x250)/(x251|x252));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x254 = -1;
	static int32_t x255 = 4144077;
	uint64_t x256 = 283796988LLU;

    t63 = ((x253==x254)/(x255|x256));

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x258 = INT16_MAX;
	static int32_t x259 = INT32_MAX;
	volatile int32_t x260 = INT32_MIN;
	volatile int32_t t64 = -1658695;

    t64 = ((x257==x258)/(x259|x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint8_t x261 = UINT8_MAX;
	int16_t x264 = -35;
	int32_t t65 = 0;

    t65 = ((x261==x262)/(x263|x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x267 = 1151U;
	static uint32_t x268 = UINT32_MAX;

    t66 = ((x265==x266)/(x267|x268));

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x269 = 1135548974325133545LL;
	int64_t x270 = INT64_MAX;
	int8_t x271 = -45;
	static int8_t x272 = 18;
	volatile int32_t t67 = -2045864;

    t67 = ((x269==x270)/(x271|x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x273 = -1LL;
	uint32_t x274 = UINT32_MAX;
	int32_t x275 = INT32_MIN;
	uint32_t x276 = 229055663U;
	volatile uint32_t t68 = 0U;

    t68 = ((x273==x274)/(x275|x276));

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x277 = 269295396U;
	int16_t x278 = INT16_MIN;
	static uint64_t x279 = UINT64_MAX;
	int8_t x280 = -1;
	volatile uint64_t t69 = 13573289052316LLU;

    t69 = ((x277==x278)/(x279|x280));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x281 = 59254U;
	int64_t x282 = -1LL;
	static int64_t x283 = INT64_MAX;
	static volatile int32_t x284 = -1;

    t70 = ((x281==x282)/(x283|x284));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = INT8_MAX;
	int64_t x286 = 98766LL;
	int64_t x287 = INT64_MAX;
	uint64_t t71 = 907694978LLU;

    t71 = ((x285==x286)/(x287|x288));

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = INT8_MAX;
	static uint32_t x290 = 329358U;
	int64_t x291 = INT64_MIN;
	volatile int64_t x292 = -2894613516945683LL;
	int64_t t72 = -223492316465301512LL;

    t72 = ((x289==x290)/(x291|x292));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x294 = UINT32_MAX;
	static uint8_t x295 = UINT8_MAX;
	uint64_t x296 = 485273409676237LLU;
	uint64_t t73 = 1305173LLU;

    t73 = ((x293==x294)/(x295|x296));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x298 = 3U;
	int16_t x299 = -1;
	int32_t x300 = INT32_MAX;
	static volatile int32_t t74 = -1626;

    t74 = ((x297==x298)/(x299|x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x301 = 0;
	int32_t x302 = -2480527;
	static int32_t x303 = 132288;
	uint64_t x304 = UINT64_MAX;
	uint64_t t75 = 4072565LLU;

    t75 = ((x301==x302)/(x303|x304));

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x306 = 52U;
	uint8_t x308 = 3U;
	int32_t t76 = -155;

    t76 = ((x305==x306)/(x307|x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = -1;
	static int32_t x310 = -1;
	uint32_t x311 = 28U;
	uint32_t t77 = 269157U;

    t77 = ((x309==x310)/(x311|x312));

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = INT64_MAX;
	static int32_t x314 = -18;

    t78 = ((x313==x314)/(x315|x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x317 = 287363;
	int8_t x318 = INT8_MAX;
	volatile int16_t x319 = INT16_MIN;
	static volatile uint32_t x320 = 302852U;
	static uint32_t t79 = 1729841U;

    t79 = ((x317==x318)/(x319|x320));

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x321 = 461U;
	int16_t x323 = -1;
	int32_t x324 = INT32_MIN;

    t80 = ((x321==x322)/(x323|x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x325 = UINT16_MAX;
	static volatile int32_t x327 = INT32_MAX;
	static uint16_t x328 = UINT16_MAX;
	static int32_t t81 = -961823;

    t81 = ((x325==x326)/(x327|x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = -1;
	uint64_t x331 = 39557610LLU;
	uint64_t x332 = 122057864116780LLU;
	static volatile uint64_t t82 = 350278843887332632LLU;

    t82 = ((x329==x330)/(x331|x332));

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x333 = INT16_MIN;
	static uint16_t x334 = UINT16_MAX;
	static volatile int8_t x335 = -1;

    t83 = ((x333==x334)/(x335|x336));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x337 = 14U;
	static int64_t x339 = -1LL;
	static volatile int64_t t84 = -16127047027393LL;

    t84 = ((x337==x338)/(x339|x340));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x341 = -1;
	int64_t x342 = -337924748278311781LL;
	volatile int32_t x343 = 1;
	volatile uint64_t x344 = 256491LLU;
	uint64_t t85 = 221542247LLU;

    t85 = ((x341==x342)/(x343|x344));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = -24;
	volatile uint64_t x346 = UINT64_MAX;
	static int8_t x348 = -1;
	volatile uint64_t t86 = 237158105961268900LLU;

    t86 = ((x345==x346)/(x347|x348));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x349 = -1;
	int8_t x350 = INT8_MAX;
	static volatile int8_t x351 = INT8_MAX;
	volatile int16_t x352 = INT16_MAX;
	volatile int32_t t87 = 126200647;

    t87 = ((x349==x350)/(x351|x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = INT32_MIN;
	volatile int16_t x354 = -1;
	uint8_t x355 = UINT8_MAX;
	int16_t x356 = INT16_MIN;
	int32_t t88 = -11169627;

    t88 = ((x353==x354)/(x355|x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x357 = 1U;
	volatile int64_t x358 = INT64_MAX;
	static volatile uint32_t x359 = 233010U;
	volatile int64_t x360 = INT64_MIN;
	volatile int64_t t89 = -1478864LL;

    t89 = ((x357==x358)/(x359|x360));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x361 = INT16_MIN;
	volatile uint32_t x362 = 194912713U;
	static volatile uint16_t x363 = UINT16_MAX;
	int8_t x364 = -15;
	volatile int32_t t90 = 186692170;

    t90 = ((x361==x362)/(x363|x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x366 = -1;
	int64_t x367 = INT64_MIN;

    t91 = ((x365==x366)/(x367|x368));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x370 = 15614631LLU;
	int16_t x372 = INT16_MIN;

    t92 = ((x369==x370)/(x371|x372));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = -1;
	static int32_t x374 = INT32_MIN;
	int64_t x375 = 10215599LL;
	volatile uint64_t t93 = 982795093436015002LLU;

    t93 = ((x373==x374)/(x375|x376));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = 1171;
	int32_t x378 = INT32_MIN;
	volatile int16_t x380 = 2;
	int32_t t94 = -28;

    t94 = ((x377==x378)/(x379|x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = 0;
	int16_t x382 = INT16_MAX;
	int16_t x383 = INT16_MAX;
	uint64_t x384 = UINT64_MAX;

    t95 = ((x381==x382)/(x383|x384));

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x386 = INT8_MIN;
	static int16_t x387 = INT16_MAX;
	volatile int32_t x388 = INT32_MAX;
	volatile int32_t t96 = -40023;

    t96 = ((x385==x386)/(x387|x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x390 = -1;
	int32_t x391 = 1064692;
	uint32_t x392 = 241747050U;
	static volatile uint32_t t97 = 56U;

    t97 = ((x389==x390)/(x391|x392));

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = -123;
	uint64_t x395 = 933707LLU;
	static volatile uint64_t t98 = 179250LLU;

    t98 = ((x393==x394)/(x395|x396));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x397 = UINT16_MAX;
	uint16_t x400 = 59U;

    t99 = ((x397==x398)/(x399|x400));

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x401 = 24U;
	static uint32_t x402 = UINT32_MAX;
	uint32_t x403 = 0U;
	int16_t x404 = INT16_MAX;
	volatile uint32_t t100 = 2017U;

    t100 = ((x401==x402)/(x403|x404));

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x406 = 2U;
	static int64_t x407 = -1LL;
	int64_t x408 = -4567849LL;
	volatile int64_t t101 = 1LL;

    t101 = ((x405==x406)/(x407|x408));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = INT16_MAX;
	int32_t x410 = 226106333;
	int8_t x411 = INT8_MIN;
	static uint8_t x412 = UINT8_MAX;
	int32_t t102 = 200090;

    t102 = ((x409==x410)/(x411|x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = -249;
	static int16_t x414 = -1;
	int8_t x415 = INT8_MIN;
	int16_t x416 = INT16_MAX;
	volatile int32_t t103 = -36294766;

    t103 = ((x413==x414)/(x415|x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x417 = -1;
	int16_t x418 = -1;
	int32_t x419 = -72;
	uint64_t x420 = 880LLU;
	volatile uint64_t t104 = 1831813864LLU;

    t104 = ((x417==x418)/(x419|x420));

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = -17602468LL;
	static int16_t x423 = INT16_MIN;

    t105 = ((x421==x422)/(x423|x424));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x426 = UINT32_MAX;
	volatile int64_t x427 = INT64_MIN;
	static volatile uint8_t x428 = UINT8_MAX;
	int64_t t106 = 13258530955138918LL;

    t106 = ((x425==x426)/(x427|x428));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x430 = UINT64_MAX;
	int32_t x431 = INT32_MAX;
	static volatile uint32_t t107 = 11271U;

    t107 = ((x429==x430)/(x431|x432));

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = INT8_MIN;
	static int8_t x434 = 36;
	volatile uint16_t x435 = 1106U;
	static volatile uint16_t x436 = UINT16_MAX;
	volatile int32_t t108 = 895317327;

    t108 = ((x433==x434)/(x435|x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x438 = -1LL;
	int16_t x439 = -1;
	int64_t x440 = INT64_MIN;
	int64_t t109 = 2109422030719489LL;

    t109 = ((x437==x438)/(x439|x440));

    if (t109 != -1LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x441 = 221706;
	uint64_t x442 = UINT64_MAX;
	int32_t t110 = 27980684;

    t110 = ((x441==x442)/(x443|x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = INT32_MAX;
	uint64_t x446 = 1098815LLU;
	uint32_t x447 = 1U;
	int8_t x448 = INT8_MIN;
	uint32_t t111 = 238030U;

    t111 = ((x445==x446)/(x447|x448));

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x450 = UINT16_MAX;
	uint16_t x451 = 5U;
	volatile uint32_t x452 = 7412U;

    t112 = ((x449==x450)/(x451|x452));

    if (t112 != 0U) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x454 = 17106U;
	static uint16_t x455 = UINT16_MAX;
	static int32_t x456 = INT32_MAX;
	volatile int32_t t113 = -78073;

    t113 = ((x453==x454)/(x455|x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x457 = -1;
	uint32_t x458 = UINT32_MAX;
	volatile int32_t x460 = INT32_MAX;
	volatile int32_t t114 = 2428400;

    t114 = ((x457==x458)/(x459|x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = INT32_MIN;
	static int32_t x462 = INT32_MIN;
	int64_t x463 = -1LL;
	int16_t x464 = INT16_MIN;
	volatile int64_t t115 = -1898LL;

    t115 = ((x461==x462)/(x463|x464));

    if (t115 != -1LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x466 = INT8_MIN;
	volatile int32_t x467 = -1;
	volatile uint16_t x468 = 3903U;
	volatile int32_t t116 = -277780450;

    t116 = ((x465==x466)/(x467|x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x469 = -1LL;
	uint32_t x470 = 111U;
	volatile int32_t x472 = INT32_MIN;
	volatile int64_t t117 = 183173LL;

    t117 = ((x469==x470)/(x471|x472));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x474 = INT32_MIN;
	volatile int32_t x475 = 16;
	int32_t t118 = 1028324;

    t118 = ((x473==x474)/(x475|x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x478 = 4;
	static volatile uint32_t t119 = 2549161U;

    t119 = ((x477==x478)/(x479|x480));

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x481 = 2032;
	static int64_t x482 = -28809990787303781LL;
	static volatile int64_t x483 = -1LL;
	static volatile uint16_t x484 = 1U;
	volatile int64_t t120 = -202278LL;

    t120 = ((x481==x482)/(x483|x484));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x486 = INT32_MIN;
	volatile int32_t x487 = 1344;
	int16_t x488 = INT16_MIN;
	volatile int32_t t121 = 154860476;

    t121 = ((x485==x486)/(x487|x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = INT8_MIN;
	int64_t x490 = -1LL;
	static int64_t x491 = INT64_MIN;
	int8_t x492 = -2;
	static int64_t t122 = 13LL;

    t122 = ((x489==x490)/(x491|x492));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = INT32_MIN;
	uint64_t x494 = 1684979091LLU;
	int32_t x495 = -1;
	volatile int32_t t123 = -325641282;

    t123 = ((x493==x494)/(x495|x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x498 = INT64_MIN;
	static int32_t x500 = INT32_MIN;
	static volatile int32_t t124 = 188601968;

    t124 = ((x497==x498)/(x499|x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = INT16_MIN;
	static volatile int8_t x502 = INT8_MAX;
	volatile int16_t x503 = INT16_MIN;
	uint32_t x504 = 676425755U;
	volatile uint32_t t125 = 103535U;

    t125 = ((x501==x502)/(x503|x504));

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x505 = -25587512547796091LL;
	int64_t x506 = 187LL;
	static uint64_t x507 = 1844LLU;
	uint8_t x508 = 0U;
	volatile uint64_t t126 = 10247902LLU;

    t126 = ((x505==x506)/(x507|x508));

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x509 = -1LL;
	static int64_t x510 = 1234168159265336LL;
	uint16_t x511 = 3408U;
	int8_t x512 = 1;
	volatile int32_t t127 = 49;

    t127 = ((x509==x510)/(x511|x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint32_t x513 = 1U;
	int32_t x514 = INT32_MIN;
	volatile uint16_t x515 = UINT16_MAX;
	uint32_t x516 = 120416823U;
	uint32_t t128 = 1U;

    t128 = ((x513==x514)/(x515|x516));

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x518 = -1;
	int64_t x519 = INT64_MAX;
	volatile uint16_t x520 = 816U;
	static int64_t t129 = -10024266908483716LL;

    t129 = ((x517==x518)/(x519|x520));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = -1;
	int64_t x522 = INT64_MIN;
	int64_t x523 = -209LL;
	uint64_t x524 = UINT64_MAX;

    t130 = ((x521==x522)/(x523|x524));

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = -157914LL;
	volatile int8_t x526 = -1;
	int16_t x527 = INT16_MIN;
	static int64_t x528 = -61949511110LL;

    t131 = ((x525==x526)/(x527|x528));

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x530 = INT64_MAX;
	int8_t x531 = INT8_MAX;
	static int32_t x532 = INT32_MAX;
	volatile int32_t t132 = -1687;

    t132 = ((x529==x530)/(x531|x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = -1;
	int64_t x535 = -1LL;
	uint16_t x536 = 0U;
	volatile int64_t t133 = -11819LL;

    t133 = ((x533==x534)/(x535|x536));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint64_t x537 = UINT64_MAX;
	uint16_t x538 = 6985U;
	int64_t x539 = INT64_MIN;
	int64_t x540 = -1LL;
	int64_t t134 = -522162365109339LL;

    t134 = ((x537==x538)/(x539|x540));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = INT8_MAX;
	int16_t x542 = -66;
	uint16_t x543 = 30645U;
	int32_t x544 = -259;

    t135 = ((x541==x542)/(x543|x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = -1LL;
	uint32_t x546 = 87022236U;
	int64_t t136 = 10281LL;

    t136 = ((x545==x546)/(x547|x548));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x550 = 25936095U;
	int8_t x552 = 10;
	volatile int32_t t137 = 1;

    t137 = ((x549==x550)/(x551|x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x553 = 238U;
	int8_t x555 = INT8_MIN;
	uint16_t x556 = UINT16_MAX;
	volatile int32_t t138 = -451527;

    t138 = ((x553==x554)/(x555|x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = INT8_MIN;
	int16_t x558 = 1;
	static int64_t x560 = INT64_MAX;
	volatile int64_t t139 = 516644824LL;

    t139 = ((x557==x558)/(x559|x560));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x561 = UINT32_MAX;
	static volatile uint8_t x562 = UINT8_MAX;
	int16_t x563 = 3428;

    t140 = ((x561==x562)/(x563|x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x565 = 53474U;
	volatile uint8_t x568 = UINT8_MAX;
	static uint32_t t141 = 878U;

    t141 = ((x565==x566)/(x567|x568));

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = INT64_MIN;
	int64_t x570 = INT64_MAX;
	volatile int32_t x571 = -1;
	int64_t x572 = INT64_MAX;
	int64_t t142 = 3048002054939275LL;

    t142 = ((x569==x570)/(x571|x572));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x574 = 44LL;
	uint32_t x575 = UINT32_MAX;
	uint8_t x576 = UINT8_MAX;
	uint32_t t143 = 15832819U;

    t143 = ((x573==x574)/(x575|x576));

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint64_t x577 = UINT64_MAX;
	int32_t x578 = INT32_MAX;
	static uint64_t x579 = 2LLU;
	uint8_t x580 = UINT8_MAX;
	uint64_t t144 = 546320LLU;

    t144 = ((x577==x578)/(x579|x580));

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = -451493858LL;
	uint16_t x584 = UINT16_MAX;
	static volatile uint64_t t145 = 6LLU;

    t145 = ((x581==x582)/(x583|x584));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = -1;
	static uint64_t x586 = 1417252LLU;
	static uint64_t x587 = UINT64_MAX;
	int16_t x588 = INT16_MAX;

    t146 = ((x585==x586)/(x587|x588));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    

    t147 = ((x589==x590)/(x591|x592));

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x593 = -1;
	volatile int16_t x594 = INT16_MIN;
	int8_t x595 = -1;
	static int64_t x596 = INT64_MIN;
	static volatile int64_t t148 = -23LL;

    t148 = ((x593==x594)/(x595|x596));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = INT16_MIN;
	int64_t x598 = 1959991911944LL;
	uint8_t x600 = UINT8_MAX;

    t149 = ((x597==x598)/(x599|x600));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x601 = -15;
	int8_t x602 = 3;
	volatile uint8_t x603 = 12U;
	int32_t x604 = INT32_MIN;
	int32_t t150 = -7;

    t150 = ((x601==x602)/(x603|x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x605 = 3U;
	static uint64_t x606 = UINT64_MAX;
	uint64_t x607 = 66332803765526LLU;
	uint8_t x608 = UINT8_MAX;
	static volatile uint64_t t151 = 8502521879070173LLU;

    t151 = ((x605==x606)/(x607|x608));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x609 = -1;
	int8_t x610 = INT8_MIN;
	int16_t x611 = 1;
	volatile int64_t x612 = INT64_MAX;
	volatile int64_t t152 = 2447074500486233967LL;

    t152 = ((x609==x610)/(x611|x612));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = INT8_MAX;
	int8_t x614 = INT8_MIN;
	int16_t x616 = INT16_MIN;
	int32_t t153 = -66251002;

    t153 = ((x613==x614)/(x615|x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = 913618402850042LL;
	int64_t x619 = 38382052LL;
	uint16_t x620 = 24U;
	static int64_t t154 = 0LL;

    t154 = ((x617==x618)/(x619|x620));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint32_t x621 = 476423U;
	int8_t x622 = INT8_MAX;
	uint64_t x623 = UINT64_MAX;
	int16_t x624 = INT16_MIN;
	uint64_t t155 = 7112512LLU;

    t155 = ((x621==x622)/(x623|x624));

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = 0LL;
	static volatile int8_t x626 = INT8_MIN;
	int32_t x627 = -2851;
	uint16_t x628 = 2U;
	int32_t t156 = -35605;

    t156 = ((x625==x626)/(x627|x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint32_t x629 = 20491U;
	uint32_t x630 = 84026307U;
	int32_t x631 = 172;
	int64_t x632 = INT64_MAX;
	volatile int64_t t157 = -700253685LL;

    t157 = ((x629==x630)/(x631|x632));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x633 = 5U;
	int64_t x634 = INT64_MIN;
	uint16_t x635 = UINT16_MAX;
	int8_t x636 = INT8_MIN;

    t158 = ((x633==x634)/(x635|x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x637 = INT32_MIN;
	int8_t x638 = INT8_MAX;
	volatile uint16_t x639 = UINT16_MAX;
	uint64_t t159 = 6866136083542445LLU;

    t159 = ((x637==x638)/(x639|x640));

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x642 = -5388;
	uint32_t x644 = UINT32_MAX;

    t160 = ((x641==x642)/(x643|x644));

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x645 = -1;
	static int32_t x646 = INT32_MIN;
	int32_t x647 = 1687851;
	int16_t x648 = -1;
	volatile int32_t t161 = 1;

    t161 = ((x645==x646)/(x647|x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x649 = UINT64_MAX;
	int32_t x650 = 828;
	int8_t x651 = -1;
	int16_t x652 = -1;
	int32_t t162 = 33391504;

    t162 = ((x649==x650)/(x651|x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x653 = UINT32_MAX;
	int32_t x654 = INT32_MAX;
	volatile uint16_t x655 = 1U;
	int64_t x656 = -2LL;
	static volatile int64_t t163 = 252280543127945LL;

    t163 = ((x653==x654)/(x655|x656));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = -1LL;
	int32_t x658 = -4528;
	int64_t x660 = INT64_MIN;

    t164 = ((x657==x658)/(x659|x660));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x661 = INT32_MAX;
	int8_t x663 = INT8_MIN;
	uint64_t x664 = 62616LLU;
	volatile uint64_t t165 = 11074478LLU;

    t165 = ((x661==x662)/(x663|x664));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x666 = 413LLU;
	static int16_t x667 = INT16_MIN;
	int64_t x668 = INT64_MIN;

    t166 = ((x665==x666)/(x667|x668));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x670 = -1;
	static int32_t x671 = -736514;
	int32_t t167 = 4012350;

    t167 = ((x669==x670)/(x671|x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x673 = 735694992890034341LLU;
	static int16_t x674 = 1;
	uint16_t x675 = 0U;
	static volatile int8_t x676 = INT8_MAX;
	static int32_t t168 = -835396130;

    t168 = ((x673==x674)/(x675|x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x677 = UINT32_MAX;
	int16_t x678 = INT16_MIN;
	uint16_t x679 = 4U;
	int64_t t169 = 3168048LL;

    t169 = ((x677==x678)/(x679|x680));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = INT16_MIN;
	volatile int8_t x683 = INT8_MIN;
	int32_t x684 = INT32_MIN;
	int32_t t170 = -2283358;

    t170 = ((x681==x682)/(x683|x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x685 = 3245733U;
	static int16_t x687 = INT16_MIN;
	int16_t x688 = INT16_MIN;
	static int32_t t171 = -129733;

    t171 = ((x685==x686)/(x687|x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = INT32_MAX;
	int8_t x690 = INT8_MIN;
	static int32_t x691 = INT32_MIN;
	int16_t x692 = INT16_MIN;
	volatile int32_t t172 = -1;

    t172 = ((x689==x690)/(x691|x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint16_t x693 = 163U;
	static int64_t x694 = -959LL;
	volatile int64_t x695 = -1LL;
	uint8_t x696 = 0U;
	int64_t t173 = 841016794677418860LL;

    t173 = ((x693==x694)/(x695|x696));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = -1;
	volatile int16_t x698 = INT16_MIN;
	int32_t x699 = -1;
	uint64_t x700 = 18018752452095787LLU;
	volatile uint64_t t174 = 2955092LLU;

    t174 = ((x697==x698)/(x699|x700));

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x701 = INT8_MIN;
	volatile int32_t t175 = -10547;

    t175 = ((x701==x702)/(x703|x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = -1472;
	int16_t x706 = 1;
	volatile uint16_t x707 = UINT16_MAX;
	volatile int8_t x708 = -1;
	int32_t t176 = 1858793;

    t176 = ((x705==x706)/(x707|x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = -30;
	uint64_t x711 = 112497LLU;
	uint32_t x712 = 2055231335U;
	volatile uint64_t t177 = 71148136606820557LLU;

    t177 = ((x709==x710)/(x711|x712));

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x714 = -18636;
	uint8_t x716 = 4U;
	volatile int64_t t178 = -107059161962659239LL;

    t178 = ((x713==x714)/(x715|x716));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x717 = UINT32_MAX;
	int16_t x718 = INT16_MIN;
	int16_t x719 = 507;
	volatile int32_t x720 = -1;
	static volatile int32_t t179 = -1;

    t179 = ((x717==x718)/(x719|x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint16_t x722 = 3212U;
	int64_t x723 = -1LL;

    t180 = ((x721==x722)/(x723|x724));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x727 = 14734LLU;
	uint16_t x728 = 20U;
	volatile uint64_t t181 = 17LLU;

    t181 = ((x725==x726)/(x727|x728));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x729 = 66341494776968014LL;
	uint16_t x730 = UINT16_MAX;
	static uint16_t x731 = 49U;
	int32_t x732 = INT32_MIN;
	int32_t t182 = 5374;

    t182 = ((x729==x730)/(x731|x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x733 = INT16_MIN;
	int8_t x734 = 14;
	static uint64_t x735 = 167LLU;
	uint64_t t183 = 3848984543843406LLU;

    t183 = ((x733==x734)/(x735|x736));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x739 = 0U;
	static uint16_t x740 = 1U;
	volatile int32_t t184 = -461;

    t184 = ((x737==x738)/(x739|x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = INT32_MIN;
	uint32_t x742 = 0U;
	static int8_t x743 = 0;
	static uint64_t x744 = 35658289581264967LLU;
	uint64_t t185 = 119479592LLU;

    t185 = ((x741==x742)/(x743|x744));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = -1LL;
	int64_t x746 = -12515130173253LL;
	int32_t x747 = 18011;
	static int64_t x748 = INT64_MAX;
	int64_t t186 = 4LL;

    t186 = ((x745==x746)/(x747|x748));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x749 = 26793;
	static volatile uint32_t x750 = 46U;
	static int64_t x751 = -1LL;
	static uint16_t x752 = UINT16_MAX;
	volatile int64_t t187 = 47521636116LL;

    t187 = ((x749==x750)/(x751|x752));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = INT32_MIN;
	int16_t x755 = INT16_MAX;
	uint32_t x756 = 128U;
	uint32_t t188 = 490684574U;

    t188 = ((x753==x754)/(x755|x756));

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = -60439373100136LL;
	int32_t t189 = -360133368;

    t189 = ((x757==x758)/(x759|x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x761 = UINT16_MAX;
	uint8_t x762 = UINT8_MAX;
	uint64_t x764 = 13LLU;
	static volatile uint64_t t190 = 206840513LLU;

    t190 = ((x761==x762)/(x763|x764));

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = INT32_MIN;
	volatile uint8_t x766 = 11U;
	static int32_t x767 = INT32_MIN;
	uint32_t x768 = 168538393U;
	uint32_t t191 = 54438838U;

    t191 = ((x765==x766)/(x767|x768));

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x769 = UINT32_MAX;
	static int8_t x770 = INT8_MIN;
	static uint32_t x772 = 4273100U;

    t192 = ((x769==x770)/(x771|x772));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x774 = 175U;
	static volatile int32_t x775 = INT32_MIN;
	uint32_t x776 = 1U;
	uint32_t t193 = 41U;

    t193 = ((x773==x774)/(x775|x776));

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = INT8_MAX;
	volatile int16_t x778 = INT16_MAX;
	volatile uint32_t x779 = 2U;
	int8_t x780 = INT8_MIN;

    t194 = ((x777==x778)/(x779|x780));

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x781 = 10672;
	int64_t x782 = INT64_MIN;
	int32_t x783 = INT32_MIN;
	uint64_t t195 = 8186401339754971LLU;

    t195 = ((x781==x782)/(x783|x784));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x785 = INT64_MAX;
	static volatile uint8_t x786 = UINT8_MAX;
	uint16_t x787 = 5U;
	int8_t x788 = INT8_MAX;
	int32_t t196 = -270928;

    t196 = ((x785==x786)/(x787|x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x789 = UINT8_MAX;
	int64_t x790 = INT64_MAX;
	static uint8_t x792 = 112U;
	volatile uint32_t t197 = 48711027U;

    t197 = ((x789==x790)/(x791|x792));

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x794 = -1;
	static int8_t x796 = INT8_MIN;
	volatile int64_t t198 = -7LL;

    t198 = ((x793==x794)/(x795|x796));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x797 = 2U;
	uint64_t x798 = 17326272098580383LLU;
	int32_t x799 = 71;
	int16_t x800 = INT16_MIN;
	int32_t t199 = 181;

    t199 = ((x797==x798)/(x799|x800));

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

