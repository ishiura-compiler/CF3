
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

static int8_t x8 = INT8_MIN;
int32_t x9 = -1;
int8_t x12 = 2;
volatile uint32_t t2 = UINT32_MAX;
int32_t x21 = INT32_MIN;
int32_t x24 = -789;
uint16_t x25 = UINT16_MAX;
static int32_t x38 = -287067875;
int8_t x45 = 1;
volatile uint64_t t10 = UINT64_MAX;
int16_t x53 = INT16_MIN;
int8_t x54 = 7;
volatile uint64_t t11 = 17096263138LLU;
uint64_t t12 = 40951466319LLU;
uint8_t x63 = UINT8_MAX;
int8_t x65 = INT8_MAX;
int64_t t14 = 266861657771325LL;
volatile int16_t x78 = -1;
static volatile uint16_t x82 = 7431U;
volatile int16_t x83 = INT16_MAX;
static int16_t x86 = -1;
static int64_t x98 = 4367158882834460LL;
uint16_t x100 = UINT16_MAX;
static volatile int64_t t21 = -1754067914571LL;
int32_t x107 = -4187360;
static int64_t x115 = -1LL;
volatile uint32_t x129 = 48348U;
uint32_t t28 = 1705U;
uint8_t x133 = 127U;
uint8_t x142 = 7U;
static volatile int16_t x150 = 1;
int32_t x152 = INT32_MIN;
volatile uint64_t t33 = 58845599753674163LLU;
volatile int64_t x169 = -21122990254608315LL;
volatile int16_t x170 = -1;
int64_t x171 = -1LL;
static volatile int8_t x179 = 3;
static uint32_t x188 = UINT32_MAX;
uint8_t x189 = 19U;
uint8_t x200 = 94U;
int32_t x203 = INT32_MIN;
uint32_t x215 = 1U;
volatile uint32_t t46 = 856124U;
uint16_t x217 = 0U;
int8_t x218 = 1;
uint64_t t49 = UINT64_MAX;
volatile uint16_t x229 = 1U;
static volatile uint32_t x231 = 31381U;
uint64_t x232 = UINT64_MAX;
uint8_t x240 = UINT8_MAX;
volatile int64_t t54 = 27709753123LL;
static uint16_t x249 = UINT16_MAX;
uint16_t x255 = 438U;
volatile int64_t t56 = -1LL;
volatile int32_t x260 = INT32_MIN;
int16_t x261 = -10209;
volatile uint8_t x268 = 9U;
volatile uint64_t t59 = 154141434577LLU;
static int16_t x278 = -18;
int32_t x283 = INT32_MIN;
uint64_t x289 = 1118843374747956955LLU;
static uint32_t x291 = 0U;
int64_t t66 = 264603LL;
uint64_t t67 = UINT64_MAX;
uint8_t x313 = 99U;
volatile uint64_t t70 = 80772LLU;
int64_t x321 = INT64_MIN;
volatile uint64_t x323 = UINT64_MAX;
uint64_t t71 = UINT64_MAX;
volatile int16_t x340 = INT16_MIN;
static volatile int32_t t74 = -1764;
static int64_t x342 = 1LL;
int64_t x353 = -1678605021827LL;
volatile int64_t x356 = INT64_MAX;
int64_t t78 = 2848753248914LL;
static uint8_t x362 = 82U;
static int8_t x363 = 12;
static int32_t x378 = 67723;
uint32_t x390 = 1U;
int16_t x392 = INT16_MIN;
int64_t t86 = 1140LL;
volatile uint64_t t88 = UINT64_MAX;
volatile uint32_t x401 = 5219U;
int16_t x406 = -1;
uint16_t x413 = UINT16_MAX;
volatile int16_t x420 = INT16_MAX;
static int32_t x425 = -1;
uint64_t x435 = UINT64_MAX;
uint64_t t95 = UINT64_MAX;
int64_t x452 = -1LL;
volatile uint64_t x455 = 21428971LLU;
volatile int16_t x458 = -3;
volatile int64_t x461 = -1LL;
volatile uint64_t x464 = 1LLU;
static int64_t x475 = -46LL;
uint8_t x477 = 3U;
int32_t t105 = -30669;
uint16_t x484 = UINT16_MAX;
uint64_t t107 = 6689682855LLU;
uint32_t x489 = UINT32_MAX;
int32_t x492 = -1;
uint8_t x495 = 7U;
int16_t x498 = -1;
volatile int8_t x507 = 47;
int32_t t112 = -516014875;
uint64_t x524 = UINT64_MAX;
uint64_t t115 = UINT64_MAX;
int16_t x526 = INT16_MAX;
int16_t x530 = INT16_MAX;
int8_t x532 = 13;
static uint8_t x538 = 70U;
int8_t x544 = INT8_MIN;
static int64_t x547 = -1LL;
int8_t x548 = INT8_MAX;
uint64_t x549 = 49462080979759LLU;
uint16_t x551 = 1521U;
uint16_t x552 = 25U;
static uint8_t x556 = 0U;
static volatile int16_t x559 = -7;
int16_t x572 = -1;
volatile int32_t t128 = -16558796;
uint64_t x600 = UINT64_MAX;
volatile int64_t x605 = -1LL;
static int32_t x616 = INT32_MAX;
static int32_t x617 = -1;
int64_t x628 = INT64_MAX;
volatile int64_t t139 = INT64_MAX;
volatile uint64_t t140 = UINT64_MAX;
int32_t x635 = -10370;
static int16_t x643 = INT16_MIN;
int32_t x645 = 132395;
int64_t x650 = -1LL;
int64_t x654 = INT64_MIN;
static int32_t x656 = 601;
static uint64_t x657 = 263983030LLU;
int16_t x659 = -1;
uint16_t x660 = 10U;
static volatile uint64_t t147 = UINT64_MAX;
int64_t t148 = -2848929008403619099LL;
int16_t x681 = -1168;
volatile int64_t x682 = -287541LL;
uint8_t x684 = UINT8_MAX;
int64_t x690 = INT64_MAX;
int8_t x696 = -1;
int64_t t155 = -11456944LL;
int64_t x707 = INT64_MAX;
uint64_t x708 = 29030103337847119LLU;
uint32_t x711 = 12856U;
volatile int16_t x722 = INT16_MIN;
int8_t x724 = INT8_MIN;
int8_t x725 = INT8_MIN;
uint64_t x729 = UINT64_MAX;
int8_t x730 = -1;
int64_t x736 = INT64_MIN;
int64_t x738 = -19844143325258532LL;
int8_t x740 = INT8_MIN;
int64_t t163 = -4046175579LL;
int8_t x757 = INT8_MIN;
volatile uint32_t t168 = 6513344U;
uint32_t x761 = 1338757056U;
int32_t x768 = INT32_MAX;
uint64_t x771 = 17505LLU;
volatile uint8_t x778 = 67U;
volatile uint8_t x780 = UINT8_MAX;
uint32_t x792 = 15431658U;
static volatile uint32_t t175 = UINT32_MAX;
int16_t x807 = INT16_MAX;
static uint64_t x809 = UINT64_MAX;
int64_t x814 = -52078LL;
volatile int16_t x816 = 2;
int64_t t181 = -3LL;
static uint16_t x826 = 13525U;
int16_t x827 = INT16_MAX;
int16_t x829 = -1674;
int32_t t185 = 82238;
volatile uint64_t t186 = UINT64_MAX;
static uint32_t x845 = UINT32_MAX;
int32_t x851 = 650024;
int32_t x856 = -1;
int16_t x857 = INT16_MIN;
int32_t x859 = 0;
int16_t x860 = INT16_MIN;
volatile int32_t t192 = 51376484;
volatile uint8_t x864 = 2U;
int32_t t193 = 418662;
int8_t x868 = 16;
volatile int64_t x869 = 3743437832930LL;
int8_t x881 = -1;
int16_t x884 = INT16_MAX;
static int16_t x885 = 7;
int64_t x887 = -2LL;


