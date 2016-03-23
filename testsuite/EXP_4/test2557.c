
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

int32_t x1 = INT32_MIN;
volatile uint64_t x18 = 1876LLU;
int64_t x19 = INT64_MIN;
volatile int8_t x20 = -1;
volatile int32_t t2 = -3;
static int8_t x21 = INT8_MIN;
static volatile int32_t t4 = -22702883;
volatile int32_t t6 = 35066;
int32_t t7 = -378150;
int16_t x44 = -1;
volatile int32_t t8 = -143889051;
int64_t x46 = INT64_MIN;
volatile int32_t t10 = 480444396;
static int32_t t11 = -31814648;
static int32_t t14 = -52;
uint64_t x83 = UINT64_MAX;
uint32_t x88 = 6995050U;
uint16_t x99 = UINT16_MAX;
volatile uint16_t x106 = 10658U;
int32_t x108 = 0;
int32_t t20 = 3;
static uint32_t x111 = 3600889U;
uint64_t x112 = 156822524LLU;
int32_t t21 = 84305643;
volatile uint32_t x115 = UINT32_MAX;
static int8_t x124 = INT8_MAX;
static int8_t x125 = -1;
int64_t x126 = -1LL;
int8_t x129 = -1;
static volatile uint32_t x131 = UINT32_MAX;
uint64_t x140 = 419288857LLU;
volatile int32_t t28 = -117370910;
static int16_t x148 = INT16_MAX;
uint32_t x154 = 28354U;
uint16_t x155 = 0U;
int64_t x161 = -164930LL;
uint16_t x163 = 6144U;
uint64_t x165 = 62154LLU;
static int8_t x172 = -1;
static uint64_t x175 = 0LLU;
uint8_t x176 = UINT8_MAX;
int8_t x183 = INT8_MIN;
int32_t t38 = 65378;
static uint64_t x207 = UINT64_MAX;
uint64_t x209 = 17355478637333LLU;
uint32_t x216 = UINT32_MAX;
int32_t t45 = 608835018;
uint64_t x218 = UINT64_MAX;
uint32_t x222 = 4993353U;
int16_t x223 = INT16_MIN;
uint64_t x228 = 8712860256014006738LLU;
int32_t t50 = 0;
int32_t x252 = INT32_MIN;
static int32_t x260 = INT32_MAX;
int32_t t55 = 1570169;
static int64_t x263 = INT64_MIN;
uint32_t x265 = 257422U;
static int8_t x266 = INT8_MAX;
int32_t x278 = -1;
volatile int8_t x280 = INT8_MIN;
static int32_t x283 = INT32_MIN;
static int32_t t62 = 3012;
static int8_t x289 = INT8_MAX;
int32_t t63 = -3917971;
static int32_t t65 = -171772449;
uint16_t x303 = UINT16_MAX;
int64_t x304 = -1LL;
volatile int64_t x316 = 51223LL;
volatile int32_t x318 = -1;
static int32_t t70 = -68297;
uint8_t x323 = 1U;
int32_t x324 = INT32_MAX;
volatile int32_t t71 = -5939083;
volatile uint32_t x333 = 11466U;
uint8_t x335 = UINT8_MAX;
int8_t x343 = -1;
int32_t t74 = 218;
static int64_t x347 = INT64_MIN;
int32_t x350 = INT32_MAX;
uint16_t x353 = 2U;
uint8_t x354 = 107U;
int8_t x358 = INT8_MIN;
static uint32_t x360 = 20483423U;
int64_t x363 = 3LL;
volatile int32_t t81 = -1;
int64_t x373 = 490740187291825641LL;
static volatile int32_t t84 = 1;
int16_t x385 = INT16_MAX;
int32_t t85 = -244742393;
uint16_t x392 = UINT16_MAX;
static int64_t x401 = -3719985630502358LL;
int64_t x402 = 46232453388320910LL;
int16_t x410 = -1;
uint64_t x412 = UINT64_MAX;
int8_t x414 = INT8_MAX;
int32_t t92 = -2983;
int64_t x420 = INT64_MAX;
int32_t x430 = INT32_MIN;
volatile int64_t x431 = -1LL;
uint64_t x432 = 131LLU;
int32_t x436 = INT32_MIN;
uint16_t x445 = UINT16_MAX;
int8_t x450 = -1;
uint64_t x451 = UINT64_MAX;
volatile int32_t t100 = -1;
static int16_t x454 = INT16_MIN;
uint32_t x469 = 2036U;
volatile int64_t x471 = 91358532353LL;
static int64_t x475 = -1LL;
int8_t x480 = INT8_MIN;
int32_t x501 = INT32_MIN;
static int32_t t111 = 62;
uint16_t x508 = UINT16_MAX;
static volatile int8_t x510 = INT8_MIN;
int16_t x511 = -1;
int32_t x528 = INT32_MIN;
volatile int32_t t117 = -10388563;
volatile int32_t t118 = -1580;
int16_t x546 = INT16_MIN;
int16_t x548 = INT16_MAX;
uint16_t x549 = 213U;
static int16_t x563 = INT16_MAX;
int64_t x564 = INT64_MIN;
int64_t x569 = -1LL;
int32_t t126 = 23;
uint64_t x580 = 743836LLU;
int32_t x587 = -32673141;
volatile int32_t t133 = 24390;
static volatile int32_t t134 = 566065;
uint8_t x624 = 9U;
int8_t x625 = INT8_MIN;
int32_t t138 = -8424;
static int8_t x646 = 6;
volatile int16_t x659 = 2012;
volatile int32_t t145 = -16248;
uint32_t x680 = 93U;
static uint32_t x684 = UINT32_MAX;
int16_t x694 = INT16_MAX;
volatile uint32_t x701 = 1244U;
volatile uint64_t x702 = UINT64_MAX;
static volatile int64_t x709 = -1LL;
uint64_t x713 = 1860706708LLU;
static int16_t x716 = INT16_MIN;
volatile int32_t t156 = 44;
int64_t x718 = INT64_MIN;
volatile int64_t x719 = 6849182LL;
volatile int8_t x720 = 58;
int8_t x727 = -1;
int8_t x735 = 1;
uint32_t x736 = 81125264U;
uint32_t x739 = 22U;
volatile int32_t x745 = 3915720;
uint32_t x748 = 3044U;
volatile int32_t t164 = 1;
volatile int8_t x755 = INT8_MIN;
int16_t x759 = 0;
int16_t x761 = INT16_MAX;
uint16_t x765 = UINT16_MAX;
int32_t x768 = INT32_MIN;
int32_t x771 = INT32_MIN;
uint16_t x791 = UINT16_MAX;
uint32_t x792 = 5376136U;
static volatile int32_t t174 = 0;
volatile int8_t x801 = -1;
uint16_t x805 = UINT16_MAX;
static uint16_t x806 = 2U;
int16_t x813 = INT16_MAX;
static int32_t t179 = -6277;
volatile int8_t x817 = 2;
static volatile int32_t x820 = INT32_MIN;
uint16_t x824 = UINT16_MAX;
static int16_t x826 = INT16_MIN;
uint16_t x831 = UINT16_MAX;
static volatile int32_t t184 = 0;
uint32_t x848 = 2050972582U;
volatile uint16_t x849 = UINT16_MAX;
uint64_t x855 = 17528286689LLU;
volatile int16_t x859 = -15576;
volatile int32_t t191 = -204;
static int16_t x872 = INT16_MIN;
int32_t t193 = 13;
static uint8_t x877 = UINT8_MAX;
int8_t x893 = -1;
uint16_t x899 = UINT16_MAX;


