
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

int32_t x2 = INT32_MIN;
int64_t x3 = 789202263624LL;
volatile int64_t x12 = 22LL;
int8_t x25 = INT8_MIN;
volatile int32_t x34 = -1;
volatile int64_t t6 = -31147298989LL;
uint32_t x45 = 7253U;
int64_t x47 = 26890652073516LL;
int32_t x73 = 338733773;
uint16_t x76 = 19926U;
uint64_t t13 = 11493372164824415LLU;
static uint32_t x82 = 266U;
int32_t x86 = 146255790;
uint32_t x89 = UINT32_MAX;
uint32_t t17 = 1572767U;
uint32_t x93 = 1125542405U;
uint64_t x97 = 13799LLU;
int16_t x100 = -1;
volatile int64_t t27 = 620857769867LL;
static uint32_t x142 = 3329169U;
int16_t x143 = INT16_MIN;
int32_t x147 = 385569;
int32_t t30 = 837;
static int16_t x151 = INT16_MIN;
static int64_t x153 = 498217435802974LL;
volatile int64_t t32 = -16176791844LL;
uint32_t x158 = UINT32_MAX;
int32_t x176 = -1;
static int32_t t38 = 359688877;
int8_t x192 = 10;
uint64_t x194 = 1553LLU;
static int32_t x195 = -1;
uint32_t x201 = 978335127U;
static uint8_t x205 = 35U;
int32_t x206 = INT32_MIN;
uint64_t x208 = UINT64_MAX;
int32_t t43 = 7;
uint64_t x213 = 1882LLU;
volatile uint64_t t45 = 87LLU;
uint32_t x221 = 95201U;
int32_t x226 = 0;
uint64_t x229 = 0LLU;
int64_t x231 = INT64_MAX;
static volatile int64_t x234 = 2012412756LL;
uint16_t x249 = UINT16_MAX;
int16_t x256 = INT16_MAX;
volatile int64_t t53 = -1691562330350LL;
int16_t x266 = -1;
volatile uint8_t x268 = UINT8_MAX;
uint8_t x282 = 0U;
int32_t x283 = INT32_MAX;
volatile uint32_t t58 = 27U;
static int8_t x292 = INT8_MIN;
uint64_t t59 = 8LLU;
volatile int64_t t60 = 189975411914226LL;
int64_t x300 = -1LL;
volatile int8_t x301 = -1;
int32_t x303 = 4447081;
volatile uint32_t x314 = UINT32_MAX;
static int16_t x315 = -1;
static int8_t x323 = INT8_MAX;
uint64_t t70 = 1027028096226LLU;
int8_t x337 = INT8_MIN;
static int16_t x341 = INT16_MAX;
static volatile int64_t t72 = 1934LL;
int64_t x349 = INT64_MAX;
int64_t x351 = INT64_MIN;
int64_t t74 = 7654680284649113LL;
volatile int32_t x375 = INT32_MIN;
int8_t x376 = -1;
volatile int16_t x380 = INT16_MAX;
static int64_t x384 = INT64_MIN;
static int32_t t80 = 3;
static int16_t x413 = -4932;
static int32_t x419 = -17658;
volatile int32_t t85 = 24450;
static uint64_t x422 = 370LLU;
int8_t x433 = INT8_MIN;
uint32_t x435 = UINT32_MAX;
int8_t x436 = -7;
static uint64_t x447 = 11753251729567604LLU;
int8_t x451 = INT8_MAX;
uint64_t t93 = 7319520331395721LLU;
uint32_t x454 = 41U;
static uint16_t x455 = 70U;
static uint64_t t94 = 53964775976260LLU;
int8_t x459 = -7;
int16_t x465 = 449;
uint32_t t97 = 146226U;
int16_t x469 = INT16_MIN;
int64_t x472 = -138726047116535LL;
static volatile int64_t t101 = 6LL;
int32_t x491 = -5;
uint16_t x493 = 2U;
static int8_t x494 = -15;
int64_t x496 = -1523LL;
uint32_t x503 = 29943018U;
int8_t x508 = INT8_MAX;
int32_t x510 = 472794398;
volatile int64_t x511 = -1LL;
uint8_t x521 = 4U;
uint64_t x523 = UINT64_MAX;
int32_t x533 = INT32_MIN;
int64_t x536 = -1LL;
static int16_t x542 = -881;
uint16_t x546 = 15U;
volatile int16_t x547 = INT16_MAX;
uint16_t x554 = UINT16_MAX;
static volatile int16_t x555 = -4;
static int32_t t114 = -163893502;
volatile int64_t x557 = -1125130161363186LL;
volatile uint16_t x558 = 1U;
int64_t x559 = 22869277384050LL;
int8_t x560 = INT8_MIN;
int64_t x568 = 1522358LL;
int16_t x571 = 3195;
int16_t x572 = INT16_MIN;
volatile int8_t x616 = INT8_MAX;
volatile int8_t x619 = INT8_MAX;
uint32_t x620 = UINT32_MAX;
int16_t x621 = INT16_MAX;
int8_t x629 = INT8_MIN;
int32_t x641 = INT32_MIN;
int32_t x651 = -1514534;
int16_t x652 = 0;
volatile int32_t t134 = 112754861;
int32_t x657 = 483495160;
uint64_t x666 = 401433LLU;
uint8_t x667 = 83U;
static volatile uint64_t t138 = 1986809144LLU;
uint32_t x669 = 173460U;
uint16_t x670 = 396U;
int64_t x671 = INT64_MIN;
int32_t x672 = INT32_MAX;
int64_t x676 = -1LL;
volatile uint64_t t140 = 1LLU;
int16_t x678 = INT16_MAX;
uint16_t x692 = 26984U;
static uint64_t x706 = 20LLU;
uint64_t t146 = 2607890794379350LLU;
static uint16_t x712 = 0U;
uint64_t x718 = UINT64_MAX;
volatile uint64_t t150 = 27875848993LLU;
int16_t x735 = 6;
int8_t x738 = INT8_MAX;
volatile int64_t x740 = INT64_MIN;
volatile int8_t x761 = INT8_MAX;
uint32_t x762 = 538806341U;
uint64_t x763 = 903815644LLU;
uint8_t x769 = UINT8_MAX;
int8_t x777 = INT8_MIN;
int16_t x778 = -45;
int16_t x782 = INT16_MIN;
uint16_t x788 = 52U;
uint16_t x789 = 0U;
volatile uint16_t x791 = 5395U;
volatile int64_t t165 = 1594544LL;
int32_t x793 = -1;
uint64_t x795 = 5212337935014611099LLU;
int64_t x796 = -1LL;
volatile uint64_t x804 = 7305682870584LLU;
uint64_t t170 = 57635380700745LLU;
int8_t x834 = 8;
int64_t t171 = 48LL;
uint64_t x851 = 718098063263LLU;
int64_t x855 = INT64_MIN;
int16_t x856 = INT16_MIN;
uint64_t t176 = 3071LLU;
int32_t x864 = INT32_MIN;
volatile int64_t x870 = -87677449763LL;
static int8_t x885 = INT8_MIN;
static int8_t x903 = INT8_MIN;
uint32_t x911 = 106U;
uint8_t x913 = 0U;
int32_t x925 = INT32_MIN;
static volatile int16_t x935 = INT16_MAX;
int16_t x936 = -2419;
int32_t x940 = INT32_MAX;
uint8_t x946 = UINT8_MAX;
volatile uint32_t x947 = UINT32_MAX;
static uint64_t t193 = 3315040491LLU;
static int64_t t195 = 381162738585832397LL;
int16_t x981 = INT16_MIN;
volatile uint16_t x986 = 0U;
int16_t x988 = INT16_MAX;
volatile uint16_t x994 = UINT16_MAX;
int32_t x995 = INT32_MIN;
volatile int32_t t199 = -65;


