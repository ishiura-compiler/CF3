
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

static int32_t x1 = -4961709;
int64_t x2 = INT64_MIN;
int8_t x9 = INT8_MAX;
static volatile int32_t t2 = -251;
int8_t x13 = 1;
int8_t x14 = -1;
volatile int32_t t3 = 915;
static int64_t x18 = -1LL;
uint8_t x21 = UINT8_MAX;
int16_t x25 = 104;
static int32_t x27 = INT32_MIN;
static int64_t x28 = -1LL;
volatile int32_t t6 = -1804;
uint64_t x33 = 452442924391376LLU;
uint16_t x40 = 9713U;
int8_t x48 = 3;
static uint32_t x54 = 14U;
uint8_t x56 = 31U;
volatile uint64_t x60 = 237991999750270LLU;
static uint32_t x64 = UINT32_MAX;
volatile int8_t x68 = -1;
int32_t x74 = -1;
int64_t x75 = -1LL;
volatile int8_t x79 = 51;
int8_t x81 = INT8_MAX;
uint8_t x82 = UINT8_MAX;
int16_t x84 = 3;
int32_t t18 = 10613663;
volatile int16_t x86 = -1;
int32_t x97 = -1;
static int64_t x102 = INT64_MIN;
uint64_t x103 = 233554696352LLU;
volatile int32_t t21 = -123825;
uint64_t x110 = 61455616022401446LLU;
uint16_t x114 = UINT16_MAX;
int32_t t23 = -140068;
int32_t x121 = INT32_MIN;
uint32_t x123 = 88594589U;
uint64_t x124 = 113537966341734LLU;
uint8_t x133 = 23U;
int32_t x134 = INT32_MAX;
int8_t x150 = -1;
int64_t x156 = 15829582119529444LL;
int16_t x168 = 0;
int32_t t32 = 2184615;
static int8_t x172 = -61;
uint16_t x176 = 27U;
uint32_t x177 = UINT32_MAX;
uint64_t x183 = 175500LLU;
volatile int32_t t36 = 65;
static volatile int32_t x189 = 7;
int32_t t38 = -1850;
int32_t x194 = -1;
uint32_t x195 = UINT32_MAX;
static uint16_t x203 = UINT16_MAX;
uint8_t x205 = 0U;
int8_t x209 = INT8_MIN;
uint16_t x210 = 13U;
volatile int32_t t43 = 111971695;
uint16_t x220 = 20U;
static volatile uint64_t x222 = UINT64_MAX;
volatile int8_t x233 = INT8_MIN;
static uint64_t x235 = 48245673103LLU;
int32_t t48 = 24;
static int64_t x250 = INT64_MIN;
int8_t x252 = INT8_MIN;
static int32_t t51 = -3;
int16_t x259 = 703;
uint16_t x270 = 23241U;
uint32_t x276 = UINT32_MAX;
volatile int64_t x278 = 4787LL;
int32_t x283 = 1065;
int16_t x289 = INT16_MIN;
static int64_t x299 = 5LL;
static int32_t t60 = 5297;
int8_t x304 = 18;
volatile int8_t x308 = INT8_MIN;
static int32_t x316 = -1;
int16_t x318 = 15;
static uint8_t x328 = UINT8_MAX;
volatile int8_t x329 = -25;
volatile uint64_t x332 = 7148LLU;
uint32_t x333 = UINT32_MAX;
volatile int64_t x342 = -1LL;
int32_t x346 = INT32_MIN;
static int32_t x349 = INT32_MIN;
int8_t x356 = 23;
static int16_t x357 = INT16_MIN;
uint16_t x358 = 0U;
static volatile int64_t x359 = -34555536430847LL;
volatile int32_t t73 = 253091438;
volatile int8_t x361 = 0;
uint8_t x367 = 0U;
volatile int32_t t77 = 1;
static int32_t t79 = -7;
int8_t x402 = INT8_MAX;
int16_t x403 = -65;
int16_t x406 = INT16_MAX;
int64_t x412 = INT64_MIN;
volatile int32_t x418 = INT32_MAX;
int16_t x424 = -3833;
int16_t x435 = -2;
uint32_t x438 = 869707U;
int32_t x439 = INT32_MIN;
volatile int32_t t92 = -510250;
uint64_t x446 = 55LLU;
uint64_t x460 = UINT64_MAX;
volatile int64_t x468 = 3LL;
volatile int64_t x481 = INT64_MIN;
int16_t x483 = INT16_MIN;
static volatile int32_t t100 = 39706048;
int16_t x487 = -3139;
volatile int32_t t103 = 7757894;
volatile uint64_t x505 = UINT64_MAX;
int64_t x506 = INT64_MIN;
volatile int32_t t104 = 1;
int16_t x509 = INT16_MAX;
int32_t x512 = INT32_MAX;
static uint32_t x515 = UINT32_MAX;
int16_t x538 = -3;
uint64_t x539 = 2105782LLU;
uint64_t x544 = UINT64_MAX;
static volatile int32_t t118 = 16443736;
static volatile int8_t x574 = -1;
static volatile uint32_t x579 = UINT32_MAX;
uint8_t x583 = 6U;
int64_t x584 = -1LL;
uint64_t x586 = 665303LLU;
static volatile uint32_t x587 = UINT32_MAX;
int32_t t122 = 214265;
uint32_t x596 = UINT32_MAX;
static int32_t t123 = -398260717;
uint16_t x621 = 2U;
volatile int32_t t129 = -1;
uint16_t x636 = 2968U;
uint8_t x640 = UINT8_MAX;
static uint16_t x641 = 2U;
volatile uint16_t x648 = 32228U;
int32_t x649 = -110446;
uint8_t x661 = 56U;
volatile uint16_t x664 = 442U;
int16_t x668 = -1;
volatile uint32_t x669 = 97424U;
volatile int32_t x670 = 495136458;
uint32_t x673 = UINT32_MAX;
int32_t x676 = INT32_MIN;
int32_t x678 = -1;
static int8_t x680 = INT8_MAX;
int32_t x682 = INT32_MAX;
static int32_t x688 = INT32_MIN;
volatile int16_t x691 = 0;
int32_t t143 = 369513421;
volatile int8_t x701 = INT8_MIN;
static int64_t x714 = INT64_MAX;
uint32_t x715 = 13144784U;
static volatile uint64_t x717 = 812949490843096LLU;
volatile uint16_t x720 = 1U;
int32_t t147 = 51088622;
volatile int32_t t148 = 0;
volatile int16_t x727 = -1;
volatile int64_t x730 = 5862016279852162LL;
static uint16_t x731 = UINT16_MAX;
volatile int16_t x741 = INT16_MAX;
uint32_t x743 = UINT32_MAX;
int32_t x748 = -1;
int16_t x749 = -249;
volatile int32_t t155 = 10059108;
int16_t x761 = -1;
volatile int64_t x762 = 420LL;
uint64_t x768 = UINT64_MAX;
uint16_t x772 = UINT16_MAX;
static int8_t x783 = -1;
static int32_t x790 = INT32_MAX;
int64_t x791 = -158646594833593951LL;
int32_t t161 = 16037;
uint16_t x793 = 2427U;
int64_t x799 = -1LL;
static int64_t x802 = INT64_MIN;
int16_t x803 = -1;
int32_t t164 = -615245;
static volatile int8_t x814 = 0;
volatile uint8_t x815 = 1U;
volatile uint32_t x826 = 60U;
volatile uint32_t x828 = 92314U;
uint32_t x838 = 255167U;
int32_t t173 = 55471526;
int32_t x848 = INT32_MIN;
volatile int16_t x850 = INT16_MIN;
static int16_t x863 = -1;
uint64_t x867 = 103083254177333LLU;
uint16_t x885 = UINT16_MAX;
int16_t x887 = -1;
volatile int8_t x890 = INT8_MAX;
int8_t x893 = 3;
static volatile int64_t x895 = INT64_MIN;
int64_t x898 = -1LL;
uint32_t x899 = UINT32_MAX;
static uint16_t x902 = 3U;
int16_t x916 = 1805;
volatile int8_t x930 = -18;
int32_t t195 = -119;
int32_t x952 = INT32_MIN;
volatile uint64_t x960 = 3195462731LLU;
volatile int32_t t199 = -1;


