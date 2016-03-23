
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

int64_t x2 = INT64_MIN;
uint16_t x3 = UINT16_MAX;
int8_t x5 = -1;
int64_t x7 = -1LL;
volatile int64_t x17 = 3LL;
volatile int16_t x18 = -2823;
uint64_t x20 = 51401051555006LLU;
uint64_t t4 = 3368LLU;
int16_t x24 = INT16_MIN;
uint16_t x28 = 7U;
uint16_t x35 = 1U;
static uint64_t t9 = 169117314518901223LLU;
int32_t x46 = INT32_MIN;
static uint16_t x48 = 2014U;
int32_t t10 = -1;
volatile uint16_t x52 = 114U;
static int16_t x57 = -399;
volatile uint64_t x59 = 13LLU;
int32_t x63 = INT32_MIN;
uint16_t x73 = 1U;
uint32_t x86 = 15481196U;
volatile int64_t x89 = -1LL;
int64_t x102 = 2781664978223LL;
int8_t x103 = -1;
static int32_t x107 = -1;
int32_t t21 = 10163585;
int64_t x110 = -17082496019845171LL;
static uint16_t x123 = 3295U;
int8_t x125 = INT8_MIN;
volatile int16_t x126 = INT16_MIN;
int64_t x128 = -1LL;
volatile uint32_t x134 = UINT32_MAX;
int32_t x151 = INT32_MAX;
int64_t x154 = -228915596324LL;
static int64_t x155 = 29LL;
volatile uint64_t x157 = 855211LLU;
int32_t x163 = INT32_MIN;
static volatile int64_t x167 = INT64_MIN;
volatile int64_t x168 = -1LL;
int32_t x182 = INT32_MAX;
int64_t t35 = -1646399LL;
volatile uint16_t x185 = UINT16_MAX;
int16_t x187 = INT16_MAX;
volatile int64_t x189 = -1LL;
uint64_t t37 = 45716LLU;
int8_t x196 = INT8_MIN;
int64_t t38 = 303755325565831LL;
int8_t x206 = -56;
int64_t x209 = 47404LL;
int32_t x225 = INT32_MIN;
uint64_t t44 = 37173389034707LLU;
static volatile int16_t x232 = 46;
volatile uint64_t t45 = 180132268060517LLU;
int64_t x236 = INT64_MIN;
volatile uint32_t x241 = UINT32_MAX;
uint32_t x243 = UINT32_MAX;
int32_t x247 = -1;
static int32_t x260 = -1;
static int32_t x262 = INT32_MAX;
uint8_t x269 = 3U;
volatile int32_t x282 = -868664257;
volatile int64_t t56 = 0LL;
static volatile int32_t x290 = INT32_MAX;
uint16_t x291 = UINT16_MAX;
int32_t x297 = 28392149;
static int16_t x298 = INT16_MIN;
volatile int32_t t59 = 713633;
int16_t x304 = -1;
int32_t t62 = 19;
int64_t x318 = -1LL;
static int64_t x323 = -26LL;
int64_t x337 = -6004050675296048LL;
int64_t x343 = INT64_MIN;
volatile int64_t t67 = -38LL;
volatile uint16_t x347 = 1U;
int64_t x351 = -2602377LL;
int64_t x363 = INT64_MIN;
uint16_t x367 = 45U;
int8_t x376 = -15;
int32_t x378 = -183337360;
volatile int32_t x379 = INT32_MIN;
int16_t x380 = INT16_MAX;
uint16_t x383 = 69U;
static uint32_t x391 = 339954U;
static volatile uint32_t t78 = 1379U;
static int32_t x404 = 172;
int64_t x405 = INT64_MAX;
int64_t x406 = -3542794106696029193LL;
static volatile uint16_t x412 = 3822U;
static int64_t t82 = 0LL;
uint16_t x417 = 1020U;
uint8_t x421 = UINT8_MAX;
static uint16_t x429 = 2774U;
uint32_t x430 = UINT32_MAX;
uint64_t x442 = 39770954376923LLU;
int16_t x446 = -917;
int8_t x449 = INT8_MIN;
static int32_t x459 = -327243;
int64_t x460 = INT64_MAX;
uint16_t x462 = UINT16_MAX;
volatile int32_t t95 = 898489;
uint32_t x475 = UINT32_MAX;
volatile uint64_t t96 = 6LLU;
int16_t x491 = INT16_MIN;
int32_t t100 = 20676432;
volatile int64_t x505 = INT64_MIN;
int16_t x507 = INT16_MIN;
uint16_t x511 = UINT16_MAX;
static uint16_t x513 = 3168U;
volatile uint64_t x515 = 902678808831LLU;
volatile uint64_t t104 = 32173292409004883LLU;
int8_t x520 = INT8_MAX;
int32_t x527 = -493656;
static int16_t x528 = -12;
int16_t x536 = 14;
int32_t x562 = INT32_MIN;
int16_t x564 = INT16_MAX;
int32_t t115 = 9236;
int32_t x577 = INT32_MAX;
int16_t x578 = INT16_MIN;
static volatile int8_t x582 = INT8_MIN;
volatile int16_t x587 = INT16_MIN;
static int16_t x588 = INT16_MIN;
int64_t x597 = INT64_MAX;
volatile int8_t x600 = 41;
volatile int64_t t124 = -98259231948989LL;
uint16_t x624 = 1U;
static volatile int64_t t125 = 34287369391LL;
int16_t x626 = 23;
int64_t t126 = 86092675246141LL;
int16_t x630 = INT16_MAX;
static uint8_t x633 = UINT8_MAX;
int64_t x634 = INT64_MIN;
volatile int32_t x638 = INT32_MIN;
uint32_t x640 = 29U;
uint64_t t130 = 148888117853LLU;
uint16_t x646 = UINT16_MAX;
volatile uint8_t x647 = 44U;
volatile int32_t x655 = -7604;
uint64_t t133 = 1165LLU;
static volatile int64_t t134 = 10470800351606LL;
static volatile uint16_t x664 = 44U;
volatile uint64_t t137 = 26377344599997801LLU;
volatile int32_t t139 = -423;
int16_t x688 = -1;
int16_t x692 = 10299;
int32_t x703 = -1;
int8_t x704 = -3;
static int16_t x705 = INT16_MIN;
int8_t x706 = INT8_MIN;
static int16_t x707 = -1;
int64_t x711 = 266162750608312LL;
static int8_t x714 = 1;
int64_t x718 = -785LL;
static int8_t x725 = INT8_MIN;
int32_t x726 = 957;
int32_t x727 = 178582;
volatile int32_t t151 = 1;
uint32_t x734 = UINT32_MAX;
int32_t x735 = 686171;
static int64_t x743 = 115LL;
int8_t x744 = 30;
volatile int64_t t153 = -287023LL;
int8_t x747 = INT8_MIN;
uint16_t x748 = 3U;
volatile uint32_t t155 = 30U;
int64_t x756 = -1LL;
int64_t x761 = INT64_MIN;
static uint8_t x762 = 1U;
volatile uint64_t x768 = 1LLU;
static volatile uint32_t x773 = UINT32_MAX;
volatile uint64_t t160 = 493641989850997LLU;
uint64_t x777 = UINT64_MAX;
static int16_t x781 = INT16_MAX;
int64_t x791 = -2791955788LL;
int8_t x792 = INT8_MIN;
int8_t x794 = -32;
uint32_t x795 = 1128U;
int64_t x796 = 26LL;
int64_t t165 = 1900LL;
volatile uint64_t x802 = 718LLU;
int16_t x807 = INT16_MIN;
volatile uint64_t t168 = 19501LLU;
int16_t x818 = INT16_MIN;
int8_t x819 = -1;
static uint64_t t169 = 627309LLU;
int64_t t170 = -3829795250455LL;
uint16_t x830 = 15796U;
int64_t x842 = INT64_MIN;
uint64_t t174 = 0LLU;
static volatile uint8_t x854 = 67U;
uint64_t x856 = 2692478346482LLU;
volatile uint64_t t175 = 463005174185876215LLU;
uint32_t t176 = 14067742U;
int64_t x869 = 11636155944LL;
uint16_t x870 = 0U;
int16_t x875 = -1;
int64_t x880 = -1LL;
int32_t x881 = INT32_MIN;
uint16_t x893 = 6U;
static int32_t x896 = INT32_MIN;
volatile int64_t t185 = 3471LL;
volatile uint64_t x902 = UINT64_MAX;
uint8_t x903 = UINT8_MAX;
uint32_t x905 = 0U;
int32_t x911 = INT32_MAX;
int16_t x914 = INT16_MIN;
static uint32_t x919 = 2U;
volatile uint64_t x936 = UINT64_MAX;
int8_t x942 = -1;
uint32_t x943 = 990974U;
static uint16_t x944 = 77U;
int32_t x945 = -1;
volatile uint64_t t195 = 1LLU;
volatile uint64_t x960 = 3910463LLU;
int8_t x967 = INT8_MIN;
int16_t x974 = -1;


