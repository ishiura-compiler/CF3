
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

volatile uint32_t x10 = UINT32_MAX;
volatile uint8_t x13 = 0U;
int16_t x16 = INT16_MIN;
static int32_t t3 = -71135509;
static int64_t x18 = 39LL;
int64_t x19 = INT64_MIN;
int32_t x20 = -1;
static int32_t t4 = 7;
volatile int32_t t5 = -56650;
static int32_t x25 = INT32_MAX;
int64_t x26 = -25LL;
int32_t x33 = 490857522;
static int32_t t8 = 940;
uint64_t x43 = 5241227673762LLU;
uint16_t x47 = 4140U;
static volatile int32_t t13 = 119373679;
volatile int32_t t14 = -111335242;
uint32_t x61 = UINT32_MAX;
int64_t x70 = -223243947LL;
volatile int32_t x96 = INT32_MIN;
static int32_t t23 = 74;
static int8_t x97 = INT8_MIN;
uint16_t x99 = UINT16_MAX;
volatile int32_t x100 = -1;
volatile int32_t t25 = -79190;
volatile int32_t t27 = -49;
static volatile uint32_t x117 = 1272722U;
uint16_t x120 = 7754U;
int16_t x124 = -1;
int32_t t30 = 4524;
int32_t t32 = 2218960;
int32_t x134 = INT32_MIN;
int16_t x135 = INT16_MIN;
static int64_t x140 = 171844698226LL;
static uint16_t x144 = 0U;
int16_t x147 = -409;
static uint64_t x150 = 6052828344495390LLU;
uint32_t x160 = 204U;
static int32_t x162 = INT32_MAX;
static volatile int32_t t40 = -1153;
int16_t x165 = -1;
uint8_t x169 = 118U;
volatile int16_t x170 = INT16_MIN;
int8_t x174 = INT8_MAX;
int8_t x184 = 1;
int8_t x185 = INT8_MAX;
volatile uint64_t x191 = UINT64_MAX;
static volatile int32_t x193 = 116866;
int32_t t48 = -208678;
static int8_t x197 = INT8_MIN;
volatile int8_t x199 = 11;
int16_t x201 = 1;
int32_t t50 = -981852;
volatile uint64_t x207 = 12LLU;
int32_t x210 = INT32_MIN;
int32_t t52 = -642004;
int64_t x214 = INT64_MIN;
int32_t x218 = INT32_MAX;
int32_t t54 = -6;
static int8_t x221 = INT8_MIN;
int32_t x224 = INT32_MAX;
int64_t x226 = INT64_MIN;
static uint64_t x229 = UINT64_MAX;
int64_t x235 = 820LL;
static volatile int32_t t60 = -2155241;
int8_t x246 = INT8_MAX;
uint64_t x247 = 491091525959612652LLU;
int32_t t61 = -97;
int32_t t63 = -2442749;
int16_t x257 = -20;
volatile int32_t t65 = -4589;
static int8_t x272 = INT8_MIN;
volatile int32_t t67 = -523235207;
static int64_t x274 = -172LL;
static int8_t x280 = INT8_MIN;
int8_t x281 = -1;
uint32_t x283 = UINT32_MAX;
int16_t x287 = INT16_MIN;
volatile int16_t x292 = INT16_MIN;
uint32_t x294 = 1U;
int16_t x295 = INT16_MIN;
static volatile int32_t t73 = 131615629;
volatile int32_t t74 = -361660;
uint8_t x306 = 12U;
volatile int32_t t78 = -13965;
int8_t x317 = INT8_MIN;
volatile uint32_t x319 = 50U;
volatile uint32_t x320 = 41097U;
static int32_t x321 = -201;
int32_t x325 = INT32_MIN;
volatile int32_t x326 = INT32_MIN;
int32_t x327 = -1;
int64_t x335 = 120503LL;
int64_t x341 = -197951298565263981LL;
int32_t x343 = 13557;
uint16_t x350 = 14U;
int32_t x352 = INT32_MAX;
volatile int32_t t88 = 3913;
volatile int16_t x361 = 414;
int8_t x362 = INT8_MAX;
int32_t x365 = INT32_MIN;
int16_t x370 = INT16_MAX;
static int8_t x373 = 1;
static int32_t t94 = -922;
static volatile int32_t x382 = INT32_MIN;
uint8_t x385 = UINT8_MAX;
static volatile uint16_t x392 = 2U;
volatile int8_t x393 = 20;
int64_t x394 = INT64_MIN;
int32_t x395 = -1;
volatile uint32_t x398 = UINT32_MAX;
int64_t x400 = 53395378943514684LL;
int32_t x403 = -1;
int32_t x405 = -1;
volatile int64_t x430 = INT64_MAX;
volatile int16_t x434 = INT16_MAX;
volatile int32_t x435 = -10976;
uint64_t x453 = 5262001LLU;
static int32_t x464 = 29382554;
static volatile int32_t t115 = -27113150;
static int32_t t119 = -32676899;
volatile int32_t t126 = -1200;
int32_t t127 = 10;
volatile int32_t t129 = 25876;
uint8_t x521 = 30U;
static int64_t x523 = -11235919380450694LL;
volatile int32_t t130 = 653;
uint32_t x528 = UINT32_MAX;
int16_t x529 = INT16_MIN;
int32_t x531 = INT32_MIN;
volatile int32_t t132 = 3311;
volatile int32_t t134 = -3130304;
volatile int32_t t135 = -928032097;
int32_t x546 = INT32_MIN;
int32_t t139 = 98505434;
static int16_t x564 = 89;
volatile int64_t x567 = -30240663915791979LL;
static volatile uint64_t x569 = UINT64_MAX;
uint16_t x572 = 1U;
volatile uint8_t x576 = UINT8_MAX;
int64_t x579 = INT64_MIN;
int32_t x581 = 1330;
uint16_t x588 = 48U;
volatile int32_t t146 = 55;
volatile uint8_t x591 = UINT8_MAX;
int8_t x594 = INT8_MIN;
static uint16_t x595 = UINT16_MAX;
static int8_t x597 = -1;
int32_t t149 = 1;
int64_t x610 = INT64_MIN;
static int32_t t152 = -1;
int8_t x613 = INT8_MAX;
static volatile uint32_t x614 = UINT32_MAX;
int8_t x619 = 1;
static uint8_t x621 = 1U;
int32_t x622 = 74;
static uint8_t x628 = 1U;
static volatile int16_t x636 = INT16_MIN;
static int16_t x638 = INT16_MIN;
static uint16_t x641 = 2U;
int8_t x656 = -32;
int32_t x657 = 2410;
int32_t x659 = INT32_MAX;
int16_t x662 = 4541;
volatile int32_t t165 = 8072;
int32_t t167 = -141186;
int64_t x688 = INT64_MIN;
int8_t x692 = INT8_MIN;
volatile int32_t x700 = 5545;
uint8_t x702 = UINT8_MAX;
int64_t x703 = 664LL;
int32_t x705 = -1;
int32_t t177 = -14625;
static uint64_t x713 = UINT64_MAX;
static int32_t t178 = 29878399;
int64_t x718 = INT64_MIN;
int8_t x722 = 18;
static volatile int32_t t180 = -93433775;
int16_t x728 = -2;
int32_t x729 = INT32_MIN;
volatile int8_t x732 = INT8_MIN;
static volatile int32_t t182 = -151;
volatile int32_t t185 = 3;
volatile int32_t t187 = 4;
static int8_t x753 = -1;
static int64_t x755 = INT64_MIN;
int8_t x757 = -1;
static int32_t t189 = 10;
int8_t x761 = INT8_MIN;
int32_t t190 = -1518;
uint8_t x769 = UINT8_MAX;
static uint8_t x770 = 1U;
uint16_t x776 = UINT16_MAX;
uint32_t x779 = UINT32_MAX;
static uint64_t x781 = 122LLU;
uint64_t x784 = 6923328753703416045LLU;
int8_t x790 = 0;
volatile uint16_t x791 = UINT16_MAX;
volatile int32_t t199 = -645712115;


