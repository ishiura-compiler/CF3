
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

int16_t x3 = 7231;
volatile int64_t t1 = 689455268LL;
static volatile int8_t x10 = INT8_MIN;
uint16_t x13 = 1U;
uint16_t x14 = 31U;
int32_t x20 = INT32_MAX;
volatile int64_t x21 = INT64_MAX;
int64_t t5 = -353554733LL;
int8_t x25 = 1;
uint32_t x26 = 25321947U;
volatile uint32_t t6 = 2140735763U;
volatile uint32_t x31 = UINT32_MAX;
volatile uint64_t t7 = UINT64_MAX;
uint8_t x35 = 0U;
uint16_t x36 = 471U;
static volatile int8_t x37 = -1;
int32_t t9 = INT32_MIN;
int16_t x45 = INT16_MIN;
int16_t x47 = INT16_MIN;
uint64_t t11 = 29510399233709LLU;
volatile uint16_t x49 = UINT16_MAX;
int8_t x50 = -1;
static int16_t x52 = 69;
int32_t x56 = INT32_MIN;
uint32_t t13 = 84174U;
int32_t x63 = INT32_MIN;
int8_t x64 = -1;
int8_t x75 = INT8_MIN;
uint8_t x76 = 3U;
volatile uint16_t x86 = 80U;
int32_t x92 = -15;
int32_t x98 = 203;
static volatile int64_t x101 = INT64_MIN;
uint8_t x104 = 114U;
static int8_t x114 = 7;
int16_t x120 = INT16_MIN;
int32_t x121 = -38316022;
static int32_t x125 = -88;
static volatile uint16_t x131 = 4827U;
uint8_t x132 = UINT8_MAX;
int16_t x137 = INT16_MAX;
uint8_t x144 = UINT8_MAX;
uint16_t x159 = 2U;
static int64_t x166 = INT64_MIN;
volatile int16_t x167 = -1;
int32_t x168 = INT32_MAX;
static uint8_t x174 = UINT8_MAX;
volatile int32_t t39 = INT32_MAX;
static int32_t x183 = -1013847;
volatile uint64_t t42 = 498428099407320LLU;
int16_t x196 = -6;
volatile int64_t x197 = -1LL;
static int32_t x202 = -3447;
int32_t x214 = INT32_MIN;
volatile int32_t x215 = INT32_MAX;
static int64_t x242 = -1314LL;
volatile int64_t t54 = -4180304521597LL;
int16_t x249 = INT16_MIN;
volatile int32_t x261 = INT32_MAX;
uint64_t x263 = 2691LLU;
int8_t x271 = -1;
int8_t x273 = INT8_MIN;
int32_t x274 = -170029;
uint32_t t62 = 49U;
static volatile int64_t t64 = 8465912965298537LL;
uint16_t x294 = 6U;
int32_t x296 = -107632706;
int8_t x307 = INT8_MIN;
int32_t x309 = -14;
uint64_t x312 = UINT64_MAX;
uint16_t x318 = 14U;
volatile int32_t t70 = INT32_MIN;
volatile uint32_t t71 = 242U;
volatile int64_t t73 = 79LL;
static int32_t x340 = -1;
int64_t t74 = 16058865LL;
static uint16_t x343 = UINT16_MAX;
int8_t x344 = -1;
static volatile uint64_t x348 = 299LLU;
static int32_t x349 = -1;
int32_t x350 = 646579513;
int8_t x358 = INT8_MIN;
static uint64_t x360 = 696038LLU;
int32_t x363 = -76402;
int32_t x369 = -1;
volatile uint32_t t81 = 891U;
static int8_t x374 = INT8_MIN;
static uint64_t x375 = 3233158534451LLU;
int32_t x379 = INT32_MAX;
uint64_t x382 = UINT64_MAX;
uint64_t t84 = 203LLU;
uint32_t x403 = 509311050U;
volatile int32_t t90 = -556832;
int32_t x418 = INT32_MIN;
static int8_t x423 = INT8_MAX;
uint32_t t92 = UINT32_MAX;
volatile uint32_t x430 = 31173780U;
int16_t x432 = INT16_MIN;
static int8_t x445 = INT8_MIN;
int32_t t97 = 845;
int64_t x453 = -7581225320436LL;
int16_t x458 = INT16_MIN;
int16_t x466 = INT16_MAX;
static int64_t x467 = 321118768405223LL;
volatile int64_t x472 = INT64_MAX;
volatile uint64_t t102 = 34576193309LLU;
uint16_t x475 = 198U;
int8_t x479 = -1;
int64_t x483 = 40448557567LL;
int8_t x485 = INT8_MAX;
int16_t x487 = 1;
static int16_t x491 = INT16_MIN;
int16_t x497 = INT16_MAX;
volatile int16_t x504 = INT16_MIN;
int64_t x512 = INT64_MIN;
int32_t x521 = 4934;
volatile int16_t x523 = -1;
int32_t x528 = -538851636;
volatile int8_t x531 = INT8_MIN;
volatile int32_t x537 = INT32_MIN;
static int16_t x547 = 6;
int8_t x548 = -1;
int64_t x553 = 958LL;
static volatile int64_t t121 = -292284367828LL;
static int64_t x567 = -179766114957160LL;
uint64_t x571 = UINT64_MAX;
volatile int16_t x578 = INT16_MIN;
int32_t x581 = -721250843;
int32_t x585 = -1;
volatile int8_t x587 = INT8_MAX;
int32_t x589 = -1;
int32_t t129 = INT32_MAX;
int16_t x603 = INT16_MIN;
static int8_t x604 = -1;
static int32_t x607 = INT32_MIN;
int32_t x608 = INT32_MIN;
int64_t t133 = 1LL;
int64_t x610 = INT64_MIN;
int32_t x613 = INT32_MIN;
uint8_t x625 = 119U;
volatile int16_t x626 = -678;
int32_t x627 = INT32_MAX;
volatile uint64_t x629 = 56LLU;
volatile uint8_t x632 = 0U;
uint32_t x636 = 13U;
static uint16_t x640 = UINT16_MAX;
int32_t x644 = INT32_MAX;
int16_t x652 = -1;
volatile int32_t t142 = -188;
uint16_t x654 = UINT16_MAX;
int64_t x662 = -132418142605671LL;
volatile int32_t x671 = 769185580;
volatile int64_t x674 = 8816604413822330LL;
static uint64_t x690 = 14096747566819073LLU;
volatile uint8_t x702 = UINT8_MAX;
int8_t x709 = INT8_MAX;
uint32_t x724 = UINT32_MAX;
volatile uint64_t t157 = 173546LLU;
int32_t t158 = -2212;
volatile uint64_t t159 = 254345LLU;
uint32_t x737 = 473U;
int8_t x740 = INT8_MIN;
volatile int32_t x750 = -1;
int32_t x757 = 6;
volatile uint64_t x761 = 7609265LLU;
uint32_t x764 = 381760U;
int8_t x768 = INT8_MIN;
uint16_t x769 = 268U;
int16_t x771 = INT16_MIN;
uint32_t x776 = 40U;
uint8_t x795 = UINT8_MAX;
uint16_t x797 = 20U;
static int32_t x800 = 16;
int8_t x802 = -10;
uint16_t x804 = UINT16_MAX;
uint32_t x808 = 28795U;
static int32_t x821 = -5345474;
volatile int64_t x825 = INT64_MIN;
int64_t t181 = -3853902978478762403LL;
static uint32_t x838 = UINT32_MAX;
uint64_t x841 = 5385917760353LLU;
uint64_t x843 = 1905LLU;
int32_t x844 = -1;
int8_t x864 = 1;
uint32_t x872 = UINT32_MAX;
uint32_t x873 = 1063U;
uint16_t x875 = 1245U;


