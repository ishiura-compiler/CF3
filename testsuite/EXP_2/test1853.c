
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

volatile int8_t x1 = INT8_MAX;
volatile int8_t x7 = INT8_MIN;
int32_t x8 = INT32_MIN;
static int8_t x11 = INT8_MIN;
int64_t x16 = -1LL;
uint8_t x19 = 3U;
uint64_t x21 = 18308LLU;
static int8_t x26 = INT8_MIN;
uint8_t x37 = 4U;
volatile int8_t x42 = -1;
int8_t x43 = INT8_MIN;
int16_t x48 = -16;
uint8_t x50 = 1U;
volatile int32_t t12 = 11;
uint16_t x58 = 2U;
static volatile uint32_t x59 = UINT32_MAX;
int16_t x61 = INT16_MAX;
int16_t x62 = INT16_MIN;
int16_t x63 = INT16_MIN;
volatile uint32_t t15 = 5U;
uint32_t x69 = 63854480U;
uint64_t x74 = 282096197716868051LLU;
volatile int64_t x75 = INT64_MAX;
volatile uint32_t x76 = 281437U;
static uint64_t x80 = 396921LLU;
uint64_t x81 = 933LLU;
volatile int32_t x83 = INT32_MAX;
int32_t t20 = 2766;
volatile int16_t x90 = 11;
int16_t x91 = -227;
static volatile int64_t x93 = -1LL;
volatile uint8_t x94 = 25U;
uint64_t t23 = 341493824041996752LLU;
static uint32_t x97 = 19932879U;
int32_t x103 = 78104;
volatile uint64_t t25 = 3LLU;
int32_t t27 = 1692105;
int16_t x120 = INT16_MIN;
static uint16_t x127 = UINT16_MAX;
volatile int32_t t31 = 4387;
static volatile uint8_t x133 = UINT8_MAX;
static int32_t x140 = INT32_MIN;
volatile int32_t x143 = -1;
int64_t x148 = INT64_MAX;
uint32_t x151 = 4U;
uint8_t x154 = 0U;
volatile int64_t x164 = 23757889529387746LL;
uint8_t x168 = UINT8_MAX;
int32_t t41 = 2258;
uint64_t x169 = 27LLU;
volatile int64_t x180 = INT64_MIN;
uint32_t x183 = 26389944U;
volatile uint32_t t47 = 1486338U;
volatile int8_t x196 = INT8_MIN;
int8_t x203 = INT8_MIN;
int64_t x204 = -2250300536LL;
int64_t t50 = -18LL;
uint8_t x206 = 31U;
static int32_t x208 = -28395;
static int32_t t51 = 687;
int8_t x214 = 0;
uint8_t x216 = 27U;
int32_t t53 = 1168472;
uint64_t x224 = 55168000482278803LLU;
volatile int32_t t57 = -227438581;
static uint64_t x238 = UINT64_MAX;
uint8_t x246 = 49U;
static int32_t x249 = -1;
int64_t x250 = 144472632261667208LL;
int32_t t62 = 26543681;
volatile int32_t t64 = -8;
int16_t x269 = INT16_MAX;
volatile int32_t x279 = INT32_MIN;
uint32_t x280 = 94364U;
volatile int16_t x283 = INT16_MIN;
int8_t x285 = -3;
int8_t x289 = 6;
volatile int8_t x293 = INT8_MIN;
int32_t x307 = INT32_MIN;
volatile int8_t x310 = -1;
volatile int64_t x315 = -1LL;
uint16_t x318 = 252U;
static volatile int32_t t79 = 0;
int64_t t82 = 252931644LL;
static volatile uint64_t t84 = 0LLU;
volatile uint8_t x345 = UINT8_MAX;
int32_t x346 = -1;
int64_t x349 = -1LL;
uint32_t x355 = 71382526U;
int64_t x360 = INT64_MIN;
static int32_t x367 = -469674;
int8_t x368 = -1;
int32_t t90 = -1469120;
uint16_t x369 = 3490U;
volatile int32_t t91 = 248246;
uint32_t x384 = 274U;
int32_t x387 = -5;
int32_t x388 = INT32_MAX;
volatile int64_t t96 = 2647260477919537117LL;
uint16_t x406 = 1U;
int64_t x408 = INT64_MIN;
uint64_t x411 = 4699494565257372LLU;
int8_t x413 = -8;
volatile int8_t x420 = INT8_MAX;
uint16_t x446 = 0U;
static uint16_t x451 = 6493U;
volatile int32_t t112 = -10;
uint64_t x461 = UINT64_MAX;
int32_t x463 = INT32_MIN;
int16_t x464 = INT16_MIN;
volatile int32_t t114 = 2328;
volatile int16_t x474 = INT16_MIN;
volatile uint64_t x479 = 65324899889890623LLU;
int32_t x482 = 22439;
int64_t x487 = -4LL;
static volatile uint64_t t121 = 9780007105LLU;
int64_t x494 = INT64_MAX;
int16_t x497 = INT16_MAX;
int64_t x498 = INT64_MIN;
int16_t x499 = INT16_MIN;
int32_t x500 = -1;
int16_t x504 = 2763;
int8_t x506 = 14;
volatile int32_t t125 = -18075065;
uint16_t x509 = 2U;
int32_t x510 = -1;
static uint16_t x511 = 543U;
int64_t x519 = -1LL;
static volatile int16_t x520 = INT16_MIN;
uint8_t x521 = 12U;
uint64_t x537 = 24859919077LLU;
int32_t x542 = -1;
int32_t x550 = INT32_MIN;
volatile int32_t t135 = 245236;
int32_t x561 = -3;
int64_t x568 = INT64_MIN;
volatile int64_t t139 = 138670LL;
uint32_t x569 = 22970285U;
static int64_t x572 = 484777178714LL;
int16_t x577 = INT16_MAX;
uint64_t x582 = 20388533LLU;
volatile int32_t x587 = INT32_MIN;
uint64_t x588 = UINT64_MAX;
volatile uint64_t t144 = 164208522055022465LLU;
int8_t x589 = -1;
volatile uint8_t x590 = UINT8_MAX;
int64_t t145 = -282945584016378LL;
int32_t x594 = -1;
int16_t x598 = INT16_MIN;
static int64_t x600 = -1LL;
volatile int64_t t147 = -785466582618311LL;
static volatile uint16_t x609 = 4199U;
int16_t x613 = -1;
uint16_t x624 = 11U;
int32_t t153 = 13;
uint32_t t156 = 70298493U;
volatile int32_t t157 = -353;
volatile uint16_t x641 = 1710U;
uint8_t x642 = 6U;
int16_t x650 = INT16_MIN;
int64_t x654 = INT64_MIN;
uint8_t x657 = 2U;
int8_t x658 = 32;
int64_t x659 = INT64_MIN;
uint32_t x662 = UINT32_MAX;
int32_t x670 = INT32_MAX;
uint16_t x675 = UINT16_MAX;
static int32_t x676 = 59;
uint16_t x678 = 15159U;
static int64_t x682 = INT64_MIN;
volatile int64_t t168 = 2356407776996LL;
int16_t x686 = INT16_MIN;
int16_t x688 = INT16_MIN;
uint64_t x699 = 4090049595LLU;
static int8_t x703 = 5;
int16_t x705 = -1;
int8_t x708 = INT8_MIN;
static int16_t x715 = 168;
uint64_t x716 = 2773731LLU;
int32_t x717 = -1;
volatile int64_t x720 = -1LL;
uint8_t x723 = 5U;
int8_t x724 = INT8_MAX;
int32_t t178 = -118;
int64_t x726 = INT64_MIN;
int64_t x734 = -10939759LL;
uint32_t x738 = 1004799950U;
uint32_t x744 = 398U;
volatile int32_t t184 = -14;
volatile int64_t x757 = INT64_MIN;
static int64_t x759 = INT64_MAX;
static uint64_t x764 = UINT64_MAX;
uint32_t x768 = 9124U;
volatile uint32_t t189 = 414163491U;
uint8_t x779 = 0U;
int16_t x782 = INT16_MIN;
static int64_t x785 = INT64_MIN;
volatile int32_t t194 = -3078221;
uint64_t x798 = 713496642854460LLU;
int16_t x804 = -1;
int8_t x806 = 2;
uint8_t x807 = 19U;
int16_t x808 = -1;


