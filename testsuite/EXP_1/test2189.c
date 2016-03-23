
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

static uint64_t x3 = 1128269423985600LLU;
uint16_t x5 = UINT16_MAX;
int16_t x11 = INT16_MIN;
volatile int32_t x12 = INT32_MAX;
uint16_t x14 = 2613U;
uint8_t x30 = UINT8_MAX;
int8_t x32 = -1;
uint32_t x37 = 12484U;
static int64_t x49 = 2816274LL;
static uint8_t x59 = 6U;
uint32_t x67 = UINT32_MAX;
int32_t x69 = -42;
static uint32_t x71 = UINT32_MAX;
static int32_t t17 = 2;
uint16_t x81 = 16132U;
volatile int8_t x83 = 5;
int32_t x84 = -1;
int8_t x86 = INT8_MIN;
static int8_t x89 = -1;
static uint32_t x98 = 192370U;
static uint32_t t22 = 2U;
int32_t x107 = 11;
int64_t x108 = -155467657707603040LL;
int8_t x115 = -1;
static volatile int32_t x122 = -8998820;
uint64_t x129 = 2013376LLU;
static int32_t x131 = INT32_MIN;
int8_t x134 = -2;
int32_t x137 = 1;
static int8_t x139 = -17;
int8_t x142 = INT8_MIN;
int32_t x143 = INT32_MIN;
volatile uint16_t x144 = 2355U;
int32_t t32 = -15189986;
static int32_t t33 = 648371900;
static int8_t x160 = 4;
int32_t x170 = INT32_MIN;
int16_t x173 = INT16_MIN;
int32_t x175 = -155;
uint64_t x178 = 3864853119557LLU;
int32_t x179 = -1;
volatile int8_t x180 = INT8_MIN;
volatile uint64_t t38 = 1230LLU;
volatile int8_t x182 = -15;
int32_t t40 = -49524;
int32_t t41 = 22058364;
uint64_t t43 = 35012409813430LLU;
static uint32_t x203 = UINT32_MAX;
uint8_t x207 = 0U;
static int16_t x211 = INT16_MIN;
static int64_t t48 = 789369789336418383LL;
static int32_t x225 = -1;
int16_t x229 = INT16_MIN;
volatile uint64_t t53 = 1736880219768444LLU;
int64_t x263 = -1LL;
int32_t x264 = INT32_MIN;
int64_t t57 = 4648437LL;
static uint8_t x273 = 12U;
static int32_t x276 = INT32_MIN;
volatile int64_t t59 = -678924015248LL;
uint64_t x283 = 131765164390LLU;
int16_t x286 = -1;
int64_t x292 = -1LL;
int16_t x295 = INT16_MAX;
int64_t x311 = -1LL;
static int32_t x312 = INT32_MAX;
int32_t x317 = -68;
uint64_t x319 = 30506459623896206LLU;
uint32_t x321 = 257679U;
int16_t x324 = INT16_MAX;
int64_t t67 = 6LL;
volatile int32_t x341 = INT32_MAX;
volatile int32_t x342 = 42;
volatile int32_t x348 = INT32_MAX;
int32_t x350 = INT32_MIN;
uint64_t x351 = UINT64_MAX;
volatile int32_t x352 = INT32_MAX;
static volatile uint16_t x355 = 1U;
int32_t x359 = -244169;
static volatile uint16_t x373 = UINT16_MAX;
uint64_t x379 = 2808226298398710373LLU;
static volatile int8_t x380 = INT8_MIN;
volatile int8_t x383 = 29;
static uint8_t x384 = 5U;
uint32_t x387 = 1934U;
static int8_t x397 = INT8_MIN;
volatile int64_t x401 = INT64_MIN;
int64_t x403 = INT64_MIN;
volatile uint64_t t82 = 4LLU;
int32_t x409 = INT32_MIN;
static volatile int16_t x419 = 4808;
int16_t x421 = INT16_MIN;
uint64_t x422 = UINT64_MAX;
int8_t x423 = INT8_MIN;
int64_t t88 = 96610690847LL;
uint64_t x432 = 3654020075LLU;
int32_t x440 = -1;
uint8_t x443 = UINT8_MAX;
volatile int64_t x444 = INT64_MIN;
uint8_t x450 = 0U;
static uint64_t t93 = 1101888299052954103LLU;
uint16_t x453 = UINT16_MAX;
int16_t x454 = INT16_MIN;
static volatile int64_t t95 = 6708025LL;
int8_t x461 = -1;
int32_t t96 = 53152286;
uint8_t x465 = UINT8_MAX;
int32_t x468 = -242735775;
volatile uint32_t t97 = 844U;
volatile int8_t x471 = -1;
int16_t x479 = 94;
uint16_t x482 = 1240U;
int64_t t100 = -684106642359LL;
volatile int64_t x486 = INT64_MAX;
volatile int8_t x493 = INT8_MIN;
int16_t x494 = 1;
uint16_t x508 = 2U;
uint64_t t105 = 3LLU;
int32_t x519 = INT32_MAX;
int8_t x530 = 58;
static volatile uint64_t t111 = 3168LLU;
uint16_t x537 = UINT16_MAX;
int64_t x542 = -7469LL;
int8_t x553 = INT8_MIN;
uint64_t x554 = 820156594501LLU;
int16_t x556 = INT16_MIN;
uint32_t x557 = 300670U;
uint16_t x560 = 8118U;
uint64_t x562 = 4837104LLU;
uint32_t x565 = 6982U;
int8_t x568 = 31;
volatile int64_t t122 = 1802556558633890662LL;
static volatile uint64_t t123 = 677478121LLU;
static uint16_t x591 = UINT16_MAX;
static uint32_t x596 = UINT32_MAX;
static volatile uint64_t t127 = 1854176433LLU;
int32_t t129 = -247105473;
uint8_t x632 = UINT8_MAX;
uint64_t x645 = UINT64_MAX;
int64_t t136 = -614983386540580548LL;
uint8_t x653 = 0U;
int8_t x656 = 45;
volatile uint8_t x671 = 14U;
int64_t x672 = INT64_MIN;
static int32_t t140 = -255975006;
uint16_t x678 = 23677U;
uint32_t x683 = 1U;
uint32_t x684 = UINT32_MAX;
uint64_t x689 = 425678341185006LLU;
uint8_t x692 = 18U;
static uint8_t x694 = 26U;
uint16_t x703 = 2U;
int16_t x704 = 1;
volatile int64_t t147 = -53732856LL;
int32_t x713 = INT32_MIN;
int8_t x715 = -1;
int32_t t150 = 21495240;
int16_t x729 = INT16_MIN;
volatile uint64_t t152 = 118703746891930LLU;
int32_t x737 = -11;
volatile int16_t x738 = -1;
volatile int16_t x739 = -1;
static uint64_t x749 = 1LLU;
int8_t x752 = -1;
int8_t x754 = 0;
static volatile int32_t t158 = 2067601;
int8_t x761 = -1;
uint8_t x764 = 11U;
volatile uint32_t t159 = 39300311U;
int16_t x766 = INT16_MAX;
uint8_t x767 = UINT8_MAX;
uint8_t x779 = 0U;
volatile uint32_t t162 = 621U;
int16_t x781 = -8;
static int32_t x783 = 497031;
volatile uint32_t t163 = 88092U;
int64_t x797 = INT64_MIN;
static int16_t x799 = -1;
volatile int8_t x804 = -1;
volatile int8_t x807 = INT8_MIN;
volatile int64_t t168 = 123774930476185070LL;
uint16_t x814 = 4392U;
uint8_t x817 = UINT8_MAX;
int16_t x820 = INT16_MIN;
int64_t x822 = -1LL;
int16_t x829 = -1;
volatile uint32_t x831 = 3801176U;
uint32_t x832 = 53U;
uint16_t x833 = UINT16_MAX;
int32_t x847 = INT32_MIN;
uint32_t x855 = 1U;
int32_t x858 = INT32_MIN;
static volatile int64_t x859 = -32LL;
uint32_t x860 = 3519U;
static volatile int32_t x867 = -1;
uint16_t x869 = UINT16_MAX;
int8_t x870 = 57;
int8_t x871 = 5;
int32_t t181 = 7100;
uint16_t x874 = UINT16_MAX;
volatile int32_t x875 = INT32_MAX;
static uint64_t x878 = 1LLU;
volatile int16_t x882 = INT16_MIN;
int32_t x892 = -1;
uint32_t x912 = 7U;
volatile uint8_t x919 = 25U;
uint32_t x920 = 18209U;
uint64_t x922 = 36LLU;
static int32_t x923 = 7;
volatile uint8_t x924 = UINT8_MAX;
volatile uint64_t t191 = 27LLU;
int8_t x925 = 4;
uint8_t x939 = UINT8_MAX;
int8_t x941 = INT8_MIN;
int16_t x942 = -1;
volatile uint32_t x945 = UINT32_MAX;
int32_t x946 = 3;
volatile uint32_t x948 = UINT32_MAX;
int16_t x949 = -1;
int32_t t197 = 1;
int64_t x957 = INT64_MIN;


