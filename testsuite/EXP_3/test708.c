
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

volatile int32_t x2 = INT32_MAX;
int8_t x9 = INT8_MIN;
int32_t x18 = INT32_MAX;
static int32_t x23 = -1;
int64_t x29 = INT64_MIN;
volatile int32_t t8 = -10;
int32_t x37 = -1;
int16_t x38 = -1;
static uint16_t x46 = UINT16_MAX;
int16_t x47 = -3;
int32_t t11 = -1;
int8_t x54 = 15;
uint32_t x56 = 3U;
uint32_t x59 = 2U;
int8_t x60 = INT8_MIN;
uint64_t x66 = 1301LLU;
uint8_t x70 = 0U;
int64_t x75 = -1LL;
int16_t x76 = 58;
int8_t x77 = INT8_MAX;
int16_t x91 = INT16_MAX;
uint32_t x102 = 705U;
uint32_t x104 = 1U;
int64_t x110 = -1LL;
volatile uint8_t x113 = 3U;
int8_t x116 = INT8_MAX;
int8_t x120 = -1;
uint16_t x123 = UINT16_MAX;
int8_t x129 = 11;
int32_t x132 = 46;
int16_t x135 = INT16_MAX;
int32_t t33 = 2209;
int8_t x142 = INT8_MIN;
uint64_t x146 = 21272820797323LLU;
int16_t x157 = 1415;
uint8_t x165 = UINT8_MAX;
uint8_t x168 = 58U;
static volatile uint64_t x169 = UINT64_MAX;
static uint8_t x170 = 41U;
int64_t x174 = -1LL;
uint32_t x189 = UINT32_MAX;
static volatile int32_t t46 = -3;
volatile int8_t x194 = INT8_MAX;
uint8_t x195 = UINT8_MAX;
static int8_t x200 = 12;
int64_t x201 = INT64_MAX;
volatile uint32_t x204 = 24674U;
int32_t x205 = 28170;
int16_t x207 = -1;
static int16_t x208 = -1;
volatile int16_t x222 = INT16_MAX;
uint64_t x223 = 28617443LLU;
volatile int16_t x245 = INT16_MIN;
uint32_t x268 = 29U;
static uint8_t x279 = 95U;
volatile int32_t t66 = -27;
static volatile int16_t x282 = -1934;
int8_t x283 = INT8_MIN;
volatile int32_t t68 = 26457;
int64_t x289 = 150285LL;
static uint8_t x290 = UINT8_MAX;
uint64_t x295 = UINT64_MAX;
static int8_t x296 = -1;
volatile int32_t t70 = -2463;
int16_t x297 = 5;
static volatile int32_t t71 = 0;
int8_t x302 = INT8_MIN;
int16_t x305 = INT16_MIN;
int16_t x307 = 1;
static uint64_t x309 = 297311831085203277LLU;
volatile int32_t t74 = 8803098;
static volatile int64_t x327 = -1638858195190779532LL;
static int32_t x329 = -391027;
int16_t x339 = INT16_MAX;
volatile int32_t t84 = 1;
static int32_t x357 = INT32_MAX;
int32_t t87 = 175;
static int64_t x365 = INT64_MIN;
static volatile int64_t x367 = INT64_MIN;
volatile int8_t x371 = INT8_MIN;
int64_t x377 = 22691LL;
int8_t x380 = INT8_MAX;
volatile int32_t t91 = 19;
int64_t x393 = 137255472420LL;
int64_t x394 = INT64_MAX;
int32_t t95 = -108256303;
static uint64_t x397 = 374221389847529928LLU;
uint8_t x400 = 1U;
int32_t t96 = 1657231;
volatile int32_t x407 = INT32_MIN;
uint32_t x412 = 58U;
static uint16_t x414 = 287U;
volatile uint32_t x418 = 28377U;
int8_t x420 = INT8_MIN;
static uint8_t x423 = UINT8_MAX;
int64_t x430 = INT64_MIN;
uint32_t x433 = 0U;
uint64_t x437 = 177787016005LLU;
uint32_t x445 = 28545660U;
volatile int8_t x448 = INT8_MAX;
volatile int8_t x451 = INT8_MAX;
int16_t x460 = -1;
static int64_t x469 = INT64_MAX;
int32_t x479 = -1;
int8_t x490 = INT8_MAX;
static volatile int32_t t117 = 0;
static int32_t x493 = INT32_MAX;
int16_t x494 = INT16_MAX;
uint32_t x496 = 3940U;
int32_t t120 = -243964;
int8_t x512 = INT8_MIN;
int32_t x513 = 0;
volatile uint16_t x514 = 10523U;
volatile int8_t x516 = INT8_MIN;
uint64_t x517 = 970733246LLU;
int64_t x518 = INT64_MIN;
uint16_t x519 = 843U;
static int16_t x520 = INT16_MAX;
int8_t x534 = INT8_MIN;
int64_t x540 = -1LL;
static volatile uint64_t x541 = UINT64_MAX;
volatile int8_t x543 = -2;
int64_t x546 = 40LL;
int32_t t131 = -9971;
uint8_t x555 = 7U;
volatile int32_t t132 = 42520;
static int32_t t133 = 2330581;
int32_t x561 = -1;
static uint64_t x562 = UINT64_MAX;
volatile int32_t t136 = 1;
static int64_t x573 = INT64_MAX;
int32_t t141 = 2;
static int16_t x598 = INT16_MAX;
volatile uint8_t x603 = 10U;
volatile int16_t x607 = 1820;
int64_t x608 = -106909541LL;
volatile int32_t t146 = -18509734;
volatile int16_t x613 = INT16_MAX;
volatile int8_t x616 = INT8_MIN;
uint16_t x619 = 5U;
volatile int8_t x622 = INT8_MIN;
int8_t x629 = -1;
int32_t t151 = -5025236;
int16_t x634 = 1;
int16_t x640 = 917;
volatile int16_t x641 = INT16_MAX;
int32_t x650 = INT32_MIN;
int16_t x651 = INT16_MAX;
int64_t x656 = 157876653138260046LL;
volatile int32_t t156 = -4546777;
volatile int32_t t157 = -5425124;
volatile int32_t t158 = -8841157;
static volatile int32_t t160 = 0;
int32_t t161 = 1;
static int16_t x682 = -755;
int64_t x684 = -166202861305166689LL;
volatile int32_t t163 = -96211;
volatile int8_t x686 = -1;
int8_t x694 = -1;
int32_t t166 = -199;
int64_t x707 = -1LL;
int32_t x721 = INT32_MIN;
volatile int32_t x723 = 3;
int32_t t174 = 420012330;
int32_t x733 = INT32_MAX;
int64_t x736 = -1LL;
static int16_t x737 = INT16_MIN;
volatile int32_t t177 = 2376394;
int32_t t178 = 7653019;
int16_t x749 = INT16_MAX;
uint64_t x750 = 3054142166634LLU;
int64_t x752 = 8661229275859LL;
uint64_t x757 = UINT64_MAX;
int32_t x762 = INT32_MAX;
uint16_t x771 = UINT16_MAX;
volatile int32_t t185 = -329603828;
int8_t x785 = -29;
int16_t x792 = -29;
int32_t x799 = -162943824;
static int16_t x800 = -1;
volatile int8_t x803 = INT8_MIN;
static int64_t x812 = INT64_MIN;
volatile int64_t x821 = -131274172LL;
int64_t x834 = INT64_MIN;
static uint64_t x835 = 1675862LLU;
uint16_t x836 = 47U;


