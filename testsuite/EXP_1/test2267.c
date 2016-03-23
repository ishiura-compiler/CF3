
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

uint32_t x2 = 18419692U;
int32_t x4 = -21105184;
int16_t x12 = -1;
volatile int16_t x15 = INT16_MIN;
static int16_t x16 = -248;
static uint32_t x23 = 7664663U;
int32_t x25 = INT32_MIN;
int16_t x26 = -70;
uint64_t x31 = UINT64_MAX;
int64_t x34 = INT64_MAX;
volatile int32_t t10 = 4658914;
int64_t x49 = 580191LL;
int32_t t12 = 5;
uint8_t x57 = 4U;
int32_t t15 = INT32_MAX;
int16_t x68 = -64;
int32_t x71 = -30277612;
int64_t x72 = 9568917862LL;
volatile int8_t x76 = -3;
volatile int32_t t21 = -2067309;
static volatile int64_t x97 = INT64_MAX;
volatile int16_t x110 = INT16_MAX;
int32_t x112 = -7;
int16_t x114 = 9742;
static int64_t t29 = INT64_MIN;
int16_t x126 = INT16_MAX;
static uint16_t x131 = UINT16_MAX;
int16_t x132 = 47;
volatile int32_t t32 = -1765701;
static volatile int32_t t33 = 199493250;
volatile int64_t x141 = INT64_MIN;
volatile uint8_t x145 = UINT8_MAX;
int64_t x147 = INT64_MIN;
volatile int16_t x151 = -1;
int32_t x152 = INT32_MIN;
volatile int32_t t37 = INT32_MIN;
int16_t x163 = INT16_MIN;
uint8_t x165 = 12U;
int8_t x166 = 12;
volatile int32_t t41 = INT32_MIN;
volatile int64_t x175 = INT64_MIN;
static volatile int16_t x177 = -1;
static int64_t x178 = INT64_MAX;
volatile int32_t t44 = -1;
volatile uint8_t x192 = UINT8_MAX;
static uint64_t t49 = 196162938724LLU;
volatile int32_t x208 = 127;
static int32_t t51 = -18011;
static int16_t x213 = -7;
static volatile int16_t x219 = -2661;
uint16_t x222 = 0U;
uint32_t t56 = 9U;
int32_t x232 = 2271064;
static int8_t x234 = INT8_MIN;
static volatile int32_t t59 = -64;
int16_t x241 = -1;
int32_t t60 = 86217177;
volatile int64_t x252 = INT64_MIN;
int32_t x254 = -1;
int16_t x265 = INT16_MIN;
uint32_t x267 = 4084U;
volatile uint16_t x268 = 237U;
volatile int64_t t67 = INT64_MAX;
volatile uint32_t t68 = 1011179680U;
uint16_t x278 = 1U;
volatile int8_t x280 = -3;
int16_t x283 = -172;
uint8_t x284 = UINT8_MAX;
static int32_t t70 = -18732379;
uint8_t x286 = UINT8_MAX;
int8_t x289 = INT8_MIN;
int32_t x292 = INT32_MIN;
int64_t x298 = -394918077LL;
volatile int64_t x305 = -1LL;
uint16_t x307 = 2553U;
int8_t x319 = INT8_MIN;
uint32_t x325 = 42421123U;
static uint32_t x327 = UINT32_MAX;
int16_t x332 = INT16_MIN;
int32_t t84 = INT32_MIN;
int32_t t85 = -672552729;
uint64_t t87 = 0LLU;
static uint8_t x357 = 72U;
int32_t x360 = 8367551;
int32_t t90 = -934870991;
int32_t x365 = INT32_MIN;
int32_t t92 = INT32_MIN;
int32_t x375 = 6057126;
static volatile int32_t x384 = INT32_MIN;
int32_t x386 = -58738621;
int32_t x394 = -3352;
int64_t x395 = 6379692LL;
int16_t x396 = INT16_MIN;
volatile int32_t t98 = 13527902;
uint16_t x403 = UINT16_MAX;
static int16_t x409 = -1;
static int16_t x415 = -8234;
int32_t x419 = INT32_MAX;
volatile int32_t x420 = 0;
int32_t t104 = -386;
static volatile int32_t t106 = 3697;
int32_t x432 = -494307407;
int16_t x435 = -1;
volatile uint8_t x441 = 70U;
volatile uint64_t x442 = 2LLU;
volatile uint32_t x444 = 15U;
int32_t x451 = INT32_MIN;
int32_t x452 = 1561;
int64_t x453 = -1200393123170256416LL;
int16_t x458 = INT16_MAX;
static uint64_t x460 = 3259840LLU;
int16_t x462 = 1270;
int64_t x463 = INT64_MAX;
static volatile int32_t t115 = INT32_MAX;
static int64_t x469 = INT64_MIN;
int64_t x470 = INT64_MAX;
static volatile int8_t x471 = INT8_MIN;
volatile int64_t x474 = -4425740127822416616LL;
uint32_t x476 = 20118833U;
volatile int8_t x482 = INT8_MIN;
static int64_t x483 = -284757949615927909LL;
volatile int8_t x484 = INT8_MIN;
uint32_t x489 = UINT32_MAX;
int16_t x494 = INT16_MAX;
uint8_t x498 = UINT8_MAX;
static volatile uint8_t x501 = 6U;
uint32_t x509 = 330622U;
volatile int32_t t127 = -1101;
static int8_t x513 = -1;
uint8_t x514 = UINT8_MAX;
int8_t x520 = INT8_MIN;
uint64_t x521 = 276301LLU;
uint32_t x523 = 3168709U;
static int16_t x531 = INT16_MAX;
uint16_t x532 = 105U;
int16_t x536 = -1;
int16_t x537 = -277;
static volatile int16_t x545 = INT16_MIN;
static int8_t x549 = INT8_MAX;
static volatile int64_t x555 = -10LL;
int8_t x557 = 59;
volatile int64_t x559 = -2LL;
volatile uint32_t x563 = 16U;
int16_t x569 = -11;
uint64_t x575 = 126635626944058LLU;
uint16_t x576 = 3679U;
static volatile uint16_t x577 = UINT16_MAX;
int8_t x578 = INT8_MIN;
static uint8_t x587 = 3U;
int32_t t146 = -93192795;
static uint16_t x591 = UINT16_MAX;
volatile uint16_t x592 = 1550U;
uint64_t x593 = UINT64_MAX;
int64_t x599 = INT64_MIN;
int64_t x605 = -4177612045843LL;
uint32_t x611 = 123U;
int64_t x615 = INT64_MIN;
uint16_t x616 = 343U;
int64_t x618 = -94951134LL;
uint16_t x619 = UINT16_MAX;
volatile int8_t x630 = -1;
uint8_t x632 = UINT8_MAX;
volatile int32_t t157 = -30;
int32_t x639 = INT32_MAX;
int32_t t159 = INT32_MIN;
static int16_t x642 = -986;
uint32_t x648 = UINT32_MAX;
uint16_t x657 = 741U;
volatile int64_t x676 = INT64_MIN;
int64_t x692 = 21825425225056927LL;
int64_t t172 = 17925139343450201LL;
static int16_t x693 = -1;
int16_t x697 = -1;
static volatile int32_t t175 = INT32_MIN;
int16_t x706 = INT16_MAX;
uint32_t x710 = UINT32_MAX;
volatile int32_t x713 = -8782;
uint32_t x719 = 222U;
volatile int32_t t180 = -1021431605;
volatile int32_t t183 = -1;
int64_t x739 = 1686LL;
volatile int64_t t186 = INT64_MIN;
int32_t t188 = -508;
static int16_t x763 = INT16_MAX;
volatile uint8_t x764 = 56U;
int32_t t190 = 0;
static volatile int8_t x770 = INT8_MAX;
int32_t x772 = INT32_MIN;
int16_t x777 = INT16_MAX;
uint32_t x783 = UINT32_MAX;
static volatile int16_t x787 = INT16_MIN;
int8_t x793 = INT8_MAX;
int64_t x799 = INT64_MAX;
volatile uint64_t t199 = 5770372351284LLU;