void f0(void) {
    	static uint16_t x1 = 7973U;
	uint8_t x2 = UINT8_MAX;
	volatile int32_t x4 = 5;
	volatile uint64_t t0 = 1491LLU;

    t0 = (((x1&x2)*x3)%x4);

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x6 = 13810698386184LLU;
	int16_t x7 = -6733;
	static uint32_t x8 = UINT32_MAX;
	uint64_t t1 = 1573543LLU;

    t1 = (((x5&x6)*x7)%x8);

    if (t1 != 4082904728LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -357LL;
	int16_t x10 = 23;
	volatile int64_t t2 = 123706608884325178LL;

    t2 = (((x9&x10)*x11)%x12);

    if (t2 != -622592LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = 723;
	volatile uint32_t x15 = 54941U;
	uint8_t x16 = UINT8_MAX;
	static uint32_t t3 = 153588322U;

    t3 = (((x13&x14)*x15)%x16);

    if (t3 != 164U) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = -1;
	volatile int16_t x22 = -7651;
	static int32_t x23 = -2;
	int64_t x24 = 2775405154LL;
	int64_t t4 = 1103987897615856LL;

    t4 = (((x21&x22)*x23)%x24);

    if (t4 != 15302LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x25 = 751897319U;
	static int16_t x26 = INT16_MIN;
	int32_t x27 = -1;
	int8_t x28 = INT8_MAX;
	uint32_t t5 = 167U;

    t5 = (((x25&x26)*x27)%x28);

    if (t5 != 98U) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x29 = INT64_MIN;
	volatile int8_t x31 = INT8_MAX;
	volatile int64_t t6 = -2401527541LL;

    t6 = (((x29&x30)*x31)%x32);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x33 = 117U;
	static volatile int8_t x34 = -1;
	volatile uint64_t x35 = UINT64_MAX;
	uint16_t x36 = 489U;
	volatile uint64_t t7 = 2775480812261626182LLU;

    t7 = (((x33&x34)*x35)%x36);

    if (t7 != 103LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x38 = -152;
	uint64_t x39 = 485503807LLU;
	static int16_t x40 = INT16_MIN;
	volatile uint64_t t8 = 19162182829LLU;

    t8 = (((x37&x38)*x39)%x40);

    if (t8 != 5996943024064LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x41 = 253221662285449LL;
	volatile int64_t x42 = INT64_MAX;
	volatile uint64_t x43 = 15LLU;
	uint64_t x44 = 2178537837257LLU;
	volatile uint64_t t9 = 35705326208LLU;

    t9 = (((x41&x42)*x43)%x44);

    if (t9 != 1133483942784LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x45 = -1741;
	uint64_t x46 = 2629082689963917LLU;
	int16_t x47 = -1;
	int32_t x48 = INT32_MIN;
	uint64_t t10 = 293818LLU;

    t10 = (((x45&x46)*x47)%x48);

    if (t10 != 18444114991019589375LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x50 = INT32_MIN;
	uint8_t x51 = 46U;
	int16_t x52 = 1166;
	volatile int64_t t11 = 5885454062572727LL;

    t11 = (((x49&x50)*x51)%x52);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = -1;
	int64_t x54 = 101577978LL;
	int16_t x55 = INT16_MAX;
	int16_t x56 = 158;
	int64_t t12 = 6361086LL;

    t12 = (((x53&x54)*x55)%x56);

    if (t12 != 46LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x57 = UINT8_MAX;
	int8_t x58 = 56;
	uint64_t x60 = 6283314249178LLU;
	volatile uint64_t t13 = 516645382LLU;

    t13 = (((x57&x58)*x59)%x60);

    if (t13 != 336LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x61 = 0U;
	uint8_t x62 = 1U;
	int32_t x63 = INT32_MIN;
	static int16_t x64 = 3;
	static int32_t t14 = 4;

    t14 = (((x61&x62)*x63)%x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x65 = 119U;
	uint32_t x66 = 1U;
	volatile int16_t x68 = -1;
	uint32_t t15 = 1U;

    t15 = (((x65&x66)*x67)%x68);

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x70 = INT16_MIN;
	int64_t x72 = INT64_MIN;
	static int64_t t16 = 57804986LL;

    t16 = (((x69&x70)*x71)%x72);

    if (t16 != 32768LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x73 = -11;
	int16_t x74 = 1;
	int16_t x75 = INT16_MIN;
	uint16_t x76 = 47U;

    t17 = (((x73&x74)*x75)%x76);

    if (t17 != -9) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint8_t x77 = 2U;
	uint8_t x78 = 6U;
	int8_t x79 = 7;
	int64_t x80 = INT64_MIN;
	int64_t t18 = -1125560002222920553LL;

    t18 = (((x77&x78)*x79)%x80);

    if (t18 != 14LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x82 = 846;
	static volatile int32_t t19 = 27;

    t19 = (((x81&x82)*x83)%x84);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x85 = -248728;
	int8_t x87 = INT8_MIN;
	int64_t x88 = INT64_MIN;
	static int64_t t20 = 70247LL;

    t20 = (((x85&x86)*x87)%x88);

    if (t20 != 31850496LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint32_t x90 = 1582U;
	int32_t x91 = -1;
	uint64_t x92 = UINT64_MAX;
	uint64_t t21 = 1313344081490368919LLU;

    t21 = (((x89&x90)*x91)%x92);

    if (t21 != 4294965714LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x97 = 42;
	uint32_t x99 = 1905U;
	int32_t x100 = INT32_MAX;

    t22 = (((x97&x98)*x99)%x100);

    if (t22 != 64770U) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x105 = INT8_MIN;
	volatile int64_t x106 = 150993155178912LL;
	volatile int64_t t23 = -32213540LL;

    t23 = (((x105&x106)*x107)%x108);

    if (t23 != 1660924706967680LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x109 = 1;
	volatile int8_t x110 = INT8_MIN;
	uint8_t x111 = UINT8_MAX;
	int32_t x112 = -254012;
	static int32_t t24 = 14696;

    t24 = (((x109&x110)*x111)%x112);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint32_t x113 = 1661646U;
	static int8_t x114 = INT8_MIN;
	uint64_t x116 = 3532LLU;
	volatile uint64_t t25 = 634046553397579315LLU;

    t25 = (((x113&x114)*x115)%x116);

    if (t25 != 788LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x117 = -23;
	int64_t x118 = -279096060884078LL;
	volatile int64_t x119 = -1LL;
	static uint8_t x120 = UINT8_MAX;
	int64_t t26 = 29885623LL;

    t26 = (((x117&x118)*x119)%x120);

    if (t26 != 56LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x121 = 6U;
	static volatile uint16_t x123 = 671U;
	uint16_t x124 = 157U;
	uint32_t t27 = 1041386297U;

    t27 = (((x121&x122)*x123)%x124);

    if (t27 != 15U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x125 = UINT32_MAX;
	static uint64_t x126 = UINT64_MAX;
	int16_t x127 = INT16_MIN;
	volatile int64_t x128 = -1LL;
	uint64_t t28 = 377LLU;

    t28 = (((x125&x126)*x127)%x128);

    if (t28 != 18446603336221229056LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x130 = 3;
	int8_t x132 = INT8_MAX;
	static uint64_t t29 = 538104LLU;

    t29 = (((x129&x130)*x131)%x132);

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x133 = INT8_MAX;
	volatile uint8_t x135 = UINT8_MAX;
	int8_t x136 = INT8_MIN;
	static int32_t t30 = -10015;

    t30 = (((x133&x134)*x135)%x136);

    if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x138 = 90;
	int32_t x140 = INT32_MIN;
	volatile int32_t t31 = 159989;

    t31 = (((x137&x138)*x139)%x140);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x141 = 0;

    t32 = (((x141&x142)*x143)%x144);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x145 = 0;
	int16_t x146 = INT16_MAX;
	volatile int8_t x147 = -1;
	int16_t x148 = -145;

    t33 = (((x145&x146)*x147)%x148);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x157 = 8U;
	int32_t x158 = INT32_MIN;
	static int64_t x159 = INT64_MIN;
	int64_t t34 = 6LL;

    t34 = (((x157&x158)*x159)%x160);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x165 = 102644U;
	int64_t x166 = 207504628LL;
	uint32_t x167 = 2U;
	int16_t x168 = 8123;
	int64_t t35 = -637600LL;

    t35 = (((x165&x166)*x167)%x168);

    if (t35 != 488LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x169 = 66437U;
	static int64_t x171 = INT64_MAX;
	uint32_t x172 = 129U;
	int64_t t36 = -10659432618047189LL;

    t36 = (((x169&x170)*x171)%x172);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x174 = 26201;
	volatile int32_t x176 = INT32_MIN;
	int32_t t37 = -253;

    t37 = (((x173&x174)*x175)%x176);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint32_t x177 = UINT32_MAX;

    t38 = (((x177&x178)*x179)%x180);

    if (t38 != 18446744070032031163LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x181 = 6571;
	int16_t x183 = -1;
	static int16_t x184 = 169;
	int32_t t39 = -1;

    t39 = (((x181&x182)*x183)%x184);

    if (t39 != -139) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x185 = INT8_MIN;
	int16_t x186 = 230;
	int8_t x187 = 30;
	uint16_t x188 = UINT16_MAX;

    t40 = (((x185&x186)*x187)%x188);

    if (t40 != 3840) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint16_t x189 = 11542U;
	int16_t x190 = 384;
	static int8_t x191 = -62;
	int8_t x192 = 1;

    t41 = (((x189&x190)*x191)%x192);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x193 = INT16_MIN;
	int16_t x194 = -1;
	uint32_t x195 = 1363U;
	int16_t x196 = -13;
	uint32_t t42 = 60U;

    t42 = (((x193&x194)*x195)%x196);

    if (t42 != 4250304512U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x197 = UINT64_MAX;
	int64_t x198 = INT64_MIN;
	uint32_t x199 = UINT32_MAX;
	volatile int8_t x200 = INT8_MAX;

    t43 = (((x197&x198)*x199)%x200);

    if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x201 = 882LLU;
	int8_t x202 = -1;
	uint64_t x204 = 924375157717266171LLU;
	volatile uint64_t t44 = 3033817886411382845LLU;

    t44 = (((x201&x202)*x203)%x204);

    if (t44 != 3788161154190LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x205 = INT64_MIN;
	int32_t x206 = INT32_MIN;
	uint64_t x208 = 116774392013198LLU;
	uint64_t t45 = 258038503751LLU;

    t45 = (((x205&x206)*x207)%x208);

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x209 = UINT8_MAX;
	uint16_t x210 = UINT16_MAX;
	volatile int64_t x212 = INT64_MIN;
	static int64_t t46 = -1889146303803LL;

    t46 = (((x209&x210)*x211)%x212);

    if (t46 != -8355840LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x213 = UINT32_MAX;
	int8_t x214 = 0;
	volatile int16_t x215 = INT16_MAX;
	static int64_t x216 = 1818307511405693LL;
	int64_t t47 = -574058499658051095LL;

    t47 = (((x213&x214)*x215)%x216);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x217 = INT8_MAX;
	static int64_t x218 = INT64_MIN;
	int64_t x219 = 966069061605046LL;
	uint16_t x220 = 2521U;

    t48 = (((x217&x218)*x219)%x220);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x221 = INT32_MIN;
	volatile int8_t x222 = 0;
	int32_t x223 = INT32_MAX;
	uint8_t x224 = 13U;
	int32_t t49 = -6762429;

    t49 = (((x221&x222)*x223)%x224);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x226 = UINT8_MAX;
	int8_t x227 = -1;
	volatile int8_t x228 = 55;
	int32_t t50 = -76;

    t50 = (((x225&x226)*x227)%x228);

    if (t50 != -35) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x230 = 1U;
	int16_t x231 = -698;
	int32_t x232 = -8427;
	static volatile int32_t t51 = 107967;

    t51 = (((x229&x230)*x231)%x232);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x237 = 12LLU;
	int32_t x238 = INT32_MIN;
	int16_t x239 = 7;
	uint16_t x240 = 1U;
	volatile uint64_t t52 = 5987802432550790962LLU;

    t52 = (((x237&x238)*x239)%x240);

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x241 = 1U;
	uint8_t x242 = 3U;
	uint32_t x243 = UINT32_MAX;
	uint64_t x244 = 1946098388323941LLU;

    t53 = (((x241&x242)*x243)%x244);

    if (t53 != 4294967295LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x253 = 264345033703LLU;
	int64_t x254 = -12883169732777288LL;
	int64_t x255 = INT64_MIN;
	int32_t x256 = -1;
	volatile uint64_t t54 = 2LLU;

    t54 = (((x253&x254)*x255)%x256);

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x257 = INT64_MIN;
	int32_t x258 = INT32_MAX;
	int16_t x259 = -455;
	int16_t x260 = -1;
	int64_t t55 = -1378925749518098479LL;

    t55 = (((x257&x258)*x259)%x260);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x261 = UINT16_MAX;
	int32_t x262 = 3830775;
	static int64_t t56 = -6339928LL;

    t56 = (((x261&x262)*x263)%x264);

    if (t56 != -29687LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x265 = -43;
	uint32_t x266 = 5U;
	volatile int64_t x267 = 2079291620315998LL;
	static volatile int64_t x268 = 742568519083LL;

    t57 = (((x265&x266)*x267)%x268);

    if (t57 != 498834417990LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x274 = -1;
	uint8_t x275 = UINT8_MAX;
	int32_t t58 = -14;

    t58 = (((x273&x274)*x275)%x276);

    if (t58 != 3060) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x277 = 0U;
	int64_t x278 = INT64_MIN;
	static int16_t x279 = -1;
	int16_t x280 = INT16_MAX;

    t59 = (((x277&x278)*x279)%x280);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x281 = INT8_MIN;
	volatile int32_t x282 = -1;
	volatile int16_t x284 = INT16_MIN;
	static uint64_t t60 = 824LLU;

    t60 = (((x281&x282)*x283)%x284);

    if (t60 != 18446727207768509696LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x285 = UINT32_MAX;
	static int32_t x287 = -172070025;
	int64_t x288 = 42LL;
	volatile int64_t t61 = 5875452194286LL;

    t61 = (((x285&x286)*x287)%x288);

    if (t61 != 15LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x289 = UINT8_MAX;
	int64_t x290 = INT64_MAX;
	static int16_t x291 = 1398;
	int64_t t62 = 7183093106LL;

    t62 = (((x289&x290)*x291)%x292);

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x293 = -7;
	int8_t x294 = INT8_MIN;
	volatile int32_t x296 = -215068;
	static int32_t t63 = 0;

    t63 = (((x293&x294)*x295)%x296);

    if (t63 != -107884) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x297 = 8014U;
	int16_t x298 = INT16_MIN;
	static int16_t x299 = -615;
	int16_t x300 = INT16_MIN;
	static int32_t t64 = 0;

    t64 = (((x297&x298)*x299)%x300);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x309 = INT64_MAX;
	int64_t x310 = INT64_MAX;
	static int64_t t65 = 7799280191LL;

    t65 = (((x309&x310)*x311)%x312);

    if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x318 = -1LL;
	volatile int64_t x320 = INT64_MIN;
	uint64_t t66 = 6773796706734025640LLU;

    t66 = (((x317&x318)*x319)%x320);

    if (t66 != 7148932782429833800LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x322 = INT64_MIN;
	int16_t x323 = -5;

    t67 = (((x321&x322)*x323)%x324);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x333 = INT32_MIN;
	uint16_t x334 = 427U;
	int8_t x335 = -1;
	uint16_t x336 = UINT16_MAX;
	int32_t t68 = 29770;

    t68 = (((x333&x334)*x335)%x336);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x343 = 47LLU;
	volatile uint32_t x344 = UINT32_MAX;
	uint64_t t69 = 27883LLU;

    t69 = (((x341&x342)*x343)%x344);

    if (t69 != 1974LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x345 = INT32_MIN;
	static uint32_t x346 = UINT32_MAX;
	uint16_t x347 = 3638U;
	uint32_t t70 = 42837U;

    t70 = (((x345&x346)*x347)%x348);

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x349 = 58;
	uint64_t t71 = 868LLU;

    t71 = (((x349&x350)*x351)%x352);

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x353 = -1;
	int16_t x354 = INT16_MAX;
	int64_t x356 = -341LL;
	volatile int64_t t72 = -114LL;

    t72 = (((x353&x354)*x355)%x356);

    if (t72 != 31LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x357 = INT16_MAX;
	int8_t x358 = INT8_MAX;
	volatile int8_t x360 = -1;
	int32_t t73 = 59941;

    t73 = (((x357&x358)*x359)%x360);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x361 = INT64_MAX;
	static volatile int32_t x362 = -1;
	volatile int32_t x363 = -1;
	volatile uint16_t x364 = 12U;
	static volatile int64_t t74 = 105205LL;

    t74 = (((x361&x362)*x363)%x364);

    if (t74 != -7LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x369 = INT64_MIN;
	uint64_t x370 = 2321399525781210LLU;
	int64_t x371 = INT64_MAX;
	uint32_t x372 = 18459910U;
	volatile uint64_t t75 = 38382057739335LLU;

    t75 = (((x369&x370)*x371)%x372);

    if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint8_t x374 = 0U;
	uint16_t x375 = 20U;
	volatile int8_t x376 = INT8_MIN;
	int32_t t76 = 477846;

    t76 = (((x373&x374)*x375)%x376);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x377 = INT32_MAX;
	int64_t x378 = INT64_MIN;
	uint64_t t77 = 28523LLU;

    t77 = (((x377&x378)*x379)%x380);

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x381 = 6U;
	volatile int16_t x382 = -1;
	volatile int32_t t78 = -3919347;

    t78 = (((x381&x382)*x383)%x384);

    if (t78 != 4) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x385 = INT64_MIN;
	uint32_t x386 = 215455189U;
	int16_t x388 = INT16_MIN;
	static volatile int64_t t79 = 13063405590LL;

    t79 = (((x385&x386)*x387)%x388);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint8_t x393 = UINT8_MAX;
	static volatile uint64_t x394 = 73402917101LLU;
	volatile int8_t x395 = INT8_MAX;
	uint16_t x396 = 1U;
	uint64_t t80 = 937899LLU;

    t80 = (((x393&x394)*x395)%x396);

    if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x398 = 17512817000LL;
	int8_t x399 = INT8_MIN;
	uint32_t x400 = 3940U;
	int64_t t81 = 267986262963014326LL;

    t81 = (((x397&x398)*x399)%x400);

    if (t81 != -988LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x402 = 4670295886330LLU;
	uint64_t x404 = 3174LLU;

    t82 = (((x401&x402)*x403)%x404);

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x405 = UINT8_MAX;
	uint16_t x406 = 268U;
	int16_t x407 = INT16_MIN;
	int8_t x408 = 1;
	static volatile int32_t t83 = -4398;

    t83 = (((x405&x406)*x407)%x408);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x410 = UINT32_MAX;
	uint8_t x411 = 18U;
	volatile int8_t x412 = -1;
	volatile uint32_t t84 = 2552U;

    t84 = (((x409&x410)*x411)%x412);

    if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x413 = UINT64_MAX;
	static volatile int32_t x414 = 739348074;
	int32_t x415 = INT32_MAX;
	int32_t x416 = INT32_MIN;
	static volatile uint64_t t85 = 3338LLU;

    t85 = (((x413&x414)*x415)%x416);

    if (t85 != 1587737898355945878LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x417 = 41U;
	volatile int8_t x418 = 5;
	uint32_t x420 = UINT32_MAX;
	uint32_t t86 = 8355U;

    t86 = (((x417&x418)*x419)%x420);

    if (t86 != 4808U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x424 = UINT32_MAX;
	uint64_t t87 = 7133006790827000446LLU;

    t87 = (((x421&x422)*x423)%x424);

    if (t87 != 4194304LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x425 = 0LL;
	int64_t x426 = INT64_MIN;
	uint8_t x427 = UINT8_MAX;
	uint32_t x428 = 25399533U;

    t88 = (((x425&x426)*x427)%x428);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x429 = INT16_MIN;
	uint8_t x430 = 4U;
	int8_t x431 = -1;
	static volatile uint64_t t89 = 15311186052623065LLU;

    t89 = (((x429&x430)*x431)%x432);

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x437 = INT64_MAX;
	int32_t x438 = -333022;
	int8_t x439 = -1;
	int64_t t90 = 21LL;

    t90 = (((x437&x438)*x439)%x440);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int8_t x441 = INT8_MIN;
	int8_t x442 = 14;
	int64_t t91 = -460923806354286LL;

    t91 = (((x441&x442)*x443)%x444);

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x445 = INT16_MIN;
	static volatile int8_t x446 = INT8_MAX;
	int32_t x447 = INT32_MAX;
	int8_t x448 = INT8_MAX;
	int32_t t92 = 29716969;

    t92 = (((x445&x446)*x447)%x448);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x449 = UINT64_MAX;
	volatile int32_t x451 = -1;
	uint32_t x452 = UINT32_MAX;

    t93 = (((x449&x450)*x451)%x452);

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x455 = UINT32_MAX;
	int32_t x456 = INT32_MIN;
	volatile uint32_t t94 = 5712964U;

    t94 = (((x453&x454)*x455)%x456);

    if (t94 != 2147450880U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x457 = 2864U;
	uint32_t x458 = UINT32_MAX;
	int64_t x459 = 18368195781LL;
	uint32_t x460 = 2U;

    t95 = (((x457&x458)*x459)%x460);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x462 = INT16_MIN;
	int8_t x463 = 2;
	static int8_t x464 = INT8_MIN;

    t96 = (((x461&x462)*x463)%x464);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint32_t x466 = 3592U;
	int16_t x467 = INT16_MIN;

    t97 = (((x465&x466)*x467)%x468);

    if (t97 != 242473631U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x469 = UINT32_MAX;
	static volatile uint8_t x470 = 1U;
	uint64_t x472 = 3993676037387429LLU;
	static uint64_t t98 = 1405962940310241LLU;

    t98 = (((x469&x470)*x471)%x472);

    if (t98 != 4294967295LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x477 = 0;
	int64_t x478 = INT64_MIN;
	static int32_t x480 = 748027;
	int64_t t99 = 574733985383429811LL;

    t99 = (((x477&x478)*x479)%x480);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x481 = -1LL;
	int8_t x483 = 1;
	static uint16_t x484 = 27679U;

    t100 = (((x481&x482)*x483)%x484);

    if (t100 != 1240LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x485 = INT8_MAX;
	int8_t x487 = -1;
	volatile int8_t x488 = INT8_MIN;
	volatile int64_t t101 = 267954939760120LL;

    t101 = (((x485&x486)*x487)%x488);

    if (t101 != -127LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x489 = -1;
	int8_t x490 = 0;
	int16_t x491 = 1;
	volatile int32_t x492 = INT32_MAX;
	static volatile int32_t t102 = -5009881;

    t102 = (((x489&x490)*x491)%x492);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint32_t x495 = 22U;
	static volatile uint64_t x496 = 341162LLU;
	volatile uint64_t t103 = 1602177390443934923LLU;

    t103 = (((x493&x494)*x495)%x496);

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x497 = 26584;
	int16_t x498 = INT16_MIN;
	uint64_t x499 = 1366LLU;
	int32_t x500 = INT32_MIN;
	volatile uint64_t t104 = 8219491LLU;

    t104 = (((x497&x498)*x499)%x500);

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x505 = -1;
	int16_t x506 = INT16_MIN;
	uint64_t x507 = 21004355538415LLU;

    t105 = (((x505&x506)*x507)%x508);

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x509 = 94U;
	int8_t x510 = INT8_MAX;
	volatile uint32_t x511 = UINT32_MAX;
	uint64_t x512 = 2371442937059026774LLU;
	uint64_t t106 = 2285326526LLU;

    t106 = (((x509&x510)*x511)%x512);

    if (t106 != 4294967202LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x513 = INT8_MAX;
	int8_t x514 = -25;
	static volatile uint16_t x515 = 147U;
	int16_t x516 = INT16_MIN;
	volatile int32_t t107 = -3682913;

    t107 = (((x513&x514)*x515)%x516);

    if (t107 != 15141) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x517 = INT8_MAX;
	int16_t x518 = INT16_MIN;
	int64_t x520 = INT64_MIN;
	volatile int64_t t108 = -5188797291LL;

    t108 = (((x517&x518)*x519)%x520);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x521 = INT64_MAX;
	static int8_t x522 = INT8_MIN;
	volatile int64_t x523 = -1LL;
	int8_t x524 = INT8_MIN;
	volatile int64_t t109 = -81783LL;

    t109 = (((x521&x522)*x523)%x524);

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x525 = -1;
	int8_t x526 = -1;
	int16_t x527 = 5;
	volatile uint64_t x528 = 3021138999430885LLU;
	uint64_t t110 = 10585111411885676LLU;

    t110 = (((x525&x526)*x527)%x528);

    if (t110 != 2690482183998686LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x529 = INT64_MIN;
	volatile uint64_t x531 = UINT64_MAX;
	static int32_t x532 = INT32_MAX;

    t111 = (((x529&x530)*x531)%x532);

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x538 = INT64_MIN;
	uint32_t x539 = 97679U;
	int8_t x540 = INT8_MIN;
	volatile int64_t t112 = -13LL;

    t112 = (((x537&x538)*x539)%x540);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x541 = INT32_MAX;
	volatile uint8_t x543 = 6U;
	uint64_t x544 = 18157992LLU;
	volatile uint64_t t113 = 454LLU;

    t113 = (((x541&x542)*x543)%x544);

    if (t113 != 10840746LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x545 = 1190U;
	uint32_t x546 = 190U;
	int16_t x547 = 53;
	int32_t x548 = INT32_MIN;
	volatile uint32_t t114 = 866U;

    t114 = (((x545&x546)*x547)%x548);

    if (t114 != 8798U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x549 = UINT64_MAX;
	static uint32_t x550 = 1805473U;
	uint8_t x551 = UINT8_MAX;
	static volatile int64_t x552 = -13209129LL;
	uint64_t t115 = 17544LLU;

    t115 = (((x549&x550)*x551)%x552);

    if (t115 != 460395615LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x555 = INT8_MIN;
	static volatile uint64_t t116 = 36372508497LLU;

    t116 = (((x553&x554)*x555)%x556);

    if (t116 != 18446639093665464320LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x558 = UINT16_MAX;
	uint8_t x559 = 25U;
	uint32_t t117 = 764U;

    t117 = (((x557&x558)*x559)%x560);

    if (t117 != 5226U) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x561 = -1;
	uint32_t x563 = 3U;
	int16_t x564 = -1;
	volatile uint64_t t118 = 70153019673LLU;

    t118 = (((x561&x562)*x563)%x564);

    if (t118 != 14511312LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x566 = 571338398070517048LLU;
	static int32_t x567 = -1;
	uint64_t t119 = 10143952LLU;

    t119 = (((x565&x566)*x567)%x568);

    if (t119 != 6LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x569 = -379;
	static volatile int32_t x570 = -3117;
	int8_t x571 = INT8_MAX;
	int32_t x572 = 3;
	static volatile int32_t t120 = 1154651;

    t120 = (((x569&x570)*x571)%x572);

    if (t120 != -2) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int8_t x573 = 11;
	static volatile int8_t x574 = -1;
	uint16_t x575 = 723U;
	int64_t x576 = -3289213246741LL;
	volatile int64_t t121 = -10LL;

    t121 = (((x573&x574)*x575)%x576);

    if (t121 != 7953LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x577 = INT16_MIN;
	static int64_t x578 = -1LL;
	int32_t x579 = INT32_MIN;
	int8_t x580 = INT8_MIN;

    t122 = (((x577&x578)*x579)%x580);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x581 = INT8_MAX;
	volatile uint16_t x582 = UINT16_MAX;
	int16_t x583 = 86;
	uint64_t x584 = 23489072381338793LLU;

    t123 = (((x581&x582)*x583)%x584);

    if (t123 != 10922LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x589 = INT64_MAX;
	uint8_t x590 = 3U;
	int8_t x592 = INT8_MAX;
	int64_t t124 = 647460731352105LL;

    t124 = (((x589&x590)*x591)%x592);

    if (t124 != 9LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x593 = UINT32_MAX;
	int8_t x594 = -1;
	uint64_t x595 = UINT64_MAX;
	volatile uint64_t t125 = 4LLU;

    t125 = (((x593&x594)*x595)%x596);

    if (t125 != 1LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x597 = -1;
	static uint32_t x598 = 55486287U;
	uint64_t x599 = 31681815LLU;
	int64_t x600 = -1LL;
	static volatile uint64_t t126 = 28LLU;

    t126 = (((x597&x598)*x599)%x600);

    if (t126 != 1757906279770905LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x609 = INT16_MIN;
	int32_t x610 = INT32_MIN;
	uint64_t x611 = 980634255843LLU;
	int64_t x612 = INT64_MAX;

    t127 = (((x609&x610)*x611)%x612);

    if (t127 != 6256167348252704769LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x613 = UINT8_MAX;
	volatile int16_t x614 = -22;
	static int8_t x615 = INT8_MAX;
	static int16_t x616 = 33;
	volatile int32_t t128 = 4865;

    t128 = (((x613&x614)*x615)%x616);

    if (t128 != 18) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x617 = INT8_MAX;
	int16_t x618 = -1;
	uint16_t x619 = 230U;
	volatile int16_t x620 = INT16_MIN;

    t129 = (((x617&x618)*x619)%x620);

    if (t129 != 29210) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x621 = 2901927709527964127LL;
	uint16_t x622 = 228U;
	int32_t x623 = -1;
	uint64_t x624 = 1398855404LLU;
	uint64_t t130 = 4735094LLU;

    t130 = (((x621&x622)*x623)%x624);

    if (t130 != 1140042160LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x629 = INT16_MAX;
	int16_t x630 = INT16_MIN;
	uint8_t x631 = 31U;
	volatile int32_t t131 = -39407237;

    t131 = (((x629&x630)*x631)%x632);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x633 = INT8_MAX;
	uint32_t x634 = 426U;
	uint8_t x635 = 19U;
	int16_t x636 = INT16_MIN;
	static uint32_t t132 = 42430878U;

    t132 = (((x633&x634)*x635)%x636);

    if (t132 != 798U) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x637 = INT32_MIN;
	volatile uint32_t x638 = 49U;
	static int16_t x639 = INT16_MIN;
	volatile uint32_t x640 = UINT32_MAX;
	uint32_t t133 = 2590758U;

    t133 = (((x637&x638)*x639)%x640);

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x641 = -5565LL;
	int32_t x642 = INT32_MAX;
	uint16_t x643 = 49U;
	int8_t x644 = INT8_MAX;
	int64_t t134 = -23507774029368LL;

    t134 = (((x641&x642)*x643)%x644);

    if (t134 != 122LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x646 = -1;
	int32_t x647 = 5711412;
	volatile int16_t x648 = -1;
	static volatile uint64_t t135 = 1981479469670LLU;

    t135 = (((x645&x646)*x647)%x648);

    if (t135 != 18446744073703840204LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x649 = 886;
	int64_t x650 = 0LL;
	volatile int16_t x651 = -1;
	uint8_t x652 = 3U;

    t136 = (((x649&x650)*x651)%x652);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x654 = INT64_MAX;
	int16_t x655 = -6;
	volatile int64_t t137 = 1406028746LL;

    t137 = (((x653&x654)*x655)%x656);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x665 = -1;
	uint32_t x666 = 75673U;
	uint16_t x667 = UINT16_MAX;
	volatile int16_t x668 = INT16_MIN;
	static volatile uint32_t t138 = 65378950U;

    t138 = (((x665&x666)*x667)%x668);

    if (t138 != 664262759U) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x669 = 61;
	static volatile int64_t x670 = 1LL;
	int64_t t139 = 29305640887116851LL;

    t139 = (((x669&x670)*x671)%x672);

    if (t139 != 14LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x673 = 37U;
	volatile uint16_t x674 = UINT16_MAX;
	static uint8_t x675 = 63U;
	volatile uint16_t x676 = UINT16_MAX;

    t140 = (((x673&x674)*x675)%x676);

    if (t140 != 2331) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x677 = 2;
	uint16_t x679 = 2U;
	int16_t x680 = INT16_MIN;
	static int32_t t141 = -898924;

    t141 = (((x677&x678)*x679)%x680);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x681 = 0;
	uint8_t x682 = 95U;
	static uint32_t t142 = 3353U;

    t142 = (((x681&x682)*x683)%x684);

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x685 = 1170112855374100LL;
	int8_t x686 = INT8_MAX;
	volatile int16_t x687 = INT16_MIN;
	int32_t x688 = 103;
	static int64_t t143 = -1750235LL;

    t143 = (((x685&x686)*x687)%x688);

    if (t143 != -74LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x690 = 3785LLU;
	volatile int32_t x691 = INT32_MAX;
	volatile uint64_t t144 = 26424223LLU;

    t144 = (((x689&x690)*x691)%x692);

    if (t144 != 14LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x693 = UINT32_MAX;
	static uint8_t x695 = UINT8_MAX;
	int32_t x696 = INT32_MIN;
	uint32_t t145 = 84U;

    t145 = (((x693&x694)*x695)%x696);

    if (t145 != 6630U) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x701 = INT64_MIN;
	static int16_t x702 = 144;
	static int64_t t146 = -12870431699LL;

    t146 = (((x701&x702)*x703)%x704);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x705 = 3;
	volatile int16_t x706 = INT16_MIN;
	static uint8_t x707 = 0U;
	int64_t x708 = -9871694211LL;

    t147 = (((x705&x706)*x707)%x708);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x709 = -1LL;
	volatile uint64_t x710 = 4442190119176106LLU;
	static int64_t x711 = -1LL;
	int32_t x712 = -100592;
	volatile uint64_t t148 = 4787059640173LLU;

    t148 = (((x709&x710)*x711)%x712);

    if (t148 != 18442301883590375510LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x714 = 55;
	static int16_t x716 = 360;
	volatile int32_t t149 = 3146411;

    t149 = (((x713&x714)*x715)%x716);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x717 = -2;
	volatile uint16_t x718 = 7U;
	static int16_t x719 = -1;
	volatile int16_t x720 = INT16_MIN;

    t150 = (((x717&x718)*x719)%x720);

    if (t150 != -6) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x725 = 1822569378557723214LLU;
	int16_t x726 = INT16_MAX;
	int16_t x727 = -766;
	volatile int64_t x728 = -56413222828LL;
	static uint64_t t151 = 2749251LLU;

    t151 = (((x725&x726)*x727)%x728);

    if (t151 != 56412770888LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x730 = -5;
	volatile uint64_t x731 = 67357998500LLU;
	int32_t x732 = INT32_MIN;

    t152 = (((x729&x730)*x731)%x732);

    if (t152 != 18444536886814703616LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x733 = 10U;
	volatile int8_t x734 = INT8_MIN;
	static volatile uint64_t x735 = UINT64_MAX;
	int16_t x736 = INT16_MIN;
	static uint64_t t153 = 7571996724043649044LLU;

    t153 = (((x733&x734)*x735)%x736);

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x740 = INT64_MIN;
	volatile int64_t t154 = 7133532890807134LL;

    t154 = (((x737&x738)*x739)%x740);

    if (t154 != 11LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint32_t x741 = 21U;
	int16_t x742 = 1;
	static volatile int16_t x743 = -4323;
	int8_t x744 = 12;
	volatile uint32_t t155 = 316615U;

    t155 = (((x741&x742)*x743)%x744);

    if (t155 != 1U) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x745 = 3935LLU;
	int16_t x746 = 1728;
	int8_t x747 = INT8_MIN;
	static uint32_t x748 = UINT32_MAX;
	volatile uint64_t t156 = 233758344106280LLU;

    t156 = (((x745&x746)*x747)%x748);

    if (t156 != 4294762496LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x750 = INT64_MAX;
	uint64_t x751 = 4463599032221102LLU;
	volatile uint64_t t157 = 671324LLU;

    t157 = (((x749&x750)*x751)%x752);

    if (t157 != 4463599032221102LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x753 = INT8_MIN;
	static int32_t x755 = INT32_MIN;
	int8_t x756 = -12;

    t158 = (((x753&x754)*x755)%x756);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x762 = 4139383U;
	volatile uint32_t x763 = UINT32_MAX;

    t159 = (((x761&x762)*x763)%x764);

    if (t159 != 9U) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x765 = -16;
	static int64_t x768 = INT64_MAX;
	int64_t t160 = -213663LL;

    t160 = (((x765&x766)*x767)%x768);

    if (t160 != 8351760LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x769 = 15U;
	int16_t x770 = INT16_MIN;
	int64_t x771 = INT64_MIN;
	int32_t x772 = -6;
	int64_t t161 = -396920496726LL;

    t161 = (((x769&x770)*x771)%x772);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x777 = UINT8_MAX;
	volatile uint32_t x778 = 1165U;
	int16_t x780 = -1;

    t162 = (((x777&x778)*x779)%x780);

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x782 = 0U;
	volatile int16_t x784 = INT16_MIN;

    t163 = (((x781&x782)*x783)%x784);

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x785 = INT32_MIN;
	int16_t x786 = -1;
	static uint64_t x787 = 32767134162062LLU;
	int32_t x788 = INT32_MIN;
	volatile uint64_t t164 = 387784LLU;

    t164 = (((x785&x786)*x787)%x788);

    if (t164 != 7443836351612452864LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x789 = INT16_MIN;
	uint64_t x790 = 1121804629320838761LLU;
	volatile uint32_t x791 = UINT32_MAX;
	int64_t x792 = INT64_MIN;
	volatile uint64_t t165 = 8306575499773124LLU;

    t165 = (((x789&x790)*x791)%x792);

    if (t165 != 6232151349710127104LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int8_t x798 = INT8_MAX;
	uint64_t x800 = UINT64_MAX;
	volatile uint64_t t166 = 1891922949LLU;

    t166 = (((x797&x798)*x799)%x800);

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x801 = INT8_MIN;
	int8_t x802 = 0;
	int32_t x803 = -516521;
	int32_t t167 = 0;

    t167 = (((x801&x802)*x803)%x804);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x805 = INT16_MAX;
	int16_t x806 = INT16_MIN;
	int64_t x808 = -1LL;

    t168 = (((x805&x806)*x807)%x808);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x813 = INT32_MIN;
	volatile uint16_t x815 = UINT16_MAX;
	volatile uint16_t x816 = UINT16_MAX;
	static int32_t t169 = -7;

    t169 = (((x813&x814)*x815)%x816);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x818 = 24530U;
	int8_t x819 = INT8_MIN;
	uint32_t t170 = 230666498U;

    t170 = (((x817&x818)*x819)%x820);

    if (t170 != 5888U) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x821 = INT8_MIN;
	static volatile int32_t x823 = INT32_MIN;
	uint8_t x824 = UINT8_MAX;
	int64_t t171 = -99934199570738170LL;

    t171 = (((x821&x822)*x823)%x824);

    if (t171 != 64LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x825 = 461U;
	int64_t x826 = 819230303LL;
	int8_t x827 = INT8_MIN;
	int32_t x828 = INT32_MAX;
	volatile int64_t t172 = 139123946277921LL;

    t172 = (((x825&x826)*x827)%x828);

    if (t172 != -9856LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x830 = INT32_MAX;
	static volatile uint32_t t173 = 493325U;

    t173 = (((x829&x830)*x831)%x832);

    if (t173 != 26U) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int64_t x834 = -1LL;
	int8_t x835 = INT8_MIN;
	volatile uint16_t x836 = 1866U;
	int64_t t174 = 2200204316794089LL;

    t174 = (((x833&x834)*x835)%x836);

    if (t174 != -810LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x837 = UINT16_MAX;
	int64_t x838 = INT64_MIN;
	int8_t x839 = -1;
	int32_t x840 = 22;
	volatile int64_t t175 = 92530220860LL;

    t175 = (((x837&x838)*x839)%x840);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x845 = 8486760444128717LLU;
	int32_t x846 = INT32_MIN;
	int8_t x848 = -44;
	uint64_t t176 = 5253682224950LLU;

    t176 = (((x845&x846)*x847)%x848);

    if (t176 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x853 = INT64_MIN;
	int16_t x854 = INT16_MIN;
	int32_t x856 = -1;
	volatile int64_t t177 = 334884684LL;

    t177 = (((x853&x854)*x855)%x856);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x857 = 50880LLU;
	uint64_t t178 = 1568340362252LLU;

    t178 = (((x857&x858)*x859)%x860);

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x861 = -26;
	static uint16_t x862 = 1U;
	volatile int64_t x863 = INT64_MAX;
	uint8_t x864 = 6U;
	volatile int64_t t179 = -49485LL;

    t179 = (((x861&x862)*x863)%x864);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x865 = INT32_MAX;
	static int16_t x866 = -163;
	volatile uint16_t x868 = UINT16_MAX;
	int32_t t180 = 120167665;

    t180 = (((x865&x866)*x867)%x868);

    if (t180 != -32605) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x872 = INT16_MAX;

    t181 = (((x869&x870)*x871)%x872);

    if (t181 != 285) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x873 = -1LL;
	int16_t x876 = -1;
	int64_t t182 = -2238216947LL;

    t182 = (((x873&x874)*x875)%x876);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x877 = -831;
	volatile int8_t x879 = -1;
	int16_t x880 = INT16_MAX;
	volatile uint64_t t183 = 5834381055LLU;

    t183 = (((x877&x878)*x879)%x880);

    if (t183 != 15LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x881 = UINT64_MAX;
	uint8_t x883 = 6U;
	uint64_t x884 = 1906025505355299LLU;
	volatile uint64_t t184 = 25540433400LLU;

    t184 = (((x881&x882)*x883)%x884);

    if (t184 != 229232880771286LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x889 = INT64_MIN;
	static uint64_t x890 = 2100388123878LLU;
	volatile int16_t x891 = INT16_MIN;
	static volatile uint64_t t185 = 67LLU;

    t185 = (((x889&x890)*x891)%x892);

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x901 = INT32_MIN;
	static uint8_t x902 = UINT8_MAX;
	volatile uint32_t x903 = UINT32_MAX;
	static int16_t x904 = -2659;
	uint32_t t186 = 59105U;

    t186 = (((x901&x902)*x903)%x904);

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x905 = INT8_MAX;
	uint32_t x906 = 2U;
	int8_t x907 = INT8_MIN;
	int32_t x908 = -3183616;
	uint32_t t187 = 430296U;

    t187 = (((x905&x906)*x907)%x908);

    if (t187 != 3183360U) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x909 = -1;
	int8_t x910 = INT8_MAX;
	int16_t x911 = -7633;
	uint32_t t188 = 20872U;

    t188 = (((x909&x910)*x911)%x912);

    if (t188 != 1U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x913 = 333LLU;
	uint16_t x914 = UINT16_MAX;
	static volatile int64_t x915 = 18611183LL;
	volatile int8_t x916 = INT8_MAX;
	volatile uint64_t t189 = 1674018110399618035LLU;

    t189 = (((x913&x914)*x915)%x916);

    if (t189 != 12LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x917 = -1;
	int16_t x918 = INT16_MIN;
	uint32_t t190 = 474208229U;

    t190 = (((x917&x918)*x919)%x920);

    if (t190 != 10671U) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x921 = 57444LL;

    t191 = (((x921&x922)*x923)%x924);

    if (t191 != 252LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint64_t x926 = 266450395419944138LLU;
	int32_t x927 = INT32_MIN;
	int64_t x928 = -1LL;
	volatile uint64_t t192 = 5004359478137913LLU;

    t192 = (((x925&x926)*x927)%x928);

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x929 = INT8_MIN;
	int64_t x930 = -1LL;
	volatile uint32_t x931 = UINT32_MAX;
	static uint8_t x932 = 42U;
	int64_t t193 = -234701490052LL;

    t193 = (((x929&x930)*x931)%x932);

    if (t193 != -6LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x937 = UINT32_MAX;
	uint64_t x938 = 1LLU;
	uint8_t x940 = UINT8_MAX;
	static uint64_t t194 = 5098LLU;

    t194 = (((x937&x938)*x939)%x940);

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x943 = 53461215534889644LLU;
	static int32_t x944 = -381009230;
	volatile uint64_t t195 = 222940865LLU;

    t195 = (((x941&x942)*x943)%x944);

    if (t195 != 11603708485243677184LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint64_t x947 = 58352LLU;
	uint64_t t196 = 13243211634847LLU;

    t196 = (((x945&x946)*x947)%x948);

    if (t196 != 175056LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint16_t x950 = 4U;
	int8_t x951 = INT8_MIN;
	volatile int32_t x952 = INT32_MAX;

    t197 = (((x949&x950)*x951)%x952);

    if (t197 != -512) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint32_t x953 = 396U;
	int8_t x954 = -1;
	uint64_t x955 = UINT64_MAX;
	int32_t x956 = INT32_MIN;
	static uint64_t t198 = 4049750948LLU;

    t198 = (((x953&x954)*x955)%x956);

    if (t198 != 2147483252LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x958 = 24;
	int64_t x959 = INT64_MIN;
	volatile int16_t x960 = INT16_MIN;
	int64_t t199 = -377089879937LL;

    t199 = (((x957&x958)*x959)%x960);

    if (t199 != 0LL) { NG(); } else { ; }
	
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

