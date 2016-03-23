
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

static volatile int8_t x3 = -1;
uint8_t x5 = 0U;
volatile int8_t x10 = INT8_MIN;
static int8_t x12 = INT8_MIN;
static int16_t x15 = -1;
int32_t x24 = INT32_MIN;
volatile int64_t x27 = 29283889668LL;
int32_t x33 = INT32_MIN;
static int8_t x36 = -1;
int32_t t8 = 3;
int32_t x37 = INT32_MAX;
static uint32_t x48 = 919U;
uint64_t x49 = 200838418416879335LLU;
volatile int8_t x55 = INT8_MIN;
int32_t x56 = INT32_MAX;
int32_t t14 = -1257053;
static int8_t x63 = -1;
uint16_t x74 = 70U;
int32_t x81 = -1;
int8_t x83 = INT8_MIN;
int32_t x92 = -9;
int8_t x101 = -3;
int16_t x107 = 1;
static int32_t x113 = INT32_MAX;
int16_t x117 = INT16_MIN;
volatile int16_t x120 = INT16_MAX;
int32_t x128 = -6600541;
volatile int32_t t31 = -16559;
static uint32_t x131 = UINT32_MAX;
static volatile int64_t x140 = INT64_MIN;
uint32_t x141 = 254429U;
uint8_t x146 = UINT8_MAX;
uint16_t x152 = 6U;
int32_t x156 = INT32_MIN;
int64_t x158 = -1LL;
static int32_t x160 = INT32_MAX;
static uint8_t x161 = 1U;
static int16_t x170 = -1;
static int32_t t41 = -1223;
int32_t x179 = -1;
volatile int32_t t43 = 0;
volatile int32_t x181 = -20173172;
int8_t x183 = 2;
volatile int64_t x185 = INT64_MIN;
volatile int16_t x189 = 1;
volatile uint64_t t47 = 0LLU;
uint8_t x203 = 1U;
static int64_t x206 = INT64_MIN;
int32_t t52 = -72;
static volatile int32_t t53 = -82635568;
int32_t t54 = 250827901;
volatile int16_t x225 = INT16_MAX;
volatile int32_t t55 = 865870;
uint32_t t56 = 2U;
int64_t t59 = -52LL;
uint32_t x253 = 21107U;
uint16_t x260 = 92U;
uint64_t x264 = UINT64_MAX;
volatile int32_t t64 = -2680567;
uint32_t x270 = 2078613U;
int8_t x272 = INT8_MIN;
volatile int16_t x275 = 2;
int8_t x279 = 5;
int64_t x281 = -1132273551LL;
static uint16_t x285 = 52U;
int32_t x287 = -1;
uint16_t x295 = 8689U;
static int16_t x297 = INT16_MIN;
uint8_t x300 = 83U;
volatile int64_t t72 = 2473849786LL;
uint32_t t73 = 1243224240U;
int32_t x310 = INT32_MIN;
uint8_t x322 = 6U;
volatile int8_t x323 = INT8_MAX;
int32_t x327 = 1;
int8_t x330 = -27;
int32_t x337 = INT32_MIN;
static volatile int32_t t84 = 1467;
uint64_t x353 = 70951555880LLU;
int8_t x354 = -1;
static int64_t x361 = -1749344028376675LL;
int32_t t88 = 338008999;
static int32_t x377 = INT32_MIN;
int32_t x378 = -1;
int32_t x385 = -11445501;
uint8_t x387 = 18U;
int64_t x389 = -1LL;
int32_t t95 = -7809;
volatile uint8_t x404 = UINT8_MAX;
int64_t x405 = 53758141LL;
static int64_t x417 = INT64_MIN;
uint8_t x419 = 57U;
int32_t x421 = INT32_MAX;
static int64_t x426 = -63598065072LL;
volatile int64_t t103 = -18487LL;
int8_t x433 = -1;
uint8_t x434 = 89U;
int64_t x443 = INT64_MAX;
volatile int16_t x445 = INT16_MIN;
uint32_t x447 = 345006U;
int16_t x449 = -1;
volatile int16_t x451 = -1;
int16_t x462 = -2;
static int16_t x470 = -1;
int16_t x472 = -3;
int64_t x476 = -1LL;
volatile int16_t x494 = INT16_MIN;
uint16_t x495 = UINT16_MAX;
int16_t x510 = INT16_MAX;
int64_t t122 = -4389474909341LL;
static int64_t x516 = -16647563554505LL;
int64_t t123 = 530044902947LL;
int32_t x532 = INT32_MIN;
static int64_t x536 = -205478427254LL;
volatile uint8_t x541 = 2U;
static uint16_t x550 = UINT16_MAX;
int16_t x551 = 5167;
int32_t t132 = -314745;
volatile int8_t x559 = INT8_MIN;
int16_t x560 = -1;
int32_t t133 = 0;
volatile int64_t t134 = 33955847375LL;
int8_t x567 = INT8_MIN;
int32_t x568 = -1;
int64_t t138 = -31962876LL;
uint8_t x581 = 43U;
static int64_t t139 = -22391LL;
int32_t t140 = -58;
int16_t x591 = 0;
uint32_t x592 = 12U;
uint64_t x594 = 9165299462026434723LLU;
static int32_t t143 = -1;
int32_t x607 = 47;
uint16_t x621 = 30432U;
uint64_t t150 = 1345886LLU;
uint16_t x630 = 5U;
int8_t x632 = -1;
int32_t x634 = -277213;
int8_t x635 = -27;
static uint64_t x636 = 240216678335129291LLU;
int64_t x639 = -255544362891LL;
uint64_t t153 = 0LLU;
int64_t x641 = INT64_MAX;
int8_t x646 = 1;
static int16_t x647 = -1;
int8_t x648 = INT8_MAX;
int64_t t156 = 112031LL;
static int64_t x661 = 468671587664296LL;
volatile int32_t t159 = 7203;
int64_t x668 = -1LL;
int64_t x677 = INT64_MIN;
int64_t x684 = INT64_MIN;
int16_t x685 = INT16_MIN;
int8_t x689 = -6;
int8_t x691 = -1;
int8_t x694 = -1;
static int16_t x707 = 539;
volatile uint64_t t170 = 174239343LLU;
int16_t x710 = INT16_MIN;
volatile int8_t x711 = INT8_MIN;
int8_t x716 = -1;
uint32_t x717 = 3208U;
static int16_t x726 = INT16_MIN;
volatile int16_t x730 = INT16_MIN;
int64_t x734 = -20889LL;
static uint64_t x735 = UINT64_MAX;
int32_t x742 = INT32_MIN;
uint16_t x745 = UINT16_MAX;
volatile uint32_t x747 = UINT32_MAX;
volatile uint8_t x750 = UINT8_MAX;
volatile int16_t x763 = INT16_MIN;
int64_t x767 = 5266LL;
int16_t x774 = -5243;
uint8_t x779 = UINT8_MAX;
uint64_t t189 = 5LLU;
int32_t t191 = 0;
int16_t x805 = -1;
uint8_t x808 = UINT8_MAX;
static volatile int64_t x810 = -1LL;
uint64_t x818 = 1444831789LLU;
volatile int8_t x828 = INT8_MAX;
volatile int32_t t199 = -38891;


