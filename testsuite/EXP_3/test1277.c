
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

int64_t x1 = INT64_MAX;
static int16_t x2 = INT16_MIN;
int64_t x5 = INT64_MIN;
int32_t x8 = INT32_MIN;
int64_t x15 = -1LL;
uint16_t x17 = 0U;
static int32_t x22 = -1;
static volatile int64_t x28 = INT64_MIN;
int32_t x29 = -92;
int8_t x30 = 37;
int8_t x31 = 3;
static volatile uint32_t x33 = 21753696U;
uint16_t x38 = UINT16_MAX;
uint8_t x40 = 18U;
volatile uint64_t x43 = 1028984576LLU;
volatile uint64_t x52 = UINT64_MAX;
int64_t x55 = INT64_MIN;
uint8_t x56 = UINT8_MAX;
volatile uint64_t x58 = 1035007158961602LLU;
int32_t x60 = INT32_MAX;
static volatile int32_t t14 = 127637105;
static int16_t x63 = 0;
volatile int32_t t15 = -54;
static int64_t x70 = -1LL;
volatile int16_t x71 = 1;
uint8_t x81 = UINT8_MAX;
uint16_t x84 = 1U;
int8_t x91 = 1;
int32_t t22 = 13;
volatile int64_t x97 = INT64_MAX;
int8_t x99 = -23;
volatile int64_t x100 = 9171072647LL;
volatile int32_t t24 = -1117338;
int8_t x102 = -2;
uint32_t x108 = 100U;
uint8_t x110 = 0U;
int32_t x112 = INT32_MIN;
volatile int32_t t27 = -6569775;
int8_t x116 = 1;
uint16_t x123 = UINT16_MAX;
static int64_t x129 = -7537127005LL;
int8_t x134 = 1;
volatile int64_t x136 = INT64_MIN;
int32_t x139 = INT32_MAX;
int32_t x140 = INT32_MIN;
volatile uint16_t x144 = 38U;
int8_t x145 = -1;
int16_t x148 = INT16_MIN;
volatile int64_t x152 = -1LL;
volatile uint32_t x157 = UINT32_MAX;
int32_t x165 = INT32_MIN;
uint16_t x167 = 1467U;
static volatile uint32_t x173 = 5247351U;
static int8_t x175 = INT8_MAX;
volatile uint64_t x176 = 2146354LLU;
int64_t x183 = 17019LL;
static volatile int32_t t45 = 2578;
volatile int32_t t46 = 39;
int32_t x192 = INT32_MAX;
static int32_t t47 = -57;
static int32_t t48 = 13;
int32_t t49 = -2;
volatile int32_t t50 = 0;
int16_t x205 = INT16_MAX;
int64_t x210 = INT64_MAX;
uint8_t x213 = 6U;
int64_t x214 = 10LL;
int32_t x216 = INT32_MIN;
int32_t t53 = -101;
static int32_t x230 = -1;
uint64_t x242 = 13821075060680134LLU;
static int64_t x248 = INT64_MIN;
uint64_t x261 = 106LLU;
volatile uint32_t x269 = 1073U;
int16_t x270 = -1;
static int64_t x274 = INT64_MIN;
volatile uint64_t x276 = 531235770408LLU;
int64_t x290 = INT64_MIN;
static int64_t x292 = 2615LL;
volatile int32_t t75 = -6;
uint16_t x306 = UINT16_MAX;
static int16_t x307 = INT16_MIN;
volatile uint8_t x317 = 3U;
int64_t x321 = INT64_MIN;
static volatile int32_t t80 = -96758;
int8_t x336 = INT8_MIN;
uint32_t x338 = 959933413U;
volatile uint64_t x343 = 483030173054783LLU;
volatile uint32_t x349 = 63U;
static int64_t x350 = -1092058059762647100LL;
volatile int32_t x351 = -588853427;
static uint64_t x352 = 1562170904LLU;
static volatile int32_t t88 = 51741;
int64_t x365 = INT64_MAX;
static uint8_t x372 = UINT8_MAX;
int8_t x373 = 3;
int64_t x374 = INT64_MIN;
volatile int32_t t93 = -159;
int16_t x379 = -1;
int64_t x384 = -2998161467565846295LL;
int32_t t95 = 2;
volatile int32_t t96 = 14;
uint16_t x389 = 4063U;
uint32_t x391 = UINT32_MAX;
static int16_t x392 = INT16_MAX;
static int8_t x397 = 26;
static volatile int8_t x400 = INT8_MIN;
int8_t x414 = -1;
uint16_t x420 = 912U;
volatile int32_t x424 = INT32_MIN;
int64_t x426 = INT64_MIN;
int8_t x428 = INT8_MIN;
static int32_t t106 = -67;
volatile uint64_t x431 = 3509LLU;
static volatile int32_t t108 = -209;
static int16_t x440 = INT16_MIN;
int64_t x442 = INT64_MIN;
static uint64_t x451 = UINT64_MAX;
static uint32_t x454 = 29639151U;
int32_t x460 = 46;
uint32_t x463 = 1295536202U;
int32_t x470 = -1;
uint32_t x473 = 393310299U;
uint8_t x475 = UINT8_MAX;
int8_t x476 = -1;
int32_t t121 = -1;
volatile int32_t t122 = -10900;
volatile int32_t x502 = INT32_MIN;
uint32_t x506 = 2U;
int32_t x513 = -4118881;
static int8_t x515 = -50;
int64_t x522 = 311LL;
int32_t t130 = -117;
static int8_t x528 = INT8_MIN;
volatile int32_t t131 = 89685;
uint32_t x533 = 0U;
uint8_t x535 = 29U;
volatile int32_t t133 = 425;
uint64_t x538 = 110619782LLU;
static uint16_t x540 = UINT16_MAX;
int32_t x542 = -1;
static volatile uint32_t x546 = 0U;
static int32_t t136 = 1;
volatile int64_t x550 = 82LL;
int32_t t143 = 11472031;
int64_t x578 = -3327934288566559351LL;
int32_t t145 = -53469350;
int32_t x588 = INT32_MAX;
volatile int32_t x589 = INT32_MIN;
int32_t x599 = INT32_MAX;
int8_t x601 = INT8_MAX;
volatile uint64_t x603 = 86425035695813LLU;
static int32_t t150 = 376555255;
int16_t x607 = INT16_MIN;
volatile int32_t t151 = -19173;
int8_t x609 = 1;
int8_t x621 = -1;
int8_t x625 = INT8_MAX;
volatile int32_t t156 = -2566;
static int8_t x629 = -1;
int8_t x635 = INT8_MAX;
uint16_t x652 = 35U;
volatile int32_t t163 = 75947687;
int16_t x659 = 11393;
int16_t x660 = INT16_MAX;
volatile int32_t x668 = -718747967;
volatile int32_t x677 = -30281021;
static volatile int32_t t170 = -6;
static uint64_t x688 = 4389995858427057LLU;
int16_t x698 = 2;
volatile int32_t t174 = 420810620;
volatile uint8_t x702 = 4U;
int32_t t175 = 2791;
volatile int32_t x705 = 0;
static volatile int64_t x708 = INT64_MIN;
volatile int16_t x710 = 12;
uint8_t x730 = 9U;
int32_t x735 = 9411;
static uint8_t x736 = 15U;
volatile int32_t x746 = INT32_MIN;
static volatile uint64_t x754 = 2262853113586756838LLU;
uint8_t x767 = UINT8_MAX;
int32_t x772 = INT32_MAX;
int32_t t193 = 2822140;
int64_t x789 = 86677276270855LL;
int8_t x796 = 0;
int32_t x798 = INT32_MIN;


