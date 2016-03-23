
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

int8_t x1 = -1;
volatile int16_t x5 = INT16_MAX;
static volatile int64_t x11 = 1805155640LL;
volatile uint8_t x12 = 1U;
static int32_t x32 = INT32_MAX;
volatile int32_t t7 = 9910;
volatile int8_t x36 = INT8_MIN;
int32_t t9 = -82;
static volatile uint8_t x45 = UINT8_MAX;
volatile uint64_t x51 = 2LLU;
static int8_t x53 = INT8_MIN;
int32_t x73 = -10894;
static uint16_t x91 = UINT16_MAX;
volatile int32_t t22 = 13655763;
static volatile int32_t t24 = 222562360;
uint64_t x105 = 5472864761966302144LLU;
int8_t x111 = INT8_MIN;
int64_t x113 = 210210LL;
static int32_t x122 = 8997791;
static uint32_t x123 = 152587U;
uint16_t x124 = 2385U;
int64_t x132 = -1LL;
int8_t x135 = INT8_MAX;
int16_t x136 = INT16_MIN;
int8_t x142 = -1;
static int32_t t35 = -928569;
volatile uint64_t x146 = UINT64_MAX;
static int16_t x155 = INT16_MIN;
int16_t x165 = INT16_MIN;
uint64_t x173 = 465472511LLU;
static int32_t t43 = 3;
int16_t x179 = INT16_MIN;
int16_t x180 = INT16_MIN;
static int64_t x198 = INT64_MAX;
volatile int32_t t51 = -3194;
int16_t x212 = INT16_MIN;
volatile int32_t t52 = -46;
static int64_t x214 = INT64_MIN;
int8_t x216 = INT8_MIN;
int32_t t53 = 37149228;
volatile int8_t x219 = 51;
int8_t x221 = INT8_MIN;
int16_t x232 = INT16_MAX;
int16_t x236 = INT16_MIN;
int16_t x237 = -25;
volatile int8_t x238 = INT8_MAX;
volatile int8_t x245 = INT8_MIN;
static uint8_t x247 = 4U;
int8_t x256 = INT8_MAX;
int32_t x257 = INT32_MAX;
int32_t t64 = 22;
int64_t x262 = INT64_MIN;
int8_t x267 = INT8_MIN;
uint8_t x268 = 69U;
volatile int32_t t67 = -47666461;
volatile int64_t x273 = INT64_MIN;
volatile int32_t x274 = -1;
volatile int32_t t68 = 256220205;
uint8_t x282 = 21U;
volatile uint32_t x283 = 0U;
int64_t x289 = INT64_MAX;
volatile uint16_t x291 = 0U;
volatile int32_t x292 = INT32_MIN;
int32_t t72 = -20;
int32_t t76 = -57;
int16_t x311 = INT16_MAX;
volatile int32_t t77 = -1;
uint16_t x314 = 42U;
int64_t x320 = INT64_MIN;
uint64_t x323 = 28199LLU;
uint64_t x327 = 105419843LLU;
int8_t x329 = INT8_MIN;
uint8_t x331 = 10U;
int32_t t82 = 24103966;
uint16_t x333 = 8U;
int8_t x335 = INT8_MIN;
volatile int64_t x337 = -1LL;
uint64_t x346 = UINT64_MAX;
int64_t x347 = INT64_MIN;
int32_t x353 = INT32_MIN;
static int64_t x358 = INT64_MIN;
int16_t x359 = -9;
volatile int32_t t89 = -900;
int32_t x361 = INT32_MIN;
int8_t x364 = INT8_MIN;
static volatile int32_t x368 = 3244;
int16_t x377 = -1;
static uint64_t x388 = 409LLU;
volatile uint8_t x392 = 88U;
int8_t x399 = INT8_MAX;
uint16_t x402 = 7505U;
volatile int32_t t100 = -5;
volatile int64_t x410 = INT64_MIN;
int16_t x413 = INT16_MIN;
uint64_t x417 = 2020970254200198LLU;
static volatile int32_t x426 = 29079843;
volatile int32_t t106 = 14;
uint16_t x432 = 6U;
uint32_t x437 = 193330933U;
int32_t t109 = 245;
int8_t x442 = INT8_MAX;
int32_t x444 = INT32_MIN;
volatile int32_t x448 = 27;
volatile int16_t x449 = -1;
volatile int8_t x456 = INT8_MAX;
int32_t t114 = -358348;
int8_t x464 = INT8_MAX;
int64_t x481 = 28125542451LL;
static int64_t x487 = 102LL;
uint64_t x488 = 1667642469LLU;
int32_t t122 = -829116086;
int64_t x493 = 7425297LL;
int16_t x503 = INT16_MIN;
int64_t x507 = INT64_MAX;
uint64_t x508 = UINT64_MAX;
int32_t t126 = 1;
int32_t t127 = -52303;
int64_t x521 = INT64_MIN;
static volatile uint32_t x522 = UINT32_MAX;
int64_t x528 = INT64_MAX;
uint32_t x532 = 44U;
volatile uint64_t x539 = 835508LLU;
int16_t x541 = INT16_MIN;
volatile int8_t x542 = -1;
int16_t x543 = -302;
static int32_t x551 = INT32_MAX;
int32_t t137 = 375198534;
volatile int32_t t139 = 138;
static uint32_t x563 = 2U;
uint32_t x568 = UINT32_MAX;
int32_t x569 = -65;
int8_t x575 = INT8_MIN;
int32_t x580 = -22;
volatile int32_t t144 = -176564932;
static int64_t x584 = INT64_MIN;
int8_t x586 = INT8_MAX;
int16_t x590 = 87;
uint16_t x593 = 6U;
uint64_t x600 = UINT64_MAX;
uint64_t x603 = 110LLU;
volatile int32_t t150 = 33391196;
int32_t x607 = -98279789;
uint64_t x620 = UINT64_MAX;
int64_t x622 = 57LL;
int16_t x623 = -1;
int16_t x626 = INT16_MIN;
uint8_t x634 = 0U;
int16_t x637 = -3;
uint64_t x642 = UINT64_MAX;
volatile int8_t x643 = -3;
volatile uint32_t x653 = 584U;
int32_t t166 = 98;
static int32_t t168 = 4202;
volatile int32_t t170 = -16230659;
static int16_t x685 = INT16_MAX;
int16_t x686 = -1;
static int32_t t171 = 0;
int64_t x694 = -36880213291886612LL;
uint64_t x696 = 11128692711377LLU;
int8_t x703 = INT8_MAX;
int16_t x705 = INT16_MIN;
volatile int32_t x706 = INT32_MAX;
int64_t x708 = INT64_MIN;
int64_t x710 = -1LL;
uint8_t x715 = 5U;
static uint16_t x719 = 292U;
volatile int64_t x721 = INT64_MAX;
volatile int8_t x722 = INT8_MAX;
volatile int32_t t183 = 12;
uint8_t x738 = 0U;
volatile int32_t x742 = -65459;
uint64_t x743 = 8091710777806LLU;
int16_t x747 = 4241;
volatile uint16_t x748 = UINT16_MAX;
volatile uint32_t x752 = 1927811600U;
int8_t x755 = INT8_MAX;
static int64_t x760 = -1LL;
uint32_t x763 = 22U;
volatile int32_t t190 = -1;
int64_t x766 = INT64_MIN;
uint32_t x772 = 2960425U;
int8_t x786 = 0;
uint64_t x792 = 953364707LLU;
int64_t x796 = INT64_MIN;
static volatile uint8_t x798 = 6U;