void f0(void) {
    	volatile int8_t x1 = INT8_MAX;
	int32_t x2 = 29347;
	int16_t x3 = INT16_MAX;
	volatile uint32_t x4 = UINT32_MAX;
	uint32_t t0 = UINT32_MAX;

    t0 = ((x1-x2)|(x3|x4));

    if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = INT32_MAX;
	int8_t x6 = 22;
	int8_t x7 = 35;
	int32_t t1 = -4148650;

    t1 = ((x5-x6)|(x7|x8));

    if (t1 != -21) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x10 = INT8_MIN;
	uint32_t x11 = UINT32_MAX;

    t2 = ((x9-x10)|(x11|x12));

    if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x17 = UINT16_MAX;
	int64_t x18 = INT64_MAX;
	int8_t x19 = INT8_MIN;
	static volatile int32_t x20 = 1109;
	static volatile int64_t t3 = 586752LL;

    t3 = ((x17-x18)|(x19|x20));

    if (t3 != -43LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x22 = -3530303;
	int32_t x23 = INT32_MIN;
	volatile int32_t t4 = -6;

    t4 = ((x21-x22)|(x23|x24));

    if (t4 != -257) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x26 = -3LL;
	uint32_t x27 = UINT32_MAX;
	uint8_t x28 = 51U;
	volatile int64_t t5 = -3750298498696809800LL;

    t5 = ((x25-x26)|(x27|x28));

    if (t5 != 4294967295LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x33 = 3698LL;
	int8_t x34 = INT8_MAX;
	volatile int32_t x35 = INT32_MIN;
	volatile uint16_t x36 = 399U;
	int64_t t6 = -726787758549083860LL;

    t6 = ((x33-x34)|(x35|x36));

    if (t6 != -2147480065LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x37 = 3;
	uint32_t x39 = 14232986U;
	uint16_t x40 = 305U;
	static volatile uint32_t t7 = 3503949U;

    t7 = ((x37-x38)|(x39|x40));

    if (t7 != 299724799U) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x41 = INT32_MIN;
	static volatile int8_t x42 = -1;
	volatile int64_t x43 = INT64_MAX;
	uint64_t x44 = 3259199734LLU;
	volatile uint64_t t8 = UINT64_MAX;

    t8 = ((x41-x42)|(x43|x44));

    if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x46 = INT16_MIN;
	volatile int32_t x47 = -1;
	static volatile int16_t x48 = INT16_MIN;
	static int32_t t9 = 92348929;

    t9 = ((x45-x46)|(x47|x48));

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x49 = UINT64_MAX;
	static uint8_t x50 = UINT8_MAX;
	volatile int16_t x51 = -1;
	uint32_t x52 = 51194U;

    t10 = ((x49-x50)|(x51|x52));

    if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x55 = 9032528632934LLU;
	uint64_t x56 = 1941078663353295151LLU;

    t11 = ((x53-x54)|(x55|x56));

    if (t11 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x57 = UINT64_MAX;
	uint64_t x58 = 992046LLU;
	volatile int64_t x59 = -918LL;
	uint32_t x60 = 4180664U;

    t12 = ((x57-x58)|(x59|x60));

    if (t12 != 18446744073709551355LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x61 = -1;
	uint32_t x62 = UINT32_MAX;
	int16_t x64 = INT16_MIN;
	volatile uint32_t t13 = 10718546U;

    t13 = ((x61-x62)|(x63|x64));

    if (t13 != 4294934783U) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x66 = INT16_MIN;
	int64_t x67 = INT64_MIN;
	static int8_t x68 = -18;

    t14 = ((x65-x66)|(x67|x68));

    if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x73 = 3420951455686384867LL;
	int8_t x74 = 0;
	int64_t x75 = -1132297302953LL;
	int16_t x76 = INT16_MAX;
	volatile int64_t t15 = -3LL;

    t15 = ((x73-x74)|(x75|x76));

    if (t15 != -28456583169LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x77 = 6610;
	uint32_t x79 = 377518880U;
	int16_t x80 = INT16_MIN;
	volatile uint32_t t16 = 14799U;

    t16 = ((x77-x78)|(x79|x80));

    if (t16 != 4294966259U) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x81 = 81682904LL;
	uint32_t x84 = 387965U;
	volatile int64_t t17 = -4LL;

    t17 = ((x81-x82)|(x83|x84));

    if (t17 != 81788927LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x85 = 1;
	int64_t x87 = -1LL;
	static int16_t x88 = -1;
	int64_t t18 = 1951751LL;

    t18 = ((x85-x86)|(x87|x88));

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x89 = -1;
	int32_t x90 = -1;
	static int16_t x91 = -1;
	volatile int64_t x92 = INT64_MAX;
	volatile int64_t t19 = 15196LL;

    t19 = ((x89-x90)|(x91|x92));

    if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x93 = -1;
	static volatile uint32_t x94 = 52976U;
	int32_t x95 = INT32_MIN;
	uint64_t x96 = 0LLU;
	static volatile uint64_t t20 = 1703037868364387814LLU;

    t20 = ((x93-x94)|(x95|x96));

    if (t20 != 18446744073709498639LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x97 = UINT8_MAX;
	static int64_t x99 = INT64_MAX;

    t21 = ((x97-x98)|(x99|x100));

    if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x101 = 608U;
	int8_t x102 = INT8_MIN;
	volatile int64_t x103 = INT64_MIN;
	static int32_t x104 = -5568;
	int64_t t22 = 62167LL;

    t22 = ((x101-x102)|(x103|x104));

    if (t22 != -5408LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x105 = 108566452198LLU;
	int32_t x106 = INT32_MAX;
	static volatile uint32_t x108 = 2060480U;
	uint64_t t23 = 1317095093488368LLU;

    t23 = ((x105-x106)|(x107|x108));

    if (t23 != 107372085223LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x109 = INT32_MIN;
	static int16_t x110 = -1;
	uint32_t x111 = 140500U;
	static int8_t x112 = -9;
	volatile uint32_t t24 = 0U;

    t24 = ((x109-x110)|(x111|x112));

    if (t24 != 4294967287U) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x113 = INT32_MIN;
	static int16_t x114 = -1;
	int16_t x116 = -29;
	int64_t t25 = -46779788288219745LL;

    t25 = ((x113-x114)|(x115|x116));

    if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x121 = INT16_MAX;
	int16_t x122 = -1;
	volatile int8_t x123 = -1;
	int32_t x124 = -1;
	int32_t t26 = 92428;

    t26 = ((x121-x122)|(x123|x124));

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x125 = 448U;
	static int8_t x126 = INT8_MIN;
	int32_t x127 = 9223;
	uint32_t x128 = 7U;
	static volatile uint32_t t27 = 3150733U;

    t27 = ((x125-x126)|(x127|x128));

    if (t27 != 9799U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x130 = 3U;
	uint8_t x131 = 69U;
	int8_t x132 = INT8_MIN;

    t28 = ((x129-x130)|(x131|x132));

    if (t28 != 4294967261U) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x134 = -1;
	static uint64_t x135 = UINT64_MAX;
	int8_t x136 = INT8_MIN;
	volatile uint64_t t29 = UINT64_MAX;

    t29 = ((x133-x134)|(x135|x136));

    if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x141 = INT8_MIN;
	int64_t x143 = INT64_MAX;
	uint64_t x144 = 472LLU;
	uint64_t t30 = UINT64_MAX;

    t30 = ((x141-x142)|(x143|x144));

    if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x145 = INT16_MAX;
	uint64_t x146 = 6776220LLU;
	uint32_t x147 = 288840473U;
	int64_t x148 = 64922638LL;
	static uint64_t t31 = 37490139LLU;

    t31 = ((x145-x146)|(x147|x148));

    if (t31 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x149 = 21U;
	int8_t x151 = -1;
	volatile uint32_t t32 = UINT32_MAX;

    t32 = ((x149-x150)|(x151|x152));

    if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x153 = -1;
	int64_t x154 = -1LL;
	uint64_t x155 = 1837LLU;
	static volatile int64_t x156 = INT64_MAX;

    t33 = ((x153-x154)|(x155|x156));

    if (t33 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x157 = 430;
	int32_t x158 = -59;
	int16_t x159 = INT16_MIN;
	static uint32_t x160 = 26U;
	static volatile uint32_t t34 = 502294U;

    t34 = ((x157-x158)|(x159|x160));

    if (t34 != 4294935035U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x161 = 4674680015204281LLU;
	int8_t x162 = INT8_MIN;
	uint16_t x163 = UINT16_MAX;
	int32_t x164 = -1;
	volatile uint64_t t35 = UINT64_MAX;

    t35 = ((x161-x162)|(x163|x164));

    if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x172 = 8284798199735LL;
	int64_t t36 = -67LL;

    t36 = ((x169-x170)|(x171|x172));

    if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x173 = INT8_MIN;
	int64_t x174 = INT64_MIN;
	volatile uint32_t x175 = 7906352U;
	volatile int64_t x176 = INT64_MAX;
	int64_t t37 = INT64_MAX;

    t37 = ((x173-x174)|(x175|x176));

    if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int32_t x177 = INT32_MIN;
	uint8_t x178 = 0U;
	static int64_t x180 = -1531348577582618532LL;
	volatile int64_t t38 = 33899494LL;

    t38 = ((x177-x178)|(x179|x180));

    if (t38 != -2048694177LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x181 = INT16_MAX;
	static volatile int64_t x182 = 128791111119LL;
	uint64_t x183 = 8424551863LLU;
	volatile int8_t x184 = INT8_MIN;
	uint64_t t39 = 875045489LLU;

    t39 = ((x181-x182)|(x183|x184));

    if (t39 != 18446744073709551543LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x185 = 33675509995456701LLU;
	volatile int32_t x186 = INT32_MAX;
	static volatile uint16_t x187 = 46U;
	uint64_t t40 = 10919241091741315LLU;

    t40 = ((x185-x186)|(x187|x188));

    if (t40 != 33675511423041535LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x190 = 0;
	uint8_t x191 = 73U;
	int64_t x192 = -1LL;
	int64_t t41 = -32946862698LL;

    t41 = ((x189-x190)|(x191|x192));

    if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x193 = -1;
	int64_t x194 = INT64_MAX;
	int8_t x195 = INT8_MIN;
	int8_t x196 = INT8_MIN;
	volatile int64_t t42 = 65980561LL;

    t42 = ((x193-x194)|(x195|x196));

    if (t42 != -128LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x197 = -1;
	uint8_t x198 = 0U;
	int8_t x199 = INT8_MIN;
	static volatile int32_t t43 = -1696198;

    t43 = ((x197-x198)|(x199|x200));

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x201 = 0U;
	int8_t x202 = INT8_MAX;
	int8_t x204 = INT8_MAX;
	volatile int32_t t44 = 1;

    t44 = ((x201-x202)|(x203|x204));

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x205 = -1;
	int8_t x206 = INT8_MAX;
	int8_t x207 = INT8_MAX;
	volatile int16_t x208 = -852;
	int32_t t45 = -35;

    t45 = ((x205-x206)|(x207|x208));

    if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x213 = 59;
	int32_t x214 = 163;
	int8_t x216 = 2;

    t46 = ((x213-x214)|(x215|x216));

    if (t46 != 4294967195U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x219 = 0U;
	int8_t x220 = -1;
	volatile int32_t t47 = -1138;

    t47 = ((x217-x218)|(x219|x220));

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x221 = 6546800424001068LL;
	uint8_t x222 = 25U;
	int32_t x223 = INT32_MIN;
	int32_t x224 = INT32_MAX;
	int64_t t48 = -1193395967LL;

    t48 = ((x221-x222)|(x223|x224));

    if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x225 = 0LLU;
	static int64_t x226 = INT64_MAX;
	static volatile int16_t x227 = -133;
	uint64_t x228 = UINT64_MAX;

    t49 = ((x225-x226)|(x227|x228));

    if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x230 = -7499223557LL;
	uint64_t t50 = UINT64_MAX;

    t50 = ((x229-x230)|(x231|x232));

    if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x233 = INT32_MIN;
	int32_t x234 = INT32_MIN;
	int64_t x235 = 244791073513LL;
	static volatile uint8_t x236 = UINT8_MAX;
	volatile int64_t t51 = -89172145791LL;

    t51 = ((x233-x234)|(x235|x236));

    if (t51 != 244791073535LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x237 = -1;
	int16_t x238 = INT16_MIN;
	static int16_t x239 = INT16_MIN;
	volatile int32_t t52 = 44984358;

    t52 = ((x237-x238)|(x239|x240));

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x241 = 125U;
	uint8_t x242 = 3U;
	volatile int8_t x243 = INT8_MIN;
	int64_t x244 = -1LL;
	int64_t t53 = -210273892343LL;

    t53 = ((x241-x242)|(x243|x244));

    if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x245 = 5322784576819LL;
	uint8_t x246 = 4U;
	volatile uint32_t x247 = UINT32_MAX;
	int16_t x248 = INT16_MIN;

    t54 = ((x245-x246)|(x247|x248));

    if (t54 != 5325759447039LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x250 = -1LL;
	uint32_t x251 = UINT32_MAX;
	uint16_t x252 = UINT16_MAX;
	int64_t t55 = -6103862LL;

    t55 = ((x249-x250)|(x251|x252));

    if (t55 != 4294967295LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x253 = -1LL;
	static int32_t x254 = -295034454;
	static int16_t x256 = 339;

    t56 = ((x253-x254)|(x255|x256));

    if (t56 != 295034871LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x257 = 2065046301796687019LLU;
	volatile int32_t x258 = INT32_MIN;
	volatile int8_t x259 = INT8_MIN;
	volatile uint64_t t57 = 94381LLU;

    t57 = ((x257-x258)|(x259|x260));

    if (t57 != 18446744073709551531LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x262 = 1870429914LL;
	uint16_t x263 = UINT16_MAX;
	int32_t x264 = -12481786;
	int64_t t58 = 1LL;

    t58 = ((x261-x262)|(x263|x264));

    if (t58 != -3932161LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x265 = 1691122LLU;
	volatile int16_t x266 = INT16_MAX;
	int64_t x267 = INT64_MIN;

    t59 = ((x265-x266)|(x267|x268));

    if (t59 != 9223372036856434171LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x269 = INT8_MAX;
	volatile int64_t x270 = 0LL;
	volatile int8_t x271 = -1;
	uint8_t x272 = UINT8_MAX;
	volatile int64_t t60 = -11481865LL;

    t60 = ((x269-x270)|(x271|x272));

    if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint16_t x277 = UINT16_MAX;
	volatile int16_t x279 = INT16_MIN;
	volatile uint64_t x280 = 723LLU;
	uint64_t t61 = 227LLU;

    t61 = ((x277-x278)|(x279|x280));

    if (t61 != 18446744073709519571LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile uint8_t x281 = 3U;
	static uint8_t x282 = 6U;
	int16_t x284 = -1;
	int32_t t62 = -156826;

    t62 = ((x281-x282)|(x283|x284));

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint32_t x285 = 641U;
	static volatile int16_t x286 = INT16_MIN;
	volatile uint8_t x287 = 29U;
	static int8_t x288 = 1;
	volatile uint32_t t63 = 1U;

    t63 = ((x285-x286)|(x287|x288));

    if (t63 != 33437U) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x290 = INT32_MAX;
	static int16_t x292 = -1;
	volatile uint64_t t64 = 3575144LLU;

    t64 = ((x289-x290)|(x291|x292));

    if (t64 != 1118843374359543807LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x293 = UINT64_MAX;
	uint32_t x294 = UINT32_MAX;
	int64_t x295 = INT64_MAX;
	volatile uint16_t x296 = 4U;
	uint64_t t65 = UINT64_MAX;

    t65 = ((x293-x294)|(x295|x296));

    if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x301 = -17079LL;
	volatile int8_t x302 = INT8_MIN;
	int16_t x303 = -1;
	volatile int32_t x304 = 47536779;

    t66 = ((x301-x302)|(x303|x304));

    if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x305 = UINT64_MAX;
	int32_t x306 = INT32_MAX;
	volatile uint64_t x307 = UINT64_MAX;
	int16_t x308 = 29;

    t67 = ((x305-x306)|(x307|x308));

    if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x309 = 28;
	int8_t x310 = -1;
	int32_t x311 = 32326;
	int8_t x312 = INT8_MAX;
	volatile int32_t t68 = -1013392071;

    t68 = ((x309-x310)|(x311|x312));

    if (t68 != 32383) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x314 = INT32_MAX;
	int8_t x315 = -12;
	int64_t x316 = INT64_MIN;
	int64_t t69 = 41195LL;

    t69 = ((x313-x314)|(x315|x316));

    if (t69 != -12LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x317 = INT16_MIN;
	uint16_t x318 = 1U;
	int32_t x319 = INT32_MIN;
	uint64_t x320 = 13085LLU;

    t70 = ((x317-x318)|(x319|x320));

    if (t70 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x322 = 3242585LLU;
	uint16_t x324 = 2U;

    t71 = ((x321-x322)|(x323|x324));

    if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x325 = INT16_MIN;
	int32_t x326 = 136;
	static uint64_t x327 = 535674329417464864LLU;
	volatile int16_t x328 = INT16_MIN;
	volatile uint64_t t72 = 124069371511096791LLU;

    t72 = ((x325-x326)|(x327|x328));

    if (t72 != 18446744073709551480LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x329 = -1LL;
	uint32_t x330 = 65366652U;
	volatile int8_t x331 = -1;
	int16_t x332 = INT16_MAX;
	int64_t t73 = 2871514198715842LL;

    t73 = ((x329-x330)|(x331|x332));

    if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x337 = INT8_MIN;
	volatile int8_t x338 = 14;
	uint8_t x339 = 11U;

    t74 = ((x337-x338)|(x339|x340));

    if (t74 != -133) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x341 = -1;
	int64_t x343 = 15712294871LL;
	int8_t x344 = INT8_MIN;
	volatile int64_t t75 = 241111LL;

    t75 = ((x341-x342)|(x343|x344));

    if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x345 = INT8_MIN;
	int16_t x346 = INT16_MIN;
	static int8_t x347 = -1;
	volatile int64_t x348 = INT64_MAX;
	int64_t t76 = -1148102515293817883LL;

    t76 = ((x345-x346)|(x347|x348));

    if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x349 = INT32_MAX;
	int64_t x350 = -1LL;
	int64_t x351 = INT64_MIN;
	uint8_t x352 = 90U;
	int64_t t77 = 2990923155970840107LL;

    t77 = ((x349-x350)|(x351|x352));

    if (t77 != -9223372034707292070LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x354 = 15U;
	int64_t x355 = 245562188947795LL;

    t78 = ((x353-x354)|(x355|x356));

    if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x357 = INT64_MAX;
	uint32_t x358 = UINT32_MAX;
	int8_t x359 = INT8_MIN;
	static volatile uint32_t x360 = 6300U;
	volatile int64_t t79 = 3322336229729LL;

    t79 = ((x357-x358)|(x359|x360));

    if (t79 != 9223372036854775708LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x361 = 2728U;
	int64_t x364 = -1LL;
	static int64_t t80 = -3LL;

    t80 = ((x361-x362)|(x363|x364));

    if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x365 = 322098U;
	int32_t x366 = INT32_MIN;
	uint8_t x367 = UINT8_MAX;
	int16_t x368 = -1978;
	volatile uint32_t t81 = 265009584U;

    t81 = ((x365-x366)|(x367|x368));

    if (t81 != 4294966015U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x373 = 29353U;
	int16_t x374 = -2501;
	int32_t x375 = INT32_MIN;
	volatile int16_t x376 = 3;
	volatile int32_t t82 = -11683;

    t82 = ((x373-x374)|(x375|x376));

    if (t82 != -2147451793) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x377 = -3;
	int32_t x379 = INT32_MAX;
	static volatile int64_t x380 = INT64_MIN;
	int64_t t83 = 55956141600958LL;

    t83 = ((x377-x378)|(x379|x380));

    if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x381 = 20U;
	volatile int8_t x382 = -7;
	int32_t x383 = 1741;
	int8_t x384 = 15;
	int32_t t84 = 6;

    t84 = ((x381-x382)|(x383|x384));

    if (t84 != 1759) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x385 = 14U;
	uint64_t x386 = UINT64_MAX;
	int32_t x387 = INT32_MIN;
	static uint8_t x388 = UINT8_MAX;
	uint64_t t85 = 167345592544740289LLU;

    t85 = ((x385-x386)|(x387|x388));

    if (t85 != 18446744071562068223LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile uint32_t x389 = UINT32_MAX;
	int64_t x391 = INT64_MIN;

    t86 = ((x389-x390)|(x391|x392));

    if (t86 != -2LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x393 = -1;
	int64_t x394 = 384186244783435LL;
	int32_t x395 = -222;
	volatile int32_t x396 = 91195;
	volatile int64_t t87 = 48LL;

    t87 = ((x393-x394)|(x395|x396));

    if (t87 != -65LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint64_t x397 = UINT64_MAX;
	static uint16_t x398 = UINT16_MAX;
	int16_t x399 = INT16_MIN;
	static uint64_t x400 = UINT64_MAX;

    t88 = ((x397-x398)|(x399|x400));

    if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x402 = INT8_MAX;
	int8_t x403 = -1;
	static uint8_t x404 = 7U;
	uint32_t t89 = UINT32_MAX;

    t89 = ((x401-x402)|(x403|x404));

    if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x405 = 1LL;
	int32_t x407 = INT32_MIN;
	uint8_t x408 = 88U;
	static volatile int64_t t90 = -170250LL;

    t90 = ((x405-x406)|(x407|x408));

    if (t90 != -2147483558LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x414 = -64773169;
	int16_t x415 = INT16_MAX;
	uint8_t x416 = 52U;
	static int32_t t91 = 17198132;

    t91 = ((x413-x414)|(x415|x416));

    if (t91 != 64847871) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x417 = 31093666U;
	static int32_t x418 = -59068;
	int64_t x419 = INT64_MIN;
	int64_t t92 = 65LL;

    t92 = ((x417-x418)|(x419|x420));

    if (t92 != -9223372036823613441LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint32_t x426 = UINT32_MAX;
	uint16_t x427 = 1740U;
	int64_t x428 = INT64_MIN;
	volatile int64_t t93 = 528191LL;

    t93 = ((x425-x426)|(x427|x428));

    if (t93 != -9223372036854774068LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint8_t x429 = 0U;
	int32_t x430 = -12861;
	int32_t x431 = INT32_MAX;
	int64_t x432 = INT64_MIN;
	int64_t t94 = 259292082LL;

    t94 = ((x429-x430)|(x431|x432));

    if (t94 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x433 = INT32_MIN;
	int16_t x434 = -1;
	uint64_t x436 = 3725LLU;

    t95 = ((x433-x434)|(x435|x436));

    if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x437 = UINT64_MAX;
	volatile int32_t x438 = 18518;
	int64_t x439 = -1LL;
	volatile int32_t x440 = -11847466;
	uint64_t t96 = UINT64_MAX;

    t96 = ((x437-x438)|(x439|x440));

    if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x441 = INT8_MAX;
	int8_t x442 = 4;
	uint8_t x443 = 19U;
	uint16_t x444 = 143U;
	volatile int32_t t97 = 435177;

    t97 = ((x441-x442)|(x443|x444));

    if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int64_t x445 = -1943293456343953855LL;
	int64_t x446 = -1LL;
	int64_t x447 = -42078262479459LL;
	int16_t x448 = -1;
	volatile int64_t t98 = 401333LL;

    t98 = ((x445-x446)|(x447|x448));

    if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x449 = 5280LL;
	int32_t x450 = 16180581;
	volatile int32_t x451 = INT32_MIN;
	volatile int64_t t99 = -27279248LL;

    t99 = ((x449-x450)|(x451|x452));

    if (t99 != -1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x453 = UINT16_MAX;
	volatile int64_t x454 = 4700LL;
	static int16_t x456 = INT16_MAX;
	volatile uint64_t t100 = 126192LLU;

    t100 = ((x453-x454)|(x455|x456));

    if (t100 != 21430271LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint32_t x457 = 16488173U;
	static int32_t x459 = INT32_MIN;
	uint32_t x460 = 14U;
	uint32_t t101 = 415613908U;

    t101 = ((x457-x458)|(x459|x460));

    if (t101 != 2163971838U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x462 = 426453U;
	volatile int8_t x463 = INT8_MIN;
	volatile uint64_t t102 = 87412605844LLU;

    t102 = ((x461-x462)|(x463|x464));

    if (t102 != 18446744073709551531LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x465 = INT16_MIN;
	int32_t x466 = 16712036;
	int64_t x467 = 8288LL;
	int16_t x468 = -1;
	int64_t t103 = 27174993417278354LL;

    t103 = ((x465-x466)|(x467|x468));

    if (t103 != -1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x473 = 73;
	volatile int8_t x474 = -1;
	volatile int32_t x476 = -1;
	int64_t t104 = 1126LL;

    t104 = ((x473-x474)|(x475|x476));

    if (t104 != -1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x478 = INT16_MIN;
	int8_t x479 = -1;
	int16_t x480 = -948;

    t105 = ((x477-x478)|(x479|x480));

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x481 = INT64_MAX;
	int32_t x482 = INT32_MAX;
	int16_t x483 = INT16_MAX;
	volatile int64_t t106 = 8554259496543LL;

    t106 = ((x481-x482)|(x483|x484));

    if (t106 != 9223372034707357695LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x485 = INT16_MIN;
	int16_t x486 = INT16_MIN;
	volatile uint64_t x487 = 4858389LLU;
	int8_t x488 = INT8_MIN;

    t107 = ((x485-x486)|(x487|x488));

    if (t107 != 18446744073709551509LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x490 = UINT16_MAX;
	uint16_t x491 = UINT16_MAX;
	static volatile uint32_t t108 = UINT32_MAX;

    t108 = ((x489-x490)|(x491|x492));

    if (t108 != UINT32_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x493 = INT8_MIN;
	static volatile uint64_t x494 = 26136828LLU;
	int8_t x496 = 2;
	volatile uint64_t t109 = 11LLU;

    t109 = ((x493-x494)|(x495|x496));

    if (t109 != 18446744073683414663LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x497 = UINT16_MAX;
	int32_t x499 = INT32_MIN;
	static uint64_t x500 = 120770368685LLU;
	uint64_t t110 = 29066LLU;

    t110 = ((x497-x498)|(x499|x500));

    if (t110 != 18446744072073352365LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x501 = 55185866083LL;
	uint32_t x502 = 1311450U;
	int16_t x503 = INT16_MIN;
	int8_t x504 = 1;
	int64_t t111 = -257343506LL;

    t111 = ((x501-x502)|(x503|x504));

    if (t111 != -1399LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x505 = INT16_MAX;
	uint16_t x506 = 2U;
	volatile int8_t x508 = -1;

    t112 = ((x505-x506)|(x507|x508));

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x509 = INT8_MIN;
	static int32_t x510 = INT32_MIN;
	uint32_t x511 = UINT32_MAX;
	static int16_t x512 = INT16_MIN;
	volatile uint32_t t113 = UINT32_MAX;

    t113 = ((x509-x510)|(x511|x512));

    if (t113 != UINT32_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x513 = 1U;
	uint32_t x514 = 533463367U;
	volatile int16_t x515 = -1;
	static int32_t x516 = -1;
	uint32_t t114 = UINT32_MAX;

    t114 = ((x513-x514)|(x515|x516));

    if (t114 != UINT32_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x521 = 435U;
	static uint16_t x522 = 890U;
	volatile int8_t x523 = INT8_MAX;

    t115 = ((x521-x522)|(x523|x524));

    if (t115 != UINT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x525 = 140344323161570250LL;
	uint64_t x527 = 85577404LLU;
	static int8_t x528 = 1;
	volatile uint64_t t116 = 26176600498963LLU;

    t116 = ((x525-x526)|(x527|x528));

    if (t116 != 140344323246522367LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x529 = -15246670028445900LL;
	volatile int8_t x531 = 1;
	int64_t t117 = 62953LL;

    t117 = ((x529-x530)|(x531|x532));

    if (t117 != -15246670028478659LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x533 = -1LL;
	int16_t x534 = INT16_MIN;
	int8_t x535 = INT8_MIN;
	int16_t x536 = 2;
	static volatile int64_t t118 = 2384809049128998LL;

    t118 = ((x533-x534)|(x535|x536));

    if (t118 != -1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x537 = INT8_MIN;
	int64_t x539 = 19520723875LL;
	int16_t x540 = -1;
	static volatile int64_t t119 = 6669637LL;

    t119 = ((x537-x538)|(x539|x540));

    if (t119 != -1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x541 = 51568966LLU;
	volatile int64_t x542 = INT64_MIN;
	int8_t x543 = INT8_MAX;
	uint64_t t120 = UINT64_MAX;

    t120 = ((x541-x542)|(x543|x544));

    if (t120 != UINT64_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x545 = -1;
	int32_t x546 = INT32_MIN;
	static volatile int64_t t121 = 346300202422LL;

    t121 = ((x545-x546)|(x547|x548));

    if (t121 != -1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x550 = 849U;
	uint64_t t122 = 375545134005540LLU;

    t122 = ((x549-x550)|(x551|x552));

    if (t122 != 49462080978943LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x553 = -37;
	uint16_t x554 = 9788U;
	uint64_t x555 = 218LLU;
	uint64_t t123 = 393050776164901LLU;

    t123 = ((x553-x554)|(x555|x556));

    if (t123 != 18446744073709541855LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x557 = -1LL;
	int64_t x558 = -1LL;
	int8_t x560 = -2;
	static int64_t t124 = 851217399474LL;

    t124 = ((x557-x558)|(x559|x560));

    if (t124 != -1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x561 = INT64_MAX;
	static int16_t x562 = 0;
	uint8_t x563 = UINT8_MAX;
	int16_t x564 = -1;
	volatile int64_t t125 = 792568703177767363LL;

    t125 = ((x561-x562)|(x563|x564));

    if (t125 != -1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x565 = INT16_MIN;
	int32_t x566 = INT32_MIN;
	int8_t x567 = INT8_MIN;
	static uint32_t x568 = UINT32_MAX;
	uint32_t t126 = UINT32_MAX;

    t126 = ((x565-x566)|(x567|x568));

    if (t126 != UINT32_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x569 = INT8_MIN;
	int8_t x570 = 0;
	uint8_t x571 = 47U;
	int32_t t127 = 4029571;

    t127 = ((x569-x570)|(x571|x572));

    if (t127 != -1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x573 = 9;
	int32_t x574 = -130;
	int32_t x575 = INT32_MIN;
	static int8_t x576 = -1;

    t128 = ((x573-x574)|(x575|x576));

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x577 = -1;
	uint32_t x578 = UINT32_MAX;
	static uint64_t x579 = UINT64_MAX;
	static int8_t x580 = INT8_MIN;
	volatile uint64_t t129 = UINT64_MAX;

    t129 = ((x577-x578)|(x579|x580));

    if (t129 != UINT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x581 = -2;
	int8_t x582 = INT8_MAX;
	int8_t x583 = 0;
	static volatile int64_t x584 = -930LL;
	int64_t t130 = 42040199202LL;

    t130 = ((x581-x582)|(x583|x584));

    if (t130 != -129LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x585 = INT32_MIN;
	volatile uint64_t x586 = UINT64_MAX;
	int32_t x587 = -1;
	static volatile int64_t x588 = 2692127622938999LL;
	uint64_t t131 = UINT64_MAX;

    t131 = ((x585-x586)|(x587|x588));

    if (t131 != UINT64_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x593 = 236591012LL;
	volatile int64_t x594 = -54967928670009986LL;
	static int16_t x595 = INT16_MAX;
	int64_t x596 = INT64_MIN;
	volatile int64_t t132 = -23913LL;

    t132 = ((x593-x594)|(x595|x596));

    if (t132 != -9168404107948163073LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x597 = UINT64_MAX;
	static uint16_t x598 = 4U;
	static uint32_t x599 = UINT32_MAX;
	uint64_t t133 = UINT64_MAX;

    t133 = ((x597-x598)|(x599|x600));

    if (t133 != UINT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x606 = 1;
	uint64_t x607 = 69850LLU;
	uint32_t x608 = 10958108U;
	static volatile uint64_t t134 = 1017LLU;

    t134 = ((x605-x606)|(x607|x608));

    if (t134 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x609 = -3;
	int16_t x610 = INT16_MIN;
	int64_t x611 = INT64_MAX;
	uint16_t x612 = UINT16_MAX;
	static int64_t t135 = INT64_MAX;

    t135 = ((x609-x610)|(x611|x612));

    if (t135 != INT64_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x613 = 14;
	volatile uint64_t x614 = UINT64_MAX;
	static int8_t x615 = INT8_MIN;
	uint64_t t136 = UINT64_MAX;

    t136 = ((x613-x614)|(x615|x616));

    if (t136 != UINT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x618 = INT16_MIN;
	int32_t x619 = -100804671;
	static int64_t x620 = 1411LL;
	volatile int64_t t137 = -47LL;

    t137 = ((x617-x618)|(x619|x620));

    if (t137 != -100794369LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x621 = INT32_MIN;
	static uint32_t x622 = 2376U;
	volatile uint8_t x623 = 18U;
	uint8_t x624 = UINT8_MAX;
	volatile uint32_t t138 = 3U;

    t138 = ((x621-x622)|(x623|x624));

    if (t138 != 2147481343U) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int32_t x625 = INT32_MAX;
	static volatile int8_t x626 = INT8_MAX;
	uint32_t x627 = 12902U;

    t139 = ((x625-x626)|(x627|x628));

    if (t139 != INT64_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x629 = UINT64_MAX;
	volatile uint8_t x630 = UINT8_MAX;
	uint64_t x631 = UINT64_MAX;
	volatile uint32_t x632 = 1909U;

    t140 = ((x629-x630)|(x631|x632));

    if (t140 != UINT64_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x633 = -1;
	int16_t x634 = -13555;
	static uint64_t x636 = UINT64_MAX;
	volatile uint64_t t141 = UINT64_MAX;

    t141 = ((x633-x634)|(x635|x636));

    if (t141 != UINT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x637 = INT16_MAX;
	volatile uint8_t x638 = 40U;
	int16_t x639 = INT16_MIN;
	volatile uint8_t x640 = UINT8_MAX;
	static volatile int32_t t142 = -2368;

    t142 = ((x637-x638)|(x639|x640));

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x641 = INT64_MIN;
	uint64_t x642 = 4465LLU;
	int64_t x644 = INT64_MIN;
	uint64_t t143 = 21902LLU;

    t143 = ((x641-x642)|(x643|x644));

    if (t143 != 18446744073709547151LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x646 = 5;
	uint8_t x647 = 1U;
	int32_t x648 = INT32_MIN;
	static volatile int32_t t144 = -5;

    t144 = ((x645-x646)|(x647|x648));

    if (t144 != -2147351257) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int16_t x649 = 276;
	int16_t x651 = INT16_MAX;
	uint64_t x652 = UINT64_MAX;
	volatile uint64_t t145 = UINT64_MAX;

    t145 = ((x649-x650)|(x651|x652));

    if (t145 != UINT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile uint64_t x653 = UINT64_MAX;
	static int32_t x655 = -4981;
	volatile uint64_t t146 = UINT64_MAX;

    t146 = ((x653-x654)|(x655|x656));

    if (t146 != UINT64_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x658 = INT64_MIN;

    t147 = ((x657-x658)|(x659|x660));

    if (t147 != UINT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x661 = -66LL;
	static uint16_t x662 = UINT16_MAX;
	int16_t x663 = 48;
	uint16_t x664 = 8U;

    t148 = ((x661-x662)|(x663|x664));

    if (t148 != -65601LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x665 = INT16_MIN;
	int32_t x666 = -229;
	int8_t x667 = INT8_MAX;
	int64_t x668 = INT64_MAX;
	static volatile int64_t t149 = 3791992383308447589LL;

    t149 = ((x665-x666)|(x667|x668));

    if (t149 != -1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x673 = -1LL;
	int16_t x674 = -15;
	static uint16_t x675 = 1U;
	static int64_t x676 = -1LL;
	volatile int64_t t150 = -469682307018525LL;

    t150 = ((x673-x674)|(x675|x676));

    if (t150 != -1LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint8_t x677 = 1U;
	uint8_t x678 = UINT8_MAX;
	int64_t x679 = INT64_MAX;
	int32_t x680 = INT32_MIN;
	volatile int64_t t151 = 233215593587578LL;

    t151 = ((x677-x678)|(x679|x680));

    if (t151 != -1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x683 = UINT64_MAX;
	static volatile uint64_t t152 = UINT64_MAX;

    t152 = ((x681-x682)|(x683|x684));

    if (t152 != UINT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x685 = INT8_MIN;
	static uint32_t x686 = 3U;
	int16_t x687 = 457;
	volatile int8_t x688 = INT8_MIN;
	volatile uint32_t t153 = 760U;

    t153 = ((x685-x686)|(x687|x688));

    if (t153 != 4294967293U) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x689 = INT8_MAX;
	volatile int16_t x691 = INT16_MAX;
	int8_t x692 = -1;
	static volatile int64_t t154 = 31LL;

    t154 = ((x689-x690)|(x691|x692));

    if (t154 != -1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x693 = 1;
	volatile int8_t x694 = INT8_MAX;
	int64_t x695 = INT64_MIN;

    t155 = ((x693-x694)|(x695|x696));

    if (t155 != -1LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x705 = UINT16_MAX;
	static int64_t x706 = 3753788484652412LL;
	volatile uint64_t t156 = UINT64_MAX;

    t156 = ((x705-x706)|(x707|x708));

    if (t156 != UINT64_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x709 = -1;
	int8_t x710 = INT8_MIN;
	uint16_t x712 = 44U;
	volatile uint32_t t157 = 8371U;

    t157 = ((x709-x710)|(x711|x712));

    if (t157 != 12927U) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x713 = INT64_MAX;
	uint8_t x714 = 35U;
	int16_t x715 = INT16_MIN;
	int8_t x716 = INT8_MIN;
	volatile int64_t t158 = -1862586404294628745LL;

    t158 = ((x713-x714)|(x715|x716));

    if (t158 != -36LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x721 = -1;
	int16_t x723 = -1;
	int32_t t159 = -674853;

    t159 = ((x721-x722)|(x723|x724));

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x726 = 202109439;
	int32_t x727 = 386394717;
	int32_t x728 = -1;
	volatile int32_t t160 = 1945;

    t160 = ((x725-x726)|(x727|x728));

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x731 = UINT64_MAX;
	volatile int64_t x732 = INT64_MAX;
	uint64_t t161 = UINT64_MAX;

    t161 = ((x729-x730)|(x731|x732));

    if (t161 != UINT64_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint8_t x733 = 3U;
	static int64_t x734 = -496631LL;
	volatile uint16_t x735 = 6328U;
	volatile int64_t t162 = -2878310609LL;

    t162 = ((x733-x734)|(x735|x736));

    if (t162 != -9223372036854277126LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x737 = INT32_MAX;
	volatile int16_t x739 = INT16_MAX;

    t163 = ((x737-x738)|(x739|x740));

    if (t163 != -1LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x741 = -1;
	int64_t x742 = INT64_MIN;
	volatile int32_t x743 = -270;
	volatile int64_t x744 = -298723379679023635LL;
	volatile int64_t t164 = 110LL;

    t164 = ((x741-x742)|(x743|x744));

    if (t164 != -1LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x745 = -1;
	uint32_t x746 = 144857U;
	int32_t x747 = -1;
	volatile int16_t x748 = INT16_MIN;
	uint32_t t165 = UINT32_MAX;

    t165 = ((x745-x746)|(x747|x748));

    if (t165 != UINT32_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x749 = UINT32_MAX;
	int16_t x750 = 3454;
	int16_t x751 = 1;
	uint64_t x752 = 51273LLU;
	volatile uint64_t t166 = 4223357583569650LLU;

    t166 = ((x749-x750)|(x751|x752));

    if (t166 != 4294965961LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x753 = INT8_MIN;
	int64_t x754 = INT64_MIN;
	static uint64_t x755 = 162579654LLU;
	int32_t x756 = 103091;
	uint64_t t167 = 16745250253LLU;

    t167 = ((x753-x754)|(x755|x756));

    if (t167 != 9223372036854775799LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x758 = INT32_MIN;
	uint32_t x759 = 2016U;
	volatile uint32_t x760 = 172835U;

    t168 = ((x757-x758)|(x759|x760));

    if (t168 != 2147483619U) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x762 = 4977148560425505LL;
	static uint32_t x763 = 25U;
	int64_t x764 = INT64_MIN;
	static int64_t t169 = -5839908954988913LL;

    t169 = ((x761-x762)|(x763|x764));

    if (t169 != -4977147221668449LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x765 = -1;
	uint64_t x766 = 4922731616279852LLU;
	int32_t x767 = INT32_MIN;
	uint64_t t170 = UINT64_MAX;

    t170 = ((x765-x766)|(x767|x768));

    if (t170 != UINT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x769 = -245820257485LL;
	uint16_t x770 = 3554U;
	volatile int32_t x772 = INT32_MIN;
	volatile uint64_t t171 = 8797484924LLU;

    t171 = ((x769-x770)|(x771|x772));

    if (t171 != 18446744072702426481LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x773 = 1386066U;
	int16_t x774 = INT16_MAX;
	uint8_t x775 = 15U;
	int8_t x776 = 1;
	static volatile uint32_t t172 = 0U;

    t172 = ((x773-x774)|(x775|x776));

    if (t172 != 1353311U) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x777 = -1;
	volatile int8_t x779 = -1;
	static int32_t t173 = -27;

    t173 = ((x777-x778)|(x779|x780));

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x785 = -1;
	static volatile int64_t x786 = -1LL;
	int32_t x787 = -382;
	int32_t x788 = 869472;
	int64_t t174 = 0LL;

    t174 = ((x785-x786)|(x787|x788));

    if (t174 != -286LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x789 = -7;
	volatile uint16_t x790 = UINT16_MAX;
	int32_t x791 = -1;

    t175 = ((x789-x790)|(x791|x792));

    if (t175 != UINT32_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x793 = -1;
	int8_t x794 = 28;
	int64_t x795 = -1LL;
	int16_t x796 = INT16_MIN;
	volatile int64_t t176 = 7LL;

    t176 = ((x793-x794)|(x795|x796));

    if (t176 != -1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x797 = UINT16_MAX;
	uint8_t x798 = 28U;
	uint8_t x799 = UINT8_MAX;
	int16_t x800 = INT16_MAX;
	static int32_t t177 = 1;

    t177 = ((x797-x798)|(x799|x800));

    if (t177 != 65535) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x801 = -2081;
	static volatile uint64_t x802 = UINT64_MAX;
	volatile int32_t x803 = INT32_MIN;
	static int16_t x804 = 1;
	uint64_t t178 = 433770862801LLU;

    t178 = ((x801-x802)|(x803|x804));

    if (t178 != 18446744073709549537LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint16_t x805 = 10315U;
	int8_t x806 = INT8_MIN;
	uint8_t x808 = UINT8_MAX;
	volatile int32_t t179 = -53512;

    t179 = ((x805-x806)|(x807|x808));

    if (t179 != 32767) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x810 = INT32_MAX;
	volatile uint16_t x811 = 201U;
	uint32_t x812 = UINT32_MAX;
	volatile uint64_t t180 = UINT64_MAX;

    t180 = ((x809-x810)|(x811|x812));

    if (t180 != UINT64_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x813 = INT32_MIN;
	int32_t x815 = INT32_MAX;

    t181 = ((x813-x814)|(x815|x816));

    if (t181 != -1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x817 = UINT64_MAX;
	volatile int32_t x818 = -123;
	volatile uint64_t x819 = UINT64_MAX;
	int8_t x820 = 14;
	volatile uint64_t t182 = UINT64_MAX;

    t182 = ((x817-x818)|(x819|x820));

    if (t182 != UINT64_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x821 = 21U;
	static int16_t x822 = -2;
	int16_t x823 = -1;
	volatile int32_t x824 = -110465174;
	int32_t t183 = -19;

    t183 = ((x821-x822)|(x823|x824));

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x825 = INT64_MAX;
	static volatile uint16_t x828 = 6U;
	int64_t t184 = INT64_MAX;

    t184 = ((x825-x826)|(x827|x828));

    if (t184 != INT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x830 = -29;
	static uint16_t x831 = UINT16_MAX;
	int32_t x832 = INT32_MAX;

    t185 = ((x829-x830)|(x831|x832));

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x833 = INT8_MIN;
	int16_t x834 = -1;
	uint64_t x835 = UINT64_MAX;
	static int8_t x836 = INT8_MIN;

    t186 = ((x833-x834)|(x835|x836));

    if (t186 != UINT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile uint16_t x837 = 1407U;
	static int64_t x838 = -6923916512141885LL;
	static uint16_t x839 = UINT16_MAX;
	int32_t x840 = INT32_MIN;
	int64_t t187 = 1124LL;

    t187 = ((x837-x838)|(x839|x840));

    if (t187 != -265682945LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x841 = -28;
	uint8_t x842 = UINT8_MAX;
	int16_t x843 = -1;
	uint16_t x844 = UINT16_MAX;
	static int32_t t188 = 134159;

    t188 = ((x841-x842)|(x843|x844));

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x846 = -1;
	int64_t x847 = -893659546845806LL;
	int16_t x848 = -114;
	int64_t t189 = 14919727703194760LL;

    t189 = ((x845-x846)|(x847|x848));

    if (t189 != -98LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x849 = INT16_MIN;
	int64_t x850 = 6779LL;
	int16_t x852 = INT16_MAX;
	int64_t t190 = 17707920600598LL;

    t190 = ((x849-x850)|(x851|x852));

    if (t190 != -1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x853 = INT8_MAX;
	static int8_t x854 = INT8_MAX;
	int8_t x855 = INT8_MIN;
	static int32_t t191 = 22249;

    t191 = ((x853-x854)|(x855|x856));

    if (t191 != -1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x858 = 4;

    t192 = ((x857-x858)|(x859|x860));

    if (t192 != -4) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x861 = -9;
	static volatile int16_t x862 = -40;
	volatile int32_t x863 = INT32_MIN;

    t193 = ((x861-x862)|(x863|x864));

    if (t193 != -2147483617) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x865 = 26;
	static uint16_t x866 = UINT16_MAX;
	int16_t x867 = INT16_MIN;
	volatile int32_t t194 = -53633;

    t194 = ((x865-x866)|(x867|x868));

    if (t194 != -32741) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x870 = INT32_MIN;
	volatile int32_t x871 = INT32_MIN;
	volatile int8_t x872 = -6;
	volatile int64_t t195 = -979684932472LL;

    t195 = ((x869-x870)|(x871|x872));

    if (t195 != -6LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x873 = INT32_MIN;
	uint64_t x874 = 704493248961391867LLU;
	static int8_t x875 = INT8_MIN;
	int8_t x876 = INT8_MIN;
	volatile uint64_t t196 = 379LLU;

    t196 = ((x873-x874)|(x875|x876));

    if (t196 != 18446744073709551493LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x877 = INT8_MIN;
	static int64_t x878 = 419266086LL;
	int8_t x879 = 2;
	volatile int64_t x880 = -1LL;
	int64_t t197 = 299241039886LL;

    t197 = ((x877-x878)|(x879|x880));

    if (t197 != -1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x882 = INT64_MIN;
	static volatile uint32_t x883 = 89920U;
	int64_t t198 = INT64_MAX;

    t198 = ((x881-x882)|(x883|x884));

    if (t198 != INT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x886 = 1422350825LLU;
	static int64_t x888 = INT64_MIN;
	volatile uint64_t t199 = 6904LLU;

    t199 = ((x885-x886)|(x887|x888));

    if (t199 != 18446744073709551614LLU) { NG(); } else { ; }
	
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

