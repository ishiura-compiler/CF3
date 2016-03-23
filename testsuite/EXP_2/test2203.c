
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

int32_t x4 = INT32_MAX;
int32_t x11 = INT32_MIN;
volatile int32_t t2 = 1;
uint8_t x17 = 1U;
uint32_t x20 = 161764175U;
int16_t x28 = 4;
volatile int64_t t6 = -1393107LL;
volatile int16_t x31 = -54;
volatile int64_t t8 = -71323LL;
volatile int8_t x43 = 5;
uint8_t x44 = 18U;
int8_t x48 = INT8_MIN;
volatile int32_t x58 = INT32_MAX;
int16_t x60 = INT16_MIN;
uint32_t x66 = UINT32_MAX;
volatile int32_t x77 = -19;
volatile int8_t x80 = 1;
int64_t x83 = INT64_MIN;
int64_t t16 = 428888045810287573LL;
uint16_t x86 = 104U;
int32_t x102 = -1;
int64_t x104 = -1LL;
uint16_t x110 = 9269U;
int8_t x111 = -24;
int64_t t23 = 97LL;
int16_t x129 = -5094;
uint8_t x130 = 71U;
volatile int32_t x131 = -1;
volatile int32_t t26 = 7164462;
int32_t x135 = INT32_MIN;
volatile int64_t t27 = -3199167370988723LL;
int8_t x148 = INT8_MIN;
uint64_t t29 = 523LLU;
int8_t x154 = 1;
int64_t x155 = -997LL;
static volatile int8_t x165 = INT8_MIN;
volatile int32_t x166 = INT32_MIN;
int8_t x167 = INT8_MIN;
int32_t x170 = INT32_MIN;
int16_t x171 = -429;
int32_t t36 = 25;
volatile int64_t t37 = 914425285435935948LL;
int32_t t38 = -210399798;
uint64_t t39 = 4529077476317454900LLU;
uint8_t x226 = UINT8_MAX;
int8_t x227 = -2;
static uint64_t x232 = 106864457332506893LLU;
int8_t x237 = INT8_MAX;
int8_t x238 = INT8_MIN;
static int64_t t44 = 58LL;
static int8_t x245 = 14;
int32_t x246 = -1;
volatile int64_t t46 = 256334792LL;
static volatile int16_t x249 = INT16_MAX;
int8_t x272 = INT8_MIN;
uint8_t x274 = UINT8_MAX;
volatile uint64_t t51 = 890326LLU;
volatile uint64_t t52 = 35860LLU;
int64_t t53 = 103937142LL;
uint32_t t54 = 533292050U;
int32_t x314 = 70080919;
static int32_t t55 = 0;
static uint64_t t56 = 3269942558848207116LLU;
volatile int32_t t57 = -4307189;
static uint8_t x333 = 25U;
uint16_t x336 = UINT16_MAX;
volatile int32_t x338 = INT32_MIN;
static int8_t x340 = INT8_MIN;
static uint16_t x345 = 33U;
uint16_t x347 = UINT16_MAX;
volatile int32_t x348 = -1;
int32_t t62 = 0;
int32_t x353 = INT32_MIN;
static int16_t x363 = INT16_MIN;
uint32_t t67 = 12006573U;
int8_t x381 = INT8_MAX;
uint8_t x382 = 113U;
uint64_t x386 = 4019433990LLU;
int16_t x389 = -1;
int32_t x391 = INT32_MIN;
int64_t x396 = INT64_MIN;
volatile int64_t t74 = 267161260LL;
int64_t x418 = INT64_MIN;
int64_t t76 = 1190888971661LL;
static volatile int8_t x424 = -1;
static int64_t t78 = 287919703718512973LL;
uint8_t x443 = 8U;
int16_t x463 = INT16_MAX;
volatile uint16_t x466 = 903U;
uint64_t x468 = 3017601367LLU;
volatile uint8_t x474 = 30U;
volatile int16_t x476 = -1;
int64_t x487 = 88757957LL;
volatile uint16_t x488 = 97U;
int64_t x494 = INT64_MIN;
uint16_t x497 = 381U;
int32_t x501 = -9;
uint32_t x506 = UINT32_MAX;
int32_t x513 = -1;
static int64_t x531 = -1LL;
int16_t x536 = INT16_MIN;
static int8_t x538 = INT8_MIN;
int64_t x539 = INT64_MIN;
static uint16_t x553 = 991U;
uint16_t x555 = 452U;
int64_t x561 = INT64_MIN;
volatile int64_t x563 = -1LL;
uint64_t x566 = UINT64_MAX;
int32_t x568 = INT32_MIN;
volatile uint64_t t99 = 8795806822534LLU;
volatile uint32_t x606 = 54U;
static int16_t x610 = INT16_MIN;
uint64_t x611 = 14565883248479165LLU;
static uint64_t x618 = 567459438709935LLU;
volatile uint64_t t107 = 120388634606495LLU;
volatile int32_t x633 = 155984;
static uint32_t x634 = UINT32_MAX;
static int16_t x639 = 660;
int64_t x646 = 51553LL;
static uint32_t x653 = 498U;
int8_t x658 = 14;
int8_t x676 = INT8_MIN;
int16_t x679 = INT16_MIN;
volatile int64_t t119 = 1306648132LL;
volatile uint32_t t120 = 7355U;
volatile int64_t x694 = INT64_MAX;
static volatile int32_t x715 = -1;
static int16_t x716 = -1;
volatile uint64_t t126 = 1911245LLU;
static int8_t x721 = -3;
volatile int8_t x722 = -1;
uint64_t x723 = UINT64_MAX;
int16_t x730 = INT16_MAX;
int32_t t128 = 24890;
int32_t x733 = -23192;
static int8_t x738 = -7;
uint32_t x739 = 4900534U;
uint32_t t130 = 107860735U;
int16_t x753 = 2072;
int16_t x754 = INT16_MIN;
static int64_t x755 = INT64_MAX;
static int64_t x766 = -9790055836LL;
int8_t x768 = INT8_MIN;
volatile int8_t x774 = -53;
volatile int32_t t135 = 7028622;
uint64_t x777 = UINT64_MAX;
int8_t x803 = -56;
volatile int32_t x818 = INT32_MIN;
int16_t x820 = -1;
int32_t t144 = 3398;
uint8_t x828 = 8U;
int8_t x830 = -1;
volatile int64_t x833 = INT64_MIN;
int32_t x841 = INT32_MAX;
static volatile int64_t t148 = -550LL;
volatile uint64_t t152 = 17281163LLU;
volatile uint8_t x864 = UINT8_MAX;
int16_t x865 = -1;
uint32_t x881 = 27278794U;
int16_t x883 = INT16_MAX;
uint64_t x890 = 759430980614533813LLU;
int16_t x892 = INT16_MAX;
static int32_t x893 = INT32_MAX;
int8_t x896 = INT8_MAX;
uint32_t x897 = UINT32_MAX;
int8_t x899 = -1;
volatile int64_t x901 = INT64_MIN;
int64_t x907 = -598478798913576LL;
static volatile int8_t x911 = INT8_MAX;
int32_t x916 = INT32_MIN;
uint32_t x922 = 343001012U;
volatile uint16_t x925 = UINT16_MAX;
uint32_t x930 = UINT32_MAX;
int64_t x935 = -7786271056LL;
volatile uint64_t t169 = 1121248LLU;
int16_t x941 = -16;
int16_t x942 = -1;
volatile int32_t x943 = INT32_MAX;
uint16_t x950 = UINT16_MAX;
int8_t x956 = INT8_MIN;
int16_t x958 = INT16_MIN;
int16_t x972 = INT16_MIN;
uint64_t t176 = 3201832684067670555LLU;
uint64_t t177 = 141362565662LLU;
int64_t x985 = -1LL;
volatile uint64_t t180 = 27LLU;
int16_t x991 = INT16_MIN;
int8_t x1005 = INT8_MAX;
static int8_t x1007 = INT8_MIN;
static volatile int32_t t184 = 30667876;
int16_t x1033 = -1;
int64_t x1034 = -6269LL;
static volatile int64_t x1037 = -46LL;
uint64_t x1039 = 2106892734598721100LLU;
volatile int32_t x1040 = INT32_MAX;
uint16_t x1049 = 4U;
int16_t x1050 = INT16_MIN;
int64_t x1051 = -1LL;
uint64_t x1059 = UINT64_MAX;
int64_t x1066 = -1LL;
uint8_t x1068 = 126U;
volatile int64_t t195 = -5877LL;
static int32_t x1075 = INT32_MIN;
static uint16_t x1076 = 972U;
int32_t x1077 = -1;
int16_t x1088 = -1;
uint8_t x1091 = UINT8_MAX;
uint64_t t199 = 18LLU;