void f0(void) {
    	static int8_t x1 = -14;
	int8_t x3 = -1;
	int32_t t0 = -411878768;

    t0 = (((x1&x2)==x3)|x4);

    if (t0 != -21105184) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 0U;
	static uint8_t x6 = 112U;
	int8_t x7 = -61;
	static uint32_t x8 = 521318187U;
	uint32_t t1 = 5344566U;

    t1 = (((x5&x6)==x7)|x8);

    if (t1 != 521318187U) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -198499241;
	volatile uint8_t x10 = 70U;
	volatile int16_t x11 = -1114;
	volatile int32_t t2 = 398;

    t2 = (((x9&x10)==x11)|x12);

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x13 = UINT8_MAX;
	uint16_t x14 = UINT16_MAX;
	volatile int32_t t3 = 102666888;

    t3 = (((x13&x14)==x15)|x16);

    if (t3 != -248) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 1U;
	static volatile int64_t x18 = INT64_MIN;
	int16_t x19 = INT16_MIN;
	uint32_t x20 = 7887U;
	uint32_t t4 = 7U;

    t4 = (((x17&x18)==x19)|x20);

    if (t4 != 7887U) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x21 = INT64_MIN;
	static volatile int32_t x22 = INT32_MIN;
	volatile int8_t x24 = INT8_MAX;
	int32_t t5 = 14606824;

    t5 = (((x21&x22)==x23)|x24);

    if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x27 = 1;
	static int8_t x28 = -1;
	static int32_t t6 = -140019;

    t6 = (((x25&x26)==x27)|x28);

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x29 = -1LL;
	uint16_t x30 = UINT16_MAX;
	static int16_t x32 = INT16_MIN;
	static volatile int32_t t7 = -9;

    t7 = (((x29&x30)==x31)|x32);

    if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 497923673LLU;
	uint16_t x35 = UINT16_MAX;
	int64_t x36 = -1LL;
	volatile int64_t t8 = 434LL;

    t8 = (((x33&x34)==x35)|x36);

    if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = -1;
	static uint32_t x38 = UINT32_MAX;
	int32_t x39 = -1;
	uint16_t x40 = 86U;
	static volatile int32_t t9 = -8171;

    t9 = (((x37&x38)==x39)|x40);

    if (t9 != 87) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = -1;
	volatile int8_t x42 = 14;
	int8_t x43 = 1;
	static int8_t x44 = -6;

    t10 = (((x41&x42)==x43)|x44);

    if (t10 != -6) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = -1;
	uint64_t x46 = 190326LLU;
	uint64_t x47 = UINT64_MAX;
	volatile int8_t x48 = INT8_MAX;
	static volatile int32_t t11 = 49935;

    t11 = (((x45&x46)==x47)|x48);

    if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x50 = 45137790;
	static uint64_t x51 = 126282274LLU;
	int8_t x52 = INT8_MAX;

    t12 = (((x49&x50)==x51)|x52);

    if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = -1;
	int16_t x54 = -19;
	int32_t x55 = INT32_MIN;
	uint16_t x56 = UINT16_MAX;
	volatile int32_t t13 = 223;

    t13 = (((x53&x54)==x55)|x56);

    if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x58 = INT64_MIN;
	volatile int16_t x59 = INT16_MIN;
	int8_t x60 = -3;
	static volatile int32_t t14 = 70;

    t14 = (((x57&x58)==x59)|x60);

    if (t14 != -3) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = 361628LL;
	int8_t x62 = INT8_MAX;
	static int32_t x63 = 542;
	static int32_t x64 = INT32_MAX;

    t15 = (((x61&x62)==x63)|x64);

    if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x65 = -1LL;
	static uint32_t x66 = UINT32_MAX;
	int64_t x67 = -1770165LL;
	volatile int32_t t16 = 121394;

    t16 = (((x65&x66)==x67)|x68);

    if (t16 != -64) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = -1900LL;
	volatile int32_t x70 = INT32_MIN;
	static volatile int64_t t17 = 47623479947429348LL;

    t17 = (((x69&x70)==x71)|x72);

    if (t17 != 9568917862LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = -103561LL;
	int8_t x74 = 1;
	volatile int64_t x75 = INT64_MIN;
	volatile int32_t t18 = 88248;

    t18 = (((x73&x74)==x75)|x76);

    if (t18 != -3) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x77 = INT32_MIN;
	static int8_t x78 = 3;
	int32_t x79 = -1;
	volatile uint16_t x80 = UINT16_MAX;
	volatile int32_t t19 = -265;

    t19 = (((x77&x78)==x79)|x80);

    if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MAX;
	int64_t x82 = -18239619LL;
	static uint16_t x83 = UINT16_MAX;
	int16_t x84 = INT16_MAX;
	int32_t t20 = -397433;

    t20 = (((x81&x82)==x83)|x84);

    if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x85 = INT8_MAX;
	int8_t x86 = INT8_MIN;
	int8_t x87 = 30;
	static volatile uint16_t x88 = UINT16_MAX;

    t21 = (((x85&x86)==x87)|x88);

    if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = UINT64_MAX;
	int16_t x90 = INT16_MIN;
	volatile int16_t x91 = INT16_MAX;
	static volatile int16_t x92 = INT16_MAX;
	volatile int32_t t22 = 724710130;

    t22 = (((x89&x90)==x91)|x92);

    if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x93 = INT8_MIN;
	uint32_t x94 = 121921U;
	int32_t x95 = -1;
	int16_t x96 = INT16_MAX;
	volatile int32_t t23 = -1695;

    t23 = (((x93&x94)==x95)|x96);

    if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x98 = -3012960609LL;
	int32_t x99 = INT32_MAX;
	uint8_t x100 = UINT8_MAX;
	volatile int32_t t24 = 80805;

    t24 = (((x97&x98)==x99)|x100);

    if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x101 = INT16_MIN;
	static uint32_t x102 = 415U;
	int8_t x103 = INT8_MIN;
	static uint64_t x104 = UINT64_MAX;
	volatile uint64_t t25 = UINT64_MAX;

    t25 = (((x101&x102)==x103)|x104);

    if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MAX;
	uint8_t x106 = 0U;
	int16_t x107 = INT16_MIN;
	int64_t x108 = INT64_MIN;
	static int64_t t26 = INT64_MIN;

    t26 = (((x105&x106)==x107)|x108);

    if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = 4127759290LL;
	volatile uint32_t x111 = 6U;
	int32_t t27 = -52;

    t27 = (((x109&x110)==x111)|x112);

    if (t27 != -7) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x113 = 3U;
	static int16_t x115 = -158;
	volatile int32_t x116 = INT32_MIN;
	static int32_t t28 = INT32_MIN;

    t28 = (((x113&x114)==x115)|x116);

    if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x117 = UINT16_MAX;
	int64_t x118 = INT64_MIN;
	static int16_t x119 = -2;
	int64_t x120 = INT64_MIN;

    t29 = (((x117&x118)==x119)|x120);

    if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = INT8_MAX;
	int8_t x122 = INT8_MIN;
	static uint64_t x123 = 47777660274LLU;
	static int16_t x124 = -1603;
	static int32_t t30 = 219356171;

    t30 = (((x121&x122)==x123)|x124);

    if (t30 != -1603) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = 14565823;
	volatile int16_t x127 = INT16_MIN;
	static uint16_t x128 = UINT16_MAX;
	volatile int32_t t31 = 2879892;

    t31 = (((x125&x126)==x127)|x128);

    if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x129 = 5925883LLU;
	int64_t x130 = INT64_MIN;

    t32 = (((x129&x130)==x131)|x132);

    if (t32 != 47) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x133 = INT32_MIN;
	int8_t x134 = INT8_MIN;
	int8_t x135 = INT8_MIN;
	static uint16_t x136 = 11681U;

    t33 = (((x133&x134)==x135)|x136);

    if (t33 != 11681) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = 4055;
	uint64_t x138 = 176931955919902LLU;
	volatile uint64_t x139 = 367LLU;
	int8_t x140 = 3;
	volatile int32_t t34 = 72777898;

    t34 = (((x137&x138)==x139)|x140);

    if (t34 != 3) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x142 = -1;
	int32_t x143 = 14;
	uint32_t x144 = 175580890U;
	static volatile uint32_t t35 = 0U;

    t35 = (((x141&x142)==x143)|x144);

    if (t35 != 175580890U) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x146 = INT16_MAX;
	static int8_t x148 = INT8_MIN;
	volatile int32_t t36 = -13;

    t36 = (((x145&x146)==x147)|x148);

    if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = 185581;
	volatile int16_t x150 = 0;

    t37 = (((x149&x150)==x151)|x152);

    if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = 0;
	volatile int8_t x154 = 18;
	static int8_t x155 = 0;
	int32_t x156 = INT32_MIN;
	static int32_t t38 = -9057954;

    t38 = (((x153&x154)==x155)|x156);

    if (t38 != -2147483647) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = -1;
	uint32_t x158 = 1963082739U;
	static int8_t x159 = INT8_MIN;
	static volatile int32_t x160 = INT32_MIN;
	int32_t t39 = INT32_MIN;

    t39 = (((x157&x158)==x159)|x160);

    if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x161 = -29;
	int8_t x162 = INT8_MIN;
	int64_t x164 = -1LL;
	volatile int64_t t40 = -2030955647550432875LL;

    t40 = (((x161&x162)==x163)|x164);

    if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint16_t x167 = 1U;
	volatile int32_t x168 = INT32_MIN;

    t41 = (((x165&x166)==x167)|x168);

    if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MAX;
	int16_t x170 = 1;
	uint8_t x171 = 0U;
	int16_t x172 = INT16_MIN;
	volatile int32_t t42 = 300;

    t42 = (((x169&x170)==x171)|x172);

    if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = 13LLU;
	static volatile uint8_t x174 = 31U;
	uint8_t x176 = 3U;
	int32_t t43 = 16077754;

    t43 = (((x173&x174)==x175)|x176);

    if (t43 != 3) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x179 = INT8_MIN;
	int32_t x180 = -396496;

    t44 = (((x177&x178)==x179)|x180);

    if (t44 != -396496) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = -1001871930962824LL;
	volatile int16_t x182 = 1;
	uint64_t x183 = UINT64_MAX;
	volatile uint32_t x184 = 61686419U;
	uint32_t t45 = 20687074U;

    t45 = (((x181&x182)==x183)|x184);

    if (t45 != 61686419U) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x185 = INT8_MIN;
	static uint16_t x186 = UINT16_MAX;
	uint16_t x187 = 1460U;
	volatile int8_t x188 = INT8_MIN;
	static int32_t t46 = 125466;

    t46 = (((x185&x186)==x187)|x188);

    if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = -573444257;
	int8_t x190 = INT8_MAX;
	static uint16_t x191 = 0U;
	int32_t t47 = 111077915;

    t47 = (((x189&x190)==x191)|x192);

    if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = -1;
	uint64_t x194 = UINT64_MAX;
	volatile int32_t x195 = 1;
	volatile uint64_t x196 = 100831648LLU;
	uint64_t t48 = 16777476449LLU;

    t48 = (((x193&x194)==x195)|x196);

    if (t48 != 100831648LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = INT32_MIN;
	int64_t x198 = INT64_MIN;
	static int32_t x199 = -409344;
	volatile uint64_t x200 = 258LLU;

    t49 = (((x197&x198)==x199)|x200);

    if (t49 != 258LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x201 = INT64_MAX;
	int32_t x202 = -307;
	uint32_t x203 = 360U;
	uint8_t x204 = 1U;
	volatile int32_t t50 = 29343;

    t50 = (((x201&x202)==x203)|x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x205 = 6U;
	uint64_t x206 = UINT64_MAX;
	static int8_t x207 = INT8_MIN;

    t51 = (((x205&x206)==x207)|x208);

    if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x209 = 7U;
	static volatile uint32_t x210 = 228278U;
	int64_t x211 = INT64_MIN;
	volatile int16_t x212 = -1;
	int32_t t52 = -3;

    t52 = (((x209&x210)==x211)|x212);

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x214 = INT16_MAX;
	uint32_t x215 = 224U;
	volatile uint16_t x216 = UINT16_MAX;
	int32_t t53 = 10101306;

    t53 = (((x213&x214)==x215)|x216);

    if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = 0;
	volatile uint64_t x218 = 1281LLU;
	int32_t x220 = 324819475;
	static int32_t t54 = -489;

    t54 = (((x217&x218)==x219)|x220);

    if (t54 != 324819475) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x221 = INT64_MAX;
	int32_t x223 = INT32_MIN;
	int64_t x224 = -1LL;
	volatile int64_t t55 = 11117609LL;

    t55 = (((x221&x222)==x223)|x224);

    if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = 114U;
	int16_t x226 = INT16_MIN;
	uint8_t x227 = 16U;
	static uint32_t x228 = 6032U;

    t56 = (((x225&x226)==x227)|x228);

    if (t56 != 6032U) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x229 = -1;
	int8_t x230 = INT8_MAX;
	int16_t x231 = -120;
	int32_t t57 = 244;

    t57 = (((x229&x230)==x231)|x232);

    if (t57 != 2271064) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = INT64_MAX;
	int16_t x235 = INT16_MIN;
	volatile int16_t x236 = -2090;
	int32_t t58 = -146700;

    t58 = (((x233&x234)==x235)|x236);

    if (t58 != -2090) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x237 = INT8_MIN;
	static int8_t x238 = INT8_MIN;
	uint8_t x239 = 1U;
	static volatile int16_t x240 = -6273;

    t59 = (((x237&x238)==x239)|x240);

    if (t59 != -6273) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x242 = INT64_MIN;
	int64_t x243 = -1LL;
	uint8_t x244 = 45U;

    t60 = (((x241&x242)==x243)|x244);

    if (t60 != 45) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x245 = INT32_MIN;
	int32_t x246 = INT32_MAX;
	static uint8_t x247 = 9U;
	int16_t x248 = -358;
	volatile int32_t t61 = -66092785;

    t61 = (((x245&x246)==x247)|x248);

    if (t61 != -358) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = INT64_MIN;
	uint64_t x250 = 468762252894323LLU;
	uint64_t x251 = 59LLU;
	int64_t t62 = INT64_MIN;

    t62 = (((x249&x250)==x251)|x252);

    if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x253 = UINT64_MAX;
	static volatile uint32_t x255 = UINT32_MAX;
	volatile int16_t x256 = INT16_MIN;
	volatile int32_t t63 = 212387;

    t63 = (((x253&x254)==x255)|x256);

    if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x257 = 1641U;
	uint8_t x258 = 19U;
	volatile int64_t x259 = INT64_MAX;
	volatile uint16_t x260 = UINT16_MAX;
	volatile int32_t t64 = 2470;

    t64 = (((x257&x258)==x259)|x260);

    if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x261 = -2672513300631879LL;
	static uint32_t x262 = 672104U;
	int64_t x263 = -380318295084LL;
	int64_t x264 = INT64_MAX;
	static int64_t t65 = INT64_MAX;

    t65 = (((x261&x262)==x263)|x264);

    if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x266 = INT32_MAX;
	int32_t t66 = 3217537;

    t66 = (((x265&x266)==x267)|x268);

    if (t66 != 237) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = 12412747416879LL;
	volatile int8_t x270 = INT8_MAX;
	int64_t x271 = -2131022212381870LL;
	volatile int64_t x272 = INT64_MAX;

    t67 = (((x269&x270)==x271)|x272);

    if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = INT16_MIN;
	static volatile int32_t x274 = INT32_MIN;
	static int16_t x275 = INT16_MAX;
	static uint32_t x276 = 7U;

    t68 = (((x273&x274)==x275)|x276);

    if (t68 != 7U) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = INT64_MIN;
	static volatile uint64_t x279 = 1429101758592952257LLU;
	int32_t t69 = 17647776;

    t69 = (((x277&x278)==x279)|x280);

    if (t69 != -3) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x281 = 3;
	uint32_t x282 = UINT32_MAX;

    t70 = (((x281&x282)==x283)|x284);

    if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = -1;
	uint8_t x287 = 67U;
	int16_t x288 = -1;
	int32_t t71 = 50253;

    t71 = (((x285&x286)==x287)|x288);

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x290 = INT32_MIN;
	int16_t x291 = -3;
	int32_t t72 = INT32_MIN;

    t72 = (((x289&x290)==x291)|x292);

    if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = -6638035022968577LL;
	int16_t x294 = INT16_MIN;
	int32_t x295 = -1;
	uint64_t x296 = UINT64_MAX;
	static uint64_t t73 = UINT64_MAX;

    t73 = (((x293&x294)==x295)|x296);

    if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x297 = 29419U;
	int64_t x299 = INT64_MIN;
	static uint8_t x300 = 29U;
	static int32_t t74 = -55;

    t74 = (((x297&x298)==x299)|x300);

    if (t74 != 29) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = -1LL;
	int32_t x302 = -120805079;
	int8_t x303 = INT8_MAX;
	int16_t x304 = INT16_MIN;
	int32_t t75 = 2749220;

    t75 = (((x301&x302)==x303)|x304);

    if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x306 = INT32_MIN;
	int32_t x308 = INT32_MIN;
	int32_t t76 = INT32_MIN;

    t76 = (((x305&x306)==x307)|x308);

    if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x309 = UINT16_MAX;
	volatile int8_t x310 = 0;
	volatile int32_t x311 = 485;
	static int64_t x312 = -21892633798LL;
	int64_t t77 = -998956738514LL;

    t77 = (((x309&x310)==x311)|x312);

    if (t77 != -21892633798LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x313 = UINT16_MAX;
	int8_t x314 = 3;
	int16_t x315 = -1;
	int16_t x316 = INT16_MAX;
	static int32_t t78 = 12800504;

    t78 = (((x313&x314)==x315)|x316);

    if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x317 = 4U;
	volatile int64_t x318 = INT64_MIN;
	int64_t x320 = INT64_MIN;
	int64_t t79 = INT64_MIN;

    t79 = (((x317&x318)==x319)|x320);

    if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x321 = 62U;
	uint64_t x322 = 986LLU;
	uint8_t x323 = UINT8_MAX;
	int64_t x324 = INT64_MIN;
	volatile int64_t t80 = INT64_MIN;

    t80 = (((x321&x322)==x323)|x324);

    if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x326 = INT8_MAX;
	static volatile int32_t x328 = 22;
	int32_t t81 = 54;

    t81 = (((x325&x326)==x327)|x328);

    if (t81 != 22) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x329 = -243;
	static volatile int16_t x330 = INT16_MIN;
	volatile uint8_t x331 = 1U;
	static volatile int32_t t82 = 27597853;

    t82 = (((x329&x330)==x331)|x332);

    if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = 1890329489857716209LL;
	int32_t x334 = -264559735;
	int64_t x335 = INT64_MAX;
	volatile int8_t x336 = 1;
	volatile int32_t t83 = 466784;

    t83 = (((x333&x334)==x335)|x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = INT8_MIN;
	int8_t x338 = INT8_MIN;
	int8_t x339 = 3;
	static int32_t x340 = INT32_MIN;

    t84 = (((x337&x338)==x339)|x340);

    if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = 182316810;
	int16_t x342 = INT16_MIN;
	static uint64_t x343 = 215476LLU;
	uint16_t x344 = 11582U;

    t85 = (((x341&x342)==x343)|x344);

    if (t85 != 11582) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x345 = 27713712LLU;
	int64_t x346 = -808LL;
	uint64_t x347 = 56603926LLU;
	int32_t x348 = -1;
	volatile int32_t t86 = 70010;

    t86 = (((x345&x346)==x347)|x348);

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = -227LL;
	volatile int64_t x350 = -1LL;
	static uint64_t x351 = 553676912LLU;
	volatile uint64_t x352 = 7317549144LLU;

    t87 = (((x349&x350)==x351)|x352);

    if (t87 != 7317549144LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = -1;
	uint8_t x354 = 2U;
	int16_t x355 = INT16_MIN;
	static int8_t x356 = INT8_MIN;
	int32_t t88 = -953;

    t88 = (((x353&x354)==x355)|x356);

    if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x358 = 1;
	volatile uint64_t x359 = 2624212786783494806LLU;
	int32_t t89 = -57;

    t89 = (((x357&x358)==x359)|x360);

    if (t89 != 8367551) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x361 = INT64_MIN;
	volatile int16_t x362 = INT16_MIN;
	int32_t x363 = INT32_MIN;
	static int32_t x364 = -1499165;

    t90 = (((x361&x362)==x363)|x364);

    if (t90 != -1499165) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x366 = INT32_MIN;
	int32_t x367 = -2215993;
	int8_t x368 = INT8_MIN;
	int32_t t91 = 6585;

    t91 = (((x365&x366)==x367)|x368);

    if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = -1;
	static volatile int64_t x370 = INT64_MIN;
	int64_t x371 = 0LL;
	static int32_t x372 = INT32_MIN;

    t92 = (((x369&x370)==x371)|x372);

    if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x373 = 430747516405632250LLU;
	static int16_t x374 = INT16_MIN;
	int64_t x376 = -1LL;
	static volatile int64_t t93 = -3642510876378600220LL;

    t93 = (((x373&x374)==x375)|x376);

    if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint8_t x377 = 26U;
	int8_t x378 = INT8_MIN;
	static uint32_t x379 = UINT32_MAX;
	volatile uint16_t x380 = 5521U;
	int32_t t94 = -1095;

    t94 = (((x377&x378)==x379)|x380);

    if (t94 != 5521) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x381 = INT64_MAX;
	volatile uint32_t x382 = 110181U;
	volatile uint32_t x383 = 5514U;
	volatile int32_t t95 = INT32_MIN;

    t95 = (((x381&x382)==x383)|x384);

    if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = INT32_MIN;
	volatile int32_t x387 = -7458;
	uint32_t x388 = 1034515703U;
	volatile uint32_t t96 = 1195U;

    t96 = (((x385&x386)==x387)|x388);

    if (t96 != 1034515703U) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = -1;
	int64_t x390 = INT64_MIN;
	int8_t x391 = -6;
	volatile int64_t x392 = INT64_MIN;
	int64_t t97 = INT64_MIN;

    t97 = (((x389&x390)==x391)|x392);

    if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x393 = -6638;

    t98 = (((x393&x394)==x395)|x396);

    if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x397 = INT32_MIN;
	int64_t x398 = INT64_MAX;
	int16_t x399 = INT16_MIN;
	static int16_t x400 = -126;
	int32_t t99 = -602796;

    t99 = (((x397&x398)==x399)|x400);

    if (t99 != -126) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x401 = UINT8_MAX;
	int16_t x402 = INT16_MAX;
	int8_t x404 = INT8_MAX;
	volatile int32_t t100 = 0;

    t100 = (((x401&x402)==x403)|x404);

    if (t100 != 127) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint64_t x405 = 12403919905739LLU;
	static int64_t x406 = -1LL;
	int16_t x407 = -1;
	int32_t x408 = -1;
	int32_t t101 = 2419;

    t101 = (((x405&x406)==x407)|x408);

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int64_t x410 = -1LL;
	int64_t x411 = INT64_MAX;
	int32_t x412 = -1;
	int32_t t102 = 59047872;

    t102 = (((x409&x410)==x411)|x412);

    if (t102 != -1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x413 = INT8_MIN;
	int32_t x414 = -1;
	int16_t x416 = INT16_MAX;
	int32_t t103 = -29804;

    t103 = (((x413&x414)==x415)|x416);

    if (t103 != 32767) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x417 = UINT8_MAX;
	uint32_t x418 = UINT32_MAX;

    t104 = (((x417&x418)==x419)|x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x421 = 1227U;
	static uint32_t x422 = 43184U;
	int64_t x423 = -1LL;
	int64_t x424 = INT64_MAX;
	volatile int64_t t105 = INT64_MAX;

    t105 = (((x421&x422)==x423)|x424);

    if (t105 != INT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = 13;
	volatile uint16_t x426 = UINT16_MAX;
	uint32_t x427 = UINT32_MAX;
	int16_t x428 = 0;

    t106 = (((x425&x426)==x427)|x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x429 = UINT16_MAX;
	static volatile uint64_t x430 = 17777179815123LLU;
	uint16_t x431 = 144U;
	int32_t t107 = 4525289;

    t107 = (((x429&x430)==x431)|x432);

    if (t107 != -494307407) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = INT8_MIN;
	uint32_t x434 = UINT32_MAX;
	int32_t x436 = 1103;
	volatile int32_t t108 = -231650;

    t108 = (((x433&x434)==x435)|x436);

    if (t108 != 1103) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = 263790653;
	static uint64_t x438 = 2040335847029LLU;
	uint64_t x439 = 3613803LLU;
	int16_t x440 = -483;
	int32_t t109 = -30997468;

    t109 = (((x437&x438)==x439)|x440);

    if (t109 != -483) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x443 = UINT8_MAX;
	volatile uint32_t t110 = 1U;

    t110 = (((x441&x442)==x443)|x444);

    if (t110 != 15U) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = -5;
	int32_t x446 = -14;
	int8_t x447 = 1;
	int16_t x448 = -1;
	int32_t t111 = -28704096;

    t111 = (((x445&x446)==x447)|x448);

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = -46;
	volatile uint32_t x450 = 52254045U;
	static volatile int32_t t112 = -1430;

    t112 = (((x449&x450)==x451)|x452);

    if (t112 != 1561) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x454 = -1;
	int32_t x455 = -36744775;
	uint64_t x456 = 519703LLU;
	uint64_t t113 = 93171LLU;

    t113 = (((x453&x454)==x455)|x456);

    if (t113 != 519703LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = 102U;
	int64_t x459 = INT64_MIN;
	uint64_t t114 = 4418024798143391LLU;

    t114 = (((x457&x458)==x459)|x460);

    if (t114 != 3259840LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x461 = INT16_MIN;
	static int32_t x464 = INT32_MAX;

    t115 = (((x461&x462)==x463)|x464);

    if (t115 != INT32_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x465 = UINT8_MAX;
	uint32_t x466 = UINT32_MAX;
	int64_t x467 = -1LL;
	uint32_t x468 = 1945U;
	static volatile uint32_t t116 = 13673387U;

    t116 = (((x465&x466)==x467)|x468);

    if (t116 != 1945U) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x472 = -2093218LL;
	volatile int64_t t117 = -699566LL;

    t117 = (((x469&x470)==x471)|x472);

    if (t117 != -2093218LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x473 = 5U;
	int32_t x475 = INT32_MAX;
	volatile uint32_t t118 = 0U;

    t118 = (((x473&x474)==x475)|x476);

    if (t118 != 20118833U) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = INT8_MIN;
	static uint16_t x478 = UINT16_MAX;
	uint8_t x479 = 1U;
	uint64_t x480 = 99225132528724LLU;
	uint64_t t119 = 186554LLU;

    t119 = (((x477&x478)==x479)|x480);

    if (t119 != 99225132528724LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x481 = 2106628167783692LLU;
	volatile int32_t t120 = 116;

    t120 = (((x481&x482)==x483)|x484);

    if (t120 != -128) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = 1U;
	static uint8_t x486 = 3U;
	static int32_t x487 = INT32_MAX;
	static int8_t x488 = INT8_MIN;
	volatile int32_t t121 = 2550;

    t121 = (((x485&x486)==x487)|x488);

    if (t121 != -128) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x490 = -1;
	int32_t x491 = -1;
	static uint64_t x492 = 1863LLU;
	volatile uint64_t t122 = 14565841856LLU;

    t122 = (((x489&x490)==x491)|x492);

    if (t122 != 1863LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = 6976682;
	static volatile int8_t x495 = INT8_MAX;
	int16_t x496 = INT16_MIN;
	static int32_t t123 = 766774;

    t123 = (((x493&x494)==x495)|x496);

    if (t123 != -32768) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = 198126LL;
	static int16_t x499 = INT16_MIN;
	static int64_t x500 = -1LL;
	volatile int64_t t124 = -2270052959196502861LL;

    t124 = (((x497&x498)==x499)|x500);

    if (t124 != -1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x502 = UINT8_MAX;
	int8_t x503 = INT8_MAX;
	int8_t x504 = INT8_MIN;
	static int32_t t125 = 20864680;

    t125 = (((x501&x502)==x503)|x504);

    if (t125 != -128) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x505 = INT8_MAX;
	static uint32_t x506 = 10U;
	static int32_t x507 = INT32_MIN;
	volatile uint32_t x508 = 83958996U;
	uint32_t t126 = 74736471U;

    t126 = (((x505&x506)==x507)|x508);

    if (t126 != 83958996U) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x510 = -1;
	int64_t x511 = 2053101786259LL;
	int16_t x512 = -1;

    t127 = (((x509&x510)==x511)|x512);

    if (t127 != -1) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x515 = 5U;
	static uint8_t x516 = UINT8_MAX;
	static volatile int32_t t128 = 126;

    t128 = (((x513&x514)==x515)|x516);

    if (t128 != 255) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x517 = 986023197U;
	volatile uint16_t x518 = 23114U;
	volatile int16_t x519 = INT16_MIN;
	static int32_t t129 = 326156;

    t129 = (((x517&x518)==x519)|x520);

    if (t129 != -128) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x522 = -2018LL;
	volatile uint32_t x524 = 9636396U;
	uint32_t t130 = 139954U;

    t130 = (((x521&x522)==x523)|x524);

    if (t130 != 9636396U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x525 = UINT16_MAX;
	int64_t x526 = -1LL;
	int16_t x527 = INT16_MAX;
	volatile int32_t x528 = 12674211;
	int32_t t131 = 19;

    t131 = (((x525&x526)==x527)|x528);

    if (t131 != 12674211) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x529 = 83U;
	int32_t x530 = 10140373;
	volatile int32_t t132 = -5070;

    t132 = (((x529&x530)==x531)|x532);

    if (t132 != 105) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x533 = 3918LLU;
	static int64_t x534 = INT64_MIN;
	static int32_t x535 = -10198773;
	static volatile int32_t t133 = 2;

    t133 = (((x533&x534)==x535)|x536);

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x538 = -1LL;
	static int8_t x539 = -1;
	static int64_t x540 = 2247LL;
	int64_t t134 = -10090LL;

    t134 = (((x537&x538)==x539)|x540);

    if (t134 != 2247LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x541 = UINT64_MAX;
	volatile uint64_t x542 = 45LLU;
	int32_t x543 = INT32_MIN;
	static int16_t x544 = 5704;
	int32_t t135 = 18727;

    t135 = (((x541&x542)==x543)|x544);

    if (t135 != 5704) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x546 = 65U;
	int8_t x547 = INT8_MAX;
	int8_t x548 = 6;
	int32_t t136 = 50;

    t136 = (((x545&x546)==x547)|x548);

    if (t136 != 6) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x550 = INT8_MIN;
	int64_t x551 = INT64_MAX;
	uint16_t x552 = 31U;
	static volatile int32_t t137 = -2;

    t137 = (((x549&x550)==x551)|x552);

    if (t137 != 31) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x553 = INT8_MIN;
	int32_t x554 = INT32_MIN;
	int16_t x556 = INT16_MIN;
	int32_t t138 = 33465184;

    t138 = (((x553&x554)==x555)|x556);

    if (t138 != -32768) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x558 = UINT16_MAX;
	static int8_t x560 = INT8_MIN;
	int32_t t139 = -21;

    t139 = (((x557&x558)==x559)|x560);

    if (t139 != -128) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = INT8_MAX;
	int64_t x562 = 44887151LL;
	volatile int32_t x564 = -1;
	volatile int32_t t140 = -489251210;

    t140 = (((x561&x562)==x563)|x564);

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x565 = 1096882528429LLU;
	int64_t x566 = INT64_MAX;
	uint64_t x567 = 7590LLU;
	int64_t x568 = 0LL;
	static int64_t t141 = 4294254741217057775LL;

    t141 = (((x565&x566)==x567)|x568);

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x570 = INT8_MIN;
	static volatile uint16_t x571 = 6000U;
	int8_t x572 = -1;
	static int32_t t142 = -25168;

    t142 = (((x569&x570)==x571)|x572);

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = -3;
	static int8_t x574 = INT8_MIN;
	volatile int32_t t143 = -8285;

    t143 = (((x573&x574)==x575)|x576);

    if (t143 != 3679) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x579 = INT16_MIN;
	uint16_t x580 = 15084U;
	volatile int32_t t144 = 6495461;

    t144 = (((x577&x578)==x579)|x580);

    if (t144 != 15084) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = 55;
	int8_t x582 = INT8_MIN;
	uint16_t x583 = 28U;
	int64_t x584 = 109955769147839599LL;
	volatile int64_t t145 = 8LL;

    t145 = (((x581&x582)==x583)|x584);

    if (t145 != 109955769147839599LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = INT64_MAX;
	volatile uint32_t x586 = 3U;
	static uint16_t x588 = 174U;

    t146 = (((x585&x586)==x587)|x588);

    if (t146 != 175) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = INT16_MAX;
	int8_t x590 = 11;
	volatile int32_t t147 = 837464124;

    t147 = (((x589&x590)==x591)|x592);

    if (t147 != 1550) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x594 = 1212086801529374810LLU;
	int16_t x595 = INT16_MIN;
	uint64_t x596 = 9242LLU;
	volatile uint64_t t148 = 1003314473LLU;

    t148 = (((x593&x594)==x595)|x596);

    if (t148 != 9242LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x597 = 1U;
	static int32_t x598 = INT32_MAX;
	int64_t x600 = INT64_MIN;
	static int64_t t149 = INT64_MIN;

    t149 = (((x597&x598)==x599)|x600);

    if (t149 != INT64_MIN) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x601 = UINT32_MAX;
	uint16_t x602 = 0U;
	int32_t x603 = INT32_MAX;
	volatile uint16_t x604 = 206U;
	volatile int32_t t150 = -87733;

    t150 = (((x601&x602)==x603)|x604);

    if (t150 != 206) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x606 = 305491;
	int8_t x607 = INT8_MIN;
	int64_t x608 = INT64_MIN;
	int64_t t151 = INT64_MIN;

    t151 = (((x605&x606)==x607)|x608);

    if (t151 != INT64_MIN) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x609 = INT8_MIN;
	int16_t x610 = -1;
	int32_t x612 = -1;
	volatile int32_t t152 = -246223;

    t152 = (((x609&x610)==x611)|x612);

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x613 = 6818695U;
	int64_t x614 = -1LL;
	volatile int32_t t153 = 64753407;

    t153 = (((x613&x614)==x615)|x616);

    if (t153 != 343) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x617 = 22004;
	volatile int16_t x620 = INT16_MIN;
	int32_t t154 = -24436734;

    t154 = (((x617&x618)==x619)|x620);

    if (t154 != -32768) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x621 = -14;
	static uint16_t x622 = 256U;
	int16_t x623 = INT16_MIN;
	static int8_t x624 = -1;
	int32_t t155 = -35;

    t155 = (((x621&x622)==x623)|x624);

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x625 = 1789U;
	int32_t x626 = INT32_MIN;
	int32_t x627 = 7836270;
	volatile uint8_t x628 = 4U;
	int32_t t156 = -28;

    t156 = (((x625&x626)==x627)|x628);

    if (t156 != 4) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x629 = INT8_MIN;
	int16_t x631 = INT16_MIN;

    t157 = (((x629&x630)==x631)|x632);

    if (t157 != 255) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x633 = 123U;
	uint16_t x634 = 2675U;
	int64_t x635 = INT64_MIN;
	int16_t x636 = INT16_MIN;
	int32_t t158 = -1154098;

    t158 = (((x633&x634)==x635)|x636);

    if (t158 != -32768) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = -5816;
	static int32_t x638 = INT32_MAX;
	int32_t x640 = INT32_MIN;

    t159 = (((x637&x638)==x639)|x640);

    if (t159 != INT32_MIN) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = INT16_MIN;
	static uint16_t x643 = 1564U;
	uint16_t x644 = 1112U;
	int32_t t160 = -8;

    t160 = (((x641&x642)==x643)|x644);

    if (t160 != 1112) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x645 = 1317823902091LLU;
	int16_t x646 = INT16_MIN;
	int8_t x647 = -13;
	uint32_t t161 = UINT32_MAX;

    t161 = (((x645&x646)==x647)|x648);

    if (t161 != UINT32_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x649 = -1LL;
	uint32_t x650 = 146U;
	int8_t x651 = 0;
	int32_t x652 = INT32_MIN;
	int32_t t162 = INT32_MIN;

    t162 = (((x649&x650)==x651)|x652);

    if (t162 != INT32_MIN) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = INT8_MIN;
	volatile int16_t x654 = INT16_MIN;
	static int32_t x655 = INT32_MAX;
	int16_t x656 = -1;
	static int32_t t163 = 66;

    t163 = (((x653&x654)==x655)|x656);

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x658 = INT64_MIN;
	int8_t x659 = INT8_MIN;
	static uint32_t x660 = UINT32_MAX;
	uint32_t t164 = UINT32_MAX;

    t164 = (((x657&x658)==x659)|x660);

    if (t164 != UINT32_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int32_t x661 = INT32_MIN;
	int32_t x662 = INT32_MIN;
	static uint32_t x663 = 55861U;
	static int32_t x664 = INT32_MIN;
	volatile int32_t t165 = INT32_MIN;

    t165 = (((x661&x662)==x663)|x664);

    if (t165 != INT32_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = -1;
	int8_t x666 = -2;
	int64_t x667 = 4024LL;
	static int32_t x668 = INT32_MIN;
	int32_t t166 = INT32_MIN;

    t166 = (((x665&x666)==x667)|x668);

    if (t166 != INT32_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x669 = 11241U;
	int16_t x670 = INT16_MIN;
	int16_t x671 = 1134;
	uint8_t x672 = 0U;
	static volatile int32_t t167 = -776487178;

    t167 = (((x669&x670)==x671)|x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x673 = UINT8_MAX;
	static int16_t x674 = -1;
	uint8_t x675 = 78U;
	int64_t t168 = INT64_MIN;

    t168 = (((x673&x674)==x675)|x676);

    if (t168 != INT64_MIN) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x677 = -11554;
	int32_t x678 = INT32_MAX;
	volatile uint8_t x679 = 33U;
	uint8_t x680 = 19U;
	static volatile int32_t t169 = 1845817;

    t169 = (((x677&x678)==x679)|x680);

    if (t169 != 19) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = INT16_MIN;
	int8_t x682 = INT8_MIN;
	uint16_t x683 = 7786U;
	static volatile int32_t x684 = INT32_MAX;
	int32_t t170 = INT32_MAX;

    t170 = (((x681&x682)==x683)|x684);

    if (t170 != INT32_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint8_t x685 = 11U;
	int64_t x686 = 93228LL;
	int64_t x687 = -1LL;
	static uint16_t x688 = UINT16_MAX;
	volatile int32_t t171 = 34;

    t171 = (((x685&x686)==x687)|x688);

    if (t171 != 65535) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = -1;
	volatile int64_t x690 = -1LL;
	int16_t x691 = INT16_MIN;

    t172 = (((x689&x690)==x691)|x692);

    if (t172 != 21825425225056927LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x694 = INT32_MIN;
	volatile int32_t x695 = INT32_MIN;
	uint32_t x696 = 5U;
	uint32_t t173 = 447526311U;

    t173 = (((x693&x694)==x695)|x696);

    if (t173 != 5U) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x698 = -23153525381LL;
	uint32_t x699 = UINT32_MAX;
	volatile int64_t x700 = -1LL;
	volatile int64_t t174 = -12856251365LL;

    t174 = (((x697&x698)==x699)|x700);

    if (t174 != -1LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x701 = 269740458159985LLU;
	uint16_t x702 = 1U;
	static uint32_t x703 = 62721U;
	int32_t x704 = INT32_MIN;

    t175 = (((x701&x702)==x703)|x704);

    if (t175 != INT32_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x705 = UINT16_MAX;
	int64_t x707 = INT64_MIN;
	static int16_t x708 = 2536;
	volatile int32_t t176 = 1170616;

    t176 = (((x705&x706)==x707)|x708);

    if (t176 != 2536) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = INT8_MAX;
	uint32_t x711 = 2388368U;
	volatile int32_t x712 = INT32_MIN;
	static volatile int32_t t177 = INT32_MIN;

    t177 = (((x709&x710)==x711)|x712);

    if (t177 != INT32_MIN) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x714 = -1;
	int32_t x715 = -476403;
	static volatile int8_t x716 = -1;
	volatile int32_t t178 = -3829;

    t178 = (((x713&x714)==x715)|x716);

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x717 = 8955862004773959LLU;
	static int64_t x718 = -1LL;
	volatile int64_t x720 = INT64_MIN;
	volatile int64_t t179 = INT64_MIN;

    t179 = (((x717&x718)==x719)|x720);

    if (t179 != INT64_MIN) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = 1230LLU;
	volatile int64_t x722 = INT64_MIN;
	int8_t x723 = INT8_MIN;
	static int8_t x724 = INT8_MIN;

    t180 = (((x721&x722)==x723)|x724);

    if (t180 != -128) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x725 = INT16_MAX;
	static int32_t x726 = -30730;
	uint16_t x727 = 1U;
	int16_t x728 = INT16_MIN;
	volatile int32_t t181 = -691;

    t181 = (((x725&x726)==x727)|x728);

    if (t181 != -32768) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x729 = 274U;
	int8_t x730 = 0;
	static int16_t x731 = -3035;
	uint8_t x732 = UINT8_MAX;
	static volatile int32_t t182 = -412;

    t182 = (((x729&x730)==x731)|x732);

    if (t182 != 255) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int64_t x733 = INT64_MIN;
	uint32_t x734 = 4770U;
	volatile int32_t x735 = INT32_MIN;
	uint8_t x736 = 1U;

    t183 = (((x733&x734)==x735)|x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = -1LL;
	uint64_t x738 = 292980251040700119LLU;
	int16_t x740 = -1;
	volatile int32_t t184 = -85730;

    t184 = (((x737&x738)==x739)|x740);

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = INT8_MAX;
	static int8_t x742 = 14;
	uint32_t x743 = 3785U;
	volatile int8_t x744 = INT8_MIN;
	volatile int32_t t185 = 1;

    t185 = (((x741&x742)==x743)|x744);

    if (t185 != -128) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x745 = 216U;
	int64_t x746 = INT64_MIN;
	int16_t x747 = INT16_MIN;
	int64_t x748 = INT64_MIN;

    t186 = (((x745&x746)==x747)|x748);

    if (t186 != INT64_MIN) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = -1;
	static int8_t x750 = INT8_MAX;
	volatile uint64_t x751 = UINT64_MAX;
	volatile int64_t x752 = INT64_MAX;
	volatile int64_t t187 = INT64_MAX;

    t187 = (((x749&x750)==x751)|x752);

    if (t187 != INT64_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = 1448392959946LL;
	volatile uint16_t x754 = UINT16_MAX;
	uint32_t x755 = 409794031U;
	volatile int8_t x756 = INT8_MIN;

    t188 = (((x753&x754)==x755)|x756);

    if (t188 != -128) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x757 = INT8_MAX;
	int32_t x758 = INT32_MAX;
	static int16_t x759 = INT16_MIN;
	volatile int32_t x760 = INT32_MIN;
	volatile int32_t t189 = INT32_MIN;

    t189 = (((x757&x758)==x759)|x760);

    if (t189 != INT32_MIN) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x761 = 9536251535LLU;
	int32_t x762 = INT32_MIN;

    t190 = (((x761&x762)==x763)|x764);

    if (t190 != 56) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = INT8_MAX;
	uint16_t x766 = UINT16_MAX;
	volatile int32_t x767 = 2102;
	volatile int16_t x768 = INT16_MIN;
	int32_t t191 = -1;

    t191 = (((x765&x766)==x767)|x768);

    if (t191 != -32768) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = -1LL;
	int32_t x771 = INT32_MIN;
	int32_t t192 = INT32_MIN;

    t192 = (((x769&x770)==x771)|x772);

    if (t192 != INT32_MIN) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = INT16_MAX;
	uint64_t x774 = 446475611676LLU;
	int32_t x775 = INT32_MIN;
	int64_t x776 = -1620LL;
	volatile int64_t t193 = -16LL;

    t193 = (((x773&x774)==x775)|x776);

    if (t193 != -1620LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x778 = 1408755LL;
	static uint32_t x779 = 1761U;
	static uint64_t x780 = 6520825828448718LLU;
	uint64_t t194 = 3LLU;

    t194 = (((x777&x778)==x779)|x780);

    if (t194 != 6520825828448718LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = -1LL;
	static volatile int64_t x782 = INT64_MIN;
	volatile uint16_t x784 = 444U;
	static int32_t t195 = 99;

    t195 = (((x781&x782)==x783)|x784);

    if (t195 != 444) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = INT8_MIN;
	static int16_t x786 = INT16_MAX;
	uint16_t x788 = 803U;
	int32_t t196 = -222429442;

    t196 = (((x785&x786)==x787)|x788);

    if (t196 != 803) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = 1379522LL;
	uint8_t x790 = 11U;
	int32_t x791 = INT32_MIN;
	volatile int64_t x792 = INT64_MIN;
	int64_t t197 = INT64_MIN;

    t197 = (((x789&x790)==x791)|x792);

    if (t197 != INT64_MIN) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x794 = 323370U;
	static int8_t x795 = 1;
	static volatile int64_t x796 = -15552193367LL;
	static int64_t t198 = 269608698848808LL;

    t198 = (((x793&x794)==x795)|x796);

    if (t198 != -15552193367LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = INT32_MAX;
	volatile uint16_t x798 = 13745U;
	uint64_t x800 = 0LLU;

    t199 = (((x797&x798)==x799)|x800);

    if (t199 != 0LLU) { NG(); } else { ; }
	
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