void f0(void) {
    	static uint64_t x2 = 1080358LLU;
	uint8_t x3 = 8U;
	static int16_t x4 = INT16_MAX;
	int32_t t0 = 87;

    t0 = (x1>(x2+(x3^x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x9 = 30U;
	static uint8_t x10 = 30U;
	static int8_t x11 = INT8_MIN;
	volatile int64_t x12 = 3LL;
	volatile int32_t t1 = -6;

    t1 = (x9>(x10+(x11^x12)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x17 = -1;

    t2 = (x17>(x18+(x19^x20)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x22 = -377;
	int32_t x23 = INT32_MIN;
	int32_t x24 = INT32_MIN;
	int32_t t3 = -1259;

    t3 = (x21>(x22+(x23^x24)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x25 = UINT8_MAX;
	int16_t x26 = INT16_MIN;
	uint64_t x27 = 64098844567134LLU;
	uint64_t x28 = UINT64_MAX;

    t4 = (x25>(x26+(x27^x28)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint8_t x29 = UINT8_MAX;
	int8_t x30 = INT8_MIN;
	uint32_t x31 = 457536705U;
	int64_t x32 = 8758185148LL;
	static int32_t t5 = -2;

    t5 = (x29>(x30+(x31^x32)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x33 = 1984LL;
	int32_t x34 = -1;
	uint8_t x35 = UINT8_MAX;
	static volatile uint64_t x36 = 4047050521715597LLU;

    t6 = (x33>(x34+(x35^x36)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint32_t x37 = 1911799651U;
	volatile int16_t x38 = 219;
	volatile int64_t x39 = 11482905862205257LL;
	uint64_t x40 = UINT64_MAX;

    t7 = (x37>(x38+(x39^x40)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x41 = 0U;
	static volatile uint16_t x42 = 686U;
	volatile uint8_t x43 = 95U;

    t8 = (x41>(x42+(x43^x44)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x45 = INT8_MAX;
	uint32_t x47 = 1160U;
	int32_t x48 = INT32_MIN;
	int32_t t9 = 1;

    t9 = (x45>(x46+(x47^x48)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x49 = 6486676U;
	static uint32_t x50 = 122459U;
	uint64_t x51 = 103077LLU;
	uint64_t x52 = UINT64_MAX;

    t10 = (x49>(x50+(x51^x52)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x61 = -1;
	int32_t x62 = -1;
	static int8_t x63 = 0;
	int32_t x64 = -710740;

    t11 = (x61>(x62+(x63^x64)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x65 = 47498U;
	int16_t x66 = INT16_MAX;
	uint64_t x67 = 33LLU;
	volatile int64_t x68 = INT64_MIN;
	int32_t t12 = -16060;

    t12 = (x65>(x66+(x67^x68)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x69 = 24;
	uint16_t x70 = UINT16_MAX;
	int64_t x71 = INT64_MIN;
	static uint32_t x72 = UINT32_MAX;
	static volatile int32_t t13 = 56461549;

    t13 = (x69>(x70+(x71^x72)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x77 = -1;
	int64_t x78 = 4594164499LL;
	int16_t x79 = INT16_MAX;
	volatile int8_t x80 = INT8_MAX;

    t14 = (x77>(x78+(x79^x80)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x81 = 2U;
	volatile uint64_t x82 = 1095060614400884LLU;
	int32_t x84 = 28865289;
	int32_t t15 = -9;

    t15 = (x81>(x82+(x83^x84)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x85 = -1;
	int32_t x86 = INT32_MIN;
	static uint64_t x87 = 5LLU;
	int32_t t16 = -22158121;

    t16 = (x85>(x86+(x87^x88)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x89 = INT64_MIN;
	volatile int8_t x90 = -19;
	static int64_t x91 = INT64_MIN;
	int16_t x92 = -3187;
	static int32_t t17 = -33;

    t17 = (x89>(x90+(x91^x92)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x93 = 0;
	volatile int16_t x94 = -1;
	uint64_t x95 = UINT64_MAX;
	int8_t x96 = -53;
	int32_t t18 = -854087586;

    t18 = (x93>(x94+(x95^x96)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x97 = INT16_MIN;
	int16_t x98 = INT16_MIN;
	volatile int8_t x100 = INT8_MAX;
	int32_t t19 = 0;

    t19 = (x97>(x98+(x99^x100)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x105 = 3472021392051306394LL;
	int64_t x107 = -1LL;

    t20 = (x105>(x106+(x107^x108)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x109 = INT8_MIN;
	volatile int64_t x110 = INT64_MAX;

    t21 = (x109>(x110+(x111^x112)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x113 = 4U;
	int32_t x114 = 101608178;
	static uint8_t x116 = 20U;
	static int32_t t22 = -202737772;

    t22 = (x113>(x114+(x115^x116)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x117 = INT16_MIN;
	uint8_t x118 = 49U;
	uint64_t x119 = UINT64_MAX;
	static volatile uint32_t x120 = UINT32_MAX;
	volatile int32_t t23 = -2;

    t23 = (x117>(x118+(x119^x120)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x121 = 56U;
	static int64_t x122 = -9150LL;
	int16_t x123 = INT16_MIN;
	int32_t t24 = -31859;

    t24 = (x121>(x122+(x123^x124)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x127 = INT64_MAX;
	static int32_t x128 = INT32_MIN;
	volatile int32_t t25 = 3;

    t25 = (x125>(x126+(x127^x128)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x130 = INT8_MIN;
	int8_t x132 = -1;
	volatile int32_t t26 = -3751;

    t26 = (x129>(x130+(x131^x132)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x133 = INT32_MAX;
	int16_t x134 = INT16_MIN;
	int16_t x135 = 0;
	uint32_t x136 = 0U;
	int32_t t27 = -61156;

    t27 = (x133>(x134+(x135^x136)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x137 = 61U;
	int16_t x138 = INT16_MIN;
	volatile uint16_t x139 = UINT16_MAX;

    t28 = (x137>(x138+(x139^x140)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x141 = UINT8_MAX;
	int32_t x142 = INT32_MIN;
	int64_t x143 = -2025LL;
	static int16_t x144 = INT16_MIN;
	volatile int32_t t29 = -741;

    t29 = (x141>(x142+(x143^x144)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x145 = -9;
	uint8_t x146 = 112U;
	int32_t x147 = INT32_MIN;
	static volatile int32_t t30 = -101;

    t30 = (x145>(x146+(x147^x148)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x153 = -3787;
	int16_t x156 = -1;
	int32_t t31 = -1048954224;

    t31 = (x153>(x154+(x155^x156)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x162 = 208402U;
	int32_t x164 = -1;
	volatile int32_t t32 = -7421946;

    t32 = (x161>(x162+(x163^x164)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x166 = 6621392U;
	int8_t x167 = INT8_MIN;
	int16_t x168 = INT16_MIN;
	volatile int32_t t33 = -802;

    t33 = (x165>(x166+(x167^x168)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x169 = 20;
	int32_t x170 = -1;
	volatile uint32_t x171 = 3285U;
	int32_t t34 = -3770392;

    t34 = (x169>(x170+(x171^x172)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x173 = 24U;
	uint8_t x174 = UINT8_MAX;
	int32_t t35 = -859;

    t35 = (x173>(x174+(x175^x176)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x177 = INT8_MIN;
	int8_t x178 = INT8_MIN;
	static volatile int32_t x179 = INT32_MIN;
	static int32_t x180 = INT32_MIN;
	volatile int32_t t36 = -848;

    t36 = (x177>(x178+(x179^x180)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x181 = INT8_MIN;
	uint16_t x182 = 126U;
	static volatile int32_t x184 = -1;
	int32_t t37 = -2646324;

    t37 = (x181>(x182+(x183^x184)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x185 = -1;
	int32_t x186 = INT32_MAX;
	int8_t x187 = -1;
	uint64_t x188 = 70804LLU;

    t38 = (x185>(x186+(x187^x188)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x189 = -1LL;
	int64_t x190 = 29712271829075LL;
	int16_t x191 = INT16_MIN;
	uint64_t x192 = 4663025386671277LLU;
	volatile int32_t t39 = 56;

    t39 = (x189>(x190+(x191^x192)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x193 = INT16_MAX;
	int32_t x194 = -1;
	volatile uint64_t x195 = 23226056411LLU;
	volatile int32_t x196 = INT32_MAX;
	int32_t t40 = 440;

    t40 = (x193>(x194+(x195^x196)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x197 = 2064728522118650443LLU;
	uint32_t x198 = UINT32_MAX;
	volatile int64_t x199 = INT64_MIN;
	uint32_t x200 = UINT32_MAX;
	static int32_t t41 = -984;

    t41 = (x197>(x198+(x199^x200)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int32_t x201 = INT32_MAX;
	static volatile int32_t x202 = INT32_MIN;
	static int64_t x203 = 2873565466112LL;
	int32_t x204 = INT32_MIN;
	int32_t t42 = -399058;

    t42 = (x201>(x202+(x203^x204)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x205 = 978U;
	uint64_t x206 = 7987LLU;
	int32_t x208 = -1;
	int32_t t43 = -500954409;

    t43 = (x205>(x206+(x207^x208)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x210 = 808U;
	static int32_t x211 = 30682;
	static int16_t x212 = INT16_MIN;
	int32_t t44 = -64786;

    t44 = (x209>(x210+(x211^x212)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x213 = 129065225114620LL;
	uint8_t x214 = 2U;
	static uint8_t x215 = 12U;

    t45 = (x213>(x214+(x215^x216)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x217 = UINT8_MAX;
	int32_t x219 = INT32_MAX;
	uint64_t x220 = 393696666655645LLU;
	volatile int32_t t46 = 39987241;

    t46 = (x217>(x218+(x219^x220)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x221 = INT16_MIN;
	int64_t x224 = -1LL;
	static int32_t t47 = -1;

    t47 = (x221>(x222+(x223^x224)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x225 = INT16_MAX;
	uint8_t x226 = UINT8_MAX;
	uint32_t x227 = 452U;
	volatile int32_t t48 = -39;

    t48 = (x225>(x226+(x227^x228)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x229 = -1;
	int16_t x230 = -1;
	static int8_t x231 = INT8_MIN;
	uint16_t x232 = 1038U;
	static int32_t t49 = 5;

    t49 = (x229>(x230+(x231^x232)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x233 = INT8_MAX;
	volatile uint32_t x234 = UINT32_MAX;
	uint64_t x235 = 1107376151150475015LLU;
	volatile int64_t x236 = INT64_MIN;

    t50 = (x233>(x234+(x235^x236)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x237 = 27U;
	volatile int16_t x238 = INT16_MAX;
	volatile int32_t x239 = -1;
	volatile uint8_t x240 = 58U;
	static int32_t t51 = 59;

    t51 = (x237>(x238+(x239^x240)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x245 = 208381449131LL;
	int16_t x246 = -1;
	int32_t x247 = INT32_MIN;
	int32_t x248 = INT32_MIN;
	volatile int32_t t52 = -146;

    t52 = (x245>(x246+(x247^x248)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x249 = -1;
	volatile uint16_t x250 = 3U;
	static int16_t x251 = -1454;
	volatile int32_t t53 = 997;

    t53 = (x249>(x250+(x251^x252)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int64_t x253 = INT64_MIN;
	int64_t x254 = INT64_MAX;
	int8_t x255 = INT8_MIN;
	static uint8_t x256 = UINT8_MAX;
	int32_t t54 = 7;

    t54 = (x253>(x254+(x255^x256)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint64_t x257 = 91329362799LLU;
	int8_t x258 = 5;
	static int64_t x259 = INT64_MIN;

    t55 = (x257>(x258+(x259^x260)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x261 = UINT64_MAX;
	uint32_t x262 = 45490933U;
	static volatile int32_t x264 = INT32_MAX;
	volatile int32_t t56 = 0;

    t56 = (x261>(x262+(x263^x264)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x267 = INT32_MIN;
	volatile uint8_t x268 = 3U;
	volatile int32_t t57 = -3;

    t57 = (x265>(x266+(x267^x268)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x269 = UINT8_MAX;
	uint32_t x270 = 5252U;
	int16_t x271 = INT16_MAX;
	static uint64_t x272 = 15LLU;
	int32_t t58 = 101;

    t58 = (x269>(x270+(x271^x272)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x273 = 431U;
	int8_t x274 = INT8_MIN;
	static uint16_t x275 = 58U;
	int64_t x276 = -2105151104455LL;
	static int32_t t59 = 1;

    t59 = (x273>(x274+(x275^x276)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x277 = -1;
	volatile int64_t x279 = INT64_MIN;
	volatile int32_t t60 = 554;

    t60 = (x277>(x278+(x279^x280)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int8_t x281 = -5;
	uint16_t x282 = 30U;
	int32_t x284 = 48726;
	volatile int32_t t61 = 20682751;

    t61 = (x281>(x282+(x283^x284)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x285 = -1;
	volatile uint8_t x286 = 4U;
	int32_t x287 = -106658580;
	static int64_t x288 = INT64_MIN;

    t62 = (x285>(x286+(x287^x288)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x290 = 830U;
	uint8_t x291 = UINT8_MAX;
	int32_t x292 = INT32_MIN;

    t63 = (x289>(x290+(x291^x292)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x293 = 136293U;
	int64_t x294 = 378578909494LL;
	static int32_t x295 = INT32_MIN;
	static volatile uint8_t x296 = UINT8_MAX;
	int32_t t64 = -553;

    t64 = (x293>(x294+(x295^x296)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int8_t x297 = -1;
	volatile int8_t x298 = 2;
	int16_t x299 = INT16_MIN;
	static int8_t x300 = INT8_MIN;

    t65 = (x297>(x298+(x299^x300)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x301 = -24;
	int16_t x302 = INT16_MIN;
	int32_t t66 = 8;

    t66 = (x301>(x302+(x303^x304)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint8_t x305 = UINT8_MAX;
	uint32_t x306 = UINT32_MAX;
	volatile int32_t x307 = -1;
	uint32_t x308 = UINT32_MAX;
	int32_t t67 = -4;

    t67 = (x305>(x306+(x307^x308)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x309 = 24633U;
	static int32_t x310 = -469;
	int32_t x311 = -8250;
	static int8_t x312 = -1;
	int32_t t68 = -20;

    t68 = (x309>(x310+(x311^x312)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x313 = INT64_MIN;
	static uint8_t x314 = UINT8_MAX;
	int64_t x315 = INT64_MIN;
	volatile int32_t t69 = -1;

    t69 = (x313>(x314+(x315^x316)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x317 = 7755LL;
	volatile uint8_t x319 = 21U;
	uint16_t x320 = UINT16_MAX;

    t70 = (x317>(x318+(x319^x320)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x321 = -1;
	int32_t x322 = -1;

    t71 = (x321>(x322+(x323^x324)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x334 = 66U;
	static int8_t x336 = -25;
	volatile int32_t t72 = -1425790;

    t72 = (x333>(x334+(x335^x336)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x337 = INT64_MAX;
	int16_t x338 = -2902;
	int8_t x339 = 10;
	uint64_t x340 = UINT64_MAX;
	volatile int32_t t73 = -99273;

    t73 = (x337>(x338+(x339^x340)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x341 = 3;
	int64_t x342 = -38482559LL;
	int8_t x344 = -1;

    t74 = (x341>(x342+(x343^x344)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x345 = INT64_MIN;
	static int8_t x346 = -1;
	static int32_t x348 = 7;
	int32_t t75 = 1;

    t75 = (x345>(x346+(x347^x348)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x349 = 103U;
	static int64_t x351 = INT64_MIN;
	static uint64_t x352 = 14LLU;
	volatile int32_t t76 = 2328;

    t76 = (x349>(x350+(x351^x352)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x355 = -2071297LL;
	int64_t x356 = -1LL;
	static volatile int32_t t77 = 1;

    t77 = (x353>(x354+(x355^x356)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x357 = UINT8_MAX;
	static int8_t x359 = -5;
	volatile int32_t t78 = -185;

    t78 = (x357>(x358+(x359^x360)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x361 = INT32_MIN;
	uint32_t x362 = 111036U;
	int16_t x364 = INT16_MIN;
	int32_t t79 = -15315337;

    t79 = (x361>(x362+(x363^x364)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x365 = INT16_MIN;
	int32_t x366 = INT32_MIN;
	int64_t x367 = -1LL;
	uint64_t x368 = 244LLU;
	volatile int32_t t80 = 29588;

    t80 = (x365>(x366+(x367^x368)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x369 = INT32_MAX;
	int16_t x370 = INT16_MIN;
	int16_t x371 = -1;
	static uint16_t x372 = UINT16_MAX;

    t81 = (x369>(x370+(x371^x372)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x374 = INT8_MAX;
	static int64_t x375 = INT64_MIN;
	volatile uint64_t x376 = UINT64_MAX;
	int32_t t82 = 117328;

    t82 = (x373>(x374+(x375^x376)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x377 = INT64_MAX;
	volatile int8_t x378 = INT8_MIN;
	int32_t x379 = INT32_MAX;
	static uint64_t x380 = 29370515LLU;
	int32_t t83 = -159716609;

    t83 = (x377>(x378+(x379^x380)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x381 = 15U;
	uint64_t x382 = 16628739498467767LLU;
	static uint8_t x383 = 113U;
	int64_t x384 = INT64_MIN;

    t84 = (x381>(x382+(x383^x384)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x386 = 0;
	uint8_t x387 = 17U;
	int64_t x388 = INT64_MIN;

    t85 = (x385>(x386+(x387^x388)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint8_t x389 = 8U;
	volatile int16_t x390 = INT16_MAX;
	int8_t x391 = 60;
	int32_t t86 = 3789;

    t86 = (x389>(x390+(x391^x392)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x393 = INT32_MIN;
	int16_t x394 = -1;
	int16_t x395 = INT16_MIN;
	int32_t x396 = INT32_MIN;
	int32_t t87 = -333;

    t87 = (x393>(x394+(x395^x396)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x397 = -1LL;
	int64_t x398 = -1LL;
	uint64_t x399 = 8LLU;
	volatile int64_t x400 = 355077440576866323LL;
	volatile int32_t t88 = -175438;

    t88 = (x397>(x398+(x399^x400)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x403 = INT8_MIN;
	int8_t x404 = INT8_MIN;
	volatile int32_t t89 = 273;

    t89 = (x401>(x402+(x403^x404)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x405 = INT16_MIN;
	int16_t x406 = INT16_MIN;
	static int16_t x407 = INT16_MIN;
	int32_t x408 = INT32_MIN;
	int32_t t90 = 161510;

    t90 = (x405>(x406+(x407^x408)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x409 = 20;
	volatile uint8_t x411 = 0U;
	volatile int32_t t91 = 41;

    t91 = (x409>(x410+(x411^x412)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x413 = INT8_MAX;
	int64_t x415 = 117613921970238LL;
	static uint8_t x416 = UINT8_MAX;

    t92 = (x413>(x414+(x415^x416)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x417 = INT16_MIN;
	static uint64_t x418 = UINT64_MAX;
	uint8_t x419 = 1U;
	volatile int32_t t93 = 1471974;

    t93 = (x417>(x418+(x419^x420)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x421 = UINT32_MAX;
	int16_t x422 = 1;
	uint16_t x423 = 260U;
	volatile int8_t x424 = INT8_MIN;
	int32_t t94 = -354525328;

    t94 = (x421>(x422+(x423^x424)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x429 = 49U;
	static volatile int32_t t95 = 2649731;

    t95 = (x429>(x430+(x431^x432)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x433 = 7LL;
	volatile uint32_t x434 = 313041768U;
	uint8_t x435 = 6U;
	int32_t t96 = 134;

    t96 = (x433>(x434+(x435^x436)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x437 = 43040U;
	static int32_t x438 = INT32_MAX;
	static uint8_t x439 = 17U;
	int32_t x440 = INT32_MIN;
	int32_t t97 = 11;

    t97 = (x437>(x438+(x439^x440)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int16_t x441 = -1;
	int64_t x442 = 3LL;
	uint32_t x443 = UINT32_MAX;
	volatile int32_t x444 = INT32_MIN;
	volatile int32_t t98 = -818009;

    t98 = (x441>(x442+(x443^x444)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x446 = 36559333857LL;
	uint32_t x447 = 8370U;
	volatile uint32_t x448 = 406288U;
	int32_t t99 = 19;

    t99 = (x445>(x446+(x447^x448)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x449 = 4442LL;
	uint8_t x452 = 26U;

    t100 = (x449>(x450+(x451^x452)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x453 = UINT8_MAX;
	static int32_t x455 = 50089;
	int16_t x456 = -465;
	volatile int32_t t101 = -1587;

    t101 = (x453>(x454+(x455^x456)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint32_t x457 = UINT32_MAX;
	static volatile int16_t x458 = -42;
	int16_t x459 = 166;
	int8_t x460 = INT8_MAX;
	static int32_t t102 = -19551;

    t102 = (x457>(x458+(x459^x460)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x461 = 0;
	int32_t x462 = INT32_MIN;
	volatile int64_t x463 = -27LL;
	static int16_t x464 = -1;
	volatile int32_t t103 = -3;

    t103 = (x461>(x462+(x463^x464)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int16_t x465 = -320;
	static int16_t x466 = INT16_MAX;
	int8_t x467 = 26;
	int16_t x468 = -1;
	volatile int32_t t104 = 866215706;

    t104 = (x465>(x466+(x467^x468)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x470 = INT16_MIN;
	int32_t x472 = INT32_MIN;
	static volatile int32_t t105 = 1065164;

    t105 = (x469>(x470+(x471^x472)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x473 = 3051U;
	volatile int16_t x474 = INT16_MIN;
	int64_t x476 = 29LL;
	int32_t t106 = -227411;

    t106 = (x473>(x474+(x475^x476)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x477 = -1;
	int8_t x478 = INT8_MIN;
	int8_t x479 = INT8_MIN;
	int32_t t107 = -5;

    t107 = (x477>(x478+(x479^x480)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x481 = -359;
	uint16_t x482 = 1U;
	int8_t x483 = INT8_MIN;
	volatile int8_t x484 = 2;
	static volatile int32_t t108 = -1988687;

    t108 = (x481>(x482+(x483^x484)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x485 = UINT8_MAX;
	static int32_t x486 = INT32_MIN;
	volatile int8_t x487 = -63;
	uint64_t x488 = UINT64_MAX;
	volatile int32_t t109 = 1;

    t109 = (x485>(x486+(x487^x488)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x493 = INT64_MIN;
	uint8_t x494 = 122U;
	static uint8_t x495 = UINT8_MAX;
	int64_t x496 = INT64_MAX;
	int32_t t110 = 9238;

    t110 = (x493>(x494+(x495^x496)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x502 = 111548LL;
	int64_t x503 = 40969371947LL;
	volatile uint16_t x504 = 3U;

    t111 = (x501>(x502+(x503^x504)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x505 = INT32_MIN;
	static int64_t x506 = 212LL;
	int64_t x507 = 500450LL;
	volatile int32_t t112 = -16607630;

    t112 = (x505>(x506+(x507^x508)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x509 = INT64_MIN;
	uint16_t x512 = 910U;
	int32_t t113 = 1;

    t113 = (x509>(x510+(x511^x512)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint8_t x513 = 0U;
	volatile int8_t x514 = -11;
	int16_t x515 = -1;
	int32_t x516 = INT32_MIN;
	static int32_t t114 = 2675;

    t114 = (x513>(x514+(x515^x516)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x521 = INT16_MIN;
	int16_t x522 = -1;
	volatile int8_t x523 = -23;
	volatile int8_t x524 = -42;
	static int32_t t115 = -70763783;

    t115 = (x521>(x522+(x523^x524)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x525 = UINT16_MAX;
	static volatile int16_t x526 = -1;
	static int64_t x527 = INT64_MIN;
	volatile int32_t t116 = 53889;

    t116 = (x525>(x526+(x527^x528)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x529 = 31;
	int8_t x530 = INT8_MIN;
	int8_t x531 = INT8_MIN;
	static int32_t x532 = 1040882;

    t117 = (x529>(x530+(x531^x532)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint64_t x533 = 531LLU;
	int64_t x534 = INT64_MIN;
	uint64_t x535 = UINT64_MAX;
	static uint32_t x536 = 48943U;

    t118 = (x533>(x534+(x535^x536)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x537 = -1;
	uint16_t x538 = 13U;
	int32_t x539 = -1;
	uint32_t x540 = UINT32_MAX;
	int32_t t119 = -6;

    t119 = (x537>(x538+(x539^x540)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x541 = INT16_MIN;
	static volatile int32_t x542 = -1;
	static int64_t x543 = -1LL;
	static int64_t x544 = -1LL;
	static int32_t t120 = 9918704;

    t120 = (x541>(x542+(x543^x544)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x545 = 2772U;
	volatile uint64_t x547 = 27LLU;
	volatile int32_t t121 = 345419840;

    t121 = (x545>(x546+(x547^x548)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint16_t x550 = 14U;
	volatile uint8_t x551 = 115U;
	int64_t x552 = -1LL;
	int32_t t122 = 767273348;

    t122 = (x549>(x550+(x551^x552)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x553 = INT8_MIN;
	int64_t x554 = -1LL;
	volatile int16_t x555 = -15941;
	uint8_t x556 = 10U;
	int32_t t123 = -828;

    t123 = (x553>(x554+(x555^x556)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x557 = -481;
	uint32_t x558 = 80683U;
	static uint16_t x559 = 7U;
	int64_t x560 = -498271900795LL;
	int32_t t124 = 1652650;

    t124 = (x557>(x558+(x559^x560)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x561 = 4194294058001LLU;
	int8_t x562 = -1;
	static int32_t t125 = 1787136;

    t125 = (x561>(x562+(x563^x564)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x570 = 25U;
	uint16_t x571 = 494U;
	static int16_t x572 = -1;

    t126 = (x569>(x570+(x571^x572)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x573 = INT32_MIN;
	int32_t x574 = INT32_MIN;
	static int64_t x575 = INT64_MAX;
	uint32_t x576 = UINT32_MAX;
	int32_t t127 = 139;

    t127 = (x573>(x574+(x575^x576)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x577 = 3LLU;
	int32_t x578 = 2301;
	uint64_t x579 = UINT64_MAX;
	static int32_t t128 = -32327;

    t128 = (x577>(x578+(x579^x580)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x585 = 7;
	static uint64_t x586 = UINT64_MAX;
	static int32_t x588 = -1;
	int32_t t129 = -6;

    t129 = (x585>(x586+(x587^x588)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x589 = UINT64_MAX;
	int64_t x590 = -1LL;
	static uint32_t x591 = UINT32_MAX;
	volatile int32_t x592 = 549;
	volatile int32_t t130 = -2;

    t130 = (x589>(x590+(x591^x592)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint8_t x593 = 2U;
	int8_t x594 = -3;
	volatile uint64_t x595 = 205LLU;
	int32_t x596 = 6357655;
	int32_t t131 = -44137287;

    t131 = (x593>(x594+(x595^x596)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x597 = -1;
	int16_t x598 = INT16_MIN;
	uint64_t x599 = 13854859536518120LLU;
	static uint8_t x600 = UINT8_MAX;
	volatile int32_t t132 = 3;

    t132 = (x597>(x598+(x599^x600)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x609 = INT32_MIN;
	volatile int8_t x610 = 1;
	int32_t x611 = -235412;
	int32_t x612 = INT32_MAX;

    t133 = (x609>(x610+(x611^x612)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x613 = INT8_MAX;
	int16_t x614 = -12670;
	int64_t x615 = INT64_MAX;
	int32_t x616 = INT32_MIN;

    t134 = (x613>(x614+(x615^x616)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x617 = -15;
	static uint8_t x618 = 3U;
	static int32_t x619 = -1;
	uint16_t x620 = 351U;
	volatile int32_t t135 = 1314;

    t135 = (x617>(x618+(x619^x620)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x621 = -1;
	volatile int8_t x622 = -1;
	int64_t x623 = INT64_MAX;
	int32_t t136 = -632;

    t136 = (x621>(x622+(x623^x624)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x626 = 3U;
	static int64_t x627 = -70670384256927037LL;
	static uint64_t x628 = 165712LLU;
	int32_t t137 = -1626;

    t137 = (x625>(x626+(x627^x628)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x633 = UINT32_MAX;
	uint32_t x634 = UINT32_MAX;
	static volatile int64_t x635 = -1LL;
	int16_t x636 = -248;

    t138 = (x633>(x634+(x635^x636)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x637 = INT64_MAX;
	uint16_t x638 = UINT16_MAX;
	uint16_t x639 = 4697U;
	volatile int16_t x640 = 0;
	static int32_t t139 = 1;

    t139 = (x637>(x638+(x639^x640)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x641 = INT8_MIN;
	static uint64_t x642 = 31572946894617946LLU;
	uint64_t x643 = 55941LLU;
	volatile int8_t x644 = 16;
	volatile int32_t t140 = -55916813;

    t140 = (x641>(x642+(x643^x644)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x645 = -492LL;
	int8_t x647 = INT8_MIN;
	int8_t x648 = 0;
	int32_t t141 = 1150907;

    t141 = (x645>(x646+(x647^x648)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x649 = 7846591U;
	volatile int8_t x650 = -1;
	int16_t x651 = 13;
	uint16_t x652 = UINT16_MAX;
	volatile int32_t t142 = -224730889;

    t142 = (x649>(x650+(x651^x652)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x653 = 33512766;
	volatile int32_t x654 = INT32_MIN;
	int64_t x655 = 145802LL;
	int16_t x656 = -1;
	int32_t t143 = 3804364;

    t143 = (x653>(x654+(x655^x656)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x657 = 1;
	volatile uint32_t x658 = UINT32_MAX;
	int64_t x660 = INT64_MIN;
	static volatile int32_t t144 = 2177638;

    t144 = (x657>(x658+(x659^x660)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x665 = INT32_MAX;
	int16_t x666 = -1;
	uint32_t x667 = 776U;
	static uint8_t x668 = 1U;

    t145 = (x665>(x666+(x667^x668)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x669 = INT64_MIN;
	int16_t x670 = INT16_MIN;
	static uint64_t x671 = 1487955535389614LLU;
	int64_t x672 = INT64_MAX;
	int32_t t146 = -969193;

    t146 = (x669>(x670+(x671^x672)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x673 = -1;
	static int8_t x674 = INT8_MIN;
	volatile int16_t x675 = 75;
	volatile int8_t x676 = -1;
	volatile int32_t t147 = -92959;

    t147 = (x673>(x674+(x675^x676)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x677 = INT8_MAX;
	int16_t x678 = -1;
	volatile int32_t x679 = -1;
	static volatile int32_t t148 = 0;

    t148 = (x677>(x678+(x679^x680)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x681 = UINT8_MAX;
	int16_t x682 = 1;
	static uint8_t x683 = 0U;
	static volatile int32_t t149 = -8195;

    t149 = (x681>(x682+(x683^x684)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x689 = INT32_MAX;
	volatile int8_t x690 = INT8_MAX;
	int32_t x691 = INT32_MIN;
	uint16_t x692 = UINT16_MAX;
	int32_t t150 = 19;

    t150 = (x689>(x690+(x691^x692)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x693 = INT64_MIN;
	uint16_t x695 = 311U;
	volatile uint64_t x696 = 1376LLU;
	int32_t t151 = 6780734;

    t151 = (x693>(x694+(x695^x696)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x697 = 978903676178155853LL;
	uint32_t x698 = 376298U;
	volatile int64_t x699 = INT64_MIN;
	uint16_t x700 = 22985U;
	int32_t t152 = 4070;

    t152 = (x697>(x698+(x699^x700)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x703 = UINT32_MAX;
	int32_t x704 = -1;
	static volatile int32_t t153 = 3;

    t153 = (x701>(x702+(x703^x704)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x705 = 4982973;
	int16_t x706 = -1;
	int32_t x707 = 6474;
	int32_t x708 = -20766;
	int32_t t154 = 660;

    t154 = (x705>(x706+(x707^x708)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x710 = 15401;
	static uint16_t x711 = 514U;
	volatile int32_t x712 = INT32_MIN;
	int32_t t155 = -29;

    t155 = (x709>(x710+(x711^x712)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x714 = INT8_MIN;
	int8_t x715 = INT8_MIN;

    t156 = (x713>(x714+(x715^x716)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x717 = -1;
	volatile int32_t t157 = -164120627;

    t157 = (x717>(x718+(x719^x720)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x725 = 14722663LLU;
	int8_t x726 = INT8_MAX;
	int32_t x728 = 1694947;
	int32_t t158 = 93314377;

    t158 = (x725>(x726+(x727^x728)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x729 = 119U;
	volatile int16_t x730 = INT16_MAX;
	int16_t x731 = INT16_MAX;
	int32_t x732 = INT32_MIN;
	volatile int32_t t159 = 194;

    t159 = (x729>(x730+(x731^x732)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x733 = UINT64_MAX;
	uint16_t x734 = 595U;
	int32_t t160 = 30;

    t160 = (x733>(x734+(x735^x736)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x737 = UINT16_MAX;
	volatile int32_t x738 = 737836806;
	uint16_t x740 = 126U;
	volatile int32_t t161 = -7;

    t161 = (x737>(x738+(x739^x740)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x741 = INT16_MIN;
	uint16_t x742 = 20U;
	int64_t x743 = -1LL;
	volatile int16_t x744 = -1;
	volatile int32_t t162 = -7970;

    t162 = (x741>(x742+(x743^x744)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x746 = -2777602213LL;
	volatile int16_t x747 = -4;
	volatile int32_t t163 = -22493866;

    t163 = (x745>(x746+(x747^x748)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x749 = -32817833;
	int8_t x750 = -1;
	int8_t x751 = INT8_MAX;
	int16_t x752 = INT16_MIN;

    t164 = (x749>(x750+(x751^x752)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x753 = 1;
	static uint8_t x754 = 1U;
	uint16_t x756 = UINT16_MAX;
	volatile int32_t t165 = 33321624;

    t165 = (x753>(x754+(x755^x756)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x757 = INT32_MIN;
	int64_t x758 = -70716483043LL;
	uint32_t x760 = 17U;
	int32_t t166 = 5706;

    t166 = (x757>(x758+(x759^x760)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x762 = 24U;
	int16_t x763 = -2093;
	int8_t x764 = INT8_MIN;
	int32_t t167 = -1819;

    t167 = (x761>(x762+(x763^x764)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x766 = 32494LLU;
	volatile int16_t x767 = INT16_MIN;
	volatile int32_t t168 = -20;

    t168 = (x765>(x766+(x767^x768)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x769 = INT32_MIN;
	static int16_t x770 = -1;
	volatile int8_t x772 = INT8_MAX;
	volatile int32_t t169 = 1273050;

    t169 = (x769>(x770+(x771^x772)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x773 = -58926261;
	uint8_t x774 = 12U;
	volatile uint32_t x775 = UINT32_MAX;
	uint64_t x776 = UINT64_MAX;
	static volatile int32_t t170 = 774;

    t170 = (x773>(x774+(x775^x776)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x777 = INT64_MIN;
	int16_t x778 = 5630;
	int16_t x779 = 6548;
	int8_t x780 = -1;
	int32_t t171 = -1;

    t171 = (x777>(x778+(x779^x780)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint16_t x785 = 6U;
	int8_t x786 = -7;
	int16_t x787 = INT16_MIN;
	volatile uint32_t x788 = 211U;
	int32_t t172 = 7;

    t172 = (x785>(x786+(x787^x788)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x789 = INT64_MIN;
	static int16_t x790 = INT16_MIN;
	static int32_t t173 = 62;

    t173 = (x789>(x790+(x791^x792)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x793 = 28U;
	static int32_t x794 = INT32_MIN;
	int32_t x795 = INT32_MIN;
	uint32_t x796 = UINT32_MAX;

    t174 = (x793>(x794+(x795^x796)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x797 = 28U;
	int16_t x798 = INT16_MAX;
	uint64_t x799 = 7211294319LLU;
	int64_t x800 = -164LL;
	volatile int32_t t175 = -4308;

    t175 = (x797>(x798+(x799^x800)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x802 = -6;
	volatile int8_t x803 = INT8_MIN;
	volatile int64_t x804 = -1LL;
	volatile int32_t t176 = 60532808;

    t176 = (x801>(x802+(x803^x804)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int16_t x807 = -1;
	int16_t x808 = INT16_MIN;
	volatile int32_t t177 = 24863914;

    t177 = (x805>(x806+(x807^x808)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x809 = INT32_MAX;
	int32_t x810 = INT32_MAX;
	int8_t x811 = INT8_MIN;
	int32_t x812 = INT32_MAX;
	int32_t t178 = -25;

    t178 = (x809>(x810+(x811^x812)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x814 = UINT32_MAX;
	int32_t x815 = -49768;
	volatile uint8_t x816 = 42U;

    t179 = (x813>(x814+(x815^x816)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x818 = -1LL;
	int64_t x819 = INT64_MIN;
	int32_t t180 = -426728;

    t180 = (x817>(x818+(x819^x820)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x821 = INT32_MAX;
	volatile int32_t x822 = 2902;
	int32_t x823 = INT32_MIN;
	int32_t t181 = 2220;

    t181 = (x821>(x822+(x823^x824)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x825 = 0LLU;
	int64_t x827 = INT64_MIN;
	int64_t x828 = -1LL;
	int32_t t182 = 71894;

    t182 = (x825>(x826+(x827^x828)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x829 = 70U;
	int8_t x830 = INT8_MAX;
	static int64_t x832 = 248907774LL;
	int32_t t183 = -3;

    t183 = (x829>(x830+(x831^x832)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x833 = 9;
	static volatile int8_t x834 = INT8_MIN;
	int64_t x835 = INT64_MIN;
	int64_t x836 = INT64_MAX;

    t184 = (x833>(x834+(x835^x836)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x837 = UINT16_MAX;
	volatile uint64_t x838 = 524891748971002757LLU;
	static int32_t x839 = -376843;
	static int32_t x840 = 0;
	int32_t t185 = -1;

    t185 = (x837>(x838+(x839^x840)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int8_t x845 = INT8_MIN;
	volatile int8_t x846 = INT8_MAX;
	int32_t x847 = 5181;
	int32_t t186 = 1642546;

    t186 = (x845>(x846+(x847^x848)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x850 = 9;
	int64_t x851 = INT64_MIN;
	uint32_t x852 = UINT32_MAX;
	volatile int32_t t187 = -456953;

    t187 = (x849>(x850+(x851^x852)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x853 = INT8_MAX;
	static int32_t x854 = INT32_MIN;
	int64_t x856 = INT64_MIN;
	volatile int32_t t188 = -10573236;

    t188 = (x853>(x854+(x855^x856)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint64_t x857 = 3959516722516457LLU;
	int8_t x858 = 0;
	int64_t x860 = INT64_MIN;
	volatile int32_t t189 = 7;

    t189 = (x857>(x858+(x859^x860)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x861 = -1;
	int64_t x862 = 147129357607497LL;
	uint16_t x863 = UINT16_MAX;
	uint32_t x864 = 60176U;
	int32_t t190 = -411;

    t190 = (x861>(x862+(x863^x864)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x865 = -1;
	uint8_t x866 = 16U;
	int16_t x867 = -1;
	static uint8_t x868 = UINT8_MAX;

    t191 = (x865>(x866+(x867^x868)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x869 = INT8_MAX;
	static int16_t x870 = -1;
	volatile int16_t x871 = INT16_MIN;
	int32_t t192 = 1574146;

    t192 = (x869>(x870+(x871^x872)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x873 = INT64_MIN;
	int8_t x874 = 3;
	uint32_t x875 = UINT32_MAX;
	volatile int64_t x876 = INT64_MAX;

    t193 = (x873>(x874+(x875^x876)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x878 = -1;
	uint32_t x879 = 130U;
	static int32_t x880 = -556259452;
	volatile int32_t t194 = 3;

    t194 = (x877>(x878+(x879^x880)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x881 = 57U;
	static uint64_t x882 = 69LLU;
	volatile int32_t x883 = 4247477;
	int32_t x884 = INT32_MIN;
	volatile int32_t t195 = 1;

    t195 = (x881>(x882+(x883^x884)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x889 = INT64_MIN;
	volatile int32_t x890 = -1;
	volatile int64_t x891 = INT64_MIN;
	static int16_t x892 = -1;
	volatile int32_t t196 = 34389053;

    t196 = (x889>(x890+(x891^x892)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x894 = -1;
	static int8_t x895 = -1;
	int8_t x896 = INT8_MAX;
	int32_t t197 = 241915181;

    t197 = (x893>(x894+(x895^x896)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x897 = INT16_MIN;
	int16_t x898 = INT16_MIN;
	uint32_t x900 = UINT32_MAX;
	int32_t t198 = 224;

    t198 = (x897>(x898+(x899^x900)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x901 = -1;
	static int64_t x902 = INT64_MIN;
	uint32_t x903 = 7U;
	int8_t x904 = INT8_MIN;
	volatile int32_t t199 = 3;

    t199 = (x901>(x902+(x903^x904)));

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