void f0(void) {
    	uint8_t x1 = 29U;
	volatile int16_t x2 = INT16_MIN;
	int16_t x3 = 0;
	int8_t x4 = INT8_MAX;
	volatile int32_t t0 = 2;

    t0 = (((x1==x2)*x3)>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -1;
	uint8_t x6 = 3U;
	int8_t x7 = INT8_MIN;
	int16_t x8 = 3;
	volatile int32_t t1 = -62;

    t1 = (((x5==x6)*x7)>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = UINT64_MAX;
	uint32_t x11 = 2916185U;
	int64_t x12 = 26356012062521LL;
	volatile int32_t t2 = -14950;

    t2 = (((x9==x10)*x11)>x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x14 = 0;
	volatile int16_t x15 = -30;

    t3 = (((x13==x14)*x15)>x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 1243171LLU;

    t4 = (((x17==x18)*x19)>x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = -1;
	int32_t x22 = -1;
	int8_t x23 = 33;
	uint8_t x24 = 1U;

    t5 = (((x21==x22)*x23)>x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x27 = INT16_MAX;
	int8_t x28 = INT8_MIN;
	volatile int32_t t6 = -1;

    t6 = (((x25==x26)*x27)>x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = 0LLU;
	uint64_t x30 = UINT64_MAX;
	static int64_t x31 = INT64_MIN;
	int16_t x32 = -2380;
	volatile int32_t t7 = 315688553;

    t7 = (((x29==x30)*x31)>x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x34 = -1;
	int8_t x35 = INT8_MAX;
	volatile int32_t x36 = INT32_MAX;

    t8 = (((x33==x34)*x35)>x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x37 = -7LL;
	uint8_t x38 = UINT8_MAX;
	int32_t x39 = -4644364;
	int8_t x40 = 1;
	int32_t t9 = 11680053;

    t9 = (((x37==x38)*x39)>x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MIN;
	static int64_t x42 = INT64_MAX;
	static int16_t x44 = INT16_MIN;
	int32_t t10 = -8;

    t10 = (((x41==x42)*x43)>x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = 140U;
	static int16_t x46 = -190;
	static int64_t x48 = INT64_MIN;
	static int32_t t11 = 280257;

    t11 = (((x45==x46)*x47)>x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = UINT16_MAX;
	uint8_t x50 = 0U;
	static int32_t x51 = 2442672;
	int8_t x52 = -1;
	int32_t t12 = -23820;

    t12 = (((x49==x50)*x51)>x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = -11;
	int32_t x54 = -1;
	int8_t x55 = INT8_MAX;
	int8_t x56 = INT8_MIN;

    t13 = (((x53==x54)*x55)>x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int32_t x57 = INT32_MIN;
	int64_t x58 = INT64_MIN;
	volatile int16_t x59 = INT16_MAX;
	int16_t x60 = -333;

    t14 = (((x57==x58)*x59)>x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x62 = INT32_MAX;
	int8_t x63 = 4;
	int32_t x64 = INT32_MIN;
	volatile int32_t t15 = 0;

    t15 = (((x61==x62)*x63)>x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MIN;
	uint32_t x66 = 27106095U;
	int8_t x67 = -1;
	int64_t x68 = -66215832511714LL;
	volatile int32_t t16 = 2422254;

    t16 = (((x65==x66)*x67)>x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = 354336U;
	int8_t x71 = INT8_MIN;
	int32_t x72 = INT32_MIN;
	int32_t t17 = 10;

    t17 = (((x69==x70)*x71)>x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint64_t x73 = 3505LLU;
	uint32_t x74 = 534268U;
	uint32_t x75 = UINT32_MAX;
	volatile int16_t x76 = INT16_MIN;
	volatile int32_t t18 = 4489856;

    t18 = (((x73==x74)*x75)>x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x77 = UINT8_MAX;
	static uint64_t x78 = 10433218LLU;
	int16_t x79 = INT16_MAX;
	static int16_t x80 = 13;
	int32_t t19 = 50072393;

    t19 = (((x77==x78)*x79)>x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x81 = 216672LLU;
	uint64_t x82 = 5361317733743LLU;
	volatile int32_t x83 = INT32_MIN;
	uint32_t x84 = 0U;
	int32_t t20 = 17;

    t20 = (((x81==x82)*x83)>x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x85 = INT8_MIN;
	static int8_t x86 = INT8_MAX;
	volatile int64_t x87 = 0LL;
	int32_t x88 = INT32_MAX;
	int32_t t21 = 60585;

    t21 = (((x85==x86)*x87)>x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x89 = 1U;
	static volatile int32_t x90 = INT32_MIN;
	uint8_t x91 = UINT8_MAX;
	uint16_t x92 = 45U;
	int32_t t22 = -13;

    t22 = (((x89==x90)*x91)>x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x93 = INT16_MIN;
	volatile int64_t x94 = -1LL;
	uint64_t x95 = 61894615209LLU;

    t23 = (((x93==x94)*x95)>x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x98 = -1;
	volatile int32_t t24 = 8;

    t24 = (((x97==x98)*x99)>x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x101 = 13U;
	int16_t x102 = INT16_MIN;
	volatile uint64_t x103 = 6107471040739LLU;
	volatile int8_t x104 = -1;

    t25 = (((x101==x102)*x103)>x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MIN;
	volatile int64_t x106 = -3487136639LL;
	static int16_t x107 = INT16_MIN;
	volatile uint64_t x108 = 1635670248081243256LLU;
	volatile int32_t t26 = 4;

    t26 = (((x105==x106)*x107)>x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int32_t x109 = -109;
	static volatile uint8_t x110 = 15U;
	static int8_t x111 = INT8_MIN;
	int64_t x112 = 197252314748195LL;

    t27 = (((x109==x110)*x111)>x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = 31U;
	static int64_t x114 = 55180177LL;
	int16_t x115 = -1;
	uint64_t x116 = UINT64_MAX;
	static volatile int32_t t28 = -1475915;

    t28 = (((x113==x114)*x115)>x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x118 = INT32_MIN;
	uint8_t x119 = 1U;
	volatile int32_t t29 = -18435;

    t29 = (((x117==x118)*x119)>x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x121 = 16520862602130157LLU;
	int64_t x122 = INT64_MAX;
	int64_t x123 = INT64_MIN;

    t30 = (((x121==x122)*x123)>x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x125 = 2115597061834LL;
	uint8_t x126 = 25U;
	uint16_t x127 = 2793U;
	int16_t x128 = INT16_MIN;
	int32_t t31 = -1609632;

    t31 = (((x125==x126)*x127)>x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = -1;
	int64_t x130 = -1LL;
	int16_t x131 = INT16_MIN;
	int16_t x132 = INT16_MIN;

    t32 = (((x129==x130)*x131)>x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MAX;
	static int16_t x136 = INT16_MIN;
	static volatile int32_t t33 = -70;

    t33 = (((x133==x134)*x135)>x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x137 = INT8_MIN;
	static int64_t x138 = -1LL;
	uint16_t x139 = UINT16_MAX;
	volatile int32_t t34 = 271347;

    t34 = (((x137==x138)*x139)>x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = 0;
	int64_t x142 = INT64_MIN;
	int64_t x143 = -23220791434889LL;
	int32_t t35 = 1;

    t35 = (((x141==x142)*x143)>x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x145 = INT64_MAX;
	int32_t x146 = -1;
	int32_t x148 = INT32_MIN;
	int32_t t36 = -2696074;

    t36 = (((x145==x146)*x147)>x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x149 = 8308826641025360LLU;
	int32_t x151 = INT32_MAX;
	uint8_t x152 = 12U;
	volatile int32_t t37 = -1747461;

    t37 = (((x149==x150)*x151)>x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = -6;
	volatile int32_t x154 = INT32_MIN;
	uint8_t x155 = 4U;
	uint32_t x156 = UINT32_MAX;
	volatile int32_t t38 = -617093;

    t38 = (((x153==x154)*x155)>x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x157 = INT32_MIN;
	volatile uint32_t x158 = 100826033U;
	uint64_t x159 = 5LLU;
	volatile int32_t t39 = -188979;

    t39 = (((x157==x158)*x159)>x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x161 = INT8_MAX;
	uint16_t x163 = 5798U;
	int32_t x164 = INT32_MIN;

    t40 = (((x161==x162)*x163)>x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x166 = 2009455028U;
	int8_t x167 = -1;
	uint8_t x168 = 3U;
	static volatile int32_t t41 = -1;

    t41 = (((x165==x166)*x167)>x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint16_t x171 = 5036U;
	int64_t x172 = INT64_MIN;
	int32_t t42 = -29;

    t42 = (((x169==x170)*x171)>x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x173 = 11U;
	int16_t x175 = -9452;
	uint16_t x176 = 0U;
	int32_t t43 = 13140;

    t43 = (((x173==x174)*x175)>x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MIN;
	uint32_t x178 = 4242743U;
	int8_t x179 = -1;
	volatile uint32_t x180 = UINT32_MAX;
	volatile int32_t t44 = 1;

    t44 = (((x177==x178)*x179)>x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x181 = 2534906340112LLU;
	int32_t x182 = INT32_MAX;
	int32_t x183 = INT32_MIN;
	volatile int32_t t45 = -24805;

    t45 = (((x181==x182)*x183)>x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x186 = -1;
	int32_t x187 = -715200;
	uint16_t x188 = UINT16_MAX;
	volatile int32_t t46 = -65;

    t46 = (((x185==x186)*x187)>x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = INT32_MIN;
	uint8_t x190 = 49U;
	int32_t x192 = INT32_MIN;
	volatile int32_t t47 = -281565;

    t47 = (((x189==x190)*x191)>x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x194 = INT16_MIN;
	int16_t x195 = INT16_MAX;
	static uint32_t x196 = 126359873U;

    t48 = (((x193==x194)*x195)>x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x198 = INT32_MAX;
	int16_t x200 = INT16_MIN;
	static volatile int32_t t49 = 9425215;

    t49 = (((x197==x198)*x199)>x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x202 = INT16_MAX;
	int64_t x203 = -1LL;
	int8_t x204 = -1;

    t50 = (((x201==x202)*x203)>x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MIN;
	static volatile uint32_t x206 = 17014U;
	uint32_t x208 = UINT32_MAX;
	volatile int32_t t51 = -606;

    t51 = (((x205==x206)*x207)>x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x209 = 1U;
	volatile int64_t x211 = -1LL;
	static uint64_t x212 = UINT64_MAX;

    t52 = (((x209==x210)*x211)>x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = INT16_MIN;
	int64_t x215 = INT64_MAX;
	static uint8_t x216 = 0U;
	int32_t t53 = -343752;

    t53 = (((x213==x214)*x215)>x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = -1;
	volatile uint8_t x219 = UINT8_MAX;
	static volatile int32_t x220 = -1;

    t54 = (((x217==x218)*x219)>x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x222 = INT16_MIN;
	volatile int16_t x223 = INT16_MAX;
	volatile int32_t t55 = -5459;

    t55 = (((x221==x222)*x223)>x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x225 = INT8_MAX;
	int64_t x227 = INT64_MIN;
	uint8_t x228 = 25U;
	static volatile int32_t t56 = -3;

    t56 = (((x225==x226)*x227)>x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x230 = UINT8_MAX;
	int64_t x231 = 140678344LL;
	volatile int64_t x232 = -1LL;
	int32_t t57 = 63;

    t57 = (((x229==x230)*x231)>x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = 1217371650739458941LL;
	int32_t x234 = INT32_MIN;
	static int32_t x236 = INT32_MIN;
	int32_t t58 = 8;

    t58 = (((x233==x234)*x235)>x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = INT8_MIN;
	int8_t x238 = INT8_MIN;
	int16_t x239 = -1;
	static uint64_t x240 = UINT64_MAX;
	int32_t t59 = 91;

    t59 = (((x237==x238)*x239)>x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x241 = INT64_MIN;
	uint64_t x242 = UINT64_MAX;
	int8_t x243 = INT8_MIN;
	volatile uint8_t x244 = 14U;

    t60 = (((x241==x242)*x243)>x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = 46872695;
	volatile uint8_t x248 = 111U;

    t61 = (((x245==x246)*x247)>x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x249 = INT8_MIN;
	static int64_t x250 = INT64_MIN;
	volatile int8_t x251 = -1;
	int32_t x252 = -451619214;
	volatile int32_t t62 = -13;

    t62 = (((x249==x250)*x251)>x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x253 = UINT64_MAX;
	static int16_t x254 = -1;
	int8_t x255 = INT8_MAX;
	volatile int8_t x256 = INT8_MIN;

    t63 = (((x253==x254)*x255)>x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x258 = UINT8_MAX;
	static int64_t x259 = 39490647024LL;
	volatile int8_t x260 = -1;
	volatile int32_t t64 = -54;

    t64 = (((x257==x258)*x259)>x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = INT8_MIN;
	int16_t x262 = 2;
	int16_t x263 = INT16_MIN;
	int8_t x264 = INT8_MIN;

    t65 = (((x261==x262)*x263)>x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = INT32_MAX;
	uint8_t x266 = 30U;
	int32_t x267 = -3559;
	uint16_t x268 = UINT16_MAX;
	int32_t t66 = -46;

    t66 = (((x265==x266)*x267)>x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x269 = INT64_MAX;
	int32_t x270 = INT32_MAX;
	uint32_t x271 = 1217214614U;

    t67 = (((x269==x270)*x271)>x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint8_t x273 = 109U;
	static int32_t x275 = 26351154;
	int64_t x276 = INT64_MAX;
	int32_t t68 = 82804489;

    t68 = (((x273==x274)*x275)>x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x277 = INT8_MIN;
	uint16_t x278 = UINT16_MAX;
	int16_t x279 = 2;
	volatile int32_t t69 = 32;

    t69 = (((x277==x278)*x279)>x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x282 = UINT8_MAX;
	int64_t x284 = -1758023356996665413LL;
	int32_t t70 = 32664172;

    t70 = (((x281==x282)*x283)>x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x285 = 2U;
	int16_t x286 = INT16_MAX;
	volatile int8_t x288 = INT8_MIN;
	int32_t t71 = 2922;

    t71 = (((x285==x286)*x287)>x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x289 = INT16_MIN;
	static uint64_t x290 = 16981626LLU;
	uint32_t x291 = 6885561U;
	volatile int32_t t72 = 8167;

    t72 = (((x289==x290)*x291)>x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = -1LL;
	static int32_t x296 = -1;

    t73 = (((x293==x294)*x295)>x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = INT64_MIN;
	int64_t x298 = 497103467508LL;
	uint16_t x299 = 2U;
	static int64_t x300 = INT64_MIN;

    t74 = (((x297==x298)*x299)>x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x301 = 533U;
	uint8_t x302 = 2U;
	int16_t x303 = 70;
	static volatile uint16_t x304 = 7625U;
	int32_t t75 = 6910497;

    t75 = (((x301==x302)*x303)>x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MIN;
	volatile uint32_t x307 = 104U;
	static uint64_t x308 = 11824012LLU;
	static volatile int32_t t76 = -1;

    t76 = (((x305==x306)*x307)>x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x309 = UINT8_MAX;
	uint16_t x310 = 910U;
	volatile int32_t x311 = -107069342;
	int8_t x312 = INT8_MIN;
	int32_t t77 = 31031;

    t77 = (((x309==x310)*x311)>x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x313 = INT8_MIN;
	static int32_t x314 = -1;
	volatile uint64_t x315 = UINT64_MAX;
	int64_t x316 = INT64_MIN;

    t78 = (((x313==x314)*x315)>x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x318 = UINT16_MAX;
	volatile int32_t t79 = 12995;

    t79 = (((x317==x318)*x319)>x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x322 = INT64_MIN;
	volatile uint64_t x323 = 69390434381570735LLU;
	static int16_t x324 = 123;
	int32_t t80 = 2221;

    t80 = (((x321==x322)*x323)>x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x328 = 36;
	static volatile int32_t t81 = 19650;

    t81 = (((x325==x326)*x327)>x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x329 = -1;
	volatile uint8_t x330 = 1U;
	int32_t x331 = -3157438;
	int8_t x332 = INT8_MIN;
	static volatile int32_t t82 = -1;

    t82 = (((x329==x330)*x331)>x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x333 = INT64_MAX;
	int64_t x334 = -1LL;
	uint32_t x336 = 6U;
	volatile int32_t t83 = 2128919;

    t83 = (((x333==x334)*x335)>x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = INT64_MIN;
	int64_t x338 = INT64_MAX;
	int64_t x339 = -535LL;
	volatile int16_t x340 = -3492;
	volatile int32_t t84 = -2421;

    t84 = (((x337==x338)*x339)>x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x342 = INT64_MIN;
	uint32_t x344 = 74734871U;
	volatile int32_t t85 = -614;

    t85 = (((x341==x342)*x343)>x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x345 = INT32_MAX;
	uint64_t x346 = UINT64_MAX;
	int64_t x347 = INT64_MIN;
	int64_t x348 = INT64_MIN;
	volatile int32_t t86 = 27640397;

    t86 = (((x345==x346)*x347)>x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint32_t x349 = 1450695636U;
	uint8_t x351 = UINT8_MAX;
	int32_t t87 = 7;

    t87 = (((x349==x350)*x351)>x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x353 = -33159020090128690LL;
	static volatile uint16_t x354 = 0U;
	static uint64_t x355 = 1LLU;
	int8_t x356 = 17;

    t88 = (((x353==x354)*x355)>x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x357 = INT8_MIN;
	static int64_t x358 = INT64_MAX;
	static int64_t x359 = INT64_MAX;
	static int64_t x360 = -16LL;
	int32_t t89 = 1;

    t89 = (((x357==x358)*x359)>x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x363 = -32318014341745LL;
	uint32_t x364 = 81U;
	int32_t t90 = 1;

    t90 = (((x361==x362)*x363)>x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x366 = -116978;
	int16_t x367 = INT16_MIN;
	int32_t x368 = INT32_MAX;
	volatile int32_t t91 = -300;

    t91 = (((x365==x366)*x367)>x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = -29272LL;
	uint32_t x371 = 148007175U;
	int16_t x372 = INT16_MAX;
	int32_t t92 = -2781;

    t92 = (((x369==x370)*x371)>x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint8_t x374 = 3U;
	int32_t x375 = -1;
	volatile uint64_t x376 = 60316LLU;
	volatile int32_t t93 = -316519177;

    t93 = (((x373==x374)*x375)>x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = INT32_MIN;
	static uint64_t x378 = 120LLU;
	int16_t x379 = 1;
	static uint16_t x380 = UINT16_MAX;

    t94 = (((x377==x378)*x379)>x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x381 = 3370U;
	int8_t x383 = -1;
	int16_t x384 = INT16_MAX;
	volatile int32_t t95 = 9;

    t95 = (((x381==x382)*x383)>x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint16_t x386 = UINT16_MAX;
	int32_t x387 = INT32_MIN;
	volatile int32_t x388 = INT32_MIN;
	volatile int32_t t96 = -9;

    t96 = (((x385==x386)*x387)>x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x389 = 39727428134LLU;
	static int16_t x390 = -1;
	uint64_t x391 = 119228274224272612LLU;
	volatile int32_t t97 = 1;

    t97 = (((x389==x390)*x391)>x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x396 = INT8_MIN;
	volatile int32_t t98 = -28584870;

    t98 = (((x393==x394)*x395)>x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = INT64_MIN;
	int64_t x399 = INT64_MAX;
	volatile int32_t t99 = -52467764;

    t99 = (((x397==x398)*x399)>x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x401 = 10U;
	volatile int64_t x402 = -1LL;
	int64_t x404 = INT64_MAX;
	int32_t t100 = -6;

    t100 = (((x401==x402)*x403)>x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x406 = INT64_MIN;
	uint32_t x407 = 1U;
	uint64_t x408 = UINT64_MAX;
	volatile int32_t t101 = 0;

    t101 = (((x405==x406)*x407)>x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = INT32_MAX;
	static int32_t x410 = INT32_MIN;
	uint32_t x411 = 62534U;
	uint64_t x412 = UINT64_MAX;
	volatile int32_t t102 = -7713548;

    t102 = (((x409==x410)*x411)>x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x413 = 12762408LLU;
	uint64_t x414 = 996377732467001983LLU;
	uint8_t x415 = UINT8_MAX;
	int32_t x416 = -1;
	volatile int32_t t103 = 4852;

    t103 = (((x413==x414)*x415)>x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = -5;
	int8_t x418 = -1;
	static volatile uint16_t x419 = 77U;
	uint8_t x420 = UINT8_MAX;
	volatile int32_t t104 = 96963246;

    t104 = (((x417==x418)*x419)>x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x421 = INT64_MIN;
	uint16_t x422 = 10U;
	volatile uint64_t x423 = UINT64_MAX;
	volatile int16_t x424 = 0;
	volatile int32_t t105 = -15967;

    t105 = (((x421==x422)*x423)>x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x425 = UINT8_MAX;
	int8_t x426 = 1;
	uint8_t x427 = UINT8_MAX;
	int8_t x428 = INT8_MIN;
	static volatile int32_t t106 = 5;

    t106 = (((x425==x426)*x427)>x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x429 = UINT8_MAX;
	uint64_t x431 = 66902064716822932LLU;
	int8_t x432 = -12;
	int32_t t107 = 7576;

    t107 = (((x429==x430)*x431)>x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = -1;
	int8_t x436 = 0;
	int32_t t108 = -2826151;

    t108 = (((x433==x434)*x435)>x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint8_t x437 = 2U;
	int16_t x438 = -1614;
	volatile uint64_t x439 = 7031681LLU;
	int8_t x440 = INT8_MIN;
	volatile int32_t t109 = -26939;

    t109 = (((x437==x438)*x439)>x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint8_t x441 = 22U;
	uint16_t x442 = 690U;
	static uint32_t x443 = 2U;
	static int8_t x444 = INT8_MIN;
	volatile int32_t t110 = 0;

    t110 = (((x441==x442)*x443)>x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x445 = 13102U;
	int64_t x446 = INT64_MAX;
	int8_t x447 = 0;
	static int16_t x448 = 77;
	int32_t t111 = 7254;

    t111 = (((x445==x446)*x447)>x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x449 = INT64_MIN;
	int16_t x450 = -83;
	int16_t x451 = -107;
	static int64_t x452 = INT64_MAX;
	volatile int32_t t112 = 54661;

    t112 = (((x449==x450)*x451)>x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int8_t x454 = INT8_MIN;
	int64_t x455 = -1LL;
	uint64_t x456 = UINT64_MAX;
	volatile int32_t t113 = -13095;

    t113 = (((x453==x454)*x455)>x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x457 = 12U;
	volatile int64_t x458 = INT64_MIN;
	int64_t x459 = INT64_MIN;
	static int16_t x460 = -900;
	volatile int32_t t114 = -25;

    t114 = (((x457==x458)*x459)>x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = -1;
	int16_t x462 = INT16_MIN;
	int16_t x463 = INT16_MIN;

    t115 = (((x461==x462)*x463)>x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x465 = UINT8_MAX;
	uint8_t x466 = 1U;
	int16_t x467 = 0;
	static int16_t x468 = 2;
	int32_t t116 = 15;

    t116 = (((x465==x466)*x467)>x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = INT16_MIN;
	int8_t x470 = INT8_MAX;
	volatile uint16_t x471 = UINT16_MAX;
	uint8_t x472 = UINT8_MAX;
	int32_t t117 = 1;

    t117 = (((x469==x470)*x471)>x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = INT64_MIN;
	int16_t x474 = 60;
	uint32_t x475 = 44U;
	uint32_t x476 = UINT32_MAX;
	static volatile int32_t t118 = 352;

    t118 = (((x473==x474)*x475)>x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x477 = 87U;
	uint8_t x478 = 6U;
	volatile int32_t x479 = -1;
	int32_t x480 = -1;

    t119 = (((x477==x478)*x479)>x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint8_t x481 = 1U;
	uint8_t x482 = 101U;
	int32_t x483 = -1;
	static volatile uint64_t x484 = 2611513693221542LLU;
	int32_t t120 = 23347902;

    t120 = (((x481==x482)*x483)>x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = INT64_MIN;
	int8_t x486 = -1;
	static int8_t x487 = INT8_MIN;
	volatile uint64_t x488 = 810LLU;
	int32_t t121 = -77189;

    t121 = (((x485==x486)*x487)>x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x489 = UINT64_MAX;
	int8_t x490 = 3;
	volatile int64_t x491 = 892951328720451242LL;
	int8_t x492 = -4;
	static volatile int32_t t122 = 109566;

    t122 = (((x489==x490)*x491)>x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = -542285871285323LL;
	uint8_t x494 = 47U;
	int64_t x495 = INT64_MIN;
	int64_t x496 = INT64_MAX;
	volatile int32_t t123 = -2;

    t123 = (((x493==x494)*x495)>x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x497 = UINT32_MAX;
	volatile int64_t x498 = INT64_MIN;
	int64_t x499 = INT64_MIN;
	volatile int16_t x500 = -1;
	static volatile int32_t t124 = -187928;

    t124 = (((x497==x498)*x499)>x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = -1LL;
	uint16_t x502 = 84U;
	int64_t x503 = 109901301006LL;
	int64_t x504 = -98100195073267LL;
	volatile int32_t t125 = 19413157;

    t125 = (((x501==x502)*x503)>x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = INT32_MIN;
	uint16_t x506 = 323U;
	static int16_t x507 = INT16_MIN;
	static int32_t x508 = INT32_MAX;

    t126 = (((x505==x506)*x507)>x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = INT32_MIN;
	int8_t x510 = INT8_MIN;
	int32_t x511 = INT32_MIN;
	static uint8_t x512 = 27U;

    t127 = (((x509==x510)*x511)>x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = INT32_MIN;
	uint32_t x514 = 39U;
	static int32_t x515 = -61630374;
	uint64_t x516 = 18583696LLU;
	volatile int32_t t128 = 436868;

    t128 = (((x513==x514)*x515)>x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x517 = -6618131LL;
	int16_t x518 = INT16_MIN;
	uint8_t x519 = 3U;
	volatile int8_t x520 = 1;

    t129 = (((x517==x518)*x519)>x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x522 = 588498806738LLU;
	int8_t x524 = INT8_MIN;

    t130 = (((x521==x522)*x523)>x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x525 = UINT8_MAX;
	int16_t x526 = -154;
	static int8_t x527 = INT8_MIN;
	volatile int32_t t131 = -42;

    t131 = (((x525==x526)*x527)>x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x530 = 2U;
	int64_t x532 = 1028382279LL;

    t132 = (((x529==x530)*x531)>x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x533 = INT16_MIN;
	uint8_t x534 = UINT8_MAX;
	int16_t x535 = -129;
	int64_t x536 = INT64_MIN;
	int32_t t133 = -72094387;

    t133 = (((x533==x534)*x535)>x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x537 = INT8_MIN;
	int64_t x538 = INT64_MIN;
	int16_t x539 = INT16_MAX;
	volatile int32_t x540 = -1;

    t134 = (((x537==x538)*x539)>x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = INT8_MIN;
	int32_t x542 = INT32_MIN;
	int16_t x543 = -146;
	volatile int32_t x544 = INT32_MIN;

    t135 = (((x541==x542)*x543)>x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = INT32_MIN;
	int32_t x547 = INT32_MIN;
	int64_t x548 = -1LL;
	int32_t t136 = 153459124;

    t136 = (((x545==x546)*x547)>x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x549 = UINT16_MAX;
	uint8_t x550 = 6U;
	int16_t x551 = INT16_MAX;
	int64_t x552 = 2748LL;
	int32_t t137 = -12781;

    t137 = (((x549==x550)*x551)>x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = -1;
	static uint8_t x554 = 1U;
	int64_t x555 = INT64_MIN;
	uint64_t x556 = UINT64_MAX;
	static volatile int32_t t138 = 0;

    t138 = (((x553==x554)*x555)>x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int32_t x557 = INT32_MAX;
	int16_t x558 = INT16_MAX;
	int8_t x559 = -1;
	static int16_t x560 = 1;

    t139 = (((x557==x558)*x559)>x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x561 = UINT64_MAX;
	uint16_t x562 = 30907U;
	int64_t x563 = INT64_MIN;
	int32_t t140 = 64819;

    t140 = (((x561==x562)*x563)>x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = INT8_MIN;
	static int16_t x566 = 42;
	uint32_t x568 = 1220784747U;
	static int32_t t141 = 1584726;

    t141 = (((x565==x566)*x567)>x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x570 = INT16_MAX;
	int16_t x571 = -1;
	int32_t t142 = 1;

    t142 = (((x569==x570)*x571)>x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = INT64_MIN;
	int16_t x574 = -1;
	int16_t x575 = -1;
	volatile int32_t t143 = -885;

    t143 = (((x573==x574)*x575)>x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x577 = -1;
	int64_t x578 = -1LL;
	int8_t x580 = INT8_MIN;
	volatile int32_t t144 = -1;

    t144 = (((x577==x578)*x579)>x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x582 = INT32_MIN;
	int16_t x583 = INT16_MIN;
	uint32_t x584 = 3U;
	int32_t t145 = -959568267;

    t145 = (((x581==x582)*x583)>x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x585 = -129280157;
	int64_t x586 = -22701LL;
	uint8_t x587 = 2U;

    t146 = (((x585==x586)*x587)>x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x589 = 310885U;
	volatile uint16_t x590 = 1386U;
	volatile int32_t x592 = INT32_MAX;
	static int32_t t147 = -8604354;

    t147 = (((x589==x590)*x591)>x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x593 = INT16_MAX;
	static int16_t x596 = INT16_MIN;
	int32_t t148 = -7533877;

    t148 = (((x593==x594)*x595)>x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x598 = 8242;
	int32_t x599 = -1;
	int16_t x600 = -3;

    t149 = (((x597==x598)*x599)>x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x601 = 1;
	int16_t x602 = INT16_MAX;
	static int32_t x603 = INT32_MIN;
	uint64_t x604 = UINT64_MAX;
	int32_t t150 = 1198727;

    t150 = (((x601==x602)*x603)>x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = 138959635804312481LL;
	int64_t x606 = INT64_MIN;
	static int32_t x607 = INT32_MIN;
	static volatile uint16_t x608 = 5U;
	volatile int32_t t151 = 34893;

    t151 = (((x605==x606)*x607)>x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x609 = UINT64_MAX;
	uint16_t x611 = UINT16_MAX;
	static volatile int16_t x612 = INT16_MIN;

    t152 = (((x609==x610)*x611)>x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x615 = -1;
	int64_t x616 = INT64_MIN;
	int32_t t153 = 963359918;

    t153 = (((x613==x614)*x615)>x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = -1;
	int16_t x618 = INT16_MIN;
	int8_t x620 = INT8_MIN;
	int32_t t154 = -4996;

    t154 = (((x617==x618)*x619)>x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x623 = 30;
	int8_t x624 = INT8_MIN;
	volatile int32_t t155 = 359452;

    t155 = (((x621==x622)*x623)>x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x625 = INT32_MIN;
	int16_t x626 = INT16_MIN;
	int8_t x627 = INT8_MAX;
	volatile int32_t t156 = -41;

    t156 = (((x625==x626)*x627)>x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = INT16_MAX;
	uint16_t x630 = 726U;
	int64_t x631 = 5926671443604LL;
	volatile int16_t x632 = -1;
	volatile int32_t t157 = 292539564;

    t157 = (((x629==x630)*x631)>x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x633 = UINT16_MAX;
	volatile uint16_t x634 = 13355U;
	uint16_t x635 = 751U;
	static volatile int32_t t158 = 27031808;

    t158 = (((x633==x634)*x635)>x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x637 = 31293189U;
	int8_t x639 = -1;
	volatile uint32_t x640 = 710000U;
	volatile int32_t t159 = -717;

    t159 = (((x637==x638)*x639)>x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x642 = INT32_MAX;
	int16_t x643 = 266;
	uint8_t x644 = 0U;
	static volatile int32_t t160 = 14;

    t160 = (((x641==x642)*x643)>x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x645 = 342701U;
	static int8_t x646 = -1;
	uint64_t x647 = 16480679LLU;
	uint32_t x648 = 10846250U;
	volatile int32_t t161 = 454787813;

    t161 = (((x645==x646)*x647)>x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = INT16_MAX;
	int16_t x650 = INT16_MIN;
	volatile int64_t x651 = -1LL;
	static int64_t x652 = -4026715169LL;
	int32_t t162 = 197;

    t162 = (((x649==x650)*x651)>x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x653 = 1U;
	static uint32_t x654 = 4U;
	int8_t x655 = INT8_MIN;
	int32_t t163 = 2365420;

    t163 = (((x653==x654)*x655)>x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x658 = -1;
	static int32_t x660 = -1;
	int32_t t164 = 4213094;

    t164 = (((x657==x658)*x659)>x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int16_t x661 = -67;
	uint32_t x663 = 55U;
	int64_t x664 = INT64_MIN;

    t165 = (((x661==x662)*x663)>x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x665 = 166949358813LLU;
	int8_t x666 = INT8_MIN;
	int32_t x667 = INT32_MAX;
	uint16_t x668 = 3785U;
	volatile int32_t t166 = 3;

    t166 = (((x665==x666)*x667)>x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = -6;
	int8_t x670 = INT8_MIN;
	int32_t x671 = INT32_MIN;
	static int8_t x672 = -1;

    t167 = (((x669==x670)*x671)>x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = INT32_MIN;
	int32_t x674 = INT32_MIN;
	volatile int8_t x675 = 0;
	static volatile int16_t x676 = INT16_MIN;
	int32_t t168 = 94681949;

    t168 = (((x673==x674)*x675)>x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = -812831423894673915LL;
	int64_t x678 = -1LL;
	int16_t x679 = -505;
	volatile int8_t x680 = 22;
	volatile int32_t t169 = 410;

    t169 = (((x677==x678)*x679)>x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x681 = INT32_MIN;
	uint16_t x682 = 2079U;
	static int16_t x683 = INT16_MIN;
	static int8_t x684 = INT8_MIN;
	volatile int32_t t170 = 99635;

    t170 = (((x681==x682)*x683)>x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = INT8_MIN;
	volatile int64_t x686 = INT64_MIN;
	int16_t x687 = 15;
	static int32_t t171 = 17465683;

    t171 = (((x685==x686)*x687)>x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = INT32_MIN;
	uint16_t x690 = 23730U;
	int16_t x691 = INT16_MIN;
	volatile int32_t t172 = -190;

    t172 = (((x689==x690)*x691)>x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x693 = INT8_MAX;
	volatile uint64_t x694 = 1066382774LLU;
	static volatile uint32_t x695 = 62361U;
	uint32_t x696 = 14U;
	int32_t t173 = 62;

    t173 = (((x693==x694)*x695)>x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile uint8_t x697 = UINT8_MAX;
	int8_t x698 = INT8_MAX;
	static uint8_t x699 = UINT8_MAX;
	volatile int32_t t174 = 8;

    t174 = (((x697==x698)*x699)>x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x701 = 1908124762601032717LLU;
	int8_t x704 = INT8_MIN;
	static int32_t t175 = -11477298;

    t175 = (((x701==x702)*x703)>x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x706 = UINT32_MAX;
	int64_t x707 = INT64_MAX;
	int32_t x708 = INT32_MIN;
	volatile int32_t t176 = 6191081;

    t176 = (((x705==x706)*x707)>x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x709 = 6241350U;
	uint32_t x710 = UINT32_MAX;
	int64_t x711 = INT64_MIN;
	int32_t x712 = INT32_MIN;

    t177 = (((x709==x710)*x711)>x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x714 = -1LL;
	int16_t x715 = INT16_MIN;
	int32_t x716 = INT32_MIN;

    t178 = (((x713==x714)*x715)>x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x717 = 11610415630046LLU;
	static int16_t x719 = -454;
	static volatile uint16_t x720 = UINT16_MAX;
	volatile int32_t t179 = 3969413;

    t179 = (((x717==x718)*x719)>x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = -1;
	int16_t x723 = -6552;
	uint8_t x724 = 7U;

    t180 = (((x721==x722)*x723)>x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = -1;
	uint64_t x726 = 110155695457557LLU;
	uint32_t x727 = UINT32_MAX;
	int32_t t181 = 2292;

    t181 = (((x725==x726)*x727)>x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x730 = INT8_MIN;
	uint64_t x731 = UINT64_MAX;

    t182 = (((x729==x730)*x731)>x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = 443837891;
	volatile uint16_t x734 = 44U;
	int16_t x735 = -1;
	uint32_t x736 = UINT32_MAX;
	int32_t t183 = 453514;

    t183 = (((x733==x734)*x735)>x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = INT64_MIN;
	volatile uint16_t x738 = 54U;
	int16_t x739 = INT16_MAX;
	uint8_t x740 = 82U;
	static int32_t t184 = -507818624;

    t184 = (((x737==x738)*x739)>x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = INT32_MIN;
	uint32_t x742 = 114U;
	volatile int32_t x743 = INT32_MIN;
	static uint8_t x744 = 0U;

    t185 = (((x741==x742)*x743)>x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x745 = INT32_MIN;
	static uint64_t x746 = 434073382568LLU;
	static volatile int16_t x747 = 1;
	int16_t x748 = INT16_MIN;
	static int32_t t186 = 11;

    t186 = (((x745==x746)*x747)>x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x749 = -1;
	static int64_t x750 = INT64_MIN;
	uint32_t x751 = 642U;
	uint8_t x752 = 65U;

    t187 = (((x749==x750)*x751)>x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x754 = UINT32_MAX;
	volatile int32_t x756 = -1;
	volatile int32_t t188 = -29902496;

    t188 = (((x753==x754)*x755)>x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x758 = -48;
	int32_t x759 = INT32_MAX;
	uint8_t x760 = 14U;

    t189 = (((x757==x758)*x759)>x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x762 = INT64_MAX;
	uint16_t x763 = 3565U;
	int32_t x764 = INT32_MIN;

    t190 = (((x761==x762)*x763)>x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x765 = -1;
	static volatile uint8_t x766 = 26U;
	int8_t x767 = 1;
	static int32_t x768 = INT32_MAX;
	volatile int32_t t191 = 104442649;

    t191 = (((x765==x766)*x767)>x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x771 = INT32_MIN;
	int32_t x772 = INT32_MIN;
	volatile int32_t t192 = -383;

    t192 = (((x769==x770)*x771)>x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = -109;
	int8_t x774 = -1;
	volatile uint8_t x775 = 6U;
	int32_t t193 = -2640;

    t193 = (((x773==x774)*x775)>x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = INT32_MIN;
	int32_t x778 = 2;
	uint16_t x780 = UINT16_MAX;
	volatile int32_t t194 = 855;

    t194 = (((x777==x778)*x779)>x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x782 = 24336122730377LL;
	static uint32_t x783 = 1517113U;
	volatile int32_t t195 = 517;

    t195 = (((x781==x782)*x783)>x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x785 = UINT32_MAX;
	static int8_t x786 = INT8_MIN;
	volatile int32_t x787 = 669642571;
	int32_t x788 = -1;
	int32_t t196 = -1;

    t196 = (((x785==x786)*x787)>x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint32_t x789 = UINT32_MAX;
	uint8_t x792 = 2U;
	int32_t t197 = -7913455;

    t197 = (((x789==x790)*x791)>x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x793 = 128092340U;
	int64_t x794 = -512191LL;
	int32_t x795 = 920406;
	static uint32_t x796 = UINT32_MAX;
	int32_t t198 = 8285;

    t198 = (((x793==x794)*x795)>x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = INT64_MIN;
	uint8_t x798 = 4U;
	uint64_t x799 = 22957989LLU;
	static int16_t x800 = INT16_MIN;

    t199 = (((x797==x798)*x799)>x800);

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

