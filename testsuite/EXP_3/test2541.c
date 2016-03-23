
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

static uint16_t x3 = 300U;
int64_t x7 = INT64_MAX;
uint16_t x9 = UINT16_MAX;
int16_t x11 = 2691;
static int32_t x12 = INT32_MIN;
int32_t t2 = 1980;
int64_t x13 = INT64_MAX;
int8_t x21 = -1;
volatile int32_t t5 = 261533573;
int8_t x26 = INT8_MIN;
int16_t x28 = INT16_MIN;
static int32_t x32 = INT32_MIN;
int32_t t7 = -143961365;
volatile int16_t x43 = INT16_MAX;
volatile int32_t x46 = -16721;
int32_t x47 = INT32_MIN;
uint64_t x51 = 97LLU;
int8_t x54 = INT8_MAX;
volatile int32_t x56 = INT32_MIN;
volatile int8_t x60 = INT8_MIN;
volatile int32_t t16 = -423908791;
static int8_t x73 = 0;
volatile uint16_t x76 = UINT16_MAX;
int8_t x77 = INT8_MAX;
int32_t t19 = 0;
volatile int32_t t20 = -252545362;
int64_t x85 = INT64_MIN;
int32_t t22 = -7341;
int32_t x107 = 506890;
static uint64_t x115 = 1337382402700LLU;
static int32_t t28 = -32710480;
static volatile uint8_t x120 = UINT8_MAX;
int64_t x127 = -66431206LL;
static int32_t x136 = INT32_MIN;
int32_t t35 = -507863;
volatile uint32_t x148 = 270U;
static int16_t x149 = INT16_MIN;
uint8_t x153 = UINT8_MAX;
int32_t x156 = INT32_MIN;
volatile int32_t t38 = 6;
int8_t x161 = -4;
int8_t x167 = INT8_MIN;
int32_t t41 = -4470;
volatile int32_t t42 = 174868041;
static int32_t x175 = INT32_MIN;
int32_t t43 = 0;
int16_t x179 = INT16_MIN;
int8_t x191 = INT8_MAX;
static int32_t t47 = -839;
static uint32_t x205 = 119U;
volatile int32_t t51 = -665564;
static int64_t x222 = 4747339164481899LL;
uint64_t x224 = UINT64_MAX;
static uint32_t x229 = 2588040U;
int32_t t57 = -57;
static volatile uint64_t x233 = 67927161994229LLU;
int16_t x239 = 361;
static uint64_t x241 = UINT64_MAX;
static int64_t x242 = -1LL;
volatile int8_t x243 = 22;
int32_t t61 = 19;
static volatile int32_t x254 = 0;
int64_t x259 = -1LL;
int32_t x263 = INT32_MIN;
int64_t x268 = INT64_MAX;
int8_t x272 = INT8_MAX;
volatile int32_t t67 = 248052;
int16_t x278 = INT16_MAX;
static uint8_t x280 = UINT8_MAX;
int32_t t69 = -7391;
uint16_t x285 = UINT16_MAX;
static int32_t x290 = INT32_MAX;
volatile int32_t t73 = 628322090;
int16_t x297 = -106;
int16_t x301 = -1;
int32_t x307 = INT32_MIN;
uint64_t x311 = 13292783LLU;
volatile int32_t t78 = 29313229;
int32_t x328 = -1;
static int8_t x329 = INT8_MIN;
volatile int32_t x330 = INT32_MIN;
volatile int8_t x335 = INT8_MAX;
int64_t x347 = 22289LL;
uint64_t x352 = UINT64_MAX;
uint16_t x353 = UINT16_MAX;
static uint32_t x359 = UINT32_MAX;
int16_t x367 = INT16_MAX;
int32_t t91 = 5;
uint32_t x375 = 349784U;
int32_t x378 = INT32_MIN;
int16_t x380 = INT16_MAX;
static int32_t t94 = -65522553;
volatile int8_t x382 = -1;
static uint8_t x387 = 83U;
static volatile int32_t t98 = 21041835;
static int16_t x399 = -1;
volatile int32_t t101 = 1;
int32_t x412 = -1;
uint8_t x414 = 28U;
volatile uint32_t x415 = 0U;
int16_t x417 = INT16_MIN;
uint32_t x421 = 4023847U;
uint8_t x426 = 88U;
int64_t x428 = -1LL;
static int16_t x432 = INT16_MIN;
int16_t x440 = INT16_MIN;
volatile int64_t x442 = 1LL;
int64_t x445 = -1LL;
volatile uint8_t x454 = 2U;
int64_t x456 = -8071646LL;
int64_t x458 = 24747856879729LL;
static int32_t x461 = 245781770;
volatile int16_t x466 = 1;
static int16_t x469 = INT16_MIN;
uint32_t x480 = UINT32_MAX;
static int64_t x481 = INT64_MIN;
uint16_t x484 = 18U;
int8_t x487 = -1;
uint32_t x491 = 537306731U;
int64_t x496 = -1LL;
int32_t x502 = -919523099;
int32_t x505 = INT32_MIN;
int8_t x507 = -1;
int16_t x512 = INT16_MIN;
int32_t t127 = 57765;
static int32_t x514 = -1;
int32_t t128 = -8471196;
static uint32_t x519 = 1583U;
volatile int32_t t129 = -50;
int32_t x524 = -1;
volatile int32_t t130 = 224;
uint16_t x525 = 16U;
static int16_t x526 = INT16_MIN;
uint64_t x537 = UINT64_MAX;
int8_t x559 = -15;
int32_t t139 = 6478287;
uint16_t x563 = 2U;
volatile uint16_t x564 = UINT16_MAX;
int64_t x565 = -1LL;
static int32_t x568 = -12215000;
volatile int32_t t141 = 382;
uint64_t x574 = 2517041446LLU;
uint8_t x581 = UINT8_MAX;
int8_t x590 = INT8_MIN;
int64_t x594 = -132386LL;
volatile int8_t x595 = INT8_MIN;
int8_t x605 = INT8_MIN;
uint64_t x609 = 1LLU;
volatile int64_t x612 = -974435405970LL;
int16_t x614 = INT16_MIN;
int8_t x616 = 6;
volatile int32_t x622 = INT32_MAX;
uint64_t x624 = 2283913967689496LLU;
volatile int32_t t155 = 5655321;
static uint8_t x627 = 0U;
static int8_t x633 = INT8_MIN;
uint8_t x646 = 98U;
int32_t x649 = INT32_MIN;
volatile int32_t t163 = 1997312;
volatile int8_t x658 = 6;
uint64_t x662 = UINT64_MAX;
int32_t x663 = INT32_MIN;
static int32_t x670 = -2;
volatile int16_t x674 = -7516;
int64_t x680 = INT64_MAX;
volatile int64_t x689 = INT64_MIN;
volatile int32_t x690 = -1330792;
int64_t x701 = INT64_MIN;
int16_t x702 = -2267;
static int64_t x704 = -1LL;
int64_t x711 = -3338785813487466075LL;
volatile int8_t x723 = INT8_MIN;
static volatile int32_t t180 = -174712932;
int8_t x726 = INT8_MAX;
static volatile int32_t t182 = 652981415;
int16_t x736 = INT16_MIN;
static int32_t x741 = INT32_MIN;
static int32_t x742 = INT32_MIN;
volatile uint16_t x751 = 0U;
static volatile int64_t x762 = INT64_MIN;
int32_t t190 = 64;
int32_t x769 = INT32_MAX;
static volatile uint16_t x772 = 1U;
int32_t t192 = -18;
volatile uint64_t x776 = UINT64_MAX;
volatile uint8_t x777 = 103U;
volatile uint8_t x780 = 0U;
static int16_t x782 = INT16_MIN;
volatile uint16_t x786 = 1U;
int32_t x787 = INT32_MIN;
int32_t t196 = -454931;
volatile int16_t x791 = INT16_MIN;
int64_t x795 = INT64_MIN;
int8_t x796 = INT8_MIN;
int32_t t198 = 49;
static uint64_t x797 = 191338608LLU;
int8_t x799 = -3;


