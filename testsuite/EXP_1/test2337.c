
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

int16_t x3 = -1;
int16_t x4 = -1;
int16_t x17 = INT16_MAX;
int64_t x24 = -1LL;
int16_t x27 = 1;
int16_t x33 = INT16_MIN;
int8_t x39 = -27;
volatile int32_t t10 = 1976;
volatile uint32_t t11 = 433U;
volatile int8_t x50 = -1;
int32_t t13 = -5226523;
static volatile int32_t t14 = 1545;
static int16_t x62 = 1700;
int64_t x64 = INT64_MAX;
static uint8_t x68 = 58U;
volatile int64_t x69 = 2436334969LL;
static int8_t x73 = INT8_MIN;
uint64_t x83 = 212384112804651935LLU;
uint32_t x92 = 7U;
volatile int8_t x93 = 0;
int16_t x97 = INT16_MIN;
int8_t x105 = INT8_MAX;
volatile int8_t x107 = INT8_MIN;
int32_t x109 = INT32_MIN;
static int64_t x112 = -1LL;
static int64_t x121 = INT64_MIN;
int32_t x123 = INT32_MIN;
int32_t x124 = -1;
int16_t x126 = 14163;
static int16_t x132 = INT16_MAX;
static int8_t x141 = 0;
volatile uint32_t t35 = UINT32_MAX;
uint32_t x150 = 1889345U;
int16_t x151 = INT16_MIN;
int8_t x155 = 19;
volatile uint64_t t38 = UINT64_MAX;
volatile uint32_t x159 = 125588889U;
int32_t x160 = -1;
static int64_t x164 = INT64_MIN;
uint64_t x165 = 49359LLU;
int32_t x166 = INT32_MAX;
static int64_t x169 = INT64_MAX;
uint32_t x170 = 0U;
int64_t t42 = INT64_MIN;
int64_t x177 = -1LL;
int64_t x183 = INT64_MAX;
int64_t t45 = -3916LL;
int16_t x186 = INT16_MIN;
volatile int32_t x187 = INT32_MIN;
uint64_t x189 = 15941LLU;
int16_t x192 = 14396;
uint64_t t47 = 13087752018LLU;
uint16_t x194 = UINT16_MAX;
static uint8_t x198 = 31U;
static int8_t x201 = INT8_MIN;
static int32_t x203 = INT32_MIN;
volatile uint64_t x205 = 255064LLU;
static uint32_t x206 = UINT32_MAX;
uint8_t x207 = 15U;
uint64_t t51 = 5203971855776744816LLU;
int64_t x213 = -1LL;
int32_t x215 = INT32_MIN;
static volatile uint32_t x216 = 501843047U;
int8_t x230 = INT8_MIN;
int8_t x233 = 34;
uint32_t t58 = UINT32_MAX;
uint64_t x238 = UINT64_MAX;
uint8_t x241 = 7U;
int64_t x247 = 850339LL;
volatile int32_t x250 = -36;
volatile uint64_t t64 = 695324867222997239LLU;
int8_t x262 = INT8_MAX;
volatile int64_t t65 = 2437906602352704LL;
static volatile int64_t x269 = -1LL;
int32_t x272 = INT32_MAX;
static volatile int64_t t67 = -240099LL;
int8_t x273 = -1;
uint16_t x276 = UINT16_MAX;
uint64_t t68 = UINT64_MAX;
uint8_t x277 = 7U;
static volatile int32_t x283 = -46489;
static uint8_t x284 = 54U;
static int16_t x291 = INT16_MAX;
volatile int32_t x294 = INT32_MAX;
int8_t x299 = INT8_MIN;
static uint32_t x300 = 202007633U;
int8_t x302 = -1;
uint16_t x306 = 0U;
int32_t x308 = 2137;
int64_t x323 = INT64_MAX;
int8_t x325 = INT8_MIN;
int32_t t82 = 1;
int64_t x336 = 1898083240132938LL;
int64_t t83 = -1057114983273503102LL;
static int32_t x339 = INT32_MIN;
int64_t x340 = -1946828842809LL;
int16_t x355 = INT16_MIN;
static int16_t x357 = -9;
int16_t x362 = INT16_MAX;
int8_t x368 = INT8_MAX;
static volatile int64_t t91 = 10LL;
static uint64_t x370 = UINT64_MAX;
static uint64_t x382 = 15765169171480LLU;
volatile uint64_t x385 = 17498024381034LLU;
uint64_t x388 = UINT64_MAX;
uint64_t t96 = UINT64_MAX;
int16_t x393 = INT16_MAX;
int8_t x402 = 0;
int64_t t100 = 22428267714LL;
int16_t x407 = INT16_MIN;
uint32_t x413 = 696058608U;
int64_t t103 = -1408858597117039681LL;
uint16_t x425 = 10040U;
int16_t x426 = -14716;
volatile uint32_t x428 = 1440442U;
static volatile int32_t t108 = -3592;
static uint8_t x437 = UINT8_MAX;
static int16_t x441 = INT16_MAX;
int8_t x445 = -13;
uint32_t x446 = UINT32_MAX;
int64_t x449 = -1LL;
uint8_t x460 = UINT8_MAX;
int16_t x461 = 205;
volatile int16_t x467 = 0;
uint8_t x469 = UINT8_MAX;
volatile int64_t x472 = -1LL;
static uint32_t x477 = 150U;
static volatile uint32_t x487 = UINT32_MAX;
volatile int64_t x489 = INT64_MIN;
static volatile int64_t t122 = 60941LL;
uint32_t t123 = 562965362U;
uint16_t x506 = 4779U;
static int64_t t127 = -528941503102LL;
int8_t x520 = INT8_MIN;
uint16_t x526 = UINT16_MAX;
volatile uint32_t t131 = UINT32_MAX;
volatile int8_t x532 = INT8_MAX;
uint32_t t133 = UINT32_MAX;
static int8_t x545 = INT8_MIN;
int8_t x546 = -21;
static int32_t x552 = INT32_MIN;
uint8_t x578 = 41U;
int64_t t144 = -569521LL;
uint64_t x583 = 105LLU;
uint64_t t145 = UINT64_MAX;
uint64_t x586 = 1049411230615LLU;
volatile uint32_t x593 = UINT32_MAX;
int8_t x596 = 10;
int16_t x599 = -3;
uint64_t x604 = 5LLU;
int16_t x627 = -813;
volatile uint64_t x630 = 4171815LLU;
int8_t x632 = -7;
uint64_t t157 = UINT64_MAX;
int8_t x633 = INT8_MIN;
int64_t t159 = 157198LL;
int64_t x645 = INT64_MIN;
volatile uint32_t x654 = 60626287U;
int8_t x659 = 1;
int8_t x660 = 1;
uint32_t x662 = 15923917U;
volatile int8_t x664 = 0;
int64_t x667 = -505375658LL;
static uint8_t x670 = 0U;
int8_t x671 = -1;
static int64_t x674 = INT64_MIN;
int16_t x676 = INT16_MIN;
volatile int64_t t169 = -670301310433883LL;
uint8_t x688 = 9U;
uint64_t x693 = 378993286618LLU;
volatile uint8_t x696 = UINT8_MAX;
volatile int64_t t174 = -312302LL;
uint64_t t175 = UINT64_MAX;
uint8_t x707 = 127U;
int16_t x709 = -15;
static volatile int16_t x723 = INT16_MIN;
static int16_t x728 = INT16_MIN;
volatile int32_t t184 = 1296;
int32_t x746 = 28148;
uint32_t x747 = 487877U;
uint32_t x749 = 197U;
uint64_t x756 = 2226958186928209448LLU;
uint8_t x757 = 0U;
static uint64_t x760 = 448953LLU;
volatile int32_t t190 = -6;
volatile int64_t x768 = INT64_MIN;
static int16_t x772 = -6997;
static int8_t x774 = -1;
volatile uint16_t x776 = 5U;
int16_t x780 = -1;
int16_t x788 = INT16_MAX;
int64_t x790 = INT64_MIN;
uint64_t t198 = UINT64_MAX;
int32_t x799 = INT32_MIN;


