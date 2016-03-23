
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

volatile uint64_t x4 = UINT64_MAX;
int32_t x10 = -1;
volatile int32_t x25 = -12925326;
int64_t x28 = -1LL;
uint8_t x36 = UINT8_MAX;
int32_t t6 = -702;
static int16_t x43 = -1;
static int64_t x50 = 1104786603061343602LL;
uint8_t x56 = 8U;
int64_t x68 = -1LL;
volatile uint32_t t15 = 209U;
uint64_t x82 = 67123943791991LLU;
static volatile int8_t x83 = 45;
uint32_t t18 = 13U;
volatile int64_t x91 = INT64_MIN;
volatile int32_t t20 = -87599197;
static int64_t x98 = INT64_MIN;
int64_t x108 = -35413942464LL;
int64_t x118 = INT64_MIN;
uint64_t t27 = 402187481LLU;
int16_t x132 = 494;
int8_t x133 = INT8_MIN;
uint64_t x136 = 635780411LLU;
volatile int32_t t29 = 97048051;
int32_t x139 = 1;
int64_t t32 = -19611325741LL;
int32_t x150 = INT32_MIN;
int16_t x152 = INT16_MIN;
int64_t x159 = -1LL;
volatile int8_t x163 = INT8_MIN;
int64_t x164 = INT64_MIN;
int16_t x183 = INT16_MAX;
static volatile int8_t x185 = 1;
int32_t t39 = 0;
volatile int64_t x189 = INT64_MIN;
volatile int64_t t40 = -8787270LL;
volatile int8_t x194 = INT8_MIN;
uint16_t x195 = UINT16_MAX;
uint32_t x197 = 138129U;
static int64_t x199 = INT64_MAX;
volatile int8_t x203 = INT8_MAX;
volatile uint32_t x209 = 167681U;
int32_t x212 = -104252896;
volatile uint16_t x215 = 2U;
int8_t x225 = INT8_MAX;
int8_t x231 = -1;
volatile int32_t t49 = 7867395;
static int32_t x242 = -1;
int32_t x243 = INT32_MIN;
int64_t x248 = INT64_MIN;
volatile uint64_t x268 = 7421515030458447030LLU;
uint8_t x274 = 1U;
int16_t x280 = INT16_MIN;
int64_t t60 = -10876301614220278LL;
static volatile int64_t x297 = INT64_MIN;
uint8_t x300 = 62U;
int32_t x301 = INT32_MAX;
int8_t x304 = INT8_MIN;
uint64_t t63 = 3858352LLU;
static int64_t t64 = -1663382LL;
int8_t x310 = -7;
int16_t x312 = -6;
int32_t t65 = -3;
int64_t x323 = INT64_MAX;
volatile int16_t x324 = INT16_MIN;
int8_t x329 = -1;
int8_t x331 = 1;
volatile int8_t x332 = -1;
static int32_t t69 = 478;
int8_t x337 = 7;
int16_t x340 = INT16_MAX;
uint32_t x341 = 1051U;
uint64_t x352 = UINT64_MAX;
int16_t x353 = INT16_MIN;
static int8_t x354 = 3;
int16_t x359 = 6574;
static uint64_t x362 = 1413323102539LLU;
int32_t x363 = -239153;
static int64_t x369 = 41LL;
volatile int64_t t77 = 178641817748172LL;
int32_t t78 = 182528167;
volatile int8_t x387 = INT8_MIN;
int16_t x391 = INT16_MAX;
int64_t x398 = -148144566825429LL;
int64_t x399 = 139009012LL;
uint16_t x403 = 31U;
volatile int32_t t85 = 21281464;
int64_t x428 = -1LL;
int32_t t89 = -1862;
int32_t x435 = -37281;
volatile int32_t x450 = INT32_MIN;
uint32_t x454 = 1365003825U;
volatile uint64_t x456 = 3124616071465872LLU;
uint32_t t94 = 6U;
int16_t x462 = INT16_MAX;
static volatile int8_t x464 = -15;
static int16_t x469 = 40;
int32_t x477 = 1027072634;
uint16_t x484 = 0U;
static uint16_t x485 = UINT16_MAX;
uint64_t t104 = 5240263270LLU;
static int16_t x500 = 349;
uint8_t x503 = 57U;
uint64_t x506 = 30484LLU;
int32_t x508 = -1;
volatile uint64_t t107 = 323884129086997LLU;
static int32_t x511 = INT32_MAX;
int64_t x523 = -10LL;
int32_t x528 = INT32_MIN;
int32_t x533 = INT32_MAX;
volatile int32_t t112 = -223;
volatile int16_t x542 = INT16_MAX;
uint8_t x558 = 14U;
int64_t x560 = -1LL;
volatile uint16_t x561 = 0U;
volatile int16_t x562 = -8;
volatile uint8_t x565 = 1U;
int32_t t117 = 66;
uint8_t x579 = UINT8_MAX;
static volatile int32_t t121 = 157;
int32_t t122 = 52069953;
volatile int32_t x589 = INT32_MAX;
static uint32_t x590 = 14131484U;
int8_t x610 = INT8_MIN;
static int16_t x613 = INT16_MIN;
int64_t x626 = 50553764LL;
static int64_t t132 = -4378LL;
int64_t t133 = 7365475953405LL;
uint16_t x654 = UINT16_MAX;
int16_t x655 = INT16_MIN;
static volatile int64_t t136 = -123059569LL;
int16_t x661 = -1;
int16_t x662 = 277;
int16_t x663 = INT16_MIN;
int32_t x677 = INT32_MAX;
int64_t x681 = -1LL;
int8_t x682 = INT8_MIN;
static int64_t x683 = INT64_MIN;
int8_t x688 = INT8_MIN;
uint16_t x698 = 19270U;
int64_t t144 = -16353380125LL;
int64_t x709 = INT64_MIN;
int32_t x711 = INT32_MAX;
volatile int64_t x713 = 1950504LL;
static uint32_t x723 = 40018U;
int16_t x724 = 33;
int32_t x730 = INT32_MIN;
uint8_t x731 = 86U;
uint64_t x732 = 1672714284LLU;
uint32_t x736 = 291136211U;
uint32_t x737 = UINT32_MAX;
int64_t x741 = INT64_MAX;
volatile int8_t x742 = 24;
int64_t x744 = INT64_MIN;
uint32_t x751 = UINT32_MAX;
uint64_t x753 = 45839LLU;
int32_t x758 = 53;
int16_t x765 = 715;
uint64_t x769 = 71LLU;
volatile uint16_t x773 = UINT16_MAX;
int32_t x775 = INT32_MIN;
int32_t t161 = 5;
uint64_t x786 = 134LLU;
static uint32_t x790 = 1U;
static int16_t x794 = 452;
int8_t x795 = -1;
static int16_t x805 = INT16_MIN;
static volatile int32_t x815 = INT32_MIN;
volatile uint16_t x822 = 5635U;
int64_t x824 = -3453381058071LL;
int16_t x829 = 6132;
static int16_t x848 = 243;
volatile int32_t x856 = INT32_MIN;
volatile uint16_t x858 = UINT16_MAX;
int32_t x863 = -4790;
static volatile uint16_t x882 = 402U;
static int8_t x883 = -3;
int64_t x884 = INT64_MAX;
volatile int64_t t186 = -40164412908528LL;
int8_t x886 = INT8_MAX;
uint64_t t190 = 389505842876092546LLU;
int64_t x904 = INT64_MIN;
int16_t x909 = INT16_MIN;
static volatile int64_t x916 = -1LL;
uint32_t t194 = 20426U;
int32_t x921 = INT32_MIN;
int64_t x923 = 96328788956635505LL;
int16_t x927 = INT16_MAX;
uint8_t x930 = 1U;
int32_t x933 = INT32_MIN;