void f0(void) {
    	volatile uint16_t x2 = 9U;
	int64_t x3 = INT64_MIN;
	static uint32_t x4 = 1U;
	uint32_t t0 = 13867515U;

    t0 = ((x1!=(x2<=x3))%x4);

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = 25438270LL;
	volatile int32_t x6 = 0;
	volatile int32_t t1 = 1;

    t1 = ((x5!=(x6<=x7))%x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 82133615266LLU;
	uint64_t x10 = UINT64_MAX;
	int16_t x12 = -1;
	int32_t t2 = -30;

    t2 = ((x9!=(x10<=x11))%x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = 116540989268053LL;
	int64_t x14 = INT64_MIN;
	uint16_t x15 = 8512U;
	int64_t t3 = -2996104000175LL;

    t3 = ((x13!=(x14<=x15))%x16);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 1U;
	static uint64_t x18 = UINT64_MAX;
	static int16_t x20 = 3;
	volatile int32_t t4 = 204993603;

    t4 = ((x17!=(x18<=x19))%x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x22 = INT8_MIN;
	static int16_t x23 = -6;
	uint64_t x24 = 4832253994495LLU;
	uint64_t t5 = 682655040LLU;

    t5 = ((x21!=(x22<=x23))%x24);

    if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x25 = -3;
	int32_t x27 = INT32_MIN;
	uint8_t x28 = 76U;
	int32_t t6 = 38;

    t6 = ((x25!=(x26<=x27))%x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 1975U;
	static uint16_t x30 = 22473U;
	uint64_t x31 = UINT64_MAX;
	int8_t x32 = INT8_MIN;
	int32_t t7 = 0;

    t7 = ((x29!=(x30<=x31))%x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x33 = -2;
	volatile int16_t x34 = -1;
	int16_t x35 = 3295;
	volatile uint16_t x36 = UINT16_MAX;
	static int32_t t8 = 14576;

    t8 = ((x33!=(x34<=x35))%x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x38 = -2068223439523360LL;
	int8_t x39 = -6;
	uint16_t x40 = 1529U;
	volatile int32_t t9 = -7564;

    t9 = ((x37!=(x38<=x39))%x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x41 = UINT32_MAX;
	static uint16_t x44 = 4U;
	volatile int32_t t10 = -2079;

    t10 = ((x41!=(x42<=x43))%x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MIN;
	static int8_t x46 = -1;
	static volatile uint8_t x47 = UINT8_MAX;
	int32_t t11 = -220;

    t11 = ((x45!=(x46<=x47))%x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MIN;
	volatile uint32_t x51 = 5954573U;
	int32_t x52 = INT32_MIN;

    t12 = ((x49!=(x50<=x51))%x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = -40;
	int8_t x54 = INT8_MIN;
	uint16_t x55 = 8787U;
	int64_t x56 = 111399692768208444LL;
	volatile int64_t t13 = -90LL;

    t13 = ((x53!=(x54<=x55))%x56);

    if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = -86200;
	uint64_t x60 = 8081084315146LLU;
	volatile uint64_t t14 = 4078453599LLU;

    t14 = ((x57!=(x58<=x59))%x60);

    if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x64 = 8U;

    t15 = ((x61!=(x62<=x63))%x64);

    if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = INT64_MIN;
	uint64_t x66 = 857881LLU;
	uint64_t x67 = 505LLU;
	static volatile int8_t x68 = INT8_MAX;
	volatile int32_t t16 = 1066239;

    t16 = ((x65!=(x66<=x67))%x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint8_t x70 = 0U;
	uint8_t x71 = 56U;
	static uint8_t x72 = 19U;
	volatile int32_t t17 = 3;

    t17 = ((x69!=(x70<=x71))%x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = 103167U;
	volatile uint32_t t18 = 60706167U;

    t18 = ((x73!=(x74<=x75))%x76);

    if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x77 = 1U;
	uint8_t x78 = UINT8_MAX;
	static int8_t x79 = INT8_MIN;
	static volatile uint64_t t19 = 196726524LLU;

    t19 = ((x77!=(x78<=x79))%x80);

    if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int32_t x82 = 443179714;
	static int32_t x84 = -1;

    t20 = ((x81!=(x82<=x83))%x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x85 = 10LLU;
	int16_t x86 = INT16_MIN;
	int32_t x87 = INT32_MIN;
	int64_t x88 = INT64_MIN;
	static int64_t t21 = -6156030380284LL;

    t21 = ((x85!=(x86<=x87))%x88);

    if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = INT32_MIN;
	int8_t x92 = INT8_MIN;
	volatile int32_t t22 = -10;

    t22 = ((x89!=(x90<=x91))%x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x95 = 27946U;
	static uint64_t x96 = 675282612LLU;

    t23 = ((x93!=(x94<=x95))%x96);

    if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x98 = -7833;
	volatile uint64_t x99 = 177122520246889LLU;
	static volatile int64_t x100 = -17648364278861LL;
	volatile int64_t t24 = 4LL;

    t24 = ((x97!=(x98<=x99))%x100);

    if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x101 = 74U;
	uint16_t x102 = UINT16_MAX;
	uint64_t x104 = UINT64_MAX;

    t25 = ((x101!=(x102<=x103))%x104);

    if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = 227604109888257644LL;
	static int32_t x106 = INT32_MAX;
	static int8_t x107 = INT8_MAX;
	uint32_t x108 = UINT32_MAX;
	volatile uint32_t t26 = 17734570U;

    t26 = ((x105!=(x106<=x107))%x108);

    if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MIN;
	uint64_t x110 = UINT64_MAX;
	uint8_t x111 = UINT8_MAX;
	uint8_t x112 = UINT8_MAX;

    t27 = ((x109!=(x110<=x111))%x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = -702LL;
	uint16_t x114 = UINT16_MAX;
	int8_t x115 = -1;
	volatile uint64_t x116 = UINT64_MAX;
	volatile uint64_t t28 = 62267749060598562LLU;

    t28 = ((x113!=(x114<=x115))%x116);

    if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x117 = INT32_MIN;
	static uint16_t x118 = 714U;
	uint16_t x119 = UINT16_MAX;
	int32_t t29 = 645611;

    t29 = ((x117!=(x118<=x119))%x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MAX;
	static int8_t x122 = INT8_MAX;
	static volatile uint8_t x123 = UINT8_MAX;
	int8_t x124 = 1;
	static int32_t t30 = 63;

    t30 = ((x121!=(x122<=x123))%x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = INT32_MAX;
	uint16_t x126 = 7779U;
	int32_t x128 = -1;

    t31 = ((x125!=(x126<=x127))%x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = INT32_MIN;
	int8_t x130 = INT8_MIN;
	uint64_t x131 = 13288283295620035LLU;
	uint32_t x132 = 624U;
	uint32_t t32 = 13U;

    t32 = ((x129!=(x130<=x131))%x132);

    if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x134 = 1412U;
	int32_t x135 = INT32_MAX;
	static int16_t x136 = -320;
	int32_t t33 = 2607;

    t33 = ((x133!=(x134<=x135))%x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = -921744;
	int64_t x138 = INT64_MIN;
	int32_t x139 = 59408;
	static volatile int32_t t34 = 861;

    t34 = ((x137!=(x138<=x139))%x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint64_t x141 = UINT64_MAX;
	int16_t x142 = -1;
	int64_t x144 = INT64_MIN;
	int64_t t35 = -7444390807498643LL;

    t35 = ((x141!=(x142<=x143))%x144);

    if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x145 = 5255824U;
	uint8_t x146 = 0U;
	volatile int64_t x147 = -1LL;
	volatile int64_t t36 = -523230693264299330LL;

    t36 = ((x145!=(x146<=x147))%x148);

    if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = INT8_MIN;
	static uint16_t x150 = UINT16_MAX;
	int64_t x152 = INT64_MIN;
	int64_t t37 = 0LL;

    t37 = ((x149!=(x150<=x151))%x152);

    if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = -7468;
	static volatile int8_t x155 = INT8_MIN;
	int64_t x156 = INT64_MIN;
	volatile int64_t t38 = 68570107118704811LL;

    t38 = ((x153!=(x154<=x155))%x156);

    if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = 0U;
	uint8_t x158 = UINT8_MAX;
	int16_t x159 = INT16_MIN;
	uint64_t x160 = UINT64_MAX;
	uint64_t t39 = 10145775LLU;

    t39 = ((x157!=(x158<=x159))%x160);

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = -1;
	static uint8_t x162 = 36U;
	int32_t x163 = INT32_MAX;
	volatile int64_t t40 = -589528LL;

    t40 = ((x161!=(x162<=x163))%x164);

    if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x165 = UINT64_MAX;
	int64_t x166 = INT64_MIN;
	int8_t x167 = -1;

    t41 = ((x165!=(x166<=x167))%x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x170 = 671LL;
	int8_t x171 = -1;
	static uint16_t x172 = UINT16_MAX;
	int32_t t42 = -1;

    t42 = ((x169!=(x170<=x171))%x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x173 = 100U;
	int32_t x174 = 373;
	uint8_t x175 = UINT8_MAX;
	static uint32_t x176 = UINT32_MAX;
	volatile uint32_t t43 = 7921421U;

    t43 = ((x173!=(x174<=x175))%x176);

    if (t43 != 1U) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = 21586U;
	uint64_t x178 = UINT64_MAX;
	int16_t x179 = -1;
	static int64_t t44 = 9LL;

    t44 = ((x177!=(x178<=x179))%x180);

    if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x181 = 0U;
	static int8_t x182 = 1;
	volatile int32_t x184 = 328173719;
	volatile int32_t t45 = 1535395;

    t45 = ((x181!=(x182<=x183))%x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = INT64_MIN;
	volatile uint8_t x186 = 33U;
	static int64_t x187 = INT64_MIN;
	int64_t x188 = INT64_MAX;
	volatile int64_t t46 = -101239LL;

    t46 = ((x185!=(x186<=x187))%x188);

    if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = INT64_MIN;
	int64_t x190 = INT64_MIN;
	uint16_t x191 = UINT16_MAX;
	uint32_t x192 = 475345U;

    t47 = ((x189!=(x190<=x191))%x192);

    if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x193 = 12662789283520950LLU;
	volatile int64_t x194 = INT64_MAX;
	volatile int32_t x195 = -7;
	int32_t t48 = -52032;

    t48 = ((x193!=(x194<=x195))%x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = INT64_MAX;
	int32_t x198 = 1236268;
	volatile uint8_t x199 = 1U;
	static volatile int8_t x200 = -1;
	int32_t t49 = -22867133;

    t49 = ((x197!=(x198<=x199))%x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x201 = INT8_MIN;
	static int8_t x202 = 38;

    t50 = ((x201!=(x202<=x203))%x204);

    if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x205 = -1;
	volatile uint32_t x207 = UINT32_MAX;

    t51 = ((x205!=(x206<=x207))%x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x209 = 3U;
	int16_t x210 = INT16_MIN;
	volatile uint32_t x211 = 109608184U;
	uint64_t x212 = 80LLU;
	volatile uint64_t t52 = 623634689LLU;

    t52 = ((x209!=(x210<=x211))%x212);

    if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int64_t x213 = 34982480229460370LL;
	volatile int16_t x215 = -1;

    t53 = ((x213!=(x214<=x215))%x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x217 = INT16_MIN;
	volatile int16_t x218 = -1;
	volatile int64_t x219 = INT64_MIN;
	static int8_t x220 = INT8_MAX;
	static volatile int32_t t54 = -101025747;

    t54 = ((x217!=(x218<=x219))%x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = 5722036361235LLU;
	uint16_t x222 = UINT16_MAX;
	int8_t x223 = INT8_MIN;
	volatile uint64_t t55 = 383448916875500781LLU;

    t55 = ((x221!=(x222<=x223))%x224);

    if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x225 = 21U;
	int32_t x226 = -2946;
	static volatile int64_t x227 = -201855LL;
	static uint8_t x228 = 14U;
	volatile int32_t t56 = 1068767760;

    t56 = ((x225!=(x226<=x227))%x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = INT64_MIN;
	static int32_t x230 = INT32_MIN;
	int16_t x231 = INT16_MIN;
	volatile int8_t x232 = -1;

    t57 = ((x229!=(x230<=x231))%x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x233 = 7LLU;
	int16_t x234 = INT16_MIN;
	uint8_t x235 = 33U;
	int8_t x236 = INT8_MAX;
	int32_t t58 = -4663664;

    t58 = ((x233!=(x234<=x235))%x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x237 = INT32_MIN;
	volatile int64_t x239 = INT64_MAX;
	volatile uint8_t x240 = UINT8_MAX;
	int32_t t59 = -3084;

    t59 = ((x237!=(x238<=x239))%x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint32_t x241 = 406923U;
	int16_t x242 = -60;
	uint32_t x243 = 8093U;
	int64_t x244 = -2173513890772396682LL;
	static int64_t t60 = 90845LL;

    t60 = ((x241!=(x242<=x243))%x244);

    if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = -65091378;
	uint8_t x247 = 7U;
	int8_t x248 = 50;
	volatile int32_t t61 = 90304069;

    t61 = ((x245!=(x246<=x247))%x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x251 = -1;
	int32_t x252 = INT32_MIN;

    t62 = ((x249!=(x250<=x251))%x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = -6;
	int32_t x254 = 133130;
	static int16_t x255 = INT16_MAX;
	volatile int64_t x256 = 2132649204LL;
	volatile int64_t t63 = 1935150918LL;

    t63 = ((x253!=(x254<=x255))%x256);

    if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x257 = -2;
	uint32_t x258 = UINT32_MAX;
	int64_t x259 = -1LL;
	int8_t x260 = -15;

    t64 = ((x257!=(x258<=x259))%x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x261 = UINT64_MAX;
	int8_t x262 = INT8_MIN;
	volatile int16_t x263 = INT16_MIN;
	static int16_t x264 = INT16_MAX;
	static int32_t t65 = -810;

    t65 = ((x261!=(x262<=x263))%x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = 835;
	int64_t x266 = INT64_MIN;
	int16_t x267 = -1;
	int64_t x268 = 2262427LL;
	volatile int64_t t66 = -6050LL;

    t66 = ((x265!=(x266<=x267))%x268);

    if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x270 = UINT64_MAX;
	uint16_t x271 = 3595U;
	int16_t x272 = INT16_MIN;
	volatile int32_t t67 = -3162;

    t67 = ((x269!=(x270<=x271))%x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = INT32_MIN;
	int32_t x274 = -366674;
	uint64_t x275 = 453266500LLU;
	static uint16_t x276 = 12U;
	static int32_t t68 = 79;

    t68 = ((x273!=(x274<=x275))%x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = 1;
	int8_t x278 = -1;
	uint32_t t69 = 16845836U;

    t69 = ((x277!=(x278<=x279))%x280);

    if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MIN;
	static int64_t x282 = 1478LL;
	volatile uint8_t x284 = UINT8_MAX;
	volatile int32_t t70 = 62383363;

    t70 = ((x281!=(x282<=x283))%x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint32_t x286 = 28724U;
	volatile uint32_t x287 = UINT32_MAX;
	int32_t x288 = INT32_MIN;
	int32_t t71 = 3;

    t71 = ((x285!=(x286<=x287))%x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x290 = INT64_MIN;
	int64_t x291 = -6368883126216471LL;
	uint16_t x292 = UINT16_MAX;
	int32_t t72 = 895818;

    t72 = ((x289!=(x290<=x291))%x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x294 = INT8_MIN;
	int16_t x295 = -1;
	int16_t x296 = INT16_MIN;
	volatile int32_t t73 = 270477644;

    t73 = ((x293!=(x294<=x295))%x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = INT64_MAX;
	volatile int32_t x298 = INT32_MIN;
	int32_t x299 = 511;
	volatile uint16_t x300 = UINT16_MAX;
	volatile int32_t t74 = -30;

    t74 = ((x297!=(x298<=x299))%x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = -175794364526795LL;
	int64_t x302 = INT64_MIN;
	int32_t x303 = -1;
	int16_t x304 = -1;
	volatile int32_t t75 = 1;

    t75 = ((x301!=(x302<=x303))%x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x305 = 68402303LL;
	int16_t x306 = -21;
	uint64_t x308 = 1548459995731LLU;
	volatile uint64_t t76 = 3719169LLU;

    t76 = ((x305!=(x306<=x307))%x308);

    if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x309 = -1LL;
	static uint16_t x311 = UINT16_MAX;
	int8_t x312 = -1;
	static int32_t t77 = 759820;

    t77 = ((x309!=(x310<=x311))%x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x313 = INT16_MIN;
	int64_t x314 = 47698088035503052LL;
	static int16_t x316 = INT16_MIN;
	int32_t t78 = -140;

    t78 = ((x313!=(x314<=x315))%x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x317 = INT16_MIN;
	int8_t x319 = INT8_MIN;
	int16_t x320 = 7;

    t79 = ((x317!=(x318<=x319))%x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = -5;
	static volatile uint8_t x322 = UINT8_MAX;
	int64_t x323 = -1LL;
	uint32_t x324 = 5536U;
	volatile uint32_t t80 = 2U;

    t80 = ((x321!=(x322<=x323))%x324);

    if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x325 = 86980417216LLU;
	int64_t x326 = -1LL;
	int8_t x327 = INT8_MAX;
	int8_t x328 = INT8_MIN;
	volatile int32_t t81 = 5158946;

    t81 = ((x325!=(x326<=x327))%x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = -2;
	static int64_t x330 = INT64_MAX;
	int32_t x331 = INT32_MAX;
	int64_t x332 = INT64_MIN;

    t82 = ((x329!=(x330<=x331))%x332);

    if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = -433001438LL;
	static uint32_t x334 = 407U;
	static uint16_t x335 = 1U;
	int32_t x336 = INT32_MIN;
	static int32_t t83 = -6;

    t83 = ((x333!=(x334<=x335))%x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = -9LL;
	static int8_t x338 = 7;
	int64_t x339 = -923905LL;
	uint64_t x340 = 35098437795371675LLU;

    t84 = ((x337!=(x338<=x339))%x340);

    if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x341 = 933906502U;
	int8_t x342 = INT8_MIN;
	int32_t x343 = INT32_MIN;
	int8_t x344 = -1;
	static volatile int32_t t85 = -3186015;

    t85 = ((x341!=(x342<=x343))%x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint8_t x347 = UINT8_MAX;
	static int8_t x348 = INT8_MIN;
	int32_t t86 = -339999330;

    t86 = ((x345!=(x346<=x347))%x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x350 = UINT8_MAX;
	volatile uint8_t x351 = 0U;
	volatile uint16_t x352 = 2577U;
	volatile int32_t t87 = 1047126812;

    t87 = ((x349!=(x350<=x351))%x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x353 = 30U;
	int16_t x354 = 27;
	uint16_t x356 = UINT16_MAX;
	int32_t t88 = -800018;

    t88 = ((x353!=(x354<=x355))%x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = -837;
	static uint32_t x358 = UINT32_MAX;
	volatile int64_t x359 = -1800012191208144LL;
	volatile int64_t t89 = -6493006LL;

    t89 = ((x357!=(x358<=x359))%x360);

    if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x365 = 82U;
	int8_t x366 = INT8_MAX;

    t90 = ((x365!=(x366<=x367))%x368);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x370 = -1;
	int16_t x371 = -1;
	uint8_t x372 = UINT8_MAX;

    t91 = ((x369!=(x370<=x371))%x372);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int64_t x373 = -1LL;
	uint8_t x374 = 92U;
	volatile int64_t x375 = -13221638210774LL;
	volatile int16_t x376 = -1;
	static volatile int32_t t92 = -13;

    t92 = ((x373!=(x374<=x375))%x376);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x377 = 10;
	int16_t x378 = INT16_MIN;
	static int64_t x379 = 47853860LL;
	int64_t x380 = INT64_MAX;
	static int64_t t93 = -2980418590LL;

    t93 = ((x377!=(x378<=x379))%x380);

    if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x381 = 95935LL;
	int16_t x382 = -1;
	int8_t x383 = INT8_MIN;
	static volatile uint32_t t94 = 394U;

    t94 = ((x381!=(x382<=x383))%x384);

    if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x385 = -1;
	static volatile int16_t x386 = INT16_MAX;
	static int32_t t95 = 243642122;

    t95 = ((x385!=(x386<=x387))%x388);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x389 = -1;
	static int8_t x390 = INT8_MAX;
	volatile uint16_t x391 = UINT16_MAX;
	static int64_t x392 = -1LL;

    t96 = ((x389!=(x390<=x391))%x392);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x393 = -1;
	static volatile uint32_t x394 = UINT32_MAX;
	static uint64_t x395 = 37065LLU;
	static uint8_t x396 = UINT8_MAX;
	int32_t t97 = 495477;

    t97 = ((x393!=(x394<=x395))%x396);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x397 = -1;
	volatile uint32_t x398 = 13492U;
	int8_t x399 = 53;
	int8_t x400 = INT8_MIN;
	int32_t t98 = -60621566;

    t98 = ((x397!=(x398<=x399))%x400);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x401 = 31;
	int32_t x402 = INT32_MAX;
	int16_t x403 = 595;
	uint32_t x404 = 186U;
	uint32_t t99 = 2018U;

    t99 = ((x401!=(x402<=x403))%x404);

    if (t99 != 1U) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x405 = INT32_MIN;
	int64_t x407 = -101149290090LL;
	volatile int64_t t100 = -26136740534LL;

    t100 = ((x405!=(x406<=x407))%x408);

    if (t100 != 1LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x409 = INT32_MAX;
	uint16_t x410 = UINT16_MAX;
	static int64_t x412 = 98018473610460LL;
	volatile int64_t t101 = -263LL;

    t101 = ((x409!=(x410<=x411))%x412);

    if (t101 != 1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x414 = -220311037016825LL;
	int64_t x415 = INT64_MAX;
	int64_t x416 = INT64_MIN;
	int64_t t102 = 419613740472496LL;

    t102 = ((x413!=(x414<=x415))%x416);

    if (t102 != 1LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x417 = INT8_MIN;
	int16_t x418 = INT16_MAX;
	uint64_t x419 = UINT64_MAX;
	int32_t t103 = 0;

    t103 = ((x417!=(x418<=x419))%x420);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x421 = INT8_MAX;
	static int64_t x422 = INT64_MIN;
	volatile int32_t x423 = INT32_MIN;
	int8_t x424 = 36;
	volatile int32_t t104 = 3;

    t104 = ((x421!=(x422<=x423))%x424);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x425 = -1;
	int64_t x426 = -1LL;
	int64_t x427 = -1LL;
	static int16_t x428 = -18;
	int32_t t105 = -1155;

    t105 = ((x425!=(x426<=x427))%x428);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x429 = INT32_MAX;
	uint32_t x430 = 772974609U;
	int8_t x431 = -1;
	int16_t x432 = INT16_MIN;
	volatile int32_t t106 = -9069537;

    t106 = ((x429!=(x430<=x431))%x432);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x433 = -1;
	static volatile int32_t x434 = 234;
	uint32_t x435 = 27U;
	uint64_t x436 = 8061565316LLU;
	uint64_t t107 = 721224LLU;

    t107 = ((x433!=(x434<=x435))%x436);

    if (t107 != 1LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x437 = -122575795379LL;
	uint32_t x438 = 1586U;
	volatile int16_t x439 = INT16_MIN;
	volatile int8_t x440 = INT8_MAX;
	int32_t t108 = 197760;

    t108 = ((x437!=(x438<=x439))%x440);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x441 = 4810;
	int16_t x442 = -172;
	uint16_t x443 = UINT16_MAX;
	volatile uint64_t x444 = 1589152887575823LLU;
	static uint64_t t109 = 15785232770LLU;

    t109 = ((x441!=(x442<=x443))%x444);

    if (t109 != 1LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x445 = INT16_MIN;
	int64_t x447 = -1LL;
	static uint16_t x448 = UINT16_MAX;
	volatile int32_t t110 = -69335270;

    t110 = ((x445!=(x446<=x447))%x448);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x449 = INT16_MIN;
	uint64_t x450 = 902881LLU;
	int16_t x452 = INT16_MAX;
	volatile int32_t t111 = 1911;

    t111 = ((x449!=(x450<=x451))%x452);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x453 = -1;
	int32_t x454 = INT32_MIN;
	int8_t x455 = -5;
	int8_t x456 = 1;

    t112 = ((x453!=(x454<=x455))%x456);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x457 = INT8_MAX;
	int32_t x458 = INT32_MIN;
	uint32_t x459 = 3U;
	static int8_t x460 = INT8_MIN;
	int32_t t113 = 48;

    t113 = ((x457!=(x458<=x459))%x460);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x462 = -5;

    t114 = ((x461!=(x462<=x463))%x464);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x465 = 2319U;
	uint16_t x466 = UINT16_MAX;
	int32_t x467 = -3068;
	int8_t x468 = INT8_MIN;
	int32_t t115 = -12;

    t115 = ((x465!=(x466<=x467))%x468);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x469 = INT8_MIN;
	int64_t x470 = INT64_MAX;
	static uint32_t x471 = UINT32_MAX;
	int8_t x472 = INT8_MIN;
	int32_t t116 = -1170251;

    t116 = ((x469!=(x470<=x471))%x472);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x473 = -1LL;
	volatile uint64_t x475 = UINT64_MAX;
	volatile int32_t x476 = -1;
	int32_t t117 = 585561;

    t117 = ((x473!=(x474<=x475))%x476);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x477 = 9664U;
	int64_t x478 = -1LL;
	int64_t x480 = INT64_MAX;
	static int64_t t118 = 42980LL;

    t118 = ((x477!=(x478<=x479))%x480);

    if (t118 != 1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x481 = INT64_MAX;
	uint16_t x483 = 72U;
	uint8_t x484 = UINT8_MAX;
	static int32_t t119 = 252;

    t119 = ((x481!=(x482<=x483))%x484);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x485 = INT8_MIN;
	static uint8_t x486 = UINT8_MAX;
	volatile int8_t x488 = INT8_MAX;
	volatile int32_t t120 = -131;

    t120 = ((x485!=(x486<=x487))%x488);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x489 = 15431929660LL;
	uint8_t x490 = UINT8_MAX;
	int32_t x491 = INT32_MAX;
	uint64_t x492 = 38953206205179602LLU;

    t121 = ((x489!=(x490<=x491))%x492);

    if (t121 != 1LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x493 = INT8_MIN;
	int8_t x495 = INT8_MAX;
	static uint16_t x496 = UINT16_MAX;
	static volatile int32_t t122 = -183;

    t122 = ((x493!=(x494<=x495))%x496);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t t123 = -1108637;

    t123 = ((x497!=(x498<=x499))%x500);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x501 = 3;
	int32_t x502 = -355;
	int32_t x503 = INT32_MIN;
	volatile int32_t t124 = 1;

    t124 = ((x501!=(x502<=x503))%x504);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x505 = INT16_MIN;
	int8_t x507 = -10;
	uint16_t x508 = 1U;

    t125 = ((x505!=(x506<=x507))%x508);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x512 = INT32_MAX;
	static volatile int32_t t126 = 7973;

    t126 = ((x509!=(x510<=x511))%x512);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x513 = 3U;
	static int8_t x514 = -4;
	int64_t x515 = INT64_MIN;
	uint32_t x516 = 39376U;
	uint32_t t127 = 126471U;

    t127 = ((x513!=(x514<=x515))%x516);

    if (t127 != 1U) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x517 = -5478;
	volatile uint8_t x518 = 10U;
	static int32_t t128 = -127637255;

    t128 = ((x517!=(x518<=x519))%x520);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x522 = -211;
	volatile uint32_t x523 = UINT32_MAX;
	int32_t x524 = INT32_MAX;
	int32_t t129 = 10;

    t129 = ((x521!=(x522<=x523))%x524);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x525 = UINT16_MAX;
	int64_t x526 = -1LL;
	static uint64_t x527 = 41688082389491LLU;
	int8_t x528 = 1;
	static int32_t t130 = -22634591;

    t130 = ((x525!=(x526<=x527))%x528);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x533 = 6U;
	int64_t x534 = -6LL;
	int16_t x535 = -1;
	volatile int64_t x536 = INT64_MAX;
	volatile int64_t t131 = -18253016LL;

    t131 = ((x533!=(x534<=x535))%x536);

    if (t131 != 1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x538 = INT64_MIN;
	int64_t x539 = INT64_MIN;
	int64_t x540 = -1LL;
	int64_t t132 = 19214622519363LL;

    t132 = ((x537!=(x538<=x539))%x540);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x541 = INT64_MAX;
	volatile int32_t x543 = INT32_MAX;
	int64_t x544 = -49032655941280443LL;
	volatile int64_t t133 = -2LL;

    t133 = ((x541!=(x542<=x543))%x544);

    if (t133 != 1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x545 = -1;
	static int64_t x546 = INT64_MAX;
	int64_t x547 = INT64_MAX;
	int16_t x548 = 4562;
	int32_t t134 = 732;

    t134 = ((x545!=(x546<=x547))%x548);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x549 = 4209194436699LLU;
	int8_t x551 = INT8_MIN;
	static int32_t x552 = 24163219;

    t135 = ((x549!=(x550<=x551))%x552);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x553 = -12;
	static uint16_t x554 = 5890U;
	int16_t x555 = 0;
	uint8_t x556 = 7U;
	volatile int32_t t136 = -151;

    t136 = ((x553!=(x554<=x555))%x556);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x557 = INT8_MAX;
	int32_t x558 = INT32_MIN;
	uint32_t x559 = UINT32_MAX;
	static uint16_t x560 = UINT16_MAX;
	int32_t t137 = 255;

    t137 = ((x557!=(x558<=x559))%x560);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x562 = 2074656U;
	int32_t x563 = INT32_MIN;
	int64_t x564 = INT64_MAX;
	int64_t t138 = -1335988716362LL;

    t138 = ((x561!=(x562<=x563))%x564);

    if (t138 != 1LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x565 = -14885610LL;
	int32_t x566 = INT32_MIN;
	uint64_t x567 = 6623679992LLU;

    t139 = ((x565!=(x566<=x567))%x568);

    if (t139 != 1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x570 = UINT8_MAX;
	uint32_t x571 = 10385753U;
	volatile int64_t t140 = 182483767091015046LL;

    t140 = ((x569!=(x570<=x571))%x572);

    if (t140 != 1LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x573 = 1U;
	static int16_t x574 = 0;
	uint32_t x575 = 215796U;
	static uint64_t x576 = UINT64_MAX;
	uint64_t t141 = 723110878015LLU;

    t141 = ((x573!=(x574<=x575))%x576);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x578 = INT32_MAX;
	volatile int16_t x579 = -325;
	static volatile uint32_t x580 = 15564U;
	static uint32_t t142 = 12U;

    t142 = ((x577!=(x578<=x579))%x580);

    if (t142 != 1U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x581 = 1050332U;
	uint16_t x583 = 1U;
	int64_t x584 = -16054946034LL;
	volatile int64_t t143 = -2003LL;

    t143 = ((x581!=(x582<=x583))%x584);

    if (t143 != 1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint16_t x585 = 9235U;
	static uint32_t x586 = UINT32_MAX;

    t144 = ((x585!=(x586<=x587))%x588);

    if (t144 != 1LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x591 = UINT16_MAX;
	int64_t x592 = -265798405981LL;

    t145 = ((x589!=(x590<=x591))%x592);

    if (t145 != 1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x593 = -1LL;
	int32_t x595 = -1;
	static volatile int16_t x596 = INT16_MIN;
	volatile int32_t t146 = -49;

    t146 = ((x593!=(x594<=x595))%x596);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x597 = -1;
	volatile uint16_t x599 = 1U;

    t147 = ((x597!=(x598<=x599))%x600);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint8_t x601 = UINT8_MAX;
	volatile int16_t x602 = -215;
	int64_t x603 = -1LL;
	int16_t x604 = INT16_MAX;
	volatile int32_t t148 = -722104571;

    t148 = ((x601!=(x602<=x603))%x604);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x605 = 1U;
	volatile uint16_t x606 = 8648U;
	static volatile uint8_t x607 = UINT8_MAX;
	uint32_t x608 = 1030052U;
	volatile uint32_t t149 = 7048U;

    t149 = ((x605!=(x606<=x607))%x608);

    if (t149 != 1U) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint64_t x610 = UINT64_MAX;
	int32_t x611 = -1;
	volatile int64_t x612 = INT64_MIN;
	static volatile int64_t t150 = 11485LL;

    t150 = ((x609!=(x610<=x611))%x612);

    if (t150 != 1LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x614 = 76359327;
	volatile int32_t x615 = INT32_MAX;
	int8_t x616 = -1;
	int32_t t151 = -923233397;

    t151 = ((x613!=(x614<=x615))%x616);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x617 = INT8_MIN;
	int32_t x618 = 95932;
	uint64_t x619 = 124LLU;
	int32_t x620 = INT32_MIN;
	int32_t t152 = -1015084700;

    t152 = ((x617!=(x618<=x619))%x620);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x621 = INT32_MAX;
	int16_t x622 = -1;
	volatile int64_t x623 = INT64_MIN;

    t153 = ((x621!=(x622<=x623))%x624);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x625 = UINT8_MAX;
	int8_t x626 = INT8_MIN;
	static int16_t x627 = INT16_MIN;
	uint32_t x628 = 14753471U;
	uint32_t t154 = 1235948U;

    t154 = ((x625!=(x626<=x627))%x628);

    if (t154 != 1U) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x629 = -121;
	volatile int16_t x630 = -1;
	static uint64_t x631 = 113028LLU;
	int8_t x632 = -3;
	int32_t t155 = 2325;

    t155 = ((x629!=(x630<=x631))%x632);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x633 = UINT16_MAX;
	int64_t x634 = INT64_MIN;
	int64_t x635 = -1LL;
	uint32_t x636 = UINT32_MAX;

    t156 = ((x633!=(x634<=x635))%x636);

    if (t156 != 1U) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x637 = -143;
	int32_t x638 = INT32_MAX;
	static int16_t x639 = -1;
	static int32_t x640 = INT32_MIN;

    t157 = ((x637!=(x638<=x639))%x640);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x643 = INT8_MAX;
	static int64_t x644 = 26289LL;
	int64_t t158 = -235334LL;

    t158 = ((x641!=(x642<=x643))%x644);

    if (t158 != 1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x645 = INT32_MIN;
	int8_t x646 = -4;
	int32_t x647 = 2;
	int32_t x648 = INT32_MIN;
	int32_t t159 = -33284577;

    t159 = ((x645!=(x646<=x647))%x648);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x649 = -1;
	int8_t x651 = INT8_MIN;
	int32_t x652 = -455287234;
	static int32_t t160 = 2654593;

    t160 = ((x649!=(x650<=x651))%x652);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x653 = 126U;
	volatile uint8_t x655 = 25U;
	int64_t x656 = -26683438633908166LL;
	int64_t t161 = 405489614765224675LL;

    t161 = ((x653!=(x654<=x655))%x656);

    if (t161 != 1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x660 = INT32_MIN;
	int32_t t162 = -13189527;

    t162 = ((x657!=(x658<=x659))%x660);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x661 = 24U;
	volatile uint64_t x663 = UINT64_MAX;
	int64_t x664 = INT64_MIN;
	volatile int64_t t163 = -938LL;

    t163 = ((x661!=(x662<=x663))%x664);

    if (t163 != 1LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x665 = 1;
	int32_t x666 = INT32_MAX;
	int8_t x667 = INT8_MAX;
	uint64_t x668 = 49271866051365LLU;
	uint64_t t164 = 22292862479LLU;

    t164 = ((x665!=(x666<=x667))%x668);

    if (t164 != 1LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x669 = -492252943;
	static int8_t x671 = -1;
	static uint32_t x672 = UINT32_MAX;
	volatile uint32_t t165 = 23961U;

    t165 = ((x669!=(x670<=x671))%x672);

    if (t165 != 1U) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x673 = 1;
	int16_t x674 = INT16_MAX;
	int32_t t166 = 8427;

    t166 = ((x673!=(x674<=x675))%x676);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x677 = INT64_MIN;
	int16_t x679 = INT16_MIN;
	uint8_t x680 = 42U;
	int32_t t167 = 2;

    t167 = ((x677!=(x678<=x679))%x680);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x681 = -1;
	uint8_t x683 = 28U;
	int64_t x684 = 10LL;

    t168 = ((x681!=(x682<=x683))%x684);

    if (t168 != 1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x685 = -1;
	static int32_t x687 = -1;
	volatile int32_t t169 = -12;

    t169 = ((x685!=(x686<=x687))%x688);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x689 = -34;
	static volatile int8_t x690 = INT8_MIN;
	static uint32_t x691 = 437U;
	int8_t x692 = INT8_MIN;
	static int32_t t170 = 488;

    t170 = ((x689!=(x690<=x691))%x692);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x693 = -654801621;
	int16_t x694 = INT16_MIN;
	int64_t x695 = INT64_MIN;
	int64_t x696 = -1093304675618LL;
	int64_t t171 = -7072318477272491LL;

    t171 = ((x693!=(x694<=x695))%x696);

    if (t171 != 1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x697 = 70247199060253082LL;
	int32_t x698 = -1;
	static int64_t x700 = -1LL;
	volatile int64_t t172 = -104057257957LL;

    t172 = ((x697!=(x698<=x699))%x700);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x701 = UINT8_MAX;
	static volatile int64_t x702 = 1LL;
	volatile int64_t x704 = INT64_MIN;
	int64_t t173 = 756386340093331115LL;

    t173 = ((x701!=(x702<=x703))%x704);

    if (t173 != 1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x706 = 122189U;
	static uint8_t x707 = 18U;
	volatile int32_t t174 = 252;

    t174 = ((x705!=(x706<=x707))%x708);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x709 = -2009LL;
	static volatile int16_t x710 = INT16_MIN;
	static int8_t x711 = -1;
	static volatile uint32_t x712 = 27U;
	static uint32_t t175 = 50078U;

    t175 = ((x709!=(x710<=x711))%x712);

    if (t175 != 1U) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x713 = INT64_MIN;
	int16_t x714 = INT16_MIN;
	uint64_t t176 = 3LLU;

    t176 = ((x713!=(x714<=x715))%x716);

    if (t176 != 1LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x718 = 823484U;
	uint32_t x719 = 184544536U;
	volatile int64_t t177 = -4103676394LL;

    t177 = ((x717!=(x718<=x719))%x720);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x721 = INT64_MAX;
	static int16_t x722 = 3556;

    t178 = ((x721!=(x722<=x723))%x724);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x725 = INT64_MIN;
	int8_t x727 = INT8_MAX;
	int16_t x728 = INT16_MAX;
	int32_t t179 = -372;

    t179 = ((x725!=(x726<=x727))%x728);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x729 = -1;
	uint8_t x730 = 0U;
	static uint8_t x731 = UINT8_MAX;
	uint32_t x732 = UINT32_MAX;
	volatile uint32_t t180 = 222205699U;

    t180 = ((x729!=(x730<=x731))%x732);

    if (t180 != 1U) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x733 = -15189;
	static int16_t x735 = INT16_MIN;
	volatile int16_t x736 = -18;
	volatile int32_t t181 = -3;

    t181 = ((x733!=(x734<=x735))%x736);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x737 = -1LL;
	uint16_t x739 = 15913U;
	int8_t x740 = -1;
	volatile int32_t t182 = 152;

    t182 = ((x737!=(x738<=x739))%x740);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x741 = INT16_MIN;
	static int8_t x742 = -1;
	static volatile int16_t x743 = -1;
	uint32_t t183 = 738973640U;

    t183 = ((x741!=(x742<=x743))%x744);

    if (t183 != 1U) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x745 = -1;
	static uint64_t x746 = UINT64_MAX;
	static int16_t x747 = INT16_MAX;
	uint8_t x748 = UINT8_MAX;

    t184 = ((x745!=(x746<=x747))%x748);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int32_t x749 = INT32_MIN;
	int16_t x750 = -14793;
	uint64_t x751 = 1165169881004386521LLU;
	static int64_t x752 = -1LL;
	volatile int64_t t185 = 328LL;

    t185 = ((x749!=(x750<=x751))%x752);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x753 = 0;
	int8_t x754 = INT8_MAX;
	static int8_t x755 = INT8_MAX;
	int64_t x756 = INT64_MIN;
	int64_t t186 = 1LL;

    t186 = ((x753!=(x754<=x755))%x756);

    if (t186 != 1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x758 = INT16_MAX;
	static int64_t x760 = INT64_MAX;
	volatile int64_t t187 = -35292961003699LL;

    t187 = ((x757!=(x758<=x759))%x760);

    if (t187 != 1LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x761 = -1;
	int16_t x762 = -1;
	static volatile int64_t x763 = INT64_MIN;
	static volatile uint64_t t188 = 30615217742417632LLU;

    t188 = ((x761!=(x762<=x763))%x764);

    if (t188 != 1LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x765 = INT64_MIN;
	int64_t x766 = INT64_MIN;
	volatile uint8_t x767 = UINT8_MAX;

    t189 = ((x765!=(x766<=x767))%x768);

    if (t189 != 1U) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x769 = 326;
	volatile uint16_t x770 = 14103U;
	static volatile int32_t x771 = -1;
	int8_t x772 = 1;
	int32_t t190 = 7550054;

    t190 = ((x769!=(x770<=x771))%x772);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x773 = UINT16_MAX;
	int16_t x774 = INT16_MAX;
	int16_t x775 = -460;
	int32_t x776 = 581134;
	static int32_t t191 = 48448538;

    t191 = ((x773!=(x774<=x775))%x776);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x777 = INT16_MAX;
	int16_t x778 = -9208;
	uint8_t x780 = 17U;
	int32_t t192 = -64074;

    t192 = ((x777!=(x778<=x779))%x780);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x781 = -2;
	int64_t x783 = -46419522824LL;
	int32_t x784 = 106005;
	int32_t t193 = 5439029;

    t193 = ((x781!=(x782<=x783))%x784);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x786 = -1;
	uint8_t x787 = 9U;
	int32_t x788 = 763295670;

    t194 = ((x785!=(x786<=x787))%x788);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x793 = INT8_MIN;
	uint8_t x794 = 1U;
	uint64_t x795 = 8400391472853LLU;
	uint8_t x796 = UINT8_MAX;
	int32_t t195 = 5257752;

    t195 = ((x793!=(x794<=x795))%x796);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x797 = 73U;
	static int8_t x799 = -1;
	int64_t x800 = 413154190215LL;
	volatile int64_t t196 = -3951432149889LL;

    t196 = ((x797!=(x798<=x799))%x800);

    if (t196 != 1LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x801 = 735U;
	uint16_t x802 = UINT16_MAX;
	int16_t x803 = INT16_MAX;
	static volatile int32_t t197 = -6;

    t197 = ((x801!=(x802<=x803))%x804);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x805 = INT8_MIN;
	int32_t t198 = 0;

    t198 = ((x805!=(x806<=x807))%x808);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x809 = -14578906349LL;
	uint32_t x810 = 593U;
	int64_t x811 = INT64_MIN;
	uint16_t x812 = UINT16_MAX;
	static volatile int32_t t199 = -3825275;

    t199 = ((x809!=(x810<=x811))%x812);

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

