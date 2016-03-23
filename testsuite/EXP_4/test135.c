
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

static int8_t x6 = INT8_MIN;
int8_t x15 = INT8_MAX;
uint16_t x16 = 4849U;
static uint8_t x18 = 124U;
int8_t x20 = INT8_MIN;
static int8_t x21 = 4;
int8_t x25 = -1;
uint64_t x26 = 1140826LLU;
static int16_t x27 = -2762;
uint64_t x30 = UINT64_MAX;
volatile int8_t x31 = -1;
volatile int32_t x32 = -7;
int8_t x34 = INT8_MIN;
int16_t x36 = -7;
static int32_t x38 = -5431;
int64_t x40 = -1126845175045792LL;
int32_t t8 = 43432;
uint32_t x43 = UINT32_MAX;
int32_t x49 = INT32_MIN;
uint16_t x50 = 10U;
static int16_t x53 = 4;
int64_t x59 = -1LL;
int32_t t13 = 246;
volatile int64_t x61 = INT64_MAX;
int64_t x64 = INT64_MIN;
int32_t x66 = -2;
static volatile int32_t t16 = 18388967;
volatile int16_t x79 = -13120;
int8_t x83 = -1;
int16_t x86 = 25;
uint32_t x95 = 202836U;
int8_t x107 = INT8_MAX;
int32_t x111 = -1;
volatile int32_t x118 = INT32_MAX;
int32_t t27 = 157;
static int16_t x121 = -1;
volatile int8_t x122 = INT8_MAX;
volatile int32_t x127 = INT32_MIN;
int8_t x132 = INT8_MAX;
uint8_t x133 = 13U;
uint16_t x140 = 12U;
volatile int16_t x143 = 164;
uint8_t x144 = 51U;
uint16_t x147 = 3U;
int64_t x152 = -2030227938384699205LL;
int64_t x153 = INT64_MIN;
static int8_t x156 = -1;
int64_t x158 = INT64_MIN;
volatile uint8_t x161 = 75U;
static int16_t x163 = INT16_MIN;
static volatile int32_t t39 = 208513440;
static int8_t x172 = 2;
uint64_t x176 = 689085587564LLU;
volatile int32_t t42 = -64899213;
static uint64_t x185 = 7LLU;
static uint16_t x195 = 3600U;
int32_t t46 = 68024;
int8_t x204 = INT8_MIN;
volatile int8_t x210 = INT8_MIN;
uint32_t x214 = 14U;
uint16_t x224 = UINT16_MAX;
static volatile int8_t x258 = INT8_MIN;
int64_t x259 = -1LL;
int8_t x269 = 1;
int64_t x270 = 11818LL;
int8_t x282 = 0;
int32_t x286 = INT32_MAX;
static volatile int32_t t68 = -85214;
uint16_t x297 = UINT16_MAX;
int32_t x306 = INT32_MAX;
int16_t x309 = INT16_MIN;
volatile int16_t x310 = INT16_MIN;
static int16_t x315 = -9;
volatile int64_t x316 = -1LL;
static volatile uint32_t x320 = 26U;
int32_t x322 = -1;
int64_t x327 = 10900214039199089LL;
uint64_t x328 = 2266593643406364233LLU;
static uint16_t x332 = 16973U;
int32_t x333 = INT32_MIN;
int64_t x335 = 11531990449LL;
int32_t t77 = -160229;
volatile uint64_t x338 = 224829332566861387LLU;
volatile int8_t x340 = -1;
uint16_t x344 = 1559U;
int16_t x354 = 16;
uint32_t x359 = 1U;
int64_t x361 = INT64_MAX;
uint64_t x364 = 380045725290LLU;
int32_t t84 = -406;
volatile int32_t x371 = -145666;
uint64_t x383 = 527266085028LLU;
static volatile int64_t x385 = INT64_MIN;
static volatile int32_t t88 = -153;
static uint8_t x391 = 1U;
volatile int32_t t89 = -3362;
int16_t x402 = INT16_MAX;
volatile int16_t x415 = 4;
volatile int16_t x418 = 0;
static int32_t x419 = INT32_MAX;
int64_t x420 = -3364334855687098796LL;
uint16_t x423 = UINT16_MAX;
uint64_t x431 = UINT64_MAX;
volatile int32_t t97 = 346;
static volatile int32_t t98 = 103281;
volatile int32_t x440 = 839653;
uint16_t x446 = UINT16_MAX;
int64_t x453 = -1LL;
static uint8_t x455 = UINT8_MAX;
int32_t t103 = -1;
uint64_t x457 = 3537LLU;
uint64_t x458 = 284351233LLU;
int32_t t104 = 879;
int16_t x464 = 55;
static volatile int32_t t105 = -61619;
int8_t x465 = INT8_MIN;
int64_t x475 = INT64_MIN;
uint16_t x484 = 975U;
static volatile int32_t t110 = 222;
int8_t x490 = 6;
static volatile int32_t t114 = 111586152;
uint16_t x510 = UINT16_MAX;
static int8_t x513 = -1;
int64_t x516 = INT64_MAX;
volatile int32_t t117 = -408;
int64_t x521 = 3230634505954414LL;
uint32_t x536 = UINT32_MAX;
int32_t x537 = 1;
static int32_t t123 = -254;
static int32_t x548 = 3198478;
volatile uint32_t x553 = 97109U;
int32_t t126 = 6;
int32_t x560 = INT32_MAX;
int32_t t127 = -12;
int16_t x561 = 11952;
uint32_t x563 = UINT32_MAX;
int8_t x566 = INT8_MAX;
static int64_t x567 = -1LL;
static uint32_t x576 = 1U;
volatile int8_t x580 = INT8_MIN;
int8_t x587 = INT8_MAX;
uint16_t x588 = 801U;
uint16_t x593 = UINT16_MAX;
volatile uint16_t x596 = 1U;
int64_t x604 = 11511LL;
int64_t x613 = INT64_MIN;
int32_t t140 = 9743;
uint64_t x621 = 3344LLU;
uint64_t x626 = UINT64_MAX;
static int64_t x631 = -62541LL;
volatile int32_t t144 = -408609179;
int32_t x640 = 153653452;
int32_t t148 = 0;
int16_t x656 = -1;
int8_t x664 = 61;
volatile int16_t x672 = INT16_MIN;
static uint8_t x677 = 5U;
volatile int32_t x685 = INT32_MIN;
uint32_t x687 = 97002520U;
volatile int16_t x689 = 1552;
uint64_t x694 = 28718869266LLU;
int32_t t159 = -477;
static volatile int32_t t160 = 59236139;
int64_t x704 = 56515431223280647LL;
int16_t x708 = INT16_MIN;
static int64_t x709 = INT64_MIN;
int8_t x710 = INT8_MAX;
int64_t x711 = INT64_MIN;
static uint32_t x724 = 21351U;
int8_t x727 = INT8_MAX;
int16_t x736 = INT16_MIN;
volatile int32_t t167 = -61283509;
int32_t x740 = 0;
volatile int16_t x744 = INT16_MIN;
volatile int32_t x745 = INT32_MAX;
volatile int32_t t170 = 11269250;
int16_t x749 = INT16_MIN;
int64_t x752 = -398LL;
int32_t x768 = -980;
uint32_t x774 = UINT32_MAX;
static uint64_t x785 = 9588696270093527LLU;
volatile int32_t x789 = INT32_MIN;
int64_t x795 = 934591736025LL;
uint64_t x796 = 26271LLU;
volatile int32_t t179 = 32223699;
int32_t x801 = INT32_MIN;
volatile int32_t t181 = 262928810;
static int8_t x805 = 0;
int8_t x815 = -1;
static volatile int32_t t184 = -2166;
volatile int32_t t186 = -101471;
int32_t x830 = INT32_MAX;
static uint16_t x834 = 484U;
int32_t x842 = -262260000;
uint8_t x852 = 12U;
static int8_t x853 = INT8_MIN;
uint32_t x855 = 28041985U;
volatile int8_t x860 = 0;
static int16_t x864 = 0;
int8_t x873 = -1;
static int32_t t197 = 5976695;
static int16_t x881 = INT16_MAX;
volatile int32_t t198 = 1;
uint8_t x894 = UINT8_MAX;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	static uint64_t x2 = 13LLU;
	static int32_t x3 = 16152;
	int64_t x4 = INT64_MIN;
	volatile int32_t t0 = -3419804;

    t0 = (x1>(x2<=(x3+x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	int64_t x7 = -91744485LL;
	int8_t x8 = -1;
	static volatile int32_t t1 = 35;

    t1 = (x5>(x6<=(x7+x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x13 = INT8_MAX;
	static int32_t x14 = INT32_MIN;
	volatile int32_t t2 = -22025;

    t2 = (x13>(x14<=(x15+x16)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x17 = 2374395U;
	int16_t x19 = -1;
	volatile int32_t t3 = -11;

    t3 = (x17>(x18<=(x19+x20)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x22 = INT8_MIN;
	volatile int16_t x23 = 0;
	uint64_t x24 = UINT64_MAX;
	static int32_t t4 = 46426157;

    t4 = (x21>(x22<=(x23+x24)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x28 = UINT64_MAX;
	static volatile int32_t t5 = -52;

    t5 = (x25>(x26<=(x27+x28)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x29 = -1;
	int32_t t6 = 736;

    t6 = (x29>(x30<=(x31+x32)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x33 = 1;
	int8_t x35 = -1;
	static volatile int32_t t7 = -3852;

    t7 = (x33>(x34<=(x35+x36)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x37 = UINT16_MAX;
	static int16_t x39 = INT16_MIN;

    t8 = (x37>(x38<=(x39+x40)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x41 = 15U;
	int32_t x42 = 6;
	int64_t x44 = -1LL;
	volatile int32_t t9 = -1747020;

    t9 = (x41>(x42<=(x43+x44)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x45 = UINT32_MAX;
	int64_t x46 = INT64_MIN;
	int32_t x47 = -1;
	uint64_t x48 = 1667940LLU;
	int32_t t10 = 35;

    t10 = (x45>(x46<=(x47+x48)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x51 = 42U;
	static volatile int8_t x52 = 55;
	volatile int32_t t11 = 26;

    t11 = (x49>(x50<=(x51+x52)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x54 = -13981395347365LL;
	int8_t x55 = INT8_MAX;
	static int32_t x56 = -1;
	int32_t t12 = 19895;

    t12 = (x53>(x54<=(x55+x56)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x57 = INT32_MAX;
	static int8_t x58 = INT8_MAX;
	uint64_t x60 = UINT64_MAX;

    t13 = (x57>(x58<=(x59+x60)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x62 = UINT64_MAX;
	uint8_t x63 = 25U;
	static volatile int32_t t14 = -3;

    t14 = (x61>(x62<=(x63+x64)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x65 = 427U;
	int32_t x67 = INT32_MIN;
	uint16_t x68 = 100U;
	volatile int32_t t15 = 1009092970;

    t15 = (x65>(x66<=(x67+x68)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x73 = -142219910097311644LL;
	int32_t x74 = -48282;
	uint8_t x75 = UINT8_MAX;
	uint16_t x76 = 19U;

    t16 = (x73>(x74<=(x75+x76)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x77 = -1;
	volatile int16_t x78 = INT16_MAX;
	volatile uint8_t x80 = UINT8_MAX;
	int32_t t17 = 34;

    t17 = (x77>(x78<=(x79+x80)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x81 = 1319U;
	int32_t x82 = INT32_MIN;
	uint32_t x84 = 117U;
	volatile int32_t t18 = 4;

    t18 = (x81>(x82<=(x83+x84)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x85 = -1LL;
	int16_t x87 = 5;
	uint8_t x88 = UINT8_MAX;
	volatile int32_t t19 = -22;

    t19 = (x85>(x86<=(x87+x88)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int8_t x89 = INT8_MIN;
	int8_t x90 = 1;
	int16_t x91 = -1;
	volatile uint16_t x92 = UINT16_MAX;
	int32_t t20 = 1764;

    t20 = (x89>(x90<=(x91+x92)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int32_t x93 = 6570;
	uint64_t x94 = 1099937778345LLU;
	int64_t x96 = INT64_MIN;
	volatile int32_t t21 = -1;

    t21 = (x93>(x94<=(x95+x96)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x97 = UINT64_MAX;
	uint8_t x98 = 7U;
	int8_t x99 = 1;
	int8_t x100 = INT8_MIN;
	int32_t t22 = -523;

    t22 = (x97>(x98<=(x99+x100)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x101 = 10U;
	uint8_t x102 = 2U;
	uint64_t x103 = 6483237320LLU;
	int8_t x104 = INT8_MIN;
	volatile int32_t t23 = -184904;

    t23 = (x101>(x102<=(x103+x104)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x105 = INT64_MIN;
	uint64_t x106 = 927953495814029LLU;
	static int64_t x108 = INT64_MIN;
	volatile int32_t t24 = -538;

    t24 = (x105>(x106<=(x107+x108)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x109 = INT16_MAX;
	int8_t x110 = INT8_MAX;
	uint64_t x112 = 144393535271LLU;
	int32_t t25 = 121153450;

    t25 = (x109>(x110<=(x111+x112)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x113 = UINT32_MAX;
	static int16_t x114 = 0;
	int16_t x115 = INT16_MIN;
	int16_t x116 = 1;
	volatile int32_t t26 = -175076248;

    t26 = (x113>(x114<=(x115+x116)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x117 = INT16_MIN;
	int64_t x119 = INT64_MIN;
	uint16_t x120 = UINT16_MAX;

    t27 = (x117>(x118<=(x119+x120)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x123 = INT64_MIN;
	uint16_t x124 = 233U;
	int32_t t28 = -345266;

    t28 = (x121>(x122<=(x123+x124)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x125 = -1;
	static int16_t x126 = -219;
	int32_t x128 = 15495466;
	volatile int32_t t29 = -200595722;

    t29 = (x125>(x126<=(x127+x128)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x129 = 0;
	static uint32_t x130 = UINT32_MAX;
	volatile uint32_t x131 = 692249U;
	volatile int32_t t30 = -190;

    t30 = (x129>(x130<=(x131+x132)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x134 = INT64_MIN;
	uint16_t x135 = 61U;
	int8_t x136 = -1;
	int32_t t31 = -422;

    t31 = (x133>(x134<=(x135+x136)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x137 = 26601281855LLU;
	int32_t x138 = INT32_MAX;
	static volatile int8_t x139 = -1;
	static int32_t t32 = 93;

    t32 = (x137>(x138<=(x139+x140)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x141 = 25896U;
	volatile int64_t x142 = -1LL;
	int32_t t33 = 82509155;

    t33 = (x141>(x142<=(x143+x144)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x145 = 15;
	volatile int32_t x146 = INT32_MIN;
	static uint16_t x148 = 7U;
	static int32_t t34 = 6545462;

    t34 = (x145>(x146<=(x147+x148)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x149 = 6;
	int64_t x150 = -1LL;
	int64_t x151 = -576607LL;
	int32_t t35 = -115;

    t35 = (x149>(x150<=(x151+x152)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x154 = -1;
	uint8_t x155 = 54U;
	static int32_t t36 = 98;

    t36 = (x153>(x154<=(x155+x156)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x157 = -606672176046LL;
	uint8_t x159 = 88U;
	int16_t x160 = 156;
	static int32_t t37 = -4;

    t37 = (x157>(x158<=(x159+x160)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x162 = INT32_MIN;
	static uint32_t x164 = UINT32_MAX;
	volatile int32_t t38 = 255;

    t38 = (x161>(x162<=(x163+x164)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x165 = INT16_MIN;
	uint32_t x166 = 32611U;
	uint64_t x167 = 3805621LLU;
	volatile uint32_t x168 = 101U;

    t39 = (x165>(x166<=(x167+x168)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x169 = INT8_MIN;
	int64_t x170 = 4288687242405072155LL;
	volatile uint32_t x171 = 26542625U;
	int32_t t40 = 3;

    t40 = (x169>(x170<=(x171+x172)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x173 = 0U;
	static int32_t x174 = -1;
	int16_t x175 = 505;
	static int32_t t41 = 1;

    t41 = (x173>(x174<=(x175+x176)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x177 = INT64_MAX;
	int32_t x178 = -1;
	volatile int8_t x179 = INT8_MIN;
	static int64_t x180 = -129208173728LL;

    t42 = (x177>(x178<=(x179+x180)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x181 = INT64_MAX;
	int64_t x182 = -1LL;
	volatile int8_t x183 = INT8_MIN;
	static uint64_t x184 = UINT64_MAX;
	volatile int32_t t43 = -116;

    t43 = (x181>(x182<=(x183+x184)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x186 = 144182261LLU;
	uint16_t x187 = UINT16_MAX;
	static volatile int8_t x188 = INT8_MAX;
	int32_t t44 = 23;

    t44 = (x185>(x186<=(x187+x188)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x193 = 0;
	int8_t x194 = INT8_MIN;
	int8_t x196 = INT8_MIN;
	int32_t t45 = 2;

    t45 = (x193>(x194<=(x195+x196)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x197 = UINT8_MAX;
	int64_t x198 = INT64_MAX;
	static uint8_t x199 = UINT8_MAX;
	int32_t x200 = INT32_MIN;

    t46 = (x197>(x198<=(x199+x200)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x201 = 809LLU;
	static volatile int32_t x202 = INT32_MIN;
	static int16_t x203 = INT16_MAX;
	static volatile int32_t t47 = 6;

    t47 = (x201>(x202<=(x203+x204)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x205 = INT64_MAX;
	volatile int8_t x206 = -45;
	uint16_t x207 = 220U;
	int16_t x208 = INT16_MIN;
	volatile int32_t t48 = 0;

    t48 = (x205>(x206<=(x207+x208)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x209 = -1LL;
	volatile int64_t x211 = INT64_MIN;
	static uint16_t x212 = 106U;
	int32_t t49 = 1435373;

    t49 = (x209>(x210<=(x211+x212)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x213 = -1;
	int16_t x215 = INT16_MIN;
	uint8_t x216 = 9U;
	volatile int32_t t50 = 1683;

    t50 = (x213>(x214<=(x215+x216)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x217 = UINT16_MAX;
	int32_t x218 = INT32_MAX;
	uint8_t x219 = 5U;
	uint8_t x220 = 8U;
	volatile int32_t t51 = -1;

    t51 = (x217>(x218<=(x219+x220)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x221 = INT64_MAX;
	static uint8_t x222 = 28U;
	static int8_t x223 = INT8_MAX;
	int32_t t52 = 1021850940;

    t52 = (x221>(x222<=(x223+x224)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x225 = 110;
	int16_t x226 = INT16_MIN;
	uint8_t x227 = 29U;
	int16_t x228 = 13;
	int32_t t53 = 1818652;

    t53 = (x225>(x226<=(x227+x228)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x229 = INT8_MIN;
	volatile uint8_t x230 = UINT8_MAX;
	uint8_t x231 = 15U;
	volatile uint64_t x232 = 34675514717312001LLU;
	int32_t t54 = -432801;

    t54 = (x229>(x230<=(x231+x232)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x233 = -1LL;
	int8_t x234 = INT8_MIN;
	static uint64_t x235 = 46LLU;
	int8_t x236 = -1;
	static volatile int32_t t55 = 5483992;

    t55 = (x233>(x234<=(x235+x236)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint16_t x237 = 0U;
	static volatile uint32_t x238 = 0U;
	int16_t x239 = INT16_MAX;
	int64_t x240 = -58848154144420LL;
	static volatile int32_t t56 = 2;

    t56 = (x237>(x238<=(x239+x240)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x241 = INT8_MIN;
	int8_t x242 = INT8_MIN;
	int8_t x243 = INT8_MIN;
	volatile int16_t x244 = INT16_MIN;
	volatile int32_t t57 = -52;

    t57 = (x241>(x242<=(x243+x244)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x245 = -1LL;
	uint16_t x246 = 40U;
	volatile int16_t x247 = INT16_MIN;
	int8_t x248 = INT8_MAX;
	int32_t t58 = -1;

    t58 = (x245>(x246<=(x247+x248)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint32_t x249 = UINT32_MAX;
	int64_t x250 = -1LL;
	uint64_t x251 = 65923227922582LLU;
	uint64_t x252 = UINT64_MAX;
	int32_t t59 = 22124;

    t59 = (x249>(x250<=(x251+x252)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x257 = INT32_MIN;
	uint64_t x260 = UINT64_MAX;
	int32_t t60 = -216183;

    t60 = (x257>(x258<=(x259+x260)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x261 = INT16_MAX;
	static int16_t x262 = -2;
	uint16_t x263 = 224U;
	volatile int16_t x264 = INT16_MIN;
	int32_t t61 = 44;

    t61 = (x261>(x262<=(x263+x264)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x265 = INT32_MIN;
	uint8_t x266 = UINT8_MAX;
	int8_t x267 = INT8_MIN;
	int8_t x268 = INT8_MAX;
	int32_t t62 = 2274731;

    t62 = (x265>(x266<=(x267+x268)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x271 = -7607759LL;
	static volatile int16_t x272 = -1;
	int32_t t63 = 6689700;

    t63 = (x269>(x270<=(x271+x272)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x273 = INT8_MIN;
	uint32_t x274 = UINT32_MAX;
	uint16_t x275 = UINT16_MAX;
	static uint8_t x276 = UINT8_MAX;
	static int32_t t64 = -502375;

    t64 = (x273>(x274<=(x275+x276)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x277 = INT8_MIN;
	uint8_t x278 = UINT8_MAX;
	uint64_t x279 = 50014LLU;
	volatile int16_t x280 = -83;
	static volatile int32_t t65 = -14;

    t65 = (x277>(x278<=(x279+x280)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x281 = INT32_MIN;
	static uint16_t x283 = UINT16_MAX;
	int32_t x284 = INT32_MIN;
	static int32_t t66 = 3292;

    t66 = (x281>(x282<=(x283+x284)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x285 = INT8_MIN;
	uint32_t x287 = 1034999U;
	volatile int8_t x288 = -1;
	volatile int32_t t67 = -418439;

    t67 = (x285>(x286<=(x287+x288)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x289 = -642;
	volatile int32_t x290 = INT32_MIN;
	static uint32_t x291 = 2371U;
	int32_t x292 = -1;

    t68 = (x289>(x290<=(x291+x292)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x298 = -1LL;
	uint32_t x299 = UINT32_MAX;
	static int8_t x300 = INT8_MAX;
	int32_t t69 = -98;

    t69 = (x297>(x298<=(x299+x300)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x305 = -3194727430999LL;
	static volatile int8_t x307 = INT8_MIN;
	uint32_t x308 = 240152U;
	static volatile int32_t t70 = 1745;

    t70 = (x305>(x306<=(x307+x308)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x311 = 23U;
	int8_t x312 = INT8_MAX;
	static int32_t t71 = 11986;

    t71 = (x309>(x310<=(x311+x312)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x313 = INT64_MIN;
	static int16_t x314 = INT16_MIN;
	int32_t t72 = 9;

    t72 = (x313>(x314<=(x315+x316)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x317 = -12;
	int32_t x318 = 4080;
	int64_t x319 = INT64_MIN;
	volatile int32_t t73 = -17483684;

    t73 = (x317>(x318<=(x319+x320)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x321 = UINT16_MAX;
	int8_t x323 = 0;
	int8_t x324 = INT8_MIN;
	int32_t t74 = 21800602;

    t74 = (x321>(x322<=(x323+x324)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int8_t x325 = INT8_MIN;
	int64_t x326 = 70130LL;
	volatile int32_t t75 = -44477602;

    t75 = (x325>(x326<=(x327+x328)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x329 = 434870674316085328LLU;
	volatile int64_t x330 = INT64_MAX;
	volatile int64_t x331 = -1LL;
	volatile int32_t t76 = -2;

    t76 = (x329>(x330<=(x331+x332)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x334 = 1U;
	volatile uint16_t x336 = UINT16_MAX;

    t77 = (x333>(x334<=(x335+x336)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x337 = -14661;
	uint16_t x339 = 0U;
	volatile int32_t t78 = 6025;

    t78 = (x337>(x338<=(x339+x340)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x341 = -1LL;
	volatile int32_t x342 = 238001829;
	int64_t x343 = 2606009742578377LL;
	int32_t t79 = -11;

    t79 = (x341>(x342<=(x343+x344)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x345 = 41U;
	static int16_t x346 = INT16_MIN;
	volatile uint16_t x347 = UINT16_MAX;
	int8_t x348 = INT8_MAX;
	volatile int32_t t80 = 1;

    t80 = (x345>(x346<=(x347+x348)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x349 = -470;
	int16_t x350 = INT16_MIN;
	uint64_t x351 = 1082066298927LLU;
	static int8_t x352 = -1;
	int32_t t81 = 1534685;

    t81 = (x349>(x350<=(x351+x352)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x353 = -34LL;
	int16_t x355 = -1;
	uint64_t x356 = UINT64_MAX;
	volatile int32_t t82 = -78453;

    t82 = (x353>(x354<=(x355+x356)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x357 = INT64_MAX;
	int64_t x358 = 11301406LL;
	static int8_t x360 = -2;
	volatile int32_t t83 = 21276;

    t83 = (x357>(x358<=(x359+x360)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x362 = INT8_MIN;
	static int64_t x363 = -280821112318021LL;

    t84 = (x361>(x362<=(x363+x364)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x369 = -1LL;
	int64_t x370 = -1LL;
	int32_t x372 = INT32_MAX;
	static volatile int32_t t85 = 1;

    t85 = (x369>(x370<=(x371+x372)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x373 = -1;
	static volatile uint64_t x374 = UINT64_MAX;
	volatile uint32_t x375 = 4U;
	uint8_t x376 = 2U;
	int32_t t86 = 0;

    t86 = (x373>(x374<=(x375+x376)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint8_t x381 = 29U;
	int32_t x382 = INT32_MIN;
	static uint64_t x384 = UINT64_MAX;
	static int32_t t87 = -5665054;

    t87 = (x381>(x382<=(x383+x384)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x386 = INT8_MAX;
	static int16_t x387 = INT16_MAX;
	int32_t x388 = INT32_MIN;

    t88 = (x385>(x386<=(x387+x388)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x389 = INT64_MIN;
	volatile int16_t x390 = INT16_MIN;
	uint8_t x392 = 0U;

    t89 = (x389>(x390<=(x391+x392)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x393 = 3328U;
	int16_t x394 = INT16_MAX;
	int8_t x395 = INT8_MIN;
	uint16_t x396 = 3U;
	static volatile int32_t t90 = 356449;

    t90 = (x393>(x394<=(x395+x396)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x401 = INT8_MIN;
	uint16_t x403 = 180U;
	uint16_t x404 = UINT16_MAX;
	volatile int32_t t91 = 14;

    t91 = (x401>(x402<=(x403+x404)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x409 = INT8_MIN;
	int16_t x410 = INT16_MIN;
	uint16_t x411 = 2089U;
	volatile int16_t x412 = 103;
	int32_t t92 = -164;

    t92 = (x409>(x410<=(x411+x412)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x413 = INT8_MIN;
	static volatile int32_t x414 = INT32_MAX;
	static uint32_t x416 = 595U;
	volatile int32_t t93 = 30457522;

    t93 = (x413>(x414<=(x415+x416)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint8_t x417 = UINT8_MAX;
	int32_t t94 = 484368;

    t94 = (x417>(x418<=(x419+x420)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint64_t x421 = 74251008LLU;
	int16_t x422 = INT16_MIN;
	int16_t x424 = -120;
	volatile int32_t t95 = -8;

    t95 = (x421>(x422<=(x423+x424)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x425 = INT64_MIN;
	volatile uint32_t x426 = UINT32_MAX;
	uint8_t x427 = 0U;
	static int16_t x428 = INT16_MIN;
	int32_t t96 = 67;

    t96 = (x425>(x426<=(x427+x428)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x429 = 2LLU;
	int64_t x430 = INT64_MAX;
	int16_t x432 = 0;

    t97 = (x429>(x430<=(x431+x432)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile uint16_t x433 = UINT16_MAX;
	int16_t x434 = -201;
	int8_t x435 = 1;
	static int8_t x436 = INT8_MIN;

    t98 = (x433>(x434<=(x435+x436)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x437 = INT32_MAX;
	int64_t x438 = INT64_MAX;
	int8_t x439 = INT8_MIN;
	volatile int32_t t99 = 6600;

    t99 = (x437>(x438<=(x439+x440)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x441 = UINT32_MAX;
	int8_t x442 = -14;
	volatile int64_t x443 = 1848312LL;
	int16_t x444 = INT16_MIN;
	volatile int32_t t100 = 57691;

    t100 = (x441>(x442<=(x443+x444)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x445 = 22U;
	int32_t x447 = -25712;
	uint32_t x448 = UINT32_MAX;
	volatile int32_t t101 = -156020;

    t101 = (x445>(x446<=(x447+x448)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x449 = INT32_MIN;
	volatile uint16_t x450 = UINT16_MAX;
	int8_t x451 = INT8_MIN;
	int64_t x452 = -5103786427740971LL;
	volatile int32_t t102 = 36891075;

    t102 = (x449>(x450<=(x451+x452)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x454 = INT16_MIN;
	int16_t x456 = INT16_MAX;

    t103 = (x453>(x454<=(x455+x456)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x459 = -12972169707488LL;
	int16_t x460 = -1;

    t104 = (x457>(x458<=(x459+x460)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x461 = INT32_MIN;
	static uint64_t x462 = 114290761255330LLU;
	volatile int32_t x463 = -902952;

    t105 = (x461>(x462<=(x463+x464)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x466 = INT32_MIN;
	int32_t x467 = -2201;
	int64_t x468 = -1LL;
	int32_t t106 = -16680597;

    t106 = (x465>(x466<=(x467+x468)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x473 = INT32_MAX;
	static volatile int64_t x474 = INT64_MIN;
	int32_t x476 = INT32_MAX;
	int32_t t107 = 9;

    t107 = (x473>(x474<=(x475+x476)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x477 = INT16_MIN;
	volatile int64_t x478 = INT64_MIN;
	static int32_t x479 = INT32_MIN;
	volatile uint64_t x480 = 2620109743170575LLU;
	static int32_t t108 = 1;

    t108 = (x477>(x478<=(x479+x480)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint16_t x481 = 8764U;
	uint8_t x482 = 4U;
	uint32_t x483 = UINT32_MAX;
	int32_t t109 = 127;

    t109 = (x481>(x482<=(x483+x484)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int8_t x485 = 26;
	int32_t x486 = INT32_MAX;
	int64_t x487 = -522689397910980LL;
	static uint8_t x488 = 110U;

    t110 = (x485>(x486<=(x487+x488)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x489 = -6;
	int16_t x491 = INT16_MAX;
	static volatile uint8_t x492 = 38U;
	int32_t t111 = 3629048;

    t111 = (x489>(x490<=(x491+x492)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x493 = 334U;
	uint32_t x494 = 2936265U;
	uint32_t x495 = 0U;
	static volatile uint16_t x496 = UINT16_MAX;
	volatile int32_t t112 = 57;

    t112 = (x493>(x494<=(x495+x496)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x501 = INT16_MIN;
	static int8_t x502 = INT8_MAX;
	uint64_t x503 = 7LLU;
	uint16_t x504 = UINT16_MAX;
	int32_t t113 = -32127836;

    t113 = (x501>(x502<=(x503+x504)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x505 = 53943801;
	int64_t x506 = INT64_MIN;
	uint64_t x507 = 19LLU;
	int8_t x508 = -1;

    t114 = (x505>(x506<=(x507+x508)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x509 = 1194648307U;
	static uint32_t x511 = UINT32_MAX;
	int32_t x512 = -1;
	volatile int32_t t115 = 3829;

    t115 = (x509>(x510<=(x511+x512)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int64_t x514 = 298558268LL;
	int64_t x515 = -1LL;
	int32_t t116 = -3602344;

    t116 = (x513>(x514<=(x515+x516)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x517 = INT16_MIN;
	int8_t x518 = 0;
	uint64_t x519 = UINT64_MAX;
	uint32_t x520 = 7738U;

    t117 = (x517>(x518<=(x519+x520)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x522 = INT32_MIN;
	int8_t x523 = INT8_MIN;
	int32_t x524 = -1;
	static volatile int32_t t118 = -2;

    t118 = (x521>(x522<=(x523+x524)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x525 = INT64_MAX;
	int8_t x526 = INT8_MIN;
	static volatile uint32_t x527 = 38672089U;
	uint64_t x528 = UINT64_MAX;
	int32_t t119 = -818;

    t119 = (x525>(x526<=(x527+x528)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x529 = INT64_MAX;
	static uint64_t x530 = 22991135LLU;
	uint8_t x531 = 0U;
	int8_t x532 = INT8_MIN;
	static int32_t t120 = -114;

    t120 = (x529>(x530<=(x531+x532)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x533 = INT16_MIN;
	volatile int32_t x534 = 40;
	int8_t x535 = INT8_MAX;
	volatile int32_t t121 = 48;

    t121 = (x533>(x534<=(x535+x536)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x538 = 62U;
	int8_t x539 = INT8_MAX;
	int8_t x540 = 17;
	static int32_t t122 = 1740065;

    t122 = (x537>(x538<=(x539+x540)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x541 = 1835;
	volatile int8_t x542 = INT8_MAX;
	uint8_t x543 = UINT8_MAX;
	volatile uint64_t x544 = 509859072LLU;

    t123 = (x541>(x542<=(x543+x544)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x545 = UINT32_MAX;
	int16_t x546 = 2;
	uint64_t x547 = 10497386954LLU;
	static int32_t t124 = 10299110;

    t124 = (x545>(x546<=(x547+x548)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x549 = -1;
	volatile uint32_t x550 = 1831383U;
	uint16_t x551 = UINT16_MAX;
	static int8_t x552 = -1;
	volatile int32_t t125 = -529;

    t125 = (x549>(x550<=(x551+x552)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x554 = INT8_MIN;
	int16_t x555 = INT16_MIN;
	volatile uint32_t x556 = UINT32_MAX;

    t126 = (x553>(x554<=(x555+x556)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x557 = 2075U;
	int64_t x558 = INT64_MIN;
	uint64_t x559 = UINT64_MAX;

    t127 = (x557>(x558<=(x559+x560)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int64_t x562 = 578639487399LL;
	int16_t x564 = -1;
	int32_t t128 = 13;

    t128 = (x561>(x562<=(x563+x564)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x565 = 198180LL;
	int8_t x568 = -19;
	int32_t t129 = -65;

    t129 = (x565>(x566<=(x567+x568)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x569 = INT32_MIN;
	uint32_t x570 = 17U;
	static int64_t x571 = -3816433126310751LL;
	uint32_t x572 = 90533296U;
	volatile int32_t t130 = -980;

    t130 = (x569>(x570<=(x571+x572)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x573 = INT16_MIN;
	static uint8_t x574 = 1U;
	uint32_t x575 = UINT32_MAX;
	volatile int32_t t131 = 51;

    t131 = (x573>(x574<=(x575+x576)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x577 = -1LL;
	int64_t x578 = 196620069663LL;
	int64_t x579 = -39245788LL;
	volatile int32_t t132 = -31785;

    t132 = (x577>(x578<=(x579+x580)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x581 = 0;
	static int32_t x582 = 6046;
	static int16_t x583 = INT16_MIN;
	static uint8_t x584 = 17U;
	int32_t t133 = 247;

    t133 = (x581>(x582<=(x583+x584)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x585 = INT64_MIN;
	volatile uint64_t x586 = 5519045309136270520LLU;
	int32_t t134 = -1556322;

    t134 = (x585>(x586<=(x587+x588)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x594 = UINT32_MAX;
	static volatile int16_t x595 = 20;
	int32_t t135 = -105017;

    t135 = (x593>(x594<=(x595+x596)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint64_t x597 = 13282515724432LLU;
	volatile int8_t x598 = INT8_MIN;
	volatile int32_t x599 = -146022;
	int8_t x600 = -1;
	int32_t t136 = 5156612;

    t136 = (x597>(x598<=(x599+x600)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x601 = -922;
	volatile int64_t x602 = 147094146709LL;
	int8_t x603 = 1;
	static volatile int32_t t137 = 14621911;

    t137 = (x601>(x602<=(x603+x604)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x605 = UINT32_MAX;
	volatile int8_t x606 = -1;
	int64_t x607 = INT64_MAX;
	int64_t x608 = INT64_MIN;
	int32_t t138 = 129277751;

    t138 = (x605>(x606<=(x607+x608)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int8_t x609 = INT8_MIN;
	volatile int16_t x610 = INT16_MIN;
	static uint8_t x611 = 25U;
	volatile int8_t x612 = -1;
	int32_t t139 = -57077;

    t139 = (x609>(x610<=(x611+x612)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x614 = 3U;
	static int32_t x615 = INT32_MIN;
	uint32_t x616 = 0U;

    t140 = (x613>(x614<=(x615+x616)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x617 = 190571670U;
	static int64_t x618 = INT64_MAX;
	uint8_t x619 = 3U;
	int8_t x620 = INT8_MIN;
	int32_t t141 = -1333560;

    t141 = (x617>(x618<=(x619+x620)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x622 = INT8_MAX;
	uint8_t x623 = 4U;
	int32_t x624 = INT32_MIN;
	volatile int32_t t142 = 4870;

    t142 = (x621>(x622<=(x623+x624)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x625 = INT64_MIN;
	int64_t x627 = -1LL;
	int64_t x628 = -1LL;
	volatile int32_t t143 = 575;

    t143 = (x625>(x626<=(x627+x628)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x629 = 15U;
	static int64_t x630 = 1LL;
	uint32_t x632 = 60U;

    t144 = (x629>(x630<=(x631+x632)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x637 = INT32_MAX;
	volatile int8_t x638 = INT8_MAX;
	int64_t x639 = 57821LL;
	volatile int32_t t145 = -11;

    t145 = (x637>(x638<=(x639+x640)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x641 = 1823U;
	int32_t x642 = -1;
	int16_t x643 = -1;
	uint8_t x644 = UINT8_MAX;
	int32_t t146 = -3555770;

    t146 = (x641>(x642<=(x643+x644)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x645 = 1;
	static volatile int8_t x646 = INT8_MAX;
	int16_t x647 = 11581;
	int32_t x648 = -165282;
	volatile int32_t t147 = -119;

    t147 = (x645>(x646<=(x647+x648)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x649 = INT8_MIN;
	static uint32_t x650 = 170U;
	int16_t x651 = -1;
	static int64_t x652 = -1LL;

    t148 = (x649>(x650<=(x651+x652)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x653 = INT16_MAX;
	int64_t x654 = -1LL;
	static int16_t x655 = INT16_MIN;
	volatile int32_t t149 = -16218;

    t149 = (x653>(x654<=(x655+x656)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x657 = INT16_MAX;
	int8_t x658 = -1;
	int32_t x659 = 402;
	uint64_t x660 = UINT64_MAX;
	static int32_t t150 = 2073337;

    t150 = (x657>(x658<=(x659+x660)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x661 = UINT16_MAX;
	volatile int64_t x662 = INT64_MAX;
	static int16_t x663 = INT16_MIN;
	volatile int32_t t151 = -79340071;

    t151 = (x661>(x662<=(x663+x664)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint64_t x665 = 25698995121LLU;
	int16_t x666 = -54;
	static uint32_t x667 = 511329U;
	int8_t x668 = INT8_MAX;
	int32_t t152 = 7349305;

    t152 = (x665>(x666<=(x667+x668)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x669 = -1;
	uint64_t x670 = 55636256683LLU;
	static volatile int64_t x671 = 144252690420LL;
	int32_t t153 = -61;

    t153 = (x669>(x670<=(x671+x672)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x673 = -1;
	int32_t x674 = INT32_MIN;
	int64_t x675 = INT64_MIN;
	uint16_t x676 = 1U;
	static volatile int32_t t154 = 1;

    t154 = (x673>(x674<=(x675+x676)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x678 = -1LL;
	static int64_t x679 = -35138708785459LL;
	int64_t x680 = 90043747328218LL;
	volatile int32_t t155 = 5407;

    t155 = (x677>(x678<=(x679+x680)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x681 = INT8_MIN;
	int64_t x682 = INT64_MIN;
	int64_t x683 = INT64_MIN;
	uint32_t x684 = UINT32_MAX;
	static int32_t t156 = 1;

    t156 = (x681>(x682<=(x683+x684)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x686 = -14915;
	static int64_t x688 = INT64_MIN;
	int32_t t157 = 24400855;

    t157 = (x685>(x686<=(x687+x688)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x690 = 250711770566330LLU;
	static int64_t x691 = -217413279385LL;
	int64_t x692 = 80LL;
	int32_t t158 = 9099543;

    t158 = (x689>(x690<=(x691+x692)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x693 = -1LL;
	uint64_t x695 = 624583419203LLU;
	int16_t x696 = -1;

    t159 = (x693>(x694<=(x695+x696)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x697 = 36054224624469LL;
	static int16_t x698 = 492;
	int32_t x699 = INT32_MIN;
	static volatile uint32_t x700 = 12442U;

    t160 = (x697>(x698<=(x699+x700)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint16_t x701 = 120U;
	static volatile uint32_t x702 = UINT32_MAX;
	uint8_t x703 = 11U;
	int32_t t161 = 27;

    t161 = (x701>(x702<=(x703+x704)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x705 = UINT8_MAX;
	int64_t x706 = INT64_MIN;
	static uint8_t x707 = UINT8_MAX;
	volatile int32_t t162 = -3895;

    t162 = (x705>(x706<=(x707+x708)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x712 = UINT8_MAX;
	volatile int32_t t163 = -1775892;

    t163 = (x709>(x710<=(x711+x712)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x717 = INT32_MIN;
	volatile uint64_t x718 = UINT64_MAX;
	uint32_t x719 = UINT32_MAX;
	int64_t x720 = -1LL;
	int32_t t164 = -5;

    t164 = (x717>(x718<=(x719+x720)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x721 = -1LL;
	static int8_t x722 = INT8_MAX;
	int32_t x723 = -280;
	volatile int32_t t165 = 116745;

    t165 = (x721>(x722<=(x723+x724)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x725 = INT8_MAX;
	int64_t x726 = 48595839841LL;
	int8_t x728 = -17;
	int32_t t166 = -814666;

    t166 = (x725>(x726<=(x727+x728)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x733 = 144U;
	uint16_t x734 = UINT16_MAX;
	volatile int16_t x735 = -297;

    t167 = (x733>(x734<=(x735+x736)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x737 = -1;
	uint16_t x738 = UINT16_MAX;
	int8_t x739 = INT8_MIN;
	int32_t t168 = -30460252;

    t168 = (x737>(x738<=(x739+x740)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x741 = 6164370364LL;
	uint32_t x742 = 660U;
	int32_t x743 = -1;
	int32_t t169 = 6;

    t169 = (x741>(x742<=(x743+x744)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x746 = INT32_MIN;
	int64_t x747 = INT64_MAX;
	uint16_t x748 = 0U;

    t170 = (x745>(x746<=(x747+x748)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x750 = UINT64_MAX;
	int32_t x751 = 50059617;
	static volatile int32_t t171 = 1621;

    t171 = (x749>(x750<=(x751+x752)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x753 = 1175526U;
	uint64_t x754 = 2475543792LLU;
	int8_t x755 = INT8_MIN;
	volatile int16_t x756 = -1;
	volatile int32_t t172 = 58334283;

    t172 = (x753>(x754<=(x755+x756)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x765 = INT16_MIN;
	uint32_t x766 = 365U;
	static int64_t x767 = -4177LL;
	int32_t t173 = -2996411;

    t173 = (x765>(x766<=(x767+x768)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x769 = -372940;
	uint8_t x770 = UINT8_MAX;
	static uint8_t x771 = 41U;
	volatile int32_t x772 = INT32_MIN;
	int32_t t174 = -1832947;

    t174 = (x769>(x770<=(x771+x772)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x773 = -19;
	int64_t x775 = INT64_MIN;
	uint8_t x776 = UINT8_MAX;
	volatile int32_t t175 = 10;

    t175 = (x773>(x774<=(x775+x776)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x781 = 48952326104815LLU;
	volatile int32_t x782 = 7644;
	static int16_t x783 = 7086;
	int8_t x784 = INT8_MIN;
	volatile int32_t t176 = 3;

    t176 = (x781>(x782<=(x783+x784)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x786 = 5U;
	int16_t x787 = INT16_MIN;
	uint64_t x788 = UINT64_MAX;
	int32_t t177 = 74;

    t177 = (x785>(x786<=(x787+x788)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x790 = -1;
	uint16_t x791 = 1573U;
	int16_t x792 = INT16_MAX;
	static int32_t t178 = -2434;

    t178 = (x789>(x790<=(x791+x792)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x793 = INT8_MIN;
	int8_t x794 = INT8_MIN;

    t179 = (x793>(x794<=(x795+x796)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint64_t x797 = 16763922480LLU;
	int16_t x798 = 11808;
	int16_t x799 = INT16_MIN;
	int8_t x800 = INT8_MIN;
	int32_t t180 = -379;

    t180 = (x797>(x798<=(x799+x800)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x802 = INT16_MIN;
	int8_t x803 = 1;
	uint64_t x804 = 1LLU;

    t181 = (x801>(x802<=(x803+x804)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x806 = INT64_MIN;
	static volatile int8_t x807 = 1;
	int16_t x808 = INT16_MIN;
	static volatile int32_t t182 = 3546755;

    t182 = (x805>(x806<=(x807+x808)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x809 = 1U;
	volatile int64_t x810 = INT64_MAX;
	static uint8_t x811 = UINT8_MAX;
	static int64_t x812 = -12207910243108LL;
	volatile int32_t t183 = -185;

    t183 = (x809>(x810<=(x811+x812)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x813 = UINT8_MAX;
	int32_t x814 = -25464;
	static uint8_t x816 = 1U;

    t184 = (x813>(x814<=(x815+x816)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x821 = -1;
	int16_t x822 = INT16_MIN;
	int16_t x823 = INT16_MAX;
	volatile int16_t x824 = INT16_MAX;
	int32_t t185 = 0;

    t185 = (x821>(x822<=(x823+x824)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x825 = -1;
	int16_t x826 = -1;
	int16_t x827 = -1;
	volatile uint8_t x828 = UINT8_MAX;

    t186 = (x825>(x826<=(x827+x828)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x829 = -12;
	static uint64_t x831 = 147348897LLU;
	int8_t x832 = -1;
	int32_t t187 = -458358235;

    t187 = (x829>(x830<=(x831+x832)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x833 = -1;
	int16_t x835 = INT16_MAX;
	int16_t x836 = INT16_MAX;
	int32_t t188 = 113276745;

    t188 = (x833>(x834<=(x835+x836)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x837 = INT16_MIN;
	static int64_t x838 = 5385537481501LL;
	int32_t x839 = -1;
	volatile uint8_t x840 = UINT8_MAX;
	volatile int32_t t189 = -26;

    t189 = (x837>(x838<=(x839+x840)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x841 = -2983946LL;
	int32_t x843 = INT32_MAX;
	int8_t x844 = -1;
	int32_t t190 = 694796523;

    t190 = (x841>(x842<=(x843+x844)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x845 = 12U;
	static volatile uint64_t x846 = UINT64_MAX;
	uint64_t x847 = UINT64_MAX;
	uint8_t x848 = 1U;
	int32_t t191 = -21478;

    t191 = (x845>(x846<=(x847+x848)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x849 = 43978484U;
	int8_t x850 = 17;
	int16_t x851 = INT16_MAX;
	volatile int32_t t192 = 186;

    t192 = (x849>(x850<=(x851+x852)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint32_t x854 = 56096080U;
	volatile int8_t x856 = 9;
	volatile int32_t t193 = -6137;

    t193 = (x853>(x854<=(x855+x856)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x857 = INT8_MIN;
	static volatile uint8_t x858 = 4U;
	int64_t x859 = INT64_MIN;
	volatile int32_t t194 = -46945633;

    t194 = (x857>(x858<=(x859+x860)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x861 = -17;
	volatile uint8_t x862 = UINT8_MAX;
	int32_t x863 = -1;
	volatile int32_t t195 = -1011109648;

    t195 = (x861>(x862<=(x863+x864)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x865 = UINT16_MAX;
	int8_t x866 = -1;
	static uint32_t x867 = 68501741U;
	static int8_t x868 = -10;
	volatile int32_t t196 = -42;

    t196 = (x865>(x866<=(x867+x868)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x874 = INT16_MIN;
	uint64_t x875 = 258419017068LLU;
	uint8_t x876 = UINT8_MAX;

    t197 = (x873>(x874<=(x875+x876)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x882 = INT32_MIN;
	uint16_t x883 = UINT16_MAX;
	int32_t x884 = -1;

    t198 = (x881>(x882<=(x883+x884)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x893 = INT8_MIN;
	volatile uint64_t x895 = 3LLU;
	volatile uint64_t x896 = 11814305132262821LLU;
	static volatile int32_t t199 = -82621582;

    t199 = (x893>(x894<=(x895+x896)));

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

