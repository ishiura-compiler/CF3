
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

uint8_t x3 = 0U;
int32_t x13 = INT32_MIN;
int64_t x14 = INT64_MAX;
volatile int64_t x18 = 7716943390LL;
int32_t t3 = -4059;
int16_t x22 = -3004;
static int32_t x24 = INT32_MIN;
static volatile int32_t t4 = 12427;
int64_t x40 = INT64_MIN;
volatile int64_t t7 = 694803390LL;
uint64_t x56 = 16644LLU;
static int32_t x73 = -1;
int32_t x74 = -18536;
int64_t x76 = INT64_MIN;
int32_t t16 = -3;
volatile int32_t t18 = 15843570;
int32_t x89 = INT32_MAX;
static uint16_t x90 = 24U;
uint32_t x95 = 91833U;
static uint16_t x98 = 6420U;
int16_t x102 = -304;
int32_t x103 = -1;
volatile uint8_t x105 = 2U;
uint16_t x106 = 1U;
uint32_t x108 = UINT32_MAX;
int8_t x113 = INT8_MIN;
int8_t x119 = 5;
int64_t x130 = -1LL;
int64_t x138 = 347386LL;
static int8_t x153 = -6;
static int32_t t34 = -27;
int64_t x161 = 1LL;
int32_t x163 = -1;
static int16_t x165 = -1;
int8_t x168 = -1;
static int32_t t36 = 106329;
uint8_t x172 = 1U;
volatile uint64_t x175 = UINT64_MAX;
int32_t x176 = INT32_MIN;
static int64_t t39 = -12314132252231LL;
uint64_t x184 = UINT64_MAX;
uint64_t t40 = 241039791980880233LLU;
uint64_t x186 = 383710718981802LLU;
uint32_t x187 = 0U;
static int8_t x193 = INT8_MIN;
int16_t x194 = 12184;
static uint16_t x196 = UINT16_MAX;
int8_t x201 = -2;
int16_t x221 = -3;
volatile uint64_t t47 = 16554858301337278LLU;
uint64_t x229 = 87LLU;
static volatile uint64_t x230 = 499621131070595LLU;
int64_t x231 = -1LL;
int8_t x232 = INT8_MIN;
volatile int32_t t49 = -65199659;
int32_t t51 = 81;
int8_t x248 = 6;
int16_t x252 = -7670;
static volatile int32_t t54 = 3775;
volatile int32_t t55 = 136;
int64_t x270 = INT64_MIN;
int64_t t58 = -14256992096116LL;
int32_t t59 = 28;
int32_t x279 = INT32_MAX;
volatile int64_t x281 = -677LL;
int16_t x283 = -1;
int8_t x290 = -3;
static uint64_t x291 = UINT64_MAX;
uint16_t x292 = 161U;
int32_t x293 = INT32_MIN;
uint64_t x303 = 59964635926030LLU;
volatile int32_t t65 = 796711756;
int8_t x308 = INT8_MIN;
volatile int32_t x314 = -1;
uint64_t t68 = 14030230385489LLU;
volatile int8_t x321 = INT8_MIN;
int32_t t70 = 0;
int8_t x334 = INT8_MAX;
int8_t x338 = 13;
uint8_t x341 = 5U;
int32_t x348 = 12;
static int64_t x352 = INT64_MIN;
uint32_t x354 = 17U;
uint64_t t78 = 414256508471291986LLU;
static uint8_t x384 = 13U;
static int8_t x388 = 1;
int8_t x390 = INT8_MIN;
volatile int32_t t85 = -3507;
static int8_t x393 = -1;
int8_t x398 = INT8_MIN;
int32_t x408 = 5648798;
int16_t x410 = 588;
static int32_t x413 = -19;
int16_t x415 = INT16_MIN;
volatile int32_t t93 = -2;
volatile int32_t t95 = 3;
static uint32_t x435 = UINT32_MAX;
int8_t x438 = INT8_MAX;
volatile int32_t t97 = -28;
volatile int8_t x449 = INT8_MIN;
int8_t x450 = INT8_MIN;
uint64_t x454 = 50559730364LLU;
volatile uint32_t x475 = 1162429U;
volatile uint16_t x476 = UINT16_MAX;
static volatile int8_t x480 = INT8_MIN;
static int64_t x486 = -1LL;
uint8_t x488 = UINT8_MAX;
uint32_t x490 = 62U;
int8_t x493 = 0;
uint16_t x495 = 273U;
int16_t x496 = INT16_MAX;
int16_t x499 = INT16_MIN;
volatile int16_t x502 = -2;
uint32_t x503 = 7088782U;
int64_t x504 = INT64_MIN;
uint64_t t110 = 154588741570084LLU;
int64_t x509 = -1LL;
int8_t x512 = -19;
volatile int16_t x514 = INT16_MIN;
int64_t x516 = 898775183144158587LL;
uint16_t x519 = UINT16_MAX;
int16_t x521 = INT16_MAX;
uint32_t x524 = 10U;
int32_t x527 = 20691;
int32_t t115 = 297550015;
int32_t x529 = INT32_MIN;
int8_t x531 = -1;
volatile int64_t x532 = INT64_MIN;
uint16_t x535 = UINT16_MAX;
uint64_t x547 = 189LLU;
uint32_t x551 = 10U;
static volatile int32_t t122 = -12280917;
uint64_t x557 = 290817034LLU;
uint16_t x558 = 669U;
static int32_t x567 = INT32_MIN;
int32_t x570 = -1;
int16_t x571 = INT16_MIN;
int32_t x577 = -493140621;
volatile int16_t x578 = INT16_MIN;
uint16_t x579 = 20U;
volatile int32_t x580 = -82;
uint16_t x588 = UINT16_MAX;
static uint64_t t130 = 1139LLU;
static int16_t x595 = -353;
volatile int64_t x602 = -1LL;
int16_t x610 = -1;
int64_t x629 = 24321LL;
static int16_t x655 = INT16_MIN;
volatile int8_t x657 = -1;
static volatile int64_t t148 = 259LL;
volatile int16_t x674 = INT16_MIN;
static int32_t x681 = INT32_MIN;
volatile int16_t x683 = INT16_MIN;
static int16_t x694 = INT16_MAX;
int8_t x695 = INT8_MIN;
uint64_t x700 = UINT64_MAX;
int32_t t157 = 2874936;
uint16_t x713 = UINT16_MAX;
int8_t x716 = -1;
int8_t x724 = -1;
volatile uint16_t x726 = 266U;
int32_t x727 = INT32_MIN;
static uint64_t x728 = UINT64_MAX;
int32_t t163 = -181;
volatile int8_t x755 = INT8_MAX;
static uint16_t x758 = 15U;
uint8_t x760 = UINT8_MAX;
static int32_t x764 = -2;
volatile int8_t x768 = -1;
int8_t x771 = -1;
volatile int64_t x779 = -1LL;
int32_t t172 = 229873;
volatile int32_t t173 = 13504;
int32_t x785 = INT32_MIN;
static uint32_t x795 = 1U;
volatile int8_t x797 = -2;
int32_t x799 = 330329;
uint32_t t177 = 28U;
volatile int64_t x801 = -1LL;
static uint32_t x818 = 1677009U;
int32_t t181 = 699955;
static uint64_t x821 = UINT64_MAX;
volatile int32_t x824 = -892;
static volatile int32_t x828 = INT32_MIN;
static uint16_t x830 = UINT16_MAX;
int8_t x835 = INT8_MIN;
int32_t t185 = 170061;
static int16_t x840 = -14072;
volatile uint32_t x843 = 33409U;
static int64_t t187 = -30635021246LL;
int8_t x846 = -1;
int8_t x852 = -1;
static uint8_t x853 = 22U;
volatile uint16_t x858 = UINT16_MAX;
uint16_t x871 = 8U;
uint8_t x873 = 28U;
static int64_t x877 = INT64_MAX;
static int16_t x878 = -26;
int32_t t196 = -27973736;
int8_t x881 = -1;


