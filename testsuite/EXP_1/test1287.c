
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

static uint64_t x9 = 7049LLU;
int16_t x12 = INT16_MAX;
static volatile uint32_t t3 = 77U;
int32_t x25 = INT32_MIN;
volatile int32_t x27 = -1;
volatile int64_t x28 = 372725223520616LL;
static int64_t t6 = -18606277921663703LL;
static volatile int32_t t7 = -1433;
static int8_t x36 = INT8_MIN;
int32_t x40 = INT32_MIN;
static uint16_t x41 = 1341U;
volatile int32_t x44 = 3652273;
volatile uint64_t x52 = 4LLU;
int32_t x53 = INT32_MAX;
volatile int64_t x57 = -1137LL;
volatile int16_t x58 = -1;
uint64_t x62 = UINT64_MAX;
volatile int32_t t16 = 261;
static volatile int32_t t17 = 139;
int32_t t19 = 1;
int16_t x88 = INT16_MIN;
volatile int32_t x90 = 477852;
int8_t x94 = INT8_MIN;
static uint8_t x95 = UINT8_MAX;
static volatile int64_t x105 = -236942LL;
static volatile int16_t x108 = -1;
volatile int32_t t26 = 101905611;
int32_t t27 = -259586;
static uint32_t x115 = 912195341U;
uint64_t x119 = 53257110257151063LLU;
volatile int32_t x120 = -28252043;
int32_t t31 = INT32_MIN;
int8_t x132 = INT8_MIN;
volatile int32_t t32 = 805;
volatile int32_t t33 = 956;
uint64_t t34 = 166LLU;
volatile int64_t t35 = INT64_MIN;
int16_t x145 = INT16_MIN;
int64_t x147 = INT64_MIN;
volatile int32_t t36 = 65668537;
int8_t x149 = -1;
uint32_t x153 = UINT32_MAX;
int8_t x155 = INT8_MAX;
int32_t x157 = -87301;
int32_t x177 = INT32_MIN;
volatile int32_t t46 = 13135735;
int8_t x189 = -20;
int16_t x204 = 0;
int32_t x210 = -1;
static int8_t x212 = INT8_MIN;
int16_t x214 = -1;
uint16_t x217 = 34U;
volatile int32_t t54 = -242864377;
uint16_t x222 = UINT16_MAX;
uint64_t t56 = 1LLU;
int16_t x239 = INT16_MAX;
int8_t x244 = INT8_MAX;
static volatile int32_t x245 = 33604;
uint64_t t63 = 1181805LLU;
int16_t x258 = -1;
static int32_t x265 = INT32_MAX;
int32_t x267 = 1367714;
static volatile int64_t t66 = INT64_MIN;
static volatile int32_t t68 = -925313;
volatile int32_t x279 = -799959922;
int16_t x280 = INT16_MIN;
int32_t x281 = INT32_MAX;
static int8_t x283 = INT8_MIN;
int8_t x289 = INT8_MIN;
static volatile int8_t x291 = 1;
volatile int8_t x294 = -3;
int32_t x295 = INT32_MIN;
volatile int8_t x309 = INT8_MIN;
static int32_t x319 = INT32_MAX;
static int16_t x321 = -1;
uint64_t x325 = 6208343195472LLU;
int16_t x326 = INT16_MIN;
int32_t x329 = 7365698;
volatile int32_t t85 = -1623;
static int32_t x359 = INT32_MIN;
static volatile int64_t x366 = 36LL;
uint32_t x369 = 466U;
int16_t x371 = INT16_MIN;
uint64_t x375 = 631289237759504LLU;
static int8_t x381 = 1;
static int32_t x388 = INT32_MAX;
volatile int32_t t97 = -3;
int32_t x395 = INT32_MIN;
volatile uint64_t x396 = 17539717213929243LLU;
uint32_t x399 = UINT32_MAX;
static uint16_t x403 = 1504U;
uint32_t x404 = UINT32_MAX;
static volatile uint32_t t100 = UINT32_MAX;
static uint16_t x410 = 658U;
static uint64_t x421 = 48862605011LLU;
uint16_t x423 = 43U;
int64_t x428 = -32437750640825205LL;
static uint16_t x429 = 25275U;
int64_t x437 = INT64_MIN;
int32_t t109 = 1;
volatile int32_t t111 = 3;
uint16_t x454 = 15U;
int64_t x460 = -1LL;
static int16_t x464 = INT16_MIN;
int64_t x467 = INT64_MAX;
static int16_t x481 = INT16_MAX;
uint8_t x483 = UINT8_MAX;
int8_t x491 = INT8_MIN;
static int8_t x493 = -1;
uint64_t x494 = UINT64_MAX;
static uint16_t x498 = 6359U;
int64_t x501 = -1LL;
volatile uint64_t x508 = 120378306969441123LLU;
volatile int8_t x509 = -1;
int32_t t127 = INT32_MIN;
uint64_t x515 = 9789931755LLU;
volatile int16_t x520 = 23;
volatile int16_t x521 = -1;
volatile int64_t x523 = INT64_MAX;
int16_t x524 = 4;
int8_t x525 = -1;
static uint16_t x532 = 802U;
uint32_t t133 = 2154536U;
int8_t x546 = 9;
volatile int8_t x547 = -1;
int16_t x551 = 307;
int32_t x553 = INT32_MIN;
int64_t x554 = -1LL;
int32_t t138 = -24622;
uint32_t x559 = UINT32_MAX;
static int32_t t139 = 4631315;
volatile int32_t x561 = INT32_MIN;
int64_t x562 = -1LL;
volatile int64_t x563 = INT64_MIN;
uint16_t x566 = UINT16_MAX;
uint16_t x567 = UINT16_MAX;
static int64_t x570 = -29LL;
int32_t t143 = 37;
int8_t x579 = INT8_MAX;
uint64_t x580 = 2LLU;
static volatile uint8_t x582 = UINT8_MAX;
int16_t x583 = -1;
static int64_t x585 = -1LL;
int64_t t146 = INT64_MIN;
int64_t x593 = INT64_MIN;
uint16_t x601 = 12671U;
int32_t x606 = -93606918;
uint64_t x612 = UINT64_MAX;
static int64_t x613 = INT64_MAX;
uint16_t x615 = 3901U;
static int32_t t154 = 276762;
int16_t x624 = INT16_MIN;
volatile uint64_t x637 = UINT64_MAX;
volatile int32_t x641 = INT32_MIN;
int8_t x642 = INT8_MAX;
int64_t x645 = -1LL;
uint64_t x647 = 200546468LLU;
static volatile int32_t x648 = INT32_MAX;
uint32_t x654 = 13459U;
int16_t x655 = 1;
int16_t x660 = INT16_MIN;
int32_t t165 = 1;
static int16_t x672 = INT16_MIN;
static int64_t x673 = 0LL;
uint32_t x674 = UINT32_MAX;
int32_t x675 = 459;
int8_t x677 = -14;
volatile uint32_t x680 = 20912231U;
volatile uint64_t x686 = UINT64_MAX;
static int32_t x688 = -1;
int64_t x692 = 1445430LL;
int8_t x695 = -5;
volatile uint64_t x702 = 165180112LLU;
static int64_t t176 = -19953LL;
uint64_t x709 = 0LLU;
static int8_t x711 = -21;
int32_t x716 = -462050638;
int16_t x721 = -1;
int16_t x722 = INT16_MIN;
int16_t x723 = -69;
static int64_t x726 = -1LL;
uint32_t x727 = UINT32_MAX;
static int64_t x729 = INT64_MIN;
uint64_t t183 = UINT64_MAX;
static int8_t x744 = -44;
uint64_t x746 = 86221648177LLU;
uint32_t x761 = 88818212U;
int8_t x763 = INT8_MAX;
uint64_t t190 = 3296447126651LLU;
uint32_t x770 = 86U;
static int16_t x773 = INT16_MIN;
uint32_t x774 = 0U;
int8_t x776 = INT8_MIN;
int32_t x778 = -37;
uint8_t x780 = 3U;
volatile int32_t t194 = -6919;
int8_t x786 = INT8_MIN;
uint32_t x789 = 2071U;
static volatile int32_t t197 = 7;
uint64_t x795 = UINT64_MAX;
volatile int16_t x799 = -1;
uint16_t x800 = 107U;