void f0(void) {
    	uint8_t x1 = UINT8_MAX;
	int16_t x2 = INT16_MAX;
	static uint8_t x4 = UINT8_MAX;
	static int32_t t0 = 13505;

    t0 = ((x1^x2)!=(x3|x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 36U;
	uint32_t x6 = 7U;
	int16_t x8 = INT16_MAX;
	int32_t t1 = 1015085890;

    t1 = ((x5^x6)!=(x7|x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x10 = -1;

    t2 = ((x9^x10)!=(x11|x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x14 = 95039875420LLU;
	volatile int64_t x15 = -1LL;
	volatile uint16_t x16 = UINT16_MAX;
	volatile int32_t t3 = 3;

    t3 = ((x13^x14)!=(x15|x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -43;
	int8_t x18 = -12;
	volatile int8_t x19 = INT8_MIN;
	static int32_t x20 = 461625;
	volatile int32_t t4 = 121080;

    t4 = ((x17^x18)!=(x19|x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x22 = INT64_MAX;
	volatile int32_t x23 = INT32_MIN;
	uint64_t x24 = 38055479LLU;

    t5 = ((x21^x22)!=(x23|x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = UINT32_MAX;
	int64_t x27 = -16666343LL;
	volatile int32_t t6 = -60;

    t6 = ((x25^x26)!=(x27|x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	int16_t x30 = -1;
	uint32_t x31 = 1128329U;

    t7 = ((x29^x30)!=(x31|x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int32_t x33 = -1;
	uint8_t x34 = UINT8_MAX;
	volatile uint8_t x35 = 2U;
	int16_t x36 = 0;
	int32_t t8 = -12952;

    t8 = ((x33^x34)!=(x35|x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x37 = INT8_MAX;
	int32_t x38 = INT32_MIN;
	int8_t x39 = -1;
	int8_t x40 = -1;
	volatile int32_t t9 = -723643;

    t9 = ((x37^x38)!=(x39|x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x41 = UINT8_MAX;
	static volatile int16_t x42 = INT16_MIN;
	uint8_t x44 = 23U;
	int32_t t10 = -10025439;

    t10 = ((x41^x42)!=(x43|x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x45 = 19603365LL;
	int8_t x48 = -1;
	static volatile int32_t t11 = -994716;

    t11 = ((x45^x46)!=(x47|x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MAX;
	int64_t x50 = -189245631949627403LL;
	uint32_t x52 = 677013230U;
	static int32_t t12 = -1000200;

    t12 = ((x49^x50)!=(x51|x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MAX;
	volatile int32_t x55 = -1;
	static int32_t t13 = 31245114;

    t13 = ((x53^x54)!=(x55|x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = -1;
	volatile int8_t x58 = INT8_MAX;
	uint16_t x59 = UINT16_MAX;
	int32_t t14 = 14;

    t14 = ((x57^x58)!=(x59|x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = 33316LL;
	uint16_t x62 = 0U;
	int64_t x63 = 20703347714774594LL;
	int16_t x64 = INT16_MAX;
	int32_t t15 = -1;

    t15 = ((x61^x62)!=(x63|x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = 596LL;
	volatile uint64_t x66 = UINT64_MAX;
	volatile int16_t x67 = INT16_MIN;
	static uint8_t x68 = 1U;

    t16 = ((x65^x66)!=(x67|x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MIN;
	int64_t x70 = -1LL;
	uint16_t x71 = UINT16_MAX;
	volatile int16_t x72 = INT16_MIN;
	int32_t t17 = -1557903;

    t17 = ((x69^x70)!=(x71|x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x74 = INT32_MIN;
	static int8_t x75 = -1;
	volatile int32_t t18 = -249;

    t18 = ((x73^x74)!=(x75|x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x78 = INT8_MIN;
	int8_t x79 = 10;
	uint16_t x80 = UINT16_MAX;

    t19 = ((x77^x78)!=(x79|x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = INT32_MAX;
	int8_t x82 = -1;
	volatile int32_t x83 = INT32_MIN;
	volatile int16_t x84 = INT16_MAX;

    t20 = ((x81^x82)!=(x83|x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x86 = INT8_MAX;
	int64_t x87 = -11184853076LL;
	int64_t x88 = INT64_MIN;
	volatile int32_t t21 = 2;

    t21 = ((x85^x86)!=(x87|x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = -1;
	volatile uint32_t x90 = UINT32_MAX;
	int8_t x91 = INT8_MIN;
	static int16_t x92 = INT16_MIN;

    t22 = ((x89^x90)!=(x91|x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MIN;
	volatile int8_t x94 = INT8_MAX;
	uint16_t x95 = 923U;
	int64_t x96 = -210634LL;
	int32_t t23 = -10;

    t23 = ((x93^x94)!=(x95|x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = 11U;
	static int8_t x98 = -1;
	uint64_t x99 = 1LLU;
	int16_t x100 = INT16_MIN;
	static volatile int32_t t24 = 11390591;

    t24 = ((x97^x98)!=(x99|x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = -1;
	volatile int16_t x102 = INT16_MAX;
	int16_t x103 = -1;
	int16_t x104 = -1;
	volatile int32_t t25 = 2;

    t25 = ((x101^x102)!=(x103|x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x105 = INT64_MIN;
	static int64_t x106 = -1LL;
	int16_t x108 = INT16_MAX;
	volatile int32_t t26 = -1;

    t26 = ((x105^x106)!=(x107|x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x109 = 884401524718LL;
	static uint8_t x110 = 63U;
	int64_t x111 = INT64_MAX;
	int32_t x112 = -3403;
	int32_t t27 = -241415766;

    t27 = ((x109^x110)!=(x111|x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x113 = INT64_MIN;
	uint16_t x114 = 4U;
	int16_t x116 = -1;

    t28 = ((x113^x114)!=(x115|x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x117 = 2U;
	volatile int16_t x118 = -12380;
	volatile int8_t x119 = -1;
	int32_t t29 = 8593;

    t29 = ((x117^x118)!=(x119|x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MIN;
	uint64_t x122 = UINT64_MAX;
	int16_t x123 = 53;
	int32_t x124 = INT32_MIN;
	int32_t t30 = -1184;

    t30 = ((x121^x122)!=(x123|x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = INT32_MIN;
	uint32_t x126 = 1722075U;
	int64_t x128 = -661LL;
	int32_t t31 = 63;

    t31 = ((x125^x126)!=(x127|x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = INT16_MIN;
	volatile int32_t x130 = INT32_MIN;
	int32_t x131 = INT32_MAX;
	int8_t x132 = INT8_MAX;
	static int32_t t32 = 7172;

    t32 = ((x129^x130)!=(x131|x132));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MAX;
	uint32_t x134 = 49U;
	int64_t x135 = INT64_MAX;
	volatile int32_t t33 = -287397;

    t33 = ((x133^x134)!=(x135|x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = INT8_MIN;
	static int64_t x138 = INT64_MIN;
	static int8_t x139 = -1;
	static int8_t x140 = INT8_MIN;
	volatile int32_t t34 = 78953100;

    t34 = ((x137^x138)!=(x139|x140));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x141 = 62;
	int32_t x142 = -1;
	int8_t x143 = INT8_MIN;
	uint8_t x144 = 43U;

    t35 = ((x141^x142)!=(x143|x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MAX;
	volatile uint64_t x146 = 2051427920417517LLU;
	uint16_t x147 = UINT16_MAX;
	int32_t t36 = -2709;

    t36 = ((x145^x146)!=(x147|x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x150 = INT8_MIN;
	static volatile uint8_t x151 = 1U;
	static int64_t x152 = -85752325661521LL;
	int32_t t37 = -66721;

    t37 = ((x149^x150)!=(x151|x152));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x154 = -3;
	int64_t x155 = INT64_MIN;

    t38 = ((x153^x154)!=(x155|x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = -1;
	static uint32_t x158 = 242U;
	int16_t x159 = -1;
	int16_t x160 = INT16_MIN;
	int32_t t39 = -23785720;

    t39 = ((x157^x158)!=(x159|x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x162 = UINT16_MAX;
	int8_t x163 = -5;
	volatile int64_t x164 = INT64_MIN;
	int32_t t40 = -40;

    t40 = ((x161^x162)!=(x163|x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = INT16_MIN;
	volatile int32_t x166 = 5062711;
	int64_t x168 = INT64_MIN;

    t41 = ((x165^x166)!=(x167|x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = INT16_MIN;
	int8_t x170 = INT8_MIN;
	int32_t x171 = -26308;
	int8_t x172 = 3;

    t42 = ((x169^x170)!=(x171|x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = 56416952037696601LLU;
	uint16_t x174 = 6312U;
	static uint8_t x176 = 3U;

    t43 = ((x173^x174)!=(x175|x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = 22695334231332LL;
	int32_t x178 = -1;
	static volatile int8_t x180 = -1;
	int32_t t44 = 28;

    t44 = ((x177^x178)!=(x179|x180));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x181 = -1;
	static int16_t x182 = -1164;
	int32_t x183 = -1;
	static uint32_t x184 = UINT32_MAX;
	static int32_t t45 = -1415;

    t45 = ((x181^x182)!=(x183|x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = 1;
	uint8_t x186 = 23U;
	int16_t x187 = INT16_MIN;
	int8_t x188 = -1;
	int32_t t46 = -152470;

    t46 = ((x185^x186)!=(x187|x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = 9U;
	int32_t x190 = INT32_MAX;
	int16_t x192 = INT16_MAX;

    t47 = ((x189^x190)!=(x191|x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x193 = -1LL;
	volatile int64_t x194 = -1LL;
	uint32_t x195 = 1U;
	int64_t x196 = -409LL;
	int32_t t48 = 5030079;

    t48 = ((x193^x194)!=(x195|x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = -1;
	int8_t x198 = -1;
	static int8_t x199 = INT8_MIN;
	int8_t x200 = INT8_MIN;
	int32_t t49 = -5713083;

    t49 = ((x197^x198)!=(x199|x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = INT16_MIN;
	int8_t x202 = 7;
	uint64_t x203 = 929811733597497LLU;
	uint32_t x204 = 51511748U;
	int32_t t50 = -280510438;

    t50 = ((x201^x202)!=(x203|x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x206 = -1;
	int32_t x207 = -187;
	uint32_t x208 = 954318482U;

    t51 = ((x205^x206)!=(x207|x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x209 = INT16_MIN;
	uint16_t x210 = UINT16_MAX;
	int8_t x211 = INT8_MIN;
	int32_t x212 = INT32_MIN;
	int32_t t52 = 78091587;

    t52 = ((x209^x210)!=(x211|x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x213 = INT8_MIN;
	static uint16_t x214 = UINT16_MAX;
	static volatile int32_t x215 = 1001452;
	int64_t x216 = -302763880684LL;
	volatile int32_t t53 = 12307216;

    t53 = ((x213^x214)!=(x215|x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x217 = 5LLU;
	int8_t x218 = INT8_MIN;
	int16_t x219 = -1;
	volatile int32_t x220 = INT32_MIN;
	static int32_t t54 = 4774;

    t54 = ((x217^x218)!=(x219|x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x221 = INT16_MAX;
	int32_t x223 = 141525;
	int32_t t55 = 49418;

    t55 = ((x221^x222)!=(x223|x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x225 = UINT64_MAX;
	int8_t x226 = 0;
	int16_t x227 = INT16_MIN;
	static int64_t x228 = 0LL;
	static int32_t t56 = -1284436;

    t56 = ((x225^x226)!=(x227|x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x230 = 55;
	static int16_t x231 = -31;
	int8_t x232 = INT8_MIN;

    t57 = ((x229^x230)!=(x231|x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x234 = 34U;
	volatile int64_t x235 = -957165939027919LL;
	int8_t x236 = -1;
	int32_t t58 = -2;

    t58 = ((x233^x234)!=(x235|x236));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = -1;
	volatile int64_t x238 = INT64_MAX;
	uint16_t x240 = UINT16_MAX;
	volatile int32_t t59 = -1887079;

    t59 = ((x237^x238)!=(x239|x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x244 = INT16_MAX;
	int32_t t60 = 89;

    t60 = ((x241^x242)!=(x243|x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = INT64_MIN;
	volatile uint8_t x246 = UINT8_MAX;
	static int16_t x247 = INT16_MIN;
	static int8_t x248 = 0;

    t61 = ((x245^x246)!=(x247|x248));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x249 = 68LLU;
	static int64_t x250 = -1382546148LL;
	int16_t x251 = -1;
	int8_t x252 = -22;
	int32_t t62 = 358284544;

    t62 = ((x249^x250)!=(x251|x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = 72788055LL;
	volatile int32_t x255 = 204935502;
	int8_t x256 = INT8_MIN;
	int32_t t63 = 2619;

    t63 = ((x253^x254)!=(x255|x256));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint64_t x257 = UINT64_MAX;
	volatile int32_t x258 = 2;
	static volatile uint16_t x260 = UINT16_MAX;
	volatile int32_t t64 = -101171289;

    t64 = ((x257^x258)!=(x259|x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = -1;
	uint32_t x262 = 36274U;
	volatile int8_t x264 = 26;
	int32_t t65 = 356;

    t65 = ((x261^x262)!=(x263|x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x265 = -1LL;
	int8_t x266 = -1;
	uint32_t x267 = 24261490U;
	static int32_t t66 = 56853;

    t66 = ((x265^x266)!=(x267|x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = INT8_MIN;
	volatile int32_t x270 = INT32_MIN;
	int64_t x271 = -652191521LL;

    t67 = ((x269^x270)!=(x271|x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = INT64_MAX;
	int64_t x274 = INT64_MIN;
	int32_t x275 = -27;
	int8_t x276 = -30;
	int32_t t68 = 7;

    t68 = ((x273^x274)!=(x275|x276));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x277 = 7123U;
	volatile int8_t x279 = -8;

    t69 = ((x277^x278)!=(x279|x280));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x281 = 461U;
	int8_t x282 = INT8_MIN;
	uint8_t x283 = 0U;
	int64_t x284 = -172LL;
	volatile int32_t t70 = 6874855;

    t70 = ((x281^x282)!=(x283|x284));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x286 = INT32_MIN;
	volatile int8_t x287 = INT8_MAX;
	int64_t x288 = INT64_MIN;
	volatile int32_t t71 = -1;

    t71 = ((x285^x286)!=(x287|x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x289 = INT8_MIN;
	int8_t x291 = 4;
	int8_t x292 = INT8_MAX;
	volatile int32_t t72 = 21385968;

    t72 = ((x289^x290)!=(x291|x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = -7LL;
	volatile uint16_t x294 = 4746U;
	static int32_t x295 = INT32_MIN;
	static int16_t x296 = -1;

    t73 = ((x293^x294)!=(x295|x296));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int8_t x298 = -58;
	uint8_t x299 = 3U;
	uint64_t x300 = 1758LLU;
	static volatile int32_t t74 = 77;

    t74 = ((x297^x298)!=(x299|x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x302 = INT8_MIN;
	int8_t x303 = INT8_MIN;
	uint64_t x304 = UINT64_MAX;
	static volatile int32_t t75 = 694;

    t75 = ((x301^x302)!=(x303|x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x305 = INT32_MIN;
	int64_t x306 = -1LL;
	volatile int8_t x308 = INT8_MIN;
	volatile int32_t t76 = -1;

    t76 = ((x305^x306)!=(x307|x308));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x309 = UINT64_MAX;
	int32_t x310 = 4950;
	uint16_t x312 = 3956U;
	volatile int32_t t77 = 3904;

    t77 = ((x309^x310)!=(x311|x312));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x313 = INT32_MAX;
	int32_t x314 = -122614;
	volatile uint16_t x315 = 889U;
	volatile uint8_t x316 = 5U;

    t78 = ((x313^x314)!=(x315|x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x317 = 7U;
	static volatile uint8_t x318 = UINT8_MAX;
	uint16_t x319 = 3U;
	uint32_t x320 = 1099U;
	static int32_t t79 = 351286847;

    t79 = ((x317^x318)!=(x319|x320));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x321 = 4U;
	int8_t x322 = -1;
	int8_t x323 = INT8_MAX;
	static int64_t x324 = -28315642051726572LL;
	int32_t t80 = -3558;

    t80 = ((x321^x322)!=(x323|x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x325 = 37U;
	uint8_t x326 = 1U;
	uint64_t x327 = 2938667398561LLU;
	int32_t t81 = -105820;

    t81 = ((x325^x326)!=(x327|x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint64_t x331 = 48986200264481323LLU;
	uint64_t x332 = 160LLU;
	static int32_t t82 = 6596;

    t82 = ((x329^x330)!=(x331|x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x333 = 1873U;
	uint8_t x334 = 0U;
	volatile uint32_t x336 = 6U;
	static int32_t t83 = 5071133;

    t83 = ((x333^x334)!=(x335|x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x337 = UINT32_MAX;
	uint16_t x338 = 20U;
	int8_t x339 = INT8_MIN;
	static int8_t x340 = -1;
	static volatile int32_t t84 = 921658968;

    t84 = ((x337^x338)!=(x339|x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x341 = 6338U;
	static uint64_t x342 = 630LLU;
	uint16_t x343 = 486U;
	uint32_t x344 = UINT32_MAX;
	int32_t t85 = -20578477;

    t85 = ((x341^x342)!=(x343|x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = INT16_MIN;
	volatile int16_t x346 = 6;
	int16_t x348 = 2;
	volatile int32_t t86 = 176363520;

    t86 = ((x345^x346)!=(x347|x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = 1LL;
	volatile uint64_t x350 = 328851846230673LLU;
	int64_t x351 = -160649261LL;
	volatile int32_t t87 = -1;

    t87 = ((x349^x350)!=(x351|x352));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x354 = -1;
	static int64_t x355 = INT64_MIN;
	int32_t x356 = INT32_MIN;
	int32_t t88 = -5905198;

    t88 = ((x353^x354)!=(x355|x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = INT16_MIN;
	uint16_t x358 = UINT16_MAX;
	volatile int8_t x360 = INT8_MIN;
	int32_t t89 = 31882890;

    t89 = ((x357^x358)!=(x359|x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x361 = INT16_MAX;
	static int16_t x362 = -1;
	int16_t x363 = -2943;
	volatile int8_t x364 = -1;
	int32_t t90 = -501722;

    t90 = ((x361^x362)!=(x363|x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = -1;
	int8_t x366 = INT8_MIN;
	volatile uint64_t x368 = 0LLU;

    t91 = ((x365^x366)!=(x367|x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int32_t x369 = -1802;
	volatile uint16_t x370 = 335U;
	int8_t x371 = 11;
	int16_t x372 = -1;
	int32_t t92 = -2564950;

    t92 = ((x369^x370)!=(x371|x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x373 = 7U;
	int32_t x374 = INT32_MIN;
	int16_t x376 = INT16_MAX;
	int32_t t93 = 5;

    t93 = ((x373^x374)!=(x375|x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = INT8_MAX;
	int64_t x379 = -69929LL;

    t94 = ((x377^x378)!=(x379|x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int32_t x381 = 3013;
	uint64_t x383 = 250144314627LLU;
	static volatile uint32_t x384 = 4753U;
	volatile int32_t t95 = -926412862;

    t95 = ((x381^x382)!=(x383|x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = INT8_MIN;
	static int32_t x386 = -1;
	uint16_t x388 = UINT16_MAX;
	volatile int32_t t96 = -50;

    t96 = ((x385^x386)!=(x387|x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = INT32_MIN;
	int64_t x390 = INT64_MAX;
	static int32_t x391 = 265;
	static int64_t x392 = -1LL;
	volatile int32_t t97 = -1601;

    t97 = ((x389^x390)!=(x391|x392));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = 49360;
	static int16_t x394 = INT16_MIN;
	static int32_t x395 = INT32_MAX;
	int8_t x396 = INT8_MAX;

    t98 = ((x393^x394)!=(x395|x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x397 = INT8_MAX;
	int8_t x398 = -1;
	int16_t x400 = -1;
	volatile int32_t t99 = 49789;

    t99 = ((x397^x398)!=(x399|x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x401 = 232078U;
	volatile int32_t x402 = -1;
	uint64_t x403 = UINT64_MAX;
	static int32_t x404 = -120380;
	volatile int32_t t100 = -741519;

    t100 = ((x401^x402)!=(x403|x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = INT32_MIN;
	int8_t x406 = INT8_MIN;
	static int32_t x407 = -1;
	int64_t x408 = -36610979603473020LL;

    t101 = ((x405^x406)!=(x407|x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x409 = 51U;
	volatile uint64_t x410 = 1LLU;
	int32_t x411 = INT32_MAX;
	static volatile int32_t t102 = 23671;

    t102 = ((x409^x410)!=(x411|x412));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x413 = 157516078075444470LL;
	uint64_t x416 = UINT64_MAX;
	volatile int32_t t103 = 6167884;

    t103 = ((x413^x414)!=(x415|x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x418 = INT8_MIN;
	uint8_t x419 = 4U;
	uint8_t x420 = UINT8_MAX;
	volatile int32_t t104 = -789723;

    t104 = ((x417^x418)!=(x419|x420));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x422 = INT16_MAX;
	uint64_t x423 = UINT64_MAX;
	int8_t x424 = INT8_MIN;
	static volatile int32_t t105 = 21779;

    t105 = ((x421^x422)!=(x423|x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x425 = UINT8_MAX;
	int64_t x427 = INT64_MIN;
	static volatile int32_t t106 = 4;

    t106 = ((x425^x426)!=(x427|x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x429 = 689U;
	int64_t x430 = INT64_MAX;
	int8_t x431 = -1;
	int32_t t107 = 257823959;

    t107 = ((x429^x430)!=(x431|x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = INT64_MAX;
	int64_t x434 = INT64_MIN;
	int32_t x435 = -1;
	uint64_t x436 = UINT64_MAX;
	static int32_t t108 = 22935428;

    t108 = ((x433^x434)!=(x435|x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = INT16_MAX;
	uint64_t x438 = UINT64_MAX;
	static int32_t x439 = INT32_MIN;
	static volatile int32_t t109 = -11946747;

    t109 = ((x437^x438)!=(x439|x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x441 = INT8_MAX;
	uint32_t x443 = 977296U;
	static volatile int16_t x444 = INT16_MIN;
	int32_t t110 = 106961486;

    t110 = ((x441^x442)!=(x443|x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x446 = INT16_MIN;
	static int32_t x447 = INT32_MIN;
	static uint16_t x448 = 3U;
	int32_t t111 = -823;

    t111 = ((x445^x446)!=(x447|x448));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = -1;
	int64_t x450 = INT64_MAX;
	int64_t x451 = -13LL;
	static volatile int8_t x452 = INT8_MIN;
	volatile int32_t t112 = -149;

    t112 = ((x449^x450)!=(x451|x452));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = -1;
	int8_t x455 = -1;
	int32_t t113 = 23959;

    t113 = ((x453^x454)!=(x455|x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = 512679LL;
	volatile uint64_t x459 = 47627724LLU;
	int64_t x460 = INT64_MIN;
	volatile int32_t t114 = -255;

    t114 = ((x457^x458)!=(x459|x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x462 = 4251U;
	static volatile uint8_t x463 = 2U;
	uint32_t x464 = 334198U;
	static volatile int32_t t115 = 331675191;

    t115 = ((x461^x462)!=(x463|x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile uint16_t x465 = 26U;
	uint64_t x467 = 4393942906254011429LLU;
	int16_t x468 = 4;
	int32_t t116 = 2276643;

    t116 = ((x465^x466)!=(x467|x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x470 = -20;
	int8_t x471 = -1;
	static int32_t x472 = 21275;
	static int32_t t117 = 3;

    t117 = ((x469^x470)!=(x471|x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x473 = INT64_MIN;
	volatile int64_t x474 = -367565973499954LL;
	static volatile uint64_t x475 = 16852559600LLU;
	int32_t x476 = INT32_MIN;
	int32_t t118 = 3461;

    t118 = ((x473^x474)!=(x475|x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x477 = UINT64_MAX;
	uint64_t x478 = UINT64_MAX;
	uint16_t x479 = 43U;
	volatile int32_t t119 = 1;

    t119 = ((x477^x478)!=(x479|x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x482 = INT8_MAX;
	int32_t x483 = -791;
	static int32_t t120 = 36000;

    t120 = ((x481^x482)!=(x483|x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = -1;
	int8_t x486 = -1;
	uint8_t x488 = 28U;
	volatile int32_t t121 = 13528;

    t121 = ((x485^x486)!=(x487|x488));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = INT16_MAX;
	static volatile int32_t x490 = -69;
	uint32_t x492 = UINT32_MAX;
	volatile int32_t t122 = 86;

    t122 = ((x489^x490)!=(x491|x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x493 = 6U;
	static int8_t x494 = -1;
	volatile int32_t x495 = 3931685;
	volatile int32_t t123 = 327295;

    t123 = ((x493^x494)!=(x495|x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x497 = 13U;
	volatile uint64_t x498 = 6258974207LLU;
	int64_t x499 = 67348793151564LL;
	static int32_t x500 = 102;
	int32_t t124 = 503791048;

    t124 = ((x497^x498)!=(x499|x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x501 = UINT64_MAX;
	uint32_t x503 = 8607U;
	uint64_t x504 = UINT64_MAX;
	volatile int32_t t125 = 13977;

    t125 = ((x501^x502)!=(x503|x504));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x506 = 6889674;
	static uint64_t x508 = 1668LLU;
	volatile int32_t t126 = -97050384;

    t126 = ((x505^x506)!=(x507|x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x509 = 131433788U;
	int64_t x510 = 1541154130586859LL;
	int32_t x511 = -1;

    t127 = ((x509^x510)!=(x511|x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x513 = 613648012U;
	int8_t x515 = -2;
	static volatile uint8_t x516 = 2U;

    t128 = ((x513^x514)!=(x515|x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x517 = 815433399889459LL;
	int32_t x518 = -1;
	int8_t x520 = INT8_MIN;

    t129 = ((x517^x518)!=(x519|x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = INT32_MIN;
	volatile uint32_t x522 = 4U;
	int32_t x523 = 1;

    t130 = ((x521^x522)!=(x523|x524));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x527 = 0;
	volatile int16_t x528 = INT16_MIN;
	volatile int32_t t131 = 0;

    t131 = ((x525^x526)!=(x527|x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x529 = INT16_MIN;
	uint8_t x530 = UINT8_MAX;
	volatile uint16_t x531 = 169U;
	int16_t x532 = INT16_MAX;
	volatile int32_t t132 = -216367627;

    t132 = ((x529^x530)!=(x531|x532));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = INT32_MIN;
	static uint64_t x534 = 509470146495LLU;
	int32_t x535 = INT32_MIN;
	int16_t x536 = INT16_MAX;
	int32_t t133 = -6;

    t133 = ((x533^x534)!=(x535|x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x538 = 1U;
	int16_t x539 = -13;
	static volatile uint32_t x540 = 132578957U;
	int32_t t134 = -10229416;

    t134 = ((x537^x538)!=(x539|x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x541 = UINT16_MAX;
	int64_t x542 = INT64_MIN;
	volatile int64_t x543 = INT64_MIN;
	volatile int64_t x544 = INT64_MIN;
	static int32_t t135 = 98344087;

    t135 = ((x541^x542)!=(x543|x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = 1;
	uint16_t x546 = UINT16_MAX;
	int16_t x547 = INT16_MAX;
	uint8_t x548 = 18U;
	volatile int32_t t136 = -3542266;

    t136 = ((x545^x546)!=(x547|x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x549 = 115U;
	volatile uint64_t x550 = 127351LLU;
	int64_t x551 = INT64_MIN;
	int8_t x552 = -8;
	volatile int32_t t137 = 277271;

    t137 = ((x549^x550)!=(x551|x552));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x553 = INT32_MIN;
	volatile int8_t x554 = INT8_MIN;
	int8_t x555 = INT8_MIN;
	uint8_t x556 = 48U;
	static int32_t t138 = -148;

    t138 = ((x553^x554)!=(x555|x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x557 = UINT8_MAX;
	volatile int16_t x558 = -1;
	int16_t x560 = INT16_MIN;

    t139 = ((x557^x558)!=(x559|x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x561 = 7775086LLU;
	int8_t x562 = INT8_MAX;
	volatile int32_t t140 = 653204375;

    t140 = ((x561^x562)!=(x563|x564));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x566 = INT8_MIN;
	uint8_t x567 = UINT8_MAX;

    t141 = ((x565^x566)!=(x567|x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = -3;
	uint64_t x570 = 21LLU;
	int64_t x571 = 18152994755957362LL;
	uint64_t x572 = 47563634460LLU;
	volatile int32_t t142 = 35485;

    t142 = ((x569^x570)!=(x571|x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = -1;
	int16_t x575 = INT16_MIN;
	uint64_t x576 = 10418947921LLU;
	int32_t t143 = -2632;

    t143 = ((x573^x574)!=(x575|x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = 16369645LL;
	int32_t x578 = INT32_MIN;
	uint32_t x579 = 7U;
	volatile int32_t x580 = -214733878;
	int32_t t144 = -586084693;

    t144 = ((x577^x578)!=(x579|x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x582 = -1219;
	volatile int32_t x583 = INT32_MIN;
	int32_t x584 = INT32_MIN;
	volatile int32_t t145 = 60712;

    t145 = ((x581^x582)!=(x583|x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = 208978400;
	volatile uint32_t x586 = 24770152U;
	uint32_t x587 = 8211U;
	static int32_t x588 = -28671458;
	static volatile int32_t t146 = 569429348;

    t146 = ((x585^x586)!=(x587|x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x589 = 365U;
	static int16_t x591 = 0;
	volatile int32_t x592 = -57157878;
	volatile int32_t t147 = 336;

    t147 = ((x589^x590)!=(x591|x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x593 = 149521U;
	int8_t x596 = 1;
	int32_t t148 = 2428;

    t148 = ((x593^x594)!=(x595|x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = INT64_MIN;
	static int16_t x598 = INT16_MIN;
	int8_t x599 = INT8_MIN;
	uint32_t x600 = 201582475U;
	volatile int32_t t149 = 107867;

    t149 = ((x597^x598)!=(x599|x600));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x601 = UINT64_MAX;
	uint8_t x602 = 36U;
	int16_t x603 = 112;
	uint8_t x604 = 3U;
	volatile int32_t t150 = -102454668;

    t150 = ((x601^x602)!=(x603|x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x606 = 470U;
	static uint32_t x607 = 407795U;
	uint8_t x608 = UINT8_MAX;
	int32_t t151 = 7709;

    t151 = ((x605^x606)!=(x607|x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint8_t x610 = UINT8_MAX;
	int8_t x611 = INT8_MAX;
	volatile int32_t t152 = 135203;

    t152 = ((x609^x610)!=(x611|x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x613 = 11U;
	int32_t x615 = INT32_MIN;
	static volatile int32_t t153 = -3447;

    t153 = ((x613^x614)!=(x615|x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint64_t x617 = 16748994558LLU;
	int16_t x618 = 3988;
	volatile int16_t x619 = INT16_MIN;
	int32_t x620 = -1;
	static volatile int32_t t154 = -250165089;

    t154 = ((x617^x618)!=(x619|x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x621 = 93U;
	volatile uint8_t x623 = 3U;

    t155 = ((x621^x622)!=(x623|x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = 6403858;
	uint8_t x626 = 48U;
	static volatile uint32_t x628 = 3U;
	int32_t t156 = -1;

    t156 = ((x625^x626)!=(x627|x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = 12;
	int8_t x630 = -17;
	int8_t x631 = INT8_MAX;
	volatile uint32_t x632 = 70U;
	volatile int32_t t157 = 0;

    t157 = ((x629^x630)!=(x631|x632));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x634 = -1;
	volatile int16_t x635 = -1;
	uint64_t x636 = 67927523080LLU;
	static volatile int32_t t158 = 3;

    t158 = ((x633^x634)!=(x635|x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x637 = INT64_MIN;
	int16_t x638 = -1;
	int8_t x639 = 1;
	static int32_t x640 = INT32_MIN;
	int32_t t159 = 2588;

    t159 = ((x637^x638)!=(x639|x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x641 = UINT64_MAX;
	int8_t x642 = 0;
	uint16_t x643 = 4U;
	volatile int8_t x644 = -6;
	static int32_t t160 = -1304703;

    t160 = ((x641^x642)!=(x643|x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = INT8_MAX;
	int16_t x647 = INT16_MIN;
	static int64_t x648 = -10933770LL;
	int32_t t161 = -2006115;

    t161 = ((x645^x646)!=(x647|x648));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x650 = INT64_MIN;
	static int8_t x651 = INT8_MAX;
	static int16_t x652 = INT16_MIN;
	int32_t t162 = 453175851;

    t162 = ((x649^x650)!=(x651|x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = INT16_MIN;
	int16_t x654 = 0;
	int16_t x655 = INT16_MIN;
	static volatile int32_t x656 = INT32_MAX;

    t163 = ((x653^x654)!=(x655|x656));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = -1LL;
	int8_t x659 = INT8_MIN;
	int8_t x660 = 0;
	int32_t t164 = 32173;

    t164 = ((x657^x658)!=(x659|x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x661 = UINT16_MAX;
	int32_t x664 = INT32_MAX;
	volatile int32_t t165 = -963;

    t165 = ((x661^x662)!=(x663|x664));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x665 = INT8_MIN;
	uint64_t x666 = 16652909730776LLU;
	volatile int32_t x667 = -1;
	int8_t x668 = INT8_MIN;
	static int32_t t166 = 1;

    t166 = ((x665^x666)!=(x667|x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = 4;
	static int32_t x671 = 37394091;
	int8_t x672 = INT8_MIN;
	int32_t t167 = 162;

    t167 = ((x669^x670)!=(x671|x672));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x673 = 20509842687719444LL;
	int32_t x675 = 2303;
	volatile int8_t x676 = -2;
	volatile int32_t t168 = -936643132;

    t168 = ((x673^x674)!=(x675|x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint32_t x677 = 3220U;
	uint32_t x678 = UINT32_MAX;
	static int8_t x679 = INT8_MIN;
	volatile int32_t t169 = 221;

    t169 = ((x677^x678)!=(x679|x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = INT32_MIN;
	int64_t x682 = 4644093627918775LL;
	int32_t x683 = INT32_MIN;
	int64_t x684 = -210894379LL;
	volatile int32_t t170 = -1018472795;

    t170 = ((x681^x682)!=(x683|x684));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = INT16_MIN;
	static volatile int32_t x686 = INT32_MIN;
	volatile uint8_t x687 = UINT8_MAX;
	int32_t x688 = -1;
	static volatile int32_t t171 = 12846;

    t171 = ((x685^x686)!=(x687|x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x691 = -1;
	volatile uint32_t x692 = 129760U;
	int32_t t172 = -123540435;

    t172 = ((x689^x690)!=(x691|x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = INT64_MIN;
	volatile int16_t x694 = INT16_MIN;
	volatile int8_t x695 = -41;
	uint16_t x696 = UINT16_MAX;
	volatile int32_t t173 = -552190950;

    t173 = ((x693^x694)!=(x695|x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x697 = INT8_MIN;
	static uint64_t x698 = 540792606LLU;
	uint8_t x699 = 0U;
	int8_t x700 = -1;
	volatile int32_t t174 = 8;

    t174 = ((x697^x698)!=(x699|x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x703 = -1;
	static volatile int32_t t175 = 1;

    t175 = ((x701^x702)!=(x703|x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x705 = -1LL;
	volatile int32_t x706 = INT32_MAX;
	volatile int64_t x707 = INT64_MAX;
	static int32_t x708 = -1;
	int32_t t176 = -15536;

    t176 = ((x705^x706)!=(x707|x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x709 = UINT16_MAX;
	uint64_t x710 = 792LLU;
	int16_t x712 = INT16_MIN;
	int32_t t177 = 1006015;

    t177 = ((x709^x710)!=(x711|x712));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x713 = INT8_MIN;
	int64_t x714 = -11432973LL;
	static int64_t x715 = -1LL;
	int64_t x716 = -1LL;
	volatile int32_t t178 = 112674;

    t178 = ((x713^x714)!=(x715|x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = INT8_MIN;
	volatile int64_t x718 = -66695825LL;
	static int16_t x719 = INT16_MIN;
	static int8_t x720 = INT8_MIN;
	int32_t t179 = 0;

    t179 = ((x717^x718)!=(x719|x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = 28724LL;
	int8_t x722 = INT8_MIN;
	int64_t x724 = INT64_MAX;

    t180 = ((x721^x722)!=(x723|x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = INT32_MIN;
	int64_t x727 = 11LL;
	int8_t x728 = 0;
	int32_t t181 = -837;

    t181 = ((x725^x726)!=(x727|x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = -4419;
	static int8_t x730 = -1;
	int64_t x731 = INT64_MIN;
	int8_t x732 = INT8_MAX;

    t182 = ((x729^x730)!=(x731|x732));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x733 = UINT64_MAX;
	uint16_t x734 = 0U;
	volatile uint8_t x735 = UINT8_MAX;
	volatile int32_t t183 = 133286;

    t183 = ((x733^x734)!=(x735|x736));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x737 = UINT16_MAX;
	int32_t x738 = INT32_MIN;
	volatile int32_t x739 = -1;
	int32_t x740 = INT32_MAX;
	int32_t t184 = 42;

    t184 = ((x737^x738)!=(x739|x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x743 = -6046;
	static volatile int64_t x744 = -92935106047846207LL;
	static volatile int32_t t185 = 434212939;

    t185 = ((x741^x742)!=(x743|x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x745 = INT16_MAX;
	int64_t x746 = -1LL;
	volatile uint32_t x747 = 15018576U;
	volatile int16_t x748 = INT16_MIN;
	volatile int32_t t186 = 17;

    t186 = ((x745^x746)!=(x747|x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = -1LL;
	int32_t x750 = INT32_MAX;
	static int32_t x752 = 161803;
	volatile int32_t t187 = 16124410;

    t187 = ((x749^x750)!=(x751|x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x753 = -80547032;
	volatile uint16_t x754 = UINT16_MAX;
	volatile int16_t x755 = INT16_MIN;
	int32_t x756 = INT32_MIN;
	int32_t t188 = 60918192;

    t188 = ((x753^x754)!=(x755|x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x757 = 1LLU;
	volatile int8_t x758 = -2;
	static int32_t x759 = 83;
	int64_t x760 = 18528833LL;
	int32_t t189 = 9214789;

    t189 = ((x757^x758)!=(x759|x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x761 = UINT64_MAX;
	volatile int32_t x763 = INT32_MIN;
	int64_t x764 = INT64_MIN;

    t190 = ((x761^x762)!=(x763|x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x765 = INT8_MIN;
	uint16_t x766 = 248U;
	uint64_t x767 = 117LLU;
	int16_t x768 = INT16_MAX;
	volatile int32_t t191 = -7;

    t191 = ((x765^x766)!=(x767|x768));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x770 = 1154020826LLU;
	uint32_t x771 = 2694U;

    t192 = ((x769^x770)!=(x771|x772));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x773 = INT32_MIN;
	int8_t x774 = INT8_MAX;
	int64_t x775 = INT64_MIN;
	volatile int32_t t193 = 1601600;

    t193 = ((x773^x774)!=(x775|x776));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x778 = 1LLU;
	int16_t x779 = 1003;
	int32_t t194 = 1;

    t194 = ((x777^x778)!=(x779|x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint8_t x781 = 54U;
	int64_t x783 = INT64_MAX;
	int16_t x784 = -1;
	int32_t t195 = -7522602;

    t195 = ((x781^x782)!=(x783|x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x785 = -6499629LL;
	uint32_t x788 = UINT32_MAX;

    t196 = ((x785^x786)!=(x787|x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x789 = INT32_MIN;
	volatile int32_t x790 = -1;
	volatile uint64_t x792 = 15LLU;
	volatile int32_t t197 = 18;

    t197 = ((x789^x790)!=(x791|x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = 695569602;
	int64_t x794 = -1LL;

    t198 = ((x793^x794)!=(x795|x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x798 = 31333U;
	int32_t x800 = -6137;
	static volatile int32_t t199 = -6;

    t199 = ((x797^x798)!=(x799|x800));

    if (t199 != 1) { NG(); } else { ; }
	
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