void f0(void) {
    	static volatile int16_t x1 = INT16_MAX;
	int64_t x2 = INT64_MIN;
	int8_t x3 = 1;
	volatile int64_t t0 = 528766037558LL;

    t0 = (x1%(x2+(x3<=x4)));

    if (t0 != 32767LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x9 = 1U;
	static volatile int8_t x11 = 49;
	static int8_t x12 = -1;
	volatile uint32_t t1 = 13U;

    t1 = (x9%(x10+(x11<=x12)));

    if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x13 = UINT32_MAX;
	uint8_t x14 = 78U;
	uint64_t x15 = UINT64_MAX;
	uint32_t x16 = 84458668U;
	static uint32_t t2 = 377027474U;

    t2 = (x13%(x14+(x15<=x16)));

    if (t2 != 21U) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x21 = -1;
	static volatile int16_t x22 = INT16_MAX;
	int32_t x23 = INT32_MAX;
	uint16_t x24 = 4U;
	int32_t t3 = 59;

    t3 = (x21%(x22+(x23<=x24)));

    if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x26 = 1U;
	uint64_t x27 = 61081LLU;
	int32_t t4 = -62309288;

    t4 = (x25%(x26+(x27<=x28)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x29 = 0U;
	static volatile int64_t x30 = INT64_MAX;
	int32_t x31 = INT32_MAX;
	volatile int32_t x32 = INT32_MIN;
	volatile int64_t t5 = 585408637LL;

    t5 = (x29%(x30+(x31<=x32)));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x33 = INT8_MIN;
	static volatile int8_t x34 = -13;
	static int8_t x35 = 11;

    t6 = (x33%(x34+(x35<=x36)));

    if (t6 != -8) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x37 = -231;
	volatile int16_t x38 = INT16_MIN;
	int16_t x39 = 864;
	volatile int8_t x40 = INT8_MIN;
	volatile int32_t t7 = -156619696;

    t7 = (x37%(x38+(x39<=x40)));

    if (t7 != -231) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x41 = -1;
	int16_t x42 = -1;
	int16_t x44 = INT16_MIN;
	int32_t t8 = 445461171;

    t8 = (x41%(x42+(x43<=x44)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x45 = 2U;
	uint8_t x46 = 76U;
	int16_t x47 = -11171;
	int64_t x48 = INT64_MAX;
	volatile int32_t t9 = 11196699;

    t9 = (x45%(x46+(x47<=x48)));

    if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x49 = INT64_MIN;
	int8_t x51 = 0;
	uint8_t x52 = UINT8_MAX;
	static volatile int64_t t10 = 9256256847LL;

    t10 = (x49%(x50+(x51<=x52)));

    if (t10 != -385079212364026984LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x53 = INT64_MAX;
	uint16_t x54 = 3U;
	int16_t x55 = INT16_MIN;
	static volatile int64_t t11 = 1775350155132645LL;

    t11 = (x53%(x54+(x55<=x56)));

    if (t11 != 3LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x57 = INT16_MIN;
	uint16_t x58 = 556U;
	uint32_t x59 = 200843359U;
	int8_t x60 = INT8_MIN;
	static int32_t t12 = -1372;

    t12 = (x57%(x58+(x59<=x60)));

    if (t12 != -462) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x61 = INT8_MIN;
	int32_t x62 = INT32_MIN;
	static int8_t x63 = -1;
	static int64_t x64 = INT64_MIN;
	volatile int32_t t13 = 5068;

    t13 = (x61%(x62+(x63<=x64)));

    if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x65 = -1;
	static int8_t x66 = INT8_MIN;
	int8_t x67 = 1;
	volatile int32_t t14 = 80670627;

    t14 = (x65%(x66+(x67<=x68)));

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x69 = -47546500;
	uint32_t x70 = 477599U;
	int8_t x71 = -1;
	int32_t x72 = 21;

    t15 = (x69%(x70+(x71<=x72)));

    if (t15 != 123996U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x77 = 7U;
	volatile uint64_t x78 = 238807967045327392LLU;
	volatile int16_t x79 = INT16_MIN;
	static int16_t x80 = -1;
	static uint64_t t16 = 29508105607LLU;

    t16 = (x77%(x78+(x79<=x80)));

    if (t16 != 7LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x81 = 0U;
	int8_t x84 = -1;
	static volatile uint64_t t17 = 79262612371785LLU;

    t17 = (x81%(x82+(x83<=x84)));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x85 = 461U;
	volatile int32_t x86 = INT32_MAX;
	volatile int64_t x87 = INT64_MIN;
	uint64_t x88 = 67367LLU;

    t18 = (x85%(x86+(x87<=x88)));

    if (t18 != 461U) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint32_t x89 = 71U;
	int8_t x90 = INT8_MIN;
	uint16_t x92 = UINT16_MAX;
	static volatile uint32_t t19 = 934632495U;

    t19 = (x89%(x90+(x91<=x92)));

    if (t19 != 71U) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x93 = 5U;
	int8_t x94 = INT8_MAX;
	static volatile int8_t x95 = 18;
	uint8_t x96 = UINT8_MAX;

    t20 = (x93%(x94+(x95<=x96)));

    if (t20 != 5) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x97 = 1U;
	int32_t x99 = -27170785;
	uint16_t x100 = 415U;
	int64_t t21 = -1308114211338592LL;

    t21 = (x97%(x98+(x99<=x100)));

    if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x101 = -1LL;
	static int64_t x102 = INT64_MIN;
	int8_t x103 = -7;
	int16_t x104 = INT16_MIN;
	int64_t t22 = 1752717806572904LL;

    t22 = (x101%(x102+(x103<=x104)));

    if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x105 = INT8_MIN;
	static uint64_t x106 = 128070LLU;
	uint32_t x107 = 96U;
	uint64_t t23 = 56465509641LLU;

    t23 = (x105%(x106+(x107<=x108)));

    if (t23 != 102308LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x109 = INT32_MIN;
	int8_t x110 = 0;
	volatile int8_t x111 = -41;
	int8_t x112 = INT8_MAX;
	static volatile int32_t t24 = -1588;

    t24 = (x109%(x110+(x111<=x112)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int16_t x113 = INT16_MIN;
	int8_t x114 = INT8_MIN;
	int16_t x115 = -1;
	uint16_t x116 = 10020U;
	static int32_t t25 = 0;

    t25 = (x113%(x114+(x115<=x116)));

    if (t25 != -2) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int16_t x117 = -6;
	int8_t x119 = 0;
	int32_t x120 = -1;
	static volatile int64_t t26 = 1729LL;

    t26 = (x117%(x118+(x119<=x120)));

    if (t26 != -6LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x125 = 17313321337370395LLU;
	static int16_t x126 = 2;
	uint32_t x127 = UINT32_MAX;
	volatile uint64_t x128 = 21402936067665LLU;

    t27 = (x125%(x126+(x127<=x128)));

    if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x129 = -1;
	volatile int32_t x130 = -12627;
	volatile uint64_t x131 = 703261214350433LLU;
	volatile int32_t t28 = -947157;

    t28 = (x129%(x130+(x131<=x132)));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x134 = -2;
	int64_t x135 = INT64_MIN;

    t29 = (x133%(x134+(x135<=x136)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x137 = 44;
	int8_t x138 = INT8_MAX;
	uint64_t x140 = 3441570432366125LLU;
	static int32_t t30 = 0;

    t30 = (x137%(x138+(x139<=x140)));

    if (t30 != 44) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x141 = -1LL;
	int32_t x142 = 24408910;
	uint32_t x143 = 126U;
	volatile int8_t x144 = INT8_MIN;
	int64_t t31 = -122486508492LL;

    t31 = (x141%(x142+(x143<=x144)));

    if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x145 = INT64_MIN;
	int32_t x146 = 1;
	static int64_t x147 = -1LL;
	static uint8_t x148 = 0U;

    t32 = (x145%(x146+(x147<=x148)));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x149 = -1;
	int16_t x151 = 0;
	volatile int32_t t33 = -22;

    t33 = (x149%(x150+(x151<=x152)));

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x157 = INT16_MIN;
	volatile uint64_t x158 = UINT64_MAX;
	int32_t x160 = -329;
	uint64_t t34 = 1769LLU;

    t34 = (x157%(x158+(x159<=x160)));

    if (t34 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x161 = 38U;
	int64_t x162 = INT64_MIN;
	int64_t t35 = 138804695195291750LL;

    t35 = (x161%(x162+(x163<=x164)));

    if (t35 != 38LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x165 = INT64_MAX;
	uint32_t x166 = 699399U;
	volatile uint16_t x167 = 2U;
	static uint16_t x168 = UINT16_MAX;
	int64_t t36 = 3013721841LL;

    t36 = (x165%(x166+(x167<=x168)));

    if (t36 != 189807LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x177 = -1;
	int32_t x178 = 16;
	uint32_t x179 = 4087U;
	volatile uint16_t x180 = 29653U;
	volatile int32_t t37 = -420494963;

    t37 = (x177%(x178+(x179<=x180)));

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x181 = 8U;
	int16_t x182 = 2787;
	int8_t x184 = INT8_MIN;
	int32_t t38 = -768245;

    t38 = (x181%(x182+(x183<=x184)));

    if (t38 != 8) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x186 = 63;
	int32_t x187 = -1604618;
	static int8_t x188 = INT8_MAX;

    t39 = (x185%(x186+(x187<=x188)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x190 = INT16_MIN;
	int32_t x191 = INT32_MIN;
	volatile int64_t x192 = INT64_MIN;

    t40 = (x189%(x190+(x191<=x192)));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x193 = -1;
	volatile int64_t x196 = INT64_MIN;
	volatile int32_t t41 = -13601;

    t41 = (x193%(x194+(x195<=x196)));

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x198 = 877;
	int32_t x200 = INT32_MAX;
	uint32_t t42 = 2098U;

    t42 = (x197%(x198+(x199<=x200)));

    if (t42 != 440U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x201 = 66297706U;
	int32_t x202 = -380;
	int64_t x204 = -1LL;
	volatile uint32_t t43 = 2664U;

    t43 = (x201%(x202+(x203<=x204)));

    if (t43 != 66297706U) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint32_t x205 = UINT32_MAX;
	int16_t x206 = -1;
	uint32_t x207 = 272U;
	static uint16_t x208 = 17U;
	volatile uint32_t t44 = 939U;

    t44 = (x205%(x206+(x207<=x208)));

    if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x210 = -1;
	volatile uint16_t x211 = 938U;
	volatile uint32_t t45 = 1054655602U;

    t45 = (x209%(x210+(x211<=x212)));

    if (t45 != 167681U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x213 = 2U;
	static uint32_t x214 = 60057160U;
	int16_t x216 = INT16_MIN;
	static volatile uint32_t t46 = 286757608U;

    t46 = (x213%(x214+(x215<=x216)));

    if (t46 != 2U) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x217 = -1LL;
	static uint8_t x218 = 3U;
	int16_t x219 = INT16_MIN;
	int8_t x220 = INT8_MIN;
	volatile int64_t t47 = 97284LL;

    t47 = (x217%(x218+(x219<=x220)));

    if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x226 = 80U;
	uint32_t x227 = 235U;
	uint64_t x228 = UINT64_MAX;
	int32_t t48 = -46851;

    t48 = (x225%(x226+(x227<=x228)));

    if (t48 != 46) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint8_t x229 = UINT8_MAX;
	int32_t x230 = -1;
	int32_t x232 = -8602748;

    t49 = (x229%(x230+(x231<=x232)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint16_t x233 = UINT16_MAX;
	static uint64_t x234 = 1301635LLU;
	int16_t x235 = INT16_MAX;
	volatile int8_t x236 = 0;
	uint64_t t50 = 770976568569LLU;

    t50 = (x233%(x234+(x235<=x236)));

    if (t50 != 65535LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x241 = INT16_MAX;
	int64_t x244 = INT64_MIN;
	int32_t t51 = -1;

    t51 = (x241%(x242+(x243<=x244)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x245 = 4236542LL;
	uint16_t x246 = 6U;
	int64_t x247 = INT64_MIN;
	volatile int64_t t52 = 495444132LL;

    t52 = (x245%(x246+(x247<=x248)));

    if (t52 != 2LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x249 = 114U;
	static volatile uint8_t x250 = 3U;
	volatile uint32_t x251 = 192U;
	volatile int32_t x252 = 21860818;
	volatile int32_t t53 = 826103;

    t53 = (x249%(x250+(x251<=x252)));

    if (t53 != 2) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x257 = -8152718439LL;
	uint16_t x258 = 453U;
	uint8_t x259 = 10U;
	int8_t x260 = -1;
	int64_t t54 = 7090810778825495LL;

    t54 = (x257%(x258+(x259<=x260)));

    if (t54 != -429LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x261 = UINT64_MAX;
	uint8_t x262 = UINT8_MAX;
	int16_t x263 = -100;
	int16_t x264 = INT16_MIN;
	uint64_t t55 = 37801623640LLU;

    t55 = (x261%(x262+(x263<=x264)));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x265 = UINT8_MAX;
	int64_t x266 = -20LL;
	volatile uint16_t x267 = 0U;
	volatile int64_t t56 = 34755416224812LL;

    t56 = (x265%(x266+(x267<=x268)));

    if (t56 != 8LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x269 = 9862433U;
	uint64_t x270 = 213759243708850LLU;
	volatile int8_t x271 = INT8_MIN;
	int8_t x272 = -1;
	volatile uint64_t t57 = 0LLU;

    t57 = (x269%(x270+(x271<=x272)));

    if (t57 != 9862433LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x273 = UINT32_MAX;
	int32_t x275 = 82536510;
	uint16_t x276 = 248U;
	uint32_t t58 = 223405453U;

    t58 = (x273%(x274+(x275<=x276)));

    if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x277 = 15U;
	volatile int16_t x278 = 3157;
	int16_t x279 = INT16_MIN;
	int32_t t59 = 1082;

    t59 = (x277%(x278+(x279<=x280)));

    if (t59 != 15) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x281 = 12530U;
	int64_t x282 = 204370292351LL;
	uint64_t x283 = 503229516609LLU;
	int8_t x284 = -6;

    t60 = (x281%(x282+(x283<=x284)));

    if (t60 != 12530LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x285 = INT8_MAX;
	int8_t x286 = -1;
	static int16_t x287 = -4057;
	uint32_t x288 = 327292676U;
	int32_t t61 = 62;

    t61 = (x285%(x286+(x287<=x288)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x298 = INT16_MIN;
	int32_t x299 = -150670668;
	volatile int64_t t62 = 80LL;

    t62 = (x297%(x298+(x299<=x300)));

    if (t62 != -8LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x302 = 10639542836050LLU;
	volatile int32_t x303 = INT32_MIN;

    t63 = (x301%(x302+(x303<=x304)));

    if (t63 != 2147483647LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x305 = 68008433094188351LL;
	int64_t x306 = 2780399248LL;
	int64_t x307 = INT64_MIN;
	static uint64_t x308 = 241207LLU;

    t64 = (x305%(x306+(x307<=x308)));

    if (t64 != 947272255LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x309 = -726;
	uint64_t x311 = 26LLU;

    t65 = (x309%(x310+(x311<=x312)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x313 = -974;
	int8_t x314 = 21;
	volatile uint16_t x315 = 9305U;
	static uint8_t x316 = 10U;
	volatile int32_t t66 = -102;

    t66 = (x313%(x314+(x315<=x316)));

    if (t66 != -8) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x321 = -1;
	int8_t x322 = INT8_MIN;
	volatile int32_t t67 = -269584820;

    t67 = (x321%(x322+(x323<=x324)));

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x325 = INT64_MAX;
	uint32_t x326 = 52436797U;
	int16_t x327 = 1;
	static uint8_t x328 = UINT8_MAX;
	volatile int64_t t68 = -241663876418287655LL;

    t68 = (x325%(x326+(x327<=x328)));

    if (t68 != 40597611LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x330 = INT16_MIN;

    t69 = (x329%(x330+(x331<=x332)));

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint8_t x338 = UINT8_MAX;
	volatile uint16_t x339 = 3692U;
	volatile int32_t t70 = -98766;

    t70 = (x337%(x338+(x339<=x340)));

    if (t70 != 7) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x342 = INT64_MIN;
	int16_t x343 = INT16_MIN;
	static int64_t x344 = -1LL;
	int64_t t71 = -135173097026LL;

    t71 = (x341%(x342+(x343<=x344)));

    if (t71 != 1051LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x349 = INT16_MAX;
	static volatile int16_t x350 = 4;
	uint64_t x351 = 23741000616955LLU;
	static volatile int32_t t72 = 20760;

    t72 = (x349%(x350+(x351<=x352)));

    if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x355 = 14U;
	int16_t x356 = INT16_MAX;
	volatile int32_t t73 = 1875;

    t73 = (x353%(x354+(x355<=x356)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x357 = INT8_MAX;
	volatile int64_t x358 = INT64_MAX;
	int64_t x360 = INT64_MIN;
	static volatile int64_t t74 = -14LL;

    t74 = (x357%(x358+(x359<=x360)));

    if (t74 != 127LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x361 = 1U;
	uint64_t x364 = UINT64_MAX;
	volatile uint64_t t75 = 1638112201601422763LLU;

    t75 = (x361%(x362+(x363<=x364)));

    if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x365 = 216413321U;
	volatile int32_t x366 = INT32_MAX;
	int16_t x367 = INT16_MAX;
	volatile int64_t x368 = INT64_MIN;
	volatile uint32_t t76 = 26820U;

    t76 = (x365%(x366+(x367<=x368)));

    if (t76 != 216413321U) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int32_t x370 = INT32_MIN;
	int32_t x371 = 207;
	volatile int16_t x372 = -3864;

    t77 = (x369%(x370+(x371<=x372)));

    if (t77 != 41LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x373 = 1279U;
	int32_t x374 = INT32_MAX;
	uint16_t x375 = 0U;
	volatile int32_t x376 = -12487290;

    t78 = (x373%(x374+(x375<=x376)));

    if (t78 != 1279) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int64_t x377 = -1LL;
	volatile int8_t x378 = INT8_MIN;
	volatile uint8_t x379 = UINT8_MAX;
	int8_t x380 = 2;
	int64_t t79 = -354793690282968LL;

    t79 = (x377%(x378+(x379<=x380)));

    if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x381 = UINT64_MAX;
	static uint64_t x382 = UINT64_MAX;
	int32_t x383 = INT32_MIN;
	int64_t x384 = INT64_MIN;
	static volatile uint64_t t80 = 58488LLU;

    t80 = (x381%(x382+(x383<=x384)));

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x385 = -79939586LL;
	int16_t x386 = 2422;
	static uint64_t x388 = 1805501649575258004LLU;
	volatile int64_t t81 = -8LL;

    t81 = (x385%(x386+(x387<=x388)));

    if (t81 != -1476LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x389 = 408;
	volatile uint32_t x390 = UINT32_MAX;
	volatile int8_t x392 = -1;
	uint32_t t82 = 48U;

    t82 = (x389%(x390+(x391<=x392)));

    if (t82 != 408U) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x397 = 30072210824159LL;
	uint64_t x400 = 192443497926LLU;
	volatile int64_t t83 = 33844706224LL;

    t83 = (x397%(x398+(x399<=x400)));

    if (t83 != 30072210824159LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x401 = 6;
	int16_t x402 = -2;
	int8_t x404 = INT8_MIN;
	static int32_t t84 = -31050;

    t84 = (x401%(x402+(x403<=x404)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x405 = 25;
	static int16_t x406 = INT16_MIN;
	int8_t x407 = INT8_MIN;
	volatile int64_t x408 = INT64_MAX;

    t85 = (x405%(x406+(x407<=x408)));

    if (t85 != 25) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x409 = INT16_MIN;
	uint64_t x410 = 430390407LLU;
	uint16_t x411 = 0U;
	int8_t x412 = -1;
	uint64_t t86 = 841431LLU;

    t86 = (x409%(x410+(x411<=x412)));

    if (t86 != 103228946LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x417 = -1LL;
	int32_t x418 = -1;
	int64_t x419 = INT64_MAX;
	int8_t x420 = INT8_MIN;
	static int64_t t87 = -1LL;

    t87 = (x417%(x418+(x419<=x420)));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x421 = -68;
	uint16_t x422 = 27732U;
	static volatile uint8_t x423 = 9U;
	uint64_t x424 = UINT64_MAX;
	int32_t t88 = 1207;

    t88 = (x421%(x422+(x423<=x424)));

    if (t88 != -68) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x425 = -3019482;
	volatile uint16_t x426 = 11021U;
	static int8_t x427 = INT8_MAX;

    t89 = (x425%(x426+(x427<=x428)));

    if (t89 != -10749) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x429 = INT64_MAX;
	int32_t x430 = INT32_MIN;
	int32_t x431 = INT32_MIN;
	uint16_t x432 = UINT16_MAX;
	int64_t t90 = 332LL;

    t90 = (x429%(x430+(x431<=x432)));

    if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile uint8_t x433 = 109U;
	static int64_t x434 = INT64_MIN;
	int64_t x436 = -255011LL;
	int64_t t91 = 5163325LL;

    t91 = (x433%(x434+(x435<=x436)));

    if (t91 != 109LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x445 = 1238363931U;
	static volatile int32_t x446 = 80556497;
	int32_t x447 = 5;
	int16_t x448 = -1;
	volatile uint32_t t92 = 246847711U;

    t92 = (x445%(x446+(x447<=x448)));

    if (t92 != 30016476U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x449 = UINT32_MAX;
	uint32_t x451 = 119U;
	static int16_t x452 = 14;
	uint32_t t93 = 1U;

    t93 = (x449%(x450+(x451<=x452)));

    if (t93 != 2147483647U) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x453 = INT32_MAX;
	uint64_t x455 = UINT64_MAX;

    t94 = (x453%(x454+(x455<=x456)));

    if (t94 != 782479822U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x457 = 158U;
	static int16_t x458 = INT16_MIN;
	uint32_t x459 = 220051714U;
	int16_t x460 = 25;
	static volatile uint32_t t95 = 170U;

    t95 = (x457%(x458+(x459<=x460)));

    if (t95 != 158U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x461 = UINT32_MAX;
	int32_t x463 = -1;
	volatile uint32_t t96 = 241757885U;

    t96 = (x461%(x462+(x463<=x464)));

    if (t96 != 3U) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x465 = -1;
	int64_t x466 = INT64_MIN;
	int64_t x467 = 3921648638193035603LL;
	int64_t x468 = 83193185285446LL;
	volatile int64_t t97 = -141929569699LL;

    t97 = (x465%(x466+(x467<=x468)));

    if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x470 = 50LLU;
	uint64_t x471 = UINT64_MAX;
	uint8_t x472 = 5U;
	volatile uint64_t t98 = 1945703249070LLU;

    t98 = (x469%(x470+(x471<=x472)));

    if (t98 != 40LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x473 = -29461;
	int8_t x474 = INT8_MIN;
	volatile int64_t x475 = INT64_MIN;
	volatile int8_t x476 = 22;
	int32_t t99 = 6097102;

    t99 = (x473%(x474+(x475<=x476)));

    if (t99 != -124) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x478 = 4U;
	int32_t x479 = INT32_MIN;
	volatile uint16_t x480 = 13732U;
	volatile int32_t t100 = -27201331;

    t100 = (x477%(x478+(x479<=x480)));

    if (t100 != 4) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x481 = 1U;
	int32_t x482 = -82831;
	uint8_t x483 = 13U;
	static int32_t t101 = 31;

    t101 = (x481%(x482+(x483<=x484)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x486 = INT32_MIN;
	int16_t x487 = INT16_MIN;
	int16_t x488 = -6583;
	int32_t t102 = -276037322;

    t102 = (x485%(x486+(x487<=x488)));

    if (t102 != 65535) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x489 = 74U;
	static volatile int32_t x490 = INT32_MIN;
	volatile int64_t x491 = INT64_MAX;
	volatile int64_t x492 = INT64_MIN;
	int32_t t103 = -40996;

    t103 = (x489%(x490+(x491<=x492)));

    if (t103 != 74) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int16_t x493 = -671;
	volatile uint64_t x494 = 3711652613LLU;
	int8_t x495 = INT8_MAX;
	int16_t x496 = 14095;

    t104 = (x493%(x494+(x495<=x496)));

    if (t104 != 513116975LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x497 = 13313U;
	int64_t x498 = INT64_MAX;
	int32_t x499 = INT32_MAX;
	int64_t t105 = -1850044LL;

    t105 = (x497%(x498+(x499<=x500)));

    if (t105 != 13313LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x501 = 0;
	int64_t x502 = INT64_MIN;
	static int16_t x504 = INT16_MIN;
	int64_t t106 = 34LL;

    t106 = (x501%(x502+(x503<=x504)));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x505 = INT64_MAX;
	int16_t x507 = INT16_MIN;

    t107 = (x505%(x506+(x507<=x508)));

    if (t107 != 25032LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x509 = -9643;
	uint8_t x510 = 41U;
	int64_t x512 = INT64_MIN;
	volatile int32_t t108 = 0;

    t108 = (x509%(x510+(x511<=x512)));

    if (t108 != -8) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x517 = INT16_MIN;
	volatile int16_t x518 = INT16_MAX;
	int64_t x519 = -1687155433LL;
	int16_t x520 = 7;
	volatile int32_t t109 = 378532;

    t109 = (x517%(x518+(x519<=x520)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x521 = -84;
	uint16_t x522 = 45U;
	static int8_t x524 = INT8_MAX;
	volatile int32_t t110 = -822263647;

    t110 = (x521%(x522+(x523<=x524)));

    if (t110 != -38) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x525 = UINT64_MAX;
	uint32_t x526 = UINT32_MAX;
	static volatile uint16_t x527 = 498U;
	volatile uint64_t t111 = 150125467LLU;

    t111 = (x525%(x526+(x527<=x528)));

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint8_t x534 = UINT8_MAX;
	static int16_t x535 = INT16_MAX;
	uint8_t x536 = 0U;

    t112 = (x533%(x534+(x535<=x536)));

    if (t112 != 127) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x537 = INT64_MIN;
	int8_t x538 = INT8_MIN;
	static uint16_t x539 = 39U;
	volatile uint8_t x540 = UINT8_MAX;
	volatile int64_t t113 = -101968001931910402LL;

    t113 = (x537%(x538+(x539<=x540)));

    if (t113 != -1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x541 = INT16_MIN;
	volatile uint8_t x543 = 54U;
	int8_t x544 = -1;
	volatile int32_t t114 = -114;

    t114 = (x541%(x542+(x543<=x544)));

    if (t114 != -1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x557 = 122600LL;
	uint16_t x559 = 4551U;
	volatile int64_t t115 = 1LL;

    t115 = (x557%(x558+(x559<=x560)));

    if (t115 != 2LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x563 = 5LLU;
	int16_t x564 = 7552;
	volatile int32_t t116 = 521449248;

    t116 = (x561%(x562+(x563<=x564)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x566 = INT8_MAX;
	static int32_t x567 = INT32_MAX;
	volatile int64_t x568 = INT64_MIN;

    t117 = (x565%(x566+(x567<=x568)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x569 = -1;
	static volatile uint8_t x570 = 0U;
	int8_t x571 = -1;
	uint8_t x572 = 3U;
	volatile int32_t t118 = 8700;

    t118 = (x569%(x570+(x571<=x572)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x573 = INT8_MIN;
	int64_t x574 = -83520883374617LL;
	uint16_t x575 = 15250U;
	int16_t x576 = -1;
	static volatile int64_t t119 = -2004537070612164646LL;

    t119 = (x573%(x574+(x575<=x576)));

    if (t119 != -128LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int64_t x577 = -1LL;
	static uint32_t x578 = UINT32_MAX;
	int64_t x580 = -1LL;
	int64_t t120 = 9984006LL;

    t120 = (x577%(x578+(x579<=x580)));

    if (t120 != -1LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x581 = 15;
	uint8_t x582 = UINT8_MAX;
	uint32_t x583 = 529986U;
	int8_t x584 = -1;

    t121 = (x581%(x582+(x583<=x584)));

    if (t121 != 15) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x585 = 2854982;
	int16_t x586 = -2620;
	int32_t x587 = INT32_MIN;
	volatile int16_t x588 = INT16_MIN;

    t122 = (x585%(x586+(x587<=x588)));

    if (t122 != 272) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x591 = INT16_MIN;
	static volatile uint32_t x592 = 35U;
	uint32_t t123 = 530U;

    t123 = (x589%(x590+(x591<=x592)));

    if (t123 != 13629563U) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x597 = -1;
	int8_t x598 = -17;
	int32_t x599 = -1;
	static uint64_t x600 = UINT64_MAX;
	int32_t t124 = -41472992;

    t124 = (x597%(x598+(x599<=x600)));

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x605 = 112U;
	volatile uint8_t x606 = UINT8_MAX;
	static int32_t x607 = INT32_MIN;
	uint32_t x608 = 129253U;
	volatile int32_t t125 = 141737477;

    t125 = (x605%(x606+(x607<=x608)));

    if (t125 != 112) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x609 = -1;
	uint64_t x611 = 136692070237LLU;
	static volatile int64_t x612 = INT64_MAX;
	volatile int32_t t126 = -404447899;

    t126 = (x609%(x610+(x611<=x612)));

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x614 = 3;
	static uint8_t x615 = 17U;
	int64_t x616 = INT64_MIN;
	volatile int32_t t127 = 1288455;

    t127 = (x613%(x614+(x615<=x616)));

    if (t127 != -2) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x617 = UINT16_MAX;
	static volatile int32_t x618 = -202;
	int32_t x619 = INT32_MAX;
	int32_t x620 = 1636902;
	static volatile int32_t t128 = 252;

    t128 = (x617%(x618+(x619<=x620)));

    if (t128 != 87) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x621 = UINT8_MAX;
	int32_t x622 = INT32_MIN;
	uint32_t x623 = UINT32_MAX;
	int32_t x624 = -211;
	volatile int32_t t129 = 1;

    t129 = (x621%(x622+(x623<=x624)));

    if (t129 != 255) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x625 = UINT64_MAX;
	static int32_t x627 = -10093525;
	static int8_t x628 = INT8_MAX;
	volatile uint64_t t130 = 941539559LLU;

    t130 = (x625%(x626+(x627<=x628)));

    if (t130 != 36960540LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x629 = 11751;
	int8_t x630 = INT8_MAX;
	int16_t x631 = -1;
	int16_t x632 = INT16_MIN;
	static volatile int32_t t131 = 181501044;

    t131 = (x629%(x630+(x631<=x632)));

    if (t131 != 67) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x633 = UINT16_MAX;
	int64_t x634 = INT64_MIN;
	uint32_t x635 = 56U;
	int64_t x636 = -1LL;

    t132 = (x633%(x634+(x635<=x636)));

    if (t132 != 65535LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x637 = INT64_MAX;
	uint16_t x638 = 36U;
	static volatile int8_t x639 = -1;
	uint32_t x640 = UINT32_MAX;

    t133 = (x637%(x638+(x639<=x640)));

    if (t133 != 5LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x649 = INT32_MIN;
	uint16_t x650 = 7225U;
	uint32_t x651 = UINT32_MAX;
	volatile int8_t x652 = 0;
	int32_t t134 = 26638661;

    t134 = (x649%(x650+(x651<=x652)));

    if (t134 != -4123) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x653 = -117155;
	int8_t x656 = -4;
	int32_t t135 = 3614562;

    t135 = (x653%(x654+(x655<=x656)));

    if (t135 != -51619) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x657 = INT8_MIN;
	int64_t x658 = INT64_MIN;
	volatile int64_t x659 = 106838321694LL;
	int16_t x660 = 3239;

    t136 = (x657%(x658+(x659<=x660)));

    if (t136 != -128LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x664 = 2;
	int32_t t137 = 3430;

    t137 = (x661%(x662+(x663<=x664)));

    if (t137 != -1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x665 = 82372922LLU;
	int8_t x666 = 12;
	uint64_t x667 = UINT64_MAX;
	int8_t x668 = 5;
	uint64_t t138 = 3LLU;

    t138 = (x665%(x666+(x667<=x668)));

    if (t138 != 2LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x669 = INT32_MIN;
	int8_t x670 = INT8_MIN;
	int16_t x671 = -6708;
	static volatile int64_t x672 = -7LL;
	volatile int32_t t139 = 42771;

    t139 = (x669%(x670+(x671<=x672)));

    if (t139 != -8) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint64_t x678 = 0LLU;
	static uint8_t x679 = 16U;
	volatile uint32_t x680 = 36U;
	static uint64_t t140 = 1450809177855542651LLU;

    t140 = (x677%(x678+(x679<=x680)));

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint8_t x684 = 0U;
	volatile int64_t t141 = 97LL;

    t141 = (x681%(x682+(x683<=x684)));

    if (t141 != -1LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x685 = INT64_MAX;
	static uint8_t x686 = UINT8_MAX;
	static uint16_t x687 = UINT16_MAX;
	volatile int64_t t142 = 22386018562513266LL;

    t142 = (x685%(x686+(x687<=x688)));

    if (t142 != 127LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x693 = INT32_MAX;
	uint8_t x694 = 72U;
	int8_t x695 = INT8_MAX;
	int64_t x696 = -604510468760678946LL;
	static int32_t t143 = 1;

    t143 = (x693%(x694+(x695<=x696)));

    if (t143 != 55) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x697 = 29342808LL;
	volatile int16_t x699 = -1;
	static uint16_t x700 = UINT16_MAX;

    t144 = (x697%(x698+(x699<=x700)));

    if (t144 != 12346LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x701 = -1;
	uint64_t x702 = 2901827795LLU;
	int8_t x703 = INT8_MIN;
	volatile uint16_t x704 = 1900U;
	volatile uint64_t t145 = 1628463962810685LLU;

    t145 = (x701%(x702+(x703<=x704)));

    if (t145 != 1409013075LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x710 = INT8_MAX;
	uint64_t x712 = 27387642831842LLU;
	int64_t t146 = 122665856LL;

    t146 = (x709%(x710+(x711<=x712)));

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x714 = 163917;
	int16_t x715 = 1;
	uint64_t x716 = 3543LLU;
	static volatile int64_t t147 = -106LL;

    t147 = (x713%(x714+(x715<=x716)));

    if (t147 != 147406LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x717 = UINT32_MAX;
	int8_t x718 = INT8_MIN;
	int32_t x719 = -876899445;
	volatile int16_t x720 = INT16_MIN;
	uint32_t t148 = 39271690U;

    t148 = (x717%(x718+(x719<=x720)));

    if (t148 != 126U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x721 = 1U;
	uint64_t x722 = 478262LLU;
	volatile uint64_t t149 = 7090LLU;

    t149 = (x721%(x722+(x723<=x724)));

    if (t149 != 1LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x725 = -1;
	int8_t x726 = INT8_MIN;
	int64_t x727 = INT64_MIN;
	int16_t x728 = -1;
	volatile int32_t t150 = -3642519;

    t150 = (x725%(x726+(x727<=x728)));

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x729 = 238U;
	static volatile int32_t t151 = 68;

    t151 = (x729%(x730+(x731<=x732)));

    if (t151 != 238) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x733 = INT8_MIN;
	int16_t x734 = -503;
	int64_t x735 = INT64_MIN;
	int32_t t152 = 60100230;

    t152 = (x733%(x734+(x735<=x736)));

    if (t152 != -128) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int16_t x738 = INT16_MIN;
	volatile int64_t x739 = -3LL;
	int16_t x740 = 1812;
	static volatile uint32_t t153 = 12U;

    t153 = (x737%(x738+(x739<=x740)));

    if (t153 != 32766U) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x743 = -1;
	volatile int64_t t154 = 298186879781076525LL;

    t154 = (x741%(x742+(x743<=x744)));

    if (t154 != 7LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint32_t x749 = 1657U;
	uint16_t x750 = 4U;
	uint16_t x752 = UINT16_MAX;
	uint32_t t155 = 56695643U;

    t155 = (x749%(x750+(x751<=x752)));

    if (t155 != 1U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x754 = UINT8_MAX;
	static volatile uint16_t x755 = 24U;
	volatile int64_t x756 = 5661LL;
	volatile uint64_t t156 = 1318LLU;

    t156 = (x753%(x754+(x755<=x756)));

    if (t156 != 15LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x757 = 30U;
	static int16_t x759 = INT16_MIN;
	int32_t x760 = -900825582;
	volatile int32_t t157 = -3826;

    t157 = (x757%(x758+(x759<=x760)));

    if (t157 != 30) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x761 = INT16_MAX;
	int64_t x762 = INT64_MIN;
	int8_t x763 = INT8_MAX;
	uint32_t x764 = UINT32_MAX;
	volatile int64_t t158 = 1040696269310076434LL;

    t158 = (x761%(x762+(x763<=x764)));

    if (t158 != 32767LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x766 = INT16_MIN;
	static int8_t x767 = INT8_MIN;
	int64_t x768 = INT64_MAX;
	int32_t t159 = 13;

    t159 = (x765%(x766+(x767<=x768)));

    if (t159 != 715) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x770 = UINT32_MAX;
	uint64_t x771 = UINT64_MAX;
	volatile uint16_t x772 = 11269U;
	static volatile uint64_t t160 = 1944666575LLU;

    t160 = (x769%(x770+(x771<=x772)));

    if (t160 != 71LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x774 = 44;
	int8_t x776 = INT8_MAX;

    t161 = (x773%(x774+(x775<=x776)));

    if (t161 != 15) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x777 = 5U;
	int64_t x778 = INT64_MIN;
	uint64_t x779 = UINT64_MAX;
	int64_t x780 = INT64_MAX;
	volatile int64_t t162 = 37359715194LL;

    t162 = (x777%(x778+(x779<=x780)));

    if (t162 != 5LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x781 = -1;
	uint8_t x782 = 4U;
	int32_t x783 = -1;
	int32_t x784 = INT32_MIN;
	static volatile int32_t t163 = 33677815;

    t163 = (x781%(x782+(x783<=x784)));

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x785 = INT32_MAX;
	volatile int64_t x787 = 3714570247LL;
	uint32_t x788 = 6741884U;
	static uint64_t t164 = 40708247770077602LLU;

    t164 = (x785%(x786+(x787<=x788)));

    if (t164 != 49LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x789 = INT32_MIN;
	volatile int64_t x791 = INT64_MAX;
	int64_t x792 = 650LL;
	uint32_t t165 = 5U;

    t165 = (x789%(x790+(x791<=x792)));

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x793 = INT8_MIN;
	int16_t x796 = INT16_MIN;
	int32_t t166 = -15;

    t166 = (x793%(x794+(x795<=x796)));

    if (t166 != -128) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint16_t x801 = 84U;
	int8_t x802 = INT8_MAX;
	uint64_t x803 = UINT64_MAX;
	volatile uint16_t x804 = UINT16_MAX;
	volatile int32_t t167 = 81;

    t167 = (x801%(x802+(x803<=x804)));

    if (t167 != 84) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x806 = INT16_MIN;
	volatile uint16_t x807 = UINT16_MAX;
	static uint64_t x808 = 4697906448LLU;
	volatile int32_t t168 = 92238;

    t168 = (x805%(x806+(x807<=x808)));

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x809 = 329557400060275977LL;
	static int16_t x810 = 1;
	static uint16_t x811 = 2668U;
	static volatile int16_t x812 = INT16_MAX;
	int64_t t169 = -2468788012LL;

    t169 = (x809%(x810+(x811<=x812)));

    if (t169 != 1LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint32_t x813 = 345U;
	static int16_t x814 = -4;
	static volatile int16_t x816 = INT16_MIN;
	volatile uint32_t t170 = 0U;

    t170 = (x813%(x814+(x815<=x816)));

    if (t170 != 345U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x821 = INT16_MIN;
	uint32_t x823 = 196U;
	int32_t t171 = 1;

    t171 = (x821%(x822+(x823<=x824)));

    if (t171 != -4593) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x825 = 0U;
	int32_t x826 = 1;
	int64_t x827 = INT64_MIN;
	int8_t x828 = INT8_MIN;
	int32_t t172 = -1;

    t172 = (x825%(x826+(x827<=x828)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint16_t x830 = 728U;
	int8_t x831 = INT8_MAX;
	uint32_t x832 = 3260508U;
	int32_t t173 = 7588951;

    t173 = (x829%(x830+(x831<=x832)));

    if (t173 != 300) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x833 = 35U;
	volatile int16_t x834 = 3;
	uint64_t x835 = UINT64_MAX;
	int64_t x836 = INT64_MAX;
	volatile int32_t t174 = -6413938;

    t174 = (x833%(x834+(x835<=x836)));

    if (t174 != 2) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x837 = INT64_MIN;
	static int16_t x838 = -1;
	volatile uint8_t x839 = 13U;
	int16_t x840 = INT16_MIN;
	int64_t t175 = 1216076568LL;

    t175 = (x837%(x838+(x839<=x840)));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int64_t x841 = INT64_MIN;
	int16_t x842 = -1;
	volatile uint64_t x843 = UINT64_MAX;
	uint16_t x844 = 3862U;
	static int64_t t176 = -80721903601706LL;

    t176 = (x841%(x842+(x843<=x844)));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x845 = INT16_MIN;
	int8_t x846 = INT8_MIN;
	int32_t x847 = 221;
	volatile int32_t t177 = -20;

    t177 = (x845%(x846+(x847<=x848)));

    if (t177 != -2) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x849 = INT64_MAX;
	uint64_t x850 = 271963809665LLU;
	int32_t x851 = -1;
	uint16_t x852 = UINT16_MAX;
	static uint64_t t178 = 453190863201LLU;

    t178 = (x849%(x850+(x851<=x852)));

    if (t178 != 98683961119LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x853 = -1;
	volatile int16_t x854 = INT16_MAX;
	int64_t x855 = INT64_MIN;
	volatile int32_t t179 = -12907369;

    t179 = (x853%(x854+(x855<=x856)));

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint32_t x857 = 19354U;
	int32_t x859 = -11;
	int32_t x860 = INT32_MIN;
	volatile uint32_t t180 = 7U;

    t180 = (x857%(x858+(x859<=x860)));

    if (t180 != 19354U) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x861 = INT16_MIN;
	int8_t x862 = INT8_MIN;
	int16_t x864 = INT16_MIN;
	volatile int32_t t181 = -22621;

    t181 = (x861%(x862+(x863<=x864)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x865 = INT8_MAX;
	uint16_t x866 = 44U;
	int16_t x867 = INT16_MAX;
	volatile uint32_t x868 = 3125446U;
	int32_t t182 = 32561;

    t182 = (x865%(x866+(x867<=x868)));

    if (t182 != 37) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x869 = INT32_MIN;
	int16_t x870 = INT16_MIN;
	int64_t x871 = INT64_MIN;
	int64_t x872 = INT64_MIN;
	int32_t t183 = -1;

    t183 = (x869%(x870+(x871<=x872)));

    if (t183 != -2) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint64_t x873 = UINT64_MAX;
	static volatile int32_t x874 = INT32_MAX;
	static uint16_t x875 = 60U;
	volatile int16_t x876 = -1;
	volatile uint64_t t184 = 233483190586277064LLU;

    t184 = (x873%(x874+(x875<=x876)));

    if (t184 != 3LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x877 = UINT16_MAX;
	uint64_t x878 = 30569155345256LLU;
	static int32_t x879 = -1;
	uint64_t x880 = UINT64_MAX;
	volatile uint64_t t185 = 198513601796926757LLU;

    t185 = (x877%(x878+(x879<=x880)));

    if (t185 != 65535LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x881 = -6475117809LL;

    t186 = (x881%(x882+(x883<=x884)));

    if (t186 != -342LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x885 = INT32_MAX;
	int8_t x887 = INT8_MIN;
	volatile uint16_t x888 = 251U;
	int32_t t187 = -3787278;

    t187 = (x885%(x886+(x887<=x888)));

    if (t187 != 127) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x889 = -1LL;
	int32_t x890 = INT32_MIN;
	int16_t x891 = -1;
	int16_t x892 = INT16_MIN;
	static volatile int64_t t188 = 10600000911070731LL;

    t188 = (x889%(x890+(x891<=x892)));

    if (t188 != -1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x893 = 159221;
	static volatile int32_t x894 = 0;
	int64_t x895 = -1712494470464604760LL;
	uint8_t x896 = 5U;
	volatile int32_t t189 = 27129;

    t189 = (x893%(x894+(x895<=x896)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x897 = INT64_MAX;
	uint64_t x898 = 1647061LLU;
	int64_t x899 = INT64_MIN;
	int32_t x900 = -1;

    t190 = (x897%(x898+(x899<=x900)));

    if (t190 != 1060383LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x901 = 351650654U;
	int8_t x902 = -3;
	volatile int32_t x903 = -1;
	volatile uint32_t t191 = 897287708U;

    t191 = (x901%(x902+(x903<=x904)));

    if (t191 != 351650654U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x910 = 27U;
	volatile int16_t x911 = 685;
	int16_t x912 = INT16_MIN;
	volatile int32_t t192 = 8075;

    t192 = (x909%(x910+(x911<=x912)));

    if (t192 != -17) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x913 = -1;
	int64_t x914 = INT64_MAX;
	int8_t x915 = INT8_MAX;
	volatile int64_t t193 = 691876579835279007LL;

    t193 = (x913%(x914+(x915<=x916)));

    if (t193 != -1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile uint32_t x917 = 1U;
	int8_t x918 = 2;
	volatile uint16_t x919 = 1099U;
	static uint16_t x920 = 694U;

    t194 = (x917%(x918+(x919<=x920)));

    if (t194 != 1U) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x922 = INT64_MAX;
	int8_t x924 = INT8_MIN;
	int64_t t195 = -3LL;

    t195 = (x921%(x922+(x923<=x924)));

    if (t195 != -2147483648LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x925 = 1U;
	uint64_t x926 = 1772916163204217LLU;
	static volatile int16_t x928 = INT16_MIN;
	volatile uint64_t t196 = 4440442474408423245LLU;

    t196 = (x925%(x926+(x927<=x928)));

    if (t196 != 1LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x929 = -1LL;
	volatile int8_t x931 = INT8_MAX;
	static volatile int8_t x932 = INT8_MIN;
	int64_t t197 = -2117704655320247644LL;

    t197 = (x929%(x930+(x931<=x932)));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x934 = 1;
	static volatile int16_t x935 = INT16_MIN;
	int32_t x936 = INT32_MIN;
	int32_t t198 = -56111;

    t198 = (x933%(x934+(x935<=x936)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x945 = 7376325658311880716LLU;
	uint16_t x946 = 2U;
	uint64_t x947 = 56253712857LLU;
	static uint16_t x948 = 1848U;
	static uint64_t t199 = 189720LLU;

    t199 = (x945%(x946+(x947<=x948)));

    if (t199 != 0LLU) { NG(); } else { ; }
	
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

