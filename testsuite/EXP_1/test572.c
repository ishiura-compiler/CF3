
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

int8_t x1 = 11;
uint16_t x6 = 3U;
static int16_t x16 = INT16_MIN;
int16_t x17 = INT16_MIN;
uint64_t x18 = 3784860525920107966LLU;
int8_t x23 = INT8_MIN;
static volatile int32_t t5 = -16761;
volatile int64_t t6 = 1LL;
int16_t x35 = 68;
uint16_t x45 = UINT16_MAX;
int64_t x54 = -1LL;
volatile uint16_t x56 = 78U;
int64_t t11 = -534770796244LL;
static int8_t x70 = 21;
int32_t x76 = -19;
uint16_t x77 = UINT16_MAX;
int8_t x82 = INT8_MIN;
volatile int64_t x86 = 630327385032LL;
int32_t x88 = -1;
volatile int64_t t16 = 187971837126LL;
volatile int16_t x100 = -3907;
uint64_t x106 = 3438980LLU;
volatile int16_t x110 = 3754;
static uint32_t x117 = 6U;
int32_t x124 = -22500634;
uint16_t x125 = 38U;
int32_t x133 = -1;
static int64_t x137 = 6LL;
int8_t x138 = 14;
int32_t x140 = -1;
int16_t x152 = -1;
int8_t x161 = INT8_MIN;
int8_t x162 = INT8_MIN;
uint32_t x164 = 0U;
uint16_t x178 = UINT16_MAX;
static int64_t x179 = -158345732504425LL;
volatile uint64_t t31 = 1059581LLU;
uint64_t x185 = 8446LLU;
uint64_t x191 = 9110813501309782868LLU;
int64_t x194 = -18074759408196LL;
uint64_t x209 = 50998447LLU;
volatile int16_t x211 = INT16_MIN;
int32_t x215 = -1;
int8_t x218 = INT8_MAX;
int64_t x219 = -1LL;
int64_t t40 = 5617LL;
int16_t x223 = 0;
uint16_t x224 = 87U;
int16_t x226 = 11284;
volatile uint64_t t42 = 748903281365098310LLU;
int8_t x229 = -3;
int8_t x236 = INT8_MIN;
int64_t t44 = 0LL;
uint32_t x240 = UINT32_MAX;
volatile uint32_t t45 = 736U;
static uint8_t x242 = 86U;
int64_t x250 = INT64_MIN;
uint32_t x261 = 7U;
static uint64_t x262 = UINT64_MAX;
uint64_t x263 = 3669825361601LLU;
volatile int64_t t51 = -288846LL;
volatile int8_t x278 = 14;
static volatile int64_t x283 = -104783LL;
int32_t x298 = 10706;
volatile uint16_t x299 = 48U;
volatile int64_t t58 = -7LL;
int32_t x321 = -1;
uint64_t t61 = 167966LLU;
static volatile int32_t x330 = INT32_MIN;
int64_t x333 = INT64_MIN;
uint32_t x343 = 669059U;
int64_t x345 = -567655064959048LL;
static volatile int64_t t67 = -57501989LL;
volatile int16_t x361 = INT16_MIN;
volatile int32_t t69 = -7;
int8_t x371 = INT8_MIN;
int64_t x379 = INT64_MAX;
static int8_t x386 = 0;
static int8_t x392 = -1;
volatile int64_t t76 = 920LL;
uint32_t x414 = 8562U;
volatile uint64_t x416 = UINT64_MAX;
int8_t x421 = -1;
int64_t x423 = INT64_MIN;
int8_t x429 = 63;
volatile int64_t t82 = -1LL;
int32_t x439 = INT32_MIN;
uint32_t x453 = UINT32_MAX;
int64_t x454 = 445LL;
int64_t x457 = 175378459281995LL;
static volatile uint32_t x484 = 4508505U;
int64_t t93 = -93519553879121LL;
static int16_t x485 = INT16_MIN;
uint16_t x488 = 2U;
static uint8_t x496 = 2U;
int32_t t95 = 9255800;
uint8_t x501 = UINT8_MAX;
static int16_t x502 = -1;
int64_t x504 = INT64_MIN;
int64_t t96 = INT64_MIN;
uint32_t x505 = 19U;
uint16_t x518 = UINT16_MAX;
uint64_t x532 = 3LLU;
int8_t x535 = -23;
volatile int64_t t104 = 9657228015686LL;
uint32_t x553 = 1832675U;
int32_t x559 = INT32_MIN;
uint16_t x582 = 237U;
uint32_t t111 = 347679U;
volatile int16_t x595 = -1;
uint8_t x597 = UINT8_MAX;
uint8_t x606 = UINT8_MAX;
int64_t x607 = INT64_MIN;
uint16_t x608 = UINT16_MAX;
int32_t x612 = -14;
uint16_t x613 = UINT16_MAX;
int64_t t118 = 2009243362510804188LL;
volatile int64_t t119 = -18036423352133LL;
int64_t x635 = -1LL;
int32_t x640 = INT32_MIN;
volatile int16_t x651 = -1;
uint16_t x657 = 9U;
static uint16_t x668 = 28468U;
uint32_t t127 = 463501589U;
int32_t x675 = INT32_MIN;
int64_t x677 = -77699LL;
int8_t x679 = 3;
volatile uint64_t t130 = 30117861230647682LLU;
int32_t x694 = -88;
static int32_t x695 = -3;
static int32_t x704 = INT32_MAX;
int16_t x713 = -9642;
uint8_t x722 = 12U;
uint64_t t137 = 36372070719290LLU;
uint32_t x737 = 202708673U;
uint8_t x739 = UINT8_MAX;
static uint64_t x750 = 124684278447628LLU;
volatile uint64_t t141 = 41946770109938459LLU;
static volatile uint64_t t144 = 1583LLU;
int64_t x773 = -61070481LL;
static volatile uint64_t x777 = 92065LLU;
uint32_t x796 = UINT32_MAX;
static int64_t x807 = INT64_MAX;
uint32_t t151 = 4322558U;
int16_t x817 = -1;
int32_t x820 = INT32_MIN;
int16_t x823 = -1;
volatile int16_t x838 = -13;
static uint64_t x845 = 11847LLU;
volatile int64_t x847 = -1LL;
static volatile uint64_t t160 = 4LLU;
volatile int16_t x854 = INT16_MAX;
uint16_t x862 = 31U;
int64_t x866 = 60940279LL;
int8_t x867 = -1;
volatile int32_t t164 = 483751;
int16_t x875 = INT16_MAX;
uint8_t x876 = 2U;
uint64_t x884 = 245207697808381586LLU;
int16_t x886 = -1;
int64_t t171 = INT64_MIN;
uint64_t x905 = 56866633240516251LLU;
static int64_t x912 = -39952LL;
static int64_t x926 = -1LL;
uint64_t x928 = 4091794949055323LLU;
int64_t x930 = -37634388LL;
int32_t x937 = INT32_MIN;
volatile int32_t t179 = INT32_MIN;
uint16_t x946 = UINT16_MAX;
static volatile uint8_t x954 = 43U;
static uint16_t x964 = 10840U;
volatile int16_t x972 = INT16_MIN;
int32_t t186 = -987;
volatile uint64_t t187 = 1675372LLU;
int16_t x981 = INT16_MIN;
uint32_t x985 = 517363U;
volatile uint8_t x993 = UINT8_MAX;
int8_t x997 = -1;
int8_t x999 = INT8_MIN;
int32_t x1017 = -106260;
static uint8_t x1018 = UINT8_MAX;
uint32_t x1019 = 121928U;
int16_t x1021 = -4939;
int8_t x1027 = INT8_MIN;
volatile int64_t x1032 = -3155655924641454505LL;