void f0(void) {
    	int8_t x1 = 19;
	int32_t x4 = -1;
	int64_t t0 = -12718881258LL;

    t0 = (((x1+x2)%x3)/x4);

    if (t0 != 32749LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x6 = INT16_MIN;
	int32_t x8 = -1;
	static volatile int64_t t1 = -1LL;

    t1 = (((x5+x6)%x7)/x8);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	volatile int32_t x10 = 40314;
	uint64_t x11 = 20214981LLU;
	volatile int64_t x12 = 1442142751984975580LL;
	volatile uint64_t t2 = 1LLU;

    t2 = (((x9+x10)%x11)/x12);

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = UINT8_MAX;
	volatile uint32_t x14 = UINT32_MAX;
	volatile int16_t x15 = -15;
	int64_t x16 = INT64_MIN;
	volatile int64_t t3 = -521LL;

    t3 = (((x13+x14)%x15)/x16);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x19 = 15558729LLU;

    t4 = (((x17+x18)%x19)/x20);

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MAX;
	volatile uint16_t x22 = UINT16_MAX;
	volatile uint8_t x23 = 1U;
	volatile int32_t t5 = -28616;

    t5 = (((x21+x22)%x23)/x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = -25;
	int64_t x26 = INT64_MAX;
	volatile int64_t x27 = INT64_MIN;
	int64_t t6 = 523396346837LL;

    t6 = (((x25+x26)%x27)/x28);

    if (t6 != 1317624576693539397LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x33 = -1;
	static int32_t x34 = -1;
	int64_t x36 = INT64_MIN;
	volatile int64_t t7 = -207102078LL;

    t7 = (((x33+x34)%x35)/x36);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x37 = 1;
	uint64_t x38 = 5LLU;
	volatile int32_t x39 = 253611;
	volatile int64_t x40 = -88599900LL;
	uint64_t t8 = 1978001313LLU;

    t8 = (((x37+x38)%x39)/x40);

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x41 = 5049333LLU;
	volatile int8_t x42 = -1;
	uint16_t x43 = UINT16_MAX;
	int8_t x44 = -1;

    t9 = (((x41+x42)%x43)/x44);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x45 = 90U;
	int32_t x47 = -1;

    t10 = (((x45+x46)%x47)/x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x49 = -1;
	int8_t x50 = INT8_MIN;
	volatile int8_t x51 = INT8_MIN;
	int32_t t11 = -87798275;

    t11 = (((x49+x50)%x51)/x52);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x58 = -399;
	volatile int64_t x60 = -1LL;
	volatile uint64_t t12 = 47LLU;

    t12 = (((x57+x58)%x59)/x60);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x61 = 2U;
	int32_t x62 = INT32_MIN;
	uint16_t x64 = UINT16_MAX;
	int32_t t13 = 0;

    t13 = (((x61+x62)%x63)/x64);

    if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x65 = INT16_MIN;
	int64_t x66 = INT64_MAX;
	static int8_t x67 = -1;
	int8_t x68 = INT8_MAX;
	int64_t t14 = -28201660LL;

    t14 = (((x65+x66)%x67)/x68);

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x74 = INT64_MIN;
	int16_t x75 = INT16_MIN;
	uint32_t x76 = UINT32_MAX;
	static int64_t t15 = 227319341253LL;

    t15 = (((x73+x74)%x75)/x76);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x77 = INT64_MIN;
	uint32_t x78 = UINT32_MAX;
	static int64_t x79 = INT64_MIN;
	volatile int16_t x80 = -1;
	static volatile int64_t t16 = 2025009LL;

    t16 = (((x77+x78)%x79)/x80);

    if (t16 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x85 = INT16_MIN;
	int8_t x87 = 37;
	static volatile int8_t x88 = -1;
	static uint32_t t17 = 11378959U;

    t17 = (((x85+x86)%x87)/x88);

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x90 = UINT64_MAX;
	int8_t x91 = 4;
	int16_t x92 = -1;
	static volatile uint64_t t18 = 13278208LLU;

    t18 = (((x89+x90)%x91)/x92);

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x97 = 68855310792LLU;
	int64_t x98 = -25020715292375076LL;
	uint32_t x99 = UINT32_MAX;
	int8_t x100 = INT8_MIN;
	uint64_t t19 = 8583325497706196LLU;

    t19 = (((x97+x98)%x99)/x100);

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x101 = INT32_MIN;
	static volatile int16_t x104 = -4;
	volatile int64_t t20 = -7970LL;

    t20 = (((x101+x102)%x103)/x104);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x105 = INT8_MIN;
	int16_t x106 = INT16_MIN;
	int8_t x108 = 41;

    t21 = (((x105+x106)%x107)/x108);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x109 = INT16_MIN;
	int64_t x111 = -341833129637241282LL;
	uint8_t x112 = 47U;
	volatile int64_t t22 = -655250946985LL;

    t22 = (((x109+x110)%x111)/x112);

    if (t22 != -363457362125062LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x113 = INT16_MAX;
	int8_t x114 = 37;
	int8_t x115 = -21;
	int64_t x116 = -1LL;
	volatile int64_t t23 = 499LL;

    t23 = (((x113+x114)%x115)/x116);

    if (t23 != -2LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x117 = 3;
	uint64_t x118 = UINT64_MAX;
	volatile int16_t x119 = INT16_MIN;
	uint32_t x120 = UINT32_MAX;
	uint64_t t24 = 37096647007762185LLU;

    t24 = (((x117+x118)%x119)/x120);

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x121 = 2346844;
	static uint8_t x122 = 1U;
	int8_t x124 = INT8_MAX;
	int32_t t25 = -172039;

    t25 = (((x121+x122)%x123)/x124);

    if (t25 != 6) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x127 = INT16_MIN;
	volatile int64_t t26 = -55091023283627187LL;

    t26 = (((x125+x126)%x127)/x128);

    if (t26 != 128LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x129 = -1;
	static int32_t x130 = 2;
	int32_t x131 = -1;
	uint16_t x132 = 7917U;
	int32_t t27 = 505550;

    t27 = (((x129+x130)%x131)/x132);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x133 = -62;
	uint16_t x135 = UINT16_MAX;
	volatile int64_t x136 = INT64_MIN;
	volatile int64_t t28 = -8LL;

    t28 = (((x133+x134)%x135)/x136);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x141 = INT32_MIN;
	uint32_t x142 = UINT32_MAX;
	static int64_t x143 = -1LL;
	int64_t x144 = INT64_MIN;
	volatile int64_t t29 = 127810556065LL;

    t29 = (((x141+x142)%x143)/x144);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x149 = 62;
	static volatile int64_t x150 = -1LL;
	uint32_t x152 = UINT32_MAX;
	volatile int64_t t30 = 968036329636LL;

    t30 = (((x149+x150)%x151)/x152);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x153 = 0U;
	uint64_t x156 = 11039LLU;
	volatile uint64_t t31 = 3286320566591LLU;

    t31 = (((x153+x154)%x155)/x156);

    if (t31 != 1671052094728648LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x158 = INT8_MAX;
	static int8_t x159 = 62;
	volatile int16_t x160 = -1;
	volatile uint64_t t32 = 1337344LLU;

    t32 = (((x157+x158)%x159)/x160);

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x161 = 54U;
	static int16_t x162 = -9130;
	uint8_t x164 = 29U;
	volatile int32_t t33 = 2;

    t33 = (((x161+x162)%x163)/x164);

    if (t33 != -312) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x165 = -928151209;
	int16_t x166 = INT16_MIN;
	volatile int64_t t34 = 0LL;

    t34 = (((x165+x166)%x167)/x168);

    if (t34 != 928183977LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x181 = INT64_MIN;
	int16_t x183 = -117;
	int16_t x184 = INT16_MAX;

    t35 = (((x181+x182)%x183)/x184);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x186 = INT16_MIN;
	uint64_t x188 = 5557957784308998LLU;
	static volatile uint64_t t36 = 790848059LLU;

    t36 = (((x185+x186)%x187)/x188);

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x190 = 13513U;
	int16_t x191 = INT16_MIN;
	uint64_t x192 = UINT64_MAX;

    t37 = (((x189+x190)%x191)/x192);

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x193 = 2U;
	static uint32_t x194 = 6629U;
	int64_t x195 = -1LL;

    t38 = (((x193+x194)%x195)/x196);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x201 = 1493U;
	uint32_t x202 = UINT32_MAX;
	volatile int8_t x203 = -25;
	static int16_t x204 = 38;
	uint32_t t39 = 66775015U;

    t39 = (((x201+x202)%x203)/x204);

    if (t39 != 39U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x205 = 2532101847494200LLU;
	volatile int32_t x207 = -5;
	static volatile int16_t x208 = -200;
	uint64_t t40 = 9169750939988680349LLU;

    t40 = (((x205+x206)%x207)/x208);

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x210 = -1;
	volatile int32_t x211 = INT32_MIN;
	uint16_t x212 = 124U;
	int64_t t41 = -428LL;

    t41 = (((x209+x210)%x211)/x212);

    if (t41 != 382LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x217 = INT8_MIN;
	uint32_t x218 = 1U;
	uint8_t x219 = 15U;
	volatile uint8_t x220 = 81U;
	uint32_t t42 = 1829626331U;

    t42 = (((x217+x218)%x219)/x220);

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x221 = 69231LL;
	int64_t x222 = INT64_MIN;
	int32_t x223 = INT32_MAX;
	static int32_t x224 = INT32_MIN;
	int64_t t43 = -766996784812553498LL;

    t43 = (((x221+x222)%x223)/x224);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x226 = UINT64_MAX;
	uint8_t x227 = UINT8_MAX;
	uint32_t x228 = 97U;

    t44 = (((x225+x226)%x227)/x228);

    if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x229 = 33U;
	int64_t x230 = INT64_MIN;
	uint64_t x231 = UINT64_MAX;

    t45 = (((x229+x230)%x231)/x232);

    if (t45 != 200508087757712518LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x233 = 6U;
	int32_t x234 = -4;
	uint16_t x235 = 63U;
	volatile int64_t t46 = -52963783969188LL;

    t46 = (((x233+x234)%x235)/x236);

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int64_t x237 = -1LL;
	static int16_t x238 = INT16_MAX;
	volatile uint8_t x239 = UINT8_MAX;
	int32_t x240 = -32;
	volatile int64_t t47 = -4144LL;

    t47 = (((x237+x238)%x239)/x240);

    if (t47 != -3LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x242 = INT8_MIN;
	int16_t x244 = -6;
	volatile uint32_t t48 = 0U;

    t48 = (((x241+x242)%x243)/x244);

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int16_t x245 = INT16_MIN;
	int32_t x246 = INT32_MAX;
	uint16_t x248 = UINT16_MAX;
	int32_t t49 = 727;

    t49 = (((x245+x246)%x247)/x248);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x253 = UINT32_MAX;
	static int64_t x254 = INT64_MIN;
	uint64_t x255 = 25121126LLU;
	uint32_t x256 = 13161143U;
	static volatile uint64_t t50 = 1040LLU;

    t50 = (((x253+x254)%x255)/x256);

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x257 = 10;
	static int64_t x258 = -1LL;
	int8_t x259 = -1;
	volatile int64_t t51 = -24907345866155363LL;

    t51 = (((x257+x258)%x259)/x260);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x261 = 69LLU;
	int64_t x263 = INT64_MIN;
	volatile int8_t x264 = -33;
	volatile uint64_t t52 = 170LLU;

    t52 = (((x261+x262)%x263)/x264);

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int64_t x265 = -1LL;
	int8_t x266 = -1;
	static uint16_t x267 = 180U;
	int16_t x268 = 1030;
	volatile int64_t t53 = -44LL;

    t53 = (((x265+x266)%x267)/x268);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x270 = 1502;
	int16_t x271 = 439;
	static uint16_t x272 = 39U;
	volatile int32_t t54 = -212009312;

    t54 = (((x269+x270)%x271)/x272);

    if (t54 != 4) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x281 = -1LL;
	volatile int64_t x283 = INT64_MIN;
	static int8_t x284 = INT8_MIN;
	volatile int64_t t55 = 101484LL;

    t55 = (((x281+x282)%x283)/x284);

    if (t55 != 6786439LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x285 = 1016;
	volatile int64_t x286 = INT64_MIN;
	volatile int8_t x287 = INT8_MAX;
	uint32_t x288 = 584302U;

    t56 = (((x285+x286)%x287)/x288);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x289 = INT64_MIN;
	int32_t x292 = -471004143;
	static volatile int64_t t57 = 3448025064407LL;

    t57 = (((x289+x290)%x291)/x292);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x293 = 10748869U;
	int64_t x294 = -1LL;
	int16_t x295 = INT16_MIN;
	volatile int32_t x296 = 10769173;
	static volatile int64_t t58 = -17273LL;

    t58 = (((x293+x294)%x295)/x296);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x299 = 8;
	volatile int8_t x300 = INT8_MIN;

    t59 = (((x297+x298)%x299)/x300);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x301 = 125U;
	uint32_t x302 = 2084837U;
	static uint64_t x303 = UINT64_MAX;
	uint64_t t60 = 7226482437397968269LLU;

    t60 = (((x301+x302)%x303)/x304);

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x305 = INT64_MIN;
	uint32_t x306 = 4050U;
	volatile int16_t x307 = INT16_MIN;
	int64_t x308 = INT64_MAX;
	static volatile int64_t t61 = -2162LL;

    t61 = (((x305+x306)%x307)/x308);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x309 = 1056;
	static int32_t x310 = INT32_MIN;
	static uint16_t x311 = UINT16_MAX;
	static volatile int16_t x312 = INT16_MIN;

    t62 = (((x309+x310)%x311)/x312);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x317 = UINT32_MAX;
	int64_t x319 = -1LL;
	static int64_t x320 = -8006510849468LL;
	static int64_t t63 = -105LL;

    t63 = (((x317+x318)%x319)/x320);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint8_t x321 = 2U;
	int32_t x322 = -1;
	volatile int8_t x324 = INT8_MIN;
	volatile int64_t t64 = 1643815301LL;

    t64 = (((x321+x322)%x323)/x324);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x333 = 61925564991744LLU;
	static uint16_t x334 = 23142U;
	volatile int32_t x335 = -1;
	volatile uint8_t x336 = 5U;
	volatile uint64_t t65 = 49LLU;

    t65 = (((x333+x334)%x335)/x336);

    if (t65 != 12385113002977LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x338 = -589894308;
	int32_t x339 = -1;
	static int64_t x340 = INT64_MIN;
	volatile int64_t t66 = -117LL;

    t66 = (((x337+x338)%x339)/x340);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x341 = INT16_MAX;
	int16_t x342 = -1;
	volatile uint16_t x344 = 966U;

    t67 = (((x341+x342)%x343)/x344);

    if (t67 != 33LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x345 = 69013LL;
	int16_t x346 = INT16_MIN;
	static volatile uint32_t x348 = 3995285U;
	int64_t t68 = 26806691051291644LL;

    t68 = (((x345+x346)%x347)/x348);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x349 = 4LLU;
	static uint16_t x350 = 39U;
	volatile int64_t x352 = -158492LL;
	volatile uint64_t t69 = 1586LLU;

    t69 = (((x349+x350)%x351)/x352);

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x353 = INT16_MIN;
	volatile uint8_t x354 = UINT8_MAX;
	int8_t x355 = INT8_MAX;
	static int16_t x356 = INT16_MIN;
	static int32_t t70 = 10820540;

    t70 = (((x353+x354)%x355)/x356);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x361 = INT32_MIN;
	uint32_t x362 = 501298U;
	volatile int32_t x364 = INT32_MAX;
	static int64_t t71 = 331411177880LL;

    t71 = (((x361+x362)%x363)/x364);

    if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x365 = INT16_MIN;
	uint64_t x366 = 153908LLU;
	int32_t x368 = -27599814;
	volatile uint64_t t72 = 526831670LLU;

    t72 = (((x365+x366)%x367)/x368);

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x369 = INT32_MIN;
	int32_t x370 = 2338;
	int32_t x371 = -1;
	uint64_t x372 = 355507306942702LLU;
	static uint64_t t73 = 12LLU;

    t73 = (((x369+x370)%x371)/x372);

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x373 = 2LL;
	static int16_t x374 = INT16_MIN;
	static int32_t x375 = INT32_MIN;
	int64_t t74 = -12386688LL;

    t74 = (((x373+x374)%x375)/x376);

    if (t74 != 2184LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int32_t x377 = INT32_MAX;
	volatile int32_t t75 = 17;

    t75 = (((x377+x378)%x379)/x380);

    if (t75 != 59942) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x381 = 114LLU;
	int64_t x382 = INT64_MAX;
	volatile int8_t x384 = -1;
	static uint64_t t76 = 203684885883LLU;

    t76 = (((x381+x382)%x383)/x384);

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x385 = 8U;
	volatile int8_t x386 = INT8_MAX;
	uint8_t x387 = UINT8_MAX;
	uint8_t x388 = UINT8_MAX;
	int32_t t77 = -88324456;

    t77 = (((x385+x386)%x387)/x388);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x389 = 1419U;
	int16_t x390 = INT16_MIN;
	uint32_t x392 = UINT32_MAX;

    t78 = (((x389+x390)%x391)/x392);

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x401 = INT64_MIN;
	uint8_t x402 = 1U;
	static int16_t x403 = INT16_MIN;
	volatile int64_t t79 = -14LL;

    t79 = (((x401+x402)%x403)/x404);

    if (t79 != -190LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x407 = -7402;
	volatile uint32_t x408 = UINT32_MAX;
	static int64_t t80 = -15606565594074LL;

    t80 = (((x405+x406)%x407)/x408);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x409 = 12U;
	int8_t x410 = INT8_MIN;
	static int32_t x411 = INT32_MIN;
	int32_t t81 = -596800;

    t81 = (((x409+x410)%x411)/x412);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x413 = 0;
	uint8_t x414 = UINT8_MAX;
	int64_t x415 = -8LL;
	int64_t x416 = 1451271138088134697LL;

    t82 = (((x413+x414)%x415)/x416);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x418 = 9U;
	static int64_t x419 = INT64_MIN;
	int32_t x420 = -404;
	static int64_t t83 = 0LL;

    t83 = (((x417+x418)%x419)/x420);

    if (t83 != -2LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x422 = UINT16_MAX;
	static uint16_t x423 = UINT16_MAX;
	static volatile uint8_t x424 = 87U;
	static int32_t t84 = 5;

    t84 = (((x421+x422)%x423)/x424);

    if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int8_t x425 = INT8_MIN;
	uint16_t x426 = 1177U;
	static int64_t x427 = -1048LL;
	int16_t x428 = -29;
	int64_t t85 = -6LL;

    t85 = (((x425+x426)%x427)/x428);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint32_t x431 = UINT32_MAX;
	volatile int16_t x432 = 853;
	uint32_t t86 = 490U;

    t86 = (((x429+x430)%x431)/x432);

    if (t86 != 3U) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x433 = INT16_MAX;
	uint16_t x434 = 459U;
	uint8_t x435 = 3U;
	volatile int32_t x436 = INT32_MIN;
	int32_t t87 = 3583;

    t87 = (((x433+x434)%x435)/x436);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x437 = -1;
	volatile uint16_t x438 = UINT16_MAX;
	static int32_t x439 = 3444;
	int32_t x440 = -2981;
	volatile int32_t t88 = -51216549;

    t88 = (((x437+x438)%x439)/x440);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x441 = 279U;
	static int32_t x443 = INT32_MIN;
	int32_t x444 = INT32_MAX;
	volatile uint64_t t89 = 40038LLU;

    t89 = (((x441+x442)%x443)/x444);

    if (t89 != 18519LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x445 = UINT16_MAX;
	int8_t x447 = INT8_MAX;
	volatile int16_t x448 = INT16_MIN;
	int32_t t90 = 554;

    t90 = (((x445+x446)%x447)/x448);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x450 = 3412201;
	uint16_t x451 = UINT16_MAX;
	int32_t x452 = -1;
	static volatile int32_t t91 = -595910;

    t91 = (((x449+x450)%x451)/x452);

    if (t91 != -4253) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x453 = 13U;
	uint64_t x454 = 49LLU;
	int16_t x455 = INT16_MIN;
	uint32_t x456 = 2U;
	static volatile uint64_t t92 = 622073850510023LLU;

    t92 = (((x453+x454)%x455)/x456);

    if (t92 != 31LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x457 = UINT32_MAX;
	static uint16_t x458 = 0U;
	int64_t t93 = 2089397772274LL;

    t93 = (((x457+x458)%x459)/x460);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x461 = UINT8_MAX;
	volatile int16_t x463 = -6;
	int64_t x464 = INT64_MAX;
	volatile int64_t t94 = 10283937797167LL;

    t94 = (((x461+x462)%x463)/x464);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x465 = 0;
	int32_t x466 = -20834123;
	static int32_t x467 = 447541;
	static uint16_t x468 = 7U;

    t95 = (((x465+x466)%x467)/x468);

    if (t95 != -35319) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x473 = 2U;
	static volatile uint64_t x474 = 11107836LLU;
	static int8_t x476 = -3;

    t96 = (((x473+x474)%x475)/x476);

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x481 = 20639U;
	uint16_t x482 = 63U;
	int32_t x483 = -1;
	int64_t x484 = -1LL;
	int64_t t97 = -34986150618652368LL;

    t97 = (((x481+x482)%x483)/x484);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint32_t x485 = 33119844U;
	uint8_t x486 = 6U;
	int64_t x487 = -6872437LL;
	uint16_t x488 = 2U;
	volatile int64_t t98 = -1000LL;

    t98 = (((x485+x486)%x487)/x488);

    if (t98 != 2815051LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x489 = 23;
	uint64_t x490 = 26842387592306903LLU;
	uint16_t x492 = UINT16_MAX;
	uint64_t t99 = 2774348146692447LLU;

    t99 = (((x489+x490)%x491)/x492);

    if (t99 != 409588580030LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x493 = 787;
	volatile int16_t x494 = INT16_MIN;
	static volatile int16_t x495 = INT16_MAX;
	static volatile uint16_t x496 = UINT16_MAX;

    t100 = (((x493+x494)%x495)/x496);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x497 = INT16_MAX;
	int8_t x498 = INT8_MAX;
	int16_t x499 = -1;
	int8_t x500 = -1;
	int32_t t101 = -10298871;

    t101 = (((x497+x498)%x499)/x500);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x506 = 5040U;
	static volatile uint8_t x508 = UINT8_MAX;
	static volatile int64_t t102 = 393544852157140LL;

    t102 = (((x505+x506)%x507)/x508);

    if (t102 != -108LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x509 = INT32_MAX;
	static uint32_t x510 = UINT32_MAX;
	uint32_t x512 = 5541U;
	static volatile uint32_t t103 = 167U;

    t103 = (((x509+x510)%x511)/x512);

    if (t103 != 5U) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x514 = INT32_MIN;
	int64_t x516 = 90375243LL;

    t104 = (((x513+x514)%x515)/x516);

    if (t104 != 8007LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x517 = INT64_MAX;
	static int64_t x518 = INT64_MIN;
	uint16_t x519 = 118U;
	volatile int64_t t105 = 1297899473LL;

    t105 = (((x517+x518)%x519)/x520);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x525 = 8U;
	int8_t x526 = 44;
	volatile int32_t t106 = 1682;

    t106 = (((x525+x526)%x527)/x528);

    if (t106 != -4) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint16_t x529 = UINT16_MAX;
	static volatile int16_t x530 = INT16_MIN;
	static uint16_t x531 = 1038U;
	static int16_t x532 = INT16_MAX;
	int32_t t107 = 2829446;

    t107 = (((x529+x530)%x531)/x532);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x533 = UINT8_MAX;
	static volatile int8_t x534 = INT8_MAX;
	int16_t x535 = INT16_MIN;
	volatile int32_t t108 = 184808029;

    t108 = (((x533+x534)%x535)/x536);

    if (t108 != 27) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x537 = UINT64_MAX;
	int16_t x538 = -1;
	static int16_t x539 = INT16_MIN;
	int16_t x540 = INT16_MIN;
	uint64_t t109 = 669678164LLU;

    t109 = (((x537+x538)%x539)/x540);

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x545 = -22;
	int16_t x546 = -1;
	volatile int64_t x547 = INT64_MAX;
	volatile int64_t x548 = -1LL;
	int64_t t110 = -230LL;

    t110 = (((x545+x546)%x547)/x548);

    if (t110 != 23LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x549 = -1;
	volatile int64_t x550 = INT64_MAX;
	int64_t x551 = INT64_MIN;
	uint32_t x552 = 35903455U;
	static volatile int64_t t111 = 344952988798515LL;

    t111 = (((x549+x550)%x551)/x552);

    if (t111 != 256893717801LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x553 = INT16_MIN;
	int16_t x554 = INT16_MIN;
	int8_t x555 = INT8_MIN;
	int16_t x556 = INT16_MIN;
	int32_t t112 = 5720;

    t112 = (((x553+x554)%x555)/x556);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint32_t x561 = 41U;
	static int16_t x563 = -1;
	uint32_t t113 = 164U;

    t113 = (((x561+x562)%x563)/x564);

    if (t113 != 65538U) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x569 = 375001975710LLU;
	int32_t x570 = INT32_MIN;
	int8_t x571 = INT8_MIN;
	volatile uint16_t x572 = 206U;
	uint64_t t114 = 98859LLU;

    t114 = (((x569+x570)%x571)/x572);

    if (t114 != 1809973262LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x573 = UINT8_MAX;
	volatile int32_t x574 = INT32_MIN;
	int16_t x575 = -78;
	int32_t x576 = INT32_MIN;

    t115 = (((x573+x574)%x575)/x576);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x579 = INT8_MAX;
	static int8_t x580 = -1;
	volatile int32_t t116 = 509;

    t116 = (((x577+x578)%x579)/x580);

    if (t116 != -5) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x581 = 0;
	uint64_t x583 = 505288373LLU;
	volatile int32_t x584 = 86118;
	volatile uint64_t t117 = 0LLU;

    t117 = (((x581+x582)%x583)/x584);

    if (t117 != 1552LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x585 = 509228837LLU;
	uint16_t x586 = 5625U;
	uint64_t t118 = 1564787097404580LLU;

    t118 = (((x585+x586)%x587)/x588);

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x589 = 1349546358LLU;
	volatile int32_t x590 = -1;
	volatile int8_t x591 = 25;
	int64_t x592 = -707LL;
	uint64_t t119 = 187668333356398LLU;

    t119 = (((x589+x590)%x591)/x592);

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x598 = 0;
	static uint32_t x599 = 621387U;
	int64_t t120 = 3081970355022LL;

    t120 = (((x597+x598)%x599)/x600);

    if (t120 != 12984LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x601 = 29;
	int16_t x602 = INT16_MIN;
	volatile uint8_t x603 = 21U;
	int8_t x604 = INT8_MAX;
	volatile int32_t t121 = 0;

    t121 = (((x601+x602)%x603)/x604);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x605 = -67855581542036LL;
	volatile int8_t x606 = 15;
	static volatile int64_t x607 = 81900722130LL;
	static uint8_t x608 = 5U;
	int64_t t122 = 869768569723LL;

    t122 = (((x605+x606)%x607)/x608);

    if (t122 != -8356723676LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x609 = INT8_MIN;
	static int8_t x610 = INT8_MAX;
	int32_t x611 = INT32_MIN;
	uint32_t x612 = 2953U;
	uint32_t t123 = 4347U;

    t123 = (((x609+x610)%x611)/x612);

    if (t123 != 1454442U) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x617 = INT64_MIN;
	uint32_t x618 = UINT32_MAX;
	static int16_t x619 = INT16_MAX;
	static int32_t x620 = -26800;

    t124 = (((x617+x618)%x619)/x620);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x621 = -469;
	volatile int64_t x622 = 196234407825213LL;
	uint8_t x623 = 6U;

    t125 = (((x621+x622)%x623)/x624);

    if (t125 != 2LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x625 = INT32_MIN;
	int64_t x627 = -45146987676LL;
	int8_t x628 = -1;

    t126 = (((x625+x626)%x627)/x628);

    if (t126 != 2147483625LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint64_t x629 = UINT64_MAX;
	static int16_t x631 = INT16_MIN;
	uint16_t x632 = UINT16_MAX;
	volatile uint64_t t127 = 10794373195LLU;

    t127 = (((x629+x630)%x631)/x632);

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x635 = 91046300064737LLU;
	int16_t x636 = 10;
	static uint64_t t128 = 534857272506309LLU;

    t128 = (((x633+x634)%x635)/x636);

    if (t128 != 1765509665901LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x637 = 62U;
	int32_t x639 = INT32_MIN;
	uint32_t t129 = 100226U;

    t129 = (((x637+x638)%x639)/x640);

    if (t129 != 2U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x641 = 1968569148306230213LLU;
	uint16_t x642 = 1U;
	uint8_t x643 = 34U;
	static int32_t x644 = -30662;

    t130 = (((x641+x642)%x643)/x644);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x645 = -1;
	static int16_t x648 = -1;
	int32_t t131 = 110173;

    t131 = (((x645+x646)%x647)/x648);

    if (t131 != -18) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x649 = -56378;
	volatile uint8_t x650 = 21U;
	uint32_t x651 = 3153U;
	int64_t x652 = INT64_MIN;
	volatile int64_t t132 = 1844674470168823010LL;

    t132 = (((x649+x650)%x651)/x652);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x653 = 1991LLU;
	int16_t x654 = INT16_MIN;
	uint8_t x656 = 5U;

    t133 = (((x653+x654)%x655)/x656);

    if (t133 != 3689348814741904167LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x657 = INT8_MIN;
	static int64_t x658 = 14506LL;
	uint8_t x659 = 3U;
	int8_t x660 = -1;

    t134 = (((x657+x658)%x659)/x660);

    if (t134 != -2LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x661 = INT16_MIN;
	int32_t x662 = 1;
	int16_t x663 = INT16_MIN;
	int32_t t135 = -6374;

    t135 = (((x661+x662)%x663)/x664);

    if (t135 != -744) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x665 = INT32_MIN;
	int32_t x666 = 963276620;
	int8_t x667 = 29;
	int8_t x668 = -8;
	static volatile int32_t t136 = -1544;

    t136 = (((x665+x666)%x667)/x668);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x669 = 27;
	uint64_t x670 = 8577271473773781LLU;
	static int32_t x671 = -376;
	int32_t x672 = 3053853;

    t137 = (((x669+x670)%x671)/x672);

    if (t137 != 2808672019LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x673 = -10;
	uint32_t x674 = UINT32_MAX;
	int32_t x675 = INT32_MIN;
	static int32_t x676 = INT32_MIN;
	static uint32_t t138 = 3421143U;

    t138 = (((x673+x674)%x675)/x676);

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x677 = INT8_MAX;
	int16_t x678 = INT16_MIN;
	int8_t x679 = INT8_MAX;
	int16_t x680 = -19;

    t139 = (((x677+x678)%x679)/x680);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x681 = INT8_MAX;
	int64_t x682 = 4247521733723244087LL;
	uint64_t x683 = UINT64_MAX;
	int16_t x684 = -1;
	volatile uint64_t t140 = 35835939690950LLU;

    t140 = (((x681+x682)%x683)/x684);

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x685 = -1;
	uint16_t x686 = 3U;
	int16_t x687 = INT16_MIN;
	static volatile int32_t t141 = 106067;

    t141 = (((x685+x686)%x687)/x688);

    if (t141 != -2) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x689 = 30;
	int16_t x690 = -1;
	volatile uint8_t x691 = 37U;
	volatile int32_t t142 = -176;

    t142 = (((x689+x690)%x691)/x692);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x693 = 60770326U;
	uint8_t x694 = 79U;
	uint8_t x695 = UINT8_MAX;
	volatile int64_t x696 = INT64_MIN;
	int64_t t143 = -737LL;

    t143 = (((x693+x694)%x695)/x696);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int8_t x697 = INT8_MIN;
	int32_t x698 = INT32_MAX;
	static uint16_t x699 = 7U;
	int64_t x700 = -2834964728LL;
	int64_t t144 = 54498007026200LL;

    t144 = (((x697+x698)%x699)/x700);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x701 = -4556;
	int8_t x702 = INT8_MAX;
	static int32_t t145 = -17;

    t145 = (((x701+x702)%x703)/x704);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x708 = INT16_MIN;
	int32_t t146 = 49854553;

    t146 = (((x705+x706)%x707)/x708);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x709 = INT16_MAX;
	volatile int8_t x710 = INT8_MAX;
	int16_t x712 = INT16_MIN;
	static volatile int64_t t147 = 12803LL;

    t147 = (((x709+x710)%x711)/x712);

    if (t147 != -1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x713 = 19955U;
	int8_t x715 = -1;
	static uint32_t x716 = 1586623788U;
	volatile uint32_t t148 = 137625190U;

    t148 = (((x713+x714)%x715)/x716);

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x717 = 152U;
	int64_t x719 = -3LL;
	uint8_t x720 = 13U;
	volatile int64_t t149 = 49LL;

    t149 = (((x717+x718)%x719)/x720);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x721 = -13;
	static int32_t x722 = 2;
	volatile int8_t x723 = INT8_MIN;
	volatile int64_t x724 = 50782429198434LL;
	int64_t t150 = -2004482600275163764LL;

    t150 = (((x721+x722)%x723)/x724);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x728 = 11452;

    t151 = (((x725+x726)%x727)/x728);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x733 = INT64_MIN;
	uint32_t x736 = 24019102U;
	int64_t t152 = -5895127168LL;

    t152 = (((x733+x734)%x735)/x736);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x741 = INT32_MIN;
	static int64_t x742 = -2757408LL;

    t153 = (((x741+x742)%x743)/x744);

    if (t153 != -1LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile uint64_t x745 = 1106496470949409617LLU;
	int16_t x746 = INT16_MIN;
	volatile uint64_t t154 = 68563357763350256LLU;

    t154 = (((x745+x746)%x747)/x748);

    if (t154 != 368832156983125616LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint32_t x749 = 0U;
	static int16_t x750 = INT16_MAX;
	static int16_t x751 = INT16_MIN;
	uint32_t x752 = 1U;

    t155 = (((x749+x750)%x751)/x752);

    if (t155 != 32767U) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x753 = -77721525821781LL;
	uint8_t x754 = UINT8_MAX;
	int32_t x755 = 148663;
	int64_t t156 = -23609814LL;

    t156 = (((x753+x754)%x755)/x756);

    if (t156 != 102088LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x757 = INT32_MIN;
	uint16_t x758 = 229U;
	static volatile int16_t x759 = INT16_MAX;
	int8_t x760 = -5;
	int32_t t157 = 0;

    t157 = (((x757+x758)%x759)/x760);

    if (t157 != 6508) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x763 = 2U;
	volatile uint32_t x764 = 1608788U;
	volatile int64_t t158 = -259192256216LL;

    t158 = (((x761+x762)%x763)/x764);

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int64_t x765 = INT64_MIN;
	static int64_t x766 = INT64_MAX;
	static int64_t x767 = INT64_MIN;
	static volatile uint64_t t159 = UINT64_MAX;

    t159 = (((x765+x766)%x767)/x768);

    if (t159 != UINT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x774 = UINT64_MAX;
	volatile uint32_t x775 = 2273116U;
	volatile int32_t x776 = -13789879;

    t160 = (((x773+x774)%x775)/x776);

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x778 = 61;
	uint8_t x779 = 31U;
	int32_t x780 = INT32_MAX;
	static volatile uint64_t t161 = 3439711527486769LLU;

    t161 = (((x777+x778)%x779)/x780);

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x782 = 88U;
	volatile int64_t x783 = INT64_MIN;
	int64_t x784 = INT64_MIN;
	int64_t t162 = -4397016844047775253LL;

    t162 = (((x781+x782)%x783)/x784);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x785 = 16409186;
	volatile uint16_t x786 = UINT16_MAX;
	static int8_t x787 = INT8_MIN;
	uint64_t x788 = 12908653802LLU;
	volatile uint64_t t163 = 12027725LLU;

    t163 = (((x785+x786)%x787)/x788);

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint32_t x789 = 23100U;
	int8_t x790 = 1;
	int64_t t164 = 50789709LL;

    t164 = (((x789+x790)%x791)/x792);

    if (t164 != -180LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x793 = 1;

    t165 = (((x793+x794)%x795)/x796);

    if (t165 != 4LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x801 = UINT32_MAX;
	uint16_t x803 = 15200U;
	static int16_t x804 = INT16_MIN;
	uint64_t t166 = 475293619306134LLU;

    t166 = (((x801+x802)%x803)/x804);

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x805 = -1LL;
	static int16_t x806 = INT16_MAX;
	int8_t x808 = -1;
	volatile int64_t t167 = -332398702106975259LL;

    t167 = (((x805+x806)%x807)/x808);

    if (t167 != -32766LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x809 = UINT64_MAX;
	volatile uint32_t x810 = 3U;
	int8_t x811 = INT8_MIN;
	static uint8_t x812 = 4U;

    t168 = (((x809+x810)%x811)/x812);

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x817 = -1LL;
	uint64_t x820 = UINT64_MAX;

    t169 = (((x817+x818)%x819)/x820);

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x821 = -1LL;
	int16_t x822 = -1;
	int32_t x823 = INT32_MAX;
	int16_t x824 = 83;

    t170 = (((x821+x822)%x823)/x824);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x825 = 16127943U;
	int8_t x826 = -1;
	static uint16_t x827 = 27U;
	volatile int8_t x828 = INT8_MIN;
	uint32_t t171 = 0U;

    t171 = (((x825+x826)%x827)/x828);

    if (t171 != 0U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x829 = 1828U;
	static uint16_t x831 = UINT16_MAX;
	volatile int64_t x832 = INT64_MAX;
	int64_t t172 = 15968558285779LL;

    t172 = (((x829+x830)%x831)/x832);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x841 = 3;
	int8_t x843 = -1;
	static volatile int64_t x844 = -482576290LL;
	volatile int64_t t173 = 2LL;

    t173 = (((x841+x842)%x843)/x844);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint64_t x849 = UINT64_MAX;
	volatile int32_t x850 = -1;
	uint64_t x851 = 19843123LLU;
	uint64_t x852 = 2929LLU;

    t174 = (((x849+x850)%x851)/x852);

    if (t174 != 592LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x853 = UINT16_MAX;
	static int8_t x855 = -1;

    t175 = (((x853+x854)%x855)/x856);

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x857 = -55;
	volatile int32_t x858 = -1;
	uint32_t x859 = UINT32_MAX;
	static int16_t x860 = INT16_MAX;

    t176 = (((x857+x858)%x859)/x860);

    if (t176 != 131075U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x861 = 2U;
	static int16_t x862 = -2380;
	int16_t x863 = -226;
	int8_t x864 = INT8_MAX;
	static volatile int32_t t177 = 71;

    t177 = (((x861+x862)%x863)/x864);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x865 = UINT16_MAX;
	int16_t x866 = INT16_MIN;
	uint32_t x867 = UINT32_MAX;
	int16_t x868 = -4;
	uint32_t t178 = 10656U;

    t178 = (((x865+x866)%x867)/x868);

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x871 = -7;
	static volatile int8_t x872 = -8;
	int64_t t179 = 121224LL;

    t179 = (((x869+x870)%x871)/x872);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x873 = UINT32_MAX;
	int8_t x874 = INT8_MAX;
	uint64_t x876 = 105040942315946LLU;
	static volatile uint64_t t180 = 11167409167LLU;

    t180 = (((x873+x874)%x875)/x876);

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x877 = INT8_MIN;
	volatile uint8_t x878 = 15U;
	uint16_t x879 = 1467U;
	static int64_t t181 = 23017856885416205LL;

    t181 = (((x877+x878)%x879)/x880);

    if (t181 != 113LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x882 = 0;
	int8_t x883 = INT8_MAX;
	static volatile uint32_t x884 = 200802U;
	volatile uint32_t t182 = 2863706U;

    t182 = (((x881+x882)%x883)/x884);

    if (t182 != 21389U) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x889 = 0;
	int64_t x890 = -604952206LL;
	uint16_t x891 = UINT16_MAX;
	int8_t x892 = INT8_MIN;
	volatile int64_t t183 = 39825291791LL;

    t183 = (((x889+x890)%x891)/x892);

    if (t183 != 501LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x894 = -1LL;
	int8_t x895 = -1;
	volatile int64_t t184 = -6LL;

    t184 = (((x893+x894)%x895)/x896);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x897 = 13441;
	uint16_t x898 = UINT16_MAX;
	int32_t x899 = 9279;
	int64_t x900 = -28028LL;

    t185 = (((x897+x898)%x899)/x900);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x901 = INT8_MIN;
	int32_t x904 = -1;
	uint64_t t186 = 8088530809272LLU;

    t186 = (((x901+x902)%x903)/x904);

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x906 = 1279585LLU;
	int32_t x907 = INT32_MIN;
	uint32_t x908 = 65418958U;
	volatile uint64_t t187 = 1008999999133LLU;

    t187 = (((x905+x906)%x907)/x908);

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x909 = INT16_MIN;
	int16_t x910 = 1;
	int16_t x912 = -24;
	volatile int32_t t188 = 1047;

    t188 = (((x909+x910)%x911)/x912);

    if (t188 != 1365) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x913 = UINT8_MAX;
	uint16_t x915 = 10U;
	volatile int8_t x916 = INT8_MIN;
	int32_t t189 = 46624;

    t189 = (((x913+x914)%x915)/x916);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x917 = UINT32_MAX;
	int32_t x918 = -1;
	static uint32_t x920 = 4436U;
	volatile uint32_t t190 = 3418U;

    t190 = (((x917+x918)%x919)/x920);

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x921 = INT32_MAX;
	int32_t x922 = INT32_MIN;
	int32_t x923 = -1;
	uint32_t x924 = 106U;
	static uint32_t t191 = 2015U;

    t191 = (((x921+x922)%x923)/x924);

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x933 = -4;
	volatile int16_t x934 = INT16_MAX;
	static int32_t x935 = 485106;
	uint64_t t192 = 9885544986692697LLU;

    t192 = (((x933+x934)%x935)/x936);

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x937 = INT32_MAX;
	int64_t x938 = 11738481148LL;
	int8_t x939 = -1;
	int8_t x940 = INT8_MIN;
	int64_t t193 = -358980330LL;

    t193 = (((x937+x938)%x939)/x940);

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x941 = -11;
	volatile uint32_t t194 = 255U;

    t194 = (((x941+x942)%x943)/x944);

    if (t194 != 1116U) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint64_t x946 = 365883664077426LLU;
	static int64_t x947 = INT64_MIN;
	int8_t x948 = -2;

    t195 = (((x945+x946)%x947)/x948);

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x949 = 242U;
	int16_t x950 = -23;
	int8_t x951 = 6;
	uint8_t x952 = 13U;
	volatile uint32_t t196 = 14759U;

    t196 = (((x949+x950)%x951)/x952);

    if (t196 != 0U) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x957 = -1;
	uint64_t x958 = 694LLU;
	static uint16_t x959 = 1156U;
	uint64_t t197 = 18025625695752808LLU;

    t197 = (((x957+x958)%x959)/x960);

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x965 = INT64_MAX;
	int64_t x966 = INT64_MIN;
	static uint64_t x968 = 11218235LLU;
	static volatile uint64_t t198 = 2233613LLU;

    t198 = (((x965+x966)%x967)/x968);

    if (t198 != 1644353507812LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x973 = 3;
	static uint64_t x975 = UINT64_MAX;
	static volatile uint64_t x976 = 69957804549978235LLU;
	uint64_t t199 = 9924814LLU;

    t199 = (((x973+x974)%x975)/x976);

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

