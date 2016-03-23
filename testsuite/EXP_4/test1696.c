
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

static int32_t x1 = INT32_MAX;
static uint64_t x3 = 3976LLU;
static int16_t x4 = INT16_MAX;
volatile int64_t x11 = INT64_MIN;
uint32_t x21 = 4U;
int64_t x22 = INT64_MIN;
int64_t x23 = 99668258668223605LL;
uint32_t t5 = 2304U;
volatile int32_t t6 = 9541;
volatile int32_t x29 = -10045230;
int8_t x30 = -1;
int64_t x43 = -1LL;
volatile uint32_t x54 = UINT32_MAX;
static int8_t x56 = -1;
int32_t t13 = 101574;
static uint32_t x60 = UINT32_MAX;
int32_t t14 = -1023787053;
static int8_t x62 = INT8_MIN;
uint32_t x63 = 14105U;
uint32_t x67 = UINT32_MAX;
volatile int32_t t16 = -236;
int64_t x69 = INT64_MIN;
volatile uint64_t x74 = 7810496412864992350LLU;
int32_t t18 = -7;
uint8_t x83 = 111U;
int8_t x84 = INT8_MIN;
int32_t x91 = -18382325;
static int64_t x93 = -1LL;
volatile int64_t t23 = 59804456LL;
int8_t x100 = 0;
uint8_t x108 = 1U;
int64_t x113 = INT64_MIN;
int16_t x118 = INT16_MAX;
uint64_t x122 = UINT64_MAX;
static int64_t x135 = -1LL;
volatile int8_t x147 = -1;
uint8_t x169 = UINT8_MAX;
static int32_t x173 = INT32_MAX;
volatile uint8_t x176 = 2U;
volatile int32_t t44 = -133517;
uint8_t x190 = UINT8_MAX;
volatile int32_t x191 = -1;
int16_t x193 = 146;
volatile uint8_t x200 = 6U;
int32_t x201 = 1;
int8_t x203 = INT8_MIN;
volatile int32_t t49 = -161529;
int16_t x210 = 6;
uint16_t x213 = UINT16_MAX;
static int64_t x214 = INT64_MIN;
volatile uint64_t x217 = 209461838095358116LLU;
int64_t x219 = INT64_MIN;
volatile int64_t x220 = INT64_MAX;
static int64_t x226 = 1803LL;
volatile int8_t x228 = INT8_MIN;
int8_t x236 = 0;
volatile int32_t t57 = -253493;
static uint8_t x266 = 14U;
uint8_t x271 = 4U;
uint16_t x272 = 614U;
uint32_t x277 = UINT32_MAX;
int16_t x278 = 3258;
int32_t x283 = INT32_MIN;
volatile int16_t x293 = INT16_MAX;
int32_t x298 = -1;
volatile int8_t x301 = 41;
int64_t x303 = -5LL;
int16_t x315 = INT16_MAX;
static int8_t x323 = INT8_MIN;
static uint16_t x325 = 113U;
int32_t x335 = -25989;
volatile int32_t t81 = -32187;
int64_t x337 = INT64_MAX;
volatile int32_t x338 = INT32_MIN;
uint32_t x343 = 32783U;
volatile int64_t t84 = -59951LL;
uint32_t x350 = UINT32_MAX;
volatile int32_t x355 = 214564;
static volatile uint16_t x357 = 5694U;
int8_t x359 = INT8_MIN;
int32_t t90 = -1;
volatile int32_t x382 = INT32_MAX;
volatile uint8_t x387 = UINT8_MAX;
int32_t x388 = INT32_MIN;
int32_t t94 = 3421;
volatile uint16_t x393 = 10977U;
int64_t x396 = INT64_MIN;
int8_t x407 = -1;
uint64_t t98 = 36315LLU;
int8_t x409 = -1;
volatile int32_t t99 = 458172156;
volatile int32_t t103 = -17858;
int8_t x433 = 4;
int16_t x436 = INT16_MIN;
uint16_t x442 = 108U;
int16_t x446 = -1;
static int32_t t106 = 244;
uint32_t x452 = UINT32_MAX;
volatile uint64_t t109 = 3227459LLU;
volatile uint32_t x463 = 231U;
uint16_t x464 = 7749U;
int32_t t110 = 1898334;
uint64_t x466 = UINT64_MAX;
int16_t x468 = INT16_MIN;
int32_t t111 = INT32_MIN;
int16_t x478 = 44;
volatile int32_t t115 = -17197;
static int8_t x501 = INT8_MIN;
volatile int32_t t118 = -35858;
volatile int64_t x507 = INT64_MAX;
int32_t t119 = 41859729;
uint8_t x510 = 15U;
int32_t t121 = -4020002;
static volatile int32_t x517 = -1;
uint16_t x529 = 30U;
uint32_t x539 = UINT32_MAX;
uint8_t x540 = 19U;
static int32_t x546 = -1;
uint8_t x549 = 26U;
int32_t x551 = INT32_MIN;
int32_t t130 = -2073;
uint32_t x554 = UINT32_MAX;
static volatile int16_t x555 = INT16_MIN;
uint32_t x562 = 5568178U;
uint16_t x566 = UINT16_MAX;
int32_t x573 = -1;
uint16_t x577 = UINT16_MAX;
volatile int32_t t139 = 12555466;
volatile int64_t x594 = INT64_MAX;
volatile int64_t x599 = INT64_MAX;
static int64_t x601 = 62742175302065LL;
volatile int64_t t143 = 152LL;
int64_t x609 = 55684LL;
volatile uint8_t x610 = 21U;
static int64_t x619 = INT64_MIN;
int64_t x620 = INT64_MIN;
volatile uint32_t t148 = 2023289U;
int8_t x629 = 8;
volatile uint32_t x634 = 2361616U;
int64_t x647 = INT64_MAX;
uint64_t x653 = 9LLU;
int64_t x656 = -627050911631LL;
volatile int64_t x659 = -1LL;
static uint32_t x666 = 55559211U;
int32_t x667 = INT32_MIN;
int16_t x683 = INT16_MAX;
int64_t x684 = -409925017789913717LL;
static volatile int64_t t163 = INT64_MAX;
int32_t x689 = INT32_MIN;
int8_t x699 = INT8_MIN;
int64_t x703 = INT64_MIN;
volatile int32_t x727 = -839;
volatile int32_t x735 = INT32_MIN;
volatile int16_t x736 = 10;
uint64_t x739 = 1501018685985767009LLU;
int64_t x751 = INT64_MIN;
int8_t x757 = -1;
int32_t x762 = -1;
int32_t x763 = -1;
volatile int32_t x775 = INT32_MAX;
volatile int32_t x776 = 121395416;
int32_t x791 = INT32_MAX;
uint8_t x796 = 1U;
int32_t t192 = -105394;
static int32_t x802 = INT32_MIN;
int32_t x803 = -1;
static volatile int16_t x804 = 0;
static int64_t x805 = -1759458858347LL;
int64_t x807 = INT64_MIN;
int64_t x809 = INT64_MAX;
static uint64_t x818 = UINT64_MAX;
volatile int64_t t197 = 83LL;
uint16_t x821 = UINT16_MAX;