void f0(void) {
    	uint8_t x2 = 13U;
	int64_t x3 = INT64_MIN;
	static int32_t x4 = -1;
	volatile int32_t t0 = 4687;

    t0 = (((x1<=x2)|x3)>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x6 = 1U;
	uint16_t x7 = 2826U;
	int8_t x8 = 2;
	int32_t t1 = -6325900;

    t1 = (((x5<=x6)|x7)>x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	int32_t x10 = INT32_MAX;
	int32_t t2 = -116972785;

    t2 = (((x9<=x10)|x11)>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -1;
	int8_t x14 = INT8_MAX;
	uint32_t x15 = 1794U;
	uint8_t x16 = UINT8_MAX;
	volatile int32_t t3 = -2481226;

    t3 = (((x13<=x14)|x15)>x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x17 = -1;
	uint64_t x18 = UINT64_MAX;
	int8_t x19 = 0;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = -21;

    t4 = (((x17<=x18)|x19)>x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint32_t x21 = UINT32_MAX;
	int8_t x22 = -1;
	uint64_t x23 = 374781LLU;
	uint16_t x24 = 5095U;
	static volatile int32_t t5 = 9;

    t5 = (((x21<=x22)|x23)>x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x25 = 35LL;
	int64_t x26 = INT64_MAX;
	static uint64_t x27 = 25LLU;
	static int64_t x28 = INT64_MAX;
	static volatile int32_t t6 = 105;

    t6 = (((x25<=x26)|x27)>x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -1LL;
	int16_t x30 = -1;
	uint16_t x31 = UINT16_MAX;

    t7 = (((x29<=x30)|x31)>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x33 = UINT64_MAX;
	static uint32_t x34 = UINT32_MAX;
	static int8_t x35 = -1;
	static int32_t t8 = 220990330;

    t8 = (((x33<=x34)|x35)>x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x37 = 25;
	int16_t x38 = INT16_MAX;
	uint64_t x39 = 362663840059LLU;
	volatile uint8_t x40 = 0U;

    t9 = (((x37<=x38)|x39)>x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x41 = 48125944U;
	int64_t x42 = INT64_MAX;
	static int8_t x43 = INT8_MIN;
	static int8_t x44 = INT8_MIN;
	static int32_t t10 = 0;

    t10 = (((x41<=x42)|x43)>x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x46 = INT64_MAX;
	int16_t x47 = INT16_MIN;
	volatile int32_t x48 = -6;
	int32_t t11 = 153;

    t11 = (((x45<=x46)|x47)>x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = UINT8_MAX;
	int16_t x50 = INT16_MAX;
	static uint8_t x52 = 3U;
	static volatile int32_t t12 = 6;

    t12 = (((x49<=x50)|x51)>x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x54 = 0;
	uint8_t x55 = 1U;
	static volatile int8_t x56 = INT8_MIN;
	int32_t t13 = 21;

    t13 = (((x53<=x54)|x55)>x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 12459U;
	int32_t x58 = 457819;
	uint64_t x59 = 7944LLU;
	uint64_t x60 = 963327LLU;
	static volatile int32_t t14 = 0;

    t14 = (((x57<=x58)|x59)>x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MAX;
	uint64_t x62 = UINT64_MAX;
	volatile uint64_t x63 = 210449804735131LLU;
	volatile int8_t x64 = -1;
	int32_t t15 = -4688;

    t15 = (((x61<=x62)|x63)>x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x65 = -1885209;
	int64_t x66 = INT64_MIN;
	static int64_t x67 = 23184396496372LL;
	volatile uint32_t x68 = UINT32_MAX;
	volatile int32_t t16 = -48815;

    t16 = (((x65<=x66)|x67)>x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MAX;
	uint16_t x70 = UINT16_MAX;
	int8_t x71 = INT8_MIN;
	uint64_t x72 = 1049807044LLU;
	volatile int32_t t17 = -135067;

    t17 = (((x69<=x70)|x71)>x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x74 = UINT8_MAX;
	uint8_t x75 = 7U;
	volatile int32_t x76 = INT32_MIN;
	volatile int32_t t18 = -717;

    t18 = (((x73<=x74)|x75)>x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int64_t x77 = -1LL;
	int8_t x78 = INT8_MIN;
	int16_t x79 = -1;
	static int64_t x80 = -1LL;
	int32_t t19 = -3251979;

    t19 = (((x77<=x78)|x79)>x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = INT32_MIN;
	int32_t x82 = 11477859;
	volatile int8_t x83 = INT8_MAX;
	static int16_t x84 = -1;
	int32_t t20 = -3;

    t20 = (((x81<=x82)|x83)>x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x85 = INT16_MIN;
	uint8_t x86 = 63U;
	int8_t x87 = INT8_MAX;
	volatile uint64_t x88 = 815456310465926LLU;
	int32_t t21 = 220717745;

    t21 = (((x85<=x86)|x87)>x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = -1;
	volatile int64_t x90 = 696493LL;
	static uint16_t x92 = 669U;

    t22 = (((x89<=x90)|x91)>x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = INT16_MIN;
	volatile int16_t x94 = -1;
	int64_t x95 = INT64_MAX;
	int8_t x96 = INT8_MAX;
	volatile int32_t t23 = 2;

    t23 = (((x93<=x94)|x95)>x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x97 = 355963U;
	static int64_t x98 = 80882712191765LL;
	int16_t x99 = INT16_MIN;
	int8_t x100 = -1;

    t24 = (((x97<=x98)|x99)>x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x101 = INT32_MAX;
	int64_t x102 = INT64_MIN;
	uint8_t x103 = 2U;
	int16_t x104 = 36;
	volatile int32_t t25 = 7700;

    t25 = (((x101<=x102)|x103)>x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x106 = INT8_MAX;
	int16_t x107 = INT16_MIN;
	static uint32_t x108 = 1635236918U;
	volatile int32_t t26 = -12855139;

    t26 = (((x105<=x106)|x107)>x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = 28;
	static int8_t x110 = 13;
	int32_t x112 = -1;
	static volatile int32_t t27 = 220716;

    t27 = (((x109<=x110)|x111)>x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x114 = 594457440;
	int64_t x115 = -1LL;
	uint64_t x116 = 167LLU;
	static volatile int32_t t28 = -1;

    t28 = (((x113<=x114)|x115)>x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = INT16_MIN;
	static volatile int16_t x118 = INT16_MIN;
	static int64_t x119 = INT64_MIN;
	int32_t x120 = INT32_MAX;
	volatile int32_t t29 = 137416797;

    t29 = (((x117<=x118)|x119)>x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x121 = UINT16_MAX;
	volatile int32_t t30 = -3055;

    t30 = (((x121<=x122)|x123)>x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = -1LL;
	volatile uint32_t x126 = 898U;
	static uint8_t x127 = 109U;
	int16_t x128 = -1;
	int32_t t31 = 3353500;

    t31 = (((x125<=x126)|x127)>x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x129 = -1;
	int64_t x130 = 0LL;
	uint16_t x131 = 11628U;
	int32_t t32 = 92711274;

    t32 = (((x129<=x130)|x131)>x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x133 = 250886068016117LLU;
	int32_t x134 = -116155005;
	static volatile int32_t t33 = -39267198;

    t33 = (((x133<=x134)|x135)>x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x137 = UINT16_MAX;
	int16_t x138 = INT16_MIN;
	uint32_t x139 = 3208U;
	uint32_t x140 = UINT32_MAX;
	static int32_t t34 = -5405671;

    t34 = (((x137<=x138)|x139)>x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x141 = 238923LLU;
	int32_t x143 = -1;
	int16_t x144 = -396;

    t35 = (((x141<=x142)|x143)>x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = 11U;
	int64_t x147 = 494723064026LL;
	static uint8_t x148 = UINT8_MAX;
	int32_t t36 = 3962;

    t36 = (((x145<=x146)|x147)>x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = -10616428167800786LL;
	int16_t x150 = INT16_MIN;
	uint8_t x151 = 45U;
	int8_t x152 = -1;
	int32_t t37 = 214246;

    t37 = (((x149<=x150)|x151)>x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = -13663612;
	int16_t x154 = 0;
	int16_t x156 = INT16_MIN;
	volatile int32_t t38 = 88;

    t38 = (((x153<=x154)|x155)>x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = -1LL;
	static int64_t x158 = INT64_MAX;
	volatile uint32_t x159 = UINT32_MAX;
	uint8_t x160 = UINT8_MAX;
	int32_t t39 = -249613739;

    t39 = (((x157<=x158)|x159)>x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = INT16_MIN;
	static int8_t x162 = 0;
	int32_t x163 = INT32_MIN;
	static int64_t x164 = -1041179493LL;
	volatile int32_t t40 = -66788;

    t40 = (((x161<=x162)|x163)>x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x166 = INT16_MIN;
	volatile int8_t x167 = INT8_MAX;
	int16_t x168 = INT16_MIN;
	volatile int32_t t41 = -56;

    t41 = (((x165<=x166)|x167)>x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x169 = 133268083246LLU;
	volatile uint32_t x170 = 1195U;
	static uint32_t x171 = UINT32_MAX;
	static uint16_t x172 = UINT16_MAX;
	int32_t t42 = 102;

    t42 = (((x169<=x170)|x171)>x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x174 = INT8_MIN;
	uint16_t x175 = 241U;
	volatile int8_t x176 = -1;

    t43 = (((x173<=x174)|x175)>x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x177 = 23478271U;
	static volatile uint16_t x178 = 14505U;
	volatile int32_t t44 = -2617;

    t44 = (((x177<=x178)|x179)>x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = INT16_MIN;
	int64_t x182 = -1LL;
	uint8_t x183 = 10U;
	int16_t x184 = 8985;
	int32_t t45 = -24481;

    t45 = (((x181<=x182)|x183)>x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = INT16_MAX;
	int8_t x186 = -30;
	uint8_t x187 = UINT8_MAX;
	int8_t x188 = INT8_MIN;
	int32_t t46 = 496929;

    t46 = (((x185<=x186)|x187)>x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = 5U;
	int16_t x190 = -1;
	static uint8_t x191 = UINT8_MAX;
	int32_t x192 = -61277;
	volatile int32_t t47 = 18222;

    t47 = (((x189<=x190)|x191)>x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = 387697983814LL;
	int16_t x194 = 54;
	uint8_t x195 = UINT8_MAX;
	volatile uint32_t x196 = UINT32_MAX;
	volatile int32_t t48 = 950269329;

    t48 = (((x193<=x194)|x195)>x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = 19674;
	volatile int64_t x199 = 30LL;
	int16_t x200 = INT16_MIN;
	volatile int32_t t49 = -59130;

    t49 = (((x197<=x198)|x199)>x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = -36997LL;
	static int64_t x202 = INT64_MIN;
	int16_t x203 = INT16_MIN;
	int64_t x204 = INT64_MIN;
	int32_t t50 = -223715;

    t50 = (((x201<=x202)|x203)>x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x205 = UINT8_MAX;
	uint8_t x206 = 2U;
	static uint32_t x207 = 5708U;
	uint8_t x208 = UINT8_MAX;

    t51 = (((x205<=x206)|x207)>x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = -1LL;
	int16_t x210 = INT16_MIN;
	static int16_t x211 = INT16_MAX;

    t52 = (((x209<=x210)|x211)>x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = -144;
	int64_t x215 = INT64_MIN;

    t53 = (((x213<=x214)|x215)>x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = -1;
	int8_t x218 = -7;
	int16_t x220 = INT16_MIN;
	volatile int32_t t54 = 479755168;

    t54 = (((x217<=x218)|x219)>x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x222 = 11;
	uint16_t x223 = 27U;
	static int32_t x224 = INT32_MIN;
	int32_t t55 = -634208745;

    t55 = (((x221<=x222)|x223)>x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = INT8_MAX;
	volatile uint16_t x226 = 1U;
	volatile int32_t x227 = INT32_MIN;
	int64_t x228 = INT64_MIN;
	static int32_t t56 = 7;

    t56 = (((x225<=x226)|x227)>x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = -1;
	int64_t x230 = INT64_MAX;
	int32_t x231 = -1;
	static int32_t t57 = -71;

    t57 = (((x229<=x230)|x231)>x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x233 = UINT8_MAX;
	uint64_t x234 = UINT64_MAX;
	static int8_t x235 = INT8_MAX;
	volatile int32_t t58 = 0;

    t58 = (((x233<=x234)|x235)>x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x239 = INT32_MIN;
	int32_t x240 = INT32_MIN;
	static volatile int32_t t59 = 71059;

    t59 = (((x237<=x238)|x239)>x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = UINT64_MAX;
	int32_t x242 = -1;
	int8_t x243 = -1;
	volatile int16_t x244 = INT16_MIN;
	int32_t t60 = 194;

    t60 = (((x241<=x242)|x243)>x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x246 = INT64_MAX;
	uint32_t x248 = UINT32_MAX;
	volatile int32_t t61 = 2830;

    t61 = (((x245<=x246)|x247)>x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = -161297;
	uint16_t x250 = 3508U;
	static int8_t x251 = INT8_MIN;
	int16_t x252 = INT16_MIN;
	int32_t t62 = 194;

    t62 = (((x249<=x250)|x251)>x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x253 = INT32_MIN;
	uint64_t x254 = 8463325985LLU;
	int32_t x255 = INT32_MIN;
	int32_t t63 = -1;

    t63 = (((x253<=x254)|x255)>x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint16_t x258 = 1419U;
	int64_t x259 = INT64_MAX;
	int16_t x260 = INT16_MAX;

    t64 = (((x257<=x258)|x259)>x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x261 = 75U;
	int32_t x263 = INT32_MAX;
	int64_t x264 = INT64_MIN;
	volatile int32_t t65 = -4082;

    t65 = (((x261<=x262)|x263)>x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x265 = UINT16_MAX;
	int16_t x266 = INT16_MIN;
	static volatile int32_t t66 = -12;

    t66 = (((x265<=x266)|x267)>x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = INT16_MIN;
	static int8_t x270 = INT8_MIN;
	int64_t x271 = -1LL;
	int16_t x272 = INT16_MIN;

    t67 = (((x269<=x270)|x271)>x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x275 = -679883109;
	static int32_t x276 = INT32_MIN;

    t68 = (((x273<=x274)|x275)>x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x277 = INT16_MIN;
	volatile uint64_t x278 = UINT64_MAX;
	int16_t x279 = 726;
	int64_t x280 = -1LL;
	int32_t t69 = 16514534;

    t69 = (((x277<=x278)|x279)>x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x281 = 0;
	volatile int32_t x284 = -63;
	volatile int32_t t70 = 56498;

    t70 = (((x281<=x282)|x283)>x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x285 = 6U;
	static int32_t x286 = INT32_MIN;
	int8_t x287 = -5;
	int64_t x288 = 12506190884LL;
	volatile int32_t t71 = -4066805;

    t71 = (((x285<=x286)|x287)>x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x290 = INT32_MAX;

    t72 = (((x289<=x290)|x291)>x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x293 = 412U;
	volatile uint64_t x294 = 0LLU;
	int32_t x295 = -1;
	uint64_t x296 = 4069061999061321LLU;
	volatile int32_t t73 = 737598;

    t73 = (((x293<=x294)|x295)>x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x297 = INT32_MIN;
	int16_t x298 = -6291;
	static uint64_t x299 = 125181077454241LLU;
	int8_t x300 = INT8_MAX;
	volatile int32_t t74 = 3;

    t74 = (((x297<=x298)|x299)>x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = INT16_MAX;
	uint64_t x302 = 96670413LLU;
	int8_t x303 = INT8_MAX;
	int32_t x304 = -1;
	volatile int32_t t75 = -3996;

    t75 = (((x301<=x302)|x303)>x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = INT8_MIN;
	int64_t x306 = INT64_MAX;
	static volatile uint32_t x307 = 2U;
	int32_t x308 = -9;

    t76 = (((x305<=x306)|x307)>x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = INT64_MAX;
	uint64_t x310 = UINT64_MAX;
	int64_t x312 = INT64_MIN;

    t77 = (((x309<=x310)|x311)>x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x313 = INT32_MIN;
	int64_t x315 = INT64_MIN;
	int16_t x316 = INT16_MIN;
	int32_t t78 = 30;

    t78 = (((x313<=x314)|x315)>x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x317 = 360U;
	uint64_t x318 = 1020LLU;
	int16_t x319 = INT16_MIN;
	int32_t t79 = 31;

    t79 = (((x317<=x318)|x319)>x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x321 = INT8_MIN;
	volatile int8_t x322 = -39;
	int32_t x324 = INT32_MIN;
	volatile int32_t t80 = 14452;

    t80 = (((x321<=x322)|x323)>x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x325 = INT8_MAX;
	static int8_t x326 = INT8_MAX;
	static int16_t x328 = -1;
	int32_t t81 = -172862818;

    t81 = (((x325<=x326)|x327)>x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x330 = 956U;
	int64_t x332 = -638399LL;

    t82 = (((x329<=x330)|x331)>x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int32_t x334 = INT32_MIN;
	int16_t x336 = -12;
	volatile int32_t t83 = -484;

    t83 = (((x333<=x334)|x335)>x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x338 = INT64_MIN;
	static int16_t x339 = -125;
	static int16_t x340 = INT16_MIN;
	volatile int32_t t84 = 1;

    t84 = (((x337<=x338)|x339)>x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x341 = 123U;
	static uint64_t x342 = 1534489482947063LLU;
	static int8_t x343 = INT8_MAX;
	uint8_t x344 = 3U;
	volatile int32_t t85 = 249966167;

    t85 = (((x341<=x342)|x343)>x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x345 = -66781256;
	int64_t x348 = -2284LL;
	int32_t t86 = -2638;

    t86 = (((x345<=x346)|x347)>x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x349 = 48U;
	volatile int64_t x350 = INT64_MIN;
	uint64_t x351 = UINT64_MAX;
	int16_t x352 = -1;
	int32_t t87 = 26;

    t87 = (((x349<=x350)|x351)>x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x354 = -1;
	uint8_t x355 = 5U;
	uint16_t x356 = 20815U;
	int32_t t88 = 495475;

    t88 = (((x353<=x354)|x355)>x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x357 = UINT8_MAX;
	volatile uint32_t x360 = 2890432U;

    t89 = (((x357<=x358)|x359)>x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x362 = UINT64_MAX;
	volatile uint32_t x363 = UINT32_MAX;
	int32_t t90 = 78;

    t90 = (((x361<=x362)|x363)>x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x365 = 6426U;
	static int8_t x366 = INT8_MIN;
	static uint8_t x367 = UINT8_MAX;
	int32_t t91 = 254;

    t91 = (((x365<=x366)|x367)>x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = INT8_MAX;
	int32_t x370 = INT32_MAX;
	static int16_t x371 = INT16_MIN;
	static uint64_t x372 = UINT64_MAX;
	static int32_t t92 = -4525;

    t92 = (((x369<=x370)|x371)>x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x373 = 24083U;
	int64_t x374 = INT64_MIN;
	uint8_t x375 = 0U;
	int64_t x376 = INT64_MIN;
	volatile int32_t t93 = 0;

    t93 = (((x373<=x374)|x375)>x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x378 = INT16_MIN;
	uint64_t x379 = 54481437273LLU;
	uint8_t x380 = 0U;
	volatile int32_t t94 = -96878;

    t94 = (((x377<=x378)|x379)>x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = INT64_MIN;
	int8_t x382 = -1;
	uint16_t x383 = UINT16_MAX;
	int16_t x384 = INT16_MAX;
	volatile int32_t t95 = -30162;

    t95 = (((x381<=x382)|x383)>x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x385 = 2925797384528020LLU;
	int8_t x386 = -14;
	uint64_t x387 = 89708494352LLU;
	int32_t t96 = -68970184;

    t96 = (((x385<=x386)|x387)>x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x389 = UINT8_MAX;
	static volatile int8_t x390 = INT8_MIN;
	uint32_t x391 = 30414651U;
	int32_t t97 = -246429911;

    t97 = (((x389<=x390)|x391)>x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x393 = 8U;
	uint8_t x394 = 3U;
	int64_t x395 = INT64_MAX;
	uint8_t x396 = 2U;
	int32_t t98 = 178663734;

    t98 = (((x393<=x394)|x395)>x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x397 = -853737LL;
	int16_t x398 = INT16_MAX;
	static uint64_t x400 = 2062927025664191626LLU;
	int32_t t99 = 1686351;

    t99 = (((x397<=x398)|x399)>x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x401 = -1LL;
	int64_t x403 = INT64_MIN;
	int16_t x404 = INT16_MAX;

    t100 = (((x401<=x402)|x403)>x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x405 = 23251LLU;
	uint64_t x406 = UINT64_MAX;
	uint32_t x407 = UINT32_MAX;
	volatile int32_t x408 = 1;
	static volatile int32_t t101 = -2676628;

    t101 = (((x405<=x406)|x407)>x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = INT32_MAX;
	volatile int8_t x411 = 1;
	int16_t x412 = -6955;
	volatile int32_t t102 = 15;

    t102 = (((x409<=x410)|x411)>x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x414 = 1U;
	int64_t x415 = -1LL;
	volatile int8_t x416 = -51;
	volatile int32_t t103 = -964;

    t103 = (((x413<=x414)|x415)>x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x418 = -1;
	static int16_t x419 = 6524;
	volatile int32_t x420 = -38526598;
	int32_t t104 = 2;

    t104 = (((x417<=x418)|x419)>x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = -1;
	int8_t x422 = 4;
	static int16_t x423 = -39;
	static volatile int64_t x424 = -9591900LL;
	volatile int32_t t105 = 543399;

    t105 = (((x421<=x422)|x423)>x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x425 = UINT16_MAX;
	volatile uint16_t x427 = UINT16_MAX;
	volatile int32_t x428 = -13;

    t106 = (((x425<=x426)|x427)>x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint8_t x429 = 1U;
	volatile int64_t x430 = -925541326LL;
	volatile int64_t x431 = -2719905LL;
	int32_t t107 = 5;

    t107 = (((x429<=x430)|x431)>x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = -245870125LL;
	uint32_t x434 = 6196540U;
	int8_t x435 = INT8_MIN;
	uint32_t x436 = 1972812U;
	volatile int32_t t108 = 260695;

    t108 = (((x433<=x434)|x435)>x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x438 = UINT32_MAX;
	int16_t x439 = 11448;
	int16_t x440 = INT16_MIN;

    t109 = (((x437<=x438)|x439)>x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = -6;
	int8_t x443 = INT8_MAX;
	int32_t t110 = 2;

    t110 = (((x441<=x442)|x443)>x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x445 = INT16_MIN;
	volatile int32_t x446 = INT32_MIN;
	uint32_t x447 = 18U;
	int32_t t111 = -195;

    t111 = (((x445<=x446)|x447)>x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x450 = INT64_MIN;
	static volatile int8_t x451 = -1;
	int16_t x452 = INT16_MIN;
	int32_t t112 = -79954;

    t112 = (((x449<=x450)|x451)>x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x453 = INT64_MIN;
	uint16_t x454 = 7221U;
	int64_t x455 = -1LL;
	static int32_t t113 = 51;

    t113 = (((x453<=x454)|x455)>x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = -1;
	int32_t x458 = INT32_MAX;
	int32_t x459 = -21381155;
	int32_t x460 = -1;

    t114 = (((x457<=x458)|x459)>x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x461 = -1;
	uint32_t x462 = UINT32_MAX;
	uint64_t x463 = 485777848742525598LLU;
	int32_t t115 = 19758681;

    t115 = (((x461<=x462)|x463)>x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = -4821;
	uint32_t x466 = 59203052U;
	int64_t x467 = INT64_MIN;
	uint16_t x468 = 467U;
	int32_t t116 = 3480165;

    t116 = (((x465<=x466)|x467)>x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x469 = -1;
	volatile uint64_t x470 = 1582605528712034615LLU;
	static int64_t x471 = INT64_MIN;
	uint64_t x472 = 2319917729911LLU;
	volatile int32_t t117 = -2195012;

    t117 = (((x469<=x470)|x471)>x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = INT8_MIN;
	uint8_t x474 = 0U;
	uint64_t x475 = 11464520367208382LLU;
	static volatile int16_t x476 = INT16_MIN;
	static volatile int32_t t118 = -116277028;

    t118 = (((x473<=x474)|x475)>x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint8_t x477 = UINT8_MAX;
	volatile int16_t x478 = 0;
	static uint64_t x479 = UINT64_MAX;
	int8_t x480 = -1;
	volatile int32_t t119 = -244335811;

    t119 = (((x477<=x478)|x479)>x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x482 = INT8_MAX;
	int16_t x483 = INT16_MIN;
	int32_t x484 = -1;
	static volatile int32_t t120 = -4123;

    t120 = (((x481<=x482)|x483)>x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x485 = 7137U;
	uint64_t x486 = UINT64_MAX;
	volatile int32_t t121 = 124450;

    t121 = (((x485<=x486)|x487)>x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x489 = INT64_MIN;
	uint32_t x490 = 591388U;
	volatile int8_t x491 = -1;
	static uint64_t x492 = 150326LLU;

    t122 = (((x489<=x490)|x491)>x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x494 = -56;
	uint64_t x495 = 6316LLU;
	uint64_t x496 = 123397171LLU;
	int32_t t123 = 744589;

    t123 = (((x493<=x494)|x495)>x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = -1;
	int64_t x498 = INT64_MIN;
	int32_t x499 = INT32_MIN;
	static int16_t x500 = INT16_MIN;
	volatile int32_t t124 = -123;

    t124 = (((x497<=x498)|x499)>x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x501 = 284U;
	int32_t x502 = 13;
	uint8_t x504 = 2U;
	volatile int32_t t125 = -6290522;

    t125 = (((x501<=x502)|x503)>x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x505 = -1LL;
	int32_t x506 = INT32_MAX;

    t126 = (((x505<=x506)|x507)>x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = 0;
	static volatile int8_t x510 = -40;
	static uint64_t x511 = UINT64_MAX;
	volatile int8_t x512 = INT8_MAX;

    t127 = (((x509<=x510)|x511)>x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x513 = INT16_MIN;
	static int8_t x514 = INT8_MIN;
	int16_t x515 = INT16_MIN;
	int8_t x516 = -1;
	static int32_t t128 = -323751238;

    t128 = (((x513<=x514)|x515)>x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x517 = 93U;
	uint8_t x518 = 56U;
	static uint64_t x519 = UINT64_MAX;
	int8_t x520 = -1;
	volatile int32_t t129 = -20850;

    t129 = (((x517<=x518)|x519)>x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x523 = INT8_MIN;
	int64_t x524 = INT64_MAX;
	int32_t t130 = 127073093;

    t130 = (((x521<=x522)|x523)>x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = 876778442119LL;
	volatile int64_t x526 = INT64_MIN;
	volatile int32_t x527 = INT32_MAX;
	int32_t t131 = -11462;

    t131 = (((x525<=x526)|x527)>x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = INT32_MIN;
	int16_t x530 = INT16_MAX;
	volatile int8_t x531 = -1;
	int32_t t132 = 1;

    t132 = (((x529<=x530)|x531)>x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x533 = UINT64_MAX;
	int32_t x534 = -1;
	volatile uint16_t x535 = UINT16_MAX;
	int16_t x536 = INT16_MIN;
	int32_t t133 = -3100;

    t133 = (((x533<=x534)|x535)>x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x537 = -1716475981132725LL;
	int32_t x538 = INT32_MAX;
	uint16_t x540 = 759U;
	volatile int32_t t134 = 0;

    t134 = (((x537<=x538)|x539)>x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x544 = 51154LL;
	int32_t t135 = -6230;

    t135 = (((x541<=x542)|x543)>x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint8_t x545 = 2U;
	uint16_t x546 = 0U;
	static volatile int16_t x547 = INT16_MAX;
	int32_t x548 = INT32_MIN;
	int32_t t136 = 1;

    t136 = (((x545<=x546)|x547)>x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int16_t x549 = INT16_MIN;
	int16_t x550 = INT16_MIN;
	uint16_t x552 = 28846U;

    t137 = (((x549<=x550)|x551)>x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x553 = 4934351U;
	static int8_t x554 = INT8_MIN;
	uint32_t x555 = 106486U;
	uint16_t x556 = 1315U;
	int32_t t138 = -109685;

    t138 = (((x553<=x554)|x555)>x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x557 = 8;
	int64_t x558 = INT64_MIN;
	static volatile uint8_t x559 = UINT8_MAX;
	int32_t x560 = INT32_MAX;

    t139 = (((x557<=x558)|x559)>x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = INT16_MAX;
	volatile int16_t x562 = 6771;
	static uint64_t x564 = UINT64_MAX;
	int32_t t140 = -13292364;

    t140 = (((x561<=x562)|x563)>x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = INT32_MIN;
	uint32_t x566 = UINT32_MAX;
	int8_t x567 = INT8_MIN;
	int32_t t141 = -252834;

    t141 = (((x565<=x566)|x567)>x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x570 = UINT16_MAX;
	volatile uint32_t x571 = 20858U;
	static int16_t x572 = INT16_MIN;
	int32_t t142 = 42;

    t142 = (((x569<=x570)|x571)>x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x573 = UINT16_MAX;
	int32_t x574 = INT32_MIN;
	volatile int64_t x576 = -3527LL;
	int32_t t143 = -7322152;

    t143 = (((x573<=x574)|x575)>x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x577 = 26U;
	volatile int16_t x578 = -1;
	int64_t x579 = 3494LL;

    t144 = (((x577<=x578)|x579)>x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = INT16_MIN;
	volatile uint16_t x582 = 4U;
	int16_t x583 = -1;
	volatile int32_t t145 = 45;

    t145 = (((x581<=x582)|x583)>x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = -1;
	uint64_t x587 = 1811286642688344LLU;
	uint8_t x588 = 0U;
	volatile int32_t t146 = 429679;

    t146 = (((x585<=x586)|x587)>x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x589 = UINT32_MAX;
	uint32_t x591 = 679464410U;
	uint16_t x592 = 44U;
	int32_t t147 = -784845132;

    t147 = (((x589<=x590)|x591)>x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint8_t x594 = 3U;
	static int16_t x595 = INT16_MAX;
	static int32_t x596 = 2;
	volatile int32_t t148 = -15667088;

    t148 = (((x593<=x594)|x595)>x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x597 = 780U;
	static uint64_t x598 = 195075LLU;
	uint32_t x599 = UINT32_MAX;
	int32_t t149 = 130;

    t149 = (((x597<=x598)|x599)>x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x601 = 4U;
	volatile int64_t x602 = -389123245LL;
	uint32_t x604 = 96315U;

    t150 = (((x601<=x602)|x603)>x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x605 = 7;
	volatile int32_t x606 = -1;
	volatile uint16_t x608 = UINT16_MAX;
	int32_t t151 = 2;

    t151 = (((x605<=x606)|x607)>x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = INT64_MIN;
	volatile int64_t x610 = INT64_MAX;
	uint16_t x611 = 339U;
	static uint8_t x612 = 13U;
	static int32_t t152 = 644;

    t152 = (((x609<=x610)|x611)>x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = INT8_MIN;
	int16_t x614 = INT16_MAX;
	uint32_t x615 = 151317273U;
	static int64_t x616 = -1LL;
	int32_t t153 = 2104;

    t153 = (((x613<=x614)|x615)>x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x617 = UINT8_MAX;
	int16_t x618 = INT16_MIN;
	uint64_t x619 = UINT64_MAX;
	static int32_t t154 = -1790708;

    t154 = (((x617<=x618)|x619)>x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = INT64_MAX;
	int16_t x624 = INT16_MAX;
	volatile int32_t t155 = 190465;

    t155 = (((x621<=x622)|x623)>x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x625 = 857276505U;
	int16_t x627 = -2;
	uint64_t x628 = 57LLU;
	int32_t t156 = 88;

    t156 = (((x625<=x626)|x627)>x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = -663;
	int32_t x630 = 600;
	uint64_t x631 = UINT64_MAX;
	uint16_t x632 = 1692U;
	static volatile int32_t t157 = -19227;

    t157 = (((x629<=x630)|x631)>x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x633 = UINT64_MAX;
	static int32_t x635 = -1;
	uint16_t x636 = 78U;
	int32_t t158 = 1;

    t158 = (((x633<=x634)|x635)>x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x638 = INT32_MIN;
	volatile uint64_t x639 = 1763511044LLU;
	uint16_t x640 = UINT16_MAX;
	static int32_t t159 = -5622;

    t159 = (((x637<=x638)|x639)>x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x641 = 1220;
	static volatile int64_t x644 = INT64_MIN;
	volatile int32_t t160 = 2636;

    t160 = (((x641<=x642)|x643)>x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = -2LL;
	int32_t x646 = INT32_MIN;
	volatile uint32_t x647 = 644U;
	int64_t x648 = 25937LL;
	volatile int32_t t161 = 2;

    t161 = (((x645<=x646)|x647)>x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x649 = UINT8_MAX;
	volatile uint64_t x650 = UINT64_MAX;
	volatile int16_t x651 = INT16_MAX;
	static int32_t x652 = -1;
	int32_t t162 = -651086884;

    t162 = (((x649<=x650)|x651)>x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint8_t x654 = 64U;
	uint64_t x655 = 288016551671654611LLU;
	volatile int32_t x656 = -1;
	volatile int32_t t163 = 4;

    t163 = (((x653<=x654)|x655)>x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = INT64_MAX;
	int32_t x658 = INT32_MIN;
	int32_t x659 = INT32_MIN;
	int16_t x660 = INT16_MAX;
	int32_t t164 = 436;

    t164 = (((x657<=x658)|x659)>x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = -5;
	int8_t x662 = INT8_MIN;
	volatile int16_t x663 = INT16_MAX;
	uint32_t x664 = 170U;
	static int32_t t165 = -61560651;

    t165 = (((x661<=x662)|x663)>x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = INT16_MAX;
	int16_t x666 = INT16_MAX;
	uint8_t x667 = 22U;
	int32_t x668 = -1;

    t166 = (((x665<=x666)|x667)>x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = INT16_MAX;
	uint64_t x670 = 6950LLU;
	int8_t x671 = -1;
	int32_t x672 = -125;
	int32_t t167 = -5;

    t167 = (((x669<=x670)|x671)>x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = -45LL;
	uint32_t x674 = 454745983U;
	uint64_t x675 = UINT64_MAX;
	int64_t x676 = -1LL;

    t168 = (((x673<=x674)|x675)>x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = 110510847;
	uint64_t x678 = UINT64_MAX;
	uint32_t x679 = UINT32_MAX;
	uint16_t x680 = 1402U;
	static int32_t t169 = -3467;

    t169 = (((x677<=x678)|x679)>x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x681 = INT8_MIN;
	int32_t x682 = -1;
	int16_t x683 = INT16_MIN;
	int32_t x684 = -1;

    t170 = (((x681<=x682)|x683)>x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x687 = UINT16_MAX;
	int8_t x688 = INT8_MIN;

    t171 = (((x685<=x686)|x687)>x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x689 = UINT32_MAX;
	volatile int16_t x690 = -2216;
	int16_t x691 = -4;
	int16_t x692 = INT16_MIN;
	static int32_t t172 = 7;

    t172 = (((x689<=x690)|x691)>x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = INT16_MAX;
	volatile int8_t x695 = 10;
	static int32_t t173 = 369600064;

    t173 = (((x693<=x694)|x695)>x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x697 = INT64_MAX;
	int64_t x698 = INT64_MAX;
	static int16_t x699 = -5335;
	volatile int8_t x700 = INT8_MIN;
	int32_t t174 = -477079;

    t174 = (((x697<=x698)|x699)>x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x701 = 78U;
	int64_t x702 = -1LL;
	int32_t x704 = -8261464;
	static volatile int32_t t175 = 1666;

    t175 = (((x701<=x702)|x703)>x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x707 = 6273;
	int32_t t176 = -2358;

    t176 = (((x705<=x706)|x707)>x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x709 = INT32_MIN;
	uint32_t x711 = 3U;
	static volatile uint64_t x712 = 581814014830917120LLU;
	int32_t t177 = -21894;

    t177 = (((x709<=x710)|x711)>x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = 106268023410368437LL;
	int64_t x714 = INT64_MIN;
	uint8_t x716 = 4U;
	volatile int32_t t178 = -21;

    t178 = (((x713<=x714)|x715)>x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile uint64_t x717 = 872946490LLU;
	uint32_t x718 = UINT32_MAX;
	volatile int16_t x720 = -1;
	volatile int32_t t179 = 65;

    t179 = (((x717<=x718)|x719)>x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x723 = -1LL;
	int64_t x724 = -155793597730269366LL;
	int32_t t180 = 29165;

    t180 = (((x721<=x722)|x723)>x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x725 = 5LLU;
	int8_t x726 = 62;
	int32_t x727 = -1;
	volatile uint32_t x728 = 290U;
	int32_t t181 = 963194;

    t181 = (((x725<=x726)|x727)>x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x729 = 24U;
	int64_t x730 = INT64_MIN;
	int16_t x731 = 7;
	int64_t x732 = -1LL;
	volatile int32_t t182 = 925;

    t182 = (((x729<=x730)|x731)>x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = -107220;
	int8_t x734 = INT8_MAX;
	volatile int8_t x735 = INT8_MIN;
	uint16_t x736 = UINT16_MAX;

    t183 = (((x733<=x734)|x735)>x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = INT64_MAX;
	int32_t x739 = 10579;
	int16_t x740 = INT16_MIN;
	int32_t t184 = 1937175;

    t184 = (((x737<=x738)|x739)>x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = -2688;
	int64_t x744 = INT64_MAX;
	static volatile int32_t t185 = -8;

    t185 = (((x741<=x742)|x743)>x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = INT16_MAX;
	int16_t x746 = INT16_MIN;
	volatile int32_t t186 = 2825355;

    t186 = (((x745<=x746)|x747)>x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x749 = 2810010LL;
	uint8_t x750 = UINT8_MAX;
	int8_t x751 = INT8_MIN;
	static volatile int32_t t187 = 106;

    t187 = (((x749<=x750)|x751)>x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x753 = 30U;
	uint8_t x754 = 41U;
	volatile int16_t x756 = -1;
	volatile int32_t t188 = 0;

    t188 = (((x753<=x754)|x755)>x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint64_t x757 = UINT64_MAX;
	uint8_t x758 = 2U;
	int64_t x759 = -1LL;
	int32_t t189 = -2775823;

    t189 = (((x757<=x758)|x759)>x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = 14;
	int8_t x762 = INT8_MIN;
	int8_t x764 = -7;

    t190 = (((x761<=x762)|x763)>x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x765 = UINT16_MAX;
	int32_t x767 = INT32_MIN;
	int8_t x768 = INT8_MIN;
	volatile int32_t t191 = -128434;

    t191 = (((x765<=x766)|x767)>x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x769 = UINT8_MAX;
	static int16_t x770 = -1;
	static uint8_t x771 = 0U;
	int32_t t192 = -1117;

    t192 = (((x769<=x770)|x771)>x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile uint64_t x773 = 1478444LLU;
	volatile int16_t x774 = -55;
	int8_t x775 = INT8_MIN;
	int32_t x776 = INT32_MAX;
	volatile int32_t t193 = 22;

    t193 = (((x773<=x774)|x775)>x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x777 = 962U;
	volatile uint64_t x778 = UINT64_MAX;
	int8_t x779 = INT8_MIN;
	int8_t x780 = -1;
	int32_t t194 = 0;

    t194 = (((x777<=x778)|x779)>x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = 1219103382612LL;
	uint8_t x782 = 62U;
	int32_t x783 = INT32_MAX;
	int8_t x784 = -1;
	int32_t t195 = -22;

    t195 = (((x781<=x782)|x783)>x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = -2;
	int64_t x787 = INT64_MIN;
	volatile uint8_t x788 = UINT8_MAX;
	volatile int32_t t196 = -492855;

    t196 = (((x785<=x786)|x787)>x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x789 = 6U;
	volatile int8_t x790 = INT8_MAX;
	volatile int8_t x791 = INT8_MIN;
	volatile int32_t t197 = 1;

    t197 = (((x789<=x790)|x791)>x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = INT32_MAX;
	uint16_t x794 = 700U;
	int64_t x795 = INT64_MIN;
	volatile int32_t t198 = -13;

    t198 = (((x793<=x794)|x795)>x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x797 = -1;
	int8_t x799 = 14;
	uint32_t x800 = 18738687U;
	int32_t t199 = -15;

    t199 = (((x797<=x798)|x799)>x800);

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