void f0(void) {
    	int16_t x1 = 1639;
	int16_t x2 = -55;
	int64_t x3 = INT64_MIN;
	int64_t t0 = -105020728880LL;

    t0 = ((x1/(x2&x3))%x4);

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = -768;
	int64_t x6 = -1LL;
	static int32_t x7 = 25994;
	uint16_t x8 = 10U;
	int64_t t1 = -4220276284818959299LL;

    t1 = ((x5/(x6&x7))%x8);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MAX;
	int8_t x10 = INT8_MIN;
	int32_t x12 = INT32_MIN;

    t2 = ((x9/(x10&x11))%x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x13 = -1;
	static int16_t x14 = -1;
	uint16_t x15 = 392U;
	uint32_t x16 = 1789301056U;
	uint32_t t3 = 373U;

    t3 = ((x13/(x14&x15))%x16);

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x18 = 3LLU;
	int8_t x19 = -30;
	volatile uint64_t t4 = 90LLU;

    t4 = ((x17/(x18&x19))%x20);

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x21 = -1;
	static int16_t x22 = INT16_MIN;
	int64_t x23 = -567214LL;
	static uint32_t x24 = UINT32_MAX;
	volatile int64_t t5 = 585148779516366LL;

    t5 = ((x21/(x22&x23))%x24);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MIN;
	volatile int64_t x26 = INT64_MAX;
	int16_t x27 = 4;

    t6 = ((x25/(x26&x27))%x28);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint8_t x29 = 13U;
	volatile int64_t x30 = INT64_MAX;
	int8_t x32 = 4;
	int64_t t7 = -2LL;

    t7 = ((x29/(x30&x31))%x32);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x37 = 25U;
	int16_t x38 = INT16_MIN;
	static int64_t x39 = INT64_MIN;
	static uint32_t x40 = UINT32_MAX;

    t8 = ((x37/(x38&x39))%x40);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = INT32_MIN;
	int16_t x42 = -1;
	volatile int32_t t9 = 7160746;

    t9 = ((x41/(x42&x43))%x44);

    if (t9 != -7) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = INT64_MAX;
	uint16_t x46 = UINT16_MAX;
	int8_t x47 = 3;
	volatile int64_t t10 = 15396896981915999LL;

    t10 = ((x45/(x46&x47))%x48);

    if (t10 != 42LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x57 = INT32_MIN;
	static int64_t x59 = -1LL;
	int64_t t11 = -11469801LL;

    t11 = ((x57/(x58&x59))%x60);

    if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x61 = 759229194406LLU;
	int16_t x62 = -1;
	static int64_t x63 = INT64_MIN;
	int16_t x64 = 1;
	uint64_t t12 = 420028LLU;

    t12 = ((x61/(x62&x63))%x64);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x65 = INT32_MAX;
	int8_t x67 = -1;
	int8_t x68 = -1;
	volatile uint32_t t13 = 0U;

    t13 = ((x65/(x66&x67))%x68);

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x73 = 37U;
	uint64_t x74 = 1471518243181584178LLU;
	uint16_t x75 = 10U;
	volatile int32_t x76 = 56;
	volatile uint64_t t14 = 1826LLU;

    t14 = ((x73/(x74&x75))%x76);

    if (t14 != 18LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x78 = INT16_MIN;
	int16_t x79 = INT16_MIN;
	int32_t t15 = -669372682;

    t15 = ((x77/(x78&x79))%x80);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x81 = INT8_MIN;
	static int64_t x82 = INT64_MIN;
	int32_t x84 = INT32_MIN;

    t16 = ((x81/(x82&x83))%x84);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x85 = -1048287867178392LL;
	int32_t x87 = INT32_MAX;
	int16_t x88 = 402;
	static volatile int64_t t17 = -15472563LL;

    t17 = ((x85/(x86&x87))%x88);

    if (t17 != -393LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x93 = UINT8_MAX;
	volatile int8_t x94 = -1;
	volatile int32_t x95 = INT32_MAX;
	volatile int16_t x96 = INT16_MIN;
	volatile int32_t t18 = -22;

    t18 = ((x93/(x94&x95))%x96);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int32_t x97 = INT32_MAX;
	int64_t x98 = -3383540614LL;
	uint16_t x99 = 35U;
	volatile int16_t x100 = INT16_MIN;
	int64_t t19 = 253801800037LL;

    t19 = ((x97/(x98&x99))%x100);

    if (t19 != 17347LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x101 = 2239U;
	int8_t x103 = INT8_MIN;
	volatile int64_t t20 = 64741086798LL;

    t20 = ((x101/(x102&x103))%x104);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x105 = UINT16_MAX;
	static uint64_t x106 = 8968514769LLU;
	int64_t x107 = -1LL;
	volatile int32_t x108 = INT32_MAX;
	uint64_t t21 = 25LLU;

    t21 = ((x105/(x106&x107))%x108);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x109 = 52977LL;
	uint64_t x112 = UINT64_MAX;
	static volatile uint64_t t22 = 1LLU;

    t22 = ((x109/(x110&x111))%x112);

    if (t22 != 5LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x113 = 508LL;
	volatile uint32_t x114 = UINT32_MAX;
	int32_t x115 = INT32_MIN;
	static int8_t x116 = -13;

    t23 = ((x113/(x114&x115))%x116);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int8_t x117 = -1;
	volatile uint32_t x118 = 421599096U;
	uint32_t x119 = 1119895U;
	int32_t x120 = -48;
	uint32_t t24 = 5447U;

    t24 = ((x117/(x118&x119))%x120);

    if (t24 != 60336U) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x125 = -1;
	uint32_t x126 = 383562U;
	static int64_t x127 = -1LL;
	int32_t x128 = -12735;
	int64_t t25 = -220835620LL;

    t25 = ((x125/(x126&x127))%x128);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x132 = -1;

    t26 = ((x129/(x130&x131))%x132);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x133 = -545;
	static int64_t x134 = 15762437092909458LL;
	int8_t x136 = -5;

    t27 = ((x133/(x134&x135))%x136);

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x137 = -60;
	static uint16_t x138 = 2U;
	volatile uint64_t x139 = UINT64_MAX;
	int32_t x140 = INT32_MIN;
	static volatile uint64_t t28 = 2495375LLU;

    t28 = ((x137/(x138&x139))%x140);

    if (t28 != 9223372036854775778LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x145 = UINT64_MAX;
	uint32_t x146 = UINT32_MAX;
	uint32_t x147 = 213092U;

    t29 = ((x145/(x146&x147))%x148);

    if (t29 != 86567041811562LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x149 = UINT16_MAX;
	static int64_t x150 = INT64_MIN;
	static int64_t x151 = -31797307301024LL;
	uint16_t x152 = 3173U;
	static int64_t t30 = 171709390390254LL;

    t30 = ((x149/(x150&x151))%x152);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x153 = -1LL;
	volatile int16_t x156 = -222;
	volatile int64_t t31 = -39907734975158725LL;

    t31 = ((x153/(x154&x155))%x156);

    if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x157 = 4877U;
	int16_t x158 = INT16_MIN;
	int64_t x159 = 2762860102485LL;
	uint8_t x160 = 23U;
	static volatile int64_t t32 = 54166265484743LL;

    t32 = ((x157/(x158&x159))%x160);

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x168 = -46;
	static int32_t t33 = 4;

    t33 = ((x165/(x166&x167))%x168);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x169 = 60962264266869575LLU;
	static uint32_t x172 = UINT32_MAX;
	static volatile uint64_t t34 = 402874883984LLU;

    t34 = ((x169/(x170&x171))%x172);

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x173 = -1;
	uint16_t x174 = 1094U;
	uint32_t x175 = 468805U;
	int64_t x176 = -1LL;
	int64_t t35 = -55431903047574LL;

    t35 = ((x173/(x174&x175))%x176);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x181 = 4447U;
	int32_t x182 = INT32_MIN;
	int32_t x183 = -1;
	int32_t x184 = -4240933;

    t36 = ((x181/(x182&x183))%x184);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x189 = INT32_MIN;
	uint16_t x190 = UINT16_MAX;
	volatile int64_t x191 = -1LL;
	int32_t x192 = 843;

    t37 = ((x189/(x190&x191))%x192);

    if (t37 != -734LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x193 = -7;
	uint8_t x194 = 18U;
	volatile int16_t x195 = 199;
	uint8_t x196 = 105U;

    t38 = ((x193/(x194&x195))%x196);

    if (t38 != -3) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x205 = 1;
	int64_t x206 = INT64_MAX;
	volatile uint16_t x207 = 2U;
	uint64_t x208 = 1LLU;

    t39 = ((x205/(x206&x207))%x208);

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x209 = INT64_MAX;
	int16_t x210 = -11198;
	static int32_t x211 = INT32_MIN;
	volatile int8_t x212 = INT8_MAX;
	volatile int64_t t40 = -188421228012LL;

    t40 = ((x209/(x210&x211))%x212);

    if (t40 != -15LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x221 = -238;
	int64_t x222 = INT64_MAX;
	int32_t x223 = INT32_MIN;
	uint16_t x224 = 1U;
	volatile int64_t t41 = 0LL;

    t41 = ((x221/(x222&x223))%x224);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x225 = 124210672LLU;
	volatile uint16_t x228 = 1U;
	volatile uint64_t t42 = 453750290LLU;

    t42 = ((x225/(x226&x227))%x228);

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x229 = 8013U;
	int8_t x230 = INT8_MAX;
	int16_t x231 = 3224;
	uint64_t t43 = 3LLU;

    t43 = ((x229/(x230&x231))%x232);

    if (t43 != 333LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x239 = -1;
	int64_t x240 = INT64_MIN;

    t44 = ((x237/(x238&x239))%x240);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x241 = INT16_MAX;
	uint8_t x242 = 15U;
	static int64_t x243 = -1LL;
	uint32_t x244 = UINT32_MAX;
	int64_t t45 = 107301LL;

    t45 = ((x241/(x242&x243))%x244);

    if (t45 != 2184LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x247 = -1LL;
	uint8_t x248 = UINT8_MAX;

    t46 = ((x245/(x246&x247))%x248);

    if (t46 != -14LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x250 = INT16_MIN;
	int16_t x251 = -11639;
	volatile int16_t x252 = -1;
	int32_t t47 = 149026;

    t47 = ((x249/(x250&x251))%x252);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x265 = UINT16_MAX;
	uint32_t x266 = 2092420310U;
	int16_t x267 = 1411;
	int8_t x268 = -1;
	volatile uint32_t t48 = 1416102U;

    t48 = ((x265/(x266&x267))%x268);

    if (t48 != 56U) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x269 = INT64_MIN;
	uint8_t x270 = 24U;
	static int64_t x271 = INT64_MAX;
	volatile int64_t t49 = -95715765LL;

    t49 = ((x269/(x270&x271))%x272);

    if (t49 != -85LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x273 = 3221647LL;
	uint16_t x275 = UINT16_MAX;
	int16_t x276 = INT16_MAX;
	static int64_t t50 = -10852555LL;

    t50 = ((x273/(x274&x275))%x276);

    if (t50 != 12633LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int64_t x277 = INT64_MIN;
	static uint64_t x278 = 245614LLU;
	uint64_t x279 = 19LLU;
	int64_t x280 = -499249130385244072LL;

    t51 = ((x277/(x278&x279))%x280);

    if (t51 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x281 = INT32_MIN;
	uint32_t x282 = UINT32_MAX;
	volatile int64_t x283 = INT64_MAX;
	uint64_t x284 = UINT64_MAX;

    t52 = ((x281/(x282&x283))%x284);

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x285 = -1;
	int64_t x286 = INT64_MAX;
	int8_t x287 = -38;
	int64_t x288 = INT64_MIN;

    t53 = ((x285/(x286&x287))%x288);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x297 = INT16_MAX;
	static int16_t x298 = INT16_MIN;
	static uint32_t x299 = 3221018U;
	int32_t x300 = INT32_MAX;

    t54 = ((x297/(x298&x299))%x300);

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x313 = INT8_MAX;
	volatile uint16_t x315 = UINT16_MAX;
	int16_t x316 = 99;

    t55 = ((x313/(x314&x315))%x316);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint32_t x317 = 2052886235U;
	int8_t x318 = -1;
	uint64_t x319 = 9950321406132810LLU;
	uint8_t x320 = UINT8_MAX;

    t56 = ((x317/(x318&x319))%x320);

    if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x321 = INT32_MAX;
	volatile int8_t x322 = INT8_MIN;
	static uint16_t x323 = UINT16_MAX;
	static int32_t x324 = INT32_MIN;

    t57 = ((x321/(x322&x323))%x324);

    if (t57 != 32832) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x329 = INT8_MIN;
	int8_t x330 = -1;
	uint8_t x331 = 16U;
	int32_t x332 = 4921;
	int32_t t58 = 26854818;

    t58 = ((x329/(x330&x331))%x332);

    if (t58 != -8) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x334 = INT64_MIN;
	static int64_t x335 = -1LL;
	static volatile int64_t t59 = 67617162937LL;

    t59 = ((x333/(x334&x335))%x336);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint32_t x337 = 171U;
	static int8_t x339 = INT8_MIN;
	volatile uint32_t t60 = 49228U;

    t60 = ((x337/(x338&x339))%x340);

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x341 = 31U;
	static uint64_t x342 = 2789387136942075LLU;
	static uint64_t x343 = 538035548818LLU;
	int32_t x344 = 434820481;
	static uint64_t t61 = 46662668858LLU;

    t61 = ((x341/(x342&x343))%x344);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int16_t x346 = INT16_MIN;

    t62 = ((x345/(x346&x347))%x348);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int8_t x349 = -51;
	static volatile int32_t x350 = -1;
	static int32_t x351 = INT32_MIN;
	static int8_t x352 = INT8_MIN;
	int32_t t63 = -1;

    t63 = ((x349/(x350&x351))%x352);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x354 = -1;
	static volatile int64_t x355 = INT64_MIN;
	uint32_t x356 = UINT32_MAX;
	volatile int64_t t64 = 27639915822052283LL;

    t64 = ((x353/(x354&x355))%x356);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x361 = INT16_MIN;
	volatile int8_t x362 = INT8_MIN;
	static int16_t x364 = INT16_MIN;
	volatile int32_t t65 = -34357686;

    t65 = ((x361/(x362&x363))%x364);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x365 = -1;
	volatile uint8_t x366 = UINT8_MAX;
	static int16_t x367 = -1;
	static volatile uint64_t x368 = UINT64_MAX;
	volatile uint64_t t66 = 11817773901335LLU;

    t66 = ((x365/(x366&x367))%x368);

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x373 = INT8_MAX;
	static uint16_t x374 = 845U;
	uint32_t x375 = 40U;
	int16_t x376 = INT16_MIN;

    t67 = ((x373/(x374&x375))%x376);

    if (t67 != 15U) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x377 = -1;
	int32_t x378 = INT32_MAX;
	static volatile int32_t x379 = INT32_MAX;
	uint8_t x380 = UINT8_MAX;
	int32_t t68 = 414475051;

    t68 = ((x377/(x378&x379))%x380);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x383 = -1;
	static int64_t x384 = INT64_MIN;
	int64_t t69 = 33520420067612084LL;

    t69 = ((x381/(x382&x383))%x384);

    if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x385 = INT8_MIN;
	static uint8_t x387 = UINT8_MAX;
	int16_t x388 = INT16_MAX;
	uint64_t t70 = 0LLU;

    t70 = ((x385/(x386&x387))%x388);

    if (t70 != 32748LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x390 = -90151641905LL;
	volatile int16_t x392 = 1534;
	int64_t t71 = 1LL;

    t71 = ((x389/(x390&x391))%x392);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x393 = -1;
	static int8_t x394 = -1;
	int16_t x395 = 7477;
	static int64_t t72 = -157207855794LL;

    t72 = ((x393/(x394&x395))%x396);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x397 = -1;
	int64_t x398 = INT64_MAX;
	int16_t x399 = INT16_MIN;
	static uint64_t x400 = UINT64_MAX;
	uint64_t t73 = 138435742648000636LLU;

    t73 = ((x397/(x398&x399))%x400);

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x405 = -1;
	static int64_t x406 = -1909441820LL;
	int64_t x407 = 191907233LL;
	uint32_t x408 = 8938U;

    t74 = ((x405/(x406&x407))%x408);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x409 = INT32_MAX;
	static uint64_t x410 = 108648174535167LLU;
	int32_t x411 = 15665696;
	int32_t x412 = 22966;
	volatile uint64_t t75 = 22481045564LLU;

    t75 = ((x409/(x410&x411))%x412);

    if (t75 != 163LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x417 = INT16_MIN;
	static int16_t x419 = -1115;
	int32_t x420 = INT32_MAX;

    t76 = ((x417/(x418&x419))%x420);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint8_t x421 = 27U;
	uint64_t x422 = 31012283871011027LLU;
	int8_t x423 = INT8_MIN;
	uint64_t t77 = 692410137344226650LLU;

    t77 = ((x421/(x422&x423))%x424);

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x429 = 12;
	uint32_t x430 = UINT32_MAX;
	int64_t x431 = -276674173263LL;
	int32_t x432 = INT32_MAX;

    t78 = ((x429/(x430&x431))%x432);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x433 = -1;
	uint16_t x434 = UINT16_MAX;
	int16_t x435 = -1;
	int16_t x436 = INT16_MAX;
	int32_t t79 = 131111172;

    t79 = ((x433/(x434&x435))%x436);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x441 = INT64_MIN;
	int64_t x442 = INT64_MAX;
	uint16_t x444 = UINT16_MAX;
	int64_t t80 = -1757711018472225LL;

    t80 = ((x441/(x442&x443))%x444);

    if (t80 != -4096LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x461 = 362U;
	static volatile uint64_t x462 = 234693173281623636LLU;
	volatile int32_t x464 = INT32_MIN;
	volatile uint64_t t81 = 102268293733369LLU;

    t81 = ((x461/(x462&x463))%x464);

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x465 = -10697745;
	uint64_t x467 = UINT64_MAX;
	volatile uint64_t t82 = 7452382473788278447LLU;

    t82 = ((x465/(x466&x467))%x468);

    if (t82 != 1860547131LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x469 = INT64_MAX;
	volatile int64_t x470 = INT64_MIN;
	int32_t x471 = INT32_MIN;
	static int32_t x472 = INT32_MIN;
	volatile int64_t t83 = 561232951LL;

    t83 = ((x469/(x470&x471))%x472);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x473 = UINT32_MAX;
	int8_t x475 = 6;
	volatile uint32_t t84 = 1797833062U;

    t84 = ((x473/(x474&x475))%x476);

    if (t84 != 715827882U) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x485 = UINT64_MAX;
	uint8_t x486 = 39U;
	uint64_t t85 = 7501404202893254534LLU;

    t85 = ((x485/(x486&x487))%x488);

    if (t85 != 12LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x493 = 66148;
	int8_t x495 = -1;
	uint64_t x496 = UINT64_MAX;
	volatile uint64_t t86 = 607884782LLU;

    t86 = ((x493/(x494&x495))%x496);

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x498 = INT16_MAX;
	volatile int8_t x499 = INT8_MAX;
	int64_t x500 = 5686LL;
	volatile int64_t t87 = 22484LL;

    t87 = ((x497/(x498&x499))%x500);

    if (t87 != 3LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x502 = 6LLU;
	int8_t x503 = INT8_MAX;
	uint32_t x504 = 14083U;
	uint64_t t88 = 23550863452884LLU;

    t88 = ((x501/(x502&x503))%x504);

    if (t88 != 3861LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x505 = INT16_MIN;
	int64_t x507 = 553751044084978571LL;
	uint64_t x508 = 1LLU;
	uint64_t t89 = 81268293942515LLU;

    t89 = ((x505/(x506&x507))%x508);

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x509 = 25U;
	int8_t x510 = INT8_MIN;
	int8_t x511 = INT8_MIN;
	int8_t x512 = 3;
	volatile int32_t t90 = 320819890;

    t90 = ((x509/(x510&x511))%x512);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x514 = 29701321U;
	int32_t x515 = 3182;
	static volatile int16_t x516 = 106;
	static uint32_t t91 = 17U;

    t91 = ((x513/(x514&x515))%x516);

    if (t91 != 51U) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x525 = 1U;
	int32_t x526 = -434119;
	uint16_t x527 = UINT16_MAX;
	volatile int32_t x528 = -1;
	volatile uint32_t t92 = 17438614U;

    t92 = ((x525/(x526&x527))%x528);

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x529 = -18208;
	int64_t x530 = INT64_MIN;
	static uint32_t x532 = 437U;
	int64_t t93 = -321980541LL;

    t93 = ((x529/(x530&x531))%x532);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x533 = -1;
	int16_t x534 = INT16_MIN;
	int32_t x535 = INT32_MIN;
	volatile int32_t t94 = 11;

    t94 = ((x533/(x534&x535))%x536);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x537 = -1LL;
	int64_t x540 = INT64_MIN;
	volatile int64_t t95 = 363603044670LL;

    t95 = ((x537/(x538&x539))%x540);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int16_t x554 = -1;
	uint16_t x556 = 25857U;
	volatile int32_t t96 = -123;

    t96 = ((x553/(x554&x555))%x556);

    if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x557 = INT8_MIN;
	int8_t x558 = -1;
	static uint16_t x559 = 63U;
	uint32_t x560 = 1353U;
	volatile uint32_t t97 = 542254869U;

    t97 = ((x557/(x558&x559))%x560);

    if (t97 != 35U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x562 = UINT32_MAX;
	int16_t x564 = INT16_MIN;
	volatile int64_t t98 = 2408249041755944LL;

    t98 = ((x561/(x562&x563))%x564);

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x565 = INT32_MAX;
	static int8_t x567 = INT8_MIN;

    t99 = ((x565/(x566&x567))%x568);

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x569 = -1LL;
	uint64_t x570 = 4224LLU;
	uint64_t x571 = UINT64_MAX;
	volatile int8_t x572 = -1;
	uint64_t t100 = 15LLU;

    t100 = ((x569/(x570&x571))%x572);

    if (t100 != 4367126911389571LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x577 = 247217U;
	int64_t x578 = -7499LL;
	int64_t x579 = 2095065382179976616LL;
	int8_t x580 = -1;
	volatile int64_t t101 = -8LL;

    t101 = ((x577/(x578&x579))%x580);

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x581 = INT8_MIN;
	int16_t x582 = INT16_MAX;
	volatile int64_t x583 = -1LL;
	int8_t x584 = 1;
	volatile int64_t t102 = -54953526273LL;

    t102 = ((x581/(x582&x583))%x584);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x605 = INT8_MIN;
	int32_t x607 = -1;
	int16_t x608 = INT16_MIN;
	uint32_t t103 = 556425884U;

    t103 = ((x605/(x606&x607))%x608);

    if (t103 != 79536429U) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x609 = 25U;
	int16_t x612 = INT16_MIN;
	uint64_t t104 = 6393464121681488LLU;

    t104 = ((x609/(x610&x611))%x612);

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x613 = UINT32_MAX;
	uint32_t x614 = 2204677U;
	int32_t x615 = -1;
	uint8_t x616 = 6U;
	volatile uint32_t t105 = 93587U;

    t105 = ((x613/(x614&x615))%x616);

    if (t105 != 4U) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x617 = 0;
	int16_t x619 = INT16_MAX;
	uint8_t x620 = UINT8_MAX;
	uint64_t t106 = 33180105LLU;

    t106 = ((x617/(x618&x619))%x620);

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x621 = 491916LLU;
	int16_t x622 = -53;
	static int64_t x623 = INT64_MIN;
	int8_t x624 = INT8_MAX;

    t107 = ((x621/(x622&x623))%x624);

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x629 = -1;
	uint8_t x630 = 3U;
	static uint8_t x631 = UINT8_MAX;
	volatile uint16_t x632 = 47U;
	volatile int32_t t108 = -881860;

    t108 = ((x629/(x630&x631))%x632);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x635 = 40U;
	uint64_t x636 = 2601823LLU;
	static uint64_t t109 = 1593545362321322LLU;

    t109 = ((x633/(x634&x635))%x636);

    if (t109 != 3899LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x637 = -1;
	int8_t x638 = 21;
	int32_t x640 = -2;
	int32_t t110 = -424249857;

    t110 = ((x637/(x638&x639))%x640);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x641 = UINT32_MAX;
	int16_t x642 = 1;
	int16_t x643 = 21;
	static uint64_t x644 = 8LLU;
	uint64_t t111 = 66LLU;

    t111 = ((x641/(x642&x643))%x644);

    if (t111 != 7LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x645 = 854U;
	int16_t x647 = 1;
	static uint64_t x648 = 3LLU;
	uint64_t t112 = 114917LLU;

    t112 = ((x645/(x646&x647))%x648);

    if (t112 != 2LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x649 = INT16_MAX;
	uint8_t x650 = 6U;
	uint8_t x651 = 45U;
	volatile uint32_t x652 = 82U;
	volatile uint32_t t113 = 1803770U;

    t113 = ((x649/(x650&x651))%x652);

    if (t113 != 73U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x654 = 9627U;
	uint8_t x655 = 19U;
	uint16_t x656 = 2226U;
	volatile uint32_t t114 = 3546U;

    t114 = ((x653/(x654&x655))%x656);

    if (t114 != 26U) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x657 = INT8_MIN;
	static volatile int8_t x659 = -60;
	uint16_t x660 = 847U;
	volatile int32_t t115 = 125;

    t115 = ((x657/(x658&x659))%x660);

    if (t115 != -32) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint64_t x661 = 5621007LLU;
	uint32_t x662 = 4U;
	static int16_t x663 = -1;
	int16_t x664 = INT16_MAX;
	static volatile uint64_t t116 = 8227901872330520LLU;

    t116 = ((x661/(x662&x663))%x664);

    if (t116 != 29037LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x665 = -1;
	uint64_t x666 = 53LLU;
	int8_t x667 = INT8_MAX;
	int32_t x668 = -45;
	uint64_t t117 = 1LLU;

    t117 = ((x665/(x666&x667))%x668);

    if (t117 != 348051774975651917LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x673 = INT8_MIN;
	int8_t x674 = INT8_MIN;
	int32_t x675 = INT32_MAX;
	int32_t t118 = 170;

    t118 = ((x673/(x674&x675))%x676);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x677 = -8LL;
	int64_t x678 = INT64_MAX;
	volatile uint8_t x680 = 29U;

    t119 = ((x677/(x678&x679))%x680);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x681 = -5940476;
	static uint32_t x682 = 36191U;
	volatile int16_t x683 = INT16_MIN;
	uint32_t x684 = 139353U;

    t120 = ((x681/(x682&x683))%x684);

    if (t120 != 130890U) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x685 = INT32_MIN;
	int64_t x686 = INT64_MIN;
	int64_t x687 = -910370LL;
	volatile uint8_t x688 = UINT8_MAX;
	volatile int64_t t121 = 1865192793631LL;

    t121 = ((x685/(x686&x687))%x688);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x693 = UINT8_MAX;
	static int16_t x695 = -32;
	int16_t x696 = INT16_MIN;
	int64_t t122 = 969957486448628LL;

    t122 = ((x693/(x694&x695))%x696);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x697 = INT16_MIN;
	int32_t x698 = -638242;
	static uint8_t x699 = UINT8_MAX;
	static int32_t x700 = INT32_MIN;
	static volatile int32_t t123 = 287;

    t123 = ((x697/(x698&x699))%x700);

    if (t123 != -147) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x701 = -1;
	int16_t x702 = -1;
	int64_t x703 = -1LL;
	int32_t x704 = -1;
	int64_t t124 = -58703766644474LL;

    t124 = ((x701/(x702&x703))%x704);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x705 = -1LL;
	volatile int16_t x706 = INT16_MIN;
	int8_t x707 = INT8_MIN;
	int16_t x708 = INT16_MIN;
	static int64_t t125 = -719LL;

    t125 = ((x705/(x706&x707))%x708);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x713 = 4008;
	static uint64_t x714 = UINT64_MAX;

    t126 = ((x713/(x714&x715))%x716);

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x724 = INT32_MIN;
	uint64_t t127 = 18156LLU;

    t127 = ((x721/(x722&x723))%x724);

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x729 = 6U;
	static uint16_t x731 = 1740U;
	uint16_t x732 = 9U;

    t128 = ((x729/(x730&x731))%x732);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x734 = UINT32_MAX;
	static int32_t x735 = INT32_MIN;
	static int64_t x736 = -9057LL;
	volatile int64_t t129 = 255360818982LL;

    t129 = ((x733/(x734&x735))%x736);

    if (t129 != 1LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x737 = -1;
	uint8_t x740 = 10U;

    t130 = ((x737/(x738&x739))%x740);

    if (t130 != 6U) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x749 = INT64_MIN;
	int16_t x750 = INT16_MIN;
	static int16_t x751 = INT16_MIN;
	uint16_t x752 = UINT16_MAX;
	static int64_t t131 = -3LL;

    t131 = ((x749/(x750&x751))%x752);

    if (t131 != 1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x756 = INT16_MAX;
	volatile int64_t t132 = 8589LL;

    t132 = ((x753/(x754&x755))%x756);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x761 = -1;
	int64_t x762 = INT64_MIN;
	volatile int16_t x763 = -3867;
	volatile uint16_t x764 = UINT16_MAX;
	static int64_t t133 = 2181281LL;

    t133 = ((x761/(x762&x763))%x764);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x765 = 25U;
	volatile int8_t x767 = INT8_MIN;
	int64_t t134 = -12LL;

    t134 = ((x765/(x766&x767))%x768);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int8_t x773 = INT8_MAX;
	static int16_t x775 = INT16_MIN;
	uint8_t x776 = 6U;

    t135 = ((x773/(x774&x775))%x776);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x778 = INT64_MIN;
	volatile int64_t x779 = INT64_MIN;
	volatile int64_t x780 = INT64_MIN;
	static uint64_t t136 = 142899549LLU;

    t136 = ((x777/(x778&x779))%x780);

    if (t136 != 1LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x781 = INT8_MIN;
	volatile int8_t x782 = INT8_MIN;
	int64_t x783 = INT64_MIN;
	int16_t x784 = INT16_MIN;
	volatile int64_t t137 = -3056LL;

    t137 = ((x781/(x782&x783))%x784);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int16_t x789 = INT16_MIN;
	int64_t x790 = -14151LL;
	volatile int64_t x791 = 141972624695270647LL;
	static int8_t x792 = INT8_MIN;
	volatile int64_t t138 = -7944346535883734LL;

    t138 = ((x789/(x790&x791))%x792);

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x793 = UINT32_MAX;
	int8_t x794 = INT8_MAX;
	uint64_t x795 = 61926899653LLU;
	int64_t x796 = -1LL;
	volatile uint64_t t139 = 9936875642LLU;

    t139 = ((x793/(x794&x795))%x796);

    if (t139 != 62245902LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x797 = INT32_MIN;
	uint32_t x798 = 151U;
	static int64_t x799 = -1LL;
	int16_t x800 = -1;
	volatile int64_t t140 = -43702956234764LL;

    t140 = ((x797/(x798&x799))%x800);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x801 = -1LL;
	int8_t x802 = -2;
	static int16_t x804 = -13;
	volatile int64_t t141 = 24460718216LL;

    t141 = ((x801/(x802&x803))%x804);

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x809 = 5341547173918248630LLU;
	static int8_t x810 = -1;
	uint32_t x811 = 352U;
	static int32_t x812 = INT32_MIN;
	static uint64_t t142 = 12199520259LLU;

    t142 = ((x809/(x810&x811))%x812);

    if (t142 != 15174849925904115LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x817 = UINT8_MAX;
	uint64_t x819 = 50695562510117885LLU;
	volatile uint64_t t143 = 152693176LLU;

    t143 = ((x817/(x818&x819))%x820);

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x821 = 0;
	int32_t x822 = -1;
	int16_t x823 = INT16_MIN;
	volatile int8_t x824 = INT8_MAX;

    t144 = ((x821/(x822&x823))%x824);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint64_t x825 = 12764377LLU;
	static int8_t x826 = INT8_MAX;
	int32_t x827 = INT32_MAX;
	static volatile uint64_t t145 = 29LLU;

    t145 = ((x825/(x826&x827))%x828);

    if (t145 != 2LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x829 = 0U;
	uint32_t x831 = 2U;
	static int32_t x832 = INT32_MAX;
	uint32_t t146 = 552216U;

    t146 = ((x829/(x830&x831))%x832);

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x834 = 22926U;
	int64_t x835 = -11372194LL;
	uint16_t x836 = UINT16_MAX;
	volatile int64_t t147 = 3387LL;

    t147 = ((x833/(x834&x835))%x836);

    if (t147 != -26671LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x842 = INT32_MIN;
	static int64_t x843 = -23207200952LL;
	volatile int8_t x844 = INT8_MIN;

    t148 = ((x841/(x842&x843))%x844);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x845 = -9;
	int64_t x846 = -1902634711081921LL;
	int8_t x847 = INT8_MAX;
	static uint64_t x848 = 4005562369444838240LLU;
	volatile uint64_t t149 = 9001037240LLU;

    t149 = ((x845/(x846&x847))%x848);

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x849 = 57U;
	static int64_t x850 = INT64_MAX;
	uint8_t x851 = 5U;
	int32_t x852 = INT32_MAX;
	volatile int64_t t150 = 1497628762173912792LL;

    t150 = ((x849/(x850&x851))%x852);

    if (t150 != 11LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x853 = INT8_MIN;
	volatile int64_t x854 = INT64_MAX;
	uint8_t x855 = 7U;
	uint16_t x856 = 244U;
	volatile int64_t t151 = 42298252533163LL;

    t151 = ((x853/(x854&x855))%x856);

    if (t151 != -18LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint64_t x857 = UINT64_MAX;
	volatile int16_t x858 = INT16_MIN;
	int64_t x859 = -1LL;
	static uint8_t x860 = 26U;

    t152 = ((x857/(x858&x859))%x860);

    if (t152 != 1LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x861 = INT64_MIN;
	int16_t x862 = 4;
	uint16_t x863 = 7143U;
	volatile int64_t t153 = -5281303253116921LL;

    t153 = ((x861/(x862&x863))%x864);

    if (t153 != -32LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint16_t x866 = UINT16_MAX;
	int16_t x867 = -2;
	int16_t x868 = INT16_MIN;
	int32_t t154 = -32319;

    t154 = ((x865/(x866&x867))%x868);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x869 = INT64_MAX;
	int64_t x870 = -1LL;
	static uint64_t x871 = 365599417543688LLU;
	uint16_t x872 = 3366U;
	volatile uint64_t t155 = 2172987767934653703LLU;

    t155 = ((x869/(x870&x871))%x872);

    if (t155 != 1666LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x873 = INT16_MIN;
	static volatile int64_t x874 = -2991LL;
	int8_t x875 = INT8_MIN;
	uint16_t x876 = UINT16_MAX;
	static int64_t t156 = -97870058565153LL;

    t156 = ((x873/(x874&x875))%x876);

    if (t156 != 10LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x882 = -17;
	int32_t x884 = INT32_MIN;
	volatile uint32_t t157 = 1144542288U;

    t157 = ((x881/(x882&x883))%x884);

    if (t157 != 832U) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x889 = -2;
	int32_t x891 = -29686;
	static uint64_t t158 = 19327617110089833LLU;

    t158 = ((x889/(x890&x891))%x892);

    if (t158 != 24LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x894 = -149166960LL;
	static int16_t x895 = -6079;
	int64_t t159 = -130382LL;

    t159 = ((x893/(x894&x895))%x896);

    if (t159 != -14LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x898 = INT64_MIN;
	int16_t x900 = INT16_MIN;
	volatile int64_t t160 = 19038137594027531LL;

    t160 = ((x897/(x898&x899))%x900);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x902 = -63;
	int32_t x903 = INT32_MIN;
	int8_t x904 = INT8_MIN;
	int64_t t161 = 5512718860522LL;

    t161 = ((x901/(x902&x903))%x904);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x905 = INT32_MIN;
	int16_t x906 = INT16_MIN;
	volatile int64_t x908 = -618049LL;
	int64_t t162 = 16026223LL;

    t162 = ((x905/(x906&x907))%x908);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x909 = INT8_MIN;
	int64_t x910 = -42871625LL;
	uint32_t x912 = 239U;
	int64_t t163 = -1029778407LL;

    t163 = ((x909/(x910&x911))%x912);

    if (t163 != -2LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x913 = 51;
	int64_t x914 = INT64_MIN;
	int64_t x915 = INT64_MIN;
	int64_t t164 = 0LL;

    t164 = ((x913/(x914&x915))%x916);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x917 = UINT8_MAX;
	int64_t x918 = INT64_MAX;
	static int16_t x919 = -1;
	int16_t x920 = -1;
	int64_t t165 = 1LL;

    t165 = ((x917/(x918&x919))%x920);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x921 = 26;
	int64_t x923 = INT64_MAX;
	static int64_t x924 = -1LL;
	static volatile int64_t t166 = -2501122151261165823LL;

    t166 = ((x921/(x922&x923))%x924);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x926 = 9265706135383LL;
	static int8_t x927 = INT8_MAX;
	int64_t x928 = 94689469910530LL;
	volatile int64_t t167 = 0LL;

    t167 = ((x925/(x926&x927))%x928);

    if (t167 != 753LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x929 = -1;
	uint32_t x931 = UINT32_MAX;
	static int64_t x932 = -1LL;
	int64_t t168 = -9777099430163LL;

    t168 = ((x929/(x930&x931))%x932);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x933 = 44;
	volatile uint64_t x934 = 646LLU;
	static uint32_t x936 = 8109U;

    t169 = ((x933/(x934&x935))%x936);

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x944 = -1;
	static volatile int32_t t170 = -869867239;

    t170 = ((x941/(x942&x943))%x944);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint8_t x949 = 6U;
	uint64_t x951 = 39LLU;
	int16_t x952 = INT16_MIN;
	uint64_t t171 = 1408LLU;

    t171 = ((x949/(x950&x951))%x952);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint8_t x953 = 45U;
	uint16_t x954 = 98U;
	static volatile int8_t x955 = 2;
	volatile int32_t t172 = 398651115;

    t172 = ((x953/(x954&x955))%x956);

    if (t172 != 22) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x957 = INT16_MIN;
	int8_t x959 = -1;
	int64_t x960 = -1LL;
	volatile int64_t t173 = 707605722565870975LL;

    t173 = ((x957/(x958&x959))%x960);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x961 = -1;
	int16_t x962 = INT16_MIN;
	static int32_t x963 = -1;
	volatile uint8_t x964 = UINT8_MAX;
	volatile int32_t t174 = 899336701;

    t174 = ((x961/(x962&x963))%x964);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x965 = UINT16_MAX;
	int32_t x966 = -1;
	int16_t x967 = -1;
	int32_t x968 = -1;
	volatile int32_t t175 = 0;

    t175 = ((x965/(x966&x967))%x968);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x969 = INT16_MAX;
	uint64_t x970 = UINT64_MAX;
	int8_t x971 = -25;

    t176 = ((x969/(x970&x971))%x972);

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x973 = 21633U;
	uint64_t x974 = UINT64_MAX;
	int16_t x975 = -1;
	volatile int32_t x976 = INT32_MIN;

    t177 = ((x973/(x974&x975))%x976);

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint16_t x977 = 23102U;
	volatile int32_t x978 = INT32_MIN;
	volatile int32_t x979 = -1;
	volatile int8_t x980 = INT8_MIN;
	int32_t t178 = -82950333;

    t178 = ((x977/(x978&x979))%x980);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x981 = INT16_MAX;
	volatile int8_t x982 = INT8_MIN;
	int8_t x983 = INT8_MIN;
	int32_t x984 = -16;
	static volatile int32_t t179 = -79;

    t179 = ((x981/(x982&x983))%x984);

    if (t179 != -15) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x986 = INT16_MIN;
	uint64_t x987 = UINT64_MAX;
	int32_t x988 = INT32_MIN;

    t180 = ((x985/(x986&x987))%x988);

    if (t180 != 1LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x989 = UINT64_MAX;
	int32_t x990 = -1581;
	int32_t x992 = -1;
	uint64_t t181 = 42307LLU;

    t181 = ((x989/(x990&x991))%x992);

    if (t181 != 1LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x993 = INT16_MIN;
	uint64_t x994 = 23782308481LLU;
	volatile uint16_t x995 = 254U;
	volatile int8_t x996 = -1;
	volatile uint64_t t182 = 2LLU;

    t182 = ((x993/(x994&x995))%x996);

    if (t182 != 144115188075855616LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x997 = UINT8_MAX;
	int32_t x998 = INT32_MAX;
	int16_t x999 = INT16_MIN;
	int16_t x1000 = INT16_MIN;
	volatile int32_t t183 = 9739899;

    t183 = ((x997/(x998&x999))%x1000);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1006 = -1;
	volatile int16_t x1008 = -1;

    t184 = ((x1005/(x1006&x1007))%x1008);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x1013 = INT64_MIN;
	uint32_t x1014 = 459U;
	int8_t x1015 = INT8_MIN;
	uint16_t x1016 = UINT16_MAX;
	volatile int64_t t185 = 14796146160627854LL;

    t185 = ((x1013/(x1014&x1015))%x1016);

    if (t185 != -85LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1035 = INT32_MAX;
	int32_t x1036 = INT32_MAX;
	volatile int64_t t186 = 2162993LL;

    t186 = ((x1033/(x1034&x1035))%x1036);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x1038 = 416580290U;
	uint64_t t187 = 93258367015238568LLU;

    t187 = ((x1037/(x1038&x1039))%x1040);

    if (t187 != 37573199LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1041 = 22;
	uint32_t x1042 = 109221U;
	static int64_t x1043 = 2170544574833083LL;
	int8_t x1044 = INT8_MIN;
	volatile int64_t t188 = -4564LL;

    t188 = ((x1041/(x1042&x1043))%x1044);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x1045 = INT32_MAX;
	static int16_t x1046 = -116;
	int8_t x1047 = -1;
	uint64_t x1048 = 188970614LLU;
	uint64_t t189 = 6095474LLU;

    t189 = ((x1045/(x1046&x1047))%x1048);

    if (t189 != 39116392LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1052 = INT8_MIN;
	volatile int64_t t190 = 648487346209560404LL;

    t190 = ((x1049/(x1050&x1051))%x1052);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1053 = INT16_MIN;
	volatile uint64_t x1054 = 4234988715LLU;
	static volatile uint64_t x1055 = UINT64_MAX;
	int32_t x1056 = INT32_MIN;
	static uint64_t t191 = 167335487021LLU;

    t191 = ((x1053/(x1054&x1055))%x1056);

    if (t191 != 4355795331LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x1057 = 365430438LLU;
	int32_t x1058 = -257702134;
	int8_t x1060 = 1;
	uint64_t t192 = 34LLU;

    t192 = ((x1057/(x1058&x1059))%x1060);

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x1061 = 102U;
	uint64_t x1062 = 451652697993719536LLU;
	int32_t x1063 = -22077560;
	static int16_t x1064 = INT16_MAX;
	uint64_t t193 = 108977561761893467LLU;

    t193 = ((x1061/(x1062&x1063))%x1064);

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x1065 = INT64_MIN;
	int32_t x1067 = INT32_MIN;
	static int64_t t194 = -325339LL;

    t194 = ((x1065/(x1066&x1067))%x1068);

    if (t194 != 4LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1069 = INT64_MIN;
	static int8_t x1070 = INT8_MAX;
	static uint32_t x1071 = 7614460U;
	int32_t x1072 = INT32_MIN;

    t195 = ((x1069/(x1070&x1071))%x1072);

    if (t195 != -69273666LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1073 = INT16_MIN;
	static int64_t x1074 = INT64_MIN;
	volatile int64_t t196 = -672832916810LL;

    t196 = ((x1073/(x1074&x1075))%x1076);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1078 = -1;
	static uint32_t x1079 = UINT32_MAX;
	volatile int64_t x1080 = INT64_MAX;
	int64_t t197 = -264279LL;

    t197 = ((x1077/(x1078&x1079))%x1080);

    if (t197 != 1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1085 = 1LL;
	int64_t x1086 = INT64_MAX;
	volatile uint64_t x1087 = 19948LLU;
	static volatile uint64_t t198 = 177779383LLU;

    t198 = ((x1085/(x1086&x1087))%x1088);

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1089 = -54;
	uint64_t x1090 = 873375361590LLU;
	static int16_t x1092 = INT16_MIN;

    t199 = ((x1089/(x1090&x1091))%x1092);

    if (t199 != 341606371735362065LLU) { NG(); } else { ; }
	
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