void f0(void) {
    	volatile uint16_t x2 = 88U;
	int8_t x3 = INT8_MIN;
	volatile int8_t x4 = INT8_MIN;
	volatile int32_t t0 = 279808;

    t0 = (((x1*x2)|x3)&x4);

    if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x5 = 4U;
	volatile int32_t x7 = -1;
	static uint32_t x8 = 4259U;
	uint32_t t1 = 113535U;

    t1 = (((x5*x6)|x7)&x8);

    if (t1 != 4259U) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -23043990LL;
	int64_t x10 = 0LL;
	static volatile uint32_t x11 = UINT32_MAX;
	uint8_t x12 = 1U;
	volatile int64_t t2 = -92623445482477LL;

    t2 = (((x9*x10)|x11)&x12);

    if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x13 = 4849;
	uint16_t x14 = 18821U;
	uint64_t x15 = 107LLU;
	volatile uint64_t t3 = 326293292421890LLU;

    t3 = (((x13*x14)|x15)&x16);

    if (t3 != 91258880LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x19 = INT8_MIN;
	int32_t x20 = -1;
	uint64_t t4 = 820815460715LLU;

    t4 = (((x17*x18)|x19)&x20);

    if (t4 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = 59U;
	int16_t x22 = INT16_MIN;
	static volatile int32_t x24 = INT32_MAX;

    t5 = (((x21*x22)|x23)&x24);

    if (t5 != 2147483520) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = UINT8_MAX;
	uint32_t x26 = 104925U;
	volatile uint32_t x27 = UINT32_MAX;
	int64_t x28 = -1LL;

    t6 = (((x25*x26)|x27)&x28);

    if (t6 != 4294967295LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x33 = UINT32_MAX;
	uint32_t x34 = UINT32_MAX;
	int16_t x36 = INT16_MIN;
	uint32_t t7 = 81841U;

    t7 = (((x33*x34)|x35)&x36);

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x46 = INT8_MIN;
	uint64_t x47 = 1275787894982LLU;
	int16_t x48 = INT16_MIN;
	volatile uint64_t t8 = 2694697LLU;

    t8 = (((x45*x46)|x47)&x48);

    if (t8 != 18446744073707585536LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x49 = -241LL;
	uint32_t x50 = 476589U;
	static int32_t x51 = -1;
	volatile int8_t x52 = INT8_MIN;
	int64_t t9 = 834233905LL;

    t9 = (((x49*x50)|x51)&x52);

    if (t9 != -128LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint8_t x53 = 14U;
	static uint8_t x55 = UINT8_MAX;
	int64_t t10 = 1298724709003748LL;

    t10 = (((x53*x54)|x55)&x56);

    if (t10 != 78LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x65 = -1LL;
	int64_t x66 = -552205LL;
	uint32_t x67 = 5114U;
	int32_t x68 = -43;

    t11 = (((x65*x66)|x67)&x68);

    if (t11 != 557013LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x69 = INT16_MIN;
	int8_t x71 = INT8_MIN;
	int8_t x72 = INT8_MAX;
	volatile int32_t t12 = -56;

    t12 = (((x69*x70)|x71)&x72);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x73 = -8;
	int32_t x74 = -28085;
	int64_t x75 = 12751633LL;
	int64_t t13 = -20LL;

    t13 = (((x73*x74)|x75)&x76);

    if (t13 != 12844969LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x78 = UINT64_MAX;
	uint64_t x79 = 484051555LLU;
	uint64_t x80 = 809832406LLU;
	uint64_t t14 = 7795702603LLU;

    t14 = (((x77*x78)|x79)&x80);

    if (t14 != 809830978LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x81 = INT8_MIN;
	int16_t x83 = -1;
	int8_t x84 = -1;
	static int32_t t15 = -5009327;

    t15 = (((x81*x82)|x83)&x84);

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x85 = 3020;
	static volatile uint16_t x87 = 4475U;

    t16 = (((x85*x86)|x87)&x88);

    if (t16 != 1903588702796667LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x89 = 0U;
	int16_t x90 = INT16_MIN;
	int64_t x91 = INT64_MAX;
	int32_t x92 = -1;
	int64_t t17 = INT64_MAX;

    t17 = (((x89*x90)|x91)&x92);

    if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x97 = 265953062627LL;
	int16_t x98 = -8008;
	uint32_t x99 = UINT32_MAX;
	volatile int64_t t18 = -2LL;

    t18 = (((x97*x98)|x99)&x100);

    if (t18 != -2129749728038723LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint16_t x105 = 49U;
	static volatile int8_t x107 = INT8_MIN;
	int64_t x108 = -1LL;
	uint64_t t19 = 124509677686LLU;

    t19 = (((x105*x106)|x107)&x108);

    if (t19 != 18446744073709551556LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x109 = 72U;
	uint8_t x111 = 86U;
	uint32_t x112 = 1666235U;
	volatile uint32_t t20 = 308002U;

    t20 = (((x109*x110)|x111)&x112);

    if (t20 != 3218U) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x118 = INT16_MIN;
	int64_t x119 = -1LL;
	uint8_t x120 = 1U;
	int64_t t21 = -50009LL;

    t21 = (((x117*x118)|x119)&x120);

    if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x121 = 2095;
	int16_t x122 = INT16_MIN;
	volatile uint64_t x123 = 4419655456554016744LLU;
	volatile uint64_t t22 = 1377708348146LLU;

    t22 = (((x121*x122)|x123)&x124);

    if (t22 != 18446744073687042784LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x126 = -1;
	int64_t x127 = INT64_MIN;
	static volatile int64_t x128 = INT64_MAX;
	volatile int64_t t23 = 156LL;

    t23 = (((x125*x126)|x127)&x128);

    if (t23 != 9223372036854775770LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x129 = UINT32_MAX;
	uint64_t x130 = 2LLU;
	static int8_t x131 = -1;
	volatile int8_t x132 = INT8_MIN;
	uint64_t t24 = 3314455451168LLU;

    t24 = (((x129*x130)|x131)&x132);

    if (t24 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x134 = -1;
	uint16_t x135 = UINT16_MAX;
	int64_t x136 = -1LL;
	static volatile int64_t t25 = 1707373942717216262LL;

    t25 = (((x133*x134)|x135)&x136);

    if (t25 != 65535LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x139 = UINT32_MAX;
	volatile int64_t t26 = -1715050580LL;

    t26 = (((x137*x138)|x139)&x140);

    if (t26 != 4294967295LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x149 = 15U;
	int32_t x150 = 3784;
	volatile uint8_t x151 = UINT8_MAX;
	int32_t t27 = 0;

    t27 = (((x149*x150)|x151)&x152);

    if (t27 != 56831) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x157 = -318;
	int8_t x158 = INT8_MAX;
	volatile int64_t x159 = INT64_MIN;
	uint32_t x160 = UINT32_MAX;
	volatile int64_t t28 = 4543687920927082LL;

    t28 = (((x157*x158)|x159)&x160);

    if (t28 != 4294926910LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x163 = INT16_MIN;
	uint32_t t29 = 167U;

    t29 = (((x161*x162)|x163)&x164);

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int16_t x169 = -1;
	int64_t x170 = -1LL;
	int8_t x171 = -1;
	uint64_t x172 = 20082355LLU;
	volatile uint64_t t30 = 4626085560952LLU;

    t30 = (((x169*x170)|x171)&x172);

    if (t30 != 20082355LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x177 = 1827470050U;
	uint64_t x180 = 422LLU;

    t31 = (((x177*x178)|x179)&x180);

    if (t31 != 390LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x186 = 518086160748592511LLU;
	volatile uint8_t x187 = 43U;
	volatile int64_t x188 = 13508601027236LL;
	static uint64_t t32 = 4306311140LLU;

    t32 = (((x185*x186)|x187)&x188);

    if (t32 != 13503668453408LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint64_t x189 = UINT64_MAX;
	volatile int16_t x190 = -1;
	int8_t x192 = INT8_MAX;
	volatile uint64_t t33 = 60LLU;

    t33 = (((x189*x190)|x191)&x192);

    if (t33 != 85LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int8_t x193 = INT8_MAX;
	int16_t x195 = INT16_MIN;
	volatile int8_t x196 = -1;
	volatile int64_t t34 = -979482297LL;

    t34 = (((x193*x194)|x195)&x196);

    if (t34 != -30652LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x197 = -1LL;
	uint32_t x198 = 213775U;
	int64_t x199 = -10113079058766919LL;
	volatile int64_t x200 = INT64_MIN;
	volatile int64_t t35 = INT64_MIN;

    t35 = (((x197*x198)|x199)&x200);

    if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x201 = -3536234;
	int16_t x202 = -1;
	volatile uint32_t x203 = UINT32_MAX;
	uint8_t x204 = 0U;
	volatile uint32_t t36 = 863123478U;

    t36 = (((x201*x202)|x203)&x204);

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x205 = -1;
	int32_t x206 = INT32_MAX;
	volatile int64_t x207 = INT64_MIN;
	int8_t x208 = -1;
	int64_t t37 = -14258397115LL;

    t37 = (((x205*x206)|x207)&x208);

    if (t37 != -2147483647LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x210 = INT64_MAX;
	uint16_t x212 = 31U;
	volatile uint64_t t38 = 1671597038LLU;

    t38 = (((x209*x210)|x211)&x212);

    if (t38 != 17LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x213 = INT8_MIN;
	uint8_t x214 = UINT8_MAX;
	uint32_t x216 = UINT32_MAX;
	static uint32_t t39 = UINT32_MAX;

    t39 = (((x213*x214)|x215)&x216);

    if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x217 = -1;
	volatile uint8_t x220 = 5U;

    t40 = (((x217*x218)|x219)&x220);

    if (t40 != 5LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint32_t x221 = 124072189U;
	int32_t x222 = INT32_MIN;
	uint32_t t41 = 10780182U;

    t41 = (((x221*x222)|x223)&x224);

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x225 = -1;
	uint64_t x227 = 91675465392LLU;
	volatile int64_t x228 = 7599721408030LL;

    t42 = (((x225*x226)|x227)&x228);

    if (t42 != 7599721399836LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile uint16_t x230 = UINT16_MAX;
	uint64_t x231 = 145323289062581LLU;
	volatile uint16_t x232 = UINT16_MAX;
	uint64_t t43 = 3290LLU;

    t43 = (((x229*x230)|x231)&x232);

    if (t43 != 44215LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x233 = INT32_MIN;
	int64_t x234 = -1LL;
	volatile int32_t x235 = -1686430;

    t44 = (((x233*x234)|x235)&x236);

    if (t44 != -1686528LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x237 = 121U;
	int16_t x238 = -1;
	int8_t x239 = 2;

    t45 = (((x237*x238)|x239)&x240);

    if (t45 != 4294967175U) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x241 = -1;
	int16_t x243 = INT16_MIN;
	static uint8_t x244 = 113U;
	volatile int32_t t46 = -930;

    t46 = (((x241*x242)|x243)&x244);

    if (t46 != 32) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x249 = 1;
	int8_t x251 = INT8_MAX;
	volatile int8_t x252 = -6;
	volatile int64_t t47 = 252100474144701LL;

    t47 = (((x249*x250)|x251)&x252);

    if (t47 != -9223372036854775686LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x253 = INT8_MIN;
	int8_t x254 = INT8_MAX;
	static int8_t x255 = INT8_MIN;
	volatile int64_t x256 = 34934736803466324LL;
	volatile int64_t t48 = 51LL;

    t48 = (((x253*x254)|x255)&x256);

    if (t48 != 34934736803466240LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x264 = 5U;
	volatile uint64_t t49 = 986019933821172LLU;

    t49 = (((x261*x262)|x263)&x264);

    if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int16_t x269 = INT16_MIN;
	volatile int32_t x270 = -1;
	uint32_t x271 = 132599693U;
	int64_t x272 = INT64_MIN;
	static int64_t t50 = -47399779804LL;

    t50 = (((x269*x270)|x271)&x272);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x273 = 4U;
	uint32_t x274 = 6U;
	int64_t x275 = 3948869869181716LL;
	uint8_t x276 = UINT8_MAX;

    t51 = (((x273*x274)|x275)&x276);

    if (t51 != 28LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x277 = 1;
	int8_t x279 = INT8_MAX;
	static volatile int16_t x280 = INT16_MIN;
	int32_t t52 = 9152822;

    t52 = (((x277*x278)|x279)&x280);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x281 = INT16_MIN;
	int16_t x282 = INT16_MIN;
	static int32_t x284 = INT32_MIN;
	int64_t t53 = -437LL;

    t53 = (((x281*x282)|x283)&x284);

    if (t53 != -2147483648LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x285 = -3;
	int32_t x286 = -1;
	volatile uint32_t x287 = 236865U;
	uint16_t x288 = 9U;
	static volatile uint32_t t54 = 677U;

    t54 = (((x285*x286)|x287)&x288);

    if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x297 = 147750607299999LLU;
	uint64_t x300 = 1470899735LLU;
	static volatile uint64_t t55 = 6455085115116245937LLU;

    t55 = (((x297*x298)|x299)&x300);

    if (t55 != 1434976790LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x301 = UINT16_MAX;
	int8_t x302 = INT8_MIN;
	int16_t x303 = INT16_MAX;
	static volatile uint64_t x304 = UINT64_MAX;
	uint64_t t56 = 10658757LLU;

    t56 = (((x301*x302)|x303)&x304);

    if (t56 != 18446744073701195775LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x305 = 58290;
	int8_t x306 = -11;
	uint16_t x307 = UINT16_MAX;
	int16_t x308 = INT16_MAX;
	volatile int32_t t57 = -1892997;

    t57 = (((x305*x306)|x307)&x308);

    if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x313 = -86513241;
	int64_t x314 = -20778819679LL;
	int16_t x315 = -30;
	uint8_t x316 = 12U;

    t58 = (((x313*x314)|x315)&x316);

    if (t58 != 4LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x317 = -1;
	int8_t x318 = INT8_MIN;
	uint64_t x319 = 1475206494450LLU;
	int32_t x320 = -31478623;
	uint64_t t59 = 2344067714260179LLU;

    t59 = (((x317*x318)|x319)&x320);

    if (t59 != 1475187615904LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x322 = 8U;
	static int16_t x323 = 1;
	volatile int32_t x324 = INT32_MAX;
	static volatile int32_t t60 = 503835;

    t60 = (((x321*x322)|x323)&x324);

    if (t60 != 2147483641) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x325 = INT8_MAX;
	uint64_t x326 = 13859122LLU;
	static int16_t x327 = 15124;
	uint16_t x328 = 53U;

    t61 = (((x325*x326)|x327)&x328);

    if (t61 != 20LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x329 = UINT32_MAX;
	static int8_t x331 = INT8_MIN;
	static int8_t x332 = INT8_MAX;
	static volatile uint32_t t62 = 9103U;

    t62 = (((x329*x330)|x331)&x332);

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x334 = 1;
	volatile int64_t x335 = -1LL;
	int8_t x336 = -1;
	static volatile int64_t t63 = 7113598626LL;

    t63 = (((x333*x334)|x335)&x336);

    if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x337 = UINT64_MAX;
	int16_t x338 = INT16_MIN;
	volatile int8_t x339 = -53;
	int8_t x340 = INT8_MAX;
	uint64_t t64 = 10598484LLU;

    t64 = (((x337*x338)|x339)&x340);

    if (t64 != 75LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x341 = -1LL;
	uint64_t x342 = UINT64_MAX;
	uint32_t x344 = UINT32_MAX;
	uint64_t t65 = 7478243387678452191LLU;

    t65 = (((x341*x342)|x343)&x344);

    if (t65 != 669059LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x346 = -54;
	int8_t x347 = -1;
	int64_t x348 = -35LL;
	static int64_t t66 = 1LL;

    t66 = (((x345*x346)|x347)&x348);

    if (t66 != -35LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x353 = -1;
	int16_t x354 = INT16_MIN;
	int64_t x355 = 165LL;
	int16_t x356 = INT16_MIN;

    t67 = (((x353*x354)|x355)&x356);

    if (t67 != 32768LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x357 = INT16_MIN;
	int8_t x358 = INT8_MIN;
	uint64_t x359 = 7LLU;
	int8_t x360 = INT8_MIN;
	uint64_t t68 = 0LLU;

    t68 = (((x357*x358)|x359)&x360);

    if (t68 != 4194304LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x362 = -1;
	uint16_t x363 = UINT16_MAX;
	static int8_t x364 = INT8_MIN;

    t69 = (((x361*x362)|x363)&x364);

    if (t69 != 65408) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x365 = INT8_MIN;
	int32_t x366 = -29;
	uint32_t x367 = 135U;
	int16_t x368 = INT16_MIN;
	static volatile uint32_t t70 = 3910854U;

    t70 = (((x365*x366)|x367)&x368);

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x369 = UINT8_MAX;
	static uint64_t x370 = 48613414283LLU;
	int64_t x372 = INT64_MIN;
	volatile uint64_t t71 = 129815225LLU;

    t71 = (((x369*x370)|x371)&x372);

    if (t71 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x377 = 4U;
	static int32_t x378 = -1;
	int16_t x380 = -1;
	volatile int64_t t72 = -5038714930769355LL;

    t72 = (((x377*x378)|x379)&x380);

    if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x381 = INT64_MAX;
	static volatile int32_t x382 = -1;
	int16_t x383 = INT16_MAX;
	int8_t x384 = INT8_MIN;
	volatile int64_t t73 = 33977009LL;

    t73 = (((x381*x382)|x383)&x384);

    if (t73 != -9223372036854743168LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x385 = -1;
	int32_t x387 = -1;
	volatile int8_t x388 = INT8_MAX;
	int32_t t74 = -306370858;

    t74 = (((x385*x386)|x387)&x388);

    if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x389 = -9;
	uint64_t x390 = 46748LLU;
	static uint8_t x391 = 0U;
	volatile uint64_t t75 = 1888LLU;

    t75 = (((x389*x390)|x391)&x392);

    if (t75 != 18446744073709130884LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x401 = -1;
	uint32_t x402 = 57356U;
	static int64_t x403 = INT64_MAX;
	int16_t x404 = INT16_MIN;

    t76 = (((x401*x402)|x403)&x404);

    if (t76 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x409 = UINT16_MAX;
	volatile uint16_t x410 = 15U;
	int8_t x411 = -1;
	volatile int32_t x412 = INT32_MAX;
	int32_t t77 = INT32_MAX;

    t77 = (((x409*x410)|x411)&x412);

    if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x413 = 13LL;
	uint16_t x415 = UINT16_MAX;
	volatile uint64_t t78 = 210540779170252817LLU;

    t78 = (((x413*x414)|x415)&x416);

    if (t78 != 131071LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x417 = 1LLU;
	static int16_t x418 = -1;
	int32_t x419 = INT32_MAX;
	static int8_t x420 = INT8_MIN;
	static uint64_t t79 = 8600368LLU;

    t79 = (((x417*x418)|x419)&x420);

    if (t79 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x422 = 6065U;
	int32_t x424 = INT32_MIN;
	static volatile int64_t t80 = 5866031LL;

    t80 = (((x421*x422)|x423)&x424);

    if (t80 != -2147483648LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x430 = 118017073U;
	uint32_t x431 = UINT32_MAX;
	static int8_t x432 = -10;
	static volatile uint32_t t81 = 504320632U;

    t81 = (((x429*x430)|x431)&x432);

    if (t81 != 4294967286U) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x433 = 20486119000LL;
	int16_t x434 = -1;
	volatile int8_t x435 = INT8_MIN;
	int8_t x436 = 0;

    t82 = (((x433*x434)|x435)&x436);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x437 = 31;
	int8_t x438 = INT8_MIN;
	int16_t x440 = 4;
	int32_t t83 = 17944516;

    t83 = (((x437*x438)|x439)&x440);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x441 = -1;
	uint32_t x442 = 499477807U;
	uint16_t x443 = 987U;
	int32_t x444 = INT32_MIN;
	uint32_t t84 = 2607458U;

    t84 = (((x441*x442)|x443)&x444);

    if (t84 != 2147483648U) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x445 = -1;
	volatile uint64_t x446 = 329154107LLU;
	uint32_t x447 = 27801U;
	int16_t x448 = INT16_MIN;
	static uint64_t t85 = 242157732443445778LLU;

    t85 = (((x445*x446)|x447)&x448);

    if (t85 != 18446744073380397056LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x449 = INT8_MIN;
	uint8_t x450 = 3U;
	static int64_t x451 = INT64_MIN;
	uint16_t x452 = 15864U;
	int64_t t86 = -10933678LL;

    t86 = (((x449*x450)|x451)&x452);

    if (t86 != 15488LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x455 = 481991LL;
	int16_t x456 = INT16_MAX;
	static volatile int64_t t87 = -16147842165LL;

    t87 = (((x453*x454)|x455)&x456);

    if (t87 != 32455LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x458 = 71U;
	volatile int64_t x459 = INT64_MAX;
	uint16_t x460 = 1U;
	volatile int64_t t88 = -26958537054611LL;

    t88 = (((x457*x458)|x459)&x460);

    if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x461 = -1;
	int32_t x462 = 3353;
	int16_t x463 = INT16_MIN;
	static int32_t x464 = -1;
	static int32_t t89 = -2699354;

    t89 = (((x461*x462)|x463)&x464);

    if (t89 != -3353) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x465 = 53;
	static uint32_t x466 = 593U;
	volatile int16_t x467 = 353;
	uint16_t x468 = 0U;
	volatile uint32_t t90 = 0U;

    t90 = (((x465*x466)|x467)&x468);

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x473 = -3;
	static volatile int32_t x474 = 14;
	static volatile int16_t x475 = 333;
	static int8_t x476 = INT8_MIN;
	static int32_t t91 = -793430385;

    t91 = (((x473*x474)|x475)&x476);

    if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x477 = UINT32_MAX;
	int64_t x478 = -75LL;
	static int8_t x479 = -1;
	static volatile int32_t x480 = INT32_MIN;
	static int64_t t92 = -444LL;

    t92 = (((x477*x478)|x479)&x480);

    if (t92 != -2147483648LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint8_t x481 = 1U;
	static int64_t x482 = INT64_MIN;
	int16_t x483 = INT16_MIN;

    t93 = (((x481*x482)|x483)&x484);

    if (t93 != 4489216LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x486 = -27224;
	uint8_t x487 = 28U;
	volatile int32_t t94 = -108067016;

    t94 = (((x485*x486)|x487)&x488);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x493 = INT16_MIN;
	int8_t x494 = INT8_MAX;
	int32_t x495 = -1;

    t95 = (((x493*x494)|x495)&x496);

    if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x503 = 792040831058LL;

    t96 = (((x501*x502)|x503)&x504);

    if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x506 = INT16_MIN;
	int32_t x507 = INT32_MIN;
	int32_t x508 = INT32_MIN;
	volatile uint32_t t97 = 1U;

    t97 = (((x505*x506)|x507)&x508);

    if (t97 != 2147483648U) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x513 = INT16_MAX;
	static uint16_t x514 = 136U;
	volatile int64_t x515 = INT64_MAX;
	static int32_t x516 = -1;
	volatile int64_t t98 = INT64_MAX;

    t98 = (((x513*x514)|x515)&x516);

    if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x517 = 1;
	uint16_t x519 = 6906U;
	volatile uint8_t x520 = UINT8_MAX;
	volatile int32_t t99 = -1046272;

    t99 = (((x517*x518)|x519)&x520);

    if (t99 != 255) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x521 = INT8_MIN;
	int8_t x522 = 46;
	int8_t x523 = -47;
	int16_t x524 = INT16_MIN;
	static volatile int32_t t100 = -362953;

    t100 = (((x521*x522)|x523)&x524);

    if (t100 != -32768) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x525 = INT8_MIN;
	int16_t x526 = 433;
	int16_t x527 = INT16_MIN;
	static uint8_t x528 = 9U;
	int32_t t101 = -4;

    t101 = (((x525*x526)|x527)&x528);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint16_t x529 = UINT16_MAX;
	uint16_t x530 = 1981U;
	int64_t x531 = INT64_MAX;
	static volatile uint64_t t102 = 63316LLU;

    t102 = (((x529*x530)|x531)&x532);

    if (t102 != 3LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x533 = INT64_MAX;
	int64_t x534 = -1LL;
	volatile uint16_t x536 = 0U;
	volatile int64_t t103 = -1353999985241LL;

    t103 = (((x533*x534)|x535)&x536);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x545 = INT16_MIN;
	int64_t x546 = 26394688911654LL;
	int8_t x547 = -1;
	int8_t x548 = 7;

    t104 = (((x545*x546)|x547)&x548);

    if (t104 != 7LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x554 = UINT64_MAX;
	uint64_t x555 = UINT64_MAX;
	int8_t x556 = INT8_MAX;
	static uint64_t t105 = 7472435219379168091LLU;

    t105 = (((x553*x554)|x555)&x556);

    if (t105 != 127LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x557 = INT16_MIN;
	volatile int16_t x558 = -1;
	uint16_t x560 = 0U;
	static int32_t t106 = -67969;

    t106 = (((x557*x558)|x559)&x560);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x561 = UINT8_MAX;
	uint8_t x562 = 54U;
	int16_t x563 = -1;
	static volatile int16_t x564 = INT16_MAX;
	static int32_t t107 = -345097077;

    t107 = (((x561*x562)|x563)&x564);

    if (t107 != 32767) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x565 = 59U;
	volatile int16_t x566 = INT16_MIN;
	uint32_t x567 = 4U;
	uint16_t x568 = UINT16_MAX;
	static volatile uint32_t t108 = 734U;

    t108 = (((x565*x566)|x567)&x568);

    if (t108 != 32772U) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x577 = INT32_MIN;
	uint32_t x578 = UINT32_MAX;
	int32_t x579 = INT32_MIN;
	uint64_t x580 = UINT64_MAX;
	uint64_t t109 = 527247760969502465LLU;

    t109 = (((x577*x578)|x579)&x580);

    if (t109 != 2147483648LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x581 = INT16_MIN;
	int64_t x583 = INT64_MIN;
	uint32_t x584 = 30141871U;
	int64_t t110 = -208138172896595LL;

    t110 = (((x581*x582)|x583)&x584);

    if (t110 != 25788416LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint8_t x589 = 1U;
	uint32_t x590 = 9384U;
	volatile int32_t x591 = INT32_MIN;
	uint16_t x592 = UINT16_MAX;

    t111 = (((x589*x590)|x591)&x592);

    if (t111 != 9384U) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x593 = -297464907LL;
	static int32_t x594 = INT32_MAX;
	int32_t x596 = INT32_MAX;
	static volatile int64_t t112 = 186205826LL;

    t112 = (((x593*x594)|x595)&x596);

    if (t112 != 2147483647LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x598 = INT8_MIN;
	volatile int32_t x599 = INT32_MIN;
	volatile int32_t x600 = 0;
	int32_t t113 = 213;

    t113 = (((x597*x598)|x599)&x600);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x601 = 3725U;
	int32_t x602 = -2;
	uint64_t x603 = UINT64_MAX;
	uint64_t x604 = 8207184LLU;
	volatile uint64_t t114 = 8LLU;

    t114 = (((x601*x602)|x603)&x604);

    if (t114 != 8207184LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x605 = UINT8_MAX;
	int64_t t115 = 134190745625274LL;

    t115 = (((x605*x606)|x607)&x608);

    if (t115 != 65025LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x609 = 3U;
	uint64_t x610 = 1373169198067LLU;
	int32_t x611 = INT32_MAX;
	static volatile uint64_t t116 = 589307337428303LLU;

    t116 = (((x609*x610)|x611)&x612);

    if (t116 != 4121021120498LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x614 = INT16_MAX;
	int64_t x615 = INT64_MIN;
	int16_t x616 = 169;
	static volatile int64_t t117 = 0LL;

    t117 = (((x613*x614)|x615)&x616);

    if (t117 != 1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint8_t x617 = 56U;
	int64_t x618 = 21716278308931LL;
	static int8_t x619 = INT8_MIN;
	int64_t x620 = INT64_MAX;

    t118 = (((x617*x618)|x619)&x620);

    if (t118 != 9223372036854775720LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x621 = -31605941630LL;
	int8_t x622 = INT8_MAX;
	int32_t x623 = INT32_MIN;
	int64_t x624 = -1LL;

    t119 = (((x621*x622)|x623)&x624);

    if (t119 != -307648898LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint8_t x633 = 11U;
	uint8_t x634 = 0U;
	uint8_t x636 = UINT8_MAX;
	volatile int64_t t120 = 31LL;

    t120 = (((x633*x634)|x635)&x636);

    if (t120 != 255LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x637 = 66197587787971679LLU;
	int8_t x638 = INT8_MIN;
	uint16_t x639 = 195U;
	volatile uint64_t t121 = 8LLU;

    t121 = (((x637*x638)|x639)&x640);

    if (t121 != 9973452834894512128LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x641 = -1;
	volatile uint16_t x642 = UINT16_MAX;
	int8_t x643 = -1;
	uint16_t x644 = 10U;
	volatile int32_t t122 = -1;

    t122 = (((x641*x642)|x643)&x644);

    if (t122 != 10) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x649 = 45U;
	static int64_t x650 = -1LL;
	uint64_t x652 = UINT64_MAX;
	uint64_t t123 = UINT64_MAX;

    t123 = (((x649*x650)|x651)&x652);

    if (t123 != UINT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x653 = 77649;
	volatile uint32_t x654 = 32084U;
	int32_t x655 = INT32_MIN;
	int32_t x656 = INT32_MAX;
	uint32_t t124 = 305U;

    t124 = (((x653*x654)|x655)&x656);

    if (t124 != 343806868U) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x658 = -1;
	int32_t x659 = INT32_MIN;
	uint64_t x660 = UINT64_MAX;
	uint64_t t125 = 194862784505100LLU;

    t125 = (((x657*x658)|x659)&x660);

    if (t125 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int8_t x661 = -1;
	static uint64_t x662 = 4041LLU;
	static volatile int8_t x663 = INT8_MAX;
	static int32_t x664 = -10;
	uint64_t t126 = 1110904351468953LLU;

    t126 = (((x661*x662)|x663)&x664);

    if (t126 != 18446744073709547638LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x665 = INT16_MIN;
	uint32_t x666 = 1654U;
	static int8_t x667 = 2;

    t127 = (((x665*x666)|x667)&x668);

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x669 = UINT8_MAX;
	int16_t x670 = 25;
	volatile uint16_t x671 = 393U;
	int32_t x672 = -1;
	static volatile int32_t t128 = 1665;

    t128 = (((x669*x670)|x671)&x672);

    if (t128 != 6639) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x673 = 100U;
	int64_t x674 = -5808444674LL;
	uint32_t x676 = 29U;
	int64_t t129 = -11520315573LL;

    t129 = (((x673*x674)|x675)&x676);

    if (t129 != 24LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile uint64_t x678 = 141696251820894007LLU;
	static int8_t x680 = 1;

    t130 = (((x677*x678)|x679)&x680);

    if (t130 != 1LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint64_t x685 = 3586177377153672610LLU;
	int64_t x686 = INT64_MAX;
	uint32_t x687 = 43U;
	uint8_t x688 = 95U;
	volatile uint64_t t131 = 325610113683LLU;

    t131 = (((x685*x686)|x687)&x688);

    if (t131 != 95LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x693 = -196777876880LL;
	uint32_t x696 = 51U;
	int64_t t132 = -1195561750941LL;

    t132 = (((x693*x694)|x695)&x696);

    if (t132 != 49LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x701 = -56;
	int16_t x702 = -79;
	static volatile int16_t x703 = 198;
	static int32_t t133 = -16527391;

    t133 = (((x701*x702)|x703)&x704);

    if (t133 != 4558) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x709 = -1;
	static int8_t x710 = INT8_MIN;
	int16_t x711 = INT16_MAX;
	int32_t x712 = 126;
	int32_t t134 = -196106034;

    t134 = (((x709*x710)|x711)&x712);

    if (t134 != 126) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile uint16_t x714 = 321U;
	int32_t x715 = -12114404;
	int16_t x716 = 402;
	int32_t t135 = -309;

    t135 = (((x713*x714)|x715)&x716);

    if (t135 != 402) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x721 = UINT16_MAX;
	static int16_t x723 = INT16_MIN;
	int32_t x724 = -454762633;
	volatile int32_t t136 = 1307;

    t136 = (((x721*x722)|x723)&x724);

    if (t136 != -454762636) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int16_t x725 = INT16_MIN;
	static int16_t x726 = INT16_MIN;
	volatile int32_t x727 = 0;
	volatile uint64_t x728 = UINT64_MAX;

    t137 = (((x725*x726)|x727)&x728);

    if (t137 != 1073741824LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x729 = -1;
	static uint32_t x730 = 36U;
	uint64_t x731 = UINT64_MAX;
	uint32_t x732 = UINT32_MAX;
	uint64_t t138 = 9454843156LLU;

    t138 = (((x729*x730)|x731)&x732);

    if (t138 != 4294967295LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t x733 = 3379446LLU;
	int8_t x734 = INT8_MIN;
	static uint32_t x735 = 2327U;
	int64_t x736 = INT64_MIN;
	volatile uint64_t t139 = 22318964156LLU;

    t139 = (((x733*x734)|x735)&x736);

    if (t139 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x738 = UINT16_MAX;
	int8_t x740 = -1;
	uint32_t t140 = 229271U;

    t140 = (((x737*x738)|x739)&x740);

    if (t140 != 179038719U) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x749 = 50352158914673434LL;
	static volatile int8_t x751 = -1;
	static volatile int16_t x752 = INT16_MAX;

    t141 = (((x749*x750)|x751)&x752);

    if (t141 != 32767LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x753 = UINT64_MAX;
	int8_t x754 = INT8_MAX;
	volatile int32_t x755 = -1;
	uint16_t x756 = 20U;
	volatile uint64_t t142 = 97304187600LLU;

    t142 = (((x753*x754)|x755)&x756);

    if (t142 != 20LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x757 = INT8_MIN;
	uint16_t x758 = 22971U;
	static int64_t x759 = INT64_MAX;
	uint64_t x760 = UINT64_MAX;
	uint64_t t143 = UINT64_MAX;

    t143 = (((x757*x758)|x759)&x760);

    if (t143 != UINT64_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x761 = 6;
	int32_t x762 = 1443;
	uint64_t x763 = UINT64_MAX;
	int16_t x764 = 3416;

    t144 = (((x761*x762)|x763)&x764);

    if (t144 != 3416LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x774 = 1547677;
	static volatile uint64_t x775 = 25801015180LLU;
	static int64_t x776 = 8927305705552790LL;
	uint64_t t145 = 5121688726LLU;

    t145 = (((x773*x774)|x775)&x776);

    if (t145 != 8903872363985814LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x778 = 509677780U;
	static volatile int8_t x779 = INT8_MIN;
	volatile uint64_t x780 = 88LLU;
	volatile uint64_t t146 = 5585049546098LLU;

    t146 = (((x777*x778)|x779)&x780);

    if (t146 != 80LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint16_t x789 = 7U;
	volatile uint8_t x790 = UINT8_MAX;
	int8_t x791 = INT8_MAX;
	static uint16_t x792 = 31316U;
	volatile int32_t t147 = 68987;

    t147 = (((x789*x790)|x791)&x792);

    if (t147 != 596) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x793 = INT64_MIN;
	uint16_t x794 = 0U;
	volatile uint32_t x795 = 5919U;
	int64_t t148 = 925855496007LL;

    t148 = (((x793*x794)|x795)&x796);

    if (t148 != 5919LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x801 = 384015U;
	uint32_t x802 = 3341U;
	uint16_t x803 = 0U;
	static volatile int64_t x804 = INT64_MIN;
	volatile int64_t t149 = 110150309LL;

    t149 = (((x801*x802)|x803)&x804);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x805 = 3018U;
	volatile uint8_t x806 = 102U;
	volatile int8_t x808 = 0;
	int64_t t150 = -14962329411550LL;

    t150 = (((x805*x806)|x807)&x808);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x809 = 13U;
	int16_t x810 = -1013;
	static int16_t x811 = -1;
	int8_t x812 = 1;

    t151 = (((x809*x810)|x811)&x812);

    if (t151 != 1U) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x813 = 739146970;
	static int32_t x814 = -1;
	static int32_t x815 = INT32_MIN;
	static uint8_t x816 = 20U;
	int32_t t152 = 1;

    t152 = (((x813*x814)|x815)&x816);

    if (t152 != 4) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x818 = 22U;
	int8_t x819 = INT8_MAX;
	uint32_t t153 = 205209797U;

    t153 = (((x817*x818)|x819)&x820);

    if (t153 != 2147483648U) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint16_t x821 = UINT16_MAX;
	int16_t x822 = -1;
	int16_t x824 = INT16_MIN;
	int32_t t154 = -254;

    t154 = (((x821*x822)|x823)&x824);

    if (t154 != -32768) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x825 = 10990693780903LL;
	static volatile uint16_t x826 = 2U;
	static volatile int32_t x827 = INT32_MIN;
	uint32_t x828 = UINT32_MAX;
	volatile int64_t t155 = 281LL;

    t155 = (((x825*x826)|x827)&x828);

    if (t155 != 4039908174LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x829 = 1U;
	volatile int32_t x830 = 19;
	int32_t x831 = 62303372;
	int32_t x832 = -26;
	volatile uint32_t t156 = 62692810U;

    t156 = (((x829*x830)|x831)&x832);

    if (t156 != 62303366U) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x837 = 58749595U;
	static int8_t x839 = -1;
	volatile int8_t x840 = INT8_MIN;
	uint32_t t157 = 787092U;

    t157 = (((x837*x838)|x839)&x840);

    if (t157 != 4294967168U) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x841 = 266538329203LLU;
	static uint64_t x842 = UINT64_MAX;
	uint64_t x843 = 2421242LLU;
	uint32_t x844 = 58U;
	volatile uint64_t t158 = 111669653836210LLU;

    t158 = (((x841*x842)|x843)&x844);

    if (t158 != 58LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x846 = -2311;
	uint16_t x848 = 95U;
	volatile uint64_t t159 = 49679931262566888LLU;

    t159 = (((x845*x846)|x847)&x848);

    if (t159 != 95LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x849 = 974219U;
	int32_t x850 = -1;
	uint64_t x851 = UINT64_MAX;
	int16_t x852 = -993;

    t160 = (((x849*x850)|x851)&x852);

    if (t160 != 18446744073709550623LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x853 = INT16_MIN;
	int16_t x855 = -1;
	volatile int32_t x856 = INT32_MAX;
	int32_t t161 = INT32_MAX;

    t161 = (((x853*x854)|x855)&x856);

    if (t161 != INT32_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x861 = UINT8_MAX;
	int64_t x863 = -137401437922082LL;
	volatile int32_t x864 = INT32_MAX;
	static volatile int64_t t162 = 642328675LL;

    t162 = (((x861*x862)|x863)&x864);

    if (t162 != 1008328447LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint8_t x865 = UINT8_MAX;
	volatile int8_t x868 = 27;
	volatile int64_t t163 = 499563685796996LL;

    t163 = (((x865*x866)|x867)&x868);

    if (t163 != 27LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x869 = -1;
	uint16_t x870 = 147U;
	volatile int8_t x871 = -1;
	volatile int32_t x872 = -1;

    t164 = (((x869*x870)|x871)&x872);

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x873 = INT16_MIN;
	uint64_t x874 = 92LLU;
	volatile uint64_t t165 = 1041754977506741535LLU;

    t165 = (((x873*x874)|x875)&x876);

    if (t165 != 2LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x877 = 10563;
	uint8_t x878 = 17U;
	int32_t x879 = INT32_MAX;
	volatile uint16_t x880 = UINT16_MAX;
	int32_t t166 = -1536587;

    t166 = (((x877*x878)|x879)&x880);

    if (t166 != 65535) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x881 = 15503U;
	uint64_t x882 = 340806451LLU;
	int8_t x883 = INT8_MAX;
	uint64_t t167 = 4921547801066453384LLU;

    t167 = (((x881*x882)|x883)&x884);

    if (t167 != 4441131013138LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x885 = INT8_MIN;
	int64_t x887 = -1LL;
	volatile int16_t x888 = INT16_MIN;
	int64_t t168 = -137135833LL;

    t168 = (((x885*x886)|x887)&x888);

    if (t168 != -32768LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint64_t x889 = 7459106146LLU;
	int16_t x890 = INT16_MIN;
	uint8_t x891 = UINT8_MAX;
	uint8_t x892 = 24U;
	uint64_t t169 = 2415479969149224252LLU;

    t169 = (((x889*x890)|x891)&x892);

    if (t169 != 24LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x893 = 960;
	uint64_t x894 = 2172816070812852859LLU;
	int32_t x895 = 0;
	uint64_t x896 = 56106050725287LLU;
	static uint64_t t170 = 24135842372544LLU;

    t170 = (((x893*x894)|x895)&x896);

    if (t170 != 35185197384960LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x901 = -1;
	int16_t x902 = 0;
	int8_t x903 = INT8_MIN;
	int64_t x904 = INT64_MIN;

    t171 = (((x901*x902)|x903)&x904);

    if (t171 != INT64_MIN) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x906 = INT16_MAX;
	uint64_t x907 = 0LLU;
	static int16_t x908 = INT16_MIN;
	uint64_t t172 = 2LLU;

    t172 = (((x905*x906)|x907)&x908);

    if (t172 != 227819947331256320LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int16_t x909 = INT16_MAX;
	static uint32_t x910 = 10U;
	int32_t x911 = 77;
	int64_t t173 = -3873477030431387274LL;

    t173 = (((x909*x910)|x911)&x912);

    if (t173 != 287728LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x913 = -1127604712LL;
	int32_t x914 = -1;
	int64_t x915 = 2LL;
	int32_t x916 = -13;
	int64_t t174 = 0LL;

    t174 = (((x913*x914)|x915)&x916);

    if (t174 != 1127604706LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x917 = -1LL;
	static volatile uint64_t x918 = 3LLU;
	static volatile int16_t x919 = INT16_MIN;
	int32_t x920 = -1;
	volatile uint64_t t175 = 0LLU;

    t175 = (((x917*x918)|x919)&x920);

    if (t175 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x921 = 3204LLU;
	static int32_t x922 = -1;
	static int8_t x923 = INT8_MIN;
	uint64_t x924 = 228441911LLU;
	volatile uint64_t t176 = 749165444744631600LLU;

    t176 = (((x921*x922)|x923)&x924);

    if (t176 != 228441908LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x925 = 1073U;
	uint8_t x927 = UINT8_MAX;
	static volatile uint64_t t177 = 502LLU;

    t177 = (((x925*x926)|x927)&x928);

    if (t177 != 4091794949055323LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint16_t x929 = 63U;
	volatile int8_t x931 = INT8_MIN;
	int32_t x932 = INT32_MIN;
	volatile int64_t t178 = 12779LL;

    t178 = (((x929*x930)|x931)&x932);

    if (t178 != -2147483648LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x938 = 0;
	int32_t x939 = -175753412;
	int32_t x940 = INT32_MIN;

    t179 = (((x937*x938)|x939)&x940);

    if (t179 != INT32_MIN) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x941 = UINT8_MAX;
	uint8_t x942 = 7U;
	int64_t x943 = -1LL;
	static volatile uint32_t x944 = 895225013U;
	volatile int64_t t180 = 121766LL;

    t180 = (((x941*x942)|x943)&x944);

    if (t180 != 895225013LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x945 = UINT8_MAX;
	volatile uint32_t x947 = 113U;
	uint16_t x948 = 8157U;
	volatile uint32_t t181 = 12743U;

    t181 = (((x945*x946)|x947)&x948);

    if (t181 != 8017U) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x953 = -474;
	uint32_t x955 = UINT32_MAX;
	uint8_t x956 = 35U;
	volatile uint32_t t182 = 63335U;

    t182 = (((x953*x954)|x955)&x956);

    if (t182 != 35U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x957 = 0U;
	int16_t x958 = INT16_MAX;
	static uint16_t x959 = 1015U;
	volatile int8_t x960 = INT8_MAX;
	int32_t t183 = 141;

    t183 = (((x957*x958)|x959)&x960);

    if (t183 != 119) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x961 = 4300936U;
	uint8_t x962 = UINT8_MAX;
	int16_t x963 = INT16_MIN;
	static uint32_t t184 = 1158349965U;

    t184 = (((x961*x962)|x963)&x964);

    if (t184 != 8792U) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x965 = INT16_MIN;
	static uint16_t x966 = UINT16_MAX;
	static int8_t x967 = -1;
	volatile int8_t x968 = INT8_MIN;
	int32_t t185 = -47;

    t185 = (((x965*x966)|x967)&x968);

    if (t185 != -128) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int8_t x969 = INT8_MIN;
	int8_t x970 = 58;
	static int32_t x971 = INT32_MIN;

    t186 = (((x969*x970)|x971)&x972);

    if (t186 != -32768) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x973 = UINT8_MAX;
	uint64_t x974 = UINT64_MAX;
	volatile int32_t x975 = INT32_MIN;
	int8_t x976 = INT8_MIN;

    t187 = (((x973*x974)|x975)&x976);

    if (t187 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x982 = -1;
	volatile int32_t x983 = INT32_MIN;
	int64_t x984 = INT64_MIN;
	int64_t t188 = INT64_MIN;

    t188 = (((x981*x982)|x983)&x984);

    if (t188 != INT64_MIN) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x986 = 443;
	uint32_t x987 = 92U;
	int64_t x988 = INT64_MIN;
	int64_t t189 = 1LL;

    t189 = (((x985*x986)|x987)&x988);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x989 = -2681;
	int64_t x990 = -1LL;
	volatile uint64_t x991 = 3040141619696LLU;
	int8_t x992 = INT8_MIN;
	uint64_t t190 = 106LLU;

    t190 = (((x989*x990)|x991)&x992);

    if (t190 != 3040141622144LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x994 = 188;
	int32_t x995 = INT32_MIN;
	int64_t x996 = -851620LL;
	int64_t t191 = 209427LL;

    t191 = (((x993*x994)|x995)&x996);

    if (t191 != -2147483324LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int64_t x998 = INT64_MAX;
	uint32_t x1000 = 1931U;
	volatile int64_t t192 = 16554189838LL;

    t192 = (((x997*x998)|x999)&x1000);

    if (t192 != 1921LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint32_t x1001 = 49317103U;
	int32_t x1002 = INT32_MIN;
	volatile int8_t x1003 = -1;
	uint64_t x1004 = 12942326018039369LLU;
	volatile uint64_t t193 = 7630684567162953LLU;

    t193 = (((x1001*x1002)|x1003)&x1004);

    if (t193 != 417291849LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1009 = INT8_MAX;
	static uint8_t x1010 = UINT8_MAX;
	int8_t x1011 = INT8_MIN;
	uint16_t x1012 = UINT16_MAX;
	static int32_t t194 = -12250;

    t194 = (((x1009*x1010)|x1011)&x1012);

    if (t194 != 65409) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int32_t x1013 = 0;
	uint32_t x1014 = 72827U;
	uint32_t x1015 = 32415398U;
	volatile int64_t x1016 = -1LL;
	volatile int64_t t195 = 3312142845175575LL;

    t195 = (((x1013*x1014)|x1015)&x1016);

    if (t195 != 32415398LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1020 = 6715LL;
	volatile int64_t t196 = -1LL;

    t196 = (((x1017*x1018)|x1019)&x1020);

    if (t196 != 6680LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1022 = -1;
	int16_t x1023 = -10113;
	static uint8_t x1024 = 4U;
	int32_t t197 = -1;

    t197 = (((x1021*x1022)|x1023)&x1024);

    if (t197 != 4) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x1025 = 119932;
	int8_t x1026 = 1;
	volatile int16_t x1028 = INT16_MAX;
	volatile int32_t t198 = -49037;

    t198 = (((x1025*x1026)|x1027)&x1028);

    if (t198 != 32764) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1029 = INT8_MIN;
	uint32_t x1030 = UINT32_MAX;
	volatile int32_t x1031 = INT32_MIN;
	volatile int64_t t199 = -3773818877077LL;

    t199 = (((x1029*x1030)|x1031)&x1032);

    if (t199 != 2147483648LL) { NG(); } else { ; }
	
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