void f0(void) {
    	int16_t x3 = INT16_MAX;
	int64_t x4 = INT64_MIN;
	static volatile int32_t t0 = 1;

    t0 = ((x1==x2)*(x3!=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x6 = UINT32_MAX;
	uint32_t x7 = 1U;
	volatile int32_t t1 = -384580;

    t1 = ((x5==x6)*(x7!=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint64_t x9 = 78LLU;
	int16_t x10 = INT16_MIN;
	int32_t x11 = INT32_MIN;
	int32_t x12 = -1;
	volatile int32_t t2 = -5;

    t2 = ((x9==x10)*(x11!=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x13 = INT64_MIN;
	static volatile int64_t x14 = 749232LL;
	int32_t x16 = -2570;
	int32_t t3 = -10643354;

    t3 = ((x13==x14)*(x15!=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x18 = UINT64_MAX;
	volatile int8_t x19 = 0;
	int16_t x20 = INT16_MIN;
	volatile int32_t t4 = -192198214;

    t4 = ((x17==x18)*(x19!=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = UINT16_MAX;
	volatile int8_t x23 = INT8_MIN;
	volatile int8_t x24 = INT8_MAX;
	volatile int32_t t5 = -361;

    t5 = ((x21==x22)*(x23!=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = -1;
	static uint32_t x26 = UINT32_MAX;
	int16_t x27 = INT16_MIN;
	int32_t t6 = 100792197;

    t6 = ((x25==x26)*(x27!=x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x32 = INT16_MIN;
	int32_t t7 = 966294;

    t7 = ((x29==x30)*(x31!=x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x34 = UINT16_MAX;
	static int32_t x35 = 963108451;
	int8_t x36 = 0;
	volatile int32_t t8 = 124;

    t8 = ((x33==x34)*(x35!=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 274299783881LLU;
	volatile int64_t x39 = -268LL;
	int32_t t9 = 993402620;

    t9 = ((x37==x38)*(x39!=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x41 = 4347644517584LLU;
	int8_t x42 = 51;
	volatile int64_t x44 = INT64_MIN;
	static volatile int32_t t10 = 30;

    t10 = ((x41==x42)*(x43!=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MAX;
	int8_t x46 = INT8_MIN;
	int16_t x47 = -1;
	uint64_t x48 = UINT64_MAX;
	static volatile int32_t t11 = 1;

    t11 = ((x45==x46)*(x47!=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x49 = UINT8_MAX;
	uint64_t x50 = 2620972373LLU;
	static uint64_t x51 = 3471247304250167927LLU;
	int32_t t12 = -211722962;

    t12 = ((x49==x50)*(x51!=x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x53 = 171613U;
	int64_t x54 = INT64_MIN;
	static volatile int32_t t13 = -5;

    t13 = ((x53==x54)*(x55!=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1LL;
	uint8_t x59 = 7U;

    t14 = ((x57==x58)*(x59!=x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MIN;
	static int32_t x62 = INT32_MAX;
	int16_t x64 = INT16_MIN;

    t15 = ((x61==x62)*(x63!=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = -1;
	uint16_t x66 = 12016U;
	int16_t x67 = INT16_MIN;
	int8_t x68 = -5;
	static volatile int32_t t16 = 4281;

    t16 = ((x65==x66)*(x67!=x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x69 = INT64_MAX;
	int16_t x72 = INT16_MIN;
	static int32_t t17 = 610;

    t17 = ((x69==x70)*(x71!=x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x73 = 19U;
	uint8_t x74 = 1U;
	static int64_t x75 = -1LL;
	static uint64_t x76 = UINT64_MAX;
	volatile int32_t t18 = -69120497;

    t18 = ((x73==x74)*(x75!=x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MAX;
	int8_t x78 = -6;
	int64_t x79 = 6LL;
	int64_t x80 = INT64_MIN;
	volatile int32_t t19 = 118;

    t19 = ((x77==x78)*(x79!=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x82 = INT8_MIN;
	int32_t x83 = -27733;
	int32_t t20 = 511560373;

    t20 = ((x81==x82)*(x83!=x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x85 = -362260LL;
	uint64_t x86 = 116LLU;
	static int32_t x87 = -2212528;
	volatile int32_t x88 = 897265;
	int32_t t21 = -71530402;

    t21 = ((x85==x86)*(x87!=x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = -558581959928LL;
	int16_t x90 = INT16_MAX;
	volatile int64_t x92 = INT64_MAX;

    t22 = ((x89==x90)*(x91!=x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MAX;
	int64_t x94 = INT64_MAX;
	volatile int16_t x95 = 596;
	int16_t x96 = INT16_MIN;
	int32_t t23 = -1;

    t23 = ((x93==x94)*(x95!=x96));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x98 = INT64_MIN;

    t24 = ((x97==x98)*(x99!=x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x101 = 13U;
	int8_t x103 = 0;
	int8_t x104 = INT8_MIN;
	volatile int32_t t25 = 4019;

    t25 = ((x101==x102)*(x103!=x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = -113991;
	uint64_t x106 = UINT64_MAX;
	volatile int16_t x107 = 97;
	int32_t t26 = -87;

    t26 = ((x105==x106)*(x107!=x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = 743;
	int32_t x111 = -1;

    t27 = ((x109==x110)*(x111!=x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = 1075947;
	volatile uint16_t x114 = 513U;
	uint32_t x115 = 449644U;
	int32_t t28 = 3756;

    t28 = ((x113==x114)*(x115!=x116));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x117 = 6U;
	static int8_t x118 = -1;
	uint64_t x119 = 123507758056576LLU;
	volatile int64_t x120 = -4696396549LL;
	volatile int32_t t29 = -1;

    t29 = ((x117==x118)*(x119!=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x121 = INT8_MIN;
	static int16_t x122 = INT16_MIN;
	uint8_t x124 = 0U;
	int32_t t30 = 0;

    t30 = ((x121==x122)*(x123!=x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x125 = UINT8_MAX;
	int16_t x126 = -1;
	int16_t x127 = -1;
	static volatile int64_t x128 = INT64_MIN;
	volatile int32_t t31 = -6810395;

    t31 = ((x125==x126)*(x127!=x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x130 = -1;
	volatile int8_t x131 = INT8_MIN;
	int8_t x132 = 1;
	int32_t t32 = 21;

    t32 = ((x129==x130)*(x131!=x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MIN;
	int32_t x135 = INT32_MAX;
	int32_t t33 = -793906029;

    t33 = ((x133==x134)*(x135!=x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = 228218001;
	uint64_t x138 = 105371432LLU;
	volatile int32_t t34 = -1;

    t34 = ((x137==x138)*(x139!=x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = INT32_MAX;
	uint32_t x142 = 10U;
	volatile int16_t x143 = INT16_MIN;
	int32_t t35 = -909616626;

    t35 = ((x141==x142)*(x143!=x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x146 = -13775481;
	int32_t x147 = INT32_MIN;
	volatile int32_t t36 = 13258684;

    t36 = ((x145==x146)*(x147!=x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = 172474U;
	static uint16_t x150 = UINT16_MAX;
	static uint16_t x151 = 4U;
	static volatile int32_t t37 = 65314;

    t37 = ((x149==x150)*(x151!=x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int8_t x153 = 4;
	static int16_t x154 = -1;
	volatile uint32_t x155 = 1U;
	int8_t x156 = 2;
	int32_t t38 = 33118536;

    t38 = ((x153==x154)*(x155!=x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x158 = 788U;
	uint32_t x159 = 633U;
	int64_t x160 = -15LL;
	int32_t t39 = 245418;

    t39 = ((x157==x158)*(x159!=x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x161 = 4116824LLU;
	int32_t x162 = INT32_MAX;
	int16_t x163 = -1;
	uint8_t x164 = 51U;
	static volatile int32_t t40 = 10104829;

    t40 = ((x161==x162)*(x163!=x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x166 = 3139272;
	static int32_t x168 = INT32_MIN;
	int32_t t41 = -150864586;

    t41 = ((x165==x166)*(x167!=x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = 1500;
	int64_t x170 = INT64_MAX;
	static int8_t x171 = INT8_MIN;
	int8_t x172 = 30;
	int32_t t42 = -5829302;

    t42 = ((x169==x170)*(x171!=x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x174 = -1437;
	int32_t t43 = -76119477;

    t43 = ((x173==x174)*(x175!=x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = INT64_MAX;
	volatile int8_t x178 = INT8_MIN;
	static int16_t x179 = 1194;
	int32_t x180 = INT32_MAX;
	volatile int32_t t44 = 651;

    t44 = ((x177==x178)*(x179!=x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = 101039;
	volatile int64_t x182 = -1LL;
	int64_t x184 = INT64_MIN;

    t45 = ((x181==x182)*(x183!=x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MIN;
	static volatile uint32_t x186 = 13372U;
	static volatile int8_t x187 = INT8_MAX;
	int64_t x188 = -1LL;

    t46 = ((x185==x186)*(x187!=x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x189 = 23385U;
	uint32_t x190 = UINT32_MAX;
	static int16_t x191 = INT16_MIN;

    t47 = ((x189==x190)*(x191!=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x193 = 34U;
	volatile int16_t x194 = INT16_MAX;
	volatile int64_t x195 = INT64_MIN;
	int16_t x196 = -9;

    t48 = ((x193==x194)*(x195!=x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x197 = 3963U;
	volatile int64_t x198 = INT64_MIN;
	int16_t x199 = -1;
	int16_t x200 = 10522;

    t49 = ((x197==x198)*(x199!=x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x201 = -1;
	int64_t x202 = INT64_MIN;
	int32_t x203 = INT32_MIN;
	uint8_t x204 = UINT8_MAX;

    t50 = ((x201==x202)*(x203!=x204));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x206 = UINT16_MAX;
	int32_t x207 = INT32_MIN;
	uint64_t x208 = 8751LLU;
	volatile int32_t t51 = -966472185;

    t51 = ((x205==x206)*(x207!=x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = -1;
	static volatile uint64_t x211 = 858771752733258133LLU;
	int64_t x212 = 1184LL;
	volatile int32_t t52 = 0;

    t52 = ((x209==x210)*(x211!=x212));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x215 = INT16_MAX;

    t53 = ((x213==x214)*(x215!=x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = INT64_MAX;
	static int16_t x218 = 4376;
	int64_t x219 = INT64_MIN;
	uint32_t x220 = 285898U;
	int32_t t54 = 7450405;

    t54 = ((x217==x218)*(x219!=x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MAX;
	int8_t x222 = INT8_MIN;
	uint32_t x223 = 1011416563U;
	uint64_t x224 = 904LLU;
	int32_t t55 = -875;

    t55 = ((x221==x222)*(x223!=x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x225 = INT8_MIN;
	static volatile int64_t x226 = -1LL;
	uint64_t x227 = 85584298548111139LLU;
	static int8_t x228 = INT8_MIN;
	int32_t t56 = -67165268;

    t56 = ((x225==x226)*(x227!=x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = 57;
	uint32_t x231 = 99399427U;
	uint16_t x232 = 26U;
	volatile int32_t t57 = 14;

    t57 = ((x229==x230)*(x231!=x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x233 = 25325228U;
	int16_t x234 = 1791;
	int64_t x235 = -1LL;
	int32_t x236 = 162999733;
	volatile int32_t t58 = -22447616;

    t58 = ((x233==x234)*(x235!=x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint16_t x237 = 485U;
	volatile int64_t x238 = 0LL;
	int64_t x239 = INT64_MIN;
	int16_t x240 = INT16_MAX;
	volatile int32_t t59 = 21;

    t59 = ((x237==x238)*(x239!=x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x241 = 5U;
	volatile uint16_t x243 = 0U;
	int16_t x244 = INT16_MIN;
	static int32_t t60 = 2;

    t60 = ((x241==x242)*(x243!=x244));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x245 = INT8_MAX;
	volatile uint32_t x246 = 775886352U;
	int16_t x247 = INT16_MIN;
	static int32_t t61 = 15;

    t61 = ((x245==x246)*(x247!=x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x249 = 0U;
	static int64_t x250 = INT64_MAX;
	int8_t x251 = INT8_MAX;
	uint16_t x252 = UINT16_MAX;
	int32_t t62 = -48509553;

    t62 = ((x249==x250)*(x251!=x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x253 = INT16_MIN;
	int8_t x254 = 7;
	int64_t x255 = INT64_MIN;
	uint16_t x256 = 2U;
	int32_t t63 = 45230;

    t63 = ((x253==x254)*(x255!=x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x257 = INT32_MIN;
	int64_t x258 = -3415508LL;
	static int64_t x259 = -14283LL;
	volatile int64_t x260 = 420100096777985043LL;
	int32_t t64 = -3;

    t64 = ((x257==x258)*(x259!=x260));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x262 = INT64_MIN;
	int32_t x263 = -1381;
	int16_t x264 = 15;
	int32_t t65 = 227468649;

    t65 = ((x261==x262)*(x263!=x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x265 = 3521LLU;
	uint16_t x266 = UINT16_MAX;
	int8_t x267 = INT8_MIN;
	static int16_t x268 = INT16_MAX;
	static volatile int32_t t66 = 36643540;

    t66 = ((x265==x266)*(x267!=x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x271 = INT64_MIN;
	int16_t x272 = -1826;
	static volatile int32_t t67 = 10;

    t67 = ((x269==x270)*(x271!=x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = -1;
	uint16_t x275 = UINT16_MAX;
	static volatile int32_t t68 = 10714068;

    t68 = ((x273==x274)*(x275!=x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x277 = UINT16_MAX;
	int64_t x278 = 555116437566504LL;
	static uint16_t x279 = 82U;
	uint16_t x280 = 95U;
	int32_t t69 = 198;

    t69 = ((x277==x278)*(x279!=x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x281 = 1385103U;
	uint32_t x282 = 11212270U;
	uint16_t x283 = 1623U;
	int32_t x284 = -1;
	volatile int32_t t70 = -128;

    t70 = ((x281==x282)*(x283!=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x285 = -1;
	int32_t x286 = INT32_MAX;
	static int32_t x287 = -498;
	int16_t x288 = -1;
	static int32_t t71 = 11434;

    t71 = ((x285==x286)*(x287!=x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x289 = UINT8_MAX;
	static uint16_t x291 = UINT16_MAX;
	volatile int32_t t72 = 18;

    t72 = ((x289==x290)*(x291!=x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint8_t x293 = 3U;
	uint64_t x294 = 2790170027202198952LLU;
	int32_t x295 = INT32_MIN;
	static int32_t x296 = -1543912;
	static int32_t t73 = 91;

    t73 = ((x293==x294)*(x295!=x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x297 = 6U;
	uint16_t x298 = UINT16_MAX;
	int16_t x299 = INT16_MIN;
	volatile int16_t x300 = INT16_MAX;
	volatile int32_t t74 = 198938433;

    t74 = ((x297==x298)*(x299!=x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = INT64_MIN;
	int32_t x302 = INT32_MAX;
	int8_t x303 = INT8_MIN;
	uint32_t x304 = UINT32_MAX;

    t75 = ((x301==x302)*(x303!=x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MIN;
	int64_t x308 = 14249823953890LL;
	volatile int32_t t76 = -1027945;

    t76 = ((x305==x306)*(x307!=x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x309 = INT8_MIN;
	uint32_t x310 = 13694912U;
	static uint64_t x311 = 40818437LLU;
	uint8_t x312 = 30U;
	volatile int32_t t77 = -520147272;

    t77 = ((x309==x310)*(x311!=x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x313 = 412U;
	volatile uint16_t x314 = 5U;
	static uint8_t x315 = 9U;
	uint8_t x316 = 11U;
	volatile int32_t t78 = 16082;

    t78 = ((x313==x314)*(x315!=x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x318 = -1;
	static int32_t x319 = INT32_MIN;
	uint8_t x320 = 10U;
	static volatile int32_t t79 = 19888437;

    t79 = ((x317==x318)*(x319!=x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int16_t x322 = INT16_MAX;
	uint8_t x323 = UINT8_MAX;
	volatile int8_t x324 = 36;

    t80 = ((x321==x322)*(x323!=x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x325 = 134U;
	int64_t x326 = INT64_MIN;
	volatile uint32_t x327 = 1509422U;
	uint8_t x328 = 65U;
	volatile int32_t t81 = -14074;

    t81 = ((x325==x326)*(x327!=x328));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x329 = 252635U;
	uint8_t x330 = UINT8_MAX;
	int64_t x331 = INT64_MIN;
	int64_t x332 = 251068703LL;
	static int32_t t82 = 895414;

    t82 = ((x329==x330)*(x331!=x332));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = INT8_MIN;
	volatile int8_t x334 = INT8_MIN;
	int16_t x335 = INT16_MAX;
	volatile int32_t t83 = -23239985;

    t83 = ((x333==x334)*(x335!=x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x337 = 84U;
	int8_t x339 = INT8_MAX;
	volatile int16_t x340 = -1;
	int32_t t84 = -754;

    t84 = ((x337==x338)*(x339!=x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x341 = 719U;
	volatile int64_t x342 = -1297243796368LL;
	volatile int16_t x344 = INT16_MIN;
	volatile int32_t t85 = -341;

    t85 = ((x341==x342)*(x343!=x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = -1;
	uint16_t x346 = UINT16_MAX;
	int32_t x347 = -3406;
	uint32_t x348 = 9121U;
	static int32_t t86 = 305141;

    t86 = ((x345==x346)*(x347!=x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t t87 = -39;

    t87 = ((x349==x350)*(x351!=x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x353 = 0U;
	int16_t x354 = -1;
	volatile uint32_t x355 = UINT32_MAX;
	int8_t x356 = -10;

    t88 = ((x353==x354)*(x355!=x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = INT16_MIN;
	volatile int16_t x358 = 917;
	static int32_t x359 = INT32_MIN;
	uint32_t x360 = UINT32_MAX;
	int32_t t89 = -115;

    t89 = ((x357==x358)*(x359!=x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x361 = INT8_MIN;
	int8_t x362 = 3;
	static int32_t x363 = 105084;
	int8_t x364 = 0;
	static volatile int32_t t90 = 26908591;

    t90 = ((x361==x362)*(x363!=x364));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x366 = INT16_MIN;
	volatile int64_t x367 = INT64_MIN;
	static volatile uint64_t x368 = UINT64_MAX;
	int32_t t91 = 272855;

    t91 = ((x365==x366)*(x367!=x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x369 = INT16_MAX;
	static int32_t x370 = 83802385;
	uint32_t x371 = UINT32_MAX;
	int32_t t92 = 1;

    t92 = ((x369==x370)*(x371!=x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x375 = INT32_MIN;
	static uint64_t x376 = 2025918745976508LLU;

    t93 = ((x373==x374)*(x375!=x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x377 = 1591U;
	int16_t x378 = INT16_MIN;
	int16_t x380 = INT16_MIN;
	static int32_t t94 = -977;

    t94 = ((x377==x378)*(x379!=x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint8_t x381 = 1U;
	uint64_t x382 = 431679826907LLU;
	int16_t x383 = INT16_MAX;

    t95 = ((x381==x382)*(x383!=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x385 = INT8_MIN;
	static uint16_t x386 = 0U;
	int8_t x387 = -1;
	uint16_t x388 = UINT16_MAX;

    t96 = ((x385==x386)*(x387!=x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x390 = 11U;
	volatile int32_t t97 = -8359;

    t97 = ((x389==x390)*(x391!=x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x393 = 515076429452146LLU;
	uint8_t x394 = 3U;
	static uint64_t x395 = UINT64_MAX;
	volatile uint32_t x396 = 7839149U;
	int32_t t98 = 41229856;

    t98 = ((x393==x394)*(x395!=x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x398 = -945;
	int32_t x399 = INT32_MIN;
	volatile int32_t t99 = -387298;

    t99 = ((x397==x398)*(x399!=x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x401 = UINT64_MAX;
	int32_t x402 = -1;
	volatile int64_t x403 = 1126603082LL;
	int16_t x404 = INT16_MIN;
	int32_t t100 = 785909;

    t100 = ((x401==x402)*(x403!=x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x405 = INT64_MIN;
	int64_t x406 = INT64_MIN;
	int16_t x407 = -1;
	int8_t x408 = -1;
	volatile int32_t t101 = 1619;

    t101 = ((x405==x406)*(x407!=x408));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = INT32_MIN;
	static uint64_t x410 = 394083263175LLU;
	uint64_t x411 = 55222768308476LLU;
	uint8_t x412 = 1U;
	volatile int32_t t102 = -64204;

    t102 = ((x409==x410)*(x411!=x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x413 = 124U;
	uint64_t x415 = 98351LLU;
	static volatile int16_t x416 = INT16_MIN;
	volatile int32_t t103 = -9565719;

    t103 = ((x413==x414)*(x415!=x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x417 = 2U;
	static int32_t x418 = INT32_MAX;
	volatile int8_t x419 = -45;
	int32_t t104 = -240228;

    t104 = ((x417==x418)*(x419!=x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = INT8_MIN;
	int64_t x422 = INT64_MAX;
	uint32_t x423 = UINT32_MAX;
	int32_t t105 = -20406426;

    t105 = ((x421==x422)*(x423!=x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = INT32_MIN;
	volatile uint8_t x427 = 1U;

    t106 = ((x425==x426)*(x427!=x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = -1;
	int16_t x430 = 144;
	uint64_t x432 = 28818LLU;
	static int32_t t107 = -7201;

    t107 = ((x429==x430)*(x431!=x432));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = INT8_MAX;
	uint64_t x434 = 3LLU;
	int64_t x435 = -1LL;
	static int32_t x436 = -1;

    t108 = ((x433==x434)*(x435!=x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x437 = 10U;
	uint32_t x438 = 13814U;
	int32_t x439 = INT32_MIN;
	volatile int32_t t109 = 2517;

    t109 = ((x437==x438)*(x439!=x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x441 = 14U;
	uint8_t x443 = 1U;
	uint8_t x444 = UINT8_MAX;
	int32_t t110 = -6050995;

    t110 = ((x441==x442)*(x443!=x444));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = -1LL;
	int16_t x446 = INT16_MIN;
	int32_t x447 = INT32_MIN;
	uint16_t x448 = UINT16_MAX;
	static volatile int32_t t111 = 20282;

    t111 = ((x445==x446)*(x447!=x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = 1;
	static int32_t x450 = 36491;
	static int64_t x452 = 19131481229LL;
	int32_t t112 = 1;

    t112 = ((x449==x450)*(x451!=x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x453 = -1;
	uint64_t x455 = UINT64_MAX;
	int16_t x456 = 0;
	static volatile int32_t t113 = -344446;

    t113 = ((x453==x454)*(x455!=x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = INT32_MAX;
	volatile int16_t x458 = 6598;
	int32_t x459 = INT32_MAX;
	volatile int32_t t114 = -6;

    t114 = ((x457==x458)*(x459!=x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = -1LL;
	volatile uint8_t x462 = 67U;
	int8_t x464 = 1;
	volatile int32_t t115 = 1204388;

    t115 = ((x461==x462)*(x463!=x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x465 = UINT32_MAX;
	uint32_t x466 = 17779340U;
	int64_t x467 = INT64_MIN;
	static int16_t x468 = -2676;
	volatile int32_t t116 = 1594;

    t116 = ((x465==x466)*(x467!=x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x469 = -1LL;
	static int16_t x471 = -1;
	static int64_t x472 = INT64_MAX;
	int32_t t117 = -19809391;

    t117 = ((x469==x470)*(x471!=x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x474 = 4935;
	int32_t t118 = -357484;

    t118 = ((x473==x474)*(x475!=x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x477 = UINT8_MAX;
	int16_t x478 = -3;
	volatile int32_t x479 = INT32_MIN;
	uint32_t x480 = 43770047U;
	int32_t t119 = -3635;

    t119 = ((x477==x478)*(x479!=x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = 249670331;
	uint32_t x482 = 3112U;
	volatile int8_t x483 = 5;
	int32_t x484 = -1;
	volatile int32_t t120 = -154;

    t120 = ((x481==x482)*(x483!=x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x485 = INT64_MIN;
	uint8_t x486 = 10U;
	static int8_t x487 = INT8_MIN;
	static uint8_t x488 = 0U;

    t121 = ((x485==x486)*(x487!=x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x489 = 1U;
	int16_t x490 = INT16_MIN;
	static int8_t x491 = INT8_MIN;
	volatile int64_t x492 = -1LL;

    t122 = ((x489==x490)*(x491!=x492));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = -282432023;
	static volatile uint64_t x494 = UINT64_MAX;
	int64_t x495 = -7316132394048305LL;
	uint64_t x496 = UINT64_MAX;
	int32_t t123 = -7913150;

    t123 = ((x493==x494)*(x495!=x496));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x497 = UINT8_MAX;
	volatile int8_t x498 = -1;
	int16_t x499 = 15;
	static int64_t x500 = -1LL;
	static volatile int32_t t124 = -8139;

    t124 = ((x497==x498)*(x499!=x500));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x501 = INT64_MIN;
	uint64_t x503 = 0LLU;
	uint16_t x504 = UINT16_MAX;
	int32_t t125 = -188;

    t125 = ((x501==x502)*(x503!=x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = INT8_MAX;
	uint16_t x507 = 10570U;
	int32_t x508 = INT32_MIN;
	int32_t t126 = 40974;

    t126 = ((x505==x506)*(x507!=x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x509 = 26U;
	uint8_t x510 = 12U;
	static int32_t x511 = INT32_MIN;
	int16_t x512 = INT16_MIN;
	volatile int32_t t127 = 2484918;

    t127 = ((x509==x510)*(x511!=x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x514 = 459308LLU;
	int32_t x516 = -1;
	int32_t t128 = 1;

    t128 = ((x513==x514)*(x515!=x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = -727759;
	int8_t x518 = 4;
	int8_t x519 = -1;
	uint32_t x520 = 538U;
	volatile int32_t t129 = 320;

    t129 = ((x517==x518)*(x519!=x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x521 = UINT8_MAX;
	int16_t x523 = 8485;
	int16_t x524 = -1;

    t130 = ((x521==x522)*(x523!=x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x525 = UINT16_MAX;
	int8_t x526 = INT8_MIN;
	int16_t x527 = -1;

    t131 = ((x525==x526)*(x527!=x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int64_t x529 = INT64_MAX;
	int32_t x530 = 19;
	int8_t x531 = -3;
	volatile int8_t x532 = 9;
	volatile int32_t t132 = 0;

    t132 = ((x529==x530)*(x531!=x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x534 = INT32_MIN;
	int32_t x536 = INT32_MIN;

    t133 = ((x533==x534)*(x535!=x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int32_t x537 = 10743;
	int16_t x539 = INT16_MIN;
	volatile int32_t t134 = 1456;

    t134 = ((x537==x538)*(x539!=x540));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int16_t x541 = -123;
	uint16_t x543 = UINT16_MAX;
	volatile uint8_t x544 = 22U;
	volatile int32_t t135 = -206;

    t135 = ((x541==x542)*(x543!=x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int8_t x545 = 0;
	int32_t x547 = INT32_MIN;
	int64_t x548 = -126995LL;

    t136 = ((x545==x546)*(x547!=x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x549 = UINT64_MAX;
	int16_t x551 = 3;
	int16_t x552 = 50;
	volatile int32_t t137 = 563305;

    t137 = ((x549==x550)*(x551!=x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x553 = INT32_MAX;
	uint16_t x554 = 21187U;
	uint32_t x555 = 16192U;
	static uint32_t x556 = 102814U;
	int32_t t138 = 109823;

    t138 = ((x553==x554)*(x555!=x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = 7184;
	volatile int8_t x558 = -12;
	static int32_t x559 = INT32_MIN;
	int64_t x560 = INT64_MAX;
	static volatile int32_t t139 = -17;

    t139 = ((x557==x558)*(x559!=x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x561 = UINT32_MAX;
	static uint16_t x562 = 19U;
	volatile int8_t x563 = 3;
	static volatile uint8_t x564 = UINT8_MAX;
	int32_t t140 = -301801;

    t140 = ((x561==x562)*(x563!=x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x565 = -1LL;
	static volatile int32_t x566 = INT32_MIN;
	static uint16_t x567 = UINT16_MAX;
	int64_t x568 = INT64_MAX;
	volatile int32_t t141 = 6101718;

    t141 = ((x565==x566)*(x567!=x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = 46;
	int64_t x570 = -793485717LL;
	uint8_t x571 = 6U;
	uint32_t x572 = 2U;
	static volatile int32_t t142 = 240635816;

    t142 = ((x569==x570)*(x571!=x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x573 = UINT32_MAX;
	int8_t x574 = -1;
	int16_t x575 = -124;
	uint8_t x576 = UINT8_MAX;

    t143 = ((x573==x574)*(x575!=x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = 0LL;
	uint64_t x579 = UINT64_MAX;
	int64_t x580 = -4282174715LL;
	volatile int32_t t144 = -985;

    t144 = ((x577==x578)*(x579!=x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x581 = UINT16_MAX;
	static int8_t x582 = INT8_MAX;
	static volatile uint64_t x583 = 56014987105LLU;
	static volatile int64_t x584 = 0LL;

    t145 = ((x581==x582)*(x583!=x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = INT16_MIN;
	volatile int64_t x586 = INT64_MIN;
	int64_t x587 = INT64_MIN;
	volatile int32_t t146 = -13658954;

    t146 = ((x585==x586)*(x587!=x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x590 = 14;
	int8_t x591 = -3;
	volatile int16_t x592 = -1;
	int32_t t147 = -11;

    t147 = ((x589==x590)*(x591!=x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x593 = -1;
	static int8_t x594 = INT8_MIN;
	int32_t x595 = -1;
	uint32_t x596 = 1537U;
	static int32_t t148 = -674005369;

    t148 = ((x593==x594)*(x595!=x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x597 = INT8_MAX;
	int64_t x598 = INT64_MIN;
	int16_t x600 = -311;
	int32_t t149 = 0;

    t149 = ((x597==x598)*(x599!=x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x602 = -66822351LL;
	uint16_t x604 = 3830U;

    t150 = ((x601==x602)*(x603!=x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x605 = 2278346U;
	int8_t x606 = 0;
	int16_t x608 = INT16_MIN;

    t151 = ((x605==x606)*(x607!=x608));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x610 = INT64_MAX;
	uint32_t x611 = UINT32_MAX;
	uint16_t x612 = 247U;
	int32_t t152 = 88866951;

    t152 = ((x609==x610)*(x611!=x612));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x613 = INT16_MIN;
	static int32_t x614 = INT32_MIN;
	static int16_t x615 = INT16_MAX;
	int16_t x616 = INT16_MIN;
	int32_t t153 = -158591561;

    t153 = ((x613==x614)*(x615!=x616));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x617 = -1;
	uint8_t x618 = 11U;
	int32_t x619 = INT32_MIN;
	static int64_t x620 = INT64_MIN;
	static int32_t t154 = -4;

    t154 = ((x617==x618)*(x619!=x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x622 = -1;
	int32_t x623 = INT32_MAX;
	int16_t x624 = -1;
	static volatile int32_t t155 = 1645;

    t155 = ((x621==x622)*(x623!=x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x626 = -57;
	int32_t x627 = -91;
	int64_t x628 = INT64_MAX;

    t156 = ((x625==x626)*(x627!=x628));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x630 = INT16_MIN;
	int32_t x631 = INT32_MIN;
	static int64_t x632 = -1LL;
	static volatile int32_t t157 = 0;

    t157 = ((x629==x630)*(x631!=x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = INT16_MAX;
	uint64_t x634 = UINT64_MAX;
	static int64_t x636 = -251296951652LL;
	int32_t t158 = 0;

    t158 = ((x633==x634)*(x635!=x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = INT64_MIN;
	int8_t x638 = INT8_MIN;
	static int64_t x639 = -1093LL;
	static uint64_t x640 = UINT64_MAX;
	volatile int32_t t159 = 521173;

    t159 = ((x637==x638)*(x639!=x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = -1;
	static int64_t x642 = INT64_MIN;
	int64_t x643 = INT64_MAX;
	uint64_t x644 = 4167394299733LLU;
	volatile int32_t t160 = 7;

    t160 = ((x641==x642)*(x643!=x644));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x645 = 50U;
	uint8_t x646 = 5U;
	uint64_t x647 = 61162967804LLU;
	int32_t x648 = 7;
	static volatile int32_t t161 = -4373;

    t161 = ((x645==x646)*(x647!=x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = 109601492698290LL;
	uint64_t x650 = UINT64_MAX;
	int32_t x651 = INT32_MIN;
	int32_t t162 = 18562;

    t162 = ((x649==x650)*(x651!=x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x653 = 30478U;
	int8_t x654 = 38;
	volatile int64_t x655 = -1LL;
	uint32_t x656 = 4350U;

    t163 = ((x653==x654)*(x655!=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = -1;
	static int32_t x658 = -4705;
	volatile int32_t t164 = 0;

    t164 = ((x657==x658)*(x659!=x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x661 = UINT8_MAX;
	int64_t x662 = 270746536103108966LL;
	uint16_t x663 = 906U;
	static uint16_t x664 = 15U;
	volatile int32_t t165 = -3;

    t165 = ((x661==x662)*(x663!=x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x665 = INT8_MIN;
	volatile int32_t x666 = -1;
	int32_t x667 = INT32_MAX;
	static volatile int32_t t166 = -15839576;

    t166 = ((x665==x666)*(x667!=x668));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = -798LL;
	int32_t x670 = INT32_MIN;
	uint8_t x671 = UINT8_MAX;
	volatile int64_t x672 = 0LL;
	volatile int32_t t167 = 81050;

    t167 = ((x669==x670)*(x671!=x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x673 = INT64_MIN;
	int8_t x674 = -1;
	int64_t x675 = INT64_MIN;
	int16_t x676 = 590;
	volatile int32_t t168 = -193212;

    t168 = ((x673==x674)*(x675!=x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x678 = UINT64_MAX;
	volatile int32_t x679 = -1;
	int8_t x680 = 23;
	static int32_t t169 = 196679;

    t169 = ((x677==x678)*(x679!=x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint8_t x681 = 1U;
	int64_t x682 = INT64_MIN;
	uint32_t x683 = 5073U;
	static int64_t x684 = -47780672LL;

    t170 = ((x681==x682)*(x683!=x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint8_t x685 = 79U;
	int8_t x686 = -1;
	int64_t x687 = -1LL;
	int32_t t171 = -47;

    t171 = ((x685==x686)*(x687!=x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x689 = INT64_MAX;
	uint32_t x690 = 4379U;
	int8_t x691 = INT8_MIN;
	uint64_t x692 = 2267176867LLU;
	static volatile int32_t t172 = 486115354;

    t172 = ((x689==x690)*(x691!=x692));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = -1;
	int16_t x694 = INT16_MAX;
	static int16_t x695 = INT16_MAX;
	int64_t x696 = INT64_MIN;
	int32_t t173 = -3;

    t173 = ((x693==x694)*(x695!=x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x697 = 3U;
	volatile uint64_t x699 = UINT64_MAX;
	uint32_t x700 = 1111347910U;

    t174 = ((x697==x698)*(x699!=x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x701 = 52020083584LL;
	int8_t x703 = INT8_MAX;
	int8_t x704 = INT8_MIN;

    t175 = ((x701==x702)*(x703!=x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x706 = 114U;
	int16_t x707 = -250;
	int32_t t176 = 90;

    t176 = ((x705==x706)*(x707!=x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = INT8_MAX;
	volatile int8_t x711 = INT8_MIN;
	static volatile int32_t x712 = -1;
	volatile int32_t t177 = 778;

    t177 = ((x709==x710)*(x711!=x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = -1;
	static volatile int32_t x714 = INT32_MAX;
	int64_t x715 = INT64_MIN;
	int8_t x716 = INT8_MIN;
	static int32_t t178 = 5407;

    t178 = ((x713==x714)*(x715!=x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x717 = 1U;
	static uint32_t x718 = 30U;
	uint8_t x719 = 14U;
	int32_t x720 = 140;
	volatile int32_t t179 = -8303276;

    t179 = ((x717==x718)*(x719!=x720));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = UINT32_MAX;
	uint8_t x722 = 7U;
	int16_t x723 = -1;
	uint8_t x724 = 15U;
	volatile int32_t t180 = 59311;

    t180 = ((x721==x722)*(x723!=x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint8_t x725 = 109U;
	uint64_t x726 = 1013169245328317866LLU;
	uint16_t x727 = 160U;
	int8_t x728 = 0;
	int32_t t181 = 39348;

    t181 = ((x725==x726)*(x727!=x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = -1;
	int32_t x731 = INT32_MIN;
	volatile uint16_t x732 = UINT16_MAX;
	volatile int32_t t182 = -300;

    t182 = ((x729==x730)*(x731!=x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x733 = INT8_MIN;
	static int16_t x734 = 0;
	int32_t t183 = -725281410;

    t183 = ((x733==x734)*(x735!=x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x737 = INT64_MIN;
	int8_t x738 = INT8_MIN;
	static volatile uint64_t x739 = UINT64_MAX;
	static int64_t x740 = INT64_MAX;
	int32_t t184 = 122049432;

    t184 = ((x737==x738)*(x739!=x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = -1LL;
	int64_t x742 = -1LL;
	uint16_t x743 = UINT16_MAX;
	int16_t x744 = -1;
	int32_t t185 = -6311327;

    t185 = ((x741==x742)*(x743!=x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = 138196;
	int8_t x747 = INT8_MAX;
	static int64_t x748 = -130418LL;
	int32_t t186 = -160;

    t186 = ((x745==x746)*(x747!=x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint64_t x749 = UINT64_MAX;
	static int64_t x750 = INT64_MIN;
	uint64_t x751 = 1658497793829LLU;
	int64_t x752 = INT64_MIN;
	volatile int32_t t187 = -5864555;

    t187 = ((x749==x750)*(x751!=x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x753 = 6U;
	int8_t x755 = -3;
	static int16_t x756 = INT16_MIN;
	volatile int32_t t188 = 960437876;

    t188 = ((x753==x754)*(x755!=x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int16_t x757 = INT16_MIN;
	static volatile int8_t x758 = 1;
	static int64_t x759 = 27LL;
	volatile int8_t x760 = -1;
	volatile int32_t t189 = -6;

    t189 = ((x757==x758)*(x759!=x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint8_t x761 = 1U;
	int32_t x762 = INT32_MAX;
	static volatile uint8_t x763 = UINT8_MAX;
	static int16_t x764 = -1;
	static volatile int32_t t190 = -6902490;

    t190 = ((x761==x762)*(x763!=x764));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x765 = INT64_MIN;
	volatile int8_t x766 = INT8_MIN;
	int16_t x768 = -57;
	volatile int32_t t191 = -178;

    t191 = ((x765==x766)*(x767!=x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x769 = 16914U;
	static int64_t x770 = INT64_MIN;
	volatile int8_t x771 = 12;
	volatile int32_t t192 = -238086;

    t192 = ((x769==x770)*(x771!=x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = -12;
	int64_t x774 = -1LL;
	volatile uint64_t x775 = 166625LLU;
	int8_t x776 = INT8_MIN;

    t193 = ((x773==x774)*(x775!=x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x777 = 2U;
	uint64_t x778 = 590003719592LLU;
	static int32_t x779 = -1;
	int16_t x780 = INT16_MIN;
	volatile int32_t t194 = -6089329;

    t194 = ((x777==x778)*(x779!=x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = -1;
	int8_t x782 = INT8_MAX;
	int8_t x783 = -1;
	static int64_t x784 = 1592LL;
	static int32_t t195 = -9026592;

    t195 = ((x781==x782)*(x783!=x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = 21;
	static volatile int16_t x786 = INT16_MIN;
	uint16_t x787 = UINT16_MAX;
	static int16_t x788 = INT16_MIN;
	static volatile int32_t t196 = -14641;

    t196 = ((x785==x786)*(x787!=x788));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x790 = 78625030930894895LLU;
	int8_t x791 = INT8_MAX;
	volatile uint16_t x792 = 1U;
	volatile int32_t t197 = -17293;

    t197 = ((x789==x790)*(x791!=x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x793 = 1537U;
	int8_t x794 = -1;
	volatile int16_t x795 = -62;
	volatile int32_t t198 = -646;

    t198 = ((x793==x794)*(x795!=x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = -1848435705LL;
	int64_t x799 = INT64_MIN;
	volatile int8_t x800 = INT8_MIN;
	static volatile int32_t t199 = -4474976;

    t199 = ((x797==x798)*(x799!=x800));

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

