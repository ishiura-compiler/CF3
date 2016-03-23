
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

static int16_t x11 = INT16_MIN;
int32_t x13 = -3891;
static int8_t x14 = INT8_MAX;
static volatile uint32_t x18 = 885454U;
int32_t t3 = -1004248501;
uint32_t x22 = 8536230U;
volatile int32_t t4 = 100012;
uint32_t x25 = 823U;
static int32_t x28 = INT32_MIN;
static volatile int32_t t6 = -14817;
int32_t t7 = 328223616;
int32_t t9 = -1671;
uint64_t x50 = 622373LLU;
int32_t x52 = -2492;
int64_t x53 = INT64_MIN;
volatile int32_t t11 = -276;
int32_t x60 = 2247301;
volatile int32_t t12 = 126965;
int16_t x62 = 4093;
int64_t x71 = INT64_MIN;
int64_t x77 = INT64_MIN;
uint32_t x78 = UINT32_MAX;
uint16_t x80 = 21021U;
int64_t x81 = -14869200080LL;
volatile int32_t t18 = -661754510;
int8_t x91 = -21;
int64_t x92 = INT64_MIN;
volatile int32_t t20 = -104163724;
int64_t x97 = -1568958072172287760LL;
int32_t x98 = -1;
uint8_t x119 = 11U;
static int32_t t25 = 51731985;
int32_t t26 = -12319;
volatile int64_t x133 = 235161147098LL;
int32_t x134 = INT32_MIN;
uint32_t x135 = 510779U;
static volatile uint32_t x136 = 13U;
static volatile int8_t x137 = -2;
volatile int32_t t30 = -23680;
int64_t x141 = INT64_MAX;
int32_t x142 = INT32_MIN;
int64_t x144 = -33LL;
int8_t x145 = INT8_MIN;
volatile uint8_t x146 = 36U;
int32_t x150 = INT32_MIN;
int64_t x153 = -387LL;
int32_t x160 = INT32_MIN;
volatile int8_t x168 = -1;
int32_t x173 = 2;
static int64_t x179 = INT64_MIN;
volatile uint8_t x192 = UINT8_MAX;
uint32_t x194 = UINT32_MAX;
int32_t t42 = 54173;
int32_t t44 = 2467;
uint32_t x207 = 53U;
int32_t t45 = -54857660;
uint64_t x209 = 2418LLU;
static int8_t x216 = INT8_MIN;
volatile int32_t t47 = 203;
volatile uint64_t x217 = 8142597LLU;
static volatile int16_t x220 = -1;
uint8_t x225 = 80U;
uint16_t x228 = 78U;
static int8_t x229 = 13;
int64_t x231 = -1LL;
int16_t x236 = INT16_MAX;
uint32_t x238 = UINT32_MAX;
static uint64_t x243 = 1403618406039585636LLU;
int32_t t54 = 472;
uint16_t x245 = 99U;
int32_t x260 = INT32_MIN;
int8_t x261 = INT8_MIN;
static int16_t x268 = INT16_MAX;
volatile uint16_t x272 = 234U;
int32_t t63 = -267;
int8_t x282 = -1;
int16_t x283 = INT16_MAX;
uint8_t x286 = UINT8_MAX;
static int32_t t65 = -13;
int16_t x291 = 21;
static volatile int32_t t67 = 54610;
int64_t x297 = 4740014722989LL;
volatile int64_t x304 = -68393043667008LL;
int32_t t71 = -1455089;
int64_t x313 = INT64_MIN;
static volatile int32_t t72 = 658700703;
volatile int64_t x317 = -1LL;
int16_t x326 = INT16_MIN;
volatile int32_t t75 = 4188;
uint16_t x331 = UINT16_MAX;
uint32_t x336 = UINT32_MAX;
uint32_t x341 = 7926U;
uint8_t x342 = 18U;
int64_t x348 = 117600LL;
int16_t x367 = INT16_MIN;
static uint64_t x373 = 1044805212LLU;
volatile int32_t t90 = 944236883;
volatile int8_t x397 = INT8_MIN;
uint16_t x399 = 509U;
static int32_t x400 = -1;
static int32_t t91 = 0;
volatile uint64_t x407 = 3819821176918853LLU;
int64_t x416 = 51796282461LL;
uint64_t x420 = 11619064912717LLU;
volatile int32_t t95 = 19491;
int16_t x421 = -5;
int64_t x423 = -3028722538007948342LL;
volatile int32_t t98 = 886;
volatile int16_t x437 = 0;
int8_t x438 = INT8_MAX;
int32_t t99 = 3445654;
int8_t x444 = INT8_MIN;
volatile int32_t t100 = -365592643;
int32_t t101 = -12;
volatile int8_t x452 = -8;
int8_t x459 = INT8_MAX;
int8_t x461 = -1;
int64_t x467 = INT64_MAX;
volatile int64_t x479 = INT64_MIN;
static volatile int16_t x496 = INT16_MAX;
uint64_t x502 = UINT64_MAX;
uint16_t x504 = UINT16_MAX;
volatile int32_t x505 = 22;
int16_t x509 = -1;
int32_t t117 = -54676;
int64_t x538 = -4347663582733357LL;
int32_t x539 = -1;
volatile int64_t x550 = -19636115610509240LL;
uint64_t x552 = UINT64_MAX;
volatile int32_t t124 = 10;
volatile int64_t x555 = -3LL;
static volatile int32_t t125 = -2442790;
int8_t x569 = -8;
uint16_t x570 = UINT16_MAX;
int16_t x579 = 1139;
uint32_t x580 = 7654U;
volatile int8_t x585 = -1;
int64_t x586 = INT64_MAX;
uint32_t x594 = 118767265U;
static uint16_t x596 = UINT16_MAX;
volatile int32_t t134 = 1046813574;
int8_t x598 = -1;
uint32_t x602 = 507667U;
int32_t x613 = INT32_MAX;
uint32_t x618 = 2U;
int64_t x619 = INT64_MAX;
volatile int8_t x641 = -2;
static int32_t x643 = -824;
static int8_t x645 = INT8_MIN;
volatile uint32_t x653 = UINT32_MAX;
int32_t t149 = -102502;
volatile uint16_t x668 = 5U;
volatile int32_t t150 = -2;
volatile int8_t x674 = INT8_MIN;
static int8_t x676 = 5;
uint64_t x684 = UINT64_MAX;
volatile int32_t t154 = -826814053;
int16_t x688 = 307;
static int16_t x692 = 4;
static volatile int32_t t156 = -1;
int32_t x695 = INT32_MIN;
static int32_t x699 = -1;
int8_t x700 = INT8_MAX;
static volatile int32_t t158 = 1391;
static uint16_t x709 = UINT16_MAX;
int8_t x712 = INT8_MAX;
uint32_t x714 = 152U;
volatile int64_t x718 = 276761LL;
volatile uint8_t x728 = 62U;
uint8_t x736 = 23U;
static int32_t t168 = 438666845;
volatile int8_t x757 = INT8_MAX;
uint64_t x762 = 3762865LLU;
uint8_t x770 = 48U;
static volatile int16_t x771 = INT16_MAX;
uint8_t x776 = 69U;
int8_t x779 = -1;
int64_t x780 = -315188LL;
int32_t x785 = INT32_MAX;
static int32_t x787 = INT32_MIN;
static int16_t x797 = INT16_MIN;
int32_t x798 = INT32_MIN;
int32_t x810 = 1;
static uint64_t x818 = 26975596287469875LLU;
static int64_t x824 = INT64_MIN;
int16_t x830 = -1;
int32_t t186 = 950627577;
volatile int32_t x837 = -1;
static int32_t x843 = 0;
static int32_t t189 = -776;
uint16_t x852 = 504U;
volatile int32_t t191 = 31;
uint16_t x859 = 316U;
int32_t x863 = 295568;
uint64_t x864 = 13368641391LLU;
volatile int8_t x866 = INT8_MIN;
int64_t x868 = INT64_MIN;
int32_t x870 = 2778;
int32_t t195 = -50125;
int16_t x891 = -1;
static uint32_t x895 = UINT32_MAX;
int64_t x896 = INT64_MIN;