void f0(void) {
    	volatile int64_t x1 = INT64_MIN;
	int64_t x2 = -113090177241356LL;
	static volatile int32_t x4 = 167;
	volatile int32_t t0 = -6754625;

    t0 = ((x1<=x2)*(x3%x4));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = INT64_MIN;
	int16_t x7 = 1;
	int64_t x8 = INT64_MIN;
	volatile int64_t t1 = -172531768146569LL;

    t1 = ((x5<=x6)*(x7%x8));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MAX;
	static int16_t x11 = 12306;
	int32_t t2 = -151207;

    t2 = ((x9<=x10)*(x11%x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x13 = -1LL;
	static uint32_t x14 = 7816U;
	uint8_t x16 = UINT8_MAX;
	volatile int32_t t3 = -175;

    t3 = ((x13<=x14)*(x15%x16));

    if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x17 = -223;
	uint16_t x18 = UINT16_MAX;
	int16_t x19 = INT16_MIN;
	static uint64_t x20 = 17571464937905LLU;
	uint64_t t4 = 18870LLU;

    t4 = ((x17<=x18)*(x19%x20));

    if (t4 != 9324317594988LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MAX;
	uint8_t x22 = 1U;
	uint16_t x23 = 24072U;
	int32_t t5 = 12370;

    t5 = ((x21<=x22)*(x23%x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x25 = 1084247563436327943LLU;
	static uint8_t x26 = UINT8_MAX;
	int32_t x28 = INT32_MIN;
	int64_t t6 = 0LL;

    t6 = ((x25<=x26)*(x27%x28));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = UINT64_MAX;
	uint8_t x30 = UINT8_MAX;
	int64_t x31 = 262LL;
	uint8_t x32 = 2U;
	int64_t t7 = 1290090092LL;

    t7 = ((x29<=x30)*(x31%x32));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x34 = 574460033;
	int16_t x35 = INT16_MIN;

    t8 = ((x33<=x34)*(x35%x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x38 = 49U;
	volatile int8_t x39 = INT8_MIN;
	static int16_t x40 = INT16_MIN;
	volatile int32_t t9 = 69699;

    t9 = ((x37<=x38)*(x39%x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 30U;
	int8_t x42 = -1;
	uint64_t x43 = 9570112896104336LLU;
	int16_t x44 = -1;
	volatile uint64_t t10 = 263245LLU;

    t10 = ((x41<=x42)*(x43%x44));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MIN;
	int16_t x46 = INT16_MIN;
	static uint64_t x47 = 698869722LLU;
	uint64_t t11 = 304450518145602917LLU;

    t11 = ((x45<=x46)*(x47%x48));

    if (t11 != 549LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x50 = 2588;
	static uint16_t x51 = 77U;
	static int16_t x52 = INT16_MIN;
	int32_t t12 = -4191977;

    t12 = ((x49<=x50)*(x51%x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = -1;
	uint8_t x54 = 53U;
	volatile int32_t t13 = 5293352;

    t13 = ((x53<=x54)*(x55%x56));

    if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = 131;
	static int64_t x58 = 4381671312226881LL;
	int8_t x59 = 2;
	int32_t x60 = -91;

    t14 = ((x57<=x58)*(x59%x60));

    if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x61 = -7;
	uint32_t x62 = 952085556U;
	int64_t x64 = INT64_MAX;
	int64_t t15 = -82765583921318408LL;

    t15 = ((x61<=x62)*(x63%x64));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x65 = 1;
	volatile int8_t x66 = INT8_MIN;
	volatile int8_t x67 = INT8_MIN;
	static uint8_t x68 = 20U;
	int32_t t16 = 13062798;

    t16 = ((x65<=x66)*(x67%x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x69 = 95U;
	static int16_t x70 = -1;
	uint64_t x71 = UINT64_MAX;
	uint8_t x72 = UINT8_MAX;
	uint64_t t17 = 671575LLU;

    t17 = ((x69<=x70)*(x71%x72));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	uint32_t x75 = 9147751U;
	uint64_t x76 = 71851296LLU;
	uint64_t t18 = 2LLU;

    t18 = ((x73<=x74)*(x75%x76));

    if (t18 != 9147751LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x77 = -1;
	volatile int32_t x78 = INT32_MAX;
	uint32_t x79 = 600411U;
	int8_t x80 = -12;
	static uint32_t t19 = 32332894U;

    t19 = ((x77<=x78)*(x79%x80));

    if (t19 != 600411U) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x82 = -1;
	volatile uint64_t x84 = 8769590718371789420LLU;
	volatile uint64_t t20 = 587LLU;

    t20 = ((x81<=x82)*(x83%x84));

    if (t20 != 907562636965972648LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int32_t x85 = INT32_MIN;
	int8_t x86 = INT8_MAX;
	static int32_t x87 = INT32_MAX;
	static int32_t x88 = -1;
	int32_t t21 = -764;

    t21 = ((x85<=x86)*(x87%x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MIN;
	int32_t x90 = INT32_MIN;
	int16_t x91 = INT16_MIN;
	int32_t t22 = 41234726;

    t22 = ((x89<=x90)*(x91%x92));

    if (t22 != -8) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = 0U;
	static uint32_t x94 = UINT32_MAX;
	int64_t x95 = 40990198LL;
	int16_t x96 = INT16_MAX;
	int64_t t23 = 27185LL;

    t23 = ((x93<=x94)*(x95%x96));

    if (t23 != 31448LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = 2U;
	static int16_t x98 = 0;
	uint8_t x99 = UINT8_MAX;
	int32_t x100 = -729;
	volatile int32_t t24 = -265392;

    t24 = ((x97<=x98)*(x99%x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x102 = -3;
	int16_t x103 = -657;
	volatile int16_t x104 = INT16_MIN;
	volatile int32_t t25 = 997;

    t25 = ((x101<=x102)*(x103%x104));

    if (t25 != -657) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x105 = INT32_MIN;
	static int8_t x106 = 0;
	uint8_t x108 = 33U;
	volatile int32_t t26 = 0;

    t26 = ((x105<=x106)*(x107%x108));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int32_t x109 = INT32_MIN;
	static int32_t x110 = INT32_MIN;
	int8_t x111 = -1;
	int32_t x112 = -1;
	volatile int32_t t27 = 18;

    t27 = ((x109<=x110)*(x111%x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x114 = INT16_MIN;
	uint64_t x115 = UINT64_MAX;
	volatile int32_t x116 = -10762;
	volatile uint64_t t28 = 396LLU;

    t28 = ((x113<=x114)*(x115%x116));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x118 = 519501779U;
	int32_t x119 = -57682;
	static int32_t t29 = 7;

    t29 = ((x117<=x118)*(x119%x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = 335274059;
	int16_t x122 = -1;
	int8_t x123 = 22;
	int16_t x124 = INT16_MAX;
	int32_t t30 = 1471735;

    t30 = ((x121<=x122)*(x123%x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = -1LL;
	int16_t x126 = INT16_MAX;
	int32_t x127 = INT32_MIN;

    t31 = ((x125<=x126)*(x127%x128));

    if (t31 != -2307823) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = INT16_MIN;
	static uint32_t x130 = UINT32_MAX;
	static int16_t x132 = INT16_MIN;
	volatile uint32_t t32 = 211U;

    t32 = ((x129<=x130)*(x131%x132));

    if (t32 != 32767U) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x137 = INT32_MIN;
	static int64_t x138 = INT64_MIN;
	volatile int32_t x139 = INT32_MIN;
	int64_t t33 = 73562246865841928LL;

    t33 = ((x137<=x138)*(x139%x140));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x142 = -1;
	int8_t x143 = -1;
	int32_t x144 = INT32_MIN;
	volatile int32_t t34 = 7998;

    t34 = ((x141<=x142)*(x143%x144));

    if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x145 = 3U;
	static uint16_t x147 = 1U;
	int16_t x148 = INT16_MIN;
	volatile int32_t t35 = 3117606;

    t35 = ((x145<=x146)*(x147%x148));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x149 = INT8_MIN;
	uint32_t x150 = 17144U;
	static volatile int8_t x151 = 1;
	static int32_t t36 = -2933448;

    t36 = ((x149<=x150)*(x151%x152));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x153 = INT8_MAX;
	uint16_t x154 = 6196U;
	uint32_t x155 = UINT32_MAX;
	uint32_t t37 = 4216U;

    t37 = ((x153<=x154)*(x155%x156));

    if (t37 != 2147483647U) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int32_t x157 = 84496;
	int16_t x159 = 0;
	static int32_t t38 = 151;

    t38 = ((x157<=x158)*(x159%x160));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x162 = 1702U;
	int32_t x163 = -104003704;
	int16_t x164 = -1952;
	int32_t t39 = 106359;

    t39 = ((x161<=x162)*(x163%x164));

    if (t39 != -1144) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x165 = UINT16_MAX;
	int8_t x166 = INT8_MIN;
	int32_t x167 = INT32_MIN;
	static volatile int32_t x168 = INT32_MIN;
	int32_t t40 = -353332828;

    t40 = ((x165<=x166)*(x167%x168));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x169 = 763290137;
	static int8_t x171 = 14;
	int32_t x172 = INT32_MIN;

    t41 = ((x169<=x170)*(x171%x172));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x173 = 1;
	uint32_t x174 = 7127595U;
	static int64_t x175 = INT64_MIN;
	int16_t x176 = 1;
	int64_t t42 = -867331LL;

    t42 = ((x173<=x174)*(x175%x176));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x177 = -1385;
	int16_t x178 = INT16_MIN;
	static int16_t x180 = INT16_MAX;

    t43 = ((x177<=x178)*(x179%x180));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint16_t x182 = 0U;
	volatile int64_t x184 = -1LL;
	int64_t t44 = -246807LL;

    t44 = ((x181<=x182)*(x183%x184));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x186 = INT64_MIN;
	uint8_t x187 = 23U;
	int64_t x188 = INT64_MIN;
	int64_t t45 = -6183LL;

    t45 = ((x185<=x186)*(x187%x188));

    if (t45 != 23LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x190 = -1;
	uint64_t x191 = 911419931923570837LLU;
	int32_t x192 = 416;
	volatile uint64_t t46 = 1683252841LLU;

    t46 = ((x189<=x190)*(x191%x192));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x193 = INT16_MAX;
	static uint64_t x194 = UINT64_MAX;
	int8_t x195 = -2;
	uint64_t x196 = 54927433948LLU;

    t47 = ((x193<=x194)*(x195%x196));

    if (t47 != 13845586806LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x197 = -1;
	static int16_t x198 = INT16_MAX;
	int64_t x199 = INT64_MAX;
	int16_t x200 = INT16_MIN;
	static int64_t t48 = -3735689157LL;

    t48 = ((x197<=x198)*(x199%x200));

    if (t48 != 32767LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x201 = INT32_MAX;
	static int32_t x202 = -14329;
	uint16_t x204 = UINT16_MAX;
	volatile int32_t t49 = 1;

    t49 = ((x201<=x202)*(x203%x204));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x205 = INT16_MAX;
	static int32_t x207 = 2675;
	int32_t x208 = INT32_MAX;
	volatile int32_t t50 = 59008006;

    t50 = ((x205<=x206)*(x207%x208));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x209 = 1;
	int32_t x210 = -1;
	static uint32_t x211 = UINT32_MAX;
	volatile int32_t x212 = -1;
	uint32_t t51 = 209053771U;

    t51 = ((x209<=x210)*(x211%x212));

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x213 = -12615473;
	uint32_t x214 = 2U;
	int8_t x215 = -1;
	int8_t x216 = INT8_MAX;

    t52 = ((x213<=x214)*(x215%x216));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int8_t x217 = -9;
	int32_t x218 = INT32_MIN;
	volatile int16_t x219 = -1;
	uint16_t x220 = 642U;

    t53 = ((x217<=x218)*(x219%x220));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int64_t x221 = INT64_MIN;
	int32_t x222 = -12;
	int16_t x223 = -1;
	int32_t x224 = -1;

    t54 = ((x221<=x222)*(x223%x224));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x226 = -1;
	static int8_t x227 = 0;
	int8_t x228 = 4;

    t55 = ((x225<=x226)*(x227%x228));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x229 = 0U;
	volatile int8_t x230 = 0;
	uint32_t x231 = 26146U;
	static int32_t x232 = INT32_MIN;

    t56 = ((x229<=x230)*(x231%x232));

    if (t56 != 26146U) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x233 = -523175511LL;
	static uint64_t x234 = UINT64_MAX;
	uint8_t x235 = 26U;
	uint8_t x236 = UINT8_MAX;
	static int32_t t57 = -271;

    t57 = ((x233<=x234)*(x235%x236));

    if (t57 != 26) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x237 = UINT32_MAX;
	uint32_t x238 = 56580202U;
	int8_t x239 = -1;
	static int64_t x240 = -13179LL;
	int64_t t58 = -11LL;

    t58 = ((x237<=x238)*(x239%x240));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x241 = 16U;
	int64_t x242 = INT64_MIN;
	int32_t x243 = 0;
	volatile int64_t x244 = INT64_MIN;

    t59 = ((x241<=x242)*(x243%x244));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int64_t x249 = INT64_MIN;
	int8_t x250 = INT8_MIN;
	static volatile uint8_t x251 = 11U;
	volatile uint64_t x252 = 21734463LLU;
	uint64_t t60 = 1963158LLU;

    t60 = ((x249<=x250)*(x251%x252));

    if (t60 != 11LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x254 = UINT32_MAX;
	int16_t x255 = INT16_MIN;
	uint32_t x256 = 73471U;
	uint32_t t61 = 15891608U;

    t61 = ((x253<=x254)*(x255%x256));

    if (t61 != 40281U) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint32_t x257 = 64987U;
	int8_t x258 = 0;
	uint64_t x259 = 216LLU;
	volatile uint64_t t62 = 182819807LLU;

    t62 = ((x257<=x258)*(x259%x260));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x261 = INT16_MAX;
	uint16_t x262 = UINT16_MAX;
	uint32_t x263 = 288747U;
	volatile uint64_t t63 = 847052968002840271LLU;

    t63 = ((x261<=x262)*(x263%x264));

    if (t63 != 288747LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x265 = -2;
	int16_t x266 = INT16_MIN;
	uint16_t x267 = 32532U;
	int8_t x268 = INT8_MIN;

    t64 = ((x265<=x266)*(x267%x268));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x269 = INT64_MAX;
	int64_t x271 = INT64_MIN;
	volatile int64_t t65 = -65484156LL;

    t65 = ((x269<=x270)*(x271%x272));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x273 = 132222348746LL;
	static uint8_t x274 = 126U;
	int64_t x276 = -1LL;
	volatile int64_t t66 = -423343LL;

    t66 = ((x273<=x274)*(x275%x276));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x277 = INT32_MIN;
	int64_t x278 = INT64_MIN;
	int32_t x280 = INT32_MIN;
	volatile int32_t t67 = 43917244;

    t67 = ((x277<=x278)*(x279%x280));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x282 = -1;
	int8_t x283 = INT8_MIN;
	uint64_t x284 = 2129LLU;
	uint64_t t68 = 202086915354163LLU;

    t68 = ((x281<=x282)*(x283%x284));

    if (t68 != 1156LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x286 = INT8_MAX;
	int32_t x288 = INT32_MIN;
	int32_t t69 = -1801998;

    t69 = ((x285<=x286)*(x287%x288));

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x289 = 86U;
	static int8_t x290 = -45;
	volatile uint8_t x291 = 8U;
	static int64_t x292 = INT64_MIN;
	int64_t t70 = 0LL;

    t70 = ((x289<=x290)*(x291%x292));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x293 = -1197146LL;
	static int16_t x294 = INT16_MIN;
	int32_t x296 = -257512271;
	static volatile int32_t t71 = -19511945;

    t71 = ((x293<=x294)*(x295%x296));

    if (t71 != 8689) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x298 = 0;
	int64_t x299 = -56074575940LL;

    t72 = ((x297<=x298)*(x299%x300));

    if (t72 != -40LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint16_t x301 = 2815U;
	volatile int16_t x302 = -3;
	uint32_t x303 = 216155532U;
	int32_t x304 = INT32_MIN;

    t73 = ((x301<=x302)*(x303%x304));

    if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x309 = INT32_MIN;
	static int8_t x311 = -7;
	int8_t x312 = INT8_MIN;
	volatile int32_t t74 = 57179625;

    t74 = ((x309<=x310)*(x311%x312));

    if (t74 != -7) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x313 = 4272843097692LLU;
	int16_t x314 = -6507;
	uint32_t x315 = 23933563U;
	volatile int16_t x316 = -1;
	volatile uint32_t t75 = 248607378U;

    t75 = ((x313<=x314)*(x315%x316));

    if (t75 != 23933563U) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x317 = -1LL;
	static volatile int64_t x318 = INT64_MAX;
	static int32_t x319 = INT32_MIN;
	int16_t x320 = -705;
	static volatile int32_t t76 = 49015;

    t76 = ((x317<=x318)*(x319%x320));

    if (t76 != -68) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x321 = UINT8_MAX;
	static int16_t x324 = INT16_MAX;
	int32_t t77 = 253907702;

    t77 = ((x321<=x322)*(x323%x324));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x325 = 479U;
	static uint16_t x326 = 82U;
	uint8_t x328 = UINT8_MAX;
	int32_t t78 = -72526901;

    t78 = ((x325<=x326)*(x327%x328));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x329 = -1;
	int64_t x331 = 12LL;
	volatile int64_t x332 = -1086914671764734198LL;
	volatile int64_t t79 = 57484752002909LL;

    t79 = ((x329<=x330)*(x331%x332));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x333 = INT8_MAX;
	int16_t x334 = INT16_MIN;
	volatile uint16_t x335 = UINT16_MAX;
	int32_t x336 = INT32_MIN;
	volatile int32_t t80 = 732;

    t80 = ((x333<=x334)*(x335%x336));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x338 = -388057LL;
	volatile uint8_t x339 = 123U;
	volatile int16_t x340 = -1;
	int32_t t81 = -448855;

    t81 = ((x337<=x338)*(x339%x340));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x341 = INT64_MAX;
	static int64_t x342 = INT64_MIN;
	volatile uint8_t x343 = 59U;
	uint16_t x344 = 5296U;
	int32_t t82 = -78;

    t82 = ((x341<=x342)*(x343%x344));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x345 = INT8_MIN;
	int32_t x346 = INT32_MIN;
	int32_t x347 = 4302196;
	int8_t x348 = INT8_MIN;
	int32_t t83 = 231954839;

    t83 = ((x345<=x346)*(x347%x348));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x349 = -469166830287419LL;
	static volatile int8_t x350 = 0;
	int16_t x351 = 1;
	int8_t x352 = INT8_MAX;

    t84 = ((x349<=x350)*(x351%x352));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x355 = 67U;
	static volatile uint32_t x356 = UINT32_MAX;
	static volatile uint32_t t85 = 2U;

    t85 = ((x353<=x354)*(x355%x356));

    if (t85 != 67U) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x357 = INT8_MAX;
	volatile int64_t x358 = INT64_MIN;
	int64_t x359 = -1LL;
	int16_t x360 = INT16_MIN;
	int64_t t86 = 3347322702154LL;

    t86 = ((x357<=x358)*(x359%x360));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x362 = 3324LLU;
	static volatile int16_t x363 = INT16_MAX;
	int64_t x364 = -25336815410632LL;
	volatile int64_t t87 = 13LL;

    t87 = ((x361<=x362)*(x363%x364));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x365 = INT16_MIN;
	int64_t x366 = 191345122493477LL;
	int32_t x367 = INT32_MIN;
	static int8_t x368 = -1;

    t88 = ((x365<=x366)*(x367%x368));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x369 = -1;
	int8_t x370 = 1;
	int16_t x371 = INT16_MIN;
	volatile uint8_t x372 = UINT8_MAX;
	volatile int32_t t89 = 2371;

    t89 = ((x369<=x370)*(x371%x372));

    if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x373 = -1;
	volatile int32_t x374 = -1;
	int32_t x375 = INT32_MIN;
	volatile uint64_t x376 = 57LLU;
	volatile uint64_t t90 = 7757834LLU;

    t90 = ((x373<=x374)*(x375%x376));

    if (t90 != 14LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x379 = 1U;
	int16_t x380 = INT16_MAX;
	volatile int32_t t91 = -866924959;

    t91 = ((x377<=x378)*(x379%x380));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x381 = 1942958;
	static uint8_t x382 = UINT8_MAX;
	static uint16_t x383 = 202U;
	int64_t x384 = INT64_MIN;
	static int64_t t92 = 3445425375499651LL;

    t92 = ((x381<=x382)*(x383%x384));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x386 = UINT64_MAX;
	int16_t x388 = INT16_MAX;
	static int32_t t93 = -7114432;

    t93 = ((x385<=x386)*(x387%x388));

    if (t93 != 18) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x390 = INT8_MAX;
	int64_t x391 = INT64_MAX;
	uint64_t x392 = 46622838LLU;
	volatile uint64_t t94 = 87739051358826456LLU;

    t94 = ((x389<=x390)*(x391%x392));

    if (t94 != 15376867LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x393 = -1;
	int8_t x394 = INT8_MIN;
	int16_t x395 = INT16_MIN;
	int16_t x396 = INT16_MAX;

    t95 = ((x393<=x394)*(x395%x396));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x397 = -1LL;
	int8_t x398 = -1;
	uint32_t x399 = 1025430019U;
	int64_t x400 = INT64_MIN;
	static int64_t t96 = 579642285622332LL;

    t96 = ((x397<=x398)*(x399%x400));

    if (t96 != 1025430019LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x401 = 0LL;
	int8_t x402 = INT8_MIN;
	static volatile int16_t x403 = INT16_MIN;
	volatile int32_t t97 = -32635044;

    t97 = ((x401<=x402)*(x403%x404));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x406 = INT16_MAX;
	volatile uint64_t x407 = UINT64_MAX;
	uint64_t x408 = 868987LLU;
	volatile uint64_t t98 = 658685081069LLU;

    t98 = ((x405<=x406)*(x407%x408));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x409 = UINT64_MAX;
	int32_t x410 = -200787484;
	int32_t x411 = INT32_MIN;
	int16_t x412 = -1;
	int32_t t99 = 676364814;

    t99 = ((x409<=x410)*(x411%x412));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x413 = UINT64_MAX;
	uint32_t x414 = 228847U;
	static int32_t x415 = -1;
	static int8_t x416 = INT8_MAX;
	volatile int32_t t100 = -20812511;

    t100 = ((x413<=x414)*(x415%x416));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x418 = INT64_MIN;
	int64_t x420 = -419107857813615LL;
	static int64_t t101 = -84LL;

    t101 = ((x417<=x418)*(x419%x420));

    if (t101 != 57LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x422 = INT32_MAX;
	uint64_t x423 = 990LLU;
	int64_t x424 = -1LL;
	uint64_t t102 = 29352661854371728LLU;

    t102 = ((x421<=x422)*(x423%x424));

    if (t102 != 990LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x425 = INT8_MAX;
	int16_t x427 = 1709;
	int64_t x428 = INT64_MIN;

    t103 = ((x425<=x426)*(x427%x428));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x429 = 1953;
	int64_t x430 = 59654429639223LL;
	uint32_t x431 = 0U;
	static uint32_t x432 = UINT32_MAX;
	static uint32_t t104 = 2702U;

    t104 = ((x429<=x430)*(x431%x432));

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x435 = 0;
	volatile int32_t x436 = 37198;
	volatile int32_t t105 = 605437;

    t105 = ((x433<=x434)*(x435%x436));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x441 = -13052;
	uint16_t x442 = 29411U;
	volatile int32_t x444 = INT32_MIN;
	int64_t t106 = 694605633798745LL;

    t106 = ((x441<=x442)*(x443%x444));

    if (t106 != 2147483647LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x446 = INT8_MAX;
	int64_t x448 = INT64_MIN;
	volatile int64_t t107 = 491995095082LL;

    t107 = ((x445<=x446)*(x447%x448));

    if (t107 != 345006LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x450 = INT32_MIN;
	uint8_t x452 = 78U;
	static int32_t t108 = 2;

    t108 = ((x449<=x450)*(x451%x452));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x453 = INT8_MIN;
	uint16_t x454 = UINT16_MAX;
	int64_t x455 = -1LL;
	uint16_t x456 = UINT16_MAX;
	int64_t t109 = -4LL;

    t109 = ((x453<=x454)*(x455%x456));

    if (t109 != -1LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x457 = INT8_MAX;
	uint16_t x458 = 38U;
	int64_t x459 = -123937941713LL;
	int64_t x460 = -224059LL;
	volatile int64_t t110 = -1285470547183452049LL;

    t110 = ((x457<=x458)*(x459%x460));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x461 = INT32_MIN;
	int64_t x463 = INT64_MIN;
	static uint64_t x464 = 756523087526LLU;
	uint64_t t111 = 67919187997114062LLU;

    t111 = ((x461<=x462)*(x463%x464));

    if (t111 != 667063076742LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x465 = 24681096U;
	static int64_t x466 = 13431045LL;
	uint32_t x467 = UINT32_MAX;
	int16_t x468 = INT16_MAX;
	uint32_t t112 = 41817U;

    t112 = ((x465<=x466)*(x467%x468));

    if (t112 != 0U) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x469 = 13;
	volatile int32_t x471 = INT32_MAX;
	static int32_t t113 = -857142;

    t113 = ((x469<=x470)*(x471%x472));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x473 = 12301U;
	uint16_t x474 = 1U;
	uint16_t x475 = 1800U;
	volatile int64_t t114 = 252263703149LL;

    t114 = ((x473<=x474)*(x475%x476));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x477 = -1;
	static volatile int16_t x478 = INT16_MAX;
	int32_t x479 = INT32_MIN;
	int8_t x480 = INT8_MIN;
	volatile int32_t t115 = 1567053;

    t115 = ((x477<=x478)*(x479%x480));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x481 = INT16_MIN;
	uint64_t x482 = 9LLU;
	uint16_t x483 = 1U;
	int32_t x484 = -55712105;
	static int32_t t116 = -317296;

    t116 = ((x481<=x482)*(x483%x484));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x485 = INT8_MIN;
	int8_t x486 = INT8_MAX;
	volatile uint32_t x487 = 3451U;
	volatile int64_t x488 = INT64_MIN;
	static int64_t t117 = -538384254917376LL;

    t117 = ((x485<=x486)*(x487%x488));

    if (t117 != 3451LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x489 = INT8_MIN;
	static volatile int16_t x490 = -271;
	uint32_t x491 = 55U;
	int32_t x492 = INT32_MIN;
	volatile uint32_t t118 = 1U;

    t118 = ((x489<=x490)*(x491%x492));

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint64_t x493 = UINT64_MAX;
	int64_t x496 = INT64_MAX;
	int64_t t119 = -1743271956828639823LL;

    t119 = ((x493<=x494)*(x495%x496));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x497 = INT8_MIN;
	uint32_t x498 = 1631234U;
	int64_t x499 = INT64_MIN;
	int32_t x500 = INT32_MIN;
	volatile int64_t t120 = -429883131002LL;

    t120 = ((x497<=x498)*(x499%x500));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x505 = 0U;
	int32_t x506 = INT32_MIN;
	static uint64_t x507 = 203780011027LLU;
	int32_t x508 = 1;
	uint64_t t121 = 515156LLU;

    t121 = ((x505<=x506)*(x507%x508));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x509 = INT32_MAX;
	static volatile uint32_t x511 = UINT32_MAX;
	int64_t x512 = -1LL;

    t122 = ((x509<=x510)*(x511%x512));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x513 = UINT8_MAX;
	int32_t x514 = INT32_MAX;
	int8_t x515 = INT8_MIN;

    t123 = ((x513<=x514)*(x515%x516));

    if (t123 != -128LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x517 = -1;
	int16_t x518 = INT16_MIN;
	static int64_t x519 = INT64_MIN;
	int16_t x520 = -1;
	volatile int64_t t124 = -63301662926206386LL;

    t124 = ((x517<=x518)*(x519%x520));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x521 = INT16_MAX;
	static int64_t x522 = 5099469542761749LL;
	volatile int16_t x523 = INT16_MIN;
	uint8_t x524 = 1U;
	int32_t t125 = 101041;

    t125 = ((x521<=x522)*(x523%x524));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x529 = 218U;
	static uint32_t x530 = UINT32_MAX;
	int64_t x531 = -31808887451LL;
	static volatile int64_t t126 = 47861455052LL;

    t126 = ((x529<=x530)*(x531%x532));

    if (t126 != -1744116379LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x533 = 1U;
	int8_t x534 = -2;
	volatile int16_t x535 = INT16_MIN;
	volatile int64_t t127 = -2035LL;

    t127 = ((x533<=x534)*(x535%x536));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint16_t x537 = 2457U;
	int32_t x538 = INT32_MIN;
	int64_t x539 = -163664468421LL;
	int8_t x540 = 30;
	volatile int64_t t128 = -5179LL;

    t128 = ((x537<=x538)*(x539%x540));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x542 = -1LL;
	int8_t x543 = 0;
	int16_t x544 = INT16_MIN;
	static int32_t t129 = -10710;

    t129 = ((x541<=x542)*(x543%x544));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x545 = INT16_MIN;
	uint8_t x546 = UINT8_MAX;
	uint16_t x547 = 477U;
	int16_t x548 = -40;
	static int32_t t130 = -3670020;

    t130 = ((x545<=x546)*(x547%x548));

    if (t130 != 37) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x549 = UINT16_MAX;
	int16_t x552 = INT16_MAX;
	int32_t t131 = 536388044;

    t131 = ((x549<=x550)*(x551%x552));

    if (t131 != 5167) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x553 = 22146910U;
	static int32_t x554 = -4;
	int32_t x555 = INT32_MAX;
	int16_t x556 = -9798;

    t132 = ((x553<=x554)*(x555%x556));

    if (t132 != 6997) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x557 = -1;
	int8_t x558 = INT8_MIN;

    t133 = ((x557<=x558)*(x559%x560));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x561 = INT32_MIN;
	int64_t x562 = 1544LL;
	int64_t x563 = INT64_MAX;
	uint16_t x564 = 25U;

    t134 = ((x561<=x562)*(x563%x564));

    if (t134 != 7LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x565 = INT32_MIN;
	uint64_t x566 = 123262088001025LLU;
	static int32_t t135 = -377;

    t135 = ((x565<=x566)*(x567%x568));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x569 = INT16_MAX;
	volatile int64_t x570 = -1LL;
	static volatile int32_t x571 = INT32_MAX;
	int64_t x572 = INT64_MIN;
	int64_t t136 = -5408594154502LL;

    t136 = ((x569<=x570)*(x571%x572));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x573 = INT16_MIN;
	volatile uint64_t x574 = UINT64_MAX;
	uint32_t x575 = UINT32_MAX;
	int8_t x576 = -1;
	static uint32_t t137 = 1148891512U;

    t137 = ((x573<=x574)*(x575%x576));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x577 = 424713LLU;
	uint8_t x578 = 0U;
	uint16_t x579 = 21099U;
	volatile int64_t x580 = INT64_MIN;

    t138 = ((x577<=x578)*(x579%x580));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x582 = -1;
	static int32_t x583 = -1;
	volatile int64_t x584 = -1LL;

    t139 = ((x581<=x582)*(x583%x584));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x585 = INT16_MAX;
	static uint32_t x586 = UINT32_MAX;
	int32_t x587 = -145;
	int32_t x588 = INT32_MAX;

    t140 = ((x585<=x586)*(x587%x588));

    if (t140 != -145) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x589 = INT32_MIN;
	int16_t x590 = INT16_MIN;
	uint32_t t141 = 909603047U;

    t141 = ((x589<=x590)*(x591%x592));

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x593 = 0;
	int32_t x595 = -1;
	volatile int8_t x596 = INT8_MAX;
	volatile int32_t t142 = -6420047;

    t142 = ((x593<=x594)*(x595%x596));

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x597 = -1LL;
	static int64_t x598 = -58140923493702721LL;
	uint16_t x599 = 110U;
	static int8_t x600 = INT8_MIN;

    t143 = ((x597<=x598)*(x599%x600));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint8_t x601 = 1U;
	int8_t x602 = -1;
	static int32_t x603 = 866172;
	volatile uint8_t x604 = UINT8_MAX;
	static volatile int32_t t144 = -367665;

    t144 = ((x601<=x602)*(x603%x604));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x605 = -1LL;
	int32_t x606 = -969;
	volatile int32_t x608 = -245938;
	static int32_t t145 = -837647;

    t145 = ((x605<=x606)*(x607%x608));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x609 = 3617U;
	uint32_t x610 = 3U;
	uint16_t x611 = 9377U;
	int8_t x612 = 63;
	volatile int32_t t146 = 826329;

    t146 = ((x609<=x610)*(x611%x612));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x613 = -1;
	volatile int64_t x614 = INT64_MIN;
	int16_t x615 = INT16_MIN;
	uint64_t x616 = UINT64_MAX;
	volatile uint64_t t147 = 2903LLU;

    t147 = ((x613<=x614)*(x615%x616));

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int32_t x617 = -11;
	int8_t x618 = -5;
	uint8_t x619 = UINT8_MAX;
	int32_t x620 = 256073995;
	volatile int32_t t148 = 1950914;

    t148 = ((x617<=x618)*(x619%x620));

    if (t148 != 255) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x622 = -1;
	volatile int64_t x623 = -1LL;
	static int8_t x624 = -1;
	volatile int64_t t149 = 41208993787LL;

    t149 = ((x621<=x622)*(x623%x624));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x625 = -1;
	static int32_t x626 = INT32_MIN;
	int8_t x627 = 1;
	uint64_t x628 = 242828742LLU;

    t150 = ((x625<=x626)*(x627%x628));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x629 = INT8_MIN;
	uint32_t x631 = UINT32_MAX;
	uint32_t t151 = 2769015U;

    t151 = ((x629<=x630)*(x631%x632));

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x633 = 1U;
	static uint64_t t152 = 227906LLU;

    t152 = ((x633<=x634)*(x635%x636));

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x637 = -1;
	uint32_t x638 = 981832U;
	volatile uint64_t x640 = 6200090157563161LLU;

    t153 = ((x637<=x638)*(x639%x640));

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x642 = INT32_MAX;
	volatile uint32_t x643 = 1U;
	int8_t x644 = -1;
	static uint32_t t154 = 538333U;

    t154 = ((x641<=x642)*(x643%x644));

    if (t154 != 0U) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x645 = 47U;
	int32_t t155 = 134204095;

    t155 = ((x645<=x646)*(x647%x648));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x649 = 1029795212LLU;
	static volatile int64_t x650 = INT64_MIN;
	uint16_t x651 = 330U;
	static int64_t x652 = INT64_MIN;

    t156 = ((x649<=x650)*(x651%x652));

    if (t156 != 330LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x653 = INT32_MIN;
	volatile int64_t x654 = 1LL;
	static uint8_t x655 = 107U;
	uint16_t x656 = 44U;
	volatile int32_t t157 = -496;

    t157 = ((x653<=x654)*(x655%x656));

    if (t157 != 19) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x657 = 7U;
	int8_t x658 = 47;
	uint8_t x659 = UINT8_MAX;
	int32_t x660 = INT32_MAX;
	volatile int32_t t158 = -38495;

    t158 = ((x657<=x658)*(x659%x660));

    if (t158 != 255) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x662 = 1494;
	int16_t x663 = INT16_MIN;
	int8_t x664 = -8;

    t159 = ((x661<=x662)*(x663%x664));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x665 = -1;
	static int32_t x666 = -168600319;
	static uint64_t x667 = 303644706896694LLU;
	uint64_t t160 = 354520180419LLU;

    t160 = ((x665<=x666)*(x667%x668));

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x669 = -1;
	volatile int8_t x670 = INT8_MIN;
	volatile int64_t x671 = INT64_MIN;
	volatile uint16_t x672 = UINT16_MAX;
	volatile int64_t t161 = -2140422013451LL;

    t161 = ((x669<=x670)*(x671%x672));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x673 = 3;
	volatile int16_t x674 = -31;
	static int64_t x675 = INT64_MIN;
	int16_t x676 = INT16_MIN;
	int64_t t162 = -58207352412462LL;

    t162 = ((x673<=x674)*(x675%x676));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x678 = 7617U;
	int64_t x679 = -1LL;
	int16_t x680 = INT16_MAX;
	int64_t t163 = -7724105LL;

    t163 = ((x677<=x678)*(x679%x680));

    if (t163 != -1LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint8_t x681 = 2U;
	int16_t x682 = -3;
	int8_t x683 = INT8_MIN;
	int64_t t164 = 763866LL;

    t164 = ((x681<=x682)*(x683%x684));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x686 = 95370658U;
	static int8_t x687 = 0;
	int32_t x688 = -1038113210;
	int32_t t165 = -2249432;

    t165 = ((x685<=x686)*(x687%x688));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x690 = -3770;
	int32_t x692 = -24635;
	volatile int32_t t166 = 1;

    t166 = ((x689<=x690)*(x691%x692));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint16_t x693 = 64U;
	int32_t x695 = -92;
	static uint64_t x696 = 51165846873951552LLU;
	volatile uint64_t t167 = 86130830549885LLU;

    t167 = ((x693<=x694)*(x695%x696));

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x697 = -1;
	static uint32_t x698 = UINT32_MAX;
	volatile uint16_t x699 = UINT16_MAX;
	int64_t x700 = INT64_MIN;
	int64_t t168 = -315511092170LL;

    t168 = ((x697<=x698)*(x699%x700));

    if (t168 != 65535LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x701 = INT16_MIN;
	int8_t x702 = INT8_MAX;
	uint16_t x703 = UINT16_MAX;
	int32_t x704 = INT32_MIN;
	int32_t t169 = 8;

    t169 = ((x701<=x702)*(x703%x704));

    if (t169 != 65535) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x705 = 1878624071LLU;
	int16_t x706 = INT16_MIN;
	uint64_t x708 = 68420456945LLU;

    t170 = ((x705<=x706)*(x707%x708));

    if (t170 != 539LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x709 = INT8_MIN;
	volatile uint64_t x712 = UINT64_MAX;
	uint64_t t171 = 651530197742136LLU;

    t171 = ((x709<=x710)*(x711%x712));

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x713 = INT64_MIN;
	int16_t x714 = 3;
	int16_t x715 = INT16_MAX;
	volatile int32_t t172 = 11813010;

    t172 = ((x713<=x714)*(x715%x716));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x718 = INT8_MAX;
	volatile int32_t x719 = INT32_MIN;
	int64_t x720 = INT64_MAX;
	int64_t t173 = 2054652570600174394LL;

    t173 = ((x717<=x718)*(x719%x720));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x721 = -1;
	int8_t x722 = 1;
	volatile uint32_t x723 = UINT32_MAX;
	int8_t x724 = INT8_MIN;
	volatile uint32_t t174 = 63108307U;

    t174 = ((x721<=x722)*(x723%x724));

    if (t174 != 127U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x725 = 85U;
	uint32_t x727 = 8U;
	volatile int8_t x728 = 15;
	volatile uint32_t t175 = 475069833U;

    t175 = ((x725<=x726)*(x727%x728));

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x729 = INT32_MIN;
	volatile uint32_t x731 = UINT32_MAX;
	int64_t x732 = INT64_MIN;
	int64_t t176 = -18682461LL;

    t176 = ((x729<=x730)*(x731%x732));

    if (t176 != 4294967295LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x733 = UINT32_MAX;
	volatile int8_t x736 = INT8_MIN;
	static uint64_t t177 = 43074157LLU;

    t177 = ((x733<=x734)*(x735%x736));

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x737 = -1LL;
	volatile uint8_t x738 = UINT8_MAX;
	int64_t x739 = -24226LL;
	static uint64_t x740 = 12589293793385526LLU;
	volatile uint64_t t178 = 2054273201673389LLU;

    t178 = ((x737<=x738)*(x739%x740));

    if (t178 != 3428666399731800LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x741 = INT8_MIN;
	int32_t x743 = -206455;
	int32_t x744 = -1;
	int32_t t179 = 31;

    t179 = ((x741<=x742)*(x743%x744));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int16_t x746 = -1;
	volatile int16_t x748 = INT16_MIN;
	static uint32_t t180 = 244260498U;

    t180 = ((x745<=x746)*(x747%x748));

    if (t180 != 0U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x749 = 0U;
	static uint32_t x751 = 1043275U;
	int16_t x752 = -1;
	volatile uint32_t t181 = 112108488U;

    t181 = ((x749<=x750)*(x751%x752));

    if (t181 != 1043275U) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x753 = -850LL;
	uint32_t x754 = 53529U;
	uint16_t x755 = 3U;
	int16_t x756 = INT16_MIN;
	volatile int32_t t182 = 27;

    t182 = ((x753<=x754)*(x755%x756));

    if (t182 != 3) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x757 = INT16_MIN;
	int32_t x758 = -1;
	static int8_t x759 = -1;
	int8_t x760 = -14;
	int32_t t183 = 6234;

    t183 = ((x757<=x758)*(x759%x760));

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int64_t x761 = 77159063851287747LL;
	volatile uint64_t x762 = 2564868369188LLU;
	int16_t x764 = 1;
	volatile int32_t t184 = -37;

    t184 = ((x761<=x762)*(x763%x764));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x765 = INT16_MAX;
	int8_t x766 = 1;
	uint64_t x768 = 105870522LLU;
	uint64_t t185 = 3812254691LLU;

    t185 = ((x765<=x766)*(x767%x768));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x769 = INT64_MIN;
	volatile int8_t x770 = INT8_MAX;
	int16_t x771 = INT16_MAX;
	int32_t x772 = 2526745;
	volatile int32_t t186 = -1006204;

    t186 = ((x769<=x770)*(x771%x772));

    if (t186 != 32767) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x773 = INT64_MAX;
	int8_t x775 = 36;
	int16_t x776 = INT16_MIN;
	volatile int32_t t187 = -500098;

    t187 = ((x773<=x774)*(x775%x776));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x777 = INT64_MIN;
	int16_t x778 = INT16_MAX;
	uint32_t x780 = UINT32_MAX;
	uint32_t t188 = 16067U;

    t188 = ((x777<=x778)*(x779%x780));

    if (t188 != 255U) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x785 = 2;
	static uint32_t x786 = 8171U;
	uint64_t x787 = UINT64_MAX;
	volatile int64_t x788 = INT64_MIN;

    t189 = ((x785<=x786)*(x787%x788));

    if (t189 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x789 = INT32_MIN;
	uint16_t x790 = 5U;
	int8_t x791 = -1;
	uint64_t x792 = 35315606847LLU;
	volatile uint64_t t190 = 1162LLU;

    t190 = ((x789<=x790)*(x791%x792));

    if (t190 != 22879916163LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x793 = 1;
	int64_t x794 = INT64_MIN;
	static int16_t x795 = INT16_MIN;
	int16_t x796 = INT16_MIN;

    t191 = ((x793<=x794)*(x795%x796));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x797 = -5558;
	int64_t x798 = -2401138LL;
	static uint8_t x799 = 48U;
	int64_t x800 = INT64_MIN;
	int64_t t192 = 973194268482772119LL;

    t192 = ((x797<=x798)*(x799%x800));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x801 = -1;
	static int8_t x802 = INT8_MIN;
	uint16_t x803 = 3562U;
	static int8_t x804 = 36;
	volatile int32_t t193 = 47851;

    t193 = ((x801<=x802)*(x803%x804));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x806 = 2534U;
	int16_t x807 = INT16_MIN;
	volatile int32_t t194 = 71;

    t194 = ((x805<=x806)*(x807%x808));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x809 = -1LL;
	uint64_t x811 = 2932736LLU;
	uint64_t x812 = UINT64_MAX;
	volatile uint64_t t195 = 1578837LLU;

    t195 = ((x809<=x810)*(x811%x812));

    if (t195 != 2932736LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int32_t x813 = INT32_MIN;
	static int8_t x814 = -1;
	volatile uint8_t x815 = 43U;
	static int64_t x816 = -1LL;
	static volatile int64_t t196 = -11308344371155LL;

    t196 = ((x813<=x814)*(x815%x816));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x817 = 26254703091951792LLU;
	int32_t x819 = 7;
	uint16_t x820 = 7U;
	volatile int32_t t197 = 743044704;

    t197 = ((x817<=x818)*(x819%x820));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x821 = INT32_MAX;
	static volatile uint32_t x822 = 1031668U;
	int8_t x823 = INT8_MIN;
	int16_t x824 = -11929;
	static volatile int32_t t198 = -1;

    t198 = ((x821<=x822)*(x823%x824));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x825 = 405325LLU;
	static uint16_t x826 = 98U;
	int32_t x827 = INT32_MAX;

    t199 = ((x825<=x826)*(x827%x828));

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