void f0(void) {
    	volatile int8_t x1 = INT8_MIN;
	volatile int16_t x2 = 12;
	static int32_t t0 = -1037;

    t0 = (((x1&x2)|x3)|x4);

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -1;
	uint32_t x6 = 250971U;
	int32_t x7 = -1;
	volatile int8_t x8 = INT8_MAX;
	volatile uint32_t t1 = UINT32_MAX;

    t1 = (((x5&x6)|x7)|x8);

    if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint16_t x9 = UINT16_MAX;
	uint16_t x10 = 2U;
	int8_t x11 = -1;
	uint8_t x12 = 45U;
	volatile int32_t t2 = 41838454;

    t2 = (((x9&x10)|x11)|x12);

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -1LL;
	int32_t x14 = -1;
	volatile uint64_t x15 = 9466LLU;
	int16_t x16 = 2205;
	uint64_t t3 = UINT64_MAX;

    t3 = (((x13&x14)|x15)|x16);

    if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x18 = UINT8_MAX;
	int16_t x19 = INT16_MIN;
	int32_t x20 = 3827;
	volatile int32_t t4 = 11128236;

    t4 = (((x17&x18)|x19)|x20);

    if (t4 != -28929) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = 23354374008840LL;
	int32_t x22 = INT32_MIN;
	int8_t x23 = 1;
	volatile int64_t t5 = -743338375LL;

    t5 = (((x21&x22)|x23)|x24);

    if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int32_t x25 = INT32_MAX;
	uint16_t x26 = 1U;
	int64_t x28 = -287408078375852382LL;
	static volatile int64_t t6 = -500471454607LL;

    t6 = (((x25&x26)|x27)|x28);

    if (t6 != -287408078375852381LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x29 = UINT8_MAX;
	static uint64_t x30 = UINT64_MAX;
	uint32_t x31 = 242U;
	volatile uint32_t x32 = UINT32_MAX;
	static uint64_t t7 = 81557315025LLU;

    t7 = (((x29&x30)|x31)|x32);

    if (t7 != 4294967295LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x34 = INT16_MIN;
	uint32_t x35 = 614301392U;
	int8_t x36 = 3;
	static volatile uint32_t t8 = 7198079U;

    t8 = (((x33&x34)|x35)|x36);

    if (t8 != 4294966995U) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = 339628464;
	uint16_t x38 = UINT16_MAX;
	int64_t x40 = INT64_MAX;
	volatile int64_t t9 = 1995764047981LL;

    t9 = (((x37&x38)|x39)|x40);

    if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x41 = 34;
	int8_t x42 = INT8_MAX;
	int32_t x43 = 8359558;
	int32_t x44 = 6817030;

    t10 = (((x41&x42)|x43)|x44);

    if (t10 != 8359846) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -1;
	static volatile uint16_t x46 = UINT16_MAX;
	static uint32_t x47 = 55U;
	int8_t x48 = INT8_MAX;

    t11 = (((x45&x46)|x47)|x48);

    if (t11 != 65535U) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x49 = -1;
	uint16_t x51 = 17U;
	int32_t x52 = INT32_MAX;
	volatile int32_t t12 = -2393;

    t12 = (((x49&x50)|x51)|x52);

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MIN;
	uint16_t x54 = 5903U;
	int16_t x55 = 1687;
	int8_t x56 = 4;

    t13 = (((x53&x54)|x55)|x56);

    if (t13 != 1687) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x57 = INT8_MIN;
	static int8_t x58 = -1;
	uint16_t x59 = UINT16_MAX;
	int16_t x60 = -1;

    t14 = (((x57&x58)|x59)|x60);

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 501U;
	int16_t x63 = -1;
	static volatile int64_t t15 = INT64_MAX;

    t15 = (((x61&x62)|x63)|x64);

    if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MIN;
	static int64_t x66 = 10784560939974389LL;
	static int32_t x67 = -10;
	static volatile int64_t t16 = -384LL;

    t16 = (((x65&x66)|x67)|x68);

    if (t16 != -2LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x70 = INT16_MAX;
	static int32_t x71 = INT32_MAX;
	uint16_t x72 = 71U;
	volatile int64_t t17 = 1812694776323971LL;

    t17 = (((x69&x70)|x71)|x72);

    if (t17 != 2147483647LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x74 = 0U;
	volatile int8_t x75 = INT8_MAX;
	int32_t x76 = -414750;
	volatile int32_t t18 = -275250;

    t18 = (((x73&x74)|x75)|x76);

    if (t18 != -414721) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MIN;
	volatile int64_t x78 = INT64_MIN;
	static int16_t x79 = INT16_MIN;
	uint64_t x80 = UINT64_MAX;
	uint64_t t19 = UINT64_MAX;

    t19 = (((x77&x78)|x79)|x80);

    if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MIN;
	static uint32_t x82 = UINT32_MAX;
	volatile uint64_t x84 = 95087651317040LLU;
	static volatile uint64_t t20 = 1388608LLU;

    t20 = (((x81&x82)|x83)|x84);

    if (t20 != 212476756597139391LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = INT32_MAX;
	uint16_t x86 = 27839U;
	volatile int16_t x87 = -1;
	uint8_t x88 = 38U;
	volatile int32_t t21 = 408;

    t21 = (((x85&x86)|x87)|x88);

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MIN;
	int16_t x90 = -110;
	static int32_t x91 = INT32_MAX;
	uint32_t t22 = UINT32_MAX;

    t22 = (((x89&x90)|x91)|x92);

    if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x94 = INT32_MAX;
	volatile int8_t x95 = INT8_MIN;
	int8_t x96 = INT8_MIN;
	int32_t t23 = 245;

    t23 = (((x93&x94)|x95)|x96);

    if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x98 = -1;
	uint8_t x99 = 58U;
	int8_t x100 = INT8_MIN;
	volatile int32_t t24 = -12658228;

    t24 = (((x97&x98)|x99)|x100);

    if (t24 != -70) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x101 = 12U;
	int64_t x102 = -1LL;
	int8_t x103 = -3;
	int8_t x104 = -1;
	int64_t t25 = -70189432722344829LL;

    t25 = (((x101&x102)|x103)|x104);

    if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x106 = INT16_MIN;
	int8_t x108 = 1;
	volatile int32_t t26 = 0;

    t26 = (((x105&x106)|x107)|x108);

    if (t26 != -127) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x110 = -1LL;
	int8_t x111 = 0;
	volatile int64_t t27 = 4216LL;

    t27 = (((x109&x110)|x111)|x112);

    if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = 3U;
	int32_t x114 = -26;
	int8_t x115 = INT8_MAX;
	int16_t x116 = INT16_MIN;
	volatile int32_t t28 = 471714;

    t28 = (((x113&x114)|x115)|x116);

    if (t28 != -32641) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x117 = UINT64_MAX;
	int16_t x118 = INT16_MIN;
	volatile int64_t x119 = INT64_MIN;
	int32_t x120 = INT32_MAX;
	static volatile uint64_t t29 = UINT64_MAX;

    t29 = (((x117&x118)|x119)|x120);

    if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x122 = 452257453482503460LLU;
	static uint64_t t30 = UINT64_MAX;

    t30 = (((x121&x122)|x123)|x124);

    if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x125 = 107U;
	int64_t x127 = -1LL;
	int8_t x128 = INT8_MIN;
	int64_t t31 = 926LL;

    t31 = (((x125&x126)|x127)|x128);

    if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x129 = -1;
	static int32_t x130 = -1479934;
	int32_t x131 = INT32_MAX;
	int32_t t32 = 2;

    t32 = (((x129&x130)|x131)|x132);

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MIN;
	static int64_t x134 = INT64_MAX;
	volatile int8_t x135 = 1;
	int16_t x136 = INT16_MIN;
	int64_t t33 = -1334LL;

    t33 = (((x133&x134)|x135)|x136);

    if (t33 != -32767LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint32_t x137 = 2U;
	int8_t x138 = INT8_MIN;
	volatile int64_t x139 = INT64_MIN;
	uint64_t x140 = 79839LLU;
	uint64_t t34 = 28720505270252LLU;

    t34 = (((x137&x138)|x139)|x140);

    if (t34 != 9223372036854855647LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x142 = 6;
	static volatile int32_t x143 = -1;
	volatile uint32_t x144 = 4155993U;

    t35 = (((x141&x142)|x143)|x144);

    if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = INT8_MIN;
	int64_t x146 = INT64_MIN;
	volatile int8_t x147 = INT8_MIN;
	uint8_t x148 = 25U;
	volatile int64_t t36 = 154920282484LL;

    t36 = (((x145&x146)|x147)|x148);

    if (t36 != -103LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MIN;
	uint64_t x152 = 19320761LLU;
	volatile uint64_t t37 = 39462932709LLU;

    t37 = (((x149&x150)|x151)|x152);

    if (t37 != 4294954937LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = INT64_MIN;
	uint64_t x154 = 1095731586425780LLU;
	volatile int32_t x156 = -1;

    t38 = (((x153&x154)|x155)|x156);

    if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x157 = 26157612U;
	int64_t x158 = -7924796LL;
	volatile int64_t t39 = 984LL;

    t39 = (((x157&x158)|x159)|x160);

    if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = -4042493024LL;
	volatile int32_t x162 = 15715104;
	int32_t x163 = INT32_MIN;
	int64_t t40 = -24255977110LL;

    t40 = (((x161&x162)|x163)|x164);

    if (t40 != -2146680032LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x167 = 407U;
	uint16_t x168 = UINT16_MAX;
	uint64_t t41 = 11516LLU;

    t41 = (((x165&x166)|x167)|x168);

    if (t41 != 65535LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x171 = INT64_MIN;
	int64_t x172 = INT64_MIN;

    t42 = (((x169&x170)|x171)|x172);

    if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x173 = INT32_MIN;
	uint32_t x174 = 15U;
	int32_t x175 = INT32_MAX;
	static int32_t x176 = 1648;
	static volatile uint32_t t43 = 749731788U;

    t43 = (((x173&x174)|x175)|x176);

    if (t43 != 2147483647U) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x178 = -1LL;
	static volatile int8_t x179 = -1;
	int32_t x180 = INT32_MAX;
	int64_t t44 = -823475LL;

    t44 = (((x177&x178)|x179)|x180);

    if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x181 = 1;
	volatile int32_t x182 = INT32_MIN;
	int8_t x184 = -5;

    t45 = (((x181&x182)|x183)|x184);

    if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x185 = UINT32_MAX;
	uint16_t x188 = 163U;
	static volatile uint32_t t46 = 3649164U;

    t46 = (((x185&x186)|x187)|x188);

    if (t46 != 4294934691U) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x190 = INT16_MAX;
	int16_t x191 = 693;

    t47 = (((x189&x190)|x191)|x192);

    if (t47 != 16125LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = 0U;
	uint16_t x195 = UINT16_MAX;
	int16_t x196 = INT16_MIN;
	int32_t t48 = 213;

    t48 = (((x193&x194)|x195)|x196);

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x197 = -1LL;
	int8_t x199 = 1;
	int16_t x200 = INT16_MIN;
	volatile int64_t t49 = 2883919608158LL;

    t49 = (((x197&x198)|x199)|x200);

    if (t49 != -32737LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x202 = UINT32_MAX;
	uint16_t x204 = 2U;
	volatile uint32_t t50 = 7U;

    t50 = (((x201&x202)|x203)|x204);

    if (t50 != 4294967170U) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x208 = INT16_MAX;

    t51 = (((x205&x206)|x207)|x208);

    if (t51 != 262143LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x209 = INT32_MIN;
	int16_t x210 = INT16_MIN;
	uint32_t x211 = 2593U;
	int32_t x212 = -1521;
	volatile uint32_t t52 = 1917572U;

    t52 = (((x209&x210)|x211)|x212);

    if (t52 != 4294965807U) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x214 = INT8_MAX;
	int64_t t53 = 386LL;

    t53 = (((x213&x214)|x215)|x216);

    if (t53 != -1645640577LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = INT8_MIN;
	int32_t x218 = INT32_MIN;
	uint8_t x219 = UINT8_MAX;
	static volatile int32_t x220 = INT32_MIN;
	volatile int32_t t54 = -565;

    t54 = (((x217&x218)|x219)|x220);

    if (t54 != -2147483393) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint16_t x221 = 24111U;
	uint16_t x222 = 67U;
	uint64_t x223 = 183160239LLU;
	int8_t x224 = -1;
	volatile uint64_t t55 = UINT64_MAX;

    t55 = (((x221&x222)|x223)|x224);

    if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = -1;
	static uint8_t x226 = 15U;
	static volatile uint8_t x227 = UINT8_MAX;
	uint32_t x228 = 2854U;
	volatile uint32_t t56 = 30U;

    t56 = (((x225&x226)|x227)|x228);

    if (t56 != 3071U) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = INT32_MIN;
	volatile uint64_t x231 = 240201765067797LLU;
	uint32_t x232 = 178812250U;
	uint64_t t57 = 526675403109LLU;

    t57 = (((x229&x230)|x231)|x232);

    if (t57 != 18446744073154461023LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x234 = 111382U;
	static int8_t x235 = 2;
	int32_t x236 = -1;

    t58 = (((x233&x234)|x235)|x236);

    if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x237 = -8228LL;
	static int32_t x239 = -1;
	uint64_t x240 = 104037041LLU;
	volatile uint64_t t59 = UINT64_MAX;

    t59 = (((x237&x238)|x239)|x240);

    if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x242 = INT32_MIN;
	int8_t x243 = -1;
	uint8_t x244 = UINT8_MAX;
	int32_t t60 = -837369;

    t60 = (((x241&x242)|x243)|x244);

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = -5105712733168LL;
	int16_t x246 = 158;
	static uint16_t x248 = 6U;
	volatile int64_t t61 = 358LL;

    t61 = (((x245&x246)|x247)|x248);

    if (t61 != 850359LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x249 = UINT16_MAX;
	uint8_t x251 = 36U;
	volatile uint64_t x252 = UINT64_MAX;
	static uint64_t t62 = UINT64_MAX;

    t62 = (((x249&x250)|x251)|x252);

    if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint8_t x253 = 67U;
	volatile int8_t x254 = INT8_MIN;
	int16_t x255 = INT16_MIN;
	int64_t x256 = -1LL;
	volatile int64_t t63 = 44437210569LL;

    t63 = (((x253&x254)|x255)|x256);

    if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = -1LL;
	int8_t x258 = 3;
	uint32_t x259 = UINT32_MAX;
	static uint64_t x260 = 607944973763467453LLU;

    t64 = (((x257&x258)|x259)|x260);

    if (t64 != 607944975707013119LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = 1;
	volatile int64_t x263 = 395LL;
	static volatile int16_t x264 = INT16_MAX;

    t65 = (((x261&x262)|x263)|x264);

    if (t65 != 32767LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int8_t x265 = INT8_MIN;
	int8_t x266 = -1;
	int16_t x267 = INT16_MIN;
	static int32_t x268 = -1;
	int32_t t66 = -45;

    t66 = (((x265&x266)|x267)|x268);

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x270 = -9;
	uint32_t x271 = UINT32_MAX;

    t67 = (((x269&x270)|x271)|x272);

    if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x274 = 217434566542061LLU;
	int8_t x275 = -5;

    t68 = (((x273&x274)|x275)|x276);

    if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x278 = 25U;
	static int64_t x279 = -1LL;
	static int32_t x280 = INT32_MIN;
	volatile int64_t t69 = 69252161078834LL;

    t69 = (((x277&x278)|x279)|x280);

    if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x281 = UINT16_MAX;
	int32_t x282 = INT32_MIN;
	int32_t t70 = 790090103;

    t70 = (((x281&x282)|x283)|x284);

    if (t70 != -46473) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int32_t x285 = INT32_MIN;
	static int16_t x286 = 705;
	uint64_t x287 = 15811403169LLU;
	static volatile int8_t x288 = INT8_MIN;
	static volatile uint64_t t71 = 11605397939LLU;

    t71 = (((x285&x286)|x287)|x288);

    if (t71 != 18446744073709551521LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = INT16_MIN;
	int32_t x290 = INT32_MIN;
	int32_t x292 = INT32_MIN;
	static volatile int32_t t72 = 71;

    t72 = (((x289&x290)|x291)|x292);

    if (t72 != -2147450881) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x293 = UINT32_MAX;
	uint16_t x295 = 11U;
	uint16_t x296 = 3U;
	static uint32_t t73 = 347U;

    t73 = (((x293&x294)|x295)|x296);

    if (t73 != 2147483647U) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x297 = 4161182LLU;
	volatile int32_t x298 = INT32_MIN;
	static uint64_t t74 = 44LLU;

    t74 = (((x297&x298)|x299)|x300);

    if (t74 != 18446744073709551569LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = INT32_MAX;
	volatile int16_t x303 = INT16_MAX;
	uint32_t x304 = 987U;
	volatile uint32_t t75 = 17756U;

    t75 = (((x301&x302)|x303)|x304);

    if (t75 != 2147483647U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x305 = INT8_MIN;
	static uint8_t x307 = 1U;
	int32_t t76 = 249;

    t76 = (((x305&x306)|x307)|x308);

    if (t76 != 2137) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x309 = INT8_MIN;
	static volatile uint16_t x310 = 253U;
	uint8_t x311 = UINT8_MAX;
	int8_t x312 = INT8_MIN;
	int32_t t77 = -1;

    t77 = (((x309&x310)|x311)|x312);

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x313 = INT8_MIN;
	uint32_t x314 = 1765898U;
	int32_t x315 = INT32_MIN;
	int8_t x316 = INT8_MIN;
	volatile uint32_t t78 = 1789U;

    t78 = (((x313&x314)|x315)|x316);

    if (t78 != 4294967168U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x317 = 59982293778780LLU;
	int8_t x318 = INT8_MIN;
	uint32_t x319 = UINT32_MAX;
	uint8_t x320 = 15U;
	volatile uint64_t t79 = 1410316349LLU;

    t79 = (((x317&x318)|x319)|x320);

    if (t79 != 59983513255935LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = -1LL;
	int8_t x322 = -1;
	uint32_t x324 = 3549U;
	static int64_t t80 = 474152709597565LL;

    t80 = (((x321&x322)|x323)|x324);

    if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x326 = 3;
	static uint16_t x327 = 5U;
	int64_t x328 = INT64_MIN;
	volatile int64_t t81 = -447571859982720LL;

    t81 = (((x325&x326)|x327)|x328);

    if (t81 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x329 = 2U;
	int32_t x330 = -5100360;
	static uint8_t x331 = 20U;
	int16_t x332 = -158;

    t82 = (((x329&x330)|x331)|x332);

    if (t82 != -138) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x333 = UINT16_MAX;
	uint32_t x334 = UINT32_MAX;
	int8_t x335 = INT8_MAX;

    t83 = (((x333&x334)|x335)|x336);

    if (t83 != 1898083240181759LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = INT32_MIN;
	int8_t x338 = -1;
	volatile int64_t t84 = -129947330931702LL;

    t84 = (((x337&x338)|x339)|x340);

    if (t84 != -1208657721LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x341 = 92U;
	int8_t x342 = -1;
	static int8_t x343 = 6;
	uint64_t x344 = 437LLU;
	uint64_t t85 = 5566602179465967604LLU;

    t85 = (((x341&x342)|x343)|x344);

    if (t85 != 511LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = -25;
	int32_t x346 = INT32_MIN;
	static int32_t x347 = INT32_MAX;
	int16_t x348 = 1139;
	int32_t t86 = -6776116;

    t86 = (((x345&x346)|x347)|x348);

    if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = INT64_MAX;
	int8_t x350 = 0;
	static int16_t x351 = 13473;
	int16_t x352 = -1;
	int64_t t87 = -1225805886730336LL;

    t87 = (((x349&x350)|x351)|x352);

    if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint8_t x353 = 1U;
	volatile uint32_t x354 = UINT32_MAX;
	int16_t x356 = -42;
	uint32_t t88 = 350154U;

    t88 = (((x353&x354)|x355)|x356);

    if (t88 != 4294967255U) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x358 = INT8_MAX;
	volatile uint32_t x359 = 7564U;
	int16_t x360 = INT16_MIN;
	volatile uint32_t t89 = 16609462U;

    t89 = (((x357&x358)|x359)|x360);

    if (t89 != 4294942207U) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x361 = UINT64_MAX;
	int64_t x363 = -1LL;
	int8_t x364 = INT8_MIN;
	uint64_t t90 = UINT64_MAX;

    t90 = (((x361&x362)|x363)|x364);

    if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int64_t x365 = 28567674LL;
	int32_t x366 = INT32_MAX;
	int32_t x367 = INT32_MIN;

    t91 = (((x365&x366)|x367)|x368);

    if (t91 != -2118915969LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x369 = 33LLU;
	volatile int8_t x371 = INT8_MAX;
	volatile int32_t x372 = INT32_MAX;
	volatile uint64_t t92 = 7239599961916608LLU;

    t92 = (((x369&x370)|x371)|x372);

    if (t92 != 2147483647LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int8_t x373 = 1;
	uint8_t x374 = UINT8_MAX;
	int16_t x375 = INT16_MIN;
	volatile int8_t x376 = -1;
	int32_t t93 = -71024206;

    t93 = (((x373&x374)|x375)|x376);

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x377 = UINT16_MAX;
	int8_t x378 = INT8_MIN;
	int32_t x379 = -112556;
	int32_t x380 = INT32_MAX;
	int32_t t94 = 8141;

    t94 = (((x377&x378)|x379)|x380);

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x381 = -1;
	static int32_t x383 = INT32_MAX;
	int64_t x384 = -69LL;
	volatile uint64_t t95 = UINT64_MAX;

    t95 = (((x381&x382)|x383)|x384);

    if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x386 = INT32_MAX;
	volatile int16_t x387 = INT16_MIN;

    t96 = (((x385&x386)|x387)|x388);

    if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = 77349LL;
	static int8_t x390 = 12;
	uint16_t x391 = 749U;
	volatile int8_t x392 = INT8_MIN;
	int64_t t97 = -1238LL;

    t97 = (((x389&x390)|x391)|x392);

    if (t97 != -19LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x394 = 1092394142802LLU;
	volatile uint8_t x395 = 14U;
	int64_t x396 = INT64_MAX;
	volatile uint64_t t98 = 1360570249812LLU;

    t98 = (((x393&x394)|x395)|x396);

    if (t98 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = 15647;
	uint8_t x398 = UINT8_MAX;
	volatile int32_t x399 = INT32_MIN;
	uint16_t x400 = 214U;
	int32_t t99 = 1;

    t99 = (((x397&x398)|x399)|x400);

    if (t99 != -2147483425) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x401 = UINT16_MAX;
	int64_t x403 = INT64_MIN;
	static volatile uint32_t x404 = 205295U;

    t100 = (((x401&x402)|x403)|x404);

    if (t100 != -9223372036854570513LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x405 = UINT8_MAX;
	uint8_t x406 = UINT8_MAX;
	int32_t x408 = INT32_MIN;
	static volatile int32_t t101 = 2;

    t101 = (((x405&x406)|x407)|x408);

    if (t101 != -32513) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x409 = UINT8_MAX;
	int64_t x410 = 26548659592128LL;
	uint32_t x411 = UINT32_MAX;
	static int16_t x412 = -1;
	volatile int64_t t102 = 0LL;

    t102 = (((x409&x410)|x411)|x412);

    if (t102 != -1LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x414 = 2U;
	int64_t x415 = 5462285LL;
	int32_t x416 = INT32_MAX;

    t103 = (((x413&x414)|x415)|x416);

    if (t103 != 2147483647LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x417 = INT32_MIN;
	uint16_t x418 = 8403U;
	int32_t x419 = INT32_MIN;
	uint8_t x420 = 44U;
	volatile int32_t t104 = 94962161;

    t104 = (((x417&x418)|x419)|x420);

    if (t104 != -2147483604) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = INT16_MIN;
	uint32_t x422 = 49033U;
	int8_t x423 = INT8_MAX;
	uint8_t x424 = 3U;
	volatile uint32_t t105 = 109716418U;

    t105 = (((x421&x422)|x423)|x424);

    if (t105 != 32895U) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x427 = -34594;
	uint32_t t106 = 0U;

    t106 = (((x425&x426)|x427)|x428);

    if (t106 != 4294967038U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x429 = 1U;
	volatile int16_t x430 = INT16_MIN;
	int64_t x431 = INT64_MAX;
	static uint8_t x432 = 0U;
	static int64_t t107 = INT64_MAX;

    t107 = (((x429&x430)|x431)|x432);

    if (t107 != INT64_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x433 = 16U;
	int16_t x434 = 24;
	static int32_t x435 = INT32_MAX;
	int16_t x436 = -147;

    t108 = (((x433&x434)|x435)|x436);

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x438 = INT16_MAX;
	static uint16_t x439 = 26U;
	int32_t x440 = 895;
	int32_t t109 = -25176;

    t109 = (((x437&x438)|x439)|x440);

    if (t109 != 1023) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x442 = 310LLU;
	int64_t x443 = INT64_MIN;
	uint64_t x444 = 1608348LLU;
	volatile uint64_t t110 = 5LLU;

    t110 = (((x441&x442)|x443)|x444);

    if (t110 != 9223372036856384446LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x447 = UINT8_MAX;
	int64_t x448 = -1LL;
	int64_t t111 = -779718943779198066LL;

    t111 = (((x445&x446)|x447)|x448);

    if (t111 != -1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x450 = 4597LL;
	volatile int16_t x451 = -1;
	int64_t x452 = INT64_MIN;
	static int64_t t112 = -42063270LL;

    t112 = (((x449&x450)|x451)|x452);

    if (t112 != -1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x453 = 0;
	int64_t x454 = INT64_MAX;
	int16_t x455 = -1;
	uint8_t x456 = 2U;
	volatile int64_t t113 = 193098237291399LL;

    t113 = (((x453&x454)|x455)|x456);

    if (t113 != -1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x457 = INT64_MIN;
	int16_t x458 = -65;
	uint8_t x459 = 39U;
	int64_t t114 = -519939810100848513LL;

    t114 = (((x457&x458)|x459)|x460);

    if (t114 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x462 = 33U;
	volatile int32_t x463 = INT32_MIN;
	int8_t x464 = INT8_MAX;
	int32_t t115 = -104327133;

    t115 = (((x461&x462)|x463)|x464);

    if (t115 != -2147483521) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x465 = -1;
	uint8_t x466 = UINT8_MAX;
	static int16_t x468 = INT16_MIN;
	static int32_t t116 = 885;

    t116 = (((x465&x466)|x467)|x468);

    if (t116 != -32513) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x470 = 48781145441LL;
	int32_t x471 = INT32_MIN;
	volatile int64_t t117 = -1293667156345886LL;

    t117 = (((x469&x470)|x471)|x472);

    if (t117 != -1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x473 = 0U;
	volatile int32_t x474 = -11;
	int8_t x475 = -1;
	int8_t x476 = INT8_MIN;
	int32_t t118 = -7083742;

    t118 = (((x473&x474)|x475)|x476);

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x478 = -1;
	uint16_t x479 = 6U;
	uint64_t x480 = UINT64_MAX;
	volatile uint64_t t119 = UINT64_MAX;

    t119 = (((x477&x478)|x479)|x480);

    if (t119 != UINT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = 23;
	uint8_t x482 = UINT8_MAX;
	uint8_t x483 = 20U;
	int32_t x484 = -1608;
	volatile int32_t t120 = -66354812;

    t120 = (((x481&x482)|x483)|x484);

    if (t120 != -1601) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x485 = 12027U;
	int8_t x486 = -1;
	int32_t x488 = INT32_MIN;
	uint32_t t121 = UINT32_MAX;

    t121 = (((x485&x486)|x487)|x488);

    if (t121 != UINT32_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x490 = INT16_MIN;
	int64_t x491 = 450749348LL;
	uint8_t x492 = 90U;

    t122 = (((x489&x490)|x491)|x492);

    if (t122 != -9223372036404026370LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x493 = 8146097U;
	uint16_t x494 = 1U;
	static volatile int16_t x495 = INT16_MIN;
	int16_t x496 = INT16_MIN;

    t123 = (((x493&x494)|x495)|x496);

    if (t123 != 4294934529U) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int16_t x497 = INT16_MAX;
	int64_t x498 = 64887399374LL;
	uint16_t x499 = UINT16_MAX;
	uint16_t x500 = 2U;
	static int64_t t124 = 351LL;

    t124 = (((x497&x498)|x499)|x500);

    if (t124 != 65535LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x501 = -1;
	int8_t x502 = INT8_MAX;
	uint64_t x503 = UINT64_MAX;
	int16_t x504 = -7;
	static uint64_t t125 = UINT64_MAX;

    t125 = (((x501&x502)|x503)|x504);

    if (t125 != UINT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x505 = 122LL;
	static int32_t x507 = INT32_MIN;
	static volatile uint32_t x508 = 2032511U;
	volatile int64_t t126 = 52LL;

    t126 = (((x505&x506)|x507)|x508);

    if (t126 != -2145451137LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = INT64_MIN;
	uint32_t x510 = UINT32_MAX;
	int32_t x511 = INT32_MAX;
	uint32_t x512 = UINT32_MAX;

    t127 = (((x509&x510)|x511)|x512);

    if (t127 != 4294967295LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = -62;
	volatile int64_t x514 = -462LL;
	uint16_t x515 = 10U;
	int32_t x516 = -1;
	int64_t t128 = -588397251230533258LL;

    t128 = (((x513&x514)|x515)|x516);

    if (t128 != -1LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = -1;
	static int16_t x518 = -1;
	uint64_t x519 = UINT64_MAX;
	volatile uint64_t t129 = UINT64_MAX;

    t129 = (((x517&x518)|x519)|x520);

    if (t129 != UINT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = 256;
	int16_t x522 = 14268;
	int8_t x523 = INT8_MIN;
	int64_t x524 = INT64_MAX;
	volatile int64_t t130 = 79598146665911415LL;

    t130 = (((x521&x522)|x523)|x524);

    if (t130 != -1LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x525 = UINT16_MAX;
	uint32_t x527 = 102U;
	int8_t x528 = INT8_MIN;

    t131 = (((x525&x526)|x527)|x528);

    if (t131 != UINT32_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = 0;
	volatile int32_t x530 = INT32_MAX;
	int8_t x531 = -26;
	int32_t t132 = -1;

    t132 = (((x529&x530)|x531)|x532);

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = -1;
	int16_t x534 = INT16_MIN;
	static uint32_t x535 = UINT32_MAX;
	int8_t x536 = INT8_MAX;

    t133 = (((x533&x534)|x535)|x536);

    if (t133 != UINT32_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = INT16_MIN;
	int32_t x538 = -9;
	volatile int64_t x539 = -512LL;
	uint8_t x540 = 118U;
	volatile int64_t t134 = -256755441LL;

    t134 = (((x537&x538)|x539)|x540);

    if (t134 != -394LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = INT32_MIN;
	int32_t x542 = 32367166;
	static volatile int32_t x543 = INT32_MAX;
	int8_t x544 = INT8_MIN;
	int32_t t135 = -24346807;

    t135 = (((x541&x542)|x543)|x544);

    if (t135 != -1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x547 = 8211U;
	int8_t x548 = -1;
	int32_t t136 = -2456;

    t136 = (((x545&x546)|x547)|x548);

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x549 = UINT8_MAX;
	static volatile int32_t x550 = -27;
	int16_t x551 = -166;
	int32_t t137 = -312022013;

    t137 = (((x549&x550)|x551)|x552);

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = INT64_MIN;
	volatile int32_t x554 = INT32_MAX;
	volatile uint8_t x555 = UINT8_MAX;
	static int8_t x556 = -1;
	volatile int64_t t138 = 1335549568949LL;

    t138 = (((x553&x554)|x555)|x556);

    if (t138 != -1LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x557 = UINT16_MAX;
	int8_t x558 = INT8_MIN;
	uint64_t x559 = 2198750685LLU;
	uint8_t x560 = 8U;
	uint64_t t139 = 2221002749990LLU;

    t139 = (((x557&x558)|x559)|x560);

    if (t139 != 2198798301LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = -1;
	uint64_t x562 = 0LLU;
	int8_t x563 = INT8_MAX;
	uint32_t x564 = 28U;
	uint64_t t140 = 243577651773691260LLU;

    t140 = (((x561&x562)|x563)|x564);

    if (t140 != 127LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = -1;
	volatile int16_t x566 = INT16_MAX;
	int16_t x567 = INT16_MAX;
	int16_t x568 = 13283;
	int32_t t141 = 112;

    t141 = (((x565&x566)|x567)|x568);

    if (t141 != 32767) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = INT64_MAX;
	int32_t x570 = INT32_MIN;
	int16_t x571 = 1;
	int64_t x572 = -16646260LL;
	volatile int64_t t142 = 13648LL;

    t142 = (((x569&x570)|x571)|x572);

    if (t142 != -16646259LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = 152298;
	static uint8_t x574 = 59U;
	int32_t x575 = INT32_MAX;
	uint32_t x576 = UINT32_MAX;
	static volatile uint32_t t143 = UINT32_MAX;

    t143 = (((x573&x574)|x575)|x576);

    if (t143 != UINT32_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x577 = -1;
	int64_t x579 = -1LL;
	volatile int32_t x580 = INT32_MAX;

    t144 = (((x577&x578)|x579)|x580);

    if (t144 != -1LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = -9410;
	uint16_t x582 = UINT16_MAX;
	static int8_t x584 = -33;

    t145 = (((x581&x582)|x583)|x584);

    if (t145 != UINT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int64_t x585 = INT64_MIN;
	volatile int32_t x587 = INT32_MIN;
	volatile int64_t x588 = -256332046270491337LL;
	uint64_t t146 = 6487468171LLU;

    t146 = (((x585&x586)|x587)|x588);

    if (t146 != 18446744072325403959LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = -16;
	uint8_t x590 = 102U;
	int64_t x591 = -1LL;
	uint64_t x592 = UINT64_MAX;
	volatile uint64_t t147 = UINT64_MAX;

    t147 = (((x589&x590)|x591)|x592);

    if (t147 != UINT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x594 = -6;
	static int64_t x595 = INT64_MIN;
	int64_t t148 = -164LL;

    t148 = (((x593&x594)|x595)|x596);

    if (t148 != -9223372032559808518LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x597 = 88U;
	static int16_t x598 = -1;
	static int32_t x600 = INT32_MIN;
	int32_t t149 = -1362;

    t149 = (((x597&x598)|x599)|x600);

    if (t149 != -3) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = INT8_MAX;
	int32_t x602 = INT32_MIN;
	static volatile int8_t x603 = -12;
	uint64_t t150 = 25082853LLU;

    t150 = (((x601&x602)|x603)|x604);

    if (t150 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x605 = INT8_MIN;
	int64_t x606 = INT64_MIN;
	volatile int64_t x607 = INT64_MIN;
	int32_t x608 = 220;
	volatile int64_t t151 = 122952965547657948LL;

    t151 = (((x605&x606)|x607)|x608);

    if (t151 != -9223372036854775588LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x609 = 36U;
	int8_t x610 = -1;
	uint64_t x611 = 1872LLU;
	static int64_t x612 = INT64_MIN;
	uint64_t t152 = 1594228897588591LLU;

    t152 = (((x609&x610)|x611)|x612);

    if (t152 != 9223372036854777716LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x613 = UINT8_MAX;
	volatile uint16_t x614 = 15715U;
	uint16_t x615 = 59U;
	static int64_t x616 = -1286LL;
	int64_t t153 = 16LL;

    t153 = (((x613&x614)|x615)|x616);

    if (t153 != -1285LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x617 = -770797;
	static uint32_t x618 = 46832U;
	int32_t x619 = INT32_MAX;
	int64_t x620 = -1LL;
	int64_t t154 = 26611339722420LL;

    t154 = (((x617&x618)|x619)|x620);

    if (t154 != -1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint64_t x621 = UINT64_MAX;
	int8_t x622 = INT8_MAX;
	uint32_t x623 = UINT32_MAX;
	static int64_t x624 = -538238LL;
	volatile uint64_t t155 = UINT64_MAX;

    t155 = (((x621&x622)|x623)|x624);

    if (t155 != UINT64_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x625 = 12;
	uint8_t x626 = 12U;
	static int8_t x628 = INT8_MAX;
	static int32_t t156 = 71530230;

    t156 = (((x625&x626)|x627)|x628);

    if (t156 != -769) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = INT8_MAX;
	int64_t x631 = INT64_MIN;

    t157 = (((x629&x630)|x631)|x632);

    if (t157 != UINT64_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x634 = INT64_MIN;
	volatile int64_t x635 = INT64_MAX;
	int32_t x636 = INT32_MAX;
	int64_t t158 = 0LL;

    t158 = (((x633&x634)|x635)|x636);

    if (t158 != -1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = -1;
	int64_t x638 = INT64_MIN;
	volatile int8_t x639 = 1;
	int32_t x640 = INT32_MIN;

    t159 = (((x637&x638)|x639)|x640);

    if (t159 != -2147483647LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint8_t x641 = 53U;
	int8_t x642 = INT8_MIN;
	int16_t x643 = INT16_MAX;
	int64_t x644 = INT64_MAX;
	volatile int64_t t160 = INT64_MAX;

    t160 = (((x641&x642)|x643)|x644);

    if (t160 != INT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x646 = 2LLU;
	static int64_t x647 = INT64_MAX;
	static int32_t x648 = INT32_MIN;
	volatile uint64_t t161 = UINT64_MAX;

    t161 = (((x645&x646)|x647)|x648);

    if (t161 != UINT64_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = 119191754;
	volatile int64_t x650 = -3842276359073LL;
	static int32_t x651 = -1;
	volatile int32_t x652 = -26;
	int64_t t162 = -476319299645012LL;

    t162 = (((x649&x650)|x651)|x652);

    if (t162 != -1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = INT32_MIN;
	uint8_t x655 = 126U;
	int16_t x656 = INT16_MAX;
	static volatile uint32_t t163 = 297144U;

    t163 = (((x653&x654)|x655)|x656);

    if (t163 != 32767U) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = INT64_MAX;
	volatile int8_t x658 = 1;
	volatile int64_t t164 = 286042LL;

    t164 = (((x657&x658)|x659)|x660);

    if (t164 != 1LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint16_t x661 = 25U;
	int16_t x663 = -1;
	volatile uint32_t t165 = UINT32_MAX;

    t165 = (((x661&x662)|x663)|x664);

    if (t165 != UINT32_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = INT8_MIN;
	static uint32_t x666 = 241U;
	int8_t x668 = INT8_MAX;
	static int64_t t166 = 62401362LL;

    t166 = (((x665&x666)|x667)|x668);

    if (t166 != -505375489LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x669 = UINT64_MAX;
	static uint8_t x672 = UINT8_MAX;
	volatile uint64_t t167 = UINT64_MAX;

    t167 = (((x669&x670)|x671)|x672);

    if (t167 != UINT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x673 = INT8_MIN;
	static int8_t x675 = -3;
	volatile int64_t t168 = -294LL;

    t168 = (((x673&x674)|x675)|x676);

    if (t168 != -3LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x677 = 90U;
	int8_t x678 = -1;
	int64_t x679 = INT64_MIN;
	uint32_t x680 = 23127529U;

    t169 = (((x677&x678)|x679)|x680);

    if (t169 != -9223372036831648261LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = INT16_MIN;
	int32_t x682 = -1;
	volatile int8_t x683 = INT8_MIN;
	uint8_t x684 = 0U;
	int32_t t170 = -301;

    t170 = (((x681&x682)|x683)|x684);

    if (t170 != -128) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x685 = 36787131747735338LLU;
	uint64_t x686 = UINT64_MAX;
	uint8_t x687 = 113U;
	static uint64_t t171 = 170927LLU;

    t171 = (((x685&x686)|x687)|x688);

    if (t171 != 36787131747735419LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x689 = 1U;
	static int16_t x690 = INT16_MIN;
	static int16_t x691 = -1;
	uint16_t x692 = 3263U;
	int32_t t172 = 0;

    t172 = (((x689&x690)|x691)|x692);

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint8_t x694 = 8U;
	volatile int32_t x695 = -777815;
	volatile uint64_t t173 = 8678797331491LLU;

    t173 = (((x693&x694)|x695)|x696);

    if (t173 != 18446744073708773887LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x697 = INT32_MIN;
	int16_t x698 = INT16_MAX;
	int64_t x699 = INT64_MAX;
	int8_t x700 = -1;

    t174 = (((x697&x698)|x699)|x700);

    if (t174 != -1LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x701 = -1LL;
	volatile uint64_t x702 = UINT64_MAX;
	int8_t x703 = INT8_MAX;
	uint64_t x704 = UINT64_MAX;

    t175 = (((x701&x702)|x703)|x704);

    if (t175 != UINT64_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x705 = 1U;
	uint32_t x706 = 14U;
	static int16_t x708 = INT16_MAX;
	uint32_t t176 = 0U;

    t176 = (((x705&x706)|x707)|x708);

    if (t176 != 32767U) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x710 = INT16_MAX;
	static int32_t x711 = INT32_MAX;
	static uint64_t x712 = 1350363LLU;
	volatile uint64_t t177 = 3943220987LLU;

    t177 = (((x709&x710)|x711)|x712);

    if (t177 != 2147483647LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = -1;
	int16_t x714 = INT16_MAX;
	int8_t x715 = 0;
	int16_t x716 = -1;
	volatile int32_t t178 = 41532237;

    t178 = (((x713&x714)|x715)|x716);

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x717 = -1LL;
	static int32_t x718 = -1;
	int32_t x719 = INT32_MIN;
	int64_t x720 = INT64_MIN;
	static volatile int64_t t179 = 15709779807LL;

    t179 = (((x717&x718)|x719)|x720);

    if (t179 != -1LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = INT64_MAX;
	volatile uint8_t x722 = 23U;
	int64_t x724 = INT64_MIN;
	static int64_t t180 = -20633743754555LL;

    t180 = (((x721&x722)|x723)|x724);

    if (t180 != -32745LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x725 = INT64_MIN;
	int32_t x726 = INT32_MIN;
	int16_t x727 = INT16_MIN;
	int64_t t181 = -6475LL;

    t181 = (((x725&x726)|x727)|x728);

    if (t181 != -32768LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = -5;
	int32_t x730 = 9175351;
	uint32_t x731 = 46638718U;
	int32_t x732 = 34;
	uint32_t t182 = 21U;

    t182 = (((x729&x730)|x731)|x732);

    if (t182 != 47163263U) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x733 = -5578425;
	int8_t x734 = 41;
	volatile int32_t x735 = INT32_MIN;
	static int16_t x736 = INT16_MIN;
	static int32_t t183 = 2;

    t183 = (((x733&x734)|x735)|x736);

    if (t183 != -32767) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int16_t x737 = INT16_MAX;
	static volatile int16_t x738 = INT16_MIN;
	static int16_t x739 = INT16_MAX;
	int32_t x740 = -1;

    t184 = (((x737&x738)|x739)|x740);

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x741 = INT8_MIN;
	int64_t x742 = -1LL;
	volatile int32_t x743 = 39596;
	static int8_t x744 = INT8_MIN;
	volatile int64_t t185 = 470548420LL;

    t185 = (((x741&x742)|x743)|x744);

    if (t185 != -84LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int64_t x745 = -1LL;
	volatile int32_t x748 = 98;
	int64_t t186 = 453258805177768LL;

    t186 = (((x745&x746)|x747)|x748);

    if (t186 != 490999LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x750 = INT8_MIN;
	static int8_t x751 = INT8_MAX;
	int32_t x752 = -1;
	static volatile uint32_t t187 = UINT32_MAX;

    t187 = (((x749&x750)|x751)|x752);

    if (t187 != UINT32_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x753 = -1;
	static int16_t x754 = INT16_MIN;
	uint64_t x755 = 90LLU;
	uint64_t t188 = 3513125294832LLU;

    t188 = (((x753&x754)|x755)|x756);

    if (t188 != 18446744073709551226LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x758 = 6U;
	uint32_t x759 = 45002156U;
	uint64_t t189 = 256114809484LLU;

    t189 = (((x757&x758)|x759)|x760);

    if (t189 != 45022653LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x761 = 1U;
	int8_t x762 = -1;
	static int8_t x763 = -1;
	volatile int8_t x764 = 3;

    t190 = (((x761&x762)|x763)|x764);

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x765 = -1;
	int64_t x766 = -1LL;
	int16_t x767 = INT16_MAX;
	volatile int64_t t191 = -1125406044490LL;

    t191 = (((x765&x766)|x767)|x768);

    if (t191 != -1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x769 = 0;
	uint16_t x770 = 966U;
	uint32_t x771 = 159U;
	static volatile uint32_t t192 = 733723U;

    t192 = (((x769&x770)|x771)|x772);

    if (t192 != 4294960319U) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = -2716;
	volatile uint64_t x775 = UINT64_MAX;
	volatile uint64_t t193 = UINT64_MAX;

    t193 = (((x773&x774)|x775)|x776);

    if (t193 != UINT64_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x777 = INT8_MIN;
	int32_t x778 = -118;
	static int16_t x779 = -712;
	volatile int32_t t194 = -1932813;

    t194 = (((x777&x778)|x779)|x780);

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = INT16_MAX;
	int64_t x782 = INT64_MIN;
	int64_t x783 = INT64_MIN;
	uint8_t x784 = 11U;
	int64_t t195 = -101245010281577LL;

    t195 = (((x781&x782)|x783)|x784);

    if (t195 != -9223372036854775797LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint8_t x785 = UINT8_MAX;
	static int8_t x786 = INT8_MIN;
	uint16_t x787 = 12088U;
	volatile int32_t t196 = 20184;

    t196 = (((x785&x786)|x787)|x788);

    if (t196 != 32767) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x789 = INT16_MIN;
	int16_t x791 = INT16_MIN;
	static uint32_t x792 = 1175U;
	volatile int64_t t197 = -217364LL;

    t197 = (((x789&x790)|x791)|x792);

    if (t197 != -31593LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = -13;
	uint32_t x794 = 280580167U;
	volatile int64_t x795 = INT64_MAX;
	uint64_t x796 = UINT64_MAX;

    t198 = (((x793&x794)|x795)|x796);

    if (t198 != UINT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x797 = 33U;
	int8_t x798 = INT8_MIN;
	static uint8_t x800 = 6U;
	int32_t t199 = 14577080;

    t199 = (((x797&x798)|x799)|x800);

    if (t199 != -2147483642) { NG(); } else { ; }
	
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

