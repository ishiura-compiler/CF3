
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

volatile int16_t x3 = INT16_MIN;
volatile int16_t x7 = 51;
static int8_t x10 = INT8_MIN;
uint16_t x13 = 0U;
int32_t x16 = -1;
int8_t x17 = INT8_MIN;
uint8_t x25 = 38U;
volatile int8_t x33 = INT8_MIN;
static uint16_t x37 = 1U;
static volatile int32_t t9 = 650;
int32_t t10 = -37537;
int64_t x45 = INT64_MIN;
int32_t x56 = INT32_MIN;
int32_t t14 = 2289448;
volatile int16_t x61 = -3;
static volatile int64_t x63 = INT64_MIN;
int32_t t15 = -46853115;
static int32_t t19 = 598;
static int8_t x81 = INT8_MAX;
uint8_t x82 = 2U;
volatile int64_t x85 = INT64_MIN;
int16_t x86 = INT16_MIN;
int8_t x88 = INT8_MIN;
static int16_t x94 = -1;
uint64_t x97 = 5059232409946LLU;
uint16_t x99 = 14U;
uint8_t x100 = UINT8_MAX;
uint32_t x109 = 228U;
uint64_t x110 = UINT64_MAX;
int32_t x114 = -1;
static int8_t x121 = 0;
int8_t x122 = 10;
uint64_t x127 = 413882707651466714LLU;
int32_t x129 = 1470772;
int64_t x132 = INT64_MIN;
static volatile int32_t t32 = 129214214;
static uint32_t x143 = UINT32_MAX;
static int32_t x150 = -276606;
static uint16_t x151 = UINT16_MAX;
int32_t x152 = INT32_MAX;
int32_t t38 = -7;
static uint8_t x159 = 14U;
uint32_t x168 = 3U;
int64_t x176 = INT64_MIN;
static volatile int32_t t44 = -937501063;
static int8_t x184 = -6;
static volatile int8_t x193 = INT8_MIN;
int8_t x201 = INT8_MIN;
int16_t x209 = -475;
static volatile uint16_t x210 = 0U;
static int32_t t53 = 446396;
static uint16_t x218 = 15U;
volatile uint8_t x220 = 1U;
uint8_t x222 = 8U;
uint16_t x223 = UINT16_MAX;
int32_t t55 = -25;
int8_t x226 = 1;
static int8_t x228 = INT8_MIN;
uint8_t x236 = 24U;
uint64_t x245 = UINT64_MAX;
volatile int8_t x251 = 7;
int8_t x254 = -23;
volatile int16_t x262 = -1;
uint8_t x263 = 105U;
int64_t x272 = -15285LL;
int16_t x275 = -1;
int32_t x276 = INT32_MAX;
static uint64_t x281 = 15212066974930LLU;
static int32_t t71 = 35657809;
static int8_t x293 = INT8_MIN;
volatile int32_t x294 = -187911;
static int64_t x304 = 3016668750758LL;
int16_t x310 = -453;
int32_t x313 = -61973;
static uint16_t x315 = 28U;
volatile int32_t t78 = 914396;
static uint16_t x318 = UINT16_MAX;
int32_t x319 = INT32_MIN;
int16_t x322 = INT16_MIN;
uint64_t x323 = UINT64_MAX;
volatile uint16_t x326 = 24822U;
static int32_t t83 = 2010;
uint64_t x340 = 13228409764920169LLU;
int8_t x342 = -1;
volatile int64_t x347 = 1LL;
volatile int16_t x349 = 826;
static volatile int64_t x352 = INT64_MIN;
uint64_t x354 = 13001438LLU;
int8_t x356 = INT8_MIN;
volatile int32_t t88 = 51;
int8_t x359 = 8;
volatile int32_t t89 = 19382;
int8_t x368 = INT8_MIN;
volatile uint32_t x383 = 1664U;
static int8_t x386 = -1;
int8_t x387 = -1;
uint64_t x390 = 38945617831155817LLU;
static int8_t x395 = INT8_MIN;
volatile int32_t t98 = 496627731;
volatile int32_t t99 = 850663;
static int64_t x402 = INT64_MIN;
uint8_t x408 = UINT8_MAX;
int32_t t101 = -3;
volatile int32_t x409 = INT32_MIN;
volatile int16_t x410 = 3571;
int32_t t102 = 1392286;
int64_t x413 = INT64_MIN;
int16_t x418 = -2301;
int8_t x427 = INT8_MIN;
int8_t x430 = INT8_MIN;
int32_t x431 = 1;
volatile int8_t x432 = -1;
static int64_t x441 = -1LL;
uint32_t x443 = 2U;
int8_t x448 = INT8_MAX;
static int32_t t112 = 5985;
static int32_t x455 = INT32_MAX;
uint8_t x456 = 100U;
int16_t x460 = INT16_MAX;
static volatile int32_t x461 = -1;
static int64_t x468 = -21LL;
volatile uint32_t x475 = UINT32_MAX;
int64_t x477 = 0LL;
volatile int64_t x487 = INT64_MIN;
int8_t x488 = -1;
uint8_t x496 = UINT8_MAX;
volatile int32_t t123 = -183340;
int16_t x499 = INT16_MAX;
static int64_t x504 = -3135043668LL;
static volatile int32_t t125 = 3656;
static int16_t x505 = 1;
int8_t x509 = INT8_MIN;
volatile int8_t x511 = INT8_MIN;
int64_t x516 = 32056424190352362LL;
int16_t x521 = -1;
uint8_t x522 = 0U;
int64_t x523 = 16545276845LL;
int32_t x526 = INT32_MIN;
int64_t x527 = INT64_MIN;
volatile int16_t x533 = INT16_MIN;
int8_t x534 = INT8_MAX;
int16_t x543 = INT16_MAX;
uint8_t x544 = 1U;
static int8_t x548 = INT8_MIN;
static int32_t t136 = -1025063;
int32_t x549 = -1;
static int16_t x553 = INT16_MAX;
int64_t x555 = -1LL;
volatile uint8_t x556 = 1U;
int32_t t138 = 1928;
int16_t x557 = -1;
int16_t x560 = INT16_MIN;
volatile int32_t t140 = 2739824;
int8_t x570 = INT8_MAX;
volatile uint16_t x571 = 793U;
int64_t x574 = INT64_MIN;
volatile int16_t x576 = -1;
uint16_t x578 = UINT16_MAX;
uint8_t x580 = 64U;
int32_t t145 = 1;
int8_t x586 = -8;
uint32_t x602 = UINT32_MAX;
volatile int32_t t150 = 115404928;
uint32_t x621 = 55U;
volatile int32_t t155 = 21;
volatile uint16_t x634 = 3U;
uint8_t x635 = 3U;
int32_t t159 = 26047;
uint32_t x647 = 99893U;
uint32_t x649 = 5U;
volatile uint16_t x663 = 916U;
int32_t x670 = INT32_MIN;
static volatile int8_t x673 = INT8_MIN;
volatile uint64_t x676 = 8513930888LLU;
int16_t x684 = 4;
volatile int32_t t170 = -171;
int32_t x711 = -1;
int64_t x713 = 34622830641493993LL;
static volatile uint16_t x714 = UINT16_MAX;
int64_t x718 = 24428LL;
int8_t x727 = INT8_MAX;
int64_t x739 = -150550728496LL;
int16_t x742 = INT16_MIN;
int64_t x755 = INT64_MAX;
volatile int32_t t188 = -1;
static int16_t x758 = INT16_MIN;
int32_t x759 = -7651015;
static volatile int32_t t189 = 199;
int32_t x761 = INT32_MIN;
int16_t x769 = -199;
static uint64_t x772 = 16004459083LLU;
int8_t x773 = -1;
volatile int32_t t193 = 1958;
int32_t t194 = -962;
int32_t x786 = -1;
volatile int32_t t196 = -52;
volatile int32_t t197 = 103573;
volatile uint32_t x796 = UINT32_MAX;
volatile int32_t x798 = -800;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	volatile int32_t x2 = INT32_MIN;
	int64_t x4 = INT64_MIN;
	static volatile int32_t t0 = -904022;

    t0 = ((x1&(x2^x3))!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MAX;
	uint8_t x6 = UINT8_MAX;
	volatile int32_t x8 = 369208;
	int32_t t1 = -732384;

    t1 = ((x5&(x6^x7))!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = UINT8_MAX;
	static int32_t x11 = INT32_MIN;
	int32_t x12 = -282849545;
	volatile int32_t t2 = 108;

    t2 = ((x9&(x10^x11))!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x14 = 519602612;
	volatile int8_t x15 = INT8_MIN;
	volatile int32_t t3 = -124279592;

    t3 = ((x13&(x14^x15))!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x18 = -434;
	static int32_t x19 = -1;
	int32_t x20 = INT32_MIN;
	int32_t t4 = 7;

    t4 = ((x17&(x18^x19))!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 71828LLU;
	volatile int16_t x22 = INT16_MIN;
	volatile int16_t x23 = -1;
	uint32_t x24 = 131185321U;
	volatile int32_t t5 = 16;

    t5 = ((x21&(x22^x23))!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x26 = 62U;
	volatile int32_t x27 = -1;
	int8_t x28 = 25;
	int32_t t6 = 26;

    t6 = ((x25&(x26^x27))!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x29 = INT16_MIN;
	uint64_t x30 = 76877744896LLU;
	int8_t x31 = INT8_MAX;
	int64_t x32 = INT64_MAX;
	int32_t t7 = 1;

    t7 = ((x29&(x30^x31))!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x34 = INT8_MIN;
	uint32_t x35 = 2U;
	int64_t x36 = 55780461329325829LL;
	int32_t t8 = 1;

    t8 = ((x33&(x34^x35))!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x38 = INT8_MAX;
	int32_t x39 = 3;
	volatile int16_t x40 = INT16_MIN;

    t9 = ((x37&(x38^x39))!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = -1;
	int8_t x42 = INT8_MAX;
	uint32_t x43 = 97U;
	static volatile int64_t x44 = INT64_MIN;

    t10 = ((x41&(x42^x43))!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint16_t x46 = UINT16_MAX;
	int32_t x47 = 7167;
	int8_t x48 = -1;
	int32_t t11 = 1;

    t11 = ((x45&(x46^x47))!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x49 = 1980786;
	static int32_t x50 = INT32_MIN;
	int32_t x51 = INT32_MIN;
	int16_t x52 = -27;
	volatile int32_t t12 = -4;

    t12 = ((x49&(x50^x51))!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = 688;
	uint8_t x54 = UINT8_MAX;
	int64_t x55 = -51130023281305469LL;
	volatile int32_t t13 = 0;

    t13 = ((x53&(x54^x55))!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1LL;
	int16_t x58 = INT16_MIN;
	uint32_t x59 = 217450U;
	static uint16_t x60 = 1U;

    t14 = ((x57&(x58^x59))!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x62 = -1964;
	int32_t x64 = -1;

    t15 = ((x61&(x62^x63))!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x65 = -1LL;
	uint32_t x66 = 28U;
	volatile int16_t x67 = 0;
	static int64_t x68 = -1187611781372340LL;
	int32_t t16 = -1;

    t16 = ((x65&(x66^x67))!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = UINT32_MAX;
	static int16_t x70 = -1;
	int16_t x71 = INT16_MIN;
	int8_t x72 = INT8_MIN;
	volatile int32_t t17 = -141;

    t17 = ((x69&(x70^x71))!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = 0U;
	int32_t x74 = 132775413;
	volatile uint32_t x75 = 69U;
	static int16_t x76 = INT16_MIN;
	volatile int32_t t18 = -5;

    t18 = ((x73&(x74^x75))!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x77 = 28U;
	static int16_t x78 = -44;
	uint64_t x79 = 106593176972LLU;
	int16_t x80 = -2491;

    t19 = ((x77&(x78^x79))!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint32_t x83 = UINT32_MAX;
	volatile int8_t x84 = INT8_MAX;
	int32_t t20 = -8913179;

    t20 = ((x81&(x82^x83))!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x87 = -59874;
	int32_t t21 = -1;

    t21 = ((x85&(x86^x87))!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = -45LL;
	uint8_t x90 = UINT8_MAX;
	static int64_t x91 = 437LL;
	int32_t x92 = -531716480;
	static volatile int32_t t22 = -1;

    t22 = ((x89&(x90^x91))!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x93 = -1;
	int64_t x95 = INT64_MIN;
	int16_t x96 = INT16_MIN;
	volatile int32_t t23 = 1;

    t23 = ((x93&(x94^x95))!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x98 = INT16_MIN;
	int32_t t24 = 48448926;

    t24 = ((x97&(x98^x99))!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint32_t x101 = 63516U;
	int16_t x102 = INT16_MIN;
	int32_t x103 = INT32_MIN;
	uint8_t x104 = 14U;
	static volatile int32_t t25 = -4;

    t25 = ((x101&(x102^x103))!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x105 = UINT8_MAX;
	int32_t x106 = INT32_MAX;
	uint16_t x107 = 1780U;
	volatile int16_t x108 = -1;
	volatile int32_t t26 = -376;

    t26 = ((x105&(x106^x107))!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint8_t x111 = 5U;
	volatile uint64_t x112 = UINT64_MAX;
	int32_t t27 = 7029;

    t27 = ((x109&(x110^x111))!=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint64_t x113 = 4612256539282LLU;
	static int32_t x115 = INT32_MIN;
	int32_t x116 = -1;
	volatile int32_t t28 = 3;

    t28 = ((x113&(x114^x115))!=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MIN;
	volatile int32_t x118 = -1;
	int8_t x119 = -1;
	static uint16_t x120 = UINT16_MAX;
	int32_t t29 = -84036246;

    t29 = ((x117&(x118^x119))!=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x123 = 0U;
	uint16_t x124 = 19964U;
	int32_t t30 = 31246696;

    t30 = ((x121&(x122^x123))!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x125 = INT8_MIN;
	int16_t x126 = -1;
	uint64_t x128 = 450213281494972161LLU;
	volatile int32_t t31 = -1;

    t31 = ((x125&(x126^x127))!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x130 = -1;
	static uint32_t x131 = UINT32_MAX;

    t32 = ((x129&(x130^x131))!=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = INT16_MIN;
	int32_t x134 = -1;
	volatile int16_t x135 = 1149;
	int32_t x136 = INT32_MIN;
	volatile int32_t t33 = 3;

    t33 = ((x133&(x134^x135))!=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x137 = INT16_MIN;
	uint8_t x138 = 2U;
	static volatile uint16_t x139 = UINT16_MAX;
	uint64_t x140 = 3756100015302LLU;
	int32_t t34 = 14;

    t34 = ((x137&(x138^x139))!=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = -3617810;
	uint16_t x142 = 8633U;
	int8_t x144 = INT8_MIN;
	volatile int32_t t35 = -365142;

    t35 = ((x141&(x142^x143))!=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x145 = 3389U;
	int32_t x146 = INT32_MIN;
	int8_t x147 = INT8_MAX;
	int8_t x148 = INT8_MIN;
	volatile int32_t t36 = 0;

    t36 = ((x145&(x146^x147))!=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MIN;
	volatile int32_t t37 = -197101877;

    t37 = ((x149&(x150^x151))!=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x153 = UINT8_MAX;
	static uint16_t x154 = UINT16_MAX;
	static volatile int16_t x155 = INT16_MAX;
	int64_t x156 = 1424761124LL;

    t38 = ((x153&(x154^x155))!=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MIN;
	static int16_t x158 = -1;
	uint16_t x160 = 13U;
	volatile int32_t t39 = -7113848;

    t39 = ((x157&(x158^x159))!=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = INT32_MAX;
	uint16_t x162 = UINT16_MAX;
	uint64_t x163 = UINT64_MAX;
	volatile uint16_t x164 = UINT16_MAX;
	static int32_t t40 = -42089388;

    t40 = ((x161&(x162^x163))!=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = INT32_MIN;
	uint16_t x166 = 273U;
	uint64_t x167 = UINT64_MAX;
	volatile int32_t t41 = -6890;

    t41 = ((x165&(x166^x167))!=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = UINT64_MAX;
	int16_t x170 = -1;
	int64_t x171 = INT64_MIN;
	uint16_t x172 = 3610U;
	volatile int32_t t42 = -5;

    t42 = ((x169&(x170^x171))!=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x173 = INT32_MAX;
	uint64_t x174 = UINT64_MAX;
	static int16_t x175 = -1;
	int32_t t43 = -58419231;

    t43 = ((x173&(x174^x175))!=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = UINT16_MAX;
	int16_t x178 = INT16_MIN;
	int32_t x179 = -1;
	volatile int8_t x180 = -1;

    t44 = ((x177&(x178^x179))!=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = -1107;
	volatile int8_t x182 = INT8_MAX;
	volatile int64_t x183 = INT64_MAX;
	volatile int32_t t45 = 1;

    t45 = ((x181&(x182^x183))!=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x185 = -1;
	uint16_t x186 = 12U;
	int16_t x187 = INT16_MAX;
	int16_t x188 = 13921;
	volatile int32_t t46 = 0;

    t46 = ((x185&(x186^x187))!=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x189 = 7170U;
	int16_t x190 = -1;
	int64_t x191 = -8507468404734060LL;
	uint64_t x192 = 686LLU;
	int32_t t47 = -162;

    t47 = ((x189&(x190^x191))!=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x194 = 6;
	uint8_t x195 = UINT8_MAX;
	int64_t x196 = INT64_MIN;
	int32_t t48 = 53055;

    t48 = ((x193&(x194^x195))!=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = INT64_MIN;
	int64_t x198 = INT64_MAX;
	uint32_t x199 = UINT32_MAX;
	int8_t x200 = INT8_MIN;
	volatile int32_t t49 = -21;

    t49 = ((x197&(x198^x199))!=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x202 = -11;
	uint8_t x203 = UINT8_MAX;
	volatile int16_t x204 = INT16_MIN;
	int32_t t50 = -113775707;

    t50 = ((x201&(x202^x203))!=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x205 = 36U;
	uint64_t x206 = UINT64_MAX;
	static int32_t x207 = -161230;
	int8_t x208 = INT8_MIN;
	int32_t t51 = 27;

    t51 = ((x205&(x206^x207))!=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x211 = INT64_MAX;
	int16_t x212 = INT16_MAX;
	int32_t t52 = 54;

    t52 = ((x209&(x210^x211))!=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x213 = 56207064LLU;
	volatile uint64_t x214 = 31956477723991596LLU;
	static int32_t x215 = -1;
	int8_t x216 = -1;

    t53 = ((x213&(x214^x215))!=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = INT16_MIN;
	uint32_t x219 = 32284U;
	int32_t t54 = -256565411;

    t54 = ((x217&(x218^x219))!=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = INT64_MIN;
	int64_t x224 = -64710LL;

    t55 = ((x221&(x222^x223))!=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = -1262;
	int32_t x227 = -2;
	static volatile int32_t t56 = 2;

    t56 = ((x225&(x226^x227))!=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x229 = 11U;
	int64_t x230 = INT64_MIN;
	uint8_t x231 = 1U;
	int64_t x232 = 513865LL;
	int32_t t57 = 972134;

    t57 = ((x229&(x230^x231))!=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x233 = 39;
	static uint16_t x234 = 59U;
	int32_t x235 = INT32_MAX;
	int32_t t58 = 383320875;

    t58 = ((x233&(x234^x235))!=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = INT32_MAX;
	int8_t x238 = INT8_MIN;
	int64_t x239 = INT64_MAX;
	int8_t x240 = INT8_MAX;
	int32_t t59 = -62419572;

    t59 = ((x237&(x238^x239))!=x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = INT32_MAX;
	volatile int32_t x242 = 1843385;
	static volatile int16_t x243 = INT16_MIN;
	int8_t x244 = INT8_MIN;
	int32_t t60 = -324;

    t60 = ((x241&(x242^x243))!=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x246 = INT8_MIN;
	volatile uint64_t x247 = UINT64_MAX;
	static volatile uint16_t x248 = UINT16_MAX;
	int32_t t61 = 3096378;

    t61 = ((x245&(x246^x247))!=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x249 = 759114313136379005LLU;
	int8_t x250 = 1;
	int8_t x252 = -4;
	int32_t t62 = 1615176;

    t62 = ((x249&(x250^x251))!=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = INT16_MIN;
	static int16_t x255 = 14769;
	uint8_t x256 = 11U;
	volatile int32_t t63 = 9049661;

    t63 = ((x253&(x254^x255))!=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x257 = 1409576040264359117LL;
	volatile int16_t x258 = -1;
	uint32_t x259 = 1U;
	int8_t x260 = INT8_MIN;
	volatile int32_t t64 = 7;

    t64 = ((x257&(x258^x259))!=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x261 = INT8_MIN;
	int16_t x264 = INT16_MIN;
	volatile int32_t t65 = 603;

    t65 = ((x261&(x262^x263))!=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x265 = 644U;
	volatile int64_t x266 = INT64_MIN;
	int64_t x267 = INT64_MIN;
	volatile uint16_t x268 = 32U;
	int32_t t66 = 1665596;

    t66 = ((x265&(x266^x267))!=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x269 = 7;
	int32_t x270 = 177284;
	int8_t x271 = INT8_MIN;
	int32_t t67 = -15992020;

    t67 = ((x269&(x270^x271))!=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = INT8_MIN;
	uint16_t x274 = 7U;
	volatile int32_t t68 = 0;

    t68 = ((x273&(x274^x275))!=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = -1;
	static int32_t x278 = -3;
	int8_t x279 = -1;
	static volatile int16_t x280 = 7758;
	int32_t t69 = -32135;

    t69 = ((x277&(x278^x279))!=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x282 = 2816;
	uint32_t x283 = 62809284U;
	int16_t x284 = INT16_MIN;
	static volatile int32_t t70 = -4;

    t70 = ((x281&(x282^x283))!=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = -1;
	static volatile int8_t x286 = 19;
	static int8_t x287 = INT8_MIN;
	int16_t x288 = 13;

    t71 = ((x285&(x286^x287))!=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = -1;
	static uint8_t x290 = UINT8_MAX;
	static int16_t x291 = -1;
	volatile int16_t x292 = INT16_MAX;
	volatile int32_t t72 = 477948;

    t72 = ((x289&(x290^x291))!=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x295 = INT16_MIN;
	int8_t x296 = INT8_MAX;
	volatile int32_t t73 = 2395;

    t73 = ((x293&(x294^x295))!=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x297 = -1;
	int8_t x298 = INT8_MIN;
	int64_t x299 = INT64_MIN;
	int32_t x300 = INT32_MIN;
	int32_t t74 = -616;

    t74 = ((x297&(x298^x299))!=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = INT16_MAX;
	static int8_t x302 = 3;
	uint64_t x303 = 37101746365LLU;
	int32_t t75 = 1275;

    t75 = ((x301&(x302^x303))!=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = -1;
	int64_t x306 = INT64_MIN;
	int32_t x307 = -1;
	volatile uint32_t x308 = 10959703U;
	int32_t t76 = 217;

    t76 = ((x305&(x306^x307))!=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x309 = -61;
	int64_t x311 = -1LL;
	int64_t x312 = 54039299570807LL;
	volatile int32_t t77 = -65;

    t77 = ((x309&(x310^x311))!=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint16_t x314 = UINT16_MAX;
	uint16_t x316 = UINT16_MAX;

    t78 = ((x313&(x314^x315))!=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x317 = -30;
	int8_t x320 = 40;
	volatile int32_t t79 = 6;

    t79 = ((x317&(x318^x319))!=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x321 = 52378882270543LLU;
	uint8_t x324 = UINT8_MAX;
	int32_t t80 = -6348;

    t80 = ((x321&(x322^x323))!=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = 19;
	uint64_t x327 = UINT64_MAX;
	static int64_t x328 = INT64_MAX;
	int32_t t81 = 119;

    t81 = ((x325&(x326^x327))!=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = INT8_MIN;
	int8_t x330 = 1;
	static int16_t x331 = 11;
	uint8_t x332 = 0U;
	static volatile int32_t t82 = -223184;

    t82 = ((x329&(x330^x331))!=x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x333 = INT8_MAX;
	int64_t x334 = -4402206043841702LL;
	volatile uint16_t x335 = UINT16_MAX;
	int64_t x336 = -1LL;

    t83 = ((x333&(x334^x335))!=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x337 = -1;
	uint32_t x338 = 1340424U;
	static int32_t x339 = INT32_MAX;
	int32_t t84 = 503490;

    t84 = ((x337&(x338^x339))!=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x341 = UINT8_MAX;
	int8_t x343 = INT8_MIN;
	static int16_t x344 = -1;
	volatile int32_t t85 = -4273;

    t85 = ((x341&(x342^x343))!=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = -1;
	int16_t x346 = 807;
	volatile uint16_t x348 = 8148U;
	int32_t t86 = -8856;

    t86 = ((x345&(x346^x347))!=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x350 = INT32_MIN;
	int16_t x351 = INT16_MAX;
	int32_t t87 = 71;

    t87 = ((x349&(x350^x351))!=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x353 = INT16_MIN;
	int16_t x355 = -3;

    t88 = ((x353&(x354^x355))!=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = 54;
	static int16_t x358 = 1;
	static volatile int32_t x360 = -79;

    t89 = ((x357&(x358^x359))!=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x361 = UINT16_MAX;
	int64_t x362 = -1LL;
	uint16_t x363 = UINT16_MAX;
	static uint64_t x364 = 403440134568189907LLU;
	int32_t t90 = -68817421;

    t90 = ((x361&(x362^x363))!=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x365 = INT32_MAX;
	uint8_t x366 = UINT8_MAX;
	int8_t x367 = INT8_MIN;
	int32_t t91 = -223;

    t91 = ((x365&(x366^x367))!=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x369 = INT32_MIN;
	static volatile uint32_t x370 = 58U;
	volatile int8_t x371 = 60;
	uint16_t x372 = UINT16_MAX;
	volatile int32_t t92 = 7093;

    t92 = ((x369&(x370^x371))!=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x373 = UINT8_MAX;
	int8_t x374 = INT8_MIN;
	volatile int32_t x375 = INT32_MIN;
	uint32_t x376 = 303355402U;
	int32_t t93 = -768751;

    t93 = ((x373&(x374^x375))!=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = INT16_MIN;
	uint8_t x378 = UINT8_MAX;
	int32_t x379 = -1;
	int16_t x380 = 14404;
	volatile int32_t t94 = -156959;

    t94 = ((x377&(x378^x379))!=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x381 = INT8_MAX;
	int8_t x382 = 57;
	int32_t x384 = -21;
	int32_t t95 = -8036788;

    t95 = ((x381&(x382^x383))!=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x385 = UINT8_MAX;
	static uint64_t x388 = UINT64_MAX;
	static volatile int32_t t96 = 161;

    t96 = ((x385&(x386^x387))!=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = 0;
	uint64_t x391 = UINT64_MAX;
	int8_t x392 = INT8_MIN;
	int32_t t97 = -5456;

    t97 = ((x389&(x390^x391))!=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = 1109;
	static uint32_t x394 = 1U;
	volatile int8_t x396 = INT8_MIN;

    t98 = ((x393&(x394^x395))!=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x397 = 79U;
	volatile int8_t x398 = 2;
	int8_t x399 = -57;
	volatile int16_t x400 = INT16_MAX;

    t99 = ((x397&(x398^x399))!=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = INT16_MAX;
	int32_t x403 = INT32_MAX;
	static volatile uint16_t x404 = 1U;
	static volatile int32_t t100 = -8;

    t100 = ((x401&(x402^x403))!=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = -3128;
	static int32_t x406 = -57839;
	volatile int32_t x407 = INT32_MIN;

    t101 = ((x405&(x406^x407))!=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x411 = INT16_MIN;
	uint16_t x412 = UINT16_MAX;

    t102 = ((x409&(x410^x411))!=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x414 = 59283181552807677LLU;
	static int32_t x415 = 1337;
	int64_t x416 = 207628277875923103LL;
	volatile int32_t t103 = -974142445;

    t103 = ((x413&(x414^x415))!=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int32_t x417 = -13968736;
	int32_t x419 = 1;
	volatile int64_t x420 = -1258261060080LL;
	static volatile int32_t t104 = -296726351;

    t104 = ((x417&(x418^x419))!=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x421 = INT8_MIN;
	volatile uint32_t x422 = UINT32_MAX;
	uint32_t x423 = 3914U;
	uint32_t x424 = 845037891U;
	volatile int32_t t105 = -5323;

    t105 = ((x421&(x422^x423))!=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = -554;
	static uint8_t x426 = 1U;
	uint32_t x428 = 60U;
	int32_t t106 = 40;

    t106 = ((x425&(x426^x427))!=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = -1LL;
	volatile int32_t t107 = 12;

    t107 = ((x429&(x430^x431))!=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = -1;
	int32_t x434 = -1;
	uint64_t x435 = 14169382LLU;
	int8_t x436 = INT8_MIN;
	volatile int32_t t108 = -3468855;

    t108 = ((x433&(x434^x435))!=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = INT64_MAX;
	int8_t x438 = INT8_MIN;
	static int32_t x439 = 6;
	int64_t x440 = INT64_MAX;
	volatile int32_t t109 = -50;

    t109 = ((x437&(x438^x439))!=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int64_t x442 = -1131912802197170165LL;
	int8_t x444 = -20;
	volatile int32_t t110 = 290053846;

    t110 = ((x441&(x442^x443))!=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x445 = 66U;
	int8_t x446 = 49;
	uint32_t x447 = 1524819091U;
	volatile int32_t t111 = -226740548;

    t111 = ((x445&(x446^x447))!=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = -6;
	int8_t x450 = INT8_MIN;
	int16_t x451 = INT16_MIN;
	uint16_t x452 = UINT16_MAX;

    t112 = ((x449&(x450^x451))!=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = INT8_MIN;
	uint32_t x454 = 1527U;
	int32_t t113 = -250552;

    t113 = ((x453&(x454^x455))!=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x457 = 8;
	uint8_t x458 = 23U;
	int16_t x459 = INT16_MIN;
	volatile int32_t t114 = -136060;

    t114 = ((x457&(x458^x459))!=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x462 = -1;
	int64_t x463 = INT64_MIN;
	static int8_t x464 = -1;
	int32_t t115 = 110999;

    t115 = ((x461&(x462^x463))!=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = INT64_MAX;
	int16_t x466 = -408;
	volatile int32_t x467 = 6;
	int32_t t116 = 0;

    t116 = ((x465&(x466^x467))!=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x469 = 32126148705433LLU;
	volatile uint64_t x470 = UINT64_MAX;
	static volatile int64_t x471 = -415919811LL;
	static uint8_t x472 = 4U;
	int32_t t117 = -2022;

    t117 = ((x469&(x470^x471))!=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x473 = -1LL;
	int32_t x474 = INT32_MIN;
	uint16_t x476 = 272U;
	volatile int32_t t118 = -35736815;

    t118 = ((x473&(x474^x475))!=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x478 = 2U;
	int8_t x479 = -2;
	volatile int64_t x480 = -1LL;
	int32_t t119 = 195287;

    t119 = ((x477&(x478^x479))!=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = INT8_MIN;
	int32_t x482 = -481330;
	uint8_t x483 = UINT8_MAX;
	uint16_t x484 = 337U;
	int32_t t120 = 1;

    t120 = ((x481&(x482^x483))!=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x485 = UINT64_MAX;
	uint8_t x486 = UINT8_MAX;
	int32_t t121 = 114;

    t121 = ((x485&(x486^x487))!=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x489 = 265U;
	uint8_t x490 = 1U;
	int16_t x491 = -1;
	uint8_t x492 = UINT8_MAX;
	int32_t t122 = -6288;

    t122 = ((x489&(x490^x491))!=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x493 = 400474907LLU;
	int8_t x494 = INT8_MIN;
	int32_t x495 = INT32_MAX;

    t123 = ((x493&(x494^x495))!=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = -1;
	uint8_t x498 = 32U;
	uint8_t x500 = 0U;
	volatile int32_t t124 = 3;

    t124 = ((x497&(x498^x499))!=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = -1;
	static uint16_t x502 = 878U;
	static int64_t x503 = INT64_MIN;

    t125 = ((x501&(x502^x503))!=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int32_t x506 = INT32_MIN;
	static uint16_t x507 = UINT16_MAX;
	static int16_t x508 = INT16_MIN;
	int32_t t126 = -46;

    t126 = ((x505&(x506^x507))!=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x510 = INT32_MIN;
	static uint64_t x512 = 11718242LLU;
	int32_t t127 = 867;

    t127 = ((x509&(x510^x511))!=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x513 = -14129622;
	int64_t x514 = INT64_MAX;
	int32_t x515 = 168559;
	volatile int32_t t128 = -35043;

    t128 = ((x513&(x514^x515))!=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x517 = INT64_MAX;
	int16_t x518 = 184;
	volatile int16_t x519 = -10504;
	static int8_t x520 = -1;
	int32_t t129 = -55773;

    t129 = ((x517&(x518^x519))!=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x524 = UINT32_MAX;
	int32_t t130 = 460391038;

    t130 = ((x521&(x522^x523))!=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x525 = UINT16_MAX;
	static int8_t x528 = 1;
	volatile int32_t t131 = 4990;

    t131 = ((x525&(x526^x527))!=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = -1;
	int32_t x530 = INT32_MIN;
	uint64_t x531 = UINT64_MAX;
	static int8_t x532 = INT8_MAX;
	static int32_t t132 = 146145;

    t132 = ((x529&(x530^x531))!=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x535 = -1LL;
	int32_t x536 = 28108853;
	int32_t t133 = -854;

    t133 = ((x533&(x534^x535))!=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = -1;
	int32_t x538 = INT32_MIN;
	static int16_t x539 = -1;
	int8_t x540 = 0;
	static int32_t t134 = 339377046;

    t134 = ((x537&(x538^x539))!=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = -1;
	int8_t x542 = 5;
	volatile int32_t t135 = -449521728;

    t135 = ((x541&(x542^x543))!=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x545 = INT16_MIN;
	int8_t x546 = 43;
	int32_t x547 = -1750278;

    t136 = ((x545&(x546^x547))!=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x550 = -1LL;
	int64_t x551 = 33946198272113LL;
	static int16_t x552 = INT16_MAX;
	volatile int32_t t137 = -573103254;

    t137 = ((x549&(x550^x551))!=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x554 = UINT8_MAX;

    t138 = ((x553&(x554^x555))!=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x558 = INT16_MAX;
	int16_t x559 = -1;
	volatile int32_t t139 = 449130;

    t139 = ((x557&(x558^x559))!=x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x561 = INT8_MIN;
	static uint8_t x562 = 55U;
	static volatile uint32_t x563 = UINT32_MAX;
	static int8_t x564 = 0;

    t140 = ((x561&(x562^x563))!=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x565 = UINT16_MAX;
	uint8_t x566 = UINT8_MAX;
	uint8_t x567 = 27U;
	int16_t x568 = -1;
	volatile int32_t t141 = 39794001;

    t141 = ((x565&(x566^x567))!=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = 0;
	int16_t x572 = INT16_MIN;
	static int32_t t142 = -11028513;

    t142 = ((x569&(x570^x571))!=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x573 = UINT16_MAX;
	volatile int64_t x575 = -6689262LL;
	volatile int32_t t143 = 16610134;

    t143 = ((x573&(x574^x575))!=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x577 = 939U;
	int64_t x579 = INT64_MAX;
	int32_t t144 = 24;

    t144 = ((x577&(x578^x579))!=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x581 = 1457636U;
	int8_t x582 = -22;
	int32_t x583 = INT32_MIN;
	static int64_t x584 = INT64_MAX;

    t145 = ((x581&(x582^x583))!=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x585 = UINT64_MAX;
	int64_t x587 = INT64_MIN;
	int32_t x588 = -1;
	volatile int32_t t146 = -8926278;

    t146 = ((x585&(x586^x587))!=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x589 = 1;
	int32_t x590 = INT32_MIN;
	static volatile uint8_t x591 = UINT8_MAX;
	int8_t x592 = INT8_MIN;
	int32_t t147 = -144;

    t147 = ((x589&(x590^x591))!=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x593 = UINT8_MAX;
	uint32_t x594 = 58U;
	int16_t x595 = INT16_MIN;
	int16_t x596 = INT16_MIN;
	volatile int32_t t148 = -2026267;

    t148 = ((x593&(x594^x595))!=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = 1;
	volatile uint32_t x598 = 1917907U;
	static int64_t x599 = -1883LL;
	volatile int8_t x600 = INT8_MIN;
	int32_t t149 = -39839889;

    t149 = ((x597&(x598^x599))!=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = -1;
	int32_t x603 = -1;
	volatile uint8_t x604 = 82U;

    t150 = ((x601&(x602^x603))!=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x605 = -734;
	int64_t x606 = 399605572063274452LL;
	static volatile uint32_t x607 = 17U;
	volatile int8_t x608 = INT8_MAX;
	volatile int32_t t151 = -42;

    t151 = ((x605&(x606^x607))!=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x609 = -1;
	int64_t x610 = INT64_MAX;
	static int16_t x611 = INT16_MAX;
	int64_t x612 = INT64_MIN;
	static int32_t t152 = -51607534;

    t152 = ((x609&(x610^x611))!=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = -1;
	int16_t x614 = INT16_MIN;
	static volatile int16_t x615 = -1;
	int8_t x616 = INT8_MAX;
	volatile int32_t t153 = 3;

    t153 = ((x613&(x614^x615))!=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = -1;
	int8_t x618 = INT8_MAX;
	int32_t x619 = INT32_MIN;
	uint64_t x620 = 961767413444940LLU;
	int32_t t154 = 202;

    t154 = ((x617&(x618^x619))!=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x622 = INT16_MIN;
	int64_t x623 = INT64_MIN;
	uint64_t x624 = UINT64_MAX;

    t155 = ((x621&(x622^x623))!=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x625 = INT32_MAX;
	uint8_t x626 = 60U;
	int16_t x627 = INT16_MIN;
	volatile int64_t x628 = -1LL;
	int32_t t156 = -2664;

    t156 = ((x625&(x626^x627))!=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = -7562;
	uint64_t x630 = UINT64_MAX;
	volatile int64_t x631 = INT64_MIN;
	uint32_t x632 = UINT32_MAX;
	static volatile int32_t t157 = 273612986;

    t157 = ((x629&(x630^x631))!=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = INT16_MIN;
	static uint16_t x636 = 20029U;
	int32_t t158 = -1666;

    t158 = ((x633&(x634^x635))!=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x637 = UINT16_MAX;
	int32_t x638 = 23;
	int32_t x639 = -1;
	int16_t x640 = INT16_MIN;

    t159 = ((x637&(x638^x639))!=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x641 = UINT16_MAX;
	static uint16_t x642 = UINT16_MAX;
	uint32_t x643 = 15785U;
	volatile int64_t x644 = -9765899384904683LL;
	static int32_t t160 = -1;

    t160 = ((x641&(x642^x643))!=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x645 = UINT16_MAX;
	uint64_t x646 = 3553LLU;
	int8_t x648 = INT8_MIN;
	volatile int32_t t161 = -1067677475;

    t161 = ((x645&(x646^x647))!=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x650 = 97U;
	uint16_t x651 = 3132U;
	static uint32_t x652 = 39718984U;
	volatile int32_t t162 = -1;

    t162 = ((x649&(x650^x651))!=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = INT32_MIN;
	int8_t x654 = INT8_MIN;
	volatile uint64_t x655 = UINT64_MAX;
	volatile int16_t x656 = -3;
	int32_t t163 = 54;

    t163 = ((x653&(x654^x655))!=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x657 = UINT16_MAX;
	static int32_t x658 = -1;
	static volatile uint64_t x659 = 101342LLU;
	int32_t x660 = -25663;
	volatile int32_t t164 = -114073;

    t164 = ((x657&(x658^x659))!=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x661 = 445U;
	static int16_t x662 = -1;
	volatile int64_t x664 = -254LL;
	volatile int32_t t165 = 655898041;

    t165 = ((x661&(x662^x663))!=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x665 = INT8_MIN;
	int64_t x666 = 48455LL;
	uint64_t x667 = UINT64_MAX;
	uint32_t x668 = 1911192285U;
	volatile int32_t t166 = 1033;

    t166 = ((x665&(x666^x667))!=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = INT64_MIN;
	uint32_t x671 = UINT32_MAX;
	uint16_t x672 = 12U;
	volatile int32_t t167 = -1357;

    t167 = ((x669&(x670^x671))!=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x674 = 81U;
	uint8_t x675 = 1U;
	int32_t t168 = 87009584;

    t168 = ((x673&(x674^x675))!=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint32_t x677 = 117220U;
	static uint8_t x678 = 3U;
	uint32_t x679 = 1357U;
	volatile int8_t x680 = -21;
	volatile int32_t t169 = -8317065;

    t169 = ((x677&(x678^x679))!=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = INT16_MAX;
	uint16_t x682 = 203U;
	static int64_t x683 = 49676916919920181LL;

    t170 = ((x681&(x682^x683))!=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x685 = UINT32_MAX;
	int32_t x686 = -55;
	int8_t x687 = INT8_MIN;
	uint32_t x688 = UINT32_MAX;
	int32_t t171 = -23640;

    t171 = ((x685&(x686^x687))!=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int16_t x689 = -15200;
	static uint32_t x690 = 74087U;
	static int8_t x691 = -29;
	uint16_t x692 = 3U;
	int32_t t172 = 14;

    t172 = ((x689&(x690^x691))!=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x693 = INT32_MIN;
	uint32_t x694 = UINT32_MAX;
	static int16_t x695 = INT16_MAX;
	uint32_t x696 = 0U;
	volatile int32_t t173 = 2782410;

    t173 = ((x693&(x694^x695))!=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x697 = 4LL;
	static volatile int16_t x698 = INT16_MIN;
	int64_t x699 = -22874922LL;
	uint64_t x700 = 44LLU;
	int32_t t174 = -135922;

    t174 = ((x697&(x698^x699))!=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = INT16_MIN;
	uint32_t x702 = UINT32_MAX;
	int32_t x703 = INT32_MAX;
	volatile int64_t x704 = 7348016060524LL;
	volatile int32_t t175 = -11;

    t175 = ((x701&(x702^x703))!=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x705 = 1U;
	int8_t x706 = INT8_MIN;
	int64_t x707 = INT64_MIN;
	static int64_t x708 = -1LL;
	static int32_t t176 = -6939617;

    t176 = ((x705&(x706^x707))!=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = -14369LL;
	uint16_t x710 = 0U;
	int64_t x712 = -12821462678010440LL;
	volatile int32_t t177 = 123;

    t177 = ((x709&(x710^x711))!=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x715 = 299850LLU;
	uint32_t x716 = UINT32_MAX;
	int32_t t178 = -3537876;

    t178 = ((x713&(x714^x715))!=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x717 = 701831259U;
	static int8_t x719 = INT8_MAX;
	static int8_t x720 = INT8_MAX;
	int32_t t179 = 1997;

    t179 = ((x717&(x718^x719))!=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = UINT64_MAX;
	static int64_t x722 = INT64_MIN;
	int32_t x723 = -1;
	int32_t x724 = INT32_MIN;
	int32_t t180 = 296360756;

    t180 = ((x721&(x722^x723))!=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int8_t x725 = INT8_MIN;
	int16_t x726 = INT16_MIN;
	uint16_t x728 = 1U;
	volatile int32_t t181 = -364091;

    t181 = ((x725&(x726^x727))!=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = 1;
	int8_t x730 = INT8_MAX;
	int8_t x731 = INT8_MIN;
	int8_t x732 = INT8_MIN;
	volatile int32_t t182 = -798114;

    t182 = ((x729&(x730^x731))!=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x733 = 14036U;
	uint8_t x734 = UINT8_MAX;
	uint64_t x735 = UINT64_MAX;
	static int16_t x736 = 2639;
	volatile int32_t t183 = -5439113;

    t183 = ((x733&(x734^x735))!=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x737 = 4U;
	int64_t x738 = INT64_MAX;
	static int32_t x740 = -126;
	volatile int32_t t184 = 3176;

    t184 = ((x737&(x738^x739))!=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x741 = UINT16_MAX;
	uint8_t x743 = 3U;
	volatile int64_t x744 = INT64_MIN;
	volatile int32_t t185 = -8341;

    t185 = ((x741&(x742^x743))!=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x745 = 7U;
	static int16_t x746 = 1908;
	int64_t x747 = 63995LL;
	int64_t x748 = INT64_MAX;
	volatile int32_t t186 = -9617671;

    t186 = ((x745&(x746^x747))!=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = INT16_MIN;
	volatile int16_t x750 = -1;
	int8_t x751 = INT8_MIN;
	int32_t x752 = -12;
	int32_t t187 = -1005451572;

    t187 = ((x749&(x750^x751))!=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = INT16_MIN;
	int8_t x754 = 0;
	static int64_t x756 = 7LL;

    t188 = ((x753&(x754^x755))!=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = INT64_MAX;
	uint64_t x760 = 19624845686LLU;

    t189 = ((x757&(x758^x759))!=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x762 = 7LLU;
	int8_t x763 = -7;
	int64_t x764 = 280578369176LL;
	volatile int32_t t190 = 0;

    t190 = ((x761&(x762^x763))!=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = INT16_MIN;
	int64_t x766 = -1LL;
	int16_t x767 = 35;
	static uint16_t x768 = 243U;
	int32_t t191 = 109239439;

    t191 = ((x765&(x766^x767))!=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x770 = 79;
	uint16_t x771 = 155U;
	volatile int32_t t192 = 243125;

    t192 = ((x769&(x770^x771))!=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x774 = INT64_MAX;
	int8_t x775 = INT8_MIN;
	uint64_t x776 = UINT64_MAX;

    t193 = ((x773&(x774^x775))!=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = INT32_MIN;
	volatile int8_t x778 = INT8_MIN;
	volatile int16_t x779 = -3;
	int32_t x780 = -1;

    t194 = ((x777&(x778^x779))!=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = INT32_MIN;
	int16_t x782 = INT16_MIN;
	uint8_t x783 = UINT8_MAX;
	int64_t x784 = -1676720716414LL;
	static int32_t t195 = 399120;

    t195 = ((x781&(x782^x783))!=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x785 = INT8_MIN;
	uint8_t x787 = UINT8_MAX;
	uint64_t x788 = UINT64_MAX;

    t196 = ((x785&(x786^x787))!=x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x789 = 6U;
	static uint32_t x790 = UINT32_MAX;
	int16_t x791 = INT16_MAX;
	int32_t x792 = INT32_MIN;

    t197 = ((x789&(x790^x791))!=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x793 = 0U;
	int32_t x794 = INT32_MAX;
	static volatile int16_t x795 = INT16_MAX;
	volatile int32_t t198 = 81987;

    t198 = ((x793&(x794^x795))!=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x797 = -8342446372546850LL;
	int64_t x799 = INT64_MAX;
	int16_t x800 = -297;
	volatile int32_t t199 = 942269955;

    t199 = ((x797&(x798^x799))!=x800);

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