void f0(void) {
    	uint16_t x1 = 18292U;
	volatile uint8_t x3 = 113U;
	int8_t x4 = INT8_MIN;
	static volatile int32_t t0 = -2;

    t0 = ((x1>x2)==(x3/x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = -1LL;
	uint64_t x6 = UINT64_MAX;
	int16_t x7 = INT16_MAX;
	int16_t x8 = INT16_MAX;
	int32_t t1 = -193443162;

    t1 = ((x5>x6)==(x7/x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x10 = INT8_MIN;
	uint16_t x11 = 1U;
	uint16_t x12 = 4536U;
	volatile int32_t t2 = 354567115;

    t2 = ((x9>x10)==(x11/x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint32_t x13 = 2547U;
	static int64_t x14 = -1LL;
	int64_t x15 = 25091LL;
	int8_t x16 = -46;
	int32_t t3 = -187897;

    t3 = ((x13>x14)==(x15/x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = 3;
	int8_t x19 = INT8_MIN;
	int64_t x20 = INT64_MAX;
	volatile int32_t t4 = -10;

    t4 = ((x17>x18)==(x19/x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MAX;
	uint8_t x22 = 0U;
	volatile int32_t x24 = 148698106;
	int32_t t5 = 1;

    t5 = ((x21>x22)==(x23/x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = 23;
	int64_t x26 = INT64_MIN;
	static uint64_t x27 = UINT64_MAX;
	int32_t x28 = -1;
	int32_t t6 = -2982070;

    t6 = ((x25>x26)==(x27/x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x30 = -1;
	static uint8_t x31 = 2U;
	static int32_t x32 = INT32_MAX;
	int32_t t7 = 235597489;

    t7 = ((x29>x30)==(x31/x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	int16_t x34 = -12;
	uint8_t x35 = UINT8_MAX;
	int64_t x36 = -14909428676LL;

    t8 = ((x33>x34)==(x35/x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x39 = -537516313;
	uint64_t x40 = 1774LLU;
	int32_t t9 = 0;

    t9 = ((x37>x38)==(x39/x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x41 = INT8_MAX;
	int16_t x42 = -1;
	static volatile int8_t x43 = -19;
	volatile int32_t x44 = INT32_MIN;
	int32_t t10 = -47;

    t10 = ((x41>x42)==(x43/x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x45 = INT16_MIN;
	uint32_t x48 = 829U;

    t11 = ((x45>x46)==(x47/x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = 246375830664579448LLU;
	int32_t x50 = INT32_MIN;
	volatile int16_t x51 = -1;
	uint32_t x52 = UINT32_MAX;
	volatile int32_t t12 = -6140573;

    t12 = ((x49>x50)==(x51/x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x53 = INT16_MAX;
	int16_t x55 = 350;
	int32_t t13 = -262545;

    t13 = ((x53>x54)==(x55/x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MIN;
	int8_t x58 = 52;
	volatile int32_t t14 = 41299139;

    t14 = ((x57>x58)==(x59/x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x61 = 13U;
	int64_t x62 = INT64_MIN;
	int64_t x63 = -1LL;
	int64_t x64 = INT64_MAX;
	volatile int32_t t15 = 0;

    t15 = ((x61>x62)==(x63/x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x65 = INT32_MIN;
	int16_t x67 = INT16_MAX;
	uint64_t x68 = UINT64_MAX;
	int32_t t16 = -35710463;

    t16 = ((x65>x66)==(x67/x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MIN;
	uint64_t x71 = UINT64_MAX;
	uint32_t x72 = UINT32_MAX;
	volatile int32_t t17 = -3;

    t17 = ((x69>x70)==(x71/x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x73 = 1080741482380669LLU;
	static int16_t x74 = -327;
	volatile int32_t t18 = -401824006;

    t18 = ((x73>x74)==(x75/x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x78 = INT32_MIN;
	volatile int8_t x79 = 0;
	int32_t x80 = 347584715;
	int32_t t19 = 0;

    t19 = ((x77>x78)==(x79/x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x85 = INT64_MIN;
	uint8_t x86 = UINT8_MAX;
	int8_t x87 = INT8_MAX;
	uint32_t x88 = 308U;
	int32_t t20 = -241644;

    t20 = ((x85>x86)==(x87/x88));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x89 = INT32_MAX;
	static volatile int64_t x90 = INT64_MAX;
	uint8_t x92 = 16U;
	volatile int32_t t21 = 8;

    t21 = ((x89>x90)==(x91/x92));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x93 = 31317592U;
	uint16_t x94 = 1U;
	int16_t x95 = INT16_MIN;
	uint16_t x96 = UINT16_MAX;
	static volatile int32_t t22 = -262081600;

    t22 = ((x93>x94)==(x95/x96));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x97 = INT16_MIN;
	volatile uint8_t x98 = 1U;
	static uint8_t x99 = 0U;
	uint32_t x100 = UINT32_MAX;
	volatile int32_t t23 = -1034;

    t23 = ((x97>x98)==(x99/x100));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x101 = INT64_MIN;
	int32_t x103 = 93;
	static int32_t t24 = 18;

    t24 = ((x101>x102)==(x103/x104));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x105 = -82LL;
	int8_t x106 = -1;
	static int16_t x107 = -21;
	int8_t x108 = -1;
	int32_t t25 = 479;

    t25 = ((x105>x106)==(x107/x108));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x109 = -1LL;
	uint16_t x111 = UINT16_MAX;
	static uint64_t x112 = UINT64_MAX;
	static int32_t t26 = 3233427;

    t26 = ((x109>x110)==(x111/x112));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x114 = UINT16_MAX;
	static int32_t x115 = INT32_MIN;
	volatile int32_t t27 = -238983526;

    t27 = ((x113>x114)==(x115/x116));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x117 = -1;
	uint16_t x118 = UINT16_MAX;
	int64_t x119 = -9912661216576991LL;
	volatile int32_t t28 = 20677;

    t28 = ((x117>x118)==(x119/x120));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x121 = 1U;
	static int32_t x122 = INT32_MIN;
	static uint64_t x124 = 1659478LLU;
	int32_t t29 = -108182;

    t29 = ((x121>x122)==(x123/x124));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x125 = 33U;
	int32_t x126 = INT32_MAX;
	int8_t x127 = INT8_MIN;
	volatile int32_t x128 = INT32_MIN;
	int32_t t30 = 361210;

    t30 = ((x125>x126)==(x127/x128));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x130 = -1;
	int16_t x131 = INT16_MAX;
	volatile int32_t t31 = 1175552;

    t31 = ((x129>x130)==(x131/x132));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x133 = 25508647LL;
	int64_t x134 = INT64_MIN;
	int32_t x136 = INT32_MIN;
	int32_t t32 = -114691;

    t32 = ((x133>x134)==(x135/x136));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x137 = 5757540U;
	int32_t x138 = 528224548;
	int32_t x139 = INT32_MAX;
	uint8_t x140 = UINT8_MAX;

    t33 = ((x137>x138)==(x139/x140));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x141 = INT32_MAX;
	static uint64_t x143 = 0LLU;
	int16_t x144 = 1;
	int32_t t34 = 688807233;

    t34 = ((x141>x142)==(x143/x144));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x145 = 807U;
	static int16_t x147 = 7;
	static int16_t x148 = 1;
	int32_t t35 = -6236;

    t35 = ((x145>x146)==(x147/x148));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x149 = 6U;
	static int16_t x150 = -1;
	volatile int16_t x151 = 3;
	int8_t x152 = INT8_MIN;
	int32_t t36 = -18896;

    t36 = ((x149>x150)==(x151/x152));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x153 = INT64_MAX;
	uint32_t x154 = 2979192U;
	uint16_t x155 = 124U;
	int32_t x156 = 1744744;
	volatile int32_t t37 = -146;

    t37 = ((x153>x154)==(x155/x156));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x158 = INT64_MAX;
	static uint64_t x159 = UINT64_MAX;
	uint64_t x160 = 10686038LLU;
	int32_t t38 = 0;

    t38 = ((x157>x158)==(x159/x160));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x161 = INT8_MIN;
	int8_t x162 = -57;
	uint64_t x163 = 92LLU;
	int32_t x164 = 45659;
	int32_t t39 = -18;

    t39 = ((x161>x162)==(x163/x164));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x166 = INT64_MIN;
	volatile int16_t x167 = -47;
	int32_t t40 = -250025795;

    t40 = ((x165>x166)==(x167/x168));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile uint16_t x171 = 123U;
	int16_t x172 = INT16_MIN;
	volatile int32_t t41 = -7191;

    t41 = ((x169>x170)==(x171/x172));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x173 = INT32_MIN;
	volatile int16_t x175 = INT16_MIN;
	int32_t x176 = INT32_MAX;
	volatile int32_t t42 = 234;

    t42 = ((x173>x174)==(x175/x176));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x177 = -1LL;
	int16_t x178 = INT16_MIN;
	uint64_t x179 = UINT64_MAX;
	static int8_t x180 = 2;
	volatile int32_t t43 = -1;

    t43 = ((x177>x178)==(x179/x180));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x181 = INT32_MIN;
	uint32_t x182 = 2858459U;
	uint8_t x183 = 42U;
	int64_t x184 = INT64_MAX;
	volatile int32_t t44 = -20415798;

    t44 = ((x181>x182)==(x183/x184));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x185 = 42;
	int16_t x186 = INT16_MAX;
	int32_t x187 = -4;
	int32_t x188 = -1;
	int32_t t45 = 1060906952;

    t45 = ((x185>x186)==(x187/x188));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x190 = 491076192662LLU;
	int8_t x191 = -20;
	static volatile uint64_t x192 = 88861403LLU;

    t46 = ((x189>x190)==(x191/x192));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x193 = -2759954528067LL;
	static int64_t x196 = INT64_MIN;
	volatile int32_t t47 = -11139378;

    t47 = ((x193>x194)==(x195/x196));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x197 = INT8_MIN;
	uint16_t x198 = 5728U;
	static int16_t x199 = INT16_MIN;
	int32_t t48 = -8;

    t48 = ((x197>x198)==(x199/x200));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x202 = -1;
	volatile int16_t x203 = INT16_MIN;
	volatile int32_t t49 = 58650;

    t49 = ((x201>x202)==(x203/x204));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x206 = 1;
	static volatile int32_t t50 = -66149;

    t50 = ((x205>x206)==(x207/x208));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x213 = INT16_MAX;
	uint32_t x214 = UINT32_MAX;
	int16_t x215 = INT16_MAX;
	int16_t x216 = 54;
	volatile int32_t t51 = 23353;

    t51 = ((x213>x214)==(x215/x216));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x217 = INT32_MIN;
	int16_t x218 = INT16_MAX;
	int64_t x219 = 133360965942LL;
	static int8_t x220 = INT8_MAX;
	static int32_t t52 = 5;

    t52 = ((x217>x218)==(x219/x220));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x221 = INT16_MIN;
	int64_t x224 = INT64_MIN;
	volatile int32_t t53 = -358788883;

    t53 = ((x221>x222)==(x223/x224));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x225 = UINT8_MAX;
	static volatile int64_t x226 = INT64_MAX;
	volatile uint16_t x227 = 323U;
	int8_t x228 = -1;
	int32_t t54 = -629473065;

    t54 = ((x225>x226)==(x227/x228));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x229 = 247LLU;
	uint64_t x230 = UINT64_MAX;
	int32_t x231 = INT32_MIN;
	static uint16_t x232 = UINT16_MAX;
	int32_t t55 = -2258216;

    t55 = ((x229>x230)==(x231/x232));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x233 = -1;
	int16_t x234 = -1;
	static int8_t x235 = 8;
	uint8_t x236 = 7U;
	int32_t t56 = 4597375;

    t56 = ((x233>x234)==(x235/x236));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x241 = -92;
	int8_t x242 = 0;
	static volatile int32_t x243 = -1;
	int8_t x244 = INT8_MIN;
	volatile int32_t t57 = -283346193;

    t57 = ((x241>x242)==(x243/x244));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x246 = -856;
	int64_t x247 = -1LL;
	uint64_t x248 = 8165LLU;
	static int32_t t58 = -455409;

    t58 = ((x245>x246)==(x247/x248));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x249 = 35708870321554LLU;
	volatile uint16_t x250 = UINT16_MAX;
	int8_t x251 = -1;
	volatile int16_t x252 = -315;
	static volatile int32_t t59 = 9915489;

    t59 = ((x249>x250)==(x251/x252));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x253 = 0U;
	int32_t x254 = INT32_MAX;
	uint8_t x255 = 7U;
	int16_t x256 = 1;
	volatile int32_t t60 = -130261365;

    t60 = ((x253>x254)==(x255/x256));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x257 = 574838503803LLU;
	int16_t x258 = 1;
	volatile int64_t x259 = -6357LL;
	int32_t x260 = 30708843;
	static volatile int32_t t61 = -16631926;

    t61 = ((x257>x258)==(x259/x260));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x261 = -467437344469617LL;
	volatile int8_t x262 = -30;
	uint16_t x263 = 6950U;
	int64_t x264 = -1LL;
	int32_t t62 = -1899959;

    t62 = ((x261>x262)==(x263/x264));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x265 = INT8_MIN;
	uint64_t x266 = 163110LLU;
	volatile uint8_t x267 = UINT8_MAX;
	volatile int32_t t63 = -388312;

    t63 = ((x265>x266)==(x267/x268));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x269 = UINT8_MAX;
	int64_t x270 = INT64_MIN;
	uint8_t x271 = 1U;
	uint16_t x272 = 2617U;
	volatile int32_t t64 = -841;

    t64 = ((x269>x270)==(x271/x272));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x273 = -1;
	volatile int16_t x274 = 1;
	volatile int16_t x275 = INT16_MAX;
	int8_t x276 = -1;
	int32_t t65 = 14327;

    t65 = ((x273>x274)==(x275/x276));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x277 = UINT32_MAX;
	int32_t x278 = -161895;
	static int64_t x280 = -1LL;

    t66 = ((x277>x278)==(x279/x280));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile uint64_t x281 = UINT64_MAX;
	uint16_t x284 = 5773U;
	volatile int32_t t67 = 248721315;

    t67 = ((x281>x282)==(x283/x284));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x285 = INT16_MAX;
	int8_t x286 = 1;
	static int32_t x287 = -1;
	static uint64_t x288 = UINT64_MAX;

    t68 = ((x285>x286)==(x287/x288));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile uint8_t x291 = 33U;
	volatile int32_t x292 = INT32_MIN;
	volatile int32_t t69 = 51397;

    t69 = ((x289>x290)==(x291/x292));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x293 = INT32_MIN;
	uint8_t x294 = UINT8_MAX;

    t70 = ((x293>x294)==(x295/x296));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x298 = -2222;
	int16_t x299 = 0;
	int16_t x300 = -1;

    t71 = ((x297>x298)==(x299/x300));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x301 = INT16_MIN;
	static int64_t x303 = INT64_MIN;
	uint8_t x304 = UINT8_MAX;
	volatile int32_t t72 = -229501;

    t72 = ((x301>x302)==(x303/x304));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t x306 = 2123U;
	uint32_t x308 = UINT32_MAX;
	int32_t t73 = 195914686;

    t73 = ((x305>x306)==(x307/x308));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x310 = INT16_MIN;
	volatile uint64_t x311 = 5961316499LLU;
	volatile uint64_t x312 = UINT64_MAX;

    t74 = ((x309>x310)==(x311/x312));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x313 = 34406731U;
	int16_t x314 = 3;
	int64_t x315 = INT64_MIN;
	uint16_t x316 = 1U;
	int32_t t75 = -18527920;

    t75 = ((x313>x314)==(x315/x316));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x317 = 1763LL;
	int16_t x318 = INT16_MIN;
	int8_t x319 = INT8_MIN;
	int8_t x320 = -1;
	volatile int32_t t76 = 22;

    t76 = ((x317>x318)==(x319/x320));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x321 = -1;
	int16_t x322 = INT16_MIN;
	int8_t x323 = INT8_MIN;
	static volatile int64_t x324 = INT64_MIN;
	int32_t t77 = 0;

    t77 = ((x321>x322)==(x323/x324));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x325 = INT16_MIN;
	int16_t x326 = -1;
	static volatile uint8_t x328 = 1U;
	volatile int32_t t78 = 1073914;

    t78 = ((x325>x326)==(x327/x328));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x330 = 0U;
	uint32_t x331 = 1128671470U;
	static int64_t x332 = 1314LL;
	volatile int32_t t79 = -88547761;

    t79 = ((x329>x330)==(x331/x332));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x333 = INT8_MIN;
	int16_t x334 = -1;
	int8_t x335 = 54;
	uint8_t x336 = 119U;
	static int32_t t80 = 133557527;

    t80 = ((x333>x334)==(x335/x336));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x337 = 109;
	volatile uint32_t x338 = UINT32_MAX;
	volatile int32_t x340 = -1;
	static int32_t t81 = 110;

    t81 = ((x337>x338)==(x339/x340));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint16_t x341 = 1695U;
	int16_t x342 = -1;
	int32_t x343 = -146;
	static int8_t x344 = INT8_MIN;
	volatile int32_t t82 = -3;

    t82 = ((x341>x342)==(x343/x344));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x345 = INT16_MIN;
	uint8_t x346 = 109U;
	uint64_t x347 = UINT64_MAX;
	int16_t x348 = -16127;
	volatile int32_t t83 = -19;

    t83 = ((x345>x346)==(x347/x348));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x349 = INT64_MAX;
	uint32_t x350 = 10461U;
	int16_t x351 = 0;
	static int8_t x352 = INT8_MIN;

    t84 = ((x349>x350)==(x351/x352));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x353 = -19LL;
	static int32_t x354 = INT32_MIN;
	static volatile int8_t x355 = -6;
	int16_t x356 = -10413;
	volatile int32_t t85 = 14623603;

    t85 = ((x353>x354)==(x355/x356));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x358 = UINT64_MAX;
	static int32_t x359 = 34047391;
	int64_t x360 = -1LL;
	static int32_t t86 = -13446;

    t86 = ((x357>x358)==(x359/x360));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x361 = -939143;
	int8_t x362 = 5;
	int64_t x363 = -34843919062678LL;
	int16_t x364 = INT16_MAX;

    t87 = ((x361>x362)==(x363/x364));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x366 = INT32_MAX;
	int64_t x368 = INT64_MIN;
	volatile int32_t t88 = 10;

    t88 = ((x365>x366)==(x367/x368));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x369 = 0;
	static int64_t x370 = -9705753LL;
	int8_t x372 = -1;
	static int32_t t89 = 3391158;

    t89 = ((x369>x370)==(x371/x372));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint64_t x373 = UINT64_MAX;
	static int8_t x374 = INT8_MIN;
	int32_t x375 = -175111256;
	int8_t x376 = -1;
	int32_t t90 = 1;

    t90 = ((x373>x374)==(x375/x376));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x378 = INT16_MIN;
	int32_t x379 = -1;

    t91 = ((x377>x378)==(x379/x380));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x381 = INT16_MAX;
	volatile int8_t x382 = INT8_MIN;
	int8_t x383 = -1;
	static int16_t x384 = 24;
	static volatile int32_t t92 = 63458;

    t92 = ((x381>x382)==(x383/x384));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x385 = INT8_MIN;
	static volatile uint8_t x386 = 24U;
	int32_t x387 = 2104;
	int8_t x388 = INT8_MAX;
	static volatile int32_t t93 = -18010519;

    t93 = ((x385>x386)==(x387/x388));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x389 = INT32_MIN;
	int8_t x390 = INT8_MAX;
	int8_t x391 = 2;
	volatile uint8_t x392 = 94U;
	static volatile int32_t t94 = 47286812;

    t94 = ((x389>x390)==(x391/x392));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x395 = 16058298U;
	int32_t x396 = -1;

    t95 = ((x393>x394)==(x395/x396));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x398 = -1;
	uint8_t x399 = 1U;

    t96 = ((x397>x398)==(x399/x400));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x401 = UINT8_MAX;
	int64_t x402 = 1063459467542060LL;
	static int32_t x403 = INT32_MIN;
	static int16_t x404 = INT16_MIN;
	static volatile int32_t t97 = 126465242;

    t97 = ((x401>x402)==(x403/x404));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x405 = INT16_MAX;
	int64_t x406 = INT64_MIN;
	int8_t x408 = INT8_MAX;
	int32_t t98 = -33615;

    t98 = ((x405>x406)==(x407/x408));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x409 = UINT32_MAX;
	int16_t x410 = INT16_MIN;
	static int32_t x411 = INT32_MAX;
	int32_t t99 = 905;

    t99 = ((x409>x410)==(x411/x412));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x413 = INT16_MIN;
	int8_t x415 = INT8_MAX;
	int8_t x416 = -1;
	int32_t t100 = 7625647;

    t100 = ((x413>x414)==(x415/x416));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x417 = 7142398LLU;
	uint16_t x419 = 4686U;
	int32_t t101 = 3821;

    t101 = ((x417>x418)==(x419/x420));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x421 = INT64_MIN;
	int8_t x422 = 5;
	volatile int8_t x424 = -1;
	int32_t t102 = -2;

    t102 = ((x421>x422)==(x423/x424));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x425 = INT16_MAX;
	volatile int16_t x426 = 18;
	int64_t x427 = 4LL;
	int32_t x428 = -1;
	static int32_t t103 = 677;

    t103 = ((x425>x426)==(x427/x428));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x429 = 35U;
	int32_t x431 = INT32_MIN;
	int32_t x432 = INT32_MIN;
	static int32_t t104 = -886081;

    t104 = ((x429>x430)==(x431/x432));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x434 = INT32_MIN;
	uint8_t x435 = 5U;
	static int8_t x436 = INT8_MIN;
	volatile int32_t t105 = 3028387;

    t105 = ((x433>x434)==(x435/x436));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x438 = INT16_MIN;
	volatile int32_t x439 = INT32_MIN;
	int32_t x440 = INT32_MAX;
	int32_t t106 = 0;

    t106 = ((x437>x438)==(x439/x440));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x441 = -1;
	volatile int32_t x442 = INT32_MIN;
	int8_t x443 = INT8_MIN;
	static volatile uint32_t x444 = UINT32_MAX;
	int32_t t107 = 199208866;

    t107 = ((x441>x442)==(x443/x444));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x446 = 10LLU;
	int8_t x447 = 0;
	volatile int32_t t108 = 0;

    t108 = ((x445>x446)==(x447/x448));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x449 = INT64_MIN;
	uint32_t x450 = 1861U;
	uint64_t x452 = UINT64_MAX;
	volatile int32_t t109 = 0;

    t109 = ((x449>x450)==(x451/x452));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint64_t x453 = 7736LLU;
	int64_t x454 = 2076606614LL;
	uint16_t x455 = 682U;
	uint32_t x456 = UINT32_MAX;
	int32_t t110 = -307219;

    t110 = ((x453>x454)==(x455/x456));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x457 = -1;
	uint16_t x458 = 10U;
	static int64_t x459 = 130029845606608370LL;
	volatile int32_t t111 = 113;

    t111 = ((x457>x458)==(x459/x460));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x465 = UINT16_MAX;
	int8_t x466 = -1;
	int8_t x467 = 45;
	uint32_t x468 = UINT32_MAX;
	int32_t t112 = 222290;

    t112 = ((x465>x466)==(x467/x468));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x470 = UINT16_MAX;
	uint64_t x471 = 1627916454LLU;
	int32_t x472 = INT32_MIN;
	volatile int32_t t113 = 3636;

    t113 = ((x469>x470)==(x471/x472));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x477 = 1;
	volatile uint16_t x478 = 10770U;
	uint8_t x480 = 3U;
	volatile int32_t t114 = 148650486;

    t114 = ((x477>x478)==(x479/x480));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x481 = 280818LLU;
	int64_t x482 = -6478664LL;
	int32_t x483 = INT32_MIN;
	int8_t x484 = INT8_MAX;
	int32_t t115 = 189360551;

    t115 = ((x481>x482)==(x483/x484));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x485 = INT16_MAX;
	static volatile int32_t x486 = 107978367;
	volatile int8_t x487 = -48;
	uint16_t x488 = 4812U;
	static volatile int32_t t116 = 6952421;

    t116 = ((x485>x486)==(x487/x488));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x489 = 2U;
	static uint16_t x491 = 2652U;
	uint16_t x492 = 176U;

    t117 = ((x489>x490)==(x491/x492));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x495 = INT8_MIN;
	static volatile int32_t t118 = -31145289;

    t118 = ((x493>x494)==(x495/x496));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x497 = -1;
	volatile int8_t x498 = INT8_MIN;
	volatile int8_t x499 = 1;
	int64_t x500 = 43858452LL;
	int32_t t119 = -733906;

    t119 = ((x497>x498)==(x499/x500));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x501 = 24;
	uint32_t x502 = 59828318U;
	int16_t x503 = INT16_MIN;
	volatile int8_t x504 = INT8_MIN;

    t120 = ((x501>x502)==(x503/x504));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x505 = -1;
	volatile int16_t x506 = -1;
	int16_t x507 = INT16_MIN;
	int8_t x508 = INT8_MAX;
	static volatile int32_t t121 = -590;

    t121 = ((x505>x506)==(x507/x508));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x509 = 157057618LL;
	uint64_t x510 = 1072701860LLU;
	static uint32_t x511 = UINT32_MAX;
	static volatile int32_t t122 = 33883;

    t122 = ((x509>x510)==(x511/x512));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x515 = UINT16_MAX;
	volatile int32_t t123 = -3;

    t123 = ((x513>x514)==(x515/x516));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t t124 = 0;

    t124 = ((x517>x518)==(x519/x520));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x521 = INT16_MIN;
	int64_t x522 = INT64_MIN;
	int16_t x523 = 1;
	static int32_t x524 = -2498125;
	volatile int32_t t125 = -462;

    t125 = ((x521>x522)==(x523/x524));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x525 = 2424LLU;
	uint64_t x526 = 1102LLU;
	static uint32_t x527 = 8187U;
	volatile int32_t x528 = INT32_MAX;
	volatile int32_t t126 = 13;

    t126 = ((x525>x526)==(x527/x528));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x529 = 1U;
	int16_t x530 = INT16_MAX;
	uint64_t x531 = UINT64_MAX;
	static uint8_t x532 = 3U;
	int32_t t127 = -38;

    t127 = ((x529>x530)==(x531/x532));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x533 = 10323816889LL;
	int64_t x535 = INT64_MIN;
	uint64_t x536 = 201010103124LLU;
	int32_t t128 = -1500;

    t128 = ((x533>x534)==(x535/x536));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x537 = 5U;
	static int16_t x538 = -5;
	int8_t x539 = -1;
	int32_t t129 = 1;

    t129 = ((x537>x538)==(x539/x540));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x542 = INT32_MIN;
	static volatile int64_t x544 = INT64_MAX;
	int32_t t130 = 1;

    t130 = ((x541>x542)==(x543/x544));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x545 = INT32_MIN;
	int32_t x547 = INT32_MIN;
	static int16_t x548 = -54;

    t131 = ((x545>x546)==(x547/x548));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x553 = 212123U;
	volatile int16_t x554 = INT16_MAX;
	int32_t x556 = 40;

    t132 = ((x553>x554)==(x555/x556));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x557 = -18;
	int32_t x558 = INT32_MIN;
	static int8_t x559 = INT8_MIN;
	volatile int32_t x560 = -188;

    t133 = ((x557>x558)==(x559/x560));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x563 = 16U;
	static int64_t x564 = 5243183784439401LL;
	int32_t t134 = -50661006;

    t134 = ((x561>x562)==(x563/x564));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x565 = INT64_MIN;
	static uint32_t x566 = UINT32_MAX;
	int64_t x567 = INT64_MIN;
	int16_t x568 = INT16_MIN;
	int32_t t135 = 418013;

    t135 = ((x565>x566)==(x567/x568));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x569 = -1;
	uint16_t x570 = 17U;
	uint32_t x571 = 122992U;
	uint8_t x572 = 51U;

    t136 = ((x569>x570)==(x571/x572));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x574 = INT64_MIN;
	int64_t x575 = INT64_MIN;
	static int64_t x576 = INT64_MAX;
	static int32_t t137 = -1462;

    t137 = ((x573>x574)==(x575/x576));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x577 = INT32_MIN;
	uint8_t x578 = 48U;
	uint64_t x579 = 27LLU;
	volatile uint32_t x580 = UINT32_MAX;
	volatile int32_t t138 = -20;

    t138 = ((x577>x578)==(x579/x580));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x581 = -1LL;
	int8_t x582 = -7;
	int32_t x583 = INT32_MIN;
	int8_t x584 = -37;
	int32_t t139 = -63467648;

    t139 = ((x581>x582)==(x583/x584));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x585 = INT32_MIN;
	int32_t x586 = INT32_MIN;
	int16_t x587 = INT16_MIN;
	int64_t x588 = -74395763667363LL;
	int32_t t140 = 55484;

    t140 = ((x585>x586)==(x587/x588));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x589 = INT8_MAX;
	int64_t x590 = INT64_MAX;
	int64_t x591 = 16327338866LL;
	int8_t x592 = 7;

    t141 = ((x589>x590)==(x591/x592));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x593 = INT16_MAX;
	static uint64_t x594 = UINT64_MAX;
	int16_t x595 = 1;
	volatile int32_t x596 = INT32_MIN;
	volatile int32_t t142 = 381449;

    t142 = ((x593>x594)==(x595/x596));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x597 = INT16_MIN;
	uint64_t x599 = UINT64_MAX;
	uint8_t x600 = 26U;
	volatile int32_t t143 = 2;

    t143 = ((x597>x598)==(x599/x600));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x601 = UINT32_MAX;
	int16_t x602 = INT16_MIN;
	volatile int8_t x604 = INT8_MIN;
	int32_t t144 = 44194;

    t144 = ((x601>x602)==(x603/x604));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x605 = UINT32_MAX;
	int32_t x606 = 96740;
	volatile int32_t t145 = 1284834;

    t145 = ((x605>x606)==(x607/x608));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x609 = -7;
	static int8_t x610 = -1;
	int8_t x611 = -34;
	int32_t x612 = -309465183;

    t146 = ((x609>x610)==(x611/x612));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x614 = 3U;
	uint16_t x615 = UINT16_MAX;
	int32_t t147 = 270486;

    t147 = ((x613>x614)==(x615/x616));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x617 = INT16_MIN;
	int64_t x618 = -1LL;
	int16_t x620 = -1;
	int32_t t148 = 96196674;

    t148 = ((x617>x618)==(x619/x620));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x621 = 1;
	static uint8_t x623 = 1U;
	int32_t x624 = -48;
	volatile int32_t t149 = -96;

    t149 = ((x621>x622)==(x623/x624));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x625 = UINT8_MAX;
	static int64_t x626 = 9727295400LL;
	uint32_t x627 = 224616545U;
	uint16_t x628 = UINT16_MAX;
	int32_t t150 = 50;

    t150 = ((x625>x626)==(x627/x628));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x630 = INT16_MIN;
	int16_t x631 = INT16_MIN;
	volatile int64_t x632 = 16104690070422LL;

    t151 = ((x629>x630)==(x631/x632));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x633 = INT32_MIN;
	uint32_t x635 = UINT32_MAX;
	static int16_t x636 = -2077;
	int32_t t152 = -579618497;

    t152 = ((x633>x634)==(x635/x636));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x637 = INT8_MIN;
	uint16_t x638 = UINT16_MAX;
	int64_t x639 = 1LL;
	volatile int32_t t153 = 535;

    t153 = ((x637>x638)==(x639/x640));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x642 = 0;
	uint32_t x643 = 569U;
	uint8_t x644 = UINT8_MAX;
	static int32_t t154 = 28;

    t154 = ((x641>x642)==(x643/x644));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x649 = 6;
	int8_t x652 = -1;
	int32_t t155 = -128798433;

    t155 = ((x649>x650)==(x651/x652));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x653 = 1;
	static int64_t x654 = -1LL;
	uint16_t x655 = 721U;

    t156 = ((x653>x654)==(x655/x656));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x657 = INT8_MIN;
	int32_t x658 = INT32_MAX;
	int16_t x659 = -15062;
	int64_t x660 = INT64_MAX;

    t157 = ((x657>x658)==(x659/x660));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x661 = -252441598051008654LL;
	static uint32_t x662 = UINT32_MAX;
	volatile uint32_t x663 = UINT32_MAX;
	int64_t x664 = -1LL;

    t158 = ((x661>x662)==(x663/x664));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x665 = INT64_MIN;
	static uint32_t x666 = 683686374U;
	int64_t x667 = 224LL;
	static uint64_t x668 = 2288053644036547017LLU;
	int32_t t159 = 107;

    t159 = ((x665>x666)==(x667/x668));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x669 = 1;
	int32_t x670 = INT32_MIN;
	int64_t x671 = 204360214058425LL;
	static uint16_t x672 = 25630U;

    t160 = ((x669>x670)==(x671/x672));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x673 = INT8_MIN;
	int64_t x674 = 638139612663310LL;
	volatile int32_t x675 = -1;
	int8_t x676 = INT8_MAX;

    t161 = ((x673>x674)==(x675/x676));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x677 = -1609702651756122540LL;
	int64_t x678 = INT64_MIN;
	volatile int64_t x679 = INT64_MAX;
	uint16_t x680 = 13285U;
	volatile int32_t t162 = 1926;

    t162 = ((x677>x678)==(x679/x680));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int8_t x681 = 3;
	int8_t x683 = 2;

    t163 = ((x681>x682)==(x683/x684));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x685 = INT64_MAX;
	volatile int32_t x687 = 0;
	uint16_t x688 = 61U;
	static volatile int32_t t164 = -1702071;

    t164 = ((x685>x686)==(x687/x688));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x689 = 1U;
	static volatile int8_t x690 = 0;
	int64_t x691 = -473500738746154543LL;
	static uint8_t x692 = UINT8_MAX;
	static int32_t t165 = -123;

    t165 = ((x689>x690)==(x691/x692));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x693 = 775U;
	int8_t x695 = INT8_MAX;
	int8_t x696 = INT8_MIN;

    t166 = ((x693>x694)==(x695/x696));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x697 = 29614922612327LLU;
	static uint64_t x698 = UINT64_MAX;
	int16_t x699 = -253;
	uint64_t x700 = 803355417453LLU;
	volatile int32_t t167 = -7327;

    t167 = ((x697>x698)==(x699/x700));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x701 = -25;
	int64_t x702 = 4257225201889110515LL;
	int8_t x703 = INT8_MIN;
	uint32_t x704 = 142215U;
	int32_t t168 = -3678786;

    t168 = ((x701>x702)==(x703/x704));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x705 = UINT16_MAX;
	int8_t x706 = INT8_MIN;
	int32_t x708 = INT32_MIN;
	volatile int32_t t169 = 9556;

    t169 = ((x705>x706)==(x707/x708));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x709 = -1LL;
	static uint64_t x710 = 407518065314145057LLU;
	int8_t x711 = INT8_MAX;
	volatile uint32_t x712 = 19U;
	volatile int32_t t170 = 7961842;

    t170 = ((x709>x710)==(x711/x712));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x713 = INT8_MIN;
	uint16_t x714 = 0U;
	uint16_t x715 = 3U;
	int16_t x716 = INT16_MAX;
	volatile int32_t t171 = 5;

    t171 = ((x713>x714)==(x715/x716));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x717 = -31;
	volatile int16_t x718 = 41;
	uint16_t x719 = 85U;
	static volatile int32_t x720 = INT32_MIN;
	static int32_t t172 = 7069;

    t172 = ((x717>x718)==(x719/x720));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x722 = 0;
	uint16_t x724 = 142U;
	volatile int32_t t173 = -13972;

    t173 = ((x721>x722)==(x723/x724));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x725 = 938U;
	uint32_t x726 = UINT32_MAX;
	int16_t x727 = -1;
	uint32_t x728 = 438U;

    t174 = ((x725>x726)==(x727/x728));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x729 = 184U;
	uint32_t x730 = 9237U;
	uint8_t x731 = 0U;
	int8_t x732 = -1;
	volatile int32_t t175 = -19094106;

    t175 = ((x729>x730)==(x731/x732));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x734 = INT16_MIN;
	static volatile int32_t x735 = -609983;
	int32_t t176 = 32301;

    t176 = ((x733>x734)==(x735/x736));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x738 = -1;
	uint64_t x739 = 66LLU;
	volatile int8_t x740 = INT8_MIN;

    t177 = ((x737>x738)==(x739/x740));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x745 = 1U;
	uint32_t x746 = UINT32_MAX;
	int32_t x747 = -1;
	int16_t x748 = INT16_MIN;

    t178 = ((x745>x746)==(x747/x748));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint16_t x751 = 0U;
	volatile int32_t t179 = 0;

    t179 = ((x749>x750)==(x751/x752));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x753 = 0;
	uint8_t x754 = UINT8_MAX;
	uint32_t x755 = 3348U;
	static int16_t x756 = -16287;
	volatile int32_t t180 = -59;

    t180 = ((x753>x754)==(x755/x756));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x758 = INT16_MAX;
	int16_t x759 = INT16_MIN;
	uint32_t x760 = 51114U;
	int32_t t181 = -341269;

    t181 = ((x757>x758)==(x759/x760));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x761 = INT32_MIN;
	int64_t x763 = INT64_MIN;
	uint64_t x764 = 59749769117164LLU;
	static volatile int32_t t182 = -886;

    t182 = ((x761>x762)==(x763/x764));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile uint64_t x765 = UINT64_MAX;
	uint8_t x766 = 11U;
	uint64_t x767 = 57622LLU;
	int8_t x768 = -1;
	int32_t t183 = 1;

    t183 = ((x765>x766)==(x767/x768));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x769 = 669463;
	volatile int64_t x770 = INT64_MIN;
	static int64_t x772 = INT64_MIN;
	static int32_t t184 = -763975382;

    t184 = ((x769>x770)==(x771/x772));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x773 = 48;
	volatile uint64_t x774 = 16650020954019LLU;
	static int32_t x775 = 221;
	uint8_t x776 = 7U;

    t185 = ((x773>x774)==(x775/x776));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x777 = 172545U;
	int16_t x778 = INT16_MIN;
	int8_t x779 = INT8_MAX;
	static int64_t x780 = 1906390352LL;
	volatile int32_t t186 = -598758381;

    t186 = ((x777>x778)==(x779/x780));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x781 = INT32_MIN;
	int8_t x782 = INT8_MIN;
	int16_t x783 = INT16_MIN;
	static uint64_t x784 = 46040781399402062LLU;
	volatile int32_t t187 = 184;

    t187 = ((x781>x782)==(x783/x784));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x786 = INT16_MIN;
	uint16_t x787 = 13U;
	volatile uint8_t x788 = 1U;
	volatile int32_t t188 = 3943;

    t188 = ((x785>x786)==(x787/x788));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x789 = INT32_MIN;
	int16_t x790 = INT16_MIN;
	int64_t x791 = -636LL;
	static int32_t t189 = -8467;

    t189 = ((x789>x790)==(x791/x792));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x793 = 899553110LLU;
	uint32_t x794 = 7850356U;
	int16_t x795 = 0;
	int64_t x796 = 20125651533568LL;
	volatile int32_t t190 = -1;

    t190 = ((x793>x794)==(x795/x796));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x797 = 10900549;
	int16_t x798 = 0;
	int32_t t191 = 3873;

    t191 = ((x797>x798)==(x799/x800));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x801 = INT64_MAX;
	int8_t x802 = -7;
	uint8_t x804 = 31U;
	volatile int32_t t192 = 443626;

    t192 = ((x801>x802)==(x803/x804));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x805 = INT32_MAX;
	uint8_t x806 = 84U;
	int32_t x807 = 806;
	int16_t x808 = INT16_MIN;
	volatile int32_t t193 = -2;

    t193 = ((x805>x806)==(x807/x808));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x809 = INT32_MIN;
	int8_t x810 = -1;
	int16_t x811 = INT16_MIN;
	volatile int32_t t194 = 14;

    t194 = ((x809>x810)==(x811/x812));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x813 = -1;
	uint32_t x814 = 876U;
	int32_t x815 = INT32_MIN;
	uint64_t x816 = UINT64_MAX;
	int32_t t195 = 63;

    t195 = ((x813>x814)==(x815/x816));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x817 = INT16_MIN;
	int16_t x818 = INT16_MIN;
	static uint32_t x819 = 28987U;
	int64_t x820 = INT64_MIN;
	volatile int32_t t196 = -476;

    t196 = ((x817>x818)==(x819/x820));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x822 = INT32_MAX;
	uint64_t x823 = 0LLU;
	int32_t x824 = INT32_MIN;
	volatile int32_t t197 = -1;

    t197 = ((x821>x822)==(x823/x824));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x825 = UINT32_MAX;
	static uint16_t x826 = 12U;
	static int8_t x827 = 1;
	static int64_t x828 = -1LL;
	int32_t t198 = -55249314;

    t198 = ((x825>x826)==(x827/x828));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x833 = 28144823U;
	int32_t t199 = 7905;

    t199 = ((x833>x834)==(x835/x836));

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