void f0(void) {
    	int64_t x3 = -141218217962695525LL;
	volatile uint64_t x4 = 127709045108LLU;
	volatile int32_t t0 = 25;

    t0 = ((x1-(x2-x3))<=x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = 26616;
	uint16_t x6 = UINT16_MAX;
	int8_t x7 = INT8_MIN;
	int16_t x8 = INT16_MIN;
	static volatile int32_t t1 = 523211;

    t1 = ((x5-(x6-x7))<=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x10 = 1U;
	uint16_t x11 = UINT16_MAX;
	uint16_t x12 = 137U;

    t2 = ((x9-(x10-x11))<=x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x15 = INT8_MIN;
	int32_t x16 = INT32_MAX;

    t3 = ((x13-(x14-x15))<=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 4LLU;
	uint16_t x19 = 50U;
	static uint16_t x20 = 2U;
	int32_t t4 = 306;

    t4 = ((x17-(x18-x19))<=x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x22 = INT32_MAX;
	uint32_t x23 = 23715223U;
	static int8_t x24 = -1;
	volatile int32_t t5 = 9408163;

    t5 = ((x21-(x22-x23))<=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x26 = INT64_MIN;

    t6 = ((x25-(x26-x27))<=x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x34 = 59U;
	static int32_t x35 = 196653944;
	int32_t x36 = INT32_MAX;
	int32_t t7 = -9335614;

    t7 = ((x33-(x34-x35))<=x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x37 = 69U;
	uint16_t x38 = 1631U;
	volatile uint8_t x39 = 3U;
	int32_t t8 = 1;

    t8 = ((x37-(x38-x39))<=x40);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x45 = 64U;
	volatile uint16_t x46 = UINT16_MAX;
	int32_t x47 = INT32_MAX;
	int32_t t9 = 2;

    t9 = ((x45-(x46-x47))<=x48);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x49 = INT64_MAX;
	static volatile int8_t x50 = -11;
	uint64_t x51 = 1869LLU;
	int16_t x52 = -1;
	int32_t t10 = 29097;

    t10 = ((x49-(x50-x51))<=x52);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x53 = INT64_MIN;
	int64_t x55 = INT64_MAX;
	volatile int32_t t11 = -32323;

    t11 = ((x53-(x54-x55))<=x56);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x57 = -1LL;
	uint8_t x58 = 0U;
	static int32_t x59 = -3262;
	int32_t t12 = 0;

    t12 = ((x57-(x58-x59))<=x60);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x61 = 7646915727242781416LLU;
	volatile int64_t x62 = -1LL;
	uint32_t x63 = UINT32_MAX;
	int32_t t13 = 58097;

    t13 = ((x61-(x62-x63))<=x64);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x65 = 6144505671LLU;
	uint8_t x66 = 59U;
	int32_t x67 = -218463;
	volatile int32_t t14 = -62123016;

    t14 = ((x65-(x66-x67))<=x68);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x69 = INT32_MIN;
	volatile uint32_t x70 = UINT32_MAX;
	static int8_t x71 = 1;
	int64_t x72 = -1LL;
	volatile int32_t t15 = -11;

    t15 = ((x69-(x70-x71))<=x72);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x73 = INT32_MIN;
	int8_t x76 = -2;
	static int32_t t16 = -242;

    t16 = ((x73-(x74-x75))<=x76);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x77 = 3U;
	int64_t x78 = 2436LL;
	volatile uint64_t x80 = 1419971226244LLU;
	static volatile int32_t t17 = -1;

    t17 = ((x77-(x78-x79))<=x80);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x83 = INT8_MIN;

    t18 = ((x81-(x82-x83))<=x84);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x85 = -1;
	volatile int16_t x87 = INT16_MIN;
	volatile int64_t x88 = INT64_MAX;
	volatile int32_t t19 = 7599;

    t19 = ((x85-(x86-x87))<=x88);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x98 = -1;
	int8_t x99 = -42;
	uint32_t x100 = UINT32_MAX;
	int32_t t20 = 10122;

    t20 = ((x97-(x98-x99))<=x100);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint16_t x101 = 6U;
	uint8_t x104 = 6U;

    t21 = ((x101-(x102-x103))<=x104);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x109 = 532842;
	static int16_t x111 = INT16_MAX;
	uint32_t x112 = 316951U;
	volatile int32_t t22 = 0;

    t22 = ((x109-(x110-x111))<=x112);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x113 = -1473;
	int8_t x115 = INT8_MAX;
	static int16_t x116 = -1;

    t23 = ((x113-(x114-x115))<=x116);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x122 = -49812443629407365LL;
	int32_t t24 = 57700;

    t24 = ((x121-(x122-x123))<=x124);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint32_t x135 = UINT32_MAX;
	int16_t x136 = INT16_MAX;
	int32_t t25 = 65;

    t25 = ((x133-(x134-x135))<=x136);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x137 = INT32_MIN;
	volatile uint64_t x138 = 98LLU;
	uint32_t x139 = 21803009U;
	int16_t x140 = INT16_MIN;
	volatile int32_t t26 = 0;

    t26 = ((x137-(x138-x139))<=x140);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x141 = INT16_MAX;
	int8_t x142 = INT8_MIN;
	int32_t x143 = 1;
	uint8_t x144 = 1U;
	static int32_t t27 = -18;

    t27 = ((x141-(x142-x143))<=x144);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int8_t x145 = 0;
	int64_t x146 = -1LL;
	int16_t x147 = -1;
	uint32_t x148 = UINT32_MAX;
	volatile int32_t t28 = 13127;

    t28 = ((x145-(x146-x147))<=x148);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x149 = 17667;
	int8_t x151 = 0;
	static uint64_t x152 = 38858529LLU;
	int32_t t29 = -14731460;

    t29 = ((x149-(x150-x151))<=x152);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x153 = INT64_MAX;
	uint32_t x154 = 46455029U;
	int32_t x155 = 17549970;
	int32_t t30 = 37287;

    t30 = ((x153-(x154-x155))<=x156);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x161 = 114U;
	uint8_t x162 = 4U;
	int8_t x163 = -6;
	volatile int16_t x164 = -1;
	int32_t t31 = -50886121;

    t31 = ((x161-(x162-x163))<=x164);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x165 = -593LL;
	int64_t x166 = -1LL;
	static int16_t x167 = 1;

    t32 = ((x165-(x166-x167))<=x168);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x169 = INT8_MIN;
	int8_t x170 = 10;
	uint64_t x171 = 4LLU;
	int32_t t33 = -43428328;

    t33 = ((x169-(x170-x171))<=x172);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x173 = 14124182;
	int32_t x174 = -1;
	int8_t x175 = -1;
	volatile int32_t t34 = 2616;

    t34 = ((x173-(x174-x175))<=x176);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x178 = INT8_MIN;
	int16_t x179 = 0;
	uint32_t x180 = 1028U;
	volatile int32_t t35 = -91321999;

    t35 = ((x177-(x178-x179))<=x180);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x181 = INT32_MIN;
	int16_t x182 = INT16_MAX;
	uint16_t x184 = 2U;

    t36 = ((x181-(x182-x183))<=x184);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint64_t x185 = UINT64_MAX;
	int8_t x186 = INT8_MIN;
	uint64_t x187 = 4LLU;
	uint16_t x188 = 23U;
	volatile int32_t t37 = 56200;

    t37 = ((x185-(x186-x187))<=x188);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x190 = 428LLU;
	uint16_t x191 = 2969U;
	int8_t x192 = INT8_MIN;

    t38 = ((x189-(x190-x191))<=x192);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x193 = -1;
	int8_t x196 = INT8_MIN;
	volatile int32_t t39 = 90494251;

    t39 = ((x193-(x194-x195))<=x196);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x197 = INT8_MIN;
	int32_t x198 = -1;
	volatile uint32_t x199 = UINT32_MAX;
	int8_t x200 = -19;
	volatile int32_t t40 = 19;

    t40 = ((x197-(x198-x199))<=x200);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x201 = INT16_MAX;
	volatile int8_t x202 = INT8_MIN;
	int16_t x204 = 4;
	volatile int32_t t41 = -35623191;

    t41 = ((x201-(x202-x203))<=x204);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x206 = 81U;
	volatile int32_t x207 = -17889957;
	uint64_t x208 = 164939093830681348LLU;
	int32_t t42 = -22791671;

    t42 = ((x205-(x206-x207))<=x208);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x211 = UINT16_MAX;
	uint16_t x212 = 12U;

    t43 = ((x209-(x210-x211))<=x212);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x213 = 10LLU;
	volatile uint32_t x214 = 79217U;
	int16_t x215 = INT16_MAX;
	uint64_t x216 = 494534738322703LLU;
	static volatile int32_t t44 = 207993;

    t44 = ((x213-(x214-x215))<=x216);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x217 = INT16_MIN;
	int32_t x218 = 54625;
	volatile int8_t x219 = INT8_MIN;
	volatile int32_t t45 = 1443;

    t45 = ((x217-(x218-x219))<=x220);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int32_t x221 = -445009474;
	int8_t x223 = INT8_MAX;
	int16_t x224 = 14;
	volatile int32_t t46 = -3500;

    t46 = ((x221-(x222-x223))<=x224);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x225 = UINT32_MAX;
	static uint64_t x226 = 1LLU;
	int64_t x227 = -1LL;
	static int32_t x228 = INT32_MAX;
	int32_t t47 = -2821;

    t47 = ((x225-(x226-x227))<=x228);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x234 = INT8_MIN;
	int8_t x236 = -1;

    t48 = ((x233-(x234-x235))<=x236);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x241 = 42U;
	static int64_t x242 = 802860LL;
	uint32_t x243 = 3610U;
	int8_t x244 = INT8_MIN;
	volatile int32_t t49 = -140625494;

    t49 = ((x241-(x242-x243))<=x244);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x245 = 3278;
	int16_t x246 = INT16_MIN;
	volatile int8_t x247 = -1;
	uint32_t x248 = 20745504U;
	static volatile int32_t t50 = -2639972;

    t50 = ((x245-(x246-x247))<=x248);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x249 = INT8_MAX;
	volatile int32_t x251 = INT32_MIN;

    t51 = ((x249-(x250-x251))<=x252);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x253 = INT8_MIN;
	int16_t x254 = INT16_MAX;
	static volatile uint16_t x255 = 6U;
	int32_t x256 = INT32_MAX;
	int32_t t52 = -29339;

    t52 = ((x253-(x254-x255))<=x256);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x257 = -1LL;
	static volatile int16_t x258 = INT16_MIN;
	uint64_t x260 = UINT64_MAX;
	int32_t t53 = 0;

    t53 = ((x257-(x258-x259))<=x260);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint64_t x269 = 251960042903LLU;
	static int32_t x271 = 3261;
	static uint16_t x272 = UINT16_MAX;
	volatile int32_t t54 = -61216;

    t54 = ((x269-(x270-x271))<=x272);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x273 = -1;
	static uint32_t x274 = 1U;
	uint32_t x275 = 158604U;
	volatile int32_t t55 = -1;

    t55 = ((x273-(x274-x275))<=x276);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x277 = INT16_MAX;
	int16_t x279 = INT16_MIN;
	static uint64_t x280 = UINT64_MAX;
	static volatile int32_t t56 = -1;

    t56 = ((x277-(x278-x279))<=x280);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x281 = 22167U;
	uint64_t x282 = 1116677304301LLU;
	static int16_t x284 = -1;
	volatile int32_t t57 = -114197716;

    t57 = ((x281-(x282-x283))<=x284);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x285 = 118U;
	uint64_t x286 = 65813733LLU;
	volatile int64_t x287 = INT64_MIN;
	int16_t x288 = 1;
	int32_t t58 = 35944556;

    t58 = ((x285-(x286-x287))<=x288);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x290 = INT64_MIN;
	int16_t x291 = -285;
	int16_t x292 = -1;
	int32_t t59 = -1285;

    t59 = ((x289-(x290-x291))<=x292);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int64_t x297 = INT64_MAX;
	static volatile int16_t x298 = 1958;
	int16_t x300 = INT16_MAX;

    t60 = ((x297-(x298-x299))<=x300);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x301 = INT16_MIN;
	int16_t x302 = 11;
	static int32_t x303 = INT32_MAX;
	int32_t t61 = -111;

    t61 = ((x301-(x302-x303))<=x304);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x305 = -1LL;
	int32_t x306 = -2012731;
	uint32_t x307 = 24218352U;
	static volatile int32_t t62 = -8539980;

    t62 = ((x305-(x306-x307))<=x308);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x309 = -1;
	int8_t x310 = INT8_MIN;
	uint64_t x311 = 82537808LLU;
	int16_t x312 = INT16_MAX;
	int32_t t63 = -14495;

    t63 = ((x309-(x310-x311))<=x312);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint16_t x313 = 4U;
	uint32_t x314 = UINT32_MAX;
	static int8_t x315 = INT8_MIN;
	int32_t t64 = 237;

    t64 = ((x313-(x314-x315))<=x316);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x317 = 706206U;
	uint32_t x319 = 5281580U;
	uint64_t x320 = 1LLU;
	int32_t t65 = 883197071;

    t65 = ((x317-(x318-x319))<=x320);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x325 = -168;
	uint32_t x326 = 1U;
	int8_t x327 = INT8_MAX;
	volatile int32_t t66 = -5290;

    t66 = ((x325-(x326-x327))<=x328);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x330 = INT8_MIN;
	int16_t x331 = INT16_MAX;
	volatile int32_t t67 = -3;

    t67 = ((x329-(x330-x331))<=x332);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x334 = 12U;
	int16_t x335 = INT16_MAX;
	int16_t x336 = 0;
	volatile int32_t t68 = -56915;

    t68 = ((x333-(x334-x335))<=x336);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x341 = 621U;
	volatile uint16_t x343 = 1909U;
	int32_t x344 = -1;
	static volatile int32_t t69 = -6;

    t69 = ((x341-(x342-x343))<=x344);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x345 = INT64_MIN;
	static volatile int64_t x347 = 31887054040464954LL;
	uint8_t x348 = 12U;
	static int32_t t70 = 5061209;

    t70 = ((x345-(x346-x347))<=x348);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x350 = 198689LL;
	volatile int32_t x351 = INT32_MAX;
	static volatile int32_t x352 = INT32_MAX;
	static int32_t t71 = -95228;

    t71 = ((x349-(x350-x351))<=x352);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x353 = -1;
	static uint8_t x354 = 8U;
	uint16_t x355 = 59U;
	volatile int32_t t72 = 24;

    t72 = ((x353-(x354-x355))<=x356);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x360 = 6454U;

    t73 = ((x357-(x358-x359))<=x360);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x362 = INT16_MIN;
	volatile int32_t x363 = INT32_MIN;
	volatile int16_t x364 = -28;
	int32_t t74 = 260942915;

    t74 = ((x361-(x362-x363))<=x364);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x365 = INT16_MIN;
	int64_t x366 = -44813963056LL;
	static int32_t x368 = -28296099;
	int32_t t75 = -84;

    t75 = ((x365-(x366-x367))<=x368);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x369 = -1;
	volatile int32_t x370 = -1;
	int32_t x371 = -1276567;
	volatile int64_t x372 = INT64_MIN;
	int32_t t76 = -5302;

    t76 = ((x369-(x370-x371))<=x372);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint16_t x373 = UINT16_MAX;
	uint8_t x374 = 62U;
	int16_t x375 = INT16_MIN;
	volatile int16_t x376 = -1;

    t77 = ((x373-(x374-x375))<=x376);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x377 = -490LL;
	int8_t x378 = -11;
	int32_t x379 = -62638;
	int16_t x380 = -999;
	int32_t t78 = -1104943;

    t78 = ((x377-(x378-x379))<=x380);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x381 = -456;
	static int8_t x382 = 1;
	volatile int16_t x383 = -1;
	int16_t x384 = 0;

    t79 = ((x381-(x382-x383))<=x384);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x385 = 3889U;
	uint32_t x386 = 379863U;
	int16_t x387 = 4225;
	int32_t x388 = INT32_MIN;
	int32_t t80 = 1015;

    t80 = ((x385-(x386-x387))<=x388);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x389 = UINT32_MAX;
	volatile int16_t x390 = 1482;
	static int32_t x391 = -3863;
	int8_t x392 = -1;
	int32_t t81 = 61867;

    t81 = ((x389-(x390-x391))<=x392);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x397 = -1;
	static int8_t x398 = -1;
	int64_t x399 = INT64_MIN;
	int32_t x400 = -1;
	static int32_t t82 = 0;

    t82 = ((x397-(x398-x399))<=x400);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x401 = 665182610343285722LLU;
	volatile int64_t x404 = 6501858LL;
	int32_t t83 = -99233790;

    t83 = ((x401-(x402-x403))<=x404);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x405 = INT64_MIN;
	uint16_t x407 = UINT16_MAX;
	int64_t x408 = 964720LL;
	volatile int32_t t84 = -15;

    t84 = ((x405-(x406-x407))<=x408);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x409 = 1U;
	int16_t x410 = INT16_MAX;
	int32_t x411 = -164356;
	volatile int32_t t85 = -111519;

    t85 = ((x409-(x410-x411))<=x412);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x413 = UINT32_MAX;
	volatile int64_t x414 = -1LL;
	uint16_t x415 = 12513U;
	uint8_t x416 = 12U;
	static int32_t t86 = -5643;

    t86 = ((x413-(x414-x415))<=x416);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x417 = 201U;
	static int8_t x419 = INT8_MAX;
	static uint64_t x420 = UINT64_MAX;
	int32_t t87 = -2555;

    t87 = ((x417-(x418-x419))<=x420);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x421 = 127U;
	int8_t x422 = -1;
	int32_t x423 = -45411144;
	static volatile int32_t t88 = -6;

    t88 = ((x421-(x422-x423))<=x424);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x425 = 2040;
	uint8_t x426 = 7U;
	static volatile int64_t x427 = 21083856689519LL;
	static int64_t x428 = -1LL;
	int32_t t89 = 496;

    t89 = ((x425-(x426-x427))<=x428);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x429 = -1;
	int64_t x430 = INT64_MIN;
	static int16_t x431 = INT16_MIN;
	int16_t x432 = -2;
	int32_t t90 = 2;

    t90 = ((x429-(x430-x431))<=x432);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x433 = UINT8_MAX;
	uint16_t x434 = UINT16_MAX;
	int32_t x436 = -31576;
	static volatile int32_t t91 = -68479;

    t91 = ((x433-(x434-x435))<=x436);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x437 = UINT64_MAX;
	int16_t x440 = INT16_MIN;

    t92 = ((x437-(x438-x439))<=x440);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x441 = 666;
	int32_t x442 = INT32_MAX;
	uint8_t x443 = 18U;
	int16_t x444 = -6;
	static volatile int32_t t93 = 194227310;

    t93 = ((x441-(x442-x443))<=x444);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x445 = UINT64_MAX;
	int16_t x447 = INT16_MAX;
	uint32_t x448 = UINT32_MAX;
	static int32_t t94 = 2063668;

    t94 = ((x445-(x446-x447))<=x448);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x449 = 89629366U;
	int16_t x450 = INT16_MIN;
	int16_t x451 = INT16_MIN;
	int8_t x452 = INT8_MIN;
	volatile int32_t t95 = 2819;

    t95 = ((x449-(x450-x451))<=x452);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x457 = INT64_MAX;
	uint64_t x458 = UINT64_MAX;
	volatile int8_t x459 = INT8_MAX;
	volatile int32_t t96 = 4265;

    t96 = ((x457-(x458-x459))<=x460);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x461 = -1LL;
	uint32_t x462 = 37U;
	static int64_t x463 = -15869692280740947LL;
	volatile uint16_t x464 = UINT16_MAX;
	int32_t t97 = -1436;

    t97 = ((x461-(x462-x463))<=x464);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x465 = 272689439848560LL;
	int8_t x466 = 0;
	int16_t x467 = 7;
	static volatile int32_t t98 = 3329;

    t98 = ((x465-(x466-x467))<=x468);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x469 = 3;
	int32_t x470 = -1;
	int16_t x471 = INT16_MAX;
	uint32_t x472 = 1162U;
	volatile int32_t t99 = -2889;

    t99 = ((x469-(x470-x471))<=x472);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x482 = 61058090860LLU;
	uint64_t x484 = UINT64_MAX;

    t100 = ((x481-(x482-x483))<=x484);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int8_t x485 = 1;
	volatile int64_t x486 = INT64_MIN;
	static uint16_t x488 = UINT16_MAX;
	int32_t t101 = 508;

    t101 = ((x485-(x486-x487))<=x488);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint64_t x497 = 104899LLU;
	int64_t x498 = -1LL;
	uint64_t x499 = 52442128927LLU;
	int16_t x500 = INT16_MAX;
	volatile int32_t t102 = 3;

    t102 = ((x497-(x498-x499))<=x500);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x501 = -8;
	int16_t x502 = -11;
	volatile int64_t x503 = 235LL;
	int64_t x504 = INT64_MIN;

    t103 = ((x501-(x502-x503))<=x504);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x507 = INT32_MIN;
	int16_t x508 = 2;

    t104 = ((x505-(x506-x507))<=x508);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x510 = 7U;
	int64_t x511 = -106175437LL;
	int32_t t105 = 12009237;

    t105 = ((x509-(x510-x511))<=x512);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x513 = INT16_MIN;
	uint8_t x514 = UINT8_MAX;
	int16_t x516 = INT16_MIN;
	int32_t t106 = 666452691;

    t106 = ((x513-(x514-x515))<=x516);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x517 = 5173;
	volatile int8_t x518 = INT8_MIN;
	volatile int16_t x519 = -1;
	int32_t x520 = 70;
	static int32_t t107 = -18;

    t107 = ((x517-(x518-x519))<=x520);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x529 = 463873323706960LLU;
	static uint16_t x530 = 3076U;
	uint16_t x531 = UINT16_MAX;
	int16_t x532 = INT16_MIN;
	int32_t t108 = -3166799;

    t108 = ((x529-(x530-x531))<=x532);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x533 = UINT32_MAX;
	volatile int16_t x534 = INT16_MIN;
	static int8_t x535 = -1;
	int16_t x536 = INT16_MIN;
	volatile int32_t t109 = -185;

    t109 = ((x533-(x534-x535))<=x536);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x537 = -3;
	uint16_t x540 = UINT16_MAX;
	static volatile int32_t t110 = 20466524;

    t110 = ((x537-(x538-x539))<=x540);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x541 = 2U;
	int32_t x542 = -235220;
	uint8_t x543 = 1U;
	volatile int32_t t111 = -6;

    t111 = ((x541-(x542-x543))<=x544);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x545 = INT32_MAX;
	uint16_t x546 = UINT16_MAX;
	int64_t x547 = 1454790LL;
	int16_t x548 = -1;
	int32_t t112 = 601806345;

    t112 = ((x545-(x546-x547))<=x548);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x549 = 1462015987LLU;
	uint32_t x550 = 70U;
	static volatile int8_t x551 = INT8_MAX;
	volatile int16_t x552 = INT16_MAX;
	volatile int32_t t113 = 1192;

    t113 = ((x549-(x550-x551))<=x552);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x553 = UINT8_MAX;
	int64_t x554 = -8246260LL;
	static volatile int8_t x555 = 2;
	uint64_t x556 = 84028LLU;
	static volatile int32_t t114 = 514329;

    t114 = ((x553-(x554-x555))<=x556);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x557 = UINT8_MAX;
	int8_t x558 = 1;
	int32_t x559 = 14060683;
	int16_t x560 = INT16_MAX;
	int32_t t115 = 88;

    t115 = ((x557-(x558-x559))<=x560);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x561 = -87LL;
	volatile int16_t x562 = INT16_MIN;
	uint8_t x563 = 32U;
	int64_t x564 = INT64_MAX;
	int32_t t116 = -4359;

    t116 = ((x561-(x562-x563))<=x564);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x565 = 1;
	int64_t x566 = INT64_MAX;
	uint32_t x567 = 47437155U;
	int16_t x568 = -1;
	int32_t t117 = -14;

    t117 = ((x565-(x566-x567))<=x568);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x569 = -1LL;
	static int16_t x570 = INT16_MIN;
	uint8_t x571 = UINT8_MAX;
	int64_t x572 = -57LL;

    t118 = ((x569-(x570-x571))<=x572);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x573 = 24U;
	int64_t x575 = -1LL;
	static int64_t x576 = -1LL;
	volatile int32_t t119 = -1038759;

    t119 = ((x573-(x574-x575))<=x576);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x577 = -1;
	static uint32_t x578 = 23597721U;
	static int8_t x580 = -1;
	int32_t t120 = 9926025;

    t120 = ((x577-(x578-x579))<=x580);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint16_t x581 = UINT16_MAX;
	int32_t x582 = 0;
	volatile int32_t t121 = 12817;

    t121 = ((x581-(x582-x583))<=x584);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x585 = -248;
	int16_t x588 = INT16_MIN;

    t122 = ((x585-(x586-x587))<=x588);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x593 = 1361016U;
	static int16_t x594 = INT16_MIN;
	uint8_t x595 = 68U;

    t123 = ((x593-(x594-x595))<=x596);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x597 = 3U;
	static uint64_t x598 = UINT64_MAX;
	uint64_t x599 = UINT64_MAX;
	int8_t x600 = -1;
	static volatile int32_t t124 = 11;

    t124 = ((x597-(x598-x599))<=x600);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x605 = INT8_MIN;
	int16_t x606 = -1;
	volatile uint8_t x607 = 15U;
	int64_t x608 = -1LL;
	static volatile int32_t t125 = 1;

    t125 = ((x605-(x606-x607))<=x608);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x613 = 39U;
	int8_t x614 = INT8_MAX;
	int32_t x615 = -1;
	int64_t x616 = 101228LL;
	static int32_t t126 = -35875;

    t126 = ((x613-(x614-x615))<=x616);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x617 = -1;
	uint32_t x618 = UINT32_MAX;
	int32_t x619 = INT32_MIN;
	int32_t x620 = INT32_MAX;
	int32_t t127 = 2259548;

    t127 = ((x617-(x618-x619))<=x620);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x622 = UINT16_MAX;
	int32_t x623 = INT32_MAX;
	volatile uint64_t x624 = UINT64_MAX;
	static int32_t t128 = -5;

    t128 = ((x621-(x622-x623))<=x624);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x625 = UINT32_MAX;
	volatile int32_t x626 = 5220;
	static volatile uint16_t x627 = 8949U;
	volatile int16_t x628 = -1;

    t129 = ((x625-(x626-x627))<=x628);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x633 = INT8_MAX;
	uint32_t x634 = UINT32_MAX;
	int32_t x635 = INT32_MIN;
	volatile int32_t t130 = 65;

    t130 = ((x633-(x634-x635))<=x636);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x637 = 33U;
	static volatile uint16_t x638 = UINT16_MAX;
	int32_t x639 = -1;
	volatile int32_t t131 = 55;

    t131 = ((x637-(x638-x639))<=x640);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x642 = -5569;
	volatile int32_t x643 = 1;
	static int16_t x644 = -3074;
	int32_t t132 = 164439;

    t132 = ((x641-(x642-x643))<=x644);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x645 = 3072516;
	static volatile int32_t x646 = -68;
	static int32_t x647 = 830;
	volatile int32_t t133 = 90152491;

    t133 = ((x645-(x646-x647))<=x648);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x650 = INT64_MIN;
	int16_t x651 = -217;
	int64_t x652 = -5562293LL;
	static int32_t t134 = -191559;

    t134 = ((x649-(x650-x651))<=x652);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x662 = 5256;
	int8_t x663 = INT8_MIN;
	int32_t t135 = 3254396;

    t135 = ((x661-(x662-x663))<=x664);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x665 = -3737;
	int16_t x666 = INT16_MIN;
	int32_t x667 = -1;
	volatile int32_t t136 = 913423;

    t136 = ((x665-(x666-x667))<=x668);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x671 = 3LL;
	volatile int8_t x672 = INT8_MAX;
	int32_t t137 = 2437431;

    t137 = ((x669-(x670-x671))<=x672);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x674 = INT16_MIN;
	volatile int16_t x675 = -49;
	volatile int32_t t138 = 3544969;

    t138 = ((x673-(x674-x675))<=x676);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x677 = 1132;
	int64_t x679 = -1LL;
	volatile int32_t t139 = -694779;

    t139 = ((x677-(x678-x679))<=x680);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x681 = INT8_MIN;
	volatile uint16_t x683 = UINT16_MAX;
	volatile uint64_t x684 = UINT64_MAX;
	static int32_t t140 = -23454;

    t140 = ((x681-(x682-x683))<=x684);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x685 = 2333438126079LLU;
	uint8_t x686 = UINT8_MAX;
	uint8_t x687 = 40U;
	volatile int32_t t141 = 14311;

    t141 = ((x685-(x686-x687))<=x688);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x689 = 25623073;
	uint8_t x690 = 79U;
	static int32_t x692 = -1;
	int32_t t142 = -173646;

    t142 = ((x689-(x690-x691))<=x692);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x697 = 753091286668531583LL;
	static int16_t x698 = INT16_MIN;
	volatile int8_t x699 = INT8_MIN;
	uint8_t x700 = 5U;

    t143 = ((x697-(x698-x699))<=x700);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x702 = -1;
	uint8_t x703 = 14U;
	static int32_t x704 = -1;
	int32_t t144 = -270003661;

    t144 = ((x701-(x702-x703))<=x704);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x709 = -56;
	volatile int16_t x710 = INT16_MAX;
	static int64_t x711 = -7808835035LL;
	int16_t x712 = -197;
	int32_t t145 = 2745;

    t145 = ((x709-(x710-x711))<=x712);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x713 = 6;
	int16_t x716 = -798;
	int32_t t146 = 4193104;

    t146 = ((x713-(x714-x715))<=x716);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x718 = 9;
	static int16_t x719 = INT16_MIN;

    t147 = ((x717-(x718-x719))<=x720);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x721 = 0;
	static int32_t x722 = INT32_MIN;
	static int64_t x723 = 864643077013LL;
	uint16_t x724 = UINT16_MAX;

    t148 = ((x721-(x722-x723))<=x724);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x725 = -1;
	volatile int16_t x726 = INT16_MIN;
	int32_t x728 = -130487576;
	int32_t t149 = -18968;

    t149 = ((x725-(x726-x727))<=x728);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x729 = INT16_MIN;
	int8_t x732 = INT8_MIN;
	volatile int32_t t150 = 7;

    t150 = ((x729-(x730-x731))<=x732);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x733 = 10U;
	int32_t x734 = INT32_MIN;
	static int8_t x735 = -23;
	static uint8_t x736 = UINT8_MAX;
	volatile int32_t t151 = 32;

    t151 = ((x733-(x734-x735))<=x736);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x742 = 88421247691152718LL;
	volatile int8_t x744 = INT8_MIN;
	volatile int32_t t152 = 6614528;

    t152 = ((x741-(x742-x743))<=x744);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x745 = INT8_MIN;
	volatile int64_t x746 = -1LL;
	int32_t x747 = INT32_MIN;
	int32_t t153 = -17678;

    t153 = ((x745-(x746-x747))<=x748);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x750 = 3U;
	static uint8_t x751 = UINT8_MAX;
	int64_t x752 = INT64_MIN;
	int32_t t154 = 786546081;

    t154 = ((x749-(x750-x751))<=x752);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x753 = 89168585470857500LLU;
	int64_t x754 = 117LL;
	int16_t x755 = -1;
	int16_t x756 = INT16_MIN;

    t155 = ((x753-(x754-x755))<=x756);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x763 = INT16_MIN;
	static int16_t x764 = -2;
	static volatile int32_t t156 = 314;

    t156 = ((x761-(x762-x763))<=x764);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x765 = INT16_MIN;
	uint16_t x766 = UINT16_MAX;
	int32_t x767 = -1;
	volatile int32_t t157 = -2;

    t157 = ((x765-(x766-x767))<=x768);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x769 = -1LL;
	int16_t x770 = INT16_MIN;
	static uint64_t x771 = UINT64_MAX;
	volatile int32_t t158 = 129;

    t158 = ((x769-(x770-x771))<=x772);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x773 = -73;
	static uint64_t x774 = UINT64_MAX;
	static int16_t x775 = 6;
	int64_t x776 = INT64_MIN;
	int32_t t159 = 5;

    t159 = ((x773-(x774-x775))<=x776);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x781 = UINT16_MAX;
	uint64_t x782 = 2525273041LLU;
	volatile int64_t x784 = -21074117688873LL;
	static int32_t t160 = -370918557;

    t160 = ((x781-(x782-x783))<=x784);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x789 = INT16_MIN;
	int32_t x792 = INT32_MAX;

    t161 = ((x789-(x790-x791))<=x792);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x794 = -1;
	volatile uint16_t x795 = UINT16_MAX;
	volatile uint16_t x796 = UINT16_MAX;
	volatile int32_t t162 = 54979869;

    t162 = ((x793-(x794-x795))<=x796);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x797 = INT8_MIN;
	int64_t x798 = 2894152266LL;
	volatile int16_t x800 = -1;
	volatile int32_t t163 = 800;

    t163 = ((x797-(x798-x799))<=x800);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x801 = INT8_MIN;
	static int8_t x804 = INT8_MIN;

    t164 = ((x801-(x802-x803))<=x804);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x805 = -1;
	int8_t x806 = -1;
	uint8_t x807 = 15U;
	int8_t x808 = INT8_MIN;
	volatile int32_t t165 = -176236913;

    t165 = ((x805-(x806-x807))<=x808);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x809 = -1;
	uint32_t x810 = 1246589994U;
	volatile int8_t x811 = INT8_MIN;
	int64_t x812 = INT64_MAX;
	volatile int32_t t166 = -344;

    t166 = ((x809-(x810-x811))<=x812);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x813 = -1;
	volatile int8_t x816 = -1;
	static int32_t t167 = 1;

    t167 = ((x813-(x814-x815))<=x816);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x821 = 1662U;
	uint16_t x822 = UINT16_MAX;
	static uint8_t x823 = UINT8_MAX;
	static volatile uint8_t x824 = UINT8_MAX;
	int32_t t168 = -2215;

    t168 = ((x821-(x822-x823))<=x824);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x825 = INT32_MIN;
	int64_t x827 = -1LL;
	static volatile int32_t t169 = -471;

    t169 = ((x825-(x826-x827))<=x828);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x829 = UINT16_MAX;
	static int8_t x830 = -1;
	int16_t x831 = INT16_MAX;
	static volatile int64_t x832 = -1LL;
	int32_t t170 = -1536431;

    t170 = ((x829-(x830-x831))<=x832);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x833 = 306173;
	static uint32_t x834 = UINT32_MAX;
	volatile int8_t x835 = -1;
	int16_t x836 = INT16_MAX;
	volatile int32_t t171 = 2505;

    t171 = ((x833-(x834-x835))<=x836);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x837 = UINT32_MAX;
	volatile uint16_t x839 = UINT16_MAX;
	int16_t x840 = 0;
	int32_t t172 = 11;

    t172 = ((x837-(x838-x839))<=x840);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x841 = 2;
	int8_t x842 = INT8_MIN;
	volatile uint16_t x843 = 4244U;
	static int8_t x844 = -24;

    t173 = ((x841-(x842-x843))<=x844);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x845 = -1;
	int32_t x846 = -561;
	uint8_t x847 = 12U;
	volatile int32_t t174 = 140713;

    t174 = ((x845-(x846-x847))<=x848);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x849 = 136652520U;
	int64_t x851 = INT64_MIN;
	int8_t x852 = INT8_MAX;
	volatile int32_t t175 = -17349727;

    t175 = ((x849-(x850-x851))<=x852);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x857 = 900LLU;
	int16_t x858 = INT16_MAX;
	int64_t x859 = 15LL;
	static uint32_t x860 = UINT32_MAX;
	int32_t t176 = 92999;

    t176 = ((x857-(x858-x859))<=x860);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x861 = 1;
	int32_t x862 = -1;
	uint16_t x864 = 438U;
	volatile int32_t t177 = 26830;

    t177 = ((x861-(x862-x863))<=x864);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int32_t x865 = INT32_MAX;
	int8_t x866 = -1;
	int16_t x868 = INT16_MIN;
	static int32_t t178 = 590913192;

    t178 = ((x865-(x866-x867))<=x868);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x869 = UINT32_MAX;
	volatile int64_t x870 = 23608146LL;
	int8_t x871 = INT8_MIN;
	uint16_t x872 = 728U;
	int32_t t179 = 3294;

    t179 = ((x869-(x870-x871))<=x872);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x873 = 1U;
	uint16_t x874 = 6U;
	uint32_t x875 = 42U;
	int64_t x876 = 29092471881722754LL;
	static int32_t t180 = -19699750;

    t180 = ((x873-(x874-x875))<=x876);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x881 = UINT16_MAX;
	int64_t x882 = -1LL;
	volatile int16_t x883 = INT16_MIN;
	static int8_t x884 = INT8_MIN;
	volatile int32_t t181 = 73419507;

    t181 = ((x881-(x882-x883))<=x884);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x886 = INT16_MIN;
	uint64_t x888 = 144LLU;
	int32_t t182 = -342445975;

    t182 = ((x885-(x886-x887))<=x888);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x889 = INT64_MIN;
	uint16_t x891 = 967U;
	static uint32_t x892 = 27099U;
	int32_t t183 = 97829;

    t183 = ((x889-(x890-x891))<=x892);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x894 = -1;
	static int8_t x896 = -2;
	int32_t t184 = 1;

    t184 = ((x893-(x894-x895))<=x896);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint8_t x897 = 5U;
	uint32_t x900 = 49U;
	int32_t t185 = 0;

    t185 = ((x897-(x898-x899))<=x900);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x901 = -13047;
	static int8_t x903 = -10;
	volatile uint32_t x904 = 5130087U;
	int32_t t186 = 3;

    t186 = ((x901-(x902-x903))<=x904);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x905 = INT8_MIN;
	uint64_t x906 = 24419415321306844LLU;
	volatile uint8_t x907 = 22U;
	int16_t x908 = -1;
	int32_t t187 = 18137;

    t187 = ((x905-(x906-x907))<=x908);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x909 = -1;
	uint16_t x910 = 377U;
	uint8_t x911 = 79U;
	int32_t x912 = INT32_MAX;
	volatile int32_t t188 = 422;

    t188 = ((x909-(x910-x911))<=x912);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x913 = INT16_MIN;
	volatile uint16_t x914 = 610U;
	static uint32_t x915 = 1574181431U;
	volatile int32_t t189 = -2290;

    t189 = ((x913-(x914-x915))<=x916);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x917 = 20U;
	int32_t x918 = INT32_MIN;
	volatile int32_t x919 = -6797661;
	volatile uint16_t x920 = 2U;
	static volatile int32_t t190 = -17697;

    t190 = ((x917-(x918-x919))<=x920);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x921 = 24U;
	int32_t x922 = INT32_MIN;
	int8_t x923 = -1;
	static volatile uint8_t x924 = 1U;
	volatile int32_t t191 = 17716;

    t191 = ((x921-(x922-x923))<=x924);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x925 = 4965178LL;
	uint8_t x926 = UINT8_MAX;
	static uint8_t x927 = 0U;
	static uint64_t x928 = 1LLU;
	volatile int32_t t192 = 4138824;

    t192 = ((x925-(x926-x927))<=x928);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x929 = INT32_MIN;
	uint32_t x931 = 636627310U;
	int32_t x932 = -1;
	int32_t t193 = 119921;

    t193 = ((x929-(x930-x931))<=x932);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x933 = INT16_MAX;
	int64_t x934 = -359809LL;
	uint16_t x935 = 1U;
	uint16_t x936 = 884U;
	volatile int32_t t194 = 165486075;

    t194 = ((x933-(x934-x935))<=x936);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x937 = 8163LLU;
	static int8_t x938 = INT8_MIN;
	uint64_t x939 = 131818130109754008LLU;
	int32_t x940 = -246959882;

    t195 = ((x937-(x938-x939))<=x940);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x941 = UINT16_MAX;
	uint8_t x942 = UINT8_MAX;
	static uint8_t x943 = 74U;
	uint16_t x944 = 14553U;
	volatile int32_t t196 = -46;

    t196 = ((x941-(x942-x943))<=x944);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x945 = 15821U;
	int32_t x946 = 125480458;
	int8_t x947 = -7;
	int16_t x948 = 6;
	static int32_t t197 = -1714245;

    t197 = ((x945-(x946-x947))<=x948);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x949 = 55821846548LLU;
	int16_t x950 = 2;
	uint64_t x951 = UINT64_MAX;
	int32_t t198 = -16207;

    t198 = ((x949-(x950-x951))<=x952);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x957 = 2U;
	uint64_t x958 = 17929819800524372LLU;
	int8_t x959 = 1;

    t199 = ((x957-(x958-x959))<=x960);

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