void f0(void) {
    	uint32_t x1 = 42981U;
	uint32_t x2 = UINT32_MAX;
	uint8_t x3 = 3U;
	int32_t x4 = INT32_MIN;
	static int32_t t0 = INT32_MIN;

    t0 = (((x1!=x2)==x3)|x4);

    if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x5 = 2117U;
	static volatile uint8_t x6 = 2U;
	int8_t x7 = INT8_MIN;
	static uint8_t x8 = 33U;
	int32_t t1 = 51245;

    t1 = (((x5!=x6)==x7)|x8);

    if (t1 != 33) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x10 = INT16_MIN;
	int16_t x11 = INT16_MIN;
	int32_t t2 = 127438197;

    t2 = (((x9!=x10)==x11)|x12);

    if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x13 = 7536488797881313LLU;
	int16_t x14 = INT16_MIN;
	uint8_t x15 = 1U;
	volatile uint32_t x16 = 191U;

    t3 = (((x13!=x14)==x15)|x16);

    if (t3 != 191U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 28359U;
	volatile int32_t x18 = INT32_MIN;
	uint16_t x19 = 3966U;
	int64_t x20 = INT64_MIN;
	static volatile int64_t t4 = INT64_MIN;

    t4 = (((x17!=x18)==x19)|x20);

    if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = 0;
	int8_t x22 = 1;
	volatile int8_t x23 = INT8_MAX;
	int64_t x24 = -1LL;
	static int64_t t5 = -40000981752LL;

    t5 = (((x21!=x22)==x23)|x24);

    if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x26 = INT32_MIN;

    t6 = (((x25!=x26)==x27)|x28);

    if (t6 != 372725223520616LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x29 = INT8_MAX;
	int16_t x30 = -1;
	volatile int32_t x31 = INT32_MIN;
	uint16_t x32 = 33U;

    t7 = (((x29!=x30)==x31)|x32);

    if (t7 != 33) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint16_t x33 = 0U;
	static int64_t x34 = INT64_MIN;
	int64_t x35 = -1LL;
	volatile int32_t t8 = 219207;

    t8 = (((x33!=x34)==x35)|x36);

    if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = UINT64_MAX;
	static int64_t x38 = INT64_MIN;
	int64_t x39 = INT64_MAX;
	volatile int32_t t9 = INT32_MIN;

    t9 = (((x37!=x38)==x39)|x40);

    if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x42 = 0;
	static uint64_t x43 = 9466250640716LLU;
	int32_t t10 = -1055030731;

    t10 = (((x41!=x42)==x43)|x44);

    if (t10 != 3652273) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MAX;
	int64_t x46 = -260188003401853LL;
	int8_t x47 = -1;
	uint64_t x48 = 742LLU;
	volatile uint64_t t11 = 3782LLU;

    t11 = (((x45!=x46)==x47)|x48);

    if (t11 != 742LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = 78304LLU;
	int32_t x50 = INT32_MIN;
	static int16_t x51 = -1;
	static volatile uint64_t t12 = 5411672LLU;

    t12 = (((x49!=x50)==x51)|x52);

    if (t12 != 4LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x54 = INT8_MIN;
	int64_t x55 = INT64_MAX;
	uint16_t x56 = UINT16_MAX;
	volatile int32_t t13 = 926;

    t13 = (((x53!=x54)==x55)|x56);

    if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x59 = 6U;
	static uint64_t x60 = 837445307547910LLU;
	uint64_t t14 = 6767970159023LLU;

    t14 = (((x57!=x58)==x59)|x60);

    if (t14 != 837445307547910LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MIN;
	int32_t x63 = 48795343;
	volatile uint64_t x64 = 6391541155LLU;
	volatile uint64_t t15 = 2471849753432LLU;

    t15 = (((x61!=x62)==x63)|x64);

    if (t15 != 6391541155LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x65 = 31U;
	uint64_t x66 = 1LLU;
	static int8_t x67 = -6;
	static int16_t x68 = INT16_MIN;

    t16 = (((x65!=x66)==x67)|x68);

    if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MIN;
	int64_t x70 = INT64_MIN;
	int32_t x71 = -1;
	uint8_t x72 = 0U;

    t17 = (((x69!=x70)==x71)|x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MIN;
	uint8_t x74 = UINT8_MAX;
	static int64_t x75 = INT64_MIN;
	volatile int8_t x76 = INT8_MAX;
	int32_t t18 = 168932;

    t18 = (((x73!=x74)==x75)|x76);

    if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = 1833U;
	int32_t x78 = INT32_MAX;
	int16_t x79 = INT16_MAX;
	int16_t x80 = 119;

    t19 = (((x77!=x78)==x79)|x80);

    if (t19 != 119) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = 13;
	int64_t x82 = INT64_MIN;
	static uint8_t x83 = 57U;
	int32_t x84 = INT32_MIN;
	volatile int32_t t20 = INT32_MIN;

    t20 = (((x81!=x82)==x83)|x84);

    if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = UINT8_MAX;
	static int16_t x86 = -1;
	static int8_t x87 = INT8_MIN;
	int32_t t21 = -7541;

    t21 = (((x85!=x86)==x87)|x88);

    if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = 5;
	int32_t x91 = -33820423;
	int64_t x92 = INT64_MIN;
	volatile int64_t t22 = INT64_MIN;

    t22 = (((x89!=x90)==x91)|x92);

    if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MAX;
	volatile int64_t x96 = -1LL;
	int64_t t23 = -2LL;

    t23 = (((x93!=x94)==x95)|x96);

    if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x97 = INT8_MAX;
	static uint8_t x98 = 102U;
	static volatile int16_t x99 = INT16_MIN;
	int16_t x100 = -1;
	int32_t t24 = -59219480;

    t24 = (((x97!=x98)==x99)|x100);

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = INT16_MIN;
	uint16_t x102 = UINT16_MAX;
	int8_t x103 = INT8_MIN;
	uint8_t x104 = 7U;
	static int32_t t25 = -108457878;

    t25 = (((x101!=x102)==x103)|x104);

    if (t25 != 7) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x106 = -1LL;
	int16_t x107 = INT16_MAX;

    t26 = (((x105!=x106)==x107)|x108);

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x109 = UINT8_MAX;
	volatile int64_t x110 = INT64_MIN;
	uint64_t x111 = UINT64_MAX;
	static uint16_t x112 = 22820U;

    t27 = (((x109!=x110)==x111)|x112);

    if (t27 != 22820) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = -1;
	uint32_t x114 = 2966U;
	int8_t x116 = INT8_MIN;
	int32_t t28 = 49;

    t28 = (((x113!=x114)==x115)|x116);

    if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x117 = UINT16_MAX;
	uint16_t x118 = UINT16_MAX;
	volatile int32_t t29 = -1948847;

    t29 = (((x117!=x118)==x119)|x120);

    if (t29 != -28252043) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x121 = 23917U;
	uint32_t x122 = 315204U;
	volatile uint32_t x123 = UINT32_MAX;
	int32_t x124 = INT32_MIN;
	volatile int32_t t30 = INT32_MIN;

    t30 = (((x121!=x122)==x123)|x124);

    if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint32_t x125 = UINT32_MAX;
	volatile int32_t x126 = INT32_MIN;
	static int16_t x127 = 800;
	int32_t x128 = INT32_MIN;

    t31 = (((x125!=x126)==x127)|x128);

    if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = -78;
	int32_t x130 = -38399;
	static int16_t x131 = -215;

    t32 = (((x129!=x130)==x131)|x132);

    if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = INT16_MIN;
	int64_t x134 = -1LL;
	uint16_t x135 = 56U;
	int16_t x136 = 2740;

    t33 = (((x133!=x134)==x135)|x136);

    if (t33 != 2740) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x137 = INT32_MIN;
	uint32_t x138 = UINT32_MAX;
	volatile int32_t x139 = INT32_MIN;
	uint64_t x140 = 27847LLU;

    t34 = (((x137!=x138)==x139)|x140);

    if (t34 != 27847LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = 11;
	int32_t x142 = -4;
	int32_t x143 = -1;
	volatile int64_t x144 = INT64_MIN;

    t35 = (((x141!=x142)==x143)|x144);

    if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x146 = -2839;
	volatile int32_t x148 = 139656576;

    t36 = (((x145!=x146)==x147)|x148);

    if (t36 != 139656576) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x150 = -1LL;
	static int8_t x151 = INT8_MIN;
	static uint16_t x152 = UINT16_MAX;
	static int32_t t37 = 108;

    t37 = (((x149!=x150)==x151)|x152);

    if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x154 = INT8_MAX;
	int64_t x156 = INT64_MAX;
	static int64_t t38 = INT64_MAX;

    t38 = (((x153!=x154)==x155)|x156);

    if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x158 = INT16_MIN;
	int16_t x159 = -12530;
	int64_t x160 = INT64_MIN;
	volatile int64_t t39 = INT64_MIN;

    t39 = (((x157!=x158)==x159)|x160);

    if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x161 = -1;
	static uint8_t x162 = UINT8_MAX;
	uint32_t x163 = UINT32_MAX;
	volatile int8_t x164 = INT8_MIN;
	int32_t t40 = -256384;

    t40 = (((x161!=x162)==x163)|x164);

    if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x165 = 7812387U;
	int8_t x166 = INT8_MAX;
	int32_t x167 = -39;
	int8_t x168 = 1;
	int32_t t41 = -11213;

    t41 = (((x165!=x166)==x167)|x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x169 = 9622576;
	int8_t x170 = -1;
	int32_t x171 = INT32_MIN;
	volatile int16_t x172 = -1;
	static int32_t t42 = -1;

    t42 = (((x169!=x170)==x171)|x172);

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = INT64_MAX;
	volatile int32_t x174 = INT32_MIN;
	uint16_t x175 = 14U;
	int32_t x176 = -915027;
	volatile int32_t t43 = -92;

    t43 = (((x173!=x174)==x175)|x176);

    if (t43 != -915027) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint32_t x178 = 1524440966U;
	uint64_t x179 = 21439LLU;
	int32_t x180 = INT32_MIN;
	volatile int32_t t44 = INT32_MIN;

    t44 = (((x177!=x178)==x179)|x180);

    if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile uint16_t x181 = 32693U;
	uint16_t x182 = 29U;
	int32_t x183 = INT32_MIN;
	uint16_t x184 = 15627U;
	int32_t t45 = 18;

    t45 = (((x181!=x182)==x183)|x184);

    if (t45 != 15627) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x185 = INT16_MIN;
	static int64_t x186 = INT64_MIN;
	int8_t x187 = INT8_MIN;
	static int16_t x188 = INT16_MIN;

    t46 = (((x185!=x186)==x187)|x188);

    if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x190 = -2;
	int16_t x191 = INT16_MIN;
	static int8_t x192 = INT8_MIN;
	int32_t t47 = -252605;

    t47 = (((x189!=x190)==x191)|x192);

    if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint64_t x193 = 342631687745713LLU;
	uint64_t x194 = UINT64_MAX;
	static int8_t x195 = 0;
	int8_t x196 = -1;
	int32_t t48 = -6;

    t48 = (((x193!=x194)==x195)|x196);

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x197 = 0U;
	volatile int8_t x198 = INT8_MIN;
	static uint8_t x199 = 1U;
	volatile int64_t x200 = 225150013183819307LL;
	int64_t t49 = -38LL;

    t49 = (((x197!=x198)==x199)|x200);

    if (t49 != 225150013183819307LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x201 = 0U;
	int32_t x202 = -25931;
	int32_t x203 = 10124;
	static volatile int32_t t50 = -4125957;

    t50 = (((x201!=x202)==x203)|x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = 154710110113886LLU;
	uint64_t x206 = UINT64_MAX;
	int32_t x207 = -102587;
	int64_t x208 = -11720212993LL;
	int64_t t51 = 870566648104384LL;

    t51 = (((x205!=x206)==x207)|x208);

    if (t51 != -11720212993LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = INT8_MIN;
	int32_t x211 = -1;
	volatile int32_t t52 = -255470;

    t52 = (((x209!=x210)==x211)|x212);

    if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x213 = UINT32_MAX;
	int32_t x215 = INT32_MIN;
	uint64_t x216 = 0LLU;
	static volatile uint64_t t53 = 2010653865297LLU;

    t53 = (((x213!=x214)==x215)|x216);

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x218 = 1;
	volatile int8_t x219 = INT8_MIN;
	volatile uint8_t x220 = 55U;

    t54 = (((x217!=x218)==x219)|x220);

    if (t54 != 55) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = -1;
	static int64_t x223 = -1LL;
	static uint16_t x224 = UINT16_MAX;
	int32_t t55 = 134;

    t55 = (((x221!=x222)==x223)|x224);

    if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x225 = INT8_MAX;
	int16_t x226 = 183;
	int64_t x227 = INT64_MIN;
	static volatile uint64_t x228 = 69312553832437915LLU;

    t56 = (((x225!=x226)==x227)|x228);

    if (t56 != 69312553832437915LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x229 = UINT64_MAX;
	uint32_t x230 = 29359U;
	int16_t x231 = INT16_MIN;
	uint16_t x232 = UINT16_MAX;
	volatile int32_t t57 = 8662;

    t57 = (((x229!=x230)==x231)|x232);

    if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x233 = INT16_MIN;
	volatile int8_t x234 = 1;
	int8_t x235 = INT8_MIN;
	int16_t x236 = INT16_MIN;
	volatile int32_t t58 = -8968;

    t58 = (((x233!=x234)==x235)|x236);

    if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = INT16_MAX;
	uint32_t x238 = 2U;
	int8_t x240 = INT8_MIN;
	volatile int32_t t59 = -3;

    t59 = (((x237!=x238)==x239)|x240);

    if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x241 = 6U;
	int64_t x242 = INT64_MAX;
	int16_t x243 = INT16_MIN;
	static int32_t t60 = 3;

    t60 = (((x241!=x242)==x243)|x244);

    if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x246 = -25186;
	int16_t x247 = -1;
	static int64_t x248 = INT64_MIN;
	volatile int64_t t61 = INT64_MIN;

    t61 = (((x245!=x246)==x247)|x248);

    if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = INT64_MAX;
	int8_t x250 = INT8_MAX;
	static int64_t x251 = 121885611708LL;
	static int16_t x252 = -1;
	int32_t t62 = -6259391;

    t62 = (((x249!=x250)==x251)|x252);

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = INT32_MIN;
	static int8_t x254 = -25;
	uint16_t x255 = UINT16_MAX;
	volatile uint64_t x256 = 6701426175061LLU;

    t63 = (((x253!=x254)==x255)|x256);

    if (t63 != 6701426175061LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x257 = 21799U;
	uint8_t x259 = 1U;
	volatile int64_t x260 = -343928137969688LL;
	static int64_t t64 = -864672LL;

    t64 = (((x257!=x258)==x259)|x260);

    if (t64 != -343928137969687LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x261 = 8100799U;
	static volatile uint64_t x262 = 3657282763599LLU;
	static int32_t x263 = INT32_MAX;
	volatile int16_t x264 = 450;
	volatile int32_t t65 = -510;

    t65 = (((x261!=x262)==x263)|x264);

    if (t65 != 450) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x266 = -40;
	static int64_t x268 = INT64_MIN;

    t66 = (((x265!=x266)==x267)|x268);

    if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = INT32_MIN;
	int8_t x270 = INT8_MIN;
	int32_t x271 = -1;
	int32_t x272 = -1;
	static int32_t t67 = -217;

    t67 = (((x269!=x270)==x271)|x272);

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = -1;
	uint16_t x274 = UINT16_MAX;
	uint16_t x275 = 366U;
	uint8_t x276 = UINT8_MAX;

    t68 = (((x273!=x274)==x275)|x276);

    if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = 4020125095765LL;
	volatile int16_t x278 = -1;
	static int32_t t69 = -45;

    t69 = (((x277!=x278)==x279)|x280);

    if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x282 = -1LL;
	uint64_t x284 = UINT64_MAX;
	uint64_t t70 = UINT64_MAX;

    t70 = (((x281!=x282)==x283)|x284);

    if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x285 = 17U;
	uint32_t x286 = UINT32_MAX;
	static uint64_t x287 = UINT64_MAX;
	uint32_t x288 = UINT32_MAX;
	uint32_t t71 = UINT32_MAX;

    t71 = (((x285!=x286)==x287)|x288);

    if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x290 = -1;
	volatile uint64_t x292 = 10712LLU;
	static uint64_t t72 = 252558466842992483LLU;

    t72 = (((x289!=x290)==x291)|x292);

    if (t72 != 10713LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x293 = -1;
	int32_t x296 = -366;
	int32_t t73 = -12457617;

    t73 = (((x293!=x294)==x295)|x296);

    if (t73 != -366) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x297 = 446532U;
	static int16_t x298 = -1;
	int64_t x299 = 4108237987869752LL;
	volatile uint16_t x300 = UINT16_MAX;
	volatile int32_t t74 = -272;

    t74 = (((x297!=x298)==x299)|x300);

    if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = INT8_MIN;
	int64_t x302 = INT64_MAX;
	int16_t x303 = INT16_MIN;
	volatile int16_t x304 = INT16_MIN;
	volatile int32_t t75 = 3;

    t75 = (((x301!=x302)==x303)|x304);

    if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x305 = -2;
	uint8_t x306 = UINT8_MAX;
	uint32_t x307 = UINT32_MAX;
	int64_t x308 = INT64_MIN;
	volatile int64_t t76 = INT64_MIN;

    t76 = (((x305!=x306)==x307)|x308);

    if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x310 = UINT32_MAX;
	uint8_t x311 = UINT8_MAX;
	int8_t x312 = INT8_MIN;
	int32_t t77 = 113;

    t77 = (((x309!=x310)==x311)|x312);

    if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = -5;
	int32_t x314 = -1;
	volatile int8_t x315 = 1;
	int64_t x316 = -1LL;
	static int64_t t78 = 132237LL;

    t78 = (((x313!=x314)==x315)|x316);

    if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x317 = UINT32_MAX;
	volatile int8_t x318 = INT8_MIN;
	uint64_t x320 = UINT64_MAX;
	uint64_t t79 = UINT64_MAX;

    t79 = (((x317!=x318)==x319)|x320);

    if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x322 = INT8_MIN;
	int32_t x323 = -361475;
	uint32_t x324 = 401506U;
	volatile uint32_t t80 = 89U;

    t80 = (((x321!=x322)==x323)|x324);

    if (t80 != 401506U) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x327 = 22;
	static int8_t x328 = INT8_MAX;
	int32_t t81 = 1605;

    t81 = (((x325!=x326)==x327)|x328);

    if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x330 = INT64_MAX;
	int8_t x331 = -1;
	volatile int8_t x332 = -1;
	volatile int32_t t82 = -302388;

    t82 = (((x329!=x330)==x331)|x332);

    if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x333 = 0U;
	int8_t x334 = -1;
	uint8_t x335 = 0U;
	uint8_t x336 = 2U;
	int32_t t83 = 118;

    t83 = (((x333!=x334)==x335)|x336);

    if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = INT64_MAX;
	int64_t x338 = INT64_MAX;
	int32_t x339 = INT32_MIN;
	uint16_t x340 = 0U;
	int32_t t84 = -531839792;

    t84 = (((x337!=x338)==x339)|x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = -1;
	static int64_t x342 = -1LL;
	static uint16_t x343 = UINT16_MAX;
	int16_t x344 = INT16_MAX;

    t85 = (((x341!=x342)==x343)|x344);

    if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x345 = UINT16_MAX;
	int32_t x346 = 1;
	uint16_t x347 = UINT16_MAX;
	uint32_t x348 = UINT32_MAX;
	volatile uint32_t t86 = UINT32_MAX;

    t86 = (((x345!=x346)==x347)|x348);

    if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x349 = UINT16_MAX;
	int8_t x350 = 15;
	volatile uint64_t x351 = UINT64_MAX;
	int16_t x352 = -2015;
	int32_t t87 = -51;

    t87 = (((x349!=x350)==x351)|x352);

    if (t87 != -2015) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = 1;
	volatile int8_t x354 = 13;
	int32_t x355 = INT32_MIN;
	uint64_t x356 = UINT64_MAX;
	uint64_t t88 = UINT64_MAX;

    t88 = (((x353!=x354)==x355)|x356);

    if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MIN;
	int16_t x358 = 0;
	int32_t x360 = -1;
	volatile int32_t t89 = 1111;

    t89 = (((x357!=x358)==x359)|x360);

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = -6;
	int64_t x362 = -1LL;
	volatile int64_t x363 = INT64_MIN;
	int8_t x364 = 1;
	volatile int32_t t90 = 198073657;

    t90 = (((x361!=x362)==x363)|x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = -1;
	uint16_t x367 = UINT16_MAX;
	static int64_t x368 = -1LL;
	int64_t t91 = 25303422866528988LL;

    t91 = (((x365!=x366)==x367)|x368);

    if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x370 = INT16_MIN;
	int64_t x372 = -1LL;
	static volatile int64_t t92 = -4LL;

    t92 = (((x369!=x370)==x371)|x372);

    if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = 1;
	volatile int8_t x374 = INT8_MIN;
	int8_t x376 = INT8_MIN;
	volatile int32_t t93 = 3524;

    t93 = (((x373!=x374)==x375)|x376);

    if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x377 = -1LL;
	int32_t x378 = INT32_MIN;
	uint8_t x379 = 1U;
	uint8_t x380 = 1U;
	volatile int32_t t94 = 3491;

    t94 = (((x377!=x378)==x379)|x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint8_t x382 = 7U;
	int16_t x383 = -1;
	static int8_t x384 = -12;
	volatile int32_t t95 = -71315929;

    t95 = (((x381!=x382)==x383)|x384);

    if (t95 != -12) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = 53;
	uint32_t x386 = 479173685U;
	uint64_t x387 = UINT64_MAX;
	volatile int32_t t96 = INT32_MAX;

    t96 = (((x385!=x386)==x387)|x388);

    if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x389 = 74;
	static uint8_t x390 = 6U;
	static int64_t x391 = INT64_MIN;
	int8_t x392 = 6;

    t97 = (((x389!=x390)==x391)|x392);

    if (t97 != 6) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x393 = INT16_MIN;
	static volatile uint8_t x394 = 1U;
	uint64_t t98 = 1615734LLU;

    t98 = (((x393!=x394)==x395)|x396);

    if (t98 != 17539717213929243LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x397 = INT16_MIN;
	int64_t x398 = -1865319748838LL;
	static uint8_t x400 = 53U;
	static int32_t t99 = 0;

    t99 = (((x397!=x398)==x399)|x400);

    if (t99 != 53) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = -1;
	int32_t x402 = -1;

    t100 = (((x401!=x402)==x403)|x404);

    if (t100 != UINT32_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = -1;
	static int32_t x406 = -1;
	uint16_t x407 = 2U;
	static volatile int32_t x408 = INT32_MAX;
	int32_t t101 = INT32_MAX;

    t101 = (((x405!=x406)==x407)|x408);

    if (t101 != INT32_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = -418;
	uint16_t x411 = UINT16_MAX;
	uint64_t x412 = 42634839747458LLU;
	volatile uint64_t t102 = 85165437197815LLU;

    t102 = (((x409!=x410)==x411)|x412);

    if (t102 != 42634839747458LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x413 = UINT8_MAX;
	static volatile int8_t x414 = INT8_MAX;
	int8_t x415 = INT8_MIN;
	int16_t x416 = INT16_MIN;
	int32_t t103 = 4457;

    t103 = (((x413!=x414)==x415)|x416);

    if (t103 != -32768) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x417 = UINT32_MAX;
	int16_t x418 = -150;
	volatile int32_t x419 = -7;
	uint64_t x420 = 21842267728LLU;
	static uint64_t t104 = 13475027352LLU;

    t104 = (((x417!=x418)==x419)|x420);

    if (t104 != 21842267728LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile uint8_t x422 = 14U;
	static int16_t x424 = 0;
	int32_t t105 = 893838;

    t105 = (((x421!=x422)==x423)|x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x425 = UINT8_MAX;
	int32_t x426 = INT32_MAX;
	volatile uint16_t x427 = UINT16_MAX;
	volatile int64_t t106 = -155490029066LL;

    t106 = (((x425!=x426)==x427)|x428);

    if (t106 != -32437750640825205LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x430 = 35U;
	int32_t x431 = -1;
	static int8_t x432 = INT8_MAX;
	static int32_t t107 = 423134603;

    t107 = (((x429!=x430)==x431)|x432);

    if (t107 != 127) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x433 = INT64_MIN;
	volatile int16_t x434 = INT16_MIN;
	int8_t x435 = INT8_MIN;
	int32_t x436 = -235;
	volatile int32_t t108 = -60;

    t108 = (((x433!=x434)==x435)|x436);

    if (t108 != -235) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x438 = UINT64_MAX;
	int64_t x439 = -1LL;
	int16_t x440 = -1;

    t109 = (((x437!=x438)==x439)|x440);

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x441 = INT64_MAX;
	uint16_t x442 = UINT16_MAX;
	int16_t x443 = INT16_MIN;
	int8_t x444 = INT8_MIN;
	int32_t t110 = 117479;

    t110 = (((x441!=x442)==x443)|x444);

    if (t110 != -128) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = 10216042;
	int8_t x446 = -12;
	int8_t x447 = INT8_MIN;
	volatile int16_t x448 = -1;

    t111 = (((x445!=x446)==x447)|x448);

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = 31;
	static volatile int64_t x450 = -68162598039LL;
	uint32_t x451 = 25920U;
	int16_t x452 = INT16_MIN;
	int32_t t112 = 63;

    t112 = (((x449!=x450)==x451)|x452);

    if (t112 != -32768) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint16_t x453 = 1801U;
	int32_t x455 = INT32_MIN;
	static volatile int64_t x456 = 4397755612900LL;
	volatile int64_t t113 = -2522661846525635LL;

    t113 = (((x453!=x454)==x455)|x456);

    if (t113 != 4397755612900LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x457 = 12LLU;
	int64_t x458 = 16910LL;
	volatile int16_t x459 = INT16_MAX;
	static int64_t t114 = 150838LL;

    t114 = (((x457!=x458)==x459)|x460);

    if (t114 != -1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x461 = UINT8_MAX;
	uint8_t x462 = 107U;
	volatile int32_t x463 = INT32_MAX;
	volatile int32_t t115 = 5332;

    t115 = (((x461!=x462)==x463)|x464);

    if (t115 != -32768) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x465 = UINT8_MAX;
	static int32_t x466 = INT32_MIN;
	uint8_t x468 = UINT8_MAX;
	volatile int32_t t116 = 86228;

    t116 = (((x465!=x466)==x467)|x468);

    if (t116 != 255) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = 3713LL;
	int64_t x470 = -1LL;
	int64_t x471 = -1LL;
	int8_t x472 = INT8_MAX;
	static volatile int32_t t117 = 9;

    t117 = (((x469!=x470)==x471)|x472);

    if (t117 != 127) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x473 = 35787U;
	uint8_t x474 = 1U;
	volatile int8_t x475 = -1;
	uint8_t x476 = 3U;
	int32_t t118 = 62273526;

    t118 = (((x473!=x474)==x475)|x476);

    if (t118 != 3) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = INT64_MIN;
	int64_t x478 = INT64_MIN;
	int32_t x479 = 5967;
	static int64_t x480 = INT64_MIN;
	int64_t t119 = INT64_MIN;

    t119 = (((x477!=x478)==x479)|x480);

    if (t119 != INT64_MIN) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x482 = UINT64_MAX;
	static volatile uint64_t x484 = UINT64_MAX;
	static volatile uint64_t t120 = UINT64_MAX;

    t120 = (((x481!=x482)==x483)|x484);

    if (t120 != UINT64_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = INT16_MIN;
	static int32_t x486 = INT32_MAX;
	int8_t x487 = INT8_MIN;
	uint8_t x488 = 5U;
	int32_t t121 = 10;

    t121 = (((x485!=x486)==x487)|x488);

    if (t121 != 5) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x489 = UINT32_MAX;
	int8_t x490 = INT8_MAX;
	uint32_t x492 = UINT32_MAX;
	uint32_t t122 = UINT32_MAX;

    t122 = (((x489!=x490)==x491)|x492);

    if (t122 != UINT32_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x495 = INT32_MIN;
	static volatile uint8_t x496 = 50U;
	volatile int32_t t123 = 969776;

    t123 = (((x493!=x494)==x495)|x496);

    if (t123 != 50) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = 28248779174LL;
	int32_t x499 = -211863;
	int16_t x500 = -14;
	volatile int32_t t124 = 14941;

    t124 = (((x497!=x498)==x499)|x500);

    if (t124 != -14) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x502 = 1;
	volatile uint8_t x503 = 0U;
	static uint32_t x504 = 92934U;
	uint32_t t125 = 69635U;

    t125 = (((x501!=x502)==x503)|x504);

    if (t125 != 92934U) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = INT32_MIN;
	uint16_t x506 = UINT16_MAX;
	volatile uint32_t x507 = UINT32_MAX;
	static uint64_t t126 = 48346083217081LLU;

    t126 = (((x505!=x506)==x507)|x508);

    if (t126 != 120378306969441123LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int16_t x510 = -224;
	int32_t x511 = INT32_MIN;
	int32_t x512 = INT32_MIN;

    t127 = (((x509!=x510)==x511)|x512);

    if (t127 != INT32_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x513 = 39U;
	volatile int64_t x514 = -28535723LL;
	uint8_t x516 = UINT8_MAX;
	int32_t t128 = 2;

    t128 = (((x513!=x514)==x515)|x516);

    if (t128 != 255) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = -1;
	uint8_t x518 = UINT8_MAX;
	int64_t x519 = -1LL;
	int32_t t129 = -4321;

    t129 = (((x517!=x518)==x519)|x520);

    if (t129 != 23) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x522 = 2;
	volatile int32_t t130 = -44;

    t130 = (((x521!=x522)==x523)|x524);

    if (t130 != 4) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x526 = 31962U;
	int16_t x527 = INT16_MIN;
	int8_t x528 = -1;
	volatile int32_t t131 = 225947585;

    t131 = (((x525!=x526)==x527)|x528);

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint16_t x529 = 32U;
	uint32_t x530 = 3U;
	volatile int16_t x531 = INT16_MIN;
	volatile int32_t t132 = 3290593;

    t132 = (((x529!=x530)==x531)|x532);

    if (t132 != 802) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x533 = UINT16_MAX;
	int64_t x534 = INT64_MAX;
	volatile int16_t x535 = 25;
	uint32_t x536 = 98075U;

    t133 = (((x533!=x534)==x535)|x536);

    if (t133 != 98075U) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = -1LL;
	int16_t x538 = -75;
	int16_t x539 = -1;
	uint64_t x540 = UINT64_MAX;
	uint64_t t134 = UINT64_MAX;

    t134 = (((x537!=x538)==x539)|x540);

    if (t134 != UINT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = -22;
	static int8_t x542 = -1;
	int8_t x543 = -1;
	int32_t x544 = INT32_MIN;
	int32_t t135 = INT32_MIN;

    t135 = (((x541!=x542)==x543)|x544);

    if (t135 != INT32_MIN) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = INT16_MAX;
	volatile uint64_t x548 = 5628446998990824415LLU;
	volatile uint64_t t136 = 1583870618082158890LLU;

    t136 = (((x545!=x546)==x547)|x548);

    if (t136 != 5628446998990824415LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x549 = 13401726U;
	int8_t x550 = INT8_MIN;
	int64_t x552 = -457521146454LL;
	static volatile int64_t t137 = -198536LL;

    t137 = (((x549!=x550)==x551)|x552);

    if (t137 != -457521146454LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x555 = INT64_MIN;
	volatile uint8_t x556 = UINT8_MAX;

    t138 = (((x553!=x554)==x555)|x556);

    if (t138 != 255) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x557 = INT16_MIN;
	int32_t x558 = -1;
	static int16_t x560 = INT16_MIN;

    t139 = (((x557!=x558)==x559)|x560);

    if (t139 != -32768) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x564 = INT8_MAX;
	volatile int32_t t140 = 47367010;

    t140 = (((x561!=x562)==x563)|x564);

    if (t140 != 127) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = -53;
	static uint32_t x568 = 58467681U;
	uint32_t t141 = 23U;

    t141 = (((x565!=x566)==x567)|x568);

    if (t141 != 58467681U) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = -4;
	int64_t x571 = -44LL;
	static int16_t x572 = -1;
	int32_t t142 = -1;

    t142 = (((x569!=x570)==x571)|x572);

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x573 = 1U;
	int32_t x574 = -3855645;
	int64_t x575 = INT64_MIN;
	uint16_t x576 = 252U;

    t143 = (((x573!=x574)==x575)|x576);

    if (t143 != 252) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x577 = -7;
	int32_t x578 = -1178076;
	uint64_t t144 = 2LLU;

    t144 = (((x577!=x578)==x579)|x580);

    if (t144 != 2LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = -1;
	static int8_t x584 = -1;
	int32_t t145 = -13042082;

    t145 = (((x581!=x582)==x583)|x584);

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x586 = UINT64_MAX;
	static int32_t x587 = -2;
	int64_t x588 = INT64_MIN;

    t146 = (((x585!=x586)==x587)|x588);

    if (t146 != INT64_MIN) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x589 = INT8_MAX;
	volatile int8_t x590 = -6;
	static int64_t x591 = -3498170LL;
	int64_t x592 = INT64_MIN;
	int64_t t147 = INT64_MIN;

    t147 = (((x589!=x590)==x591)|x592);

    if (t147 != INT64_MIN) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x594 = INT8_MIN;
	int16_t x595 = INT16_MIN;
	uint64_t x596 = 166902631166238657LLU;
	volatile uint64_t t148 = 24LLU;

    t148 = (((x593!=x594)==x595)|x596);

    if (t148 != 166902631166238657LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x597 = INT8_MIN;
	int8_t x598 = 2;
	volatile uint64_t x599 = 4170078398246LLU;
	static int32_t x600 = 57;
	static volatile int32_t t149 = -2194471;

    t149 = (((x597!=x598)==x599)|x600);

    if (t149 != 57) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x602 = UINT32_MAX;
	uint32_t x603 = 1U;
	int64_t x604 = INT64_MIN;
	volatile int64_t t150 = -496LL;

    t150 = (((x601!=x602)==x603)|x604);

    if (t150 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = -19;
	int64_t x607 = INT64_MIN;
	uint16_t x608 = UINT16_MAX;
	int32_t t151 = -123998;

    t151 = (((x605!=x606)==x607)|x608);

    if (t151 != 65535) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = INT8_MIN;
	static uint64_t x610 = 14LLU;
	volatile int8_t x611 = INT8_MAX;
	uint64_t t152 = UINT64_MAX;

    t152 = (((x609!=x610)==x611)|x612);

    if (t152 != UINT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x614 = 2U;
	volatile int32_t x616 = -34113;
	int32_t t153 = 65725457;

    t153 = (((x613!=x614)==x615)|x616);

    if (t153 != -34113) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x617 = 85U;
	int32_t x618 = -1043;
	int8_t x619 = 0;
	int8_t x620 = INT8_MIN;

    t154 = (((x617!=x618)==x619)|x620);

    if (t154 != -128) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint64_t x621 = UINT64_MAX;
	static uint8_t x622 = 120U;
	int64_t x623 = -13015860400091LL;
	static volatile int32_t t155 = 45524276;

    t155 = (((x621!=x622)==x623)|x624);

    if (t155 != -32768) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = -1;
	static uint8_t x626 = UINT8_MAX;
	int32_t x627 = INT32_MAX;
	int32_t x628 = -1;
	volatile int32_t t156 = 2452091;

    t156 = (((x625!=x626)==x627)|x628);

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x629 = 50U;
	int32_t x630 = 169622816;
	int32_t x631 = INT32_MIN;
	int16_t x632 = -3959;
	int32_t t157 = 36679;

    t157 = (((x629!=x630)==x631)|x632);

    if (t157 != -3959) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = INT32_MAX;
	static volatile uint8_t x634 = 3U;
	static int64_t x635 = -1LL;
	volatile uint8_t x636 = 0U;
	volatile int32_t t158 = 0;

    t158 = (((x633!=x634)==x635)|x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x638 = INT64_MAX;
	int64_t x639 = INT64_MAX;
	int16_t x640 = -12988;
	int32_t t159 = -226205;

    t159 = (((x637!=x638)==x639)|x640);

    if (t159 != -12988) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile uint8_t x643 = 111U;
	uint32_t x644 = UINT32_MAX;
	volatile uint32_t t160 = UINT32_MAX;

    t160 = (((x641!=x642)==x643)|x644);

    if (t160 != UINT32_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x646 = UINT64_MAX;
	volatile int32_t t161 = INT32_MAX;

    t161 = (((x645!=x646)==x647)|x648);

    if (t161 != INT32_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = INT32_MAX;
	uint64_t x650 = UINT64_MAX;
	volatile int8_t x651 = INT8_MAX;
	uint64_t x652 = 1013326616837469LLU;
	uint64_t t162 = 3763180892982162856LLU;

    t162 = (((x649!=x650)==x651)|x652);

    if (t162 != 1013326616837469LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x653 = INT64_MAX;
	static uint32_t x656 = 1505579064U;
	uint32_t t163 = 3813901U;

    t163 = (((x653!=x654)==x655)|x656);

    if (t163 != 1505579065U) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint8_t x657 = UINT8_MAX;
	int32_t x658 = -1;
	static int64_t x659 = INT64_MIN;
	int32_t t164 = -3;

    t164 = (((x657!=x658)==x659)|x660);

    if (t164 != -32768) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = -1;
	uint16_t x662 = 1U;
	static int8_t x663 = INT8_MIN;
	uint8_t x664 = 67U;

    t165 = (((x661!=x662)==x663)|x664);

    if (t165 != 67) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x665 = INT64_MIN;
	uint8_t x666 = UINT8_MAX;
	int64_t x667 = -124LL;
	volatile int64_t x668 = 21295102591LL;
	volatile int64_t t166 = 31LL;

    t166 = (((x665!=x666)==x667)|x668);

    if (t166 != 21295102591LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = -1;
	int64_t x670 = INT64_MAX;
	uint16_t x671 = UINT16_MAX;
	volatile int32_t t167 = 444173862;

    t167 = (((x669!=x670)==x671)|x672);

    if (t167 != -32768) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x676 = -1;
	volatile int32_t t168 = 7069483;

    t168 = (((x673!=x674)==x675)|x676);

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x678 = UINT8_MAX;
	static volatile int8_t x679 = 59;
	static volatile uint32_t t169 = 96232171U;

    t169 = (((x677!=x678)==x679)|x680);

    if (t169 != 20912231U) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = INT64_MAX;
	uint8_t x682 = 86U;
	static volatile int32_t x683 = 17662;
	uint8_t x684 = UINT8_MAX;
	volatile int32_t t170 = -21;

    t170 = (((x681!=x682)==x683)|x684);

    if (t170 != 255) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = -1;
	uint64_t x687 = 87199LLU;
	static int32_t t171 = 29;

    t171 = (((x685!=x686)==x687)|x688);

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x689 = UINT64_MAX;
	int8_t x690 = 45;
	volatile uint8_t x691 = 18U;
	int64_t t172 = -1594890954LL;

    t172 = (((x689!=x690)==x691)|x692);

    if (t172 != 1445430LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = 0;
	int64_t x694 = INT64_MIN;
	int8_t x696 = INT8_MIN;
	int32_t t173 = 52997396;

    t173 = (((x693!=x694)==x695)|x696);

    if (t173 != -128) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = INT64_MAX;
	volatile int8_t x698 = INT8_MAX;
	static volatile int8_t x699 = 0;
	int32_t x700 = INT32_MIN;
	int32_t t174 = INT32_MIN;

    t174 = (((x697!=x698)==x699)|x700);

    if (t174 != INT32_MIN) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint32_t x701 = UINT32_MAX;
	uint8_t x703 = 3U;
	uint64_t x704 = 110422333270664LLU;
	static volatile uint64_t t175 = 17999LLU;

    t175 = (((x701!=x702)==x703)|x704);

    if (t175 != 110422333270664LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x705 = 1U;
	int32_t x706 = -1;
	uint64_t x707 = 3383439567843846LLU;
	static int64_t x708 = -1LL;

    t176 = (((x705!=x706)==x707)|x708);

    if (t176 != -1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x710 = INT64_MIN;
	int8_t x712 = INT8_MIN;
	volatile int32_t t177 = 57074;

    t177 = (((x709!=x710)==x711)|x712);

    if (t177 != -128) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = -207;
	uint32_t x714 = 0U;
	int64_t x715 = INT64_MIN;
	static volatile int32_t t178 = 7;

    t178 = (((x713!=x714)==x715)|x716);

    if (t178 != -462050638) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int16_t x717 = INT16_MAX;
	volatile int8_t x718 = 1;
	int64_t x719 = -1LL;
	uint16_t x720 = UINT16_MAX;
	static int32_t t179 = -471400930;

    t179 = (((x717!=x718)==x719)|x720);

    if (t179 != 65535) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x724 = INT64_MIN;
	int64_t t180 = INT64_MIN;

    t180 = (((x721!=x722)==x723)|x724);

    if (t180 != INT64_MIN) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x725 = UINT32_MAX;
	static uint16_t x728 = 2417U;
	int32_t t181 = -49938343;

    t181 = (((x725!=x726)==x727)|x728);

    if (t181 != 2417) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x730 = -1;
	static int8_t x731 = -5;
	static int8_t x732 = INT8_MAX;
	volatile int32_t t182 = 6349685;

    t182 = (((x729!=x730)==x731)|x732);

    if (t182 != 127) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = INT16_MIN;
	int64_t x734 = INT64_MIN;
	volatile int32_t x735 = -83533;
	uint64_t x736 = UINT64_MAX;

    t183 = (((x733!=x734)==x735)|x736);

    if (t183 != UINT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = -474138;
	int16_t x738 = -418;
	volatile uint64_t x739 = 24020174LLU;
	static uint64_t x740 = UINT64_MAX;
	volatile uint64_t t184 = UINT64_MAX;

    t184 = (((x737!=x738)==x739)|x740);

    if (t184 != UINT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint64_t x741 = UINT64_MAX;
	uint8_t x742 = 3U;
	int64_t x743 = INT64_MIN;
	int32_t t185 = -14;

    t185 = (((x741!=x742)==x743)|x744);

    if (t185 != -44) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = -98;
	int16_t x747 = -1;
	uint32_t x748 = 211U;
	uint32_t t186 = 156029418U;

    t186 = (((x745!=x746)==x747)|x748);

    if (t186 != 211U) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint32_t x749 = UINT32_MAX;
	static int16_t x750 = INT16_MIN;
	int8_t x751 = -49;
	uint64_t x752 = 12LLU;
	volatile uint64_t t187 = 985325535742160718LLU;

    t187 = (((x749!=x750)==x751)|x752);

    if (t187 != 12LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x753 = -33640363188166LL;
	int64_t x754 = -1LL;
	int64_t x755 = 3LL;
	int8_t x756 = INT8_MIN;
	volatile int32_t t188 = 2317707;

    t188 = (((x753!=x754)==x755)|x756);

    if (t188 != -128) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x757 = INT32_MIN;
	uint64_t x758 = UINT64_MAX;
	int16_t x759 = 18;
	int64_t x760 = 100054LL;
	int64_t t189 = -5695547LL;

    t189 = (((x757!=x758)==x759)|x760);

    if (t189 != 100054LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x762 = INT16_MIN;
	uint64_t x764 = 150854894514304976LLU;

    t190 = (((x761!=x762)==x763)|x764);

    if (t190 != 150854894514304976LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = -1;
	static int64_t x766 = -11533LL;
	uint8_t x767 = 9U;
	volatile uint32_t x768 = UINT32_MAX;
	static uint32_t t191 = UINT32_MAX;

    t191 = (((x765!=x766)==x767)|x768);

    if (t191 != UINT32_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint8_t x769 = UINT8_MAX;
	int16_t x771 = -1;
	int16_t x772 = INT16_MIN;
	static volatile int32_t t192 = 2550;

    t192 = (((x769!=x770)==x771)|x772);

    if (t192 != -32768) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x775 = INT32_MAX;
	int32_t t193 = 0;

    t193 = (((x773!=x774)==x775)|x776);

    if (t193 != -128) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int64_t x777 = INT64_MIN;
	static int32_t x779 = INT32_MAX;

    t194 = (((x777!=x778)==x779)|x780);

    if (t194 != 3) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = 3;
	int16_t x782 = 0;
	volatile int32_t x783 = 32126;
	int32_t x784 = 125691;
	int32_t t195 = 21;

    t195 = (((x781!=x782)==x783)|x784);

    if (t195 != 125691) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x785 = 21199107275601LLU;
	int16_t x787 = INT16_MIN;
	static int8_t x788 = INT8_MAX;
	volatile int32_t t196 = -810;

    t196 = (((x785!=x786)==x787)|x788);

    if (t196 != 127) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x790 = INT8_MAX;
	static int64_t x791 = 10438539725LL;
	volatile uint8_t x792 = 1U;

    t197 = (((x789!=x790)==x791)|x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = INT8_MAX;
	int8_t x794 = INT8_MAX;
	int32_t x796 = INT32_MAX;
	static volatile int32_t t198 = INT32_MAX;

    t198 = (((x793!=x794)==x795)|x796);

    if (t198 != INT32_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x797 = 139U;
	uint16_t x798 = 2U;
	int32_t t199 = -32;

    t199 = (((x797!=x798)==x799)|x800);

    if (t199 != 107) { NG(); } else { ; }
	
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