void f0(void) {
    	static int64_t x1 = 119846427138632325LL;
	int64_t x4 = -279012956494624LL;
	volatile int64_t t0 = 235850LL;

    t0 = (((x1+x2)^x3)+x4);

    if (t0 != 119566687258515885LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = UINT32_MAX;
	int16_t x6 = INT16_MIN;
	volatile uint8_t x7 = 1U;
	uint32_t x8 = UINT32_MAX;
	uint32_t t1 = 10U;

    t1 = (((x5+x6)^x7)+x8);

    if (t1 != 4294934525U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 29U;
	volatile int8_t x10 = INT8_MIN;
	volatile int8_t x11 = -1;
	volatile int64_t t2 = 30936376402335836LL;

    t2 = (((x9+x10)^x11)+x12);

    if (t2 != 120LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x21 = INT32_MAX;
	int64_t x22 = 4260950945145900618LL;
	volatile int32_t x23 = -2474507;
	int32_t x24 = -1;
	int64_t t3 = 3549842908096623123LL;

    t3 = (((x21+x22)^x23)+x24);

    if (t3 != -4260950947295693893LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x26 = -880;
	int64_t x27 = -1538592928683530920LL;
	int64_t x28 = -7LL;
	volatile int64_t t4 = -73339563364309LL;

    t4 = (((x25+x26)^x27)+x28);

    if (t4 != 1538592928683530561LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x33 = 109601327292LL;
	int8_t x35 = INT8_MIN;
	int8_t x36 = 1;
	static volatile int64_t t5 = 14684LL;

    t5 = (((x33+x34)^x35)+x36);

    if (t5 != -109601327300LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x41 = INT16_MIN;
	int32_t x42 = INT32_MAX;
	static int8_t x43 = INT8_MAX;
	int64_t x44 = -447424129124147LL;

    t6 = (((x41+x42)^x43)+x44);

    if (t6 != -447421981673395LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x46 = -1;
	uint32_t x48 = 2836591U;
	volatile int64_t t7 = 18LL;

    t7 = (((x45+x46)^x47)+x48);

    if (t7 != 26890654903015LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x49 = INT32_MIN;
	uint32_t x50 = 511U;
	volatile uint32_t x51 = 225584820U;
	volatile int8_t x52 = -1;
	uint32_t t8 = 772U;

    t8 = (((x49+x50)^x51)+x52);

    if (t8 != 2373068618U) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x57 = -1571;
	int8_t x58 = 0;
	volatile int32_t x59 = INT32_MIN;
	uint16_t x60 = 6U;
	static int32_t t9 = -6;

    t9 = (((x57+x58)^x59)+x60);

    if (t9 != 2147482083) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x61 = INT8_MIN;
	int8_t x62 = INT8_MAX;
	int8_t x63 = INT8_MAX;
	uint16_t x64 = UINT16_MAX;
	volatile int32_t t10 = -456608;

    t10 = (((x61+x62)^x63)+x64);

    if (t10 != 65407) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x65 = UINT32_MAX;
	uint16_t x66 = 3033U;
	uint64_t x67 = UINT64_MAX;
	int8_t x68 = INT8_MIN;
	volatile uint64_t t11 = 2304490893092835LLU;

    t11 = (((x65+x66)^x67)+x68);

    if (t11 != 18446744073709548455LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x69 = -39807888011LL;
	static int8_t x70 = -1;
	int8_t x71 = -11;
	uint32_t x72 = UINT32_MAX;
	static int64_t t12 = -129183LL;

    t12 = (((x69+x70)^x71)+x72);

    if (t12 != 44102855296LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x74 = 209923037073050LLU;
	int64_t x75 = INT64_MAX;

    t13 = (((x73+x74)^x75)+x76);

    if (t13 != 9223162113478988910LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x77 = -1;
	uint8_t x78 = 0U;
	static uint32_t x79 = 16928370U;
	static volatile int32_t x80 = -1565;
	volatile uint32_t t14 = 54094U;

    t14 = (((x77+x78)^x79)+x80);

    if (t14 != 4278037360U) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x81 = -8998301586981LL;
	int64_t x83 = 95614755207LL;
	uint32_t x84 = 310399U;
	volatile int64_t t15 = -39726626445445LL;

    t15 = (((x81+x82)^x83)+x84);

    if (t15 != -9042374162463LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x85 = 11LL;
	static int32_t x87 = INT32_MAX;
	int32_t x88 = INT32_MAX;
	volatile int64_t t16 = -7LL;

    t16 = (((x85+x86)^x87)+x88);

    if (t16 != 4148711493LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x90 = INT8_MIN;
	uint8_t x91 = UINT8_MAX;
	int16_t x92 = 4;

    t17 = (((x89+x90)^x91)+x92);

    if (t17 != 4294967172U) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x94 = INT16_MIN;
	static uint64_t x95 = UINT64_MAX;
	uint64_t x96 = 1673584490941LLU;
	volatile uint64_t t18 = 123438170LLU;

    t18 = (((x93+x94)^x95)+x96);

    if (t18 != 1672458981303LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x98 = 17853LLU;
	uint64_t x99 = 1629133327463LLU;
	uint64_t t19 = 264521171LLU;

    t19 = (((x97+x98)^x99)+x100);

    if (t19 != 1629133322178LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x101 = INT64_MIN;
	int64_t x102 = 7751869922316LL;
	int8_t x103 = -1;
	volatile int8_t x104 = INT8_MIN;
	int64_t t20 = 407970384347826243LL;

    t20 = (((x101+x102)^x103)+x104);

    if (t20 != 9223364284984853363LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x109 = -1;
	int32_t x110 = -82392;
	int64_t x111 = 39334751LL;
	int64_t x112 = -459925708844751655LL;
	int64_t t21 = -7102811795791LL;

    t21 = (((x109+x110)^x111)+x112);

    if (t21 != -459925708884168111LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x113 = -1;
	int8_t x114 = 1;
	int8_t x115 = INT8_MIN;
	static int16_t x116 = INT16_MAX;
	static volatile int32_t t22 = -1693;

    t22 = (((x113+x114)^x115)+x116);

    if (t22 != 32639) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x117 = UINT8_MAX;
	volatile int8_t x118 = 0;
	uint16_t x119 = 9942U;
	int8_t x120 = -14;
	int32_t t23 = -16669488;

    t23 = (((x117+x118)^x119)+x120);

    if (t23 != 9755) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint8_t x121 = UINT8_MAX;
	static volatile uint64_t x122 = UINT64_MAX;
	uint64_t x123 = 76989128910382LLU;
	uint32_t x124 = 63046806U;
	volatile uint64_t t24 = 160LLU;

    t24 = (((x121+x122)^x123)+x124);

    if (t24 != 76989191957350LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x125 = 232946553784946365LL;
	int64_t x126 = INT64_MIN;
	int64_t x127 = 2902784067LL;
	int16_t x128 = INT16_MAX;
	static int64_t t25 = -138699369712954600LL;

    t25 = (((x125+x126)^x127)+x128);

    if (t25 != -8990425480569768195LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x129 = 900790958LLU;
	volatile uint32_t x130 = UINT32_MAX;
	int32_t x131 = 3848955;
	static int32_t x132 = 992047805;
	uint64_t t26 = 61065LLU;

    t26 = (((x129+x130)^x131)+x132);

    if (t26 != 6185267987LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x133 = -1LL;
	int8_t x134 = INT8_MAX;
	uint32_t x135 = 386U;
	static int32_t x136 = INT32_MAX;

    t27 = (((x133+x134)^x135)+x136);

    if (t27 != 2147484155LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x137 = INT8_MIN;
	int16_t x138 = INT16_MIN;
	uint8_t x139 = 2U;
	int64_t x140 = 73304674LL;
	volatile int64_t t28 = -1739618LL;

    t28 = (((x137+x138)^x139)+x140);

    if (t28 != 73271780LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x141 = 22U;
	uint32_t x144 = 386054582U;
	uint32_t t29 = 114002769U;

    t29 = (((x141+x142)^x143)+x144);

    if (t29 != 382731869U) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x145 = -1;
	int8_t x146 = INT8_MIN;
	int16_t x148 = -1;

    t30 = (((x145+x146)^x147)+x148);

    if (t30 != -385699) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x149 = INT64_MIN;
	volatile int32_t x150 = INT32_MAX;
	static volatile int16_t x152 = -1;
	volatile int64_t t31 = 110633836LL;

    t31 = (((x149+x150)^x151)+x152);

    if (t31 != 9223372034707324926LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x154 = INT16_MIN;
	volatile int64_t x155 = 31975657575LL;
	static int64_t x156 = -323121641LL;

    t32 = (((x153+x154)^x155)+x156);

    if (t32 != 498246898158416LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint32_t x157 = 1385U;
	uint64_t x159 = UINT64_MAX;
	int32_t x160 = -1;
	uint64_t t33 = 3367366745784LLU;

    t33 = (((x157+x158)^x159)+x160);

    if (t33 != 18446744073709550230LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x161 = INT8_MIN;
	static uint32_t x162 = UINT32_MAX;
	int32_t x163 = INT32_MIN;
	volatile int16_t x164 = INT16_MIN;
	uint32_t t34 = 2U;

    t34 = (((x161+x162)^x163)+x164);

    if (t34 != 2147450751U) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint32_t x165 = 23U;
	volatile uint8_t x166 = 14U;
	int16_t x167 = -15;
	volatile uint16_t x168 = 20561U;
	uint32_t t35 = 32115U;

    t35 = (((x165+x166)^x167)+x168);

    if (t35 != 20517U) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x173 = 19;
	int64_t x174 = 14047935LL;
	static uint64_t x175 = 6425284LLU;
	static volatile uint64_t t36 = 1760136201076LLU;

    t36 = (((x173+x174)^x175)+x176);

    if (t36 != 11816981LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x177 = 22U;
	uint16_t x178 = UINT16_MAX;
	volatile int32_t x179 = INT32_MAX;
	int16_t x180 = INT16_MAX;
	uint32_t t37 = 23799U;

    t37 = (((x177+x178)^x179)+x180);

    if (t37 != 2147450857U) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x185 = 16;
	int16_t x186 = -15;
	int16_t x187 = 8591;
	int8_t x188 = -1;

    t38 = (((x185+x186)^x187)+x188);

    if (t38 != 8589) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x189 = INT8_MAX;
	uint16_t x190 = UINT16_MAX;
	uint16_t x191 = 288U;
	volatile int32_t t39 = 35388342;

    t39 = (((x189+x190)^x191)+x192);

    if (t39 != 65896) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x193 = 0;
	volatile int8_t x196 = -2;
	volatile uint64_t t40 = 54LLU;

    t40 = (((x193+x194)^x195)+x196);

    if (t40 != 18446744073709550060LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x202 = INT64_MIN;
	volatile int64_t x203 = -2739639255960LL;
	int64_t x204 = INT64_MIN;
	static int64_t t41 = 3043383498421LL;

    t41 = (((x201+x202)^x203)+x204);

    if (t41 != -2739743077889LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x207 = 5937969;
	static uint64_t t42 = 2539832LLU;

    t42 = (((x205+x206)^x207)+x208);

    if (t42 != 18446744071568005905LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x209 = 2479U;
	int32_t x210 = 18865587;
	uint16_t x211 = 7166U;
	int32_t x212 = INT32_MIN;

    t43 = (((x209+x210)^x211)+x212);

    if (t43 != -2128610148) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x214 = UINT32_MAX;
	static uint8_t x215 = 1U;
	uint16_t x216 = UINT16_MAX;
	static volatile uint64_t t44 = 83415511034944LLU;

    t44 = (((x213+x214)^x215)+x216);

    if (t44 != 4295034711LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint16_t x217 = 92U;
	uint64_t x218 = UINT64_MAX;
	int8_t x219 = -15;
	volatile int64_t x220 = -263622605559249762LL;

    t45 = (((x217+x218)^x219)+x220);

    if (t45 != 18183121468150301768LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x222 = 86U;
	volatile uint64_t x223 = 10087218LLU;
	int64_t x224 = INT64_MIN;
	volatile uint64_t t46 = 23082321LLU;

    t46 = (((x221+x222)^x223)+x224);

    if (t46 != 9223372036864777989LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x225 = 1856U;
	static uint64_t x227 = 79887810421522776LLU;
	volatile int64_t x228 = INT64_MIN;
	volatile uint64_t t47 = 95688877283LLU;

    t47 = (((x225+x226)^x227)+x228);

    if (t47 != 9303259847276299800LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x230 = 0U;
	int16_t x232 = -142;
	volatile uint64_t t48 = 308509LLU;

    t48 = (((x229+x230)^x231)+x232);

    if (t48 != 9223372036854775665LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x233 = 24LLU;
	static int64_t x235 = INT64_MIN;
	int16_t x236 = -1;
	static volatile uint64_t t49 = 13469386001LLU;

    t49 = (((x233+x234)^x235)+x236);

    if (t49 != 9223372038867188587LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x241 = -119;
	uint8_t x242 = 0U;
	int64_t x243 = -1LL;
	static int32_t x244 = INT32_MIN;
	volatile int64_t t50 = 1LL;

    t50 = (((x241+x242)^x243)+x244);

    if (t50 != -2147483530LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x245 = INT16_MIN;
	int64_t x246 = -1663818537814280241LL;
	uint32_t x247 = 366U;
	volatile int64_t x248 = 1938238210LL;
	volatile int64_t t51 = 3353364900LL;

    t51 = (((x245+x246)^x247)+x248);

    if (t51 != -1663818535876075101LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x250 = -26;
	uint32_t x251 = 27U;
	static volatile uint8_t x252 = 89U;
	volatile uint32_t t52 = 8U;

    t52 = (((x249+x250)^x251)+x252);

    if (t52 != 65623U) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x253 = -1;
	static int64_t x254 = -1LL;
	int8_t x255 = INT8_MAX;

    t53 = (((x253+x254)^x255)+x256);

    if (t53 != 32640LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x261 = -1;
	volatile int64_t x262 = -194445LL;
	volatile uint16_t x263 = 23598U;
	volatile uint8_t x264 = 41U;
	volatile int64_t t54 = 305671285535LL;

    t54 = (((x261+x262)^x263)+x264);

    if (t54 != -174971LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x265 = -711;
	uint16_t x267 = 3914U;
	int32_t t55 = -3203;

    t55 = (((x265+x266)^x267)+x268);

    if (t55 != -3215) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x269 = 12242773U;
	static int16_t x270 = INT16_MIN;
	int8_t x271 = INT8_MIN;
	int16_t x272 = -1;
	volatile uint32_t t56 = 0U;

    t56 = (((x269+x270)^x271)+x272);

    if (t56 != 4282757332U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x273 = 76U;
	int8_t x274 = INT8_MIN;
	static uint32_t x275 = 215041356U;
	static int8_t x276 = INT8_MAX;
	uint32_t t57 = 19U;

    t57 = (((x273+x274)^x275)+x276);

    if (t57 != 4079926015U) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x281 = INT32_MIN;
	uint32_t x284 = 17299U;

    t58 = (((x281+x282)^x283)+x284);

    if (t58 != 17298U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x289 = 666268U;
	static volatile uint64_t x290 = UINT64_MAX;
	volatile int16_t x291 = INT16_MAX;

    t59 = (((x289+x290)^x291)+x292);

    if (t59 != 677092LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int64_t x293 = -6614LL;
	static int64_t x294 = 20412240766888LL;
	int32_t x295 = INT32_MAX;
	uint16_t x296 = 919U;

    t60 = (((x293+x294)^x295)+x296);

    if (t60 != 20413570872772LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int16_t x297 = -84;
	int8_t x298 = 16;
	int8_t x299 = 53;
	volatile int64_t t61 = -347204851LL;

    t61 = (((x297+x298)^x299)+x300);

    if (t61 != -120LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x302 = UINT8_MAX;
	int16_t x304 = INT16_MAX;
	volatile int32_t t62 = -480462324;

    t62 = (((x301+x302)^x303)+x304);

    if (t62 != 4479894) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x305 = -1;
	uint16_t x306 = UINT16_MAX;
	int16_t x307 = INT16_MIN;
	volatile int16_t x308 = 320;
	int32_t t63 = -1;

    t63 = (((x305+x306)^x307)+x308);

    if (t63 != -32450) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x309 = 776997308U;
	int64_t x310 = INT64_MIN;
	uint8_t x311 = 2U;
	volatile int32_t x312 = INT32_MAX;
	static volatile int64_t t64 = -1091212624379653LL;

    t64 = (((x309+x310)^x311)+x312);

    if (t64 != -9223372033930294851LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x313 = UINT64_MAX;
	static uint16_t x316 = 2012U;
	uint64_t t65 = 13LLU;

    t65 = (((x313+x314)^x315)+x316);

    if (t65 != 18446744069414586333LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x317 = 1U;
	int16_t x318 = -120;
	int16_t x319 = 0;
	static volatile uint32_t x320 = 194508701U;
	static volatile uint32_t t66 = 18U;

    t66 = (((x317+x318)^x319)+x320);

    if (t66 != 194508582U) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x321 = -1LL;
	int8_t x322 = -1;
	static volatile int32_t x324 = 777;
	volatile int64_t t67 = -107781395194511LL;

    t67 = (((x321+x322)^x323)+x324);

    if (t67 != 650LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x325 = INT64_MIN;
	volatile uint64_t x326 = 3959720576487498LLU;
	int16_t x327 = 0;
	int16_t x328 = INT16_MIN;
	uint64_t t68 = 56994229656398455LLU;

    t68 = (((x325+x326)^x327)+x328);

    if (t68 != 9227331757431230538LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x329 = 534197451U;
	volatile uint32_t x330 = 908704815U;
	uint8_t x331 = 22U;
	uint8_t x332 = UINT8_MAX;
	static volatile uint32_t t69 = 239U;

    t69 = (((x329+x330)^x331)+x332);

    if (t69 != 1442902507U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x333 = UINT64_MAX;
	int16_t x334 = INT16_MIN;
	static int32_t x335 = 9049820;
	int64_t x336 = -1LL;

    t70 = (((x333+x334)^x335)+x336);

    if (t70 != 18446744073700469026LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x338 = 2903;
	volatile uint64_t x339 = 487310729697185LLU;
	int16_t x340 = -1;
	volatile uint64_t t71 = 425029495LLU;

    t71 = (((x337+x338)^x339)+x340);

    if (t71 != 487310729698677LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int8_t x342 = 3;
	static volatile int64_t x343 = -2996014873201LL;
	static uint16_t x344 = UINT16_MAX;

    t72 = (((x341+x342)^x343)+x344);

    if (t72 != -2996014774900LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x350 = -1;
	uint8_t x352 = UINT8_MAX;
	int64_t t73 = 3798LL;

    t73 = (((x349+x350)^x351)+x352);

    if (t73 != 253LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x357 = 123306983U;
	static uint16_t x358 = UINT16_MAX;
	uint32_t x359 = 1728U;
	int64_t x360 = 6568973572556608LL;

    t74 = (((x357+x358)^x359)+x360);

    if (t74 != 6568973695929446LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x369 = -20;
	volatile uint8_t x370 = UINT8_MAX;
	int16_t x371 = -1;
	uint8_t x372 = 16U;
	static int32_t t75 = -369960;

    t75 = (((x369+x370)^x371)+x372);

    if (t75 != -220) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x373 = 2;
	uint32_t x374 = UINT32_MAX;
	uint32_t t76 = 12805234U;

    t76 = (((x373+x374)^x375)+x376);

    if (t76 != 2147483648U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x377 = 14028LLU;
	static uint16_t x378 = UINT16_MAX;
	static int32_t x379 = -15551;
	volatile uint64_t t77 = 3237941771LLU;

    t77 = (((x377+x378)^x379)+x380);

    if (t77 != 18446744073709516169LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x381 = -1LL;
	int64_t x382 = INT64_MAX;
	int16_t x383 = INT16_MAX;
	static volatile int64_t t78 = -6562830567468LL;

    t78 = (((x381+x382)^x383)+x384);

    if (t78 != -32767LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x385 = UINT16_MAX;
	int64_t x386 = INT64_MIN;
	int32_t x387 = INT32_MAX;
	static int32_t x388 = -65810009;
	volatile int64_t t79 = 113292171LL;

    t79 = (((x385+x386)^x387)+x388);

    if (t79 != -9223372034773167705LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x389 = INT32_MIN;
	volatile uint16_t x390 = 4U;
	int16_t x391 = -15419;
	int16_t x392 = INT16_MIN;

    t80 = (((x389+x390)^x391)+x392);

    if (t80 != 2147435457) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x397 = INT8_MIN;
	int8_t x398 = INT8_MIN;
	int8_t x399 = -17;
	uint32_t x400 = 3U;
	uint32_t t81 = 55437617U;

    t81 = (((x397+x398)^x399)+x400);

    if (t81 != 242U) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x401 = -84737;
	static uint64_t x402 = UINT64_MAX;
	uint16_t x403 = 39U;
	uint64_t x404 = 1693782805728LLU;
	volatile uint64_t t82 = 9LLU;

    t82 = (((x401+x402)^x403)+x404);

    if (t82 != 1693782720953LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x409 = UINT8_MAX;
	static int16_t x410 = 48;
	int8_t x411 = 9;
	int32_t x412 = INT32_MIN;
	volatile int32_t t83 = -826681;

    t83 = (((x409+x410)^x411)+x412);

    if (t83 != -2147483354) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x414 = UINT64_MAX;
	volatile int32_t x415 = INT32_MAX;
	int32_t x416 = INT32_MIN;
	static uint64_t t84 = 98864476280LLU;

    t84 = (((x413+x414)^x415)+x416);

    if (t84 != 18446744069414589252LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x417 = 29;
	uint16_t x418 = UINT16_MAX;
	volatile int16_t x420 = -2174;

    t85 = (((x417+x418)^x419)+x420);

    if (t85 != -85348) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x421 = INT16_MIN;
	volatile int16_t x423 = 587;
	volatile int32_t x424 = INT32_MAX;
	static volatile uint64_t t86 = 1722464415588LLU;

    t86 = (((x421+x422)^x423)+x424);

    if (t86 != 2147451704LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x425 = INT8_MIN;
	int32_t x426 = 2051461;
	int8_t x427 = INT8_MAX;
	static volatile uint64_t x428 = UINT64_MAX;
	static uint64_t t87 = 280LLU;

    t87 = (((x425+x426)^x427)+x428);

    if (t87 != 2051449LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x429 = UINT8_MAX;
	volatile uint16_t x430 = 522U;
	uint32_t x431 = 53247991U;
	uint16_t x432 = UINT16_MAX;
	volatile uint32_t t88 = 98U;

    t88 = (((x429+x430)^x431)+x432);

    if (t88 != 53312765U) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x434 = 1596U;
	volatile uint32_t t89 = 6U;

    t89 = (((x433+x434)^x435)+x436);

    if (t89 != 4294965820U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x437 = 150534635U;
	static int8_t x438 = -1;
	uint16_t x439 = 249U;
	int16_t x440 = -1;
	uint32_t t90 = 234052543U;

    t90 = (((x437+x438)^x439)+x440);

    if (t90 != 150534418U) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x441 = 651;
	int32_t x442 = 651;
	int32_t x443 = -1;
	int64_t x444 = 1112091175087776258LL;
	volatile int64_t t91 = 8877014LL;

    t91 = (((x441+x442)^x443)+x444);

    if (t91 != 1112091175087774955LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x445 = -1;
	int16_t x446 = 228;
	static int64_t x448 = INT64_MIN;
	uint64_t t92 = 20237384LLU;

    t92 = (((x445+x446)^x447)+x448);

    if (t92 != 9235125288584343447LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x449 = 122LLU;
	uint8_t x450 = 1U;
	int16_t x452 = INT16_MIN;

    t93 = (((x449+x450)^x451)+x452);

    if (t93 != 18446744073709518852LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x453 = 6257LLU;
	uint64_t x456 = UINT64_MAX;

    t94 = (((x453+x454)^x455)+x456);

    if (t94 != 6363LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x457 = 130316461;
	volatile int8_t x458 = -13;
	int8_t x460 = INT8_MAX;
	int32_t t95 = -656;

    t95 = (((x457+x458)^x459)+x460);

    if (t95 != -130316328) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x461 = INT64_MIN;
	int32_t x462 = INT32_MAX;
	static int64_t x463 = INT64_MAX;
	int32_t x464 = INT32_MIN;
	int64_t t96 = 39LL;

    t96 = (((x461+x462)^x463)+x464);

    if (t96 != -4294967296LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x466 = UINT32_MAX;
	uint32_t x467 = 5150U;
	static uint16_t x468 = 0U;

    t97 = (((x465+x466)^x467)+x468);

    if (t97 != 5598U) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x470 = UINT64_MAX;
	int32_t x471 = INT32_MAX;
	static uint64_t t98 = 340234684211LLU;

    t98 = (((x469+x470)^x471)+x472);

    if (t98 != 18446605345514984201LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x473 = INT8_MIN;
	volatile uint32_t x474 = 138998448U;
	int8_t x475 = INT8_MAX;
	uint8_t x476 = 29U;
	uint32_t t99 = 23675U;

    t99 = (((x473+x474)^x475)+x476);

    if (t99 != 138998380U) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x481 = INT16_MIN;
	uint64_t x482 = 1515987064LLU;
	int64_t x483 = 11434608LL;
	volatile int64_t x484 = INT64_MIN;
	static uint64_t t100 = 24507031271LLU;

    t100 = (((x481+x482)^x483)+x484);

    if (t100 != 9223372038380837384LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x485 = UINT32_MAX;
	int64_t x486 = -1LL;
	static uint16_t x487 = 6U;
	volatile uint16_t x488 = 848U;

    t101 = (((x485+x486)^x487)+x488);

    if (t101 != 4294968136LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x489 = -4;
	int16_t x490 = INT16_MIN;
	int16_t x492 = 3437;
	static volatile int32_t t102 = -153204128;

    t102 = (((x489+x490)^x491)+x492);

    if (t102 != 36212) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x495 = INT64_MIN;
	static int64_t t103 = 27272LL;

    t103 = (((x493+x494)^x495)+x496);

    if (t103 != 9223372036854774272LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x497 = -7;
	uint64_t x498 = UINT64_MAX;
	static uint16_t x499 = 121U;
	int64_t x500 = -1LL;
	uint64_t t104 = 169LLU;

    t104 = (((x497+x498)^x499)+x500);

    if (t104 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x501 = UINT32_MAX;
	int32_t x502 = INT32_MIN;
	int64_t x504 = -1LL;
	volatile int64_t t105 = 30243LL;

    t105 = (((x501+x502)^x503)+x504);

    if (t105 != 2117540628LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x505 = -1;
	int16_t x506 = INT16_MIN;
	static volatile int16_t x507 = INT16_MAX;
	int32_t t106 = -675;

    t106 = (((x505+x506)^x507)+x508);

    if (t106 != -65409) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x509 = -195;
	static uint16_t x512 = UINT16_MAX;
	static volatile int64_t t107 = -54LL;

    t107 = (((x509+x510)^x511)+x512);

    if (t107 != -472728669LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x513 = -1;
	int16_t x514 = INT16_MIN;
	int32_t x515 = -5213;
	uint16_t x516 = 96U;
	volatile int32_t t108 = -83923125;

    t108 = (((x513+x514)^x515)+x516);

    if (t108 != 38076) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int8_t x522 = INT8_MIN;
	uint16_t x524 = 7321U;
	uint64_t t109 = 289152442812LLU;

    t109 = (((x521+x522)^x523)+x524);

    if (t109 != 7444LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x529 = 55U;
	static uint64_t x530 = 10228700545589171LLU;
	uint8_t x531 = UINT8_MAX;
	static volatile int32_t x532 = INT32_MIN;
	volatile uint64_t t110 = 246132LLU;

    t110 = (((x529+x530)^x531)+x532);

    if (t110 != 10228698398105365LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x534 = -386469689309322989LL;
	uint32_t x535 = 737089U;
	int64_t t111 = -56898048024905LL;

    t111 = (((x533+x534)^x535)+x536);

    if (t111 != -386469691456479663LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x541 = -20;
	uint8_t x543 = UINT8_MAX;
	uint32_t x544 = 320U;
	volatile uint32_t t112 = 1369409U;

    t112 = (((x541+x542)^x543)+x544);

    if (t112 != 4294966724U) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x545 = INT16_MIN;
	uint16_t x548 = 906U;
	static volatile int32_t t113 = -135617;

    t113 = (((x545+x546)^x547)+x548);

    if (t113 != 890) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x553 = INT32_MIN;
	volatile int16_t x556 = -1;

    t114 = (((x553+x554)^x555)+x556);

    if (t114 != 2147418114) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t t115 = 1695222274716LL;

    t115 = (((x557+x558)^x559)+x560);

    if (t115 != -1103361742964227LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x561 = INT8_MAX;
	volatile int32_t x562 = 246;
	int64_t x563 = INT64_MAX;
	uint8_t x564 = UINT8_MAX;
	int64_t t116 = -14057206373LL;

    t116 = (((x561+x562)^x563)+x564);

    if (t116 != 9223372036854775689LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x565 = 4967615LLU;
	int16_t x566 = -373;
	static int16_t x567 = -3;
	volatile uint64_t t117 = 20303LLU;

    t117 = (((x565+x566)^x567)+x568);

    if (t117 != 18446744073706106733LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x569 = INT32_MAX;
	int64_t x570 = -1LL;
	static volatile int64_t t118 = 4893LL;

    t118 = (((x569+x570)^x571)+x572);

    if (t118 != 2147447685LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x577 = 0;
	int64_t x578 = INT64_MIN;
	volatile uint32_t x579 = UINT32_MAX;
	volatile int32_t x580 = 185874353;
	int64_t t119 = -367321801400LL;

    t119 = (((x577+x578)^x579)+x580);

    if (t119 != -9223372032373934160LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x581 = UINT16_MAX;
	int32_t x582 = -1;
	static uint32_t x583 = 107U;
	static int32_t x584 = INT32_MAX;
	static volatile uint32_t t120 = 10U;

    t120 = (((x581+x582)^x583)+x584);

    if (t120 != 2147549076U) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x585 = INT16_MIN;
	volatile int64_t x586 = 153271LL;
	uint64_t x587 = 7LLU;
	volatile uint64_t x588 = 1555124LLU;
	volatile uint64_t t121 = 12339LLU;

    t121 = (((x585+x586)^x587)+x588);

    if (t121 != 1675620LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x589 = -1;
	uint32_t x590 = UINT32_MAX;
	static int32_t x591 = -1830313;
	volatile int16_t x592 = -1;
	uint32_t t122 = 7U;

    t122 = (((x589+x590)^x591)+x592);

    if (t122 != 1830312U) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x593 = INT64_MAX;
	volatile int8_t x594 = INT8_MIN;
	uint8_t x595 = 6U;
	int64_t x596 = -15591495077LL;
	volatile int64_t t123 = 4093913648086930LL;

    t123 = (((x593+x594)^x595)+x596);

    if (t123 != 9223372021263280596LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x605 = 98U;
	int8_t x606 = INT8_MIN;
	volatile uint32_t x607 = 663U;
	volatile int8_t x608 = -1;
	static volatile uint32_t t124 = 62680U;

    t124 = (((x605+x606)^x607)+x608);

    if (t124 != 4294966644U) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x609 = 32259U;
	static volatile int8_t x610 = -1;
	int8_t x611 = -1;
	uint16_t x612 = UINT16_MAX;
	static int32_t t125 = 432277878;

    t125 = (((x609+x610)^x611)+x612);

    if (t125 != 33276) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x613 = 28433U;
	volatile uint64_t x614 = UINT64_MAX;
	int16_t x615 = 0;
	uint64_t t126 = 708776LLU;

    t126 = (((x613+x614)^x615)+x616);

    if (t126 != 28559LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x617 = 10055128971107LL;
	volatile int32_t x618 = INT32_MIN;
	static volatile int64_t t127 = -4094579LL;

    t127 = (((x617+x618)^x619)+x620);

    if (t127 != 10057276454683LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x622 = -272005949878316701LL;
	volatile int32_t x623 = INT32_MAX;
	volatile int32_t x624 = -835;
	static volatile int64_t t128 = -1828LL;

    t128 = (((x621+x622)^x623)+x624);

    if (t128 != -272005948694221990LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x625 = 39U;
	int8_t x626 = -1;
	static volatile uint32_t x627 = 21855U;
	int16_t x628 = INT16_MIN;
	volatile uint32_t t129 = 865327345U;

    t129 = (((x625+x626)^x627)+x628);

    if (t129 != 4294956409U) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x630 = INT16_MAX;
	volatile uint8_t x631 = 17U;
	int64_t x632 = INT64_MIN;
	int64_t t130 = 214325894305994099LL;

    t130 = (((x629+x630)^x631)+x632);

    if (t130 != -9223372036854743186LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x633 = 7;
	int64_t x634 = -1475041LL;
	uint32_t x635 = 519414383U;
	uint32_t x636 = 7006U;
	volatile int64_t t131 = -568529961725LL;

    t131 = (((x633+x634)^x635)+x636);

    if (t131 != -518195289LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x637 = -1;
	int32_t x638 = -1;
	int8_t x639 = -1;
	int8_t x640 = INT8_MAX;
	int32_t t132 = 48907;

    t132 = (((x637+x638)^x639)+x640);

    if (t132 != 128) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x642 = UINT32_MAX;
	static int16_t x643 = -2932;
	int8_t x644 = INT8_MIN;
	volatile uint32_t t133 = 27U;

    t133 = (((x641+x642)^x643)+x644);

    if (t133 != 2147486451U) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x649 = INT16_MIN;
	int8_t x650 = -1;

    t134 = (((x649+x650)^x651)+x652);

    if (t134 != 1547301) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x653 = INT32_MIN;
	volatile uint16_t x654 = 2145U;
	uint8_t x655 = UINT8_MAX;
	static int64_t x656 = 194578342032980LL;
	static volatile int64_t t135 = -16608489525076LL;

    t135 = (((x653+x654)^x655)+x656);

    if (t135 != 194576194551538LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x658 = -1;
	int8_t x659 = INT8_MIN;
	volatile uint16_t x660 = 12U;
	volatile int32_t t136 = -981977;

    t136 = (((x657+x658)^x659)+x660);

    if (t136 != -483495037) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x661 = INT16_MAX;
	uint16_t x662 = 14U;
	int8_t x663 = -1;
	uint16_t x664 = 409U;
	volatile int32_t t137 = -3471864;

    t137 = (((x661+x662)^x663)+x664);

    if (t137 != -32373) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x665 = INT64_MIN;
	int8_t x668 = INT8_MIN;

    t138 = (((x665+x666)^x667)+x668);

    if (t138 != 9223372036855177162LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t t139 = 17820962LL;

    t139 = (((x669+x670)^x671)+x672);

    if (t139 != -9223372034707118305LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x673 = 44U;
	static int16_t x674 = -292;
	uint64_t x675 = 164353753LLU;

    t140 = (((x673+x674)^x675)+x676);

    if (t140 != 18446744073545198032LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x677 = 7U;
	volatile uint32_t x679 = UINT32_MAX;
	uint32_t x680 = 47912000U;
	static uint32_t t141 = 4099U;

    t141 = (((x677+x678)^x679)+x680);

    if (t141 != 47879225U) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x681 = INT8_MAX;
	volatile int64_t x682 = -1LL;
	static int32_t x683 = INT32_MIN;
	static int32_t x684 = INT32_MIN;
	int64_t t142 = -440699913LL;

    t142 = (((x681+x682)^x683)+x684);

    if (t142 != -4294967170LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x685 = 0;
	int16_t x686 = -1;
	static uint8_t x687 = UINT8_MAX;
	int64_t x688 = -3330445394314395LL;
	volatile int64_t t143 = -88526LL;

    t143 = (((x685+x686)^x687)+x688);

    if (t143 != -3330445394314651LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x689 = 14205U;
	uint64_t x690 = 64152LLU;
	static uint8_t x691 = 3U;
	uint64_t t144 = 117113440763LLU;

    t144 = (((x689+x690)^x691)+x692);

    if (t144 != 105342LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x701 = INT32_MAX;
	uint64_t x702 = 63877423121684LLU;
	int32_t x703 = -1;
	static uint64_t x704 = UINT64_MAX;
	uint64_t t145 = 320068740407419163LLU;

    t145 = (((x701+x702)^x703)+x704);

    if (t145 != 18446680194138946283LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x705 = INT8_MIN;
	int32_t x707 = INT32_MAX;
	static volatile int8_t x708 = INT8_MAX;

    t146 = (((x705+x706)^x707)+x708);

    if (t146 != 18446744071562068202LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x709 = INT32_MIN;
	uint8_t x710 = 7U;
	int8_t x711 = INT8_MIN;
	int32_t t147 = 505;

    t147 = (((x709+x710)^x711)+x712);

    if (t147 != 2147483527) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x717 = UINT16_MAX;
	int16_t x719 = 15468;
	static int64_t x720 = INT64_MIN;
	uint64_t t148 = 845846799847LLU;

    t148 = (((x717+x718)^x719)+x720);

    if (t148 != 9223372036854825874LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x721 = -1;
	uint64_t x722 = 313LLU;
	uint8_t x723 = UINT8_MAX;
	int8_t x724 = INT8_MIN;
	volatile uint64_t t149 = 379460327LLU;

    t149 = (((x721+x722)^x723)+x724);

    if (t149 != 327LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x729 = 0U;
	int16_t x730 = -376;
	int16_t x731 = INT16_MIN;
	uint64_t x732 = 2448170680299410595LLU;

    t150 = (((x729+x730)^x731)+x732);

    if (t150 != 2448170680299442987LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x733 = 0U;
	static int64_t x734 = -5929LL;
	static volatile int8_t x736 = INT8_MIN;
	int64_t t151 = 1799374848310745837LL;

    t151 = (((x733+x734)^x735)+x736);

    if (t151 != -6063LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x737 = 1;
	static int64_t x739 = INT64_MAX;
	int64_t t152 = -841980LL;

    t152 = (((x737+x738)^x739)+x740);

    if (t152 != -129LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint64_t x741 = UINT64_MAX;
	int8_t x742 = INT8_MIN;
	volatile uint32_t x743 = 5819959U;
	int64_t x744 = INT64_MAX;
	uint64_t t153 = 616LLU;

    t153 = (((x741+x742)^x743)+x744);

    if (t153 != 9223372036848955719LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x745 = INT32_MIN;
	static uint8_t x746 = UINT8_MAX;
	static volatile int8_t x747 = INT8_MIN;
	int64_t x748 = INT64_MIN;
	volatile int64_t t154 = 81136805LL;

    t154 = (((x745+x746)^x747)+x748);

    if (t154 != -9223372034707292289LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int32_t x749 = -1;
	uint32_t x750 = UINT32_MAX;
	static uint32_t x751 = 523877U;
	uint32_t x752 = 172662966U;
	static uint32_t t155 = 4952877U;

    t155 = (((x749+x750)^x751)+x752);

    if (t155 != 172139089U) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x753 = UINT64_MAX;
	static uint8_t x754 = 6U;
	volatile int64_t x755 = INT64_MAX;
	int32_t x756 = -1;
	static volatile uint64_t t156 = 8999317036LLU;

    t156 = (((x753+x754)^x755)+x756);

    if (t156 != 9223372036854775801LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x757 = INT8_MIN;
	static int64_t x758 = 185504673888116LL;
	uint16_t x759 = UINT16_MAX;
	uint32_t x760 = 6U;
	int64_t t157 = 2141401562174084LL;

    t157 = (((x757+x758)^x759)+x760);

    if (t157 != 185504673827089LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x764 = 6U;
	uint64_t t158 = 15101862009931LLU;

    t158 = (((x761+x762)^x763)+x764);

    if (t158 != 365078814LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x765 = 40LL;
	uint16_t x766 = 1118U;
	int32_t x767 = INT32_MAX;
	static int16_t x768 = INT16_MIN;
	volatile int64_t t159 = 913107571656053LL;

    t159 = (((x765+x766)^x767)+x768);

    if (t159 != 2147449721LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x770 = INT64_MIN;
	uint8_t x771 = UINT8_MAX;
	static int64_t x772 = INT64_MAX;
	int64_t t160 = 2004531006574053157LL;

    t160 = (((x769+x770)^x771)+x772);

    if (t160 != -1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x773 = INT32_MAX;
	int16_t x774 = 0;
	int64_t x775 = -1LL;
	int32_t x776 = INT32_MIN;
	volatile int64_t t161 = 63126072897024532LL;

    t161 = (((x773+x774)^x775)+x776);

    if (t161 != -4294967296LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x779 = INT8_MIN;
	int32_t x780 = INT32_MIN;
	volatile int32_t t162 = 7;

    t162 = (((x777+x778)^x779)+x780);

    if (t162 != -2147483437) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x781 = -1LL;
	static uint16_t x783 = UINT16_MAX;
	volatile int64_t x784 = -1LL;
	volatile int64_t t163 = 0LL;

    t163 = (((x781+x782)^x783)+x784);

    if (t163 != -32769LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x785 = INT8_MIN;
	uint8_t x786 = 0U;
	int64_t x787 = -1LL;
	int64_t t164 = 224LL;

    t164 = (((x785+x786)^x787)+x788);

    if (t164 != 179LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x790 = -277LL;
	int64_t x792 = INT64_MAX;

    t165 = (((x789+x790)^x791)+x792);

    if (t165 != 9223372036854770679LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x794 = 0;
	uint64_t t166 = 1LLU;

    t166 = (((x793+x794)^x795)+x796);

    if (t166 != 13234406138694940515LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x797 = -1LL;
	volatile uint16_t x798 = 28U;
	static uint16_t x799 = 13U;
	int8_t x800 = -1;
	int64_t t167 = -151971186191705LL;

    t167 = (((x797+x798)^x799)+x800);

    if (t167 != 21LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x801 = 16;
	static volatile int32_t x802 = 3;
	uint32_t x803 = 1473770U;
	uint64_t t168 = 597647613093759401LLU;

    t168 = (((x801+x802)^x803)+x804);

    if (t168 != 7305684344369LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x809 = UINT8_MAX;
	static uint64_t x810 = UINT64_MAX;
	static int64_t x811 = INT64_MIN;
	int8_t x812 = INT8_MIN;
	volatile uint64_t t169 = 587226434783433LLU;

    t169 = (((x809+x810)^x811)+x812);

    if (t169 != 9223372036854775934LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x817 = 5912577237LLU;
	static volatile uint32_t x818 = 5U;
	int32_t x819 = INT32_MIN;
	volatile uint64_t x820 = 12634029331753LLU;

    t170 = (((x817+x818)^x819)+x820);

    if (t170 != 12629204490755LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x833 = -669;
	int8_t x835 = -21;
	int64_t x836 = -864156155436659375LL;

    t171 = (((x833+x834)^x835)+x836);

    if (t171 != -864156155436658735LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x837 = 62;
	volatile uint64_t x838 = UINT64_MAX;
	static int32_t x839 = -905;
	int64_t x840 = INT64_MIN;
	volatile uint64_t t172 = 65455LLU;

    t172 = (((x837+x838)^x839)+x840);

    if (t172 != 9223372036854774858LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x845 = INT32_MAX;
	volatile int16_t x846 = INT16_MIN;
	int32_t x847 = INT32_MIN;
	int32_t x848 = INT32_MAX;
	int32_t t173 = 5;

    t173 = (((x845+x846)^x847)+x848);

    if (t173 != 2147450878) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint8_t x849 = 2U;
	int64_t x850 = -867034449492LL;
	int16_t x852 = -1;
	uint64_t t174 = 3718895454956804833LLU;

    t174 = (((x849+x850)^x851)+x852);

    if (t174 != 18446743597257778736LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x853 = -1;
	uint32_t x854 = UINT32_MAX;
	int64_t t175 = -178212864526532LL;

    t175 = (((x853+x854)^x855)+x856);

    if (t175 != -9223372032559841282LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x857 = 1;
	uint64_t x858 = UINT64_MAX;
	volatile int64_t x859 = 193426422021133936LL;
	int64_t x860 = INT64_MAX;

    t176 = (((x857+x858)^x859)+x860);

    if (t176 != 9416798458875909743LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x861 = 2U;
	volatile int16_t x862 = -34;
	volatile int32_t x863 = INT32_MIN;
	volatile int32_t t177 = -23514363;

    t177 = (((x861+x862)^x863)+x864);

    if (t177 != -32) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint32_t x869 = 192971656U;
	volatile uint64_t x871 = 1623623LLU;
	uint16_t x872 = 4U;
	uint64_t t178 = 3065434448045634LLU;

    t178 = (((x869+x870)^x871)+x872);

    if (t178 != 18446743986226596646LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x873 = -1;
	static int8_t x874 = INT8_MAX;
	uint32_t x875 = UINT32_MAX;
	int16_t x876 = INT16_MIN;
	volatile uint32_t t179 = 978U;

    t179 = (((x873+x874)^x875)+x876);

    if (t179 != 4294934401U) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x881 = -1;
	static uint64_t x882 = UINT64_MAX;
	volatile int32_t x883 = 25;
	int64_t x884 = INT64_MIN;
	uint64_t t180 = 114670399008421LLU;

    t180 = (((x881+x882)^x883)+x884);

    if (t180 != 9223372036854775783LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint32_t x886 = 21U;
	static int64_t x887 = INT64_MIN;
	int32_t x888 = INT32_MIN;
	volatile int64_t t181 = -2564458LL;

    t181 = (((x885+x886)^x887)+x888);

    if (t181 != -9223372034707292267LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x889 = -1;
	volatile int16_t x890 = INT16_MIN;
	volatile int8_t x891 = INT8_MIN;
	volatile uint32_t x892 = UINT32_MAX;
	volatile uint32_t t182 = 1967162852U;

    t182 = (((x889+x890)^x891)+x892);

    if (t182 != 32894U) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x893 = INT16_MAX;
	uint16_t x894 = 2U;
	int64_t x895 = INT64_MIN;
	uint32_t x896 = 1927U;
	int64_t t183 = 25278039LL;

    t183 = (((x893+x894)^x895)+x896);

    if (t183 != -9223372036854741112LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x901 = UINT8_MAX;
	uint16_t x902 = 377U;
	uint64_t x904 = 21437710981LLU;
	volatile uint64_t t184 = 633142296LLU;

    t184 = (((x901+x902)^x903)+x904);

    if (t184 != 21437710461LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x909 = INT8_MIN;
	volatile int32_t x910 = -6;
	uint32_t x912 = 216449U;
	static volatile uint32_t t185 = 1075U;

    t185 = (((x909+x910)^x911)+x912);

    if (t185 != 216209U) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int64_t x914 = -1LL;
	static int32_t x915 = INT32_MIN;
	uint16_t x916 = UINT16_MAX;
	static int64_t t186 = 199401887LL;

    t186 = (((x913+x914)^x915)+x916);

    if (t186 != 2147549182LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int64_t x917 = -166LL;
	int32_t x918 = -1075802;
	int16_t x919 = -1;
	static int16_t x920 = INT16_MIN;
	volatile int64_t t187 = -39833383873820994LL;

    t187 = (((x917+x918)^x919)+x920);

    if (t187 != 1043199LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x921 = UINT8_MAX;
	int32_t x922 = INT32_MIN;
	uint64_t x923 = UINT64_MAX;
	int8_t x924 = INT8_MIN;
	volatile uint64_t t188 = 0LLU;

    t188 = (((x921+x922)^x923)+x924);

    if (t188 != 2147483264LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x926 = UINT32_MAX;
	volatile int32_t x927 = INT32_MAX;
	static int16_t x928 = INT16_MIN;
	static volatile uint32_t t189 = 32U;

    t189 = (((x925+x926)^x927)+x928);

    if (t189 != 4294934528U) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x929 = -13;
	uint8_t x930 = 7U;
	int8_t x931 = 1;
	int32_t x932 = -748547;
	static volatile int32_t t190 = 2314;

    t190 = (((x929+x930)^x931)+x932);

    if (t190 != -748552) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x933 = 0U;
	static int64_t x934 = -1LL;
	int64_t t191 = 9LL;

    t191 = (((x933+x934)^x935)+x936);

    if (t191 != -35187LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x937 = 33818066LLU;
	int16_t x938 = -1;
	int64_t x939 = INT64_MIN;
	volatile uint64_t t192 = 157LLU;

    t192 = (((x937+x938)^x939)+x940);

    if (t192 != 9223372039036077520LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x945 = INT16_MIN;
	uint64_t x948 = 7683704347367113897LLU;

    t193 = (((x945+x946)^x947)+x948);

    if (t193 != 7683704347367146409LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int32_t x957 = INT32_MIN;
	uint32_t x958 = 1899U;
	uint64_t x959 = 1510586801LLU;
	uint32_t x960 = 14557950U;
	uint64_t t194 = 416768912LLU;

    t194 = (((x957+x958)^x959)+x960);

    if (t194 != 3672629720LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x965 = INT32_MIN;
	uint32_t x966 = 321169U;
	int64_t x967 = -1LL;
	uint16_t x968 = 4352U;

    t195 = (((x965+x966)^x967)+x968);

    if (t195 != -2147800466LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x982 = 78559U;
	int16_t x983 = INT16_MAX;
	volatile int8_t x984 = -1;
	uint32_t t196 = 28005U;

    t196 = (((x981+x982)^x983)+x984);

    if (t196 != 52511U) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x985 = INT32_MAX;
	uint32_t x987 = 216U;
	uint32_t t197 = 207550920U;

    t197 = (((x985+x986)^x987)+x988);

    if (t197 != 2147516198U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x989 = 28U;
	int16_t x990 = INT16_MIN;
	uint64_t x991 = 80271659587LLU;
	static uint64_t x992 = UINT64_MAX;
	volatile uint64_t t198 = 1035778757662076LLU;

    t198 = (((x989+x990)^x991)+x992);

    if (t198 != 18446743993437901406LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x993 = 4309167;
	uint8_t x996 = 5U;

    t199 = (((x993+x994)^x995)+x996);

    if (t199 != -2143108941) { NG(); } else { ; }
	
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