void f0(void) {
    	static volatile uint32_t x1 = UINT32_MAX;
	uint8_t x2 = 9U;
	int8_t x4 = 1;
	volatile int32_t t0 = -69;

    t0 = ((x1==(x2+x3))/x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x5 = UINT8_MAX;
	uint32_t x6 = UINT32_MAX;
	uint16_t x7 = 13666U;
	static volatile uint64_t x8 = 9432001353LLU;
	volatile uint64_t t1 = 2738893021417792588LLU;

    t1 = ((x5==(x6+x7))/x8);

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x15 = -1LL;
	static int64_t x16 = INT64_MAX;
	static volatile int64_t t2 = 62575277643LL;

    t2 = ((x13==(x14+x15))/x16);

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int64_t x17 = -1LL;
	static int32_t x19 = 24755;
	uint16_t x20 = UINT16_MAX;

    t3 = ((x17==(x18+x19))/x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x21 = 60866501436541LL;
	uint16_t x23 = UINT16_MAX;

    t4 = ((x21==(x22+x23))/x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x25 = INT16_MIN;
	static int64_t x26 = INT64_MAX;
	int32_t x27 = 0;
	static volatile uint16_t x28 = 46U;
	int32_t t5 = -484258601;

    t5 = ((x25==(x26+x27))/x28);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x29 = 14U;
	int16_t x30 = -3;
	uint8_t x31 = 1U;
	int8_t x32 = INT8_MAX;
	int32_t t6 = 7108560;

    t6 = ((x29==(x30+x31))/x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x37 = INT8_MAX;
	int8_t x38 = INT8_MIN;
	int8_t x39 = INT8_MAX;

    t7 = ((x37==(x38+x39))/x40);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x41 = INT8_MAX;
	int16_t x42 = 1;
	static uint16_t x43 = UINT16_MAX;
	uint32_t x44 = 235U;
	volatile uint32_t t8 = 52915U;

    t8 = ((x41==(x42+x43))/x44);

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x45 = INT8_MIN;
	static volatile uint8_t x46 = 2U;
	static int32_t x47 = INT32_MIN;
	int32_t x48 = 1;
	volatile int32_t t9 = -1072388;

    t9 = ((x45==(x46+x47))/x48);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x49 = -679407253234662547LL;
	static uint64_t x50 = UINT64_MAX;
	uint8_t x51 = UINT8_MAX;
	uint32_t x52 = 107610U;
	static volatile uint32_t t10 = 40123005U;

    t10 = ((x49==(x50+x51))/x52);

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x53 = -1;
	volatile int32_t x54 = INT32_MIN;
	int8_t x55 = INT8_MAX;
	static uint64_t t11 = 0LLU;

    t11 = ((x53==(x54+x55))/x56);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x57 = -1;
	static volatile int16_t x58 = INT16_MAX;
	int32_t x59 = -1;
	static int16_t x60 = INT16_MIN;
	volatile int32_t t12 = 1395;

    t12 = ((x57==(x58+x59))/x60);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x61 = 2U;
	uint8_t x62 = 39U;
	volatile int32_t x63 = INT32_MIN;
	static uint8_t x64 = UINT8_MAX;
	static volatile int32_t t13 = -1;

    t13 = ((x61==(x62+x63))/x64);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x69 = -1;
	int8_t x70 = -1;
	static volatile int16_t x71 = -6;
	volatile int8_t x72 = INT8_MAX;
	int32_t t14 = -4085027;

    t14 = ((x69==(x70+x71))/x72);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint64_t x75 = 6394623LLU;
	int64_t t15 = -1LL;

    t15 = ((x73==(x74+x75))/x76);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x77 = 5185U;
	volatile int64_t x78 = -1LL;
	int16_t x79 = INT16_MAX;
	int8_t x80 = INT8_MAX;

    t16 = ((x77==(x78+x79))/x80);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x81 = 11U;
	volatile int8_t x82 = -8;
	volatile int32_t x83 = -911;
	int64_t x84 = INT64_MAX;
	int64_t t17 = -33650796378534LL;

    t17 = ((x81==(x82+x83))/x84);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x85 = UINT64_MAX;
	int32_t x86 = -1;
	int16_t x87 = INT16_MIN;
	static int16_t x88 = -2013;

    t18 = ((x85==(x86+x87))/x88);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x91 = 1;
	int32_t x92 = -13529408;
	int32_t t19 = 0;

    t19 = ((x89==(x90+x91))/x92);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x93 = 12468387LLU;
	int32_t x94 = INT32_MIN;
	volatile int8_t x96 = 2;
	int32_t t20 = 36633620;

    t20 = ((x93==(x94+x95))/x96);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x97 = INT32_MAX;
	static int16_t x99 = -1;
	volatile int16_t x100 = INT16_MIN;
	volatile int32_t t21 = -6837;

    t21 = ((x97==(x98+x99))/x100);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x101 = 103U;
	uint64_t x104 = 827182056LLU;
	static uint64_t t22 = 118203125525644282LLU;

    t22 = ((x101==(x102+x103))/x104);

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x107 = 5297878954LLU;
	volatile uint32_t t23 = 9754U;

    t23 = ((x105==(x106+x107))/x108);

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x114 = 19;
	static int16_t x115 = INT16_MIN;
	static uint16_t x116 = 20U;
	int32_t t24 = -1625903;

    t24 = ((x113==(x114+x115))/x116);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x117 = -1LL;
	volatile int32_t x118 = 233823;
	int64_t x120 = 3LL;
	int64_t t25 = -4207241LL;

    t25 = ((x117==(x118+x119))/x120);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x125 = -1;
	volatile uint64_t x126 = UINT64_MAX;
	int64_t x127 = INT64_MIN;
	int16_t x128 = 2;
	int32_t t26 = 1;

    t26 = ((x125==(x126+x127))/x128);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x129 = -1;
	static int64_t x131 = INT64_MAX;
	static int32_t x132 = INT32_MIN;
	int32_t t27 = 24266;

    t27 = ((x129==(x130+x131))/x132);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x133 = INT8_MIN;
	volatile int16_t x134 = INT16_MIN;
	int8_t x135 = -1;
	uint32_t x136 = 1440U;
	uint32_t t28 = 360U;

    t28 = ((x133==(x134+x135))/x136);

    if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x137 = -1;
	int32_t x139 = -1;
	int64_t x140 = -2429771LL;
	volatile int64_t t29 = -214371415748430LL;

    t29 = ((x137==(x138+x139))/x140);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x141 = UINT16_MAX;
	volatile int8_t x142 = 15;
	int16_t x143 = INT16_MIN;
	uint64_t x144 = 11131842LLU;
	static uint64_t t30 = 3LLU;

    t30 = ((x141==(x142+x143))/x144);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x145 = 0U;
	static uint32_t x146 = 1936226U;
	volatile int32_t x147 = -333856;
	static int64_t x148 = -1LL;
	volatile int64_t t31 = -19554107182189LL;

    t31 = ((x145==(x146+x147))/x148);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x149 = INT8_MIN;
	int32_t x150 = INT32_MIN;
	uint32_t x151 = 93108U;
	static int8_t x152 = 3;
	int32_t t32 = 1;

    t32 = ((x149==(x150+x151))/x152);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x154 = 5U;
	int32_t x155 = -6658;
	uint16_t x156 = 1124U;
	int32_t t33 = -11776;

    t33 = ((x153==(x154+x155))/x156);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x157 = INT16_MIN;
	int32_t x158 = -112346;
	int8_t x159 = 1;
	int8_t x160 = INT8_MIN;

    t34 = ((x157==(x158+x159))/x160);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x162 = INT16_MIN;
	uint16_t x164 = 540U;
	volatile int32_t t35 = -68499;

    t35 = ((x161==(x162+x163))/x164);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x166 = INT8_MIN;
	int8_t x167 = -6;

    t36 = ((x165==(x166+x167))/x168);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x169 = 52U;
	uint16_t x170 = 1131U;
	uint8_t x171 = 97U;
	int32_t t37 = 5835;

    t37 = ((x169==(x170+x171))/x172);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x173 = INT16_MAX;
	volatile uint16_t x174 = 22355U;
	int32_t t38 = 3;

    t38 = ((x173==(x174+x175))/x176);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x177 = INT16_MAX;
	int64_t x178 = INT64_MIN;
	int16_t x179 = 5;
	int64_t x180 = 44LL;

    t39 = ((x177==(x178+x179))/x180);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x181 = 100U;
	uint64_t x182 = UINT64_MAX;
	static volatile int8_t x183 = 2;

    t40 = ((x181==(x182+x183))/x184);

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x185 = UINT16_MAX;
	int16_t x188 = -1;
	static int32_t t41 = 62902;

    t41 = ((x185==(x186+x187))/x188);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int16_t x189 = INT16_MIN;
	uint32_t x190 = 5218200U;
	uint32_t x191 = 10046315U;
	static volatile uint32_t x192 = 1507590805U;
	volatile uint32_t t42 = 16287098U;

    t42 = ((x189==(x190+x191))/x192);

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x195 = 442027564050964LL;
	volatile int32_t t43 = -199693;

    t43 = ((x193==(x194+x195))/x196);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint64_t x197 = 219338958747536460LLU;
	int64_t x198 = -3866957124886063LL;
	int32_t x199 = -121594920;
	int16_t x200 = -1;
	volatile int32_t t44 = 335707;

    t44 = ((x197==(x198+x199))/x200);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x202 = 2U;
	volatile int8_t x203 = INT8_MIN;
	int64_t x204 = INT64_MAX;
	static int64_t t45 = -1071657722947486018LL;

    t45 = ((x201==(x202+x203))/x204);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x205 = 27U;
	static int8_t x206 = INT8_MAX;
	int32_t x207 = 3934264;
	int16_t x208 = -7832;
	int32_t t46 = 0;

    t46 = ((x205==(x206+x207))/x208);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x222 = INT8_MAX;
	volatile int16_t x223 = 170;
	volatile uint64_t x224 = 16150473163869LLU;

    t47 = ((x221==(x222+x223))/x224);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x225 = -2;
	uint32_t x226 = 447867U;
	int16_t x227 = INT16_MAX;
	int8_t x228 = -23;
	int32_t t48 = 211367;

    t48 = ((x225==(x226+x227))/x228);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    

    t49 = ((x229==(x230+x231))/x232);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x233 = -14814;
	static int32_t x234 = INT32_MIN;
	static int32_t x235 = INT32_MAX;
	uint16_t x236 = 9287U;
	volatile int32_t t50 = -5686;

    t50 = ((x233==(x234+x235))/x236);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x237 = 3;
	uint8_t x238 = UINT8_MAX;
	uint32_t x239 = 945U;
	int8_t x240 = INT8_MIN;

    t51 = ((x237==(x238+x239))/x240);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x245 = -1;
	int64_t x246 = 166441400536487LL;
	uint16_t x247 = 47U;
	int32_t t52 = 801;

    t52 = ((x245==(x246+x247))/x248);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint64_t x249 = 64037300LLU;
	volatile uint32_t x250 = 321U;
	int64_t x251 = -4676912LL;
	volatile int32_t t53 = -471806;

    t53 = ((x249==(x250+x251))/x252);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint64_t x253 = 11677986211LLU;
	uint32_t x254 = 15U;
	volatile int8_t x255 = -1;
	int16_t x256 = -912;

    t54 = ((x253==(x254+x255))/x256);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x257 = UINT64_MAX;
	static uint8_t x258 = 0U;
	volatile uint32_t x259 = 1580091U;
	static int8_t x260 = -1;

    t55 = ((x257==(x258+x259))/x260);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x261 = 4387U;
	int16_t x262 = -968;
	volatile int32_t x263 = -2399;
	int32_t x264 = INT32_MIN;
	volatile int32_t t56 = -92;

    t56 = ((x261==(x262+x263))/x264);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x265 = 15U;
	int16_t x266 = INT16_MAX;
	int8_t x267 = INT8_MAX;
	static int64_t x268 = INT64_MAX;
	int64_t t57 = -199451909LL;

    t57 = ((x265==(x266+x267))/x268);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x269 = 1U;
	uint16_t x271 = 7U;
	int64_t x272 = INT64_MIN;

    t58 = ((x269==(x270+x271))/x272);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x273 = 517082470176574LLU;
	int8_t x274 = 3;
	int32_t x275 = 2;
	static volatile int8_t x276 = -1;

    t59 = ((x273==(x274+x275))/x276);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x277 = 3012;
	int64_t x278 = INT64_MIN;
	volatile int32_t x280 = INT32_MIN;
	static int32_t t60 = -81834331;

    t60 = ((x277==(x278+x279))/x280);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x282 = 19467U;
	int64_t x284 = INT64_MIN;
	int64_t t61 = -2165934591367198LL;

    t61 = ((x281==(x282+x283))/x284);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x285 = -66;
	int8_t x286 = -1;
	int64_t x287 = -1LL;
	volatile uint8_t x288 = 42U;
	int32_t t62 = 22;

    t62 = ((x285==(x286+x287))/x288);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x289 = 889378548U;
	volatile int32_t t63 = 30;

    t63 = ((x289==(x290+x291))/x292);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x294 = INT32_MIN;
	uint8_t x295 = 11U;
	static int64_t x296 = -2LL;
	int64_t t64 = -152465777755LL;

    t64 = ((x293==(x294+x295))/x296);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x301 = INT64_MIN;
	uint64_t x302 = UINT64_MAX;
	int16_t x304 = -1;

    t65 = ((x301==(x302+x303))/x304);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x305 = 62U;
	uint64_t x306 = UINT64_MAX;
	int16_t x307 = INT16_MAX;
	int32_t t66 = -963922;

    t66 = ((x305==(x306+x307))/x308);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x313 = INT16_MIN;
	static int8_t x315 = 10;
	int32_t x316 = INT32_MAX;
	volatile int32_t t67 = -101;

    t67 = ((x313==(x314+x315))/x316);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x317 = INT32_MIN;
	static int8_t x318 = INT8_MIN;
	uint8_t x319 = UINT8_MAX;
	uint64_t x320 = 39LLU;

    t68 = ((x317==(x318+x319))/x320);

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x322 = INT16_MIN;
	int16_t x323 = 13;
	int16_t x324 = 1;
	volatile int32_t t69 = -88945;

    t69 = ((x321==(x322+x323))/x324);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x325 = 26;
	int64_t x326 = INT64_MAX;
	volatile int16_t x327 = INT16_MIN;
	int16_t x328 = INT16_MIN;

    t70 = ((x325==(x326+x327))/x328);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x329 = -31;
	int16_t x330 = INT16_MIN;
	uint16_t x331 = 4103U;
	int32_t x332 = INT32_MIN;
	volatile int32_t t71 = 63290;

    t71 = ((x329==(x330+x331))/x332);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x333 = 237;
	static uint16_t x335 = UINT16_MAX;
	int32_t x336 = INT32_MIN;
	int32_t t72 = -14175;

    t72 = ((x333==(x334+x335))/x336);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x337 = 612882626306926LLU;
	volatile int64_t x339 = 62582LL;
	static uint8_t x340 = UINT8_MAX;
	volatile int32_t t73 = -16;

    t73 = ((x337==(x338+x339))/x340);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x342 = 472U;
	int16_t x343 = -816;
	volatile int8_t x344 = INT8_MIN;
	int32_t t74 = 1017414;

    t74 = ((x341==(x342+x343))/x344);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x345 = 3224258281LL;
	static uint16_t x346 = 23100U;
	uint8_t x347 = 0U;
	volatile int32_t t75 = -766947558;

    t75 = ((x345==(x346+x347))/x348);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x349 = -12028LL;
	static int32_t x350 = 4084871;
	uint32_t x351 = 3380U;
	static volatile int64_t t76 = -5979LL;

    t76 = ((x349==(x350+x351))/x352);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x353 = 0;
	int8_t x355 = -29;
	static uint32_t x356 = 57663U;
	static uint32_t t77 = 2118805U;

    t77 = ((x353==(x354+x355))/x356);

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x357 = INT8_MAX;
	volatile int32_t x358 = 42964205;
	int16_t x359 = INT16_MAX;
	uint64_t x360 = 168276LLU;

    t78 = ((x357==(x358+x359))/x360);

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x361 = 1U;
	int32_t x362 = INT32_MAX;
	int64_t x363 = INT64_MIN;
	int64_t x364 = INT64_MAX;
	int64_t t79 = -6395263126805LL;

    t79 = ((x361==(x362+x363))/x364);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x365 = -2;
	static volatile uint16_t x366 = 0U;
	volatile int8_t x367 = -1;
	int16_t x368 = -1;
	volatile int32_t t80 = 12584154;

    t80 = ((x365==(x366+x367))/x368);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x373 = 4836614412LL;
	int16_t x374 = -3708;
	int64_t x375 = INT64_MAX;
	volatile int64_t x376 = INT64_MAX;
	volatile int64_t t81 = 32517729074558LL;

    t81 = ((x373==(x374+x375))/x376);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x377 = INT64_MIN;
	uint64_t x378 = 501LLU;
	int16_t x379 = INT16_MAX;
	int16_t x380 = INT16_MAX;
	volatile int32_t t82 = -15;

    t82 = ((x377==(x378+x379))/x380);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x381 = UINT8_MAX;
	uint32_t x382 = 1046408U;
	int64_t x383 = -1418651LL;
	int32_t t83 = 265;

    t83 = ((x381==(x382+x383))/x384);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x385 = -2003557;
	static int8_t x386 = -1;
	volatile int32_t x387 = 12773874;
	int32_t t84 = 0;

    t84 = ((x385==(x386+x387))/x388);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x389 = INT16_MIN;
	int64_t x391 = -140LL;
	static int16_t x392 = 2952;

    t85 = ((x389==(x390+x391))/x392);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x394 = 2628933387LLU;
	int32_t x395 = 1084;
	int8_t x396 = INT8_MIN;
	static volatile int32_t t86 = -471;

    t86 = ((x393==(x394+x395))/x396);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x397 = 3U;
	int16_t x399 = -1;
	static int64_t x400 = INT64_MAX;
	volatile int64_t t87 = 1070163552847LL;

    t87 = ((x397==(x398+x399))/x400);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x401 = 3U;
	int8_t x402 = INT8_MIN;
	uint8_t x403 = UINT8_MAX;
	static uint16_t x404 = 697U;
	static volatile int32_t t88 = 1372854;

    t88 = ((x401==(x402+x403))/x404);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x405 = -11943;
	volatile uint16_t x406 = 4367U;
	static int8_t x407 = -1;
	int32_t t89 = -473172;

    t89 = ((x405==(x406+x407))/x408);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x409 = INT16_MAX;
	int16_t x411 = -4;
	int32_t x412 = 4367029;
	int32_t t90 = -78241782;

    t90 = ((x409==(x410+x411))/x412);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x414 = INT64_MAX;
	volatile uint32_t x416 = 10215U;
	uint32_t t91 = 1060375U;

    t91 = ((x413==(x414+x415))/x416);

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x417 = INT64_MIN;
	int8_t x418 = 0;
	int64_t x419 = INT64_MIN;
	uint32_t x420 = 24148602U;
	static uint32_t t92 = 147428281U;

    t92 = ((x417==(x418+x419))/x420);

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x421 = 0;
	int16_t x422 = INT16_MIN;
	int64_t x423 = 446387794324959LL;
	int8_t x424 = INT8_MIN;

    t93 = ((x421==(x422+x423))/x424);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x425 = INT16_MAX;
	volatile int32_t x426 = 1046919;
	int32_t x427 = -14751029;
	int64_t x428 = INT64_MIN;
	static volatile int64_t t94 = -661316298541574LL;

    t94 = ((x425==(x426+x427))/x428);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x429 = -1;
	uint8_t x430 = 16U;
	static int32_t x431 = INT32_MIN;
	volatile int16_t x432 = INT16_MIN;

    t95 = ((x429==(x430+x431))/x432);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x433 = 1U;
	int16_t x434 = 6;
	uint8_t x436 = UINT8_MAX;
	volatile int32_t t96 = -4;

    t96 = ((x433==(x434+x435))/x436);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x437 = -321LL;
	int32_t x439 = -1;
	int16_t x440 = -1;

    t97 = ((x437==(x438+x439))/x440);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x441 = INT32_MAX;
	int16_t x442 = -1;
	int8_t x443 = INT8_MAX;
	int8_t x444 = INT8_MAX;
	volatile int32_t t98 = 3374;

    t98 = ((x441==(x442+x443))/x444);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x451 = 1U;
	uint16_t x452 = 12443U;
	volatile int32_t t99 = -103;

    t99 = ((x449==(x450+x451))/x452);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x453 = INT8_MAX;
	int16_t x455 = INT16_MIN;
	uint8_t x456 = 2U;
	int32_t t100 = -44757145;

    t100 = ((x453==(x454+x455))/x456);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x465 = INT16_MIN;
	uint16_t x466 = 17540U;
	int16_t x467 = INT16_MIN;
	int16_t x468 = -1;
	static volatile int32_t t101 = 1;

    t101 = ((x465==(x466+x467))/x468);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x473 = UINT8_MAX;
	volatile int8_t x474 = INT8_MIN;
	volatile int32_t t102 = 2;

    t102 = ((x473==(x474+x475))/x476);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x477 = 127589175361393LLU;
	static volatile int8_t x478 = INT8_MAX;
	uint32_t x479 = 10U;
	volatile int32_t t103 = 10810;

    t103 = ((x477==(x478+x479))/x480);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x481 = INT16_MAX;
	int8_t x482 = INT8_MAX;
	static int8_t x483 = INT8_MIN;
	static uint32_t x484 = 129226U;
	static uint32_t t104 = 748328830U;

    t104 = ((x481==(x482+x483))/x484);

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x485 = 1;
	int8_t x487 = -2;
	volatile int32_t t105 = 1694;

    t105 = ((x485==(x486+x487))/x488);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x489 = -1;
	uint32_t x491 = UINT32_MAX;
	static int64_t x492 = INT64_MAX;
	int64_t t106 = -260765516118LL;

    t106 = ((x489==(x490+x491))/x492);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x494 = 1266123LLU;
	int32_t t107 = 499163;

    t107 = ((x493==(x494+x495))/x496);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x497 = -28;
	int16_t x498 = INT16_MIN;
	uint8_t x500 = 3U;
	int32_t t108 = -24;

    t108 = ((x497==(x498+x499))/x500);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x501 = -6340;
	volatile int64_t t109 = -7891005LL;

    t109 = ((x501==(x502+x503))/x504);

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x505 = 1016877;
	int64_t x506 = -1LL;
	static volatile uint16_t x507 = 1U;
	uint64_t x508 = 135949847667063204LLU;

    t110 = ((x505==(x506+x507))/x508);

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x510 = INT32_MAX;
	static volatile uint64_t x511 = 8LLU;
	int32_t t111 = 27;

    t111 = ((x509==(x510+x511))/x512);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x513 = -1LL;
	int64_t x515 = 517217LL;
	int64_t t112 = -8074675319883LL;

    t112 = ((x513==(x514+x515))/x516);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x517 = 88U;
	volatile int64_t x518 = 1465983137LL;
	static int32_t x520 = -1;
	int32_t t113 = -3474;

    t113 = ((x517==(x518+x519))/x520);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint16_t x522 = UINT16_MAX;
	uint8_t x523 = 4U;
	uint32_t t114 = 70817068U;

    t114 = ((x521==(x522+x523))/x524);

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x525 = INT8_MAX;
	volatile int64_t x526 = -1LL;
	int16_t x528 = 21;

    t115 = ((x525==(x526+x527))/x528);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x530 = -534311436100102LL;
	volatile int64_t t116 = 125882242922241LL;

    t116 = ((x529==(x530+x531))/x532);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x533 = INT32_MIN;
	int64_t x534 = INT64_MIN;
	static int8_t x536 = -1;
	static volatile int32_t t117 = -262657357;

    t117 = ((x533==(x534+x535))/x536);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x537 = -1;
	int8_t x538 = INT8_MIN;
	uint16_t x539 = 21418U;
	volatile int8_t x540 = -1;
	volatile int32_t t118 = 11556;

    t118 = ((x537==(x538+x539))/x540);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x541 = -1;
	int32_t x542 = -1;
	uint16_t x543 = UINT16_MAX;
	static uint32_t x544 = 361U;
	static volatile uint32_t t119 = 3143U;

    t119 = ((x541==(x542+x543))/x544);

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x545 = -1;
	int32_t x546 = INT32_MIN;
	uint32_t x548 = 6U;
	volatile uint32_t t120 = 0U;

    t120 = ((x545==(x546+x547))/x548);

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile uint8_t x549 = 1U;
	uint8_t x550 = 107U;
	uint64_t x552 = UINT64_MAX;
	volatile uint64_t t121 = 2258141544032235339LLU;

    t121 = ((x549==(x550+x551))/x552);

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int64_t x553 = -1LL;
	static int16_t x554 = INT16_MIN;
	static int64_t x555 = -1LL;
	int16_t x556 = -1;

    t122 = ((x553==(x554+x555))/x556);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x559 = INT16_MAX;
	uint32_t x560 = UINT32_MAX;
	volatile uint32_t t123 = 500834U;

    t123 = ((x557==(x558+x559))/x560);

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x565 = INT32_MAX;
	uint32_t x566 = UINT32_MAX;
	int16_t x568 = INT16_MIN;
	volatile int32_t t124 = 131;

    t124 = ((x565==(x566+x567))/x568);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x569 = 363365;
	int32_t x572 = 6893;
	volatile int32_t t125 = 101735;

    t125 = ((x569==(x570+x571))/x572);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x573 = 237U;
	int64_t x574 = INT64_MAX;
	static uint64_t x575 = UINT64_MAX;
	uint64_t x576 = 725436478LLU;
	static volatile uint64_t t126 = 4441122123LLU;

    t126 = ((x573==(x574+x575))/x576);

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t t127 = 1;

    t127 = ((x577==(x578+x579))/x580);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int32_t x581 = 176;
	uint16_t x582 = 0U;
	static int16_t x583 = INT16_MIN;
	int64_t x584 = -1LL;
	int64_t t128 = 31355LL;

    t128 = ((x581==(x582+x583))/x584);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x585 = 452U;
	int8_t x586 = 0;
	int16_t x587 = INT16_MIN;
	int32_t t129 = -58;

    t129 = ((x585==(x586+x587))/x588);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x589 = INT8_MIN;
	int8_t x590 = 0;
	volatile uint16_t x591 = 21295U;
	uint64_t x592 = 82970179LLU;

    t130 = ((x589==(x590+x591))/x592);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint16_t x593 = 1U;
	int8_t x594 = -1;
	uint8_t x596 = UINT8_MAX;
	int32_t t131 = 25501581;

    t131 = ((x593==(x594+x595))/x596);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x597 = -286641328446LL;
	uint64_t x598 = 57015LLU;
	static uint64_t x599 = 2450916903LLU;
	int8_t x600 = -1;
	static volatile int32_t t132 = 58034;

    t132 = ((x597==(x598+x599))/x600);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int32_t x601 = INT32_MIN;
	int8_t x603 = INT8_MIN;
	int16_t x604 = 1913;
	int32_t t133 = 37061503;

    t133 = ((x601==(x602+x603))/x604);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x605 = INT32_MIN;
	uint8_t x606 = UINT8_MAX;
	uint8_t x607 = 30U;
	int16_t x608 = -1;
	int32_t t134 = 5304976;

    t134 = ((x605==(x606+x607))/x608);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x609 = UINT32_MAX;
	int16_t x611 = INT16_MIN;
	static uint32_t x612 = 13553U;
	uint32_t t135 = 1345669191U;

    t135 = ((x609==(x610+x611))/x612);

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x613 = 8946287005064472LLU;
	volatile int8_t x614 = INT8_MAX;
	volatile int16_t x615 = 6;
	volatile int8_t x616 = -1;
	volatile int32_t t136 = 3278095;

    t136 = ((x613==(x614+x615))/x616);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x617 = -1LL;
	int16_t x618 = -1563;
	static uint8_t x619 = 1U;
	int8_t x620 = INT8_MIN;
	int32_t t137 = 16823;

    t137 = ((x617==(x618+x619))/x620);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x621 = INT8_MIN;
	int64_t x622 = -1LL;
	volatile uint8_t x623 = UINT8_MAX;
	volatile int64_t x624 = -1LL;
	int64_t t138 = -9527521111LL;

    t138 = ((x621==(x622+x623))/x624);

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x625 = INT64_MIN;
	int32_t x626 = -30;
	static int32_t x627 = 111;
	uint64_t x628 = 470LLU;
	static volatile uint64_t t139 = 6465993440825LLU;

    t139 = ((x625==(x626+x627))/x628);

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x630 = INT64_MAX;
	int8_t x631 = -1;
	uint32_t x632 = 61847U;
	uint32_t t140 = 0U;

    t140 = ((x629==(x630+x631))/x632);

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x633 = 4U;
	uint8_t x634 = 46U;
	uint32_t x635 = 5178U;
	int8_t x636 = INT8_MIN;
	volatile int32_t t141 = -200;

    t141 = ((x633==(x634+x635))/x636);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x637 = 0U;
	uint32_t x638 = 14016915U;
	int64_t x639 = -7LL;
	volatile int64_t x640 = INT64_MIN;
	static volatile int64_t t142 = -150731577821358LL;

    t142 = ((x637==(x638+x639))/x640);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x641 = INT64_MIN;
	volatile int64_t x642 = INT64_MAX;
	int8_t x643 = INT8_MIN;
	int32_t x644 = INT32_MIN;
	volatile int32_t t143 = 8729;

    t143 = ((x641==(x642+x643))/x644);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x649 = -1;
	uint16_t x650 = 898U;
	uint64_t x651 = 15LLU;
	static int64_t x652 = INT64_MIN;
	volatile int64_t t144 = -6544LL;

    t144 = ((x649==(x650+x651))/x652);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x653 = 5U;
	static volatile int8_t x654 = -1;
	int16_t x656 = INT16_MIN;
	int32_t t145 = 79;

    t145 = ((x653==(x654+x655))/x656);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x658 = 1;
	uint8_t x659 = 2U;
	int16_t x660 = -480;
	int32_t t146 = 45363;

    t146 = ((x657==(x658+x659))/x660);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x665 = INT32_MIN;
	static volatile int32_t x666 = -1;
	static volatile int16_t x667 = INT16_MIN;
	int16_t x668 = 447;
	volatile int32_t t147 = 202;

    t147 = ((x665==(x666+x667))/x668);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x669 = INT8_MIN;
	uint64_t x670 = 0LLU;
	int32_t x671 = -1;
	int64_t x672 = INT64_MIN;

    t148 = ((x669==(x670+x671))/x672);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x673 = -166;
	static int8_t x675 = -1;
	static int16_t x676 = 2883;
	volatile int32_t t149 = -1364859;

    t149 = ((x673==(x674+x675))/x676);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x677 = 5U;
	uint64_t x678 = 362987426LLU;
	volatile uint16_t x679 = 57U;
	int8_t x680 = INT8_MIN;
	volatile int32_t t150 = -885579;

    t150 = ((x677==(x678+x679))/x680);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x682 = -2;
	uint32_t x684 = 38020683U;
	static uint32_t t151 = 3U;

    t151 = ((x681==(x682+x683))/x684);

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x685 = -1LL;
	static int64_t x686 = -13263608LL;
	static uint8_t x687 = 110U;
	volatile int64_t x688 = -42466870LL;
	volatile int64_t t152 = -7368490457371LL;

    t152 = ((x685==(x686+x687))/x688);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x689 = INT16_MAX;
	volatile int8_t x690 = INT8_MIN;
	uint8_t x691 = 24U;
	int8_t x692 = -1;
	int32_t t153 = -1;

    t153 = ((x689==(x690+x691))/x692);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x693 = 15909U;
	uint8_t x696 = 2U;
	int32_t t154 = 226;

    t154 = ((x693==(x694+x695))/x696);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x697 = -1;
	volatile uint64_t x698 = 14311575204LLU;
	static int32_t x699 = 185913;
	static uint64_t t155 = 14451741194LLU;

    t155 = ((x697==(x698+x699))/x700);

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x701 = 14U;
	uint64_t x702 = 132LLU;
	int8_t x703 = INT8_MIN;
	uint8_t x704 = 70U;
	volatile int32_t t156 = 104906;

    t156 = ((x701==(x702+x703))/x704);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x705 = -14;
	static int16_t x706 = -1;
	volatile uint32_t x707 = 0U;
	static int32_t x708 = 20489;

    t157 = ((x705==(x706+x707))/x708);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x709 = 22978;
	static int8_t x710 = INT8_MAX;
	volatile int16_t x711 = INT16_MIN;
	int8_t x712 = INT8_MAX;
	static volatile int32_t t158 = -7;

    t158 = ((x709==(x710+x711))/x712);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int8_t x714 = INT8_MIN;
	static int16_t x715 = INT16_MIN;
	int32_t t159 = 141884492;

    t159 = ((x713==(x714+x715))/x716);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x717 = 93U;
	int8_t x718 = 1;
	int32_t x719 = INT32_MIN;
	static int64_t x720 = -14LL;
	volatile int64_t t160 = 20607016476810502LL;

    t160 = ((x717==(x718+x719))/x720);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x721 = INT8_MIN;
	int16_t x722 = INT16_MIN;
	uint8_t x723 = 5U;
	volatile int32_t t161 = -36802;

    t161 = ((x721==(x722+x723))/x724);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint32_t x725 = 912582U;
	uint64_t t162 = 89LLU;

    t162 = ((x725==(x726+x727))/x728);

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x729 = -8506039;
	static int16_t x730 = INT16_MIN;
	volatile uint8_t x731 = 120U;
	uint16_t x732 = UINT16_MAX;

    t163 = ((x729==(x730+x731))/x732);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x737 = INT64_MIN;
	uint64_t x738 = 3855LLU;
	static int8_t x739 = INT8_MIN;
	uint16_t x740 = UINT16_MAX;
	volatile int32_t t164 = 4338;

    t164 = ((x737==(x738+x739))/x740);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x745 = INT32_MAX;
	int16_t x746 = -1;
	int16_t x747 = 62;
	volatile uint32_t x748 = 15U;
	uint32_t t165 = 6123U;

    t165 = ((x745==(x746+x747))/x748);

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x753 = 2019934774479265LLU;
	int8_t x754 = INT8_MIN;
	uint16_t x756 = 1132U;
	volatile int32_t t166 = -41054;

    t166 = ((x753==(x754+x755))/x756);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x757 = INT64_MIN;
	int64_t x759 = -1LL;
	int32_t t167 = -1;

    t167 = ((x757==(x758+x759))/x760);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile uint64_t x761 = 41500305204631301LLU;
	int16_t x762 = -27;
	int64_t x763 = INT64_MAX;
	static volatile int32_t t168 = -8558967;

    t168 = ((x761==(x762+x763))/x764);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x765 = -7;
	uint32_t x766 = UINT32_MAX;
	uint64_t x767 = 40090845227LLU;
	volatile int32_t t169 = -677436;

    t169 = ((x765==(x766+x767))/x768);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x769 = UINT32_MAX;
	int8_t x770 = INT8_MIN;
	volatile uint64_t x772 = 9218474993643163LLU;
	volatile uint64_t t170 = 8417045619LLU;

    t170 = ((x769==(x770+x771))/x772);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x773 = UINT8_MAX;
	int8_t x774 = INT8_MIN;
	int32_t x775 = INT32_MAX;
	int64_t x776 = INT64_MAX;
	static int64_t t171 = -422122418247369LL;

    t171 = ((x773==(x774+x775))/x776);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x777 = -45596235548LL;
	int16_t x778 = INT16_MIN;
	static uint8_t x780 = 29U;

    t172 = ((x777==(x778+x779))/x780);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x781 = 169226U;
	uint8_t x782 = 4U;
	volatile int32_t x783 = -1264;
	int32_t x784 = INT32_MAX;

    t173 = ((x781==(x782+x783))/x784);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x786 = INT8_MIN;
	int8_t x787 = INT8_MIN;
	int8_t x788 = -1;
	volatile int32_t t174 = -180658;

    t174 = ((x785==(x786+x787))/x788);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x789 = 29052U;
	int32_t x790 = 3110;
	static volatile int32_t x791 = 1065725059;
	uint64_t x792 = 48945147030LLU;
	volatile uint64_t t175 = 76757062792939LLU;

    t175 = ((x789==(x790+x791))/x792);

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x793 = INT8_MAX;
	int64_t x794 = INT64_MIN;
	int8_t x796 = 12;
	int32_t t176 = 32944712;

    t176 = ((x793==(x794+x795))/x796);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x798 = UINT64_MAX;
	uint32_t x800 = 680364U;

    t177 = ((x797==(x798+x799))/x800);

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x802 = 21847210963LLU;
	static int8_t x803 = 1;
	int8_t x804 = INT8_MIN;
	int32_t t178 = -1;

    t178 = ((x801==(x802+x803))/x804);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x805 = 1;
	int32_t x806 = INT32_MIN;
	int8_t x807 = 2;
	int64_t x808 = 95737415LL;
	int64_t t179 = -4610734LL;

    t179 = ((x805==(x806+x807))/x808);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x813 = INT8_MIN;
	int16_t x814 = INT16_MIN;
	volatile uint8_t x815 = 5U;
	uint16_t x816 = 22654U;
	static int32_t t180 = -1935733;

    t180 = ((x813==(x814+x815))/x816);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x817 = 1145836004713792LLU;
	int8_t x819 = 2;
	int8_t x820 = INT8_MIN;

    t181 = ((x817==(x818+x819))/x820);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x822 = 203711U;
	volatile int32_t x823 = -24;
	volatile int32_t t182 = -94300;

    t182 = ((x821==(x822+x823))/x824);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x825 = INT32_MIN;
	int8_t x826 = 1;
	int32_t x827 = INT32_MIN;
	static int32_t t183 = -24108592;

    t183 = ((x825==(x826+x827))/x828);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x829 = 2269U;
	uint64_t x831 = 4900169912426LLU;
	static int8_t x832 = INT8_MAX;
	volatile int32_t t184 = 3267534;

    t184 = ((x829==(x830+x831))/x832);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x833 = INT32_MIN;
	int16_t x834 = INT16_MIN;
	int32_t x836 = INT32_MIN;

    t185 = ((x833==(x834+x835))/x836);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x837 = INT32_MIN;
	int32_t x838 = INT32_MIN;
	static int8_t x839 = 3;
	static volatile int32_t t186 = 18826630;

    t186 = ((x837==(x838+x839))/x840);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x841 = 1U;
	volatile int16_t x842 = INT16_MIN;
	int64_t x844 = -1LL;

    t187 = ((x841==(x842+x843))/x844);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x845 = -1;
	volatile uint16_t x847 = 6340U;
	static volatile uint8_t x848 = 20U;
	int32_t t188 = 16076;

    t188 = ((x845==(x846+x847))/x848);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x849 = INT8_MIN;
	int16_t x850 = 3;
	static int8_t x851 = INT8_MAX;
	static int32_t t189 = -290665952;

    t189 = ((x849==(x850+x851))/x852);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x854 = 99U;
	int16_t x855 = -2009;
	int8_t x856 = -23;
	static int32_t t190 = -488596009;

    t190 = ((x853==(x854+x855))/x856);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x857 = 23;
	int32_t x859 = -359692;
	static uint16_t x860 = 324U;
	int32_t t191 = -9137705;

    t191 = ((x857==(x858+x859))/x860);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x861 = -26;
	static int8_t x862 = INT8_MAX;
	volatile uint64_t x863 = UINT64_MAX;
	static int64_t x864 = INT64_MIN;
	int64_t t192 = -139799660181115LL;

    t192 = ((x861==(x862+x863))/x864);

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x865 = 3714531062LLU;
	int16_t x866 = -1;
	volatile uint16_t x867 = 2832U;
	int64_t x868 = -122017592279268489LL;
	volatile int64_t t193 = -23708409228082849LL;

    t193 = ((x865==(x866+x867))/x868);

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x869 = 11U;
	int8_t x870 = -1;
	volatile int64_t x872 = INT64_MAX;
	volatile int64_t t194 = 85141784427LL;

    t194 = ((x869==(x870+x871))/x872);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x874 = 8658213;
	uint64_t x875 = 52LLU;
	int32_t x876 = -14723268;
	int32_t t195 = 1488248;

    t195 = ((x873==(x874+x875))/x876);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x879 = 109;
	int8_t x880 = INT8_MIN;

    t196 = ((x877==(x878+x879))/x880);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x882 = INT8_MAX;
	int8_t x883 = -62;
	uint32_t x884 = 1700133379U;
	uint32_t t197 = 119418U;

    t197 = ((x881==(x882+x883))/x884);

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int8_t x885 = 0;
	uint32_t x886 = 2237186U;
	static uint8_t x887 = UINT8_MAX;
	uint32_t x888 = UINT32_MAX;
	uint32_t t198 = 7U;

    t198 = ((x885==(x886+x887))/x888);

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x889 = 3U;
	volatile int64_t x890 = -1LL;
	int32_t x891 = -150640982;
	int8_t x892 = INT8_MIN;
	volatile int32_t t199 = -125;

    t199 = ((x889==(x890+x891))/x892);

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