void f0(void) {
    	volatile int64_t x1 = -1LL;
	int8_t x2 = INT8_MAX;
	int32_t x4 = -1;
	volatile int64_t t0 = 346LL;

    t0 = (((x1/x2)*x3)|x4);

    if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = INT32_MAX;
	int64_t x6 = -1175LL;
	uint8_t x7 = UINT8_MAX;
	uint8_t x8 = UINT8_MAX;

    t1 = (((x5/x6)*x7)|x8);

    if (t1 != -466049281LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x9 = UINT32_MAX;
	int32_t x11 = 6944;
	static int64_t x12 = -151595596111LL;
	volatile int64_t t2 = -2358LL;

    t2 = (((x9/x10)*x11)|x12);

    if (t2 != -151595589711LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x15 = 7623339U;
	int8_t x16 = -1;
	uint32_t t3 = UINT32_MAX;

    t3 = (((x13/x14)*x15)|x16);

    if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MIN;
	volatile int64_t x18 = -289787736125678230LL;
	uint64_t x19 = UINT64_MAX;
	volatile uint64_t t4 = 1026349897LLU;

    t4 = (((x17/x18)*x19)|x20);

    if (t4 != 2147483647LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x22 = INT64_MAX;
	int8_t x23 = INT8_MAX;
	int16_t x24 = INT16_MAX;

    t5 = (((x21/x22)*x23)|x24);

    if (t5 != 32767LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x27 = -1;
	uint16_t x28 = UINT16_MAX;

    t6 = (((x25/x26)*x27)|x28);

    if (t6 != 65535U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = 398593920254254486LLU;
	static uint32_t x30 = UINT32_MAX;
	int8_t x32 = -1;

    t7 = (((x29/x30)*x31)|x32);

    if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MAX;
	int8_t x34 = INT8_MIN;
	static int32_t t8 = 7364888;

    t8 = (((x33/x34)*x35)|x36);

    if (t8 != 471) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x38 = INT32_MIN;
	int8_t x39 = -1;
	volatile int32_t x40 = INT32_MIN;

    t9 = (((x37/x38)*x39)|x40);

    if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x41 = 545436216530599367LLU;
	uint8_t x42 = UINT8_MAX;
	uint8_t x43 = 63U;
	uint64_t x44 = 1960864918272LLU;
	static uint64_t t10 = 62LLU;

    t10 = (((x41/x42)*x43)|x44);

    if (t10 != 134755929545128954LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x46 = 293305LLU;
	int16_t x48 = INT16_MIN;

    t11 = (((x45/x46)*x47)|x48);

    if (t11 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x51 = 51;
	int32_t t12 = 490831;

    t12 = (((x49/x50)*x51)|x52);

    if (t12 != -3342217) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint32_t x53 = 20324U;
	int8_t x54 = INT8_MIN;
	volatile int32_t x55 = -1;

    t13 = (((x53/x54)*x55)|x56);

    if (t13 != 2147483648U) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x57 = -8;
	volatile int32_t x58 = 62749;
	uint64_t x59 = 13143168205LLU;
	int32_t x60 = INT32_MIN;
	uint64_t t14 = 488359LLU;

    t14 = (((x57/x58)*x59)|x60);

    if (t14 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x61 = 1332LLU;
	uint64_t x62 = 119259LLU;
	uint64_t t15 = UINT64_MAX;

    t15 = (((x61/x62)*x63)|x64);

    if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int32_t x65 = INT32_MIN;
	volatile int8_t x66 = INT8_MIN;
	int16_t x67 = -1;
	uint32_t x68 = UINT32_MAX;
	volatile uint32_t t16 = UINT32_MAX;

    t16 = (((x65/x66)*x67)|x68);

    if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x69 = 5U;
	uint64_t x70 = 151347148574888LLU;
	volatile uint64_t x71 = 2601196351971LLU;
	int8_t x72 = INT8_MAX;
	static uint64_t t17 = 1324780072LLU;

    t17 = (((x69/x70)*x71)|x72);

    if (t17 != 127LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = 110674176U;
	volatile uint16_t x74 = 5386U;
	uint32_t t18 = 507156U;

    t18 = (((x73/x74)*x75)|x76);

    if (t18 != 4292337155U) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MIN;
	uint32_t x78 = 223224U;
	static int8_t x79 = INT8_MIN;
	int64_t x80 = INT64_MAX;
	int64_t t19 = INT64_MAX;

    t19 = (((x77/x78)*x79)|x80);

    if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x85 = 1435751LLU;
	volatile int32_t x87 = -1;
	uint16_t x88 = UINT16_MAX;
	volatile uint64_t t20 = UINT64_MAX;

    t20 = (((x85/x86)*x87)|x88);

    if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x89 = INT64_MIN;
	uint8_t x90 = UINT8_MAX;
	int8_t x91 = -1;
	int64_t t21 = 6222979263LL;

    t21 = (((x89/x90)*x91)|x92);

    if (t21 != -15LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x93 = 46010398202503LLU;
	int32_t x94 = INT32_MAX;
	int64_t x95 = -1LL;
	volatile int64_t x96 = INT64_MIN;
	volatile uint64_t t22 = 1LLU;

    t22 = (((x93/x94)*x95)|x96);

    if (t22 != 18446744073709530191LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x97 = UINT16_MAX;
	static uint8_t x99 = 0U;
	volatile uint64_t x100 = 3LLU;
	volatile uint64_t t23 = 33LLU;

    t23 = (((x97/x98)*x99)|x100);

    if (t23 != 3LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x102 = INT64_MIN;
	static uint64_t x103 = UINT64_MAX;
	uint64_t t24 = UINT64_MAX;

    t24 = (((x101/x102)*x103)|x104);

    if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x105 = INT32_MAX;
	volatile int32_t x106 = -47575;
	static uint8_t x107 = 9U;
	static uint16_t x108 = 234U;
	volatile int32_t t25 = -227;

    t25 = (((x105/x106)*x107)|x108);

    if (t25 != -406018) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint16_t x109 = 24U;
	uint64_t x110 = 3901247929486179LLU;
	static uint32_t x111 = 387540218U;
	int16_t x112 = INT16_MAX;
	volatile uint64_t t26 = 3345385786574LLU;

    t26 = (((x109/x110)*x111)|x112);

    if (t26 != 32767LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x113 = -4;
	int16_t x115 = INT16_MIN;
	static uint32_t x116 = UINT32_MAX;
	uint32_t t27 = UINT32_MAX;

    t27 = (((x113/x114)*x115)|x116);

    if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x117 = 0;
	volatile int32_t x118 = 851;
	int16_t x119 = INT16_MAX;
	int32_t t28 = -152387994;

    t28 = (((x117/x118)*x119)|x120);

    if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x122 = INT64_MIN;
	static int32_t x123 = -1;
	int16_t x124 = INT16_MAX;
	int64_t t29 = -156841878357683477LL;

    t29 = (((x121/x122)*x123)|x124);

    if (t29 != 32767LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x126 = -1;
	static int8_t x127 = INT8_MIN;
	int8_t x128 = 1;
	static volatile int32_t t30 = -19939;

    t30 = (((x125/x126)*x127)|x128);

    if (t30 != -11263) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x129 = INT16_MAX;
	int64_t x130 = INT64_MIN;
	volatile int64_t t31 = -58624344491LL;

    t31 = (((x129/x130)*x131)|x132);

    if (t31 != 255LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x133 = INT8_MIN;
	int16_t x134 = INT16_MIN;
	int64_t x135 = -1LL;
	int8_t x136 = -1;
	volatile int64_t t32 = -7471LL;

    t32 = (((x133/x134)*x135)|x136);

    if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x138 = 6664;
	uint32_t x139 = 56U;
	static uint8_t x140 = 40U;
	uint32_t t33 = 63646U;

    t33 = (((x137/x138)*x139)|x140);

    if (t33 != 232U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x141 = UINT32_MAX;
	int32_t x142 = INT32_MIN;
	int64_t x143 = -1LL;
	volatile int64_t t34 = 413693227230129134LL;

    t34 = (((x141/x142)*x143)|x144);

    if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x153 = 1U;
	int8_t x154 = INT8_MAX;
	static int8_t x155 = 1;
	int32_t x156 = INT32_MIN;
	volatile int32_t t35 = INT32_MIN;

    t35 = (((x153/x154)*x155)|x156);

    if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x157 = 22;
	volatile int32_t x158 = INT32_MAX;
	static uint16_t x160 = 833U;
	volatile int32_t t36 = 81071;

    t36 = (((x157/x158)*x159)|x160);

    if (t36 != 833) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x161 = 4509U;
	static int16_t x162 = -1;
	uint64_t x163 = UINT64_MAX;
	int8_t x164 = -1;
	volatile uint64_t t37 = UINT64_MAX;

    t37 = (((x161/x162)*x163)|x164);

    if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x165 = UINT8_MAX;
	volatile int64_t t38 = 93018760976866514LL;

    t38 = (((x165/x166)*x167)|x168);

    if (t38 != 2147483647LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x173 = -5;
	static int32_t x175 = INT32_MAX;
	static int32_t x176 = INT32_MAX;

    t39 = (((x173/x174)*x175)|x176);

    if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x177 = 617459013032630994LLU;
	uint64_t x178 = UINT64_MAX;
	static int8_t x179 = 12;
	int32_t x180 = INT32_MIN;
	uint64_t t40 = 1779967492987LLU;

    t40 = (((x177/x178)*x179)|x180);

    if (t40 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x181 = INT8_MAX;
	uint16_t x182 = 125U;
	int64_t x184 = -21447177810485LL;
	static int64_t t41 = -1188410829170786LL;

    t41 = (((x181/x182)*x183)|x184);

    if (t41 != -667669LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x185 = 144U;
	static uint16_t x186 = 7966U;
	uint64_t x187 = 10473LLU;
	int8_t x188 = INT8_MIN;

    t42 = (((x185/x186)*x187)|x188);

    if (t42 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x189 = -1017384229757138LL;
	volatile int64_t x190 = -211288LL;
	uint32_t x191 = 4U;
	int64_t x192 = 0LL;
	int64_t t43 = -5023756LL;

    t43 = (((x189/x190)*x191)|x192);

    if (t43 != 19260615456LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x193 = -241793780868131LL;
	int64_t x194 = INT64_MIN;
	static int16_t x195 = 120;
	int64_t t44 = 3154673694472LL;

    t44 = (((x193/x194)*x195)|x196);

    if (t44 != -6LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x198 = INT8_MIN;
	uint64_t x199 = 14968846LLU;
	int64_t x200 = -3845170LL;
	uint64_t t45 = 1LLU;

    t45 = (((x197/x198)*x199)|x200);

    if (t45 != 18446744073705706446LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x201 = INT64_MIN;
	volatile int8_t x203 = 0;
	uint32_t x204 = UINT32_MAX;
	volatile int64_t t46 = -1067540826865668704LL;

    t46 = (((x201/x202)*x203)|x204);

    if (t46 != 4294967295LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x205 = 2U;
	volatile uint32_t x206 = UINT32_MAX;
	int16_t x207 = -2853;
	int16_t x208 = 8086;
	volatile uint32_t t47 = 1547710U;

    t47 = (((x205/x206)*x207)|x208);

    if (t47 != 8086U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x209 = 1U;
	volatile int64_t x210 = INT64_MIN;
	volatile int16_t x211 = INT16_MAX;
	uint8_t x212 = UINT8_MAX;
	volatile int64_t t48 = 28782652LL;

    t48 = (((x209/x210)*x211)|x212);

    if (t48 != 255LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x213 = 1U;
	uint8_t x216 = 49U;
	int32_t t49 = -7948;

    t49 = (((x213/x214)*x215)|x216);

    if (t49 != 49) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x217 = INT32_MAX;
	uint64_t x218 = 21542LLU;
	int64_t x219 = INT64_MAX;
	volatile int16_t x220 = -239;
	uint64_t t50 = 4930140099LLU;

    t50 = (((x217/x218)*x219)|x220);

    if (t50 != 18446744073709551513LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x221 = -1;
	static uint8_t x222 = UINT8_MAX;
	int32_t x223 = 570526;
	uint8_t x224 = 3U;
	static volatile int32_t t51 = 1868;

    t51 = (((x221/x222)*x223)|x224);

    if (t51 != 3) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x233 = 107U;
	int64_t x234 = INT64_MIN;
	uint16_t x235 = 370U;
	int8_t x236 = -2;
	int64_t t52 = -2LL;

    t52 = (((x233/x234)*x235)|x236);

    if (t52 != -2LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x237 = INT64_MIN;
	int32_t x238 = INT32_MAX;
	uint8_t x239 = UINT8_MAX;
	volatile int32_t x240 = 884675219;
	static int64_t t53 = 5LL;

    t53 = (((x237/x238)*x239)|x240);

    if (t53 != -1095216660845LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x241 = INT8_MAX;
	uint16_t x243 = 1U;
	static uint16_t x244 = 385U;

    t54 = (((x241/x242)*x243)|x244);

    if (t54 != 385LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x245 = 38299636992733LLU;
	static int16_t x246 = INT16_MIN;
	int8_t x247 = INT8_MAX;
	uint8_t x248 = 40U;
	volatile uint64_t t55 = 108509800LLU;

    t55 = (((x245/x246)*x247)|x248);

    if (t55 != 40LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x250 = 120;
	int32_t x251 = -1;
	int8_t x252 = INT8_MIN;
	volatile int32_t t56 = -813;

    t56 = (((x249/x250)*x251)|x252);

    if (t56 != -111) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x253 = INT8_MIN;
	int8_t x254 = INT8_MIN;
	static uint64_t x255 = UINT64_MAX;
	uint64_t x256 = 275387LLU;
	uint64_t t57 = UINT64_MAX;

    t57 = (((x253/x254)*x255)|x256);

    if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x262 = -44;
	int8_t x264 = INT8_MIN;
	volatile uint64_t t58 = 3176LLU;

    t58 = (((x261/x262)*x263)|x264);

    if (t58 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x265 = 791368LLU;
	uint64_t x266 = 385102650580LLU;
	uint32_t x267 = 439691605U;
	static int64_t x268 = INT64_MIN;
	uint64_t t59 = 0LLU;

    t59 = (((x265/x266)*x267)|x268);

    if (t59 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x269 = INT8_MIN;
	int8_t x270 = 1;
	int16_t x272 = -10513;
	volatile int32_t t60 = -43;

    t60 = (((x269/x270)*x271)|x272);

    if (t60 != -10513) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x275 = 6764U;
	static uint64_t x276 = 8576783349715030111LLU;
	volatile uint64_t t61 = 1483069574682127LLU;

    t61 = (((x273/x274)*x275)|x276);

    if (t61 != 8576783349715030111LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile uint32_t x281 = UINT32_MAX;
	int8_t x282 = INT8_MAX;
	volatile int32_t x283 = INT32_MAX;
	uint16_t x284 = UINT16_MAX;

    t62 = (((x281/x282)*x283)|x284);

    if (t62 != 4261150719U) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x285 = INT64_MIN;
	int64_t x286 = INT64_MAX;
	int32_t x287 = -1;
	uint16_t x288 = UINT16_MAX;
	volatile int64_t t63 = -3575153532892LL;

    t63 = (((x285/x286)*x287)|x288);

    if (t63 != 65535LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x289 = -894LL;
	int16_t x290 = INT16_MIN;
	static uint8_t x291 = 0U;
	static volatile int8_t x292 = -1;

    t64 = (((x289/x290)*x291)|x292);

    if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x293 = UINT8_MAX;
	static volatile uint16_t x295 = UINT16_MAX;
	volatile int32_t t65 = -96907;

    t65 = (((x293/x294)*x295)|x296);

    if (t65 != -104988674) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x301 = UINT16_MAX;
	int32_t x302 = INT32_MIN;
	volatile uint16_t x303 = 3996U;
	int32_t x304 = INT32_MIN;
	volatile int32_t t66 = INT32_MIN;

    t66 = (((x301/x302)*x303)|x304);

    if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x305 = INT16_MIN;
	static int8_t x306 = INT8_MIN;
	volatile uint8_t x308 = UINT8_MAX;
	static volatile int32_t t67 = -16;

    t67 = (((x305/x306)*x307)|x308);

    if (t67 != -32513) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint32_t x310 = 9U;
	int16_t x311 = INT16_MAX;
	static uint64_t t68 = UINT64_MAX;

    t68 = (((x309/x310)*x311)|x312);

    if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x313 = 112U;
	static int64_t x314 = INT64_MAX;
	int64_t x315 = -1LL;
	volatile int32_t x316 = INT32_MAX;
	volatile int64_t t69 = 2737772578117109030LL;

    t69 = (((x313/x314)*x315)|x316);

    if (t69 != 2147483647LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x317 = -3;
	uint8_t x319 = UINT8_MAX;
	volatile int32_t x320 = INT32_MIN;

    t70 = (((x317/x318)*x319)|x320);

    if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile uint16_t x321 = UINT16_MAX;
	volatile int16_t x322 = INT16_MIN;
	uint32_t x323 = 497U;
	static int32_t x324 = INT32_MIN;

    t71 = (((x321/x322)*x323)|x324);

    if (t71 != 4294966799U) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x325 = -1;
	uint8_t x326 = 2U;
	int64_t x327 = INT64_MIN;
	uint8_t x328 = 1U;
	static int64_t t72 = -997853111684452385LL;

    t72 = (((x325/x326)*x327)|x328);

    if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x333 = UINT8_MAX;
	static int64_t x334 = INT64_MIN;
	static int64_t x335 = INT64_MIN;
	uint16_t x336 = 1572U;

    t73 = (((x333/x334)*x335)|x336);

    if (t73 != 1572LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x337 = INT8_MAX;
	uint8_t x338 = UINT8_MAX;
	int64_t x339 = INT64_MAX;

    t74 = (((x337/x338)*x339)|x340);

    if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x341 = 57657U;
	int16_t x342 = INT16_MAX;
	uint32_t t75 = UINT32_MAX;

    t75 = (((x341/x342)*x343)|x344);

    if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x345 = 52656U;
	static uint32_t x346 = 15228U;
	static uint64_t x347 = 11LLU;
	volatile uint64_t t76 = 2001088573177459201LLU;

    t76 = (((x345/x346)*x347)|x348);

    if (t76 != 299LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x351 = -99LL;
	int64_t x352 = -1LL;
	volatile int64_t t77 = 15708565929LL;

    t77 = (((x349/x350)*x351)|x352);

    if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x357 = -1LL;
	int16_t x359 = -1;
	uint64_t t78 = 5LLU;

    t78 = (((x357/x358)*x359)|x360);

    if (t78 != 696038LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x361 = UINT16_MAX;
	volatile int32_t x362 = INT32_MAX;
	volatile int8_t x364 = 6;
	int32_t t79 = -14176;

    t79 = (((x361/x362)*x363)|x364);

    if (t79 != 6) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x365 = -7254830;
	int8_t x366 = 56;
	static volatile int8_t x367 = -1;
	uint64_t x368 = 319017762619810LLU;
	volatile uint64_t t80 = 353855359816635591LLU;

    t80 = (((x365/x366)*x367)|x368);

    if (t80 != 319017762683822LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x370 = -171462137;
	uint8_t x371 = 30U;
	uint32_t x372 = 1U;

    t81 = (((x369/x370)*x371)|x372);

    if (t81 != 1U) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x373 = INT32_MAX;
	volatile int64_t x376 = 1056LL;
	volatile uint64_t t82 = 18197LLU;

    t82 = (((x373/x374)*x375)|x376);

    if (t82 != 1096836359559320883LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x377 = 0;
	int64_t x378 = INT64_MIN;
	uint16_t x380 = UINT16_MAX;
	volatile int64_t t83 = -258026007811427885LL;

    t83 = (((x377/x378)*x379)|x380);

    if (t83 != 65535LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x381 = 176U;
	static uint32_t x383 = UINT32_MAX;
	int16_t x384 = INT16_MAX;

    t84 = (((x381/x382)*x383)|x384);

    if (t84 != 32767LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x385 = 59418620306181734LLU;
	volatile uint16_t x386 = 8685U;
	int8_t x387 = 1;
	int32_t x388 = INT32_MAX;
	uint64_t t85 = 27890LLU;

    t85 = (((x385/x386)*x387)|x388);

    if (t85 != 6841882902527LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x393 = INT32_MIN;
	static uint64_t x394 = 60LLU;
	static int16_t x395 = INT16_MIN;
	int8_t x396 = INT8_MIN;
	uint64_t t86 = 1LLU;

    t86 = (((x393/x394)*x395)|x396);

    if (t86 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x401 = INT32_MAX;
	int64_t x402 = INT64_MIN;
	int64_t x404 = INT64_MIN;
	int64_t t87 = INT64_MIN;

    t87 = (((x401/x402)*x403)|x404);

    if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x405 = 25U;
	volatile uint16_t x406 = UINT16_MAX;
	volatile int8_t x407 = -14;
	uint16_t x408 = 20U;
	volatile uint32_t t88 = 7603U;

    t88 = (((x405/x406)*x407)|x408);

    if (t88 != 20U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x409 = UINT64_MAX;
	static uint32_t x410 = UINT32_MAX;
	uint64_t x411 = 628655580276LLU;
	uint16_t x412 = 13U;
	uint64_t t89 = 444453000682092889LLU;

    t89 = (((x409/x410)*x411)|x412);

    if (t89 != 6830523600383698045LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x413 = -12628;
	int32_t x414 = 1;
	int8_t x415 = INT8_MAX;
	int16_t x416 = INT16_MAX;

    t90 = (((x413/x414)*x415)|x416);

    if (t90 != -1572865) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x417 = INT16_MAX;
	uint8_t x419 = UINT8_MAX;
	static int32_t x420 = -7564225;
	static volatile int32_t t91 = -1;

    t91 = (((x417/x418)*x419)|x420);

    if (t91 != -7564225) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x421 = 1;
	static int16_t x422 = INT16_MIN;
	static uint32_t x424 = UINT32_MAX;

    t92 = (((x421/x422)*x423)|x424);

    if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x429 = INT64_MIN;
	int8_t x431 = INT8_MIN;
	static int64_t t93 = -2075201321697769561LL;

    t93 = (((x429/x430)*x431)|x432);

    if (t93 != -10624LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x433 = 977LLU;
	uint8_t x434 = UINT8_MAX;
	int16_t x435 = INT16_MIN;
	volatile int32_t x436 = INT32_MAX;
	uint64_t t94 = UINT64_MAX;

    t94 = (((x433/x434)*x435)|x436);

    if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x437 = INT8_MAX;
	static int64_t x438 = INT64_MIN;
	int64_t x439 = -1LL;
	uint8_t x440 = UINT8_MAX;
	volatile int64_t t95 = -3986248LL;

    t95 = (((x437/x438)*x439)|x440);

    if (t95 != 255LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x441 = 244514972;
	int32_t x442 = 111;
	static uint8_t x443 = UINT8_MAX;
	uint16_t x444 = 2U;
	int32_t t96 = -188486;

    t96 = (((x441/x442)*x443)|x444);

    if (t96 != 561723435) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x446 = -1;
	static int32_t x447 = -1;
	static volatile int32_t x448 = 1;

    t97 = (((x445/x446)*x447)|x448);

    if (t97 != -127) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x449 = INT16_MIN;
	volatile int64_t x450 = 15564250416465LL;
	volatile int64_t x451 = -1LL;
	static int32_t x452 = INT32_MIN;
	volatile int64_t t98 = -682206765LL;

    t98 = (((x449/x450)*x451)|x452);

    if (t98 != -2147483648LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x454 = UINT32_MAX;
	int32_t x455 = -2;
	int64_t x456 = 876468138338466LL;
	int64_t t99 = -7598458996512120LL;

    t99 = (((x453/x454)*x455)|x456);

    if (t99 != 876468138339818LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x457 = 30436751702413LLU;
	static int32_t x459 = INT32_MIN;
	int64_t x460 = INT64_MIN;
	volatile uint64_t t100 = 13054102814846LLU;

    t100 = (((x457/x458)*x459)|x460);

    if (t100 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint64_t x465 = 116129838506407LLU;
	static int32_t x468 = INT32_MAX;
	volatile uint64_t t101 = 80LLU;

    t101 = (((x465/x466)*x467)|x468);

    if (t101 != 8226510767403302911LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x469 = 10U;
	int8_t x470 = INT8_MIN;
	uint64_t x471 = 1324773492240LLU;

    t102 = (((x469/x470)*x471)|x472);

    if (t102 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x473 = 876080701870565LL;
	uint16_t x474 = 26509U;
	int64_t x476 = INT64_MAX;
	volatile int64_t t103 = INT64_MAX;

    t103 = (((x473/x474)*x475)|x476);

    if (t103 != INT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x477 = UINT8_MAX;
	int16_t x478 = INT16_MIN;
	int64_t x480 = INT64_MIN;
	int64_t t104 = INT64_MIN;

    t104 = (((x477/x478)*x479)|x480);

    if (t104 != INT64_MIN) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x481 = 2U;
	int16_t x482 = INT16_MIN;
	int16_t x484 = INT16_MAX;
	int64_t t105 = 18041616LL;

    t105 = (((x481/x482)*x483)|x484);

    if (t105 != 32767LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x486 = INT16_MIN;
	static volatile uint16_t x488 = 80U;
	int32_t t106 = 6925;

    t106 = (((x485/x486)*x487)|x488);

    if (t106 != 80) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x489 = 3966883U;
	static int64_t x490 = INT64_MAX;
	volatile int64_t x492 = INT64_MIN;
	static int64_t t107 = INT64_MIN;

    t107 = (((x489/x490)*x491)|x492);

    if (t107 != INT64_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x493 = INT16_MIN;
	int64_t x494 = 10399732LL;
	int8_t x495 = 6;
	int16_t x496 = -1;
	volatile int64_t t108 = 16431107102LL;

    t108 = (((x493/x494)*x495)|x496);

    if (t108 != -1LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x498 = INT32_MIN;
	int32_t x499 = -1;
	int16_t x500 = INT16_MAX;
	int32_t t109 = -6095;

    t109 = (((x497/x498)*x499)|x500);

    if (t109 != 32767) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x501 = UINT16_MAX;
	int32_t x502 = -22;
	int8_t x503 = INT8_MIN;
	volatile int32_t t110 = -1;

    t110 = (((x501/x502)*x503)|x504);

    if (t110 != -12032) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x509 = INT16_MAX;
	int16_t x510 = -124;
	volatile int16_t x511 = INT16_MIN;
	static volatile int64_t t111 = 2771LL;

    t111 = (((x509/x510)*x511)|x512);

    if (t111 != -9223372036846125056LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x513 = 86316U;
	int16_t x514 = INT16_MIN;
	static int64_t x515 = INT64_MIN;
	int64_t x516 = INT64_MIN;
	int64_t t112 = INT64_MIN;

    t112 = (((x513/x514)*x515)|x516);

    if (t112 != INT64_MIN) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x517 = UINT8_MAX;
	static uint64_t x518 = 25017274477LLU;
	int8_t x519 = INT8_MIN;
	volatile uint64_t x520 = 2789144LLU;
	static uint64_t t113 = 361837093LLU;

    t113 = (((x517/x518)*x519)|x520);

    if (t113 != 2789144LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x522 = INT32_MIN;
	static int8_t x524 = 0;
	volatile int32_t t114 = -644;

    t114 = (((x521/x522)*x523)|x524);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x525 = UINT32_MAX;
	uint32_t x526 = 281U;
	volatile uint16_t x527 = 3995U;
	static uint32_t t115 = 63267U;

    t115 = (((x525/x526)*x527)|x528);

    if (t115 != 4294176751U) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x529 = 429U;
	volatile int64_t x530 = INT64_MAX;
	int64_t x532 = -1LL;
	int64_t t116 = -531132255802274063LL;

    t116 = (((x529/x530)*x531)|x532);

    if (t116 != -1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x538 = UINT64_MAX;
	volatile int8_t x539 = -1;
	uint16_t x540 = 1908U;
	uint64_t t117 = 1690858LLU;

    t117 = (((x537/x538)*x539)|x540);

    if (t117 != 1908LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x545 = INT8_MIN;
	int64_t x546 = -1LL;
	volatile int64_t t118 = -612LL;

    t118 = (((x545/x546)*x547)|x548);

    if (t118 != -1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x549 = -1;
	static uint8_t x550 = 1U;
	volatile uint8_t x551 = 21U;
	int8_t x552 = INT8_MAX;
	static volatile int32_t t119 = -5547154;

    t119 = (((x549/x550)*x551)|x552);

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x554 = -1;
	volatile int16_t x555 = -1;
	static int32_t x556 = INT32_MAX;
	static int64_t t120 = -32919311LL;

    t120 = (((x553/x554)*x555)|x556);

    if (t120 != 2147483647LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x557 = -1434243824LL;
	volatile int8_t x558 = -22;
	int8_t x559 = INT8_MIN;
	int8_t x560 = -4;

    t121 = (((x557/x558)*x559)|x560);

    if (t121 != -4LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x561 = 150;
	int32_t x562 = INT32_MIN;
	int8_t x563 = INT8_MIN;
	uint16_t x564 = 1360U;
	int32_t t122 = 3807642;

    t122 = (((x561/x562)*x563)|x564);

    if (t122 != 1360) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x565 = 25U;
	uint32_t x566 = UINT32_MAX;
	int16_t x568 = -1;
	int64_t t123 = 11LL;

    t123 = (((x565/x566)*x567)|x568);

    if (t123 != -1LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x569 = INT32_MIN;
	volatile int64_t x570 = 24955005LL;
	uint16_t x572 = 23603U;
	volatile uint64_t t124 = 345342LLU;

    t124 = (((x569/x570)*x571)|x572);

    if (t124 != 23671LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x573 = INT32_MIN;
	static uint8_t x574 = 112U;
	volatile int8_t x575 = -13;
	uint64_t x576 = 354LLU;
	volatile uint64_t t125 = 246850977052LLU;

    t125 = (((x573/x574)*x575)|x576);

    if (t125 != 249261559LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x577 = 51U;
	int16_t x579 = 31;
	int8_t x580 = -1;
	static volatile int32_t t126 = 10;

    t126 = (((x577/x578)*x579)|x580);

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x582 = INT32_MIN;
	uint8_t x583 = 2U;
	int16_t x584 = -26;
	volatile int32_t t127 = -65340;

    t127 = (((x581/x582)*x583)|x584);

    if (t127 != -26) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x586 = INT8_MAX;
	volatile uint16_t x588 = UINT16_MAX;
	volatile int32_t t128 = -755;

    t128 = (((x585/x586)*x587)|x588);

    if (t128 != 65535) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int32_t x590 = -1;
	int32_t x591 = INT32_MAX;
	uint8_t x592 = 15U;

    t129 = (((x589/x590)*x591)|x592);

    if (t129 != INT32_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x593 = 563940;
	volatile int8_t x594 = INT8_MIN;
	uint16_t x595 = 1034U;
	int32_t x596 = INT32_MIN;
	int32_t t130 = 236022977;

    t130 = (((x593/x594)*x595)|x596);

    if (t130 != -4554770) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x597 = 988715444103LLU;
	uint64_t x598 = 1LLU;
	uint16_t x599 = UINT16_MAX;
	int64_t x600 = INT64_MAX;
	uint64_t t131 = 30969LLU;

    t131 = (((x597/x598)*x599)|x600);

    if (t131 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x601 = UINT16_MAX;
	uint64_t x602 = UINT64_MAX;
	static volatile uint64_t t132 = UINT64_MAX;

    t132 = (((x601/x602)*x603)|x604);

    if (t132 != UINT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x605 = -1LL;
	volatile int32_t x606 = INT32_MAX;

    t133 = (((x605/x606)*x607)|x608);

    if (t133 != -2147483648LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x609 = INT64_MIN;
	int32_t x611 = INT32_MIN;
	int16_t x612 = 0;
	int64_t t134 = 1LL;

    t134 = (((x609/x610)*x611)|x612);

    if (t134 != -2147483648LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x614 = INT16_MIN;
	int64_t x615 = -1LL;
	volatile int32_t x616 = INT32_MIN;
	int64_t t135 = -217243758482LL;

    t135 = (((x613/x614)*x615)|x616);

    if (t135 != -65536LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x621 = INT8_MIN;
	uint16_t x622 = 919U;
	int8_t x623 = -1;
	static volatile uint64_t x624 = 401904994LLU;
	uint64_t t136 = 519175457846624LLU;

    t136 = (((x621/x622)*x623)|x624);

    if (t136 != 401904994LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x628 = INT16_MIN;
	int32_t t137 = -1975;

    t137 = (((x625/x626)*x627)|x628);

    if (t137 != -32768) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x630 = INT16_MIN;
	int64_t x631 = -1LL;
	uint64_t t138 = 124733419442LLU;

    t138 = (((x629/x630)*x631)|x632);

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x633 = 48107297U;
	int32_t x634 = INT32_MIN;
	volatile int8_t x635 = INT8_MIN;
	uint32_t t139 = 10U;

    t139 = (((x633/x634)*x635)|x636);

    if (t139 != 13U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x637 = 128450277U;
	static uint32_t x638 = 1U;
	uint32_t x639 = UINT32_MAX;
	volatile uint32_t t140 = 700U;

    t140 = (((x637/x638)*x639)|x640);

    if (t140 != 4166582271U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x641 = 19416491898661LLU;
	volatile uint64_t x642 = 17513010912004LLU;
	static uint64_t x643 = UINT64_MAX;
	volatile uint64_t t141 = UINT64_MAX;

    t141 = (((x641/x642)*x643)|x644);

    if (t141 != UINT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x649 = INT16_MIN;
	uint16_t x650 = 1U;
	volatile int16_t x651 = -564;

    t142 = (((x649/x650)*x651)|x652);

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x653 = 1;
	uint8_t x655 = 36U;
	int64_t x656 = 149949798986LL;
	int64_t t143 = 346LL;

    t143 = (((x653/x654)*x655)|x656);

    if (t143 != 149949798986LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x661 = 1038265U;
	int8_t x663 = -1;
	uint32_t x664 = 5342820U;
	int64_t t144 = -106LL;

    t144 = (((x661/x662)*x663)|x664);

    if (t144 != 5342820LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x665 = INT32_MIN;
	volatile int64_t x666 = INT64_MIN;
	static uint32_t x667 = UINT32_MAX;
	static int8_t x668 = 0;
	static int64_t t145 = -247967254LL;

    t145 = (((x665/x666)*x667)|x668);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x669 = INT32_MIN;
	static uint32_t x670 = 9726U;
	uint16_t x672 = 5U;
	static uint32_t t146 = 4U;

    t146 = (((x669/x670)*x671)|x672);

    if (t146 != 3040874413U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x673 = -3369054LL;
	static int8_t x675 = INT8_MIN;
	int64_t x676 = -616510LL;
	volatile int64_t t147 = 922353704510LL;

    t147 = (((x673/x674)*x675)|x676);

    if (t147 != -616510LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x677 = INT32_MIN;
	volatile int32_t x678 = INT32_MIN;
	int32_t x679 = INT32_MIN;
	static int8_t x680 = INT8_MIN;
	volatile int32_t t148 = -17783070;

    t148 = (((x677/x678)*x679)|x680);

    if (t148 != -128) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x681 = -1;
	static int8_t x682 = INT8_MIN;
	uint16_t x683 = 763U;
	int64_t x684 = INT64_MIN;
	int64_t t149 = INT64_MIN;

    t149 = (((x681/x682)*x683)|x684);

    if (t149 != INT64_MIN) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x685 = -1;
	static int32_t x686 = INT32_MAX;
	volatile int64_t x687 = 255798081716LL;
	volatile int16_t x688 = -6;
	volatile int64_t t150 = -8284612LL;

    t150 = (((x685/x686)*x687)|x688);

    if (t150 != -6LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x689 = INT64_MIN;
	int64_t x691 = -735LL;
	uint8_t x692 = 47U;
	static uint64_t t151 = 3921638737LLU;

    t151 = (((x689/x690)*x691)|x692);

    if (t151 != 18446744073709070959LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x697 = 543369737156LLU;
	int8_t x698 = 4;
	volatile uint16_t x699 = 345U;
	static uint8_t x700 = 30U;
	uint64_t t152 = 40LLU;

    t152 = (((x697/x698)*x699)|x700);

    if (t152 != 46865639829727LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x701 = 1;
	int32_t x703 = INT32_MIN;
	int16_t x704 = -615;
	volatile int32_t t153 = 6350;

    t153 = (((x701/x702)*x703)|x704);

    if (t153 != -615) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x705 = -1;
	volatile int64_t x706 = -1LL;
	volatile int8_t x707 = INT8_MIN;
	int16_t x708 = -8;
	volatile int64_t t154 = 89625361365397LL;

    t154 = (((x705/x706)*x707)|x708);

    if (t154 != -8LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x710 = 5493U;
	int64_t x711 = INT64_MAX;
	static uint32_t x712 = 1942125U;
	static volatile int64_t t155 = -284679764093397667LL;

    t155 = (((x709/x710)*x711)|x712);

    if (t155 != 1942125LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x713 = 6;
	int8_t x714 = INT8_MIN;
	int32_t x715 = -62270;
	int32_t x716 = INT32_MAX;
	int32_t t156 = INT32_MAX;

    t156 = (((x713/x714)*x715)|x716);

    if (t156 != INT32_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x721 = UINT64_MAX;
	volatile uint16_t x722 = UINT16_MAX;
	int16_t x723 = INT16_MIN;

    t157 = (((x721/x722)*x723)|x724);

    if (t157 != 9223231299366420479LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x729 = INT8_MIN;
	int8_t x730 = -1;
	static uint16_t x731 = 1U;
	uint16_t x732 = 3U;

    t158 = (((x729/x730)*x731)|x732);

    if (t158 != 131) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x733 = INT32_MIN;
	int16_t x734 = -1467;
	uint64_t x735 = 2067552589664051722LLU;
	uint32_t x736 = UINT32_MAX;

    t159 = (((x733/x734)*x735)|x736);

    if (t159 != 13340243948375900159LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x738 = INT64_MIN;
	int8_t x739 = INT8_MIN;
	int64_t t160 = -628859LL;

    t160 = (((x737/x738)*x739)|x740);

    if (t160 != -128LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x741 = 497040916;
	int64_t x742 = INT64_MIN;
	static int32_t x743 = INT32_MIN;
	int64_t x744 = INT64_MIN;
	volatile int64_t t161 = INT64_MIN;

    t161 = (((x741/x742)*x743)|x744);

    if (t161 != INT64_MIN) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x745 = -1;
	int16_t x746 = INT16_MIN;
	int16_t x747 = INT16_MIN;
	uint8_t x748 = 8U;
	int32_t t162 = -15;

    t162 = (((x745/x746)*x747)|x748);

    if (t162 != 8) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x749 = 2;
	uint16_t x751 = UINT16_MAX;
	uint64_t x752 = UINT64_MAX;
	uint64_t t163 = UINT64_MAX;

    t163 = (((x749/x750)*x751)|x752);

    if (t163 != UINT64_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x753 = INT32_MIN;
	int8_t x754 = INT8_MAX;
	volatile uint8_t x755 = 3U;
	volatile int16_t x756 = INT16_MIN;
	volatile int32_t t164 = -141710490;

    t164 = (((x753/x754)*x755)|x756);

    if (t164 != -3096) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x758 = INT64_MAX;
	int8_t x759 = 16;
	uint32_t x760 = 14U;
	int64_t t165 = -15442LL;

    t165 = (((x757/x758)*x759)|x760);

    if (t165 != 14LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x762 = 6311LL;
	volatile int16_t x763 = 140;
	static uint64_t t166 = 24277239006134LLU;

    t166 = (((x761/x762)*x763)|x764);

    if (t166 != 513020LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x765 = 1;
	int32_t x766 = INT32_MIN;
	int64_t x767 = INT64_MAX;
	volatile int64_t t167 = 48695714072LL;

    t167 = (((x765/x766)*x767)|x768);

    if (t167 != -128LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x770 = 70;
	uint32_t x772 = 106U;
	uint32_t t168 = 126440409U;

    t168 = (((x769/x770)*x771)|x772);

    if (t168 != 4294869098U) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x773 = INT64_MIN;
	int64_t x774 = INT64_MIN;
	uint64_t x775 = 61416928358942LLU;
	volatile uint64_t t169 = 2490504LLU;

    t169 = (((x773/x774)*x775)|x776);

    if (t169 != 61416928358974LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x777 = -1;
	volatile int16_t x778 = -1;
	int8_t x779 = -12;
	int64_t x780 = -199666019755970LL;
	static int64_t t170 = 1003414LL;

    t170 = (((x777/x778)*x779)|x780);

    if (t170 != -2LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x785 = -71017596LL;
	uint32_t x786 = 32975442U;
	int8_t x787 = INT8_MAX;
	static uint16_t x788 = 8566U;
	int64_t t171 = 774460544LL;

    t171 = (((x785/x786)*x787)|x788);

    if (t171 != -138LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x789 = 14;
	int16_t x790 = -1;
	static uint32_t x791 = 941420U;
	int64_t x792 = 0LL;
	volatile int64_t t172 = -127339222134278084LL;

    t172 = (((x789/x790)*x791)|x792);

    if (t172 != 4281787416LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x793 = INT8_MIN;
	int16_t x794 = 1;
	int64_t x796 = -1LL;
	volatile int64_t t173 = -167835916909322LL;

    t173 = (((x793/x794)*x795)|x796);

    if (t173 != -1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint16_t x798 = 27U;
	static int32_t x799 = INT32_MAX;
	static int32_t t174 = 0;

    t174 = (((x797/x798)*x799)|x800);

    if (t174 != 16) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x801 = 12728346727863LLU;
	int8_t x803 = -50;
	uint64_t t175 = 178LLU;

    t175 = (((x801/x802)*x803)|x804);

    if (t175 != 65535LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x805 = INT8_MAX;
	volatile int64_t x806 = INT64_MAX;
	volatile uint8_t x807 = 2U;
	int64_t t176 = -377043397749065244LL;

    t176 = (((x805/x806)*x807)|x808);

    if (t176 != 28795LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x809 = -1;
	int8_t x810 = -1;
	int16_t x811 = INT16_MIN;
	int32_t x812 = -101;
	volatile int32_t t177 = -28;

    t177 = (((x809/x810)*x811)|x812);

    if (t177 != -101) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x813 = 7;
	int32_t x814 = INT32_MIN;
	int16_t x815 = -508;
	static int32_t x816 = INT32_MIN;
	volatile int32_t t178 = INT32_MIN;

    t178 = (((x813/x814)*x815)|x816);

    if (t178 != INT32_MIN) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x817 = UINT16_MAX;
	uint16_t x818 = UINT16_MAX;
	volatile uint64_t x819 = 9770504LLU;
	uint8_t x820 = 1U;
	volatile uint64_t t179 = 6831488499808522363LLU;

    t179 = (((x817/x818)*x819)|x820);

    if (t179 != 9770505LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x822 = INT8_MIN;
	int64_t x823 = 50LL;
	int32_t x824 = INT32_MIN;
	int64_t t180 = 2592053535LL;

    t180 = (((x821/x822)*x823)|x824);

    if (t180 != -2145395598LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x826 = 18132233U;
	static int16_t x827 = -1;
	int32_t x828 = INT32_MAX;

    t181 = (((x825/x826)*x827)|x828);

    if (t181 != 508953624575LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x829 = INT16_MAX;
	uint64_t x830 = 115491109852045LLU;
	int64_t x831 = -1LL;
	volatile uint16_t x832 = 29U;
	volatile uint64_t t182 = 21189786LLU;

    t182 = (((x829/x830)*x831)|x832);

    if (t182 != 29LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile uint8_t x833 = 0U;
	volatile uint16_t x834 = UINT16_MAX;
	uint32_t x835 = 7080U;
	static int64_t x836 = INT64_MAX;
	volatile int64_t t183 = INT64_MAX;

    t183 = (((x833/x834)*x835)|x836);

    if (t183 != INT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x837 = 104046163197890LLU;
	static int32_t x839 = 444;
	int8_t x840 = -1;
	uint64_t t184 = UINT64_MAX;

    t184 = (((x837/x838)*x839)|x840);

    if (t184 != UINT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x842 = INT64_MAX;
	volatile uint64_t t185 = UINT64_MAX;

    t185 = (((x841/x842)*x843)|x844);

    if (t185 != UINT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x845 = UINT64_MAX;
	int32_t x846 = 4928;
	static int8_t x847 = 57;
	static int64_t x848 = INT64_MAX;
	uint64_t t186 = 14320390522LLU;

    t186 = (((x845/x846)*x847)|x848);

    if (t186 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x853 = 49U;
	static int32_t x854 = INT32_MIN;
	int16_t x855 = INT16_MIN;
	int8_t x856 = INT8_MIN;
	volatile int32_t t187 = 0;

    t187 = (((x853/x854)*x855)|x856);

    if (t187 != -128) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int16_t x857 = INT16_MAX;
	int16_t x858 = INT16_MIN;
	volatile int64_t x859 = -10LL;
	int32_t x860 = 254984094;
	static int64_t t188 = 1668377867274LL;

    t188 = (((x857/x858)*x859)|x860);

    if (t188 != 254984094LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x861 = INT8_MIN;
	uint32_t x862 = 3U;
	uint8_t x863 = 49U;
	volatile uint32_t t189 = 46U;

    t189 = (((x861/x862)*x863)|x864);

    if (t189 != 1431653643U) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int32_t x869 = -1;
	uint8_t x870 = UINT8_MAX;
	volatile uint64_t x871 = UINT64_MAX;
	uint64_t t190 = 305212801LLU;

    t190 = (((x869/x870)*x871)|x872);

    if (t190 != 4294967295LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x874 = INT16_MIN;
	static int16_t x876 = -1;
	volatile uint32_t t191 = UINT32_MAX;

    t191 = (((x873/x874)*x875)|x876);

    if (t191 != UINT32_MAX) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x877 = 10U;
	static uint64_t x878 = 215788LLU;
	int32_t x879 = INT32_MIN;
	static int16_t x880 = -2;
	uint64_t t192 = 7439024662LLU;

    t192 = (((x877/x878)*x879)|x880);

    if (t192 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x881 = INT8_MIN;
	static volatile uint8_t x882 = 2U;
	uint64_t x883 = 29017LLU;
	volatile int32_t x884 = -1;
	volatile uint64_t t193 = UINT64_MAX;

    t193 = (((x881/x882)*x883)|x884);

    if (t193 != UINT64_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x885 = -250226826;
	volatile int8_t x886 = -1;
	volatile int8_t x887 = -1;
	uint8_t x888 = 0U;
	volatile int32_t t194 = 337;

    t194 = (((x885/x886)*x887)|x888);

    if (t194 != -250226826) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x889 = 869U;
	uint16_t x890 = 152U;
	static int8_t x891 = -18;
	int32_t x892 = INT32_MAX;
	volatile uint32_t t195 = UINT32_MAX;

    t195 = (((x889/x890)*x891)|x892);

    if (t195 != UINT32_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x893 = UINT16_MAX;
	static uint16_t x894 = UINT16_MAX;
	uint16_t x895 = 123U;
	uint64_t x896 = 15912876912634804LLU;
	uint64_t t196 = 190LLU;

    t196 = (((x893/x894)*x895)|x896);

    if (t196 != 15912876912634879LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x897 = 345073440U;
	int16_t x898 = INT16_MAX;
	static int32_t x899 = INT32_MAX;
	int64_t x900 = -1LL;
	static int64_t t197 = 966LL;

    t197 = (((x897/x898)*x899)|x900);

    if (t197 != -1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x901 = INT8_MAX;
	uint8_t x902 = 73U;
	int32_t x903 = INT32_MIN;
	volatile uint64_t x904 = UINT64_MAX;
	uint64_t t198 = UINT64_MAX;

    t198 = (((x901/x902)*x903)|x904);

    if (t198 != UINT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x905 = 3U;
	uint8_t x906 = UINT8_MAX;
	int16_t x907 = -1;
	int16_t x908 = -1;
	static uint32_t t199 = UINT32_MAX;

    t199 = (((x905/x906)*x907)|x908);

    if (t199 != UINT32_MAX) { NG(); } else { ; }
	
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