void f0(void) {
    	volatile int64_t x2 = INT64_MIN;
	volatile int32_t t0 = -14615607;

    t0 = (x1-(x2<=(x3>x4)));

    if (t0 != 2147483646) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 4U;
	int64_t x6 = -1LL;
	static volatile uint16_t x7 = 4607U;
	static uint32_t x8 = 7528891U;
	volatile int32_t t1 = -307564;

    t1 = (x5-(x6<=(x7>x8)));

    if (t1 != 3) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 12U;
	static int64_t x10 = -1LL;
	static int16_t x12 = 1328;
	volatile int32_t t2 = -134096753;

    t2 = (x9-(x10<=(x11>x12)));

    if (t2 != 11) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = 22240;
	uint8_t x14 = 98U;
	volatile int64_t x15 = INT64_MAX;
	int32_t x16 = INT32_MAX;
	int32_t t3 = 766262;

    t3 = (x13-(x14<=(x15>x16)));

    if (t3 != 22240) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x17 = INT8_MIN;
	uint64_t x18 = 5998889LLU;
	int8_t x19 = 9;
	uint8_t x20 = UINT8_MAX;
	volatile int32_t t4 = 106238;

    t4 = (x17-(x18<=(x19>x20)));

    if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x24 = INT16_MAX;

    t5 = (x21-(x22<=(x23>x24)));

    if (t5 != 3U) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = -1;
	int16_t x26 = INT16_MIN;
	static uint16_t x27 = 3196U;
	int64_t x28 = -1851296LL;

    t6 = (x25-(x26<=(x27>x28)));

    if (t6 != -2) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x31 = INT32_MIN;
	static int64_t x32 = INT64_MIN;
	volatile int32_t t7 = 493;

    t7 = (x29-(x30<=(x31>x32)));

    if (t7 != -10045231) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = 2886LL;
	volatile int64_t x34 = INT64_MIN;
	static int64_t x35 = INT64_MIN;
	int16_t x36 = INT16_MAX;
	volatile int64_t t8 = -1390LL;

    t8 = (x33-(x34<=(x35>x36)));

    if (t8 != 2885LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = UINT32_MAX;
	volatile int16_t x38 = INT16_MIN;
	int32_t x39 = INT32_MAX;
	int16_t x40 = INT16_MIN;
	volatile uint32_t t9 = 609443U;

    t9 = (x37-(x38<=(x39>x40)));

    if (t9 != 4294967294U) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MAX;
	uint8_t x42 = 1U;
	int8_t x44 = INT8_MIN;
	volatile int64_t t10 = -23534211LL;

    t10 = (x41-(x42<=(x43>x44)));

    if (t10 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = UINT32_MAX;
	int8_t x46 = INT8_MAX;
	static int8_t x47 = INT8_MIN;
	static int64_t x48 = INT64_MAX;
	static volatile uint32_t t11 = UINT32_MAX;

    t11 = (x45-(x46<=(x47>x48)));

    if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x49 = INT16_MAX;
	uint8_t x50 = 0U;
	int32_t x51 = -45240;
	int16_t x52 = INT16_MIN;
	int32_t t12 = -909070091;

    t12 = (x49-(x50<=(x51>x52)));

    if (t12 != 32766) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int8_t x53 = 38;
	int32_t x55 = -1;

    t13 = (x53-(x54<=(x55>x56)));

    if (t13 != 38) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x57 = 0;
	static uint16_t x58 = UINT16_MAX;
	int64_t x59 = -1LL;

    t14 = (x57-(x58<=(x59>x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = UINT64_MAX;
	volatile int32_t x64 = -1;
	uint64_t t15 = 17377983111015LLU;

    t15 = (x61-(x62<=(x63>x64)));

    if (t15 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = 0;
	int16_t x66 = INT16_MIN;
	static int16_t x68 = 0;

    t16 = (x65-(x66<=(x67>x68)));

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x70 = 24821754150092500LLU;
	volatile int16_t x71 = -16132;
	static int8_t x72 = INT8_MIN;
	volatile int64_t t17 = INT64_MIN;

    t17 = (x69-(x70<=(x71>x72)));

    if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = -1;
	int8_t x75 = INT8_MAX;
	uint32_t x76 = 5530U;

    t18 = (x73-(x74<=(x75>x76)));

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int16_t x77 = INT16_MAX;
	int32_t x78 = -6340272;
	int8_t x79 = -1;
	volatile int32_t x80 = 427;
	volatile int32_t t19 = 470364070;

    t19 = (x77-(x78<=(x79>x80)));

    if (t19 != 32766) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = -5960;
	static int32_t x82 = -311;
	int32_t t20 = 2094019;

    t20 = (x81-(x82<=(x83>x84)));

    if (t20 != -5961) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = -1LL;
	volatile int32_t x86 = -914536;
	int32_t x87 = INT32_MAX;
	int16_t x88 = INT16_MAX;
	static volatile int64_t t21 = -80720108401246LL;

    t21 = (x85-(x86<=(x87>x88)));

    if (t21 != -2LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MIN;
	static int16_t x90 = INT16_MAX;
	int32_t x92 = 2530;
	volatile int32_t t22 = -962197669;

    t22 = (x89-(x90<=(x91>x92)));

    if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x94 = 38U;
	static uint16_t x95 = 102U;
	uint32_t x96 = UINT32_MAX;

    t23 = (x93-(x94<=(x95>x96)));

    if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = 12745;
	static uint64_t x98 = UINT64_MAX;
	volatile int8_t x99 = 19;
	volatile int32_t t24 = -10137;

    t24 = (x97-(x98<=(x99>x100)));

    if (t24 != 12745) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x105 = UINT16_MAX;
	static volatile int32_t x106 = INT32_MIN;
	uint32_t x107 = UINT32_MAX;
	volatile int32_t t25 = -1;

    t25 = (x105-(x106<=(x107>x108)));

    if (t25 != 65534) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x109 = INT32_MAX;
	int8_t x110 = 1;
	int64_t x111 = INT64_MIN;
	int32_t x112 = 882938344;
	int32_t t26 = INT32_MAX;

    t26 = (x109-(x110<=(x111>x112)));

    if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x114 = UINT16_MAX;
	uint64_t x115 = UINT64_MAX;
	static int8_t x116 = -1;
	volatile int64_t t27 = INT64_MIN;

    t27 = (x113-(x114<=(x115>x116)));

    if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x117 = -1;
	int32_t x119 = 130222294;
	uint64_t x120 = 365112111LLU;
	static int32_t t28 = -126070707;

    t28 = (x117-(x118<=(x119>x120)));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x121 = 84U;
	int16_t x123 = INT16_MIN;
	volatile int64_t x124 = 1925468640745LL;
	volatile uint32_t t29 = 4093U;

    t29 = (x121-(x122<=(x123>x124)));

    if (t29 != 84U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x125 = UINT8_MAX;
	volatile int16_t x126 = INT16_MAX;
	int32_t x127 = -716725673;
	int8_t x128 = INT8_MIN;
	int32_t t30 = 4226;

    t30 = (x125-(x126<=(x127>x128)));

    if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x129 = 58739930U;
	int64_t x130 = INT64_MAX;
	static uint32_t x131 = UINT32_MAX;
	uint32_t x132 = 1269056657U;
	static volatile uint32_t t31 = 43U;

    t31 = (x129-(x130<=(x131>x132)));

    if (t31 != 58739930U) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x133 = 284443U;
	volatile int8_t x134 = INT8_MIN;
	static volatile uint32_t x136 = 35898982U;
	static uint32_t t32 = 38190U;

    t32 = (x133-(x134<=(x135>x136)));

    if (t32 != 284442U) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x137 = -1;
	int64_t x138 = INT64_MIN;
	uint32_t x139 = UINT32_MAX;
	int8_t x140 = -1;
	int32_t t33 = 140216;

    t33 = (x137-(x138<=(x139>x140)));

    if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x141 = -1;
	uint64_t x142 = 36216486151182584LLU;
	volatile int32_t x143 = -253866308;
	int32_t x144 = INT32_MIN;
	static int32_t t34 = -9808;

    t34 = (x141-(x142<=(x143>x144)));

    if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x145 = 3250543230659LL;
	volatile int16_t x146 = 6637;
	uint32_t x148 = UINT32_MAX;
	int64_t t35 = 8459597494LL;

    t35 = (x145-(x146<=(x147>x148)));

    if (t35 != 3250543230659LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x149 = 0U;
	static uint16_t x150 = 7022U;
	static int64_t x151 = INT64_MIN;
	uint32_t x152 = 29552698U;
	volatile int32_t t36 = 590175;

    t36 = (x149-(x150<=(x151>x152)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x153 = INT64_MIN;
	volatile int32_t x154 = 182567;
	uint32_t x155 = 0U;
	static uint16_t x156 = 25U;
	int64_t t37 = INT64_MIN;

    t37 = (x153-(x154<=(x155>x156)));

    if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x157 = INT16_MIN;
	static volatile int8_t x158 = -1;
	volatile int64_t x159 = INT64_MAX;
	volatile uint32_t x160 = 3533U;
	int32_t t38 = -1;

    t38 = (x157-(x158<=(x159>x160)));

    if (t38 != -32769) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x161 = 6;
	int32_t x162 = 38454073;
	int64_t x163 = INT64_MAX;
	static int64_t x164 = INT64_MIN;
	volatile int32_t t39 = -12;

    t39 = (x161-(x162<=(x163>x164)));

    if (t39 != 6) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x165 = 3U;
	int32_t x166 = INT32_MIN;
	uint32_t x167 = 48843588U;
	volatile int64_t x168 = INT64_MIN;
	static int32_t t40 = 866585;

    t40 = (x165-(x166<=(x167>x168)));

    if (t40 != 2) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x170 = 33;
	int8_t x171 = INT8_MIN;
	int32_t x172 = INT32_MIN;
	volatile int32_t t41 = 395;

    t41 = (x169-(x170<=(x171>x172)));

    if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x174 = 2U;
	int64_t x175 = -3583745382438LL;
	int32_t t42 = INT32_MAX;

    t42 = (x173-(x174<=(x175>x176)));

    if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x177 = -1;
	int32_t x178 = -74428;
	uint32_t x179 = 0U;
	uint64_t x180 = 18526LLU;
	volatile int32_t t43 = -207349037;

    t43 = (x177-(x178<=(x179>x180)));

    if (t43 != -2) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x181 = UINT8_MAX;
	uint32_t x182 = UINT32_MAX;
	uint16_t x183 = 22800U;
	volatile int16_t x184 = -1;

    t44 = (x181-(x182<=(x183>x184)));

    if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x185 = 7;
	uint16_t x186 = UINT16_MAX;
	uint64_t x187 = 267194789142969LLU;
	static int64_t x188 = INT64_MAX;
	static volatile int32_t t45 = -167620;

    t45 = (x185-(x186<=(x187>x188)));

    if (t45 != 7) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x189 = INT64_MIN;
	uint32_t x192 = 5882U;
	volatile int64_t t46 = INT64_MIN;

    t46 = (x189-(x190<=(x191>x192)));

    if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x194 = UINT32_MAX;
	static uint16_t x195 = 2425U;
	volatile uint8_t x196 = 36U;
	int32_t t47 = -232;

    t47 = (x193-(x194<=(x195>x196)));

    if (t47 != 146) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x197 = INT16_MIN;
	volatile uint16_t x198 = 29U;
	volatile int8_t x199 = 23;
	int32_t t48 = -363328499;

    t48 = (x197-(x198<=(x199>x200)));

    if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x202 = UINT64_MAX;
	int32_t x204 = INT32_MAX;

    t49 = (x201-(x202<=(x203>x204)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x205 = UINT64_MAX;
	uint16_t x206 = 19U;
	uint32_t x207 = 23884941U;
	static int8_t x208 = -1;
	static volatile uint64_t t50 = UINT64_MAX;

    t50 = (x205-(x206<=(x207>x208)));

    if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint32_t x209 = UINT32_MAX;
	uint8_t x211 = 119U;
	static int16_t x212 = INT16_MIN;
	uint32_t t51 = UINT32_MAX;

    t51 = (x209-(x210<=(x211>x212)));

    if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x215 = INT64_MAX;
	int8_t x216 = 62;
	static volatile int32_t t52 = -1;

    t52 = (x213-(x214<=(x215>x216)));

    if (t52 != 65534) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x218 = UINT8_MAX;
	static volatile uint64_t t53 = 31958850677011LLU;

    t53 = (x217-(x218<=(x219>x220)));

    if (t53 != 209461838095358116LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x225 = 674795717442LLU;
	uint32_t x227 = UINT32_MAX;
	uint64_t t54 = 141150051593953654LLU;

    t54 = (x225-(x226<=(x227>x228)));

    if (t54 != 674795717442LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x229 = 17U;
	static uint32_t x230 = 4431147U;
	int64_t x231 = 1059845384LL;
	uint16_t x232 = 754U;
	int32_t t55 = 83647990;

    t55 = (x229-(x230<=(x231>x232)));

    if (t55 != 17) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x233 = -1;
	int64_t x234 = INT64_MIN;
	int16_t x235 = 0;
	static volatile int32_t t56 = -270897345;

    t56 = (x233-(x234<=(x235>x236)));

    if (t56 != -2) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint16_t x237 = UINT16_MAX;
	int16_t x238 = 7805;
	int64_t x239 = -1LL;
	int8_t x240 = -3;

    t57 = (x237-(x238<=(x239>x240)));

    if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x241 = INT32_MAX;
	int32_t x242 = -56285422;
	int64_t x243 = INT64_MIN;
	volatile uint8_t x244 = 3U;
	int32_t t58 = 3;

    t58 = (x241-(x242<=(x243>x244)));

    if (t58 != 2147483646) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x245 = 174515;
	uint16_t x246 = 337U;
	int16_t x247 = INT16_MIN;
	static volatile uint16_t x248 = 16U;
	static volatile int32_t t59 = 68;

    t59 = (x245-(x246<=(x247>x248)));

    if (t59 != 174515) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x249 = 5U;
	int16_t x250 = -1;
	int32_t x251 = -65058148;
	int32_t x252 = INT32_MIN;
	volatile int32_t t60 = -1063391257;

    t60 = (x249-(x250<=(x251>x252)));

    if (t60 != 4) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x253 = INT16_MIN;
	volatile int8_t x254 = 1;
	int64_t x255 = INT64_MIN;
	int8_t x256 = -15;
	volatile int32_t t61 = -102468;

    t61 = (x253-(x254<=(x255>x256)));

    if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x257 = INT32_MIN;
	uint16_t x258 = UINT16_MAX;
	uint16_t x259 = 1840U;
	int64_t x260 = 257LL;
	int32_t t62 = INT32_MIN;

    t62 = (x257-(x258<=(x259>x260)));

    if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x261 = UINT64_MAX;
	uint32_t x262 = 7U;
	static int32_t x263 = 53595644;
	uint16_t x264 = 1981U;
	volatile uint64_t t63 = UINT64_MAX;

    t63 = (x261-(x262<=(x263>x264)));

    if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x265 = 23550789LLU;
	int32_t x267 = -1;
	int32_t x268 = -1;
	volatile uint64_t t64 = 4129053479166924521LLU;

    t64 = (x265-(x266<=(x267>x268)));

    if (t64 != 23550789LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x269 = -1;
	uint32_t x270 = UINT32_MAX;
	volatile int32_t t65 = -2639;

    t65 = (x269-(x270<=(x271>x272)));

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x273 = -28;
	int64_t x274 = -1LL;
	int8_t x275 = INT8_MIN;
	uint64_t x276 = UINT64_MAX;
	volatile int32_t t66 = 881542595;

    t66 = (x273-(x274<=(x275>x276)));

    if (t66 != -29) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x279 = INT64_MIN;
	uint32_t x280 = UINT32_MAX;
	static uint32_t t67 = UINT32_MAX;

    t67 = (x277-(x278<=(x279>x280)));

    if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x281 = -272;
	uint8_t x282 = 29U;
	static int32_t x284 = -1;
	volatile int32_t t68 = 695;

    t68 = (x281-(x282<=(x283>x284)));

    if (t68 != -272) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x285 = INT16_MIN;
	uint32_t x286 = UINT32_MAX;
	int32_t x287 = INT32_MIN;
	volatile int32_t x288 = 1653283;
	static int32_t t69 = 12209;

    t69 = (x285-(x286<=(x287>x288)));

    if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x289 = UINT64_MAX;
	int16_t x290 = INT16_MAX;
	uint32_t x291 = 1660U;
	volatile uint64_t x292 = 221355484501LLU;
	uint64_t t70 = UINT64_MAX;

    t70 = (x289-(x290<=(x291>x292)));

    if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x294 = INT64_MIN;
	uint16_t x295 = UINT16_MAX;
	int8_t x296 = -5;
	volatile int32_t t71 = -241664;

    t71 = (x293-(x294<=(x295>x296)));

    if (t71 != 32766) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x297 = 121U;
	int64_t x299 = -176643441006716136LL;
	int64_t x300 = -1LL;
	volatile uint32_t t72 = 801U;

    t72 = (x297-(x298<=(x299>x300)));

    if (t72 != 120U) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x302 = -1;
	int64_t x304 = 60338435711779LL;
	volatile int32_t t73 = 5268024;

    t73 = (x301-(x302<=(x303>x304)));

    if (t73 != 40) { NG(); } else { ; }
	
}

void f74(void) {
    	static int32_t x305 = -35399806;
	int32_t x306 = -1460;
	static int16_t x307 = 0;
	int32_t x308 = 1263;
	volatile int32_t t74 = -13;

    t74 = (x305-(x306<=(x307>x308)));

    if (t74 != -35399807) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x309 = -15643901561LL;
	int16_t x310 = -1;
	uint32_t x311 = 3U;
	int32_t x312 = INT32_MAX;
	volatile int64_t t75 = 11423122389449LL;

    t75 = (x309-(x310<=(x311>x312)));

    if (t75 != -15643901562LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x313 = -1;
	int32_t x314 = 1;
	int16_t x316 = -10;
	volatile int32_t t76 = 88426;

    t76 = (x313-(x314<=(x315>x316)));

    if (t76 != -2) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x317 = INT16_MAX;
	uint32_t x318 = UINT32_MAX;
	int64_t x319 = INT64_MIN;
	int16_t x320 = INT16_MAX;
	int32_t t77 = -21468;

    t77 = (x317-(x318<=(x319>x320)));

    if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x321 = 1;
	int8_t x322 = INT8_MIN;
	int8_t x324 = 2;
	int32_t t78 = -16002;

    t78 = (x321-(x322<=(x323>x324)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x326 = INT64_MAX;
	static uint8_t x327 = 3U;
	static volatile int32_t x328 = -6405846;
	volatile int32_t t79 = 2994048;

    t79 = (x325-(x326<=(x327>x328)));

    if (t79 != 113) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x329 = INT8_MIN;
	int64_t x330 = -3124969536987494013LL;
	volatile int8_t x331 = INT8_MAX;
	uint32_t x332 = UINT32_MAX;
	static int32_t t80 = 109;

    t80 = (x329-(x330<=(x331>x332)));

    if (t80 != -129) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x333 = -29;
	volatile uint8_t x334 = 1U;
	static int8_t x336 = -6;

    t81 = (x333-(x334<=(x335>x336)));

    if (t81 != -29) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x339 = 9563760222LLU;
	int32_t x340 = INT32_MIN;
	int64_t t82 = -776LL;

    t82 = (x337-(x338<=(x339>x340)));

    if (t82 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int64_t x341 = 285192LL;
	uint32_t x342 = UINT32_MAX;
	int16_t x344 = INT16_MAX;
	int64_t t83 = -5476565LL;

    t83 = (x341-(x342<=(x343>x344)));

    if (t83 != 285192LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x345 = INT64_MAX;
	int16_t x346 = INT16_MIN;
	uint64_t x347 = 5796357LLU;
	int8_t x348 = INT8_MAX;

    t84 = (x345-(x346<=(x347>x348)));

    if (t84 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x349 = INT32_MIN;
	volatile int8_t x351 = INT8_MAX;
	static volatile uint32_t x352 = 124492U;
	volatile int32_t t85 = INT32_MIN;

    t85 = (x349-(x350<=(x351>x352)));

    if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x353 = -691306168674LL;
	volatile int32_t x354 = INT32_MIN;
	int16_t x356 = -1;
	volatile int64_t t86 = -28649029LL;

    t86 = (x353-(x354<=(x355>x356)));

    if (t86 != -691306168675LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint8_t x358 = UINT8_MAX;
	int32_t x360 = INT32_MIN;
	volatile int32_t t87 = -2472608;

    t87 = (x357-(x358<=(x359>x360)));

    if (t87 != 5694) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint64_t x361 = UINT64_MAX;
	static uint32_t x362 = UINT32_MAX;
	int8_t x363 = 1;
	int8_t x364 = 6;
	static uint64_t t88 = UINT64_MAX;

    t88 = (x361-(x362<=(x363>x364)));

    if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint64_t x369 = 200163593697308LLU;
	volatile int32_t x370 = INT32_MIN;
	int64_t x371 = -55928970193089LL;
	volatile int64_t x372 = -1LL;
	volatile uint64_t t89 = 6LLU;

    t89 = (x369-(x370<=(x371>x372)));

    if (t89 != 200163593697307LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x373 = 30U;
	int64_t x374 = -43603901214084LL;
	volatile uint8_t x375 = 110U;
	int16_t x376 = 616;

    t90 = (x373-(x374<=(x375>x376)));

    if (t90 != 29) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x377 = 51017792333911LL;
	volatile int16_t x378 = -23;
	static uint8_t x379 = 2U;
	int64_t x380 = 500775LL;
	volatile int64_t t91 = -54518151102340LL;

    t91 = (x377-(x378<=(x379>x380)));

    if (t91 != 51017792333910LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x381 = 30476521228829LLU;
	uint8_t x383 = 0U;
	int32_t x384 = -253703726;
	uint64_t t92 = 6967967062638111482LLU;

    t92 = (x381-(x382<=(x383>x384)));

    if (t92 != 30476521228829LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x385 = INT8_MIN;
	static int16_t x386 = INT16_MIN;
	int32_t t93 = 1091190;

    t93 = (x385-(x386<=(x387>x388)));

    if (t93 != -129) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x389 = 5500U;
	static int64_t x390 = INT64_MIN;
	int64_t x391 = INT64_MIN;
	uint8_t x392 = 2U;

    t94 = (x389-(x390<=(x391>x392)));

    if (t94 != 5499) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x394 = INT64_MIN;
	int64_t x395 = -1LL;
	int32_t t95 = 10315416;

    t95 = (x393-(x394<=(x395>x396)));

    if (t95 != 10976) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x397 = INT8_MIN;
	int8_t x398 = -1;
	int16_t x399 = 1404;
	uint8_t x400 = 5U;
	int32_t t96 = -5;

    t96 = (x397-(x398<=(x399>x400)));

    if (t96 != -129) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x401 = INT8_MIN;
	static int32_t x402 = 875;
	static volatile int8_t x403 = INT8_MIN;
	uint64_t x404 = 3LLU;
	int32_t t97 = -6660;

    t97 = (x401-(x402<=(x403>x404)));

    if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x405 = 312700164253678LLU;
	volatile int16_t x406 = INT16_MIN;
	uint32_t x408 = 57961U;

    t98 = (x405-(x406<=(x407>x408)));

    if (t98 != 312700164253677LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x410 = INT16_MIN;
	int16_t x411 = 1;
	int32_t x412 = INT32_MAX;

    t99 = (x409-(x410<=(x411>x412)));

    if (t99 != -2) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x417 = -3;
	int16_t x418 = INT16_MAX;
	uint32_t x419 = 5391U;
	int8_t x420 = 0;
	int32_t t100 = -6759460;

    t100 = (x417-(x418<=(x419>x420)));

    if (t100 != -3) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x421 = -1;
	static uint64_t x422 = 307052490028890LLU;
	int8_t x423 = INT8_MIN;
	int16_t x424 = INT16_MIN;
	int32_t t101 = -1;

    t101 = (x421-(x422<=(x423>x424)));

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x425 = INT8_MAX;
	volatile int8_t x426 = INT8_MAX;
	int8_t x427 = INT8_MAX;
	uint64_t x428 = 425298920LLU;
	volatile int32_t t102 = -55845;

    t102 = (x425-(x426<=(x427>x428)));

    if (t102 != 127) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x429 = -1;
	uint32_t x430 = 15515347U;
	volatile uint8_t x431 = 3U;
	static int32_t x432 = -1;

    t103 = (x429-(x430<=(x431>x432)));

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint32_t x434 = 83749U;
	int64_t x435 = INT64_MIN;
	volatile int32_t t104 = 0;

    t104 = (x433-(x434<=(x435>x436)));

    if (t104 != 4) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x441 = UINT8_MAX;
	volatile int64_t x443 = 1925387606LL;
	int64_t x444 = INT64_MIN;
	int32_t t105 = -9784;

    t105 = (x441-(x442<=(x443>x444)));

    if (t105 != 255) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x445 = UINT16_MAX;
	int32_t x447 = 38124512;
	uint64_t x448 = 2961832LLU;

    t106 = (x445-(x446<=(x447>x448)));

    if (t106 != 65534) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x449 = 0U;
	int64_t x450 = -1LL;
	uint8_t x451 = 60U;
	static uint32_t t107 = UINT32_MAX;

    t107 = (x449-(x450<=(x451>x452)));

    if (t107 != UINT32_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x453 = -59;
	int64_t x454 = INT64_MAX;
	volatile int64_t x455 = -917844LL;
	static int16_t x456 = 7524;
	static int32_t t108 = -156747784;

    t108 = (x453-(x454<=(x455>x456)));

    if (t108 != -59) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x457 = 586059668342LLU;
	uint64_t x458 = UINT64_MAX;
	int64_t x459 = -1LL;
	int32_t x460 = INT32_MIN;

    t109 = (x457-(x458<=(x459>x460)));

    if (t109 != 586059668342LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x461 = INT16_MAX;
	uint64_t x462 = 8394919511417036LLU;

    t110 = (x461-(x462<=(x463>x464)));

    if (t110 != 32767) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x465 = INT32_MIN;
	uint16_t x467 = 124U;

    t111 = (x465-(x466<=(x467>x468)));

    if (t111 != INT32_MIN) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x469 = 73U;
	static int8_t x470 = INT8_MIN;
	volatile int64_t x471 = INT64_MIN;
	volatile int64_t x472 = INT64_MAX;
	volatile int32_t t112 = -43832738;

    t112 = (x469-(x470<=(x471>x472)));

    if (t112 != 72) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x477 = 63U;
	int32_t x479 = INT32_MIN;
	uint32_t x480 = 13U;
	static volatile uint32_t t113 = 7796787U;

    t113 = (x477-(x478<=(x479>x480)));

    if (t113 != 63U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x485 = 0U;
	int16_t x486 = 10763;
	static uint16_t x487 = UINT16_MAX;
	int8_t x488 = INT8_MIN;
	int32_t t114 = -3211672;

    t114 = (x485-(x486<=(x487>x488)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x489 = UINT8_MAX;
	int16_t x490 = INT16_MIN;
	static int8_t x491 = INT8_MIN;
	static volatile int64_t x492 = INT64_MAX;

    t115 = (x489-(x490<=(x491>x492)));

    if (t115 != 254) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x493 = 10749U;
	uint8_t x494 = 0U;
	int8_t x495 = INT8_MAX;
	static int16_t x496 = INT16_MAX;
	int32_t t116 = 258931643;

    t116 = (x493-(x494<=(x495>x496)));

    if (t116 != 10748) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint32_t x497 = UINT32_MAX;
	static int8_t x498 = INT8_MIN;
	uint64_t x499 = UINT64_MAX;
	int32_t x500 = 110821;
	volatile uint32_t t117 = 29550U;

    t117 = (x497-(x498<=(x499>x500)));

    if (t117 != 4294967294U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x502 = 159430404833700919LLU;
	static uint32_t x503 = 1625191737U;
	volatile uint8_t x504 = 3U;

    t118 = (x501-(x502<=(x503>x504)));

    if (t118 != -128) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x505 = INT8_MIN;
	uint16_t x506 = 3528U;
	uint8_t x508 = 5U;

    t119 = (x505-(x506<=(x507>x508)));

    if (t119 != -128) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x509 = 144540940121LLU;
	int16_t x511 = INT16_MAX;
	int16_t x512 = -1;
	static volatile uint64_t t120 = 209385701728458LLU;

    t120 = (x509-(x510<=(x511>x512)));

    if (t120 != 144540940121LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile uint16_t x513 = UINT16_MAX;
	int16_t x514 = INT16_MAX;
	int8_t x515 = -1;
	static volatile int8_t x516 = 0;

    t121 = (x513-(x514<=(x515>x516)));

    if (t121 != 65535) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x518 = UINT8_MAX;
	int16_t x519 = 9436;
	volatile int16_t x520 = INT16_MIN;
	volatile int32_t t122 = 1594095;

    t122 = (x517-(x518<=(x519>x520)));

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x521 = 974346181506627LLU;
	int64_t x522 = INT64_MIN;
	int64_t x523 = INT64_MAX;
	uint32_t x524 = 1281856U;
	uint64_t t123 = 334788499746LLU;

    t123 = (x521-(x522<=(x523>x524)));

    if (t123 != 974346181506626LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x525 = 3LLU;
	int32_t x526 = INT32_MIN;
	int32_t x527 = -3;
	uint64_t x528 = 4936286099865859095LLU;
	uint64_t t124 = 617LLU;

    t124 = (x525-(x526<=(x527>x528)));

    if (t124 != 2LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x530 = -8;
	int8_t x531 = -1;
	volatile int64_t x532 = -12306375219150LL;
	int32_t t125 = 3957627;

    t125 = (x529-(x530<=(x531>x532)));

    if (t125 != 29) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x533 = -2173;
	uint64_t x534 = 1581LLU;
	volatile int16_t x535 = INT16_MIN;
	volatile int8_t x536 = INT8_MIN;
	volatile int32_t t126 = 0;

    t126 = (x533-(x534<=(x535>x536)));

    if (t126 != -2173) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x537 = UINT64_MAX;
	static uint8_t x538 = 101U;
	volatile uint64_t t127 = UINT64_MAX;

    t127 = (x537-(x538<=(x539>x540)));

    if (t127 != UINT64_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x541 = INT16_MIN;
	uint64_t x542 = UINT64_MAX;
	int16_t x543 = 7;
	int8_t x544 = INT8_MIN;
	volatile int32_t t128 = -8;

    t128 = (x541-(x542<=(x543>x544)));

    if (t128 != -32768) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x545 = INT8_MIN;
	static int32_t x547 = INT32_MAX;
	uint32_t x548 = 1U;
	volatile int32_t t129 = -12404136;

    t129 = (x545-(x546<=(x547>x548)));

    if (t129 != -129) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x550 = INT64_MIN;
	static volatile uint64_t x552 = 5011213LLU;

    t130 = (x549-(x550<=(x551>x552)));

    if (t130 != 25) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x553 = INT8_MIN;
	int16_t x556 = INT16_MIN;
	int32_t t131 = -17066094;

    t131 = (x553-(x554<=(x555>x556)));

    if (t131 != -128) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x557 = -1LL;
	volatile int32_t x558 = INT32_MIN;
	int32_t x559 = -1;
	static uint64_t x560 = 12401541LLU;
	int64_t t132 = 6608682618LL;

    t132 = (x557-(x558<=(x559>x560)));

    if (t132 != -2LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x561 = UINT8_MAX;
	int16_t x563 = -165;
	static int64_t x564 = INT64_MIN;
	volatile int32_t t133 = 123465;

    t133 = (x561-(x562<=(x563>x564)));

    if (t133 != 255) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x565 = -814774332600LL;
	volatile int32_t x567 = INT32_MIN;
	static int8_t x568 = -35;
	int64_t t134 = 4842894LL;

    t134 = (x565-(x566<=(x567>x568)));

    if (t134 != -814774332600LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x569 = 8897LLU;
	uint32_t x570 = UINT32_MAX;
	int8_t x571 = INT8_MIN;
	int8_t x572 = INT8_MAX;
	volatile uint64_t t135 = 4428230LLU;

    t135 = (x569-(x570<=(x571>x572)));

    if (t135 != 8897LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x574 = INT16_MIN;
	int32_t x575 = INT32_MAX;
	static uint32_t x576 = 12U;
	volatile int32_t t136 = -402413623;

    t136 = (x573-(x574<=(x575>x576)));

    if (t136 != -2) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x578 = INT64_MAX;
	int64_t x579 = -1LL;
	static int32_t x580 = -3116989;
	static int32_t t137 = -70849;

    t137 = (x577-(x578<=(x579>x580)));

    if (t137 != 65535) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint32_t x581 = 1278311U;
	volatile int16_t x582 = INT16_MIN;
	volatile int32_t x583 = INT32_MIN;
	volatile int64_t x584 = -1LL;
	uint32_t t138 = 29708U;

    t138 = (x581-(x582<=(x583>x584)));

    if (t138 != 1278310U) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x585 = -641506;
	uint16_t x586 = 6U;
	int8_t x587 = 2;
	int16_t x588 = INT16_MIN;

    t139 = (x585-(x586<=(x587>x588)));

    if (t139 != -641506) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x589 = INT8_MIN;
	volatile int16_t x590 = INT16_MIN;
	static int64_t x591 = INT64_MAX;
	volatile int16_t x592 = INT16_MAX;
	static volatile int32_t t140 = 5104;

    t140 = (x589-(x590<=(x591>x592)));

    if (t140 != -129) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x593 = -1;
	int64_t x595 = 2623968LL;
	int32_t x596 = INT32_MIN;
	int32_t t141 = -723471;

    t141 = (x593-(x594<=(x595>x596)));

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x597 = 2149400453467969808LLU;
	uint32_t x598 = 33731515U;
	int16_t x600 = INT16_MIN;
	volatile uint64_t t142 = 3251341810LLU;

    t142 = (x597-(x598<=(x599>x600)));

    if (t142 != 2149400453467969808LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x602 = INT16_MIN;
	int8_t x603 = -1;
	uint32_t x604 = UINT32_MAX;

    t143 = (x601-(x602<=(x603>x604)));

    if (t143 != 62742175302064LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x605 = UINT64_MAX;
	int8_t x606 = INT8_MIN;
	int64_t x607 = -1LL;
	int8_t x608 = 47;
	static uint64_t t144 = 26387820266704921LLU;

    t144 = (x605-(x606<=(x607>x608)));

    if (t144 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x611 = INT64_MIN;
	int16_t x612 = INT16_MAX;
	volatile int64_t t145 = -691817LL;

    t145 = (x609-(x610<=(x611>x612)));

    if (t145 != 55684LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x613 = -1;
	volatile uint8_t x614 = UINT8_MAX;
	static volatile uint16_t x615 = UINT16_MAX;
	volatile uint32_t x616 = UINT32_MAX;
	int32_t t146 = -5;

    t146 = (x613-(x614<=(x615>x616)));

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x617 = -1LL;
	static int32_t x618 = INT32_MIN;
	int64_t t147 = -1LL;

    t147 = (x617-(x618<=(x619>x620)));

    if (t147 != -2LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x621 = 11798U;
	volatile uint32_t x622 = 88249U;
	uint8_t x623 = 108U;
	static int32_t x624 = 59962;

    t148 = (x621-(x622<=(x623>x624)));

    if (t148 != 11798U) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x625 = 1;
	int8_t x626 = INT8_MAX;
	int16_t x627 = INT16_MIN;
	volatile uint8_t x628 = 0U;
	int32_t t149 = 5119;

    t149 = (x625-(x626<=(x627>x628)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x630 = 0U;
	static int64_t x631 = 606423218037206LL;
	int8_t x632 = 0;
	int32_t t150 = 428;

    t150 = (x629-(x630<=(x631>x632)));

    if (t150 != 7) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x633 = 33777818102253060LLU;
	uint16_t x635 = 75U;
	static uint16_t x636 = 3U;
	volatile uint64_t t151 = 4446993184LLU;

    t151 = (x633-(x634<=(x635>x636)));

    if (t151 != 33777818102253060LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x637 = 23U;
	volatile int64_t x638 = INT64_MIN;
	int8_t x639 = INT8_MAX;
	int64_t x640 = -1LL;
	volatile int32_t t152 = -1;

    t152 = (x637-(x638<=(x639>x640)));

    if (t152 != 22) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x641 = 2251819628263LLU;
	volatile int16_t x642 = INT16_MIN;
	volatile int16_t x643 = INT16_MIN;
	uint32_t x644 = 254U;
	uint64_t t153 = 3936512824LLU;

    t153 = (x641-(x642<=(x643>x644)));

    if (t153 != 2251819628262LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x645 = INT32_MIN;
	static int64_t x646 = INT64_MAX;
	int16_t x648 = 0;
	volatile int32_t t154 = INT32_MIN;

    t154 = (x645-(x646<=(x647>x648)));

    if (t154 != INT32_MIN) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x649 = INT16_MIN;
	static int64_t x650 = -1LL;
	int8_t x651 = -1;
	int64_t x652 = -1LL;
	volatile int32_t t155 = 7;

    t155 = (x649-(x650<=(x651>x652)));

    if (t155 != -32769) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int32_t x654 = INT32_MAX;
	int16_t x655 = INT16_MAX;
	volatile uint64_t t156 = 4715856251LLU;

    t156 = (x653-(x654<=(x655>x656)));

    if (t156 != 9LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x657 = -31491184;
	uint8_t x658 = 2U;
	int8_t x660 = INT8_MIN;
	volatile int32_t t157 = 993883;

    t157 = (x657-(x658<=(x659>x660)));

    if (t157 != -31491184) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x661 = 142U;
	int8_t x662 = -1;
	uint32_t x663 = 53U;
	uint32_t x664 = UINT32_MAX;
	int32_t t158 = 5378368;

    t158 = (x661-(x662<=(x663>x664)));

    if (t158 != 141) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x665 = 7170492U;
	int64_t x668 = INT64_MIN;
	volatile uint32_t t159 = 760258U;

    t159 = (x665-(x666<=(x667>x668)));

    if (t159 != 7170492U) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint64_t x669 = 57800026336559LLU;
	volatile uint32_t x670 = 1709445692U;
	int8_t x671 = -1;
	int32_t x672 = -4383546;
	static volatile uint64_t t160 = 29432953135917LLU;

    t160 = (x669-(x670<=(x671>x672)));

    if (t160 != 57800026336559LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x673 = INT16_MAX;
	int8_t x674 = INT8_MAX;
	volatile uint16_t x675 = 1845U;
	int16_t x676 = 313;
	int32_t t161 = 914662422;

    t161 = (x673-(x674<=(x675>x676)));

    if (t161 != 32767) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x677 = 48753U;
	volatile int32_t x678 = 29739415;
	static int64_t x679 = -20793415LL;
	int8_t x680 = INT8_MIN;
	volatile uint32_t t162 = 3U;

    t162 = (x677-(x678<=(x679>x680)));

    if (t162 != 48753U) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x681 = INT64_MAX;
	uint8_t x682 = UINT8_MAX;

    t163 = (x681-(x682<=(x683>x684)));

    if (t163 != INT64_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x685 = UINT16_MAX;
	uint64_t x686 = UINT64_MAX;
	static int8_t x687 = -1;
	int16_t x688 = INT16_MAX;
	int32_t t164 = 21948;

    t164 = (x685-(x686<=(x687>x688)));

    if (t164 != 65535) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x690 = INT64_MAX;
	uint32_t x691 = UINT32_MAX;
	volatile uint32_t x692 = 1U;
	volatile int32_t t165 = INT32_MIN;

    t165 = (x689-(x690<=(x691>x692)));

    if (t165 != INT32_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x693 = 59910LL;
	static uint32_t x694 = 86896U;
	static int64_t x695 = INT64_MAX;
	int32_t x696 = INT32_MIN;
	static int64_t t166 = 1LL;

    t166 = (x693-(x694<=(x695>x696)));

    if (t166 != 59910LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint8_t x697 = 0U;
	uint64_t x698 = UINT64_MAX;
	static int8_t x700 = INT8_MIN;
	volatile int32_t t167 = 129569827;

    t167 = (x697-(x698<=(x699>x700)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x701 = 2434U;
	int32_t x702 = INT32_MAX;
	volatile uint16_t x704 = 6824U;
	int32_t t168 = -8093702;

    t168 = (x701-(x702<=(x703>x704)));

    if (t168 != 2434) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x705 = INT64_MAX;
	int64_t x706 = 2642559LL;
	int64_t x707 = -1LL;
	volatile int32_t x708 = INT32_MIN;
	int64_t t169 = INT64_MAX;

    t169 = (x705-(x706<=(x707>x708)));

    if (t169 != INT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x709 = 15335U;
	volatile int32_t x710 = -1;
	uint8_t x711 = UINT8_MAX;
	int8_t x712 = -2;
	static volatile int32_t t170 = 11593290;

    t170 = (x709-(x710<=(x711>x712)));

    if (t170 != 15334) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x713 = UINT16_MAX;
	uint8_t x714 = 89U;
	uint8_t x715 = 0U;
	uint16_t x716 = 24U;
	int32_t t171 = 422414;

    t171 = (x713-(x714<=(x715>x716)));

    if (t171 != 65535) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x717 = 37;
	uint64_t x718 = 525498007103795074LLU;
	int8_t x719 = INT8_MIN;
	int16_t x720 = -1;
	volatile int32_t t172 = 64758;

    t172 = (x717-(x718<=(x719>x720)));

    if (t172 != 37) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x721 = INT8_MAX;
	int8_t x722 = INT8_MIN;
	uint32_t x723 = UINT32_MAX;
	volatile int8_t x724 = 3;
	static volatile int32_t t173 = 240099;

    t173 = (x721-(x722<=(x723>x724)));

    if (t173 != 126) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x725 = -1LL;
	uint16_t x726 = UINT16_MAX;
	int32_t x728 = INT32_MIN;
	int64_t t174 = -35467LL;

    t174 = (x725-(x726<=(x727>x728)));

    if (t174 != -1LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint16_t x729 = 1U;
	static int8_t x730 = INT8_MIN;
	static int16_t x731 = INT16_MIN;
	int32_t x732 = 600549;
	static volatile int32_t t175 = 454;

    t175 = (x729-(x730<=(x731>x732)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x733 = INT32_MAX;
	int64_t x734 = -1LL;
	int32_t t176 = -234;

    t176 = (x733-(x734<=(x735>x736)));

    if (t176 != 2147483646) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x737 = 1U;
	static int16_t x738 = -5536;
	static int16_t x740 = -137;
	int32_t t177 = -946465771;

    t177 = (x737-(x738<=(x739>x740)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x741 = INT16_MAX;
	int64_t x742 = INT64_MIN;
	int8_t x743 = -1;
	int32_t x744 = INT32_MIN;
	static int32_t t178 = -46590;

    t178 = (x741-(x742<=(x743>x744)));

    if (t178 != 32766) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint32_t x745 = 484159U;
	int32_t x746 = -5701;
	int8_t x747 = 42;
	uint8_t x748 = 26U;
	uint32_t t179 = 17011804U;

    t179 = (x745-(x746<=(x747>x748)));

    if (t179 != 484158U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x749 = 538453034103LLU;
	static uint64_t x750 = 1121014094169865LLU;
	volatile uint32_t x752 = 1816122601U;
	volatile uint64_t t180 = 516052LLU;

    t180 = (x749-(x750<=(x751>x752)));

    if (t180 != 538453034103LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x753 = 98U;
	int8_t x754 = 1;
	int8_t x755 = -1;
	uint8_t x756 = 4U;
	int32_t t181 = 6445553;

    t181 = (x753-(x754<=(x755>x756)));

    if (t181 != 98) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x758 = INT64_MAX;
	static uint8_t x759 = 3U;
	uint8_t x760 = 33U;
	volatile int32_t t182 = 474;

    t182 = (x757-(x758<=(x759>x760)));

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x761 = INT16_MIN;
	uint8_t x764 = UINT8_MAX;
	volatile int32_t t183 = -122;

    t183 = (x761-(x762<=(x763>x764)));

    if (t183 != -32769) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x765 = 74711725111264LL;
	volatile int64_t x766 = INT64_MIN;
	int32_t x767 = -1;
	int32_t x768 = -1;
	volatile int64_t t184 = -1776691306346LL;

    t184 = (x765-(x766<=(x767>x768)));

    if (t184 != 74711725111263LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int32_t x769 = INT32_MAX;
	int8_t x770 = INT8_MIN;
	static int64_t x771 = -16297468548521046LL;
	volatile uint16_t x772 = UINT16_MAX;
	volatile int32_t t185 = 833503786;

    t185 = (x769-(x770<=(x771>x772)));

    if (t185 != 2147483646) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x773 = INT64_MIN;
	uint8_t x774 = 4U;
	volatile int64_t t186 = INT64_MIN;

    t186 = (x773-(x774<=(x775>x776)));

    if (t186 != INT64_MIN) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x777 = INT32_MIN;
	int64_t x778 = 3289537146LL;
	int64_t x779 = -1LL;
	int64_t x780 = INT64_MAX;
	static volatile int32_t t187 = INT32_MIN;

    t187 = (x777-(x778<=(x779>x780)));

    if (t187 != INT32_MIN) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x781 = INT64_MAX;
	int16_t x782 = -57;
	int16_t x783 = -1;
	int8_t x784 = -14;
	static volatile int64_t t188 = 176258728312574702LL;

    t188 = (x781-(x782<=(x783>x784)));

    if (t188 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x785 = UINT32_MAX;
	volatile uint16_t x786 = UINT16_MAX;
	static int8_t x787 = -1;
	int16_t x788 = INT16_MIN;
	uint32_t t189 = UINT32_MAX;

    t189 = (x785-(x786<=(x787>x788)));

    if (t189 != UINT32_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x789 = INT32_MAX;
	uint8_t x790 = 1U;
	int32_t x792 = INT32_MAX;
	static int32_t t190 = INT32_MAX;

    t190 = (x789-(x790<=(x791>x792)));

    if (t190 != INT32_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x793 = 152831911292181LLU;
	volatile int32_t x794 = INT32_MIN;
	static int64_t x795 = INT64_MIN;
	static uint64_t t191 = 3LLU;

    t191 = (x793-(x794<=(x795>x796)));

    if (t191 != 152831911292180LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int16_t x797 = -1;
	int16_t x798 = -13;
	static int8_t x799 = -3;
	volatile int32_t x800 = INT32_MIN;

    t192 = (x797-(x798<=(x799>x800)));

    if (t192 != -2) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x801 = -121058450901333295LL;
	volatile int64_t t193 = 194933744687010503LL;

    t193 = (x801-(x802<=(x803>x804)));

    if (t193 != -121058450901333296LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x806 = -1;
	int8_t x808 = -15;
	static int64_t t194 = 25LL;

    t194 = (x805-(x806<=(x807>x808)));

    if (t194 != -1759458858348LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x810 = INT16_MIN;
	int8_t x811 = INT8_MIN;
	volatile int32_t x812 = -250;
	int64_t t195 = -7462668LL;

    t195 = (x809-(x810<=(x811>x812)));

    if (t195 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x813 = -1;
	static volatile int64_t x814 = -61302392536659LL;
	static int32_t x815 = -1;
	int64_t x816 = INT64_MIN;
	int32_t t196 = 79;

    t196 = (x813-(x814<=(x815>x816)));

    if (t196 != -2) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x817 = -1LL;
	uint16_t x819 = 631U;
	volatile int8_t x820 = INT8_MIN;

    t197 = (x817-(x818<=(x819>x820)));

    if (t197 != -1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint16_t x822 = 13402U;
	volatile uint32_t x823 = UINT32_MAX;
	static volatile int16_t x824 = INT16_MIN;
	int32_t t198 = -395065;

    t198 = (x821-(x822<=(x823>x824)));

    if (t198 != 65535) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x825 = -1LL;
	int16_t x826 = INT16_MIN;
	int32_t x827 = 93608719;
	int16_t x828 = INT16_MIN;
	volatile int64_t t199 = 3454312640925LL;

    t199 = (x825-(x826<=(x827>x828)));

    if (t199 != -2LL) { NG(); } else { ; }
	
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

