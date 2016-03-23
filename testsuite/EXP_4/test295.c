
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

static volatile int16_t x1 = -2;
int8_t x5 = INT8_MAX;
int64_t x14 = INT64_MIN;
volatile int64_t t6 = INT64_MIN;
volatile int32_t t7 = -2;
int16_t x47 = 102;
volatile uint32_t x52 = 2U;
uint32_t t10 = 1U;
int64_t x53 = INT64_MAX;
static volatile int64_t x63 = 19710663395141194LL;
volatile uint16_t x67 = UINT16_MAX;
uint64_t t15 = 24LLU;
volatile int16_t x74 = 31;
static uint64_t x75 = 6421950321LLU;
volatile int32_t x82 = 71086;
int8_t x85 = INT8_MIN;
static uint8_t x96 = 6U;
uint16_t x99 = UINT16_MAX;
static uint32_t x101 = 24U;
uint8_t x103 = UINT8_MAX;
uint64_t x107 = 165LLU;
static int8_t x118 = INT8_MIN;
int64_t t28 = INT64_MIN;
uint8_t x129 = 18U;
int8_t x131 = INT8_MIN;
volatile int8_t x133 = INT8_MIN;
int32_t x142 = INT32_MIN;
static int16_t x150 = 6510;
int32_t x152 = -5679206;
volatile int64_t t36 = INT64_MAX;
static int16_t x164 = -47;
uint8_t x174 = 1U;
int32_t x178 = -14;
volatile int64_t x182 = -590359LL;
int64_t x185 = INT64_MIN;
volatile int16_t x190 = INT16_MAX;
volatile uint8_t x197 = 30U;
uint16_t x207 = 8U;
volatile int32_t t47 = 333;
uint16_t x214 = 105U;
volatile uint8_t x231 = 7U;
int64_t x233 = -8287812992722LL;
uint16_t x238 = 61U;
static int16_t x244 = INT16_MIN;
volatile int8_t x264 = -1;
int16_t x267 = -9485;
int32_t x272 = -1;
int16_t x278 = INT16_MAX;
uint8_t x283 = 3U;
volatile uint8_t x287 = 0U;
uint32_t x298 = 246U;
volatile int8_t x304 = INT8_MIN;
int16_t x305 = 3811;
int64_t x308 = -1LL;
int32_t x314 = -127510151;
int32_t t69 = -13151830;
int64_t x321 = -1LL;
static int64_t x328 = -2037002LL;
volatile int64_t x335 = -1010LL;
uint16_t x336 = 2200U;
int64_t t73 = 4034504944753LL;
int32_t x340 = INT32_MIN;
volatile uint64_t x343 = UINT64_MAX;
volatile int32_t t76 = INT32_MAX;
volatile int32_t t77 = 25064406;
int8_t x363 = INT8_MAX;
static volatile int32_t t80 = INT32_MIN;
volatile uint16_t x389 = 30437U;
int16_t x395 = -3422;
volatile int32_t t82 = INT32_MIN;
static int32_t x402 = INT32_MIN;
uint8_t x406 = UINT8_MAX;
int16_t x407 = -1;
int16_t x409 = INT16_MIN;
static int32_t t85 = 63491;
int32_t x413 = INT32_MIN;
int64_t t88 = 240952737942140LL;
int8_t x434 = INT8_MAX;
static volatile uint16_t x435 = 24260U;
int8_t x436 = -1;
uint32_t x447 = 13391U;
int8_t x452 = INT8_MIN;
volatile int8_t x459 = INT8_MIN;
int32_t x460 = -13137412;
volatile int32_t t97 = 0;
static volatile uint8_t x469 = 45U;
volatile int32_t t98 = -57;
volatile uint64_t x475 = 153310182665164LLU;
int32_t t99 = INT32_MIN;
int64_t x484 = -1LL;
int16_t x486 = INT16_MAX;
uint64_t x508 = UINT64_MAX;
static uint64_t x513 = UINT64_MAX;
int32_t t110 = -38964139;
volatile int32_t x524 = INT32_MAX;
static uint16_t x531 = 5225U;
int32_t t113 = -43560672;
uint64_t x536 = 839857069LLU;
volatile int64_t x542 = -1LL;
uint16_t x543 = UINT16_MAX;
volatile uint64_t x547 = 73303748824412LLU;
uint32_t x558 = 305U;
static volatile int32_t t123 = -1;
static int32_t x582 = INT32_MIN;
volatile int64_t x584 = -1LL;
uint64_t x589 = 104074365536289LLU;
volatile uint32_t x592 = 251U;
int64_t x593 = INT64_MAX;
uint8_t x599 = UINT8_MAX;
static volatile int64_t t130 = 19510918115LL;
int8_t x613 = INT8_MIN;
static uint8_t x615 = 1U;
uint32_t t132 = 146961733U;
volatile uint64_t x630 = 446741676882592LLU;
uint64_t x633 = UINT64_MAX;
uint64_t t136 = UINT64_MAX;
uint8_t x640 = 48U;
static volatile int32_t t137 = -3419;
uint8_t x641 = 0U;
int8_t x642 = INT8_MIN;
int8_t x645 = INT8_MIN;
static uint32_t x654 = 6540U;
int8_t x656 = INT8_MIN;
volatile int64_t x658 = INT64_MAX;
uint32_t x661 = 46590743U;
static volatile int16_t x662 = INT16_MIN;
int32_t x664 = -1697587;
uint32_t t143 = 479827U;
int32_t x666 = INT32_MAX;
int8_t x668 = -1;
int16_t x671 = -25;
volatile uint8_t x676 = UINT8_MAX;
int64_t x689 = -3249319446850LL;
static int16_t x690 = 1241;
static int16_t x695 = -18;
uint8_t x706 = UINT8_MAX;
int32_t t154 = -24;
uint8_t x719 = 1U;
uint64_t x726 = 238765368491720LLU;
uint16_t x733 = 1U;
uint16_t x759 = 2952U;
static int16_t x765 = INT16_MIN;
int8_t x768 = 2;
int64_t x769 = INT64_MAX;
int8_t x771 = INT8_MAX;
static int32_t t168 = INT32_MAX;
volatile int16_t x780 = INT16_MIN;
volatile int32_t t170 = -536718993;
int32_t t172 = INT32_MAX;
uint64_t x793 = 6568LLU;
int16_t x797 = -1;
static int64_t x798 = INT64_MIN;
int16_t x804 = INT16_MIN;
uint16_t x806 = UINT16_MAX;
int8_t x808 = INT8_MAX;
int64_t x816 = INT64_MIN;
volatile int32_t t178 = -176680;
int8_t x827 = INT8_MAX;
int8_t x834 = -1;
int16_t x837 = INT16_MIN;
uint8_t x842 = UINT8_MAX;
int64_t x845 = INT64_MIN;
uint8_t x849 = UINT8_MAX;
int32_t t187 = -113515610;
int64_t x853 = INT64_MIN;
volatile int16_t x856 = INT16_MIN;
int16_t x864 = INT16_MIN;
volatile uint16_t x865 = 621U;
volatile int32_t x871 = INT32_MIN;
int16_t x874 = -9318;
int16_t x875 = 1;
volatile uint64_t x878 = UINT64_MAX;
volatile int32_t t195 = 38587;
volatile int32_t x887 = 0;
uint32_t x888 = UINT32_MAX;
static volatile int32_t t196 = -7426;