void f0(void) {
    	int32_t x5 = INT32_MIN;
	int32_t x6 = -153056417;
	uint8_t x7 = 2U;
	int32_t x8 = INT32_MIN;
	volatile int32_t t0 = -1123;

    t0 = ((x5/x6)<=(x7/x8));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint16_t x9 = 108U;
	int16_t x10 = -1;
	volatile int64_t x12 = 3755893248611298LL;
	int32_t t1 = -17340276;

    t1 = ((x9/x10)<=(x11/x12));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x15 = UINT32_MAX;
	uint8_t x16 = 35U;
	volatile int32_t t2 = 144;

    t2 = ((x13/x14)<=(x15/x16));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x17 = 4;
	int8_t x19 = 3;
	int16_t x20 = -1;

    t3 = ((x17/x18)<=(x19/x20));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int16_t x21 = INT16_MIN;
	int32_t x23 = INT32_MAX;
	static int64_t x24 = -179319199691730018LL;

    t4 = ((x21/x22)<=(x23/x24));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x26 = UINT64_MAX;
	static volatile int16_t x27 = -82;
	volatile int32_t t5 = 164829;

    t5 = ((x25/x26)<=(x27/x28));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x33 = -749840;
	uint8_t x34 = UINT8_MAX;
	static int16_t x35 = INT16_MAX;
	static volatile uint32_t x36 = UINT32_MAX;

    t6 = ((x33/x34)<=(x35/x36));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x37 = -1LL;
	int64_t x38 = 31LL;
	int8_t x39 = 8;
	int16_t x40 = -8;

    t7 = ((x37/x38)<=(x39/x40));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x41 = 2642;
	static uint64_t x42 = 775LLU;
	uint8_t x43 = UINT8_MAX;
	int64_t x44 = INT64_MIN;
	volatile int32_t t8 = 24000152;

    t8 = ((x41/x42)<=(x43/x44));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x45 = INT32_MIN;
	int8_t x46 = INT8_MAX;
	uint32_t x47 = UINT32_MAX;
	int32_t x48 = INT32_MIN;

    t9 = ((x45/x46)<=(x47/x48));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x49 = UINT64_MAX;
	int32_t x51 = INT32_MAX;
	static int32_t t10 = 350380;

    t10 = ((x49/x50)<=(x51/x52));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x54 = -10;
	int8_t x55 = INT8_MIN;
	uint64_t x56 = 53772329222703LLU;

    t11 = ((x53/x54)<=(x55/x56));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x57 = INT32_MIN;
	int64_t x58 = 442654790975LL;
	uint16_t x59 = 4U;

    t12 = ((x57/x58)<=(x59/x60));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x61 = -2;
	int16_t x63 = -36;
	int64_t x64 = INT64_MIN;
	static volatile int32_t t13 = 524387554;

    t13 = ((x61/x62)<=(x63/x64));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x65 = INT16_MIN;
	uint16_t x66 = 3662U;
	int16_t x67 = -1;
	uint16_t x68 = 3316U;
	int32_t t14 = -273291695;

    t14 = ((x65/x66)<=(x67/x68));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x69 = -430393LL;
	int64_t x70 = 409LL;
	static int16_t x72 = -31;
	volatile int32_t t15 = 300368470;

    t15 = ((x69/x70)<=(x71/x72));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x73 = UINT32_MAX;
	uint32_t x74 = 1368082368U;
	int16_t x75 = 683;
	int16_t x76 = INT16_MIN;
	int32_t t16 = 0;

    t16 = ((x73/x74)<=(x75/x76));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x79 = INT16_MIN;
	int32_t t17 = 9788018;

    t17 = ((x77/x78)<=(x79/x80));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x82 = 32289583151LLU;
	volatile uint16_t x83 = 101U;
	int8_t x84 = INT8_MAX;

    t18 = ((x81/x82)<=(x83/x84));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x89 = -3;
	volatile uint32_t x90 = 295057691U;
	static int32_t t19 = 5871;

    t19 = ((x89/x90)<=(x91/x92));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x93 = INT8_MIN;
	static int16_t x94 = -1234;
	uint32_t x95 = UINT32_MAX;
	static uint8_t x96 = 5U;

    t20 = ((x93/x94)<=(x95/x96));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint32_t x99 = 191U;
	int32_t x100 = INT32_MIN;
	static volatile int32_t t21 = -22639;

    t21 = ((x97/x98)<=(x99/x100));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x101 = UINT8_MAX;
	static int64_t x102 = INT64_MIN;
	uint32_t x103 = UINT32_MAX;
	int64_t x104 = INT64_MIN;
	volatile int32_t t22 = 39985861;

    t22 = ((x101/x102)<=(x103/x104));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x105 = UINT8_MAX;
	uint32_t x106 = 109781478U;
	int8_t x107 = INT8_MIN;
	uint8_t x108 = UINT8_MAX;
	volatile int32_t t23 = -37;

    t23 = ((x105/x106)<=(x107/x108));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint16_t x113 = 1743U;
	static volatile uint16_t x114 = UINT16_MAX;
	uint32_t x115 = UINT32_MAX;
	int8_t x116 = INT8_MIN;
	static int32_t t24 = -1035694309;

    t24 = ((x113/x114)<=(x115/x116));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x117 = -178;
	int8_t x118 = INT8_MIN;
	int16_t x120 = -1;

    t25 = ((x117/x118)<=(x119/x120));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x121 = INT64_MIN;
	uint16_t x122 = 1033U;
	static volatile int16_t x123 = INT16_MIN;
	volatile uint8_t x124 = UINT8_MAX;

    t26 = ((x121/x122)<=(x123/x124));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x125 = 3U;
	static volatile uint64_t x126 = 985782093LLU;
	uint64_t x127 = UINT64_MAX;
	int8_t x128 = INT8_MIN;
	volatile int32_t t27 = 123;

    t27 = ((x125/x126)<=(x127/x128));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x129 = -1LL;
	static int64_t x130 = INT64_MIN;
	int32_t x131 = 2;
	int16_t x132 = INT16_MIN;
	volatile int32_t t28 = 0;

    t28 = ((x129/x130)<=(x131/x132));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int32_t t29 = 13;

    t29 = ((x133/x134)<=(x135/x136));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x138 = 5U;
	volatile uint32_t x139 = 6U;
	static uint8_t x140 = 5U;

    t30 = ((x137/x138)<=(x139/x140));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x143 = INT16_MAX;
	volatile int32_t t31 = -291266880;

    t31 = ((x141/x142)<=(x143/x144));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x147 = 0U;
	volatile int16_t x148 = INT16_MIN;
	int32_t t32 = -366171;

    t32 = ((x145/x146)<=(x147/x148));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x149 = 6;
	uint32_t x151 = UINT32_MAX;
	int16_t x152 = -1;
	static volatile int32_t t33 = 0;

    t33 = ((x149/x150)<=(x151/x152));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x154 = INT32_MAX;
	volatile int32_t x155 = INT32_MIN;
	int64_t x156 = INT64_MIN;
	int32_t t34 = 1;

    t34 = ((x153/x154)<=(x155/x156));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x157 = -22;
	uint64_t x158 = 16437139686634655LLU;
	int64_t x159 = INT64_MIN;
	volatile int32_t t35 = 3807;

    t35 = ((x157/x158)<=(x159/x160));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x165 = INT8_MIN;
	int8_t x166 = INT8_MIN;
	int8_t x167 = -1;
	volatile int32_t t36 = 402430765;

    t36 = ((x165/x166)<=(x167/x168));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x169 = -1;
	int64_t x170 = INT64_MIN;
	int16_t x171 = INT16_MIN;
	uint32_t x172 = 44939675U;
	static int32_t t37 = 35783040;

    t37 = ((x169/x170)<=(x171/x172));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x174 = INT64_MIN;
	static int8_t x175 = INT8_MIN;
	uint32_t x176 = 238U;
	volatile int32_t t38 = -165430;

    t38 = ((x173/x174)<=(x175/x176));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x177 = INT8_MIN;
	int32_t x178 = 90496;
	int64_t x180 = INT64_MAX;
	int32_t t39 = 5;

    t39 = ((x177/x178)<=(x179/x180));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x185 = -1;
	volatile int8_t x186 = INT8_MIN;
	volatile uint16_t x187 = UINT16_MAX;
	volatile int64_t x188 = INT64_MIN;
	volatile int32_t t40 = 48890910;

    t40 = ((x185/x186)<=(x187/x188));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint16_t x189 = 7U;
	int8_t x190 = INT8_MAX;
	int8_t x191 = INT8_MIN;
	static int32_t t41 = -3291718;

    t41 = ((x189/x190)<=(x191/x192));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x193 = INT8_MAX;
	volatile uint32_t x195 = UINT32_MAX;
	int16_t x196 = INT16_MIN;

    t42 = ((x193/x194)<=(x195/x196));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x197 = 865016369U;
	volatile int64_t x198 = -787079355LL;
	static uint16_t x199 = UINT16_MAX;
	volatile int64_t x200 = INT64_MIN;
	int32_t t43 = -15084707;

    t43 = ((x197/x198)<=(x199/x200));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x201 = -60156;
	uint16_t x202 = UINT16_MAX;
	int32_t x203 = -1;
	int32_t x204 = 15;

    t44 = ((x201/x202)<=(x203/x204));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x205 = 154;
	int32_t x206 = INT32_MIN;
	int64_t x208 = INT64_MAX;

    t45 = ((x205/x206)<=(x207/x208));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x210 = INT16_MIN;
	int32_t x211 = 57167641;
	volatile int64_t x212 = 50031LL;
	int32_t t46 = -24901;

    t46 = ((x209/x210)<=(x211/x212));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x213 = -14;
	static int16_t x214 = INT16_MIN;
	uint8_t x215 = 112U;

    t47 = ((x213/x214)<=(x215/x216));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x218 = INT64_MAX;
	static uint8_t x219 = 7U;
	volatile int32_t t48 = 118614;

    t48 = ((x217/x218)<=(x219/x220));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x221 = -413443;
	volatile int16_t x222 = INT16_MAX;
	static uint16_t x223 = 3472U;
	volatile uint8_t x224 = 13U;
	static int32_t t49 = 52;

    t49 = ((x221/x222)<=(x223/x224));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x226 = 76LLU;
	static volatile uint8_t x227 = 4U;
	volatile int32_t t50 = -5636525;

    t50 = ((x225/x226)<=(x227/x228));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x230 = 1090842212U;
	static volatile int8_t x232 = -1;
	int32_t t51 = -80;

    t51 = ((x229/x230)<=(x231/x232));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x233 = 71U;
	int32_t x234 = -1;
	int64_t x235 = -4425588LL;
	int32_t t52 = 134871;

    t52 = ((x233/x234)<=(x235/x236));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x237 = 647;
	int64_t x239 = 3393763LL;
	uint64_t x240 = UINT64_MAX;
	int32_t t53 = -4;

    t53 = ((x237/x238)<=(x239/x240));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x241 = 4U;
	volatile int64_t x242 = 1276423LL;
	static int16_t x244 = INT16_MAX;

    t54 = ((x241/x242)<=(x243/x244));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x246 = -1;
	int8_t x247 = INT8_MIN;
	volatile uint8_t x248 = 1U;
	volatile int32_t t55 = -1495;

    t55 = ((x245/x246)<=(x247/x248));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x249 = 3550647470394868LLU;
	static int16_t x250 = 1;
	int32_t x251 = INT32_MIN;
	int32_t x252 = INT32_MIN;
	volatile int32_t t56 = 860902139;

    t56 = ((x249/x250)<=(x251/x252));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x253 = 1;
	int32_t x254 = INT32_MAX;
	volatile int8_t x255 = 0;
	volatile int64_t x256 = INT64_MAX;
	int32_t t57 = -491;

    t57 = ((x253/x254)<=(x255/x256));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x257 = INT64_MIN;
	uint16_t x258 = UINT16_MAX;
	static uint16_t x259 = 4324U;
	volatile int32_t t58 = 1800829;

    t58 = ((x257/x258)<=(x259/x260));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int16_t x262 = -178;
	static int8_t x263 = 1;
	volatile int8_t x264 = INT8_MIN;
	int32_t t59 = -9;

    t59 = ((x261/x262)<=(x263/x264));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x265 = INT64_MAX;
	uint16_t x266 = 1018U;
	int32_t x267 = 1791235;
	int32_t t60 = 61;

    t60 = ((x265/x266)<=(x267/x268));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x269 = -1;
	static int8_t x270 = -6;
	uint64_t x271 = 5959612553793LLU;
	volatile int32_t t61 = -350;

    t61 = ((x269/x270)<=(x271/x272));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x273 = 24;
	int32_t x274 = -178419400;
	int32_t x275 = INT32_MIN;
	volatile uint32_t x276 = 97145U;
	int32_t t62 = 7044119;

    t62 = ((x273/x274)<=(x275/x276));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x277 = INT32_MAX;
	int8_t x278 = INT8_MIN;
	static int64_t x279 = 3180458078LL;
	static uint32_t x280 = 416889264U;

    t63 = ((x277/x278)<=(x279/x280));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x281 = 227;
	int8_t x284 = INT8_MAX;
	static int32_t t64 = -7610927;

    t64 = ((x281/x282)<=(x283/x284));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x285 = 5910908U;
	volatile int8_t x287 = INT8_MIN;
	int64_t x288 = INT64_MIN;

    t65 = ((x285/x286)<=(x287/x288));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x289 = INT8_MIN;
	int8_t x290 = 4;
	int16_t x292 = 158;
	int32_t t66 = -100;

    t66 = ((x289/x290)<=(x291/x292));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x293 = 3U;
	uint64_t x294 = UINT64_MAX;
	int32_t x295 = INT32_MIN;
	static int8_t x296 = INT8_MIN;

    t67 = ((x293/x294)<=(x295/x296));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x298 = 128934318012094216LL;
	int16_t x299 = -1;
	static volatile int64_t x300 = 224333268874222LL;
	static int32_t t68 = 24291;

    t68 = ((x297/x298)<=(x299/x300));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int8_t x301 = INT8_MIN;
	uint8_t x302 = 46U;
	int32_t x303 = INT32_MAX;
	int32_t t69 = -3689;

    t69 = ((x301/x302)<=(x303/x304));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x305 = 738U;
	int16_t x306 = INT16_MIN;
	uint32_t x307 = 134U;
	static int8_t x308 = INT8_MIN;
	int32_t t70 = -65728;

    t70 = ((x305/x306)<=(x307/x308));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x309 = INT8_MIN;
	static int64_t x310 = INT64_MAX;
	static int16_t x311 = 2363;
	uint32_t x312 = 2016U;

    t71 = ((x309/x310)<=(x311/x312));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x314 = INT32_MAX;
	uint32_t x315 = 665U;
	volatile uint64_t x316 = UINT64_MAX;

    t72 = ((x313/x314)<=(x315/x316));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint8_t x318 = 1U;
	volatile uint32_t x319 = 19U;
	static int16_t x320 = -3;
	static int32_t t73 = -4457;

    t73 = ((x317/x318)<=(x319/x320));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x321 = 231105328955360LL;
	static uint64_t x322 = 344936885041424LLU;
	uint32_t x323 = 707U;
	uint8_t x324 = UINT8_MAX;
	int32_t t74 = 20502955;

    t74 = ((x321/x322)<=(x323/x324));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x325 = UINT8_MAX;
	int8_t x327 = 1;
	static volatile int8_t x328 = INT8_MIN;

    t75 = ((x325/x326)<=(x327/x328));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x329 = INT16_MIN;
	int64_t x330 = INT64_MAX;
	int64_t x332 = INT64_MAX;
	int32_t t76 = 1;

    t76 = ((x329/x330)<=(x331/x332));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x333 = 966226722826062LLU;
	static int8_t x334 = INT8_MIN;
	volatile int64_t x335 = INT64_MIN;
	int32_t t77 = 234;

    t77 = ((x333/x334)<=(x335/x336));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x337 = -1;
	volatile uint8_t x338 = UINT8_MAX;
	uint8_t x339 = 0U;
	volatile uint64_t x340 = 40909471431LLU;
	int32_t t78 = 1598;

    t78 = ((x337/x338)<=(x339/x340));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x343 = 2538450778490LLU;
	int64_t x344 = -1LL;
	static volatile int32_t t79 = -324;

    t79 = ((x341/x342)<=(x343/x344));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x345 = -1;
	int8_t x346 = INT8_MIN;
	volatile int8_t x347 = INT8_MIN;
	volatile int32_t t80 = -554143108;

    t80 = ((x345/x346)<=(x347/x348));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x349 = 37;
	int32_t x350 = INT32_MAX;
	int8_t x351 = INT8_MIN;
	volatile uint64_t x352 = 25710LLU;
	volatile int32_t t81 = -2;

    t81 = ((x349/x350)<=(x351/x352));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x357 = 355U;
	int8_t x358 = -1;
	int64_t x359 = INT64_MIN;
	uint8_t x360 = 23U;
	volatile int32_t t82 = -3120690;

    t82 = ((x357/x358)<=(x359/x360));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x361 = -1LL;
	static uint16_t x362 = UINT16_MAX;
	int64_t x363 = -1LL;
	uint8_t x364 = UINT8_MAX;
	volatile int32_t t83 = 923;

    t83 = ((x361/x362)<=(x363/x364));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x365 = 1978U;
	int64_t x366 = INT64_MAX;
	volatile int32_t x368 = INT32_MIN;
	int32_t t84 = 42588115;

    t84 = ((x365/x366)<=(x367/x368));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x374 = INT32_MIN;
	uint32_t x375 = 1064U;
	uint16_t x376 = 127U;
	int32_t t85 = -54156;

    t85 = ((x373/x374)<=(x375/x376));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x377 = 7;
	static int8_t x378 = 47;
	static int16_t x379 = INT16_MIN;
	volatile int64_t x380 = INT64_MIN;
	int32_t t86 = 5;

    t86 = ((x377/x378)<=(x379/x380));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x381 = INT16_MAX;
	static int16_t x382 = -1;
	int8_t x383 = -1;
	int32_t x384 = -1;
	int32_t t87 = 1141313;

    t87 = ((x381/x382)<=(x383/x384));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x385 = 7787U;
	int64_t x386 = INT64_MIN;
	int64_t x387 = -4LL;
	int8_t x388 = -10;
	int32_t t88 = -61172;

    t88 = ((x385/x386)<=(x387/x388));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x389 = -380;
	int32_t x390 = INT32_MAX;
	int32_t x391 = INT32_MIN;
	uint16_t x392 = UINT16_MAX;
	volatile int32_t t89 = 92057796;

    t89 = ((x389/x390)<=(x391/x392));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x393 = INT64_MIN;
	int32_t x394 = INT32_MAX;
	static volatile int64_t x395 = 609054055878499LL;
	volatile uint64_t x396 = 10397LLU;

    t90 = ((x393/x394)<=(x395/x396));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x398 = INT8_MIN;

    t91 = ((x397/x398)<=(x399/x400));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x401 = INT16_MAX;
	volatile int64_t x402 = INT64_MIN;
	uint32_t x403 = 6434U;
	int32_t x404 = 123511;
	volatile int32_t t92 = 58255925;

    t92 = ((x401/x402)<=(x403/x404));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x405 = INT32_MAX;
	uint32_t x406 = 98U;
	int32_t x408 = -1;
	int32_t t93 = 270085;

    t93 = ((x405/x406)<=(x407/x408));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x413 = INT8_MIN;
	int64_t x414 = -854561503LL;
	volatile int64_t x415 = INT64_MAX;
	volatile int32_t t94 = -514;

    t94 = ((x413/x414)<=(x415/x416));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x417 = INT32_MAX;
	volatile int16_t x418 = INT16_MIN;
	uint16_t x419 = 924U;

    t95 = ((x417/x418)<=(x419/x420));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x422 = 7521U;
	int32_t x424 = INT32_MIN;
	volatile int32_t t96 = 52703708;

    t96 = ((x421/x422)<=(x423/x424));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x429 = -1LL;
	int16_t x430 = INT16_MIN;
	static int32_t x431 = INT32_MIN;
	static int64_t x432 = 2LL;
	volatile int32_t t97 = -435164;

    t97 = ((x429/x430)<=(x431/x432));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x433 = 16033010110575574LLU;
	int16_t x434 = 3;
	int16_t x435 = INT16_MIN;
	uint8_t x436 = 7U;

    t98 = ((x433/x434)<=(x435/x436));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x439 = INT64_MAX;
	uint32_t x440 = 46232U;

    t99 = ((x437/x438)<=(x439/x440));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x441 = UINT32_MAX;
	volatile uint8_t x442 = UINT8_MAX;
	static uint8_t x443 = 26U;

    t100 = ((x441/x442)<=(x443/x444));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x445 = 1202721401LLU;
	static int32_t x446 = -1;
	volatile int16_t x447 = -1;
	static int8_t x448 = INT8_MIN;

    t101 = ((x445/x446)<=(x447/x448));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x449 = INT64_MIN;
	int64_t x450 = INT64_MIN;
	int16_t x451 = INT16_MIN;
	volatile int32_t t102 = -107357;

    t102 = ((x449/x450)<=(x451/x452));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x453 = 82501215U;
	uint64_t x454 = 4480254253334LLU;
	static uint16_t x455 = 67U;
	static uint64_t x456 = UINT64_MAX;
	static int32_t t103 = 49901709;

    t103 = ((x453/x454)<=(x455/x456));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x457 = 505;
	int32_t x458 = INT32_MAX;
	volatile int32_t x460 = INT32_MIN;
	static int32_t t104 = -3609544;

    t104 = ((x457/x458)<=(x459/x460));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x462 = -1;
	int16_t x463 = INT16_MIN;
	uint32_t x464 = 3U;
	int32_t t105 = -63686;

    t105 = ((x461/x462)<=(x463/x464));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x465 = 379721724U;
	uint64_t x466 = 397248591577LLU;
	uint32_t x468 = 107U;
	int32_t t106 = 41325;

    t106 = ((x465/x466)<=(x467/x468));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x473 = INT32_MAX;
	static int16_t x474 = INT16_MAX;
	volatile uint16_t x475 = 28717U;
	int16_t x476 = INT16_MIN;
	int32_t t107 = -3633445;

    t107 = ((x473/x474)<=(x475/x476));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x477 = -32610LL;
	volatile uint32_t x478 = UINT32_MAX;
	int8_t x480 = INT8_MIN;
	volatile int32_t t108 = 1166963;

    t108 = ((x477/x478)<=(x479/x480));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x481 = INT64_MAX;
	static uint16_t x482 = 109U;
	int64_t x483 = -1LL;
	int8_t x484 = INT8_MIN;
	int32_t t109 = 585074;

    t109 = ((x481/x482)<=(x483/x484));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x485 = 244480999155506817LLU;
	static volatile uint64_t x486 = 184LLU;
	int16_t x487 = INT16_MAX;
	uint16_t x488 = 62U;
	int32_t t110 = -56558526;

    t110 = ((x485/x486)<=(x487/x488));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x493 = -1;
	int16_t x494 = 5848;
	volatile uint8_t x495 = UINT8_MAX;
	static volatile int32_t t111 = 86657;

    t111 = ((x493/x494)<=(x495/x496));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x501 = INT8_MIN;
	volatile uint64_t x503 = UINT64_MAX;
	static volatile int32_t t112 = -641043984;

    t112 = ((x501/x502)<=(x503/x504));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x506 = 7U;
	volatile int32_t x507 = -1;
	int8_t x508 = INT8_MIN;
	volatile int32_t t113 = 26;

    t113 = ((x505/x506)<=(x507/x508));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x510 = -1;
	int8_t x511 = INT8_MIN;
	static volatile int16_t x512 = -1;
	static int32_t t114 = -197443264;

    t114 = ((x509/x510)<=(x511/x512));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x513 = INT64_MIN;
	int8_t x514 = INT8_MAX;
	uint16_t x515 = 137U;
	static volatile int16_t x516 = INT16_MIN;
	volatile int32_t t115 = -848413638;

    t115 = ((x513/x514)<=(x515/x516));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x517 = -39;
	volatile int16_t x518 = -4;
	uint64_t x519 = UINT64_MAX;
	int32_t x520 = INT32_MIN;
	volatile int32_t t116 = 25;

    t116 = ((x517/x518)<=(x519/x520));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x521 = UINT16_MAX;
	int8_t x522 = -1;
	static int8_t x523 = 30;
	uint32_t x524 = 175680U;

    t117 = ((x521/x522)<=(x523/x524));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x525 = 242543LL;
	int16_t x526 = -1;
	int32_t x527 = INT32_MIN;
	uint64_t x528 = UINT64_MAX;
	int32_t t118 = 1;

    t118 = ((x525/x526)<=(x527/x528));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x529 = UINT16_MAX;
	int32_t x530 = -242946198;
	int64_t x531 = 1027844520332LL;
	static uint8_t x532 = UINT8_MAX;
	static int32_t t119 = -553360715;

    t119 = ((x529/x530)<=(x531/x532));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x533 = INT8_MAX;
	volatile int16_t x534 = -249;
	int32_t x535 = INT32_MIN;
	volatile int8_t x536 = INT8_MIN;
	int32_t t120 = 90;

    t120 = ((x533/x534)<=(x535/x536));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x537 = UINT16_MAX;
	uint64_t x540 = UINT64_MAX;
	volatile int32_t t121 = 57;

    t121 = ((x537/x538)<=(x539/x540));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x541 = -1;
	volatile int32_t x542 = -45;
	int8_t x543 = -29;
	static int32_t x544 = INT32_MIN;
	static int32_t t122 = -5109;

    t122 = ((x541/x542)<=(x543/x544));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x545 = INT16_MAX;
	int32_t x546 = -3540948;
	static int16_t x547 = INT16_MIN;
	static uint32_t x548 = UINT32_MAX;
	int32_t t123 = 1;

    t123 = ((x545/x546)<=(x547/x548));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x549 = INT8_MIN;
	int8_t x551 = INT8_MIN;

    t124 = ((x549/x550)<=(x551/x552));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x553 = INT8_MAX;
	static int8_t x554 = -44;
	static uint8_t x556 = UINT8_MAX;

    t125 = ((x553/x554)<=(x555/x556));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x557 = 3009656LL;
	int16_t x558 = INT16_MIN;
	static uint8_t x559 = 3U;
	static uint32_t x560 = UINT32_MAX;
	static volatile int32_t t126 = 485924501;

    t126 = ((x557/x558)<=(x559/x560));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x561 = 6785308LLU;
	uint16_t x562 = 23933U;
	uint8_t x563 = UINT8_MAX;
	volatile uint16_t x564 = 1U;
	static volatile int32_t t127 = 15831;

    t127 = ((x561/x562)<=(x563/x564));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x565 = INT8_MIN;
	uint16_t x566 = 6U;
	int8_t x567 = INT8_MAX;
	volatile uint8_t x568 = 72U;
	static int32_t t128 = -914;

    t128 = ((x565/x566)<=(x567/x568));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x571 = INT8_MIN;
	int32_t x572 = INT32_MAX;
	volatile int32_t t129 = 241607763;

    t129 = ((x569/x570)<=(x571/x572));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x573 = UINT32_MAX;
	uint16_t x574 = 9214U;
	int32_t x575 = -1;
	int8_t x576 = -25;
	int32_t t130 = -1;

    t130 = ((x573/x574)<=(x575/x576));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x577 = INT16_MIN;
	volatile int64_t x578 = -193341137929038LL;
	int32_t t131 = -7686;

    t131 = ((x577/x578)<=(x579/x580));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint8_t x581 = UINT8_MAX;
	int16_t x582 = INT16_MAX;
	uint32_t x583 = 715665U;
	int16_t x584 = -13;
	volatile int32_t t132 = 36684508;

    t132 = ((x581/x582)<=(x583/x584));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x587 = -1LL;
	volatile int64_t x588 = INT64_MIN;
	int32_t t133 = 66003;

    t133 = ((x585/x586)<=(x587/x588));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x593 = 1854439LLU;
	int8_t x595 = 6;

    t134 = ((x593/x594)<=(x595/x596));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int32_t x597 = -12;
	int64_t x599 = -33251563233901LL;
	uint16_t x600 = UINT16_MAX;
	int32_t t135 = -59371;

    t135 = ((x597/x598)<=(x599/x600));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x601 = INT32_MIN;
	volatile int8_t x603 = -39;
	int8_t x604 = -1;
	volatile int32_t t136 = -7454;

    t136 = ((x601/x602)<=(x603/x604));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x605 = INT64_MAX;
	int32_t x606 = 105683;
	uint32_t x607 = 1U;
	int8_t x608 = INT8_MIN;
	volatile int32_t t137 = -399467;

    t137 = ((x605/x606)<=(x607/x608));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x609 = -1;
	int16_t x610 = INT16_MAX;
	static int8_t x611 = INT8_MIN;
	uint16_t x612 = UINT16_MAX;
	volatile int32_t t138 = 19940;

    t138 = ((x609/x610)<=(x611/x612));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x614 = UINT64_MAX;
	int16_t x615 = 9;
	volatile int8_t x616 = 9;
	volatile int32_t t139 = -703463358;

    t139 = ((x613/x614)<=(x615/x616));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int16_t x617 = 38;
	uint8_t x620 = 2U;
	int32_t t140 = -8;

    t140 = ((x617/x618)<=(x619/x620));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x621 = 103139362607LL;
	uint32_t x622 = UINT32_MAX;
	int8_t x623 = INT8_MIN;
	static volatile uint16_t x624 = 186U;
	static volatile int32_t t141 = -435;

    t141 = ((x621/x622)<=(x623/x624));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x625 = 11039U;
	static int64_t x626 = INT64_MIN;
	static volatile int64_t x627 = INT64_MIN;
	uint8_t x628 = UINT8_MAX;
	static int32_t t142 = 32127665;

    t142 = ((x625/x626)<=(x627/x628));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x629 = UINT16_MAX;
	volatile uint8_t x630 = UINT8_MAX;
	static int64_t x631 = INT64_MIN;
	int64_t x632 = INT64_MAX;
	static int32_t t143 = 1642581;

    t143 = ((x629/x630)<=(x631/x632));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x637 = INT32_MIN;
	static uint64_t x638 = 47LLU;
	int16_t x639 = 0;
	static int64_t x640 = -26341379482457LL;
	volatile int32_t t144 = 4;

    t144 = ((x637/x638)<=(x639/x640));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x642 = -7;
	uint8_t x644 = 110U;
	volatile int32_t t145 = -1;

    t145 = ((x641/x642)<=(x643/x644));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int8_t x646 = -1;
	uint64_t x647 = 3354233554248476756LLU;
	static uint64_t x648 = UINT64_MAX;
	volatile int32_t t146 = -120;

    t146 = ((x645/x646)<=(x647/x648));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x654 = INT8_MIN;
	uint32_t x655 = 153831U;
	static volatile uint32_t x656 = UINT32_MAX;
	static volatile int32_t t147 = -102876232;

    t147 = ((x653/x654)<=(x655/x656));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x657 = 195304659U;
	int16_t x658 = -40;
	int64_t x659 = INT64_MAX;
	static uint32_t x660 = 3856071U;
	volatile int32_t t148 = -14234814;

    t148 = ((x657/x658)<=(x659/x660));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x661 = -1LL;
	static volatile uint16_t x662 = 61U;
	volatile int16_t x663 = -1;
	uint16_t x664 = 5U;

    t149 = ((x661/x662)<=(x663/x664));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x665 = -1;
	volatile int32_t x666 = INT32_MAX;
	static uint32_t x667 = 3441U;

    t150 = ((x665/x666)<=(x667/x668));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x669 = -1;
	int16_t x670 = 10457;
	int64_t x671 = INT64_MIN;
	int64_t x672 = -28242212966973LL;
	volatile int32_t t151 = -2033569;

    t151 = ((x669/x670)<=(x671/x672));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x673 = 1U;
	uint8_t x675 = 7U;
	volatile int32_t t152 = 373133746;

    t152 = ((x673/x674)<=(x675/x676));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x677 = INT16_MAX;
	int64_t x678 = 140565038602015LL;
	int32_t x679 = -1;
	uint16_t x680 = UINT16_MAX;
	int32_t t153 = 32971;

    t153 = ((x677/x678)<=(x679/x680));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x681 = INT8_MAX;
	uint8_t x682 = UINT8_MAX;
	int16_t x683 = INT16_MAX;

    t154 = ((x681/x682)<=(x683/x684));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x685 = 5;
	static uint16_t x686 = 7652U;
	int64_t x687 = -1LL;
	static volatile int32_t t155 = -28214;

    t155 = ((x685/x686)<=(x687/x688));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x689 = -28127;
	static volatile int32_t x690 = INT32_MIN;
	uint64_t x691 = 257817245453310LLU;

    t156 = ((x689/x690)<=(x691/x692));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x693 = 22;
	static int16_t x694 = INT16_MAX;
	int8_t x696 = INT8_MIN;
	volatile int32_t t157 = 50272;

    t157 = ((x693/x694)<=(x695/x696));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x697 = -1;
	int16_t x698 = INT16_MAX;

    t158 = ((x697/x698)<=(x699/x700));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x701 = UINT8_MAX;
	int32_t x702 = INT32_MAX;
	int64_t x703 = -5444322614LL;
	uint32_t x704 = 31405881U;
	int32_t t159 = -9;

    t159 = ((x701/x702)<=(x703/x704));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x705 = INT16_MIN;
	int32_t x706 = -103077619;
	volatile int64_t x707 = -179877691393947LL;
	int32_t x708 = 62537616;
	int32_t t160 = 44883;

    t160 = ((x705/x706)<=(x707/x708));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x710 = UINT16_MAX;
	int8_t x711 = INT8_MIN;
	int32_t t161 = 32351947;

    t161 = ((x709/x710)<=(x711/x712));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x713 = INT8_MIN;
	volatile uint32_t x715 = 63969877U;
	volatile int64_t x716 = INT64_MIN;
	int32_t t162 = -390574;

    t162 = ((x713/x714)<=(x715/x716));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile uint32_t x717 = 5735537U;
	int32_t x719 = -67463007;
	uint32_t x720 = 11527U;
	static int32_t t163 = -8628;

    t163 = ((x717/x718)<=(x719/x720));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x725 = INT64_MAX;
	int32_t x726 = 55140;
	volatile uint32_t x727 = 1890397U;
	int32_t t164 = 1;

    t164 = ((x725/x726)<=(x727/x728));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x729 = 16429938356LLU;
	int16_t x730 = -1;
	int32_t x731 = 5;
	int64_t x732 = INT64_MIN;
	volatile int32_t t165 = 5;

    t165 = ((x729/x730)<=(x731/x732));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x733 = 26407894;
	int64_t x734 = INT64_MAX;
	int8_t x735 = INT8_MIN;
	int32_t t166 = -40175;

    t166 = ((x733/x734)<=(x735/x736));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x737 = -1;
	int8_t x738 = INT8_MAX;
	volatile uint64_t x739 = UINT64_MAX;
	uint64_t x740 = 412LLU;
	int32_t t167 = -2919834;

    t167 = ((x737/x738)<=(x739/x740));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x745 = UINT16_MAX;
	uint16_t x746 = 2U;
	int32_t x747 = -1;
	int32_t x748 = -1;

    t168 = ((x745/x746)<=(x747/x748));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x749 = -1;
	uint16_t x750 = 16U;
	int8_t x751 = INT8_MAX;
	int8_t x752 = 38;
	static volatile int32_t t169 = 12902;

    t169 = ((x749/x750)<=(x751/x752));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x758 = INT8_MIN;
	uint64_t x759 = 602201852740897132LLU;
	int8_t x760 = INT8_MAX;
	int32_t t170 = -3685;

    t170 = ((x757/x758)<=(x759/x760));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x761 = INT32_MIN;
	static int16_t x763 = 3794;
	static int8_t x764 = -24;
	int32_t t171 = -11;

    t171 = ((x761/x762)<=(x763/x764));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x765 = INT64_MAX;
	volatile int32_t x766 = INT32_MIN;
	int8_t x767 = INT8_MIN;
	int16_t x768 = 10;
	volatile int32_t t172 = 310113;

    t172 = ((x765/x766)<=(x767/x768));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x769 = -1LL;
	static volatile int32_t x772 = INT32_MIN;
	volatile int32_t t173 = 62;

    t173 = ((x769/x770)<=(x771/x772));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x773 = -1;
	int8_t x774 = INT8_MAX;
	uint16_t x775 = 17076U;
	int32_t t174 = -9593;

    t174 = ((x773/x774)<=(x775/x776));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x777 = -1;
	uint32_t x778 = 54447U;
	volatile int32_t t175 = -1;

    t175 = ((x777/x778)<=(x779/x780));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x786 = INT32_MIN;
	uint16_t x788 = 179U;
	volatile int32_t t176 = -2167;

    t176 = ((x785/x786)<=(x787/x788));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x793 = -1;
	uint16_t x794 = 5U;
	int32_t x795 = 0;
	uint16_t x796 = 28U;
	volatile int32_t t177 = 451580420;

    t177 = ((x793/x794)<=(x795/x796));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x799 = INT8_MIN;
	int32_t x800 = INT32_MIN;
	static volatile int32_t t178 = -96484547;

    t178 = ((x797/x798)<=(x799/x800));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int64_t x801 = INT64_MIN;
	int8_t x802 = INT8_MIN;
	int32_t x803 = INT32_MIN;
	int64_t x804 = INT64_MIN;
	int32_t t179 = -45;

    t179 = ((x801/x802)<=(x803/x804));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x805 = -451;
	volatile int16_t x806 = INT16_MAX;
	static int8_t x807 = INT8_MIN;
	static uint32_t x808 = UINT32_MAX;
	int32_t t180 = -106800;

    t180 = ((x805/x806)<=(x807/x808));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x809 = INT16_MIN;
	int64_t x811 = 344284LL;
	static uint16_t x812 = UINT16_MAX;
	volatile int32_t t181 = -1;

    t181 = ((x809/x810)<=(x811/x812));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x813 = INT32_MAX;
	int16_t x814 = INT16_MIN;
	volatile uint8_t x815 = 7U;
	static int32_t x816 = INT32_MIN;
	int32_t t182 = -54644667;

    t182 = ((x813/x814)<=(x815/x816));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x817 = 28;
	int32_t x819 = INT32_MIN;
	volatile int32_t x820 = INT32_MIN;
	static volatile int32_t t183 = 811699763;

    t183 = ((x817/x818)<=(x819/x820));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x821 = INT32_MIN;
	uint16_t x822 = UINT16_MAX;
	uint8_t x823 = UINT8_MAX;
	volatile int32_t t184 = 9435;

    t184 = ((x821/x822)<=(x823/x824));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x829 = -14;
	int8_t x831 = INT8_MIN;
	int32_t x832 = INT32_MIN;
	volatile int32_t t185 = -79898366;

    t185 = ((x829/x830)<=(x831/x832));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x833 = INT64_MIN;
	volatile uint8_t x834 = 28U;
	int8_t x835 = INT8_MAX;
	uint32_t x836 = UINT32_MAX;

    t186 = ((x833/x834)<=(x835/x836));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x838 = 3;
	int8_t x839 = -1;
	int64_t x840 = INT64_MIN;
	int32_t t187 = -3214692;

    t187 = ((x837/x838)<=(x839/x840));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x841 = -3;
	volatile uint64_t x842 = 505161548281285266LLU;
	int8_t x844 = -1;
	volatile int32_t t188 = -5196816;

    t188 = ((x841/x842)<=(x843/x844));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x845 = UINT64_MAX;
	int64_t x846 = INT64_MIN;
	static int64_t x847 = -1LL;
	int8_t x848 = INT8_MIN;

    t189 = ((x845/x846)<=(x847/x848));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x849 = INT64_MIN;
	int32_t x850 = INT32_MAX;
	int8_t x851 = 1;
	int32_t t190 = -628;

    t190 = ((x849/x850)<=(x851/x852));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x853 = 1765390U;
	int64_t x854 = -7167LL;
	volatile int32_t x855 = INT32_MIN;
	volatile int8_t x856 = 17;

    t191 = ((x853/x854)<=(x855/x856));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint8_t x857 = UINT8_MAX;
	uint64_t x858 = UINT64_MAX;
	int16_t x860 = INT16_MAX;
	static int32_t t192 = -386472;

    t192 = ((x857/x858)<=(x859/x860));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x861 = 23974326U;
	volatile int16_t x862 = 91;
	volatile int32_t t193 = -3764;

    t193 = ((x861/x862)<=(x863/x864));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x865 = -1;
	volatile int32_t x867 = INT32_MAX;
	int32_t t194 = -260298;

    t194 = ((x865/x866)<=(x867/x868));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x869 = -1;
	uint32_t x871 = UINT32_MAX;
	static uint64_t x872 = 6485627073037LLU;

    t195 = ((x869/x870)<=(x871/x872));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x873 = 79551LLU;
	int8_t x874 = -1;
	volatile uint32_t x875 = 6461244U;
	static int8_t x876 = -10;
	static volatile int32_t t196 = 705;

    t196 = ((x873/x874)<=(x875/x876));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x885 = 2U;
	int16_t x886 = 134;
	static volatile int64_t x887 = -1LL;
	int32_t x888 = INT32_MAX;
	volatile int32_t t197 = -530238;

    t197 = ((x885/x886)<=(x887/x888));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x889 = UINT8_MAX;
	uint8_t x890 = 1U;
	static uint8_t x892 = UINT8_MAX;
	static int32_t t198 = -1699;

    t198 = ((x889/x890)<=(x891/x892));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x893 = -782935026737LL;
	volatile uint16_t x894 = UINT16_MAX;
	int32_t t199 = 94;

    t199 = ((x893/x894)<=(x895/x896));

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