void f0(void) {
    	volatile int64_t x2 = -1LL;
	int16_t x3 = INT16_MIN;
	int8_t x4 = INT8_MAX;
	static volatile int32_t t0 = -76191929;

    t0 = (x1+(x2==(x3-x4)));

    if (t0 != -2) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x6 = INT8_MIN;
	int64_t x7 = -1LL;
	int16_t x8 = -1;
	volatile int32_t t1 = 1;

    t1 = (x5+(x6==(x7-x8)));

    if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x13 = 1107724598557LL;
	static int16_t x15 = INT16_MIN;
	uint8_t x16 = 0U;
	volatile int64_t t2 = 0LL;

    t2 = (x13+(x14==(x15-x16)));

    if (t2 != 1107724598557LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x17 = INT16_MAX;
	volatile int32_t x18 = INT32_MIN;
	int8_t x19 = INT8_MAX;
	static int8_t x20 = -1;
	int32_t t3 = 236;

    t3 = (x17+(x18==(x19-x20)));

    if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x21 = INT64_MAX;
	volatile int16_t x22 = INT16_MIN;
	int16_t x23 = INT16_MAX;
	volatile int64_t x24 = INT64_MAX;
	volatile int64_t t4 = INT64_MAX;

    t4 = (x21+(x22==(x23-x24)));

    if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = INT32_MAX;
	int16_t x26 = INT16_MIN;
	static uint16_t x27 = 1174U;
	int8_t x28 = INT8_MIN;
	int32_t t5 = INT32_MAX;

    t5 = (x25+(x26==(x27-x28)));

    if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x29 = INT64_MIN;
	int32_t x30 = 28;
	uint16_t x31 = UINT16_MAX;
	int16_t x32 = -11;

    t6 = (x29+(x30==(x31-x32)));

    if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x37 = 0U;
	int16_t x38 = INT16_MIN;
	int32_t x39 = -1;
	static uint64_t x40 = UINT64_MAX;

    t7 = (x37+(x38==(x39-x40)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x41 = UINT8_MAX;
	uint8_t x42 = 10U;
	int32_t x43 = 505934616;
	int64_t x44 = -33341739LL;
	volatile int32_t t8 = -3671395;

    t8 = (x41+(x42==(x43-x44)));

    if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x45 = -10715LL;
	int64_t x46 = INT64_MIN;
	uint16_t x48 = 18U;
	int64_t t9 = 172812198678LL;

    t9 = (x45+(x46==(x47-x48)));

    if (t9 != -10715LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x49 = 27899675U;
	int8_t x50 = INT8_MAX;
	static volatile int8_t x51 = INT8_MIN;

    t10 = (x49+(x50==(x51-x52)));

    if (t10 != 27899675U) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x54 = 3403;
	volatile uint16_t x55 = 1852U;
	uint64_t x56 = UINT64_MAX;
	int64_t t11 = INT64_MAX;

    t11 = (x53+(x54==(x55-x56)));

    if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x57 = -1LL;
	int16_t x58 = -6;
	int8_t x59 = -6;
	int16_t x60 = INT16_MIN;
	int64_t t12 = -1624218363356LL;

    t12 = (x57+(x58==(x59-x60)));

    if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x61 = -1;
	int16_t x62 = INT16_MAX;
	int8_t x64 = -1;
	int32_t t13 = 413385;

    t13 = (x61+(x62==(x63-x64)));

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x65 = 637;
	int16_t x66 = 0;
	volatile uint64_t x68 = UINT64_MAX;
	volatile int32_t t14 = -29891;

    t14 = (x65+(x66==(x67-x68)));

    if (t14 != 637) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x69 = 46867622LLU;
	volatile int32_t x70 = INT32_MIN;
	static volatile int16_t x71 = INT16_MIN;
	uint64_t x72 = 228643LLU;

    t15 = (x69+(x70==(x71-x72)));

    if (t15 != 46867622LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x73 = 9;
	volatile uint8_t x76 = UINT8_MAX;
	int32_t t16 = -1652;

    t16 = (x73+(x74==(x75-x76)));

    if (t16 != 9) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x77 = INT8_MAX;
	uint32_t x78 = 22U;
	static int16_t x79 = 1;
	int8_t x80 = INT8_MIN;
	volatile int32_t t17 = -3;

    t17 = (x77+(x78==(x79-x80)));

    if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x81 = 2753U;
	int64_t x83 = INT64_MIN;
	int64_t x84 = INT64_MIN;
	volatile int32_t t18 = -14133160;

    t18 = (x81+(x82==(x83-x84)));

    if (t18 != 2753) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x86 = -181427018LL;
	int64_t x87 = -1LL;
	uint8_t x88 = UINT8_MAX;
	int32_t t19 = -27388640;

    t19 = (x85+(x86==(x87-x88)));

    if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x89 = INT8_MIN;
	uint8_t x90 = 10U;
	int16_t x91 = INT16_MAX;
	int16_t x92 = INT16_MAX;
	int32_t t20 = -5423472;

    t20 = (x89+(x90==(x91-x92)));

    if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x93 = 0U;
	int8_t x94 = -1;
	volatile int32_t x95 = -1;
	uint32_t t21 = 14677540U;

    t21 = (x93+(x94==(x95-x96)));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x97 = INT8_MIN;
	uint32_t x98 = 5U;
	static int32_t x100 = -3726;
	volatile int32_t t22 = 7190235;

    t22 = (x97+(x98==(x99-x100)));

    if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x102 = 1890314908454152181LLU;
	int8_t x104 = -1;
	volatile uint32_t t23 = 213496677U;

    t23 = (x101+(x102==(x103-x104)));

    if (t23 != 24U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x105 = 35092902U;
	int32_t x106 = -1;
	uint16_t x108 = 13U;
	uint32_t t24 = 6U;

    t24 = (x105+(x106==(x107-x108)));

    if (t24 != 35092902U) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint8_t x109 = 115U;
	uint64_t x110 = 12477868LLU;
	uint32_t x111 = UINT32_MAX;
	static volatile int32_t x112 = -1;
	int32_t t25 = -14553665;

    t25 = (x109+(x110==(x111-x112)));

    if (t25 != 115) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x113 = -1LL;
	uint8_t x114 = 3U;
	uint64_t x115 = 996615LLU;
	int32_t x116 = -1;
	volatile int64_t t26 = 301LL;

    t26 = (x113+(x114==(x115-x116)));

    if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x117 = INT64_MAX;
	int64_t x119 = -1LL;
	uint32_t x120 = 807U;
	int64_t t27 = INT64_MAX;

    t27 = (x117+(x118==(x119-x120)));

    if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x121 = INT64_MIN;
	static volatile uint8_t x122 = 0U;
	uint8_t x123 = 2U;
	uint64_t x124 = 111232374814474544LLU;

    t28 = (x121+(x122==(x123-x124)));

    if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x130 = INT64_MIN;
	int32_t x132 = INT32_MIN;
	static int32_t t29 = 29;

    t29 = (x129+(x130==(x131-x132)));

    if (t29 != 18) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x134 = INT8_MIN;
	uint32_t x135 = 4296U;
	uint64_t x136 = 3LLU;
	int32_t t30 = 6549720;

    t30 = (x133+(x134==(x135-x136)));

    if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x137 = 7414U;
	static int16_t x138 = INT16_MIN;
	uint64_t x139 = 3512765LLU;
	int16_t x140 = 3;
	int32_t t31 = -11;

    t31 = (x137+(x138==(x139-x140)));

    if (t31 != 7414) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x141 = INT16_MIN;
	int16_t x143 = INT16_MIN;
	static uint16_t x144 = 5U;
	volatile int32_t t32 = -669318;

    t32 = (x141+(x142==(x143-x144)));

    if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x145 = -1;
	int8_t x146 = -1;
	int8_t x147 = INT8_MIN;
	static uint8_t x148 = 1U;
	int32_t t33 = 1863490;

    t33 = (x145+(x146==(x147-x148)));

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x149 = -4229322;
	int32_t x151 = INT32_MIN;
	int32_t t34 = -4000064;

    t34 = (x149+(x150==(x151-x152)));

    if (t34 != -4229322) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x153 = INT64_MIN;
	int64_t x154 = INT64_MAX;
	int32_t x155 = -1;
	uint16_t x156 = 10U;
	volatile int64_t t35 = INT64_MIN;

    t35 = (x153+(x154==(x155-x156)));

    if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x157 = INT64_MAX;
	volatile uint16_t x158 = UINT16_MAX;
	int32_t x159 = -1;
	static int32_t x160 = INT32_MIN;

    t36 = (x157+(x158==(x159-x160)));

    if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x161 = 5U;
	volatile int64_t x162 = INT64_MIN;
	volatile int16_t x163 = INT16_MIN;
	volatile int32_t t37 = -4014;

    t37 = (x161+(x162==(x163-x164)));

    if (t37 != 5) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x165 = INT8_MAX;
	int32_t x166 = INT32_MIN;
	uint16_t x167 = UINT16_MAX;
	uint64_t x168 = UINT64_MAX;
	static volatile int32_t t38 = 229;

    t38 = (x165+(x166==(x167-x168)));

    if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x169 = UINT32_MAX;
	volatile int16_t x170 = 1;
	int16_t x171 = INT16_MIN;
	volatile int16_t x172 = INT16_MIN;
	uint32_t t39 = UINT32_MAX;

    t39 = (x169+(x170==(x171-x172)));

    if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x173 = 12867172868453800LLU;
	volatile int16_t x175 = INT16_MAX;
	int64_t x176 = INT64_MAX;
	uint64_t t40 = 12505LLU;

    t40 = (x173+(x174==(x175-x176)));

    if (t40 != 12867172868453800LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x177 = UINT64_MAX;
	int8_t x179 = INT8_MIN;
	int32_t x180 = INT32_MIN;
	uint64_t t41 = UINT64_MAX;

    t41 = (x177+(x178==(x179-x180)));

    if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x181 = 3947LLU;
	int32_t x183 = -420;
	volatile int8_t x184 = INT8_MAX;
	volatile uint64_t t42 = 110717LLU;

    t42 = (x181+(x182==(x183-x184)));

    if (t42 != 3947LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile uint16_t x186 = 7279U;
	static int64_t x187 = INT64_MAX;
	static int16_t x188 = 240;
	volatile int64_t t43 = INT64_MIN;

    t43 = (x185+(x186==(x187-x188)));

    if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x189 = INT8_MIN;
	volatile int64_t x191 = 4750237LL;
	int16_t x192 = INT16_MIN;
	static int32_t t44 = 452839;

    t44 = (x189+(x190==(x191-x192)));

    if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x198 = UINT32_MAX;
	int16_t x199 = 3;
	uint64_t x200 = 110639176LLU;
	volatile int32_t t45 = 44636;

    t45 = (x197+(x198==(x199-x200)));

    if (t45 != 30) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int64_t x201 = -1LL;
	static int32_t x202 = -1;
	int32_t x203 = -1;
	int16_t x204 = INT16_MIN;
	int64_t t46 = -319306927227430101LL;

    t46 = (x201+(x202==(x203-x204)));

    if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x205 = UINT16_MAX;
	static int32_t x206 = INT32_MAX;
	static uint16_t x208 = UINT16_MAX;

    t47 = (x205+(x206==(x207-x208)));

    if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x209 = 8U;
	int16_t x210 = INT16_MAX;
	int32_t x211 = -28246701;
	volatile uint8_t x212 = 112U;
	int32_t t48 = -1;

    t48 = (x209+(x210==(x211-x212)));

    if (t48 != 8) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x213 = INT64_MIN;
	uint16_t x215 = 7845U;
	volatile int32_t x216 = -2420418;
	int64_t t49 = INT64_MIN;

    t49 = (x213+(x214==(x215-x216)));

    if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x221 = INT32_MIN;
	int8_t x222 = INT8_MAX;
	int64_t x223 = 4678833277669LL;
	volatile int64_t x224 = -2342549834949100714LL;
	static int32_t t50 = INT32_MIN;

    t50 = (x221+(x222==(x223-x224)));

    if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x225 = -1;
	uint16_t x226 = 90U;
	uint8_t x227 = UINT8_MAX;
	uint16_t x228 = 4623U;
	int32_t t51 = -6394;

    t51 = (x225+(x226==(x227-x228)));

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x229 = -1LL;
	volatile int32_t x230 = -238700;
	volatile uint16_t x232 = UINT16_MAX;
	volatile int64_t t52 = -1406LL;

    t52 = (x229+(x230==(x231-x232)));

    if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x234 = 124U;
	int16_t x235 = -2;
	uint16_t x236 = 1U;
	volatile int64_t t53 = 4157773LL;

    t53 = (x233+(x234==(x235-x236)));

    if (t53 != -8287812992722LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x237 = UINT16_MAX;
	int8_t x239 = INT8_MIN;
	uint64_t x240 = 3957384110564302231LLU;
	volatile int32_t t54 = -38712002;

    t54 = (x237+(x238==(x239-x240)));

    if (t54 != 65535) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x241 = INT8_MAX;
	int64_t x242 = -119649LL;
	uint16_t x243 = 3U;
	int32_t t55 = -38848;

    t55 = (x241+(x242==(x243-x244)));

    if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x249 = 3953U;
	static int32_t x250 = INT32_MAX;
	volatile int8_t x251 = -1;
	static int64_t x252 = -2096496524830335782LL;
	int32_t t56 = -141815;

    t56 = (x249+(x250==(x251-x252)));

    if (t56 != 3953) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x257 = -1;
	static uint32_t x258 = UINT32_MAX;
	int64_t x259 = INT64_MIN;
	uint8_t x260 = 0U;
	static volatile int32_t t57 = 15575001;

    t57 = (x257+(x258==(x259-x260)));

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x261 = INT32_MIN;
	uint8_t x262 = 1U;
	int8_t x263 = 0;
	volatile int32_t t58 = -3;

    t58 = (x261+(x262==(x263-x264)));

    if (t58 != -2147483647) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x265 = INT32_MIN;
	int8_t x266 = INT8_MIN;
	int32_t x268 = INT32_MIN;
	volatile int32_t t59 = INT32_MIN;

    t59 = (x265+(x266==(x267-x268)));

    if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x269 = -1;
	volatile int16_t x270 = INT16_MIN;
	static int64_t x271 = INT64_MIN;
	static volatile int32_t t60 = -7518836;

    t60 = (x269+(x270==(x271-x272)));

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x273 = 3261636;
	static uint16_t x274 = UINT16_MAX;
	int64_t x275 = INT64_MIN;
	int32_t x276 = -1;
	static volatile int32_t t61 = 2817908;

    t61 = (x273+(x274==(x275-x276)));

    if (t61 != 3261636) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x277 = -1;
	volatile uint8_t x279 = 94U;
	int8_t x280 = INT8_MAX;
	volatile int32_t t62 = -87075;

    t62 = (x277+(x278==(x279-x280)));

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int16_t x281 = INT16_MAX;
	uint8_t x282 = 8U;
	int8_t x284 = -1;
	int32_t t63 = 12857;

    t63 = (x281+(x282==(x283-x284)));

    if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x285 = 3119587251408878938LLU;
	static uint8_t x286 = UINT8_MAX;
	uint16_t x288 = 120U;
	static uint64_t t64 = 63867LLU;

    t64 = (x285+(x286==(x287-x288)));

    if (t64 != 3119587251408878938LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x297 = 558318U;
	uint64_t x299 = 2LLU;
	uint16_t x300 = UINT16_MAX;
	uint32_t t65 = 90U;

    t65 = (x297+(x298==(x299-x300)));

    if (t65 != 558318U) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x301 = INT16_MIN;
	uint16_t x302 = UINT16_MAX;
	static uint8_t x303 = 0U;
	volatile int32_t t66 = -247;

    t66 = (x301+(x302==(x303-x304)));

    if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x306 = UINT64_MAX;
	int32_t x307 = 86;
	static volatile int32_t t67 = -6022;

    t67 = (x305+(x306==(x307-x308)));

    if (t67 != 3811) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x309 = 9;
	uint16_t x310 = 0U;
	static int16_t x311 = INT16_MIN;
	uint32_t x312 = 45410909U;
	int32_t t68 = 1737;

    t68 = (x309+(x310==(x311-x312)));

    if (t68 != 9) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x313 = 1;
	volatile int8_t x315 = -1;
	int16_t x316 = -360;

    t69 = (x313+(x314==(x315-x316)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x322 = 4U;
	volatile int8_t x323 = -29;
	int64_t x324 = 500LL;
	int64_t t70 = 0LL;

    t70 = (x321+(x322==(x323-x324)));

    if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x325 = INT64_MIN;
	uint64_t x326 = UINT64_MAX;
	uint64_t x327 = 26261481973594477LLU;
	volatile int64_t t71 = INT64_MIN;

    t71 = (x325+(x326==(x327-x328)));

    if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x329 = UINT8_MAX;
	int8_t x330 = INT8_MAX;
	volatile int8_t x331 = -27;
	volatile int32_t x332 = INT32_MIN;
	int32_t t72 = -2625016;

    t72 = (x329+(x330==(x331-x332)));

    if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x333 = -651639058287613962LL;
	int8_t x334 = INT8_MIN;

    t73 = (x333+(x334==(x335-x336)));

    if (t73 != -651639058287613962LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x337 = INT16_MAX;
	int16_t x338 = INT16_MIN;
	int32_t x339 = -28375;
	volatile int32_t t74 = 445956605;

    t74 = (x337+(x338==(x339-x340)));

    if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x341 = UINT16_MAX;
	int16_t x342 = -1083;
	int8_t x344 = INT8_MIN;
	volatile int32_t t75 = 103944;

    t75 = (x341+(x342==(x343-x344)));

    if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x345 = INT32_MAX;
	volatile uint32_t x346 = 70584U;
	uint16_t x347 = 75U;
	uint64_t x348 = UINT64_MAX;

    t76 = (x345+(x346==(x347-x348)));

    if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x353 = 24277179;
	int32_t x354 = INT32_MIN;
	int16_t x355 = -1;
	int16_t x356 = -200;

    t77 = (x353+(x354==(x355-x356)));

    if (t77 != 24277179) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x361 = INT16_MIN;
	volatile int16_t x362 = INT16_MIN;
	static volatile int8_t x364 = INT8_MIN;
	int32_t t78 = 0;

    t78 = (x361+(x362==(x363-x364)));

    if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x381 = -1;
	int64_t x382 = INT64_MAX;
	volatile int8_t x383 = INT8_MIN;
	uint8_t x384 = 12U;
	int32_t t79 = -1089109;

    t79 = (x381+(x382==(x383-x384)));

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x385 = INT32_MIN;
	int16_t x386 = -758;
	static int16_t x387 = INT16_MAX;
	uint32_t x388 = 6290265U;

    t80 = (x385+(x386==(x387-x388)));

    if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x390 = UINT16_MAX;
	int64_t x391 = 130567217LL;
	static uint64_t x392 = 34LLU;
	int32_t t81 = 1492009;

    t81 = (x389+(x390==(x391-x392)));

    if (t81 != 30437) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x393 = INT32_MIN;
	int32_t x394 = INT32_MIN;
	volatile int64_t x396 = 1287577LL;

    t82 = (x393+(x394==(x395-x396)));

    if (t82 != INT32_MIN) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x401 = INT8_MIN;
	int16_t x403 = -1;
	int8_t x404 = -3;
	volatile int32_t t83 = -20553088;

    t83 = (x401+(x402==(x403-x404)));

    if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int32_t x405 = 0;
	int64_t x408 = -278400183544177106LL;
	int32_t t84 = -134002942;

    t84 = (x405+(x406==(x407-x408)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x410 = 165U;
	int8_t x411 = 0;
	uint32_t x412 = 26993U;

    t85 = (x409+(x410==(x411-x412)));

    if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x414 = INT16_MIN;
	volatile uint16_t x415 = 30632U;
	int8_t x416 = INT8_MAX;
	int32_t t86 = INT32_MIN;

    t86 = (x413+(x414==(x415-x416)));

    if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x417 = 1U;
	int8_t x418 = -8;
	int8_t x419 = INT8_MIN;
	static volatile int64_t x420 = -1LL;
	volatile int32_t t87 = 224726;

    t87 = (x417+(x418==(x419-x420)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int64_t x421 = -1LL;
	volatile int64_t x422 = INT64_MAX;
	uint8_t x423 = 0U;
	int32_t x424 = -1;

    t88 = (x421+(x422==(x423-x424)));

    if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x425 = 567311751U;
	uint32_t x426 = UINT32_MAX;
	uint32_t x427 = UINT32_MAX;
	int32_t x428 = -1342763;
	uint32_t t89 = 0U;

    t89 = (x425+(x426==(x427-x428)));

    if (t89 != 567311751U) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x429 = INT16_MIN;
	int32_t x430 = -2;
	volatile uint64_t x431 = 4528LLU;
	volatile uint64_t x432 = 2LLU;
	static int32_t t90 = -186501928;

    t90 = (x429+(x430==(x431-x432)));

    if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x433 = INT16_MIN;
	volatile int32_t t91 = -77952220;

    t91 = (x433+(x434==(x435-x436)));

    if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x437 = -6345789LL;
	static int32_t x438 = -1;
	static uint32_t x439 = 696U;
	int8_t x440 = INT8_MAX;
	static int64_t t92 = -393LL;

    t92 = (x437+(x438==(x439-x440)));

    if (t92 != -6345789LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x441 = 29U;
	int8_t x442 = 13;
	uint16_t x443 = 8U;
	int16_t x444 = INT16_MAX;
	volatile int32_t t93 = -1;

    t93 = (x441+(x442==(x443-x444)));

    if (t93 != 29) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x445 = 298070218LL;
	static int16_t x446 = INT16_MIN;
	int16_t x448 = -1;
	int64_t t94 = 596741544271LL;

    t94 = (x445+(x446==(x447-x448)));

    if (t94 != 298070218LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x449 = INT64_MIN;
	static uint64_t x450 = 166652576073053LLU;
	int32_t x451 = -469415473;
	int64_t t95 = INT64_MIN;

    t95 = (x449+(x450==(x451-x452)));

    if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x457 = UINT8_MAX;
	int8_t x458 = -1;
	int32_t t96 = 1;

    t96 = (x457+(x458==(x459-x460)));

    if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x465 = -1;
	static volatile int64_t x466 = 443494553LL;
	int16_t x467 = 3280;
	uint32_t x468 = 8282800U;

    t97 = (x465+(x466==(x467-x468)));

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x470 = INT64_MAX;
	int8_t x471 = -1;
	uint8_t x472 = UINT8_MAX;

    t98 = (x469+(x470==(x471-x472)));

    if (t98 != 45) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x473 = INT32_MIN;
	static int64_t x474 = INT64_MAX;
	int8_t x476 = INT8_MIN;

    t99 = (x473+(x474==(x475-x476)));

    if (t99 != INT32_MIN) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x477 = 35967;
	int64_t x478 = INT64_MIN;
	uint16_t x479 = 30258U;
	int16_t x480 = -1;
	volatile int32_t t100 = -102000;

    t100 = (x477+(x478==(x479-x480)));

    if (t100 != 35967) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x481 = 0U;
	int16_t x482 = INT16_MAX;
	int8_t x483 = -1;
	volatile int32_t t101 = 485;

    t101 = (x481+(x482==(x483-x484)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x485 = -51199LL;
	uint8_t x487 = UINT8_MAX;
	int16_t x488 = 101;
	int64_t t102 = 55343LL;

    t102 = (x485+(x486==(x487-x488)));

    if (t102 != -51199LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x489 = 1;
	int32_t x490 = INT32_MIN;
	int16_t x491 = INT16_MIN;
	uint8_t x492 = 0U;
	int32_t t103 = 29349;

    t103 = (x489+(x490==(x491-x492)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x493 = 20625LLU;
	static int64_t x494 = INT64_MIN;
	static uint32_t x495 = 24692U;
	int32_t x496 = INT32_MIN;
	static uint64_t t104 = 327823829396LLU;

    t104 = (x493+(x494==(x495-x496)));

    if (t104 != 20625LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x497 = INT64_MIN;
	uint32_t x498 = 31U;
	static volatile int32_t x499 = -5;
	static volatile uint16_t x500 = 890U;
	volatile int64_t t105 = INT64_MIN;

    t105 = (x497+(x498==(x499-x500)));

    if (t105 != INT64_MIN) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x501 = -389948915003812LL;
	static volatile int64_t x502 = INT64_MAX;
	static uint8_t x503 = 12U;
	int16_t x504 = INT16_MAX;
	int64_t t106 = -209573039648151597LL;

    t106 = (x501+(x502==(x503-x504)));

    if (t106 != -389948915003812LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x505 = INT8_MIN;
	volatile int16_t x506 = INT16_MIN;
	volatile int32_t x507 = INT32_MIN;
	static volatile int32_t t107 = 7;

    t107 = (x505+(x506==(x507-x508)));

    if (t107 != -128) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x509 = -1;
	uint16_t x510 = UINT16_MAX;
	static uint8_t x511 = 1U;
	volatile uint32_t x512 = 256U;
	int32_t t108 = 17879936;

    t108 = (x509+(x510==(x511-x512)));

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x514 = INT32_MIN;
	uint64_t x515 = 3951097182LLU;
	uint32_t x516 = 54315U;
	uint64_t t109 = UINT64_MAX;

    t109 = (x513+(x514==(x515-x516)));

    if (t109 != UINT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x517 = -115368347;
	int16_t x518 = INT16_MIN;
	volatile int32_t x519 = 68546964;
	static int8_t x520 = INT8_MIN;

    t110 = (x517+(x518==(x519-x520)));

    if (t110 != -115368347) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x521 = -109697853186LL;
	int32_t x522 = INT32_MAX;
	static int32_t x523 = 1007940336;
	volatile int64_t t111 = 4527993800538690656LL;

    t111 = (x521+(x522==(x523-x524)));

    if (t111 != -109697853186LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x525 = INT64_MAX;
	int32_t x526 = INT32_MIN;
	volatile int64_t x527 = INT64_MIN;
	static uint64_t x528 = 853389042LLU;
	volatile int64_t t112 = INT64_MAX;

    t112 = (x525+(x526==(x527-x528)));

    if (t112 != INT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x529 = -1;
	static int8_t x530 = -1;
	int8_t x532 = 12;

    t113 = (x529+(x530==(x531-x532)));

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x533 = -1LL;
	int64_t x534 = INT64_MIN;
	static int64_t x535 = -1LL;
	volatile int64_t t114 = 254432413353935369LL;

    t114 = (x533+(x534==(x535-x536)));

    if (t114 != -1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x537 = -1;
	int8_t x538 = INT8_MIN;
	int16_t x539 = INT16_MAX;
	uint8_t x540 = UINT8_MAX;
	volatile int32_t t115 = -26959283;

    t115 = (x537+(x538==(x539-x540)));

    if (t115 != -1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x541 = INT64_MIN;
	uint32_t x544 = 167656881U;
	int64_t t116 = INT64_MIN;

    t116 = (x541+(x542==(x543-x544)));

    if (t116 != INT64_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x545 = -1;
	int64_t x546 = INT64_MIN;
	static int64_t x548 = INT64_MIN;
	int32_t t117 = 89;

    t117 = (x545+(x546==(x547-x548)));

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x553 = -468;
	static uint8_t x554 = 21U;
	static int64_t x555 = 86008LL;
	uint64_t x556 = UINT64_MAX;
	volatile int32_t t118 = -39;

    t118 = (x553+(x554==(x555-x556)));

    if (t118 != -468) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x557 = INT8_MAX;
	int64_t x559 = -7LL;
	int8_t x560 = 1;
	int32_t t119 = 1;

    t119 = (x557+(x558==(x559-x560)));

    if (t119 != 127) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint16_t x561 = 10U;
	volatile int8_t x562 = INT8_MAX;
	int8_t x563 = INT8_MIN;
	int64_t x564 = -1LL;
	static int32_t t120 = -3648;

    t120 = (x561+(x562==(x563-x564)));

    if (t120 != 10) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x569 = INT16_MAX;
	int32_t x570 = 71059743;
	uint16_t x571 = 2U;
	int16_t x572 = INT16_MIN;
	int32_t t121 = 3459636;

    t121 = (x569+(x570==(x571-x572)));

    if (t121 != 32767) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x573 = UINT32_MAX;
	uint32_t x574 = 65706U;
	int16_t x575 = INT16_MIN;
	uint32_t x576 = 86683797U;
	static uint32_t t122 = UINT32_MAX;

    t122 = (x573+(x574==(x575-x576)));

    if (t122 != UINT32_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x577 = 0;
	uint64_t x578 = 3028743658965LLU;
	volatile uint8_t x579 = 6U;
	int16_t x580 = -1;

    t123 = (x577+(x578==(x579-x580)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x581 = 267930741;
	int64_t x583 = INT64_MIN;
	int32_t t124 = 160298257;

    t124 = (x581+(x582==(x583-x584)));

    if (t124 != 267930741) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x585 = 55U;
	int16_t x586 = 494;
	static int8_t x587 = INT8_MIN;
	uint16_t x588 = 1U;
	static volatile int32_t t125 = 8467266;

    t125 = (x585+(x586==(x587-x588)));

    if (t125 != 55) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x590 = INT64_MIN;
	uint8_t x591 = 13U;
	volatile uint64_t t126 = 1087637140355LLU;

    t126 = (x589+(x590==(x591-x592)));

    if (t126 != 104074365536289LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x594 = INT16_MAX;
	uint16_t x595 = 28U;
	int16_t x596 = 275;
	volatile int64_t t127 = INT64_MAX;

    t127 = (x593+(x594==(x595-x596)));

    if (t127 != INT64_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x597 = 22U;
	static int64_t x598 = INT64_MAX;
	uint16_t x600 = 58U;
	int32_t t128 = -26126;

    t128 = (x597+(x598==(x599-x600)));

    if (t128 != 22) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint8_t x601 = UINT8_MAX;
	static int8_t x602 = 2;
	int64_t x603 = -1397599756442LL;
	static uint16_t x604 = 11U;
	volatile int32_t t129 = 13993543;

    t129 = (x601+(x602==(x603-x604)));

    if (t129 != 255) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x605 = -1LL;
	uint16_t x606 = 3198U;
	int16_t x607 = INT16_MIN;
	int8_t x608 = INT8_MIN;

    t130 = (x605+(x606==(x607-x608)));

    if (t130 != -1LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x614 = INT64_MIN;
	volatile int16_t x616 = -1;
	volatile int32_t t131 = 7;

    t131 = (x613+(x614==(x615-x616)));

    if (t131 != -128) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x617 = 23741U;
	static volatile int32_t x618 = INT32_MIN;
	volatile int8_t x619 = -1;
	int32_t x620 = 31;

    t132 = (x617+(x618==(x619-x620)));

    if (t132 != 23741U) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x621 = 1243;
	int64_t x622 = INT64_MAX;
	uint64_t x623 = 17382504728963LLU;
	volatile int64_t x624 = -127308731694407935LL;
	volatile int32_t t133 = -2;

    t133 = (x621+(x622==(x623-x624)));

    if (t133 != 1243) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x625 = -256876223LL;
	volatile int8_t x626 = -1;
	int8_t x627 = -7;
	volatile int8_t x628 = 21;
	int64_t t134 = -506002722643LL;

    t134 = (x625+(x626==(x627-x628)));

    if (t134 != -256876223LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x629 = 1U;
	volatile int16_t x631 = -3;
	volatile uint64_t x632 = 289LLU;
	int32_t t135 = 165;

    t135 = (x629+(x630==(x631-x632)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x634 = INT8_MIN;
	uint32_t x635 = UINT32_MAX;
	int32_t x636 = INT32_MAX;

    t136 = (x633+(x634==(x635-x636)));

    if (t136 != UINT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x637 = 49;
	uint32_t x638 = 212299U;
	int8_t x639 = INT8_MIN;

    t137 = (x637+(x638==(x639-x640)));

    if (t137 != 49) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x643 = INT8_MAX;
	uint16_t x644 = 8471U;
	int32_t t138 = 4018;

    t138 = (x641+(x642==(x643-x644)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x646 = INT8_MAX;
	int64_t x647 = -1LL;
	static volatile int16_t x648 = 2;
	int32_t t139 = -854535316;

    t139 = (x645+(x646==(x647-x648)));

    if (t139 != -128) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x649 = -1;
	int8_t x650 = 1;
	volatile int8_t x651 = INT8_MAX;
	int8_t x652 = INT8_MIN;
	volatile int32_t t140 = -1;

    t140 = (x649+(x650==(x651-x652)));

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x653 = INT64_MAX;
	static uint32_t x655 = 3U;
	volatile int64_t t141 = INT64_MAX;

    t141 = (x653+(x654==(x655-x656)));

    if (t141 != INT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x657 = 1570U;
	int32_t x659 = -1;
	uint8_t x660 = 1U;
	volatile int32_t t142 = -3402732;

    t142 = (x657+(x658==(x659-x660)));

    if (t142 != 1570) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x663 = -17925558;

    t143 = (x661+(x662==(x663-x664)));

    if (t143 != 46590743U) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x665 = INT32_MIN;
	int64_t x667 = -31301LL;
	volatile int32_t t144 = INT32_MIN;

    t144 = (x665+(x666==(x667-x668)));

    if (t144 != INT32_MIN) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x669 = UINT64_MAX;
	int8_t x670 = INT8_MIN;
	uint32_t x672 = 14824496U;
	static volatile uint64_t t145 = UINT64_MAX;

    t145 = (x669+(x670==(x671-x672)));

    if (t145 != UINT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x673 = INT16_MIN;
	int16_t x674 = -885;
	volatile uint64_t x675 = 7LLU;
	int32_t t146 = -162;

    t146 = (x673+(x674==(x675-x676)));

    if (t146 != -32768) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x677 = 6926722304762LL;
	uint64_t x678 = UINT64_MAX;
	int8_t x679 = INT8_MIN;
	volatile int64_t x680 = INT64_MIN;
	volatile int64_t t147 = 13754LL;

    t147 = (x677+(x678==(x679-x680)));

    if (t147 != 6926722304762LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x681 = 1823778886U;
	uint32_t x682 = 143540U;
	int32_t x683 = INT32_MIN;
	static int8_t x684 = INT8_MIN;
	volatile uint32_t t148 = 203U;

    t148 = (x681+(x682==(x683-x684)));

    if (t148 != 1823778886U) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x685 = -1;
	static int32_t x686 = 5475;
	volatile int64_t x687 = 452038640713259LL;
	static uint16_t x688 = 1U;
	int32_t t149 = 43220;

    t149 = (x685+(x686==(x687-x688)));

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x691 = INT16_MIN;
	uint32_t x692 = UINT32_MAX;
	int64_t t150 = 928200091376002681LL;

    t150 = (x689+(x690==(x691-x692)));

    if (t150 != -3249319446850LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x693 = INT64_MAX;
	uint64_t x694 = 59907863407579LLU;
	int16_t x696 = -1;
	int64_t t151 = INT64_MAX;

    t151 = (x693+(x694==(x695-x696)));

    if (t151 != INT64_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x697 = 31;
	int16_t x698 = INT16_MAX;
	int16_t x699 = -1;
	uint64_t x700 = UINT64_MAX;
	int32_t t152 = -25759;

    t152 = (x697+(x698==(x699-x700)));

    if (t152 != 31) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x701 = INT64_MIN;
	static volatile int8_t x702 = INT8_MIN;
	uint8_t x703 = 83U;
	static volatile int8_t x704 = -1;
	int64_t t153 = INT64_MIN;

    t153 = (x701+(x702==(x703-x704)));

    if (t153 != INT64_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x705 = 0;
	int8_t x707 = -1;
	static int32_t x708 = INT32_MIN;

    t154 = (x705+(x706==(x707-x708)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x709 = INT8_MAX;
	volatile uint64_t x710 = 784LLU;
	volatile uint32_t x711 = UINT32_MAX;
	volatile int8_t x712 = 1;
	static volatile int32_t t155 = 2513;

    t155 = (x709+(x710==(x711-x712)));

    if (t155 != 127) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x713 = 5U;
	uint16_t x714 = UINT16_MAX;
	uint32_t x715 = UINT32_MAX;
	uint64_t x716 = 204LLU;
	volatile int32_t t156 = 59;

    t156 = (x713+(x714==(x715-x716)));

    if (t156 != 5) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x717 = INT8_MIN;
	volatile int16_t x718 = INT16_MIN;
	volatile int64_t x720 = INT64_MAX;
	static int32_t t157 = -951867;

    t157 = (x717+(x718==(x719-x720)));

    if (t157 != -128) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x721 = INT8_MIN;
	int32_t x722 = -27835;
	static uint32_t x723 = 40097U;
	volatile int8_t x724 = INT8_MIN;
	int32_t t158 = 159104;

    t158 = (x721+(x722==(x723-x724)));

    if (t158 != -128) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x725 = INT8_MIN;
	int8_t x727 = INT8_MIN;
	volatile int8_t x728 = 10;
	volatile int32_t t159 = 4;

    t159 = (x725+(x726==(x727-x728)));

    if (t159 != -128) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x729 = INT16_MIN;
	int32_t x730 = INT32_MAX;
	int16_t x731 = INT16_MIN;
	static uint64_t x732 = 163319013101826051LLU;
	volatile int32_t t160 = -116125;

    t160 = (x729+(x730==(x731-x732)));

    if (t160 != -32768) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x734 = 38;
	int16_t x735 = -1;
	volatile uint16_t x736 = 3U;
	volatile int32_t t161 = 80066;

    t161 = (x733+(x734==(x735-x736)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x741 = 875632363LL;
	static uint16_t x742 = UINT16_MAX;
	volatile int8_t x743 = -1;
	static volatile uint64_t x744 = UINT64_MAX;
	volatile int64_t t162 = 500465LL;

    t162 = (x741+(x742==(x743-x744)));

    if (t162 != 875632363LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x749 = INT16_MAX;
	uint32_t x750 = UINT32_MAX;
	static int8_t x751 = 63;
	int64_t x752 = -1LL;
	static volatile int32_t t163 = 233;

    t163 = (x749+(x750==(x751-x752)));

    if (t163 != 32767) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x753 = INT8_MIN;
	static int64_t x754 = 42757847LL;
	volatile int16_t x755 = INT16_MIN;
	uint32_t x756 = 194035241U;
	volatile int32_t t164 = 33711148;

    t164 = (x753+(x754==(x755-x756)));

    if (t164 != -128) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x757 = INT64_MAX;
	int32_t x758 = -1;
	static uint32_t x760 = 46041962U;
	volatile int64_t t165 = INT64_MAX;

    t165 = (x757+(x758==(x759-x760)));

    if (t165 != INT64_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x766 = 1662U;
	int8_t x767 = 1;
	int32_t t166 = 84;

    t166 = (x765+(x766==(x767-x768)));

    if (t166 != -32768) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x770 = INT8_MAX;
	uint32_t x772 = 13348069U;
	volatile int64_t t167 = INT64_MAX;

    t167 = (x769+(x770==(x771-x772)));

    if (t167 != INT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x773 = INT32_MAX;
	uint16_t x774 = 0U;
	volatile int32_t x775 = -30043420;
	static volatile uint8_t x776 = 2U;

    t168 = (x773+(x774==(x775-x776)));

    if (t168 != INT32_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x777 = -1;
	uint64_t x778 = 5856104434668246917LLU;
	static volatile uint32_t x779 = 177660524U;
	volatile int32_t t169 = 165;

    t169 = (x777+(x778==(x779-x780)));

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x781 = INT16_MIN;
	int64_t x782 = -1LL;
	uint64_t x783 = 7385169361927LLU;
	static int8_t x784 = -1;

    t170 = (x781+(x782==(x783-x784)));

    if (t170 != -32768) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x785 = 1445643012U;
	uint64_t x786 = 1677020950648577LLU;
	int32_t x787 = -1;
	uint8_t x788 = 1U;
	static uint32_t t171 = 26U;

    t171 = (x785+(x786==(x787-x788)));

    if (t171 != 1445643012U) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x789 = INT32_MAX;
	static uint64_t x790 = UINT64_MAX;
	static uint64_t x791 = 6538995476LLU;
	static volatile uint8_t x792 = 16U;

    t172 = (x789+(x790==(x791-x792)));

    if (t172 != INT32_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x794 = 0U;
	volatile uint64_t x795 = 26071646LLU;
	static volatile int32_t x796 = INT32_MAX;
	uint64_t t173 = 3934155LLU;

    t173 = (x793+(x794==(x795-x796)));

    if (t173 != 6568LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x799 = -1LL;
	int32_t x800 = INT32_MIN;
	static int32_t t174 = -32108944;

    t174 = (x797+(x798==(x799-x800)));

    if (t174 != -1) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint32_t x801 = 27U;
	static int64_t x802 = INT64_MIN;
	static volatile int16_t x803 = INT16_MIN;
	volatile uint32_t t175 = 120000064U;

    t175 = (x801+(x802==(x803-x804)));

    if (t175 != 27U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x805 = 1612U;
	volatile int16_t x807 = -8772;
	int32_t t176 = -8176;

    t176 = (x805+(x806==(x807-x808)));

    if (t176 != 1612) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x809 = UINT32_MAX;
	uint32_t x810 = 4675U;
	int32_t x811 = -2993709;
	volatile uint32_t x812 = 159523U;
	volatile uint32_t t177 = UINT32_MAX;

    t177 = (x809+(x810==(x811-x812)));

    if (t177 != UINT32_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x813 = INT16_MIN;
	int16_t x814 = 1768;
	uint64_t x815 = UINT64_MAX;

    t178 = (x813+(x814==(x815-x816)));

    if (t178 != -32768) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x817 = -1;
	static uint64_t x818 = 148LLU;
	uint16_t x819 = 724U;
	uint32_t x820 = 0U;
	volatile int32_t t179 = -2999351;

    t179 = (x817+(x818==(x819-x820)));

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x821 = INT32_MIN;
	int32_t x822 = -496370802;
	static uint64_t x823 = 233698LLU;
	int64_t x824 = -1028LL;
	static int32_t t180 = INT32_MIN;

    t180 = (x821+(x822==(x823-x824)));

    if (t180 != INT32_MIN) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x825 = 9017971826892481176LLU;
	static uint16_t x826 = 1965U;
	uint64_t x828 = 2855601678896533LLU;
	uint64_t t181 = 54165055LLU;

    t181 = (x825+(x826==(x827-x828)));

    if (t181 != 9017971826892481176LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x829 = 65336773780305210LL;
	volatile int32_t x830 = -73921518;
	uint8_t x831 = UINT8_MAX;
	int16_t x832 = INT16_MIN;
	int64_t t182 = 3152200473341141LL;

    t182 = (x829+(x830==(x831-x832)));

    if (t182 != 65336773780305210LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x833 = -1;
	int64_t x835 = -1LL;
	uint8_t x836 = 1U;
	static int32_t t183 = 1;

    t183 = (x833+(x834==(x835-x836)));

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x838 = INT64_MIN;
	int8_t x839 = 7;
	volatile uint8_t x840 = 15U;
	static int32_t t184 = -12361919;

    t184 = (x837+(x838==(x839-x840)));

    if (t184 != -32768) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x841 = -1;
	volatile int32_t x843 = -1;
	static uint64_t x844 = 468402577LLU;
	volatile int32_t t185 = -9;

    t185 = (x841+(x842==(x843-x844)));

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x846 = INT8_MAX;
	static volatile int8_t x847 = -1;
	uint16_t x848 = 425U;
	int64_t t186 = INT64_MIN;

    t186 = (x845+(x846==(x847-x848)));

    if (t186 != INT64_MIN) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x850 = 4LLU;
	uint8_t x851 = 26U;
	int8_t x852 = 0;

    t187 = (x849+(x850==(x851-x852)));

    if (t187 != 255) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x854 = -1;
	uint16_t x855 = 344U;
	volatile int64_t t188 = INT64_MIN;

    t188 = (x853+(x854==(x855-x856)));

    if (t188 != INT64_MIN) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x857 = INT32_MIN;
	static int16_t x858 = INT16_MIN;
	int64_t x859 = -1LL;
	static uint64_t x860 = UINT64_MAX;
	volatile int32_t t189 = INT32_MIN;

    t189 = (x857+(x858==(x859-x860)));

    if (t189 != INT32_MIN) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x861 = -1;
	int8_t x862 = -1;
	int32_t x863 = INT32_MIN;
	int32_t t190 = 938564;

    t190 = (x861+(x862==(x863-x864)));

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x866 = INT32_MIN;
	uint8_t x867 = 1U;
	static int64_t x868 = -45097392670LL;
	int32_t t191 = 771;

    t191 = (x865+(x866==(x867-x868)));

    if (t191 != 621) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x869 = INT32_MIN;
	uint64_t x870 = UINT64_MAX;
	int64_t x872 = -123LL;
	int32_t t192 = INT32_MIN;

    t192 = (x869+(x870==(x871-x872)));

    if (t192 != INT32_MIN) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x873 = INT32_MIN;
	static volatile int8_t x876 = INT8_MIN;
	static volatile int32_t t193 = INT32_MIN;

    t193 = (x873+(x874==(x875-x876)));

    if (t193 != INT32_MIN) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x877 = 27U;
	static int64_t x879 = 1243028LL;
	static volatile int16_t x880 = INT16_MIN;
	volatile uint32_t t194 = 1211988999U;

    t194 = (x877+(x878==(x879-x880)));

    if (t194 != 27U) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x881 = -6;
	static int8_t x882 = 0;
	volatile uint8_t x883 = UINT8_MAX;
	int8_t x884 = INT8_MIN;

    t195 = (x881+(x882==(x883-x884)));

    if (t195 != -6) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x885 = UINT8_MAX;
	volatile int8_t x886 = -1;

    t196 = (x885+(x886==(x887-x888)));

    if (t196 != 255) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x889 = 22U;
	int64_t x890 = INT64_MAX;
	int8_t x891 = -1;
	int8_t x892 = -1;
	int32_t t197 = -242;

    t197 = (x889+(x890==(x891-x892)));

    if (t197 != 22) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x893 = UINT8_MAX;
	int8_t x894 = -1;
	uint64_t x895 = 95994044270LLU;
	int64_t x896 = 1937281404055538LL;
	static volatile int32_t t198 = -23857426;

    t198 = (x893+(x894==(x895-x896)));

    if (t198 != 255) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x897 = 980U;
	volatile int64_t x898 = INT64_MIN;
	uint32_t x899 = UINT32_MAX;
	static uint16_t x900 = 31U;
	volatile uint32_t t199 = 221U;

    t199 = (x897+(x898==(x899-x900)));

    if (t199 != 980U) { NG(); } else { ; }
	
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

